/*
 * SCHEME->C
 *
 * PA-RISC assembly code.
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


