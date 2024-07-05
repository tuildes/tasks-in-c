	.file	"dna.c"
	.text
	.globl	dna_strand
	.type	dna_strand, @function
dna_strand:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	addl	$1, -4(%rbp)
	addl	$1, -8(%rbp)
.L2:
	movl	-8(%rbp), %edx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	movl	-4(%rbp), %eax
	movq	%rax, %rdi
	call	malloc
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L4
	movl	$0, %eax
	jmp	.L5
.L4:
	movl	$0, -12(%rbp)
	jmp	.L6
.L14:
	movl	-12(%rbp), %edx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$65, %eax
	cmpl	$52, %eax
	ja	.L7
	movl	%eax, %eax
	movq	.L9(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L9:
	.quad	.L8
	.quad	.L7
	.quad	.L10
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L11
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L12
	.quad	.L12
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L8
	.quad	.L7
	.quad	.L10
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L11
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L7
	.quad	.L12
	.quad	.L12
	.text
.L8:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$84, (%rax)
	jmp	.L13
.L12:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$65, (%rax)
	jmp	.L13
.L10:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$71, (%rax)
	jmp	.L13
.L11:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$67, (%rax)
	jmp	.L13
.L7:
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$110, (%rax)
	nop
.L13:
	addl	$1, -12(%rbp)
.L6:
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jbe	.L14
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-24(%rbp), %rax
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	dna_strand, .-dna_strand
	.section	.rodata
.LC0:
	.string	"\033[0;37m"
.LC1:
	.string	"%s%c%s"
	.text
	.globl	print_nucleotide
	.type	print_nucleotide, @function
print_nucleotide:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, %eax
	movq	%rsi, -16(%rbp)
	movb	%al, -4(%rbp)
	movsbl	-4(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	$.LC0, %ecx
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	print_nucleotide, .-print_nucleotide
	.section	.rodata
.LC2:
	.string	"DNA (%.*s): "
.LC3:
	.string	"\033[0;33m"
.LC4:
	.string	"\033[0;32m"
.LC5:
	.string	"\033[0;34m"
.LC6:
	.string	"\033[0;31m"
	.text
	.globl	print_dna
	.type	print_dna, @function
print_dna:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdx
	movl	$4, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L17
.L26:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	subl	$65, %eax
	cmpl	$52, %eax
	ja	.L18
	movl	%eax, %eax
	movq	.L20(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L20:
	.quad	.L19
	.quad	.L18
	.quad	.L21
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L22
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L23
	.quad	.L23
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L19
	.quad	.L18
	.quad	.L21
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L22
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L18
	.quad	.L23
	.quad	.L23
	.text
.L19:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	$.LC3, %esi
	movl	%eax, %edi
	call	print_nucleotide
	jmp	.L24
.L23:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	$.LC4, %esi
	movl	%eax, %edi
	call	print_nucleotide
	jmp	.L24
.L21:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	$.LC5, %esi
	movl	%eax, %edi
	call	print_nucleotide
	jmp	.L24
.L22:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	$.LC6, %esi
	movl	%eax, %edi
	call	print_nucleotide
	jmp	.L24
.L18:
	movl	$.LC0, %esi
	movl	$95, %edi
	call	print_nucleotide
	nop
.L24:
	movl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	$-1431655765, %edx
	movl	%ecx, %eax
	mull	%edx
	movl	%edx, %eax
	shrl	%eax
	movl	%eax, %edx
	addl	%edx, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	testl	%eax, %eax
	jne	.L25
	movl	$32, %edi
	call	putchar
.L25:
	addl	$1, -4(%rbp)
.L17:
	movl	-4(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L26
	movl	$10, %edi
	call	putchar
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	print_dna, .-print_dna
	.section	.rodata
	.align 8
.LC7:
	.string	"tcgtctgtgaatccattgcggagcggagtgaatcgagccacgatgtcattataaaaaaccggggtgtcgtacttcccattgaacttagaaaaaaacaaat"
.LC8:
	.string	"Original"
.LC9:
	.string	"Copy"
	.text
	.globl	main
	.type	main, @function
main:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	$.LC7, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	dna_strand
	movq	%rax, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$.LC8, %esi
	movq	%rax, %rdi
	call	print_dna
	movq	-16(%rbp), %rax
	movl	$.LC9, %esi
	movq	%rax, %rdi
	call	print_dna
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	main, .-main
	.ident	"GCC: (SUSE Linux) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
