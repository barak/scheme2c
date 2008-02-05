/*
 * SCHEME->C
 *
 * LINUX assembly code.
 *
 */

/*#ifdef	__i486__
	.align 4
#else
	.align 2
#endif*/
.globl	sc_geti386regs

sc_geti386regs:
	pushq %rbp
	movq %rsp,%rbp
	movq %rax,(%rdi)
	movq %rbx,8(%rdi)
	movq %rcx,16(%rdi)
	movq %rdx,24(%rdi)
	movq %rsi,32(%rdi)
	movq %r8,40(%rdi)
	movq %r9,48(%rdi)
	movq %r10,56(%rdi)
	movq %r11,64(%rdi)
	movq %r12,72(%rdi)
	movq %r13,80(%rdi)
	movq %r14,88(%rdi)
	movq %r15,96(%rdi)
	movq %rdi,%rax 
	movq %rbp,%rsp
	popq %rbp
	ret

