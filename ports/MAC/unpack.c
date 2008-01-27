/* Unpacks the file containing all MAC files. */

#include <stdio.h>
#ifndef mips
#include <console.h>
#endif

main()
{
	char  line[200], **ap;
	FILE  *out;

#ifndef mips
	ccommand( &ap );
#endif
	while (gets( line ) != NULL)  {
	   if  (strcmp( line, "####START" ) == 0)  {
	      out = fopen( gets( line ), "w" );
	      if  (out == NULL)  exit( 1 );
	      fputs( line, stdout );
	      while  (gets( line ) != NULL  &&  strcmp( line, "####END" ))  {
	         fputs( line,  out );
		 fputs( "\n", out ); 
	      }
	      fclose( out );
	      fputs( "\n", stdout );
	   }  else  {
	      fputs( "Junk on end-of-file, Quit!\n", stdout );
	      exit( 1 );
	   }
	}  
}
