/*
 * SCHEME->C
 *
 * ARM assembly code.
 *
 */

.align 2
.global	sc_getARMregs
.type	sc_getARMregs, %function
	
sc_getARMregs:
	mov	ip, sp
	stmfd	sp!, {fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #4
	str	r0, [fp, #-16]
	str	r1, [r0, #0]
	str	r2, [r0, #4]
	str	r3, [r0, #8]
	str	r4, [r0, #12]
	str	r5, [r0, #16]
	str	r6, [r0, #20]
	str	r7, [r0, #24]
	str	r8, [r0, #28]
	str	r9, [r0, #32]

	/*
	 The following registers aren't saved as they're blessd as
	 special by GCC, although they don't hold the same status in
	 the ARM spec

	 str	r10, [r0, #36]
	 str	r11, [r0, #40]
	 str	r12, [r0, #44]
	*/
	
	ldmfd	sp, {r0, fp, sp, pc}
	.size	sc_getARMregs, .-sc_getARMregs
