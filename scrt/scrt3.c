
/* SCHEME->C */

#include <objects.h>

void scrt3__init();
DEFSTATICTSCP( c3560 );
DEFCSTRING( t3800, "Argument is not a list of CHARACTERS: ~s" );
DEFSTATICTSCP( c3536 );
DEFSTATICTSCP( c3535 );
DEFSTATICTSCP( c3484 );
DEFSTATICTSCP( c3459 );
DEFCSTRING( t3801, "Argument(s) not a STRING INDEX" );
DEFSTATICTSCP( c3323 );
DEFCSTRING( t3802, "Argument is not a STRING" );
DEFSTATICTSCP( c3282 );
DEFSTATICTSCP( c3281 );
DEFSTATICTSCP( c3175 );
DEFSTATICTSCP( c3070 );
DEFSTATICTSCP( c2969 );
DEFSTATICTSCP( c2890 );
DEFSTATICTSCP( c2817 );
DEFCSTRING( t3803, "Argument(s) not a STRING" );
DEFSTATICTSCP( c2748 );
DEFSTATICTSCP( c2747 );
DEFCSTRING( t3804, "Argument(s) incorrect" );
DEFSTATICTSCP( c2735 );
DEFCSTRING( t3805, "Argument is not a CHAR: ~s" );
DEFSTATICTSCP( c2714 );
DEFSTATICTSCP( c2711 );
DEFCSTRING( t3806, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2700 );
DEFSTATICTSCP( c2679 );
DEFCSTRING( t3807, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2670 );
DEFSTATICTSCP( c2669 );
DEFSTATICTSCP( c2586 );
DEFSTATICTSCP( c2565 );
DEFSTATICTSCP( c2544 );
DEFSTATICTSCP( c2523 );
DEFSTATICTSCP( c2482 );
DEFSTATICTSCP( c2459 );
DEFCSTRING( t3808, "Argument not a CHAR" );
DEFSTATICTSCP( c2416 );
DEFSTATICTSCP( c2415 );
DEFSTATICTSCP( c2378 );
DEFSTATICTSCP( c2336 );
DEFSTATICTSCP( c2219 );
DEFCSTRING( t3809, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c2196 );
DEFSTATICTSCP( c2195 );
DEFCSTRING( t3810, "Argument not an unsigned 8-bit INTEGER: ~s" );
DEFSTATICTSCP( c2113 );
DEFSTATICTSCP( c2112 );
DEFCSTRING( t3811, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2085 );
DEFCSTRING( t3812, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2081 );
DEFCSTRING( t3813, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2078 );
DEFSTATICTSCP( c2077 );
DEFSTATICTSCP( c2034 );
DEFSTATICTSCP( c2024 );
DEFCSTRING( t3814, "Argument(s) not CHAR: ~s ~s" );
DEFSTATICTSCP( c2014 );
DEFSTATICTSCP( c2013 );

static void  init_constants()
{
        c3560 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-FILL!" ) );
        CONSTANTEXP( ADR( c3560 ) );
        c3536 = CSTRING_TSCP( t3800 );
        CONSTANTEXP( ADR( c3536 ) );
        c3535 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST->STRING" ) );
        CONSTANTEXP( ADR( c3535 ) );
        c3484 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING->LIST" ) );
        CONSTANTEXP( ADR( c3484 ) );
        c3459 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-APPEND" ) );
        CONSTANTEXP( ADR( c3459 ) );
        c3323 = CSTRING_TSCP( t3801 );
        CONSTANTEXP( ADR( c3323 ) );
        c3282 = CSTRING_TSCP( t3802 );
        CONSTANTEXP( ADR( c3282 ) );
        c3281 = STRINGTOSYMBOL( CSTRING_TSCP( "SUBSTRING" ) );
        CONSTANTEXP( ADR( c3281 ) );
        c3175 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-CI>?" ) );
        CONSTANTEXP( ADR( c3175 ) );
        c3070 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-CI<?" ) );
        CONSTANTEXP( ADR( c3070 ) );
        c2969 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-CI=?" ) );
        CONSTANTEXP( ADR( c2969 ) );
        c2890 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING>?" ) );
        CONSTANTEXP( ADR( c2890 ) );
        c2817 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING<?" ) );
        CONSTANTEXP( ADR( c2817 ) );
        c2748 = CSTRING_TSCP( t3803 );
        CONSTANTEXP( ADR( c2748 ) );
        c2747 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING=?" ) );
        CONSTANTEXP( ADR( c2747 ) );
        c2735 = CSTRING_TSCP( t3804 );
        CONSTANTEXP( ADR( c2735 ) );
        c2714 = CSTRING_TSCP( t3805 );
        CONSTANTEXP( ADR( c2714 ) );
        c2711 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-SET!" ) );
        CONSTANTEXP( ADR( c2711 ) );
        c2700 = CSTRING_TSCP( t3806 );
        CONSTANTEXP( ADR( c2700 ) );
        c2679 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c2679 ) );
        c2670 = CSTRING_TSCP( t3807 );
        CONSTANTEXP( ADR( c2670 ) );
        c2669 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2669 ) );
        c2586 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-DOWNCASE" ) );
        CONSTANTEXP( ADR( c2586 ) );
        c2565 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-UPCASE" ) );
        CONSTANTEXP( ADR( c2565 ) );
        c2544 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-LOWER-CASE?" ) );
        CONSTANTEXP( ADR( c2544 ) );
        c2523 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-UPPER-CASE?" ) );
        CONSTANTEXP( ADR( c2523 ) );
        c2482 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-WHITESPACE?" ) );
        CONSTANTEXP( ADR( c2482 ) );
        c2459 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-NUMERIC?" ) );
        CONSTANTEXP( ADR( c2459 ) );
        c2416 = CSTRING_TSCP( t3808 );
        CONSTANTEXP( ADR( c2416 ) );
        c2415 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-ALPHABETIC?" ) );
        CONSTANTEXP( ADR( c2415 ) );
        c2378 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR>=?" ) );
        CONSTANTEXP( ADR( c2378 ) );
        c2336 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR<=?" ) );
        CONSTANTEXP( ADR( c2336 ) );
        c2219 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2219 ) );
        c2196 = CSTRING_TSCP( t3809 );
        CONSTANTEXP( ADR( c2196 ) );
        c2195 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c2195 ) );
        c2113 = CSTRING_TSCP( t3810 );
        CONSTANTEXP( ADR( c2113 ) );
        c2112 = STRINGTOSYMBOL( CSTRING_TSCP( "INTEGER->CHAR" ) );
        CONSTANTEXP( ADR( c2112 ) );
        c2085 = CSTRING_TSCP( t3811 );
        CONSTANTEXP( ADR( c2085 ) );
        c2081 = CSTRING_TSCP( t3812 );
        CONSTANTEXP( ADR( c2081 ) );
        c2078 = CSTRING_TSCP( t3813 );
        CONSTANTEXP( ADR( c2078 ) );
        c2077 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c2077 ) );
        c2034 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR>?" ) );
        CONSTANTEXP( ADR( c2034 ) );
        c2024 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR<?" ) );
        CONSTANTEXP( ADR( c2024 ) );
        c2014 = CSTRING_TSCP( t3814 );
        CONSTANTEXP( ADR( c2014 ) );
        c2013 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR=?" ) );
        CONSTANTEXP( ADR( c2013 ) );
}

DEFTSCP( scrt3_char_3f_v );
DEFCSTRING( t3815, "CHAR?" );

TSCP  scrt3_char_3f( x2001 )
        TSCP  x2001;
{
        PUSHSTACKTRACE( t3815 );
        POPSTACKTRACE( BOOLEAN( EQ( TSCPIMMEDIATETAG( x2001 ), 
                                    CHARACTERTAG ) ) );
}

DEFTSCP( scrt3_char_3d_3f_v );
DEFCSTRING( t3817, "CHAR=?" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt3_char_3d_3f( x2005, y2006 )
        TSCP  x2005, y2006;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3817 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2005 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( y2006 ), CHARACTERTAG ) )
            )  goto L3820;
        X1 = CONS( y2006, EMPTYLIST );
        scdebug_error( c2013, c2014, CONS( x2005, X1 ) );
L3820:
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( x2005 ), 
                                    _S2CINT( y2006 ) ) ) );
}

DEFTSCP( scrt3_char_3c_3f_v );
DEFCSTRING( t3822, "CHAR<?" );

TSCP  scrt3_char_3c_3f( x2016, y2017 )
        TSCP  x2016, y2017;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3822 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2016 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( y2017 ), CHARACTERTAG ) )
            )  goto L3825;
        X1 = CONS( y2017, EMPTYLIST );
        scdebug_error( c2024, c2014, CONS( x2016, X1 ) );
L3825:
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( x2016 ), 
                                    _S2CINT( y2017 ) ) ) );
}

DEFTSCP( scrt3_char_3e_3f_v );
DEFCSTRING( t3827, "CHAR>?" );

TSCP  scrt3_char_3e_3f( x2026, y2027 )
        TSCP  x2026, y2027;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3827 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2026 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( y2027 ), CHARACTERTAG ) )
            )  goto L3830;
        X1 = CONS( y2027, EMPTYLIST );
        scdebug_error( c2034, c2014, CONS( x2026, X1 ) );
L3830:
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( x2026 ), 
                                    _S2CINT( y2027 ) ) ) );
}

DEFTSCP( scrt3_char_3c_3d_3f_v );
DEFCSTRING( t3832, "CHAR<=?" );

TSCP  scrt3_char_3c_3d_3f( x2036, y2037 )
        TSCP  x2036, y2037;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3832 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2036 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( y2037 ), CHARACTERTAG ) )
            )  goto L3835;
        X1 = CONS( y2037, EMPTYLIST );
        scdebug_error( c2034, c2014, CONS( x2036, X1 ) );
L3835:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2036 ), 
                                     _S2CINT( y2037 ) ) ) );
}

DEFTSCP( scrt3_char_3e_3d_3f_v );
DEFCSTRING( t3837, "CHAR>=?" );

TSCP  scrt3_char_3e_3d_3f( x2045, y2046 )
        TSCP  x2045, y2046;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3837 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2045 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( y2046 ), CHARACTERTAG ) )
            )  goto L3840;
        X1 = CONS( y2046, EMPTYLIST );
        scdebug_error( c2024, c2014, CONS( x2045, X1 ) );
L3840:
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( x2045 ), 
                                     _S2CINT( y2046 ) ) ) );
}

DEFTSCP( scrt3_char_2dupcase_2dtable_v );
DEFCSTRING( t3842, "SCRT3_CHAR-UPCASE-TABLE" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
DEFTSCP( scrt3_char_2dci_3d_3f_v );
DEFCSTRING( t3941, "CHAR-CI=?" );

TSCP  scrt3_char_2dci_3d_3f( x2204, y2205 )
        TSCP  x2204, y2205;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3941 );
        X2 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( y2205 ), CHARACTERTAG ) )  goto L3944;
        scdebug_error( c2195, 
                       c2196, CONS( y2205, EMPTYLIST ) );
L3944:
        X3 = CHAR_FIX( y2205 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3947;
        scdebug_error( c2219, 
                       c2078, CONS( X2, EMPTYLIST ) );
L3947:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3949;
        scdebug_error( c2219, 
                       c2081, CONS( X3, EMPTYLIST ) );
L3949:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3951;
        scdebug_error( c2219, 
                       c2085, CONS( X3, EMPTYLIST ) );
L3951:
        X1 = VECTOR_ELEMENT( X2, X3 );
        X3 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( x2204 ), CHARACTERTAG ) )  goto L3954;
        scdebug_error( c2195, 
                       c2196, CONS( x2204, EMPTYLIST ) );
L3954:
        X4 = CHAR_FIX( x2204 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L3957;
        scdebug_error( c2219, 
                       c2078, CONS( X3, EMPTYLIST ) );
L3957:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L3959;
        scdebug_error( c2219, 
                       c2081, CONS( X4, EMPTYLIST ) );
L3959:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L3961;
        scdebug_error( c2219, 
                       c2085, CONS( X4, EMPTYLIST ) );
L3961:
        X2 = VECTOR_ELEMENT( X3, X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ) )
            )  goto L3964;
        X3 = CONS( X1, EMPTYLIST );
        scdebug_error( c2013, c2014, CONS( X2, X3 ) );
L3964:
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( X2 ), 
                                    _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt3_char_2dci_3c_3f_v );
DEFCSTRING( t3966, "CHAR-CI<?" );

TSCP  scrt3_char_2dci_3c_3f( x2246, y2247 )
        TSCP  x2246, y2247;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3966 );
        X2 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( y2247 ), CHARACTERTAG ) )  goto L3969;
        scdebug_error( c2195, 
                       c2196, CONS( y2247, EMPTYLIST ) );
L3969:
        X3 = CHAR_FIX( y2247 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3972;
        scdebug_error( c2219, 
                       c2078, CONS( X2, EMPTYLIST ) );
L3972:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3974;
        scdebug_error( c2219, 
                       c2081, CONS( X3, EMPTYLIST ) );
L3974:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3976;
        scdebug_error( c2219, 
                       c2085, CONS( X3, EMPTYLIST ) );
L3976:
        X1 = VECTOR_ELEMENT( X2, X3 );
        X3 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( x2246 ), CHARACTERTAG ) )  goto L3979;
        scdebug_error( c2195, 
                       c2196, CONS( x2246, EMPTYLIST ) );
L3979:
        X4 = CHAR_FIX( x2246 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L3982;
        scdebug_error( c2219, 
                       c2078, CONS( X3, EMPTYLIST ) );
L3982:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L3984;
        scdebug_error( c2219, 
                       c2081, CONS( X4, EMPTYLIST ) );
L3984:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L3986;
        scdebug_error( c2219, 
                       c2085, CONS( X4, EMPTYLIST ) );
L3986:
        X2 = VECTOR_ELEMENT( X3, X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ) )
            )  goto L3989;
        X3 = CONS( X1, EMPTYLIST );
        scdebug_error( c2024, c2014, CONS( X2, X3 ) );
L3989:
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X2 ), 
                                    _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt3_char_2dci_3e_3f_v );
DEFCSTRING( t3991, "CHAR-CI>?" );

TSCP  scrt3_char_2dci_3e_3f( x2287, y2288 )
        TSCP  x2287, y2288;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3991 );
        X2 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( y2288 ), CHARACTERTAG ) )  goto L3994;
        scdebug_error( c2195, 
                       c2196, CONS( y2288, EMPTYLIST ) );
L3994:
        X3 = CHAR_FIX( y2288 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3997;
        scdebug_error( c2219, 
                       c2078, CONS( X2, EMPTYLIST ) );
L3997:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3999;
        scdebug_error( c2219, 
                       c2081, CONS( X3, EMPTYLIST ) );
L3999:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L4001;
        scdebug_error( c2219, 
                       c2085, CONS( X3, EMPTYLIST ) );
L4001:
        X1 = VECTOR_ELEMENT( X2, X3 );
        X3 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( x2287 ), CHARACTERTAG ) )  goto L4004;
        scdebug_error( c2195, 
                       c2196, CONS( x2287, EMPTYLIST ) );
L4004:
        X4 = CHAR_FIX( x2287 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L4007;
        scdebug_error( c2219, 
                       c2078, CONS( X3, EMPTYLIST ) );
L4007:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L4009;
        scdebug_error( c2219, 
                       c2081, CONS( X4, EMPTYLIST ) );
L4009:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L4011;
        scdebug_error( c2219, 
                       c2085, CONS( X4, EMPTYLIST ) );
L4011:
        X2 = VECTOR_ELEMENT( X3, X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ) )
            )  goto L4014;
        X3 = CONS( X1, EMPTYLIST );
        scdebug_error( c2034, c2014, CONS( X2, X3 ) );
L4014:
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( X2 ), 
                                    _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt3_char_2dci_3c_3d_3f_v );
DEFCSTRING( t4016, "CHAR-CI<=?" );

TSCP  scrt3_char_2dci_3c_3d_3f( x2328, y2329 )
        TSCP  x2328, y2329;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4016 );
        X2 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( y2329 ), CHARACTERTAG ) )  goto L4019;
        scdebug_error( c2195, 
                       c2196, CONS( y2329, EMPTYLIST ) );
L4019:
        X3 = CHAR_FIX( y2329 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L4022;
        scdebug_error( c2219, 
                       c2078, CONS( X2, EMPTYLIST ) );
L4022:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L4024;
        scdebug_error( c2219, 
                       c2081, CONS( X3, EMPTYLIST ) );
L4024:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L4026;
        scdebug_error( c2219, 
                       c2085, CONS( X3, EMPTYLIST ) );
L4026:
        X1 = VECTOR_ELEMENT( X2, X3 );
        X3 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( x2328 ), CHARACTERTAG ) )  goto L4029;
        scdebug_error( c2195, 
                       c2196, CONS( x2328, EMPTYLIST ) );
L4029:
        X4 = CHAR_FIX( x2328 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L4032;
        scdebug_error( c2219, 
                       c2078, CONS( X3, EMPTYLIST ) );
L4032:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L4034;
        scdebug_error( c2219, 
                       c2081, CONS( X4, EMPTYLIST ) );
L4034:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L4036;
        scdebug_error( c2219, 
                       c2085, CONS( X4, EMPTYLIST ) );
L4036:
        X2 = VECTOR_ELEMENT( X3, X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ) )
            )  goto L4039;
        X3 = CONS( X1, EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( X2, X3 ) );
L4039:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( X2 ), 
                                     _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt3_char_2dci_3e_3d_3f_v );
DEFCSTRING( t4041, "CHAR-CI>=?" );

TSCP  scrt3_char_2dci_3e_3d_3f( x2370, y2371 )
        TSCP  x2370, y2371;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4041 );
        X2 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( y2371 ), CHARACTERTAG ) )  goto L4044;
        scdebug_error( c2195, 
                       c2196, CONS( y2371, EMPTYLIST ) );
L4044:
        X3 = CHAR_FIX( y2371 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L4047;
        scdebug_error( c2219, 
                       c2078, CONS( X2, EMPTYLIST ) );
L4047:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L4049;
        scdebug_error( c2219, 
                       c2081, CONS( X3, EMPTYLIST ) );
L4049:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L4051;
        scdebug_error( c2219, 
                       c2085, CONS( X3, EMPTYLIST ) );
L4051:
        X1 = VECTOR_ELEMENT( X2, X3 );
        X3 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( x2370 ), CHARACTERTAG ) )  goto L4054;
        scdebug_error( c2195, 
                       c2196, CONS( x2370, EMPTYLIST ) );
L4054:
        X4 = CHAR_FIX( x2370 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L4057;
        scdebug_error( c2219, 
                       c2078, CONS( X3, EMPTYLIST ) );
L4057:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L4059;
        scdebug_error( c2219, 
                       c2081, CONS( X4, EMPTYLIST ) );
L4059:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L4061;
        scdebug_error( c2219, 
                       c2085, CONS( X4, EMPTYLIST ) );
L4061:
        X2 = VECTOR_ELEMENT( X3, X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ) )
            )  goto L4064;
        X3 = CONS( X1, EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( X2, X3 ) );
L4064:
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( X2 ), 
                                     _S2CINT( X1 ) ) ) );
}

DEFTSCP( scrt3_char_2dalphabetic_3f_v );
DEFCSTRING( t4066, "CHAR-ALPHABETIC?" );

TSCP  scrt3_char_2dalphabetic_3f( x2412 )
        TSCP  x2412;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4066 );
        if  ( EQ( TSCPIMMEDIATETAG( x2412 ), CHARACTERTAG ) )  goto L4068;
        scdebug_error( c2415, c2416, EMPTYLIST );
L4068:
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2412 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 16658 ) ), 
                       CHARACTERTAG ) ) )  goto L4071;
        X3 = CONS( _TSCP( 16658 ), EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( x2412, X3 ) );
L4071:
        X2 = BOOLEAN( GTE( _S2CINT( x2412 ), 
                           _S2CINT( _TSCP( 16658 ) ) ) );
        if  ( FALSE( X2 ) )  goto L4074;
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2412 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23058 ) ), 
                       CHARACTERTAG ) ) )  goto L4077;
        X3 = CONS( _TSCP( 23058 ), EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( x2412, X3 ) );
L4077:
        X1 = BOOLEAN( LTE( _S2CINT( x2412 ), 
                           _S2CINT( _TSCP( 23058 ) ) ) );
        goto L4075;
L4074:
        X1 = X2;
L4075:
        if  ( TRUE( X1 ) )  goto L4080;
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2412 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24850 ) ), 
                       CHARACTERTAG ) ) )  goto L4083;
        X3 = CONS( _TSCP( 24850 ), EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( x2412, X3 ) );
L4083:
        X2 = BOOLEAN( GTE( _S2CINT( x2412 ), 
                           _S2CINT( _TSCP( 24850 ) ) ) );
        if  ( FALSE( X2 ) )  goto L4086;
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2412 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 31250 ) ), 
                       CHARACTERTAG ) ) )  goto L4089;
        X3 = CONS( _TSCP( 31250 ), EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( x2412, X3 ) );
L4089:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2412 ), 
                                     _S2CINT( _TSCP( 31250 ) ) ) ) );
L4086:
        POPSTACKTRACE( X2 );
L4080:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_char_2dnumeric_3f_v );
DEFCSTRING( t4091, "CHAR-NUMERIC?" );

TSCP  scrt3_char_2dnumeric_3f( x2456 )
        TSCP  x2456;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4091 );
        if  ( EQ( TSCPIMMEDIATETAG( x2456 ), CHARACTERTAG ) )  goto L4093;
        scdebug_error( c2459, c2416, EMPTYLIST );
L4093:
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2456 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 12306 ) ), 
                       CHARACTERTAG ) ) )  goto L4096;
        X2 = CONS( _TSCP( 12306 ), EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( x2456, X2 ) );
L4096:
        X1 = BOOLEAN( GTE( _S2CINT( x2456 ), 
                           _S2CINT( _TSCP( 12306 ) ) ) );
        if  ( FALSE( X1 ) )  goto L4099;
        if  ( AND( EQ( TSCPIMMEDIATETAG( x2456 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 14610 ) ), 
                       CHARACTERTAG ) ) )  goto L4102;
        X2 = CONS( _TSCP( 14610 ), EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( x2456, X2 ) );
L4102:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( x2456 ), 
                                     _S2CINT( _TSCP( 14610 ) ) ) ) );
L4099:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_char_2dwhitespace_3f_v );
DEFCSTRING( t4104, "CHAR-WHITESPACE?" );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );

TSCP  scrt3_char_2dwhitespace_3f( x2479 )
        TSCP  x2479;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4104 );
        x2479 = CONS( x2479, EMPTYLIST );
        if  ( EQ( TSCPIMMEDIATETAG( PAIR_CAR( x2479 ) ), 
                  CHARACTERTAG ) )  goto L4106;
        scdebug_error( c2482, c2416, EMPTYLIST );
L4106:
        X2 = PAIR_CAR( x2479 );
        if  ( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ) )  goto L4109;
        scdebug_error( c2195, 
                       c2196, CONS( X2, EMPTYLIST ) );
L4109:
        X1 = CHAR_FIX( X2 );
        SETGEN( PAIR_CAR( x2479 ), X1 );
        X3 = PAIR_CAR( x2479 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 36 ) ) ), 
                      3 ) )  goto L4112;
        X2 = BOOLEAN( GTE( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 36 ) ) ) );
        goto L4113;
L4112:
        X2 = scrt2__3e_3d_2dtwo( X3, _TSCP( 36 ) );
L4113:
        if  ( FALSE( X2 ) )  goto L4115;
        X3 = PAIR_CAR( x2479 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 52 ) ) ), 
                      3 ) )  goto L4118;
        X1 = BOOLEAN( LTE( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 52 ) ) ) );
        goto L4116;
L4118:
        X1 = scrt2__3c_3d_2dtwo( X3, _TSCP( 52 ) );
        goto L4116;
L4115:
        X1 = X2;
L4116:
        if  ( TRUE( X1 ) )  goto L4121;
        X2 = PAIR_CAR( x2479 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L4124;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( _TSCP( 128 ) ) ) ) );
L4124:
        POPSTACKTRACE( scrt2__3d_2dtwo( X2, _TSCP( 128 ) ) );
L4121:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_char_2dupper_2dcase_3f_v );
DEFCSTRING( t4126, "CHAR-UPPER-CASE?" );

TSCP  scrt3_char_2dupper_2dcase_3f( l2520 )
        TSCP  l2520;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4126 );
        if  ( EQ( TSCPIMMEDIATETAG( l2520 ), CHARACTERTAG ) )  goto L4128;
        scdebug_error( c2523, c2416, EMPTYLIST );
L4128:
        if  ( AND( EQ( TSCPIMMEDIATETAG( l2520 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 16658 ) ), 
                       CHARACTERTAG ) ) )  goto L4131;
        X2 = CONS( _TSCP( 16658 ), EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( l2520, X2 ) );
L4131:
        X1 = BOOLEAN( GTE( _S2CINT( l2520 ), 
                           _S2CINT( _TSCP( 16658 ) ) ) );
        if  ( FALSE( X1 ) )  goto L4134;
        if  ( AND( EQ( TSCPIMMEDIATETAG( l2520 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23058 ) ), 
                       CHARACTERTAG ) ) )  goto L4137;
        X2 = CONS( _TSCP( 23058 ), EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( l2520, X2 ) );
L4137:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( l2520 ), 
                                     _S2CINT( _TSCP( 23058 ) ) ) ) );
L4134:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_char_2dlower_2dcase_3f_v );
DEFCSTRING( t4139, "CHAR-LOWER-CASE?" );

TSCP  scrt3_char_2dlower_2dcase_3f( l2541 )
        TSCP  l2541;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4139 );
        if  ( EQ( TSCPIMMEDIATETAG( l2541 ), CHARACTERTAG ) )  goto L4141;
        scdebug_error( c2544, c2416, EMPTYLIST );
L4141:
        if  ( AND( EQ( TSCPIMMEDIATETAG( l2541 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24850 ) ), 
                       CHARACTERTAG ) ) )  goto L4144;
        X2 = CONS( _TSCP( 24850 ), EMPTYLIST );
        scdebug_error( c2378, c2014, CONS( l2541, X2 ) );
L4144:
        X1 = BOOLEAN( GTE( _S2CINT( l2541 ), 
                           _S2CINT( _TSCP( 24850 ) ) ) );
        if  ( FALSE( X1 ) )  goto L4147;
        if  ( AND( EQ( TSCPIMMEDIATETAG( l2541 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 31250 ) ), 
                       CHARACTERTAG ) ) )  goto L4150;
        X2 = CONS( _TSCP( 31250 ), EMPTYLIST );
        scdebug_error( c2336, c2014, CONS( l2541, X2 ) );
L4150:
        POPSTACKTRACE( BOOLEAN( LTE( _S2CINT( l2541 ), 
                                     _S2CINT( _TSCP( 31250 ) ) ) ) );
L4147:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_char_2dupcase_v );
DEFCSTRING( t4152, "CHAR-UPCASE" );

TSCP  scrt3_char_2dupcase( x2562 )
        TSCP  x2562;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4152 );
        if  ( EQ( TSCPIMMEDIATETAG( x2562 ), CHARACTERTAG ) )  goto L4154;
        scdebug_error( c2565, c2416, EMPTYLIST );
L4154:
        X1 = scrt3_char_2dupcase_2dtable_v;
        X2 = CHAR_FIX( x2562 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L4158;
        scdebug_error( c2219, 
                       c2078, CONS( X1, EMPTYLIST ) );
L4158:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4160;
        scdebug_error( c2219, 
                       c2081, CONS( X2, EMPTYLIST ) );
L4160:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L4162;
        scdebug_error( c2219, 
                       c2085, CONS( X2, EMPTYLIST ) );
L4162:
        POPSTACKTRACE( VECTOR_ELEMENT( X1, X2 ) );
}

DEFTSCP( scrt3_char_2ddowncase_v );
DEFCSTRING( t4164, "CHAR-DOWNCASE" );

TSCP  scrt3_char_2ddowncase( x2583 )
        TSCP  x2583;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4164 );
        if  ( EQ( TSCPIMMEDIATETAG( x2583 ), CHARACTERTAG ) )  goto L4166;
        scdebug_error( c2586, c2416, EMPTYLIST );
L4166:
        if  ( FALSE( scrt3_char_2dalphabetic_3f( x2583 ) ) )  goto L4168;
        if  ( FALSE( scrt3_char_2dupper_2dcase_3f( x2583 ) ) )  goto L4170;
        X2 = CHAR_FIX( x2583 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L4174;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 128 ) ) ) );
        goto L4175;
L4174:
        X1 = scrt2__2b_2dtwo( X2, _TSCP( 128 ) );
L4175:
        X2 = BOOLEAN( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L4181;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4182;
        X3 = BOOLEAN( LT( _S2CINT( X1 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L4183;
L4182:
        X3 = scrt2__3c_2dtwo( X1, _TSCP( 0 ) );
L4183:
        if  ( TRUE( X3 ) )  goto L4181;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L4190;
        if  ( GT( _S2CINT( X1 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L4181;
        goto L4197;
L4190:
        if  ( FALSE( scrt2__3e_2dtwo( X1, _TSCP( 1020 ) ) ) )  goto L4197;
L4181:
        scdebug_error( c2112, 
                       c2113, CONS( X1, EMPTYLIST ) );
L4197:
        POPSTACKTRACE( FIX_CHAR( X1 ) );
L4170:
        POPSTACKTRACE( x2583 );
L4168:
        POPSTACKTRACE( x2583 );
}

DEFTSCP( scrt3_char_2d_3einteger_v );
DEFCSTRING( t4198, "CHAR->INTEGER" );

TSCP  scrt3_char_2d_3einteger( x2626 )
        TSCP  x2626;
{
        PUSHSTACKTRACE( t4198 );
        if  ( EQ( TSCPIMMEDIATETAG( x2626 ), CHARACTERTAG ) )  goto L4201;
        scdebug_error( c2195, 
                       c2196, CONS( x2626, EMPTYLIST ) );
L4201:
        POPSTACKTRACE( CHAR_FIX( x2626 ) );
}

DEFTSCP( scrt3_integer_2d_3echar_v );
DEFCSTRING( t4203, "INTEGER->CHAR" );

TSCP  scrt3_integer_2d_3echar( x2632 )
        TSCP  x2632;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4203 );
        X1 = BOOLEAN( NEQ( TSCPTAG( x2632 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L4210;
        if  ( BITAND( BITOR( _S2CINT( x2632 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4211;
        X2 = BOOLEAN( LT( _S2CINT( x2632 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L4212;
L4211:
        X2 = scrt2__3c_2dtwo( x2632, _TSCP( 0 ) );
L4212:
        if  ( TRUE( X2 ) )  goto L4210;
        if  ( BITAND( BITOR( _S2CINT( x2632 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L4219;
        if  ( GT( _S2CINT( x2632 ), 
                  _S2CINT( _TSCP( 1020 ) ) ) )  goto L4210;
        goto L4226;
L4219:
        if  ( FALSE( scrt2__3e_2dtwo( x2632, _TSCP( 1020 ) ) )
            )  goto L4226;
L4210:
        scdebug_error( c2112, 
                       c2113, CONS( x2632, EMPTYLIST ) );
L4226:
        POPSTACKTRACE( FIX_CHAR( x2632 ) );
}

DEFTSCP( scrt3_string_3f_v );
DEFCSTRING( t4227, "STRING?" );

TSCP  scrt3_string_3f( x2658 )
        TSCP  x2658;
{
        PUSHSTACKTRACE( t4227 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2658 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2658 ), 
                                         STRINGTAG ) ) ) );
}

DEFTSCP( scrt3_string_v );
DEFCSTRING( t4229, "STRING" );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );

TSCP  scrt3_string( x2662 )
        TSCP  x2662;
{
        PUSHSTACKTRACE( t4229 );
        POPSTACKTRACE( scrt3_list_2d_3estring( x2662 ) );
}

DEFTSCP( scrt3_string_2dlength_v );
DEFCSTRING( t4231, "STRING-LENGTH" );

TSCP  scrt3_string_2dlength( x2664 )
        TSCP  x2664;
{
        PUSHSTACKTRACE( t4231 );
        if  ( AND( EQ( TSCPTAG( x2664 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2664 ), STRINGTAG ) )
            )  goto L4234;
        scdebug_error( c2669, 
                       c2670, CONS( x2664, EMPTYLIST ) );
L4234:
        POPSTACKTRACE( C_FIXED( STRING_LENGTH( x2664 ) ) );
}

DEFTSCP( scrt3_string_2dref_v );
DEFCSTRING( t4236, "STRING-REF" );

TSCP  scrt3_string_2dref( x2672, y2673 )
        TSCP  x2672, y2673;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4236 );
        if  ( EQ( TSCPTAG( y2673 ), FIXNUMTAG ) )  goto L4239;
        scdebug_error( c2679, 
                       c2081, CONS( y2673, EMPTYLIST ) );
L4239:
        X1 = BOOLEAN( LT( _S2CINT( y2673 ), 0 ) );
        if  ( TRUE( X1 ) )  goto L4245;
        if  ( AND( EQ( TSCPTAG( x2672 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2672 ), STRINGTAG ) )
            )  goto L4247;
        scdebug_error( c2669, 
                       c2670, CONS( x2672, EMPTYLIST ) );
L4247:
        X2 = C_FIXED( STRING_LENGTH( x2672 ) );
        if  ( BITAND( BITOR( _S2CINT( y2673 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4251;
        if  ( GTE( _S2CINT( y2673 ), _S2CINT( X2 ) ) )  goto L4245;
        goto L4258;
L4251:
        if  ( FALSE( scrt2__3e_3d_2dtwo( y2673, X2 ) ) )  goto L4258;
L4245:
        scdebug_error( c2679, 
                       c2700, CONS( y2673, EMPTYLIST ) );
L4258:
        POPSTACKTRACE( C_CHAR( STRING_CHAR( x2672, y2673 ) ) );
}

DEFTSCP( scrt3_string_2dset_21_v );
DEFCSTRING( t4259, "STRING-SET!" );

TSCP  scrt3_string_2dset_21( x2702, y2703, z2704 )
        TSCP  x2702, y2703, z2704;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4259 );
        if  ( EQ( TSCPTAG( y2703 ), FIXNUMTAG ) )  goto L4262;
        scdebug_error( c2711, 
                       c2081, CONS( y2703, EMPTYLIST ) );
L4262:
        if  ( EQ( TSCPIMMEDIATETAG( z2704 ), CHARACTERTAG ) )  goto L4264;
        scdebug_error( c2711, 
                       c2714, CONS( z2704, EMPTYLIST ) );
L4264:
        X1 = BOOLEAN( LT( _S2CINT( y2703 ), 0 ) );
        if  ( TRUE( X1 ) )  goto L4270;
        if  ( AND( EQ( TSCPTAG( x2702 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2702 ), STRINGTAG ) )
            )  goto L4272;
        scdebug_error( c2669, 
                       c2670, CONS( x2702, EMPTYLIST ) );
L4272:
        X2 = C_FIXED( STRING_LENGTH( x2702 ) );
        if  ( BITAND( BITOR( _S2CINT( y2703 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4276;
        if  ( GTE( _S2CINT( y2703 ), _S2CINT( X2 ) ) )  goto L4270;
        goto L4283;
L4276:
        if  ( FALSE( scrt2__3e_3d_2dtwo( y2703, X2 ) ) )  goto L4283;
L4270:
        scdebug_error( c2711, c2735, EMPTYLIST );
L4283:
        STRING_CHAR( x2702, y2703 ) = CHAR_C( z2704 );
        POPSTACKTRACE( z2704 );
}

DEFTSCP( scrt3_string_3d_3f_v );
DEFCSTRING( t4284, "STRING=?" );

TSCP  scrt3_string_3d_3f( x2737, y2738 )
        TSCP  x2737, y2738;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4284 );
        X3 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x2737 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x2737 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X3 ) )  goto L4290;
        if  ( AND( EQ( TSCPTAG( y2738 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y2738 ), STRINGTAG ) )
            )  goto L4293;
L4290:
        scdebug_error( c2747, c2748, EMPTYLIST );
L4293:
        X3 = C_FIXED( STRING_LENGTH( y2738 ) );
        X1 = C_FIXED( STRING_LENGTH( x2737 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4296;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L4300;
        POPSTACKTRACE( FALSEVALUE );
L4296:
        if  ( TRUE( scrt2__3d_2dtwo( X1, X3 ) ) )  goto L4300;
        POPSTACKTRACE( FALSEVALUE );
L4300:
        X2 = _TSCP( 0 );
L4304:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L4305;
        X3 = BOOLEAN( EQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) );
        goto L4306;
L4305:
        X3 = scrt2__3d_2dtwo( X2, X1 );
L4306:
        if  ( TRUE( X3 ) )  goto L4311;
        X4 = C_CHAR( STRING_CHAR( x2737, X2 ) );
        X5 = C_CHAR( STRING_CHAR( y2738, X2 ) );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X5 ) ) )  goto L4311;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4314;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4304 );
L4314:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
        GOBACK( L4304 );
L4311:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L4316;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( X1 ) ) ) );
L4316:
        POPSTACKTRACE( scrt2__3d_2dtwo( X2, X1 ) );
}

DEFTSCP( scrt3_string_3c_3f_v );
DEFCSTRING( t4318, "STRING<?" );
EXTERNTSCPP( scrt2_min_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_min_2dtwo_v );

TSCP  scrt3_string_3c_3f( x2807, y2808 )
        TSCP  x2807, y2808;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4318 );
        X1 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x2807 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x2807 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X1 ) )  goto L4324;
        if  ( AND( EQ( TSCPTAG( y2808 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y2808 ), STRINGTAG ) )
            )  goto L4327;
L4324:
        scdebug_error( c2817, c2748, EMPTYLIST );
L4327:
        X1 = C_FIXED( STRING_LENGTH( x2807 ) );
        X2 = C_FIXED( STRING_LENGTH( y2808 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4330;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L4332;
        X3 = X1;
        goto L4331;
L4332:
        X3 = X2;
        goto L4331;
L4330:
        X3 = scrt2_min_2dtwo( X1, X2 );
L4331:
        X4 = _TSCP( 0 );
L4336:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4338;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) )  goto L4342;
        goto L4343;
L4338:
        if  ( TRUE( scrt2__3d_2dtwo( X4, X3 ) ) )  goto L4342;
L4343:
        X5 = C_CHAR( STRING_CHAR( y2808, X4 ) );
        X6 = C_CHAR( STRING_CHAR( x2807, X4 ) );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L4347;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4349;
        X4 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4336 );
L4349:
        X4 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L4336 );
L4347:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )
            )  goto L4352;
        X7 = CONS( X5, EMPTYLIST );
        scdebug_error( c2024, c2014, CONS( X6, X7 ) );
L4352:
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X6 ), 
                                    _S2CINT( X5 ) ) ) );
L4342:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4354;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X1 ), 
                                    _S2CINT( X2 ) ) ) );
L4354:
        POPSTACKTRACE( scrt2__3c_2dtwo( X1, X2 ) );
}

DEFTSCP( scrt3_string_3e_3f_v );
DEFCSTRING( t4356, "STRING>?" );

TSCP  scrt3_string_3e_3f( x2880, y2881 )
        TSCP  x2880, y2881;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4356 );
        X1 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x2880 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x2880 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X1 ) )  goto L4362;
        if  ( AND( EQ( TSCPTAG( y2881 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y2881 ), STRINGTAG ) )
            )  goto L4365;
L4362:
        scdebug_error( c2890, c2748, EMPTYLIST );
L4365:
        X1 = C_FIXED( STRING_LENGTH( x2880 ) );
        X2 = C_FIXED( STRING_LENGTH( y2881 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4368;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L4370;
        X3 = X1;
        goto L4369;
L4370:
        X3 = X2;
        goto L4369;
L4368:
        X3 = scrt2_min_2dtwo( X1, X2 );
L4369:
        X4 = _TSCP( 0 );
L4374:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4376;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) )  goto L4380;
        goto L4381;
L4376:
        if  ( TRUE( scrt2__3d_2dtwo( X4, X3 ) ) )  goto L4380;
L4381:
        X5 = C_CHAR( STRING_CHAR( y2881, X4 ) );
        X6 = C_CHAR( STRING_CHAR( x2880, X4 ) );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L4385;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4387;
        X4 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4374 );
L4387:
        X4 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L4374 );
L4385:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )
            )  goto L4390;
        X7 = CONS( X5, EMPTYLIST );
        scdebug_error( c2034, c2014, CONS( X6, X7 ) );
L4390:
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( X6 ), 
                                    _S2CINT( X5 ) ) ) );
L4380:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4392;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( X1 ), 
                                    _S2CINT( X2 ) ) ) );
L4392:
        POPSTACKTRACE( scrt2__3e_2dtwo( X1, X2 ) );
}

DEFTSCP( scrt3_string_3c_3d_3f_v );
DEFCSTRING( t4394, "STRING<=?" );

TSCP  scrt3_string_3c_3d_3f( x2953, y2954 )
        TSCP  x2953, y2954;
{
        PUSHSTACKTRACE( t4394 );
        if  ( TRUE( scrt3_string_3e_3f( x2953, y2954 ) ) )  goto L4396;
        POPSTACKTRACE( TRUEVALUE );
L4396:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt3_string_3e_3d_3f_v );
DEFCSTRING( t4398, "STRING>=?" );

TSCP  scrt3_string_3e_3d_3f( x2956, y2957 )
        TSCP  x2956, y2957;
{
        PUSHSTACKTRACE( t4398 );
        if  ( TRUE( scrt3_string_3c_3f( x2956, y2957 ) ) )  goto L4400;
        POPSTACKTRACE( TRUEVALUE );
L4400:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt3_string_2dci_3d_3f_v );
DEFCSTRING( t4402, "STRING-CI=?" );

TSCP  scrt3_string_2dci_3d_3f( x2959, y2960 )
        TSCP  x2959, y2960;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4402 );
        X3 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x2959 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x2959 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X3 ) )  goto L4408;
        if  ( AND( EQ( TSCPTAG( y2960 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y2960 ), STRINGTAG ) )
            )  goto L4411;
L4408:
        scdebug_error( c2969, c2748, EMPTYLIST );
L4411:
        X3 = C_FIXED( STRING_LENGTH( y2960 ) );
        X1 = C_FIXED( STRING_LENGTH( x2959 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4414;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L4418;
        POPSTACKTRACE( FALSEVALUE );
L4414:
        if  ( TRUE( scrt2__3d_2dtwo( X1, X3 ) ) )  goto L4418;
        POPSTACKTRACE( FALSEVALUE );
L4418:
        X2 = _TSCP( 0 );
L4422:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L4423;
        X3 = BOOLEAN( EQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) );
        goto L4424;
L4423:
        X3 = scrt2__3d_2dtwo( X2, X1 );
L4424:
        if  ( TRUE( X3 ) )  goto L4429;
        X5 = C_CHAR( STRING_CHAR( x2959, X2 ) );
        X6 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )  goto L4434;
        scdebug_error( c2195, 
                       c2196, CONS( X5, EMPTYLIST ) );
L4434:
        X7 = CHAR_FIX( X5 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L4437;
        scdebug_error( c2219, 
                       c2078, CONS( X6, EMPTYLIST ) );
L4437:
        if  ( EQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L4439;
        scdebug_error( c2219, 
                       c2081, CONS( X7, EMPTYLIST ) );
L4439:
        if  ( LT( _S2CUINT( FIXED_C( X7 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L4441;
        scdebug_error( c2219, 
                       c2085, CONS( X7, EMPTYLIST ) );
L4441:
        X4 = VECTOR_ELEMENT( X6, X7 );
        X6 = C_CHAR( STRING_CHAR( y2960, X2 ) );
        X7 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L4445;
        scdebug_error( c2195, 
                       c2196, CONS( X6, EMPTYLIST ) );
L4445:
        X8 = CHAR_FIX( X6 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L4448;
        scdebug_error( c2219, 
                       c2078, CONS( X7, EMPTYLIST ) );
L4448:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L4450;
        scdebug_error( c2219, 
                       c2081, CONS( X8, EMPTYLIST ) );
L4450:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L4452;
        scdebug_error( c2219, 
                       c2085, CONS( X8, EMPTYLIST ) );
L4452:
        X5 = VECTOR_ELEMENT( X7, X8 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X5 ) ) )  goto L4429;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4454;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4422 );
L4454:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
        GOBACK( L4422 );
L4429:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L4456;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( X1 ) ) ) );
L4456:
        POPSTACKTRACE( scrt2__3d_2dtwo( X2, X1 ) );
}

DEFTSCP( scrt3_string_2dci_3c_3f_v );
DEFCSTRING( t4458, "STRING-CI<?" );

TSCP  scrt3_string_2dci_3c_3f( x3060, y3061 )
        TSCP  x3060, y3061;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4458 );
        X1 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x3060 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x3060 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X1 ) )  goto L4464;
        if  ( AND( EQ( TSCPTAG( y3061 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y3061 ), STRINGTAG ) )
            )  goto L4467;
L4464:
        scdebug_error( c3070, c2748, EMPTYLIST );
L4467:
        X1 = C_FIXED( STRING_LENGTH( x3060 ) );
        X2 = C_FIXED( STRING_LENGTH( y3061 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4470;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L4472;
        X3 = X1;
        goto L4471;
L4472:
        X3 = X2;
        goto L4471;
L4470:
        X3 = scrt2_min_2dtwo( X1, X2 );
L4471:
        X4 = _TSCP( 0 );
L4476:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4478;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) )  goto L4482;
        goto L4483;
L4478:
        if  ( TRUE( scrt2__3d_2dtwo( X4, X3 ) ) )  goto L4482;
L4483:
        X6 = C_CHAR( STRING_CHAR( y3061, X4 ) );
        X7 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L4488;
        scdebug_error( c2195, 
                       c2196, CONS( X6, EMPTYLIST ) );
L4488:
        X8 = CHAR_FIX( X6 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L4491;
        scdebug_error( c2219, 
                       c2078, CONS( X7, EMPTYLIST ) );
L4491:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L4493;
        scdebug_error( c2219, 
                       c2081, CONS( X8, EMPTYLIST ) );
L4493:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L4495;
        scdebug_error( c2219, 
                       c2085, CONS( X8, EMPTYLIST ) );
L4495:
        X5 = VECTOR_ELEMENT( X7, X8 );
        X7 = C_CHAR( STRING_CHAR( x3060, X4 ) );
        X8 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ) )  goto L4499;
        scdebug_error( c2195, 
                       c2196, CONS( X7, EMPTYLIST ) );
L4499:
        X9 = CHAR_FIX( X7 );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L4502;
        scdebug_error( c2219, 
                       c2078, CONS( X8, EMPTYLIST ) );
L4502:
        if  ( EQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L4504;
        scdebug_error( c2219, 
                       c2081, CONS( X9, EMPTYLIST ) );
L4504:
        if  ( LT( _S2CUINT( FIXED_C( X9 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X8 ) ) ) )  goto L4506;
        scdebug_error( c2219, 
                       c2085, CONS( X9, EMPTYLIST ) );
L4506:
        X6 = VECTOR_ELEMENT( X8, X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L4509;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4511;
        X4 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4476 );
L4511:
        X4 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L4476 );
L4509:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )
            )  goto L4514;
        X7 = CONS( X5, EMPTYLIST );
        scdebug_error( c2024, c2014, CONS( X6, X7 ) );
L4514:
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X6 ), 
                                    _S2CINT( X5 ) ) ) );
L4482:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4516;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X1 ), 
                                    _S2CINT( X2 ) ) ) );
L4516:
        POPSTACKTRACE( scrt2__3c_2dtwo( X1, X2 ) );
}

DEFTSCP( scrt3_string_2dci_3e_3f_v );
DEFCSTRING( t4518, "STRING-CI>?" );

TSCP  scrt3_string_2dci_3e_3f( x3165, y3166 )
        TSCP  x3165, y3166;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4518 );
        X1 = BOOLEAN( NOT( AND( EQ( TSCPTAG( x3165 ), 
                                    EXTENDEDTAG ), 
                                EQ( TSCP_EXTENDEDTAG( x3165 ), 
                                    STRINGTAG ) ) ) );
        if  ( TRUE( X1 ) )  goto L4524;
        if  ( AND( EQ( TSCPTAG( y3166 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( y3166 ), STRINGTAG ) )
            )  goto L4527;
L4524:
        scdebug_error( c3175, c2748, EMPTYLIST );
L4527:
        X1 = C_FIXED( STRING_LENGTH( x3165 ) );
        X2 = C_FIXED( STRING_LENGTH( y3166 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4530;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L4532;
        X3 = X1;
        goto L4531;
L4532:
        X3 = X2;
        goto L4531;
L4530:
        X3 = scrt2_min_2dtwo( X1, X2 );
L4531:
        X4 = _TSCP( 0 );
L4536:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4538;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) )  goto L4542;
        goto L4543;
L4538:
        if  ( TRUE( scrt2__3d_2dtwo( X4, X3 ) ) )  goto L4542;
L4543:
        X6 = C_CHAR( STRING_CHAR( y3166, X4 ) );
        X7 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L4548;
        scdebug_error( c2195, 
                       c2196, CONS( X6, EMPTYLIST ) );
L4548:
        X8 = CHAR_FIX( X6 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L4551;
        scdebug_error( c2219, 
                       c2078, CONS( X7, EMPTYLIST ) );
L4551:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L4553;
        scdebug_error( c2219, 
                       c2081, CONS( X8, EMPTYLIST ) );
L4553:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L4555;
        scdebug_error( c2219, 
                       c2085, CONS( X8, EMPTYLIST ) );
L4555:
        X5 = VECTOR_ELEMENT( X7, X8 );
        X7 = C_CHAR( STRING_CHAR( x3165, X4 ) );
        X8 = scrt3_char_2dupcase_2dtable_v;
        if  ( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ) )  goto L4559;
        scdebug_error( c2195, 
                       c2196, CONS( X7, EMPTYLIST ) );
L4559:
        X9 = CHAR_FIX( X7 );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L4562;
        scdebug_error( c2219, 
                       c2078, CONS( X8, EMPTYLIST ) );
L4562:
        if  ( EQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L4564;
        scdebug_error( c2219, 
                       c2081, CONS( X9, EMPTYLIST ) );
L4564:
        if  ( LT( _S2CUINT( FIXED_C( X9 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X8 ) ) ) )  goto L4566;
        scdebug_error( c2219, 
                       c2085, CONS( X9, EMPTYLIST ) );
L4566:
        X6 = VECTOR_ELEMENT( X8, X9 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L4569;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4571;
        X4 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4536 );
L4571:
        X4 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L4536 );
L4569:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )
            )  goto L4574;
        X7 = CONS( X5, EMPTYLIST );
        scdebug_error( c2034, c2014, CONS( X6, X7 ) );
L4574:
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( X6 ), 
                                    _S2CINT( X5 ) ) ) );
L4542:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L4576;
        POPSTACKTRACE( BOOLEAN( GT( _S2CINT( X1 ), 
                                    _S2CINT( X2 ) ) ) );
L4576:
        POPSTACKTRACE( scrt2__3e_2dtwo( X1, X2 ) );
}

DEFTSCP( scrt3_string_2dci_3c_3d_3f_v );
DEFCSTRING( t4578, "STRING-CI<=?" );

TSCP  scrt3_string_2dci_3c_3d_3f( x3270, y3271 )
        TSCP  x3270, y3271;
{
        PUSHSTACKTRACE( t4578 );
        if  ( TRUE( scrt3_string_2dci_3e_3f( x3270, y3271 ) )
            )  goto L4580;
        POPSTACKTRACE( TRUEVALUE );
L4580:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt3_string_2dci_3e_3d_3f_v );
DEFCSTRING( t4582, "STRING-CI>=?" );

TSCP  scrt3_string_2dci_3e_3d_3f( x3273, y3274 )
        TSCP  x3273, y3274;
{
        PUSHSTACKTRACE( t4582 );
        if  ( TRUE( scrt3_string_2dci_3c_3f( x3273, y3274 ) )
            )  goto L4584;
        POPSTACKTRACE( TRUEVALUE );
L4584:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt3_substring_v );
DEFCSTRING( t4586, "SUBSTRING" );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  scrt3_substring( x3276, y3277, z3278 )
        TSCP  x3276, y3277, z3278;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4586 );
        if  ( AND( EQ( TSCPTAG( x3276 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x3276 ), STRINGTAG ) )
            )  goto L4588;
        scdebug_error( c3281, c3282, EMPTYLIST );
L4588:
        X1 = BOOLEAN( NEQ( TSCPTAG( y3277 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L4594;
        if  ( NEQ( TSCPTAG( y3277 ), FIXNUMTAG ) )  goto L4595;
        X2 = BOOLEAN( LT( _S2CINT( y3277 ), 0 ) );
        goto L4596;
L4595:
        X2 = scrt2_negative_3f( y3277 );
L4596:
        if  ( TRUE( X2 ) )  goto L4594;
        if  ( NEQ( TSCPTAG( z3278 ), FIXNUMTAG ) )  goto L4594;
        if  ( BITAND( BITOR( _S2CINT( z3278 ), 
                             _S2CINT( y3277 ) ), 
                      3 ) )  goto L4606;
        X3 = BOOLEAN( LT( _S2CINT( z3278 ), 
                          _S2CINT( y3277 ) ) );
        goto L4607;
L4606:
        X3 = scrt2__3c_2dtwo( z3278, y3277 );
L4607:
        if  ( TRUE( X3 ) )  goto L4594;
        X4 = C_FIXED( STRING_LENGTH( x3276 ) );
        if  ( BITAND( BITOR( _S2CINT( z3278 ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L4615;
        if  ( GT( _S2CINT( z3278 ), _S2CINT( X4 ) ) )  goto L4594;
        goto L4622;
L4615:
        if  ( FALSE( scrt2__3e_2dtwo( z3278, X4 ) ) )  goto L4622;
L4594:
        scdebug_error( c3281, c3323, EMPTYLIST );
L4622:
        X1 = y3277;
        X2 = _TSCP( 0 );
        if  ( BITAND( BITOR( _S2CINT( z3278 ), 
                             _S2CINT( y3277 ) ), 
                      3 ) )  goto L4624;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( z3278 ), 
                                 _S2CINT( y3277 ) ) );
        goto L4625;
L4624:
        X4 = scrt2__2d_2dtwo( z3278, y3277 );
L4625:
        X3 = sc_make_2dstring( X4, EMPTYLIST );
L4626:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( z3278 ) ), 
                      3 ) )  goto L4628;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( z3278 ) ) )  goto L4632;
        POPSTACKTRACE( X3 );
L4628:
        if  ( FALSE( scrt2__3d_2dtwo( X1, z3278 ) ) )  goto L4632;
        POPSTACKTRACE( X3 );
L4632:
        X4 = C_CHAR( STRING_CHAR( x3276, X1 ) );
        STRING_CHAR( X3, X2 ) = CHAR_C( X4 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4636;
        X4 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L4637;
L4636:
        X4 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L4637:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4638;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L4639;
L4638:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L4639:
        X2 = X5;
        X1 = X4;
        GOBACK( L4626 );
}

DEFTSCP( scrt3_string_2dappend_v );
DEFCSTRING( t4640, "STRING-APPEND" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  scrt3_string_2dappend( x3366 )
        TSCP  x3366;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4640 );
        X2 = x3366;
        X3 = _TSCP( 0 );
L4644:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4645;
        X1 = sc_make_2dstring( X3, EMPTYLIST );
        goto L4648;
L4645:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4650;
        scrt1__24__car_2derror( X2 );
L4650:
        X4 = PAIR_CAR( X2 );
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), STRINGTAG ) ) )
            )  goto L4647;
        X4 = PAIR_CDR( X2 );
        X6 = PAIR_CAR( X2 );
        X5 = C_FIXED( STRING_LENGTH( X6 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L4655;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X5 ) ) );
        goto L4656;
L4655:
        X3 = scrt2__2b_2dtwo( X3, X5 );
L4656:
        X2 = X4;
        GOBACK( L4644 );
L4647:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4658;
        scrt1__24__car_2derror( X2 );
L4658:
        X1 = scdebug_error( c3459, 
                            c2670, 
                            CONS( PAIR_CAR( X2 ), EMPTYLIST ) );
L4648:
        X2 = _TSCP( 0 );
        X3 = x3366;
L4660:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L4661;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4666;
        scrt1__24__car_2derror( X3 );
L4666:
        X4 = PAIR_CAR( X3 );
        X7 = PAIR_CAR( X3 );
        X6 = C_FIXED( STRING_LENGTH( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4670;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X6 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4671;
L4670:
        X5 = scrt2__2d_2dtwo( X6, _TSCP( 4 ) );
L4671:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L4673;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L4676;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), _S2CINT( X5 ) ) );
        goto L4677;
L4676:
        X6 = scrt2__2b_2dtwo( X2, X5 );
L4677:
        X7 = C_CHAR( STRING_CHAR( X4, X5 ) );
        STRING_CHAR( X1, X6 ) = CHAR_C( X7 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4678;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4671 );
L4678:
        X5 = scrt2__2d_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L4671 );
L4673:
        X6 = PAIR_CAR( X3 );
        X5 = C_FIXED( STRING_LENGTH( X6 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L4682;
        X4 = _TSCP( IPLUS( _S2CINT( X2 ), _S2CINT( X5 ) ) );
        goto L4683;
L4682:
        X4 = scrt2__2b_2dtwo( X2, X5 );
L4683:
        X3 = PAIR_CDR( X3 );
        X2 = X4;
        GOBACK( L4660 );
L4661:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt3_string_2d_3elist_v );
DEFCSTRING( t4685, "STRING->LIST" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt3_string_2d_3elist( x3481 )
        TSCP  x3481;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4685 );
        if  ( AND( EQ( TSCPTAG( x3481 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x3481 ), STRINGTAG ) )
            )  goto L4687;
        scdebug_error( c3484, 
                       c2670, CONS( x3481, EMPTYLIST ) );
L4687:
        X2 = C_FIXED( STRING_LENGTH( x3481 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4691;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4692;
L4691:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L4692:
        X2 = EMPTYLIST;
L4693:
        X2 = CONS( X2, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L4695;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L4699;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L4695:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L4699;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L4699:
        X4 = C_CHAR( STRING_CHAR( x3481, X1 ) );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4703;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4704;
L4703:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L4704:
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L4693 );
}

DEFTSCP( scrt3_list_2d_3estring_v );
DEFCSTRING( t4705, "LIST->STRING" );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  scrt3_list_2d_3estring( x3518 )
        TSCP  x3518;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4705 );
        X1 = _TSCP( 0 );
        X2 = x3518;
        X4 = scrt1_length( x3518 );
        X3 = sc_make_2dstring( X4, EMPTYLIST );
L4708:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4709;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4713;
        scrt1__24__car_2derror( X2 );
L4713:
        X4 = PAIR_CAR( X2 );
        if  ( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ) )  goto L4716;
        scdebug_error( c3535, 
                       c3536, CONS( x3518, EMPTYLIST ) );
L4716:
        STRING_CHAR( X3, X1 ) = CHAR_C( X4 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4718;
        X4 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L4719;
L4718:
        X4 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L4719:
        X5 = PAIR_CDR( X2 );
        X2 = X5;
        X1 = X4;
        GOBACK( L4708 );
L4709:
        POPSTACKTRACE( X3 );
}

DEFTSCP( scrt3_string_2dfill_21_v );
DEFCSTRING( t4721, "STRING-FILL!" );

TSCP  scrt3_string_2dfill_21( s3556, c3557 )
        TSCP  s3556, c3557;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4721 );
        if  ( AND( EQ( TSCPTAG( s3556 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s3556 ), STRINGTAG ) )
            )  goto L4723;
        scdebug_error( c3560, 
                       c2670, CONS( s3556, EMPTYLIST ) );
L4723:
        if  ( EQ( TSCPIMMEDIATETAG( c3557 ), CHARACTERTAG ) )  goto L4725;
        scdebug_error( c3560, 
                       c2714, CONS( c3557, EMPTYLIST ) );
L4725:
        X2 = C_FIXED( STRING_LENGTH( s3556 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4729;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4730;
L4729:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L4730:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L4733;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L4737;
        POPSTACKTRACE( s3556 );
L4733:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L4737;
        POPSTACKTRACE( s3556 );
L4737:
        STRING_CHAR( s3556, X1 ) = CHAR_C( c3557 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4741;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4730 );
L4741:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L4730 );
}

void scrt1__init();
void scrt2__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt1__init();
        scrt2__init();
        scdebug__init();
        MAXDISPLAY( 0 );
}

void  scrt3__init()
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt3 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3815, 
                       ADR( scrt3_char_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt3_char_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3817, 
                       ADR( scrt3_char_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3822, 
                       ADR( scrt3_char_3c_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_3c_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3827, 
                       ADR( scrt3_char_3e_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_3e_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3832, 
                       ADR( scrt3_char_3c_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_3c_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3837, 
                       ADR( scrt3_char_3e_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_3e_3d_3f, EMPTYLIST ) );
        X1 = sc_make_2dvector( _TSCP( 1024 ), EMPTYLIST );
        X2 = _TSCP( 0 );
L3845:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 1024 ) ) ), 
                      3 ) )  goto L3847;
        if  ( EQ( _S2CUINT( X2 ), 
                  _S2CUINT( _TSCP( 1024 ) ) ) )  goto L3851;
        goto L3852;
L3847:
        if  ( FALSE( scrt2__3d_2dtwo( X2, _TSCP( 1024 ) ) ) )  goto L3852;
L3851:
        if  ( EQ( TSCPIMMEDIATETAG( _TSCP( 24850 ) ), 
                  CHARACTERTAG ) )  goto L3858;
        scdebug_error( c2195, 
                       c2196, 
                       CONS( _TSCP( 24850 ), EMPTYLIST ) );
L3858:
        X4 = CHAR_FIX( _TSCP( 24850 ) );
        if  ( EQ( TSCPIMMEDIATETAG( _TSCP( 16658 ) ), 
                  CHARACTERTAG ) )  goto L3861;
        scdebug_error( c2195, 
                       c2196, 
                       CONS( _TSCP( 16658 ), EMPTYLIST ) );
L3861:
        X5 = CHAR_FIX( _TSCP( 16658 ) );
        X6 = _TSCP( 0 );
L3863:
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 104 ) ) ), 
                      3 ) )  goto L3865;
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 104 ) ) ) )  goto L3869;
        X3 = X1;
        goto L3855;
L3865:
        if  ( FALSE( scrt2__3d_2dtwo( X6, _TSCP( 104 ) ) ) )  goto L3869;
        X3 = X1;
        goto L3855;
L3869:
        X8 = BOOLEAN( NEQ( TSCPTAG( X5 ), FIXNUMTAG ) );
        if  ( TRUE( X8 ) )  goto L3879;
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L3880;
        X9 = BOOLEAN( LT( _S2CINT( X5 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L3881;
L3880:
        X9 = scrt2__3c_2dtwo( X5, _TSCP( 0 ) );
L3881:
        if  ( TRUE( X9 ) )  goto L3879;
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L3888;
        if  ( GT( _S2CINT( X5 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L3879;
        goto L3895;
L3888:
        if  ( FALSE( scrt2__3e_2dtwo( X5, _TSCP( 1020 ) ) ) )  goto L3895;
L3879:
        scdebug_error( c2112, 
                       c2113, CONS( X5, EMPTYLIST ) );
L3895:
        X7 = FIX_CHAR( X5 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3897;
        scdebug_error( c2077, 
                       c2078, CONS( X1, EMPTYLIST ) );
L3897:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L3899;
        scdebug_error( c2077, 
                       c2081, CONS( X4, EMPTYLIST ) );
L3899:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3901;
        scdebug_error( c2077, 
                       c2085, CONS( X4, EMPTYLIST ) );
L3901:
        SETGEN( VECTOR_ELEMENT( X1, X4 ), X7 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3903;
        X7 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3904;
L3903:
        X7 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L3904:
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3905;
        X8 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3906;
L3905:
        X8 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L3906:
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3907;
        X6 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3908;
L3907:
        X6 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L3908:
        X5 = X8;
        X4 = X7;
        GOBACK( L3863 );
L3852:
        X5 = BOOLEAN( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) );
        if  ( TRUE( X5 ) )  goto L3915;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L3916;
        X6 = BOOLEAN( LT( _S2CINT( X2 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L3917;
L3916:
        X6 = scrt2__3c_2dtwo( X2, _TSCP( 0 ) );
L3917:
        if  ( TRUE( X6 ) )  goto L3915;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L3924;
        if  ( GT( _S2CINT( X2 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L3915;
        goto L3931;
L3924:
        if  ( FALSE( scrt2__3e_2dtwo( X2, _TSCP( 1020 ) ) ) )  goto L3931;
L3915:
        scdebug_error( c2112, 
                       c2113, CONS( X2, EMPTYLIST ) );
L3931:
        X4 = FIX_CHAR( X2 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3933;
        scdebug_error( c2077, 
                       c2078, CONS( X1, EMPTYLIST ) );
L3933:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3935;
        scdebug_error( c2077, 
                       c2081, CONS( X2, EMPTYLIST ) );
L3935:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3937;
        scdebug_error( c2077, 
                       c2085, CONS( X2, EMPTYLIST ) );
L3937:
        SETGEN( VECTOR_ELEMENT( X1, X2 ), X4 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3939;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3845 );
L3939:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
        GOBACK( L3845 );
L3855:
        INITIALIZEVAR( t3842, 
                       ADR( scrt3_char_2dupcase_2dtable_v ), X3 );
        INITIALIZEVAR( t3941, 
                       ADR( scrt3_char_2dci_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_2dci_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3966, 
                       ADR( scrt3_char_2dci_3c_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_2dci_3c_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3991, 
                       ADR( scrt3_char_2dci_3e_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_2dci_3e_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4016, 
                       ADR( scrt3_char_2dci_3c_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_2dci_3c_3d_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4041, 
                       ADR( scrt3_char_2dci_3e_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_char_2dci_3e_3d_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4066, 
                       ADR( scrt3_char_2dalphabetic_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dalphabetic_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4091, 
                       ADR( scrt3_char_2dnumeric_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dnumeric_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4104, 
                       ADR( scrt3_char_2dwhitespace_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dwhitespace_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4126, 
                       ADR( scrt3_char_2dupper_2dcase_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dupper_2dcase_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4139, 
                       ADR( scrt3_char_2dlower_2dcase_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dlower_2dcase_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4152, 
                       ADR( scrt3_char_2dupcase_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2dupcase, EMPTYLIST ) );
        INITIALIZEVAR( t4164, 
                       ADR( scrt3_char_2ddowncase_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2ddowncase, EMPTYLIST ) );
        INITIALIZEVAR( t4198, 
                       ADR( scrt3_char_2d_3einteger_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_char_2d_3einteger, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4203, 
                       ADR( scrt3_integer_2d_3echar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_integer_2d_3echar, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4227, 
                       ADR( scrt3_string_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_string_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4229, 
                       ADR( scrt3_string_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt3_string, EMPTYLIST ) );
        INITIALIZEVAR( t4231, 
                       ADR( scrt3_string_2dlength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_string_2dlength, EMPTYLIST ) );
        INITIALIZEVAR( t4236, 
                       ADR( scrt3_string_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t4259, 
                       ADR( scrt3_string_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt3_string_2dset_21, EMPTYLIST ) );
        INITIALIZEVAR( t4284, 
                       ADR( scrt3_string_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4318, 
                       ADR( scrt3_string_3c_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_3c_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4356, 
                       ADR( scrt3_string_3e_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_3e_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4394, 
                       ADR( scrt3_string_3c_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_3c_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4398, 
                       ADR( scrt3_string_3e_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_3e_3d_3f, EMPTYLIST ) );
        INITIALIZEVAR( t4402, 
                       ADR( scrt3_string_2dci_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dci_3d_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4458, 
                       ADR( scrt3_string_2dci_3c_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dci_3c_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4518, 
                       ADR( scrt3_string_2dci_3e_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dci_3e_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4578, 
                       ADR( scrt3_string_2dci_3c_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dci_3c_3d_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4582, 
                       ADR( scrt3_string_2dci_3e_3d_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dci_3e_3d_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4586, 
                       ADR( scrt3_substring_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt3_substring, EMPTYLIST ) );
        INITIALIZEVAR( t4640, 
                       ADR( scrt3_string_2dappend_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt3_string_2dappend, EMPTYLIST ) );
        INITIALIZEVAR( t4685, 
                       ADR( scrt3_string_2d_3elist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_string_2d_3elist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4705, 
                       ADR( scrt3_list_2d_3estring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt3_list_2d_3estring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4721, 
                       ADR( scrt3_string_2dfill_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt3_string_2dfill_21, 
                                      EMPTYLIST ) );
        return;
}
