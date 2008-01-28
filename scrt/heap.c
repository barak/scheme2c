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

/* This module implements the object storage storage system. */

/* Import definitions */

#include "objects.h"
#include "scinit.h"
#include "heap.h"
#include "callcc.h"
#include "apply.h"
#include "cio.h"

#ifndef NULL
#define NULL 0
#endif

#ifdef HP700
extern  sc_r1tor18( );
#endif
#if defined(LINUX) || defined(FREEBSD) || defined(AMD64)
extern  sc_geti386regs( S2CINT* a );
#endif
#ifdef MC680X0
extern  sc_a2to5d2to7( );
#endif
#ifdef MIPS
extern  sc_s0tos8( S2CINT* a );
#endif
#ifdef VAX
extern  sc_r2tor11( );
#endif

/* Forward declarations */

static void  move_ptr( XAL1( TSCP ) );

static SCP  move_object( XAL1( SCP ) );

static void  move_continuation_ptr( XAL1( SCP ) );

/* Set the following define to a non-zero value to enable all heap checks
   that are normally enabled by sc_gcinfo == 2.
*/

#define CHECK_S2C_HEAP 0

/* Allocate storage which is defined in "heap.h" */

unsigned char  *sc_pagegeneration,	/* page generation table */
	       *sc_pagetype,		/* page type table */
	       *sc_pagelock;		/* page lock table */

PAGELINK  *sc_pagelink;		/* page lock list link table */

S2CINT	sc_initiallink,		/* Value to put in sc_pagelink field for a
				   newly allocated page */
	sc_locklist,		/* list header for locked pages */
	sc_genlist,		/* list of modified pages */
	sc_lockcnt,		/* # of locked pages */
	sc_current_generation,  /* current generation */
	sc_next_generation;	/* next generation */

S2CINT	sc_firstphypagem1,	/* first phy page - 1 in the Scheme heap */
	sc_firstphypage,	/* first phy page in the Scheme heap */
	sc_lastphypage,		/* last phy page in the Scheme heap  */
	sc_firstpage,		/* first logical page in the Scheme heap */
	sc_lastpage,		/* last logical page in the Scheme heap  */
	sc_heappages,		/* # of pages in the Scheme heap */
	sc_limit,		/* % of heap allocated after collecton
				   that forces total collection */
	sc_freepage,		/* free page index */
	sc_maxheappages,	/* Maximum # of pages in Scheme heap */
	sc_allocatedheappages,  /* # of pages currently allocated */
	sc_generationpages,	/* # of pages in saved generations */
	*sc_firstheapp,		/* ptr to first word in the Scheme heap */
	*sc_lastheapp;		/* ptr to last word in the Scheme heap */

int	sc_conscnt;		/* # cons cells in sc_consp */
SCP	sc_consp;		/* pointer to next cons cell */

S2CINT	sc_extobjwords,		/* # of words for ext objs in sc_extobjp */
	sc_extwaste;		/* # of words wasted on page crossings */
SCP	sc_extobjp;		/* pointer to next free extended obj word */

S2CINT	sc_gcinfo,		/* controls logging */
        sc_collecting;		

static S2CINT  sc_newlist;	/* list of newly allocated pages */

S2CINT	*sc_stackbase;		/* pointer to base of the stack */

TSCP	sc_whenfreed,		/* list of items needing cleanup when free */
	sc_freed;		/* list of free items to be cleanup */

TSCP	sc_after_2dcollect_v,	/* Collection status callback */
	sc__2afrozen_2dobjects_2a_v;
				/* User managed frozen object list */

static double  starttime = 0.0;	/* Processor time at start of interval */
double  sc_usertime = 0.0,	/* Scheme time */
        sc_idletime = 0.0,	/* Outside Scheme time */
	sc_gctime = 0.0;	/* Collection time */

/* Application and collection time is kept by the following routine.  When
   a timer is stopped, it updates it and returns the delta added to it.
*/

double  sc_stoptimer( double *timer )
{
	double  currenttime, delta;

	currenttime = sc_cputime();
	delta = currenttime-starttime;
	*timer = *timer+delta;
	starttime = currenttime;
	return( delta );
}

/* Each time a weak-cons is created, an entry is made on the following list.
   Each entry of the list is a 3-element vector with the following fields:

      pointer to the next entry (or EMPTYLIST)
      pointer to the cons cell
      cell to hold the original value from the CAR of the cons cell
*/

static TSCP  weakconsl = EMPTYLIST;

#define  WEAK_LINK( x )	VECTOR_ELEMENT( x, C_FIXED( 0 ) )
#define  WEAK_CONS( x ) VECTOR_ELEMENT( x, C_FIXED( 1 ) )
#define  WEAK_CAR( x )  VECTOR_ELEMENT( x, C_FIXED( 2 ) )
#define  MAKE_WEAK	sc_make_2dvector( C_FIXED( 3 ), EMPTYLIST )

/* When pages are allocated during garbage collection, they are queued on the
   following two lists for later scanning.  One list holds pages allocated for
   cons cells and the other holds pages allocated for extended objects.  The
   lists are threaded through sc_pagelink, the pointer points to the tail of
   the list, and the tail link points to the head.
*/

static S2CINT  cons_pages = -1,
	      extended_pages = -1;

#define  QUEUE_PAGE( tail, page )  \
	if  (tail == -1)  {  \
	   tail = sc_pagelink[ page ] = page;  \
	}  else  {  \
	   sc_pagelink[ page ] = sc_pagelink[ tail ];  \
	   sc_pagelink[ tail ] = page;  \
	   tail = page;  \
	}

#define  DELETE_PAGE( tail, page )  \
	if  (tail == -1)  \
	   page = -1;  \
	else  {  \
	   page = sc_pagelink[ tail ];  \
	   sc_pagelink[ tail ] = sc_pagelink[ page ];  \
	   if  (tail == page)  tail = -1;  \
	}

/* Errors detected during garbage collection are logged by the following
   procedure.  If any errors occur, the program will abort after logging
   them.  More than 30 errors will result in the program being aborted at
   once.
*/

static SCP  moving_object;

static S2CINT  pointer_errors = 0;

static void  pointererror( char* msg, S2CUINT pp )
{
	sc_log_string( "***** COLLECT pointer error in " );
	sc_log_hex( (S2CUINT)moving_object );
	sc_log_string ( ", " );
	sc_log_hex( (S2CUINT)pp );
	sc_log_string( msg );
	if  (++pointer_errors == 30)  sc_abort();
}

#ifdef AOSF
/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  s0tos6[7], *pp;

	sc_s0tos6( s0tos6 );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef AMD64
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

S2CINT  *sc_processor_register( S2CINT reg )
{
      return( &reg );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
      S2CINT  i386regs[6], *pp;

      sc_geti386regs( i386regs );
      STACKPTR( pp );
      while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef HP700
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

int  *sc_processor_register( reg )
	int  reg;
{
	return( &reg );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
        S2CINT  r1tor18[18], *pp;

        sc_r1tor18( r1tor18 );
        STACKPTR( pp );
        while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp--) );
}
#endif

#ifdef LINUX
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

S2CINT  *sc_processor_register( S2CINT reg )
{
	return( &reg );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  i386regs[6], *pp;

	sc_geti386regs( i386regs );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef MAC
/* The following code is used to read the stack pointer. */

S2CINT  *sc_getsp()
{
	register  S2CINT* x;

	asm{ move.l sp,x }
	return( x+1 );
}

/* Traces the stack, 2 bytes at a time.  No pointers are assumed to be in the
   registers.
*/

static	trace_stack_and_registers()
{
	S2CINT  *pp;

	STACKPTR( pp );
	while  ((S2CUINT)pp < (S2CUINT)sc_stackbase)  {
	   move_continuation_ptr( (SCP)*pp );
	   pp = (S2CINT*)(((char*)pp)+2);
	}
}
#endif

#ifdef MC680X0
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

int  *sc_processor_register( reg )
	int  reg;
{
	return( &reg+1 );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  a2to5d2to7[10], *pp;

	sc_a2to5d2to7( a2to5d2to7 );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef MIPS
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

S2CINT  *sc_processor_register( S2CINT reg )
{
	return( &reg );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  s0tos8[9], *pp;

	sc_s0tos8( s0tos8 );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef VAX
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

S2CINT  *sc_processor_register( reg )
	S2CINT reg;
{
	return( &reg+1 );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  r2tor11[10], *pp;

	sc_r2tor11( r2tor11 );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif

#ifdef FREEBSD
/* The following code is used to read the stack pointer.  The register
   number is passed in to force an argument to be on the stack, which in
   turn can be used to find the address of the top of stack.
*/

S2CINT  *sc_processor_register( S2CINT reg )
{
	return( &reg );
}

/* All processor registers which might contain pointers are traced by the
   following procedure.
*/

static  trace_stack_and_registers()
{
	S2CINT  i386regs[6], *pp;

	sc_geti386regs( i386regs );
	STACKPTR( pp );
	while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}

#endif

#ifdef SPARC
/* All processor registers which might contain pointers are traced by the
   following procedure.
*/
static  trace_stack_and_registers()
{
      S2CINT  *pp;
      sc_jmp_buf tmp;
      STACKPTR( pp );
      while  (pp != sc_stackbase)  move_continuation_ptr( ((SCP)*pp++) );
}
#endif


/* The size of an extended object in words is returned by the following
   function.
*/

static S2CINT  extendedsize( SCP obj )
{
	switch  (obj->extendedobj.tag)  {

	   case  SYMBOLTAG:
	      return( SYMBOLSIZE );

	   case  STRINGTAG:
	      return( STRINGSIZE( obj->string.length ) );

	   case  VECTORTAG:
	      return( VECTORSIZE( obj->vector.length ) );

	   case  PROCEDURETAG:
	      return( PROCEDURESIZE );

	   case  CLOSURETAG:
	      return( CLOSURESIZE( obj->closure.length ) );

	   case  CONTINUATIONTAG:
	      return( CONTINUATIONSIZE( obj->continuation.length ) );

	   case  RECORDTAG:
	      return( RECORDSIZE( obj->record.length ) );

	   case  DOUBLEFLOATTAG:
	      return( DOUBLEFLOATSIZE );

	   case  FORWARDTAG:
	      return( FORWARDSIZE( obj->forward.length ) );

	   case  WORDALIGNTAG:
	      return( WORDALIGNSIZE );

	   default:
	      sc_log_string( "***** COLLECT Unknown extended object: " );
	      sc_log_hex( (S2CUINT)obj );
	      sc_log_string( " " );
	      sc_log_hex( (S2CUINT)obj->extendedobj.tag );
	      sc_log_string( "\n" );
	      sc_abort();
	}
}

/* Words inside continuations are checked by the following function.  If the
   word looks like a pointer, then the page containing the object will be
   locked and the object will be moved.  
*/

static void  move_continuation_ptr( SCP pp )
{
	S2CINT  page, tag;
	SCP  sweep, next;

	if ((S2CUINT)pp >= (S2CUINT)sc_firstheapp  && 
	    (S2CUINT)pp < (S2CUINT)sc_lastheapp)  {
	   page = ADDRESS_PAGE( pp );
	   if  (S2CPAGE( page )  &&
		sc_current_generation == sc_pagegeneration[ page ])  {
	      tag = sc_pagetype[ page ];
	      if  (tag == PAIRTAG)  {
	         /* Trace just that PAIR */
	         pp = (SCP)(((S2CINT)pp) & ~(((S2CINT)CONSBYTES)-1));
		 if  (sc_pagelock[ page ] == 0)  {
		    sc_pagelock[ page ] = 1;
		    sc_pagelink[ page ] = sc_locklist;
		    sc_locklist = page;
		    sc_lockcnt = sc_lockcnt+1;
		 }
		 if  (sc_gcinfo == 2  &&  pp->forward.tag != FORWARDTAG)  {
		    sc_log_string( "              move_continuation_ptr " );
		    sc_log_hex( (S2CUINT)U_T( pp, PAIRTAG ) );
		    sc_log_string( "\n" );
		 }
		 move_ptr( U_T( pp, PAIRTAG ) );
		 return;
	      }
	      /* Trace the referenced object */
	      if  (tag == BIGEXTENDEDTAG)  {
		  while (sc_pagetype[ page ] != EXTENDEDTAG)  page--;
	      }
	      sweep = (SCP)PAGE_ADDRESS( page );
	      if  (sc_pagelock[ page ] == 0)  {
		 sc_pagelock[ page ] = 1;
		 sc_pagelink[ page ] = sc_locklist;
		 sc_locklist = page;
	         if  (sweep->wordalign.tag == WORDALIGNTAG)  {
	            sweep = (SCP)( ((S2CINT*)sweep)+WORDALIGNSIZE );
	         }
		 sc_lockcnt = (extendedsize( sweep )+PAGEWORDS-1)/PAGEWORDS+
		 	      sc_lockcnt;
	      }
	      while  (ADDRESS_PAGE( sweep ) == page  &&
		      sweep->unsi.gned != ENDOFPAGE)  {
		 next = (SCP)( ((S2CINT*)sweep)+extendedsize( sweep ) );
		 if  ((S2CUINT)pp < (S2CUINT)next)  {
		    /* sweep points to object to move */
		    if  (sc_gcinfo == 2  &&
		         sweep->forward.tag != FORWARDTAG)  {
		       sc_log_string( "              move_continuation_ptr " );
		       sc_log_hex( (S2CUINT)U_TX( sweep ) );
		       sc_log_string( "\n" );
		    }
		    move_ptr( U_TX( sweep ) );
		    return;
		 }
		 sweep = next;
	      }
	   }
	}
}

/* Objects are moved from old space to new space by calling this procedure
   with a Scheme pointer to the object.  Note that this function does not
   return the new value of the pointer, as it cannot be discerned at this time
   as all locked pages may not have been found yet.  N.B. in the generational
   scheme, only objects in sc_current_generation are moved.
*/

static void  move_ptr( TSCP tpp )
{
	S2CINT  length, words, *oldp, *newp, page;
	TSCP  new;
	SCP  pp;

	pp = T_U( tpp );
	switch  TSCPTAG( tpp )  {

	   case  FIXNUMTAG:
	   	return;

	   case  EXTENDEDTAG:
	   	page = ADDRESS_PAGE( pp );
		if  (NOT_S2CPAGE( page )  ||
		     pp->forward.tag == FORWARDTAG  ||
		     pp->wordalign.tag == WORDALIGNTAG  ||
		     sc_pagegeneration[ page ] != sc_current_generation)
		   return;
		if  (sc_pagetype[ page ] != EXTENDEDTAG)  {
		   pointererror( " not in an EXTENDEDTAG page\n",
		   		 (S2CUINT)pp );
		   return;
		}
		words = extendedsize( pp );
		length = words;
		newp = (S2CINT*)sc_allocateheap( extendedsize( pp ),
					      pp->extendedobj.tag, 0 );
		new = U_T( newp, EXTENDEDTAG );
		oldp = (S2CINT*)pp;
		while  (words--)  *newp++ = *oldp++;
		pp->forward.tag = FORWARDTAG;
		pp->forward.length = length;
		pp->forward.forward = new;
		return;

	   case  IMMEDIATETAG:
	        return;

	   case  PAIRTAG:
		page = ADDRESS_PAGE( pp );
	        if  (pp->forward.tag == FORWARDTAG  ||
		     sc_pagegeneration[ page ] != sc_current_generation)
		   return;
		if  (sc_pagetype[ page ] != PAIRTAG)  {
		   pointererror( " not in a PAIRTAG page\n",
		   		 (S2CUINT)pp );
		   return;
		}
		pp->forward.forward = sc_cons( pp->pair.car, pp->pair.cdr );
		pp->forward.tag = FORWARDTAG;
		pp->forward.length = CONSSIZE;
		return;
	}
}  

/* MOVE_OBJECT is called to move all extended objects in a page starting at
   a starting point.  It will return a pointer to the first object that it
   could not move, or NULL if the page was finished.
*/

static SCP  move_object( SCP pp )
{
	S2CINT  size, cnt, vpage, left;
	PATSCP  obj;

	left = (PAGEBYTES-ADDRESS_OFFSET( pp ))/sizeof(S2CINT);
	while  (left > 0  && (pp != sc_extobjp  ||  sc_extobjwords == 0)  &&
		pp->unsi.gned != ENDOFPAGE)  {
	   moving_object = pp;
	   switch  ( pp->extendedobj.tag )  {
	      case  SYMBOLTAG:
	         move_ptr( pp->symbol.name );
		 vpage = ADDRESS_PAGE( pp->symbol.ptrtovalue );
		 if  (S2CPAGE( vpage ))
		    pp->symbol.ptrtovalue = &pp->symbol.value;
		 move_ptr( *pp->symbol.ptrtovalue );
		 move_ptr( pp->symbol.propertylist );
		 size = SYMBOLSIZE;
		 break;

	      case  STRINGTAG:
	   	 size = STRINGSIZE( pp->string.length );
		 break;

	      case  VECTORTAG:
	         cnt = pp->vector.length;
		 obj = &pp->vector.element0;
		 while  (cnt--)  move_ptr( *obj++ );
		 size = VECTORSIZE( pp->vector.length );
		 break;	         

	      case  PROCEDURETAG:
	         move_ptr( pp->procedure.closure );
	   	 size = PROCEDURESIZE;
		 break;

	      case  CLOSURETAG:
	         move_ptr( pp->closure.closure );
		 cnt = pp->closure.length;
		 obj = &pp->closure.var0;
		 while  (cnt--)  move_ptr( *obj++ );
		 size = CLOSURESIZE( pp->closure.length );
		 break;

	      case  CONTINUATIONTAG:
	   	 move_ptr( pp->continuation.continuation );
		 obj = &pp->continuation.continuation;
		 cnt = pp->continuation.length;
#ifdef MAC
		 cnt = cnt*2-1;
		 ++obj;
		 while	(cnt--)  {
		    move_continuation_ptr( (SCP)*obj );
		    obj = (PATSCP)(((char*)obj)+2);
		 }
#else
		 while	(cnt--)  move_continuation_ptr( ((SCP)*(++obj)) );
#endif
		 size = CONTINUATIONSIZE( pp->continuation.length );
		 break;

	      case  RECORDTAG:
	         move_ptr( pp->record.methods );
	         cnt = pp->record.length;
		 obj = &pp->record.element0;
		 while  (cnt--)  move_ptr( *obj++ );
		 size = RECORDSIZE( pp->record.length );
		 break;	

	      case  DOUBLEFLOATTAG:
	   	 size = DOUBLEFLOATSIZE;
		 break;

	      case  FORWARDTAG:
	         size = FORWARDSIZE( pp->forward.length );
		 break;

	      case  WORDALIGNTAG:
		 size = WORDALIGNSIZE;
		 break;

	      default:
	         pointererror( " is not a valid extended object tag\n",
	         	       pp->extendedobj.tag );
	   }
	   pp = (SCP)( ((S2CINT*)pp)+size );
	   left = left-size;
	}
	if  (left > 0  &&  pp == sc_extobjp  &&  sc_extobjwords != 0)
	   return( pp );
	return( NULL );
}

/* The following function is called to resolve a pointer that might be
   forwarded.  It returns the resolved pointer.
*/

static TSCP  resolveptr( TSCP obj )
{
	if  ((TSCPTAG( obj ) & 1) && (T_U( obj )->forward.tag == FORWARDTAG))
	   return( T_U( obj )->forward.forward );
	return( obj );
}

/* Save the car of each weak cons cell that contains a pointer into the heap
   and replace it with #F.
*/

static  save_weakconsl()
{
	TSCP  wl, weakcons;
	SCP  pp;

	wl = weakconsl;
	while  (wl != EMPTYLIST)  {
	   weakcons = WEAK_CONS( wl );
	   pp = T_U( PAIR_CAR( weakcons ) );
	   if  (TSCPTAG( PAIR_CAR( weakcons ) ) & 1  &&
	        pp >= (SCP)sc_firstheapp  &&  pp < (SCP)sc_lastheapp)  {
	      WEAK_CAR( wl ) = PAIR_CAR( weakcons );
	      PAIR_CAR( weakcons ) = FALSEVALUE;
	   }
	   else  {
	      WEAK_CAR( wl ) = FALSEVALUE;
	   }
	   wl = WEAK_LINK( wl );
	}
}

/* Rebuild the weak cons list. */

static  rebuild_weakconsl()
{
	TSCP  wl, oldcons, newcons, oldcar, newcar, weak;

	wl = weakconsl;
	weakconsl = EMPTYLIST;
	while  (wl != EMPTYLIST)  {
	   newcons = resolveptr( (oldcons = WEAK_CONS( wl )) );
	   newcar = resolveptr( (oldcar = WEAK_CAR( wl )) );
	   if  (oldcons == newcons  && 
		sc_pagegeneration[ ADDRESS_PAGE( oldcons ) ] == 
		sc_current_generation)  {
	      /* Cons cell was not retained so drop from list */
	      wl = resolveptr( WEAK_LINK( wl ) );
	   }  
	   else  {
	      if  (oldcar != FALSEVALUE  &&
		   (oldcar != newcar  ||
		    sc_pagegeneration[ ADDRESS_PAGE( oldcar ) ] !=
		    sc_current_generation))  {
	         /* Object is still in use so restore it's car ptr */
	         PAIR_CAR( newcons ) = oldcar;
	      }
	      weak = MAKE_WEAK;
	      WEAK_LINK( weak ) = weakconsl;
	      weakconsl = weak;
	      WEAK_CONS( weak ) = oldcons;
	      wl = resolveptr( WEAK_LINK( wl ) );
	   }
	}
}

/* Once all objects are moved, objects needing special action on deletion are
   discovered by examining SC_WHENFREED.  All objects that have not been moved
   are placed on SC_FREED, and those that have been moved are retained on
   SC_WHENFREED.
*/

static  check_unreferenced()
{
	TSCP  objects, object_procedure, object;

	objects = resolveptr( sc_whenfreed );
	sc_whenfreed = EMPTYLIST;
	while  (objects != EMPTYLIST)  {
	   object_procedure = resolveptr( PAIR_CAR( objects ) );
	   object = PAIR_CAR( object_procedure );
	   if  (object == resolveptr( object )  &&
		sc_pagegeneration[ ADDRESS_PAGE( object ) ] == 
		sc_current_generation)  {
	      /* Object was not forwarded, so it needs to be cleaned up. */
	      sc_freed = sc_cons( object_procedure, sc_freed );
	   }
	   else  {
	      /* Object was forwarded, so leave it on sc_whenfreed. */
	      sc_whenfreed = sc_cons( object_procedure, sc_whenfreed );
	   }
	   objects = resolveptr( PAIR_CDR( objects ) );
	}
}

/* The moves are coordinated by the following function which moves objects on
   newly allocated pages until there is nothing left to move.
*/

static  move_the_heap()
{
	S2CINT  progress, count, weaktodo, unreferenced, page;
	SCP  myconsp, myextobjp, newp;

	myconsp = NULL;
	myextobjp = NULL;
	weaktodo = 1;
	unreferenced = 1;
	progress = 1;
	while  (progress--)  {
	   /* Move all the currently allocated, but unmoved pairs. */
	   if  (myconsp == NULL)  {
	      DELETE_PAGE( cons_pages, page );
	      if  (page != -1)  {
		 sc_pagelink[ page ] = sc_newlist;
		 sc_newlist = page;
	         myconsp = (SCP)PAGE_ADDRESS( page );
	      }
	   }
	   if  (myconsp != NULL  &&
	   	(myconsp != sc_consp || sc_conscnt == 0))  {
	      count = (PAGEBYTES-ADDRESS_OFFSET( myconsp ))/CONSBYTES;
	      progress = 1;
	      while  (count--  &&  (myconsp != sc_consp || sc_conscnt == 0))  {
	         moving_object = myconsp;
	         move_ptr( myconsp->pair.car );
	         move_ptr( myconsp->pair.cdr );
	         myconsp = (SCP)(((char*)myconsp)+CONSBYTES);
	      }
	      if  (count == -1)  myconsp = NULL;
	   }

	   /* Move all currently allocated, but unmoved extended items */
	   if  (myextobjp == NULL)  {
	      DELETE_PAGE( extended_pages, page );
	      if  (page != -1)  {
		 sc_pagelink[ page ] = sc_newlist;
		 sc_newlist = page;
	         myextobjp = (SCP)PAGE_ADDRESS( page );
	      }
	   }
	   if  (myextobjp != NULL)  {
	      newp = move_object( myextobjp );
	      if  (newp != myextobjp)  progress = 1;
	      myextobjp = newp;
	   }
	   /* Find weak references needing cleanup */
	   if  (progress == 0  &&  weaktodo)  {
	      weaktodo = 0;
	      rebuild_weakconsl();
	      progress = 1;
	   }
	   /* Find unreferenced objects needing cleanup */
	   if  (progress == 0  &&  unreferenced)  {
	      unreferenced = 0;
	      check_unreferenced();
	      progress = 1;
	   }
	}
	if  (pointer_errors)  sc_abort();
}

/* Objects in the current generation that have references in previous
   generations are moved in the following routine.
*/

static  move_the_generations()
{
	S2CINT  page = sc_genlist, count, pageaddr;
	SCP  myconsp;

	/* Correct the newly allocated pages */
	while  (page != -1)  {
	   pageaddr = PAGE_ADDRESS( page );
	   switch  (sc_pagetype[ page ])  {

	      case  PAIRTAG:
		 myconsp = (SCP)PAGE_ADDRESS( page );
		 count = PAGEBYTES/CONSBYTES;
		 while  (count--)  {
		    move_ptr( myconsp->pair.car );
		    move_ptr( myconsp->pair.cdr );
		    myconsp = (SCP)(((char*)myconsp)+CONSBYTES);
		 }
		 break;

	      case  EXTENDEDTAG:
	         move_object( (SCP)PAGE_ADDRESS( page ) );
		 break;
	   }
	   page = sc_pagelink[ ADDRESS_PAGE( pageaddr ) ];
	}
}

/* Once all objects are moved, pointers can be corrected to either point to the
   new object (when it can be copied), or point to the old object (when the
   page is locked).  This is done by the following function which takes a
   tagged pointer as its argument and returns the new value of the pointer.
*/

static TSCP  correct( TSCP tobj )
{
	SCP  obj;

	if  (((S2CINT)tobj) & 1)  {
	   obj = T_U( tobj );
	   if  ( (obj->forward.tag != FORWARDTAG)  ||
	         sc_pagelock[ ADDRESS_PAGE( obj ) ] )  return  tobj;
	   return( obj->forward.forward );
	}
	return( tobj );
}

/* The pointers within extended objects are corrected by the following
   function.  It is called with a pointer to an object.  All objects which
   follow it on that page will be corrected.
*/

static  correct_object( SCP pp )
{
	S2CINT  page, size, cnt;
	PATSCP  obj;

	page = ADDRESS_PAGE( pp );
	while  (ADDRESS_PAGE( pp ) == page  &&
		pp->unsi.gned != ENDOFPAGE  &&
		(pp != sc_extobjp  ||  sc_extobjwords == 0))  {
	   switch  ( pp->extendedobj.tag )  {
	      case  SYMBOLTAG:
	         pp->symbol.name = correct( pp->symbol.name );
		 *pp->symbol.ptrtovalue = correct( *pp->symbol.ptrtovalue );
		 pp->symbol.propertylist = correct( pp->symbol.propertylist );
		 size = SYMBOLSIZE;
		 break;

	      case  STRINGTAG:
	   	 size = STRINGSIZE( pp->string.length );
		 break;

	      case  VECTORTAG:
	         cnt = pp->vector.length;
		 obj = &pp->vector.element0;
		 while  (cnt--)  {
		    *obj = correct( *obj );
		    obj++;
		 }
		 size = VECTORSIZE( pp->vector.length );
		 break;	         

	      case  PROCEDURETAG:
	         pp->procedure.closure = correct( pp->procedure.closure );
	   	 size = PROCEDURESIZE;
		 break;

	      case  CLOSURETAG:
	         pp->closure.closure = correct( pp->closure.closure );
		 cnt = pp->closure.length;
		 obj = &pp->closure.var0;
		 while  (cnt--)  {
		    *obj = correct( *obj );
		    obj++;
		 }
		 size = CLOSURESIZE( pp->closure.length );
		 break;

	      case  CONTINUATIONTAG:
	   	 pp->continuation.continuation = 
		    correct( pp->continuation.continuation );
		 size = CONTINUATIONSIZE( pp->continuation.length );
		 break;

	      case  RECORDTAG:
	         pp->record.methods = correct( pp->record.methods );
	         cnt = pp->record.length;
		 obj = &pp->record.element0;
		 while  (cnt--)  {
		    *obj = correct( *obj );
		    obj++;
		 }
		 size = RECORDSIZE( pp->record.length );
		 break;	

	      case  DOUBLEFLOATTAG:
	   	 size = DOUBLEFLOATSIZE;
		 break;

	      case  WORDALIGNTAG:
		 size = WORDALIGNSIZE;
		 break;

	      default:
	         sc_log_string( "***** COLLECT Unknown extended object: " );
		 sc_log_hex( (S2CUINT)pp );
		 sc_log_string( " " );
		 sc_log_hex( (S2CUINT)pp->extendedobj.tag );
		 sc_log_string( "\n" );
	         sc_abort();
	   }
	   pp = (SCP)( ((S2CINT*)pp)+size );
	}
}

/* Pointer correction to lists of pages is done by the following procedure.
   The list is terminated by a -1, and the sc_pagelink field for each page
   is set to linkvalue.
*/

static  correct_pointers( S2CINT page, S2CINT linkvalue )
{
	S2CINT  count, i;
	PATSCP  ptr;

	/* Correct the newly allocated pages */
	while  (page != -1)  {
	   switch  (sc_pagetype[ page ])  {
	      case  PAIRTAG:
		 ptr = (PATSCP)PAGE_ADDRESS( page );
		 count = PAGEBYTES/(CONSBYTES/2);
		 while  (count--)  {
		    if  ((*((S2CINT*)ptr) & 1)  &&
		         (T_U(*ptr)->forward.tag == FORWARDTAG)  &&
		         (sc_pagelock[ ADDRESS_PAGE( *ptr ) ] == 0))
		       *ptr = T_U(*ptr)->forward.forward;
		    ptr++;
		    }
		 i = page;
		 page = sc_pagelink[ page ];
		 sc_pagelink[ i ] = linkvalue;
		 break;

	       case  EXTENDEDTAG:
		 correct_object( (SCP)PAGE_ADDRESS( page ) );
		 i = page;
		 page = sc_pagelink[ page ];
		 do  sc_pagelink[ i++ ] = linkvalue;
		 while  (i <= sc_lastpage  &&
			 sc_pagetype[ i ] == BIGEXTENDEDTAG);
		 break;
	   }
	}
}

/* After pointers have been corrected, the items on locked pages need to have
   their correct version (found in the new copy) copied to the old page.  In
   addition, objects which were not forwarded must be changed so that their
   pointers will no longer be followed.  This is done by setting the CAR and
   CDR of the pair to 0, and turning extended objects into strings.  Pages
   that are locked are added to sc_genlist so that will be checked on the
   next collection.
*/

static  copyback_locked_pages( S2CINT locklist )
{
	S2CINT  page, count, vpage;
	SCP  obj, fobj, sobj;

	while  (locklist != -1)  {
	   page = locklist;
	   obj = (SCP)PAGE_ADDRESS( page );
	   sc_pagelock[ page ] = 0;
	   sc_pagegeneration[ page ] = sc_next_generation;
	   locklist = sc_pagelink[ locklist ];
	   sc_pagelink[ page ] = sc_genlist;
	   sc_genlist = page;
	   if  (sc_pagetype[ page ] == PAIRTAG)  {
	      /* Move back only the forwarded CONS cells */
	      count = PAGEBYTES/CONSBYTES;
	      while  (count--)  {
	         if  (obj->forward.tag == FORWARDTAG)  {
		    fobj = T_U( obj->forward.forward );
		    obj->pair.car = fobj->pair.car;
		    obj->pair.cdr = fobj->pair.cdr;
		 }
		 else  {
		    obj->pair.car = 0;
		    obj->pair.cdr = 0;
		 }
		 obj = (SCP)((char*)(obj)+CONSBYTES);
	      }
	   }
	   else  if  (sc_pagetype[ page ] == EXTENDEDTAG)  {
	      /* Move extra pages into the next generation */
	      if  (obj->wordalign.tag == WORDALIGNTAG)  {
		 obj = (SCP)( ((S2CINT*)obj)+WORDALIGNSIZE );
	      }
	      count = extendedsize( obj );
	      vpage = page;
	      while (count > PAGEWORDS)  {
		 sc_pagegeneration[ ++vpage ] = sc_next_generation;
		 sc_pagelink[ vpage ] = OKTOSET;
		 count = count-PAGEWORDS;
	      }
	      /* Move back the forwarded extended items */
	      while  (ADDRESS_PAGE( obj ) == page  &&
	      	      (obj != sc_extobjp  ||  sc_extobjwords == 0)  &&
	      	      obj->unsi.gned != ENDOFPAGE)  {
		 if  (obj->forward.tag == FORWARDTAG)  {
		    sobj = obj;
		    fobj = T_U( obj->forward.forward );
		    count = obj->forward.length;
		    while  (count--)  {
		       *((S2CINT*)obj) = *((S2CINT*)fobj);
		       obj = (SCP)(((S2CINT*)obj)+1);
		       fobj = (SCP)(((S2CINT*)fobj)+1);
		    }
		    if  (sobj->symbol.tag == SYMBOLTAG)  {
		       vpage = ADDRESS_PAGE( sobj->symbol.ptrtovalue );
		       if  (S2CPAGE( vpage ))
		          sobj->symbol.ptrtovalue = &sobj->symbol.value;
		    }
		 }
		 else  if  (obj->wordalign.tag == WORDALIGNTAG)  {
		    obj = (SCP)( ((S2CINT*)obj)+WORDALIGNSIZE );
		 }
		 else  {
		    count = extendedsize( obj );
		    obj->string.length = ((count-2)*sizeof(S2CINT))+
					 sizeof(S2CINT)-1;
		    obj->string.tag = STRINGTAG;
		    obj = (SCP)( ((S2CINT*)obj)+count );
		 }
	      }
	   }
	}
}

/* Object cleanup actions are invoked here at the end of garbage collection.
*/

void  sc_apply_when_unreferenced()
{
	TSCP  freed, object_procedure;
	struct  {			/* Save sc_unknowncall's state here */
	   TSCP  arg[MAXARGS];
	   TSCP  proc[4];
	   S2CINT   count;
	} save;
	S2CINT  i;

	/* Save sc_freed and sc_unknowncall's state */
	for  (i = 0; i < 4; i++)  save.proc[ i ] = sc_unknownproc[ i ];
	for  (i = 0; i < MAXARGS; i++)  save.arg[ i ] = sc_arg[ i ];
	save.count = sc_unknownargc;
	freed = sc_freed;
	sc_freed = EMPTYLIST;

	/* Apply the when-unreferenced procedures */
	while  (freed != EMPTYLIST)  {
	   object_procedure = PAIR_CAR( freed );
	   sc_apply_2dtwo( PAIR_CDR( object_procedure ),
		          sc_cons( PAIR_CAR( object_procedure ), EMPTYLIST ) );
	   freed = PAIR_CDR( freed );
	}

	/* Restore sc_unknowncall's state */
	for  (i = 0; i < 4; i++)  sc_unknownproc[ i ] = save.proc[ i ];
	for  (i = 0; i < MAXARGS; i++)  sc_arg[ i ] = save.arg[ i ];
	sc_unknownargc = save.count;	
}
	   

/* This function is called to check the obarray to make sure that it is
   intact.
*/

static void  check_obarray()
{
	S2CINT  i, len, page;
	PATSCP  ep;
	TSCP  lp, symbol, value;
	SCP  obarray;

	obarray = T_U( sc_obarray );
	if  (TSCPTAG( sc_obarray ) != EXTENDEDTAG  ||
	     obarray->vector.tag != VECTORTAG)  {
	   sc_log_string( "***** COLLECT OBARRAY is not a vector " );
	   sc_log_hex( (S2CUINT)sc_obarray );
	   sc_log_string( "\n" );
	   sc_abort();
	}
	len = obarray->vector.length;
	if  (len != 1023)   {
	   sc_log_string( "***** COLLECT OBARRAY length is wrong " );
	   sc_log_hex( (S2CUINT)sc_obarray );
	   sc_log_string( "\n" );
	   sc_abort();
	}
	ep = &obarray->vector.element0;
	for  (i = 0;  i < len;  i++)  {
	   lp = *ep++;
	   while  (lp != EMPTYLIST)  {
	      if  (TSCPTAG( lp ) != PAIRTAG)  {
	         sc_log_string(
		 	"***** COLLECT OBARRAY element is not a list " );
		 sc_log_hex( (S2CUINT)lp );
		 sc_log_string( "\n" );
		 sc_abort();
	      }
	      symbol = T_U( lp )->pair.car;
	      if  (T_U( symbol )->symbol.tag != SYMBOLTAG)  {
	         sc_log_string(
			"***** COLLECT OBARRAY entry is not a symbol " );
		 sc_log_hex( (S2CUINT)symbol );
		 sc_log_string( "\n" );
	         sc_abort();
	      }
	      page = ADDRESS_PAGE( symbol );
	      if  (sc_pagegeneration[ page ] & 1  &&
	           sc_pagegeneration[ page ] != sc_current_generation)  {
		 sc_log_string(
			"***** COLLECT OBARRAY symbol generation error " );
		 sc_log_hex( (S2CUINT)symbol );
		 sc_log_string( "\n" );
	         sc_abort();
	      }
	      value = *T_U( symbol )->symbol.ptrtovalue;
	      page = ADDRESS_PAGE( value );
	      if  (TSCPTAG( value ) & 1  &&
	           S2CPAGE( page )  &&
	      	   sc_pagegeneration[ page ] & 1  &&
		   sc_pagegeneration[ page ] != sc_current_generation)  {
		 sc_log_string(
		 	"***** COLLECT OBARRAY value generation error " );
		 sc_log_hex( (S2CUINT)value );
		 sc_log_string( "\n" );
	         sc_abort();
	      }
	      if  (TSCPTAG( value ) & 1  &&
		   S2CPAGE( page )  &&
		   (~sc_pagegeneration[ ADDRESS_PAGE( symbol ) ]) & 1  &&
		   sc_pagegeneration[ page ] == sc_current_generation  &&
		   sc_pagelink[ ADDRESS_PAGE( symbol ) ] == 0  &&
		   ADDRESS_PAGE( symbol ) == 
		   ADDRESS_PAGE( T_U( symbol )->symbol.ptrtovalue ))  {
		 sc_log_string(
		        "***** COLLECT OBARRAY missed a top-level set! " );
		 sc_log_hex( (S2CUINT)symbol );
		 sc_log_string( "\n" );
		 sc_abort();
	      }
	      if  (sc_pagetype[ ADDRESS_PAGE( symbol ) ] != EXTENDEDTAG)  {
		 sc_log_string( 
		        "***** COLLECT OBARRAY symbol page type error " );
		 sc_log_hex( (S2CUINT)symbol );
		 sc_log_string( "\n" );
	         sc_abort();
	      }
	      lp = T_U( lp )->pair.cdr;
	   }
	}
}

/* The following procedure verifies that a pointer is correct. */

static void  check_ptr( TSCP tpp )
{
	S2CINT  page;

	page = ADDRESS_PAGE( tpp );
	if  (((S2CINT) tpp) & 1)  {
	   if  (S2CPAGE( page ))  {
	      if  ((sc_pagegeneration[ page ] != sc_current_generation  &&
	     	    sc_pagegeneration[ page ] & 1)  ||
		   sc_pagetype[ page ] != TSCPTAG( tpp ))  {
	         pointererror( " fails check_ptr\n",
		 	       ((S2CUINT)T_U( tpp )) );
	      }
	   }
	   else  if  (TSCPTAG( tpp ) == PAIRTAG)  {
	      pointererror( " fails check_ptr\n", ((S2CUINT)T_U( tpp )) );
	   }
	}
}

/* A page of objects is checked by the following procedure. */

static SCP  check_object( SCP pp )
{
	S2CINT  page, size, cnt, vpage;
	PATSCP  obj;

	page = ADDRESS_PAGE( pp );
	while  (ADDRESS_PAGE( pp ) == page  &&
		(pp != sc_extobjp  ||  sc_extobjwords == 0)  &&
		pp->unsi.gned != ENDOFPAGE)  {
	   moving_object = pp;
	   switch  ( pp->extendedobj.tag )  {
	      case  SYMBOLTAG:
	         check_ptr( pp->symbol.name );
		 vpage = ADDRESS_PAGE( pp->symbol.ptrtovalue );
		 check_ptr( *pp->symbol.ptrtovalue );
		 check_ptr( pp->symbol.propertylist );
		 size = SYMBOLSIZE;
		 break;

	      case  STRINGTAG:
	   	 size = STRINGSIZE( pp->string.length );
		 break;

	      case  VECTORTAG:
	         cnt = pp->vector.length;
		 obj = &pp->vector.element0;
		 while  (cnt--)  check_ptr( *obj++ );
		 size = VECTORSIZE( pp->vector.length );
		 break;	         

	      case  PROCEDURETAG:
	         check_ptr( pp->procedure.closure );
	   	 size = PROCEDURESIZE;
		 break;

	      case  CLOSURETAG:
	         check_ptr( pp->closure.closure );
		 cnt = pp->closure.length;
		 obj = &pp->closure.var0;
		 while  (cnt--)  check_ptr( *obj++ );
		 size = CLOSURESIZE( pp->closure.length );
		 break;

	      case  CONTINUATIONTAG:
	   	 check_ptr( pp->continuation.continuation );
		 size = CONTINUATIONSIZE( pp->continuation.length );
		 break;

	      case  RECORDTAG:
	         check_ptr( pp->record.methods );
	         cnt = pp->record.length;
		 obj = &pp->record.element0;
		 while  (cnt--)  check_ptr( *obj++ );
		 size = RECORDSIZE( pp->record.length );
		 break;	

	      case  DOUBLEFLOATTAG:
	   	 size = DOUBLEFLOATSIZE;
		 break;

	      case  WORDALIGNTAG:
		 size = WORDALIGNSIZE;
		 break;

	      default:
	         pointererror( " is not a valid extended object tag\n",
	         	       pp->extendedobj.tag );
	   }
	   pp = (SCP)( ((S2CINT*)pp)+size );
	}
	if  (ADDRESS_PAGE( pp ) == page  &&  pp == sc_extobjp  &&
	     sc_extobjwords != 0)
	   return( pp );
	return( NULL );
}

/* A page of pairs is checkled by the following procedure. */

static void  check_pairs( SCP pp )
{
	S2CINT  count;
	PATSCP  ptr;

	ptr = (PATSCP)pp;
	count = (PAGEBYTES/CONSBYTES)*2;
	while  (count--  &&
		(ptr != (PATSCP)sc_consp  ||  sc_conscnt == 0))  {
	   moving_object = (SCP)(((S2CUINT)ptr) & 0xfffffff8L);
	   check_ptr( *ptr );
	   ptr++;
	 }
}

/* The following function can be called to check that all objects in the
   heap are valid.
*/

static void  check_heap( )
{
	S2CINT  i;

	/* Verify that all pages containing pairs are in good shape */
	for  (i = sc_firstpage; i <= sc_lastpage; i++)  {
	   if  ((sc_pagegeneration[ i ] == sc_current_generation  ||
		 ~sc_pagegeneration[ i ] & 1)  &&
		sc_pagegeneration[ i ] != 0)  {
	      if  (sc_pagetype[ i ] == PAIRTAG)  {
		 check_pairs( (SCP)PAGE_ADDRESS( i ) );
	      }
	      if  (sc_pagetype[ i ] == EXTENDEDTAG)  {
		 check_object( (SCP)PAGE_ADDRESS( i ) );
	      }
	   }
	}
	if  (pointer_errors)  sc_abort();
}

/* Check the weakconsl for proper format. */

static void  check_weakconsl()
{
	TSCP  wl = weakconsl;

	while  (wl != EMPTYLIST)  {
	   check_ptr( wl );
	   check_ptr( WEAK_LINK( wl ) );
	   check_ptr( WEAK_CONS( wl ) );
	   check_ptr( WEAK_CAR( wl ) );
	   wl = WEAK_LINK( wl );
	}
	if  (pointer_errors)  abort();
}
	
/* Garbage collection is invoked to attempt to recover free storage when a
   request for storage cannot be met.  It will recover using a generational
   version of the "mostly copying" method.  See the .h file or the research
   reports for more details.
*/

TSCP  sc_collect_v;

TSCP  sc_collect()
{
	S2CINT  i, wasallocated, savemutex;
	TSCP  constl, fl;
	double  thisgctime;

	if  (sc_collecting)  {
	   sc_log_string( "***** COLLECT Out of space during collection\n" );
	   sc_abort();
	}
	sc_collecting = 1;
	savemutex = sc_mutex;
	sc_stoptimer( &sc_usertime );
	sc_initiallink = NOTOKTOSET;
	wasallocated = sc_allocatedheappages;

	if  (sc_gcinfo == 2 || CHECK_S2C_HEAP)	{
	   /* Perform additional consistency checks */
	   check_heap();
	   check_obarray();
	   check_weakconsl();
	}
	if  (sc_gcinfo)  {
	   sc_log_string( "\n***** COLLECT " );
	   sc_log_dec( (wasallocated*100)/sc_heappages );
	   sc_log_string( "% allocated (" );
	   sc_log_dec( (sc_extwaste*100)/(sc_heappages*PAGEWORDS) );
	   sc_log_string( "% waste, " );
	   sc_log_dec( (sc_heappages*PAGEBYTES+ONEMB/2)/ONEMB );
	   sc_log_string( " MB) -> \n" );
	}

	/* Zero the current cons block, end the current extended block,
	   initialize sc_locklist, advance the generation.
	*/
	sc_conscnt = sc_conscnt+sc_conscnt;
	while  (sc_conscnt-- > 0)  {
	   *((S2CINT*)sc_consp) = 0;
	   sc_consp = (SCP)(((S2CINT*)sc_consp)+1);
	}
	sc_conscnt = 0;
	if  (sc_extobjwords)  {
	   sc_extobjp->unsi.gned = ENDOFPAGE;
	   sc_extobjwords = 0;
	}
	sc_extwaste = 0;
	sc_allocatedheappages = 0;
	sc_newlist = -1;
	sc_locklist = -1;
	sc_lockcnt = 0;
	sc_next_generation = INC_GENERATION( sc_current_generation );

	/* Hide the car's of pairs on the weakconsl. */
	save_weakconsl();
	
	/* Move the globals, display, and constants */
	for  ( i = 0; i < sc_globals->count; i++ )  {
	   move_ptr( *(sc_globals->ptrs[ i ]) );
	}
	for  ( i = 0; i < sc_maxdisplay; i++ )  move_ptr( sc_display[ i ] );
	for  ( i = 0; i < sc_constants->count; i++ )  {
	   move_ptr( *(sc_constants->ptrs[ i ]) );
	}

	/* Look into the stack and the registers and treat anything that
	   might be a pointer as a root and move it.
	*/
	trace_stack_and_registers();

	/* Lock down user program's frozen objects. */
	fl = sc__2afrozen_2dobjects_2a_v;
	while  (TSCPTAG( fl ) == PAIRTAG)  {
	   move_continuation_ptr( T_U( PAIR_CAR( fl ) ) );
	   fl = PAIR_CDR( fl );
	}

	/* Move new objects referenced in previous generations */
	move_the_generations();

	/* Continue moving the current generation until it terminates
	   and then handle weak pointers and unreferenced.
	*/
	move_the_heap();
	sc_allocatedheappages = sc_allocatedheappages+sc_lockcnt;

	/* Fully allocate partial pages */
	sc_conscnt = sc_conscnt+sc_conscnt;
	while  (sc_conscnt-- > 0)  {
	   *((S2CINT*)sc_consp) = 0;
	   sc_consp = (SCP)(((S2CINT*)sc_consp)+1);
	}
	sc_conscnt = 0;
	if  (sc_extobjwords)  {
	   sc_extobjp->unsi.gned = ENDOFPAGE;
	   sc_extobjwords = 0;
	}

	/* Correct pointers in the copied heap */
	correct_pointers( sc_newlist, sc_initiallink );

	/* Correct pointers in previous generations */
	correct_pointers( sc_genlist, 0 );

	/* Correct pointers in globals, display, and constants */
	for  ( i = 0; i < sc_globals->count; i++ )
	   *(sc_globals->ptrs[ i ]) = correct( *(sc_globals->ptrs[ i ]) );
	for  ( i = 0; i < sc_maxdisplay; i++ )
	   sc_display[ i ] = correct( sc_display[ i ] );
	for  ( i = 0; i < sc_constants->count; i++ )
	   *(sc_constants->ptrs[ i ]) = correct( *(sc_constants->ptrs[ i ]) );

	/* Copy back the locked objects and add locked pages to sc_genlist */
	sc_genlist = -1;
	copyback_locked_pages( sc_locklist );

	/* Step to the next odd generation, reset before overflow */
	sc_next_generation = sc_current_generation = 
			     INC_GENERATION( sc_next_generation );	
	sc_generationpages = sc_generationpages+sc_allocatedheappages;
	sc_allocatedheappages = sc_generationpages;
	if  (sc_current_generation > 200)  {
	   for  (i = sc_firstpage; i <= sc_lastpage; i++)  {
	      if  (sc_pagegeneration[ i ] != 0  &&
	           ~sc_pagegeneration[ i ] & 1)
	         sc_pagegeneration[ i ] = 2;
	   }
	   sc_next_generation = sc_current_generation = 3;
	}

	/* Finish up */
	thisgctime = sc_stoptimer( &sc_gctime );
	if  (sc_gcinfo)  {
	   sc_log_string( "              " );
	   sc_log_dec( (sc_lockcnt*100)/sc_heappages );
	   sc_log_string( "% locked  " );
	   sc_log_dec( (sc_generationpages*100)/sc_heappages );
	   sc_log_string( "% retained  " );
	   sc_log_dec( (S2CINT)(thisgctime*1000.0) );
	   sc_log_string( " msec\n" );
	}
	if  (sc_gcinfo == 2  ||  CHECK_S2C_HEAP)	{
	   /* Perform additional consistency checks */
	   check_heap();
	   check_obarray();
	   check_weakconsl();
	}

	/* Compact the whole heap if > sc_limit % of pages allocated */
	sc_initiallink = OKTOSET;
	sc_mutex = savemutex;
	sc_collecting = 0;
	if  (sc_mutex == 0)  MUTEXOFF;
	if  ((sc_allocatedheappages*100)/sc_heappages > sc_limit)  {
	   sc_collect_2dall();
	   if  (sc_allocatedheappages > (sc_limit*sc_heappages*8)/1000)  {
	      MUTEXON;
	      sc_expandheap();
	      MUTEXOFF;
	   }
	}
	if  (sc_after_2dcollect_v != FALSEVALUE)
	   sc_apply_2dtwo( sc_after_2dcollect_v,
	   	 sc_cons( C_FIXED( sc_heappages*PAGEBYTES ),
			  sc_cons( C_FIXED( sc_allocatedheappages*PAGEBYTES ),
			           sc_cons( C_FIXED( sc_limit ),
				   	    EMPTYLIST ) ) ) );
	sc_collect_done();
	return( TRUEVALUE );
}

/* A complete garbage collection can be forced by calling the following
   procedure.
*/

TSCP  sc_collect_2dall_v;

TSCP  sc_collect_2dall()
{
	S2CINT  i,
	       save_sc_limit = sc_limit;

	MUTEXON;
	sc_limit = 100;
	if  (sc_generationpages != sc_allocatedheappages)  sc_collect();
	sc_limit = save_sc_limit;
	MUTEXOFF;
	MUTEXON;
	sc_next_generation = 
		INC_GENERATION( INC_GENERATION( sc_next_generation ) );
	sc_current_generation = sc_next_generation;
	for  (i = sc_firstpage; i <= sc_lastpage; i++)  {
	   if  (sc_pagegeneration[ i ] != 0  &&  ~sc_pagegeneration[ i ] & 1)
	      sc_pagegeneration[ i ] = sc_current_generation;
	}
 	sc_generationpages = 0;
	sc_genlist = -1;
	sc_limit = 100;
	sc_collect();
	sc_limit = save_sc_limit;
	MUTEXOFF;
	return( TRUEVALUE );
}

/* Information about the heap is returned by the following procedure.  It
   returns a list of the currently allocated heap (in bytes), the total
   size of the heap (in bytes), the total time spent in the application
   (in seconds), the total time spent garbage collecting (in seconds), the
   maximum size of the heap (in bytes), and the generational collection limit
  (a per cent).
*/

TSCP  sc_collect_2dinfo_v;

TSCP  sc_collect_2dinfo()
{
	double  currenttime;

	currenttime = sc_cputime();
	return( sc_cons( C_FIXED( sc_allocatedheappages*PAGEBYTES ),
	        sc_cons( C_FIXED( sc_heappages*PAGEBYTES ),
		sc_cons( DOUBLE_TSCP( sc_usertime+currenttime-starttime ),
		sc_cons( DOUBLE_TSCP( sc_gctime ),
		sc_cons( C_FIXED( sc_maxheappages*PAGEBYTES ),
	        sc_cons( C_FIXED( sc_limit ), EMPTYLIST ) ) ) ) ) ) );
}

/* The logging of garbage collection information in controlled by the
   following procedure.
*/

TSCP  sc_set_2dgcinfo_21_v;

TSCP  sc_set_2dgcinfo_21( TSCP flag )
{
	S2CINT  old_sc_gcinfo = sc_gcinfo;

	if  (TSCPTAG( flag ) != FIXNUMTAG  ||
	     FIXED_C( flag ) < 0  ||  FIXED_C( flag ) > 2)
	   sc_error( "SET-GCINFO!",
	   	     "ARGUMENT is not in the range [0-2]: ~s",
		     LIST1( flag ) );
	sc_gcinfo = FIXED_C( flag );
	return( C_FIXED( old_sc_gcinfo ) );
}

/* The generational collection limit is set by the following procedure. */

TSCP  sc_2dlimit_21_de4d3427_v;

TSCP  sc_2dlimit_21_de4d3427( TSCP limit )
{
	if  (TSCPTAG( limit ) != FIXNUMTAG  ||
	     FIXED_C( limit ) < 10  ||  FIXED_C( limit ) > 45)
	   sc_error( "SET-GENERATION-LIMIT!",
	   	     "ARGUMENT is not in the range [10-45]: ~s",
		     LIST1( limit ) );
	sc_limit = FIXED_C( limit );
	return( limit );
}

/* The maximum heap size is set by the following procedure. */

TSCP  sc_set_2dmaximum_2dheap_21_v;

TSCP  sc_set_2dmaximum_2dheap_21( TSCP maxheap )
{
        /* changed by Qobi R24Dec98 */
        if (TSCPTAG(maxheap)==FIXNUMTAG)
        { if (FIXED_C(maxheap)<sc_heappages*PAGEBYTES||
              FIXED_C(maxheap)>SCMAXHEAP*ONEMB)
          sc_error("SET-MAXIMUM-HEAP!",
                   "ARGUMENT is less than current heap or is too large: ~s",
                   LIST1(maxheap));
          sc_maxheappages = FIXED_C(maxheap)/PAGEBYTES;}
        else if (TSCPTAG(maxheap)==EXTENDEDTAG&&
                 TSCP_EXTENDEDTAG(maxheap)==DOUBLEFLOATTAG)
        { if (FLOAT_VALUE(maxheap)<sc_heappages*PAGEBYTES||
              FLOAT_VALUE(maxheap)>SCMAXHEAP*ONEMB)
          sc_error("SET-MAXIMUM-HEAP!",
                   "ARGUMENT is less than current heap or is too large: ~s",
                   LIST1(maxheap));
          sc_maxheappages = ((int)FLOAT_VALUE(maxheap))/PAGEBYTES;}
        else sc_error("SET-MAXIMUM-HEAP!",
                      "ARGUMENT is not a number: ~s",
                      LIST1(maxheap));
        return(maxheap);
}

/* Pages in the heap are allocated by the following function.  It is called
   with a page count and sets the appropriate allocation pointers as
   required.  The sc_pagegeneration, sc_pagelink, sc_pagetype fields are
   set for each page here.  The garbage collector is invoked as needed.
*/

static S2CINT  allocatepage_failed = 0;	/* Set following collection, cleared on
				   	   successful allocation */

static void  allocatepage( S2CINT count, S2CINT tag )
{
	S2CINT  start, page, freecnt, generation;

	if  ((count+sc_allocatedheappages) > sc_heappages/2)  {
failed:
	   if  ((allocatepage_failed  ||  sc_collecting)  &&
	        sc_expandheap() == 0)  {
	      sc_log_string( "***** ALLOCATEPAGE cannot allocate " );
	      sc_log_dec( count*PAGEBYTES );
	      sc_log_string( " bytes with " );
	      sc_log_dec( (sc_allocatedheappages*100)/sc_heappages );
	      sc_log_string( "% of heap allocated\n" );
	      sc_abort();
	   }
	   if  (sc_collecting == 0)  sc_collect();
	   allocatepage_failed = 1;
	   return;
	}
	start = sc_freepage;
	freecnt = 0;
	do  {
	   generation = sc_pagegeneration[ sc_freepage ];
	   if  (generation & 1  &&  generation != sc_current_generation)  {
	      if  (freecnt == 0)  page = sc_freepage;
	      freecnt++;
	   }
	   else
	      freecnt = 0;
	   if  (sc_freepage == sc_lastpage)  {
	      if  (freecnt != count)  freecnt = 0;
	      sc_freepage = sc_firstpage;
	   }
	   else  sc_freepage++;
	   if  (sc_freepage == start)  goto failed;
	}  while  (count != freecnt);
	allocatepage_failed = 0;
	sc_allocatedheappages = sc_allocatedheappages+count;
	sc_pagegeneration[ page ] = sc_next_generation;
	sc_pagetype[ page ] = tag;
	sc_pagelink[ page ] = sc_initiallink;
	if  (tag == PAIRTAG)  {
	   sc_conscnt = PAGEBYTES/CONSBYTES;
	   sc_consp = (SCP)PAGE_ADDRESS( page );
	   if  (sc_collecting)  QUEUE_PAGE( cons_pages, page );
	}
	else  {
	   sc_extobjp = (SCP)PAGE_ADDRESS( page );
	   sc_extobjwords = count*PAGEWORDS;
	   if  (sc_collecting)  QUEUE_PAGE( extended_pages, page );
	   while (--count)  {
	      sc_pagegeneration[ ++page ] = sc_next_generation;
	      sc_pagetype[ page ] = BIGEXTENDEDTAG;
	      sc_pagelink[ page ] = sc_initiallink;
	   }
	}	
}

/* When a pointer to a new object may be stored in a old page, the following
   procedure is called to add the old page to the list of changed older pages
   and then do the assignment.  N.B.  set-top-level-value! may set global
   values outside the heap.
*/

TSCP  sc_setgeneration( TSCP* a, TSCP b )
{
	S2CINT  oldpage = ADDRESS_PAGE( a );

	MUTEXON;
	if  (S2CPAGE( oldpage )  &&  sc_pagelink[ oldpage ] == 0)  {
	   if  (sc_pagetype[ oldpage ] == PAIRTAG)  {
	      if  (sc_pagegeneration[ oldpage ] == sc_current_generation)  {
	         sc_pagelink[ oldpage ] = OKTOSET;
	      }
	      else  {
	         sc_pagelink[ oldpage ] = sc_genlist;
	         sc_genlist = oldpage;
	      }
	   }
	   else  {
	      while  (sc_pagetype[ oldpage ] == BIGEXTENDEDTAG)  oldpage--;
	      if  (sc_pagegeneration[ oldpage ] == sc_current_generation)  {
	         sc_pagelink[ oldpage ] = OKTOSET;
	      }
	      else  {
	         sc_pagelink[ oldpage ] = sc_genlist;
	         sc_genlist = oldpage;
	      }
	      while  (++oldpage <= sc_lastpage  &&  
		      sc_pagetype[ oldpage ] == BIGEXTENDEDTAG)  {
	         sc_pagelink[ oldpage ] = OKTOSET;
	      }
	   }
	}
	*a = b;
	MUTEXOFF;
	return( b );
}
	
/* Heap based storage is allocated by the following function.  It is called
   with a word count and a value to put in the first word.  It will return
   an UNTAGGED pointer to the storage.  Note that the minimum permissible
   allocation size is two words.

   N.B.  IT IS THE CALLER'S RESPONSIBILITY TO ASSURE THAT SIGNALS DO NOT
	 CAUSE PROBLEMS DURING ALLOCATION.
*/

SCP  sc_allocateheap( S2CINT wordsize, S2CINT tag, S2CINT rest )
{
	SCP  alloc;
	S2CINT  isastring = (tag == STRINGTAG);

	EVEN_EXTOBJP( tag == DOUBLEFLOATTAG );
	ODD_EXTOBJP( isastring );
	if  (wordsize <= sc_extobjwords)  {
	   alloc = sc_extobjp;
	   sc_extobjp = (SCP)(((S2CINT*)alloc)+wordsize);
	   sc_extobjwords = sc_extobjwords-wordsize;
	}
	else  if  (wordsize < PAGEWORDS)  {
	   while  (wordsize > sc_extobjwords)  {
	      sc_extwaste = sc_extwaste+sc_extobjwords;
	      if  (sc_extobjwords)  sc_extobjp->unsi.gned = ENDOFPAGE;
	      sc_extobjwords = 0;
	      allocatepage( 1, EXTENDEDTAG );
	      EVEN_EXTOBJP( tag == DOUBLEFLOATTAG );
	      ODD_EXTOBJP( isastring );
	   }
	   alloc = sc_extobjp;
	   sc_extobjwords = sc_extobjwords-wordsize;
	   sc_extobjp = (SCP)(((S2CINT*)alloc)+wordsize);
	}
	else  {
	   while  (wordsize > sc_extobjwords)  {
	      sc_extwaste = sc_extwaste+sc_extobjwords;
	      if  (sc_extobjwords)  sc_extobjp->unsi.gned = ENDOFPAGE;
	      sc_extobjwords = 0;
	      allocatepage( (wordsize+PAGEWORDS-1+isastring)/PAGEWORDS,
	      		    EXTENDEDTAG );
	   }
	   ODD_EXTOBJP( isastring );
	   alloc = sc_extobjp;
	   sc_extobjp = NULL;
	   sc_extobjwords = 0;
	}
	alloc->extendedobj.tag = tag;
	alloc->extendedobj.rest = rest;
	return( alloc );
}

/* Double floating point numbers are constructed by the following function.  It
   is called with a double floating point value and it returns a pointer to
   the Scheme object with that value.
*/

#ifdef SPARC
extern void sc_set_double( XAL2( int* , double ) );
#define SET_FLOAT_VALUE( scp, val ) sc_set_double(&(scp)->doublefloat.value[0], (val) )
#else
#define SET_FLOAT_VALUE( scp, val ) (scp)->doublefloat.value = (val)
#endif


TSCP sc_makedoublefloat( double value )
{
	SCP  pp;

	MUTEXON;
	EVEN_EXTOBJP( 1 );
	if  (sc_extobjwords >= DOUBLEFLOATSIZE)  {
	   pp = sc_extobjp;
	   sc_extobjp = (SCP)(((S2CINT*)sc_extobjp)+DOUBLEFLOATSIZE);
	   sc_extobjwords = sc_extobjwords-DOUBLEFLOATSIZE;
	   pp->unsi.gned = DOUBLEFLOATTAG;
	}
	else
	   pp = sc_allocateheap( DOUBLEFLOATSIZE, DOUBLEFLOATTAG, 0 );
	SET_FLOAT_VALUE( pp, value );
	MUTEXOFF;
	return( U_T( pp, EXTENDEDTAG ) );
}

/* The following function forms a dotted-pair with any two Scheme pointers.  It
   returns a tagged pointer to the pair as its value.
*/

TSCP  sc_cons_v;

TSCP  sc_cons( TSCP x, TSCP y )
{
	SCP  oconsp;

	MUTEXON;
retry:
	if  (sc_conscnt > 0)  {
	   oconsp = sc_consp;
	   sc_consp->pair.car = x;
	   sc_consp->pair.cdr = y;
	   sc_consp = (SCP)(((S2CINT*)sc_consp)+2);
	   sc_conscnt--;
	   MUTEXOFF;
	   return( U_T( oconsp, PAIRTAG ) );
	}
	allocatepage( 1, PAIRTAG );
	goto retry;
}

/* The following boolean is used by the stack tracing code to decide whether
   a pointer is a TSCP or a C string.
*/

TSCP  sc_schemepointer( TSCP any )
{
	SCP  pp = T_U( any );

        if (((S2CUINT)pp >= (S2CUINT)sc_firstheapp  &&
	    (S2CUINT)pp < (S2CUINT)sc_lastheapp)  && 
	    S2CPAGE( ADDRESS_PAGE( pp ) ))
	   return  TRUEVALUE;
	else
	   return  FALSEVALUE;
}

/* The following procedure is used to verify that a Scheme data structure is
   correct.  If the structure is correct, it is returned.  If it is not
   correct, then the structure is dumped on the log and #f is returned.
*/

struct  SEEN { struct SEEN* prev;  TSCP value; };

struct SEEN*  seenp;

/* Put a breakpoint on this procedure to catch verification problems */

static  verifyfail()
{
	sc_abort();
}

TSCP  sc_verifyobject( TSCP any )
{
	S2CINT  i;
	struct SEEN  seen, *sp;

	if  ((S2CINT)any & 1)  {
	   sp = seenp;
	   while  (sp != NULL)  {
	      if  (sp->value == any)  return( any );
	      sp = sp->prev;
	   }
	   seen.prev = seenp;
	   seenp = &seen;
	   seen.value = any;
	}

	switch  TSCPTAG( any )  {

	   case  FIXNUMTAG:
	      return( any );

	   case  EXTENDEDTAG:
	      if  (any == sc_emptyvector  ||  any == sc_emptystring)  {
		 seenp = seen.prev;
	         return( any );
	      }
	      if  (sc_schemepointer( any ) == FALSEVALUE)  verifyfail();
	      switch  TSCP_EXTENDEDTAG( any )  {

	         case  SYMBOLTAG:
		    sc_verifyobject( SYMBOL_NAME( any ) );
		    sc_verifyobject( SYMBOL_VALUE( any ) );
		    sc_verifyobject( SYMBOL_PROPERTYLIST( any ) );
	            seenp = seen.prev;
		    return( any );

		 case  STRINGTAG:
	            seenp = seen.prev;
		    return( any );

		 case  VECTORTAG:
		    for  (i = 0; i < VECTOR_LENGTH( any ); i++ )
		       sc_verifyobject( VECTOR_ELEMENT( any, C_FIXED( i ) ) );
	            seenp = seen.prev;
		    return( any );

		 case  PROCEDURETAG:
		    sc_verifyobject( PROCEDURE_CLOSURE( any ) );
	            seenp = seen.prev;
		    return( any );

		 case  CLOSURETAG:
		    sc_verifyobject( CLOSURE_CLOSURE( any ) );
		    for  (i = 0; i < CLOSURE_LENGTH( any ); i++)
		       sc_verifyobject( CLOSURE_VAR( any, i ) );
	            seenp = seen.prev;
		    return( any );

		 case  CONTINUATIONTAG:
	            seenp = seen.prev;
		    return( any );

		 case  RECORDTAG:
		    sc_verifyobject( RECORD_METHODS( any ) );
		    for  (i = 0; i < RECORD_LENGTH( any ); i++ )
		       sc_verifyobject( RECORD_ELEMENT( any, C_FIXED( i ) ) );
	            seenp = seen.prev;
		    return( any );

		 case  DOUBLEFLOATTAG:
	            seenp = seen.prev;
		    return( any );

	         default:
		    verifyfail();
	      }

	   case  IMMEDIATETAG:
	      if  (any == EMPTYLIST  ||  any == FALSEVALUE  ||
		   any == TRUEVALUE  ||  any == EOFOBJECT   ||
		   any == UNDEFINED  ||
		   TSCPIMMEDIATETAG( any ) == CHARACTERTAG)
	         return( any );
	      verifyfail();

	   case  PAIRTAG:
	      if  (sc_schemepointer( any ) == FALSEVALUE)  verifyfail();
	      sc_verifyobject( PAIR_CAR( any ) );
	      sc_verifyobject( PAIR_CDR( any ) );
	      seenp = seen.prev;
	      return( any );
	}
}
	      
/* The following function forms a weak dotted-pair with any two Scheme
   pointers.  A weak dotted-pair is a pair that has the property that the CAR
   of the pair may be set to #F by the garbage collector if it contains the
   only pointer to an object.
*/

TSCP  sc_weak_2dcons_v;

TSCP  sc_weak_2dcons( TSCP x, TSCP y )
{
	TSCP  cons,	/* cons cell holding x & y */
	      weak;	/* 3 element "weak" string: link, cons, car */

	cons = sc_cons( x, y );
	weak = MAKE_WEAK;
	MUTEXON;
	WEAK_LINK( weak ) = weakconsl;
	WEAK_CONS( weak ) = cons;
	WEAK_CAR( weak ) = FALSEVALUE;
	weakconsl = weak;
	MUTEXOFF;
	return( cons );
}
	

		 
                              
