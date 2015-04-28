	.file	"template_test.cc"
	.intel_syntax noprefix
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	main
	.type	main, @function
main:
.LFB970:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], 1
	mov	DWORD PTR [rbp-8], 2
	mov	edx, DWORD PTR [rbp-8]
	mov	eax, DWORD PTR [rbp-4]
	mov	esi, edx
	mov	edi, eax
	call	_Z3fooIiEvT_S0_
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE970:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"a+b"
	.section	.text._Z3fooIiEvT_S0_,"axG",@progbits,_Z3fooIiEvT_S0_,comdat
	.weak	_Z3fooIiEvT_S0_
	.type	_Z3fooIiEvT_S0_, @function
_Z3fooIiEvT_S0_:
.LFB971:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	DWORD PTR [rbp-8], esi
	mov	esi, OFFSET FLAT:.LC0
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
	mov	eax, DWORD PTR [rbp-8]
	mov	edx, DWORD PTR [rbp-4]
	add	eax, edx
	mov	esi, eax
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZNSolsEi
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	_Z3fooIiEvT_S0_, .-_Z3fooIiEvT_S0_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB980:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	DWORD PTR [rbp-8], esi
	cmp	DWORD PTR [rbp-4], 1
	jne	.L4
	cmp	DWORD PTR [rbp-8], 65535
	jne	.L4
	mov	edi, OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edx, OFFSET FLAT:__dso_handle
	mov	esi, OFFSET FLAT:_ZStL8__ioinit
	mov	edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	call	__cxa_atexit
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB981:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
