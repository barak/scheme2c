
/* SCHEME->C */

#include <objects.h>

void readtext__init();
DEFSTATICTSCP( sc_2dsplice_v );
DEFSTATICTSCP( log_3f_v );
DEFSTATICTSCP( pretty_2dprint_2d_24tree_v );
DEFSTATICTSCP( sc_2dicode_v );
DEFSTATICTSCP( module_2dname_v );
DEFSTATICTSCP( sc_2dsource_2dname_v );
DEFSTATICTSCP( report_2dwarning_v );
DEFSTATICTSCP( sc_2dinput_v );
DEFSTATICTSCP( islist_v );
DEFSTATICTSCP( expand_2derror_v );
DEFSTATICTSCP( set_2dlambda_2dgenerate_21_v );
DEFSTATICTSCP( set_2dlambda_2dname_21_v );
DEFSTATICTSCP( _24lambda_2did_v );
DEFSTATICTSCP( exp_2dform_v );
DEFSTATICTSCP( hex28_v );
DEFSTATICTSCP( with_2dmodules_v );
DEFSTATICTSCP( set_2dlambda_2dreqvars_21_v );
DEFSTATICTSCP( set_2dlambda_2doptvars_21_v );
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( sc_2dinclude_2ddirs_v );
DEFSTATICTSCP( module_2dname_2dupcase_v );
DEFSTATICTSCP( main_2dprogram_2dname_v );
DEFSTATICTSCP( top_2dlevel_2dsymbols_v );
DEFSTATICTSCP( heap_2dsize_v );
DEFSTATICTSCP( sc_2dinterpreter_v );
DEFCSTRING( t3311, "Illegal or duplicate MODULE clause" );
DEFSTATICTSCP( c3016 );
DEFSTATICTSCP( c3014 );
DEFSTATICTSCP( c2926 );
DEFSTATICTSCP( c2893 );
DEFCSTRING( t3312, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2833 );
DEFSTATICTSCP( c2832 );
DEFCSTRING( t3313, "MODULE name is already defined as:" );
DEFSTATICTSCP( c2816 );
DEFCSTRING( t3314, "Can't open INCLUDE file:" );
DEFSTATICTSCP( c2736 );
DEFSTATICTSCP( c2682 );
DEFSTATICTSCP( t3315 );
DEFSTATICTSCP( t3316 );
DEFSTATICTSCP( t3317 );
DEFSTATICTSCP( t3318 );
DEFSTATICTSCP( t3319 );
DEFSTATICTSCP( t3320 );
DEFSTATICTSCP( t3321 );
DEFSTATICTSCP( t3322 );
DEFSTATICTSCP( t3323 );
DEFSTATICTSCP( t3324 );
DEFSTATICTSCP( t3325 );
DEFSTATICTSCP( t3326 );
DEFSTATICTSCP( c2669 );
DEFSTATICTSCP( c2614 );
DEFCSTRING( t3327, "_v" );
DEFSTATICTSCP( c2520 );
DEFSTATICTSCP( c2518 );
DEFSTATICTSCP( c2502 );
DEFSTATICTSCP( c2497 );
DEFSTATICTSCP( c2496 );
DEFSTATICTSCP( c2495 );
DEFCSTRING( t3328, "_" );
DEFSTATICTSCP( c2494 );
DEFSTATICTSCP( c2394 );
DEFCSTRING( t3329, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2328 );
DEFSTATICTSCP( c2327 );
DEFSTATICTSCP( c2292 );
DEFSTATICTSCP( c2232 );
DEFSTATICTSCP( c2150 );
DEFSTATICTSCP( c2139 );
DEFCSTRING( t3330, "Module name defaults to:" );
DEFSTATICTSCP( c2136 );
DEFCSTRING( t3331, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2133 );
DEFSTATICTSCP( c2132 );
DEFSTATICTSCP( c2110 );
DEFSTATICTSCP( c2077 );
DEFSTATICTSCP( c2073 );
DEFSTATICTSCP( c2069 );
DEFSTATICTSCP( c2065 );
DEFSTATICTSCP( c2061 );
DEFSTATICTSCP( c2057 );
DEFSTATICTSCP( c2053 );
DEFSTATICTSCP( c2035 );

static void  init_constants()
{
        sc_2dsplice_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-SPLICE" ) );
        CONSTANTEXP( ADR( sc_2dsplice_v ) );
        log_3f_v = STRINGTOSYMBOL( CSTRING_TSCP( "LOG?" ) );
        CONSTANTEXP( ADR( log_3f_v ) );
        pretty_2dprint_2d_24tree_v = STRINGTOSYMBOL( CSTRING_TSCP( "PRETTY-P\
RINT-$TREE" ) );
        CONSTANTEXP( ADR( pretty_2dprint_2d_24tree_v ) );
        sc_2dicode_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ICODE" ) );
        CONSTANTEXP( ADR( sc_2dicode_v ) );
        module_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAME" ) );
        CONSTANTEXP( ADR( module_2dname_v ) );
        sc_2dsource_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-SOURCE-NAME\
" ) );
        CONSTANTEXP( ADR( sc_2dsource_2dname_v ) );
        report_2dwarning_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-WARNING" ) );
        CONSTANTEXP( ADR( report_2dwarning_v ) );
        sc_2dinput_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INPUT" ) );
        CONSTANTEXP( ADR( sc_2dinput_v ) );
        islist_v = STRINGTOSYMBOL( CSTRING_TSCP( "ISLIST" ) );
        CONSTANTEXP( ADR( islist_v ) );
        expand_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND-ERROR" ) );
        CONSTANTEXP( ADR( expand_2derror_v ) );
        set_2dlambda_2dgenerate_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LA\
MBDA-GENERATE!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2dgenerate_21_v ) );
        set_2dlambda_2dname_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LAMBDA\
-NAME!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2dname_21_v ) );
        _24lambda_2did_v = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA-ID" ) );
        CONSTANTEXP( ADR( _24lambda_2did_v ) );
        exp_2dform_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXP-FORM" ) );
        CONSTANTEXP( ADR( exp_2dform_v ) );
        hex28_v = STRINGTOSYMBOL( CSTRING_TSCP( "HEX28" ) );
        CONSTANTEXP( ADR( hex28_v ) );
        with_2dmodules_v = STRINGTOSYMBOL( CSTRING_TSCP( "WITH-MODULES" ) );
        CONSTANTEXP( ADR( with_2dmodules_v ) );
        set_2dlambda_2dreqvars_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LAM\
BDA-REQVARS!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2dreqvars_21_v ) );
        set_2dlambda_2doptvars_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LAM\
BDA-OPTVARS!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2doptvars_21_v ) );
        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        sc_2dinclude_2ddirs_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INCLUDE-DI\
RS" ) );
        CONSTANTEXP( ADR( sc_2dinclude_2ddirs_v ) );
        module_2dname_2dupcase_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAM\
E-UPCASE" ) );
        CONSTANTEXP( ADR( module_2dname_2dupcase_v ) );
        main_2dprogram_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MAIN-PROGRA\
M-NAME" ) );
        CONSTANTEXP( ADR( main_2dprogram_2dname_v ) );
        top_2dlevel_2dsymbols_v = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL-S\
YMBOLS" ) );
        CONSTANTEXP( ADR( top_2dlevel_2dsymbols_v ) );
        heap_2dsize_v = STRINGTOSYMBOL( CSTRING_TSCP( "HEAP-SIZE" ) );
        CONSTANTEXP( ADR( heap_2dsize_v ) );
        sc_2dinterpreter_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INTERPRETER" ) );
        CONSTANTEXP( ADR( sc_2dinterpreter_v ) );
        c3016 = CSTRING_TSCP( t3311 );
        CONSTANTEXP( ADR( c3016 ) );
        c3014 = STRINGTOSYMBOL( CSTRING_TSCP( "WITH" ) );
        CONSTANTEXP( ADR( c3014 ) );
        c2926 = STRINGTOSYMBOL( CSTRING_TSCP( "HEAP" ) );
        CONSTANTEXP( ADR( c2926 ) );
        c2893 = STRINGTOSYMBOL( CSTRING_TSCP( "MAIN" ) );
        CONSTANTEXP( ADR( c2893 ) );
        c2833 = CSTRING_TSCP( t3312 );
        CONSTANTEXP( ADR( c2833 ) );
        c2832 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2832 ) );
        c2816 = CSTRING_TSCP( t3313 );
        CONSTANTEXP( ADR( c2816 ) );
        c2736 = CSTRING_TSCP( t3314 );
        CONSTANTEXP( ADR( c2736 ) );
        c2682 = EMPTYLIST;
        t3315 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP" ) );
        c2682 = CONS( t3315, c2682 );
        t3316 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        c2682 = CONS( t3316, c2682 );
        t3317 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        c2682 = CONS( t3317, c2682 );
        t3318 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        c2682 = CONS( t3318, c2682 );
        t3319 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        c2682 = CONS( t3319, c2682 );
        t3320 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        c2682 = CONS( t3320, c2682 );
        t3321 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        c2682 = CONS( t3321, c2682 );
        t3322 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        c2682 = CONS( t3322, c2682 );
        t3323 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c2682 = CONS( t3323, c2682 );
        t3324 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        c2682 = CONS( t3324, c2682 );
        t3325 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        c2682 = CONS( t3325, c2682 );
        t3326 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        c2682 = CONS( t3326, c2682 );
        CONSTANTEXP( ADR( c2682 ) );
        c2669 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2669 ) );
        c2614 = STRINGTOSYMBOL( CSTRING_TSCP( "VOID" ) );
        CONSTANTEXP( ADR( c2614 ) );
        c2520 = CSTRING_TSCP( t3327 );
        CONSTANTEXP( ADR( c2520 ) );
        c2518 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2518 ) );
        c2502 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE" ) );
        CONSTANTEXP( ADR( c2502 ) );
        c2497 = STRINGTOSYMBOL( CSTRING_TSCP( "CNAME" ) );
        CONSTANTEXP( ADR( c2497 ) );
        c2496 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2496 ) );
        c2495 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2495 ) );
        c2494 = CSTRING_TSCP( t3328 );
        CONSTANTEXP( ADR( c2494 ) );
        c2394 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2394 ) );
        c2328 = CSTRING_TSCP( t3329 );
        CONSTANTEXP( ADR( c2328 ) );
        c2327 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2327 ) );
        c2292 = STRINGTOSYMBOL( CSTRING_TSCP( "*SC-APPLICATION-EXPANDER*" ) );
        CONSTANTEXP( ADR( c2292 ) );
        c2232 = STRINGTOSYMBOL( CSTRING_TSCP( "SOURCE" ) );
        CONSTANTEXP( ADR( c2232 ) );
        c2150 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2150 ) );
        c2139 = STRINGTOSYMBOL( CSTRING_TSCP( "COMPILE" ) );
        CONSTANTEXP( ADR( c2139 ) );
        c2136 = CSTRING_TSCP( t3330 );
        CONSTANTEXP( ADR( c2136 ) );
        c2133 = CSTRING_TSCP( t3331 );
        CONSTANTEXP( ADR( c2133 ) );
        c2132 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2132 ) );
        c2110 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2110 ) );
        c2077 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL-WHEN" ) );
        CONSTANTEXP( ADR( c2077 ) );
        c2073 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-CONSTANT" ) );
        CONSTANTEXP( ADR( c2073 ) );
        c2069 = STRINGTOSYMBOL( CSTRING_TSCP( "INCLUDE" ) );
        CONSTANTEXP( ADR( c2069 ) );
        c2065 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2065 ) );
        c2061 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MACRO" ) );
        CONSTANTEXP( ADR( c2061 ) );
        c2057 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-C-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2057 ) );
        c2053 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2053 ) );
        c2035 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        CONSTANTEXP( ADR( c2035 ) );
}

DEFTSCP( readtext_read_2dtext_v );
DEFCSTRING( t3332, "READ-TEXT" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( readtext_sc_2dexpand, XAL1( TSCP ) );
EXTERNTSCP( readtext_sc_2dexpand_v );
EXTERNTSCPP( readtext_sc_2dinput_3d56933a, XAL0(  ) );
EXTERNTSCP( readtext_sc_2dinput_3d56933a_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( readtext_2dexternal_66fe3106, XAL1( TSCP ) );
EXTERNTSCP( readtext_2dexternal_66fe3106_v );
EXTERNTSCPP( readtext_2dexternal_7d8f1d02, XAL1( TSCP ) );
EXTERNTSCP( readtext_2dexternal_7d8f1d02_v );
EXTERNTSCPP( readtext_do_2dmodule, XAL1( TSCP ) );
EXTERNTSCP( readtext_do_2dmodule_v );
EXTERNTSCPP( readtext_do_2dinclude, XAL1( TSCP ) );
EXTERNTSCP( readtext_do_2dinclude_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( sceval_eval, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_eval_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_cadar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadar_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_cddar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cddar_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  readtext_read_2dtext(  )
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3332 );
L3333:
        X1 = EMPTYLIST;
        X1 = CONS( X1, EMPTYLIST );
        if  ( FALSE( SYMBOL_VALUE( sc_2dsplice_v ) ) )  goto L3335;
        X3 = SYMBOL_VALUE( sc_2dsplice_v );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3339;
        scrt1__24__car_2derror( X3 );
L3339:
        X2 = PAIR_CAR( X3 );
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = SYMBOL_VALUE( sc_2dsplice_v );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3342;
        scrt1__24__cdr_2derror( X2 );
L3342:
        SETGENTL( SYMBOL_VALUE( sc_2dsplice_v ), 
                  PAIR_CDR( X2 ) );
        goto L3345;
L3335:
        X3 = readtext_sc_2dinput_3d56933a(  );
        X2 = readtext_sc_2dexpand( X3 );
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = SYMBOL_VALUE( log_3f_v );
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( c2035, 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L3345;
        X3 = SYMBOL_VALUE( sc_2dicode_v );
        X2 = SYMBOL_VALUE( pretty_2dprint_2d_24tree_v );
        X2 = UNKNOWNCALL( X2, 2 );
        VIA( PROCEDURE_CODE( X2 ) )( PAIR_CAR( X1 ), 
                                     X3, PROCEDURE_CLOSURE( X2 ) );
        scrt6_newline( CONS( SYMBOL_VALUE( sc_2dicode_v ), 
                             EMPTYLIST ) );
L3345:
        if  ( NEQ( TSCPTAG( PAIR_CAR( X1 ) ), PAIRTAG ) )  goto L3348;
        X3 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3351;
        scrt1__24__car_2derror( X3 );
L3351:
        X2 = PAIR_CAR( X3 );
        goto L3349;
L3348:
        X2 = FALSEVALUE;
L3349:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2053 ) ) )  goto L3354;
        readtext_2dexternal_66fe3106( PAIR_CAR( X1 ) );
        GOBACK( L3333 );
L3354:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2057 ) ) )  goto L3357;
        readtext_2dexternal_7d8f1d02( PAIR_CAR( X1 ) );
        GOBACK( L3333 );
L3357:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( c2061 ) ) )  GOBACK( L3333 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L3362;
        readtext_do_2dmodule( PAIR_CAR( X1 ) );
        GOBACK( L3333 );
L3362:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2069 ) ) )  goto L3365;
        readtext_do_2dinclude( PAIR_CAR( X1 ) );
        GOBACK( L3333 );
L3365:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( c2073 ) ) )  GOBACK( L3333 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2077 ) ) )  goto L3370;
        X4 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3377;
        scrt1__24__cdr_2derror( X4 );
L3377:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3380;
        scrt1__24__car_2derror( X5 );
L3380:
        X3 = PAIR_CAR( X5 );
        if  ( FALSE( scrt1_memq( c2139, X3 ) ) )  GOBACK( L3333 );
        X5 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3384;
        scrt1__24__cdr_2derror( X5 );
L3384:
        X6 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3387;
        scrt1__24__cdr_2derror( X6 );
L3387:
        X4 = PAIR_CDR( X6 );
        X3 = sc_cons( c2150, X4 );
        sceval_eval( X3, EMPTYLIST );
        GOBACK( L3333 );
L3370:
        X3 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( X1 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X3 ) )  goto L3414;
        X5 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3397;
        scrt1__24__car_2derror( X5 );
L3397:
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3414;
        X5 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3404;
        scrt1__24__car_2derror( X5 );
L3404:
        X6 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3407;
        scrt1__24__car_2derror( X6 );
L3407:
        X4 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2110 ) ) )  goto L3414;
        X4 = scrt1_cadar( PAIR_CAR( X1 ) );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3414;
        X4 = scrt1_cddar( PAIR_CAR( X1 ) );
        X5 = SYMBOL_VALUE( sc_2dsplice_v );
        SETGENTL( SYMBOL_VALUE( sc_2dsplice_v ), 
                  scrt1_append_2dtwo( X4, X5 ) );
        GOBACK( L3333 );
L3414:
        X2 = SYMBOL_VALUE( module_2dname_v );
        if  ( FALSE( scrt1_equal_3f( X2, sc_emptystring ) ) )  goto L3416;
        X2 = SYMBOL_VALUE( sc_2dsource_2dname_v );
        X5 = SYMBOL_VALUE( sc_2dsource_2dname_v );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), STRINGTAG ) ) )  goto L3420;
        scdebug_error( c2132, 
                       c2133, CONS( X5, EMPTYLIST ) );
L3420:
        X4 = C_FIXED( STRING_LENGTH( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L3423;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( _TSCP( 12 ) ) ) );
        goto L3424;
L3423:
        X3 = scrt2__2d_2dtwo( X4, _TSCP( 12 ) );
L3424:
        SETGENTL( SYMBOL_VALUE( module_2dname_v ), 
                  scrt3_substring( X2, _TSCP( 0 ), X3 ) );
        X3 = SYMBOL_VALUE( module_2dname_v );
        X2 = SYMBOL_VALUE( report_2dwarning_v );
        X2 = UNKNOWNCALL( X2, 2 );
        VIA( PROCEDURE_CODE( X2 ) )( c2136, 
                                     X3, PROCEDURE_CLOSURE( X2 ) );
L3416:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( readtext_sc_2dinput_3d56933a_v );
DEFCSTRING( t3425, "READ-FROM-SC-INPUT" );
EXTERNTSCPP( scrt6_read, XAL1( TSCP ) );
EXTERNTSCP( scrt6_read_v );
EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );
EXTERNTSCPP( scrt5_close_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2dport_v );

TSCP  readtext_sc_2dinput_3d56933a(  )
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3425 );
        X2 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3429;
        scrt1__24__car_2derror( X2 );
L3429:
        X1 = scrt6_read( CONS( PAIR_CAR( X2 ), EMPTYLIST ) );
L3431:
        X3 = scrt6_eof_2dobject_3f( X1 );
        if  ( FALSE( X3 ) )  goto L3433;
        X5 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3436;
        scrt1__24__cdr_2derror( X5 );
L3436:
        X4 = PAIR_CDR( X5 );
        X2 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        goto L3434;
L3433:
        X2 = X3;
L3434:
        if  ( TRUE( X2 ) )  goto L3442;
        if  ( FALSE( scrt6_eof_2dobject_3f( X1 ) ) )  goto L3442;
        X4 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3447;
        scrt1__24__car_2derror( X4 );
L3447:
        X3 = PAIR_CAR( X4 );
        scrt5_close_2dport( X3 );
        X3 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3451;
        scrt1__24__cdr_2derror( X3 );
L3451:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3454;
        scrt1__24__car_2derror( X4 );
L3454:
        SETGENTL( SYMBOL_VALUE( sc_2dsplice_v ), 
                  PAIR_CAR( X4 ) );
        X3 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3458;
        scrt1__24__cdr_2derror( X3 );
L3458:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3461;
        scrt1__24__cdr_2derror( X4 );
L3461:
        SETGENTL( SYMBOL_VALUE( sc_2dinput_v ), 
                  PAIR_CDR( X4 ) );
        X3 = SYMBOL_VALUE( sc_2dinput_v );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3464;
        scrt1__24__car_2derror( X3 );
L3464:
        X1 = scrt6_read( CONS( PAIR_CAR( X3 ), EMPTYLIST ) );
        GOBACK( L3431 );
L3442:
        X2 = SYMBOL_VALUE( log_3f_v );
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( c2232, 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L3467;
        X3 = SYMBOL_VALUE( sc_2dicode_v );
        X2 = SYMBOL_VALUE( pretty_2dprint_2d_24tree_v );
        X2 = UNKNOWNCALL( X2, 2 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, 
                                     X3, PROCEDURE_CLOSURE( X2 ) );
        scrt6_newline( CONS( SYMBOL_VALUE( sc_2dicode_v ), 
                             EMPTYLIST ) );
L3467:
        POPSTACKTRACE( X1 );
}

DEFTSCP( readtext_sc_2dexpand_v );
DEFCSTRING( t3470, "SC-EXPAND" );
EXTERNTSCPP( readtext_2dexpander_c83ee5f9, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( readtext_2dexpander_c83ee5f9_v );

TSCP  readtext_sc_2dexpand( x2239 )
        TSCP  x2239;
{
        PUSHSTACKTRACE( t3470 );
        POPSTACKTRACE( readtext_2dexpander_c83ee5f9( x2239, 
                                                     readtext_2dexpander_c83ee5f9_v ) );
}

DEFTSCP( readtext_2dexpander_c83ee5f9_v );
DEFCSTRING( t3472, "SC-INITIAL-EXPANDER" );
EXTERNTSCPP( readtext_xpander_2a_b26e591c, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( readtext_xpander_2a_b26e591c_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( readtext_xpander_2a_afbc6f79, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( readtext_xpander_2a_afbc6f79_v );

TSCP  readtext_l2265( x2266, e2267, c3485 )
        TSCP  x2266, e2267, c3485;
{
        PUSHSTACKTRACE( "readtext_l2265 [inside SC-INITIAL-EXPANDER]" );
        POPSTACKTRACE( x2266 );
}

TSCP  readtext_2dexpander_c83ee5f9( x2242, e2243 )
        TSCP  x2242, e2243;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3472 );
        if  ( NOT( AND( EQ( TSCPTAG( x2242 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2242 ), SYMBOLTAG ) ) )
            )  goto L3474;
        X1 = readtext_xpander_2a_b26e591c_v;
        goto L3477;
L3474:
        if  ( NEQ( TSCPTAG( x2242 ), PAIRTAG ) )  goto L3476;
        X2 = PAIR_CAR( x2242 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3478;
        X3 = PAIR_CAR( x2242 );
        X2 = plist_get( X3, c2035 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3483;
        X1 = X2;
        goto L3477;
L3483:
        X1 = readtext_xpander_2a_afbc6f79_v;
        goto L3477;
L3478:
        X1 = readtext_xpander_2a_afbc6f79_v;
        goto L3477;
L3476:
        X1 = MAKEPROCEDURE( 2, 0, readtext_l2265, EMPTYLIST );
L3477:
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( x2242, 
                                                    e2243, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
}

DEFTSCP( readtext_sc_2dexpand_2donce_v );
DEFCSTRING( t3488, "SC-EXPAND-ONCE" );

TSCP  readtext_l2272( x2273, e2274, c3490 )
        TSCP  x2273, e2274, c3490;
{
        PUSHSTACKTRACE( "readtext_l2272 [inside SC-EXPAND-ONCE]" );
        POPSTACKTRACE( x2273 );
}

TSCP  readtext_sc_2dexpand_2donce( x2271 )
        TSCP  x2271;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3488 );
        X1 = MAKEPROCEDURE( 2, 0, readtext_l2272, EMPTYLIST );
        POPSTACKTRACE( readtext_2dexpander_c83ee5f9( x2271, X1 ) );
}

DEFTSCP( readtext_xpander_2a_b26e591c_v );
DEFCSTRING( t3492, "*SC-IDENTIFIER-EXPANDER*" );

TSCP  readtext_xpander_2a_b26e591c( x2276, e2277 )
        TSCP  x2276, e2277;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3492 );
        X1 = plist_get( x2276, c2035 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3495;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3495:
        POPSTACKTRACE( x2276 );
}

DEFTSCP( readtext_xpander_2a_afbc6f79_v );
DEFCSTRING( t3498, "*SC-APPLICATION-EXPANDER*" );

TSCP  readtext_xpander_2a_afbc6f79( x2287, e2288 )
        TSCP  x2287, e2288;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3498 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( x2287, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3500;
        X1 = x2287;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3503:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3504;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3507;
        scrt1__24__car_2derror( X1 );
L3507:
        X7 = PAIR_CAR( X1 );
        X6 = e2288;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          e2288, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3510;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3503 );
L3510:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3515;
        scdebug_error( c2327, 
                       c2328, CONS( X3, EMPTYLIST ) );
L3515:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3503 );
L3504:
        POPSTACKTRACE( X2 );
L3500:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2292, 
                                                    x2287, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( readtext_2dexpander_924034c5_v );
DEFCSTRING( t3517, "INSTALL-SC-EXPANDER" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  readtext_2dexpander_924034c5( k2341, f2342 )
        TSCP  k2341, f2342;
{
        PUSHSTACKTRACE( t3517 );
        POPSTACKTRACE( plist_put( k2341, c2035, f2342 ) );
}

DEFTSCP( readtext_2dexternal_66fe3106_v );
DEFCSTRING( t3519, "DO-DEFINE-EXTERNAL" );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( expform_lchexname, XAL1( TSCP ) );
EXTERNTSCP( expform_lchexname_v );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCP( screp_top_2dlevel_v );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );
EXTERNTSCPP( scrt1_cdadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdadr_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );

TSCP  readtext_2dexternal_66fe3106( e2344 )
        TSCP  e2344;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3519 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2344, 
                                          _TSCP( 12 ), 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3546;
        if  ( EQ( TSCPTAG( e2344 ), PAIRTAG ) )  goto L3529;
        scrt1__24__cdr_2derror( e2344 );
L3529:
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3532;
        scrt1__24__car_2derror( X3 );
L3532:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3546;
        X2 = scrt1_caddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3546;
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3538;
        scrt1__24__car_2derror( X3 );
L3538:
        X2 = PAIR_CAR( X3 );
        X3 = expform_lchexname( X2 );
        X5 = scrt1_caddr( e2344 );
        X4 = expform_lchexname( X5 );
        X5 = scrt1_caddr( e2344 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2394 ) ) )  goto L3543;
        X6 = CONS( c2520, EMPTYLIST );
        X7 = SYMBOL_VALUE( hex28_v );
        X7 = UNKNOWNCALL( X7, 2 );
        X5 = CONS( scrt3_string_2dappend( CONS( VIA( PROCEDURE_CODE( X7 ) )( sc_emptystring, 
                                                                             X3, 
                                                                             PROCEDURE_CLOSURE( X7 ) ), 
                                                X6 ) ), 
                   EMPTYLIST );
        X5 = CONS( c2518, X5 );
        X5 = CONS( c2394, X5 );
        X5 = CONS( c2065, X5 );
        X5 = CONS( c2394, X5 );
        POPSTACKTRACE( expform_newv( X2, CONS( c2495, X5 ) ) );
L3543:
        X6 = CONS( c2520, EMPTYLIST );
        X7 = SYMBOL_VALUE( hex28_v );
        X7 = UNKNOWNCALL( X7, 2 );
        X5 = CONS( scrt3_string_2dappend( CONS( VIA( PROCEDURE_CODE( X7 ) )( X4, 
                                                                             X3, 
                                                                             PROCEDURE_CLOSURE( X7 ) ), 
                                                X6 ) ), 
                   EMPTYLIST );
        X5 = CONS( c2518, X5 );
        X5 = CONS( X4, X5 );
        X5 = CONS( c2065, X5 );
        X5 = CONS( c2496, X5 );
        POPSTACKTRACE( expform_newv( X2, CONS( c2495, X5 ) ) );
L3546:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2344, 
                                          _TSCP( 16 ), 
                                          _TSCP( 16 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3577;
        if  ( EQ( TSCPTAG( e2344 ), PAIRTAG ) )  goto L3555;
        scrt1__24__cdr_2derror( e2344 );
L3555:
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3558;
        scrt1__24__car_2derror( X3 );
L3558:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3577;
        X2 = scrt1_caddr( e2344 );
        if  ( NEQ( _S2CUINT( c2394 ), _S2CUINT( X2 ) ) )  goto L3577;
        X2 = scrt1_cadddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3577;
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3567;
        scrt1__24__car_2derror( X3 );
L3567:
        X2 = PAIR_CAR( X3 );
        X3 = expform_lchexname( X2 );
        X5 = scrt1_cadddr( e2344 );
        X4 = expform_lchexname( X5 );
        X6 = CONS( c2520, EMPTYLIST );
        X7 = SYMBOL_VALUE( hex28_v );
        X7 = UNKNOWNCALL( X7, 2 );
        X5 = CONS( scrt3_string_2dappend( CONS( VIA( PROCEDURE_CODE( X7 ) )( sc_emptystring, 
                                                                             X3, 
                                                                             PROCEDURE_CLOSURE( X7 ) ), 
                                                X6 ) ), 
                   EMPTYLIST );
        X5 = CONS( c2518, X5 );
        X5 = CONS( screp_top_2dlevel_v, X5 );
        X5 = CONS( c2065, X5 );
        X5 = CONS( c2394, X5 );
        expform_newv( X2, CONS( c2495, X5 ) );
        X5 = SYMBOL_VALUE( with_2dmodules_v );
        if  ( TRUE( scrt1_member( X4, X5 ) ) )  goto L3572;
        X5 = SYMBOL_VALUE( with_2dmodules_v );
        X7 = sc_cons( X4, EMPTYLIST );
        X6 = X7;
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( with_2dmodules_v ), 
                                 scrt1_append_2dtwo( X5, X6 ) ) );
L3572:
        POPSTACKTRACE( FALSEVALUE );
L3577:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2344, 
                                          _TSCP( 16 ), 
                                          _TSCP( 16 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3607;
        if  ( EQ( TSCPTAG( e2344 ), PAIRTAG ) )  goto L3586;
        scrt1__24__cdr_2derror( e2344 );
L3586:
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3589;
        scrt1__24__car_2derror( X3 );
L3589:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3607;
        X2 = scrt1_caddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )
            )  goto L3607;
        X2 = scrt1_cadddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )
            )  goto L3607;
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3598;
        scrt1__24__car_2derror( X3 );
L3598:
        X2 = PAIR_CAR( X3 );
        X3 = scrt1_caddr( e2344 );
        X4 = scrt1_cadddr( e2344 );
        X4 = CONS( X4, EMPTYLIST );
        if  ( TRUE( scrt1_equal_3f( X3, sc_emptystring ) ) )  goto L3603;
        X6 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        X6 = CONS( c2494, X6 );
        X5 = scrt3_string_2dappend( CONS( X3, X6 ) );
        SETGEN( PAIR_CAR( X4 ), X5 );
L3603:
        X5 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        X5 = CONS( c2518, X5 );
        X5 = CONS( X3, X5 );
        X5 = CONS( c2065, X5 );
        X5 = CONS( c2496, X5 );
        POPSTACKTRACE( expform_newv( X2, CONS( c2495, X5 ) ) );
L3607:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2344, 
                                          _TSCP( 12 ), 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3634;
        if  ( EQ( TSCPTAG( e2344 ), PAIRTAG ) )  goto L3616;
        scrt1__24__cdr_2derror( e2344 );
L3616:
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3619;
        scrt1__24__car_2derror( X3 );
L3619:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3634;
        X2 = scrt1_caadr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3634;
        X2 = scrt1_caddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3634;
        X2 = scrt1_caadr( e2344 );
        X3 = scrt1_cdadr( e2344 );
        X4 = expform_lchexname( X2 );
        X6 = scrt1_caddr( e2344 );
        X5 = expform_lchexname( X6 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = scrt1_cons_2a( c2110, CONS( X3, X11 ) );
        X11 = SYMBOL_VALUE( exp_2dform_v );
        X9 = SYMBOL_VALUE( exp_2dform_v );
        X9 = UNKNOWNCALL( X9, 2 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                          X11, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X7 = SYMBOL_VALUE( _24lambda_2did_v );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X7 = EMPTYLIST;
        X7 = CONS( X7, EMPTYLIST );
        X10 = SYMBOL_VALUE( hex28_v );
        X10 = UNKNOWNCALL( X10, 2 );
        X9 = CONS( scrt3_string_2dappend( CONS( VIA( PROCEDURE_CODE( X10 ) )( X5, 
                                                                              X4, 
                                                                              PROCEDURE_CLOSURE( X10 ) ), 
                                                EMPTYLIST ) ), 
                   EMPTYLIST );
        X9 = CONS( c2497, X9 );
        X10 = CONS( c2520, EMPTYLIST );
        X11 = SYMBOL_VALUE( hex28_v );
        X11 = UNKNOWNCALL( X11, 2 );
        X9 = CONS( scrt3_string_2dappend( CONS( VIA( PROCEDURE_CODE( X11 ) )( X5, 
                                                                              X4, 
                                                                              PROCEDURE_CLOSURE( X11 ) ), 
                                                X10 ) ), 
                   X9 );
        X9 = CONS( c2518, X9 );
        X9 = CONS( X5, X9 );
        X9 = CONS( c2065, X9 );
        X9 = CONS( c2496, X9 );
        X8 = expform_newv( X2, CONS( c2495, X9 ) );
        SETGEN( PAIR_CAR( X7 ), X8 );
        plist_put( PAIR_CAR( X7 ), c2110, X6 );
        X8 = SYMBOL_VALUE( set_2dlambda_2dgenerate_21_v );
        X8 = UNKNOWNCALL( X8, 2 );
        VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                     c2502, 
                                     PROCEDURE_CLOSURE( X8 ) );
        X8 = SYMBOL_VALUE( set_2dlambda_2dname_21_v );
        X8 = UNKNOWNCALL( X8, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                                    PAIR_CAR( X7 ), 
                                                    PROCEDURE_CLOSURE( X8 ) ) );
L3634:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2344, 
                                          _TSCP( 16 ), 
                                          _TSCP( 16 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3663;
        if  ( EQ( TSCPTAG( e2344 ), PAIRTAG ) )  goto L3643;
        scrt1__24__cdr_2derror( e2344 );
L3643:
        X3 = PAIR_CDR( e2344 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3646;
        scrt1__24__car_2derror( X3 );
L3646:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3663;
        X2 = scrt1_caadr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3663;
        X2 = scrt1_caddr( e2344 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )
            )  goto L3663;
        X2 = scrt1_caadr( e2344 );
        X3 = scrt1_cdadr( e2344 );
        X4 = scrt1_caddr( e2344 );
        X5 = scrt1_cadddr( e2344 );
        X5 = CONS( X5, EMPTYLIST );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = scrt1_cons_2a( c2110, CONS( X3, X11 ) );
        X11 = SYMBOL_VALUE( exp_2dform_v );
        X9 = SYMBOL_VALUE( exp_2dform_v );
        X9 = UNKNOWNCALL( X9, 2 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                          X11, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X7 = SYMBOL_VALUE( _24lambda_2did_v );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X7 = EMPTYLIST;
        X7 = CONS( X7, EMPTYLIST );
        if  ( TRUE( scrt1_equal_3f( X4, sc_emptystring ) ) )  goto L3659;
        X9 = CONS( PAIR_CAR( X5 ), EMPTYLIST );
        X9 = CONS( c2494, X9 );
        X8 = scrt3_string_2dappend( CONS( X4, X9 ) );
        SETGEN( PAIR_CAR( X5 ), X8 );
L3659:
        X9 = CONS( PAIR_CAR( X5 ), EMPTYLIST );
        X9 = CONS( c2497, X9 );
        X9 = CONS( X4, X9 );
        X9 = CONS( c2065, X9 );
        X9 = CONS( c2496, X9 );
        X8 = expform_newv( X2, CONS( c2495, X9 ) );
        SETGEN( PAIR_CAR( X7 ), X8 );
        plist_put( PAIR_CAR( X7 ), c2110, X6 );
        X8 = SYMBOL_VALUE( set_2dlambda_2dgenerate_21_v );
        X8 = UNKNOWNCALL( X8, 2 );
        VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                     c2502, 
                                     PROCEDURE_CLOSURE( X8 ) );
        X8 = SYMBOL_VALUE( set_2dlambda_2dname_21_v );
        X8 = UNKNOWNCALL( X8, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                                    PAIR_CAR( X7 ), 
                                                    PROCEDURE_CLOSURE( X8 ) ) );
L3663:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2053, 
                                                    e2344, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( readtext_2dexternal_7d8f1d02_v );
DEFCSTRING( t3664, "DO-DEFINE-C-EXTERNAL" );

TSCP  readtext_c2584( x2681 )
        TSCP  x2681;
{
        PUSHSTACKTRACE( "C-TYPE? [inside DO-DEFINE-C-EXTERNAL]" );
        POPSTACKTRACE( scrt1_memq( x2681, c2682 ) );
}

EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  readtext_2dexternal_7d8f1d02( e2579 )
        TSCP  e2579;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3664 );
        X4 = SYMBOL_VALUE( islist_v );
        X4 = UNKNOWNCALL( X4, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( e2579, 
                                                  _TSCP( 16 ), 
                                                  _TSCP( 16 ), 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L3666;
        X1 = scrt1_cadddr( e2579 );
        X2 = scrt1_caddr( e2579 );
        if  ( EQ( TSCPTAG( e2579 ), PAIRTAG ) )  goto L3670;
        scrt1__24__cdr_2derror( e2579 );
L3670:
        X4 = PAIR_CDR( e2579 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3673;
        scrt1__24__car_2derror( X4 );
L3673:
        X3 = PAIR_CAR( X4 );
        X4 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X4 ) )  goto L3682;
        if  ( FALSE( readtext_c2584( X2 ) ) )  goto L3682;
        X5 = CONS( X2, EMPTYLIST );
        X5 = CONS( c2669, X5 );
        X5 = CONS( X1, X5 );
        X5 = CONS( c2518, X5 );
        X5 = CONS( sc_emptystring, X5 );
        X5 = CONS( c2065, X5 );
        X5 = CONS( c2496, X5 );
        POPSTACKTRACE( expform_newv( X3, CONS( c2495, X5 ) ) );
L3666:
        X4 = SYMBOL_VALUE( expand_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( c2057, 
                                                    e2579, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L3682:
        X4 = BOOLEAN( EQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L3701;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3691;
        scrt1__24__car_2derror( X3 );
L3691:
        X5 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )
            )  goto L3701;
        X5 = readtext_c2584( X2 );
        if  ( TRUE( X5 ) )  goto L3697;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2614 ) ) )  goto L3701;
L3697:
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2110, 
                            CONS( PAIR_CDR( X3 ), X9 ) );
        X9 = SYMBOL_VALUE( exp_2dform_v );
        X7 = SYMBOL_VALUE( exp_2dform_v );
        X7 = UNKNOWNCALL( X7, 2 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                          X9, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X5 = SYMBOL_VALUE( _24lambda_2did_v );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = PAIR_CAR( X3 );
        X7 = CONS( X2, EMPTYLIST );
        X7 = CONS( c2669, X7 );
        X7 = CONS( X1, X7 );
        X7 = CONS( c2497, X7 );
        X7 = CONS( sc_emptystring, X7 );
        X7 = CONS( c2065, X7 );
        X7 = CONS( c2496, X7 );
        X5 = expform_newv( X6, CONS( c2495, X7 ) );
        X6 = PAIR_CDR( X3 );
        X7 = EMPTYLIST;
        X8 = X6;
L3708:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3709;
        X10 = scrt1_reverse( X7 );
        X9 = SYMBOL_VALUE( set_2dlambda_2dreqvars_21_v );
        X9 = UNKNOWNCALL( X9, 2 );
        VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                     X10, 
                                     PROCEDURE_CLOSURE( X9 ) );
        goto L3727;
L3709:
        if  ( FALSE( readtext_c2584( X8 ) ) )  goto L3711;
        X10 = scrt1_reverse( X7 );
        X9 = SYMBOL_VALUE( set_2dlambda_2dreqvars_21_v );
        X9 = UNKNOWNCALL( X9, 2 );
        VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                     X10, 
                                     PROCEDURE_CLOSURE( X9 ) );
        X11 = sc_cons( X8, EMPTYLIST );
        X10 = X11;
        X9 = SYMBOL_VALUE( set_2dlambda_2doptvars_21_v );
        X9 = UNKNOWNCALL( X9, 2 );
        VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                     X10, 
                                     PROCEDURE_CLOSURE( X9 ) );
        goto L3727;
L3711:
        X9 = BOOLEAN( EQ( TSCPTAG( X8 ), PAIRTAG ) );
        if  ( FALSE( X9 ) )  goto L3726;
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3722;
        scrt1__24__car_2derror( X8 );
L3722:
        X10 = PAIR_CAR( X8 );
        if  ( FALSE( readtext_c2584( X10 ) ) )  goto L3726;
        X11 = PAIR_CAR( X8 );
        X10 = sc_cons( X11, X7 );
        X8 = PAIR_CDR( X8 );
        X7 = X10;
        GOBACK( L3708 );
L3726:
        X7 = SYMBOL_VALUE( expand_2derror_v );
        X7 = UNKNOWNCALL( X7, 2 );
        VIA( PROCEDURE_CODE( X7 ) )( c2057, 
                                     e2579, 
                                     PROCEDURE_CLOSURE( X7 ) );
L3727:
        plist_put( X5, c2110, X4 );
        X6 = SYMBOL_VALUE( set_2dlambda_2dgenerate_21_v );
        X6 = UNKNOWNCALL( X6, 2 );
        VIA( PROCEDURE_CODE( X6 ) )( X4, 
                                     c2502, 
                                     PROCEDURE_CLOSURE( X6 ) );
        X6 = SYMBOL_VALUE( set_2dlambda_2dname_21_v );
        X6 = UNKNOWNCALL( X6, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X6 ) )( X4, 
                                                    X5, 
                                                    PROCEDURE_CLOSURE( X6 ) ) );
L3701:
        X4 = SYMBOL_VALUE( expand_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( c2057, 
                                                    e2579, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
}

DEFTSCP( readtext_do_2ddefine_2dmacro_v );
DEFCSTRING( t3728, "DO-DEFINE-MACRO" );

TSCP  readtext_do_2ddefine_2dmacro( e2685 )
        TSCP  e2685;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3728 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2685, 
                                          _TSCP( 12 ), 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3746;
        if  ( EQ( TSCPTAG( e2685 ), PAIRTAG ) )  goto L3737;
        scrt1__24__cdr_2derror( e2685 );
L3737:
        X3 = PAIR_CDR( e2685 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3740;
        scrt1__24__car_2derror( X3 );
L3740:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3746;
        X3 = PAIR_CDR( e2685 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3744;
        scrt1__24__car_2derror( X3 );
L3744:
        X2 = PAIR_CAR( X3 );
        X4 = scrt1_caddr( e2685 );
        X3 = sceval_eval( X4, CONS( EMPTYLIST, EMPTYLIST ) );
        POPSTACKTRACE( plist_put( X2, c2035, X3 ) );
L3746:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2061, 
                                                    e2685, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( readtext_do_2dinclude_v );
DEFCSTRING( t3747, "DO-INCLUDE" );
EXTERNTSCPP( scrt4_catch_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt4_catch_2derror_v );
EXTERNTSCPP( scrt5_open_2dinput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dfile_v );

TSCP  readtext_l2726( c3777 )
        TSCP  c3777;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "readtext_l2726 [inside DO-INCLUDE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3777, 0 );
        X2 = scrt5_open_2dinput_2dfile( DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  readtext_do_2dinclude( e2713 )
        TSCP  e2713;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3747 );
        X3 = SYMBOL_VALUE( islist_v );
        X3 = UNKNOWNCALL( X3, 3 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( e2713, 
                                          _TSCP( 8 ), 
                                          _TSCP( 8 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        if  ( FALSE( X2 ) )  goto L3751;
        if  ( EQ( TSCPTAG( e2713 ), PAIRTAG ) )  goto L3756;
        scrt1__24__cdr_2derror( e2713 );
L3756:
        X4 = PAIR_CDR( e2713 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3759;
        scrt1__24__car_2derror( X4 );
L3759:
        X3 = PAIR_CAR( X4 );
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), STRINGTAG ) ) )
            )  goto L3753;
        X3 = PAIR_CDR( e2713 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3763;
        scrt1__24__car_2derror( X3 );
L3763:
        X1 = PAIR_CAR( X3 );
        goto L3752;
L3753:
        X1 = FALSEVALUE;
        goto L3752;
L3751:
        X1 = X2;
L3752:
        if  ( FALSE( X1 ) )  goto L3766;
        X2 = SYMBOL_VALUE( sc_2dinclude_2ddirs_v );
        X3 = X2;
L3770:
        if  ( FALSE( X3 ) )  goto L3771;
        X5 = CONS( X1, EMPTYLIST );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3774;
        scrt1__24__car_2derror( X3 );
L3774:
        DISPLAY( 0 ) = scrt3_string_2dappend( CONS( PAIR_CAR( X3 ), 
                                                    X5 ) );
        X6 = MAKEPROCEDURE( 0, 
                            0, 
                            readtext_l2726, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X5 = scrt4_catch_2derror( X6 );
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), STRINGTAG ) ) )
            )  goto L3780;
        X4 = FALSEVALUE;
        goto L3781;
L3780:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3783;
        scrt1__24__car_2derror( X5 );
L3783:
        X4 = PAIR_CAR( X5 );
L3781:
        if  ( FALSE( X4 ) )  goto L3786;
        X6 = SYMBOL_VALUE( sc_2dsplice_v );
        X7 = SYMBOL_VALUE( sc_2dinput_v );
        X5 = sc_cons( X6, X7 );
        SETGENTL( SYMBOL_VALUE( sc_2dinput_v ), 
                  sc_cons( X4, X5 ) );
        SDVAL = SETGENTL( SYMBOL_VALUE( sc_2dsplice_v ), 
                          EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L3786:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3770 );
L3771:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        SDVAL = VIA( PROCEDURE_CODE( X4 ) )( c2736, 
                                             X1, 
                                             PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L3766:
        X2 = SYMBOL_VALUE( expand_2derror_v );
        X2 = UNKNOWNCALL( X2, 2 );
        SDVAL = VIA( PROCEDURE_CODE( X2 ) )( c2069, 
                                             e2713, 
                                             PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( readtext_do_2dmodule_v );
DEFCSTRING( t3790, "DO-MODULE" );
EXTERNTSCPP( readtext__2dclauses_73970203, XAL1( TSCP ) );
EXTERNTSCP( readtext__2dclauses_73970203_v );

TSCP  readtext_do_2dmodule( e2781 )
        TSCP  e2781;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3790 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2781, 
                                          _TSCP( 8 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3841;
        if  ( EQ( TSCPTAG( e2781 ), PAIRTAG ) )  goto L3800;
        scrt1__24__cdr_2derror( e2781 );
L3800:
        X3 = PAIR_CDR( e2781 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3803;
        scrt1__24__car_2derror( X3 );
L3803:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3841;
        X3 = PAIR_CDR( e2781 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3809;
        scrt1__24__car_2derror( X3 );
L3809:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( c2394 ) ) )  goto L3841;
        X2 = SYMBOL_VALUE( module_2dname_v );
        if  ( FALSE( scrt1_equal_3f( X2, sc_emptystring ) ) )  goto L3812;
        X3 = PAIR_CDR( e2781 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3817;
        scrt1__24__car_2derror( X3 );
L3817:
        X2 = PAIR_CAR( X3 );
        SETGENTL( SYMBOL_VALUE( module_2dname_v ), 
                  expform_lchexname( X2 ) );
        X3 = PAIR_CDR( e2781 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3821;
        scrt1__24__car_2derror( X3 );
L3821:
        X2 = PAIR_CAR( X3 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )  goto L3824;
        scdebug_error( c2832, 
                       c2833, CONS( X2, EMPTYLIST ) );
L3824:
        SETGENTL( SYMBOL_VALUE( module_2dname_2dupcase_v ), 
                  SYMBOL_NAME( X2 ) );
        goto L3813;
L3812:
        X3 = SYMBOL_VALUE( module_2dname_v );
        X2 = SYMBOL_VALUE( report_2derror_v );
        X2 = UNKNOWNCALL( X2, 2 );
        VIA( PROCEDURE_CODE( X2 ) )( c2816, 
                                     X3, PROCEDURE_CLOSURE( X2 ) );
L3813:
        X3 = PAIR_CDR( e2781 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3828;
        scrt1__24__cdr_2derror( X3 );
L3828:
        X2 = PAIR_CDR( X3 );
        X3 = X2;
L3832:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3833;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3837;
        scrt1__24__car_2derror( X3 );
L3837:
        X4 = PAIR_CAR( X3 );
        readtext__2dclauses_73970203( X4 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3832 );
L3833:
        POPSTACKTRACE( FALSEVALUE );
L3841:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2065, 
                                                    e2781, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( readtext__2dclauses_73970203_v );
DEFCSTRING( t3842, "DO-MODULE-CLAUSES" );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt2_positive_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_positive_3f_v );

TSCP  readtext__2dclauses_73970203( c2878 )
        TSCP  c2878;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3842 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2878, 
                                          _TSCP( 8 ), 
                                          _TSCP( 8 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3874;
        if  ( EQ( TSCPTAG( c2878 ), PAIRTAG ) )  goto L3852;
        scrt1__24__car_2derror( c2878 );
L3852:
        X2 = PAIR_CAR( c2878 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2893 ) ) )  goto L3874;
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3854;
        X2 = FALSEVALUE;
        goto L3855;
L3854:
        X2 = TRUEVALUE;
L3855:
        if  ( FALSE( X2 ) )  goto L3874;
        X4 = PAIR_CDR( c2878 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3864;
        scrt1__24__car_2derror( X4 );
L3864:
        X3 = PAIR_CAR( X4 );
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3874;
        if  ( TRUE( SYMBOL_VALUE( sc_2dinterpreter_v ) ) )  goto L3866;
        X3 = PAIR_CDR( c2878 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3870;
        scrt1__24__car_2derror( X3 );
L3870:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( main_2dprogram_2dname_v ), 
                                 PAIR_CAR( X3 ) ) );
L3866:
        POPSTACKTRACE( FALSEVALUE );
L3874:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2878, 
                                          _TSCP( 8 ), 
                                          _TSCP( 8 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3917;
        if  ( EQ( TSCPTAG( c2878 ), PAIRTAG ) )  goto L3883;
        scrt1__24__car_2derror( c2878 );
L3883:
        X2 = PAIR_CAR( c2878 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2926 ) ) )  goto L3917;
        X4 = PAIR_CDR( c2878 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3887;
        scrt1__24__car_2derror( X4 );
L3887:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3890;
        X2 = TRUEVALUE;
        goto L3893;
L3890:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3892;
        X4 = scrt2_round( X3 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3895;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) );
        goto L3893;
L3895:
        X2 = scrt2__3d_2dtwo( X3, X4 );
        goto L3893;
L3892:
        X2 = FALSEVALUE;
L3893:
        if  ( FALSE( X2 ) )  goto L3917;
        X4 = PAIR_CDR( c2878 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3903;
        scrt1__24__car_2derror( X4 );
L3903:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3907;
        if  ( GT( _S2CINT( X3 ), 0 ) )  goto L3911;
        goto L3917;
L3907:
        if  ( FALSE( scrt2_positive_3f( X3 ) ) )  goto L3917;
L3911:
        X1 = PAIR_CDR( c2878 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3920;
        scrt1__24__car_2derror( X1 );
L3920:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( heap_2dsize_v ), 
                                 PAIR_CAR( X1 ) ) );
L3917:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2878, 
                                          _TSCP( 4 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3936;
        if  ( EQ( TSCPTAG( c2878 ), PAIRTAG ) )  goto L3930;
        scrt1__24__car_2derror( c2878 );
L3930:
        X2 = PAIR_CAR( c2878 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2394 ) ) )  goto L3936;
        X2 = SYMBOL_VALUE( top_2dlevel_2dsymbols_v );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( TRUEVALUE ) ) )  goto L3936;
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( top_2dlevel_2dsymbols_v ), 
                                 PAIR_CDR( c2878 ) ) );
L3936:
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2878, 
                                          _TSCP( 8 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3967;
        if  ( EQ( TSCPTAG( c2878 ), PAIRTAG ) )  goto L3945;
        scrt1__24__car_2derror( c2878 );
L3945:
        X2 = PAIR_CAR( c2878 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c3014 ) ) )  goto L3967;
        if  ( TRUE( SYMBOL_VALUE( with_2dmodules_v ) ) )  goto L3967;
        X2 = PAIR_CDR( c2878 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3953:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3954;
        X6 = X4;
        goto L3961;
L3954:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3957;
        scrt1__24__car_2derror( X3 );
L3957:
        X9 = PAIR_CAR( X3 );
        X8 = expform_lchexname( X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3960;
        X8 = PAIR_CDR( X3 );
        X5 = X7;
        X4 = X7;
        X3 = X8;
        GOBACK( L3953 );
L3960:
        X8 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3965;
        scdebug_error( c2327, 
                       c2328, CONS( X5, EMPTYLIST ) );
L3965:
        X5 = SETGEN( PAIR_CDR( X5 ), X7 );
        X3 = X8;
        GOBACK( L3953 );
L3961:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( with_2dmodules_v ), 
                                 X6 ) );
L3967:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3016, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( readtext_2dconstant_f5c64566_v );
DEFCSTRING( t3968, "DO-DEFINE-CONSTANT" );

TSCP  readtext_2dconstant_f5c64566( e3091 )
        TSCP  e3091;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3968 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e3091, 
                                          _TSCP( 12 ), 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3988;
        if  ( EQ( TSCPTAG( e3091 ), PAIRTAG ) )  goto L3977;
        scrt1__24__cdr_2derror( e3091 );
L3977:
        X3 = PAIR_CDR( e3091 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3980;
        scrt1__24__car_2derror( X3 );
L3980:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3988;
        X3 = PAIR_CDR( e3091 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3985;
        scrt1__24__car_2derror( X3 );
L3985:
        X2 = PAIR_CAR( X3 );
        X6 = scrt1_caddr( e3091 );
        X5 = sceval_eval( X6, CONS( EMPTYLIST, EMPTYLIST ) );
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = X4;
        readtext_2dexpander_924034c5( X2, X3 );
        POPSTACKTRACE( sceval_eval( e3091, EMPTYLIST ) );
L3988:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2073, 
                                                    e3091, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

void scrt4__init();
void screp__init();
void expform__init();
void plist__init();
void scrt5__init();
void scrt2__init();
void scdebug__init();
void scrt3__init();
void sceval__init();
void scrt6__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        screp__init();
        expform__init();
        plist__init();
        scrt5__init();
        scrt2__init();
        scdebug__init();
        scrt3__init();
        sceval__init();
        scrt6__init();
        scrt1__init();
        MAXDISPLAY( 1 );
}

void  readtext__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(readtext SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3332, 
                       ADR( readtext_read_2dtext_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      readtext_read_2dtext, EMPTYLIST ) );
        INITIALIZEVAR( t3425, 
                       ADR( readtext_sc_2dinput_3d56933a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      readtext_sc_2dinput_3d56933a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3470, 
                       ADR( readtext_sc_2dexpand_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_sc_2dexpand, EMPTYLIST ) );
        INITIALIZEVAR( t3472, 
                       ADR( readtext_2dexpander_c83ee5f9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      readtext_2dexpander_c83ee5f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3488, 
                       ADR( readtext_sc_2dexpand_2donce_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_sc_2dexpand_2donce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3492, 
                       ADR( readtext_xpander_2a_b26e591c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      readtext_xpander_2a_b26e591c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3498, 
                       ADR( readtext_xpander_2a_afbc6f79_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      readtext_xpander_2a_afbc6f79, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3517, 
                       ADR( readtext_2dexpander_924034c5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      readtext_2dexpander_924034c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3519, 
                       ADR( readtext_2dexternal_66fe3106_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_2dexternal_66fe3106, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3664, 
                       ADR( readtext_2dexternal_7d8f1d02_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_2dexternal_7d8f1d02, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3728, 
                       ADR( readtext_do_2ddefine_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_do_2ddefine_2dmacro, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3747, 
                       ADR( readtext_do_2dinclude_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_do_2dinclude, EMPTYLIST ) );
        INITIALIZEVAR( t3790, 
                       ADR( readtext_do_2dmodule_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_do_2dmodule, EMPTYLIST ) );
        INITIALIZEVAR( t3842, 
                       ADR( readtext__2dclauses_73970203_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext__2dclauses_73970203, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3968, 
                       ADR( readtext_2dconstant_f5c64566_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      readtext_2dconstant_f5c64566, 
                                      EMPTYLIST ) );
        return;
}
