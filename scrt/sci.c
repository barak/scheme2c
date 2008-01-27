
/* SCHEME->C */

#include <objects.h>


static void  init_constants()
{
}

DEFTSCP( scint_start_2drep_v );
DEFCSTRING( t2003, "SCINT_START-REP" );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( screp_read_2deval_2dprint, XAL1( TSCP ) );
EXTERNTSCP( screp_read_2deval_2dprint_v );

TSCP  scint_start_2drep( c2002 )
        TSCP  c2002;
{
        PUSHSTACKTRACE( t2003 );
        POPSTACKTRACE( sc_apply_2dtwo( screp_read_2deval_2dprint_v, 
                                       c2002 ) );
}

void  scint__init(){}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        screp__init();
        MAXDISPLAY( 0 );
}

main( argc, argv )
        int argc;  char *argv[];
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, argc, argv, scint_start_2drep );
        init_constants();
        init_modules( "(scint SCHEME->C COMPILER 15mar93jfb)" );
        INITIALIZEVAR( t2003, 
                       ADR( scint_start_2drep_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scint_start_2drep, EMPTYLIST ) );
        scint_start_2drep( CLARGUMENTS( argc, argv ) );
        SCHEMEEXIT();
}
