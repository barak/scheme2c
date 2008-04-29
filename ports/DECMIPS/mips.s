/*
 * SCHEME->C
 *
 * MIPS assembly code.
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


/* sc_s0tos8 returns the values of s0-s8 in the caller supplied buffer.  These
   are the "callee" save registers which need to be examined during garbage
   collection.
*/

#ifndef MIPSEL
#include <sys/regdef.h>
#else
#include <mips/regdef.h>
#endif

	.text	
	.align	2
	.globl	sc_s0tos8
	.ent	sc_s0tos8
sc_s0tos8:
	.frame	sp, 0, ra
	sw	s0, 0(a0)
	sw	s1, 4(a0)
	sw	s2, 8(a0)
	sw	s3, 12(a0)
	sw	s4, 16(a0)
	sw	s5, 20(a0)
	sw	s6, 24(a0)
	sw	s7, 28(a0)
	sw	s8, 32(a0)
	j	ra
	.end	sc_s0tos8

/* sc_setsp sets the stack pointer to the argument value.  It is necessary
   as longjmp checks to assure that the call is an "upexit".
*/
	.text
	.align	2
	.globl	sc_setsp
	.ent	sc_setsp
sc_setsp:
	.frame	sp, 0, ra
	or	sp, a0, a0
	j	ra
	.end	sc_setsp

/**************************************************************************
 The following 4 arithmetic subroutines use MIPS instructions that generate
 overflow exceptions which can then be trappped. 
 **************************************************************************/

/* sc_iplus uses the 'add' instruction to calculate the sum of the two
   integer arguments.  
*/

	.text	
	.align	2
	.globl	sc_iplus
	.ent	sc_iplus
sc_iplus:
	.frame	sp, 0, ra
	add	v0, a0, a1
	j	ra
	.end	sc_iplus

/* sc_idifference uses the 'sub' instruction to calculate the difference
   of the two integer arguments.
*/

	.text	
	.align	2
	.globl	sc_idifference
	.ent	sc_idifference
sc_idifference:
	.frame	sp, 0, ra
	sub	v0, a0, a1
	j	ra
	.end	sc_idifference


/* sc_inegate also uses the 'sub' instruction to calculate the negation of 
   the integer argument.
*/

	.text	
	.align	2
	.globl	sc_inegate
	.ent	sc_inegate
sc_inegate:
	.frame	sp, 0, ra
	sub	v0, $0, a0
	j	ra
	.end	sc_inegate


/* sc_itimes uses the 'mult' instruction to calculate the product of the 
   two integer arguments.
*/

	.text	
	.align	2
	.globl	sc_itimes
	.ent	sc_itimes
sc_itimes:
	subu	sp, 24
	sw	ra, 20(sp)
	sd	a0, 24(sp)
	.mask	0x80000000, -4
	.frame  sp, 24, ra

	mult	a0, a1

	mfhi	t0
	mflo	t1
	sra	t1, t1, 31
 	bne	t0, t1, $overflow

	mflo	v0

	lw	ra, 20(sp)
	addu	sp, 24
	j	ra

$overflow:
	mtc1	a0, $f4
	cvt.d.w	$f6, $f4
	srl 	t1, a1, 2
	mtc1	t1, $f8
	cvt.d.w $f10, $f8
	mul.d	$f12, $f6, $f10
	jal	sc_makedoublefloat
	lw	ra, 20(sp)
	addu	sp, 24
	j	ra
	.end	sc_itimes
