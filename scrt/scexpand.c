
/* SCHEME->C */

#include <objects.h>

void scexpand__init();
DEFSTATICTSCP( c2229 );
DEFCSTRING( t2300, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2214 );
DEFSTATICTSCP( c2213 );

static void  init_constants()
{
        c2229 = STRINGTOSYMBOL( CSTRING_TSCP( "*EXPANDER*" ) );
        CONSTANTEXP( ADR( c2229 ) );
        c2214 = CSTRING_TSCP( t2300 );
        CONSTANTEXP( ADR( c2214 ) );
        c2213 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2213 ) );
}

DEFTSCP( scexpand_expand_v );
DEFCSTRING( t2301, "EXPAND" );
EXTERNTSCPP( scexpand_initial_2dexpander, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_initial_2dexpander_v );

TSCP  scexpand_expand( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t2301 );
        POPSTACKTRACE( scexpand_initial_2dexpander( x2131, 
                                                    scexpand_initial_2dexpander_v ) );
}

DEFTSCP( scexpand_initial_2dexpander_v );
DEFCSTRING( t2303, "INITIAL-EXPANDER" );
EXTERNTSCPP( scexpand_xpander_2a_1344b3ce, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_xpander_2a_1344b3ce_v );
EXTERNTSCPP( scexpand_expander_3f, XAL1( TSCP ) );
EXTERNTSCP( scexpand_expander_3f_v );
EXTERNTSCPP( scexpand_expander, XAL1( TSCP ) );
EXTERNTSCP( scexpand_expander_v );
EXTERNTSCPP( scexpand_xpander_2a_c7c0f66b, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_xpander_2a_c7c0f66b_v );

TSCP  scexpand_l2155( x2156, e2157, c2313 )
        TSCP  x2156, e2157, c2313;
{
        PUSHSTACKTRACE( "scexpand_l2155 [inside INITIAL-EXPANDER]" );
        POPSTACKTRACE( x2156 );
}

TSCP  scexpand_initial_2dexpander( x2134, e2135 )
        TSCP  x2134, e2135;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t2303 );
        if  ( NOT( AND( EQ( TSCPTAG( x2134 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2134 ), SYMBOLTAG ) ) )
            )  goto L2305;
        X1 = scexpand_xpander_2a_1344b3ce_v;
        goto L2308;
L2305:
        if  ( NEQ( TSCPTAG( x2134 ), PAIRTAG ) )  goto L2307;
        X3 = PAIR_CAR( x2134 );
        X2 = scexpand_expander_3f( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L2309;
        X2 = PAIR_CAR( x2134 );
        X1 = scexpand_expander( X2 );
        goto L2308;
L2309:
        X1 = scexpand_xpander_2a_c7c0f66b_v;
        goto L2308;
L2307:
        X1 = MAKEPROCEDURE( 2, 0, scexpand_l2155, EMPTYLIST );
L2308:
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( x2134, 
                                                    e2135, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
}

DEFTSCP( scexpand_expand_2donce_v );
DEFCSTRING( t2316, "EXPAND-ONCE" );

TSCP  scexpand_l2162( x2163, e2164, c2318 )
        TSCP  x2163, e2164, c2318;
{
        PUSHSTACKTRACE( "scexpand_l2162 [inside EXPAND-ONCE]" );
        POPSTACKTRACE( x2163 );
}

TSCP  scexpand_expand_2donce( x2161 )
        TSCP  x2161;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2316 );
        X1 = MAKEPROCEDURE( 2, 0, scexpand_l2162, EMPTYLIST );
        POPSTACKTRACE( scexpand_initial_2dexpander( x2161, X1 ) );
}

DEFTSCP( scexpand_xpander_2a_1344b3ce_v );
DEFCSTRING( t2320, "*IDENTIFIER-EXPANDER*" );

TSCP  scexpand_xpander_2a_1344b3ce( x2166, e2167 )
        TSCP  x2166, e2167;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2320 );
        X1 = scexpand_expander( x2166 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2323;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L2323:
        POPSTACKTRACE( x2166 );
}

DEFTSCP( scexpand_xpander_2a_c7c0f66b_v );
DEFCSTRING( t2326, "*APPLICATION-EXPANDER*" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scexpand_xpander_2a_c7c0f66b( x2177, e2178 )
        TSCP  x2177, e2178;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2326 );
        X1 = x2177;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L2329:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L2330;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2333;
        scrt1__24__car_2derror( X1 );
L2333:
        X7 = PAIR_CAR( X1 );
        X6 = e2178;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          e2178, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L2336;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L2329 );
L2336:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2341;
        scdebug_error( c2213, 
                       c2214, CONS( X3, EMPTYLIST ) );
L2341:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L2329 );
L2330:
        POPSTACKTRACE( X2 );
}

DEFTSCP( scexpand_install_2dexpander_v );
DEFCSTRING( t2343, "INSTALL-EXPANDER" );
EXTERNTSCPP( scrt2_putprop, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt2_putprop_v );

TSCP  scexpand_install_2dexpander( k2227, f2228 )
        TSCP  k2227, f2228;
{
        PUSHSTACKTRACE( t2343 );
        scrt2_putprop( k2227, c2229, f2228 );
        POPSTACKTRACE( k2227 );
}

DEFTSCP( scexpand_expander_3f_v );
DEFCSTRING( t2345, "EXPANDER?" );
EXTERNTSCPP( scrt2_getprop, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_getprop_v );

TSCP  scexpand_expander_3f( x2231 )
        TSCP  x2231;
{
        PUSHSTACKTRACE( t2345 );
        if  ( NOT( AND( EQ( TSCPTAG( x2231 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2231 ), SYMBOLTAG ) ) )
            )  goto L2347;
        POPSTACKTRACE( scrt2_getprop( x2231, c2229 ) );
L2347:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scexpand_expander_v );
DEFCSTRING( t2349, "EXPANDER" );

TSCP  scexpand_expander( x2239 )
        TSCP  x2239;
{
        PUSHSTACKTRACE( t2349 );
        POPSTACKTRACE( scrt2_getprop( x2239, c2229 ) );
}

DEFTSCP( scexpand_islist_v );
DEFCSTRING( t2351, "ISLIST" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );

TSCP  scexpand_islist( l2241, m2242, m2243 )
        TSCP  l2241, m2242, m2243;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t2351 );
        X1 = _TSCP( 0 );
        X2 = l2241;
L2354:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2355;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2357;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L2358;
L2357:
        X3 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L2358:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L2354 );
L2355:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L2360;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( m2242 ) ), 
                      3 ) )  goto L2362;
        X3 = BOOLEAN( GTE( _S2CINT( X1 ), _S2CINT( m2242 ) ) );
        goto L2363;
L2362:
        X3 = scrt2__3e_3d_2dtwo( X1, m2242 );
L2363:
        if  ( FALSE( X3 ) )  goto L2365;
        if  ( EQ( _S2CUINT( m2243 ), _S2CUINT( EMPTYLIST ) ) )  goto L2367;
        if  ( EQ( TSCPTAG( m2243 ), PAIRTAG ) )  goto L2370;
        scrt1__24__car_2derror( m2243 );
L2370:
        X4 = PAIR_CAR( m2243 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L2373;
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( X1 ), 
                                     _S2CINT( X4 ) ) ) );
L2373:
        POPSTACKTRACE( scrt2__3c_3d_2dtwo( X1, X4 ) );
L2367:
        POPSTACKTRACE( TRUEVALUE );
L2365:
        POPSTACKTRACE( X3 );
L2360:
        POPSTACKTRACE( FALSEVALUE );
}

void scrt2__init();
void scdebug__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        scdebug__init();
        scrt1__init();
        MAXDISPLAY( 0 );
}

void  scexpand__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scexpand SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2301, 
                       ADR( scexpand_expand_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expand, EMPTYLIST ) );
        INITIALIZEVAR( t2303, 
                       ADR( scexpand_initial_2dexpander_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_initial_2dexpander, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2316, 
                       ADR( scexpand_expand_2donce_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expand_2donce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2320, 
                       ADR( scexpand_xpander_2a_1344b3ce_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_xpander_2a_1344b3ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2326, 
                       ADR( scexpand_xpander_2a_c7c0f66b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_xpander_2a_c7c0f66b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2343, 
                       ADR( scexpand_install_2dexpander_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_install_2dexpander, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2345, 
                       ADR( scexpand_expander_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expander_3f, EMPTYLIST ) );
        INITIALIZEVAR( t2349, 
                       ADR( scexpand_expander_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expander, EMPTYLIST ) );
        INITIALIZEVAR( t2351, 
                       ADR( scexpand_islist_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      scexpand_islist, EMPTYLIST ) );
        return;
}
