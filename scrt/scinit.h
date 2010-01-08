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

#ifdef __GNUC__
extern  sc_error( XAL3( char*, char*, TSCP ) ) __attribute__((noreturn));
#else
extern  sc_error( XAL3( char*, char*, TSCP ) );
#endif

extern  TSCP  sc_implementation_v;

extern  TSCP  sc_implementation();

extern  void  scheme2c( XAL4( char *, int *, char **, char ** ) );

#define LIST1( x ) CONS( x, EMPTYLIST )
#define LIST2( x, y ) CONS( x, CONS( y, EMPTYLIST ) )
