/* This file is the "main" program for an embedded SCHEME->C interpreter.
 *
 *           Copyright 1989-1993 Digital Equipment Corporation
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
 
#include "options.h"

#ifdef DYNAMIC
#include <windows.h>
#include <stdio.h>

main()
{
	char  line[ 200 ],
	      FAR *result,
	      FAR *error;
	int  status;
	HINSTANCE  s2clib;
	void (FAR *scheme2c)( char FAR *line, int FAR *status,
			      char FAR **result, char FAR **error );

	s2clib = LoadLibrary( "scheme2c.dll" );
	if  (s2clib <= 21)  {
	   printf( "LoadLibrary error = %d\n", s2clib );
	   exit( 1 );
	}
	(FARPROC)scheme2c = GetProcAddress( s2clib, "_scheme2c" );

	printf( "Embedded Scheme->C Test Bed\n0- " );
	(*scheme2c)( "(begin (set-stack-size! 50000) (set-time-slice! 100000))",
		     &status, &result, &error );
	if  (status != 0)  {
	   printf( "Initialization failed!\n" );
	   FreeLibrary( s2clib );
	   exit( 1 );
	}

	while  (gets( line ) != NULL  &&  line[0] != 0)  {
	   (*scheme2c)( &line[0], &status, &result, &error );
	   if  (*result != 0)  printf( "%s\n", result );
	   if  (*error != 0)	printf( "%s", error );
	   printf( "%d- ", status );
	}
	printf( "\n" );
	FreeLibrary( s2clib );
	exit( 0 );
}

#else

#include <stdio.h>
#if MAC
#include <console.h>
#endif

main()
{
	char  line[ 200 ],
	      *result,
	      *error;
	int  status;
	S2CINT  *sp;

#if MAC
	STACKPTR( sp );
	SetApplLimit( (char*)sp-57000 );
	console_options.nrows = 30;
	console_options.title = "\pScheme->C";
#endif
	printf( "Embedded Scheme->C Test Bed\n0- " );
	scheme2c( "(begin (set-stack-size! 57000) (set-time-slice! 100000))",
		  &status, &result, &error );
	if  (status != 0)  {
	   printf( "Initialization failed!\n" );
	   exit( 1 );
	}
	while  (gets( line ) != NULL)  {
	   scheme2c( line, &status, &result, &error );
	   if  (*result != 0)  printf( "%s\n", result );
	   if  (*error != 0)	printf( "%s", error );
	   printf( "%d- ", status );
	   fflush( stdout );
	}
	printf( "\n" );
	exit( 0 );
}

#endif
