import os
import subprocess
import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext

class TestcaseRunnerGUI(tk.Tk):
    def __init__(self):
        super().__init__()

        self.title("Sankalak Python Compiler - Testcase Runner")
        self.geometry("800x600")

        # Paths relative to this script (src folder)
        self.project_root = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
        self.testcases_dir = os.path.join(self.project_root, "Testcases")
        self.executable_path = os.path.join(self.project_root, "src", "final_output")  # executable inside src

        # GUI widgets
        self.create_widgets()

        # Load testcase list
        self.load_testcases()

    def create_widgets(self):
        # Testcases list label
        ttk.Label(self, text="Available Testcases:").pack(anchor="w", padx=10, pady=(10,0))

        # Listbox for testcases with scrollbar
        frame = ttk.Frame(self)
        frame.pack(fill="x", padx=10)
        self.testcase_listbox = tk.Listbox(frame, height=15)
        self.testcase_listbox.pack(side="left", fill="x", expand=True)
        scrollbar = ttk.Scrollbar(frame, orient="vertical", command=self.testcase_listbox.yview)
        scrollbar.pack(side="right", fill="y")
        self.testcase_listbox.config(yscrollcommand=scrollbar.set)

        # Run button
        self.run_button = ttk.Button(self, text="Run Selected Testcase", command=self.run_selected_testcase)
        self.run_button.pack(pady=10)

        # Output label
        ttk.Label(self, text="Output:").pack(anchor="w", padx=10)

        # ScrolledText widget to show output
        self.output_text = scrolledtext.ScrolledText(self, height=20, state="disabled", font=("Consolas", 10))
        self.output_text.pack(fill="both", expand=True, padx=10, pady=(0,10))

    def load_testcases(self):
        # Clear listbox
        self.testcase_listbox.delete(0, tk.END)

        if not os.path.isdir(self.testcases_dir):
            messagebox.showerror("Error", f"Testcases directory not found:\n{self.testcases_dir}")
            return

        # List all files (filter .py or all files)
        files = [f for f in os.listdir(self.testcases_dir) if os.path.isfile(os.path.join(self.testcases_dir, f))]
        if not files:
            messagebox.showinfo("Info", "No testcases found in Testcases folder.")
            return

        # Insert into listbox
        for f in sorted(files):
            self.testcase_listbox.insert(tk.END, f)

    def run_selected_testcase(self):
        # Get selected testcase
        selected = self.testcase_listbox.curselection()
        if not selected:
            messagebox.showwarning("Warning", "Please select a testcase to run.")
            return
        testcase_file = self.testcase_listbox.get(selected[0])

        # Compose full Windows path for testcase
        testcase_path_win = os.path.join(self.testcases_dir, testcase_file)

        # Convert Windows path to WSL path (e.g. C:\Users -> /mnt/c/Users)
        testcase_path_wsl = self.windows_to_wsl_path(testcase_path_win)

        # Convert executable path to WSL
        executable_path_wsl = self.windows_to_wsl_path(self.executable_path)

        # Compose WSL command to run your compiler on testcase
        cmd = f"{executable_path_wsl} {testcase_path_wsl}"

        self.append_output(f"Running:\n{cmd}\n\n")

        try:
            # Run the command inside WSL
            result = subprocess.run(["wsl", executable_path_wsl, testcase_path_wsl],
                                    capture_output=True, text=True, check=True)

            # Display output
            self.append_output("=== STDOUT ===\n")
            self.append_output(result.stdout)
            self.append_output("\n=== STDERR ===\n")
            self.append_output(result.stderr)

        except subprocess.CalledProcessError as e:
            self.append_output(f"\nExecution failed with return code {e.returncode}\n")
            self.append_output(e.output if e.output else "")
            self.append_output(e.stderr if e.stderr else "")
            messagebox.showerror("Execution Error", f"Failed to run testcase.\nReturn code: {e.returncode}")

    def windows_to_wsl_path(self, win_path):
        # Example: C:\Users\uttka -> /mnt/c/Users/uttka
        win_path = os.path.abspath(win_path)
        drive = win_path[0].lower()
        rest = win_path[2:].replace("\\", "/")
        wsl_path = f"/mnt/{drive}/{rest}"
        return wsl_path

    def append_output(self, text):
        self.output_text.config(state="normal")
        self.output_text.insert(tk.END, text)
        self.output_text.see(tk.END)
        self.output_text.config(state="disabled")


if __name__ == "__main__":
    app = TestcaseRunnerGUI()
    app.mainloop()
