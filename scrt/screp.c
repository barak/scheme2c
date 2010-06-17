
/* SCHEME->C */

#include <objects.h>

DEFCSTRING( t2482, "~s form ignored~%" );
DEFSTATICTSCP( c2373 );
DEFCSTRING( t2483, "~s~%" );
DEFSTATICTSCP( c2371 );
DEFSTATICTSCP( c2369 );
DEFSTATICTSCP( t2484 );
DEFSTATICTSCP( t2485 );
DEFCSTRING( t2486, "~a~%" );
DEFSTATICTSCP( c2316 );
DEFCSTRING( t2487, "-emacs" );
DEFSTATICTSCP( c2301 );
DEFSTATICTSCP( c2300 );
DEFSTATICTSCP( c2274 );
DEFSTATICTSCP( c2261 );
DEFSTATICTSCP( c2248 );
DEFCSTRING( t2488, "Development Company" );
DEFSTATICTSCP( c2237 );
DEFCSTRING( t2489, "Copyright 1989-1993 Hewlett-Packard" );
DEFSTATICTSCP( c2236 );
DEFCSTRING( t2490, "~a -- ~a -- ~a ~a" );
DEFSTATICTSCP( c2221 );
DEFCSTRING( t2491, "-nh" );
DEFSTATICTSCP( c2220 );
DEFSTATICTSCP( c2217 );
DEFCSTRING( t2492, "> " );
DEFSTATICTSCP( c2206 );
DEFCSTRING( t2493, "-np" );
DEFSTATICTSCP( c2205 );
DEFCSTRING( t2494, "-q" );
DEFSTATICTSCP( c2202 );
DEFSTATICTSCP( c2200 );
DEFCSTRING( t2495, "-e" );
DEFSTATICTSCP( c2196 );
DEFSTATICTSCP( c2194 );
DEFSTATICTSCP( c2188 );
DEFCSTRING( t2496, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2153 );
DEFSTATICTSCP( c2152 );

static void  init_constants()
{
        c2373 = CSTRING_TSCP( t2482 );
        CONSTANTEXP( ADR( c2373 ) );
        c2371 = CSTRING_TSCP( t2483 );
        CONSTANTEXP( ADR( c2371 ) );
        c2369 = EMPTYLIST;
        t2484 = STRINGTOSYMBOL( CSTRING_TSCP( "INCLUDE" ) );
        c2369 = CONS( t2484, c2369 );
        t2485 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        c2369 = CONS( t2485, c2369 );
        CONSTANTEXP( ADR( c2369 ) );
        c2316 = CSTRING_TSCP( t2486 );
        CONSTANTEXP( ADR( c2316 ) );
        c2301 = CSTRING_TSCP( t2487 );
        CONSTANTEXP( ADR( c2301 ) );
        c2300 = STRINGTOSYMBOL( CSTRING_TSCP( "INTERACTIVE" ) );
        CONSTANTEXP( ADR( c2300 ) );
        c2274 = STRINGTOSYMBOL( CSTRING_TSCP( "RESULT" ) );
        CONSTANTEXP( ADR( c2274 ) );
        c2261 = STRINGTOSYMBOL( CSTRING_TSCP( "ENV" ) );
        CONSTANTEXP( ADR( c2261 ) );
        c2248 = STRINGTOSYMBOL( CSTRING_TSCP( "HEADER" ) );
        CONSTANTEXP( ADR( c2248 ) );
        c2237 = CSTRING_TSCP( t2488 );
        CONSTANTEXP( ADR( c2237 ) );
        c2236 = CSTRING_TSCP( t2489 );
        CONSTANTEXP( ADR( c2236 ) );
        c2221 = CSTRING_TSCP( t2490 );
        CONSTANTEXP( ADR( c2221 ) );
        c2220 = CSTRING_TSCP( t2491 );
        CONSTANTEXP( ADR( c2220 ) );
        c2217 = STRINGTOSYMBOL( CSTRING_TSCP( "PROMPT" ) );
        CONSTANTEXP( ADR( c2217 ) );
        c2206 = CSTRING_TSCP( t2492 );
        CONSTANTEXP( ADR( c2206 ) );
        c2205 = CSTRING_TSCP( t2493 );
        CONSTANTEXP( ADR( c2205 ) );
        c2202 = CSTRING_TSCP( t2494 );
        CONSTANTEXP( ADR( c2202 ) );
        c2200 = STRINGTOSYMBOL( CSTRING_TSCP( "QUIET" ) );
        CONSTANTEXP( ADR( c2200 ) );
        c2196 = CSTRING_TSCP( t2495 );
        CONSTANTEXP( ADR( c2196 ) );
        c2194 = STRINGTOSYMBOL( CSTRING_TSCP( "ECHO" ) );
        CONSTANTEXP( ADR( c2194 ) );
        c2188 = STRINGTOSYMBOL( CSTRING_TSCP( "LOAD" ) );
        CONSTANTEXP( ADR( c2188 ) );
        c2153 = CSTRING_TSCP( t2496 );
        CONSTANTEXP( ADR( c2153 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "EXIT" ) );
        CONSTANTEXP( ADR( c2152 ) );
}

DEFTSCP( screp_reset_v );
DEFCSTRING( t2497, "RESET" );
DEFTSCP( screp_top_2dlevel_v );
DEFCSTRING( t2498, "TOP-LEVEL" );
DEFTSCP( screp_default_2dexit_v );
DEFCSTRING( t2499, "SCREP_DEFAULT-EXIT" );
EXTERNTSCPP( sc_osexit, XAL1( TSCP ) );
EXTERNTSCP( sc_osexit_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  screp_default_2dexit( x2132 )
        TSCP  x2132;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2499 );
        if  ( NEQ( _S2CUINT( x2132 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L2501;
        POPSTACKTRACE( sc_osexit( _TSCP( 0 ) ) );
L2501:
        if  ( EQ( TSCPTAG( x2132 ), PAIRTAG ) )  goto L2504;
        scrt1__24__car_2derror( x2132 );
L2504:
        X1 = PAIR_CAR( x2132 );
        X2 = BOOLEAN( EQ( TSCPTAG( X1 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L2511;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), DOUBLEFLOATTAG ) )
            )  goto L2511;
        POPSTACKTRACE( scdebug_error( c2152, 
                                      c2153, 
                                      CONS( PAIR_CAR( x2132 ), 
                                            EMPTYLIST ) ) );
L2511:
        X1 = PAIR_CAR( x2132 );
        POPSTACKTRACE( sc_osexit( X1 ) );
}

DEFTSCP( screp_exit_v );
DEFCSTRING( t2516, "EXIT" );

TSCP  screp_l2163(  )
{
        PUSHSTACKTRACE( "screp_l2163 [inside TOP-LEVEL]" );
        POPSTACKTRACE( screp_default_2dexit( CONS( _TSCP( 4 ), 
                                                   EMPTYLIST ) ) );
}

DEFTSCP( screp__2aemacscheme_2a_v );
DEFCSTRING( t2518, "SCREP_*EMACSCHEME*" );
DEFTSCP( screp__2areading_2dstdin_2a_v );
DEFCSTRING( t2519, "SCREP_*READING-STDIN*" );
DEFTSCP( screp_read_2deval_2dprint_v );
DEFCSTRING( t2520, "READ-EVAL-PRINT" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt4_signal, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_signal_v );
EXTERNTSCP( scdebug_trace_2dlevel_v );
EXTERNTSCP( scrt5_rt_2dvalue_e3d6f738_v );
EXTERNTSCP( scrt5_rt_2dvalue_c91906c5_v );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCP( sc_implementation_v );

TSCP  screp_l2277( x2278, c2586 )
        TSCP  x2278, c2586;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "screp_l2277 [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2586, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c2586, 1 );
        if  ( FALSE( x2278 ) )  goto L2588;
        if  ( EQ( TSCPTAG( x2278 ), PAIRTAG ) )  goto L2591;
        scrt1__24__car_2derror( x2278 );
L2591:
        X4 = PAIR_CAR( x2278 );
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X4 );
L2588:
        X4 = DISPLAY( 2 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCP( scdebug_proceed_v );

TSCP  screp_l2283( x2284, c2593 )
        TSCP  x2284, c2593;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "screp_l2283 [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c2593, 0 );
        if  ( NEQ( _S2CUINT( x2284 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L2595;
        X4 = FALSEVALUE;
        goto L2596;
L2595:
        if  ( EQ( TSCPTAG( x2284 ), PAIRTAG ) )  goto L2598;
        scrt1__24__car_2derror( x2284 );
L2598:
        X4 = PAIR_CAR( x2284 );
L2596:
        X3 = DISPLAY( 2 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  screp_m2182( e2276, c2584 )
        TSCP  e2276, c2584;
{
        TSCP  X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "MAKE-EXIT [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2584, 0 );
        DISPLAY( 2 ) = e2276;
        scdebug_proceed_v = MAKEPROCEDURE( 0, 
                                           1, 
                                           screp_l2277, 
                                           MAKECLOSURE( EMPTYLIST, 
                                                        2, 
                                                        DISPLAY( 0 ), 
                                                        DISPLAY( 2 ) ) );
        screp_exit_v = MAKEPROCEDURE( 0, 
                                      1, 
                                      screp_l2283, 
                                      MAKECLOSURE( EMPTYLIST, 
                                                   1, 
                                                   DISPLAY( 2 ) ) );
        X2 = TRUEVALUE;
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  screp_l2298( c2605 )
        TSCP  c2605;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "screp_l2298 [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c2605, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c2605, 1 );
        screp_exit_v = DISPLAY( 3 );
        X4 = DISPLAY( 2 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  screp_m2183( r2295, c2600 )
        TSCP  r2295, c2600;
{
        TSCP  X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "MAKE-RESET [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c2600, 0 );
        DISPLAY( 2 ) = r2295;
        if  ( TRUE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L2602;
        DISPLAY( 3 ) = screp_exit_v;
        screp_reset_v = MAKEPROCEDURE( 0, 
                                       0, 
                                       screp_l2298, 
                                       MAKECLOSURE( EMPTYLIST, 
                                                    2, 
                                                    DISPLAY( 3 ), 
                                                    DISPLAY( 2 ) ) );
L2602:
        X2 = TRUEVALUE;
        DISPLAY( 1 ) = X1;
        SDVAL = X2;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );
EXTERNTSCPP( scdebug_on_2dinterrupt, XAL1( TSCP ) );
EXTERNTSCP( scdebug_on_2dinterrupt_v );
EXTERNTSCPP( scrt6_echo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_echo_v );
EXTERNTSCP( scrt5_stdout_2dport_v );
EXTERNTSCPP( sc_set_2dscheme_2dmode_21, XAL1( TSCP ) );
EXTERNTSCP( sc_set_2dscheme_2dmode_21_v );
EXTERNTSCP( scdebug_2derror_2a_ca4047fd_v );

TSCP  screp_l2304( c2629 )
        TSCP  c2629;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "screp_l2304 [inside READ-EVAL-PRINT]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c2629, 0 );
        scdebug_2derror_2a_ca4047fd_v = TRUEVALUE;
        screp_reset_v = DISPLAY( 2 );
        X3 = screp_reset_v;
        X3 = UNKNOWNCALL( X3, 0 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scdebug__2dhandler_7d8722d5, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug__2dhandler_7d8722d5_v );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );
EXTERNTSCPP( screp_rep, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( screp_rep_v );
EXTERNTSCPP( scrt5_current_2dinput_2dport, XAL0(  ) );
EXTERNTSCP( scrt5_current_2dinput_2dport_v );
EXTERNTSCP( scrt5_stdin_2dport_v );

TSCP  screp_read_2deval_2dprint( f2167 )
        TSCP  f2167;
{
        TSCP  X18, 
              X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t2520 );
        X1 = _TSCP( 0 );
        X2 = _TSCP( 0 );
        DISPLAY( 0 ) = _TSCP( 0 );
        DISPLAY( 1 ) = _TSCP( 0 );
        X3 = _TSCP( 0 );
        X4 = _TSCP( 0 );
        X5 = _TSCP( 0 );
        X6 = _TSCP( 0 );
        X7 = _TSCP( 0 );
        X8 = _TSCP( 0 );
        X9 = _TSCP( 0 );
        X10 = _TSCP( 0 );
        X11 = _TSCP( 0 );
        X12 = _TSCP( 0 );
        X13 = _TSCP( 0 );
        X13 = CONS( X13, EMPTYLIST );
        X12 = CONS( X12, EMPTYLIST );
        X11 = CONS( X11, EMPTYLIST );
        X10 = CONS( X10, EMPTYLIST );
        X9 = CONS( X9, EMPTYLIST );
        X8 = CONS( X8, EMPTYLIST );
        X7 = CONS( X7, EMPTYLIST );
        X6 = CONS( X6, EMPTYLIST );
        X5 = CONS( X5, EMPTYLIST );
        X4 = CONS( X4, EMPTYLIST );
        X3 = CONS( X3, EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 0 ) = CONS( DISPLAY( 0 ), EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X14 = screp_exit_v;
        SETGEN( PAIR_CAR( X13 ), X14 );
        X14 = screp_reset_v;
        SETGEN( PAIR_CAR( X12 ), X14 );
        if  ( FALSE( scrt1_memq( c2188, f2167 ) ) )  goto L2523;
        X15 = FALSEVALUE;
        goto L2524;
L2523:
        X15 = TRUEVALUE;
L2524:
        if  ( FALSE( X15 ) )  goto L2526;
        X14 = scrt4_signal( _TSCP( 8 ), _TSCP( 4 ) );
        goto L2527;
L2526:
        X14 = X15;
L2527:
        SETGEN( PAIR_CAR( X11 ), X14 );
        X14 = scdebug_trace_2dlevel_v;
        SETGEN( PAIR_CAR( X10 ), X14 );
        X14 = scrt5_rt_2dvalue_e3d6f738_v;
        SETGEN( PAIR_CAR( X9 ), X14 );
        X14 = scrt5_rt_2dvalue_c91906c5_v;
        SETGEN( PAIR_CAR( X8 ), X14 );
        X15 = scrt1_member( c2194, f2167 );
        if  ( FALSE( X15 ) )  goto L2529;
        X14 = X15;
        goto L2530;
L2529:
        X14 = scrt1_member( c2196, f2167 );
L2530:
        SETGEN( PAIR_CAR( X7 ), X14 );
        X15 = scrt1_member( c2200, f2167 );
        if  ( FALSE( X15 ) )  goto L2532;
        X14 = X15;
        goto L2533;
L2532:
        X14 = scrt1_member( c2202, f2167 );
L2533:
        SETGEN( PAIR_CAR( X6 ), X14 );
        X15 = scrt1_member( c2217, f2167 );
        if  ( FALSE( X15 ) )  goto L2535;
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2538;
        scrt1__24__cdr_2derror( X15 );
L2538:
        X16 = PAIR_CDR( X15 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L2541;
        scrt1__24__car_2derror( X16 );
L2541:
        X14 = PAIR_CAR( X16 );
        goto L2544;
L2535:
        if  ( FALSE( scrt1_member( c2205, f2167 ) ) )  goto L2543;
        X14 = FALSEVALUE;
        goto L2544;
L2543:
        X14 = c2206;
L2544:
        SETGEN( PAIR_CAR( X5 ), X14 );
        X15 = scrt1_member( c2248, f2167 );
        if  ( FALSE( X15 ) )  goto L2546;
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2549;
        scrt1__24__cdr_2derror( X15 );
L2549:
        X16 = PAIR_CDR( X15 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L2552;
        scrt1__24__car_2derror( X16 );
L2552:
        X14 = PAIR_CAR( X16 );
        goto L2555;
L2546:
        if  ( FALSE( scrt1_member( c2220, f2167 ) ) )  goto L2554;
        X14 = FALSEVALUE;
        goto L2555;
L2554:
        X16 = CONS( c2237, EMPTYLIST );
        X16 = CONS( c2236, X16 );
        X18 = sc_implementation_v;
        X18 = UNKNOWNCALL( X18, 0 );
        X17 = VIA( PROCEDURE_CODE( X18 ) )( PROCEDURE_CLOSURE( X18 ) );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L2558;
        scrt1__24__cdr_2derror( X17 );
L2558:
        X18 = PAIR_CDR( X17 );
        if  ( EQ( TSCPTAG( X18 ), PAIRTAG ) )  goto L2561;
        scrt1__24__car_2derror( X18 );
L2561:
        X16 = CONS( PAIR_CAR( X18 ), X16 );
        X18 = sc_implementation_v;
        X18 = UNKNOWNCALL( X18, 0 );
        X17 = VIA( PROCEDURE_CODE( X18 ) )( PROCEDURE_CLOSURE( X18 ) );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L2564;
        scrt1__24__car_2derror( X17 );
L2564:
        X14 = scrt6_format( c2221, 
                            CONS( PAIR_CAR( X17 ), X16 ) );
L2555:
        SETGEN( PAIR_CAR( X4 ), X14 );
        X15 = scrt1_member( c2261, f2167 );
        if  ( FALSE( X15 ) )  goto L2567;
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2570;
        scrt1__24__cdr_2derror( X15 );
L2570:
        X16 = PAIR_CDR( X15 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L2573;
        scrt1__24__car_2derror( X16 );
L2573:
        X14 = PAIR_CAR( X16 );
        goto L2568;
L2567:
        X14 = EMPTYLIST;
L2568:
        SETGEN( PAIR_CAR( X3 ), X14 );
        X14 = scrt1_memq( c2188, f2167 );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X14 );
        X15 = scrt1_member( c2274, f2167 );
        if  ( FALSE( X15 ) )  goto L2576;
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2579;
        scrt1__24__cdr_2derror( X15 );
L2579:
        X16 = PAIR_CDR( X15 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L2582;
        scrt1__24__car_2derror( X16 );
L2582:
        X14 = PAIR_CAR( X16 );
        goto L2577;
L2576:
        X14 = FALSEVALUE;
L2577:
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X14 );
        X14 = MAKEPROCEDURE( 1, 
                             0, 
                             screp_m2182, 
                             MAKECLOSURE( EMPTYLIST, 
                                          1, DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( X2 ), X14 );
        X14 = MAKEPROCEDURE( 1, 
                             0, 
                             screp_m2183, 
                             MAKECLOSURE( EMPTYLIST, 
                                          1, DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( X1 ), X14 );
        X14 = sc_ntinuation_1af38b9f_v;
        X14 = UNKNOWNCALL( X14, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X14 ) )( PAIR_CAR( X2 ), 
                                                   PROCEDURE_CLOSURE( X14 ) ) )
            )  goto L2608;
        X14 = sc_ntinuation_1af38b9f_v;
        X14 = UNKNOWNCALL( X14, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X14 ) )( PAIR_CAR( X1 ), 
                                                   PROCEDURE_CLOSURE( X14 ) ) )
            )  goto L2611;
        if  ( TRUE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L2616;
        if  ( EQ( _S2CUINT( PAIR_CAR( X11 ) ), 
                  _S2CUINT( _TSCP( 4 ) ) ) )  goto L2616;
        scrt4_signal( _TSCP( 8 ), scdebug_on_2dinterrupt_v );
L2616:
        if  ( FALSE( PAIR_CAR( X7 ) ) )  goto L2618;
        scrt6_echo( PAIR_CAR( X9 ), 
                    CONS( PAIR_CAR( X8 ), EMPTYLIST ) );
L2618:
        if  ( FALSE( PAIR_CAR( X4 ) ) )  goto L2612;
        X14 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        scrt6_format( scrt5_stdout_2dport_v, 
                      CONS( c2316, X14 ) );
        goto L2612;
L2611:
        scrt5_rt_2dvalue_e3d6f738_v = PAIR_CAR( X9 );
        scrt5_rt_2dvalue_c91906c5_v = PAIR_CAR( X8 );
        scdebug_trace_2dlevel_v = PAIR_CAR( X10 );
L2612:
        if  ( TRUE( screp_top_2dlevel_v ) )  goto L2625;
        if  ( TRUE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L2625;
        sc_set_2dscheme_2dmode_21( c2300 );
        screp__2aemacscheme_2a_v = scrt1_member( c2301, f2167 );
        DISPLAY( 2 ) = screp_reset_v;
        screp_top_2dlevel_v = MAKEPROCEDURE( 0, 
                                             0, 
                                             screp_l2304, 
                                             MAKECLOSURE( EMPTYLIST, 
                                                          1, 
                                                          DISPLAY( 2 ) ) );
        scdebug__2aerror_2dhandler_2a_v = scdebug__2dhandler_7d8722d5_v;
        scdebug_2derror_2a_ca4047fd_v = TRUEVALUE;
L2625:
        if  ( FALSE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L2631;
        X14 = scrt5_current_2dinput_2dport(  );
        goto L2632;
L2631:
        X14 = scrt5_stdin_2dport_v;
L2632:
        screp_rep( PAIR_CAR( X3 ), 
                   X14, 
                   scrt5_stdout_2dport_v, 
                   PAIR_CAR( X5 ), PAIR_CAR( X6 ) );
L2608:
        if  ( TRUE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L2633;
        scrt4_signal( _TSCP( 8 ), PAIR_CAR( X11 ) );
L2633:
        if  ( FALSE( PAIR_CAR( X7 ) ) )  goto L2635;
        scrt6_echo( PAIR_CAR( X9 ), 
                    CONS( FALSEVALUE, EMPTYLIST ) );
L2635:
        screp_exit_v = PAIR_CAR( X13 );
        screp_reset_v = PAIR_CAR( X12 );
        scdebug_trace_2dlevel_v = PAIR_CAR( X10 );
        SDVAL = PAIR_CAR( DISPLAY( 0 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( screp_flush_2dwhite_v );
DEFCSTRING( t2637, "SCREP_FLUSH-WHITE" );
EXTERNTSCPP( scrt6_char_2dready_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_char_2dready_3f_v );
EXTERNTSCPP( scrt6_peek_2dchar, XAL1( TSCP ) );
EXTERNTSCP( scrt6_peek_2dchar_v );
EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );
EXTERNTSCPP( scrt3_char_2dwhitespace_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dwhitespace_3f_v );
EXTERNTSCPP( scrt6_read_2dchar, XAL1( TSCP ) );
EXTERNTSCP( scrt6_read_2dchar_v );

TSCP  screp_flush_2dwhite( i2324 )
        TSCP  i2324;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2637 );
L2638:
        X2 = scrt6_char_2dready_3f( CONS( i2324, EMPTYLIST ) );
        if  ( FALSE( X2 ) )  goto L2640;
        X1 = scrt6_peek_2dchar( CONS( i2324, EMPTYLIST ) );
        goto L2641;
L2640:
        X1 = X2;
L2641:
        if  ( FALSE( X1 ) )  goto L2643;
        if  ( TRUE( scrt6_eof_2dobject_3f( X1 ) ) )  goto L2645;
        if  ( FALSE( scrt3_char_2dwhitespace_3f( X1 ) ) )  goto L2647;
        scrt6_read_2dchar( CONS( i2324, EMPTYLIST ) );
        GOBACK( L2638 );
L2647:
        POPSTACKTRACE( FALSEVALUE );
L2645:
        POPSTACKTRACE( FALSEVALUE );
L2643:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( screp_rep_v );
DEFCSTRING( t2650, "SCREP_REP" );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt6_read, XAL1( TSCP ) );
EXTERNTSCP( scrt6_read_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( sceval_eval, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_eval_v );

TSCP  screp_rep( e2341, i2342, o2343, p2344, q2345 )
        TSCP  e2341, i2342, o2343, p2344, q2345;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t2650 );
        X1 = FALSEVALUE;
L2653:
        X1 = CONS( X1, EMPTYLIST );
        screp_flush_2dwhite( i2342 );
        if  ( FALSE( p2344 ) )  goto L2656;
        if  ( TRUE( scrt6_char_2dready_3f( CONS( i2342, EMPTYLIST ) ) )
            )  goto L2656;
        scrt6_display( p2344, CONS( o2343, EMPTYLIST ) );
L2656:
        screp__2areading_2dstdin_2a_v = BOOLEAN( EQ( _S2CUINT( i2342 ), 
                                                     _S2CUINT( scrt5_stdin_2dport_v ) ) );
        X2 = scrt6_read( CONS( i2342, EMPTYLIST ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        screp__2areading_2dstdin_2a_v = FALSEVALUE;
        if  ( FALSE( scrt6_eof_2dobject_3f( PAIR_CAR( X1 ) ) )
            )  goto L2658;
        if  ( FALSE( p2344 ) )  goto L2660;
        POPSTACKTRACE( scrt6_newline( CONS( o2343, EMPTYLIST ) ) );
L2660:
        POPSTACKTRACE( FALSEVALUE );
L2658:
        X2 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( X1 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L2677;
        X4 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2669;
        scrt1__24__car_2derror( X4 );
L2669:
        X3 = PAIR_CAR( X4 );
        if  ( FALSE( scrt1_memq( X3, c2369 ) ) )  goto L2677;
        screp_flush_2dwhite( i2342 );
        if  ( TRUE( q2345 ) )  goto L2672;
        X4 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2675;
        scrt1__24__car_2derror( X4 );
L2675:
        X3 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        scrt6_format( o2343, CONS( c2373, X3 ) );
L2672:
        X1 = FALSEVALUE;
        GOBACK( L2653 );
L2677:
        if  ( FALSE( screp__2aemacscheme_2a_v ) )  goto L2679;
        scrt6_newline( CONS( o2343, EMPTYLIST ) );
L2679:
        X2 = sceval_eval( PAIR_CAR( X1 ), 
                          CONS( e2341, EMPTYLIST ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        screp_flush_2dwhite( i2342 );
        if  ( TRUE( q2345 ) )  goto L2681;
        X2 = CONS( PAIR_CAR( X1 ), EMPTYLIST );
        scrt6_format( o2343, CONS( c2371, X2 ) );
L2681:
        X1 = FALSEVALUE;
        GOBACK( L2653 );
}

DEFTSCP( screp_load_v );
DEFCSTRING( t2683, "LOAD" );
EXTERNTSCPP( scrt5_rom_2dfile_73f9e308, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt5_rom_2dfile_73f9e308_v );

TSCP  screp_l2380( c2685 )
        TSCP  c2685;
{
        TSCP  X1;

        PUSHSTACKTRACE( "screp_l2380 [inside LOAD]" );
        X1 = CONS( c2188, EMPTYLIST );
        X1 = CONS( FALSEVALUE, X1 );
        X1 = CONS( c2217, X1 );
        X1 = CONS( FALSEVALUE, X1 );
        POPSTACKTRACE( screp_read_2deval_2dprint( CONS( c2248, X1 ) ) );
}

TSCP  screp_load( f2379 )
        TSCP  f2379;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2683 );
        X1 = MAKEPROCEDURE( 0, 0, screp_l2380, EMPTYLIST );
        scrt5_rom_2dfile_73f9e308( f2379, X1 );
        POPSTACKTRACE( f2379 );
}

DEFTSCP( screp_loadq_v );
DEFCSTRING( t2687, "LOADQ" );

TSCP  screp_l2383( c2689 )
        TSCP  c2689;
{
        TSCP  X1;

        PUSHSTACKTRACE( "screp_l2383 [inside LOADQ]" );
        X1 = CONS( c2188, EMPTYLIST );
        X1 = CONS( c2200, X1 );
        X1 = CONS( FALSEVALUE, X1 );
        X1 = CONS( c2217, X1 );
        X1 = CONS( FALSEVALUE, X1 );
        POPSTACKTRACE( screp_read_2deval_2dprint( CONS( c2248, X1 ) ) );
}

TSCP  screp_loadq( f2382 )
        TSCP  f2382;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2687 );
        X1 = MAKEPROCEDURE( 0, 0, screp_l2383, EMPTYLIST );
        scrt5_rom_2dfile_73f9e308( f2382, X1 );
        POPSTACKTRACE( f2382 );
}

DEFTSCP( screp_loade_v );
DEFCSTRING( t2691, "LOADE" );

TSCP  screp_l2386( c2693 )
        TSCP  c2693;
{
        TSCP  X1;

        PUSHSTACKTRACE( "screp_l2386 [inside LOADE]" );
        X1 = CONS( c2188, EMPTYLIST );
        X1 = CONS( c2194, X1 );
        X1 = CONS( FALSEVALUE, X1 );
        X1 = CONS( c2217, X1 );
        X1 = CONS( FALSEVALUE, X1 );
        POPSTACKTRACE( screp_read_2deval_2dprint( CONS( c2248, X1 ) ) );
}

TSCP  screp_loade( f2385 )
        TSCP  f2385;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2691 );
        X1 = MAKEPROCEDURE( 0, 0, screp_l2386, EMPTYLIST );
        scrt5_rom_2dfile_73f9e308( f2385, X1 );
        POPSTACKTRACE( f2385 );
}

DEFTSCP( screp_scheme2c_v );
DEFCSTRING( t2695, "SCREP_SCHEME2C" );
EXTERNTSCP( screp_return_2dto_2dscheme2c_v );
EXTERNTSCP( screp_scheme2c_2dstatus_v );
EXTERNTSCPP( scrt5_open_2dinput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dstring_v );

TSCP  screp_e2391( r2393, c2698 )
        TSCP  r2393, c2698;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "EXECUTE [inside SCHEME2C]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2698, 0 );
        screp_return_2dto_2dscheme2c_v = r2393;
        screp_scheme2c_2dstatus_v = _TSCP( 0 );
        scrt5_stdin_2dport_v = scrt5_open_2dinput_2dstring( DISPLAY( 0 ) );
        X5 = scrt6_read( CONS( scrt5_stdin_2dport_v, EMPTYLIST ) );
        X4 = sceval_eval( X5, EMPTYLIST );
        X3 = screp_return_2dto_2dscheme2c_v;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( screp__2ascheme2c_2dresult_2a_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt6_get_2doutput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt6_get_2doutput_2dstring_v );
EXTERNTSCP( scrt5_stderr_2dport_v );

TSCP  screp_scheme2c( i2389 )
        TSCP  i2389;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t2695 );
        DISPLAY( 0 ) = i2389;
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            screp_e2391, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = sc_ntinuation_1af38b9f_v;
        X2 = UNKNOWNCALL( X2, 1 );
        screp__2ascheme2c_2dresult_2a_v = VIA( PROCEDURE_CODE( X2 ) )( PAIR_CAR( X1 ), 
                                                                       PROCEDURE_CLOSURE( X2 ) );
        X2 = screp_scheme2c_2dstatus_v;
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L2702;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L2706;
        goto L2709;
L2702:
        if  ( FALSE( scrt2_zero_3f( X2 ) ) )  goto L2709;
L2706:
        scrt6_write( screp__2ascheme2c_2dresult_2a_v, 
                     CONS( scrt5_stdout_2dport_v, EMPTYLIST ) );
L2709:
        X4 = scrt6_get_2doutput_2dstring( scrt5_stdout_2dport_v );
        X6 = scrt6_get_2doutput_2dstring( scrt5_stderr_2dport_v );
        X5 = sc_cons( X6, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        X2 = sc_cons( screp_scheme2c_2dstatus_v, X3 );
        SDVAL = X2;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( screp_return_2dto_2dscheme2c_v );
DEFCSTRING( t2711, "SCREP_RETURN-TO-SCHEME2C" );
DEFTSCP( screp_scheme2c_2dstatus_v );
DEFCSTRING( t2712, "SCREP_SCHEME2C-STATUS" );
DEFTSCP( screp__2ascheme2c_2dresult_2a_v );
DEFCSTRING( t2713, "*SCHEME2C-RESULT*" );
DEFTSCP( screp_jump_2dto_2dscheme2c_v );
DEFCSTRING( t2714, "SCREP_JUMP-TO-SCHEME2C" );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  screp_jump_2dto_2dscheme2c( x2409 )
        TSCP  x2409;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t2714 );
        X1 = scrt1_length( x2409 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L2717;
        screp_scheme2c_2dstatus_v = _TSCP( 0 );
        X2 = screp_return_2dto_2dscheme2c_v;
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( FALSEVALUE, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L2717:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L2720;
        screp_scheme2c_2dstatus_v = _TSCP( 0 );
        if  ( EQ( TSCPTAG( x2409 ), PAIRTAG ) )  goto L2724;
        scrt1__24__car_2derror( x2409 );
L2724:
        X3 = PAIR_CAR( x2409 );
        X2 = screp_return_2dto_2dscheme2c_v;
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L2720:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L2726;
        if  ( EQ( TSCPTAG( x2409 ), PAIRTAG ) )  goto L2730;
        scrt1__24__cdr_2derror( x2409 );
L2730:
        X2 = PAIR_CDR( x2409 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2733;
        scrt1__24__car_2derror( X2 );
L2733:
        screp_scheme2c_2dstatus_v = PAIR_CAR( X2 );
        X3 = PAIR_CAR( x2409 );
        X2 = screp_return_2dto_2dscheme2c_v;
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L2726:
        POPSTACKTRACE( FALSEVALUE );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        sceval__init();
        scrt3__init();
        scrt6__init();
        scrt5__init();
        scrt4__init();
        scdebug__init();
        scrt1__init();
        scdebug__init();
        sceval__init();
        scexpand__init();
        scexpnd1__init();
        scexpnd2__init();
        scqquote__init();
        MAXDISPLAY( 4 );
}

void  screp__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(screp SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2497, 
                       ADR( screp_reset_v ), FALSEVALUE );
        INITIALIZEVAR( t2498, 
                       ADR( screp_top_2dlevel_v ), FALSEVALUE );
        INITIALIZEVAR( t2499, 
                       ADR( screp_default_2dexit_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      screp_default_2dexit, EMPTYLIST ) );
        INITIALIZEVAR( t2516, 
                       ADR( screp_exit_v ), FALSEVALUE );
        screp_exit_v = screp_default_2dexit_v;
        screp_reset_v = MAKEPROCEDURE( 0, 
                                       0, screp_l2163, EMPTYLIST );
        INITIALIZEVAR( t2518, 
                       ADR( screp__2aemacscheme_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t2519, 
                       ADR( screp__2areading_2dstdin_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t2520, 
                       ADR( screp_read_2deval_2dprint_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      screp_read_2deval_2dprint, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2637, 
                       ADR( screp_flush_2dwhite_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      screp_flush_2dwhite, EMPTYLIST ) );
        INITIALIZEVAR( t2650, 
                       ADR( screp_rep_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, screp_rep, EMPTYLIST ) );
        INITIALIZEVAR( t2683, 
                       ADR( screp_load_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, screp_load, EMPTYLIST ) );
        INITIALIZEVAR( t2687, 
                       ADR( screp_loadq_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, screp_loadq, EMPTYLIST ) );
        INITIALIZEVAR( t2691, 
                       ADR( screp_loade_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, screp_loade, EMPTYLIST ) );
        INITIALIZEVAR( t2695, 
                       ADR( screp_scheme2c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, screp_scheme2c, EMPTYLIST ) );
        INITIALIZEVAR( t2711, 
                       ADR( screp_return_2dto_2dscheme2c_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t2712, 
                       ADR( screp_scheme2c_2dstatus_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t2713, 
                       ADR( screp__2ascheme2c_2dresult_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t2714, 
                       ADR( screp_jump_2dto_2dscheme2c_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      screp_jump_2dto_2dscheme2c, 
                                      EMPTYLIST ) );
        return;
}
