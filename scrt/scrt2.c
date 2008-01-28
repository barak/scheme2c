
/* SCHEME->C */

#include <objects.h>

DEFCSTRING( t4789, "#b" );
DEFSTATICTSCP( c4276 );
DEFCSTRING( t4790, "#o" );
DEFSTATICTSCP( c4275 );
DEFCSTRING( t4791, "#x" );
DEFSTATICTSCP( c4274 );
DEFCSTRING( t4792, "Argument is not a RADIX: ~s" );
DEFSTATICTSCP( c4269 );
DEFSTATICTSCP( c4268 );
DEFSTATICTSCP( c4236 );
DEFCSTRING( t4793, "-" );
DEFSTATICTSCP( c4205 );
DEFCSTRING( t4794, "0123456789abcdef" );
DEFSTATICTSCP( c4178 );
DEFCSTRING( t4795, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c4177 );
DEFSTATICTSCP( c4176 );
DEFCSTRING( t4796, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c4155 );
DEFSTATICTSCP( c4154 );
DEFCSTRING( t4797, "~s" );
DEFSTATICTSCP( c4072 );
DEFCSTRING( t4798, "Argument is not a RADIX or FORMAT DESCRIPTOR: ~s" );
DEFSTATICTSCP( c4070 );
DEFSTATICTSCP( c3998 );
DEFSTATICTSCP( c3935 );
DEFSTATICTSCP( c3905 );
DEFSTATICTSCP( t4799 );
DEFSTATICTSCP( c3899 );
DEFSTATICTSCP( c3877 );
DEFSTATICTSCP( c3866 );
DEFSTATICTSCP( c3859 );
DEFCSTRING( t4800, "Argument must be a non-negative NUMBER: ~s" );
DEFSTATICTSCP( c3769 );
DEFSTATICTSCP( c3768 );
DEFSTATICTSCP( c3738 );
DEFCSTRING( t4801, "Divisor is equal to 0: ~s" );
DEFSTATICTSCP( c3163 );
DEFSTATICTSCP( c3153 );
DEFSTATICTSCP( c3140 );
DEFSTATICTSCP( c3075 );
DEFSTATICTSCP( c3028 );
DEFSTATICTSCP( c2982 );
DEFSTATICTSCP( c2842 );
DEFSTATICTSCP( c2778 );
DEFSTATICTSCP( c2714 );
DEFSTATICTSCP( c2650 );
DEFCSTRING( t4802, "Argument not a NUMBER: ~s" );
DEFSTATICTSCP( c2582 );
DEFCSTRING( t4803, "Argument(s) not a NUMBER: ~s ~s" );
DEFSTATICTSCP( c2579 );
DEFSTATICTSCP( c2578 );
DEFSTATICTSCP( c2560 );
DEFCSTRING( t4804, "Argument is not a NUMBER: ~s" );
DEFSTATICTSCP( c2543 );
DEFSTATICTSCP( c2542 );
DEFCSTRING( t4805, "Argument is not an FIXED: ~s" );
DEFSTATICTSCP( c2324 );
DEFSTATICTSCP( c2323 );
DEFCSTRING( t4806, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2316 );
DEFCSTRING( t4807, "Argument is not a FLOAT: ~s" );
DEFSTATICTSCP( c2311 );
DEFSTATICTSCP( c2310 );
DEFSTATICTSCP( c2273 );
DEFCSTRING( t4808, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2253 );
DEFSTATICTSCP( c2252 );
DEFSTATICTSCP( c2209 );
DEFSTATICTSCP( c2202 );
DEFSTATICTSCP( c2158 );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2146 );
DEFCSTRING( t4809, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2141 );
DEFSTATICTSCP( c2140 );

static void  init_constants()
{
        c4276 = CSTRING_TSCP( t4789 );
        CONSTANTEXP( ADR( c4276 ) );
        c4275 = CSTRING_TSCP( t4790 );
        CONSTANTEXP( ADR( c4275 ) );
        c4274 = CSTRING_TSCP( t4791 );
        CONSTANTEXP( ADR( c4274 ) );
        c4269 = CSTRING_TSCP( t4792 );
        CONSTANTEXP( ADR( c4269 ) );
        c4268 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING->NUMBER" ) );
        CONSTANTEXP( ADR( c4268 ) );
        c4236 = EMPTYLIST;
        c4236 = CONS( _TSCP( 11026 ), c4236 );
        c4236 = CONS( _TSCP( 11538 ), c4236 );
        CONSTANTEXP( ADR( c4236 ) );
        c4205 = CSTRING_TSCP( t4793 );
        CONSTANTEXP( ADR( c4205 ) );
        c4178 = CSTRING_TSCP( t4794 );
        CONSTANTEXP( ADR( c4178 ) );
        c4177 = CSTRING_TSCP( t4795 );
        CONSTANTEXP( ADR( c4177 ) );
        c4176 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c4176 ) );
        c4155 = CSTRING_TSCP( t4796 );
        CONSTANTEXP( ADR( c4155 ) );
        c4154 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c4154 ) );
        c4072 = CSTRING_TSCP( t4797 );
        CONSTANTEXP( ADR( c4072 ) );
        c4070 = CSTRING_TSCP( t4798 );
        CONSTANTEXP( ADR( c4070 ) );
        c3998 = STRINGTOSYMBOL( CSTRING_TSCP( "SCI" ) );
        CONSTANTEXP( ADR( c3998 ) );
        c3935 = STRINGTOSYMBOL( CSTRING_TSCP( "FIX" ) );
        CONSTANTEXP( ADR( c3935 ) );
        c3905 = EMPTYLIST;
        t4799 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c3905 = CONS( t4799, c3905 );
        CONSTANTEXP( ADR( c3905 ) );
        c3899 = STRINGTOSYMBOL( CSTRING_TSCP( "NUMBER->STRING" ) );
        CONSTANTEXP( ADR( c3899 ) );
        c3877 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT->EXACT" ) );
        CONSTANTEXP( ADR( c3877 ) );
        c3866 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT->INEXACT" ) );
        CONSTANTEXP( ADR( c3866 ) );
        c3859 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c3859 ) );
        c3769 = CSTRING_TSCP( t4800 );
        CONSTANTEXP( ADR( c3769 ) );
        c3768 = STRINGTOSYMBOL( CSTRING_TSCP( "SQRT" ) );
        CONSTANTEXP( ADR( c3768 ) );
        c3738 = DOUBLE_TSCP( 0.5 );
        CONSTANTEXP( ADR( c3738 ) );
        c3163 = CSTRING_TSCP( t4801 );
        CONSTANTEXP( ADR( c3163 ) );
        c3153 = STRINGTOSYMBOL( CSTRING_TSCP( "/" ) );
        CONSTANTEXP( ADR( c3153 ) );
        c3140 = DOUBLE_TSCP( 0. );
        CONSTANTEXP( ADR( c3140 ) );
        c3075 = STRINGTOSYMBOL( CSTRING_TSCP( "-" ) );
        CONSTANTEXP( ADR( c3075 ) );
        c3028 = STRINGTOSYMBOL( CSTRING_TSCP( "*" ) );
        CONSTANTEXP( ADR( c3028 ) );
        c2982 = STRINGTOSYMBOL( CSTRING_TSCP( "+" ) );
        CONSTANTEXP( ADR( c2982 ) );
        c2842 = STRINGTOSYMBOL( CSTRING_TSCP( ">=" ) );
        CONSTANTEXP( ADR( c2842 ) );
        c2778 = STRINGTOSYMBOL( CSTRING_TSCP( "<=" ) );
        CONSTANTEXP( ADR( c2778 ) );
        c2714 = STRINGTOSYMBOL( CSTRING_TSCP( ">" ) );
        CONSTANTEXP( ADR( c2714 ) );
        c2650 = STRINGTOSYMBOL( CSTRING_TSCP( "<" ) );
        CONSTANTEXP( ADR( c2650 ) );
        c2582 = CSTRING_TSCP( t4802 );
        CONSTANTEXP( ADR( c2582 ) );
        c2579 = CSTRING_TSCP( t4803 );
        CONSTANTEXP( ADR( c2579 ) );
        c2578 = STRINGTOSYMBOL( CSTRING_TSCP( "=" ) );
        CONSTANTEXP( ADR( c2578 ) );
        c2560 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT?" ) );
        CONSTANTEXP( ADR( c2560 ) );
        c2543 = CSTRING_TSCP( t4804 );
        CONSTANTEXP( ADR( c2543 ) );
        c2542 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT?" ) );
        CONSTANTEXP( ADR( c2542 ) );
        c2324 = CSTRING_TSCP( t4805 );
        CONSTANTEXP( ADR( c2324 ) );
        c2323 = STRINGTOSYMBOL( CSTRING_TSCP( "FIXED->FLOAT" ) );
        CONSTANTEXP( ADR( c2323 ) );
        c2316 = CSTRING_TSCP( t4806 );
        CONSTANTEXP( ADR( c2316 ) );
        c2311 = CSTRING_TSCP( t4807 );
        CONSTANTEXP( ADR( c2311 ) );
        c2310 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT->FIXED" ) );
        CONSTANTEXP( ADR( c2310 ) );
        c2273 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2273 ) );
        c2253 = CSTRING_TSCP( t4808 );
        CONSTANTEXP( ADR( c2253 ) );
        c2252 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c2252 ) );
        c2209 = STRINGTOSYMBOL( CSTRING_TSCP( "PUTPROP" ) );
        CONSTANTEXP( ADR( c2209 ) );
        c2202 = STRINGTOSYMBOL( CSTRING_TSCP( "GETPROP-ALL" ) );
        CONSTANTEXP( ADR( c2202 ) );
        c2158 = STRINGTOSYMBOL( CSTRING_TSCP( "GETPROP" ) );
        CONSTANTEXP( ADR( c2158 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-TOP-LEVEL-VALUE!" ) );
        CONSTANTEXP( ADR( c2152 ) );
        c2146 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL-VALUE" ) );
        CONSTANTEXP( ADR( c2146 ) );
        c2141 = CSTRING_TSCP( t4809 );
        CONSTANTEXP( ADR( c2141 ) );
        c2140 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2140 ) );
}

DEFTSCP( scrt2_symbol_3f_v );
DEFCSTRING( t4810, "SYMBOL?" );

TSCP  scrt2_symbol_3f( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t4810 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2131 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2131 ), 
                                         SYMBOLTAG ) ) ) );
}

DEFTSCP( scrt2_symbol_2d_3estring_v );
DEFCSTRING( t4812, "SYMBOL->STRING" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt2_symbol_2d_3estring( x2135 )
        TSCP  x2135;
{
        PUSHSTACKTRACE( t4812 );
        if  ( AND( EQ( TSCPTAG( x2135 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2135 ), SYMBOLTAG ) )
            )  goto L4815;
        scdebug_error( c2140, 
                       c2141, CONS( x2135, EMPTYLIST ) );
L4815:
        POPSTACKTRACE( SYMBOL_NAME( x2135 ) );
}

DEFTSCP( scrt2_top_2dlevel_2dvalue_v );
DEFCSTRING( t4817, "TOP-LEVEL-VALUE" );

TSCP  scrt2_top_2dlevel_2dvalue( s2143 )
        TSCP  s2143;
{
        PUSHSTACKTRACE( t4817 );
        if  ( AND( EQ( TSCPTAG( s2143 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2143 ), SYMBOLTAG ) )
            )  goto L4819;
        scdebug_error( c2146, 
                       c2141, CONS( s2143, EMPTYLIST ) );
L4819:
        POPSTACKTRACE( SYMBOL_VALUE( s2143 ) );
}

DEFTSCP( scrt2_2dvalue_21_c9d2a496_v );
DEFCSTRING( t4821, "SET-TOP-LEVEL-VALUE!" );

TSCP  scrt2_2dvalue_21_c9d2a496( s2148, v2149 )
        TSCP  s2148, v2149;
{
        PUSHSTACKTRACE( t4821 );
        if  ( AND( EQ( TSCPTAG( s2148 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2148 ), SYMBOLTAG ) )
            )  goto L4823;
        scdebug_error( c2152, 
                       c2141, CONS( s2148, EMPTYLIST ) );
L4823:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( s2148 ), v2149 ) );
}

DEFTSCP( scrt2_getprop_v );
DEFCSTRING( t4825, "GETPROP" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  scrt2_getprop( s2154, k2155 )
        TSCP  s2154, k2155;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4825 );
        if  ( AND( EQ( TSCPTAG( s2154 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2154 ), SYMBOLTAG ) )
            )  goto L4827;
        scdebug_error( c2158, 
                       c2141, CONS( s2154, EMPTYLIST ) );
L4827:
        X1 = SYMBOL_PROPERTYLIST( s2154 );
        X2 = X1;
L4831:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4832;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4837;
        scrt1__24__car_2derror( X2 );
L4837:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( k2155 ) ) )  goto L4834;
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4841;
        scrt1__24__car_2derror( X3 );
L4841:
        POPSTACKTRACE( PAIR_CAR( X3 ) );
L4834:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4844;
        scrt1__24__cdr_2derror( X2 );
L4844:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4847;
        scrt1__24__cdr_2derror( X3 );
L4847:
        X2 = PAIR_CDR( X3 );
        GOBACK( L4831 );
L4832:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_getprop_2dall_v );
DEFCSTRING( t4849, "GETPROP-ALL" );

TSCP  scrt2_getprop_2dall( s2199 )
        TSCP  s2199;
{
        PUSHSTACKTRACE( t4849 );
        if  ( AND( EQ( TSCPTAG( s2199 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2199 ), SYMBOLTAG ) )
            )  goto L4851;
        scdebug_error( c2202, 
                       c2141, CONS( s2199, EMPTYLIST ) );
L4851:
        POPSTACKTRACE( SYMBOL_PROPERTYLIST( s2199 ) );
}

DEFTSCP( scrt2_putprop_v );
DEFCSTRING( t4853, "PUTPROP" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt2_putprop( s2204, k2205, v2206 )
        TSCP  s2204, k2205, v2206;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4853 );
        if  ( AND( EQ( TSCPTAG( s2204 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2204 ), SYMBOLTAG ) )
            )  goto L4855;
        scdebug_error( c2209, 
                       c2141, CONS( s2204, EMPTYLIST ) );
L4855:
        X1 = SYMBOL_PROPERTYLIST( s2204 );
        X2 = X1;
        X3 = EMPTYLIST;
L4859:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4860;
        if  ( EQ( _S2CUINT( v2206 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L4872;
        if  ( FALSE( X3 ) )  goto L4864;
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4868;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4868:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4872;
L4864:
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4872;
L4860:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4874;
        scrt1__24__car_2derror( X2 );
L4874:
        X4 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( k2205 ) ) )  goto L4871;
        if  ( NEQ( _S2CUINT( v2206 ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L4876;
        if  ( FALSE( X3 ) )  goto L4878;
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4882;
        scrt1__24__cdr_2derror( X5 );
L4882:
        X4 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4885;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4885:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4872;
L4878:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4889;
        scrt1__24__cdr_2derror( X5 );
L4889:
        X4 = PAIR_CDR( X5 );
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4872;
L4876:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4893;
        scdebug_error( c2252, 
                       c2253, CONS( X4, EMPTYLIST ) );
L4893:
        SETGEN( PAIR_CAR( X4 ), v2206 );
        goto L4872;
L4871:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4896;
        scrt1__24__cdr_2derror( X2 );
L4896:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4899;
        scrt1__24__cdr_2derror( X5 );
L4899:
        X4 = PAIR_CDR( X5 );
        X3 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L4859 );
L4872:
        POPSTACKTRACE( v2206 );
}

DEFTSCP( scrt2_fixed_3f_v );
DEFCSTRING( t4902, "FIXED?" );

TSCP  scrt2_fixed_3f( x2297 )
        TSCP  x2297;
{
        PUSHSTACKTRACE( t4902 );
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2297 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_float_3f_v );
DEFCSTRING( t4904, "FLOAT?" );

TSCP  scrt2_float_3f( x2301 )
        TSCP  x2301;
{
        PUSHSTACKTRACE( t4904 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2301 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2301 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2_float_2d_3efixed_v );
DEFCSTRING( t4906, "FLOAT->FIXED" );

TSCP  scrt2_float_2d_3efixed( x2305 )
        TSCP  x2305;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4906 );
        if  ( AND( EQ( TSCPTAG( x2305 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2305 ), DOUBLEFLOATTAG ) )
            )  goto L4909;
        scdebug_error( c2310, 
                       c2311, CONS( x2305, EMPTYLIST ) );
L4909:
        X1 = BOOLEAN( LT( FLOAT_VALUE( x2305 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L4915;
        if  ( LTE( FLOAT_VALUE( x2305 ), MAXTSCPINTF ) )  goto L4918;
L4915:
        scdebug_error( c2310, 
                       c2316, CONS( x2305, EMPTYLIST ) );
L4918:
        POPSTACKTRACE( FLT_FIX( x2305 ) );
}

DEFTSCP( scrt2_fixed_2d_3efloat_v );
DEFCSTRING( t4919, "FIXED->FLOAT" );

TSCP  scrt2_fixed_2d_3efloat( x2318 )
        TSCP  x2318;
{
        PUSHSTACKTRACE( t4919 );
        if  ( EQ( TSCPTAG( x2318 ), FIXNUMTAG ) )  goto L4922;
        scdebug_error( c2323, 
                       c2324, CONS( x2318, EMPTYLIST ) );
L4922:
        POPSTACKTRACE( FIX_FLT( x2318 ) );
}

DEFTSCP( scrt2_number_3f_v );
DEFCSTRING( t4924, "NUMBER?" );

TSCP  scrt2_number_3f( x2326 )
        TSCP  x2326;
{
        PUSHSTACKTRACE( t4924 );
        if  ( EQ( TSCPTAG( x2326 ), FIXNUMTAG ) )  goto L4926;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2326 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2326 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4926:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_complex_3f_v );
DEFCSTRING( t4928, "COMPLEX?" );

TSCP  scrt2_complex_3f( x2336 )
        TSCP  x2336;
{
        PUSHSTACKTRACE( t4928 );
        if  ( EQ( TSCPTAG( x2336 ), FIXNUMTAG ) )  goto L4930;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2336 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2336 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4930:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_real_3f_v );
DEFCSTRING( t4932, "REAL?" );

TSCP  scrt2_real_3f( x2346 )
        TSCP  x2346;
{
        PUSHSTACKTRACE( t4932 );
        if  ( EQ( TSCPTAG( x2346 ), FIXNUMTAG ) )  goto L4934;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2346 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2346 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4934:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_rational_3f_v );
DEFCSTRING( t4936, "RATIONAL?" );

TSCP  scrt2_rational_3f( x2356 )
        TSCP  x2356;
{
        PUSHSTACKTRACE( t4936 );
        if  ( EQ( TSCPTAG( x2356 ), FIXNUMTAG ) )  goto L4938;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2356 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2356 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4938:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_integer_3f_v );
DEFCSTRING( t4940, "INTEGER?" );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  scrt2_integer_3f( x2370 )
        TSCP  x2370;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4940 );
        if  ( EQ( TSCPTAG( x2370 ), FIXNUMTAG ) )  goto L4942;
        if  ( NOT( AND( EQ( TSCPTAG( x2370 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2370 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4944;
        X1 = scrt2_round( x2370 );
        if  ( BITAND( BITOR( _S2CINT( x2370 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L4947;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2370 ), 
                                    _S2CUINT( X1 ) ) ) );
L4947:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2370, X1 ) );
L4944:
        POPSTACKTRACE( FALSEVALUE );
L4942:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_zero_3f_v );
DEFCSTRING( t4949, "ZERO?" );

TSCP  scrt2_zero_3f( x2395 )
        TSCP  x2395;
{
        PUSHSTACKTRACE( t4949 );
        if  ( BITAND( BITOR( _S2CINT( x2395 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4951;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2395 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L4951:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2395, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_positive_3f_v );
DEFCSTRING( t4953, "POSITIVE?" );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );

TSCP  scrt2_positive_3f( x2406 )
        TSCP  x2406;
{
        PUSHSTACKTRACE( t4953 );
        if  ( BITAND( BITOR( _S2CINT( x2406 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4955;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2406 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4955:
        POPSTACKTRACE( scrt2__3e_2dtwo( x2406, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_negative_3f_v );
DEFCSTRING( t4957, "NEGATIVE?" );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  scrt2_negative_3f( x2414 )
        TSCP  x2414;
{
        PUSHSTACKTRACE( t4957 );
        if  ( BITAND( BITOR( _S2CINT( x2414 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4959;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2414 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4959:
        POPSTACKTRACE( scrt2__3c_2dtwo( x2414, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_odd_3f_v );
DEFCSTRING( t4961, "ODD?" );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );

TSCP  scrt2_odd_3f( x2422 )
        TSCP  x2422;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4961 );
        if  ( NEQ( TSCPTAG( x2422 ), FIXNUMTAG ) )  goto L4963;
        X1 = TRUEVALUE;
        goto L4966;
L4963:
        if  ( NOT( AND( EQ( TSCPTAG( x2422 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2422 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4965;
        X2 = scrt2_round( x2422 );
        if  ( BITAND( BITOR( _S2CINT( x2422 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4968;
        X1 = BOOLEAN( EQ( _S2CUINT( x2422 ), 
                          _S2CUINT( X2 ) ) );
        goto L4966;
L4968:
        X1 = scrt2__3d_2dtwo( x2422, X2 );
        goto L4966;
L4965:
        X1 = FALSEVALUE;
L4966:
        if  ( FALSE( X1 ) )  goto L4971;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2422 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L4979;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4979;
        X2 = _TSCP( REMAINDER( _S2CINT( x2422 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L4980;
L4979:
        X2 = scrt2_remainder( x2422, _TSCP( 8 ) );
L4980:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4982;
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CUINT( X2 ), 
                                     _S2CUINT( _TSCP( 0 ) ) ) ) );
L4982:
        if  ( TRUE( scrt2_zero_3f( X2 ) ) )  goto L4984;
        POPSTACKTRACE( TRUEVALUE );
L4984:
        POPSTACKTRACE( FALSEVALUE );
L4971:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_even_3f_v );
DEFCSTRING( t4986, "EVEN?" );

TSCP  scrt2_even_3f( x2476 )
        TSCP  x2476;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4986 );
        if  ( NEQ( TSCPTAG( x2476 ), FIXNUMTAG ) )  goto L4988;
        X1 = TRUEVALUE;
        goto L4991;
L4988:
        if  ( NOT( AND( EQ( TSCPTAG( x2476 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2476 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4990;
        X2 = scrt2_round( x2476 );
        if  ( BITAND( BITOR( _S2CINT( x2476 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4993;
        X1 = BOOLEAN( EQ( _S2CUINT( x2476 ), 
                          _S2CUINT( X2 ) ) );
        goto L4991;
L4993:
        X1 = scrt2__3d_2dtwo( x2476, X2 );
        goto L4991;
L4990:
        X1 = FALSEVALUE;
L4991:
        if  ( FALSE( X1 ) )  goto L4996;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2476 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L5004;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5004;
        X2 = _TSCP( REMAINDER( _S2CINT( x2476 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L5005;
L5004:
        X2 = scrt2_remainder( x2476, _TSCP( 8 ) );
L5005:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L5007;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L5007:
        POPSTACKTRACE( scrt2_zero_3f( X2 ) );
L4996:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_exact_3f_v );
DEFCSTRING( t5009, "EXACT?" );

TSCP  scrt2_exact_3f( x2529 )
        TSCP  x2529;
{
        PUSHSTACKTRACE( t5009 );
        if  ( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) )  goto L5014;
        if  ( AND( EQ( TSCPTAG( x2529 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2529 ), DOUBLEFLOATTAG ) )
            )  goto L5014;
        scdebug_error( c2542, 
                       c2543, CONS( x2529, EMPTYLIST ) );
L5014:
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_inexact_3f_v );
DEFCSTRING( t5016, "INEXACT?" );

TSCP  scrt2_inexact_3f( x2547 )
        TSCP  x2547;
{
        PUSHSTACKTRACE( t5016 );
        if  ( EQ( TSCPTAG( x2547 ), FIXNUMTAG ) )  goto L5021;
        if  ( AND( EQ( TSCPTAG( x2547 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2547 ), DOUBLEFLOATTAG ) )
            )  goto L5021;
        scdebug_error( c2560, 
                       c2543, CONS( x2547, EMPTYLIST ) );
L5021:
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2547 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2547 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2__3d_2dtwo_v );
DEFCSTRING( t5023, "SCRT2_=-TWO" );

TSCP  scrt2__3d_2dtwo( x2564, y2565 )
        TSCP  x2564, y2565;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5023 );
        if  ( NEQ( TSCPTAG( x2564 ), FIXNUMTAG ) )  goto L5025;
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5027;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( x2564 ), 
                                    _S2CINT( y2565 ) ) ) );
L5027:
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5029;
        POPSTACKTRACE( BOOLEAN( EQ( FIX_FLTV( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5029:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( y2565, EMPTYLIST ) ) );
L5025:
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5031;
        if  ( NOT( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2564 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5033;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FIX_FLTV( y2565 ) ) ) );
L5033:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( x2564, EMPTYLIST ) ) );
L5031:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2564 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5041;
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5041;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5041:
        X1 = CONS( y2565, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2579, 
                                      CONS( x2564, X1 ) ) );
}

DEFTSCP( scrt2__3d_v );
DEFCSTRING( t5042, "=" );

TSCP  scrt2__3d( x2588, y2589, z2590 )
        TSCP  x2588, y2589, z2590;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5042 );
        if  ( BITAND( BITOR( _S2CINT( x2588 ), 
                             _S2CINT( y2589 ) ), 
                      3 ) )  goto L5045;
        X1 = BOOLEAN( EQ( _S2CUINT( x2588 ), 
                          _S2CUINT( y2589 ) ) );
        goto L5046;
L5045:
        X1 = scrt2__3d_2dtwo( x2588, y2589 );
L5046:
        if  ( FALSE( X1 ) )  goto L5048;
        X2 = y2589;
        X3 = z2590;
L5050:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5051;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5054;
        scrt1__24__car_2derror( X3 );
L5054:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5058;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L5062;
        POPSTACKTRACE( FALSEVALUE );
L5058:
        if  ( TRUE( scrt2__3d_2dtwo( X2, X4 ) ) )  goto L5062;
        POPSTACKTRACE( FALSEVALUE );
L5051:
        POPSTACKTRACE( TRUEVALUE );
L5062:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5050 );
L5048:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_2dtwo_v );
DEFCSTRING( t5067, "SCRT2_<-TWO" );

TSCP  scrt2__3c_2dtwo( x2636, y2637 )
        TSCP  x2636, y2637;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5067 );
        if  ( NEQ( TSCPTAG( x2636 ), FIXNUMTAG ) )  goto L5069;
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5071;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2636 ), 
                                    _S2CINT( y2637 ) ) ) );
L5071:
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5073;
        POPSTACKTRACE( BOOLEAN( LT( FIX_FLTV( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5073:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( y2637, EMPTYLIST ) ) );
L5069:
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5075;
        if  ( NOT( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2636 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5077;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FIX_FLTV( y2637 ) ) ) );
L5077:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( x2636, EMPTYLIST ) ) );
L5075:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2636 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5085;
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5085;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5085:
        X1 = CONS( y2637, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2579, 
                                      CONS( x2636, X1 ) ) );
}

DEFTSCP( scrt2__3c_v );
DEFCSTRING( t5086, "<" );

TSCP  scrt2__3c( x2658, y2659, z2660 )
        TSCP  x2658, y2659, z2660;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5086 );
        if  ( BITAND( BITOR( _S2CINT( x2658 ), 
                             _S2CINT( y2659 ) ), 
                      3 ) )  goto L5089;
        X1 = BOOLEAN( LT( _S2CINT( x2658 ), 
                          _S2CINT( y2659 ) ) );
        goto L5090;
L5089:
        X1 = scrt2__3c_2dtwo( x2658, y2659 );
L5090:
        if  ( FALSE( X1 ) )  goto L5092;
        X2 = y2659;
        X3 = z2660;
L5094:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5095;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5098;
        scrt1__24__car_2derror( X3 );
L5098:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5102;
        if  ( LT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5106;
        POPSTACKTRACE( FALSEVALUE );
L5102:
        if  ( TRUE( scrt2__3c_2dtwo( X2, X4 ) ) )  goto L5106;
        POPSTACKTRACE( FALSEVALUE );
L5095:
        POPSTACKTRACE( TRUEVALUE );
L5106:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5094 );
L5092:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_2dtwo_v );
DEFCSTRING( t5111, "SCRT2_>-TWO" );

TSCP  scrt2__3e_2dtwo( x2700, y2701 )
        TSCP  x2700, y2701;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5111 );
        if  ( NEQ( TSCPTAG( x2700 ), FIXNUMTAG ) )  goto L5113;
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5115;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2700 ), 
                                    _S2CINT( y2701 ) ) ) );
L5115:
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5117;
        POPSTACKTRACE( BOOLEAN( GT( FIX_FLTV( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5117:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( y2701, EMPTYLIST ) ) );
L5113:
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5119;
        if  ( NOT( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2700 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5121;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FIX_FLTV( y2701 ) ) ) );
L5121:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( x2700, EMPTYLIST ) ) );
L5119:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2700 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5129;
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5129;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5129:
        X1 = CONS( y2701, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2579, 
                                      CONS( x2700, X1 ) ) );
}

DEFTSCP( scrt2__3e_v );
DEFCSTRING( t5130, ">" );

TSCP  scrt2__3e( x2722, y2723, z2724 )
        TSCP  x2722, y2723, z2724;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5130 );
        if  ( BITAND( BITOR( _S2CINT( x2722 ), 
                             _S2CINT( y2723 ) ), 
                      3 ) )  goto L5133;
        X1 = BOOLEAN( GT( _S2CINT( x2722 ), 
                          _S2CINT( y2723 ) ) );
        goto L5134;
L5133:
        X1 = scrt2__3e_2dtwo( x2722, y2723 );
L5134:
        if  ( FALSE( X1 ) )  goto L5136;
        X2 = y2723;
        X3 = z2724;
L5138:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5139;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5142;
        scrt1__24__car_2derror( X3 );
L5142:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5146;
        if  ( GT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5150;
        POPSTACKTRACE( FALSEVALUE );
L5146:
        if  ( TRUE( scrt2__3e_2dtwo( X2, X4 ) ) )  goto L5150;
        POPSTACKTRACE( FALSEVALUE );
L5139:
        POPSTACKTRACE( TRUEVALUE );
L5150:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5138 );
L5136:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_3d_2dtwo_v );
DEFCSTRING( t5155, "SCRT2_<=-TWO" );

TSCP  scrt2__3c_3d_2dtwo( x2764, y2765 )
        TSCP  x2764, y2765;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5155 );
        if  ( NEQ( TSCPTAG( x2764 ), FIXNUMTAG ) )  goto L5157;
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5159;
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2764 ), 
                                     _S2CINT( y2765 ) ) ) );
L5159:
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5161;
        POPSTACKTRACE( BOOLEAN( LTE( FIX_FLTV( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5161:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( y2765, EMPTYLIST ) ) );
L5157:
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5163;
        if  ( NOT( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2764 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5165;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FIX_FLTV( y2765 ) ) ) );
L5165:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( x2764, EMPTYLIST ) ) );
L5163:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2764 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5173;
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5173;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5173:
        X1 = CONS( y2765, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2579, 
                                      CONS( x2764, X1 ) ) );
}

DEFTSCP( scrt2__3c_3d_v );
DEFCSTRING( t5174, "<=" );

TSCP  scrt2__3c_3d( x2786, y2787, z2788 )
        TSCP  x2786, y2787, z2788;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5174 );
        if  ( BITAND( BITOR( _S2CINT( x2786 ), 
                             _S2CINT( y2787 ) ), 
                      3 ) )  goto L5177;
        X1 = BOOLEAN( LTE( _S2CINT( x2786 ), 
                           _S2CINT( y2787 ) ) );
        goto L5178;
L5177:
        X1 = scrt2__3c_3d_2dtwo( x2786, y2787 );
L5178:
        if  ( FALSE( X1 ) )  goto L5180;
        X2 = y2787;
        X3 = z2788;
L5182:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5183;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5186;
        scrt1__24__car_2derror( X3 );
L5186:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5190;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5194;
        POPSTACKTRACE( FALSEVALUE );
L5190:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X2, X4 ) ) )  goto L5194;
        POPSTACKTRACE( FALSEVALUE );
L5183:
        POPSTACKTRACE( TRUEVALUE );
L5194:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5182 );
L5180:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_3d_2dtwo_v );
DEFCSTRING( t5199, "SCRT2_>=-TWO" );

TSCP  scrt2__3e_3d_2dtwo( x2828, y2829 )
        TSCP  x2828, y2829;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5199 );
        if  ( NEQ( TSCPTAG( x2828 ), FIXNUMTAG ) )  goto L5201;
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5203;
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( x2828 ), 
                                     _S2CINT( y2829 ) ) ) );
L5203:
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5205;
        POPSTACKTRACE( BOOLEAN( GTE( FIX_FLTV( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5205:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( y2829, EMPTYLIST ) ) );
L5201:
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5207;
        if  ( NOT( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2828 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5209;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FIX_FLTV( y2829 ) ) ) );
L5209:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( x2828, EMPTYLIST ) ) );
L5207:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2828 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5217;
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5217;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5217:
        X1 = CONS( y2829, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2579, 
                                      CONS( x2828, X1 ) ) );
}

DEFTSCP( scrt2__3e_3d_v );
DEFCSTRING( t5218, ">=" );

TSCP  scrt2__3e_3d( x2850, y2851, z2852 )
        TSCP  x2850, y2851, z2852;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5218 );
        if  ( BITAND( BITOR( _S2CINT( x2850 ), 
                             _S2CINT( y2851 ) ), 
                      3 ) )  goto L5221;
        X1 = BOOLEAN( GTE( _S2CINT( x2850 ), 
                           _S2CINT( y2851 ) ) );
        goto L5222;
L5221:
        X1 = scrt2__3e_3d_2dtwo( x2850, y2851 );
L5222:
        if  ( FALSE( X1 ) )  goto L5224;
        X2 = y2851;
        X3 = z2852;
L5226:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5227;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5230;
        scrt1__24__car_2derror( X3 );
L5230:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5234;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5238;
        POPSTACKTRACE( FALSEVALUE );
L5234:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L5238;
        POPSTACKTRACE( FALSEVALUE );
L5227:
        POPSTACKTRACE( TRUEVALUE );
L5238:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5226 );
L5224:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_max_2dtwo_v );
DEFCSTRING( t5243, "SCRT2_MAX-TWO" );

TSCP  scrt2_max_2dtwo( x2892, y2893 )
        TSCP  x2892, y2893;
{
        PUSHSTACKTRACE( t5243 );
        if  ( BITAND( BITOR( _S2CINT( x2892 ), 
                             _S2CINT( y2893 ) ), 
                      3 ) )  goto L5245;
        if  ( GT( _S2CINT( x2892 ), _S2CINT( y2893 ) ) )  goto L5247;
        POPSTACKTRACE( y2893 );
L5247:
        POPSTACKTRACE( x2892 );
L5245:
        if  ( TRUE( scrt2__3e_2dtwo( x2892, y2893 ) ) )  goto L5249;
        POPSTACKTRACE( y2893 );
L5249:
        POPSTACKTRACE( x2892 );
}

DEFTSCP( scrt2_max_v );
DEFCSTRING( t5251, "MAX" );

TSCP  scrt2_max( x2901, y2902 )
        TSCP  x2901, y2902;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5251 );
        X1 = x2901;
        X2 = y2902;
L5254:
        if  ( FALSE( X2 ) )  goto L5255;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5258;
        scrt1__24__car_2derror( X2 );
L5258:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5262;
        if  ( LTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5266;
        X3 = X1;
        goto L5269;
L5262:
        if  ( FALSE( scrt2__3e_2dtwo( X1, X4 ) ) )  goto L5266;
        X3 = X1;
        goto L5269;
L5266:
        X3 = PAIR_CAR( X2 );
L5269:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5254 );
L5255:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_min_2dtwo_v );
DEFCSTRING( t5272, "SCRT2_MIN-TWO" );

TSCP  scrt2_min_2dtwo( x2930, y2931 )
        TSCP  x2930, y2931;
{
        PUSHSTACKTRACE( t5272 );
        if  ( BITAND( BITOR( _S2CINT( x2930 ), 
                             _S2CINT( y2931 ) ), 
                      3 ) )  goto L5274;
        if  ( LT( _S2CINT( x2930 ), _S2CINT( y2931 ) ) )  goto L5276;
        POPSTACKTRACE( y2931 );
L5276:
        POPSTACKTRACE( x2930 );
L5274:
        if  ( TRUE( scrt2__3c_2dtwo( x2930, y2931 ) ) )  goto L5278;
        POPSTACKTRACE( y2931 );
L5278:
        POPSTACKTRACE( x2930 );
}

DEFTSCP( scrt2_min_v );
DEFCSTRING( t5280, "MIN" );

TSCP  scrt2_min( x2939, y2940 )
        TSCP  x2939, y2940;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5280 );
        X1 = x2939;
        X2 = y2940;
L5283:
        if  ( FALSE( X2 ) )  goto L5284;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5287;
        scrt1__24__car_2derror( X2 );
L5287:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5291;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5295;
        X3 = X1;
        goto L5298;
L5291:
        if  ( FALSE( scrt2__3c_2dtwo( X1, X4 ) ) )  goto L5295;
        X3 = X1;
        goto L5298;
L5295:
        X3 = PAIR_CAR( X2 );
L5298:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5283 );
L5284:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2b_2dtwo_v );
DEFCSTRING( t5301, "SCRT2_+-TWO" );

TSCP  scrt2__2b_2dtwo( x2968, y2969 )
        TSCP  x2968, y2969;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5301 );
        if  ( NEQ( TSCPTAG( x2968 ), FIXNUMTAG ) )  goto L5303;
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5305;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x2968 ), 
                                     _S2CINT( y2969 ) ) ) );
L5305:
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5307;
        POPSTACKTRACE( FLTV_FLT( PLUS( FIX_FLTV( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5307:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( y2969, EMPTYLIST ) ) );
L5303:
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5309;
        if  ( NOT( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2968 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5311;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FIX_FLTV( y2969 ) ) ) );
L5311:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( x2968, EMPTYLIST ) ) );
L5309:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2968 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5319;
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5319;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5319:
        X1 = CONS( y2969, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2579, 
                                      CONS( x2968, X1 ) ) );
}

DEFTSCP( scrt2__2b_v );
DEFCSTRING( t5320, "+" );

TSCP  scrt2__2b( x2990 )
        TSCP  x2990;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5320 );
        X1 = _TSCP( 0 );
        X2 = x2990;
L5323:
        if  ( FALSE( X2 ) )  goto L5324;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5327;
        scrt1__24__car_2derror( X2 );
L5327:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5330;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), _S2CINT( X4 ) ) );
        goto L5331;
L5330:
        X3 = scrt2__2b_2dtwo( X1, X4 );
L5331:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5323 );
L5324:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2a_2dtwo_v );
DEFCSTRING( t5333, "SCRT2_*-TWO" );

TSCP  scrt2__2a_2dtwo( x3014, y3015 )
        TSCP  x3014, y3015;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5333 );
        if  ( NEQ( TSCPTAG( x3014 ), FIXNUMTAG ) )  goto L5335;
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5337;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( x3014 ), 
                                      _S2CINT( y3015 ) ) ) );
L5337:
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5339;
        POPSTACKTRACE( FLTV_FLT( TIMES( FIX_FLTV( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5339:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( y3015, EMPTYLIST ) ) );
L5335:
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5341;
        if  ( NOT( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3014 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5343;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FIX_FLTV( y3015 ) ) ) );
L5343:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( x3014, EMPTYLIST ) ) );
L5341:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3014 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5351;
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5351;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5351:
        X1 = CONS( y3015, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2579, 
                                      CONS( x3014, X1 ) ) );
}

DEFTSCP( scrt2__2a_v );
DEFCSTRING( t5352, "*" );

TSCP  scrt2__2a( x3036 )
        TSCP  x3036;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5352 );
        X1 = _TSCP( 4 );
        X2 = x3036;
L5355:
        if  ( FALSE( X2 ) )  goto L5356;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5359;
        scrt1__24__car_2derror( X2 );
L5359:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5362;
        X3 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X4 ) ) );
        goto L5363;
L5362:
        X3 = scrt2__2a_2dtwo( X1, X4 );
L5363:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5355 );
L5356:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2d_2dtwo_v );
DEFCSTRING( t5365, "SCRT2_--TWO" );

TSCP  scrt2__2d_2dtwo( x3061, y3062 )
        TSCP  x3061, y3062;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5365 );
        if  ( NEQ( TSCPTAG( x3061 ), FIXNUMTAG ) )  goto L5367;
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5369;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( x3061 ), 
                                           _S2CINT( y3062 ) ) ) );
L5369:
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5371;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FIX_FLTV( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5371:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( y3062, EMPTYLIST ) ) );
L5367:
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5373;
        if  ( NOT( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3061 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5375;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FIX_FLTV( y3062 ) ) ) );
L5375:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( x3061, EMPTYLIST ) ) );
L5373:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3061 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5383;
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5383;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5383:
        X1 = CONS( y3062, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2579, 
                                      CONS( x3061, X1 ) ) );
}

DEFTSCP( scrt2__2d_v );
DEFCSTRING( t5384, "-" );

TSCP  scrt2__2d( x3083, y3084 )
        TSCP  x3083, y3084;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5384 );
        if  ( FALSE( y3084 ) )  goto L5386;
        if  ( EQ( TSCPTAG( y3084 ), PAIRTAG ) )  goto L5389;
        scrt1__24__cdr_2derror( y3084 );
L5389:
        X1 = PAIR_CDR( y3084 );
        X3 = PAIR_CAR( y3084 );
        if  ( BITAND( BITOR( _S2CINT( x3083 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5393;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( x3083 ), 
                                 _S2CINT( X3 ) ) );
        goto L5394;
L5393:
        X2 = scrt2__2d_2dtwo( x3083, X3 );
L5394:
        X3 = X2;
        X4 = X1;
L5397:
        if  ( FALSE( X4 ) )  goto L5398;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5401;
        scrt1__24__car_2derror( X4 );
L5401:
        X6 = PAIR_CAR( X4 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L5404;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X6 ) ) );
        goto L5405;
L5404:
        X5 = scrt2__2d_2dtwo( X3, X6 );
L5405:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5397 );
L5398:
        POPSTACKTRACE( X3 );
L5386:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3083 ) ), 
                      3 ) )  goto L5407;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3083 ) ) ) );
L5407:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3083 ) );
}

DEFTSCP( scrt2__2f_2dtwo_v );
DEFCSTRING( t5409, "SCRT2_/-TWO" );

TSCP  scrt2__2f_2dtwo( x3128, y3129 )
        TSCP  x3128, y3129;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5409 );
        X1 = BOOLEAN( EQ( _S2CUINT( y3129 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        if  ( TRUE( X1 ) )  goto L5415;
        if  ( OR( EQ( _S2CUINT( y3129 ), _S2CUINT( c3140 ) ), 
                  AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                       AND( EQ( TSCP_EXTENDEDTAG( y3129 ), 
                                DOUBLEFLOATTAG ), 
                            AND( EQ( TSCPTAG( c3140 ), 
                                     EXTENDEDTAG ), 
                                 AND( EQ( TSCP_EXTENDEDTAG( c3140 ), 
                                          DOUBLEFLOATTAG ), 
                                      EQ( FLOAT_VALUE( y3129 ), 
                                          FLOAT_VALUE( c3140 ) ) ) ) ) ) )
            )  goto L5415;
        if  ( NEQ( TSCPTAG( x3128 ), FIXNUMTAG ) )  goto L5418;
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5420;
        X2 = _TSCP( REMAINDER( _S2CINT( x3128 ), 
                               _S2CINT( y3129 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5422;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3128 ), 
                                          _S2CINT( y3129 ) ) ) );
L5422:
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5420:
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5424;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5424:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2582, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5418:
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5426;
        if  ( NOT( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3128 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5428;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5428:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2582, 
                                      CONS( x3128, EMPTYLIST ) ) );
L5426:
        X2 = BOOLEAN( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3128 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X2 ) )  goto L5436;
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5436;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5415:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c3163, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5436:
        X1 = CONS( y3129, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2579, 
                                      CONS( x3128, X1 ) ) );
}

DEFTSCP( scrt2__2f_v );
DEFCSTRING( t5437, "/" );

TSCP  scrt2__2f( x3165, y3166 )
        TSCP  x3165, y3166;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5437 );
        if  ( FALSE( y3166 ) )  goto L5439;
        if  ( EQ( TSCPTAG( y3166 ), PAIRTAG ) )  goto L5442;
        scrt1__24__cdr_2derror( y3166 );
L5442:
        X1 = PAIR_CDR( y3166 );
        X3 = PAIR_CAR( y3166 );
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3165 ), 
                                          _S2CINT( X3 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5456;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5456;
        X5 = _TSCP( REMAINDER( _S2CINT( x3165 ), 
                               _S2CINT( X3 ) ) );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5456;
        X2 = C_FIXED( QUOTIENT( _S2CINT( x3165 ), 
                                _S2CINT( X3 ) ) );
        goto L5457;
L5456:
        X2 = scrt2__2f_2dtwo( x3165, X3 );
L5457:
        X3 = X2;
        X4 = X1;
L5460:
        if  ( FALSE( X4 ) )  goto L5461;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5464;
        scrt1__24__car_2derror( X4 );
L5464:
        X6 = PAIR_CAR( X4 );
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( X6 ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L5477;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5477;
        X8 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( X6 ) ) );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5477;
        X5 = C_FIXED( QUOTIENT( _S2CINT( X3 ), 
                                _S2CINT( X6 ) ) );
        goto L5478;
L5477:
        X5 = scrt2__2f_2dtwo( X3, X6 );
L5478:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5460 );
L5461:
        POPSTACKTRACE( X3 );
L5439:
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3165 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5490;
        if  ( EQ( _S2CUINT( x3165 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5490;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x3165 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5490;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3165 ) ) ) );
L5490:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x3165 ) );
}

DEFTSCP( scrt2_abs_v );
DEFCSTRING( t5491, "ABS" );

TSCP  scrt2_abs( x3252 )
        TSCP  x3252;
{
        PUSHSTACKTRACE( t5491 );
        if  ( NEQ( TSCPTAG( x3252 ), FIXNUMTAG ) )  goto L5494;
        if  ( LT( _S2CINT( x3252 ), 0 ) )  goto L5498;
        POPSTACKTRACE( x3252 );
L5494:
        if  ( TRUE( scrt2_negative_3f( x3252 ) ) )  goto L5498;
        POPSTACKTRACE( x3252 );
L5498:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3252 ) ), 
                      3 ) )  goto L5501;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3252 ) ) ) );
L5501:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3252 ) );
}

DEFTSCP( scrt2_quotient_v );
DEFCSTRING( t5503, "QUOTIENT" );
EXTERNTSCPP( scrt2_truncate, XAL1( TSCP ) );
EXTERNTSCP( scrt2_truncate_v );

TSCP  scrt2_quotient( x3266, y3267 )
        TSCP  x3266, y3267;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5503 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5511;
        if  ( EQ( _S2CUINT( y3267 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5511;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ) ) );
L5511:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5522;
        if  ( EQ( _S2CUINT( y3267 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5522;
        X3 = _TSCP( REMAINDER( _S2CINT( x3266 ), 
                               _S2CINT( y3267 ) ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5522;
        X1 = C_FIXED( QUOTIENT( _S2CINT( x3266 ), 
                                _S2CINT( y3267 ) ) );
        goto L5523;
L5522:
        X1 = scrt2__2f_2dtwo( x3266, y3267 );
L5523:
        POPSTACKTRACE( scrt2_truncate( X1 ) );
}

DEFTSCP( scrt2_remainder_v );
DEFCSTRING( t5524, "REMAINDER" );

TSCP  scrt2_remainder( x3299, y3300 )
        TSCP  x3299, y3300;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5524 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3299 ), 
                                          _S2CINT( y3300 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5532;
        if  ( EQ( _S2CUINT( y3300 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5532;
        POPSTACKTRACE( _TSCP( REMAINDER( _S2CINT( x3299 ), 
                                         _S2CINT( y3300 ) ) ) );
L5532:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3299 ), 
                                          _S2CINT( y3300 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5539;
        if  ( EQ( _S2CUINT( y3300 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5539;
        X3 = C_FIXED( QUOTIENT( _S2CINT( x3299 ), 
                                _S2CINT( y3300 ) ) );
        goto L5540;
L5539:
        X3 = scrt2_quotient( x3299, y3300 );
L5540:
        if  ( BITAND( BITOR( _S2CINT( y3300 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5542;
        X2 = _TSCP( ITIMES( FIXED_C( y3300 ), 
                            _S2CINT( X3 ) ) );
        goto L5543;
L5542:
        X2 = scrt2__2a_2dtwo( y3300, X3 );
L5543:
        if  ( BITAND( BITOR( _S2CINT( x3299 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L5545;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( x3299 ), 
                                 _S2CINT( X2 ) ) );
        goto L5546;
L5545:
        X1 = scrt2__2d_2dtwo( x3299, X2 );
L5546:
        POPSTACKTRACE( scrt2_round( X1 ) );
}

DEFTSCP( scrt2_modulo_v );
DEFCSTRING( t5547, "MODULO" );

TSCP  scrt2_modulo( x3337, y3338 )
        TSCP  x3337, y3338;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5547 );
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3337 ), 
                                          _S2CINT( y3338 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5555;
        if  ( EQ( _S2CUINT( y3338 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5555;
        X1 = _TSCP( REMAINDER( _S2CINT( x3337 ), 
                               _S2CINT( y3338 ) ) );
        goto L5556;
L5555:
        X1 = scrt2_remainder( x3337, y3338 );
L5556:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5559;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5563;
        POPSTACKTRACE( X1 );
L5559:
        if  ( FALSE( scrt2_zero_3f( X1 ) ) )  goto L5563;
        POPSTACKTRACE( X1 );
L5563:
        if  ( NEQ( TSCPTAG( y3338 ), FIXNUMTAG ) )  goto L5567;
        if  ( GT( _S2CINT( y3338 ), 0 ) )  goto L5571;
        goto L5572;
L5567:
        if  ( FALSE( scrt2_positive_3f( y3338 ) ) )  goto L5572;
L5571:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5576;
        if  ( LTE( _S2CINT( X1 ), 0 ) )  goto L5580;
        POPSTACKTRACE( X1 );
L5576:
        if  ( FALSE( scrt2_positive_3f( X1 ) ) )  goto L5580;
        POPSTACKTRACE( X1 );
L5580:
        if  ( BITAND( BITOR( _S2CINT( y3338 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5583;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3338 ), 
                                     _S2CINT( X1 ) ) ) );
L5583:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3338, X1 ) );
L5572:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5586;
        if  ( GTE( _S2CINT( X1 ), 0 ) )  goto L5590;
        POPSTACKTRACE( X1 );
L5586:
        if  ( FALSE( scrt2_negative_3f( X1 ) ) )  goto L5590;
        POPSTACKTRACE( X1 );
L5590:
        if  ( BITAND( BITOR( _S2CINT( y3338 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5593;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3338 ), 
                                     _S2CINT( X1 ) ) ) );
L5593:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3338, X1 ) );
}

DEFTSCP( scrt2_gcd_v );
DEFCSTRING( t5595, "GCD" );

TSCP  scrt2_g3397( m3399, n3400 )
        TSCP  m3399, n3400;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "GCD2 [inside GCD]" );
L5598:
        if  ( NEQ( TSCPTAG( n3400 ), FIXNUMTAG ) )  goto L5600;
        if  ( NEQ( _S2CUINT( n3400 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L5604;
        POPSTACKTRACE( m3399 );
L5600:
        if  ( FALSE( scrt2_zero_3f( n3400 ) ) )  goto L5604;
        POPSTACKTRACE( m3399 );
L5604:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( m3399 ), 
                                          _S2CINT( n3400 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5613;
        if  ( EQ( _S2CUINT( n3400 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5613;
        X1 = _TSCP( REMAINDER( _S2CINT( m3399 ), 
                               _S2CINT( n3400 ) ) );
        goto L5614;
L5613:
        X1 = scrt2_remainder( m3399, n3400 );
L5614:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5617;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5621;
        POPSTACKTRACE( n3400 );
L5617:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L5621;
        POPSTACKTRACE( n3400 );
L5621:
        X2 = n3400;
        n3400 = X1;
        m3399 = X2;
        GOBACK( L5598 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  scrt2_gcd( x3395 )
        TSCP  x3395;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5595 );
        X2 = scrt1_length( x3395 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5625;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5627;
        if  ( EQ( TSCPTAG( x3395 ), PAIRTAG ) )  goto L5630;
        scrt1__24__car_2derror( x3395 );
L5630:
        X1 = PAIR_CAR( x3395 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5633;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5638;
        POPSTACKTRACE( X1 );
L5633:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5627:
        if  ( EQ( TSCPTAG( x3395 ), PAIRTAG ) )  goto L5640;
        scrt1__24__cdr_2derror( x3395 );
L5640:
        X4 = PAIR_CDR( x3395 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5643;
        scrt1__24__cdr_2derror( X4 );
L5643:
        X3 = PAIR_CDR( X4 );
        X6 = PAIR_CAR( x3395 );
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L5647;
        if  ( LT( _S2CINT( X6 ), 0 ) )  goto L5652;
        X5 = X6;
        goto L5653;
L5647:
        X5 = scrt2_abs( X6 );
        goto L5653;
L5652:
        X5 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
L5653:
        X8 = PAIR_CDR( x3395 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L5656;
        scrt1__24__car_2derror( X8 );
L5656:
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L5659;
        if  ( LT( _S2CINT( X7 ), 0 ) )  goto L5664;
        X6 = X7;
        goto L5665;
L5659:
        X6 = scrt2_abs( X7 );
        goto L5665;
L5664:
        X6 = _TSCP( INEGATE( _S2CINT( X7 ) ) );
L5665:
        X4 = scrt2_g3397( X5, X6 );
        X5 = X4;
        X6 = X3;
L5668:
        if  ( FALSE( X6 ) )  goto L5669;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5672;
        scrt1__24__car_2derror( X6 );
L5672:
        X9 = PAIR_CAR( X6 );
        if  ( NEQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L5675;
        if  ( LT( _S2CINT( X9 ), 0 ) )  goto L5680;
        X8 = X9;
        goto L5681;
L5675:
        X8 = scrt2_abs( X9 );
        goto L5681;
L5680:
        X8 = _TSCP( INEGATE( _S2CINT( X9 ) ) );
L5681:
        X7 = scrt2_g3397( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5668 );
L5669:
        POPSTACKTRACE( X5 );
L5625:
        POPSTACKTRACE( _TSCP( 0 ) );
L5638:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_lcm_v );
DEFCSTRING( t5683, "LCM" );

TSCP  scrt2_l3538( m3540, n3541 )
        TSCP  m3540, n3541;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LCM2 [inside LCM]" );
        if  ( NEQ( TSCPTAG( n3541 ), FIXNUMTAG ) )  goto L5687;
        if  ( LT( _S2CINT( n3541 ), 0 ) )  goto L5692;
        X1 = n3541;
        goto L5688;
L5692:
        X1 = _TSCP( INEGATE( _S2CINT( n3541 ) ) );
        goto L5688;
L5687:
        X1 = scrt2_abs( n3541 );
L5688:
        if  ( NEQ( TSCPTAG( m3540 ), FIXNUMTAG ) )  goto L5694;
        if  ( LT( _S2CINT( m3540 ), 0 ) )  goto L5699;
        X2 = m3540;
        goto L5695;
L5699:
        X2 = _TSCP( INEGATE( _S2CINT( m3540 ) ) );
        goto L5695;
L5694:
        X2 = scrt2_abs( m3540 );
L5695:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5703;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) )  goto L5707;
        POPSTACKTRACE( X2 );
L5703:
        if  ( FALSE( scrt2__3d_2dtwo( X2, X1 ) ) )  goto L5707;
        POPSTACKTRACE( X2 );
L5707:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5716;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5716;
        X3 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X1 ) ) );
        goto L5717;
L5716:
        X3 = scrt2_remainder( X2, X1 );
L5717:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5720;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5724;
        POPSTACKTRACE( X2 );
L5720:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5724;
        POPSTACKTRACE( X2 );
L5724:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X1 ), 
                                          _S2CINT( X2 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5733;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5733;
        X3 = _TSCP( REMAINDER( _S2CINT( X1 ), 
                               _S2CINT( X2 ) ) );
        goto L5734;
L5733:
        X3 = scrt2_remainder( X1, X2 );
L5734:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5737;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5741;
        POPSTACKTRACE( X1 );
L5737:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5741;
        POPSTACKTRACE( X1 );
L5741:
        X5 = CONS( X1, EMPTYLIST );
        X4 = scrt2_gcd( CONS( X2, X5 ) );
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X4 ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L5755;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5755;
        X6 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X4 ) ) );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5755;
        X3 = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                _S2CINT( X4 ) ) );
        goto L5756;
L5755:
        X3 = scrt2__2f_2dtwo( X2, X4 );
L5756:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5758;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( X3 ), 
                                      _S2CINT( X1 ) ) ) );
L5758:
        POPSTACKTRACE( scrt2__2a_2dtwo( X3, X1 ) );
}

TSCP  scrt2_lcm( x3536 )
        TSCP  x3536;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5683 );
        X2 = scrt1_length( x3536 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5761;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5763;
        if  ( EQ( TSCPTAG( x3536 ), PAIRTAG ) )  goto L5766;
        scrt1__24__car_2derror( x3536 );
L5766:
        X1 = PAIR_CAR( x3536 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5769;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5774;
        POPSTACKTRACE( X1 );
L5769:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5763:
        if  ( EQ( TSCPTAG( x3536 ), PAIRTAG ) )  goto L5776;
        scrt1__24__cdr_2derror( x3536 );
L5776:
        X4 = PAIR_CDR( x3536 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5779;
        scrt1__24__cdr_2derror( X4 );
L5779:
        X3 = PAIR_CDR( X4 );
        X5 = PAIR_CAR( x3536 );
        X7 = PAIR_CDR( x3536 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L5784;
        scrt1__24__car_2derror( X7 );
L5784:
        X6 = PAIR_CAR( X7 );
        X4 = scrt2_l3538( X5, X6 );
        X5 = X4;
        X6 = X3;
L5788:
        if  ( FALSE( X6 ) )  goto L5789;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5792;
        scrt1__24__car_2derror( X6 );
L5792:
        X8 = PAIR_CAR( X6 );
        X7 = scrt2_l3538( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5788 );
L5789:
        POPSTACKTRACE( X5 );
L5761:
        POPSTACKTRACE( _TSCP( 4 ) );
L5774:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_floor_v );
DEFCSTRING( t5795, "FLOOR" );

TSCP  scrt2_floor( x3713 )
        TSCP  x3713;
{
        PUSHSTACKTRACE( t5795 );
        if  ( EQ( TSCPTAG( x3713 ), FIXNUMTAG ) )  goto L5797;
        POPSTACKTRACE( C_FLOOR( x3713 ) );
L5797:
        POPSTACKTRACE( x3713 );
}

DEFTSCP( scrt2_ceiling_v );
DEFCSTRING( t5799, "CEILING" );

TSCP  scrt2_ceiling( x3717 )
        TSCP  x3717;
{
        PUSHSTACKTRACE( t5799 );
        if  ( EQ( TSCPTAG( x3717 ), FIXNUMTAG ) )  goto L5801;
        POPSTACKTRACE( C_CEILING( x3717 ) );
L5801:
        POPSTACKTRACE( x3717 );
}

DEFTSCP( scrt2_truncate_v );
DEFCSTRING( t5803, "TRUNCATE" );

TSCP  scrt2_truncate( x3721 )
        TSCP  x3721;
{
        PUSHSTACKTRACE( t5803 );
        if  ( BITAND( BITOR( _S2CINT( x3721 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5806;
        if  ( LT( _S2CINT( x3721 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5810;
        goto L5811;
L5806:
        if  ( FALSE( scrt2__3c_2dtwo( x3721, _TSCP( 0 ) ) ) )  goto L5811;
L5810:
        POPSTACKTRACE( scrt2_ceiling( x3721 ) );
L5811:
        POPSTACKTRACE( scrt2_floor( x3721 ) );
}

DEFTSCP( scrt2_round_v );
DEFCSTRING( t5814, "ROUND" );

TSCP  scrt2_round( x3729 )
        TSCP  x3729;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5814 );
        if  ( EQ( TSCPTAG( x3729 ), FIXNUMTAG ) )  goto L5816;
        if  ( BITAND( BITOR( _S2CINT( x3729 ), 
                             _S2CINT( c3738 ) ), 
                      3 ) )  goto L5818;
        X1 = _TSCP( IPLUS( _S2CINT( x3729 ), 
                           _S2CINT( c3738 ) ) );
        goto L5819;
L5818:
        X1 = scrt2__2b_2dtwo( x3729, c3738 );
L5819:
        POPSTACKTRACE( scrt2_floor( X1 ) );
L5816:
        POPSTACKTRACE( x3729 );
}

DEFTSCP( scrt2_exp_v );
DEFCSTRING( t5820, "EXP" );

TSCP  scrt2_exp( x3740 )
        TSCP  x3740;
{
        PUSHSTACKTRACE( t5820 );
        POPSTACKTRACE( C_EXP( x3740 ) );
}

DEFTSCP( scrt2_log_v );
DEFCSTRING( t5822, "LOG" );

TSCP  scrt2_log( x3742 )
        TSCP  x3742;
{
        PUSHSTACKTRACE( t5822 );
        POPSTACKTRACE( C_LOG( x3742 ) );
}

DEFTSCP( scrt2_sin_v );
DEFCSTRING( t5824, "SIN" );

TSCP  scrt2_sin( x3744 )
        TSCP  x3744;
{
        PUSHSTACKTRACE( t5824 );
        POPSTACKTRACE( C_SIN( x3744 ) );
}

DEFTSCP( scrt2_cos_v );
DEFCSTRING( t5826, "COS" );

TSCP  scrt2_cos( x3746 )
        TSCP  x3746;
{
        PUSHSTACKTRACE( t5826 );
        POPSTACKTRACE( C_COS( x3746 ) );
}

DEFTSCP( scrt2_tan_v );
DEFCSTRING( t5828, "TAN" );

TSCP  scrt2_tan( x3748 )
        TSCP  x3748;
{
        PUSHSTACKTRACE( t5828 );
        POPSTACKTRACE( C_TAN( x3748 ) );
}

DEFTSCP( scrt2_asin_v );
DEFCSTRING( t5830, "ASIN" );

TSCP  scrt2_asin( x3750 )
        TSCP  x3750;
{
        PUSHSTACKTRACE( t5830 );
        POPSTACKTRACE( C_ASIN( x3750 ) );
}

DEFTSCP( scrt2_acos_v );
DEFCSTRING( t5832, "ACOS" );

TSCP  scrt2_acos( x3752 )
        TSCP  x3752;
{
        PUSHSTACKTRACE( t5832 );
        POPSTACKTRACE( C_ACOS( x3752 ) );
}

DEFTSCP( scrt2_atan_v );
DEFCSTRING( t5834, "ATAN" );

TSCP  scrt2_atan( x3754, y3755 )
        TSCP  x3754, y3755;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5834 );
        if  ( FALSE( y3755 ) )  goto L5836;
        if  ( EQ( TSCPTAG( y3755 ), PAIRTAG ) )  goto L5839;
        scrt1__24__car_2derror( y3755 );
L5839:
        X1 = PAIR_CAR( y3755 );
        POPSTACKTRACE( C_ATAN2( x3754, X1 ) );
L5836:
        POPSTACKTRACE( C_ATAN( x3754 ) );
}

DEFTSCP( scrt2_sqrt_v );
DEFCSTRING( t5841, "SQRT" );

TSCP  scrt2_sqrt( x3761 )
        TSCP  x3761;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5841 );
        if  ( NEQ( TSCPTAG( x3761 ), FIXNUMTAG ) )  goto L5844;
        if  ( LT( _S2CINT( x3761 ), 0 ) )  goto L5848;
        goto L5851;
L5844:
        if  ( FALSE( scrt2_negative_3f( x3761 ) ) )  goto L5851;
L5848:
        scdebug_error( c3768, 
                       c3769, CONS( x3761, EMPTYLIST ) );
L5851:
        X1 = C_SQRT( x3761 );
        if  ( NEQ( TSCPTAG( x3761 ), FIXNUMTAG ) )  goto L5853;
        X3 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L5856;
        scdebug_error( c2310, 
                       c2311, CONS( X3, EMPTYLIST ) );
L5856:
        X4 = BOOLEAN( LT( FLOAT_VALUE( X3 ), MINTSCPINTF ) );
        if  ( TRUE( X4 ) )  goto L5862;
        if  ( LTE( FLOAT_VALUE( X3 ), MAXTSCPINTF ) )  goto L5865;
L5862:
        scdebug_error( c2310, 
                       c2316, CONS( X3, EMPTYLIST ) );
L5865:
        X2 = FLT_FIX( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L5869;
        X3 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X2 ) ) );
        goto L5870;
L5869:
        X3 = scrt2__2a_2dtwo( X2, X2 );
L5870:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( x3761 ) ) )  goto L5867;
        POPSTACKTRACE( X1 );
L5867:
        POPSTACKTRACE( X2 );
L5853:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_expt_v );
DEFCSTRING( t5871, "EXPT" );

TSCP  scrt2_expt( x3794, y3795 )
        TSCP  x3794, y3795;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5871 );
        if  ( BITAND( BITOR( _S2CINT( x3794 ), 
                             _S2CINT( c3140 ) ), 
                      3 ) )  goto L5873;
        X2 = BOOLEAN( EQ( _S2CUINT( x3794 ), 
                          _S2CUINT( c3140 ) ) );
        goto L5874;
L5873:
        X2 = scrt2__3d_2dtwo( x3794, c3140 );
L5874:
        if  ( FALSE( X2 ) )  goto L5887;
        if  ( BITAND( BITOR( _S2CINT( y3795 ), 
                             _S2CINT( c3140 ) ), 
                      3 ) )  goto L5880;
        if  ( NEQ( _S2CUINT( y3795 ), _S2CUINT( c3140 ) ) )  goto L5887;
        POPSTACKTRACE( c3859 );
L5880:
        if  ( FALSE( scrt2__3d_2dtwo( y3795, c3140 ) ) )  goto L5887;
        POPSTACKTRACE( c3859 );
L5887:
        X1 = C_POW( x3794, y3795 );
        if  ( NEQ( TSCPTAG( x3794 ), FIXNUMTAG ) )  goto L5889;
        if  ( NEQ( TSCPTAG( y3795 ), FIXNUMTAG ) )  goto L5891;
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5893;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5898;
        X2 = X1;
        goto L5894;
L5898:
        X2 = _TSCP( INEGATE( _S2CINT( X1 ) ) );
        goto L5894;
L5893:
        X2 = scrt2_abs( X1 );
L5894:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 2147483644 ) ) ), 
                      3 ) )  goto L5902;
        if  ( LTE( _S2CINT( X2 ), 
                   _S2CINT( _TSCP( 2147483644 ) ) ) )  goto L5906;
        POPSTACKTRACE( X1 );
L5902:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X2, _TSCP( 2147483644 ) ) )
            )  goto L5906;
        POPSTACKTRACE( X1 );
L5891:
        POPSTACKTRACE( X1 );
L5889:
        POPSTACKTRACE( X1 );
L5906:
        X2 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), DOUBLEFLOATTAG ) )
            )  goto L5910;
        scdebug_error( c2310, 
                       c2311, CONS( X2, EMPTYLIST ) );
L5910:
        X3 = BOOLEAN( LT( FLOAT_VALUE( X2 ), MINTSCPINTF ) );
        if  ( TRUE( X3 ) )  goto L5916;
        if  ( LTE( FLOAT_VALUE( X2 ), MAXTSCPINTF ) )  goto L5919;
L5916:
        scdebug_error( c2310, 
                       c2316, CONS( X2, EMPTYLIST ) );
L5919:
        POPSTACKTRACE( FLT_FIX( X2 ) );
}

DEFTSCP( scrt2_exact_2d_3einexact_v );
DEFCSTRING( t5920, "EXACT->INEXACT" );

TSCP  scrt2_exact_2d_3einexact( x3861 )
        TSCP  x3861;
{
        PUSHSTACKTRACE( t5920 );
        if  ( NEQ( TSCPTAG( x3861 ), FIXNUMTAG ) )  goto L5922;
        POPSTACKTRACE( FIX_FLT( x3861 ) );
L5922:
        if  ( AND( EQ( TSCPTAG( x3861 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x3861 ), DOUBLEFLOATTAG ) )
            )  goto L5925;
        POPSTACKTRACE( scdebug_error( c3866, 
                                      c2543, 
                                      CONS( x3861, EMPTYLIST ) ) );
L5925:
        POPSTACKTRACE( x3861 );
}

DEFTSCP( scrt2_inexact_2d_3eexact_v );
DEFCSTRING( t5927, "INEXACT->EXACT" );

TSCP  scrt2_inexact_2d_3eexact( x3872 )
        TSCP  x3872;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5927 );
        if  ( EQ( TSCPTAG( x3872 ), FIXNUMTAG ) )  goto L5929;
        if  ( NOT( AND( EQ( TSCPTAG( x3872 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3872 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5931;
        X1 = BOOLEAN( LT( FLOAT_VALUE( x3872 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L5938;
        if  ( LTE( FLOAT_VALUE( x3872 ), MAXTSCPINTF ) )  goto L5941;
L5938:
        scdebug_error( c2310, 
                       c2316, CONS( x3872, EMPTYLIST ) );
L5941:
        POPSTACKTRACE( FLT_FIX( x3872 ) );
L5931:
        POPSTACKTRACE( scdebug_error( c3877, 
                                      c2543, 
                                      CONS( x3872, EMPTYLIST ) ) );
L5929:
        POPSTACKTRACE( x3872 );
}

DEFTSCP( scrt2_number_2d_3estring_v );
DEFCSTRING( t5942, "NUMBER->STRING" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( sc_formatnumber, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( sc_formatnumber_v );
EXTERNTSCPP( scrt2_integer_2d_3estring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_integer_2d_3estring_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  scrt2_number_2d_3estring( n3887, f3888 )
        TSCP  n3887, f3888;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5942 );
        f3888 = CONS( f3888, EMPTYLIST );
        if  ( EQ( TSCPTAG( n3887 ), FIXNUMTAG ) )  goto L5946;
        if  ( AND( EQ( TSCPTAG( n3887 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( n3887 ), DOUBLEFLOATTAG ) )
            )  goto L5946;
        scdebug_error( c3899, 
                       c2543, CONS( n3887, EMPTYLIST ) );
L5946:
        if  ( FALSE( PAIR_CAR( f3888 ) ) )  goto L5948;
        X2 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5951;
        scrt1__24__car_2derror( X2 );
L5951:
        X1 = PAIR_CAR( X2 );
        goto L5949;
L5948:
        X1 = _TSCP( 40 );
L5949:
        SETGEN( PAIR_CAR( f3888 ), X1 );
        if  ( FALSE( scrt1_equal_3f( PAIR_CAR( f3888 ), c3905 ) )
            )  goto L5953;
        POPSTACKTRACE( sc_formatnumber( n3887, 
                                        _TSCP( 0 ), _TSCP( 0 ) ) );
L5953:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3888 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6002;
        X3 = scrt1_length( PAIR_CAR( f3888 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L5960;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L5961;
L5960:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L5961:
        if  ( FALSE( X2 ) )  goto L6002;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5970;
        scrt1__24__car_2derror( X4 );
L5970:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3935 ) ) )  goto L6002;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5977;
        scrt1__24__cdr_2derror( X4 );
L5977:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5980;
        scrt1__24__car_2derror( X5 );
L5980:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6002;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5984;
        scrt1__24__cdr_2derror( X4 );
L5984:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5987;
        scrt1__24__car_2derror( X5 );
L5987:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5991;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5995;
        goto L6002;
L5991:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L6002;
L5995:
        X2 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6005;
        scrt1__24__cdr_2derror( X2 );
L6005:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6008;
        scrt1__24__car_2derror( X3 );
L6008:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3887, _TSCP( 4 ), X1 ) );
L6002:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3888 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6057;
        X3 = scrt1_length( PAIR_CAR( f3888 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L6015;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L6016;
L6015:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L6016:
        if  ( FALSE( X2 ) )  goto L6057;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6025;
        scrt1__24__car_2derror( X4 );
L6025:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3998 ) ) )  goto L6057;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6032;
        scrt1__24__cdr_2derror( X4 );
L6032:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6035;
        scrt1__24__car_2derror( X5 );
L6035:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6057;
        X4 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6039;
        scrt1__24__cdr_2derror( X4 );
L6039:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6042;
        scrt1__24__car_2derror( X5 );
L6042:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6046;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6050;
        goto L6057;
L6046:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L6057;
L6050:
        X2 = PAIR_CAR( f3888 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6060;
        scrt1__24__cdr_2derror( X2 );
L6060:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6063;
        scrt1__24__car_2derror( X3 );
L6063:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3887, _TSCP( 8 ), X1 ) );
L6057:
        X1 = PAIR_CAR( f3888 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L6067;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6071;
        goto L6072;
L6067:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 8 ) ) ) )  goto L6072;
L6071:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3887, _TSCP( 8 ) ) );
L6072:
        X1 = PAIR_CAR( f3888 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 32 ) ) ), 
                      3 ) )  goto L6077;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6081;
        goto L6082;
L6077:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 32 ) ) ) )  goto L6081;
L6082:
        X1 = PAIR_CAR( f3888 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 40 ) ) ), 
                      3 ) )  goto L6087;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6091;
        goto L6092;
L6087:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 40 ) ) ) )  goto L6092;
L6091:
        POPSTACKTRACE( scrt6_format( c4072, 
                                     CONS( n3887, EMPTYLIST ) ) );
L6092:
        X1 = PAIR_CAR( f3888 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 64 ) ) ), 
                      3 ) )  goto L6097;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6101;
        goto L6102;
L6097:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 64 ) ) ) )  goto L6101;
L6102:
        POPSTACKTRACE( scdebug_error( c3899, 
                                      c4070, 
                                      CONS( PAIR_CAR( f3888 ), 
                                            EMPTYLIST ) ) );
L6101:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3887, _TSCP( 64 ) ) );
L6081:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3887, _TSCP( 32 ) ) );
}

DEFTSCP( scrt2_integer_2d_3estring_v );
DEFCSTRING( t6105, "SCRT2_INTEGER->STRING" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt2_l4106, XAL2( TSCP, TSCP ) );

TSCP  scrt2_l4106( q4108, r4109 )
        TSCP  q4108, r4109;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside INTEGER->STRING]" );
        X2 = scrt2_inexact_2d_3eexact( r4109 );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L6143;
        scdebug_error( c4154, 
                       c4155, CONS( X2, EMPTYLIST ) );
L6143:
        X3 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X3 ) )  goto L6149;
        if  ( AND( EQ( TSCPTAG( c4178 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c4178 ), STRINGTAG ) )
            )  goto L6151;
        scdebug_error( c4176, 
                       c4177, CONS( c4178, EMPTYLIST ) );
L6151:
        X4 = C_FIXED( STRING_LENGTH( c4178 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L6155;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L6149;
        goto L6162;
L6155:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L6162;
L6149:
        scdebug_error( c4154, 
                       c2316, CONS( X2, EMPTYLIST ) );
L6162:
        X1 = C_CHAR( STRING_CHAR( c4178, X2 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( q4108 ) ), 
                      3 ) )  goto L6165;
        if  ( EQ( _S2CUINT( _TSCP( 0 ) ), 
                  _S2CUINT( q4108 ) ) )  goto L6169;
        goto L6170;
L6165:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), q4108 ) ) )  goto L6169;
L6170:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4108 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6179;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6179;
        X3 = C_FIXED( QUOTIENT( _S2CINT( q4108 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6180;
L6179:
        X3 = scrt2_quotient( q4108, DISPLAY( 0 ) );
L6180:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4108 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6187;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6187;
        X4 = _TSCP( REMAINDER( _S2CINT( q4108 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6188;
L6187:
        X4 = scrt2_remainder( q4108, DISPLAY( 0 ) );
L6188:
        X2 = scrt2_l4106( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L6169:
        X2 = sc_cons( X1, EMPTYLIST );
        POPSTACKTRACE( X2 );
}

TSCP  scrt2_integer_2d_3estring( n4094, b4095 )
        TSCP  n4094, b4095;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6105 );
        DISPLAY( 0 ) = b4095;
        if  ( BITAND( BITOR( _S2CINT( n4094 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6108;
        if  ( LT( _S2CINT( n4094 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6112;
        goto L6113;
L6108:
        if  ( FALSE( scrt2__3c_2dtwo( n4094, _TSCP( 0 ) ) ) )  goto L6113;
L6112:
        if  ( NEQ( TSCPTAG( n4094 ), FIXNUMTAG ) )  goto L6116;
        if  ( LT( _S2CINT( n4094 ), 0 ) )  goto L6121;
        X2 = n4094;
        goto L6117;
L6121:
        X2 = _TSCP( INEGATE( _S2CINT( n4094 ) ) );
        goto L6117;
L6116:
        X2 = scrt2_abs( n4094 );
L6117:
        X1 = CONS( scrt2_integer_2d_3estring( X2, DISPLAY( 0 ) ), 
                   EMPTYLIST );
        SDVAL = scrt3_string_2dappend( CONS( c4205, X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L6113:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4094 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6129;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6129;
        X3 = C_FIXED( QUOTIENT( _S2CINT( n4094 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6130;
L6129:
        X3 = scrt2_quotient( n4094, DISPLAY( 0 ) );
L6130:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4094 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6137;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6137;
        X4 = _TSCP( REMAINDER( _S2CINT( n4094 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6138;
L6137:
        X4 = scrt2_remainder( n4094, DISPLAY( 0 ) );
L6138:
        X2 = scrt2_l4106( X3, X4 );
        X1 = scrt1_reverse( X2 );
        SDVAL = scrt3_list_2d_3estring( X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt2_string_2d_3enumber_v );
DEFCSTRING( t6190, "STRING->NUMBER" );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2_try_2dto_2dread, XAL1( TSCP ) );
EXTERNTSCP( scrt2_try_2dto_2dread_v );

TSCP  scrt2_string_2d_3enumber( s4221, r4222 )
        TSCP  s4221, r4222;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6190 );
        X1 = scrt3_string_2d_3elist( s4221 );
        if  ( FALSE( r4222 ) )  goto L6192;
        if  ( EQ( TSCPTAG( r4222 ), PAIRTAG ) )  goto L6195;
        scrt1__24__car_2derror( r4222 );
L6195:
        X3 = PAIR_CAR( r4222 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6198;
        X2 = c4276;
        goto L6193;
L6198:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6200;
        X2 = c4275;
        goto L6193;
L6200:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6202;
        X2 = sc_emptystring;
        goto L6193;
L6202:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6204;
        X2 = c4274;
        goto L6193;
L6204:
        X2 = scdebug_error( c4268, 
                            c4269, 
                            CONS( PAIR_CAR( r4222 ), EMPTYLIST ) );
        goto L6193;
L6192:
        X2 = sc_emptystring;
L6193:
        X3 = sc_emptystring;
        X4 = X3;
        X5 = X1;
L6210:
        if  ( FALSE( X5 ) )  goto L6211;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6214;
        scrt1__24__car_2derror( X5 );
L6214:
        X6 = PAIR_CAR( X5 );
        if  ( FALSE( scrt1_memv( X6, c4236 ) ) )  goto L6217;
        X7 = sc_make_2dstring( _TSCP( 4 ), 
                               CONS( PAIR_CAR( X5 ), EMPTYLIST ) );
        X5 = PAIR_CDR( X5 );
        X4 = X7;
        GOBACK( L6210 );
L6217:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 8978 ) ) ) )  goto L6221;
        POPSTACKTRACE( scrt2_try_2dto_2dread( s4221 ) );
L6221:
        X8 = CONS( scrt3_list_2d_3estring( X5 ), EMPTYLIST );
        X8 = CONS( X2, X8 );
        X7 = scrt3_string_2dappend( CONS( X4, X8 ) );
        POPSTACKTRACE( scrt2_try_2dto_2dread( X7 ) );
L6211:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_try_2dto_2dread_v );
DEFCSTRING( t6223, "SCRT2_TRY-TO-READ" );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );

TSCP  scrt2_l4287( x4288, c6228 )
        TSCP  x4288, c6228;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt2_l4287 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c6228, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c6228, 1 );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 2 );
        X4 = DISPLAY( 1 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt5_open_2dinput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dstring_v );
EXTERNTSCPP( scrt6_read, XAL1( TSCP ) );
EXTERNTSCP( scrt6_read_v );
EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );

TSCP  scrt2_l4283( r4284, c6225 )
        TSCP  r4284, c6225;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "scrt2_l4283 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c6225, 0 );
        DISPLAY( 1 ) = r4284;
        DISPLAY( 2 ) = scdebug__2aerror_2dhandler_2a_v;
        scdebug__2aerror_2dhandler_2a_v = MAKEPROCEDURE( 0, 
                                                         1, 
                                                         scrt2_l4287, 
                                                         MAKECLOSURE( EMPTYLIST, 
                                                                      2, 
                                                                      DISPLAY( 2 ), 
                                                                      DISPLAY( 1 ) ) );
        X5 = scrt5_open_2dinput_2dstring( DISPLAY( 0 ) );
        X3 = scrt6_read( CONS( X5, EMPTYLIST ) );
        X4 = scrt6_read( CONS( X5, EMPTYLIST ) );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 2 );
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6236;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L6236;
        X2 = FALSEVALUE;
        goto L6241;
L6236:
        if  ( FALSE( scrt6_eof_2dobject_3f( X4 ) ) )  goto L6240;
        X2 = X3;
        goto L6241;
L6240:
        X2 = FALSEVALUE;
L6241:
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  scrt2_try_2dto_2dread( s4282 )
        TSCP  s4282;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6223 );
        DISPLAY( 0 ) = s4282;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt2_l4283, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt5__init();
        scrt3__init();
        scrt6__init();
        scrt1__init();
        scdebug__init();
        MAXDISPLAY( 3 );
}

void  scrt2__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt2 SCHEME->C COMPILER 15mar93jfb)" );
        INITIALIZEVAR( t4810, 
                       ADR( scrt2_symbol_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4812, 
                       ADR( scrt2_symbol_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4817, 
                       ADR( scrt2_top_2dlevel_2dvalue_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_top_2dlevel_2dvalue, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4821, 
                       ADR( scrt2_2dvalue_21_c9d2a496_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_2dvalue_21_c9d2a496, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4825, 
                       ADR( scrt2_getprop_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_getprop, EMPTYLIST ) );
        INITIALIZEVAR( t4849, 
                       ADR( scrt2_getprop_2dall_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_getprop_2dall, EMPTYLIST ) );
        INITIALIZEVAR( t4853, 
                       ADR( scrt2_putprop_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, scrt2_putprop, EMPTYLIST ) );
        INITIALIZEVAR( t4902, 
                       ADR( scrt2_fixed_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_fixed_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4904, 
                       ADR( scrt2_float_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_float_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4906, 
                       ADR( scrt2_float_2d_3efixed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_float_2d_3efixed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4919, 
                       ADR( scrt2_fixed_2d_3efloat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_fixed_2d_3efloat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4924, 
                       ADR( scrt2_number_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_number_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4928, 
                       ADR( scrt2_complex_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_complex_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4932, 
                       ADR( scrt2_real_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_real_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4936, 
                       ADR( scrt2_rational_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_rational_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4940, 
                       ADR( scrt2_integer_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_integer_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4949, 
                       ADR( scrt2_zero_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_zero_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4953, 
                       ADR( scrt2_positive_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_positive_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4957, 
                       ADR( scrt2_negative_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_negative_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4961, 
                       ADR( scrt2_odd_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_odd_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4986, 
                       ADR( scrt2_even_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_even_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5009, 
                       ADR( scrt2_exact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5016, 
                       ADR( scrt2_inexact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5023, 
                       ADR( scrt2__3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5042, 
                       ADR( scrt2__3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3d, EMPTYLIST ) );
        INITIALIZEVAR( t5067, 
                       ADR( scrt2__3c_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5086, 
                       ADR( scrt2__3c_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c, EMPTYLIST ) );
        INITIALIZEVAR( t5111, 
                       ADR( scrt2__3e_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5130, 
                       ADR( scrt2__3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e, EMPTYLIST ) );
        INITIALIZEVAR( t5155, 
                       ADR( scrt2__3c_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5174, 
                       ADR( scrt2__3c_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5199, 
                       ADR( scrt2__3e_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5218, 
                       ADR( scrt2__3e_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5243, 
                       ADR( scrt2_max_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_max_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5251, 
                       ADR( scrt2_max_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_max, EMPTYLIST ) );
        INITIALIZEVAR( t5272, 
                       ADR( scrt2_min_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_min_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5280, 
                       ADR( scrt2_min_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_min, EMPTYLIST ) );
        INITIALIZEVAR( t5301, 
                       ADR( scrt2__2b_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2b_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5320, 
                       ADR( scrt2__2b_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2b, EMPTYLIST ) );
        INITIALIZEVAR( t5333, 
                       ADR( scrt2__2a_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2a_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5352, 
                       ADR( scrt2__2a_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2a, EMPTYLIST ) );
        INITIALIZEVAR( t5365, 
                       ADR( scrt2__2d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5384, 
                       ADR( scrt2__2d_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2d, EMPTYLIST ) );
        INITIALIZEVAR( t5409, 
                       ADR( scrt2__2f_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2f_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5437, 
                       ADR( scrt2__2f_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2f, EMPTYLIST ) );
        INITIALIZEVAR( t5491, 
                       ADR( scrt2_abs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_abs, EMPTYLIST ) );
        INITIALIZEVAR( t5503, 
                       ADR( scrt2_quotient_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_quotient, EMPTYLIST ) );
        INITIALIZEVAR( t5524, 
                       ADR( scrt2_remainder_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_remainder, EMPTYLIST ) );
        INITIALIZEVAR( t5547, 
                       ADR( scrt2_modulo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_modulo, EMPTYLIST ) );
        INITIALIZEVAR( t5595, 
                       ADR( scrt2_gcd_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_gcd, EMPTYLIST ) );
        INITIALIZEVAR( t5683, 
                       ADR( scrt2_lcm_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_lcm, EMPTYLIST ) );
        INITIALIZEVAR( t5795, 
                       ADR( scrt2_floor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_floor, EMPTYLIST ) );
        INITIALIZEVAR( t5799, 
                       ADR( scrt2_ceiling_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_ceiling, EMPTYLIST ) );
        INITIALIZEVAR( t5803, 
                       ADR( scrt2_truncate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_truncate, EMPTYLIST ) );
        INITIALIZEVAR( t5814, 
                       ADR( scrt2_round_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_round, EMPTYLIST ) );
        INITIALIZEVAR( t5820, 
                       ADR( scrt2_exp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exp, EMPTYLIST ) );
        INITIALIZEVAR( t5822, 
                       ADR( scrt2_log_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_log, EMPTYLIST ) );
        INITIALIZEVAR( t5824, 
                       ADR( scrt2_sin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sin, EMPTYLIST ) );
        INITIALIZEVAR( t5826, 
                       ADR( scrt2_cos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_cos, EMPTYLIST ) );
        INITIALIZEVAR( t5828, 
                       ADR( scrt2_tan_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_tan, EMPTYLIST ) );
        INITIALIZEVAR( t5830, 
                       ADR( scrt2_asin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_asin, EMPTYLIST ) );
        INITIALIZEVAR( t5832, 
                       ADR( scrt2_acos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_acos, EMPTYLIST ) );
        INITIALIZEVAR( t5834, 
                       ADR( scrt2_atan_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_atan, EMPTYLIST ) );
        INITIALIZEVAR( t5841, 
                       ADR( scrt2_sqrt_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sqrt, EMPTYLIST ) );
        INITIALIZEVAR( t5871, 
                       ADR( scrt2_expt_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_expt, EMPTYLIST ) );
        INITIALIZEVAR( t5920, 
                       ADR( scrt2_exact_2d_3einexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_exact_2d_3einexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5927, 
                       ADR( scrt2_inexact_2d_3eexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_2d_3eexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5942, 
                       ADR( scrt2_number_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_number_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6105, 
                       ADR( scrt2_integer_2d_3estring_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_integer_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6190, 
                       ADR( scrt2_string_2d_3enumber_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_string_2d_3enumber, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6223, 
                       ADR( scrt2_try_2dto_2dread_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_try_2dto_2dread, EMPTYLIST ) );
        return;
}
