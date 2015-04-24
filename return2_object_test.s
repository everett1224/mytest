	.file	"return2_object_test.cc"
	.intel_syntax noprefix
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"foobar::foobar()\n"
	.section	.text._ZN6foobarC2Ev,"axG",@progbits,_ZN6foobarC5Ev,comdat
	.align 2
	.weak	_ZN6foobarC2Ev
	.type	_ZN6foobarC2Ev, @function
_ZN6foobarC2Ev:
.LFB958:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC0
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE958:
	.size	_ZN6foobarC2Ev, .-_ZN6foobarC2Ev
	.weak	_ZN6foobarC1Ev
	.set	_ZN6foobarC1Ev,_ZN6foobarC2Ev
	.section	.rodata
.LC1:
	.string	"foobar::~foobar()\n"
	.section	.text._ZN6foobarD2Ev,"axG",@progbits,_ZN6foobarD5Ev,comdat
	.align 2
	.weak	_ZN6foobarD2Ev
	.type	_ZN6foobarD2Ev, @function
_ZN6foobarD2Ev:
.LFB961:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC1
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE961:
	.size	_ZN6foobarD2Ev, .-_ZN6foobarD2Ev
	.weak	_ZN6foobarD1Ev
	.set	_ZN6foobarD1Ev,_ZN6foobarD2Ev
	.section	.text._ZN6foobar4ivalEi,"axG",@progbits,_ZN6foobar4ivalEi,comdat
	.align 2
	.weak	_ZN6foobar4ivalEi
	.type	_ZN6foobar4ivalEi, @function
_ZN6foobar4ivalEi:
.LFB967:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR [rbp-8], rdi
	mov	DWORD PTR [rbp-12], esi
	mov	rax, QWORD PTR [rbp-8]
	mov	edx, DWORD PTR [rbp-12]
	mov	DWORD PTR [rax], edx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE967:
	.size	_ZN6foobar4ivalEi, .-_ZN6foobar4ivalEi
	.text
.globl _Z1fi
	.type	_Z1fi, @function
_Z1fi:
.LFB968:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	mov	rbx, rdi
	.cfi_offset 3, -24
	mov	DWORD PTR [rbp-20], esi
	mov	rax, rbx
	mov	rdi, rax
	call	_ZN6foobarC1Ev
	mov	rax, rbx
	mov	edx, DWORD PTR [rbp-20]
	mov	esi, edx
	mov	rdi, rax
	call	_ZN6foobar4ivalEi
.L10:
	mov	rax, rbx
	mov	rax, rbx
	add	rsp, 24
	pop	rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE968:
	.size	_Z1fi, .-_Z1fi
.globl main
	.type	main, @function
main:
.LFB969:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	lea	rax, [rbp-32]
	mov	esi, 1024
	mov	rdi, rax
	.cfi_offset 3, -24
	call	_Z1fi
	mov	ebx, 0
	lea	rax, [rbp-32]
	mov	rdi, rax
	call	_ZN6foobarD1Ev
	mov	eax, ebx
	add	rsp, 24
	pop	rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE969:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB973:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	DWORD PTR [rbp-8], esi
	cmp	DWORD PTR [rbp-4], 1
	jne	.L16
	cmp	DWORD PTR [rbp-8], 65535
	jne	.L16
	mov	edi, OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	eax, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	mov	edx, OFFSET FLAT:__dso_handle
	mov	esi, OFFSET FLAT:_ZStL8__ioinit
	mov	rdi, rax
	call	__cxa_atexit
.L16:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__I__Z1fi, @function
_GLOBAL__I__Z1fi:
.LFB974:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE974:
	.size	_GLOBAL__I__Z1fi, .-_GLOBAL__I__Z1fi
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__I__Z1fi
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
