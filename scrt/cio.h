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

extern void  sc_abort();

extern void  sc_osexit( XAL1( TSCP ) );

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

#ifdef WIN16
/* One of the pleasures of dealing with Microsoft Windows is the seemingly
   random assignment of segment numbers.  Rather than being seen an an
   impediment to implementing a linear address space, they are seen as a
   boon to avoid accidental storage smashing.  In order to implement the
   vaguely linear addressing scheme that the Scheme->C collector prefers,
   the WIN16 segment numbers are remapped outside of Scheme->C's view.
*/

#define WIN16ADDR( adr )	(sc_win16seg[ ((S2CUINT)(adr))>>16 ] |\
				 (((S2CUINT)(adr)) & 0xFFFFL))
#define LINADDR( adr )	(((S2CUINT)sc_s2cseg[ ((S2CUINT)(adr))>>16 ])<<16 |\
			 (((S2CUINT)(adr)) & 0xFFFFL))

extern  unsigned char  *sc_s2cseg;

extern  S2CUINT  *sc_win16seg;

#undef ADDRESS_PHYPAGE
#undef PAGE_ADDRESS
#define ADDRESS_PHYPAGE( adr )  ((S2CINT)(((S2CUINT)LINADDR(adr))>>PAGEBIT))
#define PAGE_ADDRESS( page )	WIN16ADDR((page+sc_firstphypagem1)<<PAGEBIT)

extern S2CINT*  sc_getsp();
#endif

extern TSCP  sc_time_2dof_2dday_v;

extern TSCP  sc_time_2dof_2dday();
