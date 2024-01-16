	.file	"hello.adb"
	.section	.rodata
.LC1:
	.ascii	" Hello from the world of Ada!"
	.align 4
.LC0:
	.long	1
	.long	29
	.text
	.globl	_ada_hello
	.type	_ada_hello, @function
_ada_hello:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$8, %rsp
	.cfi_offset 3, -24
	movl	$.LC1, %eax
	movl	$.LC0, %edx
	movq	%rax, %rcx
	movq	%rdx, %rbx
	movq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	call	ada__text_io__put__4
	nop
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ada_hello, .-_ada_hello
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-44.0.3)"
	.section	.note.GNU-stack,"",@progbits
