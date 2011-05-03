
/* SCHEME->C */

#include <objects.h>

void misccode__init();
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( top_2dlevel_2dsymbols_v );
DEFSTATICTSCP( module_2dname_2dupcase_v );
DEFSTATICTSCP( current_2ddefine_2dstring_v );
DEFSTATICTSCP( c3036 );
DEFSTATICTSCP( c3029 );
DEFSTATICTSCP( c3022 );
DEFCSTRING( t3123, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2980 );
DEFSTATICTSCP( c2979 );
DEFSTATICTSCP( c2807 );
DEFSTATICTSCP( c2716 );
DEFSTATICTSCP( c2702 );
DEFSTATICTSCP( c2701 );
DEFSTATICTSCP( c2696 );
DEFSTATICTSCP( c2664 );
DEFSTATICTSCP( c2662 );
DEFSTATICTSCP( c2661 );
DEFSTATICTSCP( c2660 );
DEFSTATICTSCP( t3124 );
DEFSTATICTSCP( c2575 );
DEFSTATICTSCP( c2507 );
DEFSTATICTSCP( c2487 );
DEFSTATICTSCP( c2428 );
DEFSTATICTSCP( c2388 );
DEFSTATICTSCP( t3125 );
DEFSTATICTSCP( t3126 );
DEFSTATICTSCP( c2387 );
DEFSTATICTSCP( t3127 );
DEFSTATICTSCP( t3128 );
DEFSTATICTSCP( c2386 );
DEFSTATICTSCP( t3129 );
DEFSTATICTSCP( c2385 );
DEFSTATICTSCP( t3130 );
DEFSTATICTSCP( c2384 );
DEFSTATICTSCP( t3131 );
DEFSTATICTSCP( t3132 );
DEFSTATICTSCP( c2383 );
DEFSTATICTSCP( t3133 );
DEFSTATICTSCP( c2382 );
DEFSTATICTSCP( t3134 );
DEFSTATICTSCP( c2381 );
DEFSTATICTSCP( t3135 );
DEFSTATICTSCP( c2380 );
DEFSTATICTSCP( t3136 );
DEFSTATICTSCP( t3137 );
DEFSTATICTSCP( c2379 );
DEFSTATICTSCP( c2372 );
DEFSTATICTSCP( c2368 );
DEFSTATICTSCP( c2364 );
DEFSTATICTSCP( c2360 );
DEFSTATICTSCP( c2356 );
DEFSTATICTSCP( c2349 );
DEFSTATICTSCP( c2317 );
DEFSTATICTSCP( c2306 );
DEFSTATICTSCP( c2283 );
DEFSTATICTSCP( c2280 );
DEFSTATICTSCP( c2224 );
DEFCSTRING( t3138, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2201 );
DEFSTATICTSCP( c2200 );
DEFSTATICTSCP( c2195 );
DEFSTATICTSCP( c2194 );
DEFSTATICTSCP( c2193 );
DEFSTATICTSCP( c2192 );
DEFSTATICTSCP( c2188 );
DEFSTATICTSCP( c2186 );
DEFSTATICTSCP( c2185 );
DEFCSTRING( t3139, "_" );
DEFSTATICTSCP( c2184 );
DEFSTATICTSCP( c2172 );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2151 );
DEFSTATICTSCP( c2150 );
DEFSTATICTSCP( c2141 );
DEFSTATICTSCP( c2140 );
DEFSTATICTSCP( c2137 );
DEFSTATICTSCP( c2136 );
DEFSTATICTSCP( c2135 );
DEFSTATICTSCP( c2134 );
DEFSTATICTSCP( c2133 );
DEFSTATICTSCP( c2132 );
DEFSTATICTSCP( c2131 );
DEFSTATICTSCP( c2130 );
DEFSTATICTSCP( c2129 );
DEFCSTRING( t3140, "Cannot load value of" );
DEFSTATICTSCP( c2126 );
DEFSTATICTSCP( c2124 );
DEFSTATICTSCP( c2120 );
DEFSTATICTSCP( c2116 );
DEFSTATICTSCP( c2112 );
DEFSTATICTSCP( t3141 );
DEFSTATICTSCP( c2111 );
DEFSTATICTSCP( c2110 );
DEFSTATICTSCP( c2109 );
DEFSTATICTSCP( c2103 );
DEFSTATICTSCP( c2102 );

static void  init_constants()
{
        TSCP  X1;

        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        top_2dlevel_2dsymbols_v = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL-S\
YMBOLS" ) );
        CONSTANTEXP( ADR( top_2dlevel_2dsymbols_v ) );
        module_2dname_2dupcase_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAM\
E-UPCASE" ) );
        CONSTANTEXP( ADR( module_2dname_2dupcase_v ) );
        current_2ddefine_2dstring_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT\
-DEFINE-STRING" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dstring_v ) );
        c3036 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c3036 ) );
        c3029 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c3029 ) );
        c3022 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c3022 ) );
        c2980 = CSTRING_TSCP( t3123 );
        CONSTANTEXP( ADR( c2980 ) );
        c2979 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2979 ) );
        c2807 = STRINGTOSYMBOL( CSTRING_TSCP( "CONDITION-INFO" ) );
        CONSTANTEXP( ADR( c2807 ) );
        c2716 = EMPTYLIST;
        c2716 = CONS( EMPTYLIST, c2716 );
        CONSTANTEXP( ADR( c2716 ) );
        c2702 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTO" ) );
        CONSTANTEXP( ADR( c2702 ) );
        c2701 = STRINGTOSYMBOL( CSTRING_TSCP( "RETURN" ) );
        CONSTANTEXP( ADR( c2701 ) );
        c2696 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2696 ) );
        c2664 = STRINGTOSYMBOL( CSTRING_TSCP( "TRUE" ) );
        CONSTANTEXP( ADR( c2664 ) );
        c2662 = STRINGTOSYMBOL( CSTRING_TSCP( "FALSE" ) );
        CONSTANTEXP( ADR( c2662 ) );
        c2661 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2661 ) );
        c2660 = EMPTYLIST;
        t3124 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        c2660 = CONS( t3124, c2660 );
        c2660 = CONS( c2701, c2660 );
        CONSTANTEXP( ADR( c2660 ) );
        c2575 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2575 ) );
        c2507 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2507 ) );
        c2487 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2487 ) );
        c2428 = STRINGTOSYMBOL( CSTRING_TSCP( "SETGENTL" ) );
        CONSTANTEXP( ADR( c2428 ) );
        c2388 = EMPTYLIST;
        t3125 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        c2388 = CONS( t3125, c2388 );
        t3126 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_CHAR" ) );
        c2388 = CONS( t3126, c2388 );
        CONSTANTEXP( ADR( c2388 ) );
        c2387 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        t3127 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_S2CINT" ) );
        X1 = CONS( t3127, X1 );
        c2387 = CONS( X1, c2387 );
        t3128 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c2387 = CONS( t3128, c2387 );
        CONSTANTEXP( ADR( c2387 ) );
        c2386 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        X1 = CONS( t3127, X1 );
        c2386 = CONS( X1, c2386 );
        t3129 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        c2386 = CONS( t3129, c2386 );
        CONSTANTEXP( ADR( c2386 ) );
        c2385 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        X1 = CONS( t3127, X1 );
        c2385 = CONS( X1, c2385 );
        t3130 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        c2385 = CONS( t3130, c2385 );
        CONSTANTEXP( ADR( c2385 ) );
        c2384 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        t3131 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_S2CUINT" ) );
        X1 = CONS( t3131, X1 );
        c2384 = CONS( X1, c2384 );
        t3132 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        c2384 = CONS( t3132, c2384 );
        CONSTANTEXP( ADR( c2384 ) );
        c2383 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        X1 = CONS( t3131, X1 );
        c2383 = CONS( X1, c2383 );
        t3133 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        c2383 = CONS( t3133, c2383 );
        CONSTANTEXP( ADR( c2383 ) );
        c2382 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        X1 = CONS( t3131, X1 );
        c2382 = CONS( X1, c2382 );
        t3134 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        c2382 = CONS( t3134, c2382 );
        CONSTANTEXP( ADR( c2382 ) );
        c2381 = EMPTYLIST;
        c2381 = CONS( t3125, c2381 );
        t3135 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_POINTER" ) );
        c2381 = CONS( t3135, c2381 );
        CONSTANTEXP( ADR( c2381 ) );
        c2380 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3125, X1 );
        t3136 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_DOUBLE" ) );
        X1 = CONS( t3136, X1 );
        c2380 = CONS( X1, c2380 );
        t3137 = STRINGTOSYMBOL( CSTRING_TSCP( "CFLOAT" ) );
        c2380 = CONS( t3137, c2380 );
        CONSTANTEXP( ADR( c2380 ) );
        c2379 = EMPTYLIST;
        c2379 = CONS( t3125, c2379 );
        c2379 = CONS( t3136, c2379 );
        CONSTANTEXP( ADR( c2379 ) );
        c2372 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        CONSTANTEXP( ADR( c2372 ) );
        c2368 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        CONSTANTEXP( ADR( c2368 ) );
        c2364 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        CONSTANTEXP( ADR( c2364 ) );
        c2360 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        CONSTANTEXP( ADR( c2360 ) );
        c2356 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        CONSTANTEXP( ADR( c2356 ) );
        c2349 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        CONSTANTEXP( ADR( c2349 ) );
        c2317 = STRINGTOSYMBOL( CSTRING_TSCP( "SETGEN" ) );
        CONSTANTEXP( ADR( c2317 ) );
        c2306 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2306 ) );
        c2283 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED-PROCEDURE" ) );
        CONSTANTEXP( ADR( c2283 ) );
        c2280 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c2280 ) );
        c2224 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2224 ) );
        c2201 = CSTRING_TSCP( t3138 );
        CONSTANTEXP( ADR( c2201 ) );
        c2200 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2200 ) );
        c2195 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2195 ) );
        c2194 = STRINGTOSYMBOL( CSTRING_TSCP( "ADR" ) );
        CONSTANTEXP( ADR( c2194 ) );
        c2193 = STRINGTOSYMBOL( CSTRING_TSCP( "INITIALIZEVAR" ) );
        CONSTANTEXP( ADR( c2193 ) );
        c2192 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2192 ) );
        c2188 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        CONSTANTEXP( ADR( c2188 ) );
        c2186 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2186 ) );
        c2185 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFCSTRING" ) );
        CONSTANTEXP( ADR( c2185 ) );
        c2184 = CSTRING_TSCP( t3139 );
        CONSTANTEXP( ADR( c2184 ) );
        c2172 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFTSCP" ) );
        CONSTANTEXP( ADR( c2172 ) );
        c2155 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2155 ) );
        c2151 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2151 ) );
        c2150 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2150 ) );
        c2141 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        CONSTANTEXP( ADR( c2141 ) );
        c2140 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2140 ) );
        c2137 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR_TSCP" ) );
        CONSTANTEXP( ADR( c2137 ) );
        c2136 = STRINGTOSYMBOL( CSTRING_TSCP( "_S2CINT" ) );
        CONSTANTEXP( ADR( c2136 ) );
        c2135 = STRINGTOSYMBOL( CSTRING_TSCP( "S2CINT_TSCP" ) );
        CONSTANTEXP( ADR( c2135 ) );
        c2134 = STRINGTOSYMBOL( CSTRING_TSCP( "_S2CUINT" ) );
        CONSTANTEXP( ADR( c2134 ) );
        c2133 = STRINGTOSYMBOL( CSTRING_TSCP( "S2CUINT_TSCP" ) );
        CONSTANTEXP( ADR( c2133 ) );
        c2132 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER_TSCP" ) );
        CONSTANTEXP( ADR( c2132 ) );
        c2131 = STRINGTOSYMBOL( CSTRING_TSCP( "CDOUBLE" ) );
        CONSTANTEXP( ADR( c2131 ) );
        c2130 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE_TSCP" ) );
        CONSTANTEXP( ADR( c2130 ) );
        c2129 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2129 ) );
        c2126 = CSTRING_TSCP( t3140 );
        CONSTANTEXP( ADR( c2126 ) );
        c2124 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        CONSTANTEXP( ADR( c2124 ) );
        c2120 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        CONSTANTEXP( ADR( c2120 ) );
        c2116 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP" ) );
        CONSTANTEXP( ADR( c2116 ) );
        c2112 = EMPTYLIST;
        t3141 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        c2112 = CONS( t3141, c2112 );
        c2112 = CONS( c2141, c2112 );
        CONSTANTEXP( ADR( c2112 ) );
        c2111 = EMPTYLIST;
        c2111 = CONS( c2372, c2111 );
        c2111 = CONS( c2368, c2111 );
        c2111 = CONS( c2364, c2111 );
        CONSTANTEXP( ADR( c2111 ) );
        c2110 = EMPTYLIST;
        c2110 = CONS( c2360, c2110 );
        c2110 = CONS( c2356, c2110 );
        c2110 = CONS( c2349, c2110 );
        CONSTANTEXP( ADR( c2110 ) );
        c2109 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        CONSTANTEXP( ADR( c2109 ) );
        c2103 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2103 ) );
        c2102 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2102 ) );
}

DEFTSCP( misccode_symbol_2dgenc_v );
DEFCSTRING( t3142, "SYMBOL-GENC" );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( gencode_lookup, XAL2( TSCP, TSCP ) );
EXTERNTSCP( gencode_lookup_v );
EXTERNTSCPP( lap_emit_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dlap_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( expform_vname, XAL1( TSCP ) );
EXTERNTSCP( expform_vname_v );

TSCP  misccode_symbol_2dgenc( l2093, e2094, b2095 )
        TSCP  l2093, e2094, b2095;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3142 );
        X2 = plist_get( e2094, c2150 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2151 ) ) )  goto L3144;
        X1 = plist_get( e2094, c2155 );
        goto L3145;
L3144:
        X1 = FALSEVALUE;
L3145:
        X2 = gencode_lookup( e2094, b2095 );
        if  ( EQ( _S2CUINT( l2093 ), _S2CUINT( c2102 ) ) )  goto L3147;
        if  ( FALSE( X1 ) )  goto L3149;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( FALSE( plist_get( e2094, c2140 ) ) )  goto L3151;
        X5 = c2141;
        goto L3152;
L3151:
        X5 = X1;
L3152:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2109 ) ) )  goto L3154;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2137, CONS( X2, X7 ) );
        goto L3167;
L3154:
        if  ( FALSE( scrt1_memv( X5, c2110 ) ) )  goto L3156;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2135, 
                            CONS( scrt1_cons_2a( c2136, 
                                                 CONS( X2, X8 ) ), 
                                  X7 ) );
        goto L3167;
L3156:
        if  ( FALSE( scrt1_memv( X5, c2111 ) ) )  goto L3158;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2133, 
                            CONS( scrt1_cons_2a( c2134, 
                                                 CONS( X2, X8 ) ), 
                                  X7 ) );
        goto L3167;
L3158:
        if  ( FALSE( scrt1_memv( X5, c2112 ) ) )  goto L3160;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2132, CONS( X2, X7 ) );
        goto L3167;
L3160:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2116 ) ) )  goto L3162;
        X6 = X2;
        goto L3167;
L3162:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2120 ) ) )  goto L3164;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2130, 
                            CONS( scrt1_cons_2a( c2131, 
                                                 CONS( X2, X8 ) ), 
                                  X7 ) );
        goto L3167;
L3164:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2124 ) ) )  goto L3166;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2130, CONS( X2, X7 ) );
        goto L3167;
L3166:
        X8 = plist_get( e2094, c2129 );
        X7 = SYMBOL_VALUE( report_2derror_v );
        X7 = UNKNOWNCALL( X7, 2 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( c2126, 
                                          X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
L3167:
        X4 = CONS( X6, X4 );
        X3 = scrt1_cons_2a( c2103, 
                            CONS( expform_vname( l2093 ), X4 ) );
        POPSTACKTRACE( lap_emit_2dlap( X3 ) );
L3149:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( X2, X4 );
        X3 = scrt1_cons_2a( c2103, 
                            CONS( expform_vname( l2093 ), X4 ) );
        POPSTACKTRACE( lap_emit_2dlap( X3 ) );
L3147:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( misccode__24define_2dgenc_v );
DEFCSTRING( t3168, "$DEFINE-GENC" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( gencode_make_2dc_2dglobal, XAL0(  ) );
EXTERNTSCP( gencode_make_2dc_2dglobal_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( lap_emit_2dglobal_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dglobal_2dlap_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( gencode_exp_2dgenc, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( gencode_exp_2dgenc_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  misccode__24define_2dgenc( l2158, e2159, b2160 )
        TSCP  l2158, e2159, b2160;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3168 );
        if  ( NEQ( TSCPTAG( e2159 ), PAIRTAG ) )  goto L3170;
        X3 = PAIR_CAR( e2159 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2224 ) ) );
        goto L3171;
L3170:
        X2 = FALSEVALUE;
L3171:
        if  ( FALSE( X2 ) )  goto L3174;
        if  ( EQ( TSCPTAG( e2159 ), PAIRTAG ) )  goto L3177;
        scrt1__24__cdr_2derror( e2159 );
L3177:
        X3 = PAIR_CDR( e2159 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3180;
        scrt1__24__car_2derror( X3 );
L3180:
        X1 = PAIR_CAR( X3 );
        goto L3175;
L3174:
        X1 = X2;
L3175:
        if  ( NEQ( TSCPTAG( e2159 ), PAIRTAG ) )  goto L3183;
        X4 = PAIR_CAR( e2159 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2224 ) ) );
        goto L3184;
L3183:
        X3 = FALSEVALUE;
L3184:
        if  ( FALSE( X3 ) )  goto L3187;
        X2 = scrt1_caddr( e2159 );
        goto L3188;
L3187:
        X2 = X3;
L3188:
        X3 = gencode_make_2dc_2dglobal(  );
        X5 = plist_get( X1, c2129 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )  goto L3192;
        scdebug_error( c2200, 
                       c2201, CONS( X5, EMPTYLIST ) );
L3192:
        X4 = SYMBOL_NAME( X5 );
        X4 = CONS( X4, EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  plist_get( X1, c2129 ) );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = scrt1_cons_2a( c2172, 
                            CONS( expform_vname( X1 ), X6 ) );
        lap_emit_2dglobal_2dlap( X5 );
        X5 = SYMBOL_VALUE( top_2dlevel_2dsymbols_v );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( TRUEVALUE ) ) )  goto L3197;
        X5 = plist_get( X1, c2129 );
        X6 = SYMBOL_VALUE( top_2dlevel_2dsymbols_v );
        if  ( TRUE( scrt1_memq( X5, X6 ) ) )  goto L3197;
        X6 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        X6 = CONS( c2184, X6 );
        X5 = scrt3_string_2dappend( CONS( SYMBOL_VALUE( module_2dname_2dupcase_v ), 
                                          X6 ) );
        SETGEN( PAIR_CAR( X4 ), X5 );
L3197:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_cons_2a( c2186, 
                                  CONS( PAIR_CAR( X4 ), X7 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2185, 
                            CONS( expform_vname( X3 ), X6 ) );
        lap_emit_2dglobal_2dlap( X5 );
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dstring_v ), 
                  X3 );
        gencode_exp_2dgenc( c2188, X2, b2160 );
        plist_put( X1, c2192, TRUEVALUE );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( c2188, X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_cons_2a( c2194, 
                                  CONS( expform_vname( X1 ), X7 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2193, 
                            CONS( expform_vname( X3 ), X6 ) );
        lap_emit_2dlap( X5 );
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                                 c2195 ) );
}

DEFTSCP( misccode__24set_2dgenc_v );
DEFCSTRING( t3199, "$SET-GENC" );
EXTERNTSCPP( gencode_var_2din_2dstack, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2din_2dstack_v );
EXTERNTSCPP( gencode_op_2dlevel_343ff0cb, XAL1( TSCP ) );
EXTERNTSCP( gencode_op_2dlevel_343ff0cb_v );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  misccode__24set_2dgenc( l2260, e2261, b2262 )
        TSCP  l2260, e2261, b2262;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3199 );
        if  ( NEQ( TSCPTAG( e2261 ), PAIRTAG ) )  goto L3201;
        X5 = PAIR_CAR( e2261 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2306 ) ) );
        goto L3202;
L3201:
        X4 = FALSEVALUE;
L3202:
        if  ( FALSE( X4 ) )  goto L3205;
        if  ( EQ( TSCPTAG( e2261 ), PAIRTAG ) )  goto L3208;
        scrt1__24__cdr_2derror( e2261 );
L3208:
        X5 = PAIR_CDR( e2261 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3211;
        scrt1__24__car_2derror( X5 );
L3211:
        X2 = PAIR_CAR( X5 );
        goto L3206;
L3205:
        X2 = X4;
L3206:
        if  ( FALSE( gencode_var_2din_2dstack( X2 ) ) )  goto L3214;
        X1 = c2317;
        goto L3217;
L3214:
        if  ( FALSE( gencode_op_2dlevel_343ff0cb( X2 ) ) )  goto L3216;
        X1 = c2428;
        goto L3217;
L3216:
        X1 = c2103;
L3217:
        X4 = plist_get( X2, c2150 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2151 ) ) )  goto L3219;
        X3 = plist_get( X2, c2155 );
        goto L3220;
L3219:
        X3 = FALSEVALUE;
L3220:
        X4 = plist_get( X2, c2140 );
        if  ( FALSE( X4 ) )  goto L3234;
        X6 = plist_get( X2, c2140 );
        X5 = plist_get( X6, c2280 );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( c2283 ) ) )  goto L3234;
        if  ( NEQ( TSCPTAG( e2261 ), PAIRTAG ) )  goto L3228;
        X7 = PAIR_CAR( e2261 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2306 ) ) );
        goto L3229;
L3228:
        X6 = FALSEVALUE;
L3229:
        if  ( FALSE( X6 ) )  goto L3232;
        X5 = scrt1_caddr( e2261 );
        goto L3233;
L3232:
        X5 = X6;
L3233:
        POPSTACKTRACE( gencode_exp_2dgenc( c2102, X5, b2262 ) );
L3234:
        if  ( FALSE( X3 ) )  goto L3235;
        if  ( NEQ( _S2CUINT( l2260 ), _S2CUINT( c2102 ) ) )  goto L3237;
        X4 = c2188;
        goto L3238;
L3237:
        X4 = lap_use_2dlap_2dtemp(  );
L3238:
        if  ( NEQ( TSCPTAG( e2261 ), PAIRTAG ) )  goto L3240;
        X7 = PAIR_CAR( e2261 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2306 ) ) );
        goto L3241;
L3240:
        X6 = FALSEVALUE;
L3241:
        if  ( FALSE( X6 ) )  goto L3244;
        X5 = scrt1_caddr( e2261 );
        goto L3245;
L3244:
        X5 = X6;
L3245:
        gencode_exp_2dgenc( X4, X5, b2262 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( expform_vname( X4 ), X6 );
        X5 = scrt1_cons_2a( c2103, CONS( c2188, X6 ) );
        lap_emit_2dlap( X5 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2109 ) ) )  goto L3246;
        X7 = c2388;
        goto L3267;
L3246:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2349 ) ) )  goto L3248;
        X7 = c2387;
        goto L3267;
L3248:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2116 ) ) )  goto L3250;
        X7 = c2188;
        goto L3267;
L3250:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2356 ) ) )  goto L3252;
        X7 = c2386;
        goto L3267;
L3252:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2360 ) ) )  goto L3254;
        X7 = c2385;
        goto L3267;
L3254:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2364 ) ) )  goto L3256;
        X7 = c2384;
        goto L3267;
L3256:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2368 ) ) )  goto L3258;
        X7 = c2383;
        goto L3267;
L3258:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2372 ) ) )  goto L3260;
        X7 = c2382;
        goto L3267;
L3260:
        if  ( FALSE( scrt1_memv( X3, c2112 ) ) )  goto L3262;
        X7 = c2381;
        goto L3267;
L3262:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2120 ) ) )  goto L3264;
        X7 = c2380;
        goto L3267;
L3264:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2124 ) ) )  goto L3266;
        X7 = c2379;
        goto L3267;
L3266:
        X7 = FALSEVALUE;
L3267:
        X6 = CONS( X7, X6 );
        X5 = scrt1_cons_2a( c2103, 
                            CONS( gencode_lookup( X2, b2262 ), 
                                  X6 ) );
        lap_emit_2dlap( X5 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2188 ) ) )  goto L3268;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( expform_vname( X4 ), X6 );
        X5 = scrt1_cons_2a( c2103, 
                            CONS( expform_vname( l2260 ), X6 ) );
        lap_emit_2dlap( X5 );
        POPSTACKTRACE( lap_drop_2dlap_2dtemp( X4 ) );
L3268:
        POPSTACKTRACE( FALSEVALUE );
L3235:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2317 ) ) )  goto L3271;
        X4 = lap_use_2dlap_2dtemp(  );
        goto L3272;
L3271:
        X4 = c2188;
L3272:
        if  ( NEQ( TSCPTAG( e2261 ), PAIRTAG ) )  goto L3274;
        X7 = PAIR_CAR( e2261 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2306 ) ) );
        goto L3275;
L3274:
        X6 = FALSEVALUE;
L3275:
        if  ( FALSE( X6 ) )  goto L3278;
        X5 = scrt1_caddr( e2261 );
        goto L3279;
L3278:
        X5 = X6;
L3279:
        gencode_exp_2dgenc( X4, X5, b2262 );
        if  ( NEQ( _S2CUINT( l2260 ), _S2CUINT( c2102 ) ) )  goto L3280;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( X4, X6 );
        X5 = scrt1_cons_2a( X1, 
                            CONS( gencode_lookup( X2, b2262 ), 
                                  X6 ) );
        lap_emit_2dlap( X5 );
        goto L3281;
L3280:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( X4, X7 );
        X6 = CONS( scrt1_cons_2a( X1, 
                                  CONS( gencode_lookup( X2, b2262 ), 
                                        X7 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2103, 
                            CONS( expform_vname( l2260 ), X6 ) );
        lap_emit_2dlap( X5 );
L3281:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2188 ) ) )  goto L3282;
        POPSTACKTRACE( lap_drop_2dlap_2dtemp( X4 ) );
L3282:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( misccode__24if_2dgenc_v );
DEFCSTRING( t3284, "$IF-GENC" );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCPP( misccode_args_2dset_21_3f, XAL1( TSCP ) );
EXTERNTSCP( misccode_args_2dset_21_3f_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( misccode_dbefore_3f_136acdb0, XAL1( TSCP ) );
EXTERNTSCP( misccode_dbefore_3f_136acdb0_v );
EXTERNTSCPP( misccode_dbefore_3f_d2e61671, XAL1( TSCP ) );
EXTERNTSCP( misccode_dbefore_3f_d2e61671_v );
EXTERNTSCPP( misccode_2doptimize_474b940d, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( misccode_2doptimize_474b940d_v );

TSCP  misccode__24if_2dgenc( l2462, e2463, b2464 )
        TSCP  l2462, e2463, b2464;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3284 );
        if  ( NEQ( TSCPTAG( e2463 ), PAIRTAG ) )  goto L3286;
        X3 = PAIR_CAR( e2463 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3287;
L3286:
        X2 = FALSEVALUE;
L3287:
        if  ( FALSE( X2 ) )  goto L3290;
        X1 = scrt1_cadddr( e2463 );
        goto L3291;
L3290:
        X1 = X2;
L3291:
        if  ( NEQ( TSCPTAG( e2463 ), PAIRTAG ) )  goto L3292;
        X4 = PAIR_CAR( e2463 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3293;
L3292:
        X3 = FALSEVALUE;
L3293:
        if  ( FALSE( X3 ) )  goto L3296;
        X2 = scrt1_caddr( e2463 );
        goto L3297;
L3296:
        X2 = X3;
L3297:
        if  ( NEQ( TSCPTAG( e2463 ), PAIRTAG ) )  goto L3298;
        X5 = PAIR_CAR( e2463 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3299;
L3298:
        X4 = FALSEVALUE;
L3299:
        if  ( FALSE( X4 ) )  goto L3302;
        if  ( EQ( TSCPTAG( e2463 ), PAIRTAG ) )  goto L3305;
        scrt1__24__cdr_2derror( e2463 );
L3305:
        X5 = PAIR_CDR( e2463 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3308;
        scrt1__24__car_2derror( X5 );
L3308:
        X3 = PAIR_CAR( X5 );
        goto L3303;
L3302:
        X3 = X4;
L3303:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3311;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2487 ) ) );
        goto L3312;
L3311:
        X4 = FALSEVALUE;
L3312:
        if  ( FALSE( X4 ) )  goto L3345;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3318;
        X8 = PAIR_CAR( X3 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2487 ) ) );
        goto L3319;
L3318:
        X7 = FALSEVALUE;
L3319:
        if  ( FALSE( X7 ) )  goto L3322;
        X6 = scrt1_caddr( X3 );
        goto L3323;
L3322:
        X6 = X7;
L3323:
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3325;
        X7 = PAIR_CAR( X6 );
        X5 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2507 ) ) );
        goto L3326;
L3325:
        X5 = FALSEVALUE;
L3326:
        if  ( FALSE( X5 ) )  goto L3345;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3334;
        X8 = PAIR_CAR( X3 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2487 ) ) );
        goto L3335;
L3334:
        X7 = FALSEVALUE;
L3335:
        if  ( FALSE( X7 ) )  goto L3338;
        X6 = scrt1_cdddr( X3 );
        goto L3339;
L3338:
        X6 = X7;
L3339:
        if  ( TRUE( misccode_args_2dset_21_3f( X6 ) ) )  goto L3345;
        if  ( FALSE( misccode_dbefore_3f_136acdb0( X3 ) ) )  goto L3341;
        POPSTACKTRACE( gencode_exp_2dgenc( l2462, X2, b2464 ) );
L3341:
        if  ( FALSE( misccode_dbefore_3f_d2e61671( X3 ) ) )  goto L3343;
        POPSTACKTRACE( gencode_exp_2dgenc( l2462, X1, b2464 ) );
L3343:
        POPSTACKTRACE( misccode_2doptimize_474b940d( l2462, 
                                                     e2463, 
                                                     b2464, X3 ) );
L3345:
        POPSTACKTRACE( misccode_2doptimize_474b940d( l2462, 
                                                     e2463, 
                                                     b2464, FALSEVALUE ) );
}

DEFTSCP( misccode_2doptimize_474b940d_v );
DEFCSTRING( t3346, "$IF-GENC-NO-OPTIMIZE" );
EXTERNTSCPP( gencode_make_2dlabel, XAL0(  ) );
EXTERNTSCP( gencode_make_2dlabel_v );
EXTERNTSCP( gencode_ion_2dinfo_f92fd619_v );
EXTERNTSCPP( misccode_add_2dcondition, XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_add_2dcondition_v );
EXTERNTSCPP( misccode_dreturn_3f_ca61fd98, XAL1( TSCP ) );
EXTERNTSCP( misccode_dreturn_3f_ca61fd98_v );
EXTERNTSCPP( misccode_ion_2dinfo_fbff5bfd, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_ion_2dinfo_fbff5bfd_v );
EXTERNTSCPP( misccode_intersect2, XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_intersect2_v );

TSCP  misccode_2doptimize_474b940d( l2630, e2631, b2632, a2633 )
        TSCP  l2630, e2631, b2632, a2633;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3346 );
        X1 = gencode_make_2dlabel(  );
        X2 = gencode_make_2dlabel(  );
        if  ( NEQ( TSCPTAG( e2631 ), PAIRTAG ) )  goto L3350;
        X5 = PAIR_CAR( e2631 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3351;
L3350:
        X4 = FALSEVALUE;
L3351:
        if  ( FALSE( X4 ) )  goto L3354;
        if  ( EQ( TSCPTAG( e2631 ), PAIRTAG ) )  goto L3357;
        scrt1__24__cdr_2derror( e2631 );
L3357:
        X5 = PAIR_CDR( e2631 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3360;
        scrt1__24__car_2derror( X5 );
L3360:
        X3 = PAIR_CAR( X5 );
        goto L3355;
L3354:
        X3 = X4;
L3355:
        if  ( NEQ( TSCPTAG( e2631 ), PAIRTAG ) )  goto L3363;
        X6 = PAIR_CAR( e2631 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3364;
L3363:
        X5 = FALSEVALUE;
L3364:
        if  ( FALSE( X5 ) )  goto L3367;
        X4 = scrt1_caddr( e2631 );
        goto L3368;
L3367:
        X4 = X5;
L3368:
        X4 = CONS( X4, EMPTYLIST );
        if  ( NEQ( TSCPTAG( e2631 ), PAIRTAG ) )  goto L3370;
        X7 = PAIR_CAR( e2631 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2575 ) ) );
        goto L3371;
L3370:
        X6 = FALSEVALUE;
L3371:
        if  ( FALSE( X6 ) )  goto L3374;
        X5 = scrt1_cadddr( e2631 );
        goto L3375;
L3374:
        X5 = X6;
L3375:
        X5 = CONS( X5, EMPTYLIST );
        X6 = FALSEVALUE;
        X6 = CONS( X6, EMPTYLIST );
        X7 = c2716;
        X7 = CONS( X7, EMPTYLIST );
        X8 = c2716;
        X8 = CONS( X8, EMPTYLIST );
        X9 = gencode_ion_2dinfo_f92fd619_v;
        if  ( NEQ( _S2CUINT( l2630 ), _S2CUINT( c2188 ) ) )  goto L3381;
        X10 = lap_use_2dlap_2dtemp(  );
        goto L3382;
L3381:
        X10 = l2630;
L3382:
        gencode_exp_2dgenc( c2188, X3, b2632 );
        X11 = BOOLEAN( AND( EQ( TSCPTAG( PAIR_CAR( X4 ) ), 
                                EXTENDEDTAG ), 
                            EQ( TSCP_EXTENDEDTAG( PAIR_CAR( X4 ) ), 
                                SYMBOLTAG ) ) );
        if  ( FALSE( X11 ) )  goto L3397;
        if  ( FALSE( scrt1_memq( l2630, c2660 ) ) )  goto L3397;
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X13 = CONS( X1, X13 );
        X14 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2661, 
                             CONS( scrt1_cons_2a( c2664, 
                                                  CONS( c2188, X14 ) ), 
                                   X13 ) );
        lap_emit_2dlap( X12 );
        X12 = PAIR_CAR( X4 );
        SETGEN( PAIR_CAR( X5 ), X12 );
        if  ( NEQ( TSCPTAG( e2631 ), PAIRTAG ) )  goto L3391;
        X14 = PAIR_CAR( e2631 );
        X13 = BOOLEAN( EQ( _S2CUINT( X14 ), 
                           _S2CUINT( c2575 ) ) );
        goto L3392;
L3391:
        X13 = FALSEVALUE;
L3392:
        if  ( FALSE( X13 ) )  goto L3395;
        X12 = scrt1_cadddr( e2631 );
        goto L3396;
L3395:
        X12 = X13;
L3396:
        SETGEN( PAIR_CAR( X4 ), X12 );
        X12 = TRUEVALUE;
        SETGEN( PAIR_CAR( X6 ), X12 );
        goto L3398;
L3397:
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X13 = CONS( X1, X13 );
        X14 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2661, 
                             CONS( scrt1_cons_2a( c2662, 
                                                  CONS( c2188, X14 ) ), 
                                   X13 ) );
        lap_emit_2dlap( X12 );
L3398:
        if  ( FALSE( a2633 ) )  goto L3399;
        if  ( FALSE( PAIR_CAR( X6 ) ) )  goto L3401;
        X11 = FALSEVALUE;
        goto L3402;
L3401:
        X11 = TRUEVALUE;
L3402:
        misccode_add_2dcondition( a2633, X11 );
L3399:
        gencode_exp_2dgenc( X10, PAIR_CAR( X4 ), b2632 );
        X11 = gencode_ion_2dinfo_f92fd619_v;
        SETGEN( PAIR_CAR( X7 ), X11 );
        gencode_ion_2dinfo_f92fd619_v = X9;
        if  ( FALSE( a2633 ) )  goto L3403;
        misccode_add_2dcondition( a2633, PAIR_CAR( X6 ) );
L3403:
        X11 = BOOLEAN( NEQ( _S2CUINT( l2630 ), 
                            _S2CUINT( c2102 ) ) );
        if  ( TRUE( X11 ) )  goto L3409;
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( X5 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( X5 ) ), 
                            SYMBOLTAG ) ) ) )  goto L3409;
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2696, CONS( X1, X13 ) );
        lap_emit_2dlap( X12 );
        goto L3416;
L3409:
        if  ( EQ( _S2CUINT( l2630 ), _S2CUINT( c2701 ) ) )  goto L3414;
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2702, CONS( X2, X13 ) );
        lap_emit_2dlap( X12 );
L3414:
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2696, CONS( X1, X13 ) );
        lap_emit_2dlap( X12 );
        gencode_exp_2dgenc( X10, PAIR_CAR( X5 ), b2632 );
        if  ( EQ( _S2CUINT( l2630 ), _S2CUINT( c2701 ) ) )  goto L3416;
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( c2696, CONS( X2, X13 ) );
        lap_emit_2dlap( X12 );
L3416:
        if  ( NEQ( _S2CUINT( l2630 ), _S2CUINT( c2188 ) ) )  goto L3418;
        X12 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = CONS( expform_vname( X10 ), X12 );
        X11 = scrt1_cons_2a( c2103, CONS( c2188, X12 ) );
        lap_emit_2dlap( X11 );
        lap_drop_2dlap_2dtemp( X10 );
L3418:
        X11 = gencode_ion_2dinfo_f92fd619_v;
        SETGEN( PAIR_CAR( X8 ), X11 );
        gencode_ion_2dinfo_f92fd619_v = X9;
        if  ( FALSE( misccode_dreturn_3f_ca61fd98( PAIR_CAR( X4 ) ) )
            )  goto L3421;
        POPSTACKTRACE( misccode_ion_2dinfo_fbff5bfd( PAIR_CAR( X8 ), 
                                                     EMPTYLIST ) );
L3421:
        if  ( FALSE( misccode_dreturn_3f_ca61fd98( PAIR_CAR( X5 ) ) )
            )  goto L3423;
        POPSTACKTRACE( misccode_ion_2dinfo_fbff5bfd( PAIR_CAR( X7 ), 
                                                     EMPTYLIST ) );
L3423:
        X11 = misccode_intersect2( PAIR_CAR( X7 ), 
                                   PAIR_CAR( X8 ) );
        POPSTACKTRACE( misccode_ion_2dinfo_fbff5bfd( X11, EMPTYLIST ) );
}

DEFTSCP( misccode_rue_2dlist_71bcc9dd_v );
DEFCSTRING( t3425, "CONDITION-INFO-TRUE-LIST" );

TSCP  misccode_rue_2dlist_71bcc9dd( x2792 )
        TSCP  x2792;
{
        PUSHSTACKTRACE( t3425 );
        if  ( EQ( TSCPTAG( x2792 ), PAIRTAG ) )  goto L3428;
        scrt1__24__car_2derror( x2792 );
L3428:
        POPSTACKTRACE( PAIR_CAR( x2792 ) );
}

DEFTSCP( misccode_lse_2dlist_1c8651d_v );
DEFCSTRING( t3430, "CONDITION-INFO-FALSE-LIST" );

TSCP  misccode_lse_2dlist_1c8651d( x2799 )
        TSCP  x2799;
{
        PUSHSTACKTRACE( t3430 );
        if  ( EQ( TSCPTAG( x2799 ), PAIRTAG ) )  goto L3433;
        scrt1__24__cdr_2derror( x2799 );
L3433:
        POPSTACKTRACE( PAIR_CDR( x2799 ) );
}

DEFTSCP( misccode_ion_2dinfo_37ee0438_v );
DEFCSTRING( t3435, "STORE-CONDITION-INFO" );

TSCP  misccode_ion_2dinfo_37ee0438( i2806 )
        TSCP  i2806;
{
        PUSHSTACKTRACE( t3435 );
        POPSTACKTRACE( plist_put( i2806, 
                                  c2807, gencode_ion_2dinfo_f92fd619_v ) );
}

DEFTSCP( misccode_ion_2dinfo_659a45e5_v );
DEFCSTRING( t3437, "RETRIEVE-CONDITION-INFO" );
EXTERNTSCP( gencode_ion_2dinfo_cc47b64b_v );

TSCP  misccode_ion_2dinfo_659a45e5( i2810 )
        TSCP  i2810;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3437 );
        X1 = plist_get( i2810, c2807 );
        if  ( TRUE( X1 ) )  goto L3440;
        POPSTACKTRACE( gencode_ion_2dinfo_cc47b64b_v );
L3440:
        POPSTACKTRACE( X1 );
}

DEFTSCP( misccode_ion_2dinfo_2b7559ad_v );
DEFCSTRING( t3442, "UPDATE-CONDITION-INFO" );

TSCP  misccode_ion_2dinfo_2b7559ad( i2815 )
        TSCP  i2815;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3442 );
        X1 = plist_get( i2815, c2807 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3445;
        POPSTACKTRACE( plist_put( i2815, 
                                  c2807, gencode_ion_2dinfo_f92fd619_v ) );
L3445:
        X2 = misccode_intersect2( X1, gencode_ion_2dinfo_f92fd619_v );
        POPSTACKTRACE( plist_put( i2815, c2807, X2 ) );
}

DEFTSCP( misccode_ion_2dinfo_fbff5bfd_v );
DEFCSTRING( t3447, "COMBINE-WITH-GLOBAL-CONDITION-INFO" );
EXTERNTSCPP( misccode_combine2, XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_combine2_v );

TSCP  misccode_ion_2dinfo_fbff5bfd( i2824, i2825 )
        TSCP  i2824, i2825;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3447 );
L3448:
        if  ( NEQ( _S2CUINT( i2825 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3449;
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, 
                            misccode_combine2( i2824, 
                                               gencode_ion_2dinfo_f92fd619_v ) ) );
L3449:
        if  ( EQ( TSCPTAG( i2825 ), PAIRTAG ) )  goto L3452;
        scrt1__24__car_2derror( i2825 );
L3452:
        X2 = PAIR_CAR( i2825 );
        X1 = misccode_combine2( i2824, X2 );
        i2825 = CONS( PAIR_CDR( i2825 ), EMPTYLIST );
        i2824 = X1;
        GOBACK( L3448 );
}

DEFTSCP( misccode_combine2_v );
DEFCSTRING( t3455, "COMBINE2" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( misccode_list_2dcombination, XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_list_2dcombination_v );

TSCP  misccode_combine2( i2841, i2842 )
        TSCP  i2841, i2842;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3455 );
        X2 = misccode_rue_2dlist_71bcc9dd( i2841 );
        X3 = misccode_rue_2dlist_71bcc9dd( i2842 );
        X1 = misccode_list_2dcombination( X2, X3 );
        X3 = misccode_lse_2dlist_1c8651d( i2841 );
        X4 = misccode_lse_2dlist_1c8651d( i2842 );
        X2 = misccode_list_2dcombination( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

DEFTSCP( misccode_list_2dcombination_v );
DEFCSTRING( t3457, "LIST-COMBINATION" );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_remove, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remove_v );

TSCP  misccode_list_2dcombination( l2845, l2846 )
        TSCP  l2845, l2846;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3457 );
L3458:
        if  ( EQ( _S2CUINT( l2846 ), _S2CUINT( EMPTYLIST ) ) )  goto L3459;
        if  ( EQ( TSCPTAG( l2846 ), PAIRTAG ) )  goto L3462;
        scrt1__24__car_2derror( l2846 );
L3462:
        X3 = PAIR_CAR( l2846 );
        X2 = scrt1_cons_2a( X3, CONS( EMPTYLIST, EMPTYLIST ) );
        X4 = PAIR_CAR( l2846 );
        X3 = scrt1_remove( X4, l2845 );
        X1 = scrt1_append_2dtwo( X2, X3 );
        l2846 = PAIR_CDR( l2846 );
        l2845 = X1;
        GOBACK( L3458 );
L3459:
        POPSTACKTRACE( l2845 );
}

DEFTSCP( misccode_ion_2dinfo_bd1601d7_v );
DEFCSTRING( t3466, "INTERSECT-WITH-GLOBAL-CONDITION-INFO" );

TSCP  misccode_ion_2dinfo_bd1601d7( i2866, i2867 )
        TSCP  i2866, i2867;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3466 );
L3467:
        if  ( NEQ( _S2CUINT( i2867 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3468;
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, 
                            misccode_intersect2( i2866, 
                                                 gencode_ion_2dinfo_f92fd619_v ) ) );
L3468:
        if  ( EQ( TSCPTAG( i2867 ), PAIRTAG ) )  goto L3471;
        scrt1__24__car_2derror( i2867 );
L3471:
        X2 = PAIR_CAR( i2867 );
        X1 = misccode_intersect2( i2866, X2 );
        i2867 = CONS( PAIR_CDR( i2867 ), EMPTYLIST );
        i2866 = X1;
        GOBACK( L3467 );
}

DEFTSCP( misccode_intersect2_v );
DEFCSTRING( t3474, "INTERSECT2" );
EXTERNTSCPP( misccode_list_2dintersection, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( misccode_list_2dintersection_v );

TSCP  misccode_intersect2( i2882, i2883 )
        TSCP  i2882, i2883;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3474 );
        X2 = misccode_rue_2dlist_71bcc9dd( i2882 );
        X3 = misccode_rue_2dlist_71bcc9dd( i2883 );
        X1 = misccode_list_2dintersection( X2, X3 );
        X3 = misccode_lse_2dlist_1c8651d( i2882 );
        X4 = misccode_lse_2dlist_1c8651d( i2883 );
        X2 = misccode_list_2dintersection( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

DEFTSCP( misccode_list_2dintersection_v );
DEFCSTRING( t3476, "LIST-INTERSECTION" );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );

TSCP  misccode_list_2dintersection( l2886, l2887 )
        TSCP  l2886, l2887;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3476 );
L3477:
        if  ( EQ( _S2CUINT( l2886 ), _S2CUINT( EMPTYLIST ) ) )  goto L3478;
        if  ( EQ( TSCPTAG( l2886 ), PAIRTAG ) )  goto L3483;
        scrt1__24__car_2derror( l2886 );
L3483:
        X1 = PAIR_CAR( l2886 );
        if  ( FALSE( scrt1_member( X1, l2887 ) ) )  goto L3480;
        X2 = PAIR_CAR( l2886 );
        X1 = scrt1_cons_2a( X2, CONS( EMPTYLIST, EMPTYLIST ) );
        X3 = PAIR_CDR( l2886 );
        X2 = misccode_list_2dintersection( X3, l2887 );
        POPSTACKTRACE( scrt1_append_2dtwo( X1, X2 ) );
L3480:
        if  ( EQ( TSCPTAG( l2886 ), PAIRTAG ) )  goto L3488;
        scrt1__24__cdr_2derror( l2886 );
L3488:
        X1 = PAIR_CDR( l2886 );
        l2886 = X1;
        GOBACK( L3477 );
L3478:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( misccode_tersection_bbeb56bc_v );
DEFCSTRING( t3490, "STORED-CONDITIONS-INTERSECTION" );

TSCP  misccode_tersection_bbeb56bc( l2911 )
        TSCP  l2911;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3490 );
        X3 = l2911;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3494:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3495;
        X2 = X4;
        goto L3502;
L3495:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3498;
        scrt1__24__car_2derror( X3 );
L3498:
        X8 = PAIR_CAR( X3 );
        X7 = misccode_ion_2dinfo_659a45e5( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3501;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L3494 );
L3501:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3506;
        scdebug_error( c2979, 
                       c2980, CONS( X5, EMPTYLIST ) );
L3506:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L3494 );
L3502:
        X1 = scrt1_remove( EMPTYLIST, X2 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3509;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3512;
        scrt1__24__car_2derror( X1 );
L3512:
        X2 = PAIR_CAR( X1 );
        X3 = PAIR_CDR( X1 );
L3515:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3516;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3519;
        scrt1__24__car_2derror( X3 );
L3519:
        X5 = PAIR_CAR( X3 );
        X4 = misccode_intersect2( X2, X5 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L3515 );
L3516:
        POPSTACKTRACE( X2 );
L3509:
        POPSTACKTRACE( gencode_ion_2dinfo_cc47b64b_v );
}

DEFTSCP( misccode_dbefore_3f_136acdb0_v );
DEFCSTRING( t3522, "$CALL-TESTED-TRUE-BEFORE?" );

TSCP  misccode_dbefore_3f_136acdb0( t2993 )
        TSCP  t2993;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3522 );
        X1 = misccode_rue_2dlist_71bcc9dd( gencode_ion_2dinfo_f92fd619_v );
        POPSTACKTRACE( scrt1_member( t2993, X1 ) );
}

DEFTSCP( misccode_dbefore_3f_d2e61671_v );
DEFCSTRING( t3524, "$CALL-TESTED-FALSE-BEFORE?" );

TSCP  misccode_dbefore_3f_d2e61671( t2995 )
        TSCP  t2995;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3524 );
        X1 = misccode_lse_2dlist_1c8651d( gencode_ion_2dinfo_f92fd619_v );
        POPSTACKTRACE( scrt1_member( t2995, X1 ) );
}

DEFTSCP( misccode_add_2dcondition_v );
DEFCSTRING( t3526, "ADD-CONDITION" );

TSCP  misccode_add_2dcondition( t2997, t2998 )
        TSCP  t2997, t2998;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3526 );
        if  ( FALSE( t2998 ) )  goto L3528;
        X2 = scrt1_cons_2a( t2997, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X4 = misccode_rue_2dlist_71bcc9dd( gencode_ion_2dinfo_f92fd619_v );
        X3 = scrt1_remove( t2997, X4 );
        X1 = scrt1_append_2dtwo( X2, X3 );
        X2 = misccode_lse_2dlist_1c8651d( gencode_ion_2dinfo_f92fd619_v );
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, 
                            sc_cons( X1, X2 ) ) );
L3528:
        X1 = misccode_rue_2dlist_71bcc9dd( gencode_ion_2dinfo_f92fd619_v );
        X3 = scrt1_cons_2a( t2997, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X5 = misccode_lse_2dlist_1c8651d( gencode_ion_2dinfo_f92fd619_v );
        X4 = scrt1_remove( t2997, X5 );
        X2 = scrt1_append_2dtwo( X3, X4 );
        POPSTACKTRACE( SET( gencode_ion_2dinfo_f92fd619_v, 
                            sc_cons( X1, X2 ) ) );
}

DEFTSCP( misccode_args_2dset_21_3f_v );
DEFCSTRING( t3530, "ARGS-SET!?" );

TSCP  misccode_args_2dset_21_3f( a3000 )
        TSCP  a3000;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3530 );
L3531:
        if  ( EQ( _S2CUINT( a3000 ), _S2CUINT( EMPTYLIST ) ) )  goto L3532;
        if  ( EQ( TSCPTAG( a3000 ), PAIRTAG ) )  goto L3535;
        scrt1__24__cdr_2derror( a3000 );
L3535:
        X1 = PAIR_CDR( a3000 );
        X2 = PAIR_CAR( a3000 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3539;
        X4 = plist_get( X2, c2150 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c3022 ) ) )  goto L3541;
        X3 = FALSEVALUE;
        goto L3542;
L3541:
        X4 = plist_get( X2, c2150 );
        X3 = BOOLEAN( NEQ( _S2CUINT( X4 ), 
                           _S2CUINT( c3029 ) ) );
L3542:
        if  ( TRUE( X3 ) )  goto L3544;
        X4 = plist_get( X2, c3036 );
        if  ( TRUE( X4 ) )  goto L3547;
        a3000 = X1;
        GOBACK( L3531 );
L3547:
        POPSTACKTRACE( X4 );
L3544:
        POPSTACKTRACE( X3 );
L3539:
        POPSTACKTRACE( TRUEVALUE );
L3532:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( misccode_dreturn_3f_ca61fd98_v );
DEFCSTRING( t3549, "IF-LEG-HAS-NO-RETURN?" );
EXTERNTSCP( gencode_error_2did_v );
EXTERNTSCP( gencode__24__cdr_2derror_2did_v );
EXTERNTSCP( gencode__24__car_2derror_2did_v );

TSCP  misccode_dreturn_3f_ca61fd98( l3047 )
        TSCP  l3047;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3549 );
        if  ( NEQ( TSCPTAG( l3047 ), PAIRTAG ) )  goto L3551;
        X2 = PAIR_CAR( l3047 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2487 ) ) );
        goto L3552;
L3551:
        X1 = FALSEVALUE;
L3552:
        if  ( FALSE( X1 ) )  goto L3555;
        if  ( NEQ( TSCPTAG( l3047 ), PAIRTAG ) )  goto L3557;
        X4 = PAIR_CAR( l3047 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2487 ) ) );
        goto L3558;
L3557:
        X3 = FALSEVALUE;
L3558:
        if  ( FALSE( X3 ) )  goto L3561;
        X2 = scrt1_caddr( l3047 );
        goto L3562;
L3561:
        X2 = X3;
L3562:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( gencode__24__cdr_2derror_2did_v, X4 );
        X3 = scrt1_cons_2a( gencode_error_2did_v, 
                            CONS( gencode__24__car_2derror_2did_v, X4 ) );
        POPSTACKTRACE( scrt1_member( X2, X3 ) );
L3555:
        POPSTACKTRACE( X1 );
}

void scrt3__init();
void scdebug__init();
void expform__init();
void scrt1__init();
void lap__init();
void gencode__init();
void plist__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt3__init();
        scdebug__init();
        expform__init();
        scrt1__init();
        lap__init();
        gencode__init();
        plist__init();
        MAXDISPLAY( 0 );
}

void  misccode__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(misccode SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3142, 
                       ADR( misccode_symbol_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      misccode_symbol_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3168, 
                       ADR( misccode__24define_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      misccode__24define_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3199, 
                       ADR( misccode__24set_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      misccode__24set_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3284, 
                       ADR( misccode__24if_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      misccode__24if_2dgenc, EMPTYLIST ) );
        INITIALIZEVAR( t3346, 
                       ADR( misccode_2doptimize_474b940d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      misccode_2doptimize_474b940d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3425, 
                       ADR( misccode_rue_2dlist_71bcc9dd_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_rue_2dlist_71bcc9dd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3430, 
                       ADR( misccode_lse_2dlist_1c8651d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_lse_2dlist_1c8651d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3435, 
                       ADR( misccode_ion_2dinfo_37ee0438_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_ion_2dinfo_37ee0438, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3437, 
                       ADR( misccode_ion_2dinfo_659a45e5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_ion_2dinfo_659a45e5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3442, 
                       ADR( misccode_ion_2dinfo_2b7559ad_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_ion_2dinfo_2b7559ad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3447, 
                       ADR( misccode_ion_2dinfo_fbff5bfd_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      misccode_ion_2dinfo_fbff5bfd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3455, 
                       ADR( misccode_combine2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      misccode_combine2, EMPTYLIST ) );
        INITIALIZEVAR( t3457, 
                       ADR( misccode_list_2dcombination_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      misccode_list_2dcombination, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3466, 
                       ADR( misccode_ion_2dinfo_bd1601d7_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      misccode_ion_2dinfo_bd1601d7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3474, 
                       ADR( misccode_intersect2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      misccode_intersect2, EMPTYLIST ) );
        INITIALIZEVAR( t3476, 
                       ADR( misccode_list_2dintersection_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      misccode_list_2dintersection, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3490, 
                       ADR( misccode_tersection_bbeb56bc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_tersection_bbeb56bc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3522, 
                       ADR( misccode_dbefore_3f_136acdb0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_dbefore_3f_136acdb0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3524, 
                       ADR( misccode_dbefore_3f_d2e61671_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_dbefore_3f_d2e61671, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3526, 
                       ADR( misccode_add_2dcondition_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      misccode_add_2dcondition, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3530, 
                       ADR( misccode_args_2dset_21_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_args_2dset_21_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3549, 
                       ADR( misccode_dreturn_3f_ca61fd98_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      misccode_dreturn_3f_ca61fd98, 
                                      EMPTYLIST ) );
        return;
}
