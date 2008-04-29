/*
 * SCHEME->C
 *
 * Alpha AXP for OSF/1 assembly code.
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

#include <machine/regdef.h>

/* sc_s0tos6 returns the values of s0-s6 in the caller supplied buffer.  These
   are the "callee" save registers which need to be examined during garbage
   collection.
*/

	.text
	.align	4

	.globl	sc_s0tos6
	.ent	sc_s0tos6 2
sc_s0tos6:
	ldgp	gp, 0($27)
	.frame	sp, 0, $26
	.prologue	0
	stq	s0, 0(a0)
	stq	s1, 8(a0)
	stq	s2, 16(a0)
	stq	s3, 24(a0)
	stq	s4, 32(a0)
	stq	s5, 40(a0)
	stq	s6, 48(a0)
	ret	$31, ($26), 1
	.end	sc_s0tos6

/* sc_setsp sets the stack pointer to the argument value */

	.globl	sc_setsp
	.ent	sc_setsp 2
sc_setsp:
	ldgp	gp, 0($27)
	.frame	sp, 0, $26
	.prologue	0
	bis	a0, a0, sp
	ret	$31, ($26), 1
	.end	sc_setsp

/* sc_getsp returns the current top-of-stack value */

	.globl	sc_getsp
	.ent	sc_getsp 2
sc_getsp:
	ldgp	gp, 0($27)
	.frame	sp, 0, $26
	.prologue	0
	bis 	sp, sp, $0
	ret	$31, ($26), 1
	.end	sc_getsp

/*
  sc_setjmp, sc_longjmp
 
  This code provides a version of C's setjmp/longjmp that can be used to
  implement Scheme's call-with-current-continuation.
 
       sc_longjmp(a,v)
 
  will generate a "return(v)" from
  the last call to:
 
       sc_setjmp(a)
 
  by restoring registers from the saved state, and then doing a return.
*/

	.globl	sc_setjmp
	.ent	sc_setjmp 2
sc_setjmp:
	ldgp	gp, 0($27)
	.frame	sp, 0, $26
	.prologue	0
	stq	s0, 0(a0)
	stq	s1, 8(a0)
	stq	s2, 16(a0)
	stq	s3, 24(a0)
	stq	s4, 32(a0)
	stq	s5, 40(a0)
	stq	s6, 48(a0)
	stq	ra, 56(a0)
	stq	sp, 64(a0)
	bis	$31, $31, $0
	ret	$31, ($26), 1
	.end	sc_setjmp

	.globl	sc_longjmp
	.ent	sc_longjmp 2
sc_longjmp:
	ldgp	gp, 0($27)
	.frame	sp, 0, $26
	.prologue	0
	ldq	s0, 0(a0)
	ldq	s1, 8(a0)
	ldq	s2, 16(a0)
	ldq	s3, 24(a0)
	ldq	s4, 32(a0)
	ldq	s5, 40(a0)
	ldq	s6, 48(a0)
	ldq	ra, 56(a0)
	ldq	sp, 64(a0)
	bis	$17, $17, $0
	ret	$31, ($26), 1
	.end	sc_longjmp
