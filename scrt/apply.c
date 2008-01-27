/* SCHEME->C */

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

/* This module defines the APPLY and UNKNOWNCALL functions.  APPLY is as
   defined in Revised**3 and UNKNOWNCALL is a variant of APPLY which is used
   by the compiler to call unknown functions.
*/

/* External declarations */

#include "objects.h"
#include "scinit.h"
#include "heap.h"
#include "apply.h"
#include <varargs.h>

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
	int  opt;       	/* true iff required arguments */
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
	}
}

/* UNKNOWNCALL is a variant of apply where the function's arguments are
   are passed as arguments to the function.  Before the call, the procedure
   pointer is placed in SC_UNKNOWNPROC[ 1 ], and the argument count is placed
   in SC_UNKNOWNARGC.  This procedure is only entered, when there is an error
   in the call, or the procedure takes a variable number of arguments.
*/

TSCP  sc_unknowncall( va_alist )
   va_dcl
{
	va_list  argl;			/* List of arguments on stack */
	int  req;			/* # of required arguments */
	int  i;				/* Loop index */
	TSCP  optl;			/* Optional argument list */
	TSCP  tail;			/* Tail of optional argument list */
	SCP  utproc;			/* Untagged version of proc */

	va_start( argl );
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
	for  (i = 0; i < req; i++)  sc_arg[ i ] = va_arg( argl, TSCP );
	optl = EMPTYLIST;
	if  (i++ < sc_unknownargc)  {
	   tail = (optl = sc_cons( va_arg( argl, TSCP ), EMPTYLIST ));
	   while  (i++ < sc_unknownargc)
	      tail = (TP_U( tail )->pair.cdr = sc_cons( va_arg( argl, TSCP ),
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
	}
}
