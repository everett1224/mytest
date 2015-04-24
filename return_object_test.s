	.file	"return_object_test.cc"
	.section	.rodata
.LC0:
	.string	"this is a test %p\n"
	.section	.text._ZN4TestC2Ev,"axG",@progbits,_ZN4TestC5Ev,comdat
	.align 2
	.weak	_ZN4TestC2Ev
	.type	_ZN4TestC2Ev, @function
_ZN4TestC2Ev:
.LFB1:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
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
	.string	"this is a eend %p\n"
	.section	.text._ZN4TestD2Ev,"axG",@progbits,_ZN4TestD5Ev,comdat
	.align 2
	.weak	_ZN4TestD2Ev
	.type	_ZN4TestD2Ev, @function
_ZN4TestD2Ev:
.LFB7:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	_ZN4TestD2Ev, .-_ZN4TestD2Ev
	.weak	_ZN4TestD1Ev
	.set	_ZN4TestD1Ev,_ZN4TestD2Ev
	.text
.globl _Z4lalav
	.type	_Z4lalav, @function
_Z4lalav:
.LFB9:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$8, %rsp
	movq	%rdi, %rbx
	.cfi_offset 3, -24
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_ZN4TestC1Ev
	movq	%rbx, %rax
	movl	$100, (%rax)
	movq	%rbx, %rax
	movq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	_Z4lalav, .-_Z4lalav
	.section	.rodata
.LC2:
	.string	"the int addr in the fofo %p\n"
	.text
.globl _Z4fofov
	.type	_Z4fofov, @function
_Z4fofov:
.LFB10:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1024, -4(%rbp)
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	_Z4fofov, .-_Z4fofov
	.section	.rodata
.LC3:
	.string	"this is tessssssss %d\n"
.LC4:
	.string	"the fff addr %p\n"
.LC5:
	.string	"the mana addr %p\n"
.globl _Unwind_Resume
	.text
.globl main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA11
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	.cfi_offset 3, -32
	.cfi_offset 12, -24
	call	_Z4lalav
.LEHE0:
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
.LEHB1:
	call	printf
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	call	_Z4fofov
	movl	%eax, -36(%rbp)
	leaq	-36(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
.LEHE1:
	movl	$0, %ebx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZN4TestD1Ev
.LEHE2:
	movl	%ebx, %eax
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	leave
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L13:
	.cfi_restore_state
.L11:
	movl	%edx, %ebx
	movq	%rax, %r12
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4TestD1Ev
	movq	%r12, %rax
	movslq	%ebx, %rdx
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
	.cfi_endproc
.LFE11:
	.size	main, .-main
.globl __gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA11:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE11-.LLSDACSB11
.LLSDACSB11:
	.uleb128 .LEHB0-.LFB11
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB1-.LFB11
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L13-.LFB11
	.uleb128 0x0
	.uleb128 .LEHB2-.LFB11
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB3-.LFB11
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0x0
	.uleb128 0x0
.LLSDACSE11:
	.text
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
