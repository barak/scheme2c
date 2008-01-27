
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( indirect_2dlambda_2dlexical_v );
DEFSTATICTSCP( sc_2dstack_2dtrace_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( current_2ddefine_2dstring_v );
DEFSTATICTSCP( _ion_2dinfo_e0971c7d_v );
DEFSTATICTSCP( _tersection_b4e3b790_v );
DEFSTATICTSCP( retrieve_2dcondition_2dinfo_v );
DEFSTATICTSCP( store_2dcondition_2dinfo_v );
DEFSTATICTSCP( lap_2dmax_2ddisplay_v );
DEFSTATICTSCP( c2994 );
DEFCSTRING( t3059, "CONS" );
DEFSTATICTSCP( c2967 );
DEFSTATICTSCP( c2945 );
DEFSTATICTSCP( c2926 );
DEFSTATICTSCP( c2919 );
DEFSTATICTSCP( c2909 );
DEFSTATICTSCP( c2716 );
DEFSTATICTSCP( c2662 );
DEFSTATICTSCP( c2593 );
DEFSTATICTSCP( c2591 );
DEFSTATICTSCP( c2583 );
DEFSTATICTSCP( c2578 );
DEFSTATICTSCP( c2512 );
DEFCSTRING( t3060, "]" );
DEFSTATICTSCP( c2508 );
DEFCSTRING( t3061, " [inside " );
DEFSTATICTSCP( c2503 );
DEFCSTRING( t3062, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2500 );
DEFSTATICTSCP( c2499 );
DEFSTATICTSCP( c2494 );
DEFSTATICTSCP( c2493 );
DEFSTATICTSCP( c2483 );
DEFCSTRING( t3063, "CLOSURE_VAR" );
DEFSTATICTSCP( c2449 );
DEFCSTRING( t3064, "MAKECLOSURE" );
DEFSTATICTSCP( c2387 );
DEFCSTRING( t3065, "DISPLAY" );
DEFSTATICTSCP( c2368 );
DEFSTATICTSCP( c2353 );
DEFSTATICTSCP( c2350 );
DEFSTATICTSCP( c2349 );
DEFSTATICTSCP( c2348 );
DEFSTATICTSCP( c2236 );
DEFSTATICTSCP( c2231 );
DEFSTATICTSCP( c2230 );
DEFSTATICTSCP( c2224 );
DEFCSTRING( t3067, "}" );
DEFSTATICTSCP( t3066 );
DEFSTATICTSCP( t3068 );
DEFSTATICTSCP( c2223 );
DEFSTATICTSCP( c2221 );
DEFSTATICTSCP( c2218 );
DEFSTATICTSCP( c2217 );
DEFSTATICTSCP( c2216 );
DEFSTATICTSCP( c2215 );
DEFCSTRING( t3070, "{" );
DEFSTATICTSCP( t3069 );
DEFCSTRING( t3071, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2206 );
DEFSTATICTSCP( c2205 );
DEFSTATICTSCP( c2170 );
DEFCSTRING( t3072, "EMPTYLIST" );
DEFSTATICTSCP( c2169 );
DEFCSTRING( t3073, "MAKEPROCEDURE" );
DEFSTATICTSCP( c2166 );
DEFSTATICTSCP( c2165 );
DEFSTATICTSCP( c2164 );
DEFSTATICTSCP( c2132 );
DEFSTATICTSCP( c2111 );
DEFSTATICTSCP( c2106 );
DEFSTATICTSCP( c2102 );

static void  init_constants()
{
        indirect_2dlambda_2dlexical_v = STRINGTOSYMBOL( CSTRING_TSCP( "INDIR\
ECT-LAMBDA-LEXICAL" ) );
        CONSTANTEXP( ADR( indirect_2dlambda_2dlexical_v ) );
        sc_2dstack_2dtrace_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-STACK-TRACE\
" ) );
        CONSTANTEXP( ADR( sc_2dstack_2dtrace_v ) );
        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        current_2ddefine_2dstring_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT\
-DEFINE-STRING" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dstring_v ) );
        _ion_2dinfo_e0971c7d_v = STRINGTOSYMBOL( CSTRING_TSCP( "INTERSECT-WI\
TH-GLOBAL-CONDITION-INFO" ) );
        CONSTANTEXP( ADR( _ion_2dinfo_e0971c7d_v ) );
        _tersection_b4e3b790_v = STRINGTOSYMBOL( CSTRING_TSCP( "STORED-CONDI\
TIONS-INTERSECTION" ) );
        CONSTANTEXP( ADR( _tersection_b4e3b790_v ) );
        retrieve_2dcondition_2dinfo_v = STRINGTOSYMBOL( CSTRING_TSCP( "RETRI\
EVE-CONDITION-INFO" ) );
        CONSTANTEXP( ADR( retrieve_2dcondition_2dinfo_v ) );
        store_2dcondition_2dinfo_v = STRINGTOSYMBOL( CSTRING_TSCP( "STORE-CO\
NDITION-INFO" ) );
        CONSTANTEXP( ADR( store_2dcondition_2dinfo_v ) );
        lap_2dmax_2ddisplay_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAP-MAX-DISPL\
AY" ) );
        CONSTANTEXP( ADR( lap_2dmax_2ddisplay_v ) );
        c2994 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2994 ) );
        c2967 = CSTRING_TSCP( t3059 );
        CONSTANTEXP( ADR( c2967 ) );
        c2945 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2945 ) );
        c2926 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2926 ) );
        c2919 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2919 ) );
        c2909 = STRINGTOSYMBOL( CSTRING_TSCP( "UNDEFINED" ) );
        CONSTANTEXP( ADR( c2909 ) );
        c2716 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTO" ) );
        CONSTANTEXP( ADR( c2716 ) );
        c2662 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAILS" ) );
        CONSTANTEXP( ADR( c2662 ) );
        c2593 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2593 ) );
        c2591 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        CONSTANTEXP( ADR( c2591 ) );
        c2583 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2583 ) );
        c2578 = EMPTYLIST;
        c2578 = CONS( c2909, c2578 );
        CONSTANTEXP( ADR( c2578 ) );
        c2512 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2512 ) );
        c2508 = CSTRING_TSCP( t3060 );
        CONSTANTEXP( ADR( c2508 ) );
        c2503 = CSTRING_TSCP( t3061 );
        CONSTANTEXP( ADR( c2503 ) );
        c2500 = CSTRING_TSCP( t3062 );
        CONSTANTEXP( ADR( c2500 ) );
        c2499 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2499 ) );
        c2494 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2494 ) );
        c2493 = STRINGTOSYMBOL( CSTRING_TSCP( "PUSHSTACKTRACE" ) );
        CONSTANTEXP( ADR( c2493 ) );
        c2483 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2483 ) );
        c2449 = CSTRING_TSCP( t3063 );
        CONSTANTEXP( ADR( c2449 ) );
        c2387 = CSTRING_TSCP( t3064 );
        CONSTANTEXP( ADR( c2387 ) );
        c2368 = CSTRING_TSCP( t3065 );
        CONSTANTEXP( ADR( c2368 ) );
        c2353 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY-CLOSEP" ) );
        CONSTANTEXP( ADR( c2353 ) );
        c2350 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSUREP" ) );
        CONSTANTEXP( ADR( c2350 ) );
        c2349 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2349 ) );
        c2348 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSE" ) );
        CONSTANTEXP( ADR( c2348 ) );
        c2236 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2236 ) );
        c2231 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2231 ) );
        c2230 = STRINGTOSYMBOL( CSTRING_TSCP( "NESTIN" ) );
        CONSTANTEXP( ADR( c2230 ) );
        c2224 = EMPTYLIST;
        t3066 = CSTRING_TSCP( t3067 );
        c2224 = CONS( t3066, c2224 );
        t3068 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        c2224 = CONS( t3068, c2224 );
        CONSTANTEXP( ADR( c2224 ) );
        c2223 = STRINGTOSYMBOL( CSTRING_TSCP( "INDENT" ) );
        CONSTANTEXP( ADR( c2223 ) );
        c2221 = STRINGTOSYMBOL( CSTRING_TSCP( "RETURN" ) );
        CONSTANTEXP( ADR( c2221 ) );
        c2218 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2218 ) );
        c2217 = STRINGTOSYMBOL( CSTRING_TSCP( "LOCALS" ) );
        CONSTANTEXP( ADR( c2217 ) );
        c2216 = EMPTYLIST;
        c2216 = CONS( _TSCP( 32 ), c2216 );
        c2216 = CONS( c2223, c2216 );
        CONSTANTEXP( ADR( c2216 ) );
        c2215 = EMPTYLIST;
        t3069 = CSTRING_TSCP( t3070 );
        c2215 = CONS( t3069, c2215 );
        c2215 = CONS( t3068, c2215 );
        CONSTANTEXP( ADR( c2215 ) );
        c2206 = CSTRING_TSCP( t3071 );
        CONSTANTEXP( ADR( c2206 ) );
        c2205 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2205 ) );
        c2170 = STRINGTOSYMBOL( CSTRING_TSCP( "PROC" ) );
        CONSTANTEXP( ADR( c2170 ) );
        c2169 = CSTRING_TSCP( t3072 );
        CONSTANTEXP( ADR( c2169 ) );
        c2166 = CSTRING_TSCP( t3073 );
        CONSTANTEXP( ADR( c2166 ) );
        c2165 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2165 ) );
        c2164 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2164 ) );
        c2132 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2132 ) );
        c2111 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c2111 ) );
        c2106 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED-PROCEDURE" ) );
        CONSTANTEXP( ADR( c2106 ) );
        c2102 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE" ) );
        CONSTANTEXP( ADR( c2102 ) );
}

DEFTSCP( lambdacode__24lambda_2dgenc_v );
DEFCSTRING( t3074, "$LAMBDA-GENC" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( lambdacode_procedure_2demit, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( lambdacode_procedure_2demit_v );
EXTERNTSCPP( ambdacode_ure_2demit_8ce41db4, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ambdacode_ure_2demit_8ce41db4_v );

TSCP  lambdacode__24lambda_2dgenc( l2092, e2093, b2094 )
        TSCP  l2092, e2093, b2094;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3074 );
        if  ( NEQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3076;
        X3 = PAIR_CAR( e2093 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3077;
L3076:
        X2 = FALSEVALUE;
L3077:
        if  ( FALSE( X2 ) )  goto L3080;
        if  ( EQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3083;
        scrt1__24__cdr_2derror( e2093 );
L3083:
        X3 = PAIR_CDR( e2093 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3086;
        scrt1__24__car_2derror( X3 );
L3086:
        X1 = PAIR_CAR( X3 );
        goto L3081;
L3080:
        X1 = X2;
L3081:
        X2 = plist_get( X1, c2111 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2102 ) ) )  goto L3090;
        POPSTACKTRACE( lambdacode_procedure_2demit( l2092, 
                                                    X1, 
                                                    e2093, b2094 ) );
L3090:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2106 ) ) )  goto L3092;
        POPSTACKTRACE( ambdacode_ure_2demit_8ce41db4( l2092, 
                                                      X1, 
                                                      e2093, b2094 ) );
L3092:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lambdacode_procedure_2demit_v );
DEFCSTRING( t3094, "PROCEDURE-EMIT" );
EXTERNTSCPP( gencode_optional_2dargs, XAL1( TSCP ) );
EXTERNTSCP( gencode_optional_2dargs_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( expform_cname, XAL1( TSCP ) );
EXTERNTSCP( expform_cname_v );
EXTERNTSCPP( lap_emit_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dlap_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( expform_vname, XAL1( TSCP ) );
EXTERNTSCP( expform_vname_v );
EXTERNTSCPP( lap_save_2dcurrent_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_save_2dcurrent_2dlap_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCP( gencode_free_2ddisplay_v );
EXTERNTSCPP( ambdacode_ace_2demit_561a03cc, XAL1( TSCP ) );
EXTERNTSCP( ambdacode_ace_2demit_561a03cc_v );
EXTERNTSCPP( ambdacode_ody_2dgenc_da78cf6b, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ambdacode_ody_2dgenc_da78cf6b_v );
EXTERNTSCPP( ambdacode__2ddisplay_cfffb4a9, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ambdacode__2ddisplay_cfffb4a9_v );
EXTERNTSCPP( lap_done_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_done_2dlap_v );

TSCP  lambdacode_procedure_2demit( l2145, i2146, e2147, b2148 )
        TSCP  l2145, i2146, e2147, b2148;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3094 );
        X1 = plist_get( i2146, c2236 );
        X2 = gencode_optional_2dargs( i2146 );
        if  ( FALSE( X2 ) )  goto L3098;
        X5 = sc_cons( X2, EMPTYLIST );
        X4 = X5;
        goto L3099;
L3098:
        X4 = EMPTYLIST;
L3099:
        X3 = scrt1_append_2dtwo( X1, X4 );
        X4 = expform_cname( i2146 );
        X5 = EMPTYLIST;
        X5 = CONS( X5, EMPTYLIST );
        X7 = plist_get( i2146, c2230 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2231 ) ) );
        if  ( EQ( _S2CUINT( l2145 ), _S2CUINT( c2164 ) ) )  goto L3105;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X9 = CONS( expform_cname( X4 ), X9 );
        if  ( FALSE( X2 ) )  goto L3107;
        X10 = _TSCP( 4 );
        goto L3108;
L3107:
        X10 = _TSCP( 0 );
L3108:
        X9 = CONS( X10, X9 );
        X8 = CONS( scrt1_cons_2a( c2166, 
                                  CONS( scrt1_length( X1 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( l2145 ), X8 ) );
        lap_emit_2dlap( X7 );
L3105:
        X7 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        SETGEN( PAIR_CAR( X5 ), X7 );
        X10 = X3;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L3111:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3112;
        X9 = X11;
        goto L3119;
L3112:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3115;
        scrt1__24__car_2derror( X10 );
L3115:
        X15 = PAIR_CAR( X10 );
        X14 = expform_vname( X15 );
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L3118;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L3111 );
L3118:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3123;
        scdebug_error( c2205, 
                       c2206, CONS( X12, EMPTYLIST ) );
L3123:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L3111 );
L3119:
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_append_2dtwo( X9, X10 ), EMPTYLIST );
        X7 = scrt1_cons_2a( c2170, 
                            CONS( expform_cname( X4 ), X8 ) );
        lap_emit_2dlap( X7 );
        lap_emit_2dlap( c2215 );
        lap_emit_2dlap( c2216 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( gencode_free_2ddisplay_v, X8 );
        X7 = scrt1_cons_2a( c2217, CONS( c2218, X8 ) );
        lap_emit_2dlap( X7 );
        ambdacode_ace_2demit_561a03cc( i2146 );
        X7 = ambdacode__2ddisplay_cfffb4a9( X3, 
                                            gencode_free_2ddisplay_v );
        ambdacode_ody_2dgenc_da78cf6b( c2221, 
                                       e2147, X3, X7, b2148 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2223, CONS( _TSCP( 0 ), X8 ) );
        lap_emit_2dlap( X7 );
        lap_emit_2dlap( c2224 );
        X7 = lap_save_2dcurrent_2dlap( PAIR_CAR( X5 ) );
        POPSTACKTRACE( lap_done_2dlap( X7 ) );
}

DEFTSCP( ambdacode_ure_2demit_8ce41db4_v );
DEFCSTRING( t3125, "CLOSED-PROCEDURE-EMIT" );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );
EXTERNTSCPP( ambdacode__2dclosure_56745b5, XAL1( TSCP ) );
EXTERNTSCP( ambdacode__2dclosure_56745b5_v );
EXTERNTSCPP( ambdacode__2ddisplay_41b1bac7, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ambdacode__2ddisplay_41b1bac7_v );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );

TSCP  ambdacode_ure_2demit_8ce41db4( l2238, 
                                     i2239, e2240, b2241 )
        TSCP  l2238, i2239, e2240, b2241;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3125 );
        X1 = plist_get( i2239, c2236 );
        X2 = gencode_optional_2dargs( i2239 );
        X4 = CONS( plist_get( i2239, c2353 ), EMPTYLIST );
        X4 = CONS( c2218, X4 );
        X4 = CONS( c2350, X4 );
        X3 = expform_newv( c2348, CONS( c2349, X4 ) );
        if  ( FALSE( X2 ) )  goto L3130;
        X7 = sc_cons( X2, EMPTYLIST );
        X6 = X7;
        goto L3131;
L3130:
        X6 = EMPTYLIST;
L3131:
        X8 = sc_cons( X3, EMPTYLIST );
        X7 = X8;
        X5 = scrt1_append_2dtwo( X6, X7 );
        X4 = scrt1_append_2dtwo( X1, X5 );
        X5 = expform_cname( i2239 );
        X6 = EMPTYLIST;
        X6 = CONS( X6, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( ambdacode__2dclosure_56745b5( i2239 ), X9 );
        X9 = CONS( expform_cname( X5 ), X9 );
        if  ( FALSE( X2 ) )  goto L3137;
        X10 = _TSCP( 4 );
        goto L3138;
L3137:
        X10 = _TSCP( 0 );
L3138:
        X9 = CONS( X10, X9 );
        X8 = CONS( scrt1_cons_2a( c2166, 
                                  CONS( scrt1_length( X1 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( l2238 ), X8 ) );
        lap_emit_2dlap( X7 );
        X7 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        SETGEN( PAIR_CAR( X6 ), X7 );
        X10 = X4;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L3141:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3142;
        X9 = X11;
        goto L3149;
L3142:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3145;
        scrt1__24__car_2derror( X10 );
L3145:
        X15 = PAIR_CAR( X10 );
        X14 = expform_vname( X15 );
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L3148;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L3141 );
L3148:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3153;
        scdebug_error( c2205, 
                       c2206, CONS( X12, EMPTYLIST ) );
L3153:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L3141 );
L3149:
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_append_2dtwo( X9, X10 ), EMPTYLIST );
        X7 = scrt1_cons_2a( c2170, 
                            CONS( expform_cname( X5 ), X8 ) );
        lap_emit_2dlap( X7 );
        lap_emit_2dlap( c2215 );
        lap_emit_2dlap( c2216 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( gencode_free_2ddisplay_v, X8 );
        X7 = scrt1_cons_2a( c2217, CONS( c2218, X8 ) );
        lap_emit_2dlap( X7 );
        ambdacode_ace_2demit_561a03cc( i2239 );
        X7 = ambdacode__2ddisplay_41b1bac7( i2239, X3 );
        if  ( FALSE( X7 ) )  goto L3156;
        X8 = lap_use_2dlap_2dtemp(  );
        X9 = ambdacode__2ddisplay_cfffb4a9( X4, 
                                            gencode_free_2ddisplay_v );
        ambdacode_ody_2dgenc_da78cf6b( X8, 
                                       e2240, X4, X9, b2241 );
        X9 = X7;
        X10 = EMPTYLIST;
        X11 = EMPTYLIST;
L3161:
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3169;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3165;
        scrt1__24__car_2derror( X9 );
L3165:
        X14 = PAIR_CAR( X9 );
        X13 = lap_emit_2dlap( X14 );
        X12 = sc_cons( X13, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3168;
        X13 = PAIR_CDR( X9 );
        X11 = X12;
        X10 = X12;
        X9 = X13;
        GOBACK( L3161 );
L3168:
        X13 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3173;
        scdebug_error( c2205, 
                       c2206, CONS( X11, EMPTYLIST ) );
L3173:
        X11 = SETGEN( PAIR_CDR( X11 ), X12 );
        X9 = X13;
        GOBACK( L3161 );
L3169:
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( expform_vname( X8 ), X10 );
        X9 = scrt1_cons_2a( c2165, CONS( c2221, X10 ) );
        lap_emit_2dlap( X9 );
        goto L3157;
L3156:
        ambdacode_ody_2dgenc_da78cf6b( c2221, 
                                       e2240, X4, X4, b2241 );
L3157:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2223, CONS( _TSCP( 0 ), X8 ) );
        lap_emit_2dlap( X7 );
        lap_emit_2dlap( c2224 );
        X7 = lap_save_2dcurrent_2dlap( PAIR_CAR( X6 ) );
        POPSTACKTRACE( lap_done_2dlap( X7 ) );
}

DEFTSCP( ambdacode__2ddisplay_cfffb4a9_v );
DEFCSTRING( t3175, "PROC-ARGS-TO-DISPLAY" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  ambdacode__2ddisplay_cfffb4a9( f2357, d2358 )
        TSCP  f2357, d2358;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3175 );
        if  ( FALSE( f2357 ) )  goto L3177;
        if  ( EQ( TSCPTAG( f2357 ), PAIRTAG ) )  goto L3180;
        scrt1__24__car_2derror( f2357 );
L3180:
        X1 = PAIR_CAR( f2357 );
        if  ( FALSE( plist_get( X1, c2218 ) ) )  goto L3183;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( expform_vname( X1 ), X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2368, 
                                                 CONS( d2358, X4 ) ), 
                                  X3 ) );
        lap_emit_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2368, CONS( d2358, X3 ) );
        X4 = PAIR_CDR( f2357 );
        if  ( BITAND( BITOR( _S2CINT( d2358 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3187;
        X5 = _TSCP( IPLUS( _S2CINT( d2358 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3188;
L3187:
        X5 = scrt2__2b_2dtwo( d2358, _TSCP( 4 ) );
L3188:
        X3 = ambdacode__2ddisplay_cfffb4a9( X4, X5 );
        POPSTACKTRACE( sc_cons( X2, X3 ) );
L3183:
        X3 = PAIR_CDR( f2357 );
        X2 = ambdacode__2ddisplay_cfffb4a9( X3, d2358 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3177:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( ambdacode__2dclosure_56745b5_v );
DEFCSTRING( t3190, "CLOSED-PROC-CLOSURE" );

TSCP  ambdacode__2dclosure_56745b5( i2384 )
        TSCP  i2384;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3190 );
        X2 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( i2384, 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3193;
        X4 = X1;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L3196:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3197;
        X3 = X5;
        goto L3205;
L3197:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3200;
        scrt1__24__car_2derror( X4 );
L3200:
        X9 = PAIR_CAR( X4 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2368, 
                            CONS( plist_get( X9, c2218 ), 
                                  X10 ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3204;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L3196 );
L3204:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3209;
        scdebug_error( c2205, 
                       c2206, CONS( X6, EMPTYLIST ) );
L3209:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L3196 );
L3205:
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_append_2dtwo( X3, X4 ), EMPTYLIST );
        X2 = CONS( scrt1_length( X1 ), X2 );
        POPSTACKTRACE( scrt1_cons_2a( c2387, 
                                      CONS( c2169, X2 ) ) );
L3193:
        POPSTACKTRACE( c2169 );
}

DEFTSCP( ambdacode__2ddisplay_41b1bac7_v );
DEFCSTRING( t3211, "CLOSED-PROC-DISPLAY" );
EXTERNTSCPP( lambdacode_l2442, XAL2( TSCP, TSCP ) );

TSCP  lambdacode_l2442( i2444, v2445 )
        TSCP  i2444, v2445;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside CLOSED-PROC-DISPLAY]" );
        if  ( FALSE( v2445 ) )  goto L3216;
        X1 = lap_use_2dlap_2dtemp(  );
        if  ( EQ( TSCPTAG( v2445 ), PAIRTAG ) )  goto L3219;
        scrt1__24__car_2derror( v2445 );
L3219:
        X3 = PAIR_CAR( v2445 );
        X2 = plist_get( X3, c2218 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( c2368, CONS( X2, X5 ) ), 
                   X4 );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X1 ), X4 ) );
        lap_emit_2dlap( X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( i2444, X5 );
        X4 = CONS( scrt1_cons_2a( c2449, 
                                  CONS( expform_vname( DISPLAY( 0 ) ), 
                                        X5 ) ), 
                   X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2368, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( expform_vname( X1 ), X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2368, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        if  ( BITAND( BITOR( _S2CINT( i2444 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3222;
        X5 = _TSCP( IPLUS( _S2CINT( i2444 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3223;
L3222:
        X5 = scrt2__2b_2dtwo( i2444, _TSCP( 4 ) );
L3223:
        X6 = PAIR_CDR( v2445 );
        X4 = lambdacode_l2442( X5, X6 );
        POPSTACKTRACE( sc_cons( X3, X4 ) );
L3216:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  ambdacode__2ddisplay_41b1bac7( i2436, c2437 )
        TSCP  i2436, c2437;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3211 );
        DISPLAY( 0 ) = c2437;
        X2 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( i2436, 
                                          PROCEDURE_CLOSURE( X2 ) );
        SDVAL = lambdacode_l2442( _TSCP( 0 ), X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ambdacode_ace_2demit_561a03cc_v );
DEFCSTRING( t3225, "STACK-TRACE-EMIT" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  ambdacode_ace_2demit_561a03cc( l2467 )
        TSCP  l2467;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3225 );
        if  ( FALSE( SYMBOL_VALUE( sc_2dstack_2dtrace_v ) ) )  goto L3227;
        X1 = plist_get( l2467, c2512 );
        if  ( FALSE( X1 ) )  goto L3239;
        X2 = plist_get( X1, c2483 );
        X3 = SYMBOL_VALUE( current_2ddefine_2dname_v );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X3 ) ) )  goto L3239;
        X2 = plist_get( l2467, c2230 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2231 ) ) )  goto L3239;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = SYMBOL_VALUE( current_2ddefine_2dstring_v );
        X2 = scrt1_cons_2a( c2493, 
                            CONS( expform_vname( X4 ), X3 ) );
        POPSTACKTRACE( lap_emit_2dlap( X2 ) );
L3227:
        POPSTACKTRACE( FALSEVALUE );
L3239:
        X3 = CONS( c2508, EMPTYLIST );
        X4 = SYMBOL_VALUE( current_2ddefine_2dname_v );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )  goto L3241;
        scdebug_error( c2499, 
                       c2500, CONS( X4, EMPTYLIST ) );
L3241:
        X3 = CONS( SYMBOL_NAME( X4 ), X3 );
        X3 = CONS( c2503, X3 );
        if  ( FALSE( X1 ) )  goto L3243;
        X5 = plist_get( X1, c2483 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )  goto L3246;
        scdebug_error( c2499, 
                       c2500, CONS( X5, EMPTYLIST ) );
L3246:
        X4 = SYMBOL_NAME( X5 );
        goto L3244;
L3243:
        X4 = expform_cname( l2467 );
L3244:
        X2 = scrt3_string_2dappend( CONS( X4, X3 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2493, 
                            CONS( scrt1_cons_2a( c2494, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        POPSTACKTRACE( lap_emit_2dlap( X3 ) );
}

DEFTSCP( ambdacode_ody_2dgenc_da78cf6b_v );
DEFCSTRING( t3249, "LAMBDA-BODY-GENC" );
EXTERNTSCP( gencode_e_2dlambda_7a3ae383_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( lambdacode_reserve_2ddisplay, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( lambdacode_reserve_2ddisplay_v );
EXTERNTSCPP( gencode_code_2dlabel, XAL1( TSCP ) );
EXTERNTSCP( gencode_code_2dlabel_v );
EXTERNTSCPP( ambdacode_ind_2dvars_b19ac457, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ambdacode_ind_2dvars_b19ac457_v );
EXTERNTSCPP( ambdacode_ils_2dgenc_66c68d48, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ambdacode_ils_2dgenc_66c68d48_v );
EXTERNTSCPP( gencode_exp_2dgenc, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( gencode_exp_2dgenc_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  ambdacode_ody_2dgenc_da78cf6b( l2514, 
                                     e2515, 
                                     v2516, v2517, b2518 )
        TSCP  l2514, e2515, v2516, v2517, b2518;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3249 );
        l2514 = CONS( l2514, EMPTYLIST );
        v2516 = CONS( v2516, EMPTYLIST );
        v2517 = CONS( v2517, EMPTYLIST );
        if  ( NEQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3251;
        X3 = PAIR_CAR( e2515 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3252;
L3251:
        X2 = FALSEVALUE;
L3252:
        if  ( FALSE( X2 ) )  goto L3255;
        if  ( EQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3258;
        scrt1__24__cdr_2derror( e2515 );
L3258:
        X3 = PAIR_CDR( e2515 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3261;
        scrt1__24__car_2derror( X3 );
L3261:
        X1 = PAIR_CAR( X3 );
        goto L3256;
L3255:
        X1 = X2;
L3256:
        X2 = gencode_e_2dlambda_7a3ae383_v;
        X3 = PAIR_CAR( l2514 );
        X4 = gencode_free_2ddisplay_v;
        X5 = plist_get( X1, c2662 );
        gencode_e_2dlambda_7a3ae383_v = X1;
        X6 = X5;
L3269:
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3270;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3274;
        scrt1__24__car_2derror( X6 );
L3274:
        X7 = PAIR_CAR( X6 );
        X10 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X7, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X11 = plist_get( X7, c2236 );
        X12 = plist_get( X7, c2583 );
        X10 = scrt1_append_2dtwo( X11, X12 );
        X8 = scrt1_append_2dtwo( X9, X10 );
        X9 = X8;
L3279:
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3280;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3284;
        scrt1__24__car_2derror( X9 );
L3284:
        X10 = PAIR_CAR( X9 );
        if  ( TRUE( scrt1_memq( X10, PAIR_CAR( v2516 ) ) ) )  goto L3287;
        X13 = sc_cons( X10, EMPTYLIST );
        X12 = X13;
        X11 = scrt1_append_2dtwo( PAIR_CAR( v2516 ), X12 );
        SETGEN( PAIR_CAR( v2516 ), X11 );
        X11 = scrt1_append_2dtwo( PAIR_CAR( v2517 ), c2578 );
        SETGEN( PAIR_CAR( v2517 ), X11 );
L3287:
        X9 = PAIR_CDR( X9 );
        GOBACK( L3279 );
L3280:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3269 );
L3270:
        if  ( FALSE( X5 ) )  goto L3295;
        if  ( NEQ( _S2CUINT( PAIR_CAR( l2514 ) ), 
                   _S2CUINT( c2591 ) ) )  goto L3295;
        X6 = lap_use_2dlap_2dtemp(  );
        SETGEN( PAIR_CAR( l2514 ), X6 );
L3295:
        lambdacode_reserve_2ddisplay( PAIR_CAR( v2516 ), b2518 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2593, 
                            CONS( gencode_code_2dlabel( X1 ), X7 ) );
        lap_emit_2dlap( X6 );
        X6 = ambdacode_ind_2dvars_b19ac457( PAIR_CAR( v2516 ), 
                                            PAIR_CAR( v2517 ), 
                                            b2518 );
        if  ( NEQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3298;
        X9 = PAIR_CAR( e2515 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3299;
L3298:
        X8 = FALSEVALUE;
L3299:
        if  ( FALSE( X8 ) )  goto L3302;
        if  ( EQ( TSCPTAG( e2515 ), PAIRTAG ) )  goto L3305;
        scrt1__24__cdr_2derror( e2515 );
L3305:
        X9 = PAIR_CDR( e2515 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3308;
        scrt1__24__cdr_2derror( X9 );
L3308:
        X7 = PAIR_CDR( X9 );
        goto L3303;
L3302:
        X7 = X8;
L3303:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3311;
        ambdacode_ils_2dgenc_66c68d48( PAIR_CAR( l2514 ), 
                                       e2515, X6 );
        goto L3312;
L3311:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3315;
        scrt1__24__cdr_2derror( X7 );
L3315:
        if  ( FALSE( PAIR_CDR( X7 ) ) )  goto L3317;
        X8 = PAIR_CAR( X7 );
        gencode_exp_2dgenc( c2164, X8, X6 );
        goto L3318;
L3317:
        X8 = PAIR_CAR( X7 );
        gencode_exp_2dgenc( PAIR_CAR( l2514 ), X8, X6 );
L3318:
        X7 = PAIR_CDR( X7 );
        GOBACK( L3303 );
L3312:
        if  ( EQ( _S2CUINT( PAIR_CAR( l2514 ) ), 
                  _S2CUINT( X3 ) ) )  goto L3322;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( expform_vname( PAIR_CAR( l2514 ) ), X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X3 ), X7 ) );
        lap_emit_2dlap( X6 );
        lap_drop_2dlap_2dtemp( PAIR_CAR( l2514 ) );
L3322:
        gencode_free_2ddisplay_v = X4;
        gencode_e_2dlambda_7a3ae383_v = X2;
        if  ( FALSE( X5 ) )  goto L3325;
        X8 = SYMBOL_VALUE( _tersection_b4e3b790_v );
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = SYMBOL_VALUE( _ion_2dinfo_e0971c7d_v );
        X6 = UNKNOWNCALL( X6, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                                    PROCEDURE_CLOSURE( X6 ) ) );
L3325:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ambdacode_ils_2dgenc_66c68d48_v );
DEFCSTRING( t3327, "LAMBDA-TAILS-GENC" );
EXTERNTSCPP( gencode_make_2dlabel, XAL0(  ) );
EXTERNTSCP( gencode_make_2dlabel_v );
EXTERNTSCP( gencode_ion_2dinfo_f92fd619_v );
EXTERNTSCPP( lap_save_2dlap_2dtemps, XAL0(  ) );
EXTERNTSCP( lap_save_2dlap_2dtemps_v );
EXTERNTSCPP( lap_restore_2dlap_2dtemps, XAL1( TSCP ) );
EXTERNTSCP( lap_restore_2dlap_2dtemps_v );

TSCP  ambdacode_ils_2dgenc_66c68d48( l2695, e2696, b2697 )
        TSCP  l2695, e2696, b2697;
{
        TSCP  X19, 
              X18, 
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

        PUSHSTACKTRACE( t3327 );
        if  ( NEQ( TSCPTAG( e2696 ), PAIRTAG ) )  goto L3329;
        X3 = PAIR_CAR( e2696 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3330;
L3329:
        X2 = FALSEVALUE;
L3330:
        if  ( FALSE( X2 ) )  goto L3333;
        if  ( EQ( TSCPTAG( e2696 ), PAIRTAG ) )  goto L3336;
        scrt1__24__cdr_2derror( e2696 );
L3336:
        X3 = PAIR_CDR( e2696 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3339;
        scrt1__24__car_2derror( X3 );
L3339:
        X1 = PAIR_CAR( X3 );
        goto L3334;
L3333:
        X1 = X2;
L3334:
        X2 = plist_get( X1, c2662 );
        if  ( FALSE( X2 ) )  goto L3343;
        if  ( EQ( _S2CUINT( l2695 ), _S2CUINT( c2221 ) ) )  goto L3345;
        X3 = gencode_make_2dlabel(  );
        goto L3344;
L3345:
        X3 = FALSEVALUE;
        goto L3344;
L3343:
        X3 = FALSEVALUE;
L3344:
        X4 = gencode_ion_2dinfo_f92fd619_v;
        X5 = X2;
L3350:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3351;
        if  ( FALSE( X3 ) )  goto L3354;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2716, CONS( X3, X7 ) );
        lap_emit_2dlap( X6 );
L3354:
        X6 = lap_save_2dlap_2dtemps(  );
        X7 = gencode_free_2ddisplay_v;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3359;
        scrt1__24__car_2derror( X5 );
L3359:
        X8 = PAIR_CAR( X5 );
        X10 = plist_get( X8, c2236 );
        X11 = plist_get( X8, c2583 );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X10 = SYMBOL_VALUE( retrieve_2dcondition_2dinfo_v );
        X10 = UNKNOWNCALL( X10, 1 );
        gencode_ion_2dinfo_f92fd619_v = VIA( PROCEDURE_CODE( X10 ) )( X8, 
                                                                      PROCEDURE_CLOSURE( X10 ) );
        X10 = plist_get( X8, c2132 );
        X12 = X9;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L3364:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L3365;
        X11 = X13;
        goto L3376;
L3365:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3368;
        scrt1__24__car_2derror( X12 );
L3368:
        X17 = PAIR_CAR( X12 );
        X18 = plist_get( X17, c2218 );
        if  ( FALSE( X18 ) )  goto L3372;
        X19 = CONS( EMPTYLIST, EMPTYLIST );
        X16 = scrt1_cons_2a( c2368, CONS( X18, X19 ) );
        goto L3373;
L3372:
        X16 = X17;
L3373:
        X15 = sc_cons( X16, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L3375;
        X16 = PAIR_CDR( X12 );
        X14 = X15;
        X13 = X15;
        X12 = X16;
        GOBACK( L3364 );
L3375:
        X16 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L3380;
        scdebug_error( c2205, 
                       c2206, CONS( X14, EMPTYLIST ) );
L3380:
        X14 = SETGEN( PAIR_CDR( X14 ), X15 );
        X12 = X16;
        GOBACK( L3364 );
L3376:
        ambdacode_ody_2dgenc_da78cf6b( l2695, 
                                       X10, X9, X11, b2697 );
        X10 = SYMBOL_VALUE( store_2dcondition_2dinfo_v );
        X10 = UNKNOWNCALL( X10, 1 );
        VIA( PROCEDURE_CODE( X10 ) )( X8, 
                                      PROCEDURE_CLOSURE( X10 ) );
        lap_restore_2dlap_2dtemps( X6 );
        gencode_free_2ddisplay_v = X7;
        X5 = PAIR_CDR( X5 );
        GOBACK( L3350 );
L3351:
        if  ( FALSE( X3 ) )  goto L3383;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = scrt1_cons_2a( c2593, CONS( X3, X6 ) );
        lap_emit_2dlap( X5 );
L3383:
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, X4 ) );
}

DEFTSCP( lambdacode_reserve_2ddisplay_v );
DEFCSTRING( t3385, "RESERVE-DISPLAY" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );
EXTERNTSCP( gencode_max_2ddisplay_v );

TSCP  lambdacode_reserve_2ddisplay( v2830, b2831 )
        TSCP  v2830, b2831;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3385 );
        X1 = v2830;
L3388:
        if  ( FALSE( X1 ) )  goto L3389;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3392;
        scrt1__24__car_2derror( X1 );
L3392:
        X2 = PAIR_CAR( X1 );
        if  ( FALSE( plist_get( X2, c2218 ) ) )  goto L3397;
        if  ( TRUE( scrt1_memq( X2, b2831 ) ) )  goto L3397;
        X4 = gencode_free_2ddisplay_v;
        X5 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3401;
        X6 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3402;
L3401:
        X6 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L3402:
        gencode_free_2ddisplay_v = X6;
        X3 = X4;
        plist_put( X2, c2218, X3 );
L3397:
        X1 = PAIR_CDR( X1 );
        GOBACK( L3388 );
L3389:
        X2 = SYMBOL_VALUE( lap_2dmax_2ddisplay_v );
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3406;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L3408;
        X4 = X2;
        goto L3407;
L3408:
        X4 = X3;
        goto L3407;
L3406:
        X4 = scrt2_max_2dtwo( X2, X3 );
L3407:
        SETGENTL( SYMBOL_VALUE( lap_2dmax_2ddisplay_v ), X4 );
        X2 = gencode_max_2ddisplay_v;
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3411;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L3413;
        X4 = X2;
        goto L3412;
L3413:
        X4 = X3;
        goto L3412;
L3411:
        X4 = scrt2_max_2dtwo( X2, X3 );
L3412:
        POPSTACKTRACE( SET( gencode_max_2ddisplay_v, X4 ) );
}

DEFTSCP( ambdacode_ind_2dvars_b19ac457_v );
DEFCSTRING( t3415, "LAMBDA-BIND-VARS" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  ambdacode_ind_2dvars_b19ac457( v2882, v2883, b2884 )
        TSCP  v2882, v2883, b2884;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3415 );
        X1 = v2882;
        X2 = v2883;
        X3 = b2884;
L3418:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3419;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3423;
        scrt1__24__car_2derror( X2 );
L3423:
        X4 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3426;
        scrt1__24__car_2derror( X1 );
L3426:
        X5 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2909 ) ) )  goto L3429;
        X6 = scrt1_memq( X5, X3 );
        goto L3430;
L3429:
        X6 = FALSEVALUE;
L3430:
        if  ( TRUE( X6 ) )  goto L3476;
        if  ( FALSE( plist_get( X5, c2218 ) ) )  goto L3434;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2909 ) ) )  goto L3476;
        if  ( FALSE( plist_get( X5, c2919 ) ) )  goto L3438;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X8 = CONS( scrt1_cons_2a( c2994, 
                                  CONS( expform_vname( X4 ), X9 ) ), 
                   X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2368, 
                                                 CONS( plist_get( X5, 
                                                                  c2218 ), 
                                                       X9 ) ), 
                                  X8 ) );
        lap_emit_2dlap( X7 );
        goto L3476;
L3438:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2368, 
                            CONS( plist_get( X5, c2218 ), X8 ) );
        if  ( TRUE( scrt1_equal_3f( X4, X7 ) ) )  goto L3476;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( expform_vname( X4 ), X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2368, 
                                                 CONS( plist_get( X5, 
                                                                  c2218 ), 
                                                       X9 ) ), 
                                  X8 ) );
        lap_emit_2dlap( X7 );
        goto L3476;
L3434:
        X7 = plist_get( X5, c2919 );
        if  ( FALSE( X7 ) )  goto L3455;
        if  ( FALSE( plist_get( X5, c2926 ) ) )  goto L3446;
        X8 = FALSEVALUE;
        goto L3447;
L3446:
        X8 = TRUEVALUE;
L3447:
        if  ( TRUE( X8 ) )  goto L3452;
        X10 = plist_get( X5, c2926 );
        X9 = plist_get( X10, c2111 );
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( c2106 ) ) )  goto L3452;
L3455:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2909 ) ) )  goto L3457;
        if  ( FALSE( plist_get( X5, c2926 ) ) )  goto L3459;
        X6 = FALSEVALUE;
        goto L3460;
L3459:
        X6 = TRUEVALUE;
L3460:
        if  ( TRUE( X6 ) )  goto L3465;
        X8 = plist_get( X5, c2926 );
        X7 = plist_get( X8, c2111 );
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( c2106 ) ) )  goto L3465;
        goto L3476;
L3457:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X4 ) ) )  goto L3476;
        if  ( TRUE( scrt1_memq( X5, X3 ) ) )  goto L3471;
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2945, X6 );
L3471:
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( expform_vname( X4 ), X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X5 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3476;
L3465:
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2945, X6 );
        goto L3476;
L3452:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2909 ) ) )  goto L3473;
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2945, X6 );
        goto L3476;
L3473:
        if  ( FALSE( scrt1_memq( X5, X3 ) ) )  goto L3475;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( c2169, X8 );
        X7 = CONS( scrt1_cons_2a( c2967, 
                                  CONS( expform_vname( X4 ), X8 ) ), 
                   X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X5 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3476;
L3475:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X4 ) ) )  goto L3477;
        X7 = X4;
        goto L3478;
L3477:
        X7 = lap_use_2dlap_2dtemp(  );
L3478:
        X6 = plist_get( X7, c2945 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X8 = CONS( scrt1_cons_2a( c2967, 
                                  CONS( expform_vname( X4 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, CONS( X6, X8 ) );
        lap_emit_2dlap( X7 );
        plist_put( X5, c2945, X6 );
L3476:
        X4 = PAIR_CDR( X1 );
        X5 = PAIR_CDR( X2 );
        X6 = PAIR_CAR( X1 );
        if  ( TRUE( scrt1_memq( X6, X3 ) ) )  goto L3483;
        X6 = PAIR_CAR( X1 );
        X3 = sc_cons( X6, X3 );
L3483:
        X2 = X5;
        X1 = X4;
        GOBACK( L3418 );
L3419:
        POPSTACKTRACE( X3 );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt3__init();
        scrt2__init();
        scdebug__init();
        lap__init();
        expform__init();
        gencode__init();
        plist__init();
        scrt1__init();
        MAXDISPLAY( 1 );
}

void  lambdacode__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(lambdacode SCHEME->C COMPILER 15mar93jfb)" );
        INITIALIZEVAR( t3074, 
                       ADR( lambdacode__24lambda_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lambdacode__24lambda_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3094, 
                       ADR( lambdacode_procedure_2demit_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lambdacode_procedure_2demit, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3125, 
                       ADR( ambdacode_ure_2demit_8ce41db4_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ambdacode_ure_2demit_8ce41db4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3175, 
                       ADR( ambdacode__2ddisplay_cfffb4a9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ambdacode__2ddisplay_cfffb4a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3190, 
                       ADR( ambdacode__2dclosure_56745b5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ambdacode__2dclosure_56745b5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3211, 
                       ADR( ambdacode__2ddisplay_41b1bac7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ambdacode__2ddisplay_41b1bac7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3225, 
                       ADR( ambdacode_ace_2demit_561a03cc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ambdacode_ace_2demit_561a03cc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3249, 
                       ADR( ambdacode_ody_2dgenc_da78cf6b_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ambdacode_ody_2dgenc_da78cf6b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3327, 
                       ADR( ambdacode_ils_2dgenc_66c68d48_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ambdacode_ils_2dgenc_66c68d48, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3385, 
                       ADR( lambdacode_reserve_2ddisplay_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdacode_reserve_2ddisplay, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3415, 
                       ADR( ambdacode_ind_2dvars_b19ac457_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ambdacode_ind_2dvars_b19ac457, 
                                      EMPTYLIST ) );
        return;
}
