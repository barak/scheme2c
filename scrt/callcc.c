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

#ifdef __hpux
#define  LONGJMP( x, y )	longjmp( x, y )
#define  SETJMP( x )		setjmp( x )
#endif

#ifdef MAC
#define  LONGJMP( x, y )	longjmp( x, y )
#define  SETJMP( x )		setjmp( x )
#endif

#ifdef MIPS
extern  sc_setsp();
#define  LONGJMP( x, y )	longjmp( x, y )
#define  SETJMP( x )		setjmp( x )
#endif

#ifdef WIN16
#define  LONGJMP( x, y )	Throw( x, y )
#define  SETJMP( x )		Catch( x )
#endif

#ifdef VAX
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
#ifdef WIN16
	static union { struct { unsigned spx, sps; } s16;
		       S2CUINT  s32;
	}  sreg;
#endif
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
#ifdef WIN16
	sreg.s32 = (S2CUINT)(T_U(callcccp))->continuation.address;
	_asm  mov  sp, sreg.s16.spx;
	_asm  mov  bp, sp;
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
	save_fp = (S2CINT*)bfp;
	cp = sc_allocateheap( NULLCONTINUATIONSIZE+count+2+sc_maxdisplay,
			      CONTINUATIONTAG,
		              NULLCONTINUATIONSIZE+count+sc_maxdisplay );
	STACKPTR( tos );	
	fp = save_fp;
	bcount = (STACK_BYTES (fp, tos));
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
