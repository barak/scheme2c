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

/* This module supplies functions to access system dependent facilities. */

extern TSCP  sc_stdin_v;

extern TSCP  sc_stdout_v;

extern TSCP  sc_stderr_v;

extern void  sc_setstdio();

extern TSCP  sc_fopen( XAL2( TSCP, TSCP ) );

extern TSCP  sc_fclose( XAL1( TSCP ) );

extern TSCP  sc_fflush( XAL1( TSCP ) );

extern TSCP  sc_fgetc( XAL1( TSCP ) );

extern TSCP  sc_fputc( XAL2( TSCP, TSCP ) );

extern TSCP  sc_charready( XAL1( TSCP ) );

extern TSCP  sc_fileno( XAL1( TSCP ) );

extern TSCP  sc_inputready( XAL1( TSCP ) );

extern TSCP  sc_removefile( XAL1( TSCP ) );

extern TSCP  sc_rename( XAL2( TSCP, TSCP ) );

extern TSCP  sc_formatnumber( XAL3( TSCP, TSCP, TSCP ) );

extern TSCP  sc_readnumber( XAL2( TSCP, TSCP ) );

extern char*  sc_getenv( XAL1( char* ) );

#ifdef __GNUC__
extern void  sc_abort() __attribute__((noreturn));
#else
extern void  sc_abort();
#endif

extern double  sc_cputime();

extern void  sc_log_string( XAL1( char * ) );

extern void  sc_log_dec( XAL1( S2CINT ) );

extern void  sc_log_hex( XAL1( S2CUINT ) );

extern TSCP  sc_error_2ddisplay( XAL1( TSCP ) );

extern void  sc_getheap( XAL2( S2CINT, S2CINT ) );

extern void  sc_freeheap( XAL1( void* ) );

extern VOIDP sc_gettable( XAL2( S2CINT, S2CINT ) );

extern void  sc_freetable( XAL1( void* ) );

/* Signal handling - N.B. signals and time slicing are mutually exclusive. */

extern void  sc_dispatchpendingsignals();

extern S2CINT  sc_mutex;

extern S2CINT  sc_pendingsignals;

#if TIMESLICE
#define MUTEXON
#define MUTEXOFF
#else
#define MUTEXON  sc_mutex = 1
#define MUTEXOFF if ((sc_mutex = sc_pendingsignals)  &&  sc_collecting == 0) \
		    sc_dispatchpendingsignals()
#endif

/* Information about allocated heap space is returned in the following
   structure.
*/

struct  HEAPBLOCKS  {
	S2CINT  count;		/* # of blocks of memory allocated */
	S2CINT  minphypage;	/* Pages spanned by this allocation */
	S2CINT  maxphypage;
	struct  {
	   VOIDP  address;	/* Address of the block */
	   S2CINT  size;	/* Size in bytes of the block */
	}  block[ 256 ];
};

extern struct HEAPBLOCKS  sc_heapblocks;

extern TSCP  sc_ossystem( XAL1( TSCP ) );

extern TSCP  sc_ossignal( XAL2( TSCP, TSCP ) );

extern void  sc_collect_done();

extern void  sc_stackoverflow();

extern void  sc_timesliced();

extern void  sc_pushstacktrace( XAL2( struct STACKTRACE *, char* ) );

extern TSCP  sc_popstacktrace( XAL2( struct STACKTRACE *, TSCP ) );

extern void  sc_cioinit();

extern TSCP  sc_time_2dof_2dday_v;

extern TSCP  sc_time_2dof_2dday();
