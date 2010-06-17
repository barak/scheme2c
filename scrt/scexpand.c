
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( c2240 );
DEFCSTRING( t2310, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2226 );
DEFSTATICTSCP( c2225 );
DEFCSTRING( t2311, "gensym-~s" );
DEFSTATICTSCP( c2141 );

static void  init_constants()
{
        c2240 = STRINGTOSYMBOL( CSTRING_TSCP( "*EXPANDER*" ) );
        CONSTANTEXP( ADR( c2240 ) );
        c2226 = CSTRING_TSCP( t2310 );
        CONSTANTEXP( ADR( c2226 ) );
        c2225 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2225 ) );
        c2141 = CSTRING_TSCP( t2311 );
        CONSTANTEXP( ADR( c2141 ) );
}

DEFTSCP( scexpand_gensym_2ddata_v );
DEFCSTRING( t2312, "GENSYM-DATA" );
DEFTSCP( scexpand_gensym_v );
DEFCSTRING( t2313, "GENSYM" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( sc_string_2d_3esymbol, XAL1( TSCP ) );
EXTERNTSCP( sc_string_2d_3esymbol_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  scexpand_gensym(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2313 );
        X1 = scexpand_gensym_2ddata_v;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2316;
        X2 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L2317;
L2316:
        X2 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L2317:
        scexpand_gensym_2ddata_v = X2;
        X1 = scrt6_format( c2141, 
                           CONS( scexpand_gensym_2ddata_v, EMPTYLIST ) );
        POPSTACKTRACE( sc_string_2d_3esymbol( X1 ) );
}

DEFTSCP( scexpand_expand_v );
DEFCSTRING( t2318, "EXPAND" );
EXTERNTSCPP( scexpand_initial_2dexpander, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_initial_2dexpander_v );

TSCP  scexpand_expand( x2143 )
        TSCP  x2143;
{
        PUSHSTACKTRACE( t2318 );
        POPSTACKTRACE( scexpand_initial_2dexpander( x2143, 
                                                    scexpand_initial_2dexpander_v ) );
}

DEFTSCP( scexpand_initial_2dexpander_v );
DEFCSTRING( t2320, "INITIAL-EXPANDER" );
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

TSCP  scexpand_l2167( x2168, e2169, c2330 )
        TSCP  x2168, e2169, c2330;
{
        PUSHSTACKTRACE( "scexpand_l2167 [inside INITIAL-EXPANDER]" );
        POPSTACKTRACE( x2168 );
}

TSCP  scexpand_initial_2dexpander( x2146, e2147 )
        TSCP  x2146, e2147;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t2320 );
        if  ( NOT( AND( EQ( TSCPTAG( x2146 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2146 ), SYMBOLTAG ) ) )
            )  goto L2322;
        X1 = scexpand_xpander_2a_1344b3ce_v;
        goto L2325;
L2322:
        if  ( NEQ( TSCPTAG( x2146 ), PAIRTAG ) )  goto L2324;
        X3 = PAIR_CAR( x2146 );
        X2 = scexpand_expander_3f( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L2326;
        X2 = PAIR_CAR( x2146 );
        X1 = scexpand_expander( X2 );
        goto L2325;
L2326:
        X1 = scexpand_xpander_2a_c7c0f66b_v;
        goto L2325;
L2324:
        X1 = MAKEPROCEDURE( 2, 0, scexpand_l2167, EMPTYLIST );
L2325:
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( x2146, 
                                                    e2147, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
}

DEFTSCP( scexpand_expand_2donce_v );
DEFCSTRING( t2333, "EXPAND-ONCE" );

TSCP  scexpand_l2174( x2175, e2176, c2335 )
        TSCP  x2175, e2176, c2335;
{
        PUSHSTACKTRACE( "scexpand_l2174 [inside EXPAND-ONCE]" );
        POPSTACKTRACE( x2175 );
}

TSCP  scexpand_expand_2donce( x2173 )
        TSCP  x2173;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2333 );
        X1 = MAKEPROCEDURE( 2, 0, scexpand_l2174, EMPTYLIST );
        POPSTACKTRACE( scexpand_initial_2dexpander( x2173, X1 ) );
}

DEFTSCP( scexpand_xpander_2a_1344b3ce_v );
DEFCSTRING( t2337, "*IDENTIFIER-EXPANDER*" );

TSCP  scexpand_xpander_2a_1344b3ce( x2178, e2179 )
        TSCP  x2178, e2179;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2337 );
        X1 = scexpand_expander( x2178 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2340;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L2340:
        POPSTACKTRACE( x2178 );
}

DEFTSCP( scexpand_xpander_2a_c7c0f66b_v );
DEFCSTRING( t2343, "*APPLICATION-EXPANDER*" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scexpand_xpander_2a_c7c0f66b( x2189, e2190 )
        TSCP  x2189, e2190;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2343 );
        X1 = x2189;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L2346:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L2347;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2350;
        scrt1__24__car_2derror( X1 );
L2350:
        X7 = PAIR_CAR( X1 );
        X6 = e2190;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          e2190, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L2353;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L2346 );
L2353:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2358;
        scdebug_error( c2225, 
                       c2226, CONS( X3, EMPTYLIST ) );
L2358:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L2346 );
L2347:
        POPSTACKTRACE( X2 );
}

DEFTSCP( scexpand_install_2dexpander_v );
DEFCSTRING( t2360, "INSTALL-EXPANDER" );
EXTERNTSCPP( scrt2_putprop, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt2_putprop_v );

TSCP  scexpand_install_2dexpander( k2238, f2239 )
        TSCP  k2238, f2239;
{
        PUSHSTACKTRACE( t2360 );
        scrt2_putprop( k2238, c2240, f2239 );
        POPSTACKTRACE( k2238 );
}

DEFTSCP( scexpand_expander_3f_v );
DEFCSTRING( t2362, "EXPANDER?" );
EXTERNTSCPP( scrt2_getprop, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_getprop_v );

TSCP  scexpand_expander_3f( x2242 )
        TSCP  x2242;
{
        PUSHSTACKTRACE( t2362 );
        if  ( NOT( AND( EQ( TSCPTAG( x2242 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2242 ), SYMBOLTAG ) ) )
            )  goto L2364;
        POPSTACKTRACE( scrt2_getprop( x2242, c2240 ) );
L2364:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scexpand_expander_v );
DEFCSTRING( t2366, "EXPANDER" );

TSCP  scexpand_expander( x2250 )
        TSCP  x2250;
{
        PUSHSTACKTRACE( t2366 );
        POPSTACKTRACE( scrt2_getprop( x2250, c2240 ) );
}

DEFTSCP( scexpand_islist_v );
DEFCSTRING( t2368, "ISLIST" );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );

TSCP  scexpand_islist( l2252, m2253, m2254 )
        TSCP  l2252, m2253, m2254;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t2368 );
        X1 = _TSCP( 0 );
        X2 = l2252;
L2371:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2372;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2374;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L2375;
L2374:
        X3 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L2375:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L2371 );
L2372:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L2377;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( m2253 ) ), 
                      3 ) )  goto L2379;
        X3 = BOOLEAN( GTE( _S2CINT( X1 ), _S2CINT( m2253 ) ) );
        goto L2380;
L2379:
        X3 = scrt2__3e_3d_2dtwo( X1, m2253 );
L2380:
        if  ( FALSE( X3 ) )  goto L2382;
        if  ( EQ( _S2CUINT( m2254 ), _S2CUINT( EMPTYLIST ) ) )  goto L2384;
        if  ( EQ( TSCPTAG( m2254 ), PAIRTAG ) )  goto L2387;
        scrt1__24__car_2derror( m2254 );
L2387:
        X4 = PAIR_CAR( m2254 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L2390;
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( X1 ), 
                                     _S2CINT( X4 ) ) ) );
L2390:
        POPSTACKTRACE( scrt2__3c_3d_2dtwo( X1, X4 ) );
L2384:
        POPSTACKTRACE( TRUEVALUE );
L2382:
        POPSTACKTRACE( X3 );
L2377:
        POPSTACKTRACE( FALSEVALUE );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt1__init();
        scrt6__init();
        scrt2__init();
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
        INITIALIZEVAR( t2312, 
                       ADR( scexpand_gensym_2ddata_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t2313, 
                       ADR( scexpand_gensym_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scexpand_gensym, EMPTYLIST ) );
        INITIALIZEVAR( t2318, 
                       ADR( scexpand_expand_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expand, EMPTYLIST ) );
        INITIALIZEVAR( t2320, 
                       ADR( scexpand_initial_2dexpander_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_initial_2dexpander, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2333, 
                       ADR( scexpand_expand_2donce_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expand_2donce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2337, 
                       ADR( scexpand_xpander_2a_1344b3ce_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_xpander_2a_1344b3ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2343, 
                       ADR( scexpand_xpander_2a_c7c0f66b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_xpander_2a_c7c0f66b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2360, 
                       ADR( scexpand_install_2dexpander_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpand_install_2dexpander, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2362, 
                       ADR( scexpand_expander_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expander_3f, EMPTYLIST ) );
        INITIALIZEVAR( t2366, 
                       ADR( scexpand_expander_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpand_expander, EMPTYLIST ) );
        INITIALIZEVAR( t2368, 
                       ADR( scexpand_islist_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      scexpand_islist, EMPTYLIST ) );
        return;
}
