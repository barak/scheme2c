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

/* This module implements the object storage allocation functions.  */

/* Imported definitions */

#include "objects.h"
#include "scinit.h"
#include "heap.h"
#include "apply.h"
#include "cio.h"
#include <stdarg.h>

#ifndef NULL
#define NULL 0
#endif

extern  TSCP  scrt1_reverse( XAL1( TSCP ) );

/* Allocate storage for objects defined in objects.h  */

TSCP  sc_obarray;	 	/* OBARRAY for symbols */

struct SCPTRS  *sc_constants;	/* Table of compile time constant addresses */

struct SCPTRS  *sc_globals;	/* Table of top level variable addresses */

S2CINT  sc_maxdisplay = 0;  	/* The DISPLAY */

TSCP  sc_display[ 200 ];

TSCP  sc_emptylist,	/* Immediate denoting empty list */
      sc_emptystring,	/* Pointer to the empty string */
      sc_emptyvector,	/* Pointer to the empty vector */
      sc_falsevalue,	/* Immediate denoting false */
      sc_truevalue,	/* Immediate denoting true  */
      sc_eofobject,	/* Immediate denoting end-of-file */
      sc_undefined;	/* Immediate denoting the undefined value */

struct STACKTRACE  *sc_stacktrace;
			/* Ptr to debug stack trace records */

S2CINT  sc_schememode = STANDALONESCHEME;

#define CSTRING_SYMBOL( x ) sc_string_2d_3esymbol( CSTRING_TSCP( x ) )

/* Entries are added to SCPTRS structures by the following procedure.  It is
   called with a pointer to the structure and a value to add.  It returns the
   pointer to the expanded structure.
*/

struct SCPTRS *addtoSCPTRS( s, p )
	struct SCPTRS *s;
	TSCP  *p;
{
	struct SCPTRS *t;
	S2CINT  i;

	MUTEXON;
	if  (s == NULL)  {
	   /* Initially allocate the table */
	   s = (struct SCPTRS *)sc_gettable( sizeofSCPTRS( 500 ), 1 );
	   s->count = 0;
	   s->limit = 500;
	}  else  if  (s->count == s->limit)  {
	   /* Expand the table */
	   t = (struct SCPTRS *)sc_gettable( sizeofSCPTRS( s->limit+100 ), 1 );
	   for  (i = 0; i < s->count; i++)  {
	      t->ptrs[ i ] = s->ptrs[ i ];
	   }
	   t->limit = s->limit+100;
	   t->count = s->count;
	   sc_freetable( s );
	   s = t;
	}
	s->ptrs[ s->count++ ] = p;
	MUTEXOFF;
	return( s );
}

/* Entries are deleted from an SCPTRS structure by the following procedure.  It
   is called with a pointer to the structure and a value to delete.
*/

void  deletefromSCPTRS( s, p )
	struct SCPTRS *s;
	TSCP  *p;
{
	S2CINT  i;

	MUTEXON;
	for  (i = s->count-1; i >= 0;  i--)  {
	   if  (s->ptrs[ i ] == p)  {
	      while  (i < s->count-2)  {
		 s->ptrs[ i ] = s->ptrs[ i+1 ];
		 i++;
	      }
	      s->count = s->count-1;
	      i = -1;
	   }
	}
	MUTEXOFF;
}

/* Strings are allocated by the following function which takes a length (as a
   tsfixed value), and a char initialization value.  It will return a Scheme
   pointer to the new string.  The strings will be null terminated in order to
   be compatible with C strings.  This function is visible as MAKE-STRING
   inside Scheme.
*/

TSCP  sc_make_2dstring_v;

TSCP  sc_make_2dstring( length, initial )
	TSCP  length, initial;
{
	S2CINT  len, x;
	char  initchar, *cp;
	SCP  sp;

	len = FIXED_C( length );
	if  ((TSCPTAG( length ) != FIXNUMTAG)  ||  len < 0  ||
	     len > MAXSTRINGSIZE)
	   sc_error( "MAKE-STRING", "Argument is not a POSITIVE INTEGER <= ~s",
	   	     LIST1( C_FIXED( MAXSTRINGSIZE ) ) );
	if  (len == 0)  return( sc_emptystring );
	if  (initial != EMPTYLIST)  {
	   initial = T_U( initial )->pair.car;
	   if  (TSCPIMMEDIATETAG( initial ) != CHARACTERTAG)
	      sc_error( "MAKE-STRING", "Argument is not a CHARACTER",
	      	        EMPTYLIST );
	   initchar = CHAR_C( initial );
	}
	MUTEXON;
	sp = sc_allocateheap( STRINGSIZE( len ), STRINGTAG, len );
	cp = &sp->string.char0;
	if  (initial != EMPTYLIST)  {
	   x = len;
	   while  (x--)  *cp++ = initchar;
	}
	else  cp = cp+len;
	/* Null bytes in rest of last word */
	x = sizeof(S2CINT)-(len & (sizeof(S2CINT)-1));
	while  (x--) *cp++ = 0;
	MUTEXOFF;
	return( U_T( sp, EXTENDEDTAG ) );
}

/* A copy of a string is made by the following procedure.  It is available
   inside Scheme as STRING-COPY.
*/

TSCP  sc_string_2dcopy_v;

TSCP  sc_string_2dcopy( string )
	TSCP  string;
{
	SCP  ustring, newstring;
	S2CINT  words, *from, *to;

	ustring = T_U( string );
	if  ((TSCPTAG( string ) != EXTENDEDTAG) ||
	     ustring->string.tag != STRINGTAG)
	   sc_error( "STRING-COPY", "Argument is not a STRING", EMPTYLIST );
	if  (string == sc_emptystring)  return( string );
	words = STRINGSIZE( ustring->string.length );
	MUTEXON;
	newstring = sc_allocateheap( words, 0, 0 );
	from = (S2CINT *)ustring;
	to = (S2CINT *)newstring;
	while  (words--)  *to++ = *from++;
	MUTEXOFF;
	return( U_T( newstring, EXTENDEDTAG ) );
}

/* C strings are converted to heap allocated Scheme strings by the following
   function.
*/

TSCP  sc_cstringtostring( char* cstring )
{
	S2CINT  len, x;
	char  *cp;
	SCP  sp;

	len = 0;
	cp = cstring;
	if  (cp)  while  (*cp++)  len++;
	if  (len == 0)  return( sc_emptystring );
	MUTEXON;
	sp = sc_allocateheap( STRINGSIZE( len ), STRINGTAG, len );	
	cp = &sp->string.char0;
	x = len;
	while  (x--)  *cp++ = *cstring++;
	/* Null bytes in rest of last word */
	x = sizeof(S2CINT)-(len & (sizeof(S2CINT)-1));
	while  (x--) *cp++ = 0;
	MUTEXOFF;
	return( U_T( sp, EXTENDEDTAG ) );
}

TSCP  sc_c_2dstring_2d_3estring_v;

TSCP  sc_c_2dstring_2d_3estring( TSCP cstring )
{
	return( sc_cstringtostring( (char*)TSCP_POINTER( cstring ) ) );

}

/* Vectors are allocated by the following functions which takes a length (as a
   tsfixed value), and an initialization value.  It will return a Scheme
   pointer to the new vector.  It has the name MAKE-VECTOR in Scheme.
*/

TSCP  sc_make_2dvector_v;

TSCP  sc_make_2dvector( length, initial )
	TSCP  length, initial;
{
	S2CINT  len;
	SCP  vp;
	PATSCP  ve;

	len = FIXED_C( length );
	if  ((TSCPTAG( length ) != FIXNUMTAG)  ||  len < 0  ||
	      len > MAXVECTORSIZE)
	   sc_error( "MAKE-VECTOR", "Argument is not a POSITIVE INTEGER <= ~s",
	   	     LIST1( C_FIXED( MAXVECTORSIZE ) ) );
	if  (len == 0)  return( sc_emptyvector );
	MUTEXON;
	vp = sc_allocateheap( VECTORSIZE( len ), VECTORTAG, len );
	ve = &vp->vector.element0;
	if  (initial != EMPTYLIST)  initial = T_U( initial )->pair.car;
	while  (len--)  *ve++ = initial;
	MUTEXOFF;
	return( U_T( vp, EXTENDEDTAG ) );
}

/* Closures are constructed by the following function.  It takes a previous
   closure pointer, a closure size, and the values to be closed.  It returns
   a Scheme pointer to the closure.  It is used by compiled code to heap
   allocate variables and is visible within the compiler as MAKECLOSURE.
*/

TSCP sc_makeclosure( TSCP prevclosure, ... )
{
	va_list  argl;
	int  count;
	SCP  cp;
	PATSCP  vars;

	MUTEXON;
	va_start( argl, prevclosure );
	count = va_arg( argl, int );
	cp = sc_allocateheap( CLOSURESIZE( count ), CLOSURETAG, count );
	cp->closure.closure = prevclosure;
	vars = &cp->closure.var0;
	while  (count--)  *vars++ = va_arg( argl, TSCP );
	MUTEXOFF;
	return( U_T( cp, EXTENDEDTAG ) );
}

/* Records are constructed by the following function.  It takes a size and
   an optional initial value  It returns the resulting record with all
   elements set to the initial value (or ()) and a null list of methods.
   It has the name MAKE-%RECORD in Scheme.
*/

TSCP  sc_make_2d_25record_v;

TSCP  sc_make_2d_25record( length, initial )
	TSCP  length, initial;
{
	S2CINT  len;
	SCP  rp;
	PATSCP  re;

	len = FIXED_C( length );
	if  ((TSCPTAG( length ) != FIXNUMTAG)  ||  len < 0  ||
	      len > MAXRECORDSIZE)
	   sc_error( "MAKE-%RECORD",
	   	     "Argument is not a POSITIVE INTEGER <= ~s",
	   	     LIST1( C_FIXED( MAXRECORDSIZE ) ) );
	MUTEXON;
	rp = sc_allocateheap( RECORDSIZE( len ), RECORDTAG, len );
	rp->record.methods = EMPTYLIST;
	re = &rp->record.element0;
	if  (initial != EMPTYLIST)  initial = T_U( initial )->pair.car;
	while  (len--)  *re++ = initial;
	MUTEXOFF;
	return( U_T( rp, EXTENDEDTAG ) );
}

/* Procedure objects are constructed by the following function.  It takes the
   required variable count, the optvars flag, the function, and the current
   closure.  It returns a Scheme pointer to the procedure.  It is used by
   compiled code to make the value of a (LAMBDA (...) ...) expression.  It is
   visible within the compiler as MAKEPROCEDURE.
*/

TSCP sc_makeprocedure( reqvars, optvars, function, closure )
	int  reqvars, optvars;
	TSCP  closure;
	TSCPP function;
{
	SCP  pp;

	if  (reqvars > MAXARGS)
	   sc_error( "MAKEPROCEDURE",
	   	     "PROCEDURE requires too many arguments",
	   	     EMPTYLIST );
	if  (optvars)  reqvars = reqvars+256;
	MUTEXON;
	pp = sc_allocateheap( PROCEDURESIZE, PROCEDURETAG, reqvars );
	pp->procedure.code = function;
	pp->procedure.closure = closure;
	MUTEXOFF;
	return( U_T( pp, EXTENDEDTAG ) );
}

/* Compiled global variables are "registered" by this function.  It will add
   them to the symbol table (sc_obarray) and set their initial values.  The
   function is visible within the compiler as INITIALIZEVAR.
*/

void  sc_initializevar( symbolname, location, value )
	char  *symbolname;
	TSCP  *location, value;
{
	SCP  sp;

	sp = T_U( sc_string_2d_3esymbol( CSTRING_TSCP( symbolname ) ) );
        if  (*sp->symbol.ptrtovalue != UNDEFINED)  {
	   sc_log_string( "***** INITIALIZEVAR Duplicately defined symbol " );
	   sc_log_string( &(T_U(sp->symbol.name)->string.char0) );
	   sc_log_string( "\n" );
	}		    
	sp->symbol.ptrtovalue = location;
	*location = value;
	sc_globals = addtoSCPTRS( sc_globals, location );
}

/* Global TSCP's declared in languages other than Scheme are registered with
   the garbage collector by the following function.  N.B.  The garbage
   collector may reloacte objects pointed to by these cells.
*/

void  sc_global_TSCP( location )
	TSCP  *location;
{
	sc_globals = addtoSCPTRS( sc_globals, location );
}

/* Global TSCP's declared in languages other than Scheme my be unregistered by
   calling the following procedure.
*/

void  sc_delete_global_TSCP( location )
	TSCP  *location;
{
	deletefromSCPTRS( sc_globals, location );
}

/* Compiled constants which are constructed from the heap during initialization
   must be "registered" with the runtime system so that they will not be
   treated as garbage.  This function is visible as CONSTANTEXP within the
   compiler.
*/

void  sc_constantexp( constantaddress )
	TSCP  *constantaddress;
{
	sc_constants = addtoSCPTRS( sc_constants, constantaddress );
}

/* Strings are converted to symbols by the following function.  It will examine
   the obarray to see if an identifier with the same name already exists.  If
   it does then it will return a pointer to that symbol.  If not then it will
   either add the symbol to the table or return #F as determined by the
   value of add.
*/

static TSCP  stringtosymbol( symbolstring, add )
	TSCP  symbolstring, add;
{
	TSCP  tp, cell;
	SCP  sp, utp;
	S2CFINT  x, *oldp, *newp, *endnewp;

	PATSCP  buckets;  

	newp = (S2CFINT *)T_U( symbolstring );
	endnewp = newp+(T_U( symbolstring )->string.length+sizeof(S2CFINT))/
		  sizeof(S2CINT);
	x = 0;
	do  x = x ^ *newp;  while  (newp++ != endnewp);
#ifndef SPARC
	if (x < 0) x = -x;
#endif
	x = x % T_U( sc_obarray )->vector.length;
	buckets = &T_U( sc_obarray )->vector.element0;
	tp = buckets[ x ];
	while  (tp != EMPTYLIST)  {
	   utp = T_U( tp );
	   oldp = (S2CFINT *)(T_U( T_U( utp->pair.car )->symbol.name ));
	   newp = (S2CFINT *)(T_U( symbolstring ));
	   while  (*oldp++ == *newp)
	      if  (newp++ == endnewp)  return( utp->pair.car );
	   tp = utp->pair.cdr;
	}
	if ((add == EMPTYLIST) || (add == FALSEVALUE))
	   return( FALSEVALUE );
	cell = sc_cons( EMPTYLIST, EMPTYLIST );
	symbolstring = sc_string_2dcopy( symbolstring );
	MUTEXON;
	sp = sc_allocateheap( SYMBOLSIZE, SYMBOLTAG, 0 );
	sp->symbol.name = symbolstring;
	sp->symbol.ptrtovalue = &sp->symbol.value;
	sp->symbol.value = UNDEFINED;
	sp->symbol.propertylist = EMPTYLIST;
	PAIR_CAR( cell ) = U_T( sp, EXTENDEDTAG );
	PAIR_CDR( cell ) = buckets[ x ];
	sc_setgeneration( &buckets[ x ], cell );
	MUTEXOFF;
	return( U_T( sp, EXTENDEDTAG ) );
}	

/* The following function implements STRING->SYMBOL.  */

TSCP  sc_string_2d_3esymbol_v;

TSCP  sc_string_2d_3esymbol( symbolstring )
	TSCP  symbolstring;
{
	if  ((TSCPTAG( symbolstring ) != EXTENDEDTAG) ||
	     (T_U( symbolstring )->string.tag != STRINGTAG))
	   sc_error( "STRING->SYMBOL", "Argument is not a STRING", EMPTYLIST );
	return( stringtosymbol( symbolstring, TRUEVALUE ) );
}

/* The following function implements STRING->UNINTERNED-SYMBOL.  */

TSCP  sc_d_2dsymbol_ab4b4447_v;

TSCP  sc_d_2dsymbol_ab4b4447( symbolstring )
	TSCP  symbolstring;
{
	SCP  sp;

	if  ((TSCPTAG( symbolstring ) != EXTENDEDTAG) ||
	     (T_U( symbolstring )->string.tag != STRINGTAG))
	   sc_error( "STRING->UNINTERNED-SYMBOL?",
	   	      "Argument is not a STRING", EMPTYLIST );
	symbolstring = sc_string_2dcopy( symbolstring );     
	MUTEXON;
	sp = sc_allocateheap( SYMBOLSIZE, SYMBOLTAG, 0 );
	sp->symbol.name = symbolstring;
	sp->symbol.ptrtovalue = &sp->symbol.value;
	sp->symbol.value = UNDEFINED;
	sp->symbol.propertylist = EMPTYLIST;
	MUTEXOFF;
	return( U_T( sp, EXTENDEDTAG ) );
}	

/* The following function implements UNINTERNED-SYMBOL?.  */

TSCP  sc_uninterned_2dsymbol_3f_v;

TSCP  sc_uninterned_2dsymbol_3f( symbol )
	TSCP  symbol;
{
	if  ((TSCPTAG( symbol ) != EXTENDEDTAG) ||
	     (T_U( symbol )->symbol.tag != SYMBOLTAG))
	   sc_error( "UNINTERNED-SYMBOL?", "Argument is not a SYMBOL",
		     EMPTYLIST );
	return ( (stringtosymbol( T_U( symbol )->symbol.name, FALSEVALUE )
		  == symbol) ? FALSEVALUE : TRUEVALUE );
}

/* Argument conversion for calling C external procedures is provided by the
   following functions.  A character is converted to a C character by the
   following function.
*/

char  sc_tscp_char( p )
	TSCP  p;
{
	if  (TSCPIMMEDIATETAG( p ) != CHARACTERTAG)
	   sc_error( "TSCP_CHAR", "Argument is not a CHARACTER: ~s",
	             LIST1( p ) );
	return(  CHAR_C( p ) );
}

/* The a fixed integer or a floating point number is converted to an integer.
   by the following function.
*/

S2CINT  sc_tscp_s2cint( p )
	TSCP  p;
{
	switch  TSCPTAG( p )  {
	   case FIXNUMTAG:
		return( FIXED_C( p ) );
		break;
	   case EXTENDEDTAG:
	        if  (TX_U( p )->extendedobj.tag == DOUBLEFLOATTAG)
 		   return( (S2CINT) FLOAT_VALUE( p ) );
		break;
	}
	sc_error( "TSCP_S2CINT", "Argument cannot be converted to C int",
		  EMPTYLIST );
}

/* The a fixed integer or a floating point number is converted to an unsigned
   integer by the following function.  The special case testing is present as
   many C compilers do not correctly cast double <-> unsigned.
*/

S2CUINT  sc_tscp_s2cuint( p )
	TSCP  p;
{
	double  v;

	switch  TSCPTAG( p )  {
	   case FIXNUMTAG:
		return( (S2CUINT)FIXED_C( p ) );
		break;
	   case EXTENDEDTAG:
	        if  (TX_U( p )->extendedobj.tag == DOUBLEFLOATTAG)  {
 		   v = FLOAT_VALUE( p );
		   if  (v <= MAXS2CINTF)
		      return( (S2CUINT)( v ) );
		   else
		      return( (S2CUINT)( v-MSBS2CUINTF ) |  MSBS2CUINT );
		}
		break;
	}
	sc_error( "TSCP_S2CUINT",
		  "Argument cannot be converted to C unsigned", EMPTYLIST );
}

/* Numbers, strings, and procedures are converted to C pointers by the
   following function.
*/

VOIDP  sc_tscp_pointer( p )
	TSCP  p;
{
	SCP  s;
	double  v;

	switch  TSCPTAG( p )  {
	   case FIXNUMTAG:
		return( (void*)((S2CUINT)FIXED_C( p )) );
		break;
	   case EXTENDEDTAG:
	   	s = T_U( p );
		switch  (s->extendedobj.tag)  {
		   case STRINGTAG:
		      return( (void*)&s->string.char0 );
		      break;
		   case PROCEDURETAG:
		      return( (void*)sc_procedureaddress( p ) );
		      break;
		   case DOUBLEFLOATTAG:
 		      v = FLOAT_VALUE( p );
		      if  (v <= MAXS2CINTF)
		         return( (void*)((S2CUINT)( v )) );
		      else
		         return( (void*)((S2CUINT)(v-MSBS2CUINTF) |
						   MSBS2CUINT) );
		      break;
		}
		break;
	}
	sc_error( "TSCP_POINTER", "Argument cannot be converted to C pointer",
		  EMPTYLIST );
}
	
/* The following function produces a double value from a Scheme pointer. */

double  sc_tscp_double( p )
	TSCP  p;
{
	switch  TSCPTAG( p )  {
	   case FIXNUMTAG:
		return( (double)(FIXED_C( p )) );
		break;
	   case EXTENDEDTAG:
	        if  (TX_U( p )->extendedobj.tag == DOUBLEFLOATTAG)
 		   return( FLOAT_VALUE( p ) );
		break;
	}
	sc_error( "TSCP_DOUBLE", "Argument cannot be converted to C double",
		  EMPTYLIST );
}

/* The following function converts an integer returned by C into either a
   fixed or float value.
*/

TSCP  sc_s2cint_tscp( n )
	S2CINT  n;
{
	if  (n <= MAXTSCPINT  &&  n >= MINTSCPINT)
	   return( C_FIXED( n ) );
	return( MAKEFLOAT( (double)n ) );
}

/* The following function converts an unsigned returned by C into either a
   fixed or float value.   The special case testing is present as many C
   compilers do not correctly cast double <-> unsigned. 
*/

TSCP  sc_s2cuint_tscp( n )
	S2CUINT  n;
{
	if  (n <= MAXTSCPINT)  return( C_FIXED( n ) );
	if  (n & MSBS2CUINT)
	   return( MAKEFLOAT( (double)(n ^ MSBS2CUINT)+MSBS2CUINTF ) );
	return( MAKEFLOAT( (double)n ) );
}

/* The address of a procedure is returned by the following function. */

S2CUINT  sc_procedureaddress( pp )
	TSCP  pp;
{
	return( (S2CUINT)(TX_U( pp )->procedure.code) );
}

/* The following procedure is called to return the process's Scheme execution
   mode:

	EMBEDDED
	INTERACTIVE
	STAND-ALONE
*/

TSCP  sc_scheme_2dmode()
{
	switch  (sc_schememode)  {
	   case  STANDALONESCHEME:
		return( CSTRING_SYMBOL( "STAND-ALONE" ) );
	   case  EMBEDDEDSCHEME:
		return( CSTRING_SYMBOL( "EMBEDDED" ) );
	   case  INTERACTIVESCHEME:
		return( CSTRING_SYMBOL( "INTERACTIVE" ) );
	}
}

/* The following procedure is called to set the Scheme execution mode. */

TSCP  sc_set_2dscheme_2dmode_21( TSCP mode )
{
	if  (mode == CSTRING_SYMBOL( "STAND-ALONE" ))
	   sc_schememode = STANDALONESCHEME;
	else  if  (mode == CSTRING_SYMBOL( "EMBEDDED" ))
	   sc_schememode = EMBEDDEDSCHEME;
	else
	   sc_schememode = INTERACTIVESCHEME;
	return( mode );
}
