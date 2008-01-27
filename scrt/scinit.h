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

/* This module defines some basic global objects and initializes those parts
   of the SCHEME->C runtime system which are written in C.  Included in
   this initialization is the construction of the heap and the optional loading
   of the heap from a file.  For compatibility with other modules, the routines
   and Scheme globals provided by these routines appear as members of the
   module "sc".
*/

extern  S2CINT  sc_timeslice,		/* Counter for time slicing. */
		sc_timesliceinit;

extern  char  *sc_topofstack,		/* Top-of-stack limit. */
	      *sc_savetopofstack;	/* Save limit on overflow. */

extern  S2CINT  sc_stackbytes;		/* # of bytes of stack allocated */

/* Procedural interfaces in this module:  */

extern  S2CINT   sc_expandhead();

extern  void  sc__init();

extern  sc_error( XAL3( char*, char*, TSCP ) );

extern  TSCP  sc_implementation_v;

extern  TSCP  sc_implementation();

extern  void  scheme2c( XAL4( char *, int *, char **, char ** ) );

#define LIST1( x ) CONS( x, EMPTYLIST )
#define LIST2( x, y ) CONS( x, CONS( y, EMPTYLIST ) )
