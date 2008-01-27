/*
 * SCHEME->C
 *
 * Alpha AXP for OSF/1 assembly code.
 *
 */

/*           Copyright 1989-1993 Digital Equipment Corporation
 *                         All Rights Reserved
 *
 * Permission to use, copy, and modify this software and its documentation is
 * hereby granted only under the following terms and conditions.  Both the
 * above copyright notice and this permission notice must appear in all copies
 * of the software, derivative works or modified versions, and any portions
 * thereof, and both notices must appear in supporting documentation.
 *
 * Users of this software agree to the terms and conditions set forth herein,
 * and hereby grant back to Digital a non-exclusive, unrestricted, royalty-free
 * right and license under any changes, enhancements or extensions made to the
 * core functions of the software, including but not limited to those affording
 * compatibility with other hardware or software environments, but excluding
 * applications which incorporate this software.  Users further agree to use
 * their best efforts to return to Digital any such changes, enhancements or
 * extensions that they make and inform Digital of noteworthy uses of this
 * software.  Correspondence should be provided to Digital at:
 * 
 *                       Director of Licensing
 *                       Western Research Laboratory
 *                       Digital Equipment Corporation
 *                       250 University Avenue
 *                       Palo Alto, California  94301  
 * 
 * This software may be distributed (but not offered for sale or transferred
 * for compensation) to third parties, provided such third parties agree to
 * abide by the terms and conditions of this notice.  
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
 * CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
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
