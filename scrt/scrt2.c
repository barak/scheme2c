
/* SCHEME->C */

#include <objects.h>

DEFCSTRING( t4788, "#b" );
DEFSTATICTSCP( c4275 );
DEFCSTRING( t4789, "#o" );
DEFSTATICTSCP( c4274 );
DEFCSTRING( t4790, "#x" );
DEFSTATICTSCP( c4273 );
DEFCSTRING( t4791, "Argument is not a RADIX: ~s" );
DEFSTATICTSCP( c4268 );
DEFSTATICTSCP( c4267 );
DEFSTATICTSCP( c4235 );
DEFCSTRING( t4792, "-" );
DEFSTATICTSCP( c4204 );
DEFCSTRING( t4793, "0123456789abcdef" );
DEFSTATICTSCP( c4177 );
DEFCSTRING( t4794, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c4176 );
DEFSTATICTSCP( c4175 );
DEFCSTRING( t4795, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c4154 );
DEFSTATICTSCP( c4153 );
DEFCSTRING( t4796, "~s" );
DEFSTATICTSCP( c4071 );
DEFCSTRING( t4797, "Argument is not a RADIX or FORMAT DESCRIPTOR: ~s" );
DEFSTATICTSCP( c4069 );
DEFSTATICTSCP( c3997 );
DEFSTATICTSCP( c3934 );
DEFSTATICTSCP( c3904 );
DEFSTATICTSCP( t4798 );
DEFSTATICTSCP( c3898 );
DEFSTATICTSCP( c3876 );
DEFSTATICTSCP( c3865 );
DEFSTATICTSCP( c3858 );
DEFCSTRING( t4799, "Argument must be a non-negative NUMBER: ~s" );
DEFSTATICTSCP( c3769 );
DEFSTATICTSCP( c3768 );
DEFSTATICTSCP( c3738 );
DEFCSTRING( t4800, "Divisor is equal to 0: ~s" );
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
DEFCSTRING( t4801, "Argument not a NUMBER: ~s" );
DEFSTATICTSCP( c2582 );
DEFCSTRING( t4802, "Argument(s) not a NUMBER: ~s ~s" );
DEFSTATICTSCP( c2579 );
DEFSTATICTSCP( c2578 );
DEFSTATICTSCP( c2560 );
DEFCSTRING( t4803, "Argument is not a NUMBER: ~s" );
DEFSTATICTSCP( c2543 );
DEFSTATICTSCP( c2542 );
DEFCSTRING( t4804, "Argument is not an FIXED: ~s" );
DEFSTATICTSCP( c2324 );
DEFSTATICTSCP( c2323 );
DEFCSTRING( t4805, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2316 );
DEFCSTRING( t4806, "Argument is not a FLOAT: ~s" );
DEFSTATICTSCP( c2311 );
DEFSTATICTSCP( c2310 );
DEFSTATICTSCP( c2273 );
DEFCSTRING( t4807, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2253 );
DEFSTATICTSCP( c2252 );
DEFSTATICTSCP( c2209 );
DEFSTATICTSCP( c2202 );
DEFSTATICTSCP( c2158 );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2146 );
DEFCSTRING( t4808, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2141 );
DEFSTATICTSCP( c2140 );

static void  init_constants()
{
        c4275 = CSTRING_TSCP( t4788 );
        CONSTANTEXP( ADR( c4275 ) );
        c4274 = CSTRING_TSCP( t4789 );
        CONSTANTEXP( ADR( c4274 ) );
        c4273 = CSTRING_TSCP( t4790 );
        CONSTANTEXP( ADR( c4273 ) );
        c4268 = CSTRING_TSCP( t4791 );
        CONSTANTEXP( ADR( c4268 ) );
        c4267 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING->NUMBER" ) );
        CONSTANTEXP( ADR( c4267 ) );
        c4235 = EMPTYLIST;
        c4235 = CONS( _TSCP( 11026 ), c4235 );
        c4235 = CONS( _TSCP( 11538 ), c4235 );
        CONSTANTEXP( ADR( c4235 ) );
        c4204 = CSTRING_TSCP( t4792 );
        CONSTANTEXP( ADR( c4204 ) );
        c4177 = CSTRING_TSCP( t4793 );
        CONSTANTEXP( ADR( c4177 ) );
        c4176 = CSTRING_TSCP( t4794 );
        CONSTANTEXP( ADR( c4176 ) );
        c4175 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c4175 ) );
        c4154 = CSTRING_TSCP( t4795 );
        CONSTANTEXP( ADR( c4154 ) );
        c4153 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c4153 ) );
        c4071 = CSTRING_TSCP( t4796 );
        CONSTANTEXP( ADR( c4071 ) );
        c4069 = CSTRING_TSCP( t4797 );
        CONSTANTEXP( ADR( c4069 ) );
        c3997 = STRINGTOSYMBOL( CSTRING_TSCP( "SCI" ) );
        CONSTANTEXP( ADR( c3997 ) );
        c3934 = STRINGTOSYMBOL( CSTRING_TSCP( "FIX" ) );
        CONSTANTEXP( ADR( c3934 ) );
        c3904 = EMPTYLIST;
        t4798 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c3904 = CONS( t4798, c3904 );
        CONSTANTEXP( ADR( c3904 ) );
        c3898 = STRINGTOSYMBOL( CSTRING_TSCP( "NUMBER->STRING" ) );
        CONSTANTEXP( ADR( c3898 ) );
        c3876 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT->EXACT" ) );
        CONSTANTEXP( ADR( c3876 ) );
        c3865 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT->INEXACT" ) );
        CONSTANTEXP( ADR( c3865 ) );
        c3858 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c3858 ) );
        c3769 = CSTRING_TSCP( t4799 );
        CONSTANTEXP( ADR( c3769 ) );
        c3768 = STRINGTOSYMBOL( CSTRING_TSCP( "SQRT" ) );
        CONSTANTEXP( ADR( c3768 ) );
        c3738 = DOUBLE_TSCP( 0.5 );
        CONSTANTEXP( ADR( c3738 ) );
        c3163 = CSTRING_TSCP( t4800 );
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
        c2582 = CSTRING_TSCP( t4801 );
        CONSTANTEXP( ADR( c2582 ) );
        c2579 = CSTRING_TSCP( t4802 );
        CONSTANTEXP( ADR( c2579 ) );
        c2578 = STRINGTOSYMBOL( CSTRING_TSCP( "=" ) );
        CONSTANTEXP( ADR( c2578 ) );
        c2560 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT?" ) );
        CONSTANTEXP( ADR( c2560 ) );
        c2543 = CSTRING_TSCP( t4803 );
        CONSTANTEXP( ADR( c2543 ) );
        c2542 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT?" ) );
        CONSTANTEXP( ADR( c2542 ) );
        c2324 = CSTRING_TSCP( t4804 );
        CONSTANTEXP( ADR( c2324 ) );
        c2323 = STRINGTOSYMBOL( CSTRING_TSCP( "FIXED->FLOAT" ) );
        CONSTANTEXP( ADR( c2323 ) );
        c2316 = CSTRING_TSCP( t4805 );
        CONSTANTEXP( ADR( c2316 ) );
        c2311 = CSTRING_TSCP( t4806 );
        CONSTANTEXP( ADR( c2311 ) );
        c2310 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT->FIXED" ) );
        CONSTANTEXP( ADR( c2310 ) );
        c2273 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2273 ) );
        c2253 = CSTRING_TSCP( t4807 );
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
        c2141 = CSTRING_TSCP( t4808 );
        CONSTANTEXP( ADR( c2141 ) );
        c2140 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2140 ) );
}

DEFTSCP( scrt2_symbol_3f_v );
DEFCSTRING( t4809, "SYMBOL?" );

TSCP  scrt2_symbol_3f( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t4809 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2131 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2131 ), 
                                         SYMBOLTAG ) ) ) );
}

DEFTSCP( scrt2_symbol_2d_3estring_v );
DEFCSTRING( t4811, "SYMBOL->STRING" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt2_symbol_2d_3estring( x2135 )
        TSCP  x2135;
{
        PUSHSTACKTRACE( t4811 );
        if  ( AND( EQ( TSCPTAG( x2135 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2135 ), SYMBOLTAG ) )
            )  goto L4814;
        scdebug_error( c2140, 
                       c2141, CONS( x2135, EMPTYLIST ) );
L4814:
        POPSTACKTRACE( SYMBOL_NAME( x2135 ) );
}

DEFTSCP( scrt2_top_2dlevel_2dvalue_v );
DEFCSTRING( t4816, "TOP-LEVEL-VALUE" );

TSCP  scrt2_top_2dlevel_2dvalue( s2143 )
        TSCP  s2143;
{
        PUSHSTACKTRACE( t4816 );
        if  ( AND( EQ( TSCPTAG( s2143 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2143 ), SYMBOLTAG ) )
            )  goto L4818;
        scdebug_error( c2146, 
                       c2141, CONS( s2143, EMPTYLIST ) );
L4818:
        POPSTACKTRACE( SYMBOL_VALUE( s2143 ) );
}

DEFTSCP( scrt2_2dvalue_21_c9d2a496_v );
DEFCSTRING( t4820, "SET-TOP-LEVEL-VALUE!" );

TSCP  scrt2_2dvalue_21_c9d2a496( s2148, v2149 )
        TSCP  s2148, v2149;
{
        PUSHSTACKTRACE( t4820 );
        if  ( AND( EQ( TSCPTAG( s2148 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2148 ), SYMBOLTAG ) )
            )  goto L4822;
        scdebug_error( c2152, 
                       c2141, CONS( s2148, EMPTYLIST ) );
L4822:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( s2148 ), v2149 ) );
}

DEFTSCP( scrt2_getprop_v );
DEFCSTRING( t4824, "GETPROP" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  scrt2_getprop( s2154, k2155 )
        TSCP  s2154, k2155;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4824 );
        if  ( AND( EQ( TSCPTAG( s2154 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2154 ), SYMBOLTAG ) )
            )  goto L4826;
        scdebug_error( c2158, 
                       c2141, CONS( s2154, EMPTYLIST ) );
L4826:
        X1 = SYMBOL_PROPERTYLIST( s2154 );
        X2 = X1;
L4830:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4831;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4836;
        scrt1__24__car_2derror( X2 );
L4836:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( k2155 ) ) )  goto L4833;
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4840;
        scrt1__24__car_2derror( X3 );
L4840:
        POPSTACKTRACE( PAIR_CAR( X3 ) );
L4833:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4843;
        scrt1__24__cdr_2derror( X2 );
L4843:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4846;
        scrt1__24__cdr_2derror( X3 );
L4846:
        X2 = PAIR_CDR( X3 );
        GOBACK( L4830 );
L4831:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_getprop_2dall_v );
DEFCSTRING( t4848, "GETPROP-ALL" );

TSCP  scrt2_getprop_2dall( s2199 )
        TSCP  s2199;
{
        PUSHSTACKTRACE( t4848 );
        if  ( AND( EQ( TSCPTAG( s2199 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2199 ), SYMBOLTAG ) )
            )  goto L4850;
        scdebug_error( c2202, 
                       c2141, CONS( s2199, EMPTYLIST ) );
L4850:
        POPSTACKTRACE( SYMBOL_PROPERTYLIST( s2199 ) );
}

DEFTSCP( scrt2_putprop_v );
DEFCSTRING( t4852, "PUTPROP" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt2_putprop( s2204, k2205, v2206 )
        TSCP  s2204, k2205, v2206;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4852 );
        if  ( AND( EQ( TSCPTAG( s2204 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2204 ), SYMBOLTAG ) )
            )  goto L4854;
        scdebug_error( c2209, 
                       c2141, CONS( s2204, EMPTYLIST ) );
L4854:
        X1 = SYMBOL_PROPERTYLIST( s2204 );
        X2 = X1;
        X3 = EMPTYLIST;
L4858:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4859;
        if  ( EQ( _S2CUINT( v2206 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L4871;
        if  ( FALSE( X3 ) )  goto L4863;
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4867;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4867:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4871;
L4863:
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4871;
L4859:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4873;
        scrt1__24__car_2derror( X2 );
L4873:
        X4 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( k2205 ) ) )  goto L4870;
        if  ( NEQ( _S2CUINT( v2206 ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L4875;
        if  ( FALSE( X3 ) )  goto L4877;
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4881;
        scrt1__24__cdr_2derror( X5 );
L4881:
        X4 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4884;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4884:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4871;
L4877:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4888;
        scrt1__24__cdr_2derror( X5 );
L4888:
        X4 = PAIR_CDR( X5 );
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4871;
L4875:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4892;
        scdebug_error( c2252, 
                       c2253, CONS( X4, EMPTYLIST ) );
L4892:
        SETGEN( PAIR_CAR( X4 ), v2206 );
        goto L4871;
L4870:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4895;
        scrt1__24__cdr_2derror( X2 );
L4895:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4898;
        scrt1__24__cdr_2derror( X5 );
L4898:
        X4 = PAIR_CDR( X5 );
        X3 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L4858 );
L4871:
        POPSTACKTRACE( v2206 );
}

DEFTSCP( scrt2_fixed_3f_v );
DEFCSTRING( t4901, "FIXED?" );

TSCP  scrt2_fixed_3f( x2297 )
        TSCP  x2297;
{
        PUSHSTACKTRACE( t4901 );
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2297 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_float_3f_v );
DEFCSTRING( t4903, "FLOAT?" );

TSCP  scrt2_float_3f( x2301 )
        TSCP  x2301;
{
        PUSHSTACKTRACE( t4903 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2301 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2301 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2_float_2d_3efixed_v );
DEFCSTRING( t4905, "FLOAT->FIXED" );

TSCP  scrt2_float_2d_3efixed( x2305 )
        TSCP  x2305;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4905 );
        if  ( AND( EQ( TSCPTAG( x2305 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2305 ), DOUBLEFLOATTAG ) )
            )  goto L4908;
        scdebug_error( c2310, 
                       c2311, CONS( x2305, EMPTYLIST ) );
L4908:
        X1 = BOOLEAN( LT( FLOAT_VALUE( x2305 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L4914;
        if  ( LTE( FLOAT_VALUE( x2305 ), MAXTSCPINTF ) )  goto L4917;
L4914:
        scdebug_error( c2310, 
                       c2316, CONS( x2305, EMPTYLIST ) );
L4917:
        POPSTACKTRACE( FLT_FIX( x2305 ) );
}

DEFTSCP( scrt2_fixed_2d_3efloat_v );
DEFCSTRING( t4918, "FIXED->FLOAT" );

TSCP  scrt2_fixed_2d_3efloat( x2318 )
        TSCP  x2318;
{
        PUSHSTACKTRACE( t4918 );
        if  ( EQ( TSCPTAG( x2318 ), FIXNUMTAG ) )  goto L4921;
        scdebug_error( c2323, 
                       c2324, CONS( x2318, EMPTYLIST ) );
L4921:
        POPSTACKTRACE( FIX_FLT( x2318 ) );
}

DEFTSCP( scrt2_number_3f_v );
DEFCSTRING( t4923, "NUMBER?" );

TSCP  scrt2_number_3f( x2326 )
        TSCP  x2326;
{
        PUSHSTACKTRACE( t4923 );
        if  ( EQ( TSCPTAG( x2326 ), FIXNUMTAG ) )  goto L4925;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2326 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2326 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4925:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_complex_3f_v );
DEFCSTRING( t4927, "COMPLEX?" );

TSCP  scrt2_complex_3f( x2336 )
        TSCP  x2336;
{
        PUSHSTACKTRACE( t4927 );
        if  ( EQ( TSCPTAG( x2336 ), FIXNUMTAG ) )  goto L4929;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2336 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2336 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4929:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_real_3f_v );
DEFCSTRING( t4931, "REAL?" );

TSCP  scrt2_real_3f( x2346 )
        TSCP  x2346;
{
        PUSHSTACKTRACE( t4931 );
        if  ( EQ( TSCPTAG( x2346 ), FIXNUMTAG ) )  goto L4933;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2346 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2346 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4933:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_rational_3f_v );
DEFCSTRING( t4935, "RATIONAL?" );

TSCP  scrt2_rational_3f( x2356 )
        TSCP  x2356;
{
        PUSHSTACKTRACE( t4935 );
        if  ( EQ( TSCPTAG( x2356 ), FIXNUMTAG ) )  goto L4937;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2356 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2356 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4937:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_integer_3f_v );
DEFCSTRING( t4939, "INTEGER?" );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  scrt2_integer_3f( x2370 )
        TSCP  x2370;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4939 );
        if  ( EQ( TSCPTAG( x2370 ), FIXNUMTAG ) )  goto L4941;
        if  ( NOT( AND( EQ( TSCPTAG( x2370 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2370 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4943;
        X1 = scrt2_round( x2370 );
        if  ( BITAND( BITOR( _S2CINT( x2370 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L4946;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2370 ), 
                                    _S2CUINT( X1 ) ) ) );
L4946:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2370, X1 ) );
L4943:
        POPSTACKTRACE( FALSEVALUE );
L4941:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_zero_3f_v );
DEFCSTRING( t4948, "ZERO?" );

TSCP  scrt2_zero_3f( x2395 )
        TSCP  x2395;
{
        PUSHSTACKTRACE( t4948 );
        if  ( BITAND( BITOR( _S2CINT( x2395 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4950;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2395 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L4950:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2395, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_positive_3f_v );
DEFCSTRING( t4952, "POSITIVE?" );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );

TSCP  scrt2_positive_3f( x2406 )
        TSCP  x2406;
{
        PUSHSTACKTRACE( t4952 );
        if  ( BITAND( BITOR( _S2CINT( x2406 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4954;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2406 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4954:
        POPSTACKTRACE( scrt2__3e_2dtwo( x2406, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_negative_3f_v );
DEFCSTRING( t4956, "NEGATIVE?" );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  scrt2_negative_3f( x2414 )
        TSCP  x2414;
{
        PUSHSTACKTRACE( t4956 );
        if  ( BITAND( BITOR( _S2CINT( x2414 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4958;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2414 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4958:
        POPSTACKTRACE( scrt2__3c_2dtwo( x2414, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_odd_3f_v );
DEFCSTRING( t4960, "ODD?" );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );

TSCP  scrt2_odd_3f( x2422 )
        TSCP  x2422;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4960 );
        if  ( NEQ( TSCPTAG( x2422 ), FIXNUMTAG ) )  goto L4962;
        X1 = TRUEVALUE;
        goto L4965;
L4962:
        if  ( NOT( AND( EQ( TSCPTAG( x2422 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2422 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4964;
        X2 = scrt2_round( x2422 );
        if  ( BITAND( BITOR( _S2CINT( x2422 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4967;
        X1 = BOOLEAN( EQ( _S2CUINT( x2422 ), 
                          _S2CUINT( X2 ) ) );
        goto L4965;
L4967:
        X1 = scrt2__3d_2dtwo( x2422, X2 );
        goto L4965;
L4964:
        X1 = FALSEVALUE;
L4965:
        if  ( FALSE( X1 ) )  goto L4970;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2422 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L4978;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4978;
        X2 = _TSCP( REMAINDER( _S2CINT( x2422 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L4979;
L4978:
        X2 = scrt2_remainder( x2422, _TSCP( 8 ) );
L4979:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4981;
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CUINT( X2 ), 
                                     _S2CUINT( _TSCP( 0 ) ) ) ) );
L4981:
        if  ( TRUE( scrt2_zero_3f( X2 ) ) )  goto L4983;
        POPSTACKTRACE( TRUEVALUE );
L4983:
        POPSTACKTRACE( FALSEVALUE );
L4970:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_even_3f_v );
DEFCSTRING( t4985, "EVEN?" );

TSCP  scrt2_even_3f( x2476 )
        TSCP  x2476;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4985 );
        if  ( NEQ( TSCPTAG( x2476 ), FIXNUMTAG ) )  goto L4987;
        X1 = TRUEVALUE;
        goto L4990;
L4987:
        if  ( NOT( AND( EQ( TSCPTAG( x2476 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2476 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4989;
        X2 = scrt2_round( x2476 );
        if  ( BITAND( BITOR( _S2CINT( x2476 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4992;
        X1 = BOOLEAN( EQ( _S2CUINT( x2476 ), 
                          _S2CUINT( X2 ) ) );
        goto L4990;
L4992:
        X1 = scrt2__3d_2dtwo( x2476, X2 );
        goto L4990;
L4989:
        X1 = FALSEVALUE;
L4990:
        if  ( FALSE( X1 ) )  goto L4995;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2476 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L5003;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5003;
        X2 = _TSCP( REMAINDER( _S2CINT( x2476 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L5004;
L5003:
        X2 = scrt2_remainder( x2476, _TSCP( 8 ) );
L5004:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L5006;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L5006:
        POPSTACKTRACE( scrt2_zero_3f( X2 ) );
L4995:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_exact_3f_v );
DEFCSTRING( t5008, "EXACT?" );

TSCP  scrt2_exact_3f( x2529 )
        TSCP  x2529;
{
        PUSHSTACKTRACE( t5008 );
        if  ( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) )  goto L5013;
        if  ( AND( EQ( TSCPTAG( x2529 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2529 ), DOUBLEFLOATTAG ) )
            )  goto L5013;
        scdebug_error( c2542, 
                       c2543, CONS( x2529, EMPTYLIST ) );
L5013:
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_inexact_3f_v );
DEFCSTRING( t5015, "INEXACT?" );

TSCP  scrt2_inexact_3f( x2547 )
        TSCP  x2547;
{
        PUSHSTACKTRACE( t5015 );
        if  ( EQ( TSCPTAG( x2547 ), FIXNUMTAG ) )  goto L5020;
        if  ( AND( EQ( TSCPTAG( x2547 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2547 ), DOUBLEFLOATTAG ) )
            )  goto L5020;
        scdebug_error( c2560, 
                       c2543, CONS( x2547, EMPTYLIST ) );
L5020:
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2547 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2547 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2__3d_2dtwo_v );
DEFCSTRING( t5022, "SCRT2_=-TWO" );

TSCP  scrt2__3d_2dtwo( x2564, y2565 )
        TSCP  x2564, y2565;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5022 );
        if  ( NEQ( TSCPTAG( x2564 ), FIXNUMTAG ) )  goto L5024;
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5026;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( x2564 ), 
                                    _S2CINT( y2565 ) ) ) );
L5026:
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5028;
        POPSTACKTRACE( BOOLEAN( EQ( FIX_FLTV( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5028:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( y2565, EMPTYLIST ) ) );
L5024:
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5030;
        if  ( NOT( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2564 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5032;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FIX_FLTV( y2565 ) ) ) );
L5032:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( x2564, EMPTYLIST ) ) );
L5030:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2564 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5040;
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5040;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5040:
        X1 = CONS( y2565, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2579, 
                                      CONS( x2564, X1 ) ) );
}

DEFTSCP( scrt2__3d_v );
DEFCSTRING( t5041, "=" );

TSCP  scrt2__3d( x2588, y2589, z2590 )
        TSCP  x2588, y2589, z2590;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5041 );
        if  ( BITAND( BITOR( _S2CINT( x2588 ), 
                             _S2CINT( y2589 ) ), 
                      3 ) )  goto L5044;
        X1 = BOOLEAN( EQ( _S2CUINT( x2588 ), 
                          _S2CUINT( y2589 ) ) );
        goto L5045;
L5044:
        X1 = scrt2__3d_2dtwo( x2588, y2589 );
L5045:
        if  ( FALSE( X1 ) )  goto L5047;
        X2 = y2589;
        X3 = z2590;
L5049:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5050;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5053;
        scrt1__24__car_2derror( X3 );
L5053:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5057;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L5061;
        POPSTACKTRACE( FALSEVALUE );
L5057:
        if  ( TRUE( scrt2__3d_2dtwo( X2, X4 ) ) )  goto L5061;
        POPSTACKTRACE( FALSEVALUE );
L5050:
        POPSTACKTRACE( TRUEVALUE );
L5061:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5049 );
L5047:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_2dtwo_v );
DEFCSTRING( t5066, "SCRT2_<-TWO" );

TSCP  scrt2__3c_2dtwo( x2636, y2637 )
        TSCP  x2636, y2637;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5066 );
        if  ( NEQ( TSCPTAG( x2636 ), FIXNUMTAG ) )  goto L5068;
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5070;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2636 ), 
                                    _S2CINT( y2637 ) ) ) );
L5070:
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5072;
        POPSTACKTRACE( BOOLEAN( LT( FIX_FLTV( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5072:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( y2637, EMPTYLIST ) ) );
L5068:
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5074;
        if  ( NOT( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2636 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5076;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FIX_FLTV( y2637 ) ) ) );
L5076:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( x2636, EMPTYLIST ) ) );
L5074:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2636 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5084;
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5084;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5084:
        X1 = CONS( y2637, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2579, 
                                      CONS( x2636, X1 ) ) );
}

DEFTSCP( scrt2__3c_v );
DEFCSTRING( t5085, "<" );

TSCP  scrt2__3c( x2658, y2659, z2660 )
        TSCP  x2658, y2659, z2660;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5085 );
        if  ( BITAND( BITOR( _S2CINT( x2658 ), 
                             _S2CINT( y2659 ) ), 
                      3 ) )  goto L5088;
        X1 = BOOLEAN( LT( _S2CINT( x2658 ), 
                          _S2CINT( y2659 ) ) );
        goto L5089;
L5088:
        X1 = scrt2__3c_2dtwo( x2658, y2659 );
L5089:
        if  ( FALSE( X1 ) )  goto L5091;
        X2 = y2659;
        X3 = z2660;
L5093:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5094;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5097;
        scrt1__24__car_2derror( X3 );
L5097:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5101;
        if  ( LT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5105;
        POPSTACKTRACE( FALSEVALUE );
L5101:
        if  ( TRUE( scrt2__3c_2dtwo( X2, X4 ) ) )  goto L5105;
        POPSTACKTRACE( FALSEVALUE );
L5094:
        POPSTACKTRACE( TRUEVALUE );
L5105:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5093 );
L5091:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_2dtwo_v );
DEFCSTRING( t5110, "SCRT2_>-TWO" );

TSCP  scrt2__3e_2dtwo( x2700, y2701 )
        TSCP  x2700, y2701;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5110 );
        if  ( NEQ( TSCPTAG( x2700 ), FIXNUMTAG ) )  goto L5112;
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5114;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2700 ), 
                                    _S2CINT( y2701 ) ) ) );
L5114:
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5116;
        POPSTACKTRACE( BOOLEAN( GT( FIX_FLTV( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5116:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( y2701, EMPTYLIST ) ) );
L5112:
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5118;
        if  ( NOT( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2700 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5120;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FIX_FLTV( y2701 ) ) ) );
L5120:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( x2700, EMPTYLIST ) ) );
L5118:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2700 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5128;
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5128;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5128:
        X1 = CONS( y2701, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2579, 
                                      CONS( x2700, X1 ) ) );
}

DEFTSCP( scrt2__3e_v );
DEFCSTRING( t5129, ">" );

TSCP  scrt2__3e( x2722, y2723, z2724 )
        TSCP  x2722, y2723, z2724;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5129 );
        if  ( BITAND( BITOR( _S2CINT( x2722 ), 
                             _S2CINT( y2723 ) ), 
                      3 ) )  goto L5132;
        X1 = BOOLEAN( GT( _S2CINT( x2722 ), 
                          _S2CINT( y2723 ) ) );
        goto L5133;
L5132:
        X1 = scrt2__3e_2dtwo( x2722, y2723 );
L5133:
        if  ( FALSE( X1 ) )  goto L5135;
        X2 = y2723;
        X3 = z2724;
L5137:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5138;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5141;
        scrt1__24__car_2derror( X3 );
L5141:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5145;
        if  ( GT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5149;
        POPSTACKTRACE( FALSEVALUE );
L5145:
        if  ( TRUE( scrt2__3e_2dtwo( X2, X4 ) ) )  goto L5149;
        POPSTACKTRACE( FALSEVALUE );
L5138:
        POPSTACKTRACE( TRUEVALUE );
L5149:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5137 );
L5135:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_3d_2dtwo_v );
DEFCSTRING( t5154, "SCRT2_<=-TWO" );

TSCP  scrt2__3c_3d_2dtwo( x2764, y2765 )
        TSCP  x2764, y2765;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5154 );
        if  ( NEQ( TSCPTAG( x2764 ), FIXNUMTAG ) )  goto L5156;
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5158;
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2764 ), 
                                     _S2CINT( y2765 ) ) ) );
L5158:
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5160;
        POPSTACKTRACE( BOOLEAN( LTE( FIX_FLTV( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5160:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( y2765, EMPTYLIST ) ) );
L5156:
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5162;
        if  ( NOT( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2764 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5164;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FIX_FLTV( y2765 ) ) ) );
L5164:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( x2764, EMPTYLIST ) ) );
L5162:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2764 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5172;
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5172;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5172:
        X1 = CONS( y2765, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2579, 
                                      CONS( x2764, X1 ) ) );
}

DEFTSCP( scrt2__3c_3d_v );
DEFCSTRING( t5173, "<=" );

TSCP  scrt2__3c_3d( x2786, y2787, z2788 )
        TSCP  x2786, y2787, z2788;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5173 );
        if  ( BITAND( BITOR( _S2CINT( x2786 ), 
                             _S2CINT( y2787 ) ), 
                      3 ) )  goto L5176;
        X1 = BOOLEAN( LTE( _S2CINT( x2786 ), 
                           _S2CINT( y2787 ) ) );
        goto L5177;
L5176:
        X1 = scrt2__3c_3d_2dtwo( x2786, y2787 );
L5177:
        if  ( FALSE( X1 ) )  goto L5179;
        X2 = y2787;
        X3 = z2788;
L5181:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5182;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5185;
        scrt1__24__car_2derror( X3 );
L5185:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5189;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5193;
        POPSTACKTRACE( FALSEVALUE );
L5189:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X2, X4 ) ) )  goto L5193;
        POPSTACKTRACE( FALSEVALUE );
L5182:
        POPSTACKTRACE( TRUEVALUE );
L5193:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5181 );
L5179:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_3d_2dtwo_v );
DEFCSTRING( t5198, "SCRT2_>=-TWO" );

TSCP  scrt2__3e_3d_2dtwo( x2828, y2829 )
        TSCP  x2828, y2829;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5198 );
        if  ( NEQ( TSCPTAG( x2828 ), FIXNUMTAG ) )  goto L5200;
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5202;
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( x2828 ), 
                                     _S2CINT( y2829 ) ) ) );
L5202:
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5204;
        POPSTACKTRACE( BOOLEAN( GTE( FIX_FLTV( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5204:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( y2829, EMPTYLIST ) ) );
L5200:
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5206;
        if  ( NOT( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2828 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5208;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FIX_FLTV( y2829 ) ) ) );
L5208:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( x2828, EMPTYLIST ) ) );
L5206:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2828 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5216;
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5216;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5216:
        X1 = CONS( y2829, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2579, 
                                      CONS( x2828, X1 ) ) );
}

DEFTSCP( scrt2__3e_3d_v );
DEFCSTRING( t5217, ">=" );

TSCP  scrt2__3e_3d( x2850, y2851, z2852 )
        TSCP  x2850, y2851, z2852;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5217 );
        if  ( BITAND( BITOR( _S2CINT( x2850 ), 
                             _S2CINT( y2851 ) ), 
                      3 ) )  goto L5220;
        X1 = BOOLEAN( GTE( _S2CINT( x2850 ), 
                           _S2CINT( y2851 ) ) );
        goto L5221;
L5220:
        X1 = scrt2__3e_3d_2dtwo( x2850, y2851 );
L5221:
        if  ( FALSE( X1 ) )  goto L5223;
        X2 = y2851;
        X3 = z2852;
L5225:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5226;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5229;
        scrt1__24__car_2derror( X3 );
L5229:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5233;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5237;
        POPSTACKTRACE( FALSEVALUE );
L5233:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L5237;
        POPSTACKTRACE( FALSEVALUE );
L5226:
        POPSTACKTRACE( TRUEVALUE );
L5237:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5225 );
L5223:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_max_2dtwo_v );
DEFCSTRING( t5242, "SCRT2_MAX-TWO" );

TSCP  scrt2_max_2dtwo( x2892, y2893 )
        TSCP  x2892, y2893;
{
        PUSHSTACKTRACE( t5242 );
        if  ( BITAND( BITOR( _S2CINT( x2892 ), 
                             _S2CINT( y2893 ) ), 
                      3 ) )  goto L5244;
        if  ( GT( _S2CINT( x2892 ), _S2CINT( y2893 ) ) )  goto L5246;
        POPSTACKTRACE( y2893 );
L5246:
        POPSTACKTRACE( x2892 );
L5244:
        if  ( TRUE( scrt2__3e_2dtwo( x2892, y2893 ) ) )  goto L5248;
        POPSTACKTRACE( y2893 );
L5248:
        POPSTACKTRACE( x2892 );
}

DEFTSCP( scrt2_max_v );
DEFCSTRING( t5250, "MAX" );

TSCP  scrt2_max( x2901, y2902 )
        TSCP  x2901, y2902;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5250 );
        X1 = x2901;
        X2 = y2902;
L5253:
        if  ( FALSE( X2 ) )  goto L5254;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5257;
        scrt1__24__car_2derror( X2 );
L5257:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5261;
        if  ( LTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5265;
        X3 = X1;
        goto L5268;
L5261:
        if  ( FALSE( scrt2__3e_2dtwo( X1, X4 ) ) )  goto L5265;
        X3 = X1;
        goto L5268;
L5265:
        X3 = PAIR_CAR( X2 );
L5268:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5253 );
L5254:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_min_2dtwo_v );
DEFCSTRING( t5271, "SCRT2_MIN-TWO" );

TSCP  scrt2_min_2dtwo( x2930, y2931 )
        TSCP  x2930, y2931;
{
        PUSHSTACKTRACE( t5271 );
        if  ( BITAND( BITOR( _S2CINT( x2930 ), 
                             _S2CINT( y2931 ) ), 
                      3 ) )  goto L5273;
        if  ( LT( _S2CINT( x2930 ), _S2CINT( y2931 ) ) )  goto L5275;
        POPSTACKTRACE( y2931 );
L5275:
        POPSTACKTRACE( x2930 );
L5273:
        if  ( TRUE( scrt2__3c_2dtwo( x2930, y2931 ) ) )  goto L5277;
        POPSTACKTRACE( y2931 );
L5277:
        POPSTACKTRACE( x2930 );
}

DEFTSCP( scrt2_min_v );
DEFCSTRING( t5279, "MIN" );

TSCP  scrt2_min( x2939, y2940 )
        TSCP  x2939, y2940;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5279 );
        X1 = x2939;
        X2 = y2940;
L5282:
        if  ( FALSE( X2 ) )  goto L5283;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5286;
        scrt1__24__car_2derror( X2 );
L5286:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5290;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5294;
        X3 = X1;
        goto L5297;
L5290:
        if  ( FALSE( scrt2__3c_2dtwo( X1, X4 ) ) )  goto L5294;
        X3 = X1;
        goto L5297;
L5294:
        X3 = PAIR_CAR( X2 );
L5297:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5282 );
L5283:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2b_2dtwo_v );
DEFCSTRING( t5300, "SCRT2_+-TWO" );

TSCP  scrt2__2b_2dtwo( x2968, y2969 )
        TSCP  x2968, y2969;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5300 );
        if  ( NEQ( TSCPTAG( x2968 ), FIXNUMTAG ) )  goto L5302;
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5304;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x2968 ), 
                                     _S2CINT( y2969 ) ) ) );
L5304:
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5306;
        POPSTACKTRACE( FLTV_FLT( PLUS( FIX_FLTV( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5306:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( y2969, EMPTYLIST ) ) );
L5302:
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5308;
        if  ( NOT( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2968 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5310;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FIX_FLTV( y2969 ) ) ) );
L5310:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( x2968, EMPTYLIST ) ) );
L5308:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2968 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5318;
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5318;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5318:
        X1 = CONS( y2969, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2579, 
                                      CONS( x2968, X1 ) ) );
}

DEFTSCP( scrt2__2b_v );
DEFCSTRING( t5319, "+" );

TSCP  scrt2__2b( x2990 )
        TSCP  x2990;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5319 );
        X1 = _TSCP( 0 );
        X2 = x2990;
L5322:
        if  ( FALSE( X2 ) )  goto L5323;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5326;
        scrt1__24__car_2derror( X2 );
L5326:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5329;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), _S2CINT( X4 ) ) );
        goto L5330;
L5329:
        X3 = scrt2__2b_2dtwo( X1, X4 );
L5330:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5322 );
L5323:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2a_2dtwo_v );
DEFCSTRING( t5332, "SCRT2_*-TWO" );

TSCP  scrt2__2a_2dtwo( x3014, y3015 )
        TSCP  x3014, y3015;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5332 );
        if  ( NEQ( TSCPTAG( x3014 ), FIXNUMTAG ) )  goto L5334;
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5336;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( x3014 ), 
                                      _S2CINT( y3015 ) ) ) );
L5336:
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5338;
        POPSTACKTRACE( FLTV_FLT( TIMES( FIX_FLTV( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5338:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( y3015, EMPTYLIST ) ) );
L5334:
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5340;
        if  ( NOT( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3014 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5342;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FIX_FLTV( y3015 ) ) ) );
L5342:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( x3014, EMPTYLIST ) ) );
L5340:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3014 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5350;
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5350;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5350:
        X1 = CONS( y3015, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2579, 
                                      CONS( x3014, X1 ) ) );
}

DEFTSCP( scrt2__2a_v );
DEFCSTRING( t5351, "*" );

TSCP  scrt2__2a( x3036 )
        TSCP  x3036;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5351 );
        X1 = _TSCP( 4 );
        X2 = x3036;
L5354:
        if  ( FALSE( X2 ) )  goto L5355;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5358;
        scrt1__24__car_2derror( X2 );
L5358:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5361;
        X3 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X4 ) ) );
        goto L5362;
L5361:
        X3 = scrt2__2a_2dtwo( X1, X4 );
L5362:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5354 );
L5355:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2d_2dtwo_v );
DEFCSTRING( t5364, "SCRT2_--TWO" );

TSCP  scrt2__2d_2dtwo( x3061, y3062 )
        TSCP  x3061, y3062;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5364 );
        if  ( NEQ( TSCPTAG( x3061 ), FIXNUMTAG ) )  goto L5366;
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5368;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( x3061 ), 
                                           _S2CINT( y3062 ) ) ) );
L5368:
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5370;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FIX_FLTV( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5370:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( y3062, EMPTYLIST ) ) );
L5366:
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5372;
        if  ( NOT( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3061 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5374;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FIX_FLTV( y3062 ) ) ) );
L5374:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( x3061, EMPTYLIST ) ) );
L5372:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3061 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5382;
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5382;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5382:
        X1 = CONS( y3062, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2579, 
                                      CONS( x3061, X1 ) ) );
}

DEFTSCP( scrt2__2d_v );
DEFCSTRING( t5383, "-" );

TSCP  scrt2__2d( x3083, y3084 )
        TSCP  x3083, y3084;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5383 );
        if  ( FALSE( y3084 ) )  goto L5385;
        if  ( EQ( TSCPTAG( y3084 ), PAIRTAG ) )  goto L5388;
        scrt1__24__cdr_2derror( y3084 );
L5388:
        X1 = PAIR_CDR( y3084 );
        X3 = PAIR_CAR( y3084 );
        if  ( BITAND( BITOR( _S2CINT( x3083 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5392;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( x3083 ), 
                                 _S2CINT( X3 ) ) );
        goto L5393;
L5392:
        X2 = scrt2__2d_2dtwo( x3083, X3 );
L5393:
        X3 = X2;
        X4 = X1;
L5396:
        if  ( FALSE( X4 ) )  goto L5397;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5400;
        scrt1__24__car_2derror( X4 );
L5400:
        X6 = PAIR_CAR( X4 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L5403;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X6 ) ) );
        goto L5404;
L5403:
        X5 = scrt2__2d_2dtwo( X3, X6 );
L5404:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5396 );
L5397:
        POPSTACKTRACE( X3 );
L5385:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3083 ) ), 
                      3 ) )  goto L5406;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3083 ) ) ) );
L5406:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3083 ) );
}

DEFTSCP( scrt2__2f_2dtwo_v );
DEFCSTRING( t5408, "SCRT2_/-TWO" );

TSCP  scrt2__2f_2dtwo( x3128, y3129 )
        TSCP  x3128, y3129;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5408 );
        X1 = BOOLEAN( EQ( _S2CUINT( y3129 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        if  ( TRUE( X1 ) )  goto L5414;
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
            )  goto L5414;
        if  ( NEQ( TSCPTAG( x3128 ), FIXNUMTAG ) )  goto L5417;
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5419;
        X2 = _TSCP( REMAINDER( _S2CINT( x3128 ), 
                               _S2CINT( y3129 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5421;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3128 ), 
                                          _S2CINT( y3129 ) ) ) );
L5421:
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5419:
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5423;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5423:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2582, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5417:
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5425;
        if  ( NOT( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3128 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5427;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5427:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2582, 
                                      CONS( x3128, EMPTYLIST ) ) );
L5425:
        X2 = BOOLEAN( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3128 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X2 ) )  goto L5435;
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5435;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5414:
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c3163, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5435:
        X1 = CONS( y3129, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3153, 
                                      c2579, 
                                      CONS( x3128, X1 ) ) );
}

DEFTSCP( scrt2__2f_v );
DEFCSTRING( t5436, "/" );

TSCP  scrt2__2f( x3165, y3166 )
        TSCP  x3165, y3166;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5436 );
        if  ( FALSE( y3166 ) )  goto L5438;
        if  ( EQ( TSCPTAG( y3166 ), PAIRTAG ) )  goto L5441;
        scrt1__24__cdr_2derror( y3166 );
L5441:
        X1 = PAIR_CDR( y3166 );
        X3 = PAIR_CAR( y3166 );
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3165 ), 
                                          _S2CINT( X3 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5455;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5455;
        X5 = _TSCP( REMAINDER( _S2CINT( x3165 ), 
                               _S2CINT( X3 ) ) );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5455;
        X2 = C_FIXED( QUOTIENT( _S2CINT( x3165 ), 
                                _S2CINT( X3 ) ) );
        goto L5456;
L5455:
        X2 = scrt2__2f_2dtwo( x3165, X3 );
L5456:
        X3 = X2;
        X4 = X1;
L5459:
        if  ( FALSE( X4 ) )  goto L5460;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5463;
        scrt1__24__car_2derror( X4 );
L5463:
        X6 = PAIR_CAR( X4 );
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( X6 ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L5476;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5476;
        X8 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( X6 ) ) );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5476;
        X5 = C_FIXED( QUOTIENT( _S2CINT( X3 ), 
                                _S2CINT( X6 ) ) );
        goto L5477;
L5476:
        X5 = scrt2__2f_2dtwo( X3, X6 );
L5477:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5459 );
L5460:
        POPSTACKTRACE( X3 );
L5438:
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3165 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5489;
        if  ( EQ( _S2CUINT( x3165 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5489;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x3165 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5489;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3165 ) ) ) );
L5489:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x3165 ) );
}

DEFTSCP( scrt2_abs_v );
DEFCSTRING( t5490, "ABS" );

TSCP  scrt2_abs( x3252 )
        TSCP  x3252;
{
        PUSHSTACKTRACE( t5490 );
        if  ( NEQ( TSCPTAG( x3252 ), FIXNUMTAG ) )  goto L5493;
        if  ( LT( _S2CINT( x3252 ), 0 ) )  goto L5497;
        POPSTACKTRACE( x3252 );
L5493:
        if  ( TRUE( scrt2_negative_3f( x3252 ) ) )  goto L5497;
        POPSTACKTRACE( x3252 );
L5497:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3252 ) ), 
                      3 ) )  goto L5500;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3252 ) ) ) );
L5500:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3252 ) );
}

DEFTSCP( scrt2_quotient_v );
DEFCSTRING( t5502, "QUOTIENT" );
EXTERNTSCPP( scrt2_truncate, XAL1( TSCP ) );
EXTERNTSCP( scrt2_truncate_v );

TSCP  scrt2_quotient( x3266, y3267 )
        TSCP  x3266, y3267;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5502 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5510;
        if  ( EQ( _S2CUINT( y3267 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5510;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ) ) );
L5510:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3266 ), 
                                          _S2CINT( y3267 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5521;
        if  ( EQ( _S2CUINT( y3267 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5521;
        X3 = _TSCP( REMAINDER( _S2CINT( x3266 ), 
                               _S2CINT( y3267 ) ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5521;
        X1 = C_FIXED( QUOTIENT( _S2CINT( x3266 ), 
                                _S2CINT( y3267 ) ) );
        goto L5522;
L5521:
        X1 = scrt2__2f_2dtwo( x3266, y3267 );
L5522:
        POPSTACKTRACE( scrt2_truncate( X1 ) );
}

DEFTSCP( scrt2_remainder_v );
DEFCSTRING( t5523, "REMAINDER" );

TSCP  scrt2_remainder( x3299, y3300 )
        TSCP  x3299, y3300;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5523 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3299 ), 
                                          _S2CINT( y3300 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5531;
        if  ( EQ( _S2CUINT( y3300 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5531;
        POPSTACKTRACE( _TSCP( REMAINDER( _S2CINT( x3299 ), 
                                         _S2CINT( y3300 ) ) ) );
L5531:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3299 ), 
                                          _S2CINT( y3300 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5538;
        if  ( EQ( _S2CUINT( y3300 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5538;
        X3 = C_FIXED( QUOTIENT( _S2CINT( x3299 ), 
                                _S2CINT( y3300 ) ) );
        goto L5539;
L5538:
        X3 = scrt2_quotient( x3299, y3300 );
L5539:
        if  ( BITAND( BITOR( _S2CINT( y3300 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5541;
        X2 = _TSCP( ITIMES( FIXED_C( y3300 ), 
                            _S2CINT( X3 ) ) );
        goto L5542;
L5541:
        X2 = scrt2__2a_2dtwo( y3300, X3 );
L5542:
        if  ( BITAND( BITOR( _S2CINT( x3299 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L5544;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( x3299 ), 
                                 _S2CINT( X2 ) ) );
        goto L5545;
L5544:
        X1 = scrt2__2d_2dtwo( x3299, X2 );
L5545:
        POPSTACKTRACE( scrt2_round( X1 ) );
}

DEFTSCP( scrt2_modulo_v );
DEFCSTRING( t5546, "MODULO" );

TSCP  scrt2_modulo( x3337, y3338 )
        TSCP  x3337, y3338;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5546 );
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3337 ), 
                                          _S2CINT( y3338 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5554;
        if  ( EQ( _S2CUINT( y3338 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5554;
        X1 = _TSCP( REMAINDER( _S2CINT( x3337 ), 
                               _S2CINT( y3338 ) ) );
        goto L5555;
L5554:
        X1 = scrt2_remainder( x3337, y3338 );
L5555:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5558;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5562;
        POPSTACKTRACE( X1 );
L5558:
        if  ( FALSE( scrt2_zero_3f( X1 ) ) )  goto L5562;
        POPSTACKTRACE( X1 );
L5562:
        if  ( NEQ( TSCPTAG( y3338 ), FIXNUMTAG ) )  goto L5566;
        if  ( GT( _S2CINT( y3338 ), 0 ) )  goto L5570;
        goto L5571;
L5566:
        if  ( FALSE( scrt2_positive_3f( y3338 ) ) )  goto L5571;
L5570:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5575;
        if  ( LTE( _S2CINT( X1 ), 0 ) )  goto L5579;
        POPSTACKTRACE( X1 );
L5575:
        if  ( FALSE( scrt2_positive_3f( X1 ) ) )  goto L5579;
        POPSTACKTRACE( X1 );
L5579:
        if  ( BITAND( BITOR( _S2CINT( y3338 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5582;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3338 ), 
                                     _S2CINT( X1 ) ) ) );
L5582:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3338, X1 ) );
L5571:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5585;
        if  ( GTE( _S2CINT( X1 ), 0 ) )  goto L5589;
        POPSTACKTRACE( X1 );
L5585:
        if  ( FALSE( scrt2_negative_3f( X1 ) ) )  goto L5589;
        POPSTACKTRACE( X1 );
L5589:
        if  ( BITAND( BITOR( _S2CINT( y3338 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5592;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3338 ), 
                                     _S2CINT( X1 ) ) ) );
L5592:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3338, X1 ) );
}

DEFTSCP( scrt2_gcd_v );
DEFCSTRING( t5594, "GCD" );

TSCP  scrt2_g3397( m3399, n3400 )
        TSCP  m3399, n3400;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "GCD2 [inside GCD]" );
L5597:
        if  ( NEQ( TSCPTAG( n3400 ), FIXNUMTAG ) )  goto L5599;
        if  ( NEQ( _S2CUINT( n3400 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L5603;
        POPSTACKTRACE( m3399 );
L5599:
        if  ( FALSE( scrt2_zero_3f( n3400 ) ) )  goto L5603;
        POPSTACKTRACE( m3399 );
L5603:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( m3399 ), 
                                          _S2CINT( n3400 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5612;
        if  ( EQ( _S2CUINT( n3400 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5612;
        X1 = _TSCP( REMAINDER( _S2CINT( m3399 ), 
                               _S2CINT( n3400 ) ) );
        goto L5613;
L5612:
        X1 = scrt2_remainder( m3399, n3400 );
L5613:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5616;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5620;
        POPSTACKTRACE( n3400 );
L5616:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L5620;
        POPSTACKTRACE( n3400 );
L5620:
        X2 = n3400;
        n3400 = X1;
        m3399 = X2;
        GOBACK( L5597 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  scrt2_gcd( x3395 )
        TSCP  x3395;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5594 );
        X2 = scrt1_length( x3395 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5624;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5626;
        if  ( EQ( TSCPTAG( x3395 ), PAIRTAG ) )  goto L5629;
        scrt1__24__car_2derror( x3395 );
L5629:
        X1 = PAIR_CAR( x3395 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5632;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5637;
        POPSTACKTRACE( X1 );
L5632:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5626:
        if  ( EQ( TSCPTAG( x3395 ), PAIRTAG ) )  goto L5639;
        scrt1__24__cdr_2derror( x3395 );
L5639:
        X4 = PAIR_CDR( x3395 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5642;
        scrt1__24__cdr_2derror( X4 );
L5642:
        X3 = PAIR_CDR( X4 );
        X6 = PAIR_CAR( x3395 );
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L5646;
        if  ( LT( _S2CINT( X6 ), 0 ) )  goto L5651;
        X5 = X6;
        goto L5652;
L5646:
        X5 = scrt2_abs( X6 );
        goto L5652;
L5651:
        X5 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
L5652:
        X8 = PAIR_CDR( x3395 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L5655;
        scrt1__24__car_2derror( X8 );
L5655:
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L5658;
        if  ( LT( _S2CINT( X7 ), 0 ) )  goto L5663;
        X6 = X7;
        goto L5664;
L5658:
        X6 = scrt2_abs( X7 );
        goto L5664;
L5663:
        X6 = _TSCP( INEGATE( _S2CINT( X7 ) ) );
L5664:
        X4 = scrt2_g3397( X5, X6 );
        X5 = X4;
        X6 = X3;
L5667:
        if  ( FALSE( X6 ) )  goto L5668;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5671;
        scrt1__24__car_2derror( X6 );
L5671:
        X9 = PAIR_CAR( X6 );
        if  ( NEQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L5674;
        if  ( LT( _S2CINT( X9 ), 0 ) )  goto L5679;
        X8 = X9;
        goto L5680;
L5674:
        X8 = scrt2_abs( X9 );
        goto L5680;
L5679:
        X8 = _TSCP( INEGATE( _S2CINT( X9 ) ) );
L5680:
        X7 = scrt2_g3397( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5667 );
L5668:
        POPSTACKTRACE( X5 );
L5624:
        POPSTACKTRACE( _TSCP( 0 ) );
L5637:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_lcm_v );
DEFCSTRING( t5682, "LCM" );

TSCP  scrt2_l3538( m3540, n3541 )
        TSCP  m3540, n3541;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LCM2 [inside LCM]" );
        if  ( NEQ( TSCPTAG( n3541 ), FIXNUMTAG ) )  goto L5686;
        if  ( LT( _S2CINT( n3541 ), 0 ) )  goto L5691;
        X1 = n3541;
        goto L5687;
L5691:
        X1 = _TSCP( INEGATE( _S2CINT( n3541 ) ) );
        goto L5687;
L5686:
        X1 = scrt2_abs( n3541 );
L5687:
        if  ( NEQ( TSCPTAG( m3540 ), FIXNUMTAG ) )  goto L5693;
        if  ( LT( _S2CINT( m3540 ), 0 ) )  goto L5698;
        X2 = m3540;
        goto L5694;
L5698:
        X2 = _TSCP( INEGATE( _S2CINT( m3540 ) ) );
        goto L5694;
L5693:
        X2 = scrt2_abs( m3540 );
L5694:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5702;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) )  goto L5706;
        POPSTACKTRACE( X2 );
L5702:
        if  ( FALSE( scrt2__3d_2dtwo( X2, X1 ) ) )  goto L5706;
        POPSTACKTRACE( X2 );
L5706:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5715;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5715;
        X3 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X1 ) ) );
        goto L5716;
L5715:
        X3 = scrt2_remainder( X2, X1 );
L5716:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5719;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5723;
        POPSTACKTRACE( X2 );
L5719:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5723;
        POPSTACKTRACE( X2 );
L5723:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X1 ), 
                                          _S2CINT( X2 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5732;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5732;
        X3 = _TSCP( REMAINDER( _S2CINT( X1 ), 
                               _S2CINT( X2 ) ) );
        goto L5733;
L5732:
        X3 = scrt2_remainder( X1, X2 );
L5733:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5736;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5740;
        POPSTACKTRACE( X1 );
L5736:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5740;
        POPSTACKTRACE( X1 );
L5740:
        X5 = CONS( X1, EMPTYLIST );
        X4 = scrt2_gcd( CONS( X2, X5 ) );
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X4 ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L5754;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5754;
        X6 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X4 ) ) );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5754;
        X3 = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                _S2CINT( X4 ) ) );
        goto L5755;
L5754:
        X3 = scrt2__2f_2dtwo( X2, X4 );
L5755:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5757;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( X3 ), 
                                      _S2CINT( X1 ) ) ) );
L5757:
        POPSTACKTRACE( scrt2__2a_2dtwo( X3, X1 ) );
}

TSCP  scrt2_lcm( x3536 )
        TSCP  x3536;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5682 );
        X2 = scrt1_length( x3536 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5760;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5762;
        if  ( EQ( TSCPTAG( x3536 ), PAIRTAG ) )  goto L5765;
        scrt1__24__car_2derror( x3536 );
L5765:
        X1 = PAIR_CAR( x3536 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5768;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5773;
        POPSTACKTRACE( X1 );
L5768:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5762:
        if  ( EQ( TSCPTAG( x3536 ), PAIRTAG ) )  goto L5775;
        scrt1__24__cdr_2derror( x3536 );
L5775:
        X4 = PAIR_CDR( x3536 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5778;
        scrt1__24__cdr_2derror( X4 );
L5778:
        X3 = PAIR_CDR( X4 );
        X5 = PAIR_CAR( x3536 );
        X7 = PAIR_CDR( x3536 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L5783;
        scrt1__24__car_2derror( X7 );
L5783:
        X6 = PAIR_CAR( X7 );
        X4 = scrt2_l3538( X5, X6 );
        X5 = X4;
        X6 = X3;
L5787:
        if  ( FALSE( X6 ) )  goto L5788;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5791;
        scrt1__24__car_2derror( X6 );
L5791:
        X8 = PAIR_CAR( X6 );
        X7 = scrt2_l3538( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5787 );
L5788:
        POPSTACKTRACE( X5 );
L5760:
        POPSTACKTRACE( _TSCP( 4 ) );
L5773:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_floor_v );
DEFCSTRING( t5794, "FLOOR" );

TSCP  scrt2_floor( x3713 )
        TSCP  x3713;
{
        PUSHSTACKTRACE( t5794 );
        if  ( EQ( TSCPTAG( x3713 ), FIXNUMTAG ) )  goto L5796;
        POPSTACKTRACE( C_FLOOR( x3713 ) );
L5796:
        POPSTACKTRACE( x3713 );
}

DEFTSCP( scrt2_ceiling_v );
DEFCSTRING( t5798, "CEILING" );

TSCP  scrt2_ceiling( x3717 )
        TSCP  x3717;
{
        PUSHSTACKTRACE( t5798 );
        if  ( EQ( TSCPTAG( x3717 ), FIXNUMTAG ) )  goto L5800;
        POPSTACKTRACE( C_CEILING( x3717 ) );
L5800:
        POPSTACKTRACE( x3717 );
}

DEFTSCP( scrt2_truncate_v );
DEFCSTRING( t5802, "TRUNCATE" );

TSCP  scrt2_truncate( x3721 )
        TSCP  x3721;
{
        PUSHSTACKTRACE( t5802 );
        if  ( BITAND( BITOR( _S2CINT( x3721 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5805;
        if  ( LT( _S2CINT( x3721 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5809;
        goto L5810;
L5805:
        if  ( FALSE( scrt2__3c_2dtwo( x3721, _TSCP( 0 ) ) ) )  goto L5810;
L5809:
        POPSTACKTRACE( scrt2_ceiling( x3721 ) );
L5810:
        POPSTACKTRACE( scrt2_floor( x3721 ) );
}

DEFTSCP( scrt2_round_v );
DEFCSTRING( t5813, "ROUND" );

TSCP  scrt2_round( x3729 )
        TSCP  x3729;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5813 );
        if  ( EQ( TSCPTAG( x3729 ), FIXNUMTAG ) )  goto L5815;
        if  ( BITAND( BITOR( _S2CINT( x3729 ), 
                             _S2CINT( c3738 ) ), 
                      3 ) )  goto L5817;
        X1 = _TSCP( IPLUS( _S2CINT( x3729 ), 
                           _S2CINT( c3738 ) ) );
        goto L5818;
L5817:
        X1 = scrt2__2b_2dtwo( x3729, c3738 );
L5818:
        POPSTACKTRACE( scrt2_floor( X1 ) );
L5815:
        POPSTACKTRACE( x3729 );
}

DEFTSCP( scrt2_exp_v );
DEFCSTRING( t5819, "EXP" );

TSCP  scrt2_exp( x3740 )
        TSCP  x3740;
{
        PUSHSTACKTRACE( t5819 );
        POPSTACKTRACE( C_EXP( x3740 ) );
}

DEFTSCP( scrt2_log_v );
DEFCSTRING( t5821, "LOG" );

TSCP  scrt2_log( x3742 )
        TSCP  x3742;
{
        PUSHSTACKTRACE( t5821 );
        POPSTACKTRACE( C_LOG( x3742 ) );
}

DEFTSCP( scrt2_sin_v );
DEFCSTRING( t5823, "SIN" );

TSCP  scrt2_sin( x3744 )
        TSCP  x3744;
{
        PUSHSTACKTRACE( t5823 );
        POPSTACKTRACE( C_SIN( x3744 ) );
}

DEFTSCP( scrt2_cos_v );
DEFCSTRING( t5825, "COS" );

TSCP  scrt2_cos( x3746 )
        TSCP  x3746;
{
        PUSHSTACKTRACE( t5825 );
        POPSTACKTRACE( C_COS( x3746 ) );
}

DEFTSCP( scrt2_tan_v );
DEFCSTRING( t5827, "TAN" );

TSCP  scrt2_tan( x3748 )
        TSCP  x3748;
{
        PUSHSTACKTRACE( t5827 );
        POPSTACKTRACE( C_TAN( x3748 ) );
}

DEFTSCP( scrt2_asin_v );
DEFCSTRING( t5829, "ASIN" );

TSCP  scrt2_asin( x3750 )
        TSCP  x3750;
{
        PUSHSTACKTRACE( t5829 );
        POPSTACKTRACE( C_ASIN( x3750 ) );
}

DEFTSCP( scrt2_acos_v );
DEFCSTRING( t5831, "ACOS" );

TSCP  scrt2_acos( x3752 )
        TSCP  x3752;
{
        PUSHSTACKTRACE( t5831 );
        POPSTACKTRACE( C_ACOS( x3752 ) );
}

DEFTSCP( scrt2_atan_v );
DEFCSTRING( t5833, "ATAN" );

TSCP  scrt2_atan( x3754, y3755 )
        TSCP  x3754, y3755;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5833 );
        if  ( FALSE( y3755 ) )  goto L5835;
        if  ( EQ( TSCPTAG( y3755 ), PAIRTAG ) )  goto L5838;
        scrt1__24__car_2derror( y3755 );
L5838:
        X1 = PAIR_CAR( y3755 );
        POPSTACKTRACE( C_ATAN2( x3754, X1 ) );
L5835:
        POPSTACKTRACE( C_ATAN( x3754 ) );
}

DEFTSCP( scrt2_sqrt_v );
DEFCSTRING( t5840, "SQRT" );

TSCP  scrt2_sqrt( x3761 )
        TSCP  x3761;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5840 );
        if  ( NEQ( TSCPTAG( x3761 ), FIXNUMTAG ) )  goto L5843;
        if  ( LT( _S2CINT( x3761 ), 0 ) )  goto L5847;
        goto L5850;
L5843:
        if  ( FALSE( scrt2_negative_3f( x3761 ) ) )  goto L5850;
L5847:
        scdebug_error( c3768, 
                       c3769, CONS( x3761, EMPTYLIST ) );
L5850:
        X1 = C_SQRT( x3761 );
        if  ( NEQ( TSCPTAG( x3761 ), FIXNUMTAG ) )  goto L5852;
        X3 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L5855;
        scdebug_error( c2310, 
                       c2311, CONS( X3, EMPTYLIST ) );
L5855:
        X4 = BOOLEAN( LT( FLOAT_VALUE( X3 ), MINTSCPINTF ) );
        if  ( TRUE( X4 ) )  goto L5861;
        if  ( LTE( FLOAT_VALUE( X3 ), MAXTSCPINTF ) )  goto L5864;
L5861:
        scdebug_error( c2310, 
                       c2316, CONS( X3, EMPTYLIST ) );
L5864:
        X2 = FLT_FIX( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L5868;
        X3 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X2 ) ) );
        goto L5869;
L5868:
        X3 = scrt2__2a_2dtwo( X2, X2 );
L5869:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( x3761 ) ) )  goto L5866;
        POPSTACKTRACE( X1 );
L5866:
        POPSTACKTRACE( X2 );
L5852:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_expt_v );
DEFCSTRING( t5870, "EXPT" );

TSCP  scrt2_expt( x3794, y3795 )
        TSCP  x3794, y3795;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5870 );
        if  ( BITAND( BITOR( _S2CINT( x3794 ), 
                             _S2CINT( c3140 ) ), 
                      3 ) )  goto L5872;
        X2 = BOOLEAN( EQ( _S2CUINT( x3794 ), 
                          _S2CUINT( c3140 ) ) );
        goto L5873;
L5872:
        X2 = scrt2__3d_2dtwo( x3794, c3140 );
L5873:
        if  ( FALSE( X2 ) )  goto L5886;
        if  ( BITAND( BITOR( _S2CINT( y3795 ), 
                             _S2CINT( c3140 ) ), 
                      3 ) )  goto L5879;
        if  ( NEQ( _S2CUINT( y3795 ), _S2CUINT( c3140 ) ) )  goto L5886;
        POPSTACKTRACE( c3858 );
L5879:
        if  ( FALSE( scrt2__3d_2dtwo( y3795, c3140 ) ) )  goto L5886;
        POPSTACKTRACE( c3858 );
L5886:
        X1 = C_POW( x3794, y3795 );
        if  ( NEQ( TSCPTAG( x3794 ), FIXNUMTAG ) )  goto L5888;
        if  ( NEQ( TSCPTAG( y3795 ), FIXNUMTAG ) )  goto L5890;
        X2 = C_FIXED( MAXS2CINT >> 2 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5892;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5897;
        X3 = X1;
        goto L5893;
L5897:
        X3 = _TSCP( INEGATE( _S2CINT( X1 ) ) );
        goto L5893;
L5892:
        X3 = scrt2_abs( X1 );
L5893:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L5901;
        if  ( LTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L5905;
        POPSTACKTRACE( X1 );
L5901:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X3, X2 ) ) )  goto L5905;
        POPSTACKTRACE( X1 );
L5890:
        POPSTACKTRACE( X1 );
L5888:
        POPSTACKTRACE( X1 );
L5905:
        X2 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), DOUBLEFLOATTAG ) )
            )  goto L5909;
        scdebug_error( c2310, 
                       c2311, CONS( X2, EMPTYLIST ) );
L5909:
        X3 = BOOLEAN( LT( FLOAT_VALUE( X2 ), MINTSCPINTF ) );
        if  ( TRUE( X3 ) )  goto L5915;
        if  ( LTE( FLOAT_VALUE( X2 ), MAXTSCPINTF ) )  goto L5918;
L5915:
        scdebug_error( c2310, 
                       c2316, CONS( X2, EMPTYLIST ) );
L5918:
        POPSTACKTRACE( FLT_FIX( X2 ) );
}

DEFTSCP( scrt2_exact_2d_3einexact_v );
DEFCSTRING( t5919, "EXACT->INEXACT" );

TSCP  scrt2_exact_2d_3einexact( x3860 )
        TSCP  x3860;
{
        PUSHSTACKTRACE( t5919 );
        if  ( NEQ( TSCPTAG( x3860 ), FIXNUMTAG ) )  goto L5921;
        POPSTACKTRACE( FIX_FLT( x3860 ) );
L5921:
        if  ( AND( EQ( TSCPTAG( x3860 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x3860 ), DOUBLEFLOATTAG ) )
            )  goto L5924;
        POPSTACKTRACE( scdebug_error( c3865, 
                                      c2543, 
                                      CONS( x3860, EMPTYLIST ) ) );
L5924:
        POPSTACKTRACE( x3860 );
}

DEFTSCP( scrt2_inexact_2d_3eexact_v );
DEFCSTRING( t5926, "INEXACT->EXACT" );

TSCP  scrt2_inexact_2d_3eexact( x3871 )
        TSCP  x3871;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5926 );
        if  ( EQ( TSCPTAG( x3871 ), FIXNUMTAG ) )  goto L5928;
        if  ( NOT( AND( EQ( TSCPTAG( x3871 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3871 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5930;
        X1 = BOOLEAN( LT( FLOAT_VALUE( x3871 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L5937;
        if  ( LTE( FLOAT_VALUE( x3871 ), MAXTSCPINTF ) )  goto L5940;
L5937:
        scdebug_error( c2310, 
                       c2316, CONS( x3871, EMPTYLIST ) );
L5940:
        POPSTACKTRACE( FLT_FIX( x3871 ) );
L5930:
        POPSTACKTRACE( scdebug_error( c3876, 
                                      c2543, 
                                      CONS( x3871, EMPTYLIST ) ) );
L5928:
        POPSTACKTRACE( x3871 );
}

DEFTSCP( scrt2_number_2d_3estring_v );
DEFCSTRING( t5941, "NUMBER->STRING" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( sc_formatnumber, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( sc_formatnumber_v );
EXTERNTSCPP( scrt2_integer_2d_3estring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_integer_2d_3estring_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  scrt2_number_2d_3estring( n3886, f3887 )
        TSCP  n3886, f3887;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5941 );
        f3887 = CONS( f3887, EMPTYLIST );
        if  ( EQ( TSCPTAG( n3886 ), FIXNUMTAG ) )  goto L5945;
        if  ( AND( EQ( TSCPTAG( n3886 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( n3886 ), DOUBLEFLOATTAG ) )
            )  goto L5945;
        scdebug_error( c3898, 
                       c2543, CONS( n3886, EMPTYLIST ) );
L5945:
        if  ( FALSE( PAIR_CAR( f3887 ) ) )  goto L5947;
        X2 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5950;
        scrt1__24__car_2derror( X2 );
L5950:
        X1 = PAIR_CAR( X2 );
        goto L5948;
L5947:
        X1 = _TSCP( 40 );
L5948:
        SETGEN( PAIR_CAR( f3887 ), X1 );
        if  ( FALSE( scrt1_equal_3f( PAIR_CAR( f3887 ), c3904 ) )
            )  goto L5952;
        POPSTACKTRACE( sc_formatnumber( n3886, 
                                        _TSCP( 0 ), _TSCP( 0 ) ) );
L5952:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3887 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6001;
        X3 = scrt1_length( PAIR_CAR( f3887 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L5959;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L5960;
L5959:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L5960:
        if  ( FALSE( X2 ) )  goto L6001;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5969;
        scrt1__24__car_2derror( X4 );
L5969:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3934 ) ) )  goto L6001;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5976;
        scrt1__24__cdr_2derror( X4 );
L5976:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5979;
        scrt1__24__car_2derror( X5 );
L5979:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6001;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5983;
        scrt1__24__cdr_2derror( X4 );
L5983:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5986;
        scrt1__24__car_2derror( X5 );
L5986:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5990;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5994;
        goto L6001;
L5990:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L6001;
L5994:
        X2 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6004;
        scrt1__24__cdr_2derror( X2 );
L6004:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6007;
        scrt1__24__car_2derror( X3 );
L6007:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3886, _TSCP( 4 ), X1 ) );
L6001:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3887 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6056;
        X3 = scrt1_length( PAIR_CAR( f3887 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L6014;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L6015;
L6014:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L6015:
        if  ( FALSE( X2 ) )  goto L6056;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6024;
        scrt1__24__car_2derror( X4 );
L6024:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3997 ) ) )  goto L6056;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6031;
        scrt1__24__cdr_2derror( X4 );
L6031:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6034;
        scrt1__24__car_2derror( X5 );
L6034:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6056;
        X4 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6038;
        scrt1__24__cdr_2derror( X4 );
L6038:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6041;
        scrt1__24__car_2derror( X5 );
L6041:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6045;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6049;
        goto L6056;
L6045:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L6056;
L6049:
        X2 = PAIR_CAR( f3887 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6059;
        scrt1__24__cdr_2derror( X2 );
L6059:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6062;
        scrt1__24__car_2derror( X3 );
L6062:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3886, _TSCP( 8 ), X1 ) );
L6056:
        X1 = PAIR_CAR( f3887 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L6066;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6070;
        goto L6071;
L6066:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 8 ) ) ) )  goto L6071;
L6070:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3886, _TSCP( 8 ) ) );
L6071:
        X1 = PAIR_CAR( f3887 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 32 ) ) ), 
                      3 ) )  goto L6076;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6080;
        goto L6081;
L6076:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 32 ) ) ) )  goto L6080;
L6081:
        X1 = PAIR_CAR( f3887 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 40 ) ) ), 
                      3 ) )  goto L6086;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6090;
        goto L6091;
L6086:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 40 ) ) ) )  goto L6091;
L6090:
        POPSTACKTRACE( scrt6_format( c4071, 
                                     CONS( n3886, EMPTYLIST ) ) );
L6091:
        X1 = PAIR_CAR( f3887 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 64 ) ) ), 
                      3 ) )  goto L6096;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6100;
        goto L6101;
L6096:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 64 ) ) ) )  goto L6100;
L6101:
        POPSTACKTRACE( scdebug_error( c3898, 
                                      c4069, 
                                      CONS( PAIR_CAR( f3887 ), 
                                            EMPTYLIST ) ) );
L6100:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3886, _TSCP( 64 ) ) );
L6080:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3886, _TSCP( 32 ) ) );
}

DEFTSCP( scrt2_integer_2d_3estring_v );
DEFCSTRING( t6104, "SCRT2_INTEGER->STRING" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt2_l4105, XAL2( TSCP, TSCP ) );

TSCP  scrt2_l4105( q4107, r4108 )
        TSCP  q4107, r4108;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside INTEGER->STRING]" );
        X2 = scrt2_inexact_2d_3eexact( r4108 );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L6142;
        scdebug_error( c4153, 
                       c4154, CONS( X2, EMPTYLIST ) );
L6142:
        X3 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X3 ) )  goto L6148;
        if  ( AND( EQ( TSCPTAG( c4177 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c4177 ), STRINGTAG ) )
            )  goto L6150;
        scdebug_error( c4175, 
                       c4176, CONS( c4177, EMPTYLIST ) );
L6150:
        X4 = C_FIXED( STRING_LENGTH( c4177 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L6154;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L6148;
        goto L6161;
L6154:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L6161;
L6148:
        scdebug_error( c4153, 
                       c2316, CONS( X2, EMPTYLIST ) );
L6161:
        X1 = C_CHAR( STRING_CHAR( c4177, X2 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( q4107 ) ), 
                      3 ) )  goto L6164;
        if  ( EQ( _S2CUINT( _TSCP( 0 ) ), 
                  _S2CUINT( q4107 ) ) )  goto L6168;
        goto L6169;
L6164:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), q4107 ) ) )  goto L6168;
L6169:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4107 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6178;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6178;
        X3 = C_FIXED( QUOTIENT( _S2CINT( q4107 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6179;
L6178:
        X3 = scrt2_quotient( q4107, DISPLAY( 0 ) );
L6179:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4107 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6186;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6186;
        X4 = _TSCP( REMAINDER( _S2CINT( q4107 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6187;
L6186:
        X4 = scrt2_remainder( q4107, DISPLAY( 0 ) );
L6187:
        X2 = scrt2_l4105( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L6168:
        X2 = sc_cons( X1, EMPTYLIST );
        POPSTACKTRACE( X2 );
}

TSCP  scrt2_integer_2d_3estring( n4093, b4094 )
        TSCP  n4093, b4094;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6104 );
        DISPLAY( 0 ) = b4094;
        if  ( BITAND( BITOR( _S2CINT( n4093 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6107;
        if  ( LT( _S2CINT( n4093 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6111;
        goto L6112;
L6107:
        if  ( FALSE( scrt2__3c_2dtwo( n4093, _TSCP( 0 ) ) ) )  goto L6112;
L6111:
        if  ( NEQ( TSCPTAG( n4093 ), FIXNUMTAG ) )  goto L6115;
        if  ( LT( _S2CINT( n4093 ), 0 ) )  goto L6120;
        X2 = n4093;
        goto L6116;
L6120:
        X2 = _TSCP( INEGATE( _S2CINT( n4093 ) ) );
        goto L6116;
L6115:
        X2 = scrt2_abs( n4093 );
L6116:
        X1 = CONS( scrt2_integer_2d_3estring( X2, DISPLAY( 0 ) ), 
                   EMPTYLIST );
        SDVAL = scrt3_string_2dappend( CONS( c4204, X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L6112:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4093 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6128;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6128;
        X3 = C_FIXED( QUOTIENT( _S2CINT( n4093 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6129;
L6128:
        X3 = scrt2_quotient( n4093, DISPLAY( 0 ) );
L6129:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4093 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6136;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6136;
        X4 = _TSCP( REMAINDER( _S2CINT( n4093 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6137;
L6136:
        X4 = scrt2_remainder( n4093, DISPLAY( 0 ) );
L6137:
        X2 = scrt2_l4105( X3, X4 );
        X1 = scrt1_reverse( X2 );
        SDVAL = scrt3_list_2d_3estring( X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt2_string_2d_3enumber_v );
DEFCSTRING( t6189, "STRING->NUMBER" );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2_try_2dto_2dread, XAL1( TSCP ) );
EXTERNTSCP( scrt2_try_2dto_2dread_v );

TSCP  scrt2_string_2d_3enumber( s4220, r4221 )
        TSCP  s4220, r4221;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6189 );
        X1 = scrt3_string_2d_3elist( s4220 );
        if  ( FALSE( r4221 ) )  goto L6191;
        if  ( EQ( TSCPTAG( r4221 ), PAIRTAG ) )  goto L6194;
        scrt1__24__car_2derror( r4221 );
L6194:
        X3 = PAIR_CAR( r4221 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6197;
        X2 = c4275;
        goto L6192;
L6197:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6199;
        X2 = c4274;
        goto L6192;
L6199:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6201;
        X2 = sc_emptystring;
        goto L6192;
L6201:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6203;
        X2 = c4273;
        goto L6192;
L6203:
        X2 = scdebug_error( c4267, 
                            c4268, 
                            CONS( PAIR_CAR( r4221 ), EMPTYLIST ) );
        goto L6192;
L6191:
        X2 = sc_emptystring;
L6192:
        X3 = sc_emptystring;
        X4 = X3;
        X5 = X1;
L6209:
        if  ( FALSE( X5 ) )  goto L6210;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6213;
        scrt1__24__car_2derror( X5 );
L6213:
        X6 = PAIR_CAR( X5 );
        if  ( FALSE( scrt1_memv( X6, c4235 ) ) )  goto L6216;
        X7 = sc_make_2dstring( _TSCP( 4 ), 
                               CONS( PAIR_CAR( X5 ), EMPTYLIST ) );
        X5 = PAIR_CDR( X5 );
        X4 = X7;
        GOBACK( L6209 );
L6216:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 8978 ) ) ) )  goto L6220;
        POPSTACKTRACE( scrt2_try_2dto_2dread( s4220 ) );
L6220:
        X8 = CONS( scrt3_list_2d_3estring( X5 ), EMPTYLIST );
        X8 = CONS( X2, X8 );
        X7 = scrt3_string_2dappend( CONS( X4, X8 ) );
        POPSTACKTRACE( scrt2_try_2dto_2dread( X7 ) );
L6210:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_try_2dto_2dread_v );
DEFCSTRING( t6222, "SCRT2_TRY-TO-READ" );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );

TSCP  scrt2_l4286( x4287, c6227 )
        TSCP  x4287, c6227;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt2_l4286 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c6227, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c6227, 1 );
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

TSCP  scrt2_l4282( r4283, c6224 )
        TSCP  r4283, c6224;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "scrt2_l4282 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c6224, 0 );
        DISPLAY( 1 ) = r4283;
        DISPLAY( 2 ) = scdebug__2aerror_2dhandler_2a_v;
        scdebug__2aerror_2dhandler_2a_v = MAKEPROCEDURE( 0, 
                                                         1, 
                                                         scrt2_l4286, 
                                                         MAKECLOSURE( EMPTYLIST, 
                                                                      2, 
                                                                      DISPLAY( 2 ), 
                                                                      DISPLAY( 1 ) ) );
        X5 = scrt5_open_2dinput_2dstring( DISPLAY( 0 ) );
        X3 = scrt6_read( CONS( X5, EMPTYLIST ) );
        X4 = scrt6_read( CONS( X5, EMPTYLIST ) );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 2 );
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6235;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L6235;
        X2 = FALSEVALUE;
        goto L6240;
L6235:
        if  ( FALSE( scrt6_eof_2dobject_3f( X4 ) ) )  goto L6239;
        X2 = X3;
        goto L6240;
L6239:
        X2 = FALSEVALUE;
L6240:
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  scrt2_try_2dto_2dread( s4281 )
        TSCP  s4281;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6222 );
        DISPLAY( 0 ) = s4281;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt2_l4282, 
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
        sc_segv__handlers();
        INITIALIZEVAR( t4809, 
                       ADR( scrt2_symbol_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4811, 
                       ADR( scrt2_symbol_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4816, 
                       ADR( scrt2_top_2dlevel_2dvalue_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_top_2dlevel_2dvalue, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4820, 
                       ADR( scrt2_2dvalue_21_c9d2a496_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_2dvalue_21_c9d2a496, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4824, 
                       ADR( scrt2_getprop_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_getprop, EMPTYLIST ) );
        INITIALIZEVAR( t4848, 
                       ADR( scrt2_getprop_2dall_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_getprop_2dall, EMPTYLIST ) );
        INITIALIZEVAR( t4852, 
                       ADR( scrt2_putprop_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, scrt2_putprop, EMPTYLIST ) );
        INITIALIZEVAR( t4901, 
                       ADR( scrt2_fixed_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_fixed_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4903, 
                       ADR( scrt2_float_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_float_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4905, 
                       ADR( scrt2_float_2d_3efixed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_float_2d_3efixed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4918, 
                       ADR( scrt2_fixed_2d_3efloat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_fixed_2d_3efloat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4923, 
                       ADR( scrt2_number_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_number_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4927, 
                       ADR( scrt2_complex_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_complex_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4931, 
                       ADR( scrt2_real_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_real_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4935, 
                       ADR( scrt2_rational_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_rational_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4939, 
                       ADR( scrt2_integer_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_integer_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4948, 
                       ADR( scrt2_zero_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_zero_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4952, 
                       ADR( scrt2_positive_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_positive_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4956, 
                       ADR( scrt2_negative_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_negative_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4960, 
                       ADR( scrt2_odd_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_odd_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4985, 
                       ADR( scrt2_even_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_even_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5008, 
                       ADR( scrt2_exact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5015, 
                       ADR( scrt2_inexact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5022, 
                       ADR( scrt2__3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5041, 
                       ADR( scrt2__3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3d, EMPTYLIST ) );
        INITIALIZEVAR( t5066, 
                       ADR( scrt2__3c_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5085, 
                       ADR( scrt2__3c_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c, EMPTYLIST ) );
        INITIALIZEVAR( t5110, 
                       ADR( scrt2__3e_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5129, 
                       ADR( scrt2__3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e, EMPTYLIST ) );
        INITIALIZEVAR( t5154, 
                       ADR( scrt2__3c_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5173, 
                       ADR( scrt2__3c_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5198, 
                       ADR( scrt2__3e_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5217, 
                       ADR( scrt2__3e_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5242, 
                       ADR( scrt2_max_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_max_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5250, 
                       ADR( scrt2_max_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_max, EMPTYLIST ) );
        INITIALIZEVAR( t5271, 
                       ADR( scrt2_min_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_min_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5279, 
                       ADR( scrt2_min_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_min, EMPTYLIST ) );
        INITIALIZEVAR( t5300, 
                       ADR( scrt2__2b_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2b_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5319, 
                       ADR( scrt2__2b_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2b, EMPTYLIST ) );
        INITIALIZEVAR( t5332, 
                       ADR( scrt2__2a_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2a_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5351, 
                       ADR( scrt2__2a_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2a, EMPTYLIST ) );
        INITIALIZEVAR( t5364, 
                       ADR( scrt2__2d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5383, 
                       ADR( scrt2__2d_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2d, EMPTYLIST ) );
        INITIALIZEVAR( t5408, 
                       ADR( scrt2__2f_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2f_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5436, 
                       ADR( scrt2__2f_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2f, EMPTYLIST ) );
        INITIALIZEVAR( t5490, 
                       ADR( scrt2_abs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_abs, EMPTYLIST ) );
        INITIALIZEVAR( t5502, 
                       ADR( scrt2_quotient_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_quotient, EMPTYLIST ) );
        INITIALIZEVAR( t5523, 
                       ADR( scrt2_remainder_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_remainder, EMPTYLIST ) );
        INITIALIZEVAR( t5546, 
                       ADR( scrt2_modulo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_modulo, EMPTYLIST ) );
        INITIALIZEVAR( t5594, 
                       ADR( scrt2_gcd_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_gcd, EMPTYLIST ) );
        INITIALIZEVAR( t5682, 
                       ADR( scrt2_lcm_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_lcm, EMPTYLIST ) );
        INITIALIZEVAR( t5794, 
                       ADR( scrt2_floor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_floor, EMPTYLIST ) );
        INITIALIZEVAR( t5798, 
                       ADR( scrt2_ceiling_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_ceiling, EMPTYLIST ) );
        INITIALIZEVAR( t5802, 
                       ADR( scrt2_truncate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_truncate, EMPTYLIST ) );
        INITIALIZEVAR( t5813, 
                       ADR( scrt2_round_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_round, EMPTYLIST ) );
        INITIALIZEVAR( t5819, 
                       ADR( scrt2_exp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exp, EMPTYLIST ) );
        INITIALIZEVAR( t5821, 
                       ADR( scrt2_log_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_log, EMPTYLIST ) );
        INITIALIZEVAR( t5823, 
                       ADR( scrt2_sin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sin, EMPTYLIST ) );
        INITIALIZEVAR( t5825, 
                       ADR( scrt2_cos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_cos, EMPTYLIST ) );
        INITIALIZEVAR( t5827, 
                       ADR( scrt2_tan_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_tan, EMPTYLIST ) );
        INITIALIZEVAR( t5829, 
                       ADR( scrt2_asin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_asin, EMPTYLIST ) );
        INITIALIZEVAR( t5831, 
                       ADR( scrt2_acos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_acos, EMPTYLIST ) );
        INITIALIZEVAR( t5833, 
                       ADR( scrt2_atan_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_atan, EMPTYLIST ) );
        INITIALIZEVAR( t5840, 
                       ADR( scrt2_sqrt_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sqrt, EMPTYLIST ) );
        INITIALIZEVAR( t5870, 
                       ADR( scrt2_expt_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_expt, EMPTYLIST ) );
        INITIALIZEVAR( t5919, 
                       ADR( scrt2_exact_2d_3einexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_exact_2d_3einexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5926, 
                       ADR( scrt2_inexact_2d_3eexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_2d_3eexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5941, 
                       ADR( scrt2_number_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_number_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6104, 
                       ADR( scrt2_integer_2d_3estring_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_integer_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6189, 
                       ADR( scrt2_string_2d_3enumber_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_string_2d_3enumber, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6222, 
                       ADR( scrt2_try_2dto_2dread_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_try_2dto_2dread, EMPTYLIST ) );
        return;
}
