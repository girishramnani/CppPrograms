	.file	"hello.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	movl	$25, -4(%rbp)
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
