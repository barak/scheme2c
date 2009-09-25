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

/* External declarations */

#include "objects.h"
#include "scinit.h"
#include "heap.h"
#include "apply.h"
#include <stdarg.h>

/* Data structures used by UNKNOWNCALL.  These values must be pushed on the
   stack and then restored by interrupt handlers or when calling finalization
   procedures.
*/

TSCP  sc_unknownproc[ 4 ];	/* Procedure pointers */

S2CINT  sc_unknownargc;		/* Procedure argument count */

TSCP  sc_arg[MAXARGS];		/* Array for the required arguments */

/* Used by sc_apply_2dtwo to copy the optional argument list. */

static TSCP  copy_list( l )
	TSCP  l;
{
	TSCP  tail;

	if  (TSCPTAG( l ) == PAIRTAG)  {
	   tail = copy_list( PAIR_CDR( l ) );
	   if  (tail == FALSEVALUE)  return( tail );
	   return( sc_cons( PAIR_CAR( l ), tail ) );
	}
	if  (l == EMPTYLIST)  return( l );
	return( FALSEVALUE );
}

/* APPLY as defined in Revised**3.  It expects a procedure and an argument
   list.  It returns the result of applying that procedure to the arguments.
*/

TSCP  sc_apply_2dtwo( proc, argl )
   TSCP proc, argl;
{
	int  i;
	int  req;		/* # of required arguments */
	int  opt;		/* true iff required arguments */
	TSCP  arg[MAXARGS];	/* argument array */
	TSCP  optl;		/* optional argument list */
	TSCP  closure;		/* closure pointer */
	SCP  utproc;		/* untagged version of tproc */
	SCP  utargl;

	utproc = T_U( proc );
	if ((TSCPTAG( proc ) != EXTENDEDTAG) ||
	    (utproc->procedure.tag != PROCEDURETAG))
	   sc_error( "APPLY", "Argument is not a PROCEDURE: ~s",
		      LIST1( proc ) );
	req = utproc->procedure.required;
	opt = utproc->procedure.optional;
	i = 0;
	while  ((i < req) && (TSCPTAG( argl ) == PAIRTAG)) {
	   utargl = T_U( argl );
	   arg[ i++ ] = utargl->pair.car;
	   argl = utargl->pair.cdr;
	}
	if  (i < req)
	   sc_error( "APPLY", "PROCEDURE requires ~s arguments, ~s supplied",
		      LIST2( C_FIXED( req ), C_FIXED( i ) ) );
	if  (opt)  {
	   optl = copy_list( argl );
	   if  (optl == FALSEVALUE)
	      sc_error( "APPLY", "Argument list is not a LIST: ~s",
	      		LIST1( argl ) );
	   argl = optl;
	   closure = utproc->procedure.closure;
	}  else  {
	   if  (argl != EMPTYLIST)
	      sc_error( "APPLY", "PROCEDURE accepts only ~s arguments",
			 LIST1( C_FIXED( req ) ) );
	   argl = utproc->procedure.closure;
	}
	switch (req) {
	   case  0: return( (*utproc->procedure.code)
	   				( argl, closure  ) );
	   case  1: return( (*utproc->procedure.code)
	   				( arg[0], argl, closure ) );
	   case  2: return( (*utproc->procedure.code)
					( arg[0], arg[1], argl, closure ) );
	   case  3: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], argl,
					  closure ) );
	   case  4: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  argl, closure ));
	   case  5: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], argl, closure ) );
	   case  6: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], argl, closure ) );
	   case  7: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], argl,
					  closure ) );
	   case  8: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  argl, closure ) );
	   case  9: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], argl, closure ) );
	   case 10: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], argl, closure ) );
	   case 11: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], argl,
					  closure ) );
	   case 12: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  argl, closure ) );
	   case 13: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], argl, closure ) );
	   case 14: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], argl, closure ) );
	   case 15: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], argl,
					  closure ) );
	   case 16: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  argl, closure ) );
#if (MAXARGS >= 17)
	   case 17: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], argl, closure ) );
#endif
#if (MAXARGS >= 18)
	   case 18: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], argl, closure ) );
#endif
#if (MAXARGS >= 19)
	   case 19: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], argl,
					  closure ) );
#endif
#if (MAXARGS >= 20)
	   case 20: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  argl, closure ) );
#endif
#if (MAXARGS >= 21)
	   case 21: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], argl, closure ) );
#endif
#if (MAXARGS >= 22)
	   case 22: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], argl, closure ) );
#endif
#if (MAXARGS >= 23)
	   case 23: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], argl,
					  closure ) );
#endif
#if (MAXARGS >= 24)
	   case 24: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  argl, closure ) );
#endif
#if (MAXARGS >= 25)
	   case 25: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], argl, closure ) );
#endif
#if (MAXARGS >= 26)
	   case 26: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], argl, closure ) );
#endif
#if (MAXARGS >= 27)
	   case 27: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26],
					  argl, closure ) );
#endif
#if (MAXARGS >= 28)
	   case 28: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  argl, closure ) );
#endif
#if (MAXARGS >= 29)
	   case 29: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], argl, closure ) );
#endif
#if (MAXARGS >= 30)
	   case 30: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], argl, closure ) );
#endif
#if (MAXARGS >= 31)
	   case 31: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30],
					  argl, closure ) );
#endif
#if (MAXARGS >= 32)
	   case 32: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  argl, closure ) );
#endif
#if (MAXARGS >= 33)
	   case 33: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], argl, closure ) );
#endif
#if (MAXARGS >= 34)
	   case 34: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], argl, closure ) );
#endif
#if (MAXARGS >= 35)
	   case 35: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34],
					  argl, closure ) );
#endif
#if (MAXARGS >= 36)
	   case 36: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  argl, closure ) );
#endif
#if (MAXARGS >= 37)
	   case 37: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], argl, closure ) );
#endif
#if (MAXARGS >= 38)
	   case 38: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], argl, closure ) );
#endif
#if (MAXARGS >= 39)
	   case 39: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38],
					  argl, closure ) );
#endif
#if (MAXARGS >= 40)
	   case 40: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  argl, closure ) );
#endif
#if (MAXARGS >= 41)
	   case 41: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40],
					  argl, closure ) );
#endif
#if (MAXARGS >= 42)
	   case 42: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41],
					  argl, closure ) );
#endif
#if (MAXARGS >= 43)
	   case 43: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42],
					  argl, closure ) );
#endif
#if (MAXARGS >= 44)
	   case 44: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  argl, closure ) );
#endif
#if (MAXARGS >= 45)
	   case 45: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44],
					  argl, closure ) );
#endif
#if (MAXARGS >= 46)
	   case 46: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44], arg[45],
					  argl, closure ) );
#endif
#if (MAXARGS >= 47)
	   case 47: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44], arg[45], arg[46],
					  argl, closure ) );
#endif
#if (MAXARGS >= 48)
	   case 48: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44], arg[45], arg[46], arg[47],
					  argl, closure ) );
#endif
#if (MAXARGS >= 49)
	   case 49: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44], arg[45], arg[46], arg[47],
					  arg[48],
					  argl, closure ) );
#endif
#if (MAXARGS >= 50)
	   case 50: return( (*utproc->procedure.code)
					( arg[0], arg[1], arg[2], arg[3],
					  arg[4], arg[5], arg[6], arg[7],
					  arg[8], arg[9], arg[10], arg[11],
					  arg[12], arg[13], arg[14], arg[15],
					  arg[16], arg[17], arg[18], arg[19],
					  arg[20], arg[21], arg[22], arg[23],
					  arg[24], arg[25], arg[26], arg[27],
					  arg[28], arg[29], arg[30], arg[31],
					  arg[32], arg[33], arg[34], arg[35],
					  arg[36], arg[37], arg[38], arg[39],
					  arg[40], arg[41], arg[42], arg[43],
					  arg[44], arg[45], arg[46], arg[47],
					  arg[48], arg[49],
					  argl, closure ) );
#endif
	}
}

/* UNKNOWNCALL is a variant of apply where the function's arguments are
   are passed as arguments to the function.  Before the call, the procedure
   pointer is placed in SC_UNKNOWNPROC[ 1 ], and the argument count is placed
   in SC_UNKNOWNARGC.  This procedure is only entered, when there is an error
   in the call, or the procedure takes a variable number of arguments.
*/

/* Qobi h15jan2005, f22aug2008 */
TSCP  sc_unknowncall( TSCP firstarg, ... )
{
	va_list  argl;			/* List of arguments on stack */
	int  req;			/* # of required arguments */
	int  i;				/* Loop index */
	TSCP  optl;			/* Optional argument list */
	TSCP  tail;			/* Tail of optional argument list */
	SCP  utproc;			/* Untagged version of proc */

	int argp = 0;

	va_start( argl, firstarg );
	utproc = T_U( sc_unknownproc[ 1 ] );
	if ((TSCPTAG( sc_unknownproc[ 1 ] ) != EXTENDEDTAG) ||
	    (utproc->procedure.tag != PROCEDURETAG))
	   sc_error( "APPLY", "Argument is not a PROCEDURE: ~s",
		     LIST1( sc_unknownproc[ 1 ] ) );
	req = utproc->procedure.required;
	if  ((sc_unknownargc < req) ||
	     ((utproc->procedure.optional == 0) && (sc_unknownargc != req)))
	   sc_error( "APPLY", "PROCEDURE requires ~s arguments, ~s supplied",
		      LIST2( C_FIXED( req ), C_FIXED( sc_unknownargc ) ) );
	for  (i = 0; i < req; i++)
	  sc_arg[ i ] = ((argp==1)?va_arg( argl, TSCP ):(argp = 1, firstarg));
	optl = EMPTYLIST;
	if  (i++ < sc_unknownargc)  {
	   tail = (optl = sc_cons( ((argp==1)?va_arg( argl, TSCP ):(argp = 1, firstarg)), EMPTYLIST ));
	   while  (i++ < sc_unknownargc)
	      tail = (TP_U( tail )->pair.cdr = sc_cons( ((argp==1)?va_arg( argl, TSCP ):(argp = 1, firstarg)),
							EMPTYLIST ));
	}
	switch (req) {
	   case  0: return( (*utproc->procedure.code)
	   				( optl, utproc->procedure.closure ) );
	   case  1: return( (*utproc->procedure.code)
	   				( sc_arg[0], optl,
					  utproc->procedure.closure ) );
	   case  2: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], optl,
					  utproc->procedure.closure ) );
	   case  3: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  optl, utproc->procedure.closure ) );
	   case  4: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], optl,
					  utproc->procedure.closure ));
	   case  5: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], optl,
					  utproc->procedure.closure ) );
	   case  6: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  optl, utproc->procedure.closure ) );
	   case  7: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], optl,
					  utproc->procedure.closure ) );
	   case  8: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], optl,
					  utproc->procedure.closure ) );
	   case  9: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  optl, utproc->procedure.closure ) );
	   case 10: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], optl,
					  utproc->procedure.closure ) );
	   case 11: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], optl,
					  utproc->procedure.closure ) );
	   case 12: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  optl, utproc->procedure.closure ) );
	   case 13: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], optl,
					  utproc->procedure.closure ) );
	   case 14: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], optl,
					  utproc->procedure.closure ) );
	   case 15: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  optl, utproc->procedure.closure ) );
	   case 16: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], optl,
					  utproc->procedure.closure ) );
#if (MAXARGS >= 17)
	   case 17: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], optl,
					  utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 18)
	   case 18: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 19)
	   case 19: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 20)
	   case 20: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 21)
	   case 21: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 22)
	   case 22: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 23)
	   case 23: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 24)
	   case 24: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 25)
	   case 25: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 26)
	   case 26: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 27)
	   case 27: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 28)
	   case 28: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 29)
	   case 29: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 30)
	   case 30: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 31)
	   case 31: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 32)
	   case 32: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 33)
	   case 33: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 34)
	   case 34: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 35)
	   case 35: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 36)
	   case 36: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 37)
	   case 37: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 38)
	   case 38: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 39)
	   case 39: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 40)
	   case 40: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 41)
	   case 41: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 42)
	   case 42: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 43)
	   case 43: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 44)
	   case 44: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 45)
	   case 45: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 46)
	   case 46: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 47)
	   case 47: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 48)
	   case 48: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 49)
	   case 49: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 50)
	   case 50: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 51)
	   case 51: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 52)
	   case 52: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 53)
	   case 53: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 54)
	   case 54: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 55)
	   case 55: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 56)
	   case 56: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 57)
	   case 57: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 58)
	   case 58: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 59)
	   case 59: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 60)
	   case 60: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 61)
	   case 61: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 62)
	   case 62: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 63)
	   case 63: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 64)
	   case 64: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 65)
	   case 65: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 66)
	   case 66: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64], sc_arg[65],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 67)
	   case 67: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64], sc_arg[65],
					  sc_arg[66],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 68)
	   case 68: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64], sc_arg[65],
					  sc_arg[66], sc_arg[67],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 69)
	   case 69: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64], sc_arg[65],
					  sc_arg[66], sc_arg[67], sc_arg[68],
					  optl, utproc->procedure.closure ) );
#endif
#if (MAXARGS >= 70)
	   case 70: return( (*utproc->procedure.code)
					( sc_arg[0], sc_arg[1], sc_arg[2],
					  sc_arg[3], sc_arg[4], sc_arg[5],
					  sc_arg[6], sc_arg[7], sc_arg[8],
					  sc_arg[9], sc_arg[10], sc_arg[11],
					  sc_arg[12], sc_arg[13], sc_arg[14],
					  sc_arg[15], sc_arg[16], sc_arg[17],
					  sc_arg[18], sc_arg[19], sc_arg[20],
					  sc_arg[21], sc_arg[22], sc_arg[23],
					  sc_arg[24], sc_arg[25], sc_arg[26],
					  sc_arg[27], sc_arg[28], sc_arg[29],
					  sc_arg[30], sc_arg[31], sc_arg[32],
					  sc_arg[33], sc_arg[34], sc_arg[35],
					  sc_arg[36], sc_arg[37], sc_arg[38],
					  sc_arg[39], sc_arg[40], sc_arg[41],
					  sc_arg[42], sc_arg[43], sc_arg[44],
					  sc_arg[45], sc_arg[46], sc_arg[47],
					  sc_arg[48], sc_arg[49], sc_arg[50],
					  sc_arg[51], sc_arg[52], sc_arg[53],
					  sc_arg[54], sc_arg[55], sc_arg[56],
					  sc_arg[57], sc_arg[58], sc_arg[59],
					  sc_arg[60], sc_arg[61], sc_arg[62],
					  sc_arg[63], sc_arg[64], sc_arg[65],
					  sc_arg[66], sc_arg[67], sc_arg[68],
					  sc_arg[69],
					  optl, utproc->procedure.closure ) );
#endif
	}
}
