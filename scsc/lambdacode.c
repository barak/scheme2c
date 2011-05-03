
/* SCHEME->C */

#include <objects.h>

void lambdacode__init();
DEFSTATICTSCP( indirect_2dlambda_2dlexical_v );
DEFSTATICTSCP( sc_2dstack_2dtrace_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( current_2ddefine_2dstring_v );
DEFSTATICTSCP( _ion_2dinfo_e0971c7d_v );
DEFSTATICTSCP( _tersection_b4e3b790_v );
DEFSTATICTSCP( retrieve_2dcondition_2dinfo_v );
DEFSTATICTSCP( store_2dcondition_2dinfo_v );
DEFSTATICTSCP( lap_2dmax_2ddisplay_v );
DEFSTATICTSCP( c3019 );
DEFCSTRING( t3084, "CONS" );
DEFSTATICTSCP( c2992 );
DEFSTATICTSCP( c2970 );
DEFSTATICTSCP( c2951 );
DEFSTATICTSCP( c2944 );
DEFSTATICTSCP( c2934 );
DEFSTATICTSCP( c2741 );
DEFSTATICTSCP( c2687 );
DEFSTATICTSCP( c2618 );
DEFSTATICTSCP( c2616 );
DEFSTATICTSCP( c2608 );
DEFSTATICTSCP( c2603 );
DEFCSTRING( t3085, "]" );
DEFSTATICTSCP( c2534 );
DEFCSTRING( t3086, " [inside " );
DEFSTATICTSCP( c2529 );
DEFCSTRING( t3087, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2526 );
DEFSTATICTSCP( c2525 );
DEFSTATICTSCP( c2520 );
DEFSTATICTSCP( c2519 );
DEFSTATICTSCP( c2509 );
DEFCSTRING( t3088, "CLOSURE_VAR" );
DEFSTATICTSCP( c2475 );
DEFCSTRING( t3089, "MAKECLOSURE" );
DEFSTATICTSCP( c2413 );
DEFCSTRING( t3090, "DISPLAY" );
DEFSTATICTSCP( c2394 );
DEFSTATICTSCP( c2379 );
DEFSTATICTSCP( c2376 );
DEFSTATICTSCP( c2375 );
DEFSTATICTSCP( c2374 );
DEFSTATICTSCP( c2250 );
DEFSTATICTSCP( c2245 );
DEFSTATICTSCP( c2244 );
DEFSTATICTSCP( c2236 );
DEFSTATICTSCP( c2232 );
DEFSTATICTSCP( c2224 );
DEFCSTRING( t3092, "}" );
DEFSTATICTSCP( t3091 );
DEFSTATICTSCP( t3093 );
DEFSTATICTSCP( c2223 );
DEFSTATICTSCP( c2221 );
DEFSTATICTSCP( c2218 );
DEFSTATICTSCP( c2217 );
DEFSTATICTSCP( c2216 );
DEFSTATICTSCP( c2215 );
DEFCSTRING( t3095, "{" );
DEFSTATICTSCP( t3094 );
DEFCSTRING( t3096, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2206 );
DEFSTATICTSCP( c2205 );
DEFSTATICTSCP( c2170 );
DEFCSTRING( t3097, "EMPTYLIST" );
DEFSTATICTSCP( c2169 );
DEFCSTRING( t3098, "MAKEPROCEDURE" );
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
        c3019 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c3019 ) );
        c2992 = CSTRING_TSCP( t3084 );
        CONSTANTEXP( ADR( c2992 ) );
        c2970 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2970 ) );
        c2951 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2951 ) );
        c2944 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2944 ) );
        c2934 = STRINGTOSYMBOL( CSTRING_TSCP( "UNDEFINED" ) );
        CONSTANTEXP( ADR( c2934 ) );
        c2741 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTO" ) );
        CONSTANTEXP( ADR( c2741 ) );
        c2687 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAILS" ) );
        CONSTANTEXP( ADR( c2687 ) );
        c2618 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2618 ) );
        c2616 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        CONSTANTEXP( ADR( c2616 ) );
        c2608 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2608 ) );
        c2603 = EMPTYLIST;
        c2603 = CONS( c2934, c2603 );
        CONSTANTEXP( ADR( c2603 ) );
        c2534 = CSTRING_TSCP( t3085 );
        CONSTANTEXP( ADR( c2534 ) );
        c2529 = CSTRING_TSCP( t3086 );
        CONSTANTEXP( ADR( c2529 ) );
        c2526 = CSTRING_TSCP( t3087 );
        CONSTANTEXP( ADR( c2526 ) );
        c2525 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2525 ) );
        c2520 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2520 ) );
        c2519 = STRINGTOSYMBOL( CSTRING_TSCP( "PUSHSTACKTRACE" ) );
        CONSTANTEXP( ADR( c2519 ) );
        c2509 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2509 ) );
        c2475 = CSTRING_TSCP( t3088 );
        CONSTANTEXP( ADR( c2475 ) );
        c2413 = CSTRING_TSCP( t3089 );
        CONSTANTEXP( ADR( c2413 ) );
        c2394 = CSTRING_TSCP( t3090 );
        CONSTANTEXP( ADR( c2394 ) );
        c2379 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY-CLOSEP" ) );
        CONSTANTEXP( ADR( c2379 ) );
        c2376 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSUREP" ) );
        CONSTANTEXP( ADR( c2376 ) );
        c2375 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2375 ) );
        c2374 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSE" ) );
        CONSTANTEXP( ADR( c2374 ) );
        c2250 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2250 ) );
        c2245 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2245 ) );
        c2244 = STRINGTOSYMBOL( CSTRING_TSCP( "NESTIN" ) );
        CONSTANTEXP( ADR( c2244 ) );
        c2236 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2236 ) );
        c2232 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2232 ) );
        c2224 = EMPTYLIST;
        t3091 = CSTRING_TSCP( t3092 );
        c2224 = CONS( t3091, c2224 );
        t3093 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        c2224 = CONS( t3093, c2224 );
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
        t3094 = CSTRING_TSCP( t3095 );
        c2215 = CONS( t3094, c2215 );
        c2215 = CONS( t3093, c2215 );
        CONSTANTEXP( ADR( c2215 ) );
        c2206 = CSTRING_TSCP( t3096 );
        CONSTANTEXP( ADR( c2206 ) );
        c2205 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2205 ) );
        c2170 = STRINGTOSYMBOL( CSTRING_TSCP( "PROC" ) );
        CONSTANTEXP( ADR( c2170 ) );
        c2169 = CSTRING_TSCP( t3097 );
        CONSTANTEXP( ADR( c2169 ) );
        c2166 = CSTRING_TSCP( t3098 );
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
DEFCSTRING( t3099, "$LAMBDA-GENC" );
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

        PUSHSTACKTRACE( t3099 );
        if  ( NEQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3101;
        X3 = PAIR_CAR( e2093 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3102;
L3101:
        X2 = FALSEVALUE;
L3102:
        if  ( FALSE( X2 ) )  goto L3105;
        if  ( EQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3108;
        scrt1__24__cdr_2derror( e2093 );
L3108:
        X3 = PAIR_CDR( e2093 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3111;
        scrt1__24__car_2derror( X3 );
L3111:
        X1 = PAIR_CAR( X3 );
        goto L3106;
L3105:
        X1 = X2;
L3106:
        X2 = plist_get( X1, c2111 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2102 ) ) )  goto L3115;
        POPSTACKTRACE( lambdacode_procedure_2demit( l2092, 
                                                    X1, 
                                                    e2093, b2094 ) );
L3115:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2106 ) ) )  goto L3117;
        POPSTACKTRACE( ambdacode_ure_2demit_8ce41db4( l2092, 
                                                      X1, 
                                                      e2093, b2094 ) );
L3117:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lambdacode_procedure_2demit_v );
DEFCSTRING( t3119, "PROCEDURE-EMIT" );
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
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
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

        PUSHSTACKTRACE( t3119 );
        X1 = plist_get( i2146, c2250 );
        X2 = gencode_optional_2dargs( i2146 );
        if  ( FALSE( X2 ) )  goto L3123;
        X5 = sc_cons( X2, EMPTYLIST );
        X4 = X5;
        goto L3124;
L3123:
        X4 = EMPTYLIST;
L3124:
        X3 = scrt1_append_2dtwo( X1, X4 );
        X4 = expform_cname( i2146 );
        X5 = EMPTYLIST;
        X5 = CONS( X5, EMPTYLIST );
        X7 = plist_get( i2146, c2244 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2245 ) ) );
        if  ( EQ( _S2CUINT( l2145 ), _S2CUINT( c2164 ) ) )  goto L3130;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X9 = CONS( expform_cname( X4 ), X9 );
        if  ( FALSE( X2 ) )  goto L3132;
        X10 = _TSCP( 4 );
        goto L3133;
L3132:
        X10 = _TSCP( 0 );
L3133:
        X9 = CONS( X10, X9 );
        X8 = CONS( scrt1_cons_2a( c2166, 
                                  CONS( scrt1_length( X1 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( l2145 ), X8 ) );
        lap_emit_2dlap( X7 );
L3130:
        X7 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        SETGEN( PAIR_CAR( X5 ), X7 );
        X10 = X3;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L3136:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3137;
        X9 = X11;
        goto L3144;
L3137:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3140;
        scrt1__24__car_2derror( X10 );
L3140:
        X15 = PAIR_CAR( X10 );
        X14 = expform_vname( X15 );
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L3143;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L3136 );
L3143:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3148;
        scdebug_error( c2205, 
                       c2206, CONS( X12, EMPTYLIST ) );
L3148:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L3136 );
L3144:
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
        X7 = plist_get( i2146, c2232 );
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3150;
        X7 = plist_get( i2146, c2232 );
        plist_put( X7, c2236, TRUEVALUE );
L3150:
        X7 = lap_save_2dcurrent_2dlap( PAIR_CAR( X5 ) );
        POPSTACKTRACE( lap_done_2dlap( X7 ) );
}

DEFTSCP( ambdacode_ure_2demit_8ce41db4_v );
DEFCSTRING( t3152, "CLOSED-PROCEDURE-EMIT" );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );
EXTERNTSCPP( ambdacode__2dclosure_56745b5, XAL1( TSCP ) );
EXTERNTSCP( ambdacode__2dclosure_56745b5_v );
EXTERNTSCPP( ambdacode__2ddisplay_41b1bac7, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ambdacode__2ddisplay_41b1bac7_v );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );

TSCP  ambdacode_ure_2demit_8ce41db4( l2252, 
                                     i2253, e2254, b2255 )
        TSCP  l2252, i2253, e2254, b2255;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3152 );
        X1 = plist_get( i2253, c2250 );
        X2 = gencode_optional_2dargs( i2253 );
        X4 = CONS( plist_get( i2253, c2379 ), EMPTYLIST );
        X4 = CONS( c2218, X4 );
        X4 = CONS( c2376, X4 );
        X3 = expform_newv( c2374, CONS( c2375, X4 ) );
        if  ( FALSE( X2 ) )  goto L3157;
        X7 = sc_cons( X2, EMPTYLIST );
        X6 = X7;
        goto L3158;
L3157:
        X6 = EMPTYLIST;
L3158:
        X8 = sc_cons( X3, EMPTYLIST );
        X7 = X8;
        X5 = scrt1_append_2dtwo( X6, X7 );
        X4 = scrt1_append_2dtwo( X1, X5 );
        X5 = expform_cname( i2253 );
        X6 = EMPTYLIST;
        X6 = CONS( X6, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( ambdacode__2dclosure_56745b5( i2253 ), X9 );
        X9 = CONS( expform_cname( X5 ), X9 );
        if  ( FALSE( X2 ) )  goto L3164;
        X10 = _TSCP( 4 );
        goto L3165;
L3164:
        X10 = _TSCP( 0 );
L3165:
        X9 = CONS( X10, X9 );
        X8 = CONS( scrt1_cons_2a( c2166, 
                                  CONS( scrt1_length( X1 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( l2252 ), X8 ) );
        lap_emit_2dlap( X7 );
        X7 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        SETGEN( PAIR_CAR( X6 ), X7 );
        X10 = X4;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L3168:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3169;
        X9 = X11;
        goto L3176;
L3169:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3172;
        scrt1__24__car_2derror( X10 );
L3172:
        X15 = PAIR_CAR( X10 );
        X14 = expform_vname( X15 );
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L3175;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L3168 );
L3175:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3180;
        scdebug_error( c2205, 
                       c2206, CONS( X12, EMPTYLIST ) );
L3180:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L3168 );
L3176:
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
        ambdacode_ace_2demit_561a03cc( i2253 );
        X7 = ambdacode__2ddisplay_41b1bac7( i2253, X3 );
        if  ( FALSE( X7 ) )  goto L3183;
        X8 = lap_use_2dlap_2dtemp(  );
        X9 = ambdacode__2ddisplay_cfffb4a9( X4, 
                                            gencode_free_2ddisplay_v );
        ambdacode_ody_2dgenc_da78cf6b( X8, 
                                       e2254, X4, X9, b2255 );
        X9 = X7;
        X10 = EMPTYLIST;
        X11 = EMPTYLIST;
L3188:
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3196;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3192;
        scrt1__24__car_2derror( X9 );
L3192:
        X14 = PAIR_CAR( X9 );
        X13 = lap_emit_2dlap( X14 );
        X12 = sc_cons( X13, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3195;
        X13 = PAIR_CDR( X9 );
        X11 = X12;
        X10 = X12;
        X9 = X13;
        GOBACK( L3188 );
L3195:
        X13 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3200;
        scdebug_error( c2205, 
                       c2206, CONS( X11, EMPTYLIST ) );
L3200:
        X11 = SETGEN( PAIR_CDR( X11 ), X12 );
        X9 = X13;
        GOBACK( L3188 );
L3196:
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( expform_vname( X8 ), X10 );
        X9 = scrt1_cons_2a( c2165, CONS( c2221, X10 ) );
        lap_emit_2dlap( X9 );
        goto L3184;
L3183:
        ambdacode_ody_2dgenc_da78cf6b( c2221, 
                                       e2254, X4, X4, b2255 );
L3184:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2223, CONS( _TSCP( 0 ), X8 ) );
        lap_emit_2dlap( X7 );
        lap_emit_2dlap( c2224 );
        X7 = plist_get( i2253, c2232 );
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3202;
        X7 = plist_get( i2253, c2232 );
        plist_put( X7, c2236, TRUEVALUE );
L3202:
        X7 = lap_save_2dcurrent_2dlap( PAIR_CAR( X6 ) );
        POPSTACKTRACE( lap_done_2dlap( X7 ) );
}

DEFTSCP( ambdacode__2ddisplay_cfffb4a9_v );
DEFCSTRING( t3204, "PROC-ARGS-TO-DISPLAY" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  ambdacode__2ddisplay_cfffb4a9( f2383, d2384 )
        TSCP  f2383, d2384;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3204 );
        if  ( FALSE( f2383 ) )  goto L3206;
        if  ( EQ( TSCPTAG( f2383 ), PAIRTAG ) )  goto L3209;
        scrt1__24__car_2derror( f2383 );
L3209:
        X1 = PAIR_CAR( f2383 );
        if  ( FALSE( plist_get( X1, c2218 ) ) )  goto L3212;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( expform_vname( X1 ), X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2394, 
                                                 CONS( d2384, X4 ) ), 
                                  X3 ) );
        lap_emit_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2394, CONS( d2384, X3 ) );
        X4 = PAIR_CDR( f2383 );
        if  ( BITAND( BITOR( _S2CINT( d2384 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3216;
        X5 = _TSCP( IPLUS( _S2CINT( d2384 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3217;
L3216:
        X5 = scrt2__2b_2dtwo( d2384, _TSCP( 4 ) );
L3217:
        X3 = ambdacode__2ddisplay_cfffb4a9( X4, X5 );
        POPSTACKTRACE( sc_cons( X2, X3 ) );
L3212:
        X3 = PAIR_CDR( f2383 );
        X2 = ambdacode__2ddisplay_cfffb4a9( X3, d2384 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3206:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( ambdacode__2dclosure_56745b5_v );
DEFCSTRING( t3219, "CLOSED-PROC-CLOSURE" );

TSCP  ambdacode__2dclosure_56745b5( i2410 )
        TSCP  i2410;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3219 );
        X2 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( i2410, 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3222;
        X4 = X1;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L3225:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3226;
        X3 = X5;
        goto L3234;
L3226:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3229;
        scrt1__24__car_2derror( X4 );
L3229:
        X9 = PAIR_CAR( X4 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2394, 
                            CONS( plist_get( X9, c2218 ), 
                                  X10 ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3233;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L3225 );
L3233:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3238;
        scdebug_error( c2205, 
                       c2206, CONS( X6, EMPTYLIST ) );
L3238:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L3225 );
L3234:
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_append_2dtwo( X3, X4 ), EMPTYLIST );
        X2 = CONS( scrt1_length( X1 ), X2 );
        POPSTACKTRACE( scrt1_cons_2a( c2413, 
                                      CONS( c2169, X2 ) ) );
L3222:
        POPSTACKTRACE( c2169 );
}

DEFTSCP( ambdacode__2ddisplay_41b1bac7_v );
DEFCSTRING( t3240, "CLOSED-PROC-DISPLAY" );
EXTERNTSCPP( lambdacode_l2468, XAL2( TSCP, TSCP ) );

TSCP  lambdacode_l2468( i2470, v2471 )
        TSCP  i2470, v2471;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside CLOSED-PROC-DISPLAY]" );
        if  ( FALSE( v2471 ) )  goto L3245;
        X1 = lap_use_2dlap_2dtemp(  );
        if  ( EQ( TSCPTAG( v2471 ), PAIRTAG ) )  goto L3248;
        scrt1__24__car_2derror( v2471 );
L3248:
        X3 = PAIR_CAR( v2471 );
        X2 = plist_get( X3, c2218 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( c2394, CONS( X2, X5 ) ), 
                   X4 );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X1 ), X4 ) );
        lap_emit_2dlap( X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( i2470, X5 );
        X4 = CONS( scrt1_cons_2a( c2475, 
                                  CONS( expform_vname( DISPLAY( 0 ) ), 
                                        X5 ) ), 
                   X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2394, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( expform_vname( X1 ), X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2394, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        if  ( BITAND( BITOR( _S2CINT( i2470 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3251;
        X5 = _TSCP( IPLUS( _S2CINT( i2470 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3252;
L3251:
        X5 = scrt2__2b_2dtwo( i2470, _TSCP( 4 ) );
L3252:
        X6 = PAIR_CDR( v2471 );
        X4 = lambdacode_l2468( X5, X6 );
        POPSTACKTRACE( sc_cons( X3, X4 ) );
L3245:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  ambdacode__2ddisplay_41b1bac7( i2462, c2463 )
        TSCP  i2462, c2463;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3240 );
        DISPLAY( 0 ) = c2463;
        X2 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( i2462, 
                                          PROCEDURE_CLOSURE( X2 ) );
        SDVAL = lambdacode_l2468( _TSCP( 0 ), X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ambdacode_ace_2demit_561a03cc_v );
DEFCSTRING( t3254, "STACK-TRACE-EMIT" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  ambdacode_ace_2demit_561a03cc( l2493 )
        TSCP  l2493;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3254 );
        if  ( FALSE( SYMBOL_VALUE( sc_2dstack_2dtrace_v ) ) )  goto L3256;
        X1 = plist_get( l2493, c2232 );
        if  ( FALSE( X1 ) )  goto L3268;
        X2 = plist_get( X1, c2509 );
        X3 = SYMBOL_VALUE( current_2ddefine_2dname_v );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X3 ) ) )  goto L3268;
        X2 = plist_get( l2493, c2244 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2245 ) ) )  goto L3268;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = SYMBOL_VALUE( current_2ddefine_2dstring_v );
        X2 = scrt1_cons_2a( c2519, 
                            CONS( expform_vname( X4 ), X3 ) );
        POPSTACKTRACE( lap_emit_2dlap( X2 ) );
L3256:
        POPSTACKTRACE( FALSEVALUE );
L3268:
        X3 = CONS( c2534, EMPTYLIST );
        X4 = SYMBOL_VALUE( current_2ddefine_2dname_v );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )  goto L3270;
        scdebug_error( c2525, 
                       c2526, CONS( X4, EMPTYLIST ) );
L3270:
        X3 = CONS( SYMBOL_NAME( X4 ), X3 );
        X3 = CONS( c2529, X3 );
        if  ( FALSE( X1 ) )  goto L3272;
        X5 = plist_get( X1, c2509 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )  goto L3275;
        scdebug_error( c2525, 
                       c2526, CONS( X5, EMPTYLIST ) );
L3275:
        X4 = SYMBOL_NAME( X5 );
        goto L3273;
L3272:
        X4 = expform_cname( l2493 );
L3273:
        X2 = scrt3_string_2dappend( CONS( X4, X3 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2519, 
                            CONS( scrt1_cons_2a( c2520, 
                                                 CONS( X2, X5 ) ), 
                                  X4 ) );
        POPSTACKTRACE( lap_emit_2dlap( X3 ) );
}

DEFTSCP( ambdacode_ody_2dgenc_da78cf6b_v );
DEFCSTRING( t3278, "LAMBDA-BODY-GENC" );
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

TSCP  ambdacode_ody_2dgenc_da78cf6b( l2539, 
                                     e2540, 
                                     v2541, v2542, b2543 )
        TSCP  l2539, e2540, v2541, v2542, b2543;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3278 );
        l2539 = CONS( l2539, EMPTYLIST );
        v2541 = CONS( v2541, EMPTYLIST );
        v2542 = CONS( v2542, EMPTYLIST );
        if  ( NEQ( TSCPTAG( e2540 ), PAIRTAG ) )  goto L3280;
        X3 = PAIR_CAR( e2540 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3281;
L3280:
        X2 = FALSEVALUE;
L3281:
        if  ( FALSE( X2 ) )  goto L3284;
        if  ( EQ( TSCPTAG( e2540 ), PAIRTAG ) )  goto L3287;
        scrt1__24__cdr_2derror( e2540 );
L3287:
        X3 = PAIR_CDR( e2540 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3290;
        scrt1__24__car_2derror( X3 );
L3290:
        X1 = PAIR_CAR( X3 );
        goto L3285;
L3284:
        X1 = X2;
L3285:
        X2 = gencode_e_2dlambda_7a3ae383_v;
        X3 = PAIR_CAR( l2539 );
        X4 = gencode_free_2ddisplay_v;
        X5 = plist_get( X1, c2687 );
        gencode_e_2dlambda_7a3ae383_v = X1;
        X6 = X5;
L3298:
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3299;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3303;
        scrt1__24__car_2derror( X6 );
L3303:
        X7 = PAIR_CAR( X6 );
        X10 = SYMBOL_VALUE( indirect_2dlambda_2dlexical_v );
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X7, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X11 = plist_get( X7, c2250 );
        X12 = plist_get( X7, c2608 );
        X10 = scrt1_append_2dtwo( X11, X12 );
        X8 = scrt1_append_2dtwo( X9, X10 );
        X9 = X8;
L3308:
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3309;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3313;
        scrt1__24__car_2derror( X9 );
L3313:
        X10 = PAIR_CAR( X9 );
        if  ( TRUE( scrt1_memq( X10, PAIR_CAR( v2541 ) ) ) )  goto L3316;
        X13 = sc_cons( X10, EMPTYLIST );
        X12 = X13;
        X11 = scrt1_append_2dtwo( PAIR_CAR( v2541 ), X12 );
        SETGEN( PAIR_CAR( v2541 ), X11 );
        X11 = scrt1_append_2dtwo( PAIR_CAR( v2542 ), c2603 );
        SETGEN( PAIR_CAR( v2542 ), X11 );
L3316:
        X9 = PAIR_CDR( X9 );
        GOBACK( L3308 );
L3309:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3298 );
L3299:
        if  ( FALSE( X5 ) )  goto L3324;
        if  ( NEQ( _S2CUINT( PAIR_CAR( l2539 ) ), 
                   _S2CUINT( c2616 ) ) )  goto L3324;
        X6 = lap_use_2dlap_2dtemp(  );
        SETGEN( PAIR_CAR( l2539 ), X6 );
L3324:
        lambdacode_reserve_2ddisplay( PAIR_CAR( v2541 ), b2543 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2618, 
                            CONS( gencode_code_2dlabel( X1 ), X7 ) );
        lap_emit_2dlap( X6 );
        X6 = ambdacode_ind_2dvars_b19ac457( PAIR_CAR( v2541 ), 
                                            PAIR_CAR( v2542 ), 
                                            b2543 );
        if  ( NEQ( TSCPTAG( e2540 ), PAIRTAG ) )  goto L3327;
        X9 = PAIR_CAR( e2540 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3328;
L3327:
        X8 = FALSEVALUE;
L3328:
        if  ( FALSE( X8 ) )  goto L3331;
        if  ( EQ( TSCPTAG( e2540 ), PAIRTAG ) )  goto L3334;
        scrt1__24__cdr_2derror( e2540 );
L3334:
        X9 = PAIR_CDR( e2540 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3337;
        scrt1__24__cdr_2derror( X9 );
L3337:
        X7 = PAIR_CDR( X9 );
        goto L3332;
L3331:
        X7 = X8;
L3332:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3340;
        ambdacode_ils_2dgenc_66c68d48( PAIR_CAR( l2539 ), 
                                       e2540, X6 );
        goto L3341;
L3340:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3344;
        scrt1__24__cdr_2derror( X7 );
L3344:
        if  ( FALSE( PAIR_CDR( X7 ) ) )  goto L3346;
        X8 = PAIR_CAR( X7 );
        gencode_exp_2dgenc( c2164, X8, X6 );
        goto L3347;
L3346:
        X8 = PAIR_CAR( X7 );
        gencode_exp_2dgenc( PAIR_CAR( l2539 ), X8, X6 );
L3347:
        X7 = PAIR_CDR( X7 );
        GOBACK( L3332 );
L3341:
        if  ( EQ( _S2CUINT( PAIR_CAR( l2539 ) ), 
                  _S2CUINT( X3 ) ) )  goto L3351;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( expform_vname( PAIR_CAR( l2539 ) ), X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X3 ), X7 ) );
        lap_emit_2dlap( X6 );
        lap_drop_2dlap_2dtemp( PAIR_CAR( l2539 ) );
L3351:
        gencode_free_2ddisplay_v = X4;
        gencode_e_2dlambda_7a3ae383_v = X2;
        if  ( FALSE( X5 ) )  goto L3354;
        X8 = SYMBOL_VALUE( _tersection_b4e3b790_v );
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = SYMBOL_VALUE( _ion_2dinfo_e0971c7d_v );
        X6 = UNKNOWNCALL( X6, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                                    PROCEDURE_CLOSURE( X6 ) ) );
L3354:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ambdacode_ils_2dgenc_66c68d48_v );
DEFCSTRING( t3356, "LAMBDA-TAILS-GENC" );
EXTERNTSCPP( gencode_make_2dlabel, XAL0(  ) );
EXTERNTSCP( gencode_make_2dlabel_v );
EXTERNTSCP( gencode_ion_2dinfo_f92fd619_v );
EXTERNTSCPP( lap_save_2dlap_2dtemps, XAL0(  ) );
EXTERNTSCP( lap_save_2dlap_2dtemps_v );
EXTERNTSCPP( lap_restore_2dlap_2dtemps, XAL1( TSCP ) );
EXTERNTSCP( lap_restore_2dlap_2dtemps_v );

TSCP  ambdacode_ils_2dgenc_66c68d48( l2720, e2721, b2722 )
        TSCP  l2720, e2721, b2722;
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

        PUSHSTACKTRACE( t3356 );
        if  ( NEQ( TSCPTAG( e2721 ), PAIRTAG ) )  goto L3358;
        X3 = PAIR_CAR( e2721 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2132 ) ) );
        goto L3359;
L3358:
        X2 = FALSEVALUE;
L3359:
        if  ( FALSE( X2 ) )  goto L3362;
        if  ( EQ( TSCPTAG( e2721 ), PAIRTAG ) )  goto L3365;
        scrt1__24__cdr_2derror( e2721 );
L3365:
        X3 = PAIR_CDR( e2721 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3368;
        scrt1__24__car_2derror( X3 );
L3368:
        X1 = PAIR_CAR( X3 );
        goto L3363;
L3362:
        X1 = X2;
L3363:
        X2 = plist_get( X1, c2687 );
        if  ( FALSE( X2 ) )  goto L3372;
        if  ( EQ( _S2CUINT( l2720 ), _S2CUINT( c2221 ) ) )  goto L3374;
        X3 = gencode_make_2dlabel(  );
        goto L3373;
L3374:
        X3 = FALSEVALUE;
        goto L3373;
L3372:
        X3 = FALSEVALUE;
L3373:
        X4 = gencode_ion_2dinfo_f92fd619_v;
        X5 = X2;
L3379:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3380;
        if  ( FALSE( X3 ) )  goto L3383;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2741, CONS( X3, X7 ) );
        lap_emit_2dlap( X6 );
L3383:
        X6 = lap_save_2dlap_2dtemps(  );
        X7 = gencode_free_2ddisplay_v;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3388;
        scrt1__24__car_2derror( X5 );
L3388:
        X8 = PAIR_CAR( X5 );
        X10 = plist_get( X8, c2250 );
        X11 = plist_get( X8, c2608 );
        X9 = scrt1_append_2dtwo( X10, X11 );
        X10 = SYMBOL_VALUE( retrieve_2dcondition_2dinfo_v );
        X10 = UNKNOWNCALL( X10, 1 );
        gencode_ion_2dinfo_f92fd619_v = VIA( PROCEDURE_CODE( X10 ) )( X8, 
                                                                      PROCEDURE_CLOSURE( X10 ) );
        X10 = plist_get( X8, c2132 );
        X12 = X9;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L3393:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L3394;
        X11 = X13;
        goto L3405;
L3394:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3397;
        scrt1__24__car_2derror( X12 );
L3397:
        X17 = PAIR_CAR( X12 );
        X18 = plist_get( X17, c2218 );
        if  ( FALSE( X18 ) )  goto L3401;
        X19 = CONS( EMPTYLIST, EMPTYLIST );
        X16 = scrt1_cons_2a( c2394, CONS( X18, X19 ) );
        goto L3402;
L3401:
        X16 = X17;
L3402:
        X15 = sc_cons( X16, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L3404;
        X16 = PAIR_CDR( X12 );
        X14 = X15;
        X13 = X15;
        X12 = X16;
        GOBACK( L3393 );
L3404:
        X16 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L3409;
        scdebug_error( c2205, 
                       c2206, CONS( X14, EMPTYLIST ) );
L3409:
        X14 = SETGEN( PAIR_CDR( X14 ), X15 );
        X12 = X16;
        GOBACK( L3393 );
L3405:
        ambdacode_ody_2dgenc_da78cf6b( l2720, 
                                       X10, X9, X11, b2722 );
        X10 = SYMBOL_VALUE( store_2dcondition_2dinfo_v );
        X10 = UNKNOWNCALL( X10, 1 );
        VIA( PROCEDURE_CODE( X10 ) )( X8, 
                                      PROCEDURE_CLOSURE( X10 ) );
        lap_restore_2dlap_2dtemps( X6 );
        gencode_free_2ddisplay_v = X7;
        X5 = PAIR_CDR( X5 );
        GOBACK( L3379 );
L3380:
        if  ( FALSE( X3 ) )  goto L3412;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = scrt1_cons_2a( c2618, CONS( X3, X6 ) );
        lap_emit_2dlap( X5 );
L3412:
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, X4 ) );
}

DEFTSCP( lambdacode_reserve_2ddisplay_v );
DEFCSTRING( t3414, "RESERVE-DISPLAY" );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );
EXTERNTSCP( gencode_max_2ddisplay_v );

TSCP  lambdacode_reserve_2ddisplay( v2855, b2856 )
        TSCP  v2855, b2856;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3414 );
        X1 = v2855;
L3417:
        if  ( FALSE( X1 ) )  goto L3418;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3421;
        scrt1__24__car_2derror( X1 );
L3421:
        X2 = PAIR_CAR( X1 );
        if  ( FALSE( plist_get( X2, c2218 ) ) )  goto L3426;
        if  ( TRUE( scrt1_memq( X2, b2856 ) ) )  goto L3426;
        X4 = gencode_free_2ddisplay_v;
        X5 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3430;
        X6 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3431;
L3430:
        X6 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L3431:
        gencode_free_2ddisplay_v = X6;
        X3 = X4;
        plist_put( X2, c2218, X3 );
L3426:
        X1 = PAIR_CDR( X1 );
        GOBACK( L3417 );
L3418:
        X2 = SYMBOL_VALUE( lap_2dmax_2ddisplay_v );
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3435;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L3437;
        X4 = X2;
        goto L3436;
L3437:
        X4 = X3;
        goto L3436;
L3435:
        X4 = scrt2_max_2dtwo( X2, X3 );
L3436:
        SETGENTL( SYMBOL_VALUE( lap_2dmax_2ddisplay_v ), X4 );
        X2 = gencode_max_2ddisplay_v;
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3440;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L3442;
        X4 = X2;
        goto L3441;
L3442:
        X4 = X3;
        goto L3441;
L3440:
        X4 = scrt2_max_2dtwo( X2, X3 );
L3441:
        POPSTACKTRACE( SET( gencode_max_2ddisplay_v, X4 ) );
}

DEFTSCP( ambdacode_ind_2dvars_b19ac457_v );
DEFCSTRING( t3444, "LAMBDA-BIND-VARS" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  ambdacode_ind_2dvars_b19ac457( v2907, v2908, b2909 )
        TSCP  v2907, v2908, b2909;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3444 );
        X1 = v2907;
        X2 = v2908;
        X3 = b2909;
L3447:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3448;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3452;
        scrt1__24__car_2derror( X2 );
L3452:
        X4 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3455;
        scrt1__24__car_2derror( X1 );
L3455:
        X5 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2934 ) ) )  goto L3458;
        X6 = scrt1_memq( X5, X3 );
        goto L3459;
L3458:
        X6 = FALSEVALUE;
L3459:
        if  ( TRUE( X6 ) )  goto L3505;
        if  ( FALSE( plist_get( X5, c2218 ) ) )  goto L3463;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2934 ) ) )  goto L3505;
        if  ( FALSE( plist_get( X5, c2944 ) ) )  goto L3467;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X8 = CONS( scrt1_cons_2a( c3019, 
                                  CONS( expform_vname( X4 ), X9 ) ), 
                   X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2394, 
                                                 CONS( plist_get( X5, 
                                                                  c2218 ), 
                                                       X9 ) ), 
                                  X8 ) );
        lap_emit_2dlap( X7 );
        goto L3505;
L3467:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2394, 
                            CONS( plist_get( X5, c2218 ), X8 ) );
        if  ( TRUE( scrt1_equal_3f( X4, X7 ) ) )  goto L3505;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( expform_vname( X4 ), X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2165, 
                            CONS( scrt1_cons_2a( c2394, 
                                                 CONS( plist_get( X5, 
                                                                  c2218 ), 
                                                       X9 ) ), 
                                  X8 ) );
        lap_emit_2dlap( X7 );
        goto L3505;
L3463:
        X7 = plist_get( X5, c2944 );
        if  ( FALSE( X7 ) )  goto L3484;
        if  ( FALSE( plist_get( X5, c2951 ) ) )  goto L3475;
        X8 = FALSEVALUE;
        goto L3476;
L3475:
        X8 = TRUEVALUE;
L3476:
        if  ( TRUE( X8 ) )  goto L3481;
        X10 = plist_get( X5, c2951 );
        X9 = plist_get( X10, c2111 );
        if  ( EQ( _S2CUINT( X9 ), _S2CUINT( c2106 ) ) )  goto L3481;
L3484:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2934 ) ) )  goto L3486;
        if  ( FALSE( plist_get( X5, c2951 ) ) )  goto L3488;
        X6 = FALSEVALUE;
        goto L3489;
L3488:
        X6 = TRUEVALUE;
L3489:
        if  ( TRUE( X6 ) )  goto L3494;
        X8 = plist_get( X5, c2951 );
        X7 = plist_get( X8, c2111 );
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( c2106 ) ) )  goto L3494;
        goto L3505;
L3486:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X4 ) ) )  goto L3505;
        if  ( TRUE( scrt1_memq( X5, X3 ) ) )  goto L3500;
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2970, X6 );
L3500:
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( expform_vname( X4 ), X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X5 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3505;
L3494:
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2970, X6 );
        goto L3505;
L3481:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2934 ) ) )  goto L3502;
        X6 = lap_use_2dlap_2dtemp(  );
        plist_put( X5, c2970, X6 );
        goto L3505;
L3502:
        if  ( FALSE( scrt1_memq( X5, X3 ) ) )  goto L3504;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( c2169, X8 );
        X7 = CONS( scrt1_cons_2a( c2992, 
                                  CONS( expform_vname( X4 ), X8 ) ), 
                   X7 );
        X6 = scrt1_cons_2a( c2165, 
                            CONS( expform_vname( X5 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3505;
L3504:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X4 ) ) )  goto L3506;
        X7 = X4;
        goto L3507;
L3506:
        X7 = lap_use_2dlap_2dtemp(  );
L3507:
        X6 = plist_get( X7, c2970 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( c2169, X9 );
        X8 = CONS( scrt1_cons_2a( c2992, 
                                  CONS( expform_vname( X4 ), X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2165, CONS( X6, X8 ) );
        lap_emit_2dlap( X7 );
        plist_put( X5, c2970, X6 );
L3505:
        X4 = PAIR_CDR( X1 );
        X5 = PAIR_CDR( X2 );
        X6 = PAIR_CAR( X1 );
        if  ( TRUE( scrt1_memq( X6, X3 ) ) )  goto L3512;
        X6 = PAIR_CAR( X1 );
        X3 = sc_cons( X6, X3 );
L3512:
        X2 = X5;
        X1 = X4;
        GOBACK( L3447 );
L3448:
        POPSTACKTRACE( X3 );
}

void scrt3__init();
void scrt2__init();
void scdebug__init();
void lap__init();
void expform__init();
void gencode__init();
void plist__init();
void scrt1__init();

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
        sc_segv__handlers();
        INITIALIZEVAR( t3099, 
                       ADR( lambdacode__24lambda_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lambdacode__24lambda_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3119, 
                       ADR( lambdacode_procedure_2demit_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lambdacode_procedure_2demit, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3152, 
                       ADR( ambdacode_ure_2demit_8ce41db4_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ambdacode_ure_2demit_8ce41db4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3204, 
                       ADR( ambdacode__2ddisplay_cfffb4a9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ambdacode__2ddisplay_cfffb4a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3219, 
                       ADR( ambdacode__2dclosure_56745b5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ambdacode__2dclosure_56745b5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3240, 
                       ADR( ambdacode__2ddisplay_41b1bac7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ambdacode__2ddisplay_41b1bac7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3254, 
                       ADR( ambdacode_ace_2demit_561a03cc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ambdacode_ace_2demit_561a03cc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3278, 
                       ADR( ambdacode_ody_2dgenc_da78cf6b_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ambdacode_ody_2dgenc_da78cf6b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3356, 
                       ADR( ambdacode_ils_2dgenc_66c68d48_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ambdacode_ils_2dgenc_66c68d48, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3414, 
                       ADR( lambdacode_reserve_2ddisplay_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lambdacode_reserve_2ddisplay, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3444, 
                       ADR( ambdacode_ind_2dvars_b19ac457_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ambdacode_ind_2dvars_b19ac457, 
                                      EMPTYLIST ) );
        return;
}
