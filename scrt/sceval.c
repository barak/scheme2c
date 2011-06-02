
/* SCHEME->C */

#include <objects.h>

void sceval__init();
DEFSTATICTSCP( c3316 );
DEFSTATICTSCP( t3506 );
DEFSTATICTSCP( t3507 );
DEFCSTRING( t3508, "Argument value is not a function: ~s" );
DEFSTATICTSCP( c2983 );
DEFSTATICTSCP( c2982 );
DEFCSTRING( t3509, "Too many arguments to function" );
DEFSTATICTSCP( c2970 );
DEFCSTRING( t3510, "Too few arguments to function" );
DEFSTATICTSCP( c2913 );
DEFSTATICTSCP( c2912 );
DEFCSTRING( t3511, "Environment is not an A-LIST: ~s" );
DEFSTATICTSCP( c2696 );
DEFCSTRING( t3512, "noexpand" );
DEFSTATICTSCP( c2670 );
DEFCSTRING( t3513, 
            "Argument contains an item that is not self-evaluating: ~s" );
DEFSTATICTSCP( c2654 );
DEFSTATICTSCP( c2653 );
DEFCSTRING( t3514, "Top-level symbol is undefined" );
DEFSTATICTSCP( c2649 );
DEFCSTRING( t3515, "Argument not a PAIR: ~s" );
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
DEFCSTRING( t3516, "Illegal OPTIMIZATION OPTION(S): ~s" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2154 );
DEFSTATICTSCP( c2153 );
DEFSTATICTSCP( c2151 );
DEFSTATICTSCP( c2146 );
DEFSTATICTSCP( c2141 );

static void  init_constants()
{
        TSCP  X1;

        c3316 = EMPTYLIST;
        t3506 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        c3316 = CONS( t3506, c3316 );
        X1 = EMPTYLIST;
        X1 = CONS( t3506, X1 );
        c3316 = CONS( X1, c3316 );
        t3507 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        c3316 = CONS( t3507, c3316 );
        CONSTANTEXP( ADR( c3316 ) );
        c2983 = CSTRING_TSCP( t3508 );
        CONSTANTEXP( ADR( c2983 ) );
        c2982 = STRINGTOSYMBOL( CSTRING_TSCP( "EXEC" ) );
        CONSTANTEXP( ADR( c2982 ) );
        c2970 = CSTRING_TSCP( t3509 );
        CONSTANTEXP( ADR( c2970 ) );
        c2913 = CSTRING_TSCP( t3510 );
        CONSTANTEXP( ADR( c2913 ) );
        c2912 = STRINGTOSYMBOL( CSTRING_TSCP( "NEW-ENV" ) );
        CONSTANTEXP( ADR( c2912 ) );
        c2696 = CSTRING_TSCP( t3511 );
        CONSTANTEXP( ADR( c2696 ) );
        c2670 = CSTRING_TSCP( t3512 );
        CONSTANTEXP( ADR( c2670 ) );
        c2654 = CSTRING_TSCP( t3513 );
        CONSTANTEXP( ADR( c2654 ) );
        c2653 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL" ) );
        CONSTANTEXP( ADR( c2653 ) );
        c2649 = CSTRING_TSCP( t3514 );
        CONSTANTEXP( ADR( c2649 ) );
        c2592 = CSTRING_TSCP( t3515 );
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
        c2155 = CSTRING_TSCP( t3516 );
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
DEFCSTRING( t3517, "SCEVAL_OPTIMIZE-OPTIONS" );
DEFTSCP( sceval_optimize_2deval_v );
DEFCSTRING( t3518, "OPTIMIZE-EVAL" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  sceval_optimize_2deval( o2133 )
        TSCP  o2133;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3518 );
        X1 = scrt1_equal_3f( o2133, EMPTYLIST );
        if  ( TRUE( X1 ) )  goto L3524;
        X2 = scrt1_equal_3f( o2133, c2141 );
        if  ( TRUE( X2 ) )  goto L3524;
        X3 = scrt1_equal_3f( o2133, c2146 );
        if  ( TRUE( X3 ) )  goto L3524;
        X4 = scrt1_equal_3f( o2133, c2151 );
        if  ( TRUE( X4 ) )  goto L3524;
        if  ( TRUE( scrt1_equal_3f( o2133, c2153 ) ) )  goto L3524;
        POPSTACKTRACE( scdebug_error( c2154, 
                                      c2155, 
                                      CONS( o2133, EMPTYLIST ) ) );
L3524:
        POPSTACKTRACE( SET( sceval_optimize_2doptions_v, o2133 ) );
}

DEFTSCP( sceval_top_2dlevel_2drewrite_v );
DEFCSTRING( t3542, "SCEVAL_TOP-LEVEL-REWRITE" );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
DEFTSCP( sceval_list1_v );
DEFCSTRING( t3543, "SCEVAL_LIST1" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  sceval_list1( x2192 )
        TSCP  x2192;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3543 );
        X1 = sc_cons( x2192, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list2_v );
DEFCSTRING( t3546, "SCEVAL_LIST2" );

TSCP  sceval_list2( x2197, y2198 )
        TSCP  x2197, y2198;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3546 );
        X2 = sc_cons( y2198, EMPTYLIST );
        X1 = sc_cons( x2197, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list3_v );
DEFCSTRING( t3549, "SCEVAL_LIST3" );

TSCP  sceval_list3( x2203, y2204, z2205 )
        TSCP  x2203, y2204, z2205;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3549 );
        X3 = sc_cons( z2205, EMPTYLIST );
        X2 = sc_cons( y2204, X3 );
        X1 = sc_cons( x2203, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_negate_v );
DEFCSTRING( t3552, "SCEVAL_NEGATE" );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  sceval_negate( x2210 )
        TSCP  x2210;
{
        PUSHSTACKTRACE( t3552 );
        if  ( NEQ( TSCPTAG( x2210 ), FIXNUMTAG ) )  goto L3554;
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( x2210 ) ) ) );
L3554:
        POPSTACKTRACE( scrt2__2d_2dtwo( c2217, x2210 ) );
}

DEFTSCP( sceval__2f1_v );
DEFCSTRING( t3556, "SCEVAL_/1" );
EXTERNTSCPP( scrt2__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2f_2dtwo_v );

TSCP  sceval__2f1( x2220 )
        TSCP  x2220;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3556 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L3568;
        if  ( EQ( _S2CUINT( x2220 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3568;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x2220 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L3568;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ) ) );
L3568:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x2220 ) );
}

DEFTSCP( sceval_sizeof_2dtscp_v );
DEFCSTRING( t3569, "SCEVAL_SIZEOF-TSCP" );
DEFTSCP( sceval_codex_v );
DEFCSTRING( t3570, "SCEVAL_CODEX" );
DEFTSCP( sceval_closurex_v );
DEFCSTRING( t3571, "SCEVAL_CLOSUREX" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
DEFTSCP( sceval_var0x_v );
DEFCSTRING( t3575, "SCEVAL_VAR0X" );
DEFTSCP( sceval_var1x_v );
DEFCSTRING( t3579, "SCEVAL_VAR1X" );
DEFTSCP( sceval_var2x_v );
DEFCSTRING( t3583, "SCEVAL_VAR2X" );
DEFTSCP( sceval_compile_v );
DEFCSTRING( t3587, "SCEVAL_COMPILE" );
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

        PUSHSTACKTRACE( t3587 );
L3588:
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), SYMBOLTAG ) )
            )  goto L3589;
        if  ( NEQ( TSCPTAG( e2276 ), PAIRTAG ) )  goto L3591;
        X4 = PAIR_CAR( e2276 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2313 ) ) )  goto L3595;
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2323 ) ) )  goto L3597;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cadddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3601;
        scrt1__24__car_2derror( X7 );
L3601:
        X6 = PAIR_CAR( X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2323, 
                                      CONS( sceval_compile( X6, e2277 ), 
                                            X5 ) ) );
L3597:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2327 ) ) )  goto L3603;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3609;
        scrt1__24__car_2derror( X6 );
L3609:
        X5 = PAIR_CAR( X6 );
        if  ( FALSE( scrt1_assq( X5, e2277 ) ) )  goto L3605;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3613;
        scrt1__24__car_2derror( X6 );
L3613:
        POPSTACKTRACE( scrt1_cons_2a( c2327, 
                                      CONS( PAIR_CAR( X6 ), X5 ) ) );
L3605:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_caddr( e2276 ), X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3617;
        scrt1__24__car_2derror( X8 );
L3617:
        X5 = scrt1_cons_2a( c2509, 
                            CONS( scrt1_cons_2a( c2313, 
                                                 CONS( PAIR_CAR( X8 ), 
                                                       X7 ) ), 
                                  X6 ) );
        e2276 = X5;
        GOBACK( L3588 );
L3603:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2331 ) ) )  goto L3619;
        X5 = scrt1_length( e2276 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L3621;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3625;
        scrt1__24__car_2derror( X6 );
L3625:
        X5 = PAIR_CAR( X6 );
        e2276 = X5;
        GOBACK( L3588 );
L3621:
        X6 = PAIR_CDR( e2276 );
        X5 = sceval_compile_2dlist( X6, e2277 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2331, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3619:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2335 ) ) )  goto L3628;
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3632;
        scrt1__24__car_2derror( X7 );
L3632:
        X6 = PAIR_CAR( X7 );
        X7 = e2277;
        X8 = X6;
L3636:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3637;
        X5 = X7;
        goto L3640;
L3637:
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L3639;
        X10 = sc_cons( X8, EMPTYLIST );
        X9 = X10;
        X5 = sc_cons( X9, X7 );
        goto L3640;
L3639:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3643;
        scrt1__24__car_2derror( X8 );
L3643:
        X12 = PAIR_CAR( X8 );
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = X11;
        X9 = sc_cons( X10, X7 );
        X8 = PAIR_CDR( X8 );
        X7 = X9;
        GOBACK( L3636 );
L3640:
        X9 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3650;
        scrt1__24__cdr_2derror( X9 );
L3650:
        X8 = PAIR_CDR( X9 );
        X7 = sceval_compile_2dlist( X8, X5 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3654;
        scrt1__24__car_2derror( X7 );
L3654:
        POPSTACKTRACE( scrt1_cons_2a( c2335, 
                                      CONS( PAIR_CAR( X7 ), X6 ) ) );
L3628:
        X1 = PAIR_CAR( e2276 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3658;
        if  ( FALSE( scrt1_assq( X1, e2277 ) ) )  goto L3660;
        X3 = FALSEVALUE;
        goto L3659;
L3660:
        X3 = TRUEVALUE;
        goto L3659;
L3658:
        X3 = FALSEVALUE;
L3659:
        if  ( FALSE( X3 ) )  goto L3663;
        X2 = scrt2_top_2dlevel_2dvalue( X1 );
        goto L3664;
L3663:
        X2 = X3;
L3664:
        if  ( FALSE( X3 ) )  goto L3666;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3669;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3670;
L3669:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3670:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( X1, X8 );
        X6 = X7;
        X5 = scrt1_assoc( X6, sceval_top_2dlevel_2drewrite_v );
        goto L3667;
L3666:
        X5 = X3;
L3667:
        if  ( FALSE( X5 ) )  goto L3691;
        if  ( FALSE( scrt1_memq( c2348, sceval_optimize_2doptions_v ) )
            )  goto L3691;
        if  ( FALSE( scrt1_memq( c2356, sceval_optimize_2doptions_v ) )
            )  goto L3678;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3681;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3682;
L3681:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3682:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = X8;
        goto L3679;
L3678:
        X7 = EMPTYLIST;
L3679:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3685;
        scrt1__24__cdr_2derror( X5 );
L3685:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3688;
        scrt1__24__car_2derror( X10 );
L3688:
        X9 = PAIR_CAR( X10 );
        X11 = PAIR_CDR( e2276 );
        X10 = sceval_compile_2dlist( X11, e2277 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X6 = scrt1_append_2dtwo( X7, X8 );
        POPSTACKTRACE( scrt1_cons_2a( X6, EMPTYLIST ) );
L3595:
        POPSTACKTRACE( e2276 );
L3591:
        if  ( EQ( TSCPTAG( e2276 ), FIXNUMTAG ) )  goto L3692;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), DOUBLEFLOATTAG ) )
            )  goto L3694;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), STRINGTAG ) )
            )  goto L3696;
        if  ( EQ( TSCPIMMEDIATETAG( e2276 ), CHARACTERTAG ) )  goto L3698;
        if  ( TRUE( scrt1_boolean_3f( e2276 ) ) )  goto L3700;
        if  ( NOT( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2276 ), RECORDTAG ) ) )
            )  goto L3702;
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
        GOBACK( L3588 );
L3702:
        sceval_compile_2derror_v = e2276;
        POPSTACKTRACE( TRUEVALUE );
L3700:
        POPSTACKTRACE( e2276 );
L3698:
        POPSTACKTRACE( e2276 );
L3696:
        POPSTACKTRACE( e2276 );
L3694:
        POPSTACKTRACE( e2276 );
L3692:
        POPSTACKTRACE( e2276 );
L3589:
        POPSTACKTRACE( e2276 );
L3691:
        if  ( FALSE( X3 ) )  goto L3727;
        X4 = scrt1_memq( c2356, sceval_optimize_2doptions_v );
        if  ( FALSE( X4 ) )  goto L3727;
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3727;
        X5 = scrt4_scheme_2dtscp_2dref( X2, sceval_codex_v );
        X6 = scrt4_scheme_2dtscp_2dref( sceval_interpreted_2dproc_v, 
                                        sceval_codex_v );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L3727;
        X5 = scrt1_length( e2276 );
        if  ( FALSE( scrt2__3c_3d( _TSCP( 8 ), 
                                   X5, 
                                   CONS( _TSCP( 16 ), EMPTYLIST ) ) )
            )  goto L3727;
        X6 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3721;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X6 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3722;
L3721:
        X5 = scrt2__2d_2dtwo( X6, _TSCP( 4 ) );
L3722:
        X8 = PAIR_CDR( e2276 );
        X7 = sceval_compile_2dlist( X8, e2277 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X5, CONS( X1, X6 ) ) );
L3727:
        POPSTACKTRACE( sceval_compile_2dlist( e2276, e2277 ) );
}

DEFTSCP( sceval_compile_2derror_v );
DEFCSTRING( t3728, "SCEVAL_COMPILE-ERROR" );
DEFTSCP( sceval_compile_2dlist_v );
DEFCSTRING( t3729, "SCEVAL_COMPILE-LIST" );

TSCP  sceval_compile_2dlist( e2555, e2556 )
        TSCP  e2555, e2556;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3729 );
        X1 = e2555;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3732:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3733;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3736;
        scrt1__24__car_2derror( X1 );
L3736:
        X6 = PAIR_CAR( X1 );
        X5 = sceval_compile( X6, e2556 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3739;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3732 );
L3739:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3744;
        scdebug_error( c2591, 
                       c2592, CONS( X3, EMPTYLIST ) );
L3744:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3732 );
L3733:
        POPSTACKTRACE( X2 );
}

DEFTSCP( sceval_eval_v );
DEFCSTRING( t3746, "EVAL" );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( scexpand_expand, XAL1( TSCP ) );
EXTERNTSCP( scexpand_expand_v );
EXTERNTSCPP( sceval_exec, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_v );
EXTERNTSCP( sc_undefined );

TSCP  sceval_eval( f2604, e2605 )
        TSCP  f2604, e2605;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3746 );
        sceval_compile_2derror_v = FALSEVALUE;
        if  ( NEQ( TSCPTAG( e2605 ), PAIRTAG ) )  goto L3748;
        X2 = PAIR_CAR( e2605 );
        X3 = X2;
L3752:
        X4 = BOOLEAN( EQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L3759;
        X5 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3759;
        X3 = PAIR_CDR( X3 );
        GOBACK( L3752 );
L3759:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3761;
        X1 = PAIR_CAR( e2605 );
        goto L3749;
L3761:
        X1 = scdebug_error( c2653, 
                            c2696, 
                            CONS( PAIR_CAR( e2605 ), EMPTYLIST ) );
        goto L3749;
L3748:
        X1 = EMPTYLIST;
L3749:
        X4 = scrt1_list_3f( f2604 );
        if  ( FALSE( X4 ) )  goto L3774;
        if  ( EQ( _S2CUINT( f2604 ), _S2CUINT( EMPTYLIST ) ) )  goto L3774;
        X5 = PAIR_CAR( f2604 );
        if  ( FALSE( scrt1_equal_3f( X5, c2670 ) ) )  goto L3774;
        X3 = PAIR_CAR( PAIR_CDR( f2604 ) );
        goto L3775;
L3774:
        X3 = scexpand_expand( f2604 );
L3775:
        X2 = sceval_compile( X3, X1 );
        if  ( NEQ( _S2CUINT( sceval_compile_2derror_v ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L3777;
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3779;
        POPSTACKTRACE( sceval_exec( X2, X1 ) );
L3779:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3781;
        X3 = X1;
L3784:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3785;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3788;
        POPSTACKTRACE( scdebug_error( X2, c2649, EMPTYLIST ) );
L3788:
        POPSTACKTRACE( X4 );
L3785:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3790;
        X4 = PAIR_CAR( X3 );
        POPSTACKTRACE( PAIR_CDR( X4 ) );
L3790:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3784 );
L3781:
        POPSTACKTRACE( X2 );
L3777:
        POPSTACKTRACE( scdebug_error( c2653, 
                                      c2654, 
                                      CONS( sceval_compile_2derror_v, 
                                            EMPTYLIST ) ) );
}

DEFTSCP( sceval_exec_v );
DEFCSTRING( t3792, "SCEVAL_EXEC" );
EXTERNTSCPP( sceval_exec_2dlambda, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_2dlambda_v );
EXTERNTSCPP( sceval_l2921, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2921( e2923, e2924 )
        TSCP  e2923, e2924;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2923 ), PAIRTAG ) )  goto L3921;
        X2 = PAIR_CAR( e2923 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3924;
        X1 = sceval_exec( X2, e2924 );
        goto L3927;
L3924:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3926;
        X3 = e2924;
L3929:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3930;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3933;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3927;
L3933:
        X1 = X4;
        goto L3927;
L3930:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3935;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L3927;
L3935:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3929 );
L3926:
        X1 = X2;
L3927:
        X3 = PAIR_CDR( e2923 );
        X2 = sceval_l2921( X3, e2924 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3921:
        POPSTACKTRACE( EMPTYLIST );
}

EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( sceval_l2746, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2746( e2748, e2749 )
        TSCP  e2748, e2749;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2748 ), PAIRTAG ) )  goto L3970;
        X2 = PAIR_CAR( e2748 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3973;
        X1 = sceval_exec( X2, e2749 );
        goto L3976;
L3973:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3975;
        X3 = e2749;
L3978:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3979;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3982;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3976;
L3982:
        X1 = X4;
        goto L3976;
L3979:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L3984;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L3976;
L3984:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3978 );
L3975:
        X1 = X2;
L3976:
        X3 = PAIR_CDR( e2748 );
        X2 = sceval_l2746( X3, e2749 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3970:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  sceval_exec( e2707, e2708 )
        TSCP  e2707, e2708;
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

        PUSHSTACKTRACE( t3792 );
L3793:
        LOOPSTACKTRACE( e2707, e2708 );
        X1 = PAIR_CAR( e2707 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2323 ) ) )  goto L3795;
        X2 = PAIR_CAR( PAIR_CDR( e2707 ) );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3799;
        if  ( TRUE( sceval_exec( X2, e2708 ) ) )  goto L3803;
        goto L3804;
L3799:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3806;
        X3 = e2708;
L3811:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3812;
        X5 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3815;
        X4 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L3818;
L3815:
        X4 = X5;
        goto L3818;
L3812:
        X6 = PAIR_CAR( X3 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X5 ) ) )  goto L3817;
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CDR( X5 );
        goto L3818;
L3817:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3811 );
L3818:
        if  ( TRUE( X4 ) )  goto L3803;
        goto L3804;
L3806:
        if  ( TRUE( X2 ) )  goto L3803;
        goto L3804;
L3795:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2327 ) ) )  goto L3823;
        X3 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2707 ) ) );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3826;
        X2 = sceval_exec( X3, e2708 );
        goto L3829;
L3826:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3828;
        X4 = e2708;
L3831:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3832;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3835;
        X2 = scdebug_error( X3, c2649, EMPTYLIST );
        goto L3829;
L3835:
        X2 = X5;
        goto L3829;
L3832:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3837;
        X5 = PAIR_CAR( X4 );
        X2 = PAIR_CDR( X5 );
        goto L3829;
L3837:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3831 );
L3828:
        X2 = X3;
L3829:
        X4 = PAIR_CAR( PAIR_CDR( e2707 ) );
        X5 = X4;
        X6 = e2708;
L3841:
        if  ( FALSE( X6 ) )  goto L3842;
        X7 = PAIR_CAR( X6 );
        X8 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X8 ) ) )  goto L3845;
        X3 = X7;
        goto L3843;
L3845:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3841 );
L3842:
        X3 = FALSEVALUE;
L3843:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3848;
        scdebug_error( c2591, 
                       c2592, CONS( X3, EMPTYLIST ) );
L3848:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X3 ), X2 ) );
L3823:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2313 ) ) )  goto L3850;
        POPSTACKTRACE( PAIR_CAR( PAIR_CDR( e2707 ) ) );
L3850:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2335 ) ) )  goto L3852;
        POPSTACKTRACE( sceval_exec_2dlambda( e2707, e2708 ) );
L3852:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2331 ) ) )  goto L3854;
        X2 = PAIR_CDR( e2707 );
L3857:
        X3 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3858;
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3861;
        e2707 = X3;
        GOBACK( L3793 );
L3861:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3863;
        X4 = e2708;
L3866:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3867;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3870;
        POPSTACKTRACE( scdebug_error( X3, c2649, EMPTYLIST ) );
L3870:
        POPSTACKTRACE( X5 );
L3867:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3872;
        X5 = PAIR_CAR( X4 );
        POPSTACKTRACE( PAIR_CDR( X5 ) );
L3872:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3866 );
L3863:
        POPSTACKTRACE( X3 );
L3858:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3876;
        sceval_exec( X3, e2708 );
        goto L3888;
L3876:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3888;
        X4 = e2708;
L3881:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3882;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3888;
        scdebug_error( X3, c2649, EMPTYLIST );
        goto L3888;
L3882:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3887;
        X5 = PAIR_CAR( X4 );
        PAIR_CDR( X5 );
        goto L3888;
L3887:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3881 );
L3888:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3857 );
L3854:
        X3 = PAIR_CAR( e2707 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3890;
        X2 = sceval_exec( X3, e2708 );
        goto L3893;
L3890:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3892;
        X4 = e2708;
L3895:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3896;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3899;
        X2 = scdebug_error( X3, c2649, EMPTYLIST );
        goto L3893;
L3899:
        X2 = X5;
        goto L3893;
L3896:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L3901;
        X5 = PAIR_CAR( X4 );
        X2 = PAIR_CDR( X5 );
        goto L3893;
L3901:
        X4 = PAIR_CDR( X4 );
        GOBACK( L3895 );
L3892:
        X2 = X3;
L3893:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3904;
        X3 = MTSCP( T_U( X2 ), FIXED_C( sceval_codex_v ) );
        X4 = MTSCP( T_U( sceval_interpreted_2dproc_v ), 
                    FIXED_C( sceval_codex_v ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L3906;
        X3 = MTSCP( T_U( X2 ), 
                    FIXED_C( sceval_closurex_v ) );
        X4 = MTSCP( T_U( X3 ), FIXED_C( sceval_var0x_v ) );
        X6 = MTSCP( T_U( X3 ), FIXED_C( sceval_var1x_v ) );
        X7 = PAIR_CDR( e2707 );
        X8 = MTSCP( T_U( X3 ), FIXED_C( sceval_var2x_v ) );
        X9 = X8;
        X10 = X7;
        X11 = X6;
L3911:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3912;
        if  ( FALSE( X10 ) )  goto L3915;
        scdebug_error( c2912, c2970, EMPTYLIST );
L3915:
        X5 = X11;
        goto L3938;
L3912:
        if  ( NOT( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X9 ), SYMBOLTAG ) ) )
            )  goto L3917;
        X13 = sceval_l2921( X10, e2708 );
        X12 = sc_cons( X9, X13 );
        X5 = sc_cons( X12, X11 );
        goto L3938;
L3917:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L3937;
        X5 = scdebug_error( c2912, c2913, EMPTYLIST );
        goto L3938;
L3937:
        X12 = PAIR_CDR( X9 );
        X13 = PAIR_CDR( X10 );
        X15 = PAIR_CAR( X9 );
        X17 = PAIR_CAR( X10 );
        if  ( NEQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L3940;
        X16 = sceval_exec( X17, e2708 );
        goto L3943;
L3940:
        if  ( NOT( AND( EQ( TSCPTAG( X17 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X17 ), SYMBOLTAG ) ) )
            )  goto L3942;
        X18 = e2708;
L3945:
        if  ( NEQ( _S2CUINT( X18 ), _S2CUINT( EMPTYLIST ) ) )  goto L3946;
        X19 = SYMBOL_VALUE( X17 );
        if  ( NEQ( _S2CUINT( X19 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3949;
        X16 = scdebug_error( X17, c2649, EMPTYLIST );
        goto L3943;
L3949:
        X16 = X19;
        goto L3943;
L3946:
        X20 = PAIR_CAR( X18 );
        X19 = PAIR_CAR( X20 );
        if  ( NEQ( _S2CUINT( X17 ), _S2CUINT( X19 ) ) )  goto L3951;
        X19 = PAIR_CAR( X18 );
        X16 = PAIR_CDR( X19 );
        goto L3943;
L3951:
        X18 = PAIR_CDR( X18 );
        GOBACK( L3945 );
L3942:
        X16 = X17;
L3943:
        X14 = sc_cons( X15, X16 );
        X11 = sc_cons( X14, X11 );
        X10 = X13;
        X9 = X12;
        GOBACK( L3911 );
L3938:
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3954;
        e2708 = X5;
        e2707 = X4;
        GOBACK( L3793 );
L3954:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L3956;
        X6 = X5;
L3959:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3960;
        X7 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X7 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3963;
        POPSTACKTRACE( scdebug_error( X4, c2649, EMPTYLIST ) );
L3963:
        POPSTACKTRACE( X7 );
L3960:
        X8 = PAIR_CAR( X6 );
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X7 ) ) )  goto L3965;
        X7 = PAIR_CAR( X6 );
        POPSTACKTRACE( PAIR_CDR( X7 ) );
L3965:
        X6 = PAIR_CDR( X6 );
        GOBACK( L3959 );
L3956:
        POPSTACKTRACE( X4 );
L3906:
        X4 = PAIR_CDR( e2707 );
        X3 = sceval_l2746( X4, e2708 );
        POPSTACKTRACE( sc_apply_2dtwo( X2, X3 ) );
L3904:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2983, 
                                      CONS( PAIR_CAR( e2707 ), 
                                            EMPTYLIST ) ) );
L3803:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2707 ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3987;
        e2707 = X1;
        GOBACK( L3793 );
L3987:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3989;
        X2 = e2708;
L3992:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3993;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L3996;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L3996:
        POPSTACKTRACE( X3 );
L3993:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L3998;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L3998:
        X2 = PAIR_CDR( X2 );
        GOBACK( L3992 );
L3989:
        POPSTACKTRACE( X1 );
L3804:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2707 ) ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4001;
        e2707 = X1;
        GOBACK( L3793 );
L4001:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L4003;
        X2 = e2708;
L4006:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4007;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4010;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L4010:
        POPSTACKTRACE( X3 );
L4007:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L4012;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L4012:
        X2 = PAIR_CDR( X2 );
        GOBACK( L4006 );
L4003:
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_interpreted_2dproc_v );
DEFCSTRING( t4014, "SCEVAL_INTERPRETED-PROC" );
DEFTSCP( sceval_exec_2dlambda_v );
DEFCSTRING( t4015, "SCEVAL_EXEC-LAMBDA" );
EXTERNTSCPP( sceval_l3372, XAL3( TSCP, TSCP, TSCP ) );

TSCP  sceval_l3372( i3374, v3375, e3376 )
        TSCP  i3374, v3375, e3376;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC-LAMBDA]" );
        if  ( NEQ( _S2CUINT( i3374 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4023;
        if  ( FALSE( v3375 ) )  goto L4026;
        scdebug_error( c2912, c2970, EMPTYLIST );
L4026:
        POPSTACKTRACE( e3376 );
L4023:
        if  ( NOT( AND( EQ( TSCPTAG( i3374 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( i3374 ), SYMBOLTAG ) ) )
            )  goto L4028;
        X1 = sc_cons( i3374, v3375 );
        POPSTACKTRACE( sc_cons( X1, e3376 ) );
L4028:
        if  ( NEQ( _S2CUINT( v3375 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4030;
        POPSTACKTRACE( scdebug_error( c2912, c2913, EMPTYLIST ) );
L4030:
        X2 = PAIR_CAR( i3374 );
        X3 = PAIR_CAR( v3375 );
        X1 = sc_cons( X2, X3 );
        X3 = PAIR_CDR( i3374 );
        X4 = PAIR_CDR( v3375 );
        X2 = sceval_l3372( X3, X4, e3376 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

TSCP  sceval_l3323( v3324, c4018 )
        TSCP  v3324, c4018;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "sceval_l3323 [inside EXEC-LAMBDA]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c4018, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c4018, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c4018, 2 );
        X6 = DISPLAY( 2 );
        X7 = DISPLAY( 0 );
        X5 = sceval_l3372( X6, v3324, X7 );
        X6 = DISPLAY( 1 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4033;
        X4 = sceval_exec( X6, X5 );
        goto L4036;
L4033:
        if  ( NOT( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) )
            )  goto L4035;
        X7 = X5;
L4038:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L4039;
        X8 = SYMBOL_VALUE( X6 );
        if  ( NEQ( _S2CUINT( X8 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4042;
        X4 = scdebug_error( X6, c2649, EMPTYLIST );
        goto L4036;
L4042:
        X4 = X8;
        goto L4036;
L4039:
        X9 = PAIR_CAR( X7 );
        X8 = PAIR_CAR( X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X8 ) ) )  goto L4044;
        X8 = PAIR_CAR( X7 );
        X4 = PAIR_CDR( X8 );
        goto L4036;
L4044:
        X7 = PAIR_CDR( X7 );
        GOBACK( L4038 );
L4035:
        X4 = X6;
L4036:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  sceval_exec_2dlambda( e3318, e3319 )
        TSCP  e3318, e3319;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t4015 );
        DISPLAY( 0 ) = e3319;
        X2 = PAIR_CDR( e3318 );
        X1 = PAIR_CDR( X2 );
        DISPLAY( 1 ) = sc_cons( c2331, X1 );
        DISPLAY( 2 ) = PAIR_CAR( PAIR_CDR( e3318 ) );
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               sceval_l3323, 
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

void scexpand__init();
void scrt4__init();
void scrt2__init();
void scdebug__init();
void scrt1__init();
void scexpand__init();
void scexpnd1__init();
void scexpnd2__init();
void scrt1__init();
void scrt2__init();
void scrt3__init();
void scrt4__init();
void scrt5__init();
void scrt6__init();
void scrt7__init();
void scrtuser__init();

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
        sc_segv__handlers();
        INITIALIZEVAR( t3517, 
                       ADR( sceval_optimize_2doptions_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3518, 
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
        INITIALIZEVAR( t3542, 
                       ADR( sceval_top_2dlevel_2drewrite_v ), 
                       scrt1_cons_2a( X1, 
                                      CONS( scrt1_cons_2a( X3, 
                                                           CONS( c2161, 
                                                                 X4 ) ), 
                                            X2 ) ) );
        INITIALIZEVAR( t3543, 
                       ADR( sceval_list1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_list1, EMPTYLIST ) );
        INITIALIZEVAR( t3546, 
                       ADR( sceval_list2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_list2, EMPTYLIST ) );
        INITIALIZEVAR( t3549, 
                       ADR( sceval_list3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, sceval_list3, EMPTYLIST ) );
        INITIALIZEVAR( t3552, 
                       ADR( sceval_negate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_negate, EMPTYLIST ) );
        INITIALIZEVAR( t3556, 
                       ADR( sceval__2f1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval__2f1, EMPTYLIST ) );
        INITIALIZEVAR( t3569, 
                       ADR( sceval_sizeof_2dtscp_v ), 
                       C_FIXED( SIZEOF( TSCP ) ) );
        INITIALIZEVAR( t3570, 
                       ADR( sceval_codex_v ), 
                       sceval_sizeof_2dtscp_v );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3573;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3574;
L3573:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3574:
        INITIALIZEVAR( t3571, ADR( sceval_closurex_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3577;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3578;
L3577:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3578:
        INITIALIZEVAR( t3575, ADR( sceval_var0x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3581;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3582;
L3581:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X1 );
L3582:
        INITIALIZEVAR( t3579, ADR( sceval_var1x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3585;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3586;
L3585:
        X2 = scrt2__2a_2dtwo( _TSCP( 16 ), X1 );
L3586:
        INITIALIZEVAR( t3583, ADR( sceval_var2x_v ), X2 );
        INITIALIZEVAR( t3587, 
                       ADR( sceval_compile_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_compile, EMPTYLIST ) );
        INITIALIZEVAR( t3728, 
                       ADR( sceval_compile_2derror_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3729, 
                       ADR( sceval_compile_2dlist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_compile_2dlist, EMPTYLIST ) );
        INITIALIZEVAR( t3746, 
                       ADR( sceval_eval_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, sceval_eval, EMPTYLIST ) );
        INITIALIZEVAR( t3792, 
                       ADR( sceval_exec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_exec, EMPTYLIST ) );
        INITIALIZEVAR( t4014, 
                       ADR( sceval_interpreted_2dproc_v ), 
                       sceval_eval( c3316, EMPTYLIST ) );
        INITIALIZEVAR( t4015, 
                       ADR( sceval_exec_2dlambda_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_exec_2dlambda, EMPTYLIST ) );
        return;
}
