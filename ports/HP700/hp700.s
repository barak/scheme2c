/*
 * SCHEME->C
 *
 * PA-RISC assembly code.
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

/* sc_r1tor18 returns the values of r1-r18 in the caller supplied
   buffer.  These are the "callee" save registers which need to be
   examined during garbage collection.
*/

#include <machine/reg.h>

	.code
	.align	2
	.export	sc_r1tor18, entry

sc_r1tor18
	.proc
	.callinfo
	.enter
	stw	r1,0(%arg0)
	stw	r2,4(%arg0)
	stw	r3,8(%arg0)
	stw	r4,12(%arg0)
	stw	r5,16(%arg0)
	stw	r6,20(%arg0)
	stw	r7,24(%arg0)
	stw	r8,28(%arg0)
	stw	r9,32(%arg0)
	stw	r10,36(%arg0)
	stw	r11,40(%arg0)
	stw	r12,44(%arg0)
	stw	r13,48(%arg0)
	stw	r14,52(%arg0)
	stw	r15,56(%arg0)
	stw	r16,60(%arg0)
	stw	r17,64(%arg0)
	stw	r18,68(%arg0)
	.leave
	.procend

	.end	sc_r1tor18


