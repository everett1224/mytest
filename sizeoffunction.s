	.file	"sizeoffunction.c"
	.intel_syntax noprefix
	.section	.rodata
.LC0:
	.string	"this is a test"
	.text
	.globl	foo
	.type	foo, @function
foo:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	edi, OFFSET FLAT:.LC0
	call	puts
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	foo, .-foo
	.section	.rodata
.LC1:
	.string	"the pointer of function %d\n"
.LC2:
	.string	"the function name size is %d\n"
.LC3:
	.string	"the a is %d\n"
.LC4:
	.string	"the b is %d\n"
.LC5:
	.string	"ittt %d\n"
.LC6:
	.string	"the a addr is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	esi, 8
	mov	edi, OFFSET FLAT:.LC1
	mov	eax, 0
	call	printf
	mov	edi, 10
	call	foo
	mov	QWORD PTR [rbp-8], OFFSET FLAT:foo
	mov	rax, QWORD PTR [rbp-8]
	mov	edi, 111
	call	rax
	mov	esi, 1
	mov	edi, OFFSET FLAT:.LC2
	mov	eax, 0
	call	printf
	mov	DWORD PTR [rbp-20], 100
	mov	eax, DWORD PTR [rbp-20]
	mov	esi, eax
	mov	edi, OFFSET FLAT:.LC3
	mov	eax, 0
	call	printf
	mov	QWORD PTR [rbp-16], 10
	mov	rax, QWORD PTR [rbp-16]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC4
	mov	eax, 0
	call	printf
	mov	esi, 8
	mov	edi, OFFSET FLAT:.LC5
	mov	eax, 0
	call	printf
	mov	esi, 8
	mov	edi, OFFSET FLAT:.LC6
	mov	eax, 0
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
