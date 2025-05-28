.section .data
format:
	 .string "%d\n" 
.section .text
	# Instruction number: 0

.globl ListOperations
.type ListOperations, @function
ListOperations: 
	
	# Instruction number: 1

.globl ListOperations___init__
.type ListOperations___init__, @function
ListOperations___init__: 
	
	# Instruction number: 2
	# 3AC: L_begin_func | L_begin_func | 0
	pushq %rbp
	movq %rsp, %rbp
	subq $0, %rsp
	
	# Instruction number: 3
	# 3AC: Goto | L_func_end___init___ListOperations
	jmp .L_func_end___init___ListOperations
	
	# Instruction number: 4
	# 3AC: L_func_end___init___ListOperations | L_func_end___init___ListOperations | 0
.L_func_end___init___ListOperations: 
	addq $0, %rsp
	popq %rbp
	ret
	
	# Instruction number: 5

.globl ListOperations_is_palindrome
.type ListOperations_is_palindrome, @function
ListOperations_is_palindrome: 
	
	# Instruction number: 6
	# 3AC: L_begin_func | L_begin_func | 4
	pushq %rbp
	movq %rsp, %rbp
	subq $16, %rsp
	
	# Instruction number: 7
	# 3AC: i | = | 0
	movl $0, %edx
	movl %edx, -4(%rbp)
	
	# Instruction number: 8
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 9
	# 3AC: push_param | data
	movq 24(%rbp), %rdx
	subq $8, %rsp
	movq %rdx, (%rsp)
	
	# Instruction number: 10
	# 3AC: call | len
	call len
	
	# Instruction number: 11
	movl %eax, %edx
	
	# Instruction number: 12
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 13
.L_3: 
	
	# Instruction number: 14
	# 3AC: i | = | 0
	movl $0, %ecx
	movl %ecx, -4(%rbp)
	
	# Instruction number: 15
	# 3AC: t_7 | = i | < | t_0
	movl $0, %eax         #making zero just in case
	movl -4(%rbp), %eax
	cmpl %edx, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %ecx
	
	# Instruction number: 16
	# 3AC: L_6 | ifZ | t_7
	movl %ecx, %r8d
	cmpl $0, %r8d
	je .L_6
	
	# Instruction number: 17
.L_4: 
	
	# Instruction number: 18
.L_1: 
	
	# Instruction number: 19
	# 3AC: t_1 | = data | [] | i
	movq 24(%rbp), %r8
	movl -4(%rbp), %r9d
	imul $4, %r9d
	addq %r9, %r8
	addq $4, %r8      # 4 bytes for len
	movl (%r8), %r8d
	movl %r8d, %ecx
	
	# Instruction number: 20
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 21
	# 3AC: push_param | data
	movq 24(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 22
	# 3AC: call | len
	call len
	
	# Instruction number: 23
	movl %eax, %r8d
	
	# Instruction number: 24
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 25
	# 3AC: t_3 | = t_2 | - | 1
	movl %r8d, %ebx
	subl $1, %ebx
	movl %ebx, %r9d
	
	# Instruction number: 26
	# 3AC: t_4 | = t_3 | - | i
	movl %r9d, %ebx
	subl -4(%rbp), %ebx
	movl %ebx, %r8d
	
	# Instruction number: 27
	# 3AC: t_5 | = data | [] | t_4
	movq 24(%rbp), %rbx
	movl %r8d, %r12d
	imul $4, %r12d
	addq %r12, %rbx
	addq $4, %rbx      # 4 bytes for len
	movl (%rbx), %ebx
	movl %ebx, %r9d
	
	# Instruction number: 28
	# 3AC: t_6 | = t_1 | != | t_5
	movl $0, %eax         #making zero just in case
	movl %ecx, %eax
	cmpl %r9d, %eax
	setne %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 29
	# 3AC: L_2 | ifZ | t_6
	movl %r8d, %ecx
	cmpl $0, %ecx
	je .L_2
	
	# Instruction number: 30
.L_0: 
	
	# Instruction number: 31
	# 3AC: return_value | 0
	movl $0,%eax
	
	# Instruction number: 32
	# 3AC: Goto | L_func_end_is_palindrome_ListOperations
	jmp .L_func_end_is_palindrome_ListOperations
	
	# Instruction number: 33
	# 3AC: Goto | L_2
	jmp .L_2
	
	# Instruction number: 34
.L_2: 
	
	# Instruction number: 35
.L_5: 
	
	# Instruction number: 36
	# 3AC: i | = i | + | 1
	movl -4(%rbp), %ecx
	addl $1, %ecx
	movl %ecx, -4(%rbp)
	
	# Instruction number: 37
	# 3AC: t_7 | = i | < | t_0
	movl $0, %eax         #making zero just in case
	movl -4(%rbp), %eax
	cmpl %edx, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %ecx
	
	# Instruction number: 38
	# 3AC: L_6 | ifZ | t_7
	movl %ecx, %r8d
	cmpl $0, %r8d
	je .L_6
	
	# Instruction number: 39
	# 3AC: Goto | L_4
	jmp .L_4
	
	# Instruction number: 40
.L_6: 
	
	# Instruction number: 41
	# 3AC: return_value | 1
	movl $1,%eax
	
	# Instruction number: 42
	# 3AC: Goto | L_func_end_is_palindrome_ListOperations
	jmp .L_func_end_is_palindrome_ListOperations
	
	# Instruction number: 43
	# 3AC: L_func_end_is_palindrome_ListOperations | L_func_end_is_palindrome_ListOperations | 4
.L_func_end_is_palindrome_ListOperations: 
	addq $16, %rsp
	popq %rbp
	ret
	
	# Instruction number: 44

.globl ListOperations_find_max
.type ListOperations_find_max, @function
ListOperations_find_max: 
	
	# Instruction number: 45
	# 3AC: L_begin_func | L_begin_func | 8
	pushq %rbp
	movq %rsp, %rbp
	subq $16, %rsp
	
	# Instruction number: 46
.L_8: 
	
	# Instruction number: 47
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 48
	# 3AC: push_param | nums
	movq 24(%rbp), %rcx
	subq $8, %rsp
	movq %rcx, (%rsp)
	
	# Instruction number: 49
	# 3AC: call | len
	call len
	
	# Instruction number: 50
	movl %eax, %ecx
	
	# Instruction number: 51
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 52
	# 3AC: t_9 | = t_8 | == | 0
	movl $0, %eax         #making zero just in case
	movl %ecx, %eax
	cmpl $0, %eax
	sete %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 53
	# 3AC: L_9 | ifZ | t_9
	movl %r8d, %ecx
	cmpl $0, %ecx
	je .L_9
	
	# Instruction number: 54
.L_7: 
	
	# Instruction number: 55
	# 3AC: return_value | 0
	movl $0,%eax
	
	# Instruction number: 56
	# 3AC: Goto | L_func_end_find_max_ListOperations
	jmp .L_func_end_find_max_ListOperations
	
	# Instruction number: 57
	# 3AC: Goto | L_9
	jmp .L_9
	
	# Instruction number: 58
.L_9: 
	
	# Instruction number: 59
	# 3AC: t_10 | = nums | [] | 0
	movq 24(%rbp), %r8
	movl $0, %r9d
	imul $4, %r9d
	addq %r9, %r8
	addq $4, %r8      # 4 bytes for len
	movl (%r8), %r8d
	movl %r8d, %ecx
	
	# Instruction number: 60
	# 3AC: max_val | = | t_10
	movl %ecx, %r8d
	movl %r8d, -4(%rbp)
	
	# Instruction number: 61
	# 3AC: i | = | 0
	movl $0, %ecx
	movl %ecx, -8(%rbp)
	
	# Instruction number: 62
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 63
	# 3AC: push_param | nums
	movq 24(%rbp), %rcx
	subq $8, %rsp
	movq %rcx, (%rsp)
	
	# Instruction number: 64
	# 3AC: call | len
	call len
	
	# Instruction number: 65
	movl %eax, %ecx
	
	# Instruction number: 66
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 67
.L_13: 
	
	# Instruction number: 68
	# 3AC: i | = | 0
	movl $0, %r8d
	movl %r8d, -8(%rbp)
	
	# Instruction number: 69
	# 3AC: t_15 | = i | < | t_11
	movl $0, %eax         #making zero just in case
	movl -8(%rbp), %eax
	cmpl %ecx, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 70
	# 3AC: L_16 | ifZ | t_15
	movl %r8d, %r9d
	cmpl $0, %r9d
	je .L_16
	
	# Instruction number: 71
.L_14: 
	
	# Instruction number: 72
.L_11: 
	
	# Instruction number: 73
	# 3AC: t_12 | = nums | [] | i
	movq 24(%rbp), %r9
	movl -8(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 74
	# 3AC: t_13 | = t_12 | > | max_val
	movl $0, %eax         #making zero just in case
	movl %r8d, %eax
	cmpl -4(%rbp), %eax
	setg %al
	movzbl %al, %eax
	movl %eax, %r9d
	
	# Instruction number: 75
	# 3AC: L_12 | ifZ | t_13
	movl %r9d, %r8d
	cmpl $0, %r8d
	je .L_12
	
	# Instruction number: 76
.L_10: 
	
	# Instruction number: 77
	# 3AC: t_14 | = nums | [] | i
	movq 24(%rbp), %r9
	movl -8(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 78
	# 3AC: max_val | = | t_14
	movl %r8d, %r9d
	movl %r9d, -4(%rbp)
	
	# Instruction number: 79
	# 3AC: Goto | L_12
	jmp .L_12
	
	# Instruction number: 80
.L_12: 
	
	# Instruction number: 81
.L_15: 
	
	# Instruction number: 82
	# 3AC: i | = i | + | 1
	movl -8(%rbp), %r8d
	addl $1, %r8d
	movl %r8d, -8(%rbp)
	
	# Instruction number: 83
	# 3AC: t_15 | = i | < | t_11
	movl $0, %eax         #making zero just in case
	movl -8(%rbp), %eax
	cmpl %ecx, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 84
	# 3AC: L_16 | ifZ | t_15
	movl %r8d, %r9d
	cmpl $0, %r9d
	je .L_16
	
	# Instruction number: 85
	# 3AC: Goto | L_14
	jmp .L_14
	
	# Instruction number: 86
.L_16: 
	
	# Instruction number: 87
	# 3AC: return_value | max_val
	movl -4(%rbp),%eax
	
	# Instruction number: 88
	# 3AC: Goto | L_func_end_find_max_ListOperations
	jmp .L_func_end_find_max_ListOperations
	
	# Instruction number: 89
	# 3AC: L_func_end_find_max_ListOperations | L_func_end_find_max_ListOperations | 8
.L_func_end_find_max_ListOperations: 
	addq $16, %rsp
	popq %rbp
	ret
	
	# Instruction number: 90

.globl ListOperations_reverse_list
.type ListOperations_reverse_list, @function
ListOperations_reverse_list: 
	
	# Instruction number: 91
	# 3AC: L_begin_func | L_begin_func | 12
	pushq %rbp
	movq %rsp, %rbp
	subq $16, %rsp
	
	# Instruction number: 92
	# 3AC: i | = | 0
	movl $0, %r8d
	movl %r8d, -4(%rbp)
	
	# Instruction number: 93
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 94
	# 3AC: push_param | items
	movq 24(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 95
	# 3AC: call | len
	call len
	
	# Instruction number: 96
	movl %eax, %r8d
	
	# Instruction number: 97
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 98
	# 3AC: t_17 | = t_16 | - | 1
	movl %r8d, %ebx
	subl $1, %ebx
	movl %ebx, %r9d
	
	# Instruction number: 99
	# 3AC: j | = | t_17
	movl %r9d, %r8d
	movl %r8d, -8(%rbp)
	
	# Instruction number: 100
.L_17: 
	
	# Instruction number: 101
	# 3AC: t_18 | = i | < | j
	movl $0, %eax         #making zero just in case
	movl -4(%rbp), %eax
	cmpl -8(%rbp), %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 102
	# 3AC: L_19 | ifZ | t_18
	movl %r8d, %r9d
	cmpl $0, %r9d
	je .L_19
	
	# Instruction number: 103
.L_18: 
	
	# Instruction number: 104
	# 3AC: t_19 | = items | [] | i
	movq 24(%rbp), %r9
	movl -4(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 105
	# 3AC: temp | = | t_19
	movl %r8d, %r9d
	movl %r9d, -12(%rbp)
	
	# Instruction number: 106
	# 3AC: t_20 | = items | [] | i
	movq 24(%rbp), %r9
	movl -4(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 107
	# 3AC: t_21 | = items | [] | j
	movq 24(%rbp), %r9
	movl -8(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 108
	# 3AC: items | = t_21 | mem_assign | i
	movq 24(%rbp), %r9
	movl -4(%rbp), %r12d
	imul $4, %r12d
	addq %r12, %r9
	addq $4, %r9           # 4byte for length of list
	movl %r8d, %ebx
	movl %ebx, (%r9)
	
	# Instruction number: 109
	# 3AC: t_22 | = items | [] | j
	movq 24(%rbp), %r9
	movl -8(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 110
	# 3AC: items | = temp | mem_assign | j
	movq 24(%rbp), %r8
	movl -8(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r8
	addq $4, %r8           # 4byte for length of list
	movl -12(%rbp), %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 111
	# 3AC: i | = i | + | 1
	movl -4(%rbp), %r8d
	addl $1, %r8d
	movl %r8d, -4(%rbp)
	
	# Instruction number: 112
	# 3AC: j | = j | - | 1
	movl -8(%rbp), %r8d
	subl $1, %r8d
	movl %r8d, -8(%rbp)
	
	# Instruction number: 113
	# 3AC: Goto | L_17
	jmp .L_17
	
	# Instruction number: 114
.L_19: 
	
	# Instruction number: 115
	# 3AC: return_value | items
	movq 24(%rbp), %rax
	
	# Instruction number: 116
	# 3AC: Goto | L_func_end_reverse_list_ListOperations
	jmp .L_func_end_reverse_list_ListOperations
	
	# Instruction number: 117
	# 3AC: L_func_end_reverse_list_ListOperations | L_func_end_reverse_list_ListOperations | 12
.L_func_end_reverse_list_ListOperations: 
	addq $16, %rsp
	popq %rbp
	ret
	
	# Instruction number: 118

.globl main
.type main, @function
main: 
	
	# Instruction number: 119
	# 3AC: L_begin_func | L_begin_func | 48
	pushq %rbp
	movq %rsp, %rbp
	subq $48, %rsp
	
	# Instruction number: 120
	# 3AC: checker | mem_alloc | 0
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	movq $0, %rdi
	call malloc 
	movq %rax, -8(%rbp)
	#   popping caller saved reg 
	popq %rcx
	popq %rdx
	
	# Instruction number: 121
	# 3AC: increment_rsp | -8
	addq $-8, %rsp
	
	# Instruction number: 122
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 123
	# 3AC: call | ListOperations___init__
	call ListOperations___init__
	
	# Instruction number: 124
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 125
	# 3AC: a | mem_alloc | 24
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	movq $24, %rdi
	call malloc 
	movq %rax, -16(%rbp)
	#   popping caller saved reg 
	popq %rcx
	popq %rdx
	
	# Instruction number: 126
	# 3AC: a | = 5 | mem_assign | list_len
	movq -16(%rbp), %r8
	addq $0, %r8
	movl $5, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 127
	# 3AC: a | = 1 | mem_assign | 0
	movq -16(%rbp), %r8
	addq $4, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 128
	# 3AC: a | = 2 | mem_assign | 1
	movq -16(%rbp), %r8
	addq $8, %r8
	movl $2, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 129
	# 3AC: a | = 3 | mem_assign | 2
	movq -16(%rbp), %r8
	addq $12, %r8
	movl $3, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 130
	# 3AC: a | = 2 | mem_assign | 3
	movq -16(%rbp), %r8
	addq $16, %r8
	movl $2, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 131
	# 3AC: a | = 1 | mem_assign | 4
	movq -16(%rbp), %r8
	addq $20, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 132
	# 3AC: b | mem_alloc | 24
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	movq $24, %rdi
	call malloc 
	movq %rax, -24(%rbp)
	#   popping caller saved reg 
	popq %rcx
	popq %rdx
	
	# Instruction number: 133
	# 3AC: b | = 5 | mem_assign | list_len
	movq -24(%rbp), %r8
	addq $0, %r8
	movl $5, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 134
	# 3AC: b | = 1 | mem_assign | 0
	movq -24(%rbp), %r8
	addq $4, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 135
	# 3AC: b | = 1 | mem_assign | 1
	movq -24(%rbp), %r8
	addq $8, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 136
	# 3AC: b | = 1 | mem_assign | 2
	movq -24(%rbp), %r8
	addq $12, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 137
	# 3AC: b | = 2 | mem_assign | 3
	movq -24(%rbp), %r8
	addq $16, %r8
	movl $2, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 138
	# 3AC: b | = 1 | mem_assign | 4
	movq -24(%rbp), %r8
	addq $20, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 139
	# 3AC: push_param | a
	movq -16(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 140
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 141
	# 3AC: call | ListOperations_is_palindrome
	call ListOperations_is_palindrome
	
	# Instruction number: 142
	movl %eax, %r8d
	
	# Instruction number: 143
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 144
	# 3AC: c | = | t_23
	movl %r8d, %r9d
	movl %r9d, -28(%rbp)
	
	# Instruction number: 145
	# 3AC: push_param | b
	movq -24(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 146
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 147
	# 3AC: call | ListOperations_is_palindrome
	call ListOperations_is_palindrome
	
	# Instruction number: 148
	movl %eax, %r8d
	
	# Instruction number: 149
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 150
	# 3AC: d | = | t_24
	movl %r8d, %r9d
	movl %r9d, -32(%rbp)
	
	# Instruction number: 151
	# 3AC: push_param | a
	movq -16(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 152
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 153
	# 3AC: call | ListOperations_is_palindrome
	call ListOperations_is_palindrome
	
	# Instruction number: 154
	movl %eax, %r8d
	
	# Instruction number: 155
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 156
	# 3AC: push_param | t_25
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	pushq %r8
	movl %r8d, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 157
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %r8
	popq %rcx
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 158
	# 3AC: push_param | b
	movq -24(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 159
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 160
	# 3AC: call | ListOperations_is_palindrome
	call ListOperations_is_palindrome
	
	# Instruction number: 161
	movl %eax, %r8d
	
	# Instruction number: 162
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 163
	# 3AC: push_param | t_26
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	pushq %r8
	movl %r8d, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 164
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %r8
	popq %rcx
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 165
	# 3AC: items | mem_alloc | 24
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	movq $24, %rdi
	call malloc 
	movq %rax, -40(%rbp)
	#   popping caller saved reg 
	popq %rcx
	popq %rdx
	
	# Instruction number: 166
	# 3AC: items | = 5 | mem_assign | list_len
	movq -40(%rbp), %r8
	addq $0, %r8
	movl $5, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 167
	# 3AC: items | = 5 | mem_assign | 0
	movq -40(%rbp), %r8
	addq $4, %r8
	movl $5, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 168
	# 3AC: items | = 2 | mem_assign | 1
	movq -40(%rbp), %r8
	addq $8, %r8
	movl $2, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 169
	# 3AC: items | = 8 | mem_assign | 2
	movq -40(%rbp), %r8
	addq $12, %r8
	movl $8, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 170
	# 3AC: items | = 1 | mem_assign | 3
	movq -40(%rbp), %r8
	addq $16, %r8
	movl $1, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 171
	# 3AC: items | = 9 | mem_assign | 4
	movq -40(%rbp), %r8
	addq $20, %r8
	movl $9, %r9d
	movl %r9d, (%r8)
	
	# Instruction number: 172
	# 3AC: push_param | items
	movq -40(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 173
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 174
	# 3AC: call | ListOperations_find_max
	call ListOperations_find_max
	
	# Instruction number: 175
	movl %eax, %r8d
	
	# Instruction number: 176
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 177
	# 3AC: answer | = | t_27
	movl %r8d, %r9d
	movl %r9d, -44(%rbp)
	
	# Instruction number: 178
	# 3AC: push_param | answer
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	movl -44(%rbp), %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 179
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %rcx
	popq %rdx
	
	# Instruction number: 180
	# 3AC: push_param | items
	movq -40(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 181
	# 3AC: push_param | checker
	movq -8(%rbp), %r8
	subq $8, %rsp
	movq %r8, (%rsp)
	
	# Instruction number: 182
	# 3AC: call | ListOperations_reverse_list
	call ListOperations_reverse_list
	
	# Instruction number: 183
	movq %rax, %r8
	
	# Instruction number: 184
	# 3AC: increment_rsp | 16
	addq $16, %rsp
	
	# Instruction number: 185
	# 3AC: items | = | t_28
	movq %r8, %r9
	movq %r9, -40(%rbp)
	
	# Instruction number: 186
	# 3AC: i | = | 0
	movl $0, %r8d
	movl %r8d, -48(%rbp)
	
	# Instruction number: 187
.L_20: 
	
	# Instruction number: 188
	# 3AC: i | = | 0
	movl $0, %r8d
	movl %r8d, -48(%rbp)
	
	# Instruction number: 189
	# 3AC: t_30 | = i | < | 5
	movl $0, %eax         #making zero just in case
	movl -48(%rbp), %eax
	cmpl $5, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 190
	# 3AC: L_23 | ifZ | t_30
	movl %r8d, %r9d
	cmpl $0, %r9d
	je .L_23
	
	# Instruction number: 191
.L_21: 
	
	# Instruction number: 192
	# 3AC: t_29 | = items | [] | i
	movq -40(%rbp), %r9
	movl -48(%rbp), %ebx
	imul $4, %ebx
	addq %rbx, %r9
	addq $4, %r9      # 4 bytes for len
	movl (%r9), %r9d
	movl %r9d, %r8d
	
	# Instruction number: 193
	# 3AC: push_param | t_29
	subq $8, %rsp    # align 16 
	#   pushing caller saved regs
	pushq %rdx
	pushq %rcx
	pushq %r8
	movl %r8d, %esi
	lea format(%rip), %rdi 
	movl $0, %eax
	# Instruction number: 194
	# 3AC: call | print
	call printf
	#   popping caller saved reg 
	popq %r8
	popq %rcx
	popq %rdx
	addq $8, %rsp     #bring back to 16 align 
	
	# Instruction number: 195
.L_22: 
	
	# Instruction number: 196
	# 3AC: i | = i | + | 1
	movl -48(%rbp), %r8d
	addl $1, %r8d
	movl %r8d, -48(%rbp)
	
	# Instruction number: 197
	# 3AC: t_30 | = i | < | 5
	movl $0, %eax         #making zero just in case
	movl -48(%rbp), %eax
	cmpl $5, %eax
	setl %al
	movzbl %al, %eax
	movl %eax, %r8d
	
	# Instruction number: 198
	# 3AC: L_23 | ifZ | t_30
	movl %r8d, %r9d
	cmpl $0, %r9d
	je .L_23
	
	# Instruction number: 199
	# 3AC: Goto | L_21
	jmp .L_21
	
	# Instruction number: 200
.L_23: 
	
	# Instruction number: 201
	# 3AC: L_func_end_main | L_func_end_main | 48
.L_func_end_main: 
	addq $48, %rsp
	popq %rbp
	ret
	
	

len:
	pushq %rbp
	movq %rsp, %rbp
	movq 16(%rbp), %rax
	movl (%rax), %eax
	popq %rbp
	ret


