	.file	"template_func_deep_test.cc"
	.intel_syntax noprefix
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
	call	_Z4funcIiEvv
	call	_Z4funcIdEvv
	mov	eax, 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"this is base"
	.section	.text._Z4funcIiEvv,"axG",@progbits,_Z4funcIiEvv,comdat
	.weak	_Z4funcIiEvv
	.type	_Z4funcIiEvv, @function
_Z4funcIiEvv:
.LFB2:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	edi, OFFSET FLAT:.LC0
	call	puts
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_Z4funcIiEvv, .-_Z4funcIiEvv
	.section	.text._Z4funcIdEvv,"axG",@progbits,_Z4funcIdEvv,comdat
	.weak	_Z4funcIdEvv
	.type	_Z4funcIdEvv, @function
_Z4funcIdEvv:
.LFB3:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	edi, OFFSET FLAT:.LC0
	call	puts
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	_Z4funcIdEvv, .-_Z4funcIdEvv
	.ident	"GCC: (GNU) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
