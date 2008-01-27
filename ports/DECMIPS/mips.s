/*
 * SCHEME->C
 *
 * MIPS assembly code.
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
