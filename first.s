	.file	"stackll.c"
	.section	.rodata
.LC0:
	.string	" %d "
	.text
	.globl	display
	.type	display, @function
display:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	jmp	.L2
.L3:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, 8(%ebp)
.L2:
	cmpl	$0, 8(%ebp)
	jne	.L3
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	display, .-display
	.section	.rodata
.LC1:
	.string	"enter data"
.LC2:
	.string	"%d"
	.text
	.globl	push
	.type	push, @function
push:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	subl	$12, %esp
	pushl	$.LC1
	call	puts
	addl	$16, %esp
	movl	-12(%ebp), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC2
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-12(%ebp), %eax
	movl	%eax, 8(%ebp)
	subl	$12, %esp
	pushl	8(%ebp)
	call	display
	addl	$16, %esp
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	push, .-push
	.section	.rodata
.LC3:
	.string	"stack empty"
	.text
	.globl	pop
	.type	pop, @function
pop:
.LFB4:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$0, -12(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L7
	subl	$12, %esp
	pushl	$.LC3
	call	puts
	addl	$16, %esp
	movl	$0, %eax
	jmp	.L6
.L7:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, 8(%ebp)
	subl	$12, %esp
	pushl	-12(%ebp)
	call	free
	addl	$16, %esp
.L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE4:
	.size	pop, .-pop
	.section	.rodata
.LC4:
	.string	" %d \n"
	.text
	.globl	peek
	.type	peek, @function
peek:
.LFB5:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	cmpl	$0, 8(%ebp)
	jne	.L10
	movl	$0, %eax
	jmp	.L9
.L10:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC4
	call	printf
	addl	$16, %esp
.L9:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE5:
	.size	peek, .-peek
	.section	.rodata
	.align 4
.LC5:
	.string	"enter operation 1>push 2>pop 3>display 4>peek 5>exit"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$20, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	$0, 4(%eax)
.L20:
	subl	$12, %esp
	pushl	$.LC5
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	leal	-20(%ebp), %eax
	pushl	%eax
	pushl	$.LC2
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-20(%ebp), %eax
	cmpl	$5, %eax
	ja	.L20
	movl	.L15(,%eax,4), %eax
	jmp	*%eax
	.section	.rodata
	.align 4
	.align 4
.L15:
	.long	.L20
	.long	.L14
	.long	.L16
	.long	.L17
	.long	.L18
	.long	.L19
	.text
.L14:
	subl	$12, %esp
	pushl	-16(%ebp)
	call	push
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	jmp	.L13
.L16:
	subl	$12, %esp
	pushl	-16(%ebp)
	call	pop
	addl	$16, %esp
	jmp	.L13
.L17:
	subl	$12, %esp
	pushl	-16(%ebp)
	call	display
	addl	$16, %esp
	jmp	.L13
.L18:
	subl	$12, %esp
	pushl	-16(%ebp)
	call	peek
	addl	$16, %esp
	jmp	.L13
.L19:
	subl	$12, %esp
	pushl	$0
	call	exit
.L13:
	jmp	.L20
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
