
/* SCHEME->C */

#include <objects.h>

void miscexp__init();
DEFSTATICTSCP( id_2duse_v );
DEFSTATICTSCP( exp_2dform_2dlist_v );
DEFSTATICTSCP( _24lambda_3f_v );
DEFSTATICTSCP( id_2dset_21_v );
DEFSTATICTSCP( name_2da_2dlambda_v );
DEFSTATICTSCP( _24lambda_2dbody_v );
DEFSTATICTSCP( islist_v );
DEFSTATICTSCP( expand_2derror_v );
DEFSTATICTSCP( set_2dlambda_2dreqvars_21_v );
DEFSTATICTSCP( set_2dlambda_2doptvars_21_v );
DEFSTATICTSCP( exp_2dform_v );
DEFSTATICTSCP( lambda_2dreqvars_v );
DEFSTATICTSCP( lambda_2doptvars_v );
DEFSTATICTSCP( _24lambda_2did_v );
DEFSTATICTSCP( newv_v );
DEFSTATICTSCP( bound_v );
DEFSTATICTSCP( false_2dalpha_v );
DEFSTATICTSCP( empty_2dlist_2dalpha_v );
DEFSTATICTSCP( true_2dalpha_v );
DEFSTATICTSCP( set_2did_2dset_21_21_v );
DEFSTATICTSCP( id_2dvalue_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( module_2dname_v );
DEFSTATICTSCP( assign_2dknown_2dname_v );
DEFSTATICTSCP( c3109 );
DEFSTATICTSCP( c3104 );
DEFSTATICTSCP( c3100 );
DEFSTATICTSCP( c3098 );
DEFSTATICTSCP( c3097 );
DEFSTATICTSCP( c3089 );
DEFSTATICTSCP( c2885 );
DEFSTATICTSCP( c2871 );
DEFSTATICTSCP( c2714 );
DEFSTATICTSCP( c2713 );
DEFSTATICTSCP( c2711 );
DEFSTATICTSCP( c2710 );
DEFSTATICTSCP( c2709 );
DEFSTATICTSCP( c2690 );
DEFSTATICTSCP( c2509 );
DEFSTATICTSCP( c2508 );
DEFSTATICTSCP( c2507 );
DEFSTATICTSCP( c2470 );
DEFSTATICTSCP( c2430 );
DEFCSTRING( t3328, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2343 );
DEFSTATICTSCP( c2342 );
DEFSTATICTSCP( c2269 );
DEFSTATICTSCP( c2268 );
DEFSTATICTSCP( c2225 );
DEFSTATICTSCP( c2163 );
DEFSTATICTSCP( c2107 );
DEFSTATICTSCP( c2073 );

static void  init_constants()
{
        id_2duse_v = STRINGTOSYMBOL( CSTRING_TSCP( "ID-USE" ) );
        CONSTANTEXP( ADR( id_2duse_v ) );
        exp_2dform_2dlist_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXP-FORM-LIST" ) );
        CONSTANTEXP( ADR( exp_2dform_2dlist_v ) );
        _24lambda_3f_v = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA?" ) );
        CONSTANTEXP( ADR( _24lambda_3f_v ) );
        id_2dset_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "ID-SET!" ) );
        CONSTANTEXP( ADR( id_2dset_21_v ) );
        name_2da_2dlambda_v = STRINGTOSYMBOL( CSTRING_TSCP( "NAME-A-LAMBDA" ) );
        CONSTANTEXP( ADR( name_2da_2dlambda_v ) );
        _24lambda_2dbody_v = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA-BODY" ) );
        CONSTANTEXP( ADR( _24lambda_2dbody_v ) );
        islist_v = STRINGTOSYMBOL( CSTRING_TSCP( "ISLIST" ) );
        CONSTANTEXP( ADR( islist_v ) );
        expand_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND-ERROR" ) );
        CONSTANTEXP( ADR( expand_2derror_v ) );
        set_2dlambda_2dreqvars_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LAM\
BDA-REQVARS!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2dreqvars_21_v ) );
        set_2dlambda_2doptvars_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-LAM\
BDA-OPTVARS!" ) );
        CONSTANTEXP( ADR( set_2dlambda_2doptvars_21_v ) );
        exp_2dform_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXP-FORM" ) );
        CONSTANTEXP( ADR( exp_2dform_v ) );
        lambda_2dreqvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-REQVARS" ) );
        CONSTANTEXP( ADR( lambda_2dreqvars_v ) );
        lambda_2doptvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-OPTVARS" ) );
        CONSTANTEXP( ADR( lambda_2doptvars_v ) );
        _24lambda_2did_v = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA-ID" ) );
        CONSTANTEXP( ADR( _24lambda_2did_v ) );
        newv_v = STRINGTOSYMBOL( CSTRING_TSCP( "NEWV" ) );
        CONSTANTEXP( ADR( newv_v ) );
        bound_v = STRINGTOSYMBOL( CSTRING_TSCP( "BOUND" ) );
        CONSTANTEXP( ADR( bound_v ) );
        false_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "FALSE-ALPHA" ) );
        CONSTANTEXP( ADR( false_2dalpha_v ) );
        empty_2dlist_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "EMPTY-LIST-A\
LPHA" ) );
        CONSTANTEXP( ADR( empty_2dlist_2dalpha_v ) );
        true_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "TRUE-ALPHA" ) );
        CONSTANTEXP( ADR( true_2dalpha_v ) );
        set_2did_2dset_21_21_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET-ID-SET!!\
" ) );
        CONSTANTEXP( ADR( set_2did_2dset_21_21_v ) );
        id_2dvalue_v = STRINGTOSYMBOL( CSTRING_TSCP( "ID-VALUE" ) );
        CONSTANTEXP( ADR( id_2dvalue_v ) );
        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        module_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAME" ) );
        CONSTANTEXP( ADR( module_2dname_v ) );
        assign_2dknown_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "ASSIGN-KNOW\
N-NAME" ) );
        CONSTANTEXP( ADR( assign_2dknown_2dname_v ) );
        c3109 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c3109 ) );
        c3104 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c3104 ) );
        c3100 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINED" ) );
        CONSTANTEXP( ADR( c3100 ) );
        c3098 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c3098 ) );
        c3097 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c3097 ) );
        c3089 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE" ) );
        CONSTANTEXP( ADR( c3089 ) );
        c2885 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2885 ) );
        c2871 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2871 ) );
        c2714 = STRINGTOSYMBOL( CSTRING_TSCP( "$_EMPTY-STRING" ) );
        CONSTANTEXP( ADR( c2714 ) );
        c2713 = STRINGTOSYMBOL( CSTRING_TSCP( "$_EMPTY-VECTOR" ) );
        CONSTANTEXP( ADR( c2713 ) );
        c2711 = STRINGTOSYMBOL( CSTRING_TSCP( "VALUE" ) );
        CONSTANTEXP( ADR( c2711 ) );
        c2710 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2710 ) );
        c2709 = STRINGTOSYMBOL( CSTRING_TSCP( "C" ) );
        CONSTANTEXP( ADR( c2709 ) );
        c2690 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2690 ) );
        c2509 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2509 ) );
        c2508 = STRINGTOSYMBOL( CSTRING_TSCP( "READ-ONLY" ) );
        CONSTANTEXP( ADR( c2508 ) );
        c2507 = STRINGTOSYMBOL( CSTRING_TSCP( "BOOLEAN" ) );
        CONSTANTEXP( ADR( c2507 ) );
        c2470 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2470 ) );
        c2430 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2430 ) );
        c2343 = CSTRING_TSCP( t3328 );
        CONSTANTEXP( ADR( c2343 ) );
        c2342 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c2342 ) );
        c2269 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2269 ) );
        c2268 = EMPTYLIST;
        c2268 = CONS( EMPTYLIST, c2268 );
        c2268 = CONS( c2690, c2268 );
        CONSTANTEXP( ADR( c2268 ) );
        c2225 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2225 ) );
        c2163 = STRINGTOSYMBOL( CSTRING_TSCP( "CALL" ) );
        CONSTANTEXP( ADR( c2163 ) );
        c2107 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c2107 ) );
        c2073 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2073 ) );
}

DEFTSCP( miscexp_quote_2dconstants_v );
DEFCSTRING( t3329, "QUOTE-CONSTANTS" );
DEFTSCP( miscexp_2dconstant_109f5a09_v );
DEFCSTRING( t3330, "FIND-QUOTE-CONSTANT" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  miscexp_2dconstant_109f5a09( c2012, t2013 )
        TSCP  c2012, t2013;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3330 );
        X1 = miscexp_quote_2dconstants_v;
        X2 = X1;
L3334:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3335;
        X3 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3340;
        scrt1__24__car_2derror( X3 );
L3340:
        X4 = PAIR_CAR( X3 );
        X6 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3345;
        scrt1__24__car_2derror( X6 );
L3345:
        X5 = PAIR_CAR( X6 );
        X6 = scrt1_equal_3f( X4, c2012 );
        if  ( FALSE( X6 ) )  goto L3354;
        X8 = SYMBOL_VALUE( id_2duse_v );
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( t2013 ) ) )  goto L3354;
        POPSTACKTRACE( X5 );
L3335:
        POPSTACKTRACE( FALSEVALUE );
L3354:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3334 );
}

DEFTSCP( miscexp_call_2dexp_v );
DEFCSTRING( t3356, "CALL-EXP" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( miscexp_letrec_2dlambdas, XAL2( TSCP, TSCP ) );
EXTERNTSCP( miscexp_letrec_2dlambdas_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( miscexp_call_2dexp_2dcons, XAL1( TSCP ) );
EXTERNTSCP( miscexp_call_2dexp_2dcons_v );

TSCP  miscexp_call_2dexp( e2061, e2062 )
        TSCP  e2061, e2062;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3356 );
        e2061 = CONS( e2061, EMPTYLIST );
        X11 = PAIR_CAR( e2061 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3359;
        scrt1__24__car_2derror( X11 );
L3359:
        X10 = PAIR_CAR( X11 );
        X9 = e2062;
        X9 = UNKNOWNCALL( X9, 2 );
        X1 = VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                          e2062, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X9 = SYMBOL_VALUE( _24lambda_3f_v );
        X9 = UNKNOWNCALL( X9, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X9 ) )( X1, 
                                                  PROCEDURE_CLOSURE( X9 ) ) )
            )  goto L3362;
        X9 = SYMBOL_VALUE( _24lambda_2did_v );
        X9 = UNKNOWNCALL( X9, 1 );
        X4 = VIA( PROCEDURE_CODE( X9 ) )( X1, 
                                          PROCEDURE_CLOSURE( X9 ) );
        goto L3363;
L3362:
        X4 = FALSEVALUE;
L3363:
        if  ( FALSE( X4 ) )  goto L3365;
        X9 = PAIR_CAR( e2061 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3369;
        scrt1__24__cdr_2derror( X9 );
L3369:
        X8 = PAIR_CDR( X9 );
        X9 = SYMBOL_VALUE( lambda_2dreqvars_v );
        X9 = UNKNOWNCALL( X9, 1 );
        X7 = VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X9 = SYMBOL_VALUE( lambda_2doptvars_v );
        X9 = UNKNOWNCALL( X9, 1 );
        X5 = VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X3 = EMPTYLIST;
        X6 = EMPTYLIST;
        X2 = EMPTYLIST;
L3371:
        X2 = CONS( X2, EMPTYLIST );
        X6 = CONS( X6, EMPTYLIST );
        X3 = CONS( X3, EMPTYLIST );
        X9 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X9 ) )  goto L3376;
        if  ( NEQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3376;
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3381;
        scrt1__24__car_2derror( X8 );
L3381:
        X12 = PAIR_CAR( X8 );
        X11 = e2062;
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                            e2062, 
                                            PROCEDURE_CLOSURE( X11 ) );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3384;
        scrt1__24__car_2derror( X7 );
L3384:
        X11 = PAIR_CAR( X7 );
        X12 = sc_cons( X11, PAIR_CAR( X3 ) );
        SETGEN( PAIR_CAR( X3 ), X12 );
        X12 = sc_cons( X10, PAIR_CAR( X6 ) );
        SETGEN( PAIR_CAR( X6 ), X12 );
        if  ( NOT( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X10 ), SYMBOLTAG ) ) )
            )  goto L3389;
        X13 = SYMBOL_VALUE( id_2duse_v );
        X13 = UNKNOWNCALL( X13, 1 );
        X12 = VIA( PROCEDURE_CODE( X13 ) )( X10, 
                                            PROCEDURE_CLOSURE( X13 ) );
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( c2107 ) ) )  goto L3389;
        X12 = sc_cons( X11, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X12 );
L3389:
        X12 = SYMBOL_VALUE( _24lambda_3f_v );
        X12 = UNKNOWNCALL( X12, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X12 ) )( X10, 
                                                   PROCEDURE_CLOSURE( X12 ) ) )
            )  goto L3393;
        X12 = SYMBOL_VALUE( id_2dset_21_v );
        X12 = UNKNOWNCALL( X12, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X12 ) )( X11, 
                                                  PROCEDURE_CLOSURE( X12 ) ) )
            )  goto L3393;
        X12 = SYMBOL_VALUE( name_2da_2dlambda_v );
        X12 = UNKNOWNCALL( X12, 2 );
        VIA( PROCEDURE_CODE( X12 ) )( X11, 
                                      X10, 
                                      PROCEDURE_CLOSURE( X12 ) );
L3393:
        X10 = PAIR_CDR( X8 );
        X11 = PAIR_CDR( X7 );
        X2 = PAIR_CAR( X2 );
        X6 = PAIR_CAR( X6 );
        X3 = PAIR_CAR( X3 );
        X7 = X11;
        X8 = X10;
        GOBACK( L3371 );
L3365:
        X13 = PAIR_CAR( e2061 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L3399;
        scrt1__24__cdr_2derror( X13 );
L3399:
        X12 = PAIR_CDR( X13 );
        X11 = SYMBOL_VALUE( exp_2dform_2dlist_v );
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                            e2062, 
                                            PROCEDURE_CLOSURE( X11 ) );
        X9 = sc_cons( X1, X10 );
        SETGEN( PAIR_CAR( e2061 ), X9 );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_append_2dtwo( PAIR_CAR( e2061 ), X10 ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2073, 
                                      CONS( EMPTYLIST, X9 ) ) );
L3376:
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L3402;
        X10 = SYMBOL_VALUE( _24lambda_2dbody_v );
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X1, 
                                           PROCEDURE_CLOSURE( X10 ) );
        miscexp_letrec_2dlambdas( PAIR_CAR( X2 ), X9 );
L3402:
        X9 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( FALSE( X9 ) )  goto L3414;
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3414;
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3414;
        X11 = scrt1_reverse( PAIR_CAR( X6 ) );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X10 = CONS( scrt1_append_2dtwo( X11, X12 ), 
                    EMPTYLIST );
        X10 = CONS( X1, X10 );
        POPSTACKTRACE( scrt1_cons_2a( c2073, 
                                      CONS( EMPTYLIST, X10 ) ) );
L3414:
        if  ( FALSE( X5 ) )  goto L3424;
        X9 = SYMBOL_VALUE( islist_v );
        X9 = UNKNOWNCALL( X9, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X9 ) )( X8, 
                                                  _TSCP( 0 ), 
                                                  PROCEDURE_CLOSURE( X9 ) ) )
            )  goto L3424;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3422;
        scrt1__24__car_2derror( X5 );
L3422:
        X12 = PAIR_CAR( X5 );
        X11 = sc_cons( X12, PAIR_CAR( X3 ) );
        X10 = scrt1_reverse( X11 );
        X9 = SYMBOL_VALUE( set_2dlambda_2dreqvars_21_v );
        X9 = UNKNOWNCALL( X9, 2 );
        VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                     X10, 
                                     PROCEDURE_CLOSURE( X9 ) );
        X9 = SYMBOL_VALUE( set_2dlambda_2doptvars_21_v );
        X9 = UNKNOWNCALL( X9, 2 );
        VIA( PROCEDURE_CODE( X9 ) )( X4, 
                                     EMPTYLIST, 
                                     PROCEDURE_CLOSURE( X9 ) );
        X10 = scrt1_reverse( PAIR_CAR( X6 ) );
        X14 = miscexp_call_2dexp_2dcons( X8 );
        X13 = SYMBOL_VALUE( exp_2dform_v );
        X13 = UNKNOWNCALL( X13, 2 );
        X12 = VIA( PROCEDURE_CODE( X13 ) )( X14, 
                                            e2062, 
                                            PROCEDURE_CLOSURE( X13 ) );
        X11 = scrt1_cons_2a( X12, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
        X9 = CONS( scrt1_append_2dtwo( X10, X11 ), EMPTYLIST );
        X9 = CONS( X1, X9 );
        POPSTACKTRACE( scrt1_cons_2a( c2073, 
                                      CONS( EMPTYLIST, X9 ) ) );
L3424:
        X9 = SYMBOL_VALUE( expand_2derror_v );
        X9 = UNKNOWNCALL( X9, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X9 ) )( c2163, 
                                                    PAIR_CAR( e2061 ), 
                                                    PROCEDURE_CLOSURE( X9 ) ) );
}

DEFTSCP( miscexp_letrec_2dlambdas_v );
DEFCSTRING( t3425, "LETREC-LAMBDAS" );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );

TSCP  miscexp_letrec_2dlambdas( v2185, e2186 )
        TSCP  v2185, e2186;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3425 );
L3426:
        if  ( NEQ( TSCPTAG( e2186 ), PAIRTAG ) )  goto L3427;
        X2 = PAIR_CAR( e2186 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3431;
        X4 = PAIR_CAR( X2 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2225 ) ) );
        goto L3432;
L3431:
        X3 = FALSEVALUE;
L3432:
        if  ( FALSE( X3 ) )  goto L3435;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3438;
        scrt1__24__cdr_2derror( X2 );
L3438:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3441;
        scrt1__24__car_2derror( X4 );
L3441:
        X1 = PAIR_CAR( X4 );
        goto L3436;
L3435:
        X1 = X3;
L3436:
        X3 = PAIR_CAR( e2186 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3445;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2225 ) ) );
        goto L3446;
L3445:
        X4 = FALSEVALUE;
L3446:
        if  ( FALSE( X4 ) )  goto L3449;
        X2 = scrt1_caddr( X3 );
        goto L3450;
L3449:
        X2 = X4;
L3450:
        if  ( FALSE( scrt1_memq( X1, v2185 ) ) )  goto L3452;
        X3 = SYMBOL_VALUE( _24lambda_3f_v );
        X3 = UNKNOWNCALL( X3, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( X2, 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L3457;
        X4 = SYMBOL_VALUE( id_2dset_21_v );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X1, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L3457;
        X3 = SYMBOL_VALUE( name_2da_2dlambda_v );
        X3 = UNKNOWNCALL( X3, 2 );
        VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                     X2, PROCEDURE_CLOSURE( X3 ) );
L3457:
        e2186 = PAIR_CDR( e2186 );
        GOBACK( L3426 );
L3452:
        POPSTACKTRACE( FALSEVALUE );
L3427:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp_call_2dexp_2dcons_v );
DEFCSTRING( t3460, "CALL-EXP-CONS" );

TSCP  miscexp_call_2dexp_2dcons( v2267 )
        TSCP  v2267;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3460 );
        if  ( FALSE( v2267 ) )  goto L3462;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( v2267 ), PAIRTAG ) )  goto L3465;
        scrt1__24__cdr_2derror( v2267 );
L3465:
        X2 = PAIR_CDR( v2267 );
        X1 = CONS( miscexp_call_2dexp_2dcons( X2 ), X1 );
        POPSTACKTRACE( scrt1_cons_2a( c2269, 
                                      CONS( PAIR_CAR( v2267 ), 
                                            X1 ) ) );
L3462:
        POPSTACKTRACE( c2268 );
}

DEFTSCP( miscexp__24call_3f_v );
DEFCSTRING( t3468, "$CALL?" );

TSCP  miscexp__24call_3f( x2280 )
        TSCP  x2280;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3468 );
        if  ( NEQ( TSCPTAG( x2280 ), PAIRTAG ) )  goto L3470;
        X1 = PAIR_CAR( x2280 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2073 ) ) ) );
L3470:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp__24call_2dtail_v );
DEFCSTRING( t3473, "$CALL-TAIL" );

TSCP  miscexp__24call_2dtail( x2298 )
        TSCP  x2298;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3473 );
        if  ( NEQ( TSCPTAG( x2298 ), PAIRTAG ) )  goto L3475;
        X2 = PAIR_CAR( x2298 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2073 ) ) );
        goto L3476;
L3475:
        X1 = FALSEVALUE;
L3476:
        if  ( FALSE( X1 ) )  goto L3479;
        if  ( EQ( TSCPTAG( x2298 ), PAIRTAG ) )  goto L3482;
        scrt1__24__cdr_2derror( x2298 );
L3482:
        X2 = PAIR_CDR( x2298 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3485;
        scrt1__24__car_2derror( X2 );
L3485:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3479:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__2dtail_21_86d6576f_v );
DEFCSTRING( t3487, "SET-$CALL-TAIL!" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  miscexp__2dtail_21_86d6576f( x2332, v2333 )
        TSCP  x2332, v2333;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3487 );
        if  ( EQ( TSCPTAG( x2332 ), PAIRTAG ) )  goto L3490;
        scrt1__24__cdr_2derror( x2332 );
L3490:
        X1 = PAIR_CDR( x2332 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3493;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3493:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), v2333 ) );
}

DEFTSCP( miscexp__24call_2dfunc_v );
DEFCSTRING( t3495, "$CALL-FUNC" );

TSCP  miscexp__24call_2dfunc( x2350 )
        TSCP  x2350;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3495 );
        if  ( NEQ( TSCPTAG( x2350 ), PAIRTAG ) )  goto L3497;
        X2 = PAIR_CAR( x2350 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2073 ) ) );
        goto L3498;
L3497:
        X1 = FALSEVALUE;
L3498:
        if  ( FALSE( X1 ) )  goto L3501;
        POPSTACKTRACE( scrt1_caddr( x2350 ) );
L3501:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__2dfunc_21_4935643_v );
DEFCSTRING( t3503, "SET-$CALL-FUNC!" );

TSCP  miscexp__2dfunc_21_4935643( x2374, f2375 )
        TSCP  x2374, f2375;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3503 );
        if  ( EQ( TSCPTAG( x2374 ), PAIRTAG ) )  goto L3506;
        scrt1__24__cdr_2derror( x2374 );
L3506:
        X2 = PAIR_CDR( x2374 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3509;
        scrt1__24__cdr_2derror( X2 );
L3509:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3512;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3512:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), f2375 ) );
}

DEFTSCP( miscexp__24call_2dargl_v );
DEFCSTRING( t3514, "$CALL-ARGL" );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );

TSCP  miscexp__24call_2dargl( x2396 )
        TSCP  x2396;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3514 );
        if  ( NEQ( TSCPTAG( x2396 ), PAIRTAG ) )  goto L3516;
        X2 = PAIR_CAR( x2396 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2073 ) ) );
        goto L3517;
L3516:
        X1 = FALSEVALUE;
L3517:
        if  ( FALSE( X1 ) )  goto L3520;
        POPSTACKTRACE( scrt1_cdddr( x2396 ) );
L3520:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__2dargl_21_89422a52_v );
DEFCSTRING( t3522, "SET-$CALL-ARGL!" );

TSCP  miscexp__2dargl_21_89422a52( x2420, a2421 )
        TSCP  x2420, a2421;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3522 );
        if  ( EQ( TSCPTAG( x2420 ), PAIRTAG ) )  goto L3525;
        scrt1__24__cdr_2derror( x2420 );
L3525:
        X2 = PAIR_CDR( x2420 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3528;
        scrt1__24__cdr_2derror( X2 );
L3528:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3531;
        scdebug_error( c2430, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3531:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X1 ), a2421 ) );
}

DEFTSCP( miscexp_lap_2dexp_v );
DEFCSTRING( t3533, "LAP-EXP" );
EXTERNTSCPP( miscexp_l2513, XAL1( TSCP ) );

TSCP  miscexp_l2513( e2515 )
        TSCP  e2515;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "LOOP [inside LAP-EXP]" );
L3558:
        X1 = BOOLEAN( EQ( TSCPTAG( e2515 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L3568;
        if  ( EQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3566;
        scrt1__24__car_2derror( e2515 );
L3566:
        X2 = PAIR_CAR( e2515 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2509 ) ) )  goto L3568;
        POPSTACKTRACE( TRUEVALUE );
L3568:
        if  ( NEQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3569;
        X2 = PAIR_CAR( e2515 );
        X1 = miscexp_l2513( X2 );
        if  ( TRUE( X1 ) )  goto L3573;
        e2515 = PAIR_CDR( e2515 );
        GOBACK( L3558 );
L3573:
        POPSTACKTRACE( X1 );
L3569:
        POPSTACKTRACE( FALSEVALUE );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  miscexp_lap_2dexp( e2443, e2444 )
        TSCP  e2443, e2444;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3533 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2443, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3600;
        if  ( EQ( TSCPTAG( e2443 ), PAIRTAG ) )  goto L3542;
        scrt1__24__cdr_2derror( e2443 );
L3542:
        X4 = PAIR_CDR( e2443 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3545;
        scrt1__24__car_2derror( X4 );
L3545:
        X3 = PAIR_CAR( X4 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                  _TSCP( 0 ), 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L3600;
        X3 = PAIR_CDR( e2443 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3549;
        scrt1__24__car_2derror( X3 );
L3549:
        X2 = PAIR_CAR( X3 );
        X4 = PAIR_CDR( e2443 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3554;
        scrt1__24__cdr_2derror( X4 );
L3554:
        X3 = PAIR_CDR( X4 );
        X4 = miscexp_l2513( X3 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_append_2dtwo( X3, X6 ), EMPTYLIST );
        X5 = CONS( X2, X5 );
        if  ( FALSE( X4 ) )  goto L3577;
        X6 = c2509;
        goto L3590;
L3577:
        X7 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3581;
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L3585;
        X6 = c2508;
        goto L3590;
L3581:
        if  ( TRUE( scrt2__3d_2dtwo( X7, _TSCP( 4 ) ) ) )  goto L3585;
        X6 = c2508;
        goto L3590;
L3585:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3592;
        scrt1__24__car_2derror( X3 );
L3592:
        X8 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3589;
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3598;
        scrt1__24__car_2derror( X9 );
L3598:
        X8 = PAIR_CAR( X9 );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( c2507 ) ) )  goto L3594;
        X6 = c2507;
        goto L3590;
L3594:
        X6 = c2508;
        goto L3590;
L3589:
        X6 = c2508;
L3590:
        POPSTACKTRACE( scrt1_cons_2a( c2470, CONS( X6, X5 ) ) );
L3600:
        if  ( EQ( TSCPTAG( e2443 ), PAIRTAG ) )  goto L3602;
        scrt1__24__car_2derror( e2443 );
L3602:
        X2 = PAIR_CAR( e2443 );
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2443, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( miscexp__24lap_3f_v );
DEFCSTRING( t3604, "$LAP?" );

TSCP  miscexp__24lap_3f( x2565 )
        TSCP  x2565;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3604 );
        if  ( NEQ( TSCPTAG( x2565 ), PAIRTAG ) )  goto L3606;
        X1 = PAIR_CAR( x2565 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2470 ) ) ) );
L3606:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp__24lap_2dtype_v );
DEFCSTRING( t3609, "$LAP-TYPE" );

TSCP  miscexp__24lap_2dtype( x2583 )
        TSCP  x2583;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3609 );
        if  ( NEQ( TSCPTAG( x2583 ), PAIRTAG ) )  goto L3611;
        X2 = PAIR_CAR( x2583 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2470 ) ) );
        goto L3612;
L3611:
        X1 = FALSEVALUE;
L3612:
        if  ( FALSE( X1 ) )  goto L3615;
        if  ( EQ( TSCPTAG( x2583 ), PAIRTAG ) )  goto L3618;
        scrt1__24__cdr_2derror( x2583 );
L3618:
        X2 = PAIR_CDR( x2583 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3621;
        scrt1__24__car_2derror( X2 );
L3621:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3615:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__24lap_2dvars_v );
DEFCSTRING( t3623, "$LAP-VARS" );

TSCP  miscexp__24lap_2dvars( x2617 )
        TSCP  x2617;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3623 );
        if  ( NEQ( TSCPTAG( x2617 ), PAIRTAG ) )  goto L3625;
        X2 = PAIR_CAR( x2617 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2470 ) ) );
        goto L3626;
L3625:
        X1 = FALSEVALUE;
L3626:
        if  ( FALSE( X1 ) )  goto L3629;
        POPSTACKTRACE( scrt1_caddr( x2617 ) );
L3629:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__24lap_2dbody_v );
DEFCSTRING( t3631, "$LAP-BODY" );

TSCP  miscexp__24lap_2dbody( x2641 )
        TSCP  x2641;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3631 );
        if  ( NEQ( TSCPTAG( x2641 ), PAIRTAG ) )  goto L3633;
        X2 = PAIR_CAR( x2641 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2470 ) ) );
        goto L3634;
L3633:
        X1 = FALSEVALUE;
L3634:
        if  ( FALSE( X1 ) )  goto L3637;
        POPSTACKTRACE( scrt1_cdddr( x2641 ) );
L3637:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__2dbody_21_c6f79d45_v );
DEFCSTRING( t3639, "SET-$LAP-BODY!" );

TSCP  miscexp__2dbody_21_c6f79d45( e2665, b2666 )
        TSCP  e2665, b2666;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3639 );
        if  ( EQ( TSCPTAG( e2665 ), PAIRTAG ) )  goto L3642;
        scrt1__24__cdr_2derror( e2665 );
L3642:
        X2 = PAIR_CDR( e2665 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3645;
        scrt1__24__cdr_2derror( X2 );
L3645:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3648;
        scdebug_error( c2430, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3648:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X1 ), b2666 ) );
}

DEFTSCP( miscexp_quote_2dexp_v );
DEFCSTRING( t3650, "QUOTE-EXP" );
EXTERNTSCP( sc_emptystring );
EXTERNTSCP( sc_emptyvector );

TSCP  miscexp_quote_2dexp( e2687, e2688 )
        TSCP  e2687, e2688;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3650 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e2687, 
                                                  _TSCP( 8 ), 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3652;
        if  ( EQ( TSCPTAG( e2687 ), PAIRTAG ) )  goto L3655;
        scrt1__24__cdr_2derror( e2687 );
L3655:
        X2 = PAIR_CDR( e2687 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3658;
        scrt1__24__car_2derror( X2 );
L3658:
        X1 = PAIR_CAR( X2 );
        X2 = miscexp_2dconstant_109f5a09( X1, c2107 );
        if  ( TRUE( X2 ) )  goto L3662;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( TRUEVALUE ) ) )  goto L3664;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3666;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( FALSEVALUE ) ) )  goto L3668;
        if  ( FALSE( scrt1_equal_3f( X1, sc_emptystring ) ) )  goto L3670;
        X3 = SYMBOL_VALUE( bound_v );
        X3 = UNKNOWNCALL( X3, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2714, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3670:
        if  ( FALSE( scrt1_equal_3f( X1, sc_emptyvector ) ) )  goto L3672;
        X3 = SYMBOL_VALUE( bound_v );
        X3 = UNKNOWNCALL( X3, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2713, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3672:
        X4 = SYMBOL_VALUE( newv_v );
        X4 = UNKNOWNCALL( X4, 5 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c2709, 
                                          c2710, 
                                          c2107, 
                                          c2711, 
                                          X1, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X6 = sc_cons( X3, EMPTYLIST );
        X5 = sc_cons( X1, X6 );
        X4 = X5;
        miscexp_quote_2dconstants_v = sc_cons( X4, 
                                               miscexp_quote_2dconstants_v );
        POPSTACKTRACE( X3 );
L3668:
        POPSTACKTRACE( SYMBOL_VALUE( false_2dalpha_v ) );
L3666:
        POPSTACKTRACE( SYMBOL_VALUE( empty_2dlist_2dalpha_v ) );
L3664:
        POPSTACKTRACE( SYMBOL_VALUE( true_2dalpha_v ) );
L3662:
        POPSTACKTRACE( X2 );
L3652:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2690, 
                                                    e2687, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( miscexp_set_21_2dexp_v );
DEFCSTRING( t3676, "SET!-EXP" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  miscexp_set_21_2dexp( e2730, e2731 )
        TSCP  e2730, e2731;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3676 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 3 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2730, 
                                          _TSCP( 12 ), 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3700;
        if  ( EQ( TSCPTAG( e2730 ), PAIRTAG ) )  goto L3685;
        scrt1__24__cdr_2derror( e2730 );
L3685:
        X3 = PAIR_CDR( e2730 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3688;
        scrt1__24__car_2derror( X3 );
L3688:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3700;
        X4 = scrt1_caddr( e2730 );
        X3 = e2731;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          e2731, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X6 = PAIR_CDR( e2730 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3692;
        scrt1__24__car_2derror( X6 );
L3692:
        X5 = PAIR_CAR( X6 );
        X4 = e2731;
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          e2731, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X6 = SYMBOL_VALUE( id_2dset_21_v );
        X6 = UNKNOWNCALL( X6, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                                  PROCEDURE_CLOSURE( X6 ) ) )
            )  goto L3695;
        X7 = SYMBOL_VALUE( id_2dset_21_v );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X3, 
                                          PROCEDURE_CLOSURE( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L3698;
        X5 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X6 ) ) );
        goto L3696;
L3698:
        X5 = scrt2__2b_2dtwo( _TSCP( 4 ), X6 );
        goto L3696;
L3695:
        X5 = _TSCP( 4 );
L3696:
        X4 = SYMBOL_VALUE( set_2did_2dset_21_21_v );
        X4 = UNKNOWNCALL( X4, 2 );
        VIA( PROCEDURE_CODE( X4 ) )( X3, 
                                     X5, PROCEDURE_CLOSURE( X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( X2, X4 );
        POPSTACKTRACE( scrt1_cons_2a( c2225, CONS( X3, X4 ) ) );
L3700:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2509, 
                                                    e2730, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( miscexp__24set_3f_v );
DEFCSTRING( t3701, "$SET?" );

TSCP  miscexp__24set_3f( x2770 )
        TSCP  x2770;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3701 );
        if  ( NEQ( TSCPTAG( x2770 ), PAIRTAG ) )  goto L3703;
        X1 = PAIR_CAR( x2770 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2225 ) ) ) );
L3703:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp__24set_2did_v );
DEFCSTRING( t3706, "$SET-ID" );

TSCP  miscexp__24set_2did( x2788 )
        TSCP  x2788;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3706 );
        if  ( NEQ( TSCPTAG( x2788 ), PAIRTAG ) )  goto L3708;
        X2 = PAIR_CAR( x2788 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2225 ) ) );
        goto L3709;
L3708:
        X1 = FALSEVALUE;
L3709:
        if  ( FALSE( X1 ) )  goto L3712;
        if  ( EQ( TSCPTAG( x2788 ), PAIRTAG ) )  goto L3715;
        scrt1__24__cdr_2derror( x2788 );
L3715:
        X2 = PAIR_CDR( x2788 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3718;
        scrt1__24__car_2derror( X2 );
L3718:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3712:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__24set_2dexp_v );
DEFCSTRING( t3720, "$SET-EXP" );

TSCP  miscexp__24set_2dexp( x2822 )
        TSCP  x2822;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3720 );
        if  ( NEQ( TSCPTAG( x2822 ), PAIRTAG ) )  goto L3722;
        X2 = PAIR_CAR( x2822 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2225 ) ) );
        goto L3723;
L3722:
        X1 = FALSEVALUE;
L3723:
        if  ( FALSE( X1 ) )  goto L3726;
        POPSTACKTRACE( scrt1_caddr( x2822 ) );
L3726:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp_set_2d_24set_2dexp_21_v );
DEFCSTRING( t3728, "SET-$SET-EXP!" );

TSCP  miscexp_set_2d_24set_2dexp_21( x2846, e2847 )
        TSCP  x2846, e2847;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3728 );
        if  ( EQ( TSCPTAG( x2846 ), PAIRTAG ) )  goto L3731;
        scrt1__24__cdr_2derror( x2846 );
L3731:
        X2 = PAIR_CDR( x2846 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3734;
        scrt1__24__cdr_2derror( X2 );
L3734:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3737;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3737:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), e2847 ) );
}

DEFTSCP( miscexp_if_2dexp_v );
DEFCSTRING( t3739, "IF-EXP" );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );

TSCP  miscexp_if_2dexp( e2868, e2869 )
        TSCP  e2868, e2869;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3739 );
        X4 = SYMBOL_VALUE( islist_v );
        X4 = UNKNOWNCALL( X4, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( e2868, 
                                                  _TSCP( 12 ), 
                                                  _TSCP( 16 ), 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L3741;
        if  ( FALSE( scrt1_cdddr( e2868 ) ) )  goto L3743;
        X1 = scrt1_cadddr( e2868 );
        goto L3744;
L3743:
        X1 = FALSEVALUE;
L3744:
        X2 = scrt1_caddr( e2868 );
        if  ( EQ( TSCPTAG( e2868 ), PAIRTAG ) )  goto L3746;
        scrt1__24__cdr_2derror( e2868 );
L3746:
        X6 = PAIR_CDR( e2868 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3749;
        scrt1__24__car_2derror( X6 );
L3749:
        X5 = PAIR_CAR( X6 );
        X4 = e2869;
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          e2869, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X4 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X4 ) )  goto L3760;
        X6 = SYMBOL_VALUE( id_2duse_v );
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2107 ) ) )  goto L3760;
        X5 = SYMBOL_VALUE( id_2dvalue_v );
        X5 = UNKNOWNCALL( X5, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X5 ) )( X3, 
                                                  PROCEDURE_CLOSURE( X5 ) ) )
            )  goto L3758;
        X5 = e2869;
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( X2, 
                                                    e2869, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L3758:
        X5 = e2869;
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( X1, 
                                                    e2869, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L3741:
        X4 = SYMBOL_VALUE( expand_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( c2871, 
                                                    e2868, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L3760:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = e2869;
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = CONS( VIA( PROCEDURE_CODE( X5 ) )( X1, 
                                                e2869, 
                                                PROCEDURE_CLOSURE( X5 ) ), 
                   X4 );
        X5 = e2869;
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = CONS( VIA( PROCEDURE_CODE( X5 ) )( X2, 
                                                e2869, 
                                                PROCEDURE_CLOSURE( X5 ) ), 
                   X4 );
        POPSTACKTRACE( scrt1_cons_2a( c2885, CONS( X3, X4 ) ) );
}

DEFTSCP( miscexp__24if_3f_v );
DEFCSTRING( t3761, "$IF?" );

TSCP  miscexp__24if_3f( x2899 )
        TSCP  x2899;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3761 );
        if  ( NEQ( TSCPTAG( x2899 ), PAIRTAG ) )  goto L3763;
        X1 = PAIR_CAR( x2899 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2885 ) ) ) );
L3763:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp__24if_2dtest_v );
DEFCSTRING( t3766, "$IF-TEST" );

TSCP  miscexp__24if_2dtest( x2917 )
        TSCP  x2917;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3766 );
        if  ( NEQ( TSCPTAG( x2917 ), PAIRTAG ) )  goto L3768;
        X2 = PAIR_CAR( x2917 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2885 ) ) );
        goto L3769;
L3768:
        X1 = FALSEVALUE;
L3769:
        if  ( FALSE( X1 ) )  goto L3772;
        if  ( EQ( TSCPTAG( x2917 ), PAIRTAG ) )  goto L3775;
        scrt1__24__cdr_2derror( x2917 );
L3775:
        X2 = PAIR_CDR( x2917 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3778;
        scrt1__24__car_2derror( X2 );
L3778:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3772:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp_set_2d_24if_2dtest_21_v );
DEFCSTRING( t3780, "SET-$IF-TEST!" );

TSCP  miscexp_set_2d_24if_2dtest_21( x2951, t2952 )
        TSCP  x2951, t2952;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3780 );
        if  ( EQ( TSCPTAG( x2951 ), PAIRTAG ) )  goto L3783;
        scrt1__24__cdr_2derror( x2951 );
L3783:
        X1 = PAIR_CDR( x2951 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3786;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3786:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), t2952 ) );
}

DEFTSCP( miscexp__24if_2dtrue_v );
DEFCSTRING( t3788, "$IF-TRUE" );

TSCP  miscexp__24if_2dtrue( x2967 )
        TSCP  x2967;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3788 );
        if  ( NEQ( TSCPTAG( x2967 ), PAIRTAG ) )  goto L3790;
        X2 = PAIR_CAR( x2967 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2885 ) ) );
        goto L3791;
L3790:
        X1 = FALSEVALUE;
L3791:
        if  ( FALSE( X1 ) )  goto L3794;
        POPSTACKTRACE( scrt1_caddr( x2967 ) );
L3794:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp_set_2d_24if_2dtrue_21_v );
DEFCSTRING( t3796, "SET-$IF-TRUE!" );

TSCP  miscexp_set_2d_24if_2dtrue_21( x2991, v2992 )
        TSCP  x2991, v2992;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3796 );
        if  ( EQ( TSCPTAG( x2991 ), PAIRTAG ) )  goto L3799;
        scrt1__24__cdr_2derror( x2991 );
L3799:
        X2 = PAIR_CDR( x2991 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3802;
        scrt1__24__cdr_2derror( X2 );
L3802:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3805;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3805:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), v2992 ) );
}

DEFTSCP( miscexp__24if_2dfalse_v );
DEFCSTRING( t3807, "$IF-FALSE" );

TSCP  miscexp__24if_2dfalse( x3013 )
        TSCP  x3013;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3807 );
        if  ( NEQ( TSCPTAG( x3013 ), PAIRTAG ) )  goto L3809;
        X2 = PAIR_CAR( x3013 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2885 ) ) );
        goto L3810;
L3809:
        X1 = FALSEVALUE;
L3810:
        if  ( FALSE( X1 ) )  goto L3813;
        POPSTACKTRACE( scrt1_cadddr( x3013 ) );
L3813:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp_2dfalse_21_a223c70f_v );
DEFCSTRING( t3815, "SET-$IF-FALSE!" );

TSCP  miscexp_2dfalse_21_a223c70f( x3037, v3038 )
        TSCP  x3037, v3038;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3815 );
        X1 = scrt1_cdddr( x3037 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3818;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3818:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), v3038 ) );
}

DEFTSCP( miscexp_define_2dexp_v );
DEFCSTRING( t3820, "DEFINE-EXP" );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );

TSCP  miscexp_define_2dexp( e3049, e3050 )
        TSCP  e3049, e3050;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3820 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e3049, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3848;
        if  ( EQ( TSCPTAG( e3049 ), PAIRTAG ) )  goto L3830;
        scrt1__24__cdr_2derror( e3049 );
L3830:
        X3 = PAIR_CDR( e3049 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3833;
        scrt1__24__car_2derror( X3 );
L3833:
        X2 = PAIR_CAR( X3 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )  goto L3835;
        if  ( EQ( TSCPTAG( e3049 ), PAIRTAG ) )  goto L3840;
        scrt1__24__cdr_2derror( e3049 );
L3840:
        X3 = PAIR_CDR( e3049 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3843;
        scrt1__24__car_2derror( X3 );
L3843:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3848;
        X2 = scrt1_caadr( e3049 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3848;
L3835:
        X2 = PAIR_CDR( e3049 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3851;
        scrt1__24__car_2derror( X2 );
L3851:
        X1 = PAIR_CAR( X2 );
        X3 = PAIR_CDR( e3049 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3856;
        scrt1__24__cdr_2derror( X3 );
L3856:
        X2 = PAIR_CDR( X3 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3859;
        X3 = PAIR_CAR( X1 );
        goto L3860;
L3859:
        X3 = X1;
L3860:
        X3 = CONS( X3, EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  PAIR_CAR( X3 ) );
        X6 = SYMBOL_VALUE( module_2dname_v );
        X5 = SYMBOL_VALUE( newv_v );
        X5 = UNKNOWNCALL( X5, 7 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( PAIR_CAR( X3 ), 
                                          c2710, 
                                          c3097, 
                                          c3098, 
                                          X6, 
                                          c3100, 
                                          TRUEVALUE, 
                                          PROCEDURE_CLOSURE( X5 ) );
        SETGEN( PAIR_CAR( X3 ), X4 );
        X4 = SYMBOL_VALUE( assign_2dknown_2dname_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( PAIR_CAR( X3 ), 
                                     PROCEDURE_CLOSURE( X4 ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3863;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_append_2dtwo( X2, X8 ), EMPTYLIST );
        X6 = scrt1_cons_2a( c3109, 
                            CONS( PAIR_CDR( X1 ), X7 ) );
        X5 = e3050;
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = CONS( VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                                e3050, 
                                                PROCEDURE_CLOSURE( X5 ) ), 
                   X4 );
        POPSTACKTRACE( scrt1_cons_2a( c3104, 
                                      CONS( PAIR_CAR( X3 ), X4 ) ) );
L3863:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3867;
        scrt1__24__car_2derror( X2 );
L3867:
        X6 = PAIR_CAR( X2 );
        X5 = e3050;
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = CONS( VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                                e3050, 
                                                PROCEDURE_CLOSURE( X5 ) ), 
                   X4 );
        POPSTACKTRACE( scrt1_cons_2a( c3104, 
                                      CONS( PAIR_CAR( X3 ), X4 ) ) );
L3848:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3089, 
                                                    e3049, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( miscexp__24define_3f_v );
DEFCSTRING( t3869, "$DEFINE?" );

TSCP  miscexp__24define_3f( x3142 )
        TSCP  x3142;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3869 );
        if  ( NEQ( TSCPTAG( x3142 ), PAIRTAG ) )  goto L3871;
        X1 = PAIR_CAR( x3142 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c3104 ) ) ) );
L3871:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( miscexp__24define_2did_v );
DEFCSTRING( t3874, "$DEFINE-ID" );

TSCP  miscexp__24define_2did( x3160 )
        TSCP  x3160;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3874 );
        if  ( NEQ( TSCPTAG( x3160 ), PAIRTAG ) )  goto L3876;
        X2 = PAIR_CAR( x3160 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c3104 ) ) );
        goto L3877;
L3876:
        X1 = FALSEVALUE;
L3877:
        if  ( FALSE( X1 ) )  goto L3880;
        if  ( EQ( TSCPTAG( x3160 ), PAIRTAG ) )  goto L3883;
        scrt1__24__cdr_2derror( x3160 );
L3883:
        X2 = PAIR_CDR( x3160 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3886;
        scrt1__24__car_2derror( X2 );
L3886:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3880:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp__24define_2dexp_v );
DEFCSTRING( t3888, "$DEFINE-EXP" );

TSCP  miscexp__24define_2dexp( x3194 )
        TSCP  x3194;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3888 );
        if  ( NEQ( TSCPTAG( x3194 ), PAIRTAG ) )  goto L3890;
        X2 = PAIR_CAR( x3194 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c3104 ) ) );
        goto L3891;
L3890:
        X1 = FALSEVALUE;
L3891:
        if  ( FALSE( X1 ) )  goto L3894;
        POPSTACKTRACE( scrt1_caddr( x3194 ) );
L3894:
        POPSTACKTRACE( X1 );
}

DEFTSCP( miscexp_e_2dexp_21_7e57cd5d_v );
DEFCSTRING( t3896, "SET-$DEFINE-EXP!" );

TSCP  miscexp_e_2dexp_21_7e57cd5d( x3218, e3219 )
        TSCP  x3218, e3219;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3896 );
        if  ( EQ( TSCPTAG( x3218 ), PAIRTAG ) )  goto L3899;
        scrt1__24__cdr_2derror( x3218 );
L3899:
        X2 = PAIR_CDR( x3218 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3902;
        scrt1__24__cdr_2derror( X2 );
L3902:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3905;
        scdebug_error( c2342, 
                       c2343, CONS( X1, EMPTYLIST ) );
L3905:
        POPSTACKTRACE( SETGEN( PAIR_CAR( X1 ), e3219 ) );
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

void  miscexp__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(miscexp SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3329, 
                       ADR( miscexp_quote_2dconstants_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3330, 
                       ADR( miscexp_2dconstant_109f5a09_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_2dconstant_109f5a09, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3356, 
                       ADR( miscexp_call_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_call_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3425, 
                       ADR( miscexp_letrec_2dlambdas_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_letrec_2dlambdas, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3460, 
                       ADR( miscexp_call_2dexp_2dcons_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp_call_2dexp_2dcons, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3468, 
                       ADR( miscexp__24call_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24call_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3473, 
                       ADR( miscexp__24call_2dtail_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24call_2dtail, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3487, 
                       ADR( miscexp__2dtail_21_86d6576f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp__2dtail_21_86d6576f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3495, 
                       ADR( miscexp__24call_2dfunc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24call_2dfunc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3503, 
                       ADR( miscexp__2dfunc_21_4935643_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp__2dfunc_21_4935643, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3514, 
                       ADR( miscexp__24call_2dargl_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24call_2dargl, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3522, 
                       ADR( miscexp__2dargl_21_89422a52_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp__2dargl_21_89422a52, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3533, 
                       ADR( miscexp_lap_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_lap_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3604, 
                       ADR( miscexp__24lap_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24lap_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3609, 
                       ADR( miscexp__24lap_2dtype_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24lap_2dtype, EMPTYLIST ) );
        INITIALIZEVAR( t3623, 
                       ADR( miscexp__24lap_2dvars_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24lap_2dvars, EMPTYLIST ) );
        INITIALIZEVAR( t3631, 
                       ADR( miscexp__24lap_2dbody_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24lap_2dbody, EMPTYLIST ) );
        INITIALIZEVAR( t3639, 
                       ADR( miscexp__2dbody_21_c6f79d45_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp__2dbody_21_c6f79d45, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3650, 
                       ADR( miscexp_quote_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_quote_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3676, 
                       ADR( miscexp_set_21_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_set_21_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3701, 
                       ADR( miscexp__24set_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24set_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3706, 
                       ADR( miscexp__24set_2did_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24set_2did, EMPTYLIST ) );
        INITIALIZEVAR( t3720, 
                       ADR( miscexp__24set_2dexp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24set_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3728, 
                       ADR( miscexp_set_2d_24set_2dexp_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_set_2d_24set_2dexp_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3739, 
                       ADR( miscexp_if_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_if_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3761, 
                       ADR( miscexp__24if_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24if_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3766, 
                       ADR( miscexp__24if_2dtest_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24if_2dtest, EMPTYLIST ) );
        INITIALIZEVAR( t3780, 
                       ADR( miscexp_set_2d_24if_2dtest_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_set_2d_24if_2dtest_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3788, 
                       ADR( miscexp__24if_2dtrue_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24if_2dtrue, EMPTYLIST ) );
        INITIALIZEVAR( t3796, 
                       ADR( miscexp_set_2d_24if_2dtrue_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_set_2d_24if_2dtrue_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3807, 
                       ADR( miscexp__24if_2dfalse_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24if_2dfalse, EMPTYLIST ) );
        INITIALIZEVAR( t3815, 
                       ADR( miscexp_2dfalse_21_a223c70f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_2dfalse_21_a223c70f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3820, 
                       ADR( miscexp_define_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_define_2dexp, EMPTYLIST ) );
        INITIALIZEVAR( t3869, 
                       ADR( miscexp__24define_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24define_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3874, 
                       ADR( miscexp__24define_2did_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24define_2did, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3888, 
                       ADR( miscexp__24define_2dexp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      miscexp__24define_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3896, 
                       ADR( miscexp_e_2dexp_21_7e57cd5d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      miscexp_e_2dexp_21_7e57cd5d, 
                                      EMPTYLIST ) );
        return;
}
