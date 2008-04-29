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

#include <stdio.h>
#if MAC
#include <console.h>
#endif

char  line[ 200 ],
      *result,
      *error;
int  status, s;

void ev0()
{
	scheme2c( line, &status, &result, &error );
}

void ev1()
{
	int  buffer[ 500 ], i;
	for (i = 0; i < 500; i++)  buffer[ i ] = i;
	scheme2c( line, &status, &result, &error );
	for (i = 0; i < 500; i++)
	   if  (buffer[ i ] != i)  abort();
}

void ev2()
{
	int  buffer[ 1000 ], i;
	for (i = 0; i < 1000; i++)  buffer[ i ] = i;
	scheme2c( line, &status, &result, &error );
	for (i = 0; i < 1000; i++)
	   if  (buffer[ i ] != i)  abort();
}

void ev3()
{
	int  buffer[ 700 ], i;
	for (i = 0; i < 700; i++)  buffer[ i ] = i;
	scheme2c( line, &status, &result, &error );
	for (i = 0; i < 700; i++)
	   if  (buffer[ i ] != i)  abort();
}


main()
{
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
	   switch  (s)  {
	      case 0:
	         ev0();
		 break;
	      case 1:
		 ev1();
		 break;
	      case 2:
		 ev2();
		 break;
	      case 3:
		 ev3();
		 break;
	   }
	   s = (s + 1) & 3;
	   if  (*result != 0)  printf( "%s\n", result );
	   if  (*error != 0)	printf( "%s", error );
	   printf( "%d- ", status );
	   fflush( stdout );
	}
	printf( "\n" );
	exit( 0 );
}
