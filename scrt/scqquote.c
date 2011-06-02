
/* SCHEME->C */

#include <objects.h>

void scqquote__init();
DEFSTATICTSCP( c2426 );
DEFSTATICTSCP( t2512 );
DEFSTATICTSCP( t2513 );
DEFSTATICTSCP( c2402 );
DEFSTATICTSCP( c2391 );
DEFSTATICTSCP( c2378 );
DEFSTATICTSCP( c2334 );
DEFSTATICTSCP( c2306 );
DEFSTATICTSCP( t2514 );
DEFSTATICTSCP( c2299 );
DEFSTATICTSCP( c2222 );
DEFSTATICTSCP( t2515 );
DEFSTATICTSCP( c2221 );
DEFSTATICTSCP( c2202 );
DEFSTATICTSCP( c2173 );
DEFCSTRING( t2516, "Illegal form: ~s" );
DEFSTATICTSCP( c2135 );
DEFSTATICTSCP( c2134 );

static void  init_constants()
{
        TSCP  X1;

        c2426 = EMPTYLIST;
        t2512 = STRINGTOSYMBOL( CSTRING_TSCP( "UNQUOTE-SPLICING" ) );
        c2426 = CONS( t2512, c2426 );
        t2513 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        c2426 = CONS( t2513, c2426 );
        CONSTANTEXP( ADR( c2426 ) );
        c2402 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( EMPTYLIST, X1 );
        X1 = CONS( t2513, X1 );
        c2402 = CONS( X1, c2402 );
        CONSTANTEXP( ADR( c2402 ) );
        c2391 = STRINGTOSYMBOL( CSTRING_TSCP( "APPEND" ) );
        CONSTANTEXP( ADR( c2391 ) );
        c2378 = STRINGTOSYMBOL( CSTRING_TSCP( "UNQUOTE-SPLICING" ) );
        CONSTANTEXP( ADR( c2378 ) );
        c2334 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST->VECTOR" ) );
        CONSTANTEXP( ADR( c2334 ) );
        c2306 = EMPTYLIST;
        t2514 = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTE" ) );
        c2306 = CONS( t2514, c2306 );
        c2306 = CONS( t2513, c2306 );
        CONSTANTEXP( ADR( c2306 ) );
        c2299 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS*" ) );
        CONSTANTEXP( ADR( c2299 ) );
        c2222 = EMPTYLIST;
        t2515 = STRINGTOSYMBOL( CSTRING_TSCP( "UNQUOTE" ) );
        c2222 = CONS( t2515, c2222 );
        c2222 = CONS( t2513, c2222 );
        CONSTANTEXP( ADR( c2222 ) );
        c2221 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST" ) );
        CONSTANTEXP( ADR( c2221 ) );
        c2202 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2202 ) );
        c2173 = STRINGTOSYMBOL( CSTRING_TSCP( "UNQUOTE" ) );
        CONSTANTEXP( ADR( c2173 ) );
        c2135 = CSTRING_TSCP( t2516 );
        CONSTANTEXP( ADR( c2135 ) );
        c2134 = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTE" ) );
        CONSTANTEXP( ADR( c2134 ) );
}

DEFTSCP( scqquote_quasiquotation_v );
DEFCSTRING( t2517, "QUASIQUOTATION" );
EXTERNTSCPP( scexpand_islist, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scexpand_islist_v );
EXTERNTSCPP( scqquote_template, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scqquote_template_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scqquote_quasiquotation( d2131, e2132 )
        TSCP  d2131, e2132;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2517 );
        if  ( FALSE( scexpand_islist( e2132, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2519;
        if  ( EQ( TSCPTAG( e2132 ), PAIRTAG ) )  goto L2522;
        scrt1__24__cdr_2derror( e2132 );
L2522:
        X2 = PAIR_CDR( e2132 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2525;
        scrt1__24__car_2derror( X2 );
L2525:
        X1 = PAIR_CAR( X2 );
        POPSTACKTRACE( scqquote_template( d2131, X1 ) );
L2519:
        POPSTACKTRACE( scdebug_error( c2134, 
                                      c2135, 
                                      CONS( e2132, EMPTYLIST ) ) );
}

DEFTSCP( scqquote_template_v );
DEFCSTRING( t2527, "SCQQUOTE_TEMPLATE" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scqquote_vector_2dtemplate, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scqquote_vector_2dtemplate_v );
EXTERNTSCPP( scqquote_list_2dtemplate, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scqquote_list_2dtemplate_v );

TSCP  scqquote_template( d2148, e2149 )
        TSCP  d2148, e2149;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2527 );
L2528:
        if  ( NEQ( TSCPTAG( d2148 ), FIXNUMTAG ) )  goto L2530;
        if  ( NEQ( _S2CUINT( d2148 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L2534;
        POPSTACKTRACE( e2149 );
L2530:
        if  ( FALSE( scrt2_zero_3f( d2148 ) ) )  goto L2534;
        POPSTACKTRACE( e2149 );
L2534:
        X1 = BOOLEAN( EQ( TSCPTAG( e2149 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L2567;
        if  ( EQ( TSCPTAG( e2149 ), PAIRTAG ) )  goto L2544;
        scrt1__24__car_2derror( e2149 );
L2544:
        X2 = PAIR_CAR( e2149 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2173 ) ) )  goto L2567;
        if  ( FALSE( scexpand_islist( e2149, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2546;
        if  ( NEQ( _S2CUINT( d2148 ), 
                   _S2CUINT( _TSCP( 4 ) ) ) )  goto L2548;
        if  ( BITAND( BITOR( _S2CINT( d2148 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2550;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( d2148 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L2551;
L2550:
        X2 = scrt2__2d_2dtwo( d2148, _TSCP( 4 ) );
L2551:
        X3 = PAIR_CDR( e2149 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2554;
        scrt1__24__car_2derror( X3 );
L2554:
        e2149 = PAIR_CAR( X3 );
        d2148 = X2;
        GOBACK( L2528 );
L2548:
        if  ( BITAND( BITOR( _S2CINT( d2148 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2556;
        X6 = _TSCP( IDIFFERENCE( _S2CINT( d2148 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L2557;
L2556:
        X6 = scrt2__2d_2dtwo( d2148, _TSCP( 4 ) );
L2557:
        X8 = PAIR_CDR( e2149 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L2560;
        scrt1__24__car_2derror( X8 );
L2560:
        X7 = PAIR_CAR( X8 );
        X5 = scqquote_template( X6, X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c2222, X4 );
        X2 = sc_cons( c2221, X3 );
        POPSTACKTRACE( X2 );
L2546:
        X2 = PAIR_CDR( e2149 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2565;
        scrt1__24__car_2derror( X2 );
L2565:
        POPSTACKTRACE( scdebug_error( c2173, 
                                      c2135, 
                                      CONS( PAIR_CAR( X2 ), 
                                            EMPTYLIST ) ) );
L2567:
        if  ( NOT( AND( EQ( TSCPTAG( e2149 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2149 ), VECTORTAG ) ) )
            )  goto L2568;
        POPSTACKTRACE( scqquote_vector_2dtemplate( d2148, e2149 ) );
L2568:
        if  ( NEQ( TSCPTAG( e2149 ), PAIRTAG ) )  goto L2570;
        POPSTACKTRACE( scqquote_list_2dtemplate( d2148, e2149 ) );
L2570:
        if  ( EQ( TSCPIMMEDIATETAG( e2149 ), CHARACTERTAG ) )  goto L2572;
        if  ( EQ( TSCPTAG( e2149 ), FIXNUMTAG ) )  goto L2574;
        if  ( AND( EQ( TSCPTAG( e2149 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2149 ), DOUBLEFLOATTAG ) )
            )  goto L2576;
        if  ( AND( EQ( TSCPTAG( e2149 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2149 ), STRINGTAG ) )
            )  goto L2578;
        X2 = sc_cons( e2149, EMPTYLIST );
        X1 = sc_cons( c2202, X2 );
        POPSTACKTRACE( X1 );
L2578:
        POPSTACKTRACE( e2149 );
L2576:
        POPSTACKTRACE( e2149 );
L2574:
        POPSTACKTRACE( e2149 );
L2572:
        POPSTACKTRACE( e2149 );
}

DEFTSCP( scqquote_list_2dtemplate_v );
DEFCSTRING( t2581, "SCQQUOTE_LIST-TEMPLATE" );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scqquote_ice_2dlist_4877f2f4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scqquote_ice_2dlist_4877f2f4_v );

TSCP  scqquote_list_2dtemplate( d2256, e2257 )
        TSCP  d2256, e2257;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2581 );
        X1 = scexpand_islist( e2257, 
                              _TSCP( 8 ), 
                              CONS( _TSCP( 8 ), EMPTYLIST ) );
        if  ( FALSE( X1 ) )  goto L2608;
        if  ( EQ( TSCPTAG( e2257 ), PAIRTAG ) )  goto L2591;
        scrt1__24__car_2derror( e2257 );
L2591:
        X2 = PAIR_CAR( e2257 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2202 ) ) )  goto L2608;
        X3 = PAIR_CDR( e2257 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2598;
        scrt1__24__car_2derror( X3 );
L2598:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2608;
        X2 = scrt1_caadr( e2257 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2134 ) ) )  goto L2608;
        X3 = PAIR_CDR( e2257 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2604;
        scrt1__24__car_2derror( X3 );
L2604:
        X2 = PAIR_CAR( X3 );
        POPSTACKTRACE( scqquote_quasiquotation( d2256, X2 ) );
L2608:
        if  ( EQ( TSCPTAG( e2257 ), PAIRTAG ) )  goto L2612;
        scrt1__24__car_2derror( e2257 );
L2612:
        X1 = PAIR_CAR( e2257 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2134 ) ) )  goto L2609;
        if  ( NEQ( _S2CUINT( d2256 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L2614;
        if  ( BITAND( BITOR( _S2CINT( d2256 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2616;
        X1 = _TSCP( IPLUS( _S2CINT( d2256 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L2617;
L2616:
        X1 = scrt2__2b_2dtwo( d2256, _TSCP( 4 ) );
L2617:
        POPSTACKTRACE( scqquote_quasiquotation( X1, e2257 ) );
L2614:
        if  ( BITAND( BITOR( _S2CINT( d2256 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2618;
        X5 = _TSCP( IPLUS( _S2CINT( d2256 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L2619;
L2618:
        X5 = scrt2__2b_2dtwo( d2256, _TSCP( 4 ) );
L2619:
        X4 = scqquote_quasiquotation( X5, e2257 );
        X3 = sc_cons( X4, EMPTYLIST );
        X2 = sc_cons( c2306, X3 );
        X1 = sc_cons( c2221, X2 );
        POPSTACKTRACE( X1 );
L2609:
        X1 = scqquote_ice_2dlist_4877f2f4( d2256, e2257 );
        POPSTACKTRACE( sc_cons( c2299, X1 ) );
}

DEFTSCP( scqquote_vector_2dtemplate_v );
DEFCSTRING( t2621, "SCQQUOTE_VECTOR-TEMPLATE" );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  scqquote_vector_2dtemplate( d2330, e2331 )
        TSCP  d2330, e2331;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2621 );
        X5 = scrt4_vector_2d_3elist( e2331 );
        X4 = scqquote_ice_2dlist_4877f2f4( d2330, X5 );
        X3 = sc_cons( c2299, X4 );
        X2 = sc_cons( X3, EMPTYLIST );
        X1 = sc_cons( c2334, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( scqquote_ice_2dlist_4877f2f4_v );
DEFCSTRING( t2624, "SCQQUOTE_TEMPLATE-OR-SPLICE-LIST" );
EXTERNTSCPP( scqquote_r_2dsplice_d5e960a1, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scqquote_r_2dsplice_d5e960a1_v );

TSCP  scqquote_ice_2dlist_4877f2f4( d2336, e2337 )
        TSCP  d2336, e2337;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2624 );
        if  ( EQ( _S2CUINT( e2337 ), _S2CUINT( EMPTYLIST ) ) )  goto L2626;
        if  ( NEQ( TSCPTAG( e2337 ), PAIRTAG ) )  goto L2628;
        X1 = PAIR_CAR( e2337 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2173 ) ) )  goto L2630;
        X2 = scqquote_template( d2336, e2337 );
        X1 = sc_cons( X2, EMPTYLIST );
        POPSTACKTRACE( X1 );
L2630:
        X2 = PAIR_CAR( e2337 );
        X1 = BOOLEAN( EQ( TSCPTAG( X2 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L2649;
        X3 = PAIR_CAR( e2337 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2643;
        scrt1__24__car_2derror( X3 );
L2643:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2378 ) ) )  goto L2649;
        X7 = PAIR_CAR( e2337 );
        X6 = scqquote_r_2dsplice_d5e960a1( d2336, X7 );
        X10 = PAIR_CDR( e2337 );
        X9 = scqquote_ice_2dlist_4877f2f4( d2336, X10 );
        X8 = sc_cons( c2299, X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        X5 = sc_cons( X6, X7 );
        X4 = sc_cons( c2391, X5 );
        X3 = X4;
        X2 = sc_cons( X3, EMPTYLIST );
        POPSTACKTRACE( X2 );
L2628:
        X2 = scqquote_r_2dsplice_d5e960a1( d2336, e2337 );
        X1 = sc_cons( X2, EMPTYLIST );
        POPSTACKTRACE( X1 );
L2626:
        POPSTACKTRACE( c2402 );
L2649:
        X2 = PAIR_CAR( e2337 );
        X1 = scqquote_r_2dsplice_d5e960a1( d2336, X2 );
        X3 = PAIR_CDR( e2337 );
        X2 = scqquote_ice_2dlist_4877f2f4( d2336, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

DEFTSCP( scqquote_r_2dsplice_d5e960a1_v );
DEFCSTRING( t2653, "SCQQUOTE_TEMPLATE-OR-SPLICE" );

TSCP  scqquote_r_2dsplice_d5e960a1( d2404, e2405 )
        TSCP  d2404, e2405;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2653 );
        X1 = BOOLEAN( EQ( TSCPTAG( e2405 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L2682;
        if  ( EQ( TSCPTAG( e2405 ), PAIRTAG ) )  goto L2662;
        scrt1__24__car_2derror( e2405 );
L2662:
        X2 = PAIR_CAR( e2405 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2378 ) ) )  goto L2682;
        if  ( FALSE( scexpand_islist( e2405, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2664;
        if  ( NEQ( _S2CUINT( d2404 ), 
                   _S2CUINT( _TSCP( 4 ) ) ) )  goto L2666;
        if  ( BITAND( BITOR( _S2CINT( d2404 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2668;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( d2404 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L2669;
L2668:
        X2 = scrt2__2d_2dtwo( d2404, _TSCP( 4 ) );
L2669:
        X4 = PAIR_CDR( e2405 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2672;
        scrt1__24__car_2derror( X4 );
L2672:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( scqquote_template( X2, X3 ) );
L2666:
        if  ( BITAND( BITOR( _S2CINT( d2404 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2674;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( d2404 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L2675;
L2674:
        X9 = scrt2__2d_2dtwo( d2404, _TSCP( 4 ) );
L2675:
        X11 = PAIR_CDR( e2405 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L2678;
        scrt1__24__car_2derror( X11 );
L2678:
        X10 = PAIR_CAR( X11 );
        X8 = scqquote_template( X9, X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        X6 = sc_cons( c2426, X7 );
        X5 = sc_cons( c2221, X6 );
        X4 = X5;
        X3 = sc_cons( X4, EMPTYLIST );
        X2 = sc_cons( c2221, X3 );
        POPSTACKTRACE( X2 );
L2664:
        POPSTACKTRACE( scdebug_error( c2378, 
                                      c2135, 
                                      CONS( e2405, EMPTYLIST ) ) );
L2682:
        POPSTACKTRACE( scqquote_template( d2404, e2405 ) );
}

EXTERNTSCPP( scexpand_install_2dexpander, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_install_2dexpander_v );

TSCP  scqquote_l2459( x2460, e2461 )
        TSCP  x2460, e2461;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scqquote_l2459 [inside TOP-LEVEL]" );
        X2 = scqquote_quasiquotation( _TSCP( 4 ), x2460 );
        X1 = e2461;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2461, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

void scrt4__init();
void scrt2__init();
void scdebug__init();
void scrt1__init();
void scexpand__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        scrt2__init();
        scdebug__init();
        scrt1__init();
        scexpand__init();
        MAXDISPLAY( 0 );
}

void  scqquote__init()
{
        TSCP  X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scqquote SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2517, 
                       ADR( scqquote_quasiquotation_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_quasiquotation, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2527, 
                       ADR( scqquote_template_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_template, EMPTYLIST ) );
        INITIALIZEVAR( t2581, 
                       ADR( scqquote_list_2dtemplate_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_list_2dtemplate, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2621, 
                       ADR( scqquote_vector_2dtemplate_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_vector_2dtemplate, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2624, 
                       ADR( scqquote_ice_2dlist_4877f2f4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_ice_2dlist_4877f2f4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2653, 
                       ADR( scqquote_r_2dsplice_d5e960a1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scqquote_r_2dsplice_d5e960a1, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scqquote_l2459, EMPTYLIST );
        scexpand_install_2dexpander( c2134, X1 );
        return;
}
