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

/* This module defines basic data objects and their associated functions. */

/* Specific runtime system options are found in options.h */

#include "options.h"

/* Once the system dependent types have been defined, other system dependent
   constants can be derived from them.
*/

#define S2CINTBITS (sizeof(S2CINT)*8)	/* # of bits in an S2CINT */

#define MAXTSCPINT ((1L<<(S2CINTBITS-3))-1L)	/* Maximum fixed integer */
#define MAXTSCPINTF ((double)MAXTSCPINT)	/*   its double value */
#define MINTSCPINT (-(1L<<(S2CINTBITS-3)))	/* Minimum fixed integer */
#define MINTSCPINTF ((double)MINTSCPINT)	/*   its double value */

#define MSBS2CUINTF (((double)MAXS2CINT)+1.0)	/* Dbl value of MSBS2CUINT */
#define MAXS2CINTF ((double)(MAXS2CINT))	/* Dbl value of MAXS2CINT */

/* If BIGENDIAN is defined, then architecture is big endian, otherwise it is
   little endian.  S2CUINT_FIELDSx defines bit fields in pointer size words
   from least signigicant to most significant bits.
*/

#ifdef BIGENDIAN
#define S2CUINT_FIELDS2( a, b ) S2CUINT b; S2CUINT a
#define S2CUINT_FIELDS3( a, b, c ) S2CUINT c; S2CUINT b; S2CUINT a
#else
#define S2CUINT_FIELDS2( a, b ) S2CUINT a; S2CUINT b
#define S2CUINT_FIELDS3( a, b, c ) S2CUINT a; S2CUINT b; S2CUINT c
#endif

#ifdef SPARC
#define S2CFINT S2CUINT
#else
#define S2CFINT S2CINT
#endif

/* Define the type VOIDP which is either void* or char*. */

#ifdef OLD_FASHIONED_C
typedef char *VOIDP;
#else
typedef void *VOIDP;
#endif

/* The data encoding scheme is similar to that used by Vax NIL and T, where
   all objects are represented by S2CINT size pointers, with a "low tag"
   encoded in the two least significant bits encoding the type.  All objects
   are multiples of S2CINT and must be allocated on S2CINT boundaries.

   The basic data object is a "Scheme to C Object", or SCOBJ.  It is defined
   by the following UNION type.  In addition, the following types are also
   defined:

	SCP		pointer to a SCOBJ.
	TSCP		tagged pointer to a SCOBJ
	PATSCP		pointer to an array of TSCP's.
	TSCPP		function which returns a TSCP as its value.

   The most common type conversion is that which converts SCP's and TSCP's.
   It is done by the following:

	U_T( tsp, tag )	convert Untagged SCP to a Tagged TSCP.
	U_TX( tsp )	convert Untagged SCP to an Extended Tagged TSCP.
        U_TP( tsp )     convert Untagged SCP to an Pair Tagged TSCP.
	T_U( tscp )	convert Tagged TSCP to an Untagged SCP.
	TX_U( tscp )	convert Tagged eXtended pointer to an Untagged SCP.
        TP_U( tscp )    convert Tagged Pair pointer to an Untagged SCP.
*/

struct  STACKTRACE;

typedef char *TSCP;

typedef union SCOBJ {		/* SCHEME to C OBJECT */
	   struct {	/* as an unsigned value */
	      S2CUINT  gned;
	   }  unsi;
	   struct {	/* EXTENDEDOBJ */
	      S2CUINT_FIELDS2( tag:8, rest:S2CINTBITS-8 );
	   }  extendedobj;
	   struct {	/* SYMBOL */
	      S2CUINT_FIELDS2( tag:8, rest:S2CINTBITS-8 );
	      TSCP  name;
	      TSCP  *ptrtovalue;
	      TSCP  value;
	      TSCP  propertylist;
	   }  symbol;
	   struct {	/* STRING */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      char  char0;
	   }  string;
	   struct {	/* VECTOR */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      TSCP  element0;
	   }  vector;
	   struct {	/* PROCEDURE */
	      S2CUINT_FIELDS3( tag:8, required:8, optional:S2CINTBITS-16 );
	      TSCP  (*code)();
	      TSCP  closure;
	   }  procedure;
	   struct {	/* CLOSURE */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      TSCP  closure;
	      TSCP  var0;
	   }  closure;
	   struct {	/* CONTINUATION */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      TSCP  continuation;
	      S2CINT  stackbytes;
	      sc_jmp_buf  savedstate;
	      char  *address;
	      struct STACKTRACE*  stacktrace;
	      S2CINT  word0;
	   }  continuation;
	   struct {     /* RECORD */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      TSCP  methods;
	      TSCP  element0;
	   }  record;
	   struct {	/* DOUBLEFLOAT */
	      S2CUINT_FIELDS2( tag:8, rest:S2CINTBITS-8 );
#ifdef SPARC
 	      int value[2];
#else
	      double  value;
#endif
	   }  doublefloat;
	   struct {	/* FORWARD */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	      TSCP  forward;
	   } forward;
	   struct {	/* WORDALIGN */
	      S2CUINT_FIELDS2( tag:8, length:S2CINTBITS-8 );
	   }  wordalign;
	   struct {	/* PAIR */
	      TSCP  car;
	      TSCP  cdr;
	   } pair;
	}  *SCP;

typedef TSCP *PATSCP;	 /* PTR to ARRAY of TAGGED SCHEME to C PTRs */

typedef TSCP (*TSCPP)(); /* TAGGED SCHEME to C PTR returning PROCEDURE */

#define	 TAGMASK 3
#define  TSCPTAG( x ) ((S2CINT)x & TAGMASK)
#define  U_T( scp, tag ) ((TSCP)((char*)(scp)+tag))
#define  U_TX( scp ) ((TSCP)((char*)(scp)+EXTENDEDTAG))
#define  U_TP( scp ) ((TSCP)((char*)(scp)+PAIRTAG))
#define  T_U( tscp ) ((SCP)((S2CINT)(tscp) & (~((S2CINT)TAGMASK))))
#define  TX_U( tscp ) ((SCP)((char*)tscp-EXTENDEDTAG))
#define  TP_U( tscp ) ((SCP)((char*)tscp-PAIRTAG))

/* Fixed point numbers are encoded in the address portion of the pointer.  The
   value is obtained by arithmetically shifting the pointer value two bits to
   the right.  A tag value of 0 is used to allow fixed point numbers to be
   added and subtracted without any tag extraction and insertion.  Note that
   the define FIXED_C assumes that >> provides an arithmetic right shift.

	+--------+--------+--------+--------+
	|....signed fixed point value.....00|
	+--------+--------+--------+--------+
*/

#define	FIXNUMTAG 0

typedef S2CINT  SCFIXED;	/* Scheme to C fixed point number */

#define FIXED_C( x ) (((S2CINT)(x))>>2)
#define C_FIXED( x ) ((TSCP)(((S2CINT)(x))<<2))


/* The second type of object is an "extended" object.  This is where the
   pointer points to the header of a multi-word object.

        +--------+--------+--------+--------+
        |........pointer to object........01|
        +--------+--------+--------+--------+
 
   This header in turn has an immediate tag (tag = 2) and the remaining 6 bits
   of the first byte define the type of the object as follows.  Note that
   while the pictures show each object being composed of 32-bit words, the
   width of each word is the width of S2CINT.

   A SYMBOL is represented by:

	+--------+--------+--------+--------+
	|    0   |    0   |    0   |10000010|		symbol (tag = 130)
	+--------+--------+--------+--------+
	|            symbol name	    |
	+--------+--------+--------+--------+
	| 	  pointer to value	    |
	+--------+--------+--------+--------+
	|               value    	    |
	+--------+--------+--------+--------+
	|           property list	    |
	+--------+--------+--------+--------+

   where the first word contains the tag.  Following the tag is the symbol
   name.  It is a string and is of the form "symbol-name" for top-level
   symbols and "module-name_symbol-name" for other symbols.

   Next comes a pointer to the top-level value of the symbol.  If the symbol
   is bound to a compiled global value, then the pointer will point to that
   value and the following field will not be used.  On the other hand, if
   the symbol is not bound to a compiled global, then the pointer will point
   to the following word which will hold its value.

   The final field points to the property list for the symbol.   

   All "interned" symbols are kept in a data structure called the OBARRAY.  It
   is a Scheme array which maintains bucket-hash lists of all allocated
   symbols.  Symbols are created and entered into the data structure by the
   function "sc_string_2d_3esymbol".

   A STRING is represented by:  

	+--------+--------+--------+--------+
	|     length of string     |10000110|		string (tag = 134)
        +--------+--------+--------+--------+
        |    i   |    r   |    t   |    s   |
        +--------+--------+--------+--------+
	|    -   |    0   |    g   |    n   |
	+--------+--------+--------+--------+

   where the first word contains the tag and the length (in bytes) of the
   string.  The string storage starts in the next word.  Following the last
   character of the string is a null byte. 

   A VECTOR is represented by:

	+--------+--------+--------+--------+
	|   number of elements     |10001010|           vector (tag = 138)
	+--------+--------+--------+--------+
	|            element 0              |
	+--------+--------+--------+--------+
	|            element 1              |
	+--------+--------+--------+--------+
	|	         ...		    |

  where the first word contains the tag and the length (in elements) of the
  vector.  The vector storage starts in the next word, where each element is a
  scheme pointer.

   A PROCEDURE is represented by:

        +--------+--------+--------+--------+
	|   0    |optional|required|10001110|           procedure (tag = 142)
	+--------+--------+--------+--------+
        |         code address              |
        +--------+--------+--------+--------+
	|  pointer to enclosing closure     |
	+--------+--------+--------+--------+

   where the first word contains the tag and the argument flags.  The optional
   flag is 0 when the function takes a fixed number of arguments and 1 when it
   takes a list of optional arguments as its final argument.  The required
   field is the number of required arguments that the function takes.  This is
   followed by the code address and a pointer to the enclosing closure (which
   may be () or a continuation).

   A CLOSURE is represented by:

	+--------+--------+--------+--------+
        |      # closed values     |10010010|           closure (tag = 146)
        +--------+--------+--------+--------+
        |    pointer to enclosing closure   |
        +--------+--------+--------+--------+
        |        1st closed variable        |
        +--------+--------+--------+--------+
        |        2nd closed variable        |
        +--------+--------+--------+--------+
        |                ...                |

   where the first word contains the tag and the number of closed variables.
   The next word contains a pointer to the enclosing closure (which may be ())
   and the closed variables then follow.

   A CONTINUATION is a formed by CALL-WITH-CURRENT-CONTINUATION.  It is
   represented by:

        +--------+--------+--------+--------+
        |      # saved words       |10010110|           continuation (tag=150)
        +--------+--------+--------+--------+
        | pointer to enclosing continuation |
        +--------+--------+--------+--------+
	|      # saved stack bytes          |
	+--------+--------+--------+--------+
        .				    .
        .      state saved by setjmp	    .
        .        	 		    .
        +--------+--------+--------+--------+
        | address of byte 0 of saved stack  |
	+--------+--------+--------+--------+
	|   saved value of sc_stacktrace    |
	+--------+--------+--------+--------+
        .				    .
	.           saved display           .
	. 				    .
	+--------+--------+--------+--------+
	|      1st word of saved stack      |
	+--------+--------+--------+--------+
	|      2nd word of saved stack      |
	+--------+--------+--------+--------+
	|                ...                |

   where the first word contains the tag and the count of the number of words
   required to hold the continuation (does not include word for pointer to
   enclosing continuation).  Next is a pointer to the enclosing continuation
   (or () if there isn't one) and the count of the number of bytes of stack
   saved.  Following this is the state saved by setjmp.  The continuation is
   terminated by the stack address, the value of sc_stacktrace, the saved
   display, and the saved stack block.  Note the contents of any of these
   saved words may be pointers or derived from pointers.

   A RECORD is represented by:

	+--------+--------+--------+--------+
	|   number of elements     |10001010|           record (tag = 154)
	+--------+--------+--------+--------+
	|         A-list of methods         |
	+--------+--------+--------+--------+
	|            element 0              |
	+--------+--------+--------+--------+
	|	         ...		    |

  where the first word contains the tag and the length (in elements) of the
  record.  The next word is an a-list of methods.  Following this is a
  scheme pointer for each element of the record.

   A DOUBLE FLOATING POINT number is represented by:

        +--------+--------+--------+--------+
        |    0   |    0   |    0   |10011110|           double (tag = 158)
        +--------+--------+--------+--------+
	|      optional alignment pad	    |
	+--------+--------+--------+--------+
        |   				    |
        +--  double floating point value  --+
	|				    |
	+--------+--------+--------+--------+

   A forwarded object (which may be a pair or an extended object) is
   represented by:

	+--------+--------+--------+--------+
	|        word count        |10100010|		forward (tag = 162)
	+--------+--------+--------+--------+
	|    tagged pointer to new copy     |
	+--------+--------+--------+--------+

   where the first word contains the tag and the size of the object (in words).
   The next word contains a Scheme pointer to the new copy of the object.

   When storage must be allocated to correctly align objects, a wordalign
   object is allocated:

	+--------+--------+--------+--------+
	|    0   |    0   |    0   |10100110|		word align (tag = 166)
	+--------+--------+--------+--------+
*/

#define	EXTENDEDTAG 	1
#define	SYMBOLTAG 	130
#define STRINGTAG	134
#define	VECTORTAG	138
#define	PROCEDURETAG	142
#define	CLOSURETAG	146
#define CONTINUATIONTAG 150
#define RECORDTAG	154
#define DOUBLEFLOATTAG  158
#define FORWARDTAG	162
#define WORDALIGNTAG	166

/* The following definitions define the size in S2CINT's of each extended
   object.
*/

#define SYMBOLSIZE	       5
#define STRINGSIZE( x )        ((((x)+sizeof(S2CINT))/sizeof(S2CINT))+1)
#define VECTORSIZE( x )        ((x)+1)
#define PROCEDURESIZE	       3
#define CLOSURESIZE( x )       ((x)+2)
#define CONTINUATIONSIZE( x )  ((x)+2)
#define RECORDSIZE( x )	       ((x)+2)
#ifdef DOUBLE_ALIGN
#define DOUBLEFLOATSIZE	       ((sizeof(double)*2)/sizeof(S2CINT))
#else
#define DOUBLEFLOATSIZE	       (1+sizeof(double)/sizeof(S2CINT))
#endif
#define FORWARDSIZE( x )       (x)
#define WORDALIGNSIZE	       1

#ifndef MAXSTRINGSIZE
#define MAXSTRINGSIZE	       16777215
#endif
#ifndef MAXVECTORSIZE
#define MAXVECTORSIZE	       16777215
#endif

#define MAXRECORDSIZE	       (MAXVECTORSIZE-1)

/* A pointer that points to an extended object must pass the following test.
   Note that some things which aren't pointers can pass this test too.  The
   pointer P must be untagged.
*/

#define EXTENDEDHEADER( p ) ((p->extendedobj.tag >= SYMBOLTAG) && \
			     (TSCPTAG( p->extendedobj.tag ) == IMMEDIATETAG))

/* The number of closed variables in a contination with 0 saved stack words is
   NULLCONTINUATIONSIZE.
*/

#define NULLCONTINUATIONSIZE ((sizeof( sc_jmp_buf )/sizeof(S2CINT))+3)

/* There is one string which is the empty string and one vector which is the
   empty vector.
*/

#define EMPTYSTRING	sc_emptystring
#define EMPTYVECTOR	sc_emptyvector

extern TSCP	sc_emptystring,
		sc_emptyvector;

/* The third type of object is an "immediate" object where the actual
   object type is encoded in the rest of the pointer.  The objects of this
   type are:

	+--------+--------+--------+--------+
	|    0	 |    0   |    0   |00000010|		empty list
	+--------+--------+--------+--------+

	+--------+--------+--------+--------+
	|    0	 |    0   |    0   |00001010|		#F
	+--------+--------+--------+--------+

	+--------+--------+--------+--------+
	|    0	 |    0   |    0   |00001110|		#T
	+--------+--------+--------+--------+

	+--------+--------+--------+--------+
	|    0	 |    0   |  char  |00010010|		character
	+--------+--------+--------+--------+

	+--------+--------+--------+--------+
	|    0   |    0   |    0   |00010110|		eof object
	+--------+--------+--------+--------+

	+--------+--------+--------+--------+
	|    0   |    0   |    0   |00011010|		undefined
	+--------+--------+--------+--------+

   Tags are allocated with an eye toward null testing.  Note that the the
   boolean #F and the list () are separate objects, but both are treated as
   false to conform to the Scheme definition.
	
	()	==  2   ==  emptylist
	
	#F	==  10  ==  falsevalue
	
	#T	==  14  ==  truevalue

	(NOT P)	==  $1 := P and 247;		
		    $1 := $1 =i 2;
*/

#define	IMMEDIATETAG		2
#define	IMMEDIATETAGMASK	255
#define	EMPTYLIST		((TSCP)2)
#define	FALSEVALUE		((TSCP)10)
#define	TRUEVALUE		((TSCP)14)
#define	CHARACTERTAG		18
#define	EOFOBJECT		((TSCP)22)
#define UNDEFINED		((TSCP)26)

#define C_CHAR( i )	 ((TSCP)(((S2CUINT)( i )<< 8)+CHARACTERTAG))
#ifdef SPARC
#define CHAR_C( c )	 ((int)(((S2CUINT)( c )) >> 8))
#else
#define CHAR_C( c )	 ((char)(((S2CUINT)( c )) >> 8))
#endif
#define CHAR_FIX( c )    ((TSCP)(((S2CUINT)( c )) >> 6))
#define FIX_CHAR( fix )  ((TSCP)(((S2CUINT)( fix ) << 6)+CHARACTERTAG))

#define TSCPIMMEDIATETAG( p ) ((S2CINT)(p) & IMMEDIATETAGMASK)

extern TSCP  sc_emptylist,	/* Immediate denoting empty list */
	     sc_falsevalue,	/* Immediate denoting false */
	     sc_truevalue,	/* Immediate denoting true  */
	     sc_eofobject,	/* Immediate denoting end-of-file */
	     sc_undefined;	/* Immediate denoting the undefined value */

/* The final type of object is a list cell.  The CAR of the cell is a word
   stored at (pointer), and the CDR of the cell is the next word.

	+--------+--------+--------+--------+
	|    	   CAR of the pair	    |		pair
	+--------+--------+--------+--------+
	|    	   CDR of the pair	    |
	+--------+--------+--------+--------+
*/

#define	PAIRTAG	  3
#define CONSSIZE  2
#define CONSBYTES (CONSSIZE*sizeof(S2CINT))


/* Symbols are kept in the "obarray" which is a data structure internal to
   this module.  It is used by SYMBOL->STRING to make symbols unique.
*/

extern TSCP  sc_obarray;

/* In order for garbage collection to work correctly, the addresses of all
   globals containing constants and top level variables must be known.  They
   are maintained in two extensible structures:  sc_constants and sc_globals.
   Entries are added by addtoSCPTRS and may be deleted by deletefromSCPTRS.
*/

struct  SCPTRS  {
   S2CINT  count;	/* # of pointers in the structure */
   S2CINT  limit;	/* # of pointers it could hold */
   TSCP  *ptrs[ 1 ];	/* pointers */
};

#define sizeofSCPTRS( x ) (sizeof(struct SCPTRS)+sizeof(TSCP)*((x)-1))

extern struct  SCPTRS  *addtoSCPTRS();

extern void  deletefromSCPTRS();

extern struct  SCPTRS  *sc_constants;

extern struct  SCPTRS  *sc_globals;

/* Access to lexically nested variables is via a display maintained by the
   following data structure.  SC_DISPLAY is an array which maintains the
   display, and SC_MAXDISPLAY is the maximum number of cells in the display
   that are ever used.
*/

extern TSCP  sc_display[];

extern S2CINT  sc_maxdisplay;

/* Stack height checks on procedure entry are controlled by the variable
   CHECKSTACK.
*/

#if CHECKSTACK
#ifdef STACK_GROWS_POSITIVE
#define CHECK_SP if (((char*)&st) >= sc_topofstack)  sc_stackoverflow()
#else
#define CHECK_SP if (((char*)&st) <= sc_topofstack)  sc_stackoverflow()
#endif
#else
#define CHECK_SP
#endif

/* Time-slicing is implemented by decrementing and checking a counter on each
   procedure entry and backward branch.  The variable TIMESLICE enables it.
   Pending signals are also detected at these points.
*/

#if TIMESLICE
#define CHECK_TS if (--sc_timeslice <= 0)  sc_timesliced()
#else
#define CHECK_TS 
#endif

/* Debugging information is kept on the stack in an implementation independent
   manner by using the following data structures and conventions.  When a
   procedure is entered, it will allocate a STACKTRACE structure on the stack
   and set SC_STACKTRACE to point to it.  The fields in the structure are
   set as follows:
			in sceval_exec:		in any other procedure:

   prevstacktrace:	previous value of	previous value of
			sc_stacktrace		sc_stacktrace

   procname:		current environment	C string naming the procedure

   exp:			expression being	unused
		        interpreted	

   When the procedure is exited, sc_stacktrace is restored.
*/

struct  STACKTRACE {			/* Stack trace back record */
	struct STACKTRACE*  prevstacktrace;	
	VOIDP  procname;
	TSCP  exp;
	};

extern  struct STACKTRACE  *sc_stacktrace;

#if COMPACTPUSHTRACE
#define PUSHSTACKTRACE( procedure ) \
	 struct  STACKTRACE  st; \
	 TSCP  result; \
	 sc_pushstacktrace( &st, procedure )
#else
#define PUSHSTACKTRACE( procedure )  \
	 struct  STACKTRACE  st; \
	 TSCP  result;	\
	 st.prevstacktrace = sc_stacktrace; \
	 st.procname = (procedure); \
	 sc_stacktrace = &st; \
	 CHECK_SP; \
	 CHECK_TS
#endif

#if COMPACTPOPTRACE
#define POPSTACKTRACE( exp ) \
	 return( sc_popstacktrace( &st, exp ) )
#else
#define	POPSTACKTRACE( exp ) \
	 return( (result=(exp), \
		  sc_stacktrace=st.prevstacktrace, \
		  result) )
#endif

#define LOOPSTACKTRACE( expression, env ) \
	 (st.exp = (expression), st.procname = (env))

/* Scheme execution mode */

extern  S2CINT  sc_schememode;

#define STANDALONESCHEME 0
#define EMBEDDEDSCHEME 1
#define INTERACTIVESCHEME 2

/* A define is used instead of goto on backward branches to allow code to be
   inserted to for check timeslice expiration and pending signals.
*/

#define GOBACK( l ) {CHECK_TS; goto l;}

/* Macros of the form XALn are used to declare external procedure arguments as
   such arguments are not allowed by older C compilers.
*/

#ifdef OLD_FASHIONED_C

#define XAL0()
#define XAL1(a)
#define XAL2(a,b)
#define XAL3(a,b,c)
#define XAL4(a,b,c,d)
#define XAL5(a,b,c,d,e)
#define XAL6(a,b,c,d,e,f)
#define XAL7(a,b,c,d,e,f,g)
#define XAL8(a,b,c,d,e,f,g,h)
#define XAL9(a,b,c,d,e,f,g,h,i)
#define XAL10(a,b,c,d,e,f,g,h,i,j)
#define XAL11(a,b,c,d,e,f,g,h,i,j,k) 
#define XAL12(a,b,c,d,e,f,g,h,i,j,k,l)
#define XAL13(a,b,c,d,e,f,g,h,i,j,k,l,m)
#define XAL14(a,b,c,d,e,f,g,h,i,j,k,l,m,n)
#define XAL15(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)
#define XAL16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)
#define XAL17(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q)
#define XAL18(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r)
#define XAL19(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s)
#define XAL20(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t)
#define XAL21(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u) 
#define XAL22(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v) 
#define XAL23(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w) 
#define XAL24(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x) 
#define XAL25(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y) 
#define XAL26(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z)

#else

#ifdef NEED_MACRO_ARGS
#define XAL0(dummy)
#else
#define XAL0()
#endif
#define XAL1(a) a v01
#define XAL2(a,b) a v01,b v02
#define XAL3(a,b,c) a v01,b v02,c v03
#define XAL4(a,b,c,d) a v01,b v02,c v03,d v04
#define XAL5(a,b,c,d,e) a v01,b v02,c v03,d v04,e v05
#define XAL6(a,b,c,d,e,f) a v01,b v02,c v03,d v04,e v05,f v06
#define XAL7(a,b,c,d,e,f,g) a v01,b v02,c v03,d v04,e v05,f v06,g v07
#define XAL8(a,b,c,d,e,f,g,h) a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08
#define XAL9(a,b,c,d,e,f,g,h,i) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09
#define XAL10(a,b,c,d,e,f,g,h,i,j) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10
#define XAL11(a,b,c,d,e,f,g,h,i,j,k) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11
#define XAL12(a,b,c,d,e,f,g,h,i,j,k,l) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,l v12
#define XAL13(a,b,c,d,e,f,g,h,i,j,k,l,m) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13
#define XAL14(a,b,c,d,e,f,g,h,i,j,k,l,m,n) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14
#define XAL15(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15
#define XAL16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16
#define XAL17(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17
#define XAL18(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18
#define XAL19(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19
#define XAL20(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20
#define XAL21(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21
#define XAL22(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21,v v22
#define XAL23(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21,v v22,w v23
#define XAL24(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21,v v22,\
	w v23,x v24
#define XAL25(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21,v v22,\
	w v23,x v24,y v25
#define XAL26(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z) \
	a v01,b v02,c v03,d v04,e v05,f v06,g v07,h v08,i v09,j v10,k v11,\
	l v12,m v13,n v14,o v15,p v16,q v17,r v18,s v19,t v20,u v21,v v22,\
	w v23,x v24,y v25,z v26

#endif

/* The procedural interfaces to this module are: */

extern TSCP   sc_make_2dstring_v;

extern TSCP   sc_make_2dstring();

extern TSCP   sc_string_2dcopy_v;

extern TSCP   sc_string_2dcopy();

extern TSCP   sc_cstringtostring();

extern TSCP   sc_c_2dstring_2d_3estring_v;

extern TSCP   sc_c_2dstring_2d_3estring();

extern TSCP   sc_make_2dvector_v;

extern TSCP   sc_make_2dvector();

#ifdef MAC
extern TSCP   sc_makeclosure(...);
extern TSCP   sc_makeprocedure(...);
#else
extern TSCP   sc_makeclosure( TSCP va_alist, ... );
extern TSCP   sc_makeprocedure();
#endif

extern TSCP   sc_make_2d_25record_v;

extern TSCP   sc_make_2d_25record();

extern void   sc_initializevar();

extern void   sc_global_TSCP();

extern void   sc_delete_global_TSCP();

extern void   sc_constantexp();

extern TSCP   sc_string_2d_3esymbol_v;

extern TSCP   sc_string_2d_3esymbol();

extern TSCP   sc_d_2dsymbol_ab4b4447_v;

extern TSCP   sc_d_2dsymbol_ab4b4447();

extern TSCP   sc_uninterned_2dsymbol_3f_v;

extern TSCP   sc_uninterned_2dsymbol_3f();

extern char   sc_tscp_char();

extern S2CINT   sc_tscp_s2cint();

extern S2CUINT  sc_tscp_s2cuint();

extern VOIDP  sc_tscp_pointer();

extern double sc_tscp_double();

extern TSCP   sc_s2cint_tscp();

extern TSCP   sc_s2cuint_tscp();

extern S2CUINT  sc_procedureaddress();

extern TSCP  sc_scheme_2dmode();

extern TSCP  sc_set_2dscheme_2dmode_21( XAL1( TSCP ) );

/* The definitions which follow are used by the code generated by the Scheme->C
   compiler.  They are included in this file so that only one #include file
   will be required.
*/

/* Alternative C access to SCOBJ's */

#define UNSI_GNED( tscp )  (TX_U( tscp )->unsi.gned)

#define TSCP_EXTENDEDTAG( tscp )  (TX_U( tscp )->extendedobj.tag)

#define SYMBOL_NAME( tscp )          (TX_U( tscp )->symbol.name)
#define SYMBOL_VALUEADDR( tscp )     (TX_U( tscp )->symbol.ptrtovalue)
#define SYMBOL_VALUE( tscp )         (*TX_U( tscp )->symbol.ptrtovalue)
#define SYMBOL_PROPERTYLIST( tscp )  (TX_U( tscp )->symbol.propertylist)

#define STRING_LENGTH( tscp )   (TX_U( tscp )->string.length)
#define STRING_CHAR( tscp, n )  (*(((unsigned char*)tscp)+FIXED_C( n )+ \
				   (sizeof(S2CINT)-1)))

#define VECTOR_LENGTH( tscp )     (TX_U( tscp )->vector.length)

#if defined(AOSF) || defined(AMD64)
#define VECTOR_ELEMENT( tscp, n ) (*((PATSCP)(((char*)( tscp ))+ \
				              (sizeof(S2CINT)-1)+ \
					      ((S2CINT)n)*2)))
#else
#define VECTOR_ELEMENT( tscp, n ) (*((PATSCP)(((char*)( tscp ))+ \
				              (sizeof(S2CINT)-1)+((S2CINT)n))))
#endif

#define PROCEDURE_REQUIRED( tscp )  (TX_U( tscp )->procedure.required)
#define PROCEDURE_OPTIONAL( tscp )  (TX_U( tscp )->procedure.optional)
#define PROCEDURE_CLOSURE( tscp )   (TX_U( tscp )->procedure.closure)
#define PROCEDURE_CODE( tscp )	    (TX_U( tscp )->procedure.code)

#define CLOSURE_LENGTH( tscp )   (TX_U( tscp )->closure.length)
#define CLOSURE_CLOSURE( tscp )  (TX_U( tscp )->closure.closure)
#define CLOSURE_VAR( tscp, n )   (*(&TX_U( tscp )->closure.var0+(n)))

#define RECORD_LENGTH( tscp )      (TX_U( tscp )->vector.length)
#define RECORD_METHODS( tscp )     \
	(*((PATSCP)(((char*)( tscp ))+(sizeof(S2CINT)-1))))
#if defined(AOSF) || defined(AMD64)
#define RECORD_ELEMENT( tscp, n )  \
	(*((PATSCP)(((char*)( tscp ))+((sizeof(S2CINT)*2)-1)+((S2CINT)n)*2)))
#else
#define RECORD_ELEMENT( tscp, n )  \
	(*((PATSCP)(((char*)( tscp ))+((sizeof(S2CINT)*2)-1)+((S2CINT)n))))
#endif

#ifdef SPARC
extern double sc_get_double( XAL1( int* ) );
#define FLOAT_VALUE( tscp ) sc_get_double(&(TX_U( tscp )->doublefloat.value[0]))
#else
#define FLOAT_VALUE( tscp )  (TX_U( tscp )->doublefloat.value)
#endif
 
#define PAIR_CAR( tscp )  (TP_U( tscp )->pair.car)
#define PAIR_CDR( tscp )  (TP_U( tscp )->pair.cdr)

/* C declarations */

#define DEFCSTRING( name, chars )  static char *name = chars

#define DEFTSCP( name ) TSCP  name

#define DEFSTATICTSCP( name )  static TSCP  name

#define EXTERNTSCP( a ) extern TSCP  a

#define EXTERNTSCPP( a, b )  extern TSCP  a( b )

#define EXTERNINT( a )  extern int a

#define EXTERNINTP( a, b ) extern int a( b )

#define EXTERNPOINTER( a )  extern VOIDP a

#define EXTERNPOINTERP( a, b ) extern VOIDP a( b )

#define EXTERNARRAY( a )  extern unsigned a[]

#define EXTERNARRAYP( a, b ) extern VOIDP a( b )

#define EXTERNCHAR( a ) extern char a

#define EXTERNCHARP( a, b ) extern char a( b )

#define EXTERNSHORTINT( a ) extern short int a

#define EXTERNSHORTINTP( a, b ) extern short int a( b )

#define EXTERNLONGINT( a ) extern long int a

#define EXTERNLONGINTP( a, b ) extern long int a( b )

#define EXTERNUNSIGNED( a ) extern unsigned a

#define EXTERNUNSIGNEDP( a, b ) extern unsigned a( b )

#define EXTERNSHORTUNSIGNED( a ) extern short unsigned a

#define EXTERNSHORTUNSIGNEDP( a, b ) extern short unsigned a()

#define EXTERNLONGUNSIGNED( a ) extern long unsigned a

#define EXTERNLONGUNSIGNEDP( a, b ) extern long unsigned a( b )

#define EXTERNFLOAT( a ) extern float a

#define EXTERNFLOATP( a, b ) extern float a( b )

#define EXTERNDOUBLE( a ) extern double a

#define EXTERNDOUBLEP( a, b ) extern double a( b )

#define EXTERNVOIDP( a, b ) extern void a( b )

#define MAXDISPLAY( a ) if (a > sc_maxdisplay) sc_maxdisplay = a

/* C operators */

#define EQ( a, b )		(a == b)
#define NEQ( a, b )		(a != b)
#define NOT( a )		(a == 0)
#define GT( a, b )		(a > b)
#define LT( a, b )		(a < b)
#define GTE( a, b )		(a >= b)
#define LTE( a, b )		(a <= b)
#define OR( a, b )		(a || b)
#define AND( a, b )		(a && b)
#define SET( a, b )		(a = b)
#define BITAND( a, b )		(a & b)
#define BITOR( a, b )		(a | b)
#define BITXOR( a, b )		(a ^ b)
#define BITLSH( a, b )		(a << b)
#define BITRSH( a, b )		(a >> b)
#define BITAND32( a, b )	((a & b) & 0xFFFFFFFF)
#define BITOR32( a, b )		((a | b) & 0xFFFFFFFF)
#define BITXOR32( a, b )	((a ^ b) & 0xFFFFFFFF)
#define BITLSH32( a, b )	((a << b) & 0xFFFFFFFF)
#define BITRSH32( a, b )	((a & 0xFFFFFFFF) >> b)
#define PLUS( a, b )		(a + b)
#define DIFFERENCE( a, b )	(a - b)
#define NEGATE( a )		(- a)
#define TIMES( a, b )		(a * b)
#define QUOTIENT( a, b )	(a / b)
#define REMAINDER( a, b )	(a % b)
#define SHORTINT( a )		((short int) a)
#define INT( a )		((int) a)
#define LONGINT( a )		((long int) a)
#define SHORTUNSIGNED( a )	((short unsigned) a)
#define UNSIGNED( a )		((unsigned) a)
#define LONGUNSIGNED( a )	((long unsigned) a)
#define _S2CINT( a )		((S2CINT) a)
#define _S2CUINT( a )		((S2CUINT) a)
#define CFLOAT( a )		((float) a)
#define CDOUBLE( a )		((double) a)
#define _TSCP( a )		((TSCP) a)
#define VIA( a )		(*a)
#define ADR( a )		(&a)
#define SIZEOF( a )		(sizeof( a ))
#define DISPLAY( a )		(sc_display[ a ])

/* Some implementations gracefully handle integer overflow.  This option is
   enabled by MATHTRAPS.
*/

#if MATHTRAPS
#define IPLUS( a, b )		sc_iplus( a, b )
#define IDIFFERENCE( a, b )	sc_idifference( a, b)
#define INEGATE( a )		sc_inegate( a)
#define ITIMES( a, b )		sc_itimes( a, b )
#else
#define IPLUS( a, b )		(a + b)
#define IDIFFERENCE( a, b )	(a - b)
#define INEGATE( a )		(- a)
#define ITIMES( a, b )		(a * b)
#endif

/* Generational garbage collection requires that stores of pointers to new
   objects in old objects be detected.  This is done by requiring the use
   of the macro SETGEN to set cells in SET-CAR!, SET-CDR!, VECTOR-SET!,
   PUTPROP, SCHEME-TSCP-SET!, SET! of lexically bound variables, %RECORD-SET!,
   and %RECORD-METHODS-SET!.  The macro SETGENTL must be used to set the
   values of top level variables.

   N.B.  These macros assume a page size of 512 bytes.
*/

#ifdef WIN16
#define SETGEN( a, b )  	sc_setgeneration( &a, b )
#else
#define SETGEN( a, b )  \
	((sc_pagelink[ (((S2CUINT)(&a))>>9)-sc_firstphypagem1 ])?  \
	 (a = b):sc_setgeneration( &a, b ))
#endif

#define SETGENTL( a, b )	(sc_setgeneration( &a, b ))

/* Scheme boolean tests */

#define TRUE( x )   ((((S2CINT)(x)) & 247) != 2)
#define FALSE( x )  ((((S2CINT)(x)) & 247) == 2)

/* Short circuiting for procedure application.  In order for this code
   to work correctly, it requires that the tag field be in the least
   significant 8 bits of the extended object header.
*/

#define UNKNOWNCALL( proc, argc ) (sc_unknownargc = argc, \
				   sc_unknownproc[ 1 ] = proc, \
				   sc_unknownproc[ \
				     (UNSI_GNED( \
				         sc_unknownproc[ TSCPTAG( proc ) ] ) \
				      == (argc*256+PROCEDURETAG)) ])

/* Inline type conversions */

#define FLT_FIX( flt )   C_FIXED( (S2CINT)(FLOAT_VALUE( flt )) )
#define FIX_FLT( fix )   MAKEFLOAT( (double)(FIXED_C( fix )) )
#define FIX_FLTV( fix )  ((double)(FIXED_C( fix )))
#define FLTV_FLT( flt )	 MAKEFLOAT( flt )

#ifdef SPARC
#define FLTP_FLT( fltp ) MAKEFLOAT( sc_get_double((int*)(fltp)) )
#else
#define FLTP_FLT( fltp ) MAKEFLOAT( *((double*)( fltp )) )
#endif

#define STRING_C( s ) (&T_U( s )->string.char0)

#define BOOLEAN( c )	 ((c) ? TRUEVALUE : FALSEVALUE)

/* Memory Access */

#define MBYTE( base, bx )     (*(((unsigned char*) base)+bx ))
#define MSINT( base, bx )     (*((short int*)( ((char*)base) + bx )))
#define MINT( base, bx )      (*((int*)( ((char*)base) + bx )))
#define MLINT( base, bx )     (*((long int*)( ((char*)base) + bx )))
#define MSUNSIGNED(base,bx)   (*((short unsigned*)( ((char*)base) + bx )))
#define MUNSIGNED(base, bx)   (*((unsigned*)( ((char*)base) + bx )))
#define MLUNSIGNED(base,bx)   (*((long unsigned*)( ((char*)base) + bx )))
#define MS2CUINT(base, bx)    (*((S2CUINT*)( ((char*)base) + bx )))
#define MTSCP( base, bx )     (*((TSCP*)( ((char*)base) + bx )))
#define MFLOAT( base, bx )    (*((float*)( ((char*)base) + bx )))

#ifdef SPARC
#define MDOUBLE(base,bx)      sc_get_double( (int*)(((char*)base) + bx) )
#define SETMDOUBLE(base,bx,y) sc_set_double( (int*)(((char*)base) + bx), y )
#else
#define MDOUBLE(base,bx)      (*((double*)(((char*)base) + bx)))
#define SETMDOUBLE(base,bx,y) (*((double*)(((char*)base) + bx)) = y)
#endif

/* Low-level builtins */

#define CONS 		sc_cons
#define STRINGTOSYMBOL 	sc_string_2d_3esymbol
#define CONSTANTEXP 	sc_constantexp
#define MAKEPROCEDURE 	sc_makeprocedure
#define MAKECLOSURE 	sc_makeclosure
#define MAKEFLOAT	sc_makedoublefloat
#define INITIALIZEVAR 	sc_initializevar
#define TSCP_CHAR	sc_tscp_char
#define TSCP_S2CUINT	sc_tscp_s2cuint
#define TSCP_S2CINT	sc_tscp_s2cint
#define TSCP_POINTER	sc_tscp_pointer
#define TSCP_DOUBLE	sc_tscp_double
#define CHAR_TSCP	C_CHAR
#define S2CINT_TSCP	sc_s2cint_tscp
#define S2CUINT_TSCP    sc_s2cuint_tscp
#define POINTER_TSCP	sc_s2cuint_tscp
#define DOUBLE_TSCP	FLTV_FLT
#define CSTRING_TSCP	sc_cstringtostring 
#define INITHEAP( a,b,c,d ) \
			if (sc_stackbase == 0) { STACKPTR( sc_stackbase ); }\
			sc_restoreheap( a, b, c, d )
#define SCHEMEEXIT()	sc_osexit( (TSCP)0 )
#define LISTTOVECTOR	scrt4_list_2d_3evector
#define CLARGUMENTS	sc_clarguments

/* External Functions and SCHEME->C globals which are defined in other
   modules.  They are duplicated here so that this file contains all external
   definitions needed by a SCHEME->C program.
*/

extern  TSCP  sc_makedoublefloat( XAL1( double ) );
extern  TSCP  sc_cons();
extern  TSCP  sc_verifyobject( XAL1( TSCP ) );
extern  S2CINT  sc_unknownargc;
extern  TSCP  sc_unknownproc[ 4 ];
extern  void  sc_restoreheap();
extern  TSCP  scrt4_list_2d_3evector( XAL1( TSCP ) );
extern  void  sc_arm_mathtraps();
extern  S2CINT   sc_iplus( XAL2( S2CINT, S2CINT ) );
extern  S2CINT   sc_idifference( XAL2( S2CINT, S2CINT ) );
extern  S2CINT   sc_inegate( XAL1( S2CINT ) );
extern  S2CINT   sc_itimes( XAL2( S2CINT, S2CINT ) );
extern  PAGELINK  *sc_pagelink;
extern  S2CINT  sc_firstphypagem1;
extern  TSCP  sc_setgeneration();
extern  S2CINT  sc_timeslice;
extern	TSCP  scdebug_timeout();
extern  char*  sc_topofstack;
extern  S2CINT  *sc_stackbase;
extern  TSCP  sc_clarguments();
extern S2CINT  *sc_processor_register( XAL1( S2CINT ) );
extern  void  sc_options( XAL3( int, int, int ) );
extern  void  sc_stackoverflow();
extern  void  sc_timesliced();
extern  void  sc_pushstacktrace( XAL2( struct STACKTRACE *, char* ) );
extern  TSCP  sc_popstacktrace( XAL2( struct STACKTRACE *, TSCP ) );

/* Linkage to external functions to implement math routines.  N.B.  These
   declarations may be machine specific.
*/

extern	double floor( XAL1( double ) );
#define C_FLOOR( x )	DOUBLE_TSCP( floor( TSCP_DOUBLE( x ) ) )

extern	double ceil( XAL1( double ) );
#define C_CEILING( x )	DOUBLE_TSCP( ceil( TSCP_DOUBLE( x ) ) )

extern	double exp( XAL1( double ) );
#define C_EXP( x )	DOUBLE_TSCP( exp( TSCP_DOUBLE( x ) ) )

extern	double log( XAL1( double ) );
#define C_LOG( x )	DOUBLE_TSCP( log( TSCP_DOUBLE( x ) ) )

extern	double sin( XAL1( double ) );
#define C_SIN( x )	DOUBLE_TSCP( sin( TSCP_DOUBLE( x ) ) )

extern	double cos( XAL1( double ) );
#define C_COS( x )	DOUBLE_TSCP( cos( TSCP_DOUBLE( x ) ) )

extern	double tan( XAL1( double ) );
#define C_TAN( x )	DOUBLE_TSCP( tan( TSCP_DOUBLE( x ) ) )

extern	double asin( XAL1( double ) );
#define C_ASIN( x )	DOUBLE_TSCP( asin( TSCP_DOUBLE( x ) ) )

extern	double acos( XAL1( double ) );
#define C_ACOS( x )	DOUBLE_TSCP( acos( TSCP_DOUBLE( x ) ) )

extern	double atan( XAL1( double ) );
#define C_ATAN( x )	DOUBLE_TSCP( atan( TSCP_DOUBLE( x ) ) )

extern	double atan2( XAL2( double, double ) );
#define C_ATAN2( x, y )	DOUBLE_TSCP( atan2( TSCP_DOUBLE( x ), \
					    TSCP_DOUBLE( y ) ) )
extern	double sqrt( XAL1( double ) );
#define C_SQRT( x )	DOUBLE_TSCP( sqrt( TSCP_DOUBLE( x ) ) )

extern	double pow( XAL2( double, double ) );
#define C_POW( x, y )	DOUBLE_TSCP( pow( TSCP_DOUBLE( x ), \
					  TSCP_DOUBLE( y ) ) )
