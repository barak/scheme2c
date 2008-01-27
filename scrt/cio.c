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

/* This module supplies functions to access the system dependent facilities. */

#include "objects.h"
#include "heap.h"
#include "cio.h"
#include "scinit.h"
#undef TRUE
#undef FALSE

#ifdef WIN16

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifndef stderr
FILE  *stderr = NULL;
#endif

#else

#ifdef MAC
#include <types.h>
#else
#include <sys/types.h>
#ifdef LINUX
#include <time.h>
#include <unistd.h>
#include <sys/mman.h>
#endif
#endif

#include <stdio.h>

#ifdef VAX
extern  double  strtod();

extern  void  abort();

extern  void  exit();

extern  char*  malloc();

extern  void  free();

extern  char*  getenv();

extern  int  system();

extern int  unlink();

static int  remove( c )
	char  *c;
{
	return( unlink( c ) );
}
#else
#include <stdlib.h>
#endif

#ifdef MAC
#include <time.h>
#else
#include <sys/ioctl.h>
#include <sys/time.h>

#ifdef __hpux
#include <unistd.h>
#else

#if !defined(LINUX)
extern  char *sbrk();
#endif

extern  int  select ( XAL5( int, fd_set *, fd_set *,
		      fd_set *, struct timeval * ) );
#endif
#endif

#include <errno.h>

#if S2CSIGNALS
#include <signal.h>
#ifdef __hp9000s800
/* HP-UX defines macro with conflicting name: */
#undef sc_error
#endif
#endif

/* Jump through some hoops to decide which time function to use for
   unix.  Most portable is times(), which is available on virtually
   every flavor of unix, including BSD, SYSV, and POSIX.  getrusage()
   is preferable when available, due to its (likely) higher
   resolution, but is a BSD feature that is not as portable.
   Unfortunately there's no automatic way to conditionalize for
   rusage; I had thought to use RUSAGE_SELF, but that is defined by
   HP-UX header file even though getrusage() isn't implemented.  */

#if defined(AOSF) || defined(FREEBSD) || defined(VAX) 
#define HAVE_RUSAGE
#endif

#ifdef MIPS
#ifndef SYSV
#define HAVE_RUSAGE
#endif
#endif

#ifdef SYSV
#define HAVE_TIMES
#else
#ifdef POSIX
#define HAVE_TIMES
#endif
#endif

#ifdef HAVE_RUSAGE
#include <sys/resource.h>
#else
#ifdef HAVE_TIMES
#include <sys/times.h>
#ifndef CLK_TCK
#define CLK_TCK CLOCKS_PER_SEC
#endif
#endif
#endif


#ifdef VAX
extern int sys_nerr;

extern char *sys_errlist[];

static char*  strerror( e )
	int  e;
{
	if  (e < sys_nerr)
	   return( sys_errlist[ e ] );
	else
	   return( "" );
}
#else
extern  char*  strerror( XAL1( int ) );
#endif

#endif

extern  TSCP  scrt4_callsignalhandler( XAL1( TSCP ) );


/* The MACSCI flag is used in conjunction with the MAC flag to produce a usable
   (but crude) interactive interface to Scheme->C.  The flag may be defined
   in either this module or options.h.
*/

#ifdef MACSCI
#include <console.h>

static  struct  {
	int  keyinx;		/* Index to enter characters into buffer */
	int  keyoutx;		/* Index to read characters from buffer */
	int  rawcnt;		/* # raw characters in buffer */
	int  processedcnt;	/* # of processed characters in buffer */
	char  buffer[ 512 ];
}  keys;

static TSCP  SIGINT_handler = C_FIXED( (S2CINT)SIG_DFL );

#define INCKEYX( keyx, i ) keyx = (keyx+i) & 511

#define CONTROL_D ('d' & 037)
#define BACKSPACE ('h' & 037)
#define CONTROL_C ('c' & 037)
#define APPLE_PERIOD ('.' & 037)
#define CONTROL_U ('u' & 037)
#define RETURN (015)

#define S2CSTACK 57000
#define S2CTIMESLICE 10000

/* Main program to set the Application stack limit, the Scheme stack size and
   time slice, and then invoke the read-eval-print loop.
*/

main()
{
	S2CINT  *sp;
	
	STACKPTR( sp );
	SetApplLimit( (char*)sp-S2CSTACK );
	console_options.nrows = 30;
	console_options.title = "\pScheme->C";
	csetmode( C_RAW, stdin );
	INITHEAP( 0, 0, NULL, NULL );
	sc_set_2dstack_2dsize_21( C_FIXED( ((S2CUINT)S2CSTACK)-3000 ) );
	sc_set_2dtime_2dslice_21( C_FIXED( (S2CUINT)S2CTIMESLICE ) );
	screp__init();
	screp_read_2deval_2dprint( EMPTYLIST );
	SCHEMEEXIT();
}
#endif

/* Standard I/O FILE pointers for stand-alone or interactive applications. */

TSCP  sc_stdin_v, sc_stdout_v, sc_stderr_v;

void  sc_setstdio()
{
#ifdef stdin
	sc_stdin_v = POINTER_TSCP( stdin );
	CONSTANTEXP( &sc_stdin_v );
	sc_stdout_v = POINTER_TSCP( stdout );
	CONSTANTEXP( &sc_stdout_v );
	sc_stderr_v = POINTER_TSCP( stderr );
	CONSTANTEXP( &sc_stderr_v );
#endif
}

/* Called to open a file with a file name and access option ("r" or "w").  It
   returns either a "file-number", or #F indicating it was unable to open the
   file.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_fopen( filename, option )
	TSCP filename;  TSCP option;
#else

TSCP  sc_fopen( TSCP filename, TSCP option )
#endif
{
	FILE*  f;

	f = fopen( (char*)&STRING_CHAR( filename, 0 ),
		   (char*)&STRING_CHAR( option, 0 ) );
	if  (f == NULL)
	   return( CSTRING_TSCP( strerror( errno ) ) );
	else
	   return( POINTER_TSCP( f ) );
}

/* Closes a file with the "file-number". */

#ifdef OLD_FASHIONED_C
TSCP  sc_fclose( file )
	TSCP file;
#else

TSCP  sc_fclose( TSCP file )
#endif
{
	fclose( (FILE*)TSCP_POINTER( file ) );
	return( FALSEVALUE );
}

/* Flushes any OS supplied buffers associated with the "file-number". */

#ifdef OLD_FASHIONED_C
TSCP  sc_fflush( file )
	TSCP file;
#else

TSCP  sc_fflush( TSCP file )
#endif
{
	fflush( (FILE*)TSCP_POINTER( file ) );
	return( FALSEVALUE );
}

/* Returns the next character from a file, the end-of-file object, or a string
   on an error.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_fgetc( file )
	TSCP file;
#else

TSCP  sc_fgetc( TSCP file )
#endif
{
	FILE*  stream;
	int  character;

	stream = (FILE*)TSCP_POINTER( file );
#ifdef MACSCI
	if  (stream == stdin)  {
	   if  (keys.processedcnt == 0)  {
	      sc_stoptimer( &sc_usertime );
	      while  (keys.processedcnt == 0)  sc_timesliced();
	      sc_stoptimer( &sc_idletime );
	   }
	   keys.processedcnt--;
	   character = keys.buffer[ keys.keyoutx ];
	   INCKEYX( keys.keyoutx, 1 );
	   if  (character == CONTROL_D)
	      return( EOFOBJECT );
	   else
	      return( C_CHAR( character ) );
	}
#endif
	character = getc( stream );
	if  (character == EOF)   {
	   if  (feof( stream ))  {
	      clearerr( stream );
	      return( EOFOBJECT );
	   }
	   else  
	      return( CSTRING_TSCP( strerror( ferror( stream ) ) ) );
	}
	return( C_CHAR( character ) );
}

/* Places the next character into a file.  Returns #F on success, or an error
   string on failure.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_fputc( character, file )
	TSCP character; TSCP file;
#else

TSCP  sc_fputc( TSCP character, TSCP file )
#endif
{
	FILE*  stream;
	int  error;

	stream = (FILE*)TSCP_POINTER( file );
	error = fputc( CHAR_C( character ), stream );
	if  (error == EOF)   {
	      return( CSTRING_TSCP( strerror( ferror( stream ) ) ) );
	}
	return( FALSEVALUE );
}

/* Returns the operating system's file number for a stream. */

#ifdef OLD_FASHIONED_C
TSCP  sc_fileno( file )
	TSCP file;
#else

TSCP  sc_fileno( TSCP file )
#endif
{
	return( C_FIXED( fileno( (FILE*)TSCP_POINTER( file ) ) ) );
}

/* Returns a bit mask indicating which files have input available.  If this
   function is not available, or a signal occurs, a 0 is returned.  System
   specific I/O errors are handled here.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_inputready( mask )
	TSCP mask;
#else

TSCP  sc_inputready( TSCP mask )
#endif
{
#ifdef MAC
	return( S2CUINT_TSCP( 0  ) );
#else
#ifdef WIN16
	return( S2CUINT_TSCP( 0  ) );
#else
	S2CUINT  filemask;
	fd_set  readfds;
	int  i = 0,
	     ioerror;

	FD_ZERO( &readfds );
	filemask = TSCP_S2CUINT( mask );
	while  (filemask != 0)  {
	   if  (filemask & 1)  {
	      FD_SET( i, &readfds );
	   }
	   i = i+1;
	   filemask = filemask>>1;
	}
	ioerror = select( i, &readfds, NULL, NULL, NULL );
	if  (ioerror == -1)  {
	   if  (errno == EINTR)  return( C_FIXED( 0 ) );
	   sc_error( "INPUTREADY", "select error: ~s",
	             LIST1( CSTRING_TSCP( strerror( errno ) ) ) );
	}
	filemask = 0;
	while (--i >= 0)  {
	   if  (FD_ISSET( i, &readfds ))  {
	      filemask = filemask | 1<<i;
	   }
	}
	return( S2CUINT_TSCP( filemask ) );
#endif
#endif
}
	

/* Boolean reporting whether a character is available for reading. */

#ifdef OLD_FASHIONED_C
TSCP  sc_charready( file )
	TSCP file;
#else

TSCP  sc_charready( TSCP file )
#endif
{
#ifdef MAC
	FILE*  stream;
	
	stream = (FILE*)TSCP_POINTER( file );
#ifdef MACSCI
	if  (stream == stdin)  {
	   if  (keys.processedcnt)
	      return( TRUEVALUE );
	   else
	      return( FALSEVALUE );
	}
#endif
	if  (isatty( fileno( stream ) )  &&  (stream)->cnt)
	   return( TRUEVALUE );
	else
	   return( FALSEVALUE );
#else
#ifdef WIN16
	return( TRUEVALUE );
#else
	FILE*  stream;
	fd_set  readfds;
	int  nfound;
	struct timeval  timeout;

	stream = (FILE*)TSCP_POINTER( file );
#ifdef LINUX
	if  (((stream)->_IO_read_end) <= ((stream)->_IO_read_ptr) )  {
#elif defined(FREEBSD)
 	if  (((stream)->_r) <= 0)  {
#else

	if  (((stream)->_cnt) <= 0)  {
#endif
	   FD_ZERO( &readfds );
	   FD_SET( fileno( stream ), &readfds );
	   timeout.tv_sec = 0;
	   timeout.tv_usec = 0;
	   nfound = select( fileno( stream )+1, &readfds, 0, 0, &timeout );
	   if  (nfound == 0)  return( FALSEVALUE );
	}
	return( TRUEVALUE );
#endif
#endif
}

/* Remove a file.  Return #F on success, the operating system dependent error
   on an error.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_removefile( filename )
	TSCP filename;
#else

TSCP  sc_removefile( TSCP filename )
#endif
{
	if  (remove( (char*)&STRING_CHAR( filename, 0 ) ) == 0)
	   return( FALSEVALUE );
	else
	   return( CSTRING_TSCP( strerror( errno ) ) );
}

/* Rename a file.  Return #F on success, or an error message on failure. */

#ifdef OLD_FASHIONED_C
extern TSCP  sc_rename( old, new )
	TSCP old; TSCP new;
#else

extern TSCP  sc_rename( TSCP old, TSCP new )
#endif
{
	char  buffer[100];

	if  (rename( (char*)&STRING_CHAR( old, 0 ),
		     (char*)&STRING_CHAR( new, 0 ) ) == 0)
	   return( FALSEVALUE );	
	else
	   return( CSTRING_TSCP( strerror( errno ) ) );
}

/* Number to string conversion is done in a system dependent way by the
   following routine.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_formatnumber( number, type, length )
	TSCP number; TSCP type; TSCP length;
#else

TSCP  sc_formatnumber( TSCP number, TSCP type, TSCP length )
#endif
{
	char  buffer[100],
	      format[10];

	switch  FIXED_C( type )  {

	   case 0:	/* [-]dddddddd		*/
	      sprintf( buffer, "%.0lf", TSCP_DOUBLE( number ) );
	      break;

	   case 1:	/* [-]dddddddd.dddd	*/
	      sprintf( format, "%%.%lilf", (long)TSCP_S2CINT( length ) );
	      sprintf( buffer, format, TSCP_DOUBLE( number ) );
	      break;

	   case 2:	/* [-]d.ddde+dd		*/
	      sprintf( format, "%%.%lile", (long)TSCP_S2CINT( length )-1 );
	      sprintf( buffer, format, TSCP_DOUBLE( number ) );
	      break;

	   case 3:
#if defined(MAC) || defined(LINUX) || defined(FREEBSD)
	      sprintf( format, "%%.%lilg", (long)TSCP_S2CINT( length ) );
	      sprintf( buffer, format, TSCP_DOUBLE( number ) );
#else
#ifdef WIN16
	      _gcvt( TSCP_DOUBLE( number ), (int)TSCP_S2CINT( length ),
		     buffer );
#else
	      gcvt( TSCP_DOUBLE( number ), TSCP_S2CINT( length ), buffer );
#endif
#endif
	      break;
	}
	return( CSTRING_TSCP( buffer ) );
}

/* String to number conversion is done is a system dependent way by the
   following routine.  It returns either the number or #f indicating an
   error.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_readnumber( string, type )
	TSCP string; TSCP type;
#else

TSCP  sc_readnumber( TSCP string, TSCP type )
#endif
{
	char  *nptr, *eptr;
	double  value;

	switch  FIXED_C( type )  {

	   case 0:	/* Read a floating point number */
	      nptr = (char*)&STRING_CHAR( string, 0 );
	      value = strtod( nptr, &eptr );
	      if  (nptr == eptr  ||  *eptr != 0)
	         return( FALSEVALUE );
	      else
		 return( FLTV_FLT( value ) );
	      break;
	}
	return( FALSEVALUE );
}

/* Look up the value of an environment variable. */

#ifdef OLD_FASHIONED_C
char*  sc_getenv( name )
	char* name;
#else

char*  sc_getenv( char* name )
#endif
{
	return( getenv( name ) );
}

/* Fatal error exit */

void  sc_abort()
{
	abort();
}

/* Normal exit */

#ifdef OLD_FASHIONED_C
void  sc_osexit( code )
	TSCP  code;
#else

void  sc_osexit( TSCP  code )
#endif
{
#ifndef WIN16
	exit( FIXED_C( code ) );
#endif
}

/* Return the time used by Scheme->C (in seconds).  This is either the cpu
   time used by the process (when available), or a time based on the wall
   time.
*/

#ifdef MAC
static  clock_t  clockbase;
#endif
#ifdef WIN16
static  clock_t  clockbase;
#endif

double  sc_cputime()
{
#ifdef MAC
	return( ((double)(clock()-clockbase))/CLOCKS_PER_SEC );
#else
#ifdef WIN16
	return( 0.0 );
	/*return( ((double)(clock()-clockbase))/CLOCKS_PER_SEC );*/
#else
#ifdef HAVE_RUSAGE
	struct rusage  ru;

	getrusage( RUSAGE_SELF, &ru );
        return( ru.ru_utime.tv_sec+(ru.ru_utime.tv_usec/1000000.0)+
                ru.ru_stime.tv_sec+(ru.ru_stime.tv_usec/1000000.0) );
#else
#ifdef HAVE_TIMES
	struct tms buffer;

	(void) times (&buffer);
	return ((buffer.tms_utime) / CLK_TCK);
#endif
#endif
#endif
#endif
}

/* Log a string in a system dependent manner. */

#ifdef OLD_FASHIONED_C
void  sc_log_string( s )
	char *s;
#else

void  sc_log_string( char *s )
#endif
{
	fprintf( stderr, "%s", s );
}

/* Log a decimal integer in a system dependent manner. */

#ifdef OLD_FASHIONED_C
void  sc_log_dec( d )
	S2CINT d;
#else

void  sc_log_dec( S2CINT d )
#endif
{
	char  buffer[30];

	sprintf( buffer, "%ld", (long)d );
	sc_log_string( buffer );
}

/* Log a hex integer in a system dependent manner. */

#ifdef OLD_FASHIONED_C
void  sc_log_hex( d )
	S2CUINT d;
#else

void  sc_log_hex( S2CUINT d )
#endif
{
	char  buffer[30];

	sprintf( buffer, "%lx", (long unsigned)d );
	sc_log_string( buffer );
}

/* Last ditch error logger.  This is used when a error occurs while trying to
   build the error message.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_error_2ddisplay( item )
	TSCP item;
#else

TSCP  sc_error_2ddisplay( TSCP item )
#endif
{
	char  s[2];

	switch TSCPTAG( item )  {
	   case FIXNUMTAG:
	      sc_log_dec( FIXED_C( item ) );
	      break;
	   case EXTENDEDTAG:
	      switch  (TSCP_EXTENDEDTAG( item ))  {
	         case SYMBOLTAG:
		    sc_log_string( (char*)&STRING_CHAR( SYMBOL_NAME( item ),
						        0 ) );
		    break;
		 case STRINGTAG:
		    sc_log_string( (char*)&STRING_CHAR( item, 0 ) );
		    break;
		 default:
		    sc_log_hex( (S2CUINT)item );
		    break;
	      }
	      break;
	   case IMMEDIATETAG:
	      if  (TSCPIMMEDIATETAG( item ) == CHARACTERTAG)  {
		 s[ 0 ] = CHAR_C( item );
		 s[ 1 ] = 0;
		 sc_log_string( s );
	      }
	      else  sc_log_hex( (S2CUINT)item );
	      break;
	   case PAIRTAG:
	      sc_log_hex( (S2CUINT)item );
	      break;
	}
	return( FALSEVALUE );
}

/* Memory allocation */

#ifdef WIN16
/* Segment translation. */

static int  next_segment = 0;	/* Next linear segment number to use */

unsigned char  *sc_s2cseg;	/* WIN16 segment # -> linear segment #,
				   0 in unused entries */

S2CUINT  *sc_win16seg;		/* linear segment # -> WIN16 segment #,
				   segment # is properly positioned */

/* Microsoft Windows  segment information.  The maximum segment size allocated
   is 64KB.  Each allocated segment gets an entry in segments.
*/

#define HANDLES 260		/* 255 * 64KB = 16 MB-64KB + side tables */

static  struct  {
	HGLOBAL  handle;	/* Handle returned by WIN16 */
	VOIDP  address;		/* Locked down address */
        }
	segments[ HANDLES ];

/* Save a handle, address and segment size in the table. */

static void  save_handle_address( HGLOBAL handle, VOIDP address )
{
	S2CINT  i;

	for  (i = 0; i < HANDLES; i++)  {
	   if  (segments[ i ].handle == NULL)  {
	      segments[ i ].handle = handle;
	      segments[ i ].address = address;
	      return;
	   }
	}
	sc_log_string( "Handle table overflowed!\n" );
	sc_abort();
}

/* Convert an address to a handle and delete the entry from the table. */

static HGLOBAL address_to_handle( VOIDP address )
{
	S2CINT  i;
	HGLOBAL  handle;

	for  (i = 0; i < HANDLES; i++)  {
	   if  (segments[ i ].address == address)  {
	      handle = segments[ i ].handle;
	      segments[ i ].handle = NULL;
	      segments[ i ].address = NULL;
	      return( handle );
	   }
	}
	sc_log_string( "Handle not found in table: " );
	sc_log_hex( (S2CINT)address );
	sc_log_string( "\n" );
	sc_abort();
}
#endif

/* added by Qobi F2Nov2001 */
int linux_mmap_hack = (0==1);
int linux_getenv_hack = (0==1);

/* (define-external (enable-linux-mmap-hack!) sc) */
#ifdef OLD_FASHIONED_C
TSCP  sc__2dhack_21_6518f460()
#else
TSCP  sc__2dhack_21_6518f460( void )
#endif
{
      linux_mmap_hack = (0==0);
      return( FALSEVALUE );
}

/* The following procedure is called to allocate memory for the Scheme->C
   heap.  Memory requests are filled by allocating one or more 64KB blocks
   of memory until the request is satisfied.  When quit is true, the program
   will fail when space cannot be allcoated.  On return from this procedure,
   the structure sc_heapblocks contains information about the blocks of memory
   allocated. 
*/

struct HEAPBLOCKS  sc_heapblocks;

#define SIXTY4KB  0x10000L

#ifdef OLD_FASHIONED_C
void  sc_getheap( bytes, quit )
	S2CINT bytes; S2CINT quit;
#else

void  sc_getheap( S2CINT bytes, S2CINT quit )
#endif
{
#ifdef WIN16  
	char huge *memp, huge *p;
	HGLOBAL  handle;
	S2CINT	i, bytesleft;

	if  (next_segment == 0)  {
	   /* Initialize segment translation tables */
	   sc_s2cseg = (unsigned char*)sc_gettable( SIXTY4KB, 1 );
	   for  (i = 0; i < SIXTY4KB; i++)  {
	      sc_s2cseg[ i ] = 0;
	   }
	   sc_win16seg = (S2CUINT*)sc_gettable( 256*sizeof(S2CUINT), 1 );
	   sc_win16seg[ 0 ] = 0;
	   next_segment = 1;
	}
	sc_heapblocks.count = 0;
	handle = GlobalAlloc( GPTR, bytes );
	if  (handle != NULL)  {
	   memp = GlobalLock( handle );
	   save_handle_address( handle, memp );
	}
	else  {
	   if  (quit)  {
	      sc_log_string( "***** Memory allocation failed: " );
	      sc_log_dec( bytes );
	      sc_log_string( "\n" );
	      sc_abort();
	   }
	   return;
	}
	if  (sc_gcinfo > 1)  {
	   sc_log_string( "***** Memory  " );
	   sc_log_hex( (S2CINT)memp );
	   sc_log_string( " " );
	   sc_log_hex(  (S2CINT)memp+bytes-1 );
	   sc_log_string( "\n" );
	}
	p = memp;
	bytesleft = bytes;
	while  (bytesleft > 0)	{
	   sc_heapblocks.block[ sc_heapblocks.count ].address = p;
	   sc_heapblocks.block[ sc_heapblocks.count++ ].size = SIXTY4KB;
	   sc_s2cseg[ ((S2CUINT)p)>>16 ] = next_segment;
	   sc_win16seg[ next_segment ] = ((S2CUINT)p) & 0xffff0000L;
	   next_segment = next_segment+1;
	   p = p+SIXTY4KB;
	   bytesleft = bytesleft-SIXTY4KB;
	}
	sc_heapblocks.minphypage = ADDRESS_PHYPAGE( memp );
	sc_heapblocks.maxphypage = ADDRESS_PHYPAGE( memp+(bytes-1) );
#else
	VOIDP  memp;

#ifdef MAC
	memp = malloc( (size_t)(bytes+PAGEBYTES-1) );
	if  ((S2CINT)memp & (PAGEBYTES-1))
	   memp = (VOIDP)((char*)memp+(PAGEBYTES-((S2CINT)memp &
						  (PAGEBYTES-1))));
#else
      /* changed by Qobi S10Jan99 and again R18Feb99 and again F19Feb99
          and again R1Jun2000 and again F2Nov2001 */
       if (!linux_getenv_hack)
      { linux_getenv_hack = (0==0);
         if (getenv("SCMMAP")!=NULL) linux_mmap_hack = (0==0);}
       if (linux_mmap_hack)
       { for (; bytes>0; bytes -= PAGEBYTES)
        /* This used to be 0x00000001. With that, under RH7.2 the maximum
            amount that can be allocated is about 2G. Because allocation
            starts around 0x40000000 and goes up to about 0xc0000000. If you
            set this to 0x00001000 then allocation starts at 0x00001000 and
            goes up to about 0xc0000000 giving about 3G maximum allocation.
            I have not been able to get any pages allocated above 0xc0000000
            and thus have not been able to get more than 3G. For some reason,
            when this is 0x00001000 allocation starts below 0x40000000. But
            when it is 0x00000000, 0x00000001, or above 0x40000000,
            allocation starts at 0x40000000 and pages below that never get
            allocated. */
        { memp = mmap((void *)0x00001000, (size_t)(bytes+PAGEBYTES-1),
                      PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, 0, 0);
          if ((S2CINT)memp!=-1)
          { if ((S2CINT)memp&(PAGEBYTES-1))
            { memp =
              (VOIDP)((char*)memp+(PAGEBYTES-((S2CINT)memp&(PAGEBYTES-1))));}
            goto l;}}
        memp = NULL;
        l:;}
       else
       { memp = sbrk( 0 );
        if  ((S2CINT)memp & (PAGEBYTES-1))
           sbrk( PAGEBYTES-(S2CINT)memp & (PAGEBYTES-1) );
        memp = sbrk( bytes );
	if  ((S2CINT)memp == -1)  memp = NULL; }
#endif
	if  (memp == NULL)  {
	   sc_heapblocks.count = 0;
	   if  (quit)  {
	      sc_log_string( "***** Memory allocation failed: " );
	      sc_log_dec( bytes );
	      sc_log_string( "\n" );
	      sc_abort();
	   }
	}
	else  {
	   if  (sc_gcinfo > 1)  {
	      sc_log_string( "***** Memory  " );
	      sc_log_hex( (S2CINT)memp );
	      sc_log_string( " " );
	      sc_log_hex( (S2CINT)memp+bytes-1 );
	      sc_log_string( "\n" );
	   }
	   sc_heapblocks.count = 1;
	   sc_heapblocks.block[ 0 ].address = memp;
	   sc_heapblocks.block[ 0 ].size = bytes;
	   sc_heapblocks.minphypage = ADDRESS_PHYPAGE( memp );
	   sc_heapblocks.maxphypage = ADDRESS_PHYPAGE( ((char*)memp)+bytes-1 );
	}
#endif
}

/* Memory allocated for the heap can be freed by the calling the following
   procedure.
*/

#ifdef OLD_FASHIONED_C
void  sc_freeheap( addr )
	VOIDP addr;
#else

void  sc_freeheap( VOIDP addr )
#endif
{
#ifdef WIN16
	HGLOBAL  handle;

	if  (addr != NULL)  {
	   handle = address_to_handle( addr );
	   GlobalUnlock( handle );
	   GlobalFree( handle );
	}
#endif
}

/* Memory is allocated for the side tables by calling the following procedure
   with the number of bytes needed.  A pointer to the space is returned.
   Errors occurring during initialization will cause the program to abort.
   Later errors will return NULL as the procedure's value. 
*/

#ifdef OLD_FASHIONED_C
VOIDP  sc_gettable( bytes, quit )
	S2CINT bytes; S2CINT quit;
#else

VOIDP  sc_gettable( S2CINT bytes, S2CINT quit )
#endif
{
	VOIDP  memp;
#ifdef WIN16
	HGLOBAL  handle;
#endif

#ifdef WIN16
	handle = GlobalAlloc( GPTR, bytes );
	if  (handle != NULL)  {
	   memp = GlobalLock( handle );
	   save_handle_address( handle, memp );
	}
	else
	   memp = NULL;
#else
	memp = malloc( bytes );
#endif
	if  (memp == NULL)  {
	   if  (quit)  {
	      sc_log_string( "***** Table allocation failed: malloc( " );
	      sc_log_dec( bytes );
	      sc_log_string( " )\n" );
	      sc_abort();
	   }
	}
	if  (sc_gcinfo > 1)  {
	   sc_log_string( "***** Tables  " );
	   sc_log_hex( (S2CINT)memp );
	   sc_log_string( " " );
	   sc_log_hex( (S2CINT)memp+bytes-1 );
	   sc_log_string( "\n" );
	}
	return( memp );
}

/* Memory in the side tables is returned by calling the following procedure.
   Note that one may attempt to free NULL.
*/

#ifdef OLD_FASHIONED_C
void  sc_freetable( any )
	VOIDP any;
#else

void  sc_freetable( VOIDP any )
#endif
{
#ifdef WIN16
	sc_freeheap( any );
#else
	if  (any != NULL)  free( any );
#endif
}

/* Execute the operating system dependent system command and return the
   result.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_ossystem( command )
	TSCP command;
#else

TSCP  sc_ossystem( TSCP command )
#endif
{
#ifdef MAC
	return( FALSEVALUE );
#else
#ifdef WIN16
	return( FALSEVALUE );
#else
	return( S2CINT_TSCP( system( (char*)&STRING_CHAR( command, 0 ) ) ) );
#endif
#endif
}

/* Unix-like signal handling is done here. */

#if S2CSIGNALS
#ifdef POSIX

/* For POSIX.1 systems, use `sigaction' instead of `signal', because
   `signal' has losing SYSV semantics with unavoidable interrupt
   window.
*/

typedef sigset_t SIGSET_T;

#ifdef OLD_FASHIONED_C
static VOIDP  ossignal( sig, handler )
	int  sig;
	VOIDP  handler;
#else

static VOIDP  ossignal( int sig, VOIDP handler )
#endif
{
	struct sigaction  new_action, old_action;

	(new_action.sa_handler) = handler;
	sigemptyset (& (new_action.sa_mask));
	(new_action.sa_flags) = 0;
	sigaction (sig, (&new_action), (&old_action));
	return (old_action.sa_handler);
}

#ifdef OLD_FASHIONED_C
static void  block_all_signals( old_mask )
	SIGSET_T *  old_mask;
#else

static void  block_all_signals( SIGSET_T * old_mask )
#endif
{
	SIGSET_T  new_mask;

	sigfillset( &new_mask );
	sigprocmask( SIG_BLOCK, (&new_mask), old_mask );
}

#ifdef OLD_FASHIONED_C
static void  restore_signal_mask( old_mask )
	SIGSET_T *  old_mask;
#else

static void  restore_signal_mask( SIGSET_T * old_mask )
#endif
{
	sigprocmask( SIG_SETMASK, old_mask, ((SIGSET_T *) 0) );
}

#else

/* Not a POSIX system so fake it. */

typedef S2CINT SIGSET_T;

#define ossignal signal

#ifdef OLD_FASHIONED_C
static void  block_all_signals( old_mask )
	SIGSET_T * old_mask;
#else

static void  block_all_signals( SIGSET_T * old_mask )
#endif
{
#ifndef MAC
	(*old_mask) = (sigsetmask( 0xffffffff ));
#endif
}

#ifdef OLD_FASHIONED_C
static void  restore_signal_mask( old_mask )
	SIGSET_T *  old_mask;
#else

static void  restore_signal_mask( SIGSET_T * old_mask )
#endif
{
#ifndef MAC
	sigsetmask( *old_mask );
#endif
}

#endif
#endif

S2CINT  sc_mutex = 0;			/* Mutual exclusion flag */

S2CINT  sc_pendingsignals = 0;		/* pending signal mask */

#define SIGAFTERGC 31			/* Used by Scheme->C */

#if S2CSIGNALS
#ifdef OLD_FASHIONED_C
static  void  signal_handler( sig )
	int sig;
#else

static  void  signal_handler( int sig )
#endif
{
	SIGSET_T  oldmask;

	block_all_signals (&oldmask);
	sc_pendingsignals = sc_pendingsignals | 1<<sig;
#ifdef SYSV
#ifndef POSIX
	/* System V semantics resets the signal handler to SIG_DFL
	   when a signal is delivered; must set it back here.  */
	signal( sig, signal_handler );
#endif
#endif
	restore_signal_mask( &oldmask );
	if  (sc_mutex == 0  &&  sc_collecting == 0)
	   sc_dispatchpendingsignals();
}
#endif

void  sc_dispatchpendingsignals()
{
#if S2CSIGNALS
	S2CINT  i, mypendingsignals;
	SIGSET_T oldmask;

	sc_mutex = 0;
	while  (sc_pendingsignals  &&  sc_collecting == 0)  {
	   block_all_signals (&oldmask);
	   mypendingsignals = sc_pendingsignals;
	   sc_pendingsignals = 0;
	   restore_signal_mask (&oldmask);
	   if  (mypendingsignals & 1<<SIGAFTERGC)
	      sc_apply_when_unreferenced();
	   for  (i = 0; i < SIGAFTERGC; i++)  {
	      if  (mypendingsignals & 1<<i)  {
	         scrt4_callsignalhandler( C_FIXED( i ) );
	      }  
	   }
	}
#else
	sc_pendingsignals = 0;
	sc_apply_when_unreferenced();
#endif
}

/* Arm operating system dependent signal handlers. */

#ifdef OLD_FASHIONED_C
TSCP  sc_ossignal( sig, handler )
	TSCP sig; TSCP handler;
#else

TSCP  sc_ossignal( TSCP sig, TSCP handler )
#endif
{
#if  S2CSIGNALS
#ifdef MACSCI
	TSCP  prevhandler;
	
	prevhandler = SIGINT_handler;
	if  (handler == TRUEVALUE)  {
	   SIGINT_handler = POINTER_TSCP( (VOIDP)signal_handler );
	}  else  {
	   SIGINT_handler = handler;
	}
	return( prevhandler );
#endif
	
	if  (handler == TRUEVALUE)
#ifdef MAC
	   return( S2CINT_TSCP( signal( TSCP_S2CINT( sig ),
				        (__sig_func)signal_handler ) ) );
#else
	   return( S2CINT_TSCP( ossignal( TSCP_S2CINT( sig ),
				          signal_handler ) ) );
#endif
	else
	   return( S2CINT_TSCP( ossignal( TSCP_S2CINT( sig ),
	   				  (VOIDP)TSCP_S2CUINT( handler ) ) ) );
#else
	return( FALSEVALUE );
#endif
}

/* The following procedure is called on completion of garbage collection. 
   It coordinates the environment specific clean up of the now unreferenced
   items.
*/

static S2CINT  collectdonetimeslice;

void  sc_collect_done()
{
#if TIMESLICE
	sc_timeslice = sc_timeslice-10000;
	if  (sc_freed != EMPTYLIST)  {
	   collectdonetimeslice = sc_timeslice;
	   sc_timeslice = 0;
	}
#else
	if  (sc_freed != EMPTYLIST)  {
#ifdef S2CSIGNALS
	   signal_handler( SIGAFTERGC );
#else
	   sc_pendingsignals = 1;
#endif
	}
#endif
#ifdef MACSCI
	sc_timesliced();
#endif
}

/* The following procedure is called on a stack overflow. */

void  sc_stackoverflow()
{
	char *procname = "STACKOVERFLOW";

	if  (sc_stacktrace != NULL)  procname = sc_stacktrace->procname;
	sc_error( procname, "OVERFLOWED a ~s byte stack",
	          LIST1( C_FIXED( sc_stackbytes ) ) );
}

/* The following procedure is called on the expiration of the time slice. */

void  sc_timesliced()
{
#ifdef MACSCI
	int  c;
#endif
	if  (sc_freed != EMPTYLIST)  {
	   sc_timeslice = collectdonetimeslice;
	   sc_apply_when_unreferenced();
	}
#ifdef MACSCI
	sc_timeslice = sc_timesliceinit;
	c = getchar();
	if  (c != EOF)  {
	   if  (c == CONTROL_C  ||  c == APPLE_PERIOD)  {
	      /* Keyboard interrupt so flush input and trap */
	      keys.rawcnt = keys.processedcnt = keys.keyinx = keys.keyoutx = 0;
	      scrt4_callsignalhandler( C_FIXED( 2 ) );
	      return;
	   }  else  if  (c == BACKSPACE)  {
	      /* Backspace deletes the last character */
	      if  (keys.rawcnt)  {
	         keys.rawcnt--;
	         INCKEYX( keys.keyinx, -1 );
	         fputc( c, stdout );
	         ccleol( stdout );
	      }
	   }  else  if  (c == CONTROL_U)  {
	      /* Control-u deletes the line */
	      while  (keys.rawcnt)  {
	         keys.rawcnt--;
	         INCKEYX( keys.keyinx, -1 );
	         fputc( BACKSPACE, stdout );
	      }
	      ccleol( stdout );
	   } else  {
	      /* Otherwise add character to the buffer */
	      keys.rawcnt++;
	      keys.buffer[ keys.keyinx ] = c;
	      INCKEYX( keys.keyinx, 1 );
	      fputc( c, stdout );
	      if  (c == RETURN  ||  c == CONTROL_D) {
		 /* Make line available to Scheme */
	         if  (c == RETURN)  fputs( "\n", stdout );
	         if  (c == CONTROL_D)  fputs( "^D", stdout );
	         keys.processedcnt = keys.processedcnt+keys.rawcnt;
	         keys.rawcnt = 0;
	      }
	   }
	}
	return;
#endif
	sc_timeslice = MAXS2CINT;
	scdebug_timeout();
}

/* The following procedure is called on procedure entry to set the stack link,
   check the stack height, and check the time slice when COMPACTPUSHTRACE
   is 1.
*/

#ifdef OLD_FASHIONED_C
void  sc_pushstacktrace( st, procname )
	struct STACKTRACE *st; char *procname;
#else

void  sc_pushstacktrace( struct STACKTRACE *st, char *procname )
#endif
{
	st->prevstacktrace = sc_stacktrace;
	st->procname = procname;
	sc_stacktrace = st;
	CHECK_SP;
	CHECK_TS;
}

/* The following procedure is called on procedure exit to reset the stack
   link when COMPACTPOPTRACE is 1.
*/

#ifdef OLD_FASHIONED_C
TSCP  sc_popstacktrace( st, result )
	struct STACKTRACE *st; TSCP  result;
#else

TSCP  sc_popstacktrace( struct STACKTRACE *st, TSCP result )
#endif
{
	sc_stacktrace = st->prevstacktrace;
	return( result );
}


/* Operating system dependent time of day string. */

TSCP  sc_time_2dof_2dday_v;

TSCP  sc_time_2dof_2dday()
{
	time_t  timevalue;
	char  buffer[ 50 ], *bp = buffer, *cp;

	time( &timevalue );
	cp = ctime( &timevalue );
	while (*cp  &&  *cp != '\n')  *bp++ = *cp++;
	*bp = 0;
	return( sc_cstringtostring( buffer ) );
}

/* Operating system specific initializations are inserted here.  This is
   called from sc_newheap, after the heap has been created.
*/

void  sc_cioinit()
{
#ifdef MAC
	clockbase = clock();
#endif
#ifdef WIN16
	/*clockbase = clock();*/
#endif
}
