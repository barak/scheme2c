/* This file is the "main" program for an embedded SCHEME->C interpreter.
 */

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
