	.file	"day10_9.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "PI = %2.f\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	addq	$-128, %rsp
	.seh_stackalloc	128
	.seh_endprologue
	call	__main
	movq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L4
.L7:
	movl	$0, -8(%rbp)
	jmp	.L5
.L6:
	addl	$1, -8(%rbp)
.L5:
	cmpl	$2, -4(%rbp)
	jle	.L6
	addl	$1, -4(%rbp)
.L4:
	cmpl	$2, -4(%rbp)
	jle	.L7
	movl	$0, -12(%rbp)
	jmp	.L8
.L11:
	movl	$0, -16(%rbp)
	jmp	.L9
.L10:
	addl	$1, -16(%rbp)
.L9:
	cmpl	$2, -12(%rbp)
	jle	.L10
	addl	$1, -12(%rbp)
.L8:
	cmpl	$2, -12(%rbp)
	jle	.L11
	movl	$0, %eax
	subq	$-128, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (tdm64-1) 10.3.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
