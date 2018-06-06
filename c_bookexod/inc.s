	.file	"inc.c"
	.section	.rodata
.LC0:
	.string	"%d %d %d %d"
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
	subq	$16, %rsp
	movl	$10, -8(%rbp)
	movl	-8(%rbp), %edx
	leal	1(%rdx), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	leal	-1(%rax), %ecx
	movl	%ecx, -8(%rbp)
	addl	$1, -8(%rbp)
	imull	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	subl	$1, -8(%rbp)
	movl	-8(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -8(%rbp)
	movl	-8(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %esi
	movl	%ecx, %r8d
	movl	%eax, %ecx
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.6) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
