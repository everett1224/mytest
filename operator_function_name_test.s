	.file	"operator_function_name_test.cc"
	.intel_syntax noprefix
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN8CurrencyC2Eii,"axG",@progbits,_ZN8CurrencyC5Eii,comdat
	.align 2
	.weak	_ZN8CurrencyC2Eii
	.type	_ZN8CurrencyC2Eii, @function
_ZN8CurrencyC2Eii:
.LFB970:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR [rbp-8], rdi
	mov	DWORD PTR [rbp-12], esi
	mov	DWORD PTR [rbp-16], edx
	mov	rax, QWORD PTR [rbp-8]
	mov	edx, DWORD PTR [rbp-12]
	mov	DWORD PTR [rax], edx
	mov	rax, QWORD PTR [rbp-8]
	mov	edx, DWORD PTR [rbp-16]
	mov	DWORD PTR [rax+4], edx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE970:
	.size	_ZN8CurrencyC2Eii, .-_ZN8CurrencyC2Eii
	.weak	_ZN8CurrencyC1Eii
	.set	_ZN8CurrencyC1Eii,_ZN8CurrencyC2Eii
	.section	.text._ZN8CurrencyplES_,"axG",@progbits,_ZN8CurrencyplES_,comdat
	.align 2
	.weak	_ZN8CurrencyplES_
	.type	_ZN8CurrencyplES_, @function
_ZN8CurrencyplES_:
.LFB972:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR [rbp-24], rdi
	mov	QWORD PTR [rbp-32], rsi
	mov	rax, QWORD PTR [rbp-24]
	mov	edx, DWORD PTR [rax+4]
	mov	eax, DWORD PTR [rbp-28]
	add	edx, eax
	mov	rax, QWORD PTR [rbp-24]
	mov	ecx, DWORD PTR [rax]
	mov	eax, DWORD PTR [rbp-32]
	add	ecx, eax
	lea	rax, [rbp-16]
	mov	esi, ecx
	mov	rdi, rax
	call	_ZN8CurrencyC1Eii
	mov	rax, QWORD PTR [rbp-16]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN8CurrencyplES_, .-_ZN8CurrencyplES_
	.section	.rodata
.LC0:
	.string	" "
	.text
	.globl	main
	.type	main, @function
main:
.LFB973:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA973
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	lea	rax, [rbp-32]
	mov	edx, 1
	mov	esi, 1
	mov	rdi, rax
	call	_ZN8CurrencyC1Eii
	lea	rax, [rbp-48]
	mov	edx, 2
	mov	esi, 2
	mov	rdi, rax
	call	_ZN8CurrencyC1Eii
	mov	rdx, QWORD PTR [rbp-48]
	lea	rax, [rbp-32]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN8CurrencyplES_
	mov	QWORD PTR [rbp-64], rax
	mov	ebx, DWORD PTR [rbp-60]
	mov	eax, DWORD PTR [rbp-64]
	mov	esi, eax
	mov	edi, OFFSET FLAT:_ZSt4cout
.LEHB0:
	call	_ZNSolsEi
	mov	esi, OFFSET FLAT:.LC0
	mov	rdi, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, ebx
	mov	rdi, rax
	call	_ZNSolsEi
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
.LEHE0:
	mov	eax, 0
	jmp	.L8
.L7:
	mov	rdi, rax
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L8:
	add	rsp, 56
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA973:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE973-.LLSDACSB973
.LLSDACSB973:
	.uleb128 .LEHB0-.LFB973
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L7-.LFB973
	.uleb128 0
	.uleb128 .LEHB1-.LFB973
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE973:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB982:
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
	jne	.L9
	cmp	DWORD PTR [rbp-8], 65535
	jne	.L9
	mov	edi, OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edx, OFFSET FLAT:__dso_handle
	mov	esi, OFFSET FLAT:_ZStL8__ioinit
	mov	edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	call	__cxa_atexit
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE982:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB983:
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
.LFE983:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
