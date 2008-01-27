
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( c3559 );
DEFSTATICTSCP( t3739 );
DEFSTATICTSCP( t3740 );
DEFCSTRING( t3741, "Argument value is not a function: ~s" );
DEFSTATICTSCP( c2974 );
DEFSTATICTSCP( c2973 );
DEFCSTRING( t3742, "Too many arguments to function" );
DEFSTATICTSCP( c2961 );
DEFCSTRING( t3743, "Too few arguments to function" );
DEFSTATICTSCP( c2904 );
DEFSTATICTSCP( c2903 );
DEFCSTRING( t3744, "Environment is not an A-LIST: ~s" );
DEFSTATICTSCP( c2678 );
DEFCSTRING( t3745, 
            "Argument contains an item that is not self-evaluating: ~s" );
DEFSTATICTSCP( c2654 );
DEFSTATICTSCP( c2653 );
DEFCSTRING( t3746, "Top-level symbol is undefined" );
DEFSTATICTSCP( c2649 );
DEFCSTRING( t3747, "Argument not a PAIR: ~s" );
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
DEFCSTRING( t3748, "Illegal OPTIMIZATION OPTION(S): ~s" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2154 );
DEFSTATICTSCP( c2153 );
DEFSTATICTSCP( c2151 );
DEFSTATICTSCP( c2146 );
DEFSTATICTSCP( c2141 );

static void  init_constants()
{
        TSCP  X1;

        c3559 = EMPTYLIST;
        t3739 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        c3559 = CONS( t3739, c3559 );
        X1 = EMPTYLIST;
        X1 = CONS( t3739, X1 );
        c3559 = CONS( X1, c3559 );
        t3740 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        c3559 = CONS( t3740, c3559 );
        CONSTANTEXP( ADR( c3559 ) );
        c2974 = CSTRING_TSCP( t3741 );
        CONSTANTEXP( ADR( c2974 ) );
        c2973 = STRINGTOSYMBOL( CSTRING_TSCP( "EXEC" ) );
        CONSTANTEXP( ADR( c2973 ) );
        c2961 = CSTRING_TSCP( t3742 );
        CONSTANTEXP( ADR( c2961 ) );
        c2904 = CSTRING_TSCP( t3743 );
        CONSTANTEXP( ADR( c2904 ) );
        c2903 = STRINGTOSYMBOL( CSTRING_TSCP( "NEW-ENV" ) );
        CONSTANTEXP( ADR( c2903 ) );
        c2678 = CSTRING_TSCP( t3744 );
        CONSTANTEXP( ADR( c2678 ) );
        c2654 = CSTRING_TSCP( t3745 );
        CONSTANTEXP( ADR( c2654 ) );
        c2653 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL" ) );
        CONSTANTEXP( ADR( c2653 ) );
        c2649 = CSTRING_TSCP( t3746 );
        CONSTANTEXP( ADR( c2649 ) );
        c2592 = CSTRING_TSCP( t3747 );
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
        c2155 = CSTRING_TSCP( t3748 );
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
DEFCSTRING( t3749, "SCEVAL_OPTIMIZE-OPTIONS" );
DEFTSCP( sceval_optimize_2deval_v );
DEFCSTRING( t3750, "OPTIMIZE-EVAL" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  sceval_optimize_2deval( o2133 )
        TSCP  o2133;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3750 );
        X1 = scrt1_equal_3f( o2133, EMPTYLIST );
        if  ( TRUE( X1 ) )  goto L3756;
        X2 = scrt1_equal_3f( o2133, c2141 );
        if  ( TRUE( X2 ) )  goto L3756;
        X3 = scrt1_equal_3f( o2133, c2146 );
        if  ( TRUE( X3 ) )  goto L3756;
        X4 = scrt1_equal_3f( o2133, c2151 );
        if  ( TRUE( X4 ) )  goto L3756;
        if  ( TRUE( scrt1_equal_3f( o2133, c2153 ) ) )  goto L3756;
        POPSTACKTRACE( scdebug_error( c2154, 
                                      c2155, 
                                      CONS( o2133, EMPTYLIST ) ) );
L3756:
        POPSTACKTRACE( SET( sceval_optimize_2doptions_v, o2133 ) );
}

DEFTSCP( sceval_top_2dlevel_2drewrite_v );
DEFCSTRING( t3774, "SCEVAL_TOP-LEVEL-REWRITE" );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
DEFTSCP( sceval_list1_v );
DEFCSTRING( t3775, "SCEVAL_LIST1" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  sceval_list1( x2192 )
        TSCP  x2192;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3775 );
        X1 = sc_cons( x2192, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list2_v );
DEFCSTRING( t3778, "SCEVAL_LIST2" );

TSCP  sceval_list2( x2197, y2198 )
        TSCP  x2197, y2198;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3778 );
        X2 = sc_cons( y2198, EMPTYLIST );
        X1 = sc_cons( x2197, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_list3_v );
DEFCSTRING( t3781, "SCEVAL_LIST3" );

TSCP  sceval_list3( x2203, y2204, z2205 )
        TSCP  x2203, y2204, z2205;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3781 );
        X3 = sc_cons( z2205, EMPTYLIST );
        X2 = sc_cons( y2204, X3 );
        X1 = sc_cons( x2203, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_negate_v );
DEFCSTRING( t3784, "SCEVAL_NEGATE" );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  sceval_negate( x2210 )
        TSCP  x2210;
{
        PUSHSTACKTRACE( t3784 );
        if  ( NEQ( TSCPTAG( x2210 ), FIXNUMTAG ) )  goto L3786;
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( x2210 ) ) ) );
L3786:
        POPSTACKTRACE( scrt2__2d_2dtwo( c2217, x2210 ) );
}

DEFTSCP( sceval__2f1_v );
DEFCSTRING( t3788, "SCEVAL_/1" );
EXTERNTSCPP( scrt2__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2f_2dtwo_v );

TSCP  sceval__2f1( x2220 )
        TSCP  x2220;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3788 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L3800;
        if  ( EQ( _S2CUINT( x2220 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3800;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x2220 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L3800;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x2220 ) ) ) );
L3800:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x2220 ) );
}

DEFTSCP( sceval_sizeof_2dtscp_v );
DEFCSTRING( t3801, "SCEVAL_SIZEOF-TSCP" );
DEFTSCP( sceval_codex_v );
DEFCSTRING( t3802, "SCEVAL_CODEX" );
DEFTSCP( sceval_closurex_v );
DEFCSTRING( t3803, "SCEVAL_CLOSUREX" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
DEFTSCP( sceval_var0x_v );
DEFCSTRING( t3807, "SCEVAL_VAR0X" );
DEFTSCP( sceval_var1x_v );
DEFCSTRING( t3811, "SCEVAL_VAR1X" );
DEFTSCP( sceval_var2x_v );
DEFCSTRING( t3815, "SCEVAL_VAR2X" );
DEFTSCP( sceval_compile_v );
DEFCSTRING( t3819, "SCEVAL_COMPILE" );
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

        PUSHSTACKTRACE( t3819 );
L3820:
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), SYMBOLTAG ) )
            )  goto L3821;
        if  ( NEQ( TSCPTAG( e2276 ), PAIRTAG ) )  goto L3823;
        X4 = PAIR_CAR( e2276 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2313 ) ) )  goto L3827;
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2323 ) ) )  goto L3829;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cadddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3833;
        scrt1__24__car_2derror( X7 );
L3833:
        X6 = PAIR_CAR( X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2323, 
                                      CONS( sceval_compile( X6, e2277 ), 
                                            X5 ) ) );
L3829:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2327 ) ) )  goto L3835;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3841;
        scrt1__24__car_2derror( X6 );
L3841:
        X5 = PAIR_CAR( X6 );
        if  ( FALSE( scrt1_assq( X5, e2277 ) ) )  goto L3837;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_caddr( e2276 );
        X5 = CONS( sceval_compile( X6, e2277 ), X5 );
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3845;
        scrt1__24__car_2derror( X6 );
L3845:
        POPSTACKTRACE( scrt1_cons_2a( c2327, 
                                      CONS( PAIR_CAR( X6 ), X5 ) ) );
L3837:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_caddr( e2276 ), X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3849;
        scrt1__24__car_2derror( X8 );
L3849:
        X5 = scrt1_cons_2a( c2509, 
                            CONS( scrt1_cons_2a( c2313, 
                                                 CONS( PAIR_CAR( X8 ), 
                                                       X7 ) ), 
                                  X6 ) );
        e2276 = X5;
        GOBACK( L3820 );
L3835:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2331 ) ) )  goto L3851;
        X5 = scrt1_length( e2276 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L3853;
        X6 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3857;
        scrt1__24__car_2derror( X6 );
L3857:
        X5 = PAIR_CAR( X6 );
        e2276 = X5;
        GOBACK( L3820 );
L3853:
        X6 = PAIR_CDR( e2276 );
        X5 = sceval_compile_2dlist( X6, e2277 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2331, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3851:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2335 ) ) )  goto L3860;
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3864;
        scrt1__24__car_2derror( X7 );
L3864:
        X6 = PAIR_CAR( X7 );
        X7 = e2277;
        X8 = X6;
L3868:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3869;
        X5 = X7;
        goto L3872;
L3869:
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L3871;
        X10 = sc_cons( X8, EMPTYLIST );
        X9 = X10;
        X5 = sc_cons( X9, X7 );
        goto L3872;
L3871:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3875;
        scrt1__24__car_2derror( X8 );
L3875:
        X12 = PAIR_CAR( X8 );
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = X11;
        X9 = sc_cons( X10, X7 );
        X8 = PAIR_CDR( X8 );
        X7 = X9;
        GOBACK( L3868 );
L3872:
        X9 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3882;
        scrt1__24__cdr_2derror( X9 );
L3882:
        X8 = PAIR_CDR( X9 );
        X7 = sceval_compile_2dlist( X8, X5 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X7 = PAIR_CDR( e2276 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3886;
        scrt1__24__car_2derror( X7 );
L3886:
        POPSTACKTRACE( scrt1_cons_2a( c2335, 
                                      CONS( PAIR_CAR( X7 ), X6 ) ) );
L3860:
        X1 = PAIR_CAR( e2276 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L3890;
        if  ( FALSE( scrt1_assq( X1, e2277 ) ) )  goto L3892;
        X3 = FALSEVALUE;
        goto L3891;
L3892:
        X3 = TRUEVALUE;
        goto L3891;
L3890:
        X3 = FALSEVALUE;
L3891:
        if  ( FALSE( X3 ) )  goto L3895;
        X2 = scrt2_top_2dlevel_2dvalue( X1 );
        goto L3896;
L3895:
        X2 = X3;
L3896:
        if  ( FALSE( X3 ) )  goto L3898;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3901;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3902;
L3901:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3902:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( X1, X8 );
        X6 = X7;
        X5 = scrt1_assoc( X6, sceval_top_2dlevel_2drewrite_v );
        goto L3899;
L3898:
        X5 = X3;
L3899:
        if  ( FALSE( X5 ) )  goto L3923;
        if  ( FALSE( scrt1_memq( c2348, sceval_optimize_2doptions_v ) )
            )  goto L3923;
        if  ( FALSE( scrt1_memq( c2356, sceval_optimize_2doptions_v ) )
            )  goto L3910;
        X10 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3913;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3914;
L3913:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L3914:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = X8;
        goto L3911;
L3910:
        X7 = EMPTYLIST;
L3911:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3917;
        scrt1__24__cdr_2derror( X5 );
L3917:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3920;
        scrt1__24__car_2derror( X10 );
L3920:
        X9 = PAIR_CAR( X10 );
        X11 = PAIR_CDR( e2276 );
        X10 = sceval_compile_2dlist( X11, e2277 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X6 = scrt1_append_2dtwo( X7, X8 );
        POPSTACKTRACE( scrt1_cons_2a( X6, EMPTYLIST ) );
L3827:
        POPSTACKTRACE( e2276 );
L3823:
        if  ( EQ( TSCPTAG( e2276 ), FIXNUMTAG ) )  goto L3924;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), DOUBLEFLOATTAG ) )
            )  goto L3926;
        if  ( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2276 ), STRINGTAG ) )
            )  goto L3928;
        if  ( EQ( TSCPIMMEDIATETAG( e2276 ), CHARACTERTAG ) )  goto L3930;
        if  ( TRUE( scrt1_boolean_3f( e2276 ) ) )  goto L3932;
        if  ( NOT( AND( EQ( TSCPTAG( e2276 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2276 ), RECORDTAG ) ) )
            )  goto L3934;
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
        GOBACK( L3820 );
L3934:
        sceval_compile_2derror_v = e2276;
        POPSTACKTRACE( TRUEVALUE );
L3932:
        POPSTACKTRACE( e2276 );
L3930:
        POPSTACKTRACE( e2276 );
L3928:
        POPSTACKTRACE( e2276 );
L3926:
        POPSTACKTRACE( e2276 );
L3924:
        POPSTACKTRACE( e2276 );
L3821:
        POPSTACKTRACE( e2276 );
L3923:
        if  ( FALSE( X3 ) )  goto L3959;
        X4 = scrt1_memq( c2356, sceval_optimize_2doptions_v );
        if  ( FALSE( X4 ) )  goto L3959;
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L3959;
        X5 = scrt4_scheme_2dtscp_2dref( X2, sceval_codex_v );
        X6 = scrt4_scheme_2dtscp_2dref( sceval_interpreted_2dproc_v, 
                                        sceval_codex_v );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L3959;
        X5 = scrt1_length( e2276 );
        if  ( FALSE( scrt2__3c_3d( _TSCP( 8 ), 
                                   X5, 
                                   CONS( _TSCP( 16 ), EMPTYLIST ) ) )
            )  goto L3959;
        X6 = scrt1_length( e2276 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3953;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X6 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3954;
L3953:
        X5 = scrt2__2d_2dtwo( X6, _TSCP( 4 ) );
L3954:
        X8 = PAIR_CDR( e2276 );
        X7 = sceval_compile_2dlist( X8, e2277 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X5, CONS( X1, X6 ) ) );
L3959:
        POPSTACKTRACE( sceval_compile_2dlist( e2276, e2277 ) );
}

DEFTSCP( sceval_compile_2derror_v );
DEFCSTRING( t3960, "SCEVAL_COMPILE-ERROR" );
DEFTSCP( sceval_compile_2dlist_v );
DEFCSTRING( t3961, "SCEVAL_COMPILE-LIST" );

TSCP  sceval_compile_2dlist( e2555, e2556 )
        TSCP  e2555, e2556;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3961 );
        X1 = e2555;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3964:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3965;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3968;
        scrt1__24__car_2derror( X1 );
L3968:
        X6 = PAIR_CAR( X1 );
        X5 = sceval_compile( X6, e2556 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3971;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3964 );
L3971:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3976;
        scdebug_error( c2591, 
                       c2592, CONS( X3, EMPTYLIST ) );
L3976:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3964 );
L3965:
        POPSTACKTRACE( X2 );
}

DEFTSCP( sceval_eval_v );
DEFCSTRING( t3978, "EVAL" );
EXTERNTSCPP( scexpand_expand, XAL1( TSCP ) );
EXTERNTSCP( scexpand_expand_v );
EXTERNTSCPP( sceval_exec, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_v );
EXTERNTSCP( sc_undefined );

TSCP  sceval_eval( f2604, e2605 )
        TSCP  f2604, e2605;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3978 );
        sceval_compile_2derror_v = FALSEVALUE;
        if  ( NEQ( TSCPTAG( e2605 ), PAIRTAG ) )  goto L3980;
        X2 = PAIR_CAR( e2605 );
        X3 = X2;
L3984:
        X4 = BOOLEAN( EQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L3991;
        X5 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3991;
        X3 = PAIR_CDR( X3 );
        GOBACK( L3984 );
L3991:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3993;
        X1 = PAIR_CAR( e2605 );
        goto L3981;
L3993:
        X1 = scdebug_error( c2653, 
                            c2678, 
                            CONS( PAIR_CAR( e2605 ), EMPTYLIST ) );
        goto L3981;
L3980:
        X1 = EMPTYLIST;
L3981:
        X3 = scexpand_expand( f2604 );
        X2 = sceval_compile( X3, X1 );
        if  ( NEQ( _S2CUINT( sceval_compile_2derror_v ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L3997;
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3999;
        POPSTACKTRACE( sceval_exec( X2, X1 ) );
L3999:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L4001;
        X3 = X1;
L4004:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4005;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4008;
        POPSTACKTRACE( scdebug_error( X2, c2649, EMPTYLIST ) );
L4008:
        POPSTACKTRACE( X4 );
L4005:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L4010;
        X4 = PAIR_CAR( X3 );
        POPSTACKTRACE( PAIR_CDR( X4 ) );
L4010:
        X3 = PAIR_CDR( X3 );
        GOBACK( L4004 );
L4001:
        POPSTACKTRACE( X2 );
L3997:
        POPSTACKTRACE( scdebug_error( c2653, 
                                      c2654, 
                                      CONS( sceval_compile_2derror_v, 
                                            EMPTYLIST ) ) );
}

DEFTSCP( sceval_exec_v );
DEFCSTRING( t4012, "SCEVAL_EXEC" );
EXTERNTSCPP( sceval_exec_2dlambda, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_exec_2dlambda_v );
EXTERNTSCPP( sceval_l2912, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2912( e2914, e2915 )
        TSCP  e2914, e2915;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2914 ), PAIRTAG ) )  goto L4231;
        X2 = PAIR_CAR( e2914 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4234;
        X1 = sceval_exec( X2, e2915 );
        goto L4237;
L4234:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L4236;
        X3 = e2915;
L4239:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4240;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4243;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L4237;
L4243:
        X1 = X4;
        goto L4237;
L4240:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L4245;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L4237;
L4245:
        X3 = PAIR_CDR( X3 );
        GOBACK( L4239 );
L4236:
        X1 = X2;
L4237:
        X3 = PAIR_CDR( e2914 );
        X2 = sceval_l2912( X3, e2915 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L4231:
        POPSTACKTRACE( EMPTYLIST );
}

EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( sceval_l2737, XAL2( TSCP, TSCP ) );

TSCP  sceval_l2737( e2739, e2740 )
        TSCP  e2739, e2740;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC]" );
        if  ( NEQ( TSCPTAG( e2739 ), PAIRTAG ) )  goto L4280;
        X2 = PAIR_CAR( e2739 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4283;
        X1 = sceval_exec( X2, e2740 );
        goto L4286;
L4283:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L4285;
        X3 = e2740;
L4288:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4289;
        X4 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4292;
        X1 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L4286;
L4292:
        X1 = X4;
        goto L4286;
L4289:
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L4294;
        X4 = PAIR_CAR( X3 );
        X1 = PAIR_CDR( X4 );
        goto L4286;
L4294:
        X3 = PAIR_CDR( X3 );
        GOBACK( L4288 );
L4285:
        X1 = X2;
L4286:
        X3 = PAIR_CDR( e2739 );
        X2 = sceval_l2737( X3, e2740 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L4280:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  sceval_exec( e2689, e2690 )
        TSCP  e2689, e2690;
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

        PUSHSTACKTRACE( t4012 );
L4013:
        LOOPSTACKTRACE( e2689, e2690 );
        X1 = PAIR_CAR( e2689 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L4015;
        X4 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4018;
        X3 = sceval_exec( X4, e2690 );
        goto L4021;
L4018:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L4020;
        X5 = e2690;
L4023:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4024;
        X6 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4027;
        X3 = scdebug_error( X4, c2649, EMPTYLIST );
        goto L4021;
L4027:
        X3 = X6;
        goto L4021;
L4024:
        X7 = PAIR_CAR( X5 );
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X6 ) ) )  goto L4029;
        X6 = PAIR_CAR( X5 );
        X3 = PAIR_CDR( X6 );
        goto L4021;
L4029:
        X5 = PAIR_CDR( X5 );
        GOBACK( L4023 );
L4020:
        X3 = X4;
L4021:
        X4 = PAIR_CAR( PAIR_CDR( e2689 ) );
        X2 = SYMBOL_VALUE( X4 );
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L4015:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L4031;
        X4 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4034;
        X3 = sceval_exec( X4, e2690 );
        goto L4037;
L4034:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L4036;
        X5 = e2690;
L4039:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4040;
        X6 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4043;
        X3 = scdebug_error( X4, c2649, EMPTYLIST );
        goto L4037;
L4043:
        X3 = X6;
        goto L4037;
L4040:
        X7 = PAIR_CAR( X5 );
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X6 ) ) )  goto L4045;
        X6 = PAIR_CAR( X5 );
        X3 = PAIR_CDR( X6 );
        goto L4037;
L4045:
        X5 = PAIR_CDR( X5 );
        GOBACK( L4039 );
L4036:
        X3 = X4;
L4037:
        X5 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2689 ) ) ) );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4048;
        X4 = sceval_exec( X5, e2690 );
        goto L4051;
L4048:
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )
            )  goto L4050;
        X6 = e2690;
L4053:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L4054;
        X7 = SYMBOL_VALUE( X5 );
        if  ( NEQ( _S2CUINT( X7 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4057;
        X4 = scdebug_error( X5, c2649, EMPTYLIST );
        goto L4051;
L4057:
        X4 = X7;
        goto L4051;
L4054:
        X8 = PAIR_CAR( X6 );
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X7 ) ) )  goto L4059;
        X7 = PAIR_CAR( X6 );
        X4 = PAIR_CDR( X7 );
        goto L4051;
L4059:
        X6 = PAIR_CDR( X6 );
        GOBACK( L4053 );
L4050:
        X4 = X5;
L4051:
        X5 = PAIR_CAR( PAIR_CDR( e2689 ) );
        X2 = SYMBOL_VALUE( X5 );
        X2 = UNKNOWNCALL( X2, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    X4, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L4031:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 12 ) ) ) )  goto L4061;
        X4 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4064;
        X3 = sceval_exec( X4, e2690 );
        goto L4067;
L4064:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L4066;
        X5 = e2690;
L4069:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4070;
        X6 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4073;
        X3 = scdebug_error( X4, c2649, EMPTYLIST );
        goto L4067;
L4073:
        X3 = X6;
        goto L4067;
L4070:
        X7 = PAIR_CAR( X5 );
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X6 ) ) )  goto L4075;
        X6 = PAIR_CAR( X5 );
        X3 = PAIR_CDR( X6 );
        goto L4067;
L4075:
        X5 = PAIR_CDR( X5 );
        GOBACK( L4069 );
L4066:
        X3 = X4;
L4067:
        X5 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2689 ) ) ) );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4078;
        X4 = sceval_exec( X5, e2690 );
        goto L4081;
L4078:
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )
            )  goto L4080;
        X6 = e2690;
L4083:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L4084;
        X7 = SYMBOL_VALUE( X5 );
        if  ( NEQ( _S2CUINT( X7 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4087;
        X4 = scdebug_error( X5, c2649, EMPTYLIST );
        goto L4081;
L4087:
        X4 = X7;
        goto L4081;
L4084:
        X8 = PAIR_CAR( X6 );
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X7 ) ) )  goto L4089;
        X7 = PAIR_CAR( X6 );
        X4 = PAIR_CDR( X7 );
        goto L4081;
L4089:
        X6 = PAIR_CDR( X6 );
        GOBACK( L4083 );
L4080:
        X4 = X5;
L4081:
        X6 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2689 ) ) ) ) );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4092;
        X5 = sceval_exec( X6, e2690 );
        goto L4095;
L4092:
        if  ( NOT( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) )
            )  goto L4094;
        X7 = e2690;
L4097:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L4098;
        X8 = SYMBOL_VALUE( X6 );
        if  ( NEQ( _S2CUINT( X8 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4101;
        X5 = scdebug_error( X6, c2649, EMPTYLIST );
        goto L4095;
L4101:
        X5 = X8;
        goto L4095;
L4098:
        X9 = PAIR_CAR( X7 );
        X8 = PAIR_CAR( X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X8 ) ) )  goto L4103;
        X8 = PAIR_CAR( X7 );
        X5 = PAIR_CDR( X8 );
        goto L4095;
L4103:
        X7 = PAIR_CDR( X7 );
        GOBACK( L4097 );
L4094:
        X5 = X6;
L4095:
        X6 = PAIR_CAR( PAIR_CDR( e2689 ) );
        X2 = SYMBOL_VALUE( X6 );
        X2 = UNKNOWNCALL( X2, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    X4, 
                                                    X5, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L4061:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2323 ) ) )  goto L4105;
        X2 = PAIR_CAR( PAIR_CDR( e2689 ) );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4109;
        if  ( TRUE( sceval_exec( X2, e2690 ) ) )  goto L4113;
        goto L4114;
L4109:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L4116;
        X3 = e2690;
L4121:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4122;
        X5 = SYMBOL_VALUE( X2 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4125;
        X4 = scdebug_error( X2, c2649, EMPTYLIST );
        goto L4128;
L4125:
        X4 = X5;
        goto L4128;
L4122:
        X6 = PAIR_CAR( X3 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X5 ) ) )  goto L4127;
        X5 = PAIR_CAR( X3 );
        X4 = PAIR_CDR( X5 );
        goto L4128;
L4127:
        X3 = PAIR_CDR( X3 );
        GOBACK( L4121 );
L4128:
        if  ( TRUE( X4 ) )  goto L4113;
        goto L4114;
L4116:
        if  ( TRUE( X2 ) )  goto L4113;
        goto L4114;
L4105:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2327 ) ) )  goto L4133;
        X3 = PAIR_CAR( PAIR_CDR( e2689 ) );
        X4 = X3;
        X5 = e2690;
L4137:
        if  ( FALSE( X5 ) )  goto L4138;
        X6 = PAIR_CAR( X5 );
        X7 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X7 ) ) )  goto L4141;
        X2 = X6;
        goto L4139;
L4141:
        X5 = PAIR_CDR( X5 );
        GOBACK( L4137 );
L4138:
        X2 = FALSEVALUE;
L4139:
        X4 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4144;
        X3 = sceval_exec( X4, e2690 );
        goto L4147;
L4144:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L4146;
        X5 = e2690;
L4149:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4150;
        X6 = SYMBOL_VALUE( X4 );
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4153;
        X3 = scdebug_error( X4, c2649, EMPTYLIST );
        goto L4147;
L4153:
        X3 = X6;
        goto L4147;
L4150:
        X7 = PAIR_CAR( X5 );
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X6 ) ) )  goto L4155;
        X6 = PAIR_CAR( X5 );
        X3 = PAIR_CDR( X6 );
        goto L4147;
L4155:
        X5 = PAIR_CDR( X5 );
        GOBACK( L4149 );
L4146:
        X3 = X4;
L4147:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4158;
        scdebug_error( c2591, 
                       c2592, CONS( X2, EMPTYLIST ) );
L4158:
        POPSTACKTRACE( SETGEN( PAIR_CDR( X2 ), X3 ) );
L4133:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2313 ) ) )  goto L4160;
        POPSTACKTRACE( PAIR_CAR( PAIR_CDR( e2689 ) ) );
L4160:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2335 ) ) )  goto L4162;
        POPSTACKTRACE( sceval_exec_2dlambda( e2689, e2690 ) );
L4162:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2331 ) ) )  goto L4164;
        X2 = PAIR_CDR( e2689 );
L4167:
        X3 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4168;
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4171;
        e2689 = X3;
        GOBACK( L4013 );
L4171:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L4173;
        X4 = e2690;
L4176:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4177;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4180;
        POPSTACKTRACE( scdebug_error( X3, c2649, EMPTYLIST ) );
L4180:
        POPSTACKTRACE( X5 );
L4177:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L4182;
        X5 = PAIR_CAR( X4 );
        POPSTACKTRACE( PAIR_CDR( X5 ) );
L4182:
        X4 = PAIR_CDR( X4 );
        GOBACK( L4176 );
L4173:
        POPSTACKTRACE( X3 );
L4168:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4186;
        sceval_exec( X3, e2690 );
        goto L4198;
L4186:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L4198;
        X4 = e2690;
L4191:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4192;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4198;
        scdebug_error( X3, c2649, EMPTYLIST );
        goto L4198;
L4192:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L4197;
        X5 = PAIR_CAR( X4 );
        PAIR_CDR( X5 );
        goto L4198;
L4197:
        X4 = PAIR_CDR( X4 );
        GOBACK( L4191 );
L4198:
        X2 = PAIR_CDR( X2 );
        GOBACK( L4167 );
L4164:
        X3 = PAIR_CAR( e2689 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4200;
        X2 = sceval_exec( X3, e2690 );
        goto L4203;
L4200:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L4202;
        X4 = e2690;
L4205:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4206;
        X5 = SYMBOL_VALUE( X3 );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4209;
        X2 = scdebug_error( X3, c2649, EMPTYLIST );
        goto L4203;
L4209:
        X2 = X5;
        goto L4203;
L4206:
        X6 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L4211;
        X5 = PAIR_CAR( X4 );
        X2 = PAIR_CDR( X5 );
        goto L4203;
L4211:
        X4 = PAIR_CDR( X4 );
        GOBACK( L4205 );
L4202:
        X2 = X3;
L4203:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), PROCEDURETAG ) ) )
            )  goto L4214;
        X3 = MTSCP( T_U( X2 ), FIXED_C( sceval_codex_v ) );
        X4 = MTSCP( T_U( sceval_interpreted_2dproc_v ), 
                    FIXED_C( sceval_codex_v ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L4216;
        X3 = MTSCP( T_U( X2 ), 
                    FIXED_C( sceval_closurex_v ) );
        X5 = MTSCP( T_U( X3 ), FIXED_C( sceval_var2x_v ) );
        X6 = PAIR_CDR( e2689 );
        X7 = MTSCP( T_U( X3 ), FIXED_C( sceval_var1x_v ) );
        X8 = X5;
        X9 = X6;
        X10 = X7;
L4221:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L4222;
        if  ( FALSE( X9 ) )  goto L4225;
        scdebug_error( c2903, c2961, EMPTYLIST );
L4225:
        X4 = X10;
        goto L4248;
L4222:
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L4227;
        X12 = sceval_l2912( X9, e2690 );
        X11 = sc_cons( X8, X12 );
        X4 = sc_cons( X11, X10 );
        goto L4248;
L4227:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L4247;
        X4 = scdebug_error( c2903, c2904, EMPTYLIST );
        goto L4248;
L4247:
        X11 = PAIR_CDR( X8 );
        X12 = PAIR_CDR( X9 );
        X14 = PAIR_CAR( X8 );
        X16 = PAIR_CAR( X9 );
        if  ( NEQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L4250;
        X15 = sceval_exec( X16, e2690 );
        goto L4253;
L4250:
        if  ( NOT( AND( EQ( TSCPTAG( X16 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X16 ), SYMBOLTAG ) ) )
            )  goto L4252;
        X17 = e2690;
L4255:
        if  ( NEQ( _S2CUINT( X17 ), _S2CUINT( EMPTYLIST ) ) )  goto L4256;
        X18 = SYMBOL_VALUE( X16 );
        if  ( NEQ( _S2CUINT( X18 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4259;
        X15 = scdebug_error( X16, c2649, EMPTYLIST );
        goto L4253;
L4259:
        X15 = X18;
        goto L4253;
L4256:
        X19 = PAIR_CAR( X17 );
        X18 = PAIR_CAR( X19 );
        if  ( NEQ( _S2CUINT( X16 ), _S2CUINT( X18 ) ) )  goto L4261;
        X18 = PAIR_CAR( X17 );
        X15 = PAIR_CDR( X18 );
        goto L4253;
L4261:
        X17 = PAIR_CDR( X17 );
        GOBACK( L4255 );
L4252:
        X15 = X16;
L4253:
        X13 = sc_cons( X14, X15 );
        X10 = sc_cons( X13, X10 );
        X9 = X12;
        X8 = X11;
        GOBACK( L4221 );
L4248:
        X5 = MTSCP( T_U( X3 ), FIXED_C( sceval_var0x_v ) );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4264;
        e2690 = X4;
        e2689 = X5;
        GOBACK( L4013 );
L4264:
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )
            )  goto L4266;
        X6 = X4;
L4269:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L4270;
        X7 = SYMBOL_VALUE( X5 );
        if  ( NEQ( _S2CUINT( X7 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4273;
        POPSTACKTRACE( scdebug_error( X5, c2649, EMPTYLIST ) );
L4273:
        POPSTACKTRACE( X7 );
L4270:
        X8 = PAIR_CAR( X6 );
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X7 ) ) )  goto L4275;
        X7 = PAIR_CAR( X6 );
        POPSTACKTRACE( PAIR_CDR( X7 ) );
L4275:
        X6 = PAIR_CDR( X6 );
        GOBACK( L4269 );
L4266:
        POPSTACKTRACE( X5 );
L4216:
        X4 = PAIR_CDR( e2689 );
        X3 = sceval_l2737( X4, e2690 );
        POPSTACKTRACE( sc_apply_2dtwo( X2, X3 ) );
L4214:
        POPSTACKTRACE( scdebug_error( c2973, 
                                      c2974, 
                                      CONS( PAIR_CAR( e2689 ), 
                                            EMPTYLIST ) ) );
L4114:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( PAIR_CDR( e2689 ) ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4297;
        e2689 = X1;
        GOBACK( L4013 );
L4297:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L4299;
        X2 = e2690;
L4302:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4303;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4306;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L4306:
        POPSTACKTRACE( X3 );
L4303:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L4308;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L4308:
        X2 = PAIR_CDR( X2 );
        GOBACK( L4302 );
L4299:
        POPSTACKTRACE( X1 );
L4113:
        X1 = PAIR_CAR( PAIR_CDR( PAIR_CDR( e2689 ) ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4311;
        e2689 = X1;
        GOBACK( L4013 );
L4311:
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L4313;
        X2 = e2690;
L4316:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4317;
        X3 = SYMBOL_VALUE( X1 );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4320;
        POPSTACKTRACE( scdebug_error( X1, c2649, EMPTYLIST ) );
L4320:
        POPSTACKTRACE( X3 );
L4317:
        X4 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L4322;
        X3 = PAIR_CAR( X2 );
        POPSTACKTRACE( PAIR_CDR( X3 ) );
L4322:
        X2 = PAIR_CDR( X2 );
        GOBACK( L4316 );
L4313:
        POPSTACKTRACE( X1 );
}

DEFTSCP( sceval_interpreted_2dproc_v );
DEFCSTRING( t4324, "SCEVAL_INTERPRETED-PROC" );
DEFTSCP( sceval_exec_2dlambda_v );
DEFCSTRING( t4325, "SCEVAL_EXEC-LAMBDA" );
EXTERNTSCPP( sceval_l3615, XAL3( TSCP, TSCP, TSCP ) );

TSCP  sceval_l3615( i3617, v3618, e3619 )
        TSCP  i3617, v3618, e3619;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EXEC-LAMBDA]" );
        if  ( NEQ( _S2CUINT( i3617 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4333;
        if  ( FALSE( v3618 ) )  goto L4336;
        scdebug_error( c2903, c2961, EMPTYLIST );
L4336:
        POPSTACKTRACE( e3619 );
L4333:
        if  ( NOT( AND( EQ( TSCPTAG( i3617 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( i3617 ), SYMBOLTAG ) ) )
            )  goto L4338;
        X1 = sc_cons( i3617, v3618 );
        POPSTACKTRACE( sc_cons( X1, e3619 ) );
L4338:
        if  ( NEQ( _S2CUINT( v3618 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4340;
        POPSTACKTRACE( scdebug_error( c2903, c2904, EMPTYLIST ) );
L4340:
        X2 = PAIR_CAR( i3617 );
        X3 = PAIR_CAR( v3618 );
        X1 = sc_cons( X2, X3 );
        X3 = PAIR_CDR( i3617 );
        X4 = PAIR_CDR( v3618 );
        X2 = sceval_l3615( X3, X4, e3619 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

TSCP  sceval_l3566( v3567, c4328 )
        TSCP  v3567, c4328;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "sceval_l3566 [inside EXEC-LAMBDA]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c4328, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c4328, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c4328, 2 );
        X6 = DISPLAY( 2 );
        X7 = DISPLAY( 0 );
        X5 = sceval_l3615( X6, v3567, X7 );
        X6 = DISPLAY( 1 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4343;
        X4 = sceval_exec( X6, X5 );
        goto L4346;
L4343:
        if  ( NOT( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) )
            )  goto L4345;
        X7 = X5;
L4348:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L4349;
        X8 = SYMBOL_VALUE( X6 );
        if  ( NEQ( _S2CUINT( X8 ), 
                   _S2CUINT( sc_undefined ) ) )  goto L4352;
        X4 = scdebug_error( X6, c2649, EMPTYLIST );
        goto L4346;
L4352:
        X4 = X8;
        goto L4346;
L4349:
        X9 = PAIR_CAR( X7 );
        X8 = PAIR_CAR( X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X8 ) ) )  goto L4354;
        X8 = PAIR_CAR( X7 );
        X4 = PAIR_CDR( X8 );
        goto L4346;
L4354:
        X7 = PAIR_CDR( X7 );
        GOBACK( L4348 );
L4345:
        X4 = X6;
L4346:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  sceval_exec_2dlambda( e3561, e3562 )
        TSCP  e3561, e3562;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t4325 );
        DISPLAY( 0 ) = e3562;
        X2 = PAIR_CDR( e3561 );
        X1 = PAIR_CDR( X2 );
        DISPLAY( 1 ) = sc_cons( c2331, X1 );
        DISPLAY( 2 ) = PAIR_CAR( PAIR_CDR( e3561 ) );
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               sceval_l3566, 
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
        INITIALIZEVAR( t3749, 
                       ADR( sceval_optimize_2doptions_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3750, 
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
        INITIALIZEVAR( t3774, 
                       ADR( sceval_top_2dlevel_2drewrite_v ), 
                       scrt1_cons_2a( X1, 
                                      CONS( scrt1_cons_2a( X3, 
                                                           CONS( c2161, 
                                                                 X4 ) ), 
                                            X2 ) ) );
        INITIALIZEVAR( t3775, 
                       ADR( sceval_list1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_list1, EMPTYLIST ) );
        INITIALIZEVAR( t3778, 
                       ADR( sceval_list2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_list2, EMPTYLIST ) );
        INITIALIZEVAR( t3781, 
                       ADR( sceval_list3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, sceval_list3, EMPTYLIST ) );
        INITIALIZEVAR( t3784, 
                       ADR( sceval_negate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval_negate, EMPTYLIST ) );
        INITIALIZEVAR( t3788, 
                       ADR( sceval__2f1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, sceval__2f1, EMPTYLIST ) );
        INITIALIZEVAR( t3801, 
                       ADR( sceval_sizeof_2dtscp_v ), 
                       C_FIXED( SIZEOF( TSCP ) ) );
        INITIALIZEVAR( t3802, 
                       ADR( sceval_codex_v ), 
                       sceval_sizeof_2dtscp_v );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3805;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3806;
L3805:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3806:
        INITIALIZEVAR( t3803, ADR( sceval_closurex_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3809;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3810;
L3809:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L3810:
        INITIALIZEVAR( t3807, ADR( sceval_var0x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3813;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3814;
L3813:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X1 );
L3814:
        INITIALIZEVAR( t3811, ADR( sceval_var1x_v ), X2 );
        X1 = sceval_sizeof_2dtscp_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3817;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X1 ) ) );
        goto L3818;
L3817:
        X2 = scrt2__2a_2dtwo( _TSCP( 16 ), X1 );
L3818:
        INITIALIZEVAR( t3815, ADR( sceval_var2x_v ), X2 );
        INITIALIZEVAR( t3819, 
                       ADR( sceval_compile_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_compile, EMPTYLIST ) );
        INITIALIZEVAR( t3960, 
                       ADR( sceval_compile_2derror_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3961, 
                       ADR( sceval_compile_2dlist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_compile_2dlist, EMPTYLIST ) );
        INITIALIZEVAR( t3978, 
                       ADR( sceval_eval_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, sceval_eval, EMPTYLIST ) );
        INITIALIZEVAR( t4012, 
                       ADR( sceval_exec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, sceval_exec, EMPTYLIST ) );
        INITIALIZEVAR( t4324, 
                       ADR( sceval_interpreted_2dproc_v ), 
                       sceval_eval( c3559, EMPTYLIST ) );
        INITIALIZEVAR( t4325, 
                       ADR( sceval_exec_2dlambda_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      sceval_exec_2dlambda, EMPTYLIST ) );
        return;
}
