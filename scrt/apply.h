/* SCHEME->C */

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


/* This module defines the APPLY and UNKNOWNCALL functions.  APPLY is as
   defined in Revised**3 and UNKNOWNCALL is a variant of APPLY which is used
   by the compiler to call unknown functions.
*/

#define MAXARGS 70	/* Maximum number of required arguments permitted.
			   Note that this does not preclude an optional
			   argument list as an additional argument.  This
			   number is typically determined by the ability
			   of one's C compiler.  */
			/* I changed this from 25 to 30 -- Qobi M19Aug96 */
			/* I changed this from 30 to 40 -- Qobi T25Aug98 */
			/* I changed this from 40 to 50 -- Qobi H7Nov98 */
			/* I changed this from 50 to 70 -- Qobi F22Aug08 */

extern  S2CINT  sc_unknownargc;	/* Data structures for sc_unknowncall */

extern  TSCP  sc_unknownproc[ 4 ];

extern  TSCP  sc_arg[MAXARGS];

/* The procedural interfaces in this module are:  */

extern  TSCP  sc_apply_2dtwo();

extern  TSCP  sc_unknowncall(TSCP va_alist, ...); /* Qobi h15jan2005 */
