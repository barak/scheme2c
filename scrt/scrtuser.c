
/* SCHEME->C */

#include <objects.h>

void scrtuser__init();

static void  init_constants()
{
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        MAXDISPLAY( 0 );
}

void  scrtuser__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrtuser SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        return;
}
