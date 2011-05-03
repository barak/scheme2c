
/* SCHEME->C */

#include <objects.h>

void plist__init();
DEFSTATICTSCP( c2125 );
DEFSTATICTSCP( _2aobarray_2a_v );
DEFCSTRING( t2131, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2107 );
DEFCSTRING( t2132, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2103 );
DEFCSTRING( t2133, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2100 );
DEFSTATICTSCP( c2099 );
DEFCSTRING( t2134, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2030 );
DEFSTATICTSCP( c2029 );
DEFSTATICTSCP( c2013 );

static void  init_constants()
{
        c2125 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c2125 ) );
        _2aobarray_2a_v = STRINGTOSYMBOL( CSTRING_TSCP( "*OBARRAY*" ) );
        CONSTANTEXP( ADR( _2aobarray_2a_v ) );
        c2107 = CSTRING_TSCP( t2131 );
        CONSTANTEXP( ADR( c2107 ) );
        c2103 = CSTRING_TSCP( t2132 );
        CONSTANTEXP( ADR( c2103 ) );
        c2100 = CSTRING_TSCP( t2133 );
        CONSTANTEXP( ADR( c2100 ) );
        c2099 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2099 ) );
        c2030 = CSTRING_TSCP( t2134 );
        CONSTANTEXP( ADR( c2030 ) );
        c2029 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2029 ) );
        c2013 = STRINGTOSYMBOL( CSTRING_TSCP( "SCC" ) );
        CONSTANTEXP( ADR( c2013 ) );
}

DEFTSCP( plist_get_v );
DEFCSTRING( t2135, "GET" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt2_getprop, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_getprop_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  plist_get( i2002, k2003 )
        TSCP  i2002, k2003;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t2135 );
        X3 = scrt2_getprop( i2002, c2013 );
        if  ( FALSE( X3 ) )  goto L2138;
        X2 = X3;
        goto L2139;
L2138:
        X2 = EMPTYLIST;
L2139:
        X1 = scrt1_assq( k2003, X2 );
        if  ( FALSE( X1 ) )  goto L2141;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L2144;
        scrt1__24__cdr_2derror( X1 );
L2144:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
L2141:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( plist_put_v );
DEFCSTRING( t2146, "PUT" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt2_putprop, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt2_putprop_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  plist_put( i2017, k2018, v2019 )
        TSCP  i2017, k2018, v2019;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t2146 );
        X2 = scrt2_getprop( i2017, c2013 );
        if  ( FALSE( X2 ) )  goto L2149;
        X1 = X2;
        goto L2150;
L2149:
        X1 = EMPTYLIST;
L2150:
        X2 = scrt1_assq( k2018, X1 );
        if  ( FALSE( X2 ) )  goto L2153;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L2156;
        scdebug_error( c2029, 
                       c2030, CONS( X2, EMPTYLIST ) );
L2156:
        SETGEN( PAIR_CDR( X2 ), v2019 );
        goto L2154;
L2153:
        X4 = sc_cons( k2018, v2019 );
        X3 = sc_cons( X4, X1 );
        scrt2_putprop( i2017, c2013, X3 );
L2154:
        POPSTACKTRACE( v2019 );
}

DEFTSCP( plist_copy_2dplist_v );
DEFCSTRING( t2158, "COPY-PLIST" );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( plist_l2081, XAL1( TSCP ) );

TSCP  plist_l2081( v2083 )
        TSCP  v2083;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside COPY-PLIST]" );
        if  ( NEQ( TSCPTAG( v2083 ), PAIRTAG ) )  goto L2197;
        X2 = PAIR_CAR( v2083 );
        X1 = plist_l2081( X2 );
        X3 = PAIR_CDR( v2083 );
        X2 = plist_l2081( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L2197:
        POPSTACKTRACE( v2083 );
}

TSCP  plist_copy_2dplist( s2037, d2038 )
        TSCP  s2037, d2038;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2158 );
        X3 = SYMBOL_VALUE( _2aobarray_2a_v );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L2162;
        scdebug_error( c2125, 
                       c2100, CONS( X3, EMPTYLIST ) );
L2162:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2165;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L2166;
L2165:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L2166:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L2169;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L2173;
        POPSTACKTRACE( FALSEVALUE );
L2169:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L2173;
        POPSTACKTRACE( FALSEVALUE );
L2173:
        X3 = SYMBOL_VALUE( _2aobarray_2a_v );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L2178;
        scdebug_error( c2099, 
                       c2100, CONS( X3, EMPTYLIST ) );
L2178:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L2180;
        scdebug_error( c2099, 
                       c2103, CONS( X1, EMPTYLIST ) );
L2180:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L2182;
        scdebug_error( c2099, 
                       c2107, CONS( X1, EMPTYLIST ) );
L2182:
        X2 = VECTOR_ELEMENT( X3, X1 );
        X3 = X2;
L2186:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L2187;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2191;
        scrt1__24__car_2derror( X3 );
L2191:
        X4 = PAIR_CAR( X3 );
        X6 = scrt2_getprop( X4, s2037 );
        X5 = plist_l2081( X6 );
        scrt2_putprop( X4, d2038, X5 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L2186 );
L2187:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2202;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L2166 );
L2202:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L2166 );
}

void scdebug__init();
void scrt2__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt2__init();
        scrt1__init();
        MAXDISPLAY( 0 );
}

void  plist__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(plist SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2135, 
                       ADR( plist_get_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, plist_get, EMPTYLIST ) );
        INITIALIZEVAR( t2146, 
                       ADR( plist_put_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, plist_put, EMPTYLIST ) );
        INITIALIZEVAR( t2158, 
                       ADR( plist_copy_2dplist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      plist_copy_2dplist, EMPTYLIST ) );
        return;
}
