.section .data
format:
	 .string "%d\n" 
str_0:
	 .string "printing using printers\n"

str_1:
	 .string "printing using getters\n"

str_2:
	 .string "obj\n"

str_3:
	 .string "using setters to change values\n"

str_4:
	 .string "new_obj\n"

.section .text
	# Instruction number: 0

.globl A
.type A, @function
A: 
	
	# Instruction number: 1

.globl A___init__
.type A___init__, @function
A___init__: 
	
	# Instruction number: 2
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 3
	# 3AC: t_0 | = self | [obj] | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 4
	# 3AC: t_1 | = self | + | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 5
	# 3AC: t_1 | assign_to_memory | y
	movq %rdx, %rcx
	movl 24(%rbp), %r8d
	movl %r8d, (%rcx)
	
	# Instruction number: 6
	# 3AC: t_2 | = self | [obj] | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 7
	# 3AC: t_3 | = self | + | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 8
	# 3AC: t_3 | assign_to_memory | z
	movq %rdx, %rcx
	movl 28(%rbp), %r8d
	movl %r8d, (%rcx)
	
	# Instruction number: 9
	# 3AC: t_4 | = self | [obj] | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq (%rcx), %rdx
	
	# Instruction number: 10
	# 3AC: t_5 | = self | + | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 11
	# 3AC: t_5 | assign_to_memory | name
	movq %rdx, %rcx
	movq 32(%rbp), %r8
	movq %r8, (%rcx)
	
	# Instruction number: 12
	# 3AC: L_func_end___init___A | L_func_end___init___A | 0
.L_func_end___init___A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 13

.globl A_set_y
.type A_set_y, @function
A_set_y: 
	
	# Instruction number: 14
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 15
	# 3AC: t_6 | = self | [obj] | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 16
	# 3AC: t_7 | = self | + | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 17
	# 3AC: t_7 | assign_to_memory | y
	movq %rdx, %rcx
	movl 24(%rbp), %r8d
	movl %r8d, (%rcx)
	
	# Instruction number: 18
	# 3AC: L_func_end_set_y_A | L_func_end_set_y_A | 0
.L_func_end_set_y_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 19

.globl A_set_z
.type A_set_z, @function
A_set_z: 
	
	# Instruction number: 20
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 21
	# 3AC: t_8 | = self | [obj] | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 22
	# 3AC: t_9 | = self | + | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 23
	# 3AC: t_9 | assign_to_memory | z
	movq %rdx, %rcx
	movl 24(%rbp), %r8d
	movl %r8d, (%rcx)
	
	# Instruction number: 24
	# 3AC: L_func_end_set_z_A | L_func_end_set_z_A | 0
.L_func_end_set_z_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 25

.globl A_set_name
.type A_set_name, @function
A_set_name: 
	
	# Instruction number: 26
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 27
	# 3AC: t_10 | = self | [obj] | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq (%rcx), %rdx
	
	# Instruction number: 28
	# 3AC: t_11 | = self | + | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq %rcx, %rdx
	
	# Instruction number: 29
	# 3AC: t_11 | assign_to_memory | name
	movq %rdx, %rcx
	movq 24(%rbp), %r8
	movq %r8, (%rcx)
	
	# Instruction number: 30
	# 3AC: L_func_end_set_name_A | L_func_end_set_name_A | 0
.L_func_end_set_name_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 31

.globl A_get_y
.type A_get_y, @function
A_get_y: 
	
	# Instruction number: 32
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 33
	# 3AC: t_12 | = self | [obj] | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 34
	# 3AC: t_13 | = self | + | 0
	movq 16(%rbp), %r8
	addq $0, %r8
	movq %r8, %rcx
	
	# Instruction number: 35
	# 3AC: return_value | t_12
	movl %edx,%eax
	
	# Instruction number: 36
	# 3AC: Goto | L_func_end_get_y_A
	jmp .L_func_end_get_y_A
	
	# Instruction number: 37
	# 3AC: L_func_end_get_y_A | L_func_end_get_y_A | 0
.L_func_end_get_y_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 38

.globl A_get_z
.type A_get_z, @function
A_get_z: 
	
	# Instruction number: 39
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 40
	# 3AC: t_14 | = self | [obj] | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 41
	# 3AC: t_15 | = self | + | 4
	movq 16(%rbp), %r8
	addq $4, %r8
	movq %r8, %rcx
	
	# Instruction number: 42
	# 3AC: return_value | t_14
	movl %edx,%eax
	
	# Instruction number: 43
	# 3AC: Goto | L_func_end_get_z_A
	jmp .L_func_end_get_z_A
	
	# Instruction number: 44
	# 3AC: L_func_end_get_z_A | L_func_end_get_z_A | 0
.L_func_end_get_z_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 45

.globl A_get_name
.type A_get_name, @function
A_get_name: 
	
	# Instruction number: 46
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 47
	# 3AC: t_16 | = self | [obj] | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq (%rcx), %rdx
	
	# Instruction number: 48
	# 3AC: t_17 | = self | + | 8
	movq 16(%rbp), %r8
	addq $8, %r8
	movq %r8, %rcx
	
	# Instruction number: 49
	# 3AC: return_value | t_16
	movq %rdx, %rax
	
	# Instruction number: 50
	# 3AC: Goto | L_func_end_get_name_A
	jmp .L_func_end_get_name_A
	
	# Instruction number: 51
	# 3AC: L_func_end_get_name_A | L_func_end_get_name_A | 0
.L_func_end_get_name_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 52

.globl A_print_y
.type A_print_y, @function
A_print_y: 
	
	# Instruction number: 53
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 54
	# 3AC: t_18 | = self | [obj] | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 55
	# 3AC: t_19 | = self | + | 0
	movq 16(%rbp), %r8
	addq $0, %r8
	movq %r8, %rcx
	
	# Instruction number: 56
	# 3AC: push_param | t_18
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movl %edx, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 57
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 58
	# 3AC: L_func_end_print_y_A | L_func_end_print_y_A | 0
.L_func_end_print_y_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 59

.globl A_print_z
.type A_print_z, @function
A_print_z: 
	
	# Instruction number: 60
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 61
	# 3AC: t_20 | = self | [obj] | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 62
	# 3AC: t_21 | = self | + | 4
	movq 16(%rbp), %r8
	addq $4, %r8
	movq %r8, %rcx
	
	# Instruction number: 63
	# 3AC: push_param | t_20
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movl %edx, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 64
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 65
	# 3AC: L_func_end_print_z_A | L_func_end_print_z_A | 0
.L_func_end_print_z_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 66

.globl A_print_name
.type A_print_name, @function
A_print_name: 
	
	# Instruction number: 67
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 68
	# 3AC: t_22 | = self | [obj] | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq (%rcx), %rdx
	
	# Instruction number: 69
	# 3AC: t_23 | = self | + | 8
	movq 16(%rbp), %r8
	addq $8, %r8
	movq %r8, %rcx
	
	# Instruction number: 70
	# 3AC: push_param | t_22
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq %rdx, %rdi 
	movl $0, %eax
	# Instruction number: 71
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 72
	# 3AC: L_func_end_print_name_A | L_func_end_print_name_A | 0
.L_func_end_print_name_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 73

.globl A_print_all
.type A_print_all, @function
A_print_all: 
	
	# Instruction number: 74
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 75
	# 3AC: t_24 | = self | [obj] | 0
	movq 16(%rbp), %rcx
	addq $0, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 76
	# 3AC: t_25 | = self | + | 0
	movq 16(%rbp), %r8
	addq $0, %r8
	movq %r8, %rcx
	
	# Instruction number: 77
	# 3AC: push_param | t_24
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movl %edx, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 78
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 79
	# 3AC: t_26 | = self | [obj] | 4
	movq 16(%rbp), %rcx
	addq $4, %rcx
	movl (%rcx), %edx
	
	# Instruction number: 80
	# 3AC: t_27 | = self | + | 4
	movq 16(%rbp), %r8
	addq $4, %r8
	movq %r8, %rcx
	
	# Instruction number: 81
	# 3AC: push_param | t_26
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movl %edx, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 82
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 83
	# 3AC: t_28 | = self | [obj] | 8
	movq 16(%rbp), %rcx
	addq $8, %rcx
	movq (%rcx), %rdx
	
	# Instruction number: 84
	# 3AC: t_29 | = self | + | 8
	movq 16(%rbp), %r8
	addq $8, %r8
	movq %r8, %rcx
	
	# Instruction number: 85
	# 3AC: push_param | t_28
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq %rdx, %rdi 
	movl $0, %eax
	# Instruction number: 86
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 87
	# 3AC: L_func_end_print_all_A | L_func_end_print_all_A | 0
.L_func_end_print_all_A: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 88

.globl print_obj
.type print_obj, @function
print_obj: 
	
	# Instruction number: 89
	# 3AC: L_begin_func | L_begin_func | 16
	pushq %rbp
	movq %rsp, %rbp
	subq $16, %rsp
	
	# Instruction number: 90
	# 3AC: t_30 | str_alloc | "printing using printers\n"
	lea str_0(%rip), %rdx
	
	# Instruction number: 91
	# 3AC: push_param | t_30
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq %rdx, %rdi 
	movl $0, %eax
	# Instruction number: 92
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 93
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 94
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 95
	# 3AC: call | A_print_y
	call A_print_y
	
	# Instruction number: 96
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 97
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 98
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 99
	# 3AC: call | A_print_z
	call A_print_z
	
	# Instruction number: 100
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 101
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 102
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 103
	# 3AC: call | A_print_name
	call A_print_name
	
	# Instruction number: 104
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 105
	# 3AC: t_31 | str_alloc | "printing using getters\n"
	lea str_1(%rip), %rdx
	
	# Instruction number: 106
	# 3AC: push_param | t_31
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq %rdx, %rdi 
	movl $0, %eax
	# Instruction number: 107
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 108
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 109
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 110
	# 3AC: call | A_get_y
	call A_get_y
	
	# Instruction number: 111
	movl %eax, %edx
	
	# Instruction number: 112
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 113
	# 3AC: y | = | t_32
	movl %edx, %ecx
	movl %ecx, -4(%rbp)
	
	# Instruction number: 114
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 115
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 116
	# 3AC: call | A_get_z
	call A_get_z
	
	# Instruction number: 117
	movl %eax, %edx
	
	# Instruction number: 118
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 119
	# 3AC: z | = | t_33
	movl %edx, %ecx
	movl %ecx, -8(%rbp)
	
	# Instruction number: 120
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 121
	# 3AC: push_param | obj
	movq 16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 122
	# 3AC: call | A_get_name
	call A_get_name
	
	# Instruction number: 123
	movq %rax, %rdx
	
	# Instruction number: 124
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 125
	# 3AC: name | = | t_34
	movq %rdx, %rcx
	movq %rcx, -16(%rbp)
	
	# Instruction number: 126
	# 3AC: push_param | y
	movl -4(%rbp), %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 127
	# 3AC: call | print
	call printf
	
	# Instruction number: 128
	# 3AC: push_param | z
	movl -8(%rbp), %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 129
	# 3AC: call | print
	call printf
	
	# Instruction number: 130
	# 3AC: push_param | name
	movq -16(%rbp), %rdi 
	movl $0, %eax
	# Instruction number: 131
	# 3AC: call | print
	call printf
	
	# Instruction number: 132
	# 3AC: L_func_end_print_obj | L_func_end_print_obj | 16
.L_func_end_print_obj: 
	addq $16, %rsp
	popq %rbp
	ret
	
	# Instruction number: 133

.globl main
.type main, @function
main: 
	
	# Instruction number: 134
	# 3AC: L_begin_func | L_begin_func | 24
	pushq %rbp
	movq %rsp, %rbp
	subq $32, %rsp
	
	# Instruction number: 135
	# 3AC: t_35 | str_alloc | "obj\n"
	lea str_2(%rip), %rdx
	
	# Instruction number: 136
	# 3AC: obj | mem_alloc | 16
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq $16, %rdi
	call malloc 
	movq %rax, -24(%rbp)
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 137
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 138
	# 3AC: push_param | t_35
	movq %rdx, %rcx
	subq $8, %rsp
	movq %rcx, (%rsp)
	
	# Instruction number: 139
	# 3AC: push_param | 1
	movl $1, %edx
	subq $4, %rsp
	movl %edx, (%rsp)
	
	# Instruction number: 140
	# 3AC: push_param | 6
	movl $6, %edx
	subq $4, %rsp
	movl %edx, (%rsp)
	
	# Instruction number: 141
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 142
	# 3AC: call | A___init__
	call A___init__
	
	# Instruction number: 143
	# 3AC: increment_rsp | 32
	addq $32, %rsp
	
	# Instruction number: 144
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 145
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 146
	# 3AC: call | print_obj
	call print_obj
	
	# Instruction number: 147
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 148
	# 3AC: t_36 | str_alloc | "using setters to change values\n"
	lea str_3(%rip), %rdx
	
	# Instruction number: 149
	# 3AC: push_param | t_36
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	movq %rdx, %rdi 
	movl $0, %eax
	# Instruction number: 150
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 151
	# 3AC: y | = | 60
	movl $60, %edx
	movl %edx, -4(%rbp)
	
	# Instruction number: 152
	# 3AC: z | = | 0
	movl $0, %edx
	movl %edx, -8(%rbp)
	
	# Instruction number: 153
	# 3AC: t_37 | str_alloc | "new_obj\n"
	lea str_4(%rip), %rdx
	
	# Instruction number: 154
	# 3AC: name | = | t_37
	movq %rdx, %rcx
	movq %rcx, -16(%rbp)
	
	# Instruction number: 155
	# 3AC: increment_rsp | -4
	addq $-4, %rsp
	
	# Instruction number: 156
	# 3AC: push_param | y
	movl -4(%rbp), %edx
	subq $4, %rsp
	movl %edx, (%rsp)
	
	# Instruction number: 157
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 158
	# 3AC: call | A_set_y
	call A_set_y
	
	# Instruction number: 159
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 160
	# 3AC: increment_rsp | -4
	addq $-4, %rsp
	
	# Instruction number: 161
	# 3AC: push_param | z
	movl -8(%rbp), %edx
	subq $4, %rsp
	movl %edx, (%rsp)
	
	# Instruction number: 162
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 163
	# 3AC: call | A_set_z
	call A_set_z
	
	# Instruction number: 164
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 165
	# 3AC: push_param | name
	movq -16(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 166
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 167
	# 3AC: call | A_set_name
	call A_set_name
	
	# Instruction number: 168
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 169
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 170
	# 3AC: push_param | obj
	movq -24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 171
	# 3AC: call | print_obj
	call print_obj
	
	# Instruction number: 172
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 173
	# 3AC: L_func_end_main | L_func_end_main | 24
.L_func_end_main: 
	addq $32, %rsp
	popq %rbp
	ret
	
	

len:
	pushq %rbp
	movq %rsp, %rbp
	movq 16(%rbp), %rax
	movl (%rax), %eax
	popq %rbp
	ret


