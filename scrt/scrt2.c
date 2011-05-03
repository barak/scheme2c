
/* SCHEME->C */

#include <objects.h>

void scrt2__init();
DEFCSTRING( t4776, "#b" );
DEFSTATICTSCP( c4268 );
DEFCSTRING( t4777, "#o" );
DEFSTATICTSCP( c4267 );
DEFCSTRING( t4778, "#x" );
DEFSTATICTSCP( c4266 );
DEFCSTRING( t4779, "Argument is not a RADIX: ~s" );
DEFSTATICTSCP( c4261 );
DEFSTATICTSCP( c4260 );
DEFSTATICTSCP( c4228 );
DEFCSTRING( t4780, "-" );
DEFSTATICTSCP( c4197 );
DEFCSTRING( t4781, "0123456789abcdef" );
DEFSTATICTSCP( c4170 );
DEFCSTRING( t4782, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c4169 );
DEFSTATICTSCP( c4168 );
DEFCSTRING( t4783, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c4147 );
DEFSTATICTSCP( c4146 );
DEFCSTRING( t4784, "~s" );
DEFSTATICTSCP( c4064 );
DEFCSTRING( t4785, "Argument is not a RADIX or FORMAT DESCRIPTOR: ~s" );
DEFSTATICTSCP( c4062 );
DEFSTATICTSCP( c3990 );
DEFSTATICTSCP( c3927 );
DEFSTATICTSCP( c3897 );
DEFSTATICTSCP( t4786 );
DEFSTATICTSCP( c3891 );
DEFSTATICTSCP( c3869 );
DEFSTATICTSCP( c3858 );
DEFSTATICTSCP( c3851 );
DEFSTATICTSCP( c3800 );
DEFCSTRING( t4787, "Argument must be a non-negative NUMBER: ~s" );
DEFSTATICTSCP( c3761 );
DEFSTATICTSCP( c3760 );
DEFSTATICTSCP( c3730 );
DEFCSTRING( t4788, "Divisor is equal to 0: ~s" );
DEFSTATICTSCP( c3155 );
DEFSTATICTSCP( c3145 );
DEFSTATICTSCP( c3075 );
DEFSTATICTSCP( c3028 );
DEFSTATICTSCP( c2982 );
DEFSTATICTSCP( c2842 );
DEFSTATICTSCP( c2778 );
DEFSTATICTSCP( c2714 );
DEFSTATICTSCP( c2650 );
DEFCSTRING( t4789, "Argument not a NUMBER: ~s" );
DEFSTATICTSCP( c2582 );
DEFCSTRING( t4790, "Argument(s) not a NUMBER: ~s ~s" );
DEFSTATICTSCP( c2579 );
DEFSTATICTSCP( c2578 );
DEFSTATICTSCP( c2560 );
DEFCSTRING( t4791, "Argument is not a NUMBER: ~s" );
DEFSTATICTSCP( c2543 );
DEFSTATICTSCP( c2542 );
DEFCSTRING( t4792, "Argument is not an FIXED: ~s" );
DEFSTATICTSCP( c2324 );
DEFSTATICTSCP( c2323 );
DEFCSTRING( t4793, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2316 );
DEFCSTRING( t4794, "Argument is not a FLOAT: ~s" );
DEFSTATICTSCP( c2311 );
DEFSTATICTSCP( c2310 );
DEFSTATICTSCP( c2273 );
DEFCSTRING( t4795, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2253 );
DEFSTATICTSCP( c2252 );
DEFSTATICTSCP( c2209 );
DEFSTATICTSCP( c2202 );
DEFSTATICTSCP( c2158 );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2146 );
DEFCSTRING( t4796, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2141 );
DEFSTATICTSCP( c2140 );

static void  init_constants()
{
        c4268 = CSTRING_TSCP( t4776 );
        CONSTANTEXP( ADR( c4268 ) );
        c4267 = CSTRING_TSCP( t4777 );
        CONSTANTEXP( ADR( c4267 ) );
        c4266 = CSTRING_TSCP( t4778 );
        CONSTANTEXP( ADR( c4266 ) );
        c4261 = CSTRING_TSCP( t4779 );
        CONSTANTEXP( ADR( c4261 ) );
        c4260 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING->NUMBER" ) );
        CONSTANTEXP( ADR( c4260 ) );
        c4228 = EMPTYLIST;
        c4228 = CONS( _TSCP( 11026 ), c4228 );
        c4228 = CONS( _TSCP( 11538 ), c4228 );
        CONSTANTEXP( ADR( c4228 ) );
        c4197 = CSTRING_TSCP( t4780 );
        CONSTANTEXP( ADR( c4197 ) );
        c4170 = CSTRING_TSCP( t4781 );
        CONSTANTEXP( ADR( c4170 ) );
        c4169 = CSTRING_TSCP( t4782 );
        CONSTANTEXP( ADR( c4169 ) );
        c4168 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c4168 ) );
        c4147 = CSTRING_TSCP( t4783 );
        CONSTANTEXP( ADR( c4147 ) );
        c4146 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c4146 ) );
        c4064 = CSTRING_TSCP( t4784 );
        CONSTANTEXP( ADR( c4064 ) );
        c4062 = CSTRING_TSCP( t4785 );
        CONSTANTEXP( ADR( c4062 ) );
        c3990 = STRINGTOSYMBOL( CSTRING_TSCP( "SCI" ) );
        CONSTANTEXP( ADR( c3990 ) );
        c3927 = STRINGTOSYMBOL( CSTRING_TSCP( "FIX" ) );
        CONSTANTEXP( ADR( c3927 ) );
        c3897 = EMPTYLIST;
        t4786 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c3897 = CONS( t4786, c3897 );
        CONSTANTEXP( ADR( c3897 ) );
        c3891 = STRINGTOSYMBOL( CSTRING_TSCP( "NUMBER->STRING" ) );
        CONSTANTEXP( ADR( c3891 ) );
        c3869 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT->EXACT" ) );
        CONSTANTEXP( ADR( c3869 ) );
        c3858 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT->INEXACT" ) );
        CONSTANTEXP( ADR( c3858 ) );
        c3851 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c3851 ) );
        c3800 = DOUBLE_TSCP( 0. );
        CONSTANTEXP( ADR( c3800 ) );
        c3761 = CSTRING_TSCP( t4787 );
        CONSTANTEXP( ADR( c3761 ) );
        c3760 = STRINGTOSYMBOL( CSTRING_TSCP( "SQRT" ) );
        CONSTANTEXP( ADR( c3760 ) );
        c3730 = DOUBLE_TSCP( 0.5 );
        CONSTANTEXP( ADR( c3730 ) );
        c3155 = CSTRING_TSCP( t4788 );
        CONSTANTEXP( ADR( c3155 ) );
        c3145 = STRINGTOSYMBOL( CSTRING_TSCP( "/" ) );
        CONSTANTEXP( ADR( c3145 ) );
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
        c2582 = CSTRING_TSCP( t4789 );
        CONSTANTEXP( ADR( c2582 ) );
        c2579 = CSTRING_TSCP( t4790 );
        CONSTANTEXP( ADR( c2579 ) );
        c2578 = STRINGTOSYMBOL( CSTRING_TSCP( "=" ) );
        CONSTANTEXP( ADR( c2578 ) );
        c2560 = STRINGTOSYMBOL( CSTRING_TSCP( "INEXACT?" ) );
        CONSTANTEXP( ADR( c2560 ) );
        c2543 = CSTRING_TSCP( t4791 );
        CONSTANTEXP( ADR( c2543 ) );
        c2542 = STRINGTOSYMBOL( CSTRING_TSCP( "EXACT?" ) );
        CONSTANTEXP( ADR( c2542 ) );
        c2324 = CSTRING_TSCP( t4792 );
        CONSTANTEXP( ADR( c2324 ) );
        c2323 = STRINGTOSYMBOL( CSTRING_TSCP( "FIXED->FLOAT" ) );
        CONSTANTEXP( ADR( c2323 ) );
        c2316 = CSTRING_TSCP( t4793 );
        CONSTANTEXP( ADR( c2316 ) );
        c2311 = CSTRING_TSCP( t4794 );
        CONSTANTEXP( ADR( c2311 ) );
        c2310 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT->FIXED" ) );
        CONSTANTEXP( ADR( c2310 ) );
        c2273 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2273 ) );
        c2253 = CSTRING_TSCP( t4795 );
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
        c2141 = CSTRING_TSCP( t4796 );
        CONSTANTEXP( ADR( c2141 ) );
        c2140 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2140 ) );
}

DEFTSCP( scrt2_symbol_3f_v );
DEFCSTRING( t4797, "SYMBOL?" );

TSCP  scrt2_symbol_3f( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t4797 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2131 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2131 ), 
                                         SYMBOLTAG ) ) ) );
}

DEFTSCP( scrt2_symbol_2d_3estring_v );
DEFCSTRING( t4799, "SYMBOL->STRING" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt2_symbol_2d_3estring( x2135 )
        TSCP  x2135;
{
        PUSHSTACKTRACE( t4799 );
        if  ( AND( EQ( TSCPTAG( x2135 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2135 ), SYMBOLTAG ) )
            )  goto L4802;
        scdebug_error( c2140, 
                       c2141, CONS( x2135, EMPTYLIST ) );
L4802:
        POPSTACKTRACE( SYMBOL_NAME( x2135 ) );
}

DEFTSCP( scrt2_top_2dlevel_2dvalue_v );
DEFCSTRING( t4804, "TOP-LEVEL-VALUE" );

TSCP  scrt2_top_2dlevel_2dvalue( s2143 )
        TSCP  s2143;
{
        PUSHSTACKTRACE( t4804 );
        if  ( AND( EQ( TSCPTAG( s2143 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2143 ), SYMBOLTAG ) )
            )  goto L4806;
        scdebug_error( c2146, 
                       c2141, CONS( s2143, EMPTYLIST ) );
L4806:
        POPSTACKTRACE( SYMBOL_VALUE( s2143 ) );
}

DEFTSCP( scrt2_2dvalue_21_c9d2a496_v );
DEFCSTRING( t4808, "SET-TOP-LEVEL-VALUE!" );

TSCP  scrt2_2dvalue_21_c9d2a496( s2148, v2149 )
        TSCP  s2148, v2149;
{
        PUSHSTACKTRACE( t4808 );
        if  ( AND( EQ( TSCPTAG( s2148 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2148 ), SYMBOLTAG ) )
            )  goto L4810;
        scdebug_error( c2152, 
                       c2141, CONS( s2148, EMPTYLIST ) );
L4810:
        POPSTACKTRACE( SETGENTL( SYMBOL_VALUE( s2148 ), v2149 ) );
}

DEFTSCP( scrt2_getprop_v );
DEFCSTRING( t4812, "GETPROP" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  scrt2_getprop( s2154, k2155 )
        TSCP  s2154, k2155;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4812 );
        if  ( AND( EQ( TSCPTAG( s2154 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2154 ), SYMBOLTAG ) )
            )  goto L4814;
        scdebug_error( c2158, 
                       c2141, CONS( s2154, EMPTYLIST ) );
L4814:
        X1 = SYMBOL_PROPERTYLIST( s2154 );
        X2 = X1;
L4818:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4819;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4824;
        scrt1__24__car_2derror( X2 );
L4824:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( k2155 ) ) )  goto L4821;
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4828;
        scrt1__24__car_2derror( X3 );
L4828:
        POPSTACKTRACE( PAIR_CAR( X3 ) );
L4821:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4831;
        scrt1__24__cdr_2derror( X2 );
L4831:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4834;
        scrt1__24__cdr_2derror( X3 );
L4834:
        X2 = PAIR_CDR( X3 );
        GOBACK( L4818 );
L4819:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_getprop_2dall_v );
DEFCSTRING( t4836, "GETPROP-ALL" );

TSCP  scrt2_getprop_2dall( s2199 )
        TSCP  s2199;
{
        PUSHSTACKTRACE( t4836 );
        if  ( AND( EQ( TSCPTAG( s2199 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2199 ), SYMBOLTAG ) )
            )  goto L4838;
        scdebug_error( c2202, 
                       c2141, CONS( s2199, EMPTYLIST ) );
L4838:
        POPSTACKTRACE( SYMBOL_PROPERTYLIST( s2199 ) );
}

DEFTSCP( scrt2_putprop_v );
DEFCSTRING( t4840, "PUTPROP" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt2_putprop( s2204, k2205, v2206 )
        TSCP  s2204, k2205, v2206;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4840 );
        if  ( AND( EQ( TSCPTAG( s2204 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s2204 ), SYMBOLTAG ) )
            )  goto L4842;
        scdebug_error( c2209, 
                       c2141, CONS( s2204, EMPTYLIST ) );
L4842:
        X1 = SYMBOL_PROPERTYLIST( s2204 );
        X2 = X1;
        X3 = EMPTYLIST;
L4846:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4847;
        if  ( EQ( _S2CUINT( v2206 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L4859;
        if  ( FALSE( X3 ) )  goto L4851;
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4855;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4855:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4859;
L4851:
        X6 = sc_cons( v2206, EMPTYLIST );
        X5 = sc_cons( k2205, X6 );
        X4 = X5;
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4859;
L4847:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4861;
        scrt1__24__car_2derror( X2 );
L4861:
        X4 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( k2205 ) ) )  goto L4858;
        if  ( NEQ( _S2CUINT( v2206 ), 
                   _S2CUINT( FALSEVALUE ) ) )  goto L4863;
        if  ( FALSE( X3 ) )  goto L4865;
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4869;
        scrt1__24__cdr_2derror( X5 );
L4869:
        X4 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4872;
        scdebug_error( c2273, 
                       c2253, CONS( X3, EMPTYLIST ) );
L4872:
        SETGEN( PAIR_CDR( X3 ), X4 );
        goto L4859;
L4865:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4876;
        scrt1__24__cdr_2derror( X5 );
L4876:
        X4 = PAIR_CDR( X5 );
        SETGEN( SYMBOL_PROPERTYLIST( s2204 ), X4 );
        goto L4859;
L4863:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4880;
        scdebug_error( c2252, 
                       c2253, CONS( X4, EMPTYLIST ) );
L4880:
        SETGEN( PAIR_CAR( X4 ), v2206 );
        goto L4859;
L4858:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4883;
        scrt1__24__cdr_2derror( X2 );
L4883:
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4886;
        scrt1__24__cdr_2derror( X5 );
L4886:
        X4 = PAIR_CDR( X5 );
        X3 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L4846 );
L4859:
        POPSTACKTRACE( v2206 );
}

DEFTSCP( scrt2_fixed_3f_v );
DEFCSTRING( t4889, "FIXED?" );

TSCP  scrt2_fixed_3f( x2297 )
        TSCP  x2297;
{
        PUSHSTACKTRACE( t4889 );
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2297 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_float_3f_v );
DEFCSTRING( t4891, "FLOAT?" );

TSCP  scrt2_float_3f( x2301 )
        TSCP  x2301;
{
        PUSHSTACKTRACE( t4891 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2301 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2301 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2_float_2d_3efixed_v );
DEFCSTRING( t4893, "FLOAT->FIXED" );

TSCP  scrt2_float_2d_3efixed( x2305 )
        TSCP  x2305;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4893 );
        if  ( AND( EQ( TSCPTAG( x2305 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2305 ), DOUBLEFLOATTAG ) )
            )  goto L4896;
        scdebug_error( c2310, 
                       c2311, CONS( x2305, EMPTYLIST ) );
L4896:
        X1 = BOOLEAN( LT( FLOAT_VALUE( x2305 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L4902;
        if  ( LTE( FLOAT_VALUE( x2305 ), MAXTSCPINTF ) )  goto L4905;
L4902:
        scdebug_error( c2310, 
                       c2316, CONS( x2305, EMPTYLIST ) );
L4905:
        POPSTACKTRACE( FLT_FIX( x2305 ) );
}

DEFTSCP( scrt2_fixed_2d_3efloat_v );
DEFCSTRING( t4906, "FIXED->FLOAT" );

TSCP  scrt2_fixed_2d_3efloat( x2318 )
        TSCP  x2318;
{
        PUSHSTACKTRACE( t4906 );
        if  ( EQ( TSCPTAG( x2318 ), FIXNUMTAG ) )  goto L4909;
        scdebug_error( c2323, 
                       c2324, CONS( x2318, EMPTYLIST ) );
L4909:
        POPSTACKTRACE( FIX_FLT( x2318 ) );
}

DEFTSCP( scrt2_number_3f_v );
DEFCSTRING( t4911, "NUMBER?" );

TSCP  scrt2_number_3f( x2326 )
        TSCP  x2326;
{
        PUSHSTACKTRACE( t4911 );
        if  ( EQ( TSCPTAG( x2326 ), FIXNUMTAG ) )  goto L4913;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2326 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2326 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4913:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_complex_3f_v );
DEFCSTRING( t4915, "COMPLEX?" );

TSCP  scrt2_complex_3f( x2336 )
        TSCP  x2336;
{
        PUSHSTACKTRACE( t4915 );
        if  ( EQ( TSCPTAG( x2336 ), FIXNUMTAG ) )  goto L4917;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2336 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2336 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4917:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_real_3f_v );
DEFCSTRING( t4919, "REAL?" );

TSCP  scrt2_real_3f( x2346 )
        TSCP  x2346;
{
        PUSHSTACKTRACE( t4919 );
        if  ( EQ( TSCPTAG( x2346 ), FIXNUMTAG ) )  goto L4921;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2346 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2346 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4921:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_rational_3f_v );
DEFCSTRING( t4923, "RATIONAL?" );

TSCP  scrt2_rational_3f( x2356 )
        TSCP  x2356;
{
        PUSHSTACKTRACE( t4923 );
        if  ( EQ( TSCPTAG( x2356 ), FIXNUMTAG ) )  goto L4925;
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2356 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2356 ), 
                                         DOUBLEFLOATTAG ) ) ) );
L4925:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_integer_3f_v );
DEFCSTRING( t4927, "INTEGER?" );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  scrt2_integer_3f( x2370 )
        TSCP  x2370;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4927 );
        if  ( EQ( TSCPTAG( x2370 ), FIXNUMTAG ) )  goto L4929;
        if  ( NOT( AND( EQ( TSCPTAG( x2370 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2370 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4931;
        X1 = scrt2_round( x2370 );
        if  ( BITAND( BITOR( _S2CINT( x2370 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L4934;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2370 ), 
                                    _S2CUINT( X1 ) ) ) );
L4934:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2370, X1 ) );
L4931:
        POPSTACKTRACE( FALSEVALUE );
L4929:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt2_zero_3f_v );
DEFCSTRING( t4936, "ZERO?" );

TSCP  scrt2_zero_3f( x2395 )
        TSCP  x2395;
{
        PUSHSTACKTRACE( t4936 );
        if  ( BITAND( BITOR( _S2CINT( x2395 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4938;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2395 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L4938:
        POPSTACKTRACE( scrt2__3d_2dtwo( x2395, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_positive_3f_v );
DEFCSTRING( t4940, "POSITIVE?" );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );

TSCP  scrt2_positive_3f( x2406 )
        TSCP  x2406;
{
        PUSHSTACKTRACE( t4940 );
        if  ( BITAND( BITOR( _S2CINT( x2406 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4942;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2406 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4942:
        POPSTACKTRACE( scrt2__3e_2dtwo( x2406, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_negative_3f_v );
DEFCSTRING( t4944, "NEGATIVE?" );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  scrt2_negative_3f( x2414 )
        TSCP  x2414;
{
        PUSHSTACKTRACE( t4944 );
        if  ( BITAND( BITOR( _S2CINT( x2414 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4946;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2414 ), 
                                    _S2CINT( _TSCP( 0 ) ) ) ) );
L4946:
        POPSTACKTRACE( scrt2__3c_2dtwo( x2414, _TSCP( 0 ) ) );
}

DEFTSCP( scrt2_odd_3f_v );
DEFCSTRING( t4948, "ODD?" );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );

TSCP  scrt2_odd_3f( x2422 )
        TSCP  x2422;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4948 );
        if  ( NEQ( TSCPTAG( x2422 ), FIXNUMTAG ) )  goto L4950;
        X1 = TRUEVALUE;
        goto L4953;
L4950:
        if  ( NOT( AND( EQ( TSCPTAG( x2422 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2422 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4952;
        X2 = scrt2_round( x2422 );
        if  ( BITAND( BITOR( _S2CINT( x2422 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4955;
        X1 = BOOLEAN( EQ( _S2CUINT( x2422 ), 
                          _S2CUINT( X2 ) ) );
        goto L4953;
L4955:
        X1 = scrt2__3d_2dtwo( x2422, X2 );
        goto L4953;
L4952:
        X1 = FALSEVALUE;
L4953:
        if  ( FALSE( X1 ) )  goto L4958;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2422 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L4966;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4966;
        X2 = _TSCP( REMAINDER( _S2CINT( x2422 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L4967;
L4966:
        X2 = scrt2_remainder( x2422, _TSCP( 8 ) );
L4967:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4969;
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CUINT( X2 ), 
                                     _S2CUINT( _TSCP( 0 ) ) ) ) );
L4969:
        if  ( TRUE( scrt2_zero_3f( X2 ) ) )  goto L4971;
        POPSTACKTRACE( TRUEVALUE );
L4971:
        POPSTACKTRACE( FALSEVALUE );
L4958:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_even_3f_v );
DEFCSTRING( t4973, "EVEN?" );

TSCP  scrt2_even_3f( x2476 )
        TSCP  x2476;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4973 );
        if  ( NEQ( TSCPTAG( x2476 ), FIXNUMTAG ) )  goto L4975;
        X1 = TRUEVALUE;
        goto L4978;
L4975:
        if  ( NOT( AND( EQ( TSCPTAG( x2476 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2476 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L4977;
        X2 = scrt2_round( x2476 );
        if  ( BITAND( BITOR( _S2CINT( x2476 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4980;
        X1 = BOOLEAN( EQ( _S2CUINT( x2476 ), 
                          _S2CUINT( X2 ) ) );
        goto L4978;
L4980:
        X1 = scrt2__3d_2dtwo( x2476, X2 );
        goto L4978;
L4977:
        X1 = FALSEVALUE;
L4978:
        if  ( FALSE( X1 ) )  goto L4983;
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x2476 ), 
                                          _S2CINT( _TSCP( 8 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L4991;
        if  ( EQ( _S2CUINT( _TSCP( 8 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4991;
        X2 = _TSCP( REMAINDER( _S2CINT( x2476 ), 
                               _S2CINT( _TSCP( 8 ) ) ) );
        goto L4992;
L4991:
        X2 = scrt2_remainder( x2476, _TSCP( 8 ) );
L4992:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4994;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( _TSCP( 0 ) ) ) ) );
L4994:
        POPSTACKTRACE( scrt2_zero_3f( X2 ) );
L4983:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_exact_3f_v );
DEFCSTRING( t4996, "EXACT?" );

TSCP  scrt2_exact_3f( x2529 )
        TSCP  x2529;
{
        PUSHSTACKTRACE( t4996 );
        if  ( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) )  goto L5001;
        if  ( AND( EQ( TSCPTAG( x2529 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2529 ), DOUBLEFLOATTAG ) )
            )  goto L5001;
        scdebug_error( c2542, 
                       c2543, CONS( x2529, EMPTYLIST ) );
L5001:
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2529 ), FIXNUMTAG ) ) );
}

DEFTSCP( scrt2_inexact_3f_v );
DEFCSTRING( t5003, "INEXACT?" );

TSCP  scrt2_inexact_3f( x2547 )
        TSCP  x2547;
{
        PUSHSTACKTRACE( t5003 );
        if  ( EQ( TSCPTAG( x2547 ), FIXNUMTAG ) )  goto L5008;
        if  ( AND( EQ( TSCPTAG( x2547 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2547 ), DOUBLEFLOATTAG ) )
            )  goto L5008;
        scdebug_error( c2560, 
                       c2543, CONS( x2547, EMPTYLIST ) );
L5008:
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2547 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2547 ), 
                                         DOUBLEFLOATTAG ) ) ) );
}

DEFTSCP( scrt2__3d_2dtwo_v );
DEFCSTRING( t5010, "SCRT2_=-TWO" );

TSCP  scrt2__3d_2dtwo( x2564, y2565 )
        TSCP  x2564, y2565;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5010 );
        if  ( NEQ( TSCPTAG( x2564 ), FIXNUMTAG ) )  goto L5012;
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5014;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( x2564 ), 
                                    _S2CINT( y2565 ) ) ) );
L5014:
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5016;
        POPSTACKTRACE( BOOLEAN( EQ( FIX_FLTV( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5016:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( y2565, EMPTYLIST ) ) );
L5012:
        if  ( NEQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L5018;
        if  ( NOT( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2564 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5020;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FIX_FLTV( y2565 ) ) ) );
L5020:
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2582, 
                                      CONS( x2564, EMPTYLIST ) ) );
L5018:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2564 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5028;
        if  ( NOT( AND( EQ( TSCPTAG( y2565 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2565 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5028;
        POPSTACKTRACE( BOOLEAN( EQ( FLOAT_VALUE( x2564 ), 
                                    FLOAT_VALUE( y2565 ) ) ) );
L5028:
        X1 = CONS( y2565, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2578, 
                                      c2579, 
                                      CONS( x2564, X1 ) ) );
}

DEFTSCP( scrt2__3d_v );
DEFCSTRING( t5029, "=" );

TSCP  scrt2__3d( x2588, y2589, z2590 )
        TSCP  x2588, y2589, z2590;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5029 );
        if  ( BITAND( BITOR( _S2CINT( x2588 ), 
                             _S2CINT( y2589 ) ), 
                      3 ) )  goto L5032;
        X1 = BOOLEAN( EQ( _S2CUINT( x2588 ), 
                          _S2CUINT( y2589 ) ) );
        goto L5033;
L5032:
        X1 = scrt2__3d_2dtwo( x2588, y2589 );
L5033:
        if  ( FALSE( X1 ) )  goto L5035;
        X2 = y2589;
        X3 = z2590;
L5037:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5038;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5041;
        scrt1__24__car_2derror( X3 );
L5041:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5045;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L5049;
        POPSTACKTRACE( FALSEVALUE );
L5045:
        if  ( TRUE( scrt2__3d_2dtwo( X2, X4 ) ) )  goto L5049;
        POPSTACKTRACE( FALSEVALUE );
L5038:
        POPSTACKTRACE( TRUEVALUE );
L5049:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5037 );
L5035:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_2dtwo_v );
DEFCSTRING( t5054, "SCRT2_<-TWO" );

TSCP  scrt2__3c_2dtwo( x2636, y2637 )
        TSCP  x2636, y2637;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5054 );
        if  ( NEQ( TSCPTAG( x2636 ), FIXNUMTAG ) )  goto L5056;
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5058;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2636 ), 
                                    _S2CINT( y2637 ) ) ) );
L5058:
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5060;
        POPSTACKTRACE( BOOLEAN( LT( FIX_FLTV( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5060:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( y2637, EMPTYLIST ) ) );
L5056:
        if  ( NEQ( TSCPTAG( y2637 ), FIXNUMTAG ) )  goto L5062;
        if  ( NOT( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2636 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5064;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FIX_FLTV( y2637 ) ) ) );
L5064:
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2582, 
                                      CONS( x2636, EMPTYLIST ) ) );
L5062:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2636 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2636 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5072;
        if  ( NOT( AND( EQ( TSCPTAG( y2637 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2637 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5072;
        POPSTACKTRACE( BOOLEAN( LT( FLOAT_VALUE( x2636 ), 
                                    FLOAT_VALUE( y2637 ) ) ) );
L5072:
        X1 = CONS( y2637, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2650, 
                                      c2579, 
                                      CONS( x2636, X1 ) ) );
}

DEFTSCP( scrt2__3c_v );
DEFCSTRING( t5073, "<" );

TSCP  scrt2__3c( x2658, y2659, z2660 )
        TSCP  x2658, y2659, z2660;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5073 );
        if  ( BITAND( BITOR( _S2CINT( x2658 ), 
                             _S2CINT( y2659 ) ), 
                      3 ) )  goto L5076;
        X1 = BOOLEAN( LT( _S2CINT( x2658 ), 
                          _S2CINT( y2659 ) ) );
        goto L5077;
L5076:
        X1 = scrt2__3c_2dtwo( x2658, y2659 );
L5077:
        if  ( FALSE( X1 ) )  goto L5079;
        X2 = y2659;
        X3 = z2660;
L5081:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5082;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5085;
        scrt1__24__car_2derror( X3 );
L5085:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5089;
        if  ( LT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5093;
        POPSTACKTRACE( FALSEVALUE );
L5089:
        if  ( TRUE( scrt2__3c_2dtwo( X2, X4 ) ) )  goto L5093;
        POPSTACKTRACE( FALSEVALUE );
L5082:
        POPSTACKTRACE( TRUEVALUE );
L5093:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5081 );
L5079:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_2dtwo_v );
DEFCSTRING( t5098, "SCRT2_>-TWO" );

TSCP  scrt2__3e_2dtwo( x2700, y2701 )
        TSCP  x2700, y2701;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5098 );
        if  ( NEQ( TSCPTAG( x2700 ), FIXNUMTAG ) )  goto L5100;
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5102;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2700 ), 
                                    _S2CINT( y2701 ) ) ) );
L5102:
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5104;
        POPSTACKTRACE( BOOLEAN( GT( FIX_FLTV( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5104:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( y2701, EMPTYLIST ) ) );
L5100:
        if  ( NEQ( TSCPTAG( y2701 ), FIXNUMTAG ) )  goto L5106;
        if  ( NOT( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2700 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5108;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FIX_FLTV( y2701 ) ) ) );
L5108:
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2582, 
                                      CONS( x2700, EMPTYLIST ) ) );
L5106:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2700 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2700 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5116;
        if  ( NOT( AND( EQ( TSCPTAG( y2701 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2701 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5116;
        POPSTACKTRACE( BOOLEAN( GT( FLOAT_VALUE( x2700 ), 
                                    FLOAT_VALUE( y2701 ) ) ) );
L5116:
        X1 = CONS( y2701, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2714, 
                                      c2579, 
                                      CONS( x2700, X1 ) ) );
}

DEFTSCP( scrt2__3e_v );
DEFCSTRING( t5117, ">" );

TSCP  scrt2__3e( x2722, y2723, z2724 )
        TSCP  x2722, y2723, z2724;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5117 );
        if  ( BITAND( BITOR( _S2CINT( x2722 ), 
                             _S2CINT( y2723 ) ), 
                      3 ) )  goto L5120;
        X1 = BOOLEAN( GT( _S2CINT( x2722 ), 
                          _S2CINT( y2723 ) ) );
        goto L5121;
L5120:
        X1 = scrt2__3e_2dtwo( x2722, y2723 );
L5121:
        if  ( FALSE( X1 ) )  goto L5123;
        X2 = y2723;
        X3 = z2724;
L5125:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5126;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5129;
        scrt1__24__car_2derror( X3 );
L5129:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5133;
        if  ( GT( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5137;
        POPSTACKTRACE( FALSEVALUE );
L5133:
        if  ( TRUE( scrt2__3e_2dtwo( X2, X4 ) ) )  goto L5137;
        POPSTACKTRACE( FALSEVALUE );
L5126:
        POPSTACKTRACE( TRUEVALUE );
L5137:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5125 );
L5123:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3c_3d_2dtwo_v );
DEFCSTRING( t5142, "SCRT2_<=-TWO" );

TSCP  scrt2__3c_3d_2dtwo( x2764, y2765 )
        TSCP  x2764, y2765;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5142 );
        if  ( NEQ( TSCPTAG( x2764 ), FIXNUMTAG ) )  goto L5144;
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5146;
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2764 ), 
                                     _S2CINT( y2765 ) ) ) );
L5146:
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5148;
        POPSTACKTRACE( BOOLEAN( LTE( FIX_FLTV( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5148:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( y2765, EMPTYLIST ) ) );
L5144:
        if  ( NEQ( TSCPTAG( y2765 ), FIXNUMTAG ) )  goto L5150;
        if  ( NOT( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2764 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5152;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FIX_FLTV( y2765 ) ) ) );
L5152:
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2582, 
                                      CONS( x2764, EMPTYLIST ) ) );
L5150:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2764 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2764 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5160;
        if  ( NOT( AND( EQ( TSCPTAG( y2765 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2765 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5160;
        POPSTACKTRACE( BOOLEAN( LTE( FLOAT_VALUE( x2764 ), 
                                     FLOAT_VALUE( y2765 ) ) ) );
L5160:
        X1 = CONS( y2765, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2778, 
                                      c2579, 
                                      CONS( x2764, X1 ) ) );
}

DEFTSCP( scrt2__3c_3d_v );
DEFCSTRING( t5161, "<=" );

TSCP  scrt2__3c_3d( x2786, y2787, z2788 )
        TSCP  x2786, y2787, z2788;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5161 );
        if  ( BITAND( BITOR( _S2CINT( x2786 ), 
                             _S2CINT( y2787 ) ), 
                      3 ) )  goto L5164;
        X1 = BOOLEAN( LTE( _S2CINT( x2786 ), 
                           _S2CINT( y2787 ) ) );
        goto L5165;
L5164:
        X1 = scrt2__3c_3d_2dtwo( x2786, y2787 );
L5165:
        if  ( FALSE( X1 ) )  goto L5167;
        X2 = y2787;
        X3 = z2788;
L5169:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5170;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5173;
        scrt1__24__car_2derror( X3 );
L5173:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5177;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5181;
        POPSTACKTRACE( FALSEVALUE );
L5177:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X2, X4 ) ) )  goto L5181;
        POPSTACKTRACE( FALSEVALUE );
L5170:
        POPSTACKTRACE( TRUEVALUE );
L5181:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5169 );
L5167:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__3e_3d_2dtwo_v );
DEFCSTRING( t5186, "SCRT2_>=-TWO" );

TSCP  scrt2__3e_3d_2dtwo( x2828, y2829 )
        TSCP  x2828, y2829;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5186 );
        if  ( NEQ( TSCPTAG( x2828 ), FIXNUMTAG ) )  goto L5188;
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5190;
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( x2828 ), 
                                     _S2CINT( y2829 ) ) ) );
L5190:
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5192;
        POPSTACKTRACE( BOOLEAN( GTE( FIX_FLTV( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5192:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( y2829, EMPTYLIST ) ) );
L5188:
        if  ( NEQ( TSCPTAG( y2829 ), FIXNUMTAG ) )  goto L5194;
        if  ( NOT( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2828 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5196;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FIX_FLTV( y2829 ) ) ) );
L5196:
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2582, 
                                      CONS( x2828, EMPTYLIST ) ) );
L5194:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2828 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2828 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5204;
        if  ( NOT( AND( EQ( TSCPTAG( y2829 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2829 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5204;
        POPSTACKTRACE( BOOLEAN( GTE( FLOAT_VALUE( x2828 ), 
                                     FLOAT_VALUE( y2829 ) ) ) );
L5204:
        X1 = CONS( y2829, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2842, 
                                      c2579, 
                                      CONS( x2828, X1 ) ) );
}

DEFTSCP( scrt2__3e_3d_v );
DEFCSTRING( t5205, ">=" );

TSCP  scrt2__3e_3d( x2850, y2851, z2852 )
        TSCP  x2850, y2851, z2852;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5205 );
        if  ( BITAND( BITOR( _S2CINT( x2850 ), 
                             _S2CINT( y2851 ) ), 
                      3 ) )  goto L5208;
        X1 = BOOLEAN( GTE( _S2CINT( x2850 ), 
                           _S2CINT( y2851 ) ) );
        goto L5209;
L5208:
        X1 = scrt2__3e_3d_2dtwo( x2850, y2851 );
L5209:
        if  ( FALSE( X1 ) )  goto L5211;
        X2 = y2851;
        X3 = z2852;
L5213:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5214;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5217;
        scrt1__24__car_2derror( X3 );
L5217:
        X4 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5221;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L5225;
        POPSTACKTRACE( FALSEVALUE );
L5221:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L5225;
        POPSTACKTRACE( FALSEVALUE );
L5214:
        POPSTACKTRACE( TRUEVALUE );
L5225:
        X4 = PAIR_CAR( X3 );
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L5213 );
L5211:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_max_2dtwo_v );
DEFCSTRING( t5230, "SCRT2_MAX-TWO" );

TSCP  scrt2_max_2dtwo( x2892, y2893 )
        TSCP  x2892, y2893;
{
        PUSHSTACKTRACE( t5230 );
        if  ( BITAND( BITOR( _S2CINT( x2892 ), 
                             _S2CINT( y2893 ) ), 
                      3 ) )  goto L5232;
        if  ( GT( _S2CINT( x2892 ), _S2CINT( y2893 ) ) )  goto L5234;
        POPSTACKTRACE( y2893 );
L5234:
        POPSTACKTRACE( x2892 );
L5232:
        if  ( TRUE( scrt2__3e_2dtwo( x2892, y2893 ) ) )  goto L5236;
        POPSTACKTRACE( y2893 );
L5236:
        POPSTACKTRACE( x2892 );
}

DEFTSCP( scrt2_max_v );
DEFCSTRING( t5238, "MAX" );

TSCP  scrt2_max( x2901, y2902 )
        TSCP  x2901, y2902;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5238 );
        X1 = x2901;
        X2 = y2902;
L5241:
        if  ( FALSE( X2 ) )  goto L5242;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5245;
        scrt1__24__car_2derror( X2 );
L5245:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5249;
        if  ( LTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5253;
        X3 = X1;
        goto L5256;
L5249:
        if  ( FALSE( scrt2__3e_2dtwo( X1, X4 ) ) )  goto L5253;
        X3 = X1;
        goto L5256;
L5253:
        X3 = PAIR_CAR( X2 );
L5256:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5241 );
L5242:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_min_2dtwo_v );
DEFCSTRING( t5259, "SCRT2_MIN-TWO" );

TSCP  scrt2_min_2dtwo( x2930, y2931 )
        TSCP  x2930, y2931;
{
        PUSHSTACKTRACE( t5259 );
        if  ( BITAND( BITOR( _S2CINT( x2930 ), 
                             _S2CINT( y2931 ) ), 
                      3 ) )  goto L5261;
        if  ( LT( _S2CINT( x2930 ), _S2CINT( y2931 ) ) )  goto L5263;
        POPSTACKTRACE( y2931 );
L5263:
        POPSTACKTRACE( x2930 );
L5261:
        if  ( TRUE( scrt2__3c_2dtwo( x2930, y2931 ) ) )  goto L5265;
        POPSTACKTRACE( y2931 );
L5265:
        POPSTACKTRACE( x2930 );
}

DEFTSCP( scrt2_min_v );
DEFCSTRING( t5267, "MIN" );

TSCP  scrt2_min( x2939, y2940 )
        TSCP  x2939, y2940;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5267 );
        X1 = x2939;
        X2 = y2940;
L5270:
        if  ( FALSE( X2 ) )  goto L5271;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5274;
        scrt1__24__car_2derror( X2 );
L5274:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5278;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L5282;
        X3 = X1;
        goto L5285;
L5278:
        if  ( FALSE( scrt2__3c_2dtwo( X1, X4 ) ) )  goto L5282;
        X3 = X1;
        goto L5285;
L5282:
        X3 = PAIR_CAR( X2 );
L5285:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5270 );
L5271:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2b_2dtwo_v );
DEFCSTRING( t5288, "SCRT2_+-TWO" );

TSCP  scrt2__2b_2dtwo( x2968, y2969 )
        TSCP  x2968, y2969;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5288 );
        if  ( NEQ( TSCPTAG( x2968 ), FIXNUMTAG ) )  goto L5290;
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5292;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x2968 ), 
                                     _S2CINT( y2969 ) ) ) );
L5292:
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5294;
        POPSTACKTRACE( FLTV_FLT( PLUS( FIX_FLTV( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5294:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( y2969, EMPTYLIST ) ) );
L5290:
        if  ( NEQ( TSCPTAG( y2969 ), FIXNUMTAG ) )  goto L5296;
        if  ( NOT( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2968 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5298;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FIX_FLTV( y2969 ) ) ) );
L5298:
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2582, 
                                      CONS( x2968, EMPTYLIST ) ) );
L5296:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x2968 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x2968 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5306;
        if  ( NOT( AND( EQ( TSCPTAG( y2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5306;
        POPSTACKTRACE( FLTV_FLT( PLUS( FLOAT_VALUE( x2968 ), 
                                       FLOAT_VALUE( y2969 ) ) ) );
L5306:
        X1 = CONS( y2969, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2982, 
                                      c2579, 
                                      CONS( x2968, X1 ) ) );
}

DEFTSCP( scrt2__2b_v );
DEFCSTRING( t5307, "+" );

TSCP  scrt2__2b( x2990 )
        TSCP  x2990;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5307 );
        X1 = _TSCP( 0 );
        X2 = x2990;
L5310:
        if  ( FALSE( X2 ) )  goto L5311;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5314;
        scrt1__24__car_2derror( X2 );
L5314:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5317;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), _S2CINT( X4 ) ) );
        goto L5318;
L5317:
        X3 = scrt2__2b_2dtwo( X1, X4 );
L5318:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5310 );
L5311:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2a_2dtwo_v );
DEFCSTRING( t5320, "SCRT2_*-TWO" );

TSCP  scrt2__2a_2dtwo( x3014, y3015 )
        TSCP  x3014, y3015;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5320 );
        if  ( NEQ( TSCPTAG( x3014 ), FIXNUMTAG ) )  goto L5322;
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5324;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( x3014 ), 
                                      _S2CINT( y3015 ) ) ) );
L5324:
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5326;
        POPSTACKTRACE( FLTV_FLT( TIMES( FIX_FLTV( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5326:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( y3015, EMPTYLIST ) ) );
L5322:
        if  ( NEQ( TSCPTAG( y3015 ), FIXNUMTAG ) )  goto L5328;
        if  ( NOT( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3014 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5330;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FIX_FLTV( y3015 ) ) ) );
L5330:
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2582, 
                                      CONS( x3014, EMPTYLIST ) ) );
L5328:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3014 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3014 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5338;
        if  ( NOT( AND( EQ( TSCPTAG( y3015 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3015 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5338;
        POPSTACKTRACE( FLTV_FLT( TIMES( FLOAT_VALUE( x3014 ), 
                                        FLOAT_VALUE( y3015 ) ) ) );
L5338:
        X1 = CONS( y3015, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3028, 
                                      c2579, 
                                      CONS( x3014, X1 ) ) );
}

DEFTSCP( scrt2__2a_v );
DEFCSTRING( t5339, "*" );

TSCP  scrt2__2a( x3036 )
        TSCP  x3036;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5339 );
        X1 = _TSCP( 4 );
        X2 = x3036;
L5342:
        if  ( FALSE( X2 ) )  goto L5343;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5346;
        scrt1__24__car_2derror( X2 );
L5346:
        X4 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L5349;
        X3 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X4 ) ) );
        goto L5350;
L5349:
        X3 = scrt2__2a_2dtwo( X1, X4 );
L5350:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L5342 );
L5343:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2__2d_2dtwo_v );
DEFCSTRING( t5352, "SCRT2_--TWO" );

TSCP  scrt2__2d_2dtwo( x3061, y3062 )
        TSCP  x3061, y3062;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5352 );
        if  ( NEQ( TSCPTAG( x3061 ), FIXNUMTAG ) )  goto L5354;
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5356;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( x3061 ), 
                                           _S2CINT( y3062 ) ) ) );
L5356:
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5358;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FIX_FLTV( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5358:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( y3062, EMPTYLIST ) ) );
L5354:
        if  ( NEQ( TSCPTAG( y3062 ), FIXNUMTAG ) )  goto L5360;
        if  ( NOT( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3061 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5362;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FIX_FLTV( y3062 ) ) ) );
L5362:
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2582, 
                                      CONS( x3061, EMPTYLIST ) ) );
L5360:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3061 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3061 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5370;
        if  ( NOT( AND( EQ( TSCPTAG( y3062 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3062 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5370;
        POPSTACKTRACE( FLTV_FLT( DIFFERENCE( FLOAT_VALUE( x3061 ), 
                                             FLOAT_VALUE( y3062 ) ) ) );
L5370:
        X1 = CONS( y3062, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3075, 
                                      c2579, 
                                      CONS( x3061, X1 ) ) );
}

DEFTSCP( scrt2__2d_v );
DEFCSTRING( t5371, "-" );

TSCP  scrt2__2d( x3083, y3084 )
        TSCP  x3083, y3084;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5371 );
        if  ( FALSE( y3084 ) )  goto L5373;
        if  ( EQ( TSCPTAG( y3084 ), PAIRTAG ) )  goto L5376;
        scrt1__24__cdr_2derror( y3084 );
L5376:
        X1 = PAIR_CDR( y3084 );
        X3 = PAIR_CAR( y3084 );
        if  ( BITAND( BITOR( _S2CINT( x3083 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5380;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( x3083 ), 
                                 _S2CINT( X3 ) ) );
        goto L5381;
L5380:
        X2 = scrt2__2d_2dtwo( x3083, X3 );
L5381:
        X3 = X2;
        X4 = X1;
L5384:
        if  ( FALSE( X4 ) )  goto L5385;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5388;
        scrt1__24__car_2derror( X4 );
L5388:
        X6 = PAIR_CAR( X4 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L5391;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X6 ) ) );
        goto L5392;
L5391:
        X5 = scrt2__2d_2dtwo( X3, X6 );
L5392:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5384 );
L5385:
        POPSTACKTRACE( X3 );
L5373:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3083 ) ), 
                      3 ) )  goto L5394;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3083 ) ) ) );
L5394:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3083 ) );
}

DEFTSCP( scrt2__2f_2dtwo_v );
DEFCSTRING( t5396, "SCRT2_/-TWO" );

TSCP  scrt2__2f_2dtwo( x3128, y3129 )
        TSCP  x3128, y3129;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5396 );
        if  ( NEQ( _S2CUINT( y3129 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L5398;
        POPSTACKTRACE( scdebug_error( c3145, 
                                      c3155, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5398:
        if  ( NEQ( TSCPTAG( x3128 ), FIXNUMTAG ) )  goto L5400;
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5402;
        X1 = _TSCP( REMAINDER( _S2CINT( x3128 ), 
                               _S2CINT( y3129 ) ) );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5404;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3128 ), 
                                          _S2CINT( y3129 ) ) ) );
L5404:
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5402:
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5406;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FIX_FLTV( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5406:
        POPSTACKTRACE( scdebug_error( c3145, 
                                      c2582, 
                                      CONS( y3129, EMPTYLIST ) ) );
L5400:
        if  ( NEQ( TSCPTAG( y3129 ), FIXNUMTAG ) )  goto L5408;
        if  ( NOT( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3128 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5410;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FIX_FLTV( y3129 ) ) ) );
L5410:
        POPSTACKTRACE( scdebug_error( c3145, 
                                      c2582, 
                                      CONS( x3128, EMPTYLIST ) ) );
L5408:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( x3128 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( x3128 ), 
                               DOUBLEFLOATTAG ) ) );
        if  ( FALSE( X1 ) )  goto L5418;
        if  ( NOT( AND( EQ( TSCPTAG( y3129 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y3129 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5418;
        POPSTACKTRACE( FLTV_FLT( QUOTIENT( FLOAT_VALUE( x3128 ), 
                                           FLOAT_VALUE( y3129 ) ) ) );
L5418:
        X1 = CONS( y3129, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c3145, 
                                      c2579, 
                                      CONS( x3128, X1 ) ) );
}

DEFTSCP( scrt2__2f_v );
DEFCSTRING( t5419, "/" );

TSCP  scrt2__2f( x3157, y3158 )
        TSCP  x3157, y3158;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5419 );
        if  ( FALSE( y3158 ) )  goto L5421;
        if  ( EQ( TSCPTAG( y3158 ), PAIRTAG ) )  goto L5424;
        scrt1__24__cdr_2derror( y3158 );
L5424:
        X1 = PAIR_CDR( y3158 );
        X3 = PAIR_CAR( y3158 );
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3157 ), 
                                          _S2CINT( X3 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5438;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5438;
        X5 = _TSCP( REMAINDER( _S2CINT( x3157 ), 
                               _S2CINT( X3 ) ) );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5438;
        X2 = C_FIXED( QUOTIENT( _S2CINT( x3157 ), 
                                _S2CINT( X3 ) ) );
        goto L5439;
L5438:
        X2 = scrt2__2f_2dtwo( x3157, X3 );
L5439:
        X3 = X2;
        X4 = X1;
L5442:
        if  ( FALSE( X4 ) )  goto L5443;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5446;
        scrt1__24__car_2derror( X4 );
L5446:
        X6 = PAIR_CAR( X4 );
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( X6 ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L5459;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5459;
        X8 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( X6 ) ) );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5459;
        X5 = C_FIXED( QUOTIENT( _S2CINT( X3 ), 
                                _S2CINT( X6 ) ) );
        goto L5460;
L5459:
        X5 = scrt2__2f_2dtwo( X3, X6 );
L5460:
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L5442 );
L5443:
        POPSTACKTRACE( X3 );
L5421:
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3157 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5472;
        if  ( EQ( _S2CUINT( x3157 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5472;
        X2 = _TSCP( REMAINDER( _S2CINT( _TSCP( 4 ) ), 
                               _S2CINT( x3157 ) ) );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5472;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( _TSCP( 4 ) ), 
                                          _S2CINT( x3157 ) ) ) );
L5472:
        POPSTACKTRACE( scrt2__2f_2dtwo( _TSCP( 4 ), x3157 ) );
}

DEFTSCP( scrt2_abs_v );
DEFCSTRING( t5473, "ABS" );

TSCP  scrt2_abs( x3244 )
        TSCP  x3244;
{
        PUSHSTACKTRACE( t5473 );
        if  ( NEQ( TSCPTAG( x3244 ), FIXNUMTAG ) )  goto L5476;
        if  ( LT( _S2CINT( x3244 ), 0 ) )  goto L5480;
        POPSTACKTRACE( x3244 );
L5476:
        if  ( TRUE( scrt2_negative_3f( x3244 ) ) )  goto L5480;
        POPSTACKTRACE( x3244 );
L5480:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( x3244 ) ), 
                      3 ) )  goto L5483;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 0 ) ), 
                                           _S2CINT( x3244 ) ) ) );
L5483:
        POPSTACKTRACE( scrt2__2d_2dtwo( _TSCP( 0 ), x3244 ) );
}

DEFTSCP( scrt2_quotient_v );
DEFCSTRING( t5485, "QUOTIENT" );
EXTERNTSCPP( scrt2_truncate, XAL1( TSCP ) );
EXTERNTSCP( scrt2_truncate_v );

TSCP  scrt2_quotient( x3258, y3259 )
        TSCP  x3258, y3259;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5485 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3258 ), 
                                          _S2CINT( y3259 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5493;
        if  ( EQ( _S2CUINT( y3259 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5493;
        POPSTACKTRACE( C_FIXED( QUOTIENT( _S2CINT( x3258 ), 
                                          _S2CINT( y3259 ) ) ) );
L5493:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3258 ), 
                                          _S2CINT( y3259 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5504;
        if  ( EQ( _S2CUINT( y3259 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5504;
        X3 = _TSCP( REMAINDER( _S2CINT( x3258 ), 
                               _S2CINT( y3259 ) ) );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5504;
        X1 = C_FIXED( QUOTIENT( _S2CINT( x3258 ), 
                                _S2CINT( y3259 ) ) );
        goto L5505;
L5504:
        X1 = scrt2__2f_2dtwo( x3258, y3259 );
L5505:
        POPSTACKTRACE( scrt2_truncate( X1 ) );
}

DEFTSCP( scrt2_remainder_v );
DEFCSTRING( t5506, "REMAINDER" );

TSCP  scrt2_remainder( x3291, y3292 )
        TSCP  x3291, y3292;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5506 );
        X1 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3291 ), 
                                          _S2CINT( y3292 ) ), 
                                   3 ) ) );
        if  ( FALSE( X1 ) )  goto L5514;
        if  ( EQ( _S2CUINT( y3292 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5514;
        POPSTACKTRACE( _TSCP( REMAINDER( _S2CINT( x3291 ), 
                                         _S2CINT( y3292 ) ) ) );
L5514:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3291 ), 
                                          _S2CINT( y3292 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5521;
        if  ( EQ( _S2CUINT( y3292 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5521;
        X3 = C_FIXED( QUOTIENT( _S2CINT( x3291 ), 
                                _S2CINT( y3292 ) ) );
        goto L5522;
L5521:
        X3 = scrt2_quotient( x3291, y3292 );
L5522:
        if  ( BITAND( BITOR( _S2CINT( y3292 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L5524;
        X2 = _TSCP( ITIMES( FIXED_C( y3292 ), 
                            _S2CINT( X3 ) ) );
        goto L5525;
L5524:
        X2 = scrt2__2a_2dtwo( y3292, X3 );
L5525:
        if  ( BITAND( BITOR( _S2CINT( x3291 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L5527;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( x3291 ), 
                                 _S2CINT( X2 ) ) );
        goto L5528;
L5527:
        X1 = scrt2__2d_2dtwo( x3291, X2 );
L5528:
        POPSTACKTRACE( scrt2_round( X1 ) );
}

DEFTSCP( scrt2_modulo_v );
DEFCSTRING( t5529, "MODULO" );

TSCP  scrt2_modulo( x3329, y3330 )
        TSCP  x3329, y3330;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5529 );
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x3329 ), 
                                          _S2CINT( y3330 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5537;
        if  ( EQ( _S2CUINT( y3330 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5537;
        X1 = _TSCP( REMAINDER( _S2CINT( x3329 ), 
                               _S2CINT( y3330 ) ) );
        goto L5538;
L5537:
        X1 = scrt2_remainder( x3329, y3330 );
L5538:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5541;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5545;
        POPSTACKTRACE( X1 );
L5541:
        if  ( FALSE( scrt2_zero_3f( X1 ) ) )  goto L5545;
        POPSTACKTRACE( X1 );
L5545:
        if  ( NEQ( TSCPTAG( y3330 ), FIXNUMTAG ) )  goto L5549;
        if  ( GT( _S2CINT( y3330 ), 0 ) )  goto L5553;
        goto L5554;
L5549:
        if  ( FALSE( scrt2_positive_3f( y3330 ) ) )  goto L5554;
L5553:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5558;
        if  ( LTE( _S2CINT( X1 ), 0 ) )  goto L5562;
        POPSTACKTRACE( X1 );
L5558:
        if  ( FALSE( scrt2_positive_3f( X1 ) ) )  goto L5562;
        POPSTACKTRACE( X1 );
L5562:
        if  ( BITAND( BITOR( _S2CINT( y3330 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5565;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3330 ), 
                                     _S2CINT( X1 ) ) ) );
L5565:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3330, X1 ) );
L5554:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5568;
        if  ( GTE( _S2CINT( X1 ), 0 ) )  goto L5572;
        POPSTACKTRACE( X1 );
L5568:
        if  ( FALSE( scrt2_negative_3f( X1 ) ) )  goto L5572;
        POPSTACKTRACE( X1 );
L5572:
        if  ( BITAND( BITOR( _S2CINT( y3330 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L5575;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( y3330 ), 
                                     _S2CINT( X1 ) ) ) );
L5575:
        POPSTACKTRACE( scrt2__2b_2dtwo( y3330, X1 ) );
}

DEFTSCP( scrt2_gcd_v );
DEFCSTRING( t5577, "GCD" );

TSCP  scrt2_g3389( m3391, n3392 )
        TSCP  m3391, n3392;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "GCD2 [inside GCD]" );
L5580:
        if  ( NEQ( TSCPTAG( n3392 ), FIXNUMTAG ) )  goto L5582;
        if  ( NEQ( _S2CUINT( n3392 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L5586;
        POPSTACKTRACE( m3391 );
L5582:
        if  ( FALSE( scrt2_zero_3f( n3392 ) ) )  goto L5586;
        POPSTACKTRACE( m3391 );
L5586:
        X2 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( m3391 ), 
                                          _S2CINT( n3392 ) ), 
                                   3 ) ) );
        if  ( FALSE( X2 ) )  goto L5595;
        if  ( EQ( _S2CUINT( n3392 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L5595;
        X1 = _TSCP( REMAINDER( _S2CINT( m3391 ), 
                               _S2CINT( n3392 ) ) );
        goto L5596;
L5595:
        X1 = scrt2_remainder( m3391, n3392 );
L5596:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5599;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5603;
        POPSTACKTRACE( n3392 );
L5599:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L5603;
        POPSTACKTRACE( n3392 );
L5603:
        X2 = n3392;
        n3392 = X1;
        m3391 = X2;
        GOBACK( L5580 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  scrt2_gcd( x3387 )
        TSCP  x3387;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5577 );
        X2 = scrt1_length( x3387 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5607;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5609;
        if  ( EQ( TSCPTAG( x3387 ), PAIRTAG ) )  goto L5612;
        scrt1__24__car_2derror( x3387 );
L5612:
        X1 = PAIR_CAR( x3387 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5615;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5620;
        POPSTACKTRACE( X1 );
L5615:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5609:
        if  ( EQ( TSCPTAG( x3387 ), PAIRTAG ) )  goto L5622;
        scrt1__24__cdr_2derror( x3387 );
L5622:
        X4 = PAIR_CDR( x3387 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5625;
        scrt1__24__cdr_2derror( X4 );
L5625:
        X3 = PAIR_CDR( X4 );
        X6 = PAIR_CAR( x3387 );
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L5629;
        if  ( LT( _S2CINT( X6 ), 0 ) )  goto L5634;
        X5 = X6;
        goto L5635;
L5629:
        X5 = scrt2_abs( X6 );
        goto L5635;
L5634:
        X5 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
L5635:
        X8 = PAIR_CDR( x3387 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L5638;
        scrt1__24__car_2derror( X8 );
L5638:
        X7 = PAIR_CAR( X8 );
        if  ( NEQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L5641;
        if  ( LT( _S2CINT( X7 ), 0 ) )  goto L5646;
        X6 = X7;
        goto L5647;
L5641:
        X6 = scrt2_abs( X7 );
        goto L5647;
L5646:
        X6 = _TSCP( INEGATE( _S2CINT( X7 ) ) );
L5647:
        X4 = scrt2_g3389( X5, X6 );
        X5 = X4;
        X6 = X3;
L5650:
        if  ( FALSE( X6 ) )  goto L5651;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5654;
        scrt1__24__car_2derror( X6 );
L5654:
        X9 = PAIR_CAR( X6 );
        if  ( NEQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L5657;
        if  ( LT( _S2CINT( X9 ), 0 ) )  goto L5662;
        X8 = X9;
        goto L5663;
L5657:
        X8 = scrt2_abs( X9 );
        goto L5663;
L5662:
        X8 = _TSCP( INEGATE( _S2CINT( X9 ) ) );
L5663:
        X7 = scrt2_g3389( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5650 );
L5651:
        POPSTACKTRACE( X5 );
L5607:
        POPSTACKTRACE( _TSCP( 0 ) );
L5620:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_lcm_v );
DEFCSTRING( t5665, "LCM" );

TSCP  scrt2_l3530( m3532, n3533 )
        TSCP  m3532, n3533;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LCM2 [inside LCM]" );
        if  ( NEQ( TSCPTAG( n3533 ), FIXNUMTAG ) )  goto L5669;
        if  ( LT( _S2CINT( n3533 ), 0 ) )  goto L5674;
        X1 = n3533;
        goto L5670;
L5674:
        X1 = _TSCP( INEGATE( _S2CINT( n3533 ) ) );
        goto L5670;
L5669:
        X1 = scrt2_abs( n3533 );
L5670:
        if  ( NEQ( TSCPTAG( m3532 ), FIXNUMTAG ) )  goto L5676;
        if  ( LT( _S2CINT( m3532 ), 0 ) )  goto L5681;
        X2 = m3532;
        goto L5677;
L5681:
        X2 = _TSCP( INEGATE( _S2CINT( m3532 ) ) );
        goto L5677;
L5676:
        X2 = scrt2_abs( m3532 );
L5677:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5685;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) )  goto L5689;
        POPSTACKTRACE( X2 );
L5685:
        if  ( FALSE( scrt2__3d_2dtwo( X2, X1 ) ) )  goto L5689;
        POPSTACKTRACE( X2 );
L5689:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5698;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5698;
        X3 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X1 ) ) );
        goto L5699;
L5698:
        X3 = scrt2_remainder( X2, X1 );
L5699:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5702;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5706;
        POPSTACKTRACE( X2 );
L5702:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5706;
        POPSTACKTRACE( X2 );
L5706:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X1 ), 
                                          _S2CINT( X2 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L5715;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5715;
        X3 = _TSCP( REMAINDER( _S2CINT( X1 ), 
                               _S2CINT( X2 ) ) );
        goto L5716;
L5715:
        X3 = scrt2_remainder( X1, X2 );
L5716:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5719;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5723;
        POPSTACKTRACE( X1 );
L5719:
        if  ( FALSE( scrt2__3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5723;
        POPSTACKTRACE( X1 );
L5723:
        X5 = CONS( X1, EMPTYLIST );
        X4 = scrt2_gcd( CONS( X2, X5 ) );
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X4 ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L5737;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5737;
        X6 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X4 ) ) );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5737;
        X3 = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                _S2CINT( X4 ) ) );
        goto L5738;
L5737:
        X3 = scrt2__2f_2dtwo( X2, X4 );
L5738:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L5740;
        POPSTACKTRACE( _TSCP( ITIMES( FIXED_C( X3 ), 
                                      _S2CINT( X1 ) ) ) );
L5740:
        POPSTACKTRACE( scrt2__2a_2dtwo( X3, X1 ) );
}

TSCP  scrt2_lcm( x3528 )
        TSCP  x3528;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5665 );
        X2 = scrt1_length( x3528 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L5743;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L5745;
        if  ( EQ( TSCPTAG( x3528 ), PAIRTAG ) )  goto L5748;
        scrt1__24__car_2derror( x3528 );
L5748:
        X1 = PAIR_CAR( x3528 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5751;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5756;
        POPSTACKTRACE( X1 );
L5751:
        POPSTACKTRACE( scrt2_abs( X1 ) );
L5745:
        if  ( EQ( TSCPTAG( x3528 ), PAIRTAG ) )  goto L5758;
        scrt1__24__cdr_2derror( x3528 );
L5758:
        X4 = PAIR_CDR( x3528 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5761;
        scrt1__24__cdr_2derror( X4 );
L5761:
        X3 = PAIR_CDR( X4 );
        X5 = PAIR_CAR( x3528 );
        X7 = PAIR_CDR( x3528 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L5766;
        scrt1__24__car_2derror( X7 );
L5766:
        X6 = PAIR_CAR( X7 );
        X4 = scrt2_l3530( X5, X6 );
        X5 = X4;
        X6 = X3;
L5770:
        if  ( FALSE( X6 ) )  goto L5771;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5774;
        scrt1__24__car_2derror( X6 );
L5774:
        X8 = PAIR_CAR( X6 );
        X7 = scrt2_l3530( X5, X8 );
        X6 = PAIR_CDR( X6 );
        X5 = X7;
        GOBACK( L5770 );
L5771:
        POPSTACKTRACE( X5 );
L5743:
        POPSTACKTRACE( _TSCP( 4 ) );
L5756:
        POPSTACKTRACE( _TSCP( INEGATE( _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt2_floor_v );
DEFCSTRING( t5777, "FLOOR" );

TSCP  scrt2_floor( x3705 )
        TSCP  x3705;
{
        PUSHSTACKTRACE( t5777 );
        if  ( EQ( TSCPTAG( x3705 ), FIXNUMTAG ) )  goto L5779;
        POPSTACKTRACE( C_FLOOR( x3705 ) );
L5779:
        POPSTACKTRACE( x3705 );
}

DEFTSCP( scrt2_ceiling_v );
DEFCSTRING( t5781, "CEILING" );

TSCP  scrt2_ceiling( x3709 )
        TSCP  x3709;
{
        PUSHSTACKTRACE( t5781 );
        if  ( EQ( TSCPTAG( x3709 ), FIXNUMTAG ) )  goto L5783;
        POPSTACKTRACE( C_CEILING( x3709 ) );
L5783:
        POPSTACKTRACE( x3709 );
}

DEFTSCP( scrt2_truncate_v );
DEFCSTRING( t5785, "TRUNCATE" );

TSCP  scrt2_truncate( x3713 )
        TSCP  x3713;
{
        PUSHSTACKTRACE( t5785 );
        if  ( BITAND( BITOR( _S2CINT( x3713 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5788;
        if  ( LT( _S2CINT( x3713 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5792;
        goto L5793;
L5788:
        if  ( FALSE( scrt2__3c_2dtwo( x3713, _TSCP( 0 ) ) ) )  goto L5793;
L5792:
        POPSTACKTRACE( scrt2_ceiling( x3713 ) );
L5793:
        POPSTACKTRACE( scrt2_floor( x3713 ) );
}

DEFTSCP( scrt2_round_v );
DEFCSTRING( t5796, "ROUND" );

TSCP  scrt2_round( x3721 )
        TSCP  x3721;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5796 );
        if  ( EQ( TSCPTAG( x3721 ), FIXNUMTAG ) )  goto L5798;
        if  ( BITAND( BITOR( _S2CINT( x3721 ), 
                             _S2CINT( c3730 ) ), 
                      3 ) )  goto L5800;
        X1 = _TSCP( IPLUS( _S2CINT( x3721 ), 
                           _S2CINT( c3730 ) ) );
        goto L5801;
L5800:
        X1 = scrt2__2b_2dtwo( x3721, c3730 );
L5801:
        POPSTACKTRACE( scrt2_floor( X1 ) );
L5798:
        POPSTACKTRACE( x3721 );
}

DEFTSCP( scrt2_exp_v );
DEFCSTRING( t5802, "EXP" );

TSCP  scrt2_exp( x3732 )
        TSCP  x3732;
{
        PUSHSTACKTRACE( t5802 );
        POPSTACKTRACE( C_EXP( x3732 ) );
}

DEFTSCP( scrt2_log_v );
DEFCSTRING( t5804, "LOG" );

TSCP  scrt2_log( x3734 )
        TSCP  x3734;
{
        PUSHSTACKTRACE( t5804 );
        POPSTACKTRACE( C_LOG( x3734 ) );
}

DEFTSCP( scrt2_sin_v );
DEFCSTRING( t5806, "SIN" );

TSCP  scrt2_sin( x3736 )
        TSCP  x3736;
{
        PUSHSTACKTRACE( t5806 );
        POPSTACKTRACE( C_SIN( x3736 ) );
}

DEFTSCP( scrt2_cos_v );
DEFCSTRING( t5808, "COS" );

TSCP  scrt2_cos( x3738 )
        TSCP  x3738;
{
        PUSHSTACKTRACE( t5808 );
        POPSTACKTRACE( C_COS( x3738 ) );
}

DEFTSCP( scrt2_tan_v );
DEFCSTRING( t5810, "TAN" );

TSCP  scrt2_tan( x3740 )
        TSCP  x3740;
{
        PUSHSTACKTRACE( t5810 );
        POPSTACKTRACE( C_TAN( x3740 ) );
}

DEFTSCP( scrt2_asin_v );
DEFCSTRING( t5812, "ASIN" );

TSCP  scrt2_asin( x3742 )
        TSCP  x3742;
{
        PUSHSTACKTRACE( t5812 );
        POPSTACKTRACE( C_ASIN( x3742 ) );
}

DEFTSCP( scrt2_acos_v );
DEFCSTRING( t5814, "ACOS" );

TSCP  scrt2_acos( x3744 )
        TSCP  x3744;
{
        PUSHSTACKTRACE( t5814 );
        POPSTACKTRACE( C_ACOS( x3744 ) );
}

DEFTSCP( scrt2_atan_v );
DEFCSTRING( t5816, "ATAN" );

TSCP  scrt2_atan( x3746, y3747 )
        TSCP  x3746, y3747;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5816 );
        if  ( FALSE( y3747 ) )  goto L5818;
        if  ( EQ( TSCPTAG( y3747 ), PAIRTAG ) )  goto L5821;
        scrt1__24__car_2derror( y3747 );
L5821:
        X1 = PAIR_CAR( y3747 );
        POPSTACKTRACE( C_ATAN2( x3746, X1 ) );
L5818:
        POPSTACKTRACE( C_ATAN( x3746 ) );
}

DEFTSCP( scrt2_sqrt_v );
DEFCSTRING( t5823, "SQRT" );

TSCP  scrt2_sqrt( x3753 )
        TSCP  x3753;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5823 );
        if  ( NEQ( TSCPTAG( x3753 ), FIXNUMTAG ) )  goto L5826;
        if  ( LT( _S2CINT( x3753 ), 0 ) )  goto L5830;
        goto L5833;
L5826:
        if  ( FALSE( scrt2_negative_3f( x3753 ) ) )  goto L5833;
L5830:
        scdebug_error( c3760, 
                       c3761, CONS( x3753, EMPTYLIST ) );
L5833:
        X1 = C_SQRT( x3753 );
        if  ( NEQ( TSCPTAG( x3753 ), FIXNUMTAG ) )  goto L5835;
        X3 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L5838;
        scdebug_error( c2310, 
                       c2311, CONS( X3, EMPTYLIST ) );
L5838:
        X4 = BOOLEAN( LT( FLOAT_VALUE( X3 ), MINTSCPINTF ) );
        if  ( TRUE( X4 ) )  goto L5844;
        if  ( LTE( FLOAT_VALUE( X3 ), MAXTSCPINTF ) )  goto L5847;
L5844:
        scdebug_error( c2310, 
                       c2316, CONS( X3, EMPTYLIST ) );
L5847:
        X2 = FLT_FIX( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L5851;
        X3 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X2 ) ) );
        goto L5852;
L5851:
        X3 = scrt2__2a_2dtwo( X2, X2 );
L5852:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( x3753 ) ) )  goto L5849;
        POPSTACKTRACE( X1 );
L5849:
        POPSTACKTRACE( X2 );
L5835:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt2_expt_v );
DEFCSTRING( t5853, "EXPT" );

TSCP  scrt2_expt( x3786, y3787 )
        TSCP  x3786, y3787;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t5853 );
        if  ( BITAND( BITOR( _S2CINT( x3786 ), 
                             _S2CINT( c3800 ) ), 
                      3 ) )  goto L5855;
        X2 = BOOLEAN( EQ( _S2CUINT( x3786 ), 
                          _S2CUINT( c3800 ) ) );
        goto L5856;
L5855:
        X2 = scrt2__3d_2dtwo( x3786, c3800 );
L5856:
        if  ( FALSE( X2 ) )  goto L5869;
        if  ( BITAND( BITOR( _S2CINT( y3787 ), 
                             _S2CINT( c3800 ) ), 
                      3 ) )  goto L5862;
        if  ( NEQ( _S2CUINT( y3787 ), _S2CUINT( c3800 ) ) )  goto L5869;
        POPSTACKTRACE( c3851 );
L5862:
        if  ( FALSE( scrt2__3d_2dtwo( y3787, c3800 ) ) )  goto L5869;
        POPSTACKTRACE( c3851 );
L5869:
        X1 = C_POW( x3786, y3787 );
        if  ( NEQ( TSCPTAG( x3786 ), FIXNUMTAG ) )  goto L5871;
        if  ( NEQ( TSCPTAG( y3787 ), FIXNUMTAG ) )  goto L5873;
        X2 = C_FIXED( MAXS2CINT >> 2 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L5875;
        if  ( LT( _S2CINT( X1 ), 0 ) )  goto L5880;
        X3 = X1;
        goto L5876;
L5880:
        X3 = _TSCP( INEGATE( _S2CINT( X1 ) ) );
        goto L5876;
L5875:
        X3 = scrt2_abs( X1 );
L5876:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L5884;
        if  ( LTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L5888;
        POPSTACKTRACE( X1 );
L5884:
        if  ( TRUE( scrt2__3c_3d_2dtwo( X3, X2 ) ) )  goto L5888;
        POPSTACKTRACE( X1 );
L5873:
        POPSTACKTRACE( X1 );
L5871:
        POPSTACKTRACE( X1 );
L5888:
        X2 = scrt2_round( X1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), DOUBLEFLOATTAG ) )
            )  goto L5892;
        scdebug_error( c2310, 
                       c2311, CONS( X2, EMPTYLIST ) );
L5892:
        X3 = BOOLEAN( LT( FLOAT_VALUE( X2 ), MINTSCPINTF ) );
        if  ( TRUE( X3 ) )  goto L5898;
        if  ( LTE( FLOAT_VALUE( X2 ), MAXTSCPINTF ) )  goto L5901;
L5898:
        scdebug_error( c2310, 
                       c2316, CONS( X2, EMPTYLIST ) );
L5901:
        POPSTACKTRACE( FLT_FIX( X2 ) );
}

DEFTSCP( scrt2_exact_2d_3einexact_v );
DEFCSTRING( t5902, "EXACT->INEXACT" );

TSCP  scrt2_exact_2d_3einexact( x3853 )
        TSCP  x3853;
{
        PUSHSTACKTRACE( t5902 );
        if  ( NEQ( TSCPTAG( x3853 ), FIXNUMTAG ) )  goto L5904;
        POPSTACKTRACE( FIX_FLT( x3853 ) );
L5904:
        if  ( AND( EQ( TSCPTAG( x3853 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x3853 ), DOUBLEFLOATTAG ) )
            )  goto L5907;
        POPSTACKTRACE( scdebug_error( c3858, 
                                      c2543, 
                                      CONS( x3853, EMPTYLIST ) ) );
L5907:
        POPSTACKTRACE( x3853 );
}

DEFTSCP( scrt2_inexact_2d_3eexact_v );
DEFCSTRING( t5909, "INEXACT->EXACT" );

TSCP  scrt2_inexact_2d_3eexact( x3864 )
        TSCP  x3864;
{
        TSCP  X1;

        PUSHSTACKTRACE( t5909 );
        if  ( EQ( TSCPTAG( x3864 ), FIXNUMTAG ) )  goto L5911;
        if  ( NOT( AND( EQ( TSCPTAG( x3864 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3864 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L5913;
        X1 = BOOLEAN( LT( FLOAT_VALUE( x3864 ), MINTSCPINTF ) );
        if  ( TRUE( X1 ) )  goto L5920;
        if  ( LTE( FLOAT_VALUE( x3864 ), MAXTSCPINTF ) )  goto L5923;
L5920:
        scdebug_error( c2310, 
                       c2316, CONS( x3864, EMPTYLIST ) );
L5923:
        POPSTACKTRACE( FLT_FIX( x3864 ) );
L5913:
        POPSTACKTRACE( scdebug_error( c3869, 
                                      c2543, 
                                      CONS( x3864, EMPTYLIST ) ) );
L5911:
        POPSTACKTRACE( x3864 );
}

DEFTSCP( scrt2_number_2d_3estring_v );
DEFCSTRING( t5924, "NUMBER->STRING" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( sc_formatnumber, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( sc_formatnumber_v );
EXTERNTSCPP( scrt2_integer_2d_3estring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_integer_2d_3estring_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  scrt2_number_2d_3estring( n3879, f3880 )
        TSCP  n3879, f3880;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5924 );
        f3880 = CONS( f3880, EMPTYLIST );
        if  ( EQ( TSCPTAG( n3879 ), FIXNUMTAG ) )  goto L5928;
        if  ( AND( EQ( TSCPTAG( n3879 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( n3879 ), DOUBLEFLOATTAG ) )
            )  goto L5928;
        scdebug_error( c3891, 
                       c2543, CONS( n3879, EMPTYLIST ) );
L5928:
        if  ( FALSE( PAIR_CAR( f3880 ) ) )  goto L5930;
        X2 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5933;
        scrt1__24__car_2derror( X2 );
L5933:
        X1 = PAIR_CAR( X2 );
        goto L5931;
L5930:
        X1 = _TSCP( 40 );
L5931:
        SETGEN( PAIR_CAR( f3880 ), X1 );
        if  ( FALSE( scrt1_equal_3f( PAIR_CAR( f3880 ), c3897 ) )
            )  goto L5935;
        POPSTACKTRACE( sc_formatnumber( n3879, 
                                        _TSCP( 0 ), _TSCP( 0 ) ) );
L5935:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3880 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5984;
        X3 = scrt1_length( PAIR_CAR( f3880 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L5942;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L5943;
L5942:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L5943:
        if  ( FALSE( X2 ) )  goto L5984;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5952;
        scrt1__24__car_2derror( X4 );
L5952:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3927 ) ) )  goto L5984;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5959;
        scrt1__24__cdr_2derror( X4 );
L5959:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5962;
        scrt1__24__car_2derror( X5 );
L5962:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L5984;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5966;
        scrt1__24__cdr_2derror( X4 );
L5966:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5969;
        scrt1__24__car_2derror( X5 );
L5969:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L5973;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L5977;
        goto L5984;
L5973:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L5984;
L5977:
        X2 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5987;
        scrt1__24__cdr_2derror( X2 );
L5987:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5990;
        scrt1__24__car_2derror( X3 );
L5990:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3879, _TSCP( 4 ), X1 ) );
L5984:
        X1 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( f3880 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6039;
        X3 = scrt1_length( PAIR_CAR( f3880 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L5997;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L5998;
L5997:
        X2 = scrt2__3d_2dtwo( X3, _TSCP( 8 ) );
L5998:
        if  ( FALSE( X2 ) )  goto L6039;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6007;
        scrt1__24__car_2derror( X4 );
L6007:
        X3 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c3990 ) ) )  goto L6039;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6014;
        scrt1__24__cdr_2derror( X4 );
L6014:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6017;
        scrt1__24__car_2derror( X5 );
L6017:
        X3 = PAIR_CAR( X5 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6039;
        X4 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6021;
        scrt1__24__cdr_2derror( X4 );
L6021:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6024;
        scrt1__24__car_2derror( X5 );
L6024:
        X3 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6028;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6032;
        goto L6039;
L6028:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, _TSCP( 0 ) ) ) )  goto L6039;
L6032:
        X2 = PAIR_CAR( f3880 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6042;
        scrt1__24__cdr_2derror( X2 );
L6042:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6045;
        scrt1__24__car_2derror( X3 );
L6045:
        X1 = PAIR_CAR( X3 );
        POPSTACKTRACE( sc_formatnumber( n3879, _TSCP( 8 ), X1 ) );
L6039:
        X1 = PAIR_CAR( f3880 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L6049;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6053;
        goto L6054;
L6049:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 8 ) ) ) )  goto L6054;
L6053:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3879, _TSCP( 8 ) ) );
L6054:
        X1 = PAIR_CAR( f3880 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 32 ) ) ), 
                      3 ) )  goto L6059;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6063;
        goto L6064;
L6059:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 32 ) ) ) )  goto L6063;
L6064:
        X1 = PAIR_CAR( f3880 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 40 ) ) ), 
                      3 ) )  goto L6069;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6073;
        goto L6074;
L6069:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 40 ) ) ) )  goto L6074;
L6073:
        POPSTACKTRACE( scrt6_format( c4064, 
                                     CONS( n3879, EMPTYLIST ) ) );
L6074:
        X1 = PAIR_CAR( f3880 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 64 ) ) ), 
                      3 ) )  goto L6079;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6083;
        goto L6084;
L6079:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 64 ) ) ) )  goto L6083;
L6084:
        POPSTACKTRACE( scdebug_error( c3891, 
                                      c4062, 
                                      CONS( PAIR_CAR( f3880 ), 
                                            EMPTYLIST ) ) );
L6083:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3879, _TSCP( 64 ) ) );
L6063:
        POPSTACKTRACE( scrt2_integer_2d_3estring( n3879, _TSCP( 32 ) ) );
}

DEFTSCP( scrt2_integer_2d_3estring_v );
DEFCSTRING( t6087, "SCRT2_INTEGER->STRING" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt2_l4098, XAL2( TSCP, TSCP ) );

TSCP  scrt2_l4098( q4100, r4101 )
        TSCP  q4100, r4101;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside INTEGER->STRING]" );
        X2 = scrt2_inexact_2d_3eexact( r4101 );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L6125;
        scdebug_error( c4146, 
                       c4147, CONS( X2, EMPTYLIST ) );
L6125:
        X3 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X3 ) )  goto L6131;
        if  ( AND( EQ( TSCPTAG( c4170 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c4170 ), STRINGTAG ) )
            )  goto L6133;
        scdebug_error( c4168, 
                       c4169, CONS( c4170, EMPTYLIST ) );
L6133:
        X4 = C_FIXED( STRING_LENGTH( c4170 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L6137;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L6131;
        goto L6144;
L6137:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X4 ) ) )  goto L6144;
L6131:
        scdebug_error( c4146, 
                       c2316, CONS( X2, EMPTYLIST ) );
L6144:
        X1 = C_CHAR( STRING_CHAR( c4170, X2 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( q4100 ) ), 
                      3 ) )  goto L6147;
        if  ( EQ( _S2CUINT( _TSCP( 0 ) ), 
                  _S2CUINT( q4100 ) ) )  goto L6151;
        goto L6152;
L6147:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), q4100 ) ) )  goto L6151;
L6152:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4100 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6161;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6161;
        X3 = C_FIXED( QUOTIENT( _S2CINT( q4100 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6162;
L6161:
        X3 = scrt2_quotient( q4100, DISPLAY( 0 ) );
L6162:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( q4100 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6169;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6169;
        X4 = _TSCP( REMAINDER( _S2CINT( q4100 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6170;
L6169:
        X4 = scrt2_remainder( q4100, DISPLAY( 0 ) );
L6170:
        X2 = scrt2_l4098( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L6151:
        X2 = sc_cons( X1, EMPTYLIST );
        POPSTACKTRACE( X2 );
}

TSCP  scrt2_integer_2d_3estring( n4086, b4087 )
        TSCP  n4086, b4087;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6087 );
        DISPLAY( 0 ) = b4087;
        if  ( BITAND( BITOR( _S2CINT( n4086 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L6090;
        if  ( LT( _S2CINT( n4086 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L6094;
        goto L6095;
L6090:
        if  ( FALSE( scrt2__3c_2dtwo( n4086, _TSCP( 0 ) ) ) )  goto L6095;
L6094:
        if  ( NEQ( TSCPTAG( n4086 ), FIXNUMTAG ) )  goto L6098;
        if  ( LT( _S2CINT( n4086 ), 0 ) )  goto L6103;
        X2 = n4086;
        goto L6099;
L6103:
        X2 = _TSCP( INEGATE( _S2CINT( n4086 ) ) );
        goto L6099;
L6098:
        X2 = scrt2_abs( n4086 );
L6099:
        X1 = CONS( scrt2_integer_2d_3estring( X2, DISPLAY( 0 ) ), 
                   EMPTYLIST );
        SDVAL = scrt3_string_2dappend( CONS( c4197, X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L6095:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4086 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L6111;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6111;
        X3 = C_FIXED( QUOTIENT( _S2CINT( n4086 ), 
                                _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6112;
L6111:
        X3 = scrt2_quotient( n4086, DISPLAY( 0 ) );
L6112:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( n4086 ), 
                                          _S2CINT( DISPLAY( 0 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L6119;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L6119;
        X4 = _TSCP( REMAINDER( _S2CINT( n4086 ), 
                               _S2CINT( DISPLAY( 0 ) ) ) );
        goto L6120;
L6119:
        X4 = scrt2_remainder( n4086, DISPLAY( 0 ) );
L6120:
        X2 = scrt2_l4098( X3, X4 );
        X1 = scrt1_reverse( X2 );
        SDVAL = scrt3_list_2d_3estring( X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt2_string_2d_3enumber_v );
DEFCSTRING( t6172, "STRING->NUMBER" );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2_try_2dto_2dread, XAL1( TSCP ) );
EXTERNTSCP( scrt2_try_2dto_2dread_v );

TSCP  scrt2_string_2d_3enumber( s4213, r4214 )
        TSCP  s4213, r4214;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6172 );
        X1 = scrt3_string_2d_3elist( s4213 );
        if  ( FALSE( r4214 ) )  goto L6174;
        if  ( EQ( TSCPTAG( r4214 ), PAIRTAG ) )  goto L6177;
        scrt1__24__car_2derror( r4214 );
L6177:
        X3 = PAIR_CAR( r4214 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L6180;
        X2 = c4268;
        goto L6175;
L6180:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 32 ) ) ) )  goto L6182;
        X2 = c4267;
        goto L6175;
L6182:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 40 ) ) ) )  goto L6184;
        X2 = sc_emptystring;
        goto L6175;
L6184:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 64 ) ) ) )  goto L6186;
        X2 = c4266;
        goto L6175;
L6186:
        X2 = scdebug_error( c4260, 
                            c4261, 
                            CONS( PAIR_CAR( r4214 ), EMPTYLIST ) );
        goto L6175;
L6174:
        X2 = sc_emptystring;
L6175:
        X3 = sc_emptystring;
        X4 = X3;
        X5 = X1;
L6192:
        if  ( FALSE( X5 ) )  goto L6193;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6196;
        scrt1__24__car_2derror( X5 );
L6196:
        X6 = PAIR_CAR( X5 );
        if  ( FALSE( scrt1_memv( X6, c4228 ) ) )  goto L6199;
        X7 = sc_make_2dstring( _TSCP( 4 ), 
                               CONS( PAIR_CAR( X5 ), EMPTYLIST ) );
        X5 = PAIR_CDR( X5 );
        X4 = X7;
        GOBACK( L6192 );
L6199:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 8978 ) ) ) )  goto L6203;
        POPSTACKTRACE( scrt2_try_2dto_2dread( s4213 ) );
L6203:
        X8 = CONS( scrt3_list_2d_3estring( X5 ), EMPTYLIST );
        X8 = CONS( X2, X8 );
        X7 = scrt3_string_2dappend( CONS( X4, X8 ) );
        POPSTACKTRACE( scrt2_try_2dto_2dread( X7 ) );
L6193:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt2_try_2dto_2dread_v );
DEFCSTRING( t6205, "SCRT2_TRY-TO-READ" );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );

TSCP  scrt2_l4279( x4280, c6210 )
        TSCP  x4280, c6210;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt2_l4279 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c6210, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c6210, 1 );
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

TSCP  scrt2_l4275( r4276, c6207 )
        TSCP  r4276, c6207;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "scrt2_l4275 [inside TRY-TO-READ]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c6207, 0 );
        DISPLAY( 1 ) = r4276;
        DISPLAY( 2 ) = scdebug__2aerror_2dhandler_2a_v;
        scdebug__2aerror_2dhandler_2a_v = MAKEPROCEDURE( 0, 
                                                         1, 
                                                         scrt2_l4279, 
                                                         MAKECLOSURE( EMPTYLIST, 
                                                                      2, 
                                                                      DISPLAY( 2 ), 
                                                                      DISPLAY( 1 ) ) );
        X5 = scrt5_open_2dinput_2dstring( DISPLAY( 0 ) );
        X3 = scrt6_read( CONS( X5, EMPTYLIST ) );
        X4 = scrt6_read( CONS( X5, EMPTYLIST ) );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 2 );
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L6218;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), DOUBLEFLOATTAG ) )
            )  goto L6218;
        X2 = FALSEVALUE;
        goto L6223;
L6218:
        if  ( FALSE( scrt6_eof_2dobject_3f( X4 ) ) )  goto L6222;
        X2 = X3;
        goto L6223;
L6222:
        X2 = FALSEVALUE;
L6223:
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  scrt2_try_2dto_2dread( s4274 )
        TSCP  s4274;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t6205 );
        DISPLAY( 0 ) = s4274;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt2_l4275, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

void scrt5__init();
void scrt3__init();
void scrt6__init();
void scrt1__init();
void scdebug__init();

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
        INITIALIZEVAR( t4797, 
                       ADR( scrt2_symbol_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4799, 
                       ADR( scrt2_symbol_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_symbol_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4804, 
                       ADR( scrt2_top_2dlevel_2dvalue_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_top_2dlevel_2dvalue, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4808, 
                       ADR( scrt2_2dvalue_21_c9d2a496_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_2dvalue_21_c9d2a496, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4812, 
                       ADR( scrt2_getprop_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_getprop, EMPTYLIST ) );
        INITIALIZEVAR( t4836, 
                       ADR( scrt2_getprop_2dall_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_getprop_2dall, EMPTYLIST ) );
        INITIALIZEVAR( t4840, 
                       ADR( scrt2_putprop_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, scrt2_putprop, EMPTYLIST ) );
        INITIALIZEVAR( t4889, 
                       ADR( scrt2_fixed_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_fixed_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4891, 
                       ADR( scrt2_float_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_float_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4893, 
                       ADR( scrt2_float_2d_3efixed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_float_2d_3efixed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4906, 
                       ADR( scrt2_fixed_2d_3efloat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_fixed_2d_3efloat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4911, 
                       ADR( scrt2_number_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_number_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4915, 
                       ADR( scrt2_complex_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_complex_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4919, 
                       ADR( scrt2_real_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_real_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4923, 
                       ADR( scrt2_rational_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_rational_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4927, 
                       ADR( scrt2_integer_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_integer_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4936, 
                       ADR( scrt2_zero_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_zero_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4940, 
                       ADR( scrt2_positive_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_positive_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4944, 
                       ADR( scrt2_negative_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_negative_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4948, 
                       ADR( scrt2_odd_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_odd_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4973, 
                       ADR( scrt2_even_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_even_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4996, 
                       ADR( scrt2_exact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5003, 
                       ADR( scrt2_inexact_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_3f, EMPTYLIST ) );
        INITIALIZEVAR( t5010, 
                       ADR( scrt2__3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5029, 
                       ADR( scrt2__3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3d, EMPTYLIST ) );
        INITIALIZEVAR( t5054, 
                       ADR( scrt2__3c_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5073, 
                       ADR( scrt2__3c_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c, EMPTYLIST ) );
        INITIALIZEVAR( t5098, 
                       ADR( scrt2__3e_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5117, 
                       ADR( scrt2__3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e, EMPTYLIST ) );
        INITIALIZEVAR( t5142, 
                       ADR( scrt2__3c_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3c_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5161, 
                       ADR( scrt2__3c_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3c_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5186, 
                       ADR( scrt2__3e_3d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__3e_3d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5205, 
                       ADR( scrt2__3e_3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt2__3e_3d, EMPTYLIST ) );
        INITIALIZEVAR( t5230, 
                       ADR( scrt2_max_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_max_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5238, 
                       ADR( scrt2_max_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_max, EMPTYLIST ) );
        INITIALIZEVAR( t5259, 
                       ADR( scrt2_min_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_min_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5267, 
                       ADR( scrt2_min_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_min, EMPTYLIST ) );
        INITIALIZEVAR( t5288, 
                       ADR( scrt2__2b_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2b_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5307, 
                       ADR( scrt2__2b_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2b, EMPTYLIST ) );
        INITIALIZEVAR( t5320, 
                       ADR( scrt2__2a_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2a_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5339, 
                       ADR( scrt2__2a_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2__2a, EMPTYLIST ) );
        INITIALIZEVAR( t5352, 
                       ADR( scrt2__2d_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2d_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5371, 
                       ADR( scrt2__2d_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2d, EMPTYLIST ) );
        INITIALIZEVAR( t5396, 
                       ADR( scrt2__2f_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2__2f_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t5419, 
                       ADR( scrt2__2f_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2__2f, EMPTYLIST ) );
        INITIALIZEVAR( t5473, 
                       ADR( scrt2_abs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_abs, EMPTYLIST ) );
        INITIALIZEVAR( t5485, 
                       ADR( scrt2_quotient_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_quotient, EMPTYLIST ) );
        INITIALIZEVAR( t5506, 
                       ADR( scrt2_remainder_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_remainder, EMPTYLIST ) );
        INITIALIZEVAR( t5529, 
                       ADR( scrt2_modulo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_modulo, EMPTYLIST ) );
        INITIALIZEVAR( t5577, 
                       ADR( scrt2_gcd_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_gcd, EMPTYLIST ) );
        INITIALIZEVAR( t5665, 
                       ADR( scrt2_lcm_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt2_lcm, EMPTYLIST ) );
        INITIALIZEVAR( t5777, 
                       ADR( scrt2_floor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_floor, EMPTYLIST ) );
        INITIALIZEVAR( t5781, 
                       ADR( scrt2_ceiling_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_ceiling, EMPTYLIST ) );
        INITIALIZEVAR( t5785, 
                       ADR( scrt2_truncate_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_truncate, EMPTYLIST ) );
        INITIALIZEVAR( t5796, 
                       ADR( scrt2_round_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_round, EMPTYLIST ) );
        INITIALIZEVAR( t5802, 
                       ADR( scrt2_exp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_exp, EMPTYLIST ) );
        INITIALIZEVAR( t5804, 
                       ADR( scrt2_log_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_log, EMPTYLIST ) );
        INITIALIZEVAR( t5806, 
                       ADR( scrt2_sin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sin, EMPTYLIST ) );
        INITIALIZEVAR( t5808, 
                       ADR( scrt2_cos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_cos, EMPTYLIST ) );
        INITIALIZEVAR( t5810, 
                       ADR( scrt2_tan_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_tan, EMPTYLIST ) );
        INITIALIZEVAR( t5812, 
                       ADR( scrt2_asin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_asin, EMPTYLIST ) );
        INITIALIZEVAR( t5814, 
                       ADR( scrt2_acos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_acos, EMPTYLIST ) );
        INITIALIZEVAR( t5816, 
                       ADR( scrt2_atan_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt2_atan, EMPTYLIST ) );
        INITIALIZEVAR( t5823, 
                       ADR( scrt2_sqrt_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt2_sqrt, EMPTYLIST ) );
        INITIALIZEVAR( t5853, 
                       ADR( scrt2_expt_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt2_expt, EMPTYLIST ) );
        INITIALIZEVAR( t5902, 
                       ADR( scrt2_exact_2d_3einexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_exact_2d_3einexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5909, 
                       ADR( scrt2_inexact_2d_3eexact_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_inexact_2d_3eexact, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5924, 
                       ADR( scrt2_number_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_number_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6087, 
                       ADR( scrt2_integer_2d_3estring_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt2_integer_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6172, 
                       ADR( scrt2_string_2d_3enumber_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt2_string_2d_3enumber, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6205, 
                       ADR( scrt2_try_2dto_2dread_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt2_try_2dto_2dread, EMPTYLIST ) );
        return;
}
