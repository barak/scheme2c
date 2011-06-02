
/* SCHEME->C */

#include <objects.h>

void lambdaexp__init();
DEFSTATICTSCP( lexical_2dbound_2dvars_v );
DEFSTATICTSCP( lexical_2dfree_2dvars_v );
DEFSTATICTSCP( current_2dlambda_2did_v );
DEFSTATICTSCP( exp_2dform_2dlist_v );
DEFSTATICTSCP( newv_v );
DEFSTATICTSCP( expand_2derror_v );
DEFSTATICTSCP( assign_2dknown_2dname_v );
DEFSTATICTSCP( id_2dprintname_v );
DEFCSTRING( t2553, "  CODE-LABEL:  ~a~%" );
DEFSTATICTSCP( c2545 );
DEFCSTRING( t2554, "  REAL-CALLS:  ~a~%" );
DEFSTATICTSCP( c2542 );
DEFCSTRING( t2555, "  TAIL-CALLS:  ~a~%" );
DEFSTATICTSCP( c2539 );
DEFCSTRING( t2556, "   STR-CALLS:  ~a~%" );
DEFSTATICTSCP( c2536 );
DEFCSTRING( t2557, "INLINE-TAILS:  ~a~%" );
DEFSTATICTSCP( c2533 );
DEFCSTRING( t2558, "       EXITS:  ~a~%" );
DEFSTATICTSCP( c2530 );
DEFCSTRING( t2559, "      NESTIN:  ~a~%" );
DEFSTATICTSCP( c2527 );
DEFCSTRING( t2560, "    GENERATE:  ~a ~a ~a~%" );
DEFSTATICTSCP( c2520 );
DEFCSTRING( t2561, "       CALLS:  ~a~%" );
DEFSTATICTSCP( c2517 );
DEFCSTRING( t2562, "     LEXICAL:  ~a~%" );
DEFSTATICTSCP( c2514 );
DEFCSTRING( t2563, "        VARS:  ~a ~a~%" );
DEFSTATICTSCP( c2509 );
DEFCSTRING( t2564, " LAMBDA-NAME:  ~a ~a ~a~%" );
DEFSTATICTSCP( c2499 );
DEFSTATICTSCP( c2483 );
DEFSTATICTSCP( c2458 );
DEFSTATICTSCP( c2445 );
DEFSTATICTSCP( c2432 );
DEFSTATICTSCP( c2419 );
DEFSTATICTSCP( c2406 );
DEFSTATICTSCP( c2393 );
DEFSTATICTSCP( c2368 );
DEFSTATICTSCP( c2355 );
DEFSTATICTSCP( c2342 );
DEFSTATICTSCP( c2329 );
DEFCSTRING( t2565, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2283 );
DEFSTATICTSCP( c2282 );
DEFSTATICTSCP( c2157 );
DEFSTATICTSCP( c2130 );
DEFSTATICTSCP( c2097 );
DEFSTATICTSCP( c2086 );
DEFSTATICTSCP( c2077 );
DEFSTATICTSCP( c2076 );
DEFSTATICTSCP( c2073 );
DEFSTATICTSCP( c2054 );
DEFSTATICTSCP( c2053 );
DEFSTATICTSCP( c2052 );
DEFSTATICTSCP( c2039 );
DEFSTATICTSCP( c2025 );

static void  init_constants()
{
        lexical_2dbound_2dvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL-BO\
UND-VARS" ) );
        CONSTANTEXP( ADR( lexical_2dbound_2dvars_v ) );
        lexical_2dfree_2dvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL-FRE\
E-VARS" ) );
        CONSTANTEXP( ADR( lexical_2dfree_2dvars_v ) );
        current_2dlambda_2did_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-LAM\
BDA-ID" ) );
        CONSTANTEXP( ADR( current_2dlambda_2did_v ) );
        exp_2dform_2dlist_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXP-FORM-LIST" ) );
        CONSTANTEXP( ADR( exp_2dform_2dlist_v ) );
        newv_v = STRINGTOSYMBOL( CSTRING_TSCP( "NEWV" ) );
        CONSTANTEXP( ADR( newv_v ) );
        expand_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND-ERROR" ) );
        CONSTANTEXP( ADR( expand_2derror_v ) );
        assign_2dknown_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "ASSIGN-KNOW\
N-NAME" ) );
        CONSTANTEXP( ADR( assign_2dknown_2dname_v ) );
        id_2dprintname_v = STRINGTOSYMBOL( CSTRING_TSCP( "ID-PRINTNAME" ) );
        CONSTANTEXP( ADR( id_2dprintname_v ) );
        c2545 = CSTRING_TSCP( t2553 );
        CONSTANTEXP( ADR( c2545 ) );
        c2542 = CSTRING_TSCP( t2554 );
        CONSTANTEXP( ADR( c2542 ) );
        c2539 = CSTRING_TSCP( t2555 );
        CONSTANTEXP( ADR( c2539 ) );
        c2536 = CSTRING_TSCP( t2556 );
        CONSTANTEXP( ADR( c2536 ) );
        c2533 = CSTRING_TSCP( t2557 );
        CONSTANTEXP( ADR( c2533 ) );
        c2530 = CSTRING_TSCP( t2558 );
        CONSTANTEXP( ADR( c2530 ) );
        c2527 = CSTRING_TSCP( t2559 );
        CONSTANTEXP( ADR( c2527 ) );
        c2520 = CSTRING_TSCP( t2560 );
        CONSTANTEXP( ADR( c2520 ) );
        c2517 = CSTRING_TSCP( t2561 );
        CONSTANTEXP( ADR( c2517 ) );
        c2514 = CSTRING_TSCP( t2562 );
        CONSTANTEXP( ADR( c2514 ) );
        c2509 = CSTRING_TSCP( t2563 );
        CONSTANTEXP( ADR( c2509 ) );
        c2499 = CSTRING_TSCP( t2564 );
        CONSTANTEXP( ADR( c2499 ) );
        c2483 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2483 ) );
        c2458 = STRINGTOSYMBOL( CSTRING_TSCP( "CODE-LABEL" ) );
        CONSTANTEXP( ADR( c2458 ) );
        c2445 = STRINGTOSYMBOL( CSTRING_TSCP( "REAL-CALLS" ) );
        CONSTANTEXP( ADR( c2445 ) );
        c2432 = STRINGTOSYMBOL( CSTRING_TSCP( "TAIL-CALLS" ) );
        CONSTANTEXP( ADR( c2432 ) );
        c2419 = STRINGTOSYMBOL( CSTRING_TSCP( "STR-CALLS" ) );
        CONSTANTEXP( ADR( c2419 ) );
        c2406 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAILS" ) );
        CONSTANTEXP( ADR( c2406 ) );
        c2393 = STRINGTOSYMBOL( CSTRING_TSCP( "EXITS" ) );
        CONSTANTEXP( ADR( c2393 ) );
        c2368 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY-CLOSEP" ) );
        CONSTANTEXP( ADR( c2368 ) );
        c2355 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        CONSTANTEXP( ADR( c2355 ) );
        c2342 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c2342 ) );
        c2329 = STRINGTOSYMBOL( CSTRING_TSCP( "CALLS" ) );
        CONSTANTEXP( ADR( c2329 ) );
        c2283 = CSTRING_TSCP( t2565 );
        CONSTANTEXP( ADR( c2283 ) );
        c2282 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2282 ) );
        c2157 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2157 ) );
        c2130 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE" ) );
        CONSTANTEXP( ADR( c2130 ) );
        c2097 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2097 ) );
        c2086 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2086 ) );
        c2077 = STRINGTOSYMBOL( CSTRING_TSCP( "BOUNDID" ) );
        CONSTANTEXP( ADR( c2077 ) );
        c2076 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c2076 ) );
        c2073 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-VARIABLES" ) );
        CONSTANTEXP( ADR( c2073 ) );
        c2054 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2054 ) );
        c2053 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2053 ) );
        c2052 = STRINGTOSYMBOL( CSTRING_TSCP( "L" ) );
        CONSTANTEXP( ADR( c2052 ) );
        c2039 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2039 ) );
        c2025 = STRINGTOSYMBOL( CSTRING_TSCP( "NESTIN" ) );
        CONSTANTEXP( ADR( c2025 ) );
}

DEFTSCP( lambdaexp_lambda_2dexp_v );
DEFCSTRING( t2566, "LAMBDA-EXP" );
EXTERNTSCPP( lambdaexp_lambda_2ddefines, XAL1( TSCP ) );
EXTERNTSCP( lambdaexp_lambda_2ddefines_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( lambdaexp_ars_2dbind_5a7c2cf0, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( lambdaexp_ars_2dbind_5a7c2cf0_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );

TSCP  lambdaexp_lambda_2dexp( e2011, e2012 )
        TSCP  e2011, e2012;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2566 );
        X1 = EMPTYLIST;
        X3 = SYMBOL_VALUE( newv_v );
        X3 = UNKNOWNCALL( X3, 3 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c2052, 
                                          c2053, 
                                          c2054, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X3 = SYMBOL_VALUE( current_2dlambda_2did_v );
        X4 = SYMBOL_VALUE( lexical_2dfree_2dvars_v );
        X5 = SYMBOL_VALUE( lexical_2dbound_2dvars_v );
        if  ( EQ( TSCPTAG( e2011 ), PAIRTAG ) )  goto L2569;
        scrt1__24__cdr_2derror( e2011 );
L2569:
        X8 = PAIR_CDR( e2011 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L2572;
        scrt1__24__cdr_2derror( X8 );
L2572:
        X7 = PAIR_CDR( X8 );
        X6 = lambdaexp_lambda_2ddefines( X7 );
        X6 = CONS( X6, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X7 = SYMBOL_VALUE( lexical_2dbound_2dvars_v );
        X8 = SYMBOL_VALUE( lexical_2dfree_2dvars_v );
        SETGENTL( SYMBOL_VALUE( lexical_2dfree_2dvars_v ), 
                  scrt1_append_2dtwo( X7, X8 ) );
        SETGENTL( SYMBOL_VALUE( lexical_2dbound_2dvars_v ), 
                  EMPTYLIST );
        X7 = SYMBOL_VALUE( current_2dlambda_2did_v );
        plist_put( X2, c2025, X7 );
        SETGENTL( SYMBOL_VALUE( current_2dlambda_2did_v ), X2 );
        X8 = PAIR_CDR( e2011 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L2577;
        scrt1__24__car_2derror( X8 );
L2577:
        X7 = PAIR_CAR( X8 );
        lambdaexp_ars_2dbind_5a7c2cf0( X7, 
                                       PAIR_CAR( X6 ), X2 );
        X8 = SYMBOL_VALUE( exp_2dform_2dlist_v );
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( PAIR_CAR( X6 ), 
                                          e2012, 
                                          PROCEDURE_CLOSURE( X8 ) );
        SETGEN( PAIR_CAR( X6 ), X7 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_append_2dtwo( PAIR_CAR( X6 ), X9 ), 
                   EMPTYLIST );
        X7 = scrt1_cons_2a( c2039, CONS( X2, X8 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
        SETGENTL( SYMBOL_VALUE( lexical_2dbound_2dvars_v ), X5 );
        SETGENTL( SYMBOL_VALUE( lexical_2dfree_2dvars_v ), X4 );
        SETGENTL( SYMBOL_VALUE( current_2dlambda_2did_v ), X3 );
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( lambdaexp_ars_2dbind_5a7c2cf0_v );
DEFCSTRING( t2579, "LAMBDA-VARS-BIND" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );

TSCP  lambdaexp_ars_2dbind_5a7c2cf0( v2056, n2057, i2058 )
        TSCP  v2056, n2057, i2058;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t2579 );
        v2056 = CONS( v2056, EMPTYLIST );
        if  ( EQ( _S2CUINT( PAIR_CAR( v2056 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L2581;
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( v2056 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( v2056 ) ), 
                            SYMBOLTAG ) ) ) )  goto L2583;
        X2 = SYMBOL_VALUE( newv_v );
        X2 = UNKNOWNCALL( X2, 5 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( PAIR_CAR( v2056 ), 
                                          c2053, 
                                          c2076, 
                                          c2077, 
                                          i2058, 
                                          PROCEDURE_CLOSURE( X2 ) );
        SETGEN( PAIR_CAR( v2056 ), X1 );
        if  ( FALSE( n2057 ) )  goto L2586;
        X1 = SYMBOL_VALUE( assign_2dknown_2dname_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( PAIR_CAR( v2056 ), 
                                     PROCEDURE_CLOSURE( X1 ) );
L2586:
        X2 = sc_cons( PAIR_CAR( v2056 ), EMPTYLIST );
        X1 = X2;
        POPSTACKTRACE( plist_put( i2058, c2097, X1 ) );
L2583:
        if  ( NEQ( TSCPTAG( PAIR_CAR( v2056 ) ), PAIRTAG ) )  goto L2589;
        X2 = PAIR_CAR( v2056 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2592;
        scrt1__24__car_2derror( X2 );
L2592:
        X1 = PAIR_CAR( X2 );
        X1 = CONS( X1, EMPTYLIST );
        X3 = SYMBOL_VALUE( newv_v );
        X3 = UNKNOWNCALL( X3, 5 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PAIR_CAR( X1 ), 
                                          c2053, 
                                          c2076, 
                                          c2077, 
                                          i2058, 
                                          PROCEDURE_CLOSURE( X3 ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( n2057 ) )  goto L2595;
        X2 = SYMBOL_VALUE( assign_2dknown_2dname_v );
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( PAIR_CAR( X1 ), 
                                     PROCEDURE_CLOSURE( X2 ) );
L2595:
        X3 = PAIR_CAR( v2056 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2598;
        scrt1__24__cdr_2derror( X3 );
L2598:
        X2 = PAIR_CDR( X3 );
        lambdaexp_ars_2dbind_5a7c2cf0( X2, n2057, i2058 );
        X3 = plist_get( i2058, c2086 );
        X2 = sc_cons( PAIR_CAR( X1 ), X3 );
        POPSTACKTRACE( plist_put( i2058, c2086, X2 ) );
L2589:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2073, 
                                                    PAIR_CAR( v2056 ), 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L2581:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( lambdaexp_lambda_2ddefines_v );
DEFCSTRING( t2600, "LAMBDA-DEFINES" );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );
EXTERNTSCPP( scrt1_cdadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdadr_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  lambdaexp_lambda_2ddefines( b2101 )
        TSCP  b2101;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2600 );
        X1 = b2101;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L2603:
        if  ( FALSE( X1 ) )  goto L2604;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2607;
        scrt1__24__car_2derror( X1 );
L2607:
        X5 = PAIR_CAR( X1 );
        X6 = BOOLEAN( NEQ( TSCPTAG( X5 ), PAIRTAG ) );
        if  ( TRUE( X6 ) )  goto L2614;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L2618;
        scrt1__24__car_2derror( X5 );
L2618:
        X7 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( c2130 ) ) )  goto L2614;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L2623;
        scrt1__24__cdr_2derror( X5 );
L2623:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L2626;
        scrt1__24__car_2derror( X8 );
L2626:
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L2620;
        X7 = PAIR_CDR( X1 );
        X9 = scrt1_caadr( X5 );
        X8 = sc_cons( X9, X3 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X13 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2631;
        scrt1__24__cdr_2derror( X13 );
L2631:
        X12 = PAIR_CDR( X13 );
        X13 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X11 = CONS( scrt1_append_2dtwo( X12, X13 ), 
                    EMPTYLIST );
        X10 = CONS( scrt1_cons_2a( c2054, 
                                   CONS( scrt1_cdadr( X5 ), X11 ) ), 
                    X10 );
        X9 = scrt1_cons_2a( c2157, 
                            CONS( scrt1_caadr( X5 ), X10 ) );
        X4 = sc_cons( X9, X4 );
        X3 = X8;
        X1 = X7;
        GOBACK( L2603 );
L2620:
        X7 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L2635;
        scrt1__24__cdr_2derror( X5 );
L2635:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L2638;
        scrt1__24__car_2derror( X10 );
L2638:
        X9 = PAIR_CAR( X10 );
        X8 = sc_cons( X9, X3 );
        X10 = PAIR_CDR( X5 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_cons_2a( c2157, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X4 = sc_cons( X9, X4 );
        X3 = X8;
        X1 = X7;
        GOBACK( L2603 );
L2604:
        if  ( FALSE( X3 ) )  goto L2641;
        X9 = scrt1_reverse( X4 );
        X12 = scrt1_reverse( X2 );
        X13 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X11 = scrt1_append_2dtwo( X12, X13 );
        X10 = scrt1_cons_2a( X11, EMPTYLIST );
        X8 = CONS( scrt1_append_2dtwo( X9, X10 ), EMPTYLIST );
        X7 = scrt1_cons_2a( c2054, CONS( X3, X8 ) );
        X10 = scrt1_length( X3 );
        X9 = sc_make_2dvector( X10, 
                               CONS( _TSCP( 0 ), EMPTYLIST ) );
        X8 = scrt4_vector_2d_3elist( X9 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X7, 
                            CONS( scrt1_append_2dtwo( X8, X9 ), 
                                  EMPTYLIST ) );
        POPSTACKTRACE( scrt1_cons_2a( X6, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L2641:
        POPSTACKTRACE( b2101 );
L2614:
        X6 = PAIR_CDR( X1 );
        X7 = sc_cons( X5, X2 );
        X2 = X7;
        X1 = X6;
        GOBACK( L2603 );
}

DEFTSCP( lambdaexp__24lambda_3f_v );
DEFCSTRING( t2644, "$LAMBDA?" );

TSCP  lambdaexp__24lambda_3f( x2186 )
        TSCP  x2186;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2644 );
        if  ( NEQ( TSCPTAG( x2186 ), PAIRTAG ) )  goto L2646;
        X1 = PAIR_CAR( x2186 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2039 ) ) ) );
L2646:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lambdaexp__24lambda_2did_v );
DEFCSTRING( t2649, "$LAMBDA-ID" );

TSCP  lambdaexp__24lambda_2did( x2204 )
        TSCP  x2204;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2649 );
        if  ( NEQ( TSCPTAG( x2204 ), PAIRTAG ) )  goto L2651;
        X2 = PAIR_CAR( x2204 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2039 ) ) );
        goto L2652;
L2651:
        X1 = FALSEVALUE;
L2652:
        if  ( FALSE( X1 ) )  goto L2655;
        if  ( EQ( TSCPTAG( x2204 ), PAIRTAG ) )  goto L2658;
        scrt1__24__cdr_2derror( x2204 );
L2658:
        X2 = PAIR_CDR( x2204 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2661;
        scrt1__24__car_2derror( X2 );
L2661:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L2655:
        POPSTACKTRACE( X1 );
}

DEFTSCP( lambdaexp__24lambda_2dbody_v );
DEFCSTRING( t2663, "$LAMBDA-BODY" );

TSCP  lambdaexp__24lambda_2dbody( x2238 )
        TSCP  x2238;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t2663 );
        if  ( NEQ( TSCPTAG( x2238 ), PAIRTAG ) )  goto L2665;
        X2 = PAIR_CAR( x2238 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2039 ) ) );
        goto L2666;
L2665:
        X1 = FALSEVALUE;
L2666:
        if  ( FALSE( X1 ) )  goto L2669;
        if  ( EQ( TSCPTAG( x2238 ), PAIRTAG ) )  goto L2672;
        scrt1__24__cdr_2derror( x2238 );
L2672:
        X2 = PAIR_CDR( x2238 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2675;
        scrt1__24__cdr_2derror( X2 );
L2675:
        POPSTACKTRACE( PAIR_CDR( X2 ) );
L2669:
        POPSTACKTRACE( X1 );
}

DEFTSCP( lambdaexp__2dbody_21_b7b60c74_v );
DEFCSTRING( t2677, "SET-$LAMBDA-BODY!" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  lambdaexp__2dbody_21_b7b60c74( x2272, b2273 )
        TSCP  x2272, b2273;
{
        TSCP  X1;

        PUSHSTACKTRACE( t2677 );
        if  ( EQ( TSCPTAG( x2272 ), PAIRTAG ) )  goto L2680;
        scrt1__24__cdr_2derror( x2272 );
L2680:
        X1 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2683;
        scdebug_error( c2282, 
                       c2283, CONS( X1, EMPTYLIST ) );
L2683:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X1 ), b2273 ) );
}

DEFTSCP( lambdaexp_lambda_2dreqvars_v );
DEFCSTRING( t2685, "LAMBDA-REQVARS" );

TSCP  lambdaexp_lambda_2dreqvars( i2290 )
        TSCP  i2290;
{
        PUSHSTACKTRACE( t2685 );
        POPSTACKTRACE( plist_get( i2290, c2086 ) );
}

DEFTSCP( lambdaexp_reqvars_21_1ed68904_v );
DEFCSTRING( t2687, "SET-LAMBDA-REQVARS!" );

TSCP  lambdaexp_reqvars_21_1ed68904( i2295, v2296 )
        TSCP  i2295, v2296;
{
        PUSHSTACKTRACE( t2687 );
        POPSTACKTRACE( plist_put( i2295, c2086, v2296 ) );
}

DEFTSCP( lambdaexp_lambda_2doptvars_v );
DEFCSTRING( t2689, "LAMBDA-OPTVARS" );

TSCP  lambdaexp_lambda_2doptvars( i2302 )
        TSCP  i2302;
{
        PUSHSTACKTRACE( t2689 );
        POPSTACKTRACE( plist_get( i2302, c2097 ) );
}

DEFTSCP( lambdaexp_optvars_21_62318a06_v );
DEFCSTRING( t2691, "SET-LAMBDA-OPTVARS!" );

TSCP  lambdaexp_optvars_21_62318a06( i2307, v2308 )
        TSCP  i2307, v2308;
{
        PUSHSTACKTRACE( t2691 );
        POPSTACKTRACE( plist_put( i2307, c2097, v2308 ) );
}

DEFTSCP( lambdaexp_lambda_2dlexical_v );
DEFCSTRING( t2693, "LAMBDA-LEXICAL" );

TSCP  lambdaexp_lambda_2dlexical( i2314 )
        TSCP  i2314;
{
        PUSHSTACKTRACE( t2693 );
        POPSTACKTRACE( plist_get( i2314, c2076 ) );
}

DEFTSCP( lambdaexp_lexical_21_cb9ac4c3_v );
DEFCSTRING( t2695, "SET-LAMBDA-LEXICAL!" );

TSCP  lambdaexp_lexical_21_cb9ac4c3( i2319, l2320 )
        TSCP  i2319, l2320;
{
        PUSHSTACKTRACE( t2695 );
        POPSTACKTRACE( plist_put( i2319, c2076, l2320 ) );
}

DEFTSCP( lambdaexp_lambda_2dcalls_v );
DEFCSTRING( t2697, "LAMBDA-CALLS" );

TSCP  lambdaexp_lambda_2dcalls( i2326 )
        TSCP  i2326;
{
        PUSHSTACKTRACE( t2697 );
        POPSTACKTRACE( plist_get( i2326, c2329 ) );
}

DEFTSCP( lambdaexp_2dcalls_21_2e15beaf_v );
DEFCSTRING( t2699, "SET-LAMBDA-CALLS!" );

TSCP  lambdaexp_2dcalls_21_2e15beaf( i2332, x2333 )
        TSCP  i2332, x2333;
{
        PUSHSTACKTRACE( t2699 );
        POPSTACKTRACE( plist_put( i2332, c2329, x2333 ) );
}

DEFTSCP( lambdaexp_lambda_2dgenerate_v );
DEFCSTRING( t2701, "LAMBDA-GENERATE" );

TSCP  lambdaexp_lambda_2dgenerate( i2339 )
        TSCP  i2339;
{
        PUSHSTACKTRACE( t2701 );
        POPSTACKTRACE( plist_get( i2339, c2342 ) );
}

DEFTSCP( lambdaexp_enerate_21_9da1f848_v );
DEFCSTRING( t2703, "SET-LAMBDA-GENERATE!" );

TSCP  lambdaexp_enerate_21_9da1f848( i2345, x2346 )
        TSCP  i2345, x2346;
{
        PUSHSTACKTRACE( t2703 );
        POPSTACKTRACE( plist_put( i2345, c2342, x2346 ) );
}

DEFTSCP( lambdaexp_lambda_2dclosed_v );
DEFCSTRING( t2705, "LAMBDA-CLOSED" );

TSCP  lambdaexp_lambda_2dclosed( i2352 )
        TSCP  i2352;
{
        PUSHSTACKTRACE( t2705 );
        POPSTACKTRACE( plist_get( i2352, c2355 ) );
}

DEFTSCP( lambdaexp_dclosed_21_ec5c02cd_v );
DEFCSTRING( t2707, "SET-LAMBDA-CLOSED!" );

TSCP  lambdaexp_dclosed_21_ec5c02cd( i2358, x2359 )
        TSCP  i2358, x2359;
{
        PUSHSTACKTRACE( t2707 );
        POPSTACKTRACE( plist_put( i2358, c2355, x2359 ) );
}

DEFTSCP( lambdaexp_y_2dclosep_2ee78957_v );
DEFCSTRING( t2709, "LAMBDA-DISPLAY-CLOSEP" );

TSCP  lambdaexp_y_2dclosep_2ee78957( i2365 )
        TSCP  i2365;
{
        PUSHSTACKTRACE( t2709 );
        POPSTACKTRACE( plist_get( i2365, c2368 ) );
}

DEFTSCP( lambdaexp_dclosep_21_85634459_v );
DEFCSTRING( t2711, "SET-LAMBDA-DISPLAY-CLOSEP!" );

TSCP  lambdaexp_dclosep_21_85634459( i2371, x2372 )
        TSCP  i2371, x2372;
{
        PUSHSTACKTRACE( t2711 );
        POPSTACKTRACE( plist_put( i2371, c2368, x2372 ) );
}

DEFTSCP( lambdaexp_lambda_2dnestin_v );
DEFCSTRING( t2713, "LAMBDA-NESTIN" );

TSCP  lambdaexp_lambda_2dnestin( i2378 )
        TSCP  i2378;
{
        PUSHSTACKTRACE( t2713 );
        POPSTACKTRACE( plist_get( i2378, c2025 ) );
}

DEFTSCP( lambdaexp_dnestin_21_156a35d6_v );
DEFCSTRING( t2715, "SET-LAMBDA-NESTIN!" );

TSCP  lambdaexp_dnestin_21_156a35d6( i2383, n2384 )
        TSCP  i2383, n2384;
{
        PUSHSTACKTRACE( t2715 );
        POPSTACKTRACE( plist_put( i2383, c2025, n2384 ) );
}

DEFTSCP( lambdaexp_lambda_2dexits_v );
DEFCSTRING( t2717, "LAMBDA-EXITS" );

TSCP  lambdaexp_lambda_2dexits( i2390 )
        TSCP  i2390;
{
        PUSHSTACKTRACE( t2717 );
        POPSTACKTRACE( plist_get( i2390, c2393 ) );
}

DEFTSCP( lambdaexp_2dexits_21_1a6123c5_v );
DEFCSTRING( t2719, "SET-LAMBDA-EXITS!" );

TSCP  lambdaexp_2dexits_21_1a6123c5( i2396, e2397 )
        TSCP  i2396, e2397;
{
        PUSHSTACKTRACE( t2719 );
        POPSTACKTRACE( plist_put( i2396, c2393, e2397 ) );
}

DEFTSCP( lambdaexp_ne_2dtails_e7422159_v );
DEFCSTRING( t2721, "LAMBDA-INLINE-TAILS" );

TSCP  lambdaexp_ne_2dtails_e7422159( i2403 )
        TSCP  i2403;
{
        PUSHSTACKTRACE( t2721 );
        POPSTACKTRACE( plist_get( i2403, c2406 ) );
}

DEFTSCP( lambdaexp_2dtails_21_60af0e8d_v );
DEFCSTRING( t2723, "SET-LAMBDA-INLINE-TAILS!" );

TSCP  lambdaexp_2dtails_21_60af0e8d( i2409, t2410 )
        TSCP  i2409, t2410;
{
        PUSHSTACKTRACE( t2723 );
        POPSTACKTRACE( plist_put( i2409, c2406, t2410 ) );
}

DEFTSCP( lambdaexp_tr_2dcalls_63782d98_v );
DEFCSTRING( t2725, "LAMBDA-STR-CALLS" );

TSCP  lambdaexp_tr_2dcalls_63782d98( i2416 )
        TSCP  i2416;
{
        PUSHSTACKTRACE( t2725 );
        POPSTACKTRACE( plist_get( i2416, c2419 ) );
}

DEFTSCP( lambdaexp_2dcalls_21_6fe7acf4_v );
DEFCSTRING( t2727, "SET-LAMBDA-STR-CALLS!" );

TSCP  lambdaexp_2dcalls_21_6fe7acf4( i2422, x2423 )
        TSCP  i2422, x2423;
{
        PUSHSTACKTRACE( t2727 );
        POPSTACKTRACE( plist_put( i2422, c2419, x2423 ) );
}

DEFTSCP( lambdaexp_il_2dcalls_76e98af_v );
DEFCSTRING( t2729, "LAMBDA-TAIL-CALLS" );

TSCP  lambdaexp_il_2dcalls_76e98af( i2429 )
        TSCP  i2429;
{
        PUSHSTACKTRACE( t2729 );
        POPSTACKTRACE( plist_get( i2429, c2432 ) );
}

DEFTSCP( lambdaexp_2dcalls_21_a9a74c24_v );
DEFCSTRING( t2731, "SET-LAMBDA-TAIL-CALLS!" );

TSCP  lambdaexp_2dcalls_21_a9a74c24( i2435, x2436 )
        TSCP  i2435, x2436;
{
        PUSHSTACKTRACE( t2731 );
        POPSTACKTRACE( plist_put( i2435, c2432, x2436 ) );
}

DEFTSCP( lambdaexp_al_2dcalls_4b5d0e39_v );
DEFCSTRING( t2733, "LAMBDA-REAL-CALLS" );

TSCP  lambdaexp_al_2dcalls_4b5d0e39( i2442 )
        TSCP  i2442;
{
        PUSHSTACKTRACE( t2733 );
        POPSTACKTRACE( plist_get( i2442, c2445 ) );
}

DEFTSCP( lambdaexp_2dcalls_21_c8f2c4a0_v );
DEFCSTRING( t2735, "SET-LAMBDA-REAL-CALLS!" );

TSCP  lambdaexp_2dcalls_21_c8f2c4a0( i2448, x2449 )
        TSCP  i2448, x2449;
{
        PUSHSTACKTRACE( t2735 );
        POPSTACKTRACE( plist_put( i2448, c2445, x2449 ) );
}

DEFTSCP( lambdaexp_de_2dlabel_a0c18656_v );
DEFCSTRING( t2737, "LAMBDA-CODE-LABEL" );

TSCP  lambdaexp_de_2dlabel_a0c18656( i2455 )
        TSCP  i2455;
{
        PUSHSTACKTRACE( t2737 );
        POPSTACKTRACE( plist_get( i2455, c2458 ) );
}

DEFTSCP( lambdaexp_2dlabel_21_819a857a_v );
DEFCSTRING( t2739, "SET-LAMBDA-CODE-LABEL!" );

TSCP  lambdaexp_2dlabel_21_819a857a( i2461, x2462 )
        TSCP  i2461, x2462;
{
        PUSHSTACKTRACE( t2739 );
        POPSTACKTRACE( plist_put( i2461, c2458, x2462 ) );
}

DEFTSCP( lambdaexp_lambda_2d_24lambda_v );
DEFCSTRING( t2741, "LAMBDA-$LAMBDA" );

TSCP  lambdaexp_lambda_2d_24lambda( i2468 )
        TSCP  i2468;
{
        PUSHSTACKTRACE( t2741 );
        POPSTACKTRACE( plist_get( i2468, c2039 ) );
}

DEFTSCP( lambdaexp_4lambda_21_cedc504f_v );
DEFCSTRING( t2743, "SET-LAMBDA-$LAMBDA!" );

TSCP  lambdaexp_4lambda_21_cedc504f( i2473, e2474 )
        TSCP  i2473, e2474;
{
        PUSHSTACKTRACE( t2743 );
        POPSTACKTRACE( plist_put( i2473, c2039, e2474 ) );
}

DEFTSCP( lambdaexp_lambda_2dname_v );
DEFCSTRING( t2745, "LAMBDA-NAME" );

TSCP  lambdaexp_lambda_2dname( i2480 )
        TSCP  i2480;
{
        PUSHSTACKTRACE( t2745 );
        POPSTACKTRACE( plist_get( i2480, c2483 ) );
}

DEFTSCP( lambdaexp__2dname_21_f801d262_v );
DEFCSTRING( t2747, "SET-LAMBDA-NAME!" );

TSCP  lambdaexp__2dname_21_f801d262( i2486, x2487 )
        TSCP  i2486, x2487;
{
        PUSHSTACKTRACE( t2747 );
        POPSTACKTRACE( plist_put( i2486, c2483, x2487 ) );
}

DEFTSCP( lambdaexp_bda_2dinfo_dbd81905_v );
DEFCSTRING( t2749, "PRINT-LAMBDA-INFO" );
EXTERNTSCPP( scrt5_current_2doutput_2dport, XAL0(  ) );
EXTERNTSCP( scrt5_current_2doutput_2dport_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  lambdaexp_bda_2dinfo_dbd81905( i2493, o2494 )
        TSCP  i2493, o2494;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t2749 );
        o2494 = CONS( o2494, EMPTYLIST );
        if  ( FALSE( PAIR_CAR( o2494 ) ) )  goto L2751;
        X2 = PAIR_CAR( o2494 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2754;
        scrt1__24__car_2derror( X2 );
L2754:
        X1 = PAIR_CAR( X2 );
        SETGEN( PAIR_CAR( o2494 ), X1 );
        goto L2752;
L2751:
        X1 = scrt5_current_2doutput_2dport(  );
        SETGEN( PAIR_CAR( o2494 ), X1 );
L2752:
        X4 = plist_get( i2493, c2483 );
        if  ( FALSE( X4 ) )  goto L2757;
        X3 = X4;
        goto L2758;
L2757:
        X3 = i2493;
L2758:
        X2 = SYMBOL_VALUE( id_2dprintname_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = CONS( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                PROCEDURE_CLOSURE( X2 ) ), 
                   EMPTYLIST );
        X1 = CONS( i2493, X1 );
        X1 = CONS( plist_get( i2493, c2483 ), X1 );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2499, X1 ) );
        X1 = CONS( plist_get( i2493, c2097 ), EMPTYLIST );
        X1 = CONS( plist_get( i2493, c2086 ), X1 );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2509, X1 ) );
        X1 = CONS( plist_get( i2493, c2076 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2514, X1 ) );
        X1 = CONS( plist_get( i2493, c2329 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2517, X1 ) );
        X1 = CONS( plist_get( i2493, c2368 ), EMPTYLIST );
        X1 = CONS( plist_get( i2493, c2355 ), X1 );
        X1 = CONS( plist_get( i2493, c2342 ), X1 );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2520, X1 ) );
        X1 = CONS( plist_get( i2493, c2025 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2527, X1 ) );
        X1 = CONS( plist_get( i2493, c2393 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2530, X1 ) );
        X1 = CONS( plist_get( i2493, c2406 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2533, X1 ) );
        X1 = CONS( plist_get( i2493, c2419 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2536, X1 ) );
        X1 = CONS( plist_get( i2493, c2432 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2539, X1 ) );
        X1 = CONS( plist_get( i2493, c2445 ), EMPTYLIST );
        scrt6_format( PAIR_CAR( o2494 ), 
                      CONS( c2542, X1 ) );
        X1 = CONS( plist_get( i2493, c2458 ), EMPTYLIST );
        POPSTACKTRACE( scrt6_format( PAIR_CAR( o2494 ), 
                                     CONS( c2545, X1 ) ) );
}

void scrt6__init();
void scrt5__init();
void scdebug__init();
void scrt4__init();
void plist__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt6__init();
        scrt5__init();
        scdebug__init();
        scrt4__init();
        plist__init();
        scrt1__init();
        MAXDISPLAY( 0 );
}

void  lambdaexp__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(lambdaexp SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2566, 
                       ADR( lambdaexp_lambda_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_lambda_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2579, 
                       ADR( lambdaexp_ars_2dbind_5a7c2cf0_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lambdaexp_ars_2dbind_5a7c2cf0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2600, 
                       ADR( lambdaexp_lambda_2ddefines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2ddefines, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2644, 
                       ADR( lambdaexp__24lambda_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp__24lambda_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2649, 
                       ADR( lambdaexp__24lambda_2did_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp__24lambda_2did, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2663, 
                       ADR( lambdaexp__24lambda_2dbody_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp__24lambda_2dbody, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2677, 
                       ADR( lambdaexp__2dbody_21_b7b60c74_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp__2dbody_21_b7b60c74, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2685, 
                       ADR( lambdaexp_lambda_2dreqvars_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dreqvars, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2687, 
                       ADR( lambdaexp_reqvars_21_1ed68904_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_reqvars_21_1ed68904, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2689, 
                       ADR( lambdaexp_lambda_2doptvars_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2doptvars, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2691, 
                       ADR( lambdaexp_optvars_21_62318a06_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_optvars_21_62318a06, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2693, 
                       ADR( lambdaexp_lambda_2dlexical_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dlexical, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2695, 
                       ADR( lambdaexp_lexical_21_cb9ac4c3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_lexical_21_cb9ac4c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2697, 
                       ADR( lambdaexp_lambda_2dcalls_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dcalls, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2699, 
                       ADR( lambdaexp_2dcalls_21_2e15beaf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dcalls_21_2e15beaf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2701, 
                       ADR( lambdaexp_lambda_2dgenerate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dgenerate, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2703, 
                       ADR( lambdaexp_enerate_21_9da1f848_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_enerate_21_9da1f848, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2705, 
                       ADR( lambdaexp_lambda_2dclosed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dclosed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2707, 
                       ADR( lambdaexp_dclosed_21_ec5c02cd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_dclosed_21_ec5c02cd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2709, 
                       ADR( lambdaexp_y_2dclosep_2ee78957_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_y_2dclosep_2ee78957, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2711, 
                       ADR( lambdaexp_dclosep_21_85634459_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_dclosep_21_85634459, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2713, 
                       ADR( lambdaexp_lambda_2dnestin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dnestin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2715, 
                       ADR( lambdaexp_dnestin_21_156a35d6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_dnestin_21_156a35d6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2717, 
                       ADR( lambdaexp_lambda_2dexits_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dexits, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2719, 
                       ADR( lambdaexp_2dexits_21_1a6123c5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dexits_21_1a6123c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2721, 
                       ADR( lambdaexp_ne_2dtails_e7422159_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_ne_2dtails_e7422159, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2723, 
                       ADR( lambdaexp_2dtails_21_60af0e8d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dtails_21_60af0e8d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2725, 
                       ADR( lambdaexp_tr_2dcalls_63782d98_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_tr_2dcalls_63782d98, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2727, 
                       ADR( lambdaexp_2dcalls_21_6fe7acf4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dcalls_21_6fe7acf4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2729, 
                       ADR( lambdaexp_il_2dcalls_76e98af_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_il_2dcalls_76e98af, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2731, 
                       ADR( lambdaexp_2dcalls_21_a9a74c24_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dcalls_21_a9a74c24, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2733, 
                       ADR( lambdaexp_al_2dcalls_4b5d0e39_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_al_2dcalls_4b5d0e39, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2735, 
                       ADR( lambdaexp_2dcalls_21_c8f2c4a0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dcalls_21_c8f2c4a0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2737, 
                       ADR( lambdaexp_de_2dlabel_a0c18656_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_de_2dlabel_a0c18656, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2739, 
                       ADR( lambdaexp_2dlabel_21_819a857a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_2dlabel_21_819a857a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2741, 
                       ADR( lambdaexp_lambda_2d_24lambda_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2d_24lambda, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2743, 
                       ADR( lambdaexp_4lambda_21_cedc504f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp_4lambda_21_cedc504f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2745, 
                       ADR( lambdaexp_lambda_2dname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lambdaexp_lambda_2dname, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2747, 
                       ADR( lambdaexp__2dname_21_f801d262_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdaexp__2dname_21_f801d262, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t2749, 
                       ADR( lambdaexp_bda_2dinfo_dbd81905_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      lambdaexp_bda_2dinfo_dbd81905, 
                                      EMPTYLIST ) );
        return;
}
