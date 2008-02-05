
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( c3298 );
DEFSTATICTSCP( t3478 );
DEFSTATICTSCP( t3479 );
DEFCSTRING( t3480, "Argument value is not a function: ~s" );
DEFSTATICTSCP( c2965 );
DEFSTATICTSCP( c2964 );
DEFCSTRING( t3481, "Too many arguments to function" );
DEFSTATICTSCP( c2952 );
DEFCSTRING( t3482, "Too few arguments to function" );
DEFSTATICTSCP( c2895 );
DEFSTATICTSCP( c2894 );
DEFCSTRING( t3483, "Environment is not an A-LIST: ~s" );
DEFSTATICTSCP( c2678 );
DEFCSTRING( t3484, 
            "Argument contains an item that is not self-evaluating: ~s" );
DEFSTATICTSCP( c2654 );
DEFSTATICTSCP( c2653 );
DEFCSTRING( t3485, "Top-level symbol is undefined" );
DEFSTATICTSCP( c2649 );
DEFCSTRING( t3486, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2592 );
DEFSTATICTSCP( c2591 );
DEFSTATICTSCP( c2509 );
DEFSTATICTSCP( c2356 );
DEFSTATICTSCP( c2348 );
DEFSTATICTSCP( c2335 );
DEFSTATICTSCP( c2331 );
DEFSTATICTSCP( c2327 );
DEFSTATICTSCP( c2323 );
DEFSTATICTSCP( c2314 );
DEFSTATICTSCP( c2313 );
DEFSTATICTSCP( c2312 );
DEFSTATICTSCP( c2217 );
DEFSTATICTSCP( c2189 );
DEFSTATICTSCP( c2188 );
DEFSTATICTSCP( c2187 );
DEFSTATICTSCP( c2186 );
DEFSTATICTSCP( c2185 );
DEFSTATICTSCP( c2184 );
DEFSTATICTSCP( c2183 );
DEFSTATICTSCP( c2182 );
DEFSTATICTSCP( c2181 );
DEFSTATICTSCP( c2180 );
DEFSTATICTSCP( c2179 );
DEFSTATICTSCP( c2178 );
DEFSTATICTSCP( c2177 );
DEFSTATICTSCP( c2176 );
DEFSTATICTSCP( c2175 );
DEFSTATICTSCP( c2174 );
DEFSTATICTSCP( c2173 );
DEFSTATICTSCP( c2172 );
DEFSTATICTSCP( c2171 );
DEFSTATICTSCP( c2170 );
DEFSTATICTSCP( c2169 );
DEFSTATICTSCP( c2168 );
DEFSTATICTSCP( c2167 );
DEFSTATICTSCP( c2166 );
DEFSTATICTSCP( c2165 );
DEFSTATICTSCP( c2164 );
DEFSTATICTSCP( c2163 );
DEFSTATICTSCP( c2161 );
DEFSTATICTSCP( c2159 );
DEFSTATICTSCP( c2157 );
DEFCSTRING( t3487, "Illegal OPTIMIZATION OPTION(S): ~s" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2154 );
DEFSTATICTSCP( c2153 );
DEFSTATICTSCP( c2151 );
DEFSTATICTSCP( c2146 );
DEFSTATICTSCP( c2141 );

static void  init_constants()
{
        TSCP  X1;

        c3298 = EMPTYLIST;
        t3478 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        c3298 = CONS( t3478, c3298 );
        X1 = EMPTYLIST;
        X1 = CONS( t3478, X1 );
        c3298 = CONS( X1, c3298 );
        t3479 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        c3298 = CONS( t3479, c3298 );
        CONSTANTEXP( ADR( c3298 ) );
        c2965 = CSTRING_TSCP( t3480 );
        CONSTANTEXP( ADR( c2965 ) );
        c2964 = STRINGTOSYMBOL( CSTRING_TSCP( "EXEC" ) );
        CONSTANTEXP( ADR( c2964 ) );
        c2952 = CSTRING_TSCP( t3481 );
        CONSTANTEXP( ADR( c2952 ) );
        c2895 = CSTRING_TSCP( t3482 );
        CONSTANTEXP( ADR( c2895 ) );
        c2894 = STRINGTOSYMBOL( CSTRING_TSCP( "NEW-ENV" ) );
        CONSTANTEXP( ADR( c2894 ) );
        c2678 = CSTRING_TSCP( t3483 );
        CONSTANTEXP( ADR( c2678 ) );
        c2654 = CSTRING_TSCP( t3484 );
        CONSTANTEXP( ADR( c2654 ) );
        c2653 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL" ) );
        CONSTANTEXP( ADR( c2653 ) );
        c2649 = CSTRING_TSCP( t3485 );
        CONSTANTEXP( ADR( c2649 ) );
        c2592 = CSTRING_TSCP( t3486 );
        CONSTANTEXP( ADR( c2592 ) );
        c2591 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2591 ) );
        c2509 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-TOP-LEVEL-VALUE!" ) );
        CONSTANTEXP( ADR( c2509 ) );
        c2356 = STRINGTOSYMBOL( CSTRING_TSCP( "CALL" ) );
        CONSTANTEXP( ADR( c2356 ) );
        c2348 = STRINGTOSYMBOL( CSTRING_TSCP( "REWRITE" ) );
        CONSTANTEXP( ADR( c2348 ) );
        c2335 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2335 ) );
        c2331 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2331 ) );
        c2327 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2327 ) );
        c2323 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2323 ) );
        c2314 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EVAL" ) );
        CONSTANTEXP( ADR( c2314 ) );
        c2313 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2313 ) );
        c2312 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-LOOKUP-METHOD" ) );
        CONSTANTEXP( ADR( c2312 ) );
        c2217 = DOUBLE_TSCP( 0. );
        CONSTANTEXP( ADR( c2217 ) );
        c2189 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_/-TWO" ) );
        CONSTANTEXP( ADR( c2189 ) );
        c2188 = STRINGTOSYMBOL( CSTRING_TSCP( "SCEVAL_/1" ) );
        CONSTANTEXP( ADR( c2188 ) );
        c2187 = STRINGTOSYMBOL( CSTRING_TSCP( "/" ) );
        CONSTANTEXP( ADR( c2187 ) );
        c2186 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_--TWO" ) );
        CONSTANTEXP( ADR( c2186 ) );
        c2185 = STRINGTOSYMBOL( CSTRING_TSCP( "SCEVAL_NEGATE" ) );
        CONSTANTEXP( ADR( c2185 ) );
        c2184 = STRINGTOSYMBOL( CSTRING_TSCP( "-" ) );
        CONSTANTEXP( ADR( c2184 ) );
        c2183 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_*-TWO" ) );
        CONSTANTEXP( ADR( c2183 ) );
        c2182 = STRINGTOSYMBOL( CSTRING_TSCP( "*" ) );
        CONSTANTEXP( ADR( c2182 ) );
        c2181 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_+-TWO" ) );
        CONSTANTEXP( ADR( c2181 ) );
        c2180 = STRINGTOSYMBOL( CSTRING_TSCP( "+" ) );
        CONSTANTEXP( ADR( c2180 ) );
        c2179 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_MIN-TWO" ) );
        CONSTANTEXP( ADR( c2179 ) );
        c2178 = STRINGTOSYMBOL( CSTRING_TSCP( "MIN" ) );
        CONSTANTEXP( ADR( c2178 ) );
        c2177 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_MAX-TWO" ) );
        CONSTANTEXP( ADR( c2177 ) );
        c2176 = STRINGTOSYMBOL( CSTRING_TSCP( "MAX" ) );
        CONSTANTEXP( ADR( c2176 ) );
        c2175 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_>=-TWO" ) );
        CONSTANTEXP( ADR( c2175 ) );
        c2174 = STRINGTOSYMBOL( CSTRING_TSCP( ">=" ) );
        CONSTANTEXP( ADR( c2174 ) );
        c2173 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_<=-TWO" ) );
        CONSTANTEXP( ADR( c2173 ) );
        c2172 = STRINGTOSYMBOL( CSTRING_TSCP( "<=" ) );
        CONSTANTEXP( ADR( c2172 ) );
        c2171 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_>-TWO" ) );
        CONSTANTEXP( ADR( c2171 ) );
        c2170 = STRINGTOSYMBOL( CSTRING_TSCP( ">" ) );
        CONSTANTEXP( ADR( c2170 ) );
        c2169 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_<-TWO" ) );
        CONSTANTEXP( ADR( c2169 ) );
        c2168 = STRINGTOSYMBOL( CSTRING_TSCP( "<" ) );
        CONSTANTEXP( ADR( c2168 ) );
        c2167 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT2_=-TWO" ) );
        CONSTANTEXP( ADR( c2167 ) );
        c2166 = STRINGTOSYMBOL( CSTRING_TSCP( "=" ) );
        CONSTANTEXP( ADR( c2166 ) );
        c2165 = STRINGTOSYMBOL( CSTRING_TSCP( "SCRT1_APPEND-TWO" ) );
        CONSTANTEXP( ADR( c2165 ) );
        c2164 = STRINGTOSYMBOL( CSTRING_TSCP( "APPEND" ) );
        CONSTANTEXP( ADR( c2164 ) );
        c2163 = STRINGTOSYMBOL( CSTRING_TSCP( "SCEVAL_LIST3" ) );
        CONSTANTEXP( ADR( c2163 ) );
        c2161 = STRINGTOSYMBOL( CSTRING_TSCP( "SCEVAL_LIST2" ) );
        CONSTANTEXP( ADR( c2161 ) );
        c2159 = STRINGTOSYMBOL( CSTRING_TSCP( "SCEVAL_LIST1" ) );
        CONSTANTEXP( ADR( c2159 ) );
        c2157 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST" ) );
        CONSTANTEXP( ADR( c2157 ) );
        c2155 = CSTRING_TSCP( t3487 );
        CONSTANTEXP( ADR( c2155 ) );
        c2154 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTIMIZE-EVAL" ) );
        CONSTANTEXP( ADR( c2154 ) );
        c2153 = EMPTYLIST;
        c2153 = CONS( c2356, c2153 );
        c2153 = CONS( c2348, c2153 );
        CONSTANTEXP( ADR( c2153 ) );
        c2151 = EMPTYLIST;
        c2151 = CONS( c2348, c2151 );
        c2151 = CONS( c2356, c2151 );
        CONSTANTEXP( ADR( c2151 ) );
        c2146 = EMPTYLIST;
        c2146 = CONS( c2348, c2146 );
        CONSTANTEXP( ADR( c2146 ) );
        c2141 = EMPTYLIST;
        c2141 = CONS( c2356, c2141 );
        CONSTANTEXP( ADR( c2141 ) );
}

DEFTSCP( sceval_optimize_2doptions_v );
DEFCSTRING( t3488, "SCEVAL_OPTIMIZE-OPTIONS" );
DEFTSCP( sceval_optimize_2deval_v );
DEFCSTRING( t3489, "OPTIMIZE-EVAL" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  sceval_optimize_2deval( o2133 )
        TSCP  o2133;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3489 );
        X1 = scrt1_equal_3f( o2133, EMPTYLIST );
        if  ( TRUE( X1 ) )  goto L3495;
        X2 = scrt1_equal_3f( o2133, c2141 );
        if  ( TRUE( X2 ) )  goto L3495;
        X3 = scrt1_equal_3f( o2133, c2146 );
        if  ( TRUE( X3 ) )  goto L3495;
        X4 = scrt1_equal_3f( o2133, c2151 );
        if  ( TRUE( X4 ) )  goto L3495;
        if  ( TRUE( scrt1_equal_3f( o2133, c2153 ) ) )  goto L3495;
        POPSTACKTRACE( scdebug_error( c2154, 
                                      c2155, 
                                      CONS( o2133, EMPTYLIST ) ) );
L3495:
        POPSTACKTRACE( SET( sceval_optimize_2doptions_v, o2133 ) );
}

DEFTSCP( sceval_top_2dlevel_2drewrite_v );
DEFCSTRING( t3513, "SCEVAL_TOP-LEVEL-REWRITE" );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
DEFTSCP( sceval_list1_v );
DEFCSTRING( t3514, "SCEVAL_LIST1" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  sceval_list1( x2192 )
        TSCP  x2192;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3514 );
        X1 = sc_cons( x2192, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list2_v );
DEFCSTRING( t3517, "SCEVAL_LIST2" );

TSCP  sceval_list2( x2197, y2198 )
        TSCP  x2197, y2198;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3517 );
        X2 = sc_cons( y2198, EMPTYLIST );
        X1 = sc_cons( x2197, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list3_v );
DEFCSTRING( t3520, "SCEVAL_LIST3" );

TSCP  sceval_list3( x2203, y2204, z2205 )
        TSCP  x2203, y2204, z2205;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3520 );
        X3 = sc_cons( z2205, EMPTYLIST );
        X2 = sc_cons( y2204, X3 );
        X1 = sc_cons( x2203, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_negate_v );
DEFCSTRING( t3523, "SCEVAL_NEGATE" );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  sceval_negate( x2210 )
        TSCP  x2210;
{
        PUSHSTACKTRACE( t3523 );
        if  ( NEQ( TSCPTAG( x2210 ), FIXNUMTAG ) )  goto L3525;
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( x2210 ) ) ) );
L3525:
        POPSTACKTRACE( scrt2__2d_2dtwo( c2217, x2210 ) );
}

DEFTSCP( sceval__2f1_v );
DEFCSTRING( t3527, "SCEVAL_/1" );
EXTERNTSCPP( scrt2__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2f_2dtwo_v );

TSCP  sceval__2f1( x2220 )
        TSCP  x2220;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3527 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L3539;
        if  ( EQ( _S2CUINT( x2220 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3539;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x2220 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L3539;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ) ) );
L3539:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x2220 ) );
}

DEFTSCP( sceval_sizeof_2dtscp_v );
DEFCSTRING( t3540, "SCEVAL_SIZEOF-TSCP" );
DEFTSCP( sceval_codex_v );
DEFCSTRING( t3541, "SCEVAL_CODEX" );
DEFTSCP( sceval_closurex_v );
DEFCSTRING( t3542, "SCEVAL_CLOSUREX" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
DEFTSCP( sceval_var0x_v );
DEFCSTRING( t3546, "SCEVAL_VAR0X" );
DEFTSCP( sceval_var1x_v );
DEFCSTRING( t3550, "SCEVAL_VAR1X" );
DEFTSCP( sceval_var2x_v );
DEFCSTRING( t3554, "SCEVAL_VAR2X" );
DEFTSCP( sceval_compile_v );
DEFCSTRING( t3558, "SCEVAL_COMPILE" );
EXTERNTSCPP( sceval_compile, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_compile_v );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( sceval_compile_2dlist, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_compile_2dlist_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt2_top_2dlevel_2dvalue, XAL1( TSCP ) );
EXTERNTSCP( scrt2_top_2dlevel_2dvalue_v );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt1_boolean_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_boolean_3f_v );
EXTERNTSCP( sceval_compile_2derror_v );
EXTERNTSCPP( scrt4_scheme_2dtscp_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_scheme_2dtscp_2dref_v );
EXTERNTSCP( sceval_interpreted_2dproc_v );
EXTERNTSCPP( scrt2__3c_3d, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_v );

TSCP  sceval_compile( e2276, e2277 )
        TSCP  e2276, e2277;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3558 );
L3559:
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), SYMBOLTAG ) )
            )  goto L3560;
        if  ( NEQ( TSCPTAG( e2276 ), PAIRTAG ) )  goto L3562;
        X4 = PAIR_CAR( e2276 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2313 ) ) )  goto L3566;
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2323 ) ) )  goto L3568;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cadddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3572;
        scrt1__24__car_2derror( X7 );
L3572:
        X6 = PAIR_CAR( X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2323, 
                                      CONS( sceval_compile( X6, e2277 ), 
                                            X5 ) ) );
L3568:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2327 ) ) )  goto L3574;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3580;
        scrt1__24__car_2derror( X6 );
L3580:
        X5 = PAIR_CAR( X6 );
        if  ( FALSE( scrt1_assq( X5, e2277 ) ) )  goto L3576;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3584;
        scrt1__24__car_2derror( X6 );
L3584:
        POPSTACKTRACE( scrt1_cons_2a( c2327, 
                                      CONS( PAIR_CAR( X6 ), X5 ) ) );
L3576:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_caddr( e2276 ), X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3588;
        scrt1__24__car_2derror( X8 );
L3588:
        X5 = scrt1_cons_2a( c2509, 
                            CONS( scrt1_cons_2a( c2313, 
                                                 CONS( PAIR_CAR( X8 ), 
                                                       X7 ) ), 
                                  X6 ) );
        e2276 = X5;
        GOBACK( L3559 );
L3574:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2331 ) ) )  goto L3590;
        X5 = scrt1_length( e2276 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L3592;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3596;
        scrt1__24__car_2derror( X6 );
L3596:
        X5 = PAIR_CAR( X6 );
        e2276 = X5;
        GOBACK( L3559 );
L3592:
        X6 = PAIR_CDR( e2276 );
        X5 = sceval_compile_2dlist( X6, e2277 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2331, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3590:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2335 ) ) )  goto L3599;
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3603;
        scrt1__24__car_2derror( X7 );
L3603:
        X6 = PAIR_CAR( X7 );
        X7 = e2277;
        X8 = X6;
L3607:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3608;
        X5 = X7;
        goto L3611;
L3608:
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L3610;
        X10 = sc_cons( X8, EMPTYLIST );
        X9 = X10;
        X5 = sc_cons( X9, X7 );
        goto L3611;
L3610:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3614;
        scrt1__24__car_2derror( X8 );
L3614:
        X12 = PAIR_CAR( X8 );
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = X11;
        X9 = sc_cons( X10, X7 );
        X8 = PAIR_CDR( X8 );
        X7 = X9;
        GOBACK( L3607 );
L3611:
        X9 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3621;
        scrt1__24__cdr_2derror( X9 );
L3621:
        X8 = PAIR_CDR( X9 );
        X7 = sceval_compile_2dlist( X8, X5 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3625;
        scrt1__24__car_2derror( X7 );
L3625:
        POPSTACKTRACE( scrt1_cons_2a( c2335, 
                                      CONS( PAIR_CAR( X7 ), X6 ) ) );
L3599:
        X1 = PAIR_CAR( e2276 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3629;
        if  ( FALSE( scrt1_assq( X1, e2277 ) ) )  goto L3631;
        X3 = FALSEVALUE;
        goto L3630;
L3631:
        X3 = TRUEVALUE;
        goto L3630;
L3629:
        X3 = FALSEVALUE;
L3630:
        if  ( FALSE( X3 ) )  goto L3634;
        X2 = scrt2_top_2dlevel_2dvalue( X1 );
        goto L3635;
L3634:
        X2 = X3;
L3635:
        if  ( FALSE( X3 ) )  goto L3637;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3640;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3641;
L3640:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3641:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( X1, X8 );
        X6 = X7;
        X5 = scrt1_assoc( X6, sceval_top_2dlevel_2drewrite_v );
        goto L3638;
L3637:
        X5 = X3;
L3638:
        if  ( FALSE( X5 ) )  goto L3662;
        if  ( FALSE( scrt1_memq( c2348, sceval_optimize_2doptions_v ) )
            )  goto L3662;
        if  ( FALSE( scrt1_memq( c2356, sceval_optimize_2doptions_v ) )
            )  goto L3649;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3652;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3653;
L3652:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3653:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = X8;
        goto L3650;
L3649:
        X7 = EMPTYLIST;
L3650:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3656;
        scrt1__24__cdr_2derror( X5 );
L3656:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3659;
        scrt1__24__car_2derror( X10 );
L3659:
        X9 = PAIR_CAR( X10 );
        X11 = PAIR_CDR( e2276 );
        X10 = sceval_compile_2dlist( X11, e2277 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X6 = scrt1_append_2dtwo( X7, X8 );
        POPSTACKTRACE( scrt1_cons_2a( X6, EMPTYLIST ) );
L3566:
        POPSTACKTRACE( e2276 );
L3562:
        if  ( EQ( TSCPTAG( e2276 ), FIXNUMTAG ) )  goto L3663;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), DOUBLEFLOATTAG ) )
            )  goto L3665;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), STRINGTAG ) )
            )  goto L3667;
        if  ( EQ( TSCPIMMEDIATETAG( e2276 ), CHARACTERTAG ) )  goto L3669;
        if  ( TRUE( scrt1_boolean_3f( e2276 ) ) )  goto L3671;
        if  ( NOT( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2276 ), RECORDTAG ) ) )
            )  goto L3673;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_cons_2a( c2313, CONS( c2314, X7 ) ), 
                   X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = scrt1_cons_2a( c2312, 
                            CONS( scrt1_cons_2a( c2313, 
                                                 CONS( e2276, X7 ) ), 
                                  X6 ) );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( X5, 
                            CONS( scrt1_cons_2a( c2313, 
                                                 CONS( e2276, X7 ) ), 
                                  X6 ) );
        e2276 = X4;
        GOBACK( L3559 );
L3673:
        sceval_compile_2derror_v = e2276;
        POPSTACKTRACE( TRUEVALUE );
L3671:
        POPSTACKTRACE( e2276 );
L3669:
        POPSTACKTRACE( e2276 );
L3667:
        POPSTACKTRACE( e2276 );
L3665:
        POPSTACKTRACE( e2276 );
L3663:
        POPSTACKTRACE( e2276 );
L3560:
        POPSTACKTRACE( e2276 );
L3662:
        if  ( FALSE( X3 ) )  goto L3698;
        X4 = scrt1_memq( c2356, sceval_optimize_2doptions_v );
        if  ( FALSE( X4 ) )  goto L3698;
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3698;
        X5 = scrt4_scheme_2dtscp_2dref( X2, sceval_codex_v );
        X6 = scrt4_scheme_2dtscp_2dref( sceval_interpreted_2dproc_v, 
                                        sceval_codex_v );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L3698;
        X5 = scrt1_length( e2276 );
        if  ( FALSE( scrt2__3c_3d( _TSCP( 8 ), 
                                   X5, 
                                   CONS( _TSCP( 16 ), EMPTYLIST ) ) )
            )  goto L3698;
        X6 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3692;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X6 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3693;
L3692:
        X5 = scrt2__2d_2dtwo( X6, _TSCP( 4 ) );
L3693:
        X8 = PAIR_CDR( e2276 );
        X7 = sceval_compile_2dlist( X8, e2277 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X5, CONS( X1, X6 ) ) );
L3698:
        POPSTACKTRACE( sceval_compile_2dlist( e2276, e2277 ) );
}

DEFTSCP( sceval_compile_2derror_v );
DEFCSTRING( t3699, "SCEVAL_COMPILE-ERROR" );
DEFTSCP( sceval_compile_2dlist_v );
DEFCSTRING( t3700, "SCEVAL_COMPILE-LIST" );

TSCP  sceval_compile_2dlist( e2555, e2556 )
        TSCP  e2555, e2556;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3700 );
        X1 = e2555;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3703:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3704;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3707;
        scrt1__24__car_2derror( X1 );
L3707:
        X6 = PAIR_CAR( X1 );
        X5 = sceval_compile( X6, e2556 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3710;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3703 );
L3710:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3715;
        scdebug_error( c2591, 
                       c2592, CONS( X3, EMPTYLIST ) );
L3715:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3703 );
L3704:
        POPSTACKTRACE( X2 );
}

DEFTSCP( sceval_eval_v );
DEFCSTRING( t3717, "EVAL" );
EXTERNTSCPP( scexpand_expand, XAL1( TSCP ) );
EXTERNTSCP( scexpand_expand_v );
EXTERNTSCPP( sceval_exec, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_v );
EXTERNTSCP( sc_undefined );

TSCP  sceval_eval( f2604, e2605 )
        TSCP  f2604, e2605;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3717 );
        sceval_compile_2derror_v = FALSEVALUE;
        if  ( NEQ( TSCPTAG( e2605 ), PAIRTAG ) )  goto L3719;
        X2 = PAIR_CAR( e2605 );
        X3 = X2;
L3723:
        X4 = BOOLEAN( EQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L3730;
        X5 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3730;
        X3 = PAIR_CDR( X3 );
        GOBACK( L3723 );
L3730:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3732;
        X1 = PAIR_CAR( e2605 );
        goto L3720;
L3732:
        X1 = scdebug_error( c2653, 
                            c2678, 
                            CONS( PAIR_CAR( e2605 ), EMPTYLIST ) );
        goto L3720;
L3719:
        X1 = EMPTYLIST;
L3720:
        X3 = scexpand_expand( f2604 );
        X2 = sceval_compile( X3, X1 );
        if  ( NEQ( _S2CUINT( sceval_compile_2derror_v ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L3736;
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3738;
        POPSTACKTRACE( sceval_exec( X2, X1 ) );
L3738:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3740;
        X3 = X1;
L3743:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3744;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3747;
        POPSTACKTRACE( scdebug_error( X2, c2649, EMPTYLIST ) );
L3747:
        POPSTACKTRACE( X4 );
L3744:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3749;
        X4 = PAIR_CAR( X3 );
        POPSTACKTRACE( PAIR_CDR( X4 ) );
L3749:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3743 );
L3740:
        POPSTACKTRACE( X2 );
L3736:
        POPSTACKTRACE( scdebug_error( c2653, 
                                      c2654, 
                                      CONS( sceval_compile_2derror_v, 
                                            EMPTYLIST ) ) );
}

DEFTSCP( sceval_exec_v );
DEFCSTRING( t3751, "SCEVAL_EXEC" );
EXTERNTSCPP( sceval_exec_2dlambda, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_2dlambda_v );
EXTERNTSCPP( sceval_l2903, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2903( e2905, e2906 )
        TSCP  e2905, e2906;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2905 ), PAIRTAG ) )  goto L3880;
        X2 = PAIR_CAR( e2905 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3883;
        X1 = sceval_exec( X2, e2906 );
        goto L3886;
L3883:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3885;
        X3 = e2906;
L3888:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3889;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3892;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3886;
L3892:
        X1 = X4;
        goto L3886;
L3889:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3894;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L3886;
L3894:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3888 );
L3885:
        X1 = X2;
L3886:
        X3 = PAIR_CDR( e2905 );
        X2 = sceval_l2903( X3, e2906 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3880:
        POPSTACKTRACE( EMPTYLIST );
}

EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( sceval_l2728, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2728( e2730, e2731 )
        TSCP  e2730, e2731;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2730 ), PAIRTAG ) )  goto L3929;
        X2 = PAIR_CAR( e2730 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3932;
        X1 = sceval_exec( X2, e2731 );
        goto L3935;
L3932:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3934;
        X3 = e2731;
L3937:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3938;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3941;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3935;
L3941:
        X1 = X4;
        goto L3935;
L3938:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3943;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L3935;
L3943:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3937 );
L3934:
        X1 = X2;
L3935:
        X3 = PAIR_CDR( e2730 );
        X2 = sceval_l2728( X3, e2731 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3929:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  sceval_exec( e2689, e2690 )
        TSCP  e2689, e2690;
{
        TSCP  X20, 
              X19, 
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

        PUSHSTACKTRACE( t3751 );
L3752:
        LOOPSTACKTRACE( e2689, e2690 );
        X1 = PAIR_CAR( e2689 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2323 ) ) )  goto L3754;
        X2 = PAIR_CAR( PAIR_CDR( e2689 ) );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3758;
        if  ( TRUE( sceval_exec( X2, e2690 ) ) )  goto L3762;
        goto L3763;
L3758:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3765;
        X3 = e2690;
L3770:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3771;
        X5 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3774;
        X4 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3777;
L3774:
        X4 = X5;
        goto L3777;
L3771:
        X6 = PAIR_CAR( X3 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X5 ) ) )  goto L3776;
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CDR( X5 );
        goto L3777;
L3776:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3770 );
L3777:
        if  ( TRUE( X4 ) )  goto L3762;
        goto L3763;
L3765:
        if  ( TRUE( X2 ) )  goto L3762;
        goto L3763;
L3754:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2327 ) ) )  goto L3782;
        X3 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3785;
        X2 = sceval_exec( X3, e2690 );
        goto L3788;
L3785:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3787;
        X4 = e2690;
L3790:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3791;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3794;
        X2 = scdebug_error( X3, c2649, EMPTYLIST );
        goto L3788;
L3794:
        X2 = X5;
        goto L3788;
L3791:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3796;
        X5 = PAIR_CAR( X4 );
        X2 = PAIR_CDR( X5 );
        goto L3788;
L3796:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3790 );
L3787:
        X2 = X3;
L3788:
        X4 = PAIR_CAR( PAIR_CDR( e2689 ) );
        X5 = X4;
        X6 = e2690;
L3800:
        if  ( FALSE( X6 ) )  goto L3801;
        X7 = PAIR_CAR( X6 );
        X8 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X8 ) ) )  goto L3804;
        X3 = X7;
        goto L3802;
L3804:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3800 );
L3801:
        X3 = FALSEVALUE;
L3802:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3807;
        scdebug_error( c2591, 
                       c2592, CONS( X3, EMPTYLIST ) );
L3807:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X3 ), X2 ) );
L3782:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2313 ) ) )  goto L3809;
        POPSTACKTRACE( PAIR_CAR( PAIR_CDR( e2689 ) ) );
L3809:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2335 ) ) )  goto L3811;
        POPSTACKTRACE( sceval_exec_2dlambda( e2689, e2690 ) );
L3811:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2331 ) ) )  goto L3813;
        X2 = PAIR_CDR( e2689 );
L3816:
        X3 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3817;
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3820;
        e2689 = X3;
        GOBACK( L3752 );
L3820:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3822;
        X4 = e2690;
L3825:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3826;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3829;
        POPSTACKTRACE( scdebug_error( X3, c2649, EMPTYLIST ) );
L3829:
        POPSTACKTRACE( X5 );
L3826:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3831;
        X5 = PAIR_CAR( X4 );
        POPSTACKTRACE( PAIR_CDR( X5 ) );
L3831:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3825 );
L3822:
        POPSTACKTRACE( X3 );
L3817:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3835;
        sceval_exec( X3, e2690 );
        goto L3847;
L3835:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3847;
        X4 = e2690;
L3840:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3841;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3847;
        scdebug_error( X3, c2649, EMPTYLIST );
        goto L3847;
L3841:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3846;
        X5 = PAIR_CAR( X4 );
        PAIR_CDR( X5 );
        goto L3847;
L3846:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3840 );
L3847:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3816 );
L3813:
        X3 = PAIR_CAR( e2689 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3849;
        X2 = sceval_exec( X3, e2690 );
        goto L3852;
L3849:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3851;
        X4 = e2690;
L3854:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3855;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3858;
        X2 = scdebug_error( X3, c2649, EMPTYLIST );
        goto L3852;
L3858:
        X2 = X5;
        goto L3852;
L3855:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3860;
        X5 = PAIR_CAR( X4 );
        X2 = PAIR_CDR( X5 );
        goto L3852;
L3860:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3854 );
L3851:
        X2 = X3;
L3852:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3863;
        X3 = MTSCP( T_U( X2 ), FIXED_C( sceval_codex_v ) );
        X4 = MTSCP( T_U( sceval_interpreted_2dproc_v ), 
                    FIXED_C( sceval_codex_v ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L3865;
        X3 = MTSCP( T_U( X2 ), 
                    FIXED_C( sceval_closurex_v ) );
        X4 = MTSCP( T_U( X3 ), FIXED_C( sceval_var0x_v ) );
        X6 = MTSCP( T_U( X3 ), FIXED_C( sceval_var1x_v ) );
        X7 = PAIR_CDR( e2689 );
        X8 = MTSCP( T_U( X3 ), FIXED_C( sceval_var2x_v ) );
        X9 = X8;
        X10 = X7;
        X11 = X6;
L3870:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3871;
        if  ( FALSE( X10 ) )  goto L3874;
        scdebug_error( c2894, c2952, EMPTYLIST );
L3874:
        X5 = X11;
        goto L3897;
L3871:
        if  ( NOT( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X9 ), SYMBOLTAG ) ) )
            )  goto L3876;
        X13 = sceval_l2903( X10, e2690 );
        X12 = sc_cons( X9, X13 );
        X5 = sc_cons( X12, X11 );
        goto L3897;
L3876:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3896;
        X5 = scdebug_error( c2894, c2895, EMPTYLIST );
        goto L3897;
L3896:
        X12 = PAIR_CDR( X9 );
        X13 = PAIR_CDR( X10 );
        X15 = PAIR_CAR( X9 );
        X17 = PAIR_CAR( X10 );
        if  ( NEQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L3899;
        X16 = sceval_exec( X17, e2690 );
        goto L3902;
L3899:
        if  ( NOT( AND( EQ( TSCPTAG( X17 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X17 ), SYMBOLTAG ) ) )
            )  goto L3901;
        X18 = e2690;
L3904:
        if  ( NEQ( _S2CUINT( X18 ), _S2CUINT( EMPTYLIST ) ) )  goto L3905;
        X19 = SYMBOL_VALUE( X17 );
        if  ( NEQ( _S2CUINT( X19 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3908;
        X16 = scdebug_error( X17, c2649, EMPTYLIST );
        goto L3902;
L3908:
        X16 = X19;
        goto L3902;
L3905:
        X20 = PAIR_CAR( X18 );
        X19 = PAIR_CAR( X20 );
        if  ( NEQ( _S2CUINT( X17 ), _S2CUINT( X19 ) ) )  goto L3910;
        X19 = PAIR_CAR( X18 );
        X16 = PAIR_CDR( X19 );
        goto L3902;
L3910:
        X18 = PAIR_CDR( X18 );
        GOBACK( L3904 );
L3901:
        X16 = X17;
L3902:
        X14 = sc_cons( X15, X16 );
        X11 = sc_cons( X14, X11 );
        X10 = X13;
        X9 = X12;
        GOBACK( L3870 );
L3897:
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3913;
        e2690 = X5;
        e2689 = X4;
        GOBACK( L3752 );
L3913:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L3915;
        X6 = X5;
L3918:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3919;
        X7 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X7 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3922;
        POPSTACKTRACE( scdebug_error( X4, c2649, EMPTYLIST ) );
L3922:
        POPSTACKTRACE( X7 );
L3919:
        X8 = PAIR_CAR( X6 );
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X7 ) ) )  goto L3924;
        X7 = PAIR_CAR( X6 );
        POPSTACKTRACE( PAIR_CDR( X7 ) );
L3924:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3918 );
L3915:
        POPSTACKTRACE( X4 );
L3865:
        X4 = PAIR_CDR( e2689 );
        X3 = sceval_l2728( X4, e2690 );
        POPSTACKTRACE( sc_apply_2dtwo( X2, X3 ) );
L3863:
        POPSTACKTRACE( scdebug_error( c2964, 
                                      c2965, 
                                      CONS( PAIR_CAR( e2689 ), 
                                            EMPTYLIST ) ) );
L3762:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3946;
        e2689 = X1;
        GOBACK( L3752 );
L3946:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3948;
        X2 = e2690;
L3951:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3952;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3955;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L3955:
        POPSTACKTRACE( X3 );
L3952:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L3957;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L3957:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3951 );
L3948:
        POPSTACKTRACE( X1 );
L3763:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2689 ) ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3960;
        e2689 = X1;
        GOBACK( L3752 );
L3960:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3962;
        X2 = e2690;
L3965:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3966;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3969;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L3969:
        POPSTACKTRACE( X3 );
L3966:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L3971;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L3971:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3965 );
L3962:
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_interpreted_2dproc_v );
DEFCSTRING( t3973, "SCEVAL_INTERPRETED-PROC" );
DEFTSCP( sceval_exec_2dlambda_v );
DEFCSTRING( t3974, "SCEVAL_EXEC-LAMBDA" );
EXTERNTSCPP( sceval_l3354, XAL3( TSCP, TSCP, TSCP ) );

TSCP  sceval_l3354( i3356, v3357, e3358 )
        TSCP  i3356, v3357, e3358;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC-LAMBDA]" );
        if  ( NEQ( _S2CUINT( i3356 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3982;
        if  ( FALSE( v3357 ) )  goto L3985;
        scdebug_error( c2894, c2952, EMPTYLIST );
L3985:
        POPSTACKTRACE( e3358 );
L3982:
        if  ( NOT( AND( EQ( TSCPTAG( i3356 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( i3356 ), SYMBOLTAG ) ) )
            )  goto L3987;
        X1 = sc_cons( i3356, v3357 );
        POPSTACKTRACE( sc_cons( X1, e3358 ) );
L3987:
        if  ( NEQ( _S2CUINT( v3357 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3989;
        POPSTACKTRACE( scdebug_error( c2894, c2895, EMPTYLIST ) );
L3989:
        X2 = PAIR_CAR( i3356 );
        X3 = PAIR_CAR( v3357 );
        X1 = sc_cons( X2, X3 );
        X3 = PAIR_CDR( i3356 );
        X4 = PAIR_CDR( v3357 );
        X2 = sceval_l3354( X3, X4, e3358 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

TSCP  sceval_l3305( v3306, c3977 )
        TSCP  v3306, c3977;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "sceval_l3305 [inside EXEC-LAMBDA]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3977, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3977, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3977, 2 );
        X6 = DISPLAY( 2 );
        X7 = DISPLAY( 0 );
        X5 = sceval_l3354( X6, v3306, X7 );
        X6 = DISPLAY( 1 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3992;
        X4 = sceval_exec( X6, X5 );
        goto L3995;
L3992:
        if  ( NOT( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) )
            )  goto L3994;
        X7 = X5;
L3997:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3998;
        X8 = SYMBOL_VALUE( X6 );
        if  ( NEQ( _S2CUINT( X8 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4001;
        X4 = scdebug_error( X6, c2649, EMPTYLIST );
        goto L3995;
L4001:
        X4 = X8;
        goto L3995;
L3998:
        X9 = PAIR_CAR( X7 );
        X8 = PAIR_CAR( X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X8 ) ) )  goto L4003;
        X8 = PAIR_CAR( X7 );
        X4 = PAIR_CDR( X8 );
        goto L3995;
L4003:
        X7 = PAIR_CDR( X7 );
        GOBACK( L3997 );
L3994:
        X4 = X6;
L3995:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  sceval_exec_2dlambda( e3300, e3301 )
        TSCP  e3300, e3301;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3974 );
        DISPLAY( 0 ) = e3301;
        X2 = PAIR_CDR( e3300 );
        X1 = PAIR_CDR( X2 );
        DISPLAY( 1 ) = sc_cons( c2331, X1 );
        DISPLAY( 2 ) = PAIR_CAR( PAIR_CDR( e3300 ) );
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               sceval_l3305, 
                               MAKECLOSURE( EMPTYLIST, 
                                            3, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 0 ), 
                                            DISPLAY( 2 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scexpand__init();
        scrt4__init();
        scrt2__init();
        scdebug__init();
        scrt1__init();
        scexpand__init();
        scexpnd1__init();
        scexpnd2__init();
        scrt1__init();
        scrt2__init();
        scrt3__init();
        scrt4__init();
        scrt5__init();
        scrt6__init();
        scrt7__init();
        scrtuser__init();
        MAXDISPLAY( 3 );
}

void  sceval__init()
{
        TSCP  X4, X3, X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(sceval SCHEME->C COMPILER 15mar93jfb)" );
        INITIALIZEVAR( t3488, 
                       ADR( sceval_optimize_2doptions_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3489, 
                       ADR( sceval_optimize_2deval_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      sceval_optimize_2deval, 
                                      EMPTYLIST ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2157, CONS( _TSCP( 4 ), X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( X2, CONS( c2159, X3 ) );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2187, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2189, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2187, CONS( _TSCP( 4 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2188, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2184, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2186, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2184, CONS( _TSCP( 4 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2185, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2182, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2183, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2180, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2181, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2178, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2179, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2176, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2177, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2174, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2175, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2172, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2173, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2170, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2171, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2168, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2169, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2166, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2167, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2164, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2165, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2157, CONS( _TSCP( 12 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( X3, CONS( c2163, X4 ) ), 
                   X2 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2157, CONS( _TSCP( 8 ), X4 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        INITIALIZEVAR( t3513, 
                       ADR( sceval_top_2dlevel_2drewrite_v ), 
                       scrt1_cons_2a( X1, 
                                      CONS( scrt1_cons_2a( X3, 
                                                           CONS( c2161, 
                                                                 X4 ) ), 
                                            X2 ) ) );
        INITIALIZEVAR( t3514, 
                       ADR( sceval_list1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_list1, EMPTYLIST ) );
        INITIALIZEVAR( t3517, 
                       ADR( sceval_list2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_list2, EMPTYLIST ) );
        INITIALIZEVAR( t3520, 
                       ADR( sceval_list3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, sceval_list3, EMPTYLIST ) );
        INITIALIZEVAR( t3523, 
                       ADR( sceval_negate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_negate, EMPTYLIST ) );
        INITIALIZEVAR( t3527, 
                       ADR( sceval__2f1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval__2f1, EMPTYLIST ) );
        INITIALIZEVAR( t3540, 
                       ADR( sceval_sizeof_2dtscp_v ), 
                       C_FIXED( SIZEOF( TSCP ) ) );
        INITIALIZEVAR( t3541, 
                       ADR( sceval_codex_v ), 
                       sceval_sizeof_2dtscp_v );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3544;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3545;
L3544:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3545:
        INITIALIZEVAR( t3542, ADR( sceval_closurex_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3548;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3549;
L3548:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3549:
        INITIALIZEVAR( t3546, ADR( sceval_var0x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3552;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3553;
L3552:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X1 );
L3553:
        INITIALIZEVAR( t3550, ADR( sceval_var1x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3556;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3557;
L3556:
        X2 = scrt2__2a_2dtwo( _TSCP( 16 ), X1 );
L3557:
        INITIALIZEVAR( t3554, ADR( sceval_var2x_v ), X2 );
        INITIALIZEVAR( t3558, 
                       ADR( sceval_compile_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_compile, EMPTYLIST ) );
        INITIALIZEVAR( t3699, 
                       ADR( sceval_compile_2derror_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3700, 
                       ADR( sceval_compile_2dlist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_compile_2dlist, EMPTYLIST ) );
        INITIALIZEVAR( t3717, 
                       ADR( sceval_eval_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, sceval_eval, EMPTYLIST ) );
        INITIALIZEVAR( t3751, 
                       ADR( sceval_exec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_exec, EMPTYLIST ) );
        INITIALIZEVAR( t3973, 
                       ADR( sceval_interpreted_2dproc_v ), 
                       sceval_eval( c3298, EMPTYLIST ) );
        INITIALIZEVAR( t3974, 
                       ADR( sceval_exec_2dlambda_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_exec_2dlambda, EMPTYLIST ) );
        return;
}
