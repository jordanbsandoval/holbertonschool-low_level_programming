	.file	"101-quote.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$8386098829109522017, %rax
	movabsq	$8007511615042318368, %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movabsq	$8316213871423594598, %rax
	movabsq	$2480486577423480096, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$2333271904164523296, %rax
	movabsq	$2318353671012904779, %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movabsq	$3256156600824574002, %rax
	movq	%rax, -32(%rbp)
	movw	$14641, -24(%rbp)
	movb	$0, -22(%rbp)
	movl	$59, %edx
	leaq	.LC0(%rip), %rsi
	movl	$2, %edi
	call	write@PLT
	movl	$1, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
