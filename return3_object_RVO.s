	.file	"return3_object_RVO.cc"
	.intel_syntax noprefix
	.section	.rodata
.LC0:
	.string	"this is constructor\t%p\n"
	.section	.text._ZN4TestC2Ev,"axG",@progbits,_ZN4TestC5Ev,comdat
	.align 2
	.weak	_ZN4TestC2Ev
	.type	_ZN4TestC2Ev, @function
_ZN4TestC2Ev:
.LFB1:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	rax, QWORD PTR [rbp-8]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC0
	mov	eax, 0
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZN4TestC2Ev, .-_ZN4TestC2Ev
	.weak	_ZN4TestC1Ev
	.set	_ZN4TestC1Ev,_ZN4TestC2Ev
	.section	.rodata
.LC1:
	.string	"this is destructor\t%p\n"
	.section	.text._ZN4TestD2Ev,"axG",@progbits,_ZN4TestD5Ev,comdat
	.align 2
	.weak	_ZN4TestD2Ev
	.type	_ZN4TestD2Ev, @function
_ZN4TestD2Ev:
.LFB4:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	rax, QWORD PTR [rbp-8]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC1
	mov	eax, 0
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	_ZN4TestD2Ev, .-_ZN4TestD2Ev
	.weak	_ZN4TestD1Ev
	.set	_ZN4TestD1Ev,_ZN4TestD2Ev
	.text
.globl _Z3foov
	.type	_Z3foov, @function
_Z3foov:
.LFB6:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 8
	mov	rbx, rdi
	.cfi_offset 3, -24
	mov	rax, rbx
	mov	rdi, rax
	call	_ZN4TestC1Ev
	mov	rax, rbx
	mov	rax, rbx
	add	rsp, 8
	pop	rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	_Z3foov, .-_Z3foov
	.section	.rodata
.LC2:
	.string	"the main fff addr is\t%p\n"
.globl _Unwind_Resume
	.text
.globl main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA7
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 16
	lea	rax, [rbp-32]
	mov	rdi, rax
.LEHB0:
	.cfi_offset 3, -32
	.cfi_offset 12, -24
	call	_Z3foov
.LEHE0:
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC2
	mov	eax, 0
.LEHB1:
	call	printf
.LEHE1:
	mov	ebx, 0
	lea	rax, [rbp-32]
	mov	rdi, rax
.LEHB2:
	call	_ZN4TestD1Ev
.LEHE2:
	mov	eax, ebx
	add	rsp, 16
	pop	rbx
	pop	r12
	leave
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L11:
	.cfi_restore_state
.L9:
	mov	ebx, edx
	mov	r12, rax
	lea	rax, [rbp-32]
	mov	rdi, rax
	call	_ZN4TestD1Ev
	mov	rax, r12
	movsx	rdx, ebx
	mov	rdi, rax
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
	.cfi_endproc
.LFE7:
	.size	main, .-main
.globl __gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA7:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE7-.LLSDACSB7
.LLSDACSB7:
	.uleb128 .LEHB0-.LFB7
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB1-.LFB7
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L11-.LFB7
	.uleb128 0x0
	.uleb128 .LEHB2-.LFB7
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB3-.LFB7
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0x0
	.uleb128 0x0
.LLSDACSE7:
	.text
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
