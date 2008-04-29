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

/* The following procedures implement CALL-WITH-CURRENT-CONTINUATION.
   CALLCCCONTINUING is the function that is executed when a continuation is
   applied.  It is called with the result to be returned and the procedure's
   closure which is the continuation created by the initial call to
   TSC_CALLWITHCURRENTCONTINUATION.  It will unwind the stack until the right
   return point is found.  If it is not found, then it will restore the stack
   from the continuation(s).  Once the stack is known to have the right
   contents, it will restore the correct state with longjmp.
*/

/* External declarations */

#include "objects.h"
#include "scinit.h"
#include "heap.h"
#include "callcc.h"
#include "apply.h"
#include "cio.h"

#ifdef AOSF
#define  LONGJMP( x, y )	sc_longjmp( x, y )
#define  SETJMP( x )		sc_setjmp( x )
extern long int  sc_longjmp( long int* context, long int result );
extern long int  sc_setjmp( long int* context );
#endif

#if defined(__hpux) || defined(LINUX) || defined(MAC) || defined(MIPS) \
  || defined(FREEBSD) || defined(AMD64)
#define  LONGJMP( x, y )	longjmp( x, y )
#define  SETJMP( x )		setjmp( x )
#endif

#ifdef MIPS
extern  sc_setsp();
#endif

#ifdef SPARC
extern int sc_setjmp( XAL1(int *) );
extern void sc_longjmp( XAL2(int *, int) );
/* The SPARC compilers need a special #pragma for setjmp-like functions, but
 * some compilers generate error messages upon seeing such a directive.
 * Hence this kludge.
 */
#include "sparc-pragma.h"
#endif

#if defined(VAX) || defined(SPARC)
#define  LONGJMP( x, y )	sc_longjmp( x, y )
#define  SETJMP( x )		sc_setjmp( x )
#endif


TSCP  sc_clink;		/* Pointer to inner most continuation on stack. */

/* Static declarations for data structures internal to the module.  These
   variables may be static as they are only used under MUTEX.  However,
   they may not hold there values across sections that aren't mutexed!
*/

static TSCP  callccresult,	/* Passes result across longjmp. */
      	     callcccp;		/* Preserves cp during stack rebuilding. */

static S2CINT  *fp,		/* Temps for constructing continuation */
              *tp,
              *tos,
              rcount,
	      bcount,
	      count;

static char   *bfp,
	      *btp,
	      *btos;

#ifdef STACK_GROWS_POSITIVE

#define STACK_BYTES(base, sp) (((S2CUINT) (sp)) - ((S2CUINT) (base)))
#define POSTINC_SP(sp) (sp)--

#else 

#define STACK_BYTES(base, sp) (((S2CUINT) (base)) - ((S2CUINT) (sp)))
#define POSTINC_SP(sp) (sp)++

#endif

#define COPY_STACK()							\
{									\
	if  (sc_clink == EMPTYLIST)  {					\
	   sc_clink = callcccp;						\
	   while  (sc_clink != EMPTYLIST)  {				\
	      btp = (T_U(sc_clink))->continuation.address;		\
	      bfp = (char*)(&(T_U(sc_clink))->continuation.word0+	\
			    sc_maxdisplay);				\
	      bcount = (T_U(sc_clink))->continuation.stackbytes;	\
	      while  (bcount--)  *POSTINC_SP(btp) = *bfp++;		\
	      sc_clink = (T_U(sc_clink))->continuation.continuation;	\
	   }								\
	}								\
}

static  callcccontinuing( result, cp )
	TSCP  result, cp;
{
	MUTEXON;
	callccresult = result;
	callcccp = cp;
	/* Unwind CLINK to see if this continuation is currently on the
	   stack.  */
	while (sc_clink != EMPTYLIST)  {
	   if  (sc_clink == cp)
	      LONGJMP( (T_U(cp))->continuation.savedstate, 1 );
	   sc_clink = (T_U(sc_clink))->continuation.continuation;
	}
	/* Continuation is not currently on the stack, so transfer to it and
           it will restore the stack.  Some implementations require the
           stack pointer to be reset before this can be done.
	*/
#ifdef MIPS
	sc_setsp( (T_U(callcccp))->continuation.address );
#ifdef COPY_STACK_BEFORE_LONGJMP
	COPY_STACK ();
#endif
#endif
	LONGJMP( (T_U(callcccp))->continuation.savedstate, 1 );
}

TSCP  sc_ntinuation_1af38b9f_v;

TSCP  sc_callcc( function )
	TSCP  function;
{
	SCP  cp;		/* Pointer to the continuation */
	S2CINT  *save_fp;	/* Save static values across heap allocate */

	CHECK_TS;
	MUTEXON;
	if (sc_clink == EMPTYLIST)
	   bfp = (char*)sc_stackbase;
	else
	   bfp = (T_U(sc_clink))->continuation.address;
	STACKPTR( tos );
 	count = (((STACK_BYTES (bfp, tos)) + ((sizeof (S2CINT)) - 1))
		 / (sizeof (S2CINT)));
#ifdef LAZY_STACK_POP
	/* NOTE WELL!
	 * For machines that must pop arguments after a function call, 
	 * the compiler may let arguments accumulate on the stack for several 
	 * function calls and pop them all at once.
	 * If your compiler uses this optimization, 'count' must be incremented
	 * by the number of S2CINTs pushed as arguments between this point and 
	 * the point where 'bcount' is computed.
	 */
	count += LAZY_STACK_INCREMENT;
#endif
	save_fp = (S2CINT*)bfp;
	cp = sc_allocateheap( NULLCONTINUATIONSIZE+count+2+sc_maxdisplay,
			      CONTINUATIONTAG,
		              NULLCONTINUATIONSIZE+count+sc_maxdisplay );
	STACKPTR( tos );	
	fp = save_fp;
	bcount = (STACK_BYTES (fp, tos));
	if (bcount > count*sizeof(S2CINT))
	    /* If you get this error, look above at LAZY_STACK_POP */
	    sc_error( "CALL-WITH-CURRENT-CONTINUATION",
		     "internal error: want to write ~s bytes of stack, "
		     "but only ~s bytes allocated.",
		      LIST2( C_FIXED( bcount ),
			     C_FIXED( count*sizeof(S2CINT) ) ) );
	cp->continuation.continuation = sc_clink;
	cp->continuation.stackbytes = bcount;
	cp->continuation.stacktrace = sc_stacktrace;
	sc_clink = U_TX( cp );
	btos = (char*)tos;
	cp->continuation.address = btos;
	tp = &cp->continuation.word0;
	rcount = sc_maxdisplay;
	while  (rcount--)  *tp++ = (S2CINT)sc_display[ rcount ];
	btp = (char*)tp;
	while  (bcount--)  *btp++ = *POSTINC_SP(btos);
	MUTEXOFF;
	if  (SETJMP( cp->continuation.savedstate ) == 0)  {
	   callccresult = sc_apply_2dtwo( function,
	   			    sc_cons( sc_makeprocedure( 1, 0,
							      callcccontinuing,
						              U_TX( cp ) ),
					     EMPTYLIST ) );
	   sc_clink = T_U( sc_clink )->continuation.continuation;
	   return( callccresult );
	}
	/* Return here when the continuation is invoked. */
#ifndef COPY_STACK_BEFORE_LONGJMP
	COPY_STACK ();
#endif
	if  (sc_savetopofstack != 0)  {
	   sc_topofstack = sc_savetopofstack;
	   sc_savetopofstack = 0;
	}
	tp = &T_U( callcccp )->continuation.word0;
	rcount = sc_maxdisplay;
	while  (rcount--)  sc_display[ rcount ] = (TSCP)(*tp++);
	sc_clink = T_U( callcccp )->continuation.continuation;
	sc_stacktrace = T_U( callcccp )->continuation.stacktrace;
	/* Move result onto the stack under mutex */
	function = callccresult;
	MUTEXOFF;
	return( function );
}
