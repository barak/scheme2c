/*
 * SCHEME->C
 *
 * VAX assembly code.
 *
 */

/* Copyright (c) 1989-1993 Hewlett-Packard Development Company, L.P.
 *		All Rights Reserved

 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */


/*
 * sc_r2tor11
 *
 *   sc_r2tor11( a )
 * will return the contents of R2 through R11 starting at address 'a'.
 *
 */

	.globl	_sc_r2tor11
	.align	2
_sc_r2tor11:
	.word	0
	movl	4(ap),r1		# r1 = address of buffer
	movl	r2,(r1)			# Save R2-R11
	movl	r3,4(r1)
	movl	r4,8(r1)
	movl	r5,12(r1)
	movl	r6,16(r1)
	movl	r7,20(r1)
	movl	r8,24(r1)
	movl	r9,28(r1)
	movl	r10,32(r1)
	movl	r11,36(r1)
	ret

/*
 * sc_setjmp, sc_longjmp
 *
 * This code is based upon the C library functions.  They cannot be used as
 * they assume that longjmp is always an "upexit", which is not sufficiently
 * general for Scheme's call-with-current-continuation.
 *
 *	sc_longjmp(a,v)
 * will generate a "return(v)" from
 * the last call to
 *	sc_setjmp(a)
 * by restoring registers from the saved state, the
 * previous signal mask, and then doing a return.
 *
 * BUG: always restores onsigstack state to 0
 *
 */

	.globl	_sc_setjmp
	.align	2
_sc_setjmp:
	.word	0
	pushl	$0
	calls	$1,_sigblock		# r0 = signal mask
	movl	4(ap),r1		# r1 = address of jmp_buf
	movl	r2,(r1)			# Save R2-R11
	movl	r3,4(r1)
	movl	r4,8(r1)
	movl	r5,12(r1)
	movl	r6,16(r1)
	movl	r7,20(r1)
	movl	r8,24(r1)
	movl	r9,28(r1)
	movl	r10,32(r1)
	movl	r11,36(r1)
	movl	r0,40(r1)		# Save signal mask
	movl	sp,44(r1)		# Save current stack pointer
	movl	4(fp),48(r1)		# Save PSW word from frame
	movl	8(fp),52(r1)		# Save argument ptr from frame
	movl	12(fp),56(r1)		# Save frame ptr from frame
	movl	16(fp),60(r1)		# Save program cntr from frame
	clrl	r0
	ret

	.globl	_sc_longjmp
	.align	2
_sc_longjmp:
	.word	0
	movl	8(ap),r0		# r0 = return value
	movl	4(ap),r1		# r1 = address of jmp_buf
	movl	(r1),r2			# Restore R2-R11
	movl	4(r1),r3
	movl	8(r1),r4
	movl	12(r1),r5
	movl	16(r1),r6
	movl	20(r1),r7
	movl	24(r1),r8
	movl	28(r1),r9
	movl	32(r1),r10
	movl	36(r1),r11
	movl	44(r1),sp		# Restore the stack pointer
	movl	sp,fp			# Restore the frame pointer
	movl	$0,(fp)			# Restore frame:  condition handler
	movl	48(r1),4(fp)		# 		  PSW
	movl	52(r1),8(fp)		#		  AP
	movl	56(r1),12(fp)		#		  FP
	movl	60(r1),16(fp)		#		  PC
	movl	$1,20(fp)		#		  arg cnt for sc_setjmp
	pushl	sp			# old stack pointer
	pushl	40(r1)			# old signal mask
	pushl	$0			# old onsigstack
	pushl	sp			# pointer to sigcontext
	chmk	$139			# restore previous signal context
	ret				# done, return....

/* 
 * sc_iplus
 *	returns the integer sum, a + b, where a and b are the two 
 *	integer arguments, unless integer overflow occurs, then returns
 *	(unsigned int) sc_makedoublefloat( (double)a + (double)b ) instead.
 */
	.text
	.align 2
	.globl _sc_iplus
_sc_iplus:
	.word 0
	addl3	8(ap),4(ap),r0
	bvs sc_iplus_overflow
	ret
sc_iplus_overflow:
	ashl	$-2,4(ap),r0
	cvtld	r0,r0
	ashl	$-2,8(ap),r2
	cvtld	r2,r2
	addd2	r2,r0
	movd	r0,-(sp)
	calls	$2,_sc_makedoublefloat
	ret


/* 
 * sc_idifference
 *	returns integer difference, a - b, where a and b are the two 
 *	integer arguments, unless integer overflow occurs, then returns
 *	(unsigned int) sc_makedoublefloat( (double)a - (double)b ) instead.
 */
	.text
	.align 2
	.globl _sc_idifference
_sc_idifference:
	.word 0
	subl3	8(ap),4(ap),r0
	bvs sc_idifference_overflow
	ret
sc_idifference_overflow:
	ashl	$-2,4(ap),r0
	cvtld	r0,r0
	ashl	$-2,8(ap),r2
	cvtld	r2,r2
	subd2	r2,r0
	movd	r0,-(sp)
	calls	$2,_sc_makedoublefloat
	ret

/* 
 * sc_inegate
 *	returns integer negation, -a, where a is the integer
 *	argument, unless integer overflow occurs, then returns
 *	(unsigned int) sc_makedoublefloat( (double)a - (double)b ) instead.
 */
	.text
	.align 2
	.globl _sc_inegate
_sc_inegate:
	.word 0
	mnegl	4(ap),r0
	bvs sc_inegate_overflow
	ret
sc_inegate_overflow:
	ashl	$-2,4(ap),r0
	cvtld	r0,r0
	mnegd	r0,r2
	movd	r2,-(sp)
	calls	$2,_sc_makedoublefloat
	ret
	
/* 
 * sc_itimes
 *	returns integer procuct, a * b, where a and b are the two 
 *	integer arguments, unless integer overflow occurs, then returns
 *	(unsigned int) sc_makedoublefloat( (double)a * (double)b ) instead.
 */
	.text
	.align	2
	.globl	_sc_itimes
_sc_itimes:
	.word	0
	mull3	8(ap),4(ap),r0
	bvs	sc_itimes_overflow
	ret
sc_itimes_overflow:
	cvtld	4(ap),r0
	ashl 	$-2,8(ap),r2
	cvtld	r2,r2
	muld2	r2,r0
	movd	r0,-(sp)
	calls	$2,_sc_makedoublefloat
	ret
