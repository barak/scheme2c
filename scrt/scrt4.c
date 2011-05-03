
/* SCHEME->C */

#include <objects.h>

void scrt4__init();
DEFCSTRING( t3115, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c3064 );
DEFSTATICTSCP( c3063 );
DEFCSTRING( t3116, "Argument is not a valid SIGNAL HANDLER: ~s" );
DEFSTATICTSCP( c3008 );
DEFCSTRING( t3117, "Argument is not a valid SIGNAL: ~s" );
DEFSTATICTSCP( c2991 );
DEFSTATICTSCP( c2990 );
DEFCSTRING( t3118, "Argument is not a PROCEDURE: ~s" );
DEFSTATICTSCP( c2945 );
DEFSTATICTSCP( c2944 );
DEFSTATICTSCP( c2854 );
DEFSTATICTSCP( c2847 );
DEFSTATICTSCP( c2840 );
DEFSTATICTSCP( c2833 );
DEFSTATICTSCP( c2826 );
DEFSTATICTSCP( c2820 );
DEFSTATICTSCP( c2814 );
DEFCSTRING( t3119, "Structure is not a SCHEME pointer: ~s" );
DEFSTATICTSCP( c2808 );
DEFSTATICTSCP( c2807 );
DEFCSTRING( t3120, "#~" );
DEFSTATICTSCP( c2713 );
DEFSTATICTSCP( c2706 );
DEFSTATICTSCP( c2702 );
DEFSTATICTSCP( c2698 );
DEFSTATICTSCP( t3121 );
DEFSTATICTSCP( t3122 );
DEFSTATICTSCP( c2681 );
DEFSTATICTSCP( c2587 );
DEFSTATICTSCP( c2571 );
DEFCSTRING( t3123, "Argument is not a %RECORD: ~s" );
DEFSTATICTSCP( c2562 );
DEFSTATICTSCP( c2561 );
DEFCSTRING( t3124, "***** ~a " );
DEFSTATICTSCP( c2546 );
DEFCSTRING( t3125, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2470 );
DEFSTATICTSCP( c2469 );
DEFSTATICTSCP( c2170 );
DEFCSTRING( t3126, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2159 );
DEFCSTRING( t3127, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2152 );
DEFCSTRING( t3128, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2143 );
DEFSTATICTSCP( c2142 );

static void  init_constants()
{
        c3064 = CSTRING_TSCP( t3115 );
        CONSTANTEXP( ADR( c3064 ) );
        c3063 = STRINGTOSYMBOL( CSTRING_TSCP( "SYSTEM" ) );
        CONSTANTEXP( ADR( c3063 ) );
        c3008 = CSTRING_TSCP( t3116 );
        CONSTANTEXP( ADR( c3008 ) );
        c2991 = CSTRING_TSCP( t3117 );
        CONSTANTEXP( ADR( c2991 ) );
        c2990 = STRINGTOSYMBOL( CSTRING_TSCP( "SIGNAL" ) );
        CONSTANTEXP( ADR( c2990 ) );
        c2945 = CSTRING_TSCP( t3118 );
        CONSTANTEXP( ADR( c2945 ) );
        c2944 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN-UNREFERENCED" ) );
        CONSTANTEXP( ADR( c2944 ) );
        c2854 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-S2CUINT-SET!" ) );
        CONSTANTEXP( ADR( c2854 ) );
        c2847 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-TSCP-SET!" ) );
        CONSTANTEXP( ADR( c2847 ) );
        c2840 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-INT-SET!" ) );
        CONSTANTEXP( ADR( c2840 ) );
        c2833 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-BYTE-SET!" ) );
        CONSTANTEXP( ADR( c2833 ) );
        c2826 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-S2CUINT-REF" ) );
        CONSTANTEXP( ADR( c2826 ) );
        c2820 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-TSCP-REF" ) );
        CONSTANTEXP( ADR( c2820 ) );
        c2814 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-INT-REF" ) );
        CONSTANTEXP( ADR( c2814 ) );
        c2808 = CSTRING_TSCP( t3119 );
        CONSTANTEXP( ADR( c2808 ) );
        c2807 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-BYTE-REF" ) );
        CONSTANTEXP( ADR( c2807 ) );
        c2713 = CSTRING_TSCP( t3120 );
        CONSTANTEXP( ADR( c2713 ) );
        c2706 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EVAL" ) );
        CONSTANTEXP( ADR( c2706 ) );
        c2702 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EQUAL?" ) );
        CONSTANTEXP( ADR( c2702 ) );
        c2698 = EMPTYLIST;
        t3121 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-DISPLAY" ) );
        c2698 = CONS( t3121, c2698 );
        t3122 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-WRITE" ) );
        c2698 = CONS( t3122, c2698 );
        CONSTANTEXP( ADR( c2698 ) );
        c2681 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-METHODS" ) );
        CONSTANTEXP( ADR( c2681 ) );
        c2587 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-SET!" ) );
        CONSTANTEXP( ADR( c2587 ) );
        c2571 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-REF" ) );
        CONSTANTEXP( ADR( c2571 ) );
        c2562 = CSTRING_TSCP( t3123 );
        CONSTANTEXP( ADR( c2562 ) );
        c2561 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-LENGTH" ) );
        CONSTANTEXP( ADR( c2561 ) );
        c2546 = CSTRING_TSCP( t3124 );
        CONSTANTEXP( ADR( c2546 ) );
        c2470 = CSTRING_TSCP( t3125 );
        CONSTANTEXP( ADR( c2470 ) );
        c2469 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2469 ) );
        c2170 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c2170 ) );
        c2159 = CSTRING_TSCP( t3126 );
        CONSTANTEXP( ADR( c2159 ) );
        c2155 = CSTRING_TSCP( t3127 );
        CONSTANTEXP( ADR( c2155 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2152 ) );
        c2143 = CSTRING_TSCP( t3128 );
        CONSTANTEXP( ADR( c2143 ) );
        c2142 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c2142 ) );
}

DEFTSCP( scrt4_vector_3f_v );
DEFCSTRING( t3129, "VECTOR?" );

TSCP  scrt4_vector_3f( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t3129 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2131 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2131 ), 
                                         VECTORTAG ) ) ) );
}

DEFTSCP( scrt4_vector_v );
DEFCSTRING( t3131, "VECTOR" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );

TSCP  scrt4_vector( x2135 )
        TSCP  x2135;
{
        PUSHSTACKTRACE( t3131 );
        POPSTACKTRACE( scrt4_list_2d_3evector( x2135 ) );
}

DEFTSCP( scrt4_vector_2dlength_v );
DEFCSTRING( t3133, "VECTOR-LENGTH" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt4_vector_2dlength( x2137 )
        TSCP  x2137;
{
        PUSHSTACKTRACE( t3133 );
        if  ( AND( EQ( TSCPTAG( x2137 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2137 ), VECTORTAG ) )
            )  goto L3136;
        scdebug_error( c2142, 
                       c2143, CONS( x2137, EMPTYLIST ) );
L3136:
        POPSTACKTRACE( C_FIXED( VECTOR_LENGTH( x2137 ) ) );
}

DEFTSCP( scrt4_vector_2dref_v );
DEFCSTRING( t3138, "VECTOR-REF" );

TSCP  scrt4_vector_2dref( x2145, y2146 )
        TSCP  x2145, y2146;
{
        PUSHSTACKTRACE( t3138 );
        if  ( AND( EQ( TSCPTAG( x2145 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2145 ), VECTORTAG ) )
            )  goto L3141;
        scdebug_error( c2152, 
                       c2143, CONS( x2145, EMPTYLIST ) );
L3141:
        if  ( EQ( TSCPTAG( y2146 ), FIXNUMTAG ) )  goto L3143;
        scdebug_error( c2152, 
                       c2155, CONS( y2146, EMPTYLIST ) );
L3143:
        if  ( LT( _S2CUINT( FIXED_C( y2146 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2145 ) ) ) )  goto L3145;
        scdebug_error( c2152, 
                       c2159, CONS( y2146, EMPTYLIST ) );
L3145:
        POPSTACKTRACE( VECTOR_ELEMENT( x2145, y2146 ) );
}

DEFTSCP( scrt4_vector_2dset_21_v );
DEFCSTRING( t3147, "VECTOR-SET!" );

TSCP  scrt4_vector_2dset_21( x2161, y2162, z2163 )
        TSCP  x2161, y2162, z2163;
{
        PUSHSTACKTRACE( t3147 );
        if  ( AND( EQ( TSCPTAG( x2161 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2161 ), VECTORTAG ) )
            )  goto L3150;
        scdebug_error( c2170, 
                       c2143, CONS( x2161, EMPTYLIST ) );
L3150:
        if  ( EQ( TSCPTAG( y2162 ), FIXNUMTAG ) )  goto L3152;
        scdebug_error( c2170, 
                       c2155, CONS( y2162, EMPTYLIST ) );
L3152:
        if  ( LT( _S2CUINT( FIXED_C( y2162 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2161 ) ) ) )  goto L3154;
        scdebug_error( c2170, 
                       c2159, CONS( y2162, EMPTYLIST ) );
L3154:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( x2161, y2162 ), 
                               z2163 ) );
}

DEFTSCP( scrt4_vector_2d_3elist_v );
DEFCSTRING( t3156, "VECTOR->LIST" );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt4_vector_2d_3elist( x2177 )
        TSCP  x2177;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3156 );
        if  ( AND( EQ( TSCPTAG( x2177 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2177 ), VECTORTAG ) )
            )  goto L3160;
        scdebug_error( c2142, 
                       c2143, CONS( x2177, EMPTYLIST ) );
L3160:
        X2 = C_FIXED( VECTOR_LENGTH( x2177 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3163;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3164;
L3163:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3164:
        X2 = EMPTYLIST;
L3165:
        X2 = CONS( X2, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3167;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3171;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3167:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3171;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3171:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3176;
        scdebug_error( c2152, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3176:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2177 ) ) ) )  goto L3178;
        scdebug_error( c2152, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3178:
        X4 = VECTOR_ELEMENT( x2177, X1 );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3180;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3181;
L3180:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L3181:
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L3165 );
}

DEFTSCP( scrt4_list_2d_3evector_v );
DEFCSTRING( t3182, "LIST->VECTOR" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  scrt4_list_2d_3evector( x2223 )
        TSCP  x2223;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3182 );
        X2 = scrt1_length( x2223 );
        X1 = sc_make_2dvector( X2, EMPTYLIST );
        X2 = x2223;
        X3 = _TSCP( 0 );
L3185:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3186;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3190;
        scrt1__24__car_2derror( X2 );
L3190:
        X4 = PAIR_CAR( X2 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3193;
        scdebug_error( c2170, 
                       c2143, CONS( X1, EMPTYLIST ) );
L3193:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3195;
        scdebug_error( c2170, 
                       c2155, CONS( X3, EMPTYLIST ) );
L3195:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3197;
        scdebug_error( c2170, 
                       c2159, CONS( X3, EMPTYLIST ) );
L3197:
        SETGEN( VECTOR_ELEMENT( X1, X3 ), X4 );
        X4 = PAIR_CDR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3200;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3201;
L3200:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L3201:
        X2 = X4;
        GOBACK( L3185 );
L3186:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_vector_2dfill_21_v );
DEFCSTRING( t3202, "VECTOR-FILL!" );

TSCP  scrt4_vector_2dfill_21( v2262, x2263 )
        TSCP  v2262, x2263;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3202 );
        if  ( AND( EQ( TSCPTAG( v2262 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v2262 ), VECTORTAG ) )
            )  goto L3206;
        scdebug_error( c2142, 
                       c2143, CONS( v2262, EMPTYLIST ) );
L3206:
        X2 = C_FIXED( VECTOR_LENGTH( v2262 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3209;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3210;
L3209:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3210:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3213;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3217;
        POPSTACKTRACE( v2262 );
L3213:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3217;
        POPSTACKTRACE( v2262 );
L3217:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3222;
        scdebug_error( c2170, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3222:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v2262 ) ) ) )  goto L3224;
        scdebug_error( c2170, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3224:
        SETGEN( VECTOR_ELEMENT( v2262, X1 ), x2263 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3226;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3210 );
L3226:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L3210 );
}

DEFTSCP( scrt4_procedure_3f_v );
DEFCSTRING( t3228, "PROCEDURE?" );

TSCP  scrt4_procedure_3f( x2306 )
        TSCP  x2306;
{
        PUSHSTACKTRACE( t3228 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2306 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2306 ), 
                                         PROCEDURETAG ) ) ) );
}

DEFTSCP( scrt4_apply_v );
DEFCSTRING( t3230, "APPLY" );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt4_l2316, XAL1( TSCP ) );

TSCP  scrt4_l2316( o2318 )
        TSCP  o2318;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside APPLY]" );
        if  ( EQ( TSCPTAG( o2318 ), PAIRTAG ) )  goto L3237;
        scrt1__24__cdr_2derror( o2318 );
L3237:
        if  ( FALSE( PAIR_CDR( o2318 ) ) )  goto L3239;
        X1 = PAIR_CAR( o2318 );
        X3 = PAIR_CDR( o2318 );
        X2 = scrt4_l2316( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3239:
        POPSTACKTRACE( PAIR_CAR( o2318 ) );
}

TSCP  scrt4_apply( p2310, a2311, o2312 )
        TSCP  p2310, a2311, o2312;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3230 );
        if  ( FALSE( o2312 ) )  goto L3232;
        X2 = scrt4_l2316( o2312 );
        X1 = sc_cons( a2311, X2 );
        POPSTACKTRACE( sc_apply_2dtwo( p2310, X1 ) );
L3232:
        POPSTACKTRACE( sc_apply_2dtwo( p2310, a2311 ) );
}

DEFTSCP( scrt4_map_v );
DEFCSTRING( t3244, "MAP" );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  scrt4_map( f2336, x2337, _262338 )
        TSCP  f2336, x2337, _262338;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3244 );
        X1 = sc_cons( x2337, _262338 );
        X2 = X1;
        X3 = EMPTYLIST;
L3249:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3253;
        scrt1__24__car_2derror( X2 );
L3253:
        X4 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3250;
        POPSTACKTRACE( scrt1_reverse( X3 ) );
L3250:
        X5 = X2;
        X6 = X5;
        X7 = EMPTYLIST;
L3257:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3258;
        X4 = scrt1_reverse( X7 );
        goto L3259;
L3258:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3261;
        scrt1__24__cdr_2derror( X6 );
L3261:
        X8 = PAIR_CDR( X6 );
        X10 = PAIR_CAR( X6 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3265;
        scrt1__24__cdr_2derror( X10 );
L3265:
        X9 = PAIR_CDR( X10 );
        X7 = sc_cons( X9, X7 );
        X6 = X8;
        GOBACK( L3257 );
L3259:
        X7 = X2;
        X8 = X7;
        X9 = EMPTYLIST;
L3269:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3270;
        X6 = scrt1_reverse( X9 );
        goto L3271;
L3270:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3273;
        scrt1__24__cdr_2derror( X8 );
L3273:
        X10 = PAIR_CDR( X8 );
        X12 = PAIR_CAR( X8 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3277;
        scrt1__24__car_2derror( X12 );
L3277:
        X11 = PAIR_CAR( X12 );
        X9 = sc_cons( X11, X9 );
        X8 = X10;
        GOBACK( L3269 );
L3271:
        X5 = sc_apply_2dtwo( f2336, X6 );
        X3 = sc_cons( X5, X3 );
        X2 = X4;
        GOBACK( L3249 );
}

DEFTSCP( scrt4_for_2deach_v );
DEFCSTRING( t3279, "FOR-EACH" );
EXTERNTSCPP( scrt1_car, XAL1( TSCP ) );
EXTERNTSCP( scrt1_car_v );
EXTERNTSCPP( scrt1_cdr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdr_v );

TSCP  scrt4_for_2deach( p2418, a2419, o2420 )
        TSCP  p2418, a2419, o2420;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3279 );
        X1 = sc_cons( a2419, o2420 );
L3282:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3286;
        scrt1__24__car_2derror( X1 );
L3286:
        X2 = PAIR_CAR( X1 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3283;
        X3 = X1;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3291:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3292;
        X2 = X4;
        goto L3299;
L3292:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3295;
        scrt1__24__car_2derror( X3 );
L3295:
        X8 = PAIR_CAR( X3 );
        X7 = scrt1_car( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3298;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L3291 );
L3298:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3303;
        scdebug_error( c2469, 
                       c2470, CONS( X5, EMPTYLIST ) );
L3303:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L3291 );
L3299:
        sc_apply_2dtwo( p2418, X2 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L3307:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3308;
        X1 = X3;
        GOBACK( L3282 );
L3308:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3311;
        scrt1__24__car_2derror( X2 );
L3311:
        X7 = PAIR_CAR( X2 );
        X6 = scrt1_cdr( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3314;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L3307 );
L3314:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3319;
        scdebug_error( c2469, 
                       c2470, CONS( X4, EMPTYLIST ) );
L3319:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L3307 );
L3283:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt4_force_v );
DEFCSTRING( t3321, "FORCE" );

TSCP  scrt4_force( o2522 )
        TSCP  o2522;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3321 );
        X1 = o2522;
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt4_make_2dpromise_v );
DEFCSTRING( t3323, "MAKE-PROMISE" );

TSCP  scrt4_l2528( c3326 )
        TSCP  c3326;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt4_l2528 [inside MAKE-PROMISE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3326, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3326, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3326, 2 );
        if  ( TRUE( PAIR_CAR( DISPLAY( 2 ) ) ) )  goto L3328;
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 0 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X5 );
        X5 = TRUEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X5 );
L3328:
        X4 = PAIR_CAR( DISPLAY( 1 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  scrt4_make_2dpromise( p2524 )
        TSCP  p2524;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3323 );
        DISPLAY( 0 ) = p2524;
        DISPLAY( 1 ) = FALSEVALUE;
        DISPLAY( 2 ) = FALSEVALUE;
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        SDVAL = MAKEPROCEDURE( 0, 
                               0, 
                               scrt4_l2528, 
                               MAKECLOSURE( EMPTYLIST, 
                                            3, 
                                            DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt4_catch_2derror_v );
DEFCSTRING( t3331, "CATCH-ERROR" );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );
EXTERNTSCPP( scrt5_open_2doutput_2dstring, XAL0(  ) );
EXTERNTSCP( scrt5_open_2doutput_2dstring_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt6_get_2doutput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt6_get_2doutput_2dstring_v );

TSCP  scrt4_e2539( i2541, f2542, a2543, c3337 )
        TSCP  i2541, f2542, a2543, c3337;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "ERROR [inside CATCH-ERROR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3337, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3337, 1 );
        X4 = scrt5_open_2doutput_2dstring(  );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 1 );
        X5 = CONS( i2541, EMPTYLIST );
        scrt6_format( X4, CONS( c2546, X5 ) );
        X6 = CONS( a2543, EMPTYLIST );
        X5 = scrt1_cons_2a( X4, CONS( f2542, X6 ) );
        sc_apply_2dtwo( scrt6_format_v, X5 );
        X6 = scrt6_get_2doutput_2dstring( X4 );
        X5 = DISPLAY( 2 );
        X5 = UNKNOWNCALL( X5, 1 );
        X3 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  scrt4_l2536( r2537, c3334 )
        TSCP  r2537, c3334;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "scrt4_l2536 [inside CATCH-ERROR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3334, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3334, 1 );
        DISPLAY( 2 ) = r2537;
        X4 = _TSCP( 0 );
        X4 = CONS( X4, EMPTYLIST );
        X5 = MAKEPROCEDURE( 2, 
                            1, 
                            scrt4_e2539, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ) ) );
        SETGEN( PAIR_CAR( X4 ), X5 );
        scdebug__2aerror_2dhandler_2a_v = PAIR_CAR( X4 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 0 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( PROCEDURE_CLOSURE( X7 ) );
        X5 = sc_cons( X6, EMPTYLIST );
        X3 = X5;
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  scrt4_catch_2derror( p2531 )
        TSCP  p2531;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3331 );
        DISPLAY( 0 ) = p2531;
        DISPLAY( 1 ) = scdebug__2aerror_2dhandler_2a_v;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt4_l2536, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = sc_ntinuation_1af38b9f_v;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 1 );
        SDVAL = X1;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt4__25record_3f_v );
DEFCSTRING( t3342, "%RECORD?" );

TSCP  scrt4__25record_3f( x2550 )
        TSCP  x2550;
{
        PUSHSTACKTRACE( t3342 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2550 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2550 ), 
                                         RECORDTAG ) ) ) );
}

DEFTSCP( scrt4__25record_v );
DEFCSTRING( t3344, "%RECORD" );
EXTERNTSCPP( scrt4_list_2d_3e_25record, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3e_25record_v );

TSCP  scrt4__25record( x2554 )
        TSCP  x2554;
{
        PUSHSTACKTRACE( t3344 );
        POPSTACKTRACE( scrt4_list_2d_3e_25record( x2554 ) );
}

DEFTSCP( scrt4__25record_2dlength_v );
DEFCSTRING( t3346, "%RECORD-LENGTH" );

TSCP  scrt4__25record_2dlength( x2556 )
        TSCP  x2556;
{
        PUSHSTACKTRACE( t3346 );
        if  ( AND( EQ( TSCPTAG( x2556 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2556 ), RECORDTAG ) )
            )  goto L3349;
        scdebug_error( c2561, 
                       c2562, CONS( x2556, EMPTYLIST ) );
L3349:
        POPSTACKTRACE( C_FIXED( RECORD_LENGTH( x2556 ) ) );
}

DEFTSCP( scrt4__25record_2dref_v );
DEFCSTRING( t3351, "%RECORD-REF" );

TSCP  scrt4__25record_2dref( x2564, y2565 )
        TSCP  x2564, y2565;
{
        PUSHSTACKTRACE( t3351 );
        if  ( AND( EQ( TSCPTAG( x2564 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2564 ), RECORDTAG ) )
            )  goto L3354;
        scdebug_error( c2571, 
                       c2562, CONS( x2564, EMPTYLIST ) );
L3354:
        if  ( EQ( TSCPTAG( y2565 ), FIXNUMTAG ) )  goto L3356;
        scdebug_error( c2571, 
                       c2155, CONS( y2565, EMPTYLIST ) );
L3356:
        if  ( LT( _S2CUINT( FIXED_C( y2565 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2564 ) ) ) )  goto L3358;
        scdebug_error( c2571, 
                       c2159, CONS( y2565, EMPTYLIST ) );
L3358:
        POPSTACKTRACE( RECORD_ELEMENT( x2564, y2565 ) );
}

DEFTSCP( scrt4__25record_2dset_21_v );
DEFCSTRING( t3360, "%RECORD-SET!" );

TSCP  scrt4__25record_2dset_21( x2578, y2579, z2580 )
        TSCP  x2578, y2579, z2580;
{
        PUSHSTACKTRACE( t3360 );
        if  ( AND( EQ( TSCPTAG( x2578 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2578 ), RECORDTAG ) )
            )  goto L3363;
        scdebug_error( c2587, 
                       c2562, CONS( x2578, EMPTYLIST ) );
L3363:
        if  ( EQ( TSCPTAG( y2579 ), FIXNUMTAG ) )  goto L3365;
        scdebug_error( c2587, 
                       c2155, CONS( y2579, EMPTYLIST ) );
L3365:
        if  ( LT( _S2CUINT( FIXED_C( y2579 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2578 ) ) ) )  goto L3367;
        scdebug_error( c2587, 
                       c2159, CONS( y2579, EMPTYLIST ) );
L3367:
        POPSTACKTRACE( SETGEN( RECORD_ELEMENT( x2578, y2579 ), 
                               z2580 ) );
}

DEFTSCP( scrt4__25record_2d_3elist_v );
DEFCSTRING( t3369, "%RECORD->LIST" );

TSCP  scrt4__25record_2d_3elist( x2594 )
        TSCP  x2594;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3369 );
        if  ( AND( EQ( TSCPTAG( x2594 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2594 ), RECORDTAG ) )
            )  goto L3373;
        scdebug_error( c2561, 
                       c2562, CONS( x2594, EMPTYLIST ) );
L3373:
        X2 = C_FIXED( RECORD_LENGTH( x2594 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3376;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3377;
L3376:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3377:
        X2 = EMPTYLIST;
L3378:
        X2 = CONS( X2, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3380;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3384;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3380:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3384;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3384:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3389;
        scdebug_error( c2571, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3389:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2594 ) ) ) )  goto L3391;
        scdebug_error( c2571, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3391:
        X4 = RECORD_ELEMENT( x2594, X1 );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3393;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3394;
L3393:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L3394:
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L3378 );
}

DEFTSCP( scrt4_list_2d_3e_25record_v );
DEFCSTRING( t3395, "LIST->%RECORD" );
EXTERNTSCPP( sc_make_2d_25record, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2d_25record_v );

TSCP  scrt4_list_2d_3e_25record( x2637 )
        TSCP  x2637;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3395 );
        X2 = scrt1_length( x2637 );
        X1 = sc_make_2d_25record( X2, EMPTYLIST );
        X2 = x2637;
        X3 = _TSCP( 0 );
L3398:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3399;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3403;
        scrt1__24__car_2derror( X2 );
L3403:
        X4 = PAIR_CAR( X2 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), RECORDTAG ) ) )  goto L3406;
        scdebug_error( c2587, 
                       c2562, CONS( X1, EMPTYLIST ) );
L3406:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3408;
        scdebug_error( c2587, 
                       c2155, CONS( X3, EMPTYLIST ) );
L3408:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( RECORD_LENGTH( X1 ) ) ) )  goto L3410;
        scdebug_error( c2587, 
                       c2159, CONS( X3, EMPTYLIST ) );
L3410:
        SETGEN( RECORD_ELEMENT( X1, X3 ), X4 );
        X4 = PAIR_CDR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3413;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3414;
L3413:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L3414:
        X2 = X4;
        GOBACK( L3398 );
L3399:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4__25record_2dmethods_v );
DEFCSTRING( t3415, "%RECORD-METHODS" );

TSCP  scrt4__25record_2dmethods( x2676 )
        TSCP  x2676;
{
        PUSHSTACKTRACE( t3415 );
        if  ( AND( EQ( TSCPTAG( x2676 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2676 ), RECORDTAG ) )
            )  goto L3418;
        scdebug_error( c2681, 
                       c2562, CONS( x2676, EMPTYLIST ) );
L3418:
        POPSTACKTRACE( RECORD_METHODS( x2676 ) );
}

DEFTSCP( scrt4_s_2dset_21_fcaf91b1_v );
DEFCSTRING( t3420, "%RECORD-METHODS-SET!" );

TSCP  scrt4_s_2dset_21_fcaf91b1( x2683, y2684 )
        TSCP  x2683, y2684;
{
        PUSHSTACKTRACE( t3420 );
        if  ( AND( EQ( TSCPTAG( x2683 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2683 ), RECORDTAG ) )
            )  goto L3423;
        scdebug_error( c2587, 
                       c2562, CONS( x2683, EMPTYLIST ) );
L3423:
        POPSTACKTRACE( SETGEN( RECORD_METHODS( x2683 ), y2684 ) );
}

DEFTSCP( scrt4_fix_2dchar_c117a402_v );
DEFCSTRING( t3425, "%RECORD-PREFIX-CHAR" );
DEFTSCP( scrt4__25record_2dread_v );
DEFCSTRING( t3426, "%RECORD-READ" );
DEFTSCP( scrt4_p_2dmethod_3ccf392b_v );
DEFCSTRING( t3427, "%RECORD-LOOKUP-METHOD" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt3_string, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_v );

TSCP  scrt4_l2709( r2710, p2711, i2712, c3440 )
        TSCP  r2710, p2711, i2712, c3440;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scrt4_l2709 [inside %RECORD-LOOKUP-METHOD]" );
        if  ( FALSE( scrt4_fix_2dchar_c117a402_v ) )  goto L3442;
        X2 = CONS( scrt4_fix_2dchar_c117a402_v, EMPTYLIST );
        X1 = scrt3_string( CONS( _TSCP( 8978 ), X2 ) );
        goto L3443;
L3442:
        X1 = c2713;
L3443:
        scrt6_display( X1, CONS( p2711, EMPTYLIST ) );
        X2 = scrt4__25record_2d_3elist( r2710 );
        X1 = sc_cons( X2, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

TSCP  scrt4_l2707( x2708, c3449 )
        TSCP  x2708, c3449;
{
        PUSHSTACKTRACE( "scrt4_l2707 [inside %RECORD-LOOKUP-METHOD]" );
        POPSTACKTRACE( x2708 );
}

EXTERNTSCPP( scrt1_eq_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_eq_3f_v );

TSCP  scrt4_p_2dmethod_3ccf392b( r2692, m2693 )
        TSCP  r2692, m2693;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3427 );
        if  ( AND( EQ( TSCPTAG( r2692 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( r2692 ), RECORDTAG ) )
            )  goto L3430;
        scdebug_error( c2681, 
                       c2562, CONS( r2692, EMPTYLIST ) );
L3430:
        X2 = RECORD_METHODS( r2692 );
        X1 = scrt1_assq( m2693, X2 );
        if  ( FALSE( X1 ) )  goto L3433;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3436;
        scrt1__24__cdr_2derror( X1 );
L3436:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
L3433:
        if  ( FALSE( scrt1_memv( m2693, c2698 ) ) )  goto L3438;
        POPSTACKTRACE( MAKEPROCEDURE( 2, 
                                      1, scrt4_l2709, EMPTYLIST ) );
L3438:
        if  ( EQ( _S2CUINT( m2693 ), _S2CUINT( c2702 ) ) )  goto L3445;
        if  ( NEQ( _S2CUINT( m2693 ), _S2CUINT( c2706 ) ) )  goto L3447;
        POPSTACKTRACE( MAKEPROCEDURE( 1, 
                                      0, scrt4_l2707, EMPTYLIST ) );
L3447:
        POPSTACKTRACE( FALSEVALUE );
L3445:
        POPSTACKTRACE( scrt1_eq_3f_v );
}

DEFTSCP( scrt4_c_2dsizeof_2dshort_v );
DEFCSTRING( t3451, "C-SIZEOF-SHORT" );
DEFTSCP( scrt4_c_2dsizeof_2dint_v );
DEFCSTRING( t3452, "C-SIZEOF-INT" );
DEFTSCP( scrt4_c_2dsizeof_2dlong_v );
DEFCSTRING( t3453, "C-SIZEOF-LONG" );
DEFTSCP( scrt4_c_2dsizeof_2dfloat_v );
DEFCSTRING( t3454, "C-SIZEOF-FLOAT" );
DEFTSCP( scrt4_c_2dsizeof_2ddouble_v );
DEFCSTRING( t3455, "C-SIZEOF-DOUBLE" );
DEFTSCP( scrt4_c_2dsizeof_2dtscp_v );
DEFCSTRING( t3456, "C-SIZEOF-TSCP" );
DEFTSCP( scrt4_c_2dsizeof_2ds2cuint_v );
DEFCSTRING( t3457, "C-SIZEOF-S2CUINT" );
DEFTSCP( scrt4_c_2dbyte_2dref_v );
DEFCSTRING( t3458, "C-BYTE-REF" );

TSCP  scrt4_c_2dbyte_2dref( s2726, x2727 )
        TSCP  s2726, x2727;
{
        PUSHSTACKTRACE( t3458 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CUINT( MBYTE( TSCP_POINTER( s2726 ), 
                                                     TSCP_S2CINT( x2727 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dshortint_2dref_v );
DEFCSTRING( t3460, "C-SHORTINT-REF" );

TSCP  scrt4_c_2dshortint_2dref( s2729, x2730 )
        TSCP  s2729, x2730;
{
        PUSHSTACKTRACE( t3460 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MSINT( TSCP_POINTER( s2729 ), 
                                                    TSCP_S2CINT( x2730 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dshortunsigned_2dref_v );
DEFCSTRING( t3462, "C-SHORTUNSIGNED-REF" );

TSCP  scrt4_c_2dshortunsigned_2dref( s2732, x2733 )
        TSCP  s2732, x2733;
{
        PUSHSTACKTRACE( t3462 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MSUNSIGNED( TSCP_POINTER( s2732 ), 
                                                           TSCP_S2CINT( x2733 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dint_2dref_v );
DEFCSTRING( t3464, "C-INT-REF" );

TSCP  scrt4_c_2dint_2dref( s2735, x2736 )
        TSCP  s2735, x2736;
{
        PUSHSTACKTRACE( t3464 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MINT( TSCP_POINTER( s2735 ), 
                                                   TSCP_S2CINT( x2736 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dunsigned_2dref_v );
DEFCSTRING( t3466, "C-UNSIGNED-REF" );

TSCP  scrt4_c_2dunsigned_2dref( s2738, x2739 )
        TSCP  s2738, x2739;
{
        PUSHSTACKTRACE( t3466 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MUNSIGNED( TSCP_POINTER( s2738 ), 
                                                          TSCP_S2CINT( x2739 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dlongint_2dref_v );
DEFCSTRING( t3468, "C-LONGINT-REF" );

TSCP  scrt4_c_2dlongint_2dref( s2741, x2742 )
        TSCP  s2741, x2742;
{
        PUSHSTACKTRACE( t3468 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MLINT( TSCP_POINTER( s2741 ), 
                                                    TSCP_S2CINT( x2742 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dlongunsigned_2dref_v );
DEFCSTRING( t3470, "C-LONGUNSIGNED-REF" );

TSCP  scrt4_c_2dlongunsigned_2dref( s2744, x2745 )
        TSCP  s2744, x2745;
{
        PUSHSTACKTRACE( t3470 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MLUNSIGNED( TSCP_POINTER( s2744 ), 
                                                           TSCP_S2CINT( x2745 ) ) ) ) );
}

DEFTSCP( scrt4_c_2ds2cuint_2dref_v );
DEFCSTRING( t3472, "C-S2CUINT-REF" );

TSCP  scrt4_c_2ds2cuint_2dref( s2747, x2748 )
        TSCP  s2747, x2748;
{
        PUSHSTACKTRACE( t3472 );
        POPSTACKTRACE( S2CUINT_TSCP( MS2CUINT( TSCP_POINTER( s2747 ), 
                                               TSCP_S2CINT( x2748 ) ) ) );
}

DEFTSCP( scrt4_c_2dtscp_2dref_v );
DEFCSTRING( t3474, "C-TSCP-REF" );

TSCP  scrt4_c_2dtscp_2dref( s2750, x2751 )
        TSCP  s2750, x2751;
{
        PUSHSTACKTRACE( t3474 );
        POPSTACKTRACE( MTSCP( TSCP_POINTER( s2750 ), 
                              TSCP_S2CINT( x2751 ) ) );
}

DEFTSCP( scrt4_c_2dfloat_2dref_v );
DEFCSTRING( t3476, "C-FLOAT-REF" );

TSCP  scrt4_c_2dfloat_2dref( s2753, x2754 )
        TSCP  s2753, x2754;
{
        PUSHSTACKTRACE( t3476 );
        POPSTACKTRACE( DOUBLE_TSCP( CDOUBLE( MFLOAT( TSCP_POINTER( s2753 ), 
                                                     TSCP_S2CINT( x2754 ) ) ) ) );
}

DEFTSCP( scrt4_c_2ddouble_2dref_v );
DEFCSTRING( t3478, "C-DOUBLE-REF" );

TSCP  scrt4_c_2ddouble_2dref( s2756, x2757 )
        TSCP  s2756, x2757;
{
        PUSHSTACKTRACE( t3478 );
        POPSTACKTRACE( DOUBLE_TSCP( MDOUBLE( TSCP_POINTER( s2756 ), 
                                             TSCP_S2CINT( x2757 ) ) ) );
}

DEFTSCP( scrt4_c_2dbyte_2dset_21_v );
DEFCSTRING( t3480, "C-BYTE-SET!" );

TSCP  scrt4_c_2dbyte_2dset_21( s2759, x2760, v2761 )
        TSCP  s2759, x2760, v2761;
{
        PUSHSTACKTRACE( t3480 );
        SET( MBYTE( TSCP_POINTER( s2759 ), 
                    TSCP_S2CINT( x2760 ) ), 
             TSCP_S2CINT( v2761 ) );
        POPSTACKTRACE( v2761 );
}

DEFTSCP( scrt4_c_2dshortint_2dset_21_v );
DEFCSTRING( t3482, "C-SHORTINT-SET!" );

TSCP  scrt4_c_2dshortint_2dset_21( s2763, x2764, v2765 )
        TSCP  s2763, x2764, v2765;
{
        PUSHSTACKTRACE( t3482 );
        SET( MSINT( TSCP_POINTER( s2763 ), 
                    TSCP_S2CINT( x2764 ) ), 
             TSCP_S2CINT( v2765 ) );
        POPSTACKTRACE( v2765 );
}

DEFTSCP( scrt4_d_2dset_21_828269c5_v );
DEFCSTRING( t3484, "C-SHORTUNSIGNED-SET!" );

TSCP  scrt4_d_2dset_21_828269c5( s2767, x2768, v2769 )
        TSCP  s2767, x2768, v2769;
{
        PUSHSTACKTRACE( t3484 );
        SET( MSUNSIGNED( TSCP_POINTER( s2767 ), 
                         TSCP_S2CINT( x2768 ) ), 
             TSCP_S2CUINT( v2769 ) );
        POPSTACKTRACE( v2769 );
}

DEFTSCP( scrt4_c_2dint_2dset_21_v );
DEFCSTRING( t3486, "C-INT-SET!" );

TSCP  scrt4_c_2dint_2dset_21( s2771, x2772, v2773 )
        TSCP  s2771, x2772, v2773;
{
        PUSHSTACKTRACE( t3486 );
        SET( MINT( TSCP_POINTER( s2771 ), 
                   TSCP_S2CINT( x2772 ) ), 
             TSCP_S2CINT( v2773 ) );
        POPSTACKTRACE( v2773 );
}

DEFTSCP( scrt4_c_2dunsigned_2dset_21_v );
DEFCSTRING( t3488, "C-UNSIGNED-SET!" );

TSCP  scrt4_c_2dunsigned_2dset_21( s2775, x2776, v2777 )
        TSCP  s2775, x2776, v2777;
{
        PUSHSTACKTRACE( t3488 );
        SET( MUNSIGNED( TSCP_POINTER( s2775 ), 
                        TSCP_S2CINT( x2776 ) ), 
             TSCP_S2CUINT( v2777 ) );
        POPSTACKTRACE( v2777 );
}

DEFTSCP( scrt4_c_2dlongint_2dset_21_v );
DEFCSTRING( t3490, "C-LONGINT-SET!" );

TSCP  scrt4_c_2dlongint_2dset_21( s2779, x2780, v2781 )
        TSCP  s2779, x2780, v2781;
{
        PUSHSTACKTRACE( t3490 );
        SET( MLINT( TSCP_POINTER( s2779 ), 
                    TSCP_S2CINT( x2780 ) ), 
             TSCP_S2CINT( v2781 ) );
        POPSTACKTRACE( v2781 );
}

DEFTSCP( scrt4_d_2dset_21_2e97375c_v );
DEFCSTRING( t3492, "C-LONGUNSIGNED-SET!" );

TSCP  scrt4_d_2dset_21_2e97375c( s2783, x2784, v2785 )
        TSCP  s2783, x2784, v2785;
{
        PUSHSTACKTRACE( t3492 );
        SET( MLUNSIGNED( TSCP_POINTER( s2783 ), 
                         TSCP_S2CINT( x2784 ) ), 
             TSCP_S2CUINT( v2785 ) );
        POPSTACKTRACE( v2785 );
}

DEFTSCP( scrt4_c_2ds2cuint_2dset_21_v );
DEFCSTRING( t3494, "C-S2CUINT-SET!" );

TSCP  scrt4_c_2ds2cuint_2dset_21( s2787, x2788, v2789 )
        TSCP  s2787, x2788, v2789;
{
        PUSHSTACKTRACE( t3494 );
        SET( MS2CUINT( TSCP_POINTER( s2787 ), 
                       TSCP_S2CINT( x2788 ) ), 
             TSCP_S2CUINT( v2789 ) );
        POPSTACKTRACE( v2789 );
}

DEFTSCP( scrt4_c_2dtscp_2dset_21_v );
DEFCSTRING( t3496, "C-TSCP-SET!" );

TSCP  scrt4_c_2dtscp_2dset_21( s2791, x2792, v2793 )
        TSCP  s2791, x2792, v2793;
{
        PUSHSTACKTRACE( t3496 );
        SET( MTSCP( TSCP_POINTER( s2791 ), 
                    TSCP_S2CINT( x2792 ) ), 
             v2793 );
        POPSTACKTRACE( v2793 );
}

DEFTSCP( scrt4_c_2dfloat_2dset_21_v );
DEFCSTRING( t3498, "C-FLOAT-SET!" );

TSCP  scrt4_c_2dfloat_2dset_21( s2795, x2796, v2797 )
        TSCP  s2795, x2796, v2797;
{
        PUSHSTACKTRACE( t3498 );
        SET( MFLOAT( TSCP_POINTER( s2795 ), 
                     TSCP_S2CINT( x2796 ) ), 
             TSCP_DOUBLE( v2797 ) );
        POPSTACKTRACE( v2797 );
}

DEFTSCP( scrt4_c_2ddouble_2dset_21_v );
DEFCSTRING( t3500, "C-DOUBLE-SET!" );

TSCP  scrt4_c_2ddouble_2dset_21( s2799, x2800, v2801 )
        TSCP  s2799, x2800, v2801;
{
        PUSHSTACKTRACE( t3500 );
        SETMDOUBLE( TSCP_POINTER( s2799 ), 
                    TSCP_S2CINT( x2800 ), 
                    TSCP_DOUBLE( v2801 ) );
        POPSTACKTRACE( v2801 );
}

DEFTSCP( scrt4_scheme_2dbyte_2dref_v );
DEFCSTRING( t3502, "SCHEME-BYTE-REF" );

TSCP  scrt4_scheme_2dbyte_2dref( s2803, x2804 )
        TSCP  s2803, x2804;
{
        PUSHSTACKTRACE( t3502 );
        if  ( BITAND( TSCPTAG( s2803 ), 1 ) )  goto L3504;
        scdebug_error( c2807, 
                       c2808, CONS( s2803, EMPTYLIST ) );
L3504:
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MBYTE( T_U( s2803 ), 
                                                      TSCP_S2CINT( x2804 ) ) ) ) );
}

DEFTSCP( scrt4_scheme_2dint_2dref_v );
DEFCSTRING( t3506, "SCHEME-INT-REF" );

TSCP  scrt4_scheme_2dint_2dref( s2810, x2811 )
        TSCP  s2810, x2811;
{
        PUSHSTACKTRACE( t3506 );
        if  ( BITAND( TSCPTAG( s2810 ), 1 ) )  goto L3508;
        scdebug_error( c2814, 
                       c2808, CONS( s2810, EMPTYLIST ) );
L3508:
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MINT( T_U( s2810 ), 
                                                   TSCP_S2CINT( x2811 ) ) ) ) );
}

DEFTSCP( scrt4_scheme_2dtscp_2dref_v );
DEFCSTRING( t3510, "SCHEME-TSCP-REF" );

TSCP  scrt4_scheme_2dtscp_2dref( s2816, x2817 )
        TSCP  s2816, x2817;
{
        PUSHSTACKTRACE( t3510 );
        if  ( BITAND( TSCPTAG( s2816 ), 1 ) )  goto L3512;
        scdebug_error( c2820, 
                       c2808, CONS( s2816, EMPTYLIST ) );
L3512:
        POPSTACKTRACE( MTSCP( T_U( s2816 ), 
                              TSCP_S2CINT( x2817 ) ) );
}

DEFTSCP( scrt4_scheme_2ds2cuint_2dref_v );
DEFCSTRING( t3514, "SCHEME-S2CUINT-REF" );

TSCP  scrt4_scheme_2ds2cuint_2dref( s2822, x2823 )
        TSCP  s2822, x2823;
{
        PUSHSTACKTRACE( t3514 );
        if  ( BITAND( TSCPTAG( s2822 ), 1 ) )  goto L3516;
        scdebug_error( c2826, 
                       c2808, CONS( s2822, EMPTYLIST ) );
L3516:
        POPSTACKTRACE( S2CUINT_TSCP( MS2CUINT( T_U( s2822 ), 
                                               TSCP_S2CINT( x2823 ) ) ) );
}

DEFTSCP( scrt4_scheme_2dbyte_2dset_21_v );
DEFCSTRING( t3518, "SCHEME-BYTE-SET!" );

TSCP  scrt4_scheme_2dbyte_2dset_21( s2828, x2829, v2830 )
        TSCP  s2828, x2829, v2830;
{
        PUSHSTACKTRACE( t3518 );
        if  ( BITAND( TSCPTAG( s2828 ), 1 ) )  goto L3520;
        scdebug_error( c2833, 
                       c2808, CONS( s2828, EMPTYLIST ) );
L3520:
        SET( MBYTE( T_U( s2828 ), TSCP_S2CINT( x2829 ) ), 
             TSCP_S2CINT( v2830 ) );
        POPSTACKTRACE( v2830 );
}

DEFTSCP( scrt4_scheme_2dint_2dset_21_v );
DEFCSTRING( t3522, "SCHEME-INT-SET!" );

TSCP  scrt4_scheme_2dint_2dset_21( s2835, x2836, v2837 )
        TSCP  s2835, x2836, v2837;
{
        PUSHSTACKTRACE( t3522 );
        if  ( BITAND( TSCPTAG( s2835 ), 1 ) )  goto L3524;
        scdebug_error( c2840, 
                       c2808, CONS( s2835, EMPTYLIST ) );
L3524:
        SET( MINT( T_U( s2835 ), TSCP_S2CINT( x2836 ) ), 
             TSCP_S2CINT( v2837 ) );
        POPSTACKTRACE( v2837 );
}

DEFTSCP( scrt4_scheme_2dtscp_2dset_21_v );
DEFCSTRING( t3526, "SCHEME-TSCP-SET!" );

TSCP  scrt4_scheme_2dtscp_2dset_21( s2842, x2843, v2844 )
        TSCP  s2842, x2843, v2844;
{
        PUSHSTACKTRACE( t3526 );
        if  ( BITAND( TSCPTAG( s2842 ), 1 ) )  goto L3528;
        scdebug_error( c2847, 
                       c2808, CONS( s2842, EMPTYLIST ) );
L3528:
        SETGENTL( MTSCP( T_U( s2842 ), 
                         TSCP_S2CINT( x2843 ) ), 
                  v2844 );
        POPSTACKTRACE( v2844 );
}

DEFTSCP( scrt4_t_2dset_21_925753db_v );
DEFCSTRING( t3530, "SCHEME-S2CUINT-SET!" );

TSCP  scrt4_t_2dset_21_925753db( s2849, x2850, v2851 )
        TSCP  s2849, x2850, v2851;
{
        PUSHSTACKTRACE( t3530 );
        if  ( BITAND( TSCPTAG( s2849 ), 1 ) )  goto L3532;
        scdebug_error( c2854, 
                       c2808, CONS( s2849, EMPTYLIST ) );
L3532:
        SET( MS2CUINT( T_U( s2849 ), TSCP_S2CINT( x2850 ) ), 
             TSCP_S2CUINT( v2851 ) );
        POPSTACKTRACE( v2851 );
}

DEFTSCP( scrt4_bit_2dand_v );
DEFCSTRING( t3534, "BIT-AND" );

TSCP  scrt4_bit_2dand( x2856, y2857 )
        TSCP  x2856, y2857;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3534 );
        X1 = x2856;
        X2 = y2857;
L3537:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3538;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3541;
        scrt1__24__car_2derror( X2 );
L3541:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITAND32( TSCP_S2CUINT( X4 ), 
                                     TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3537 );
L3538:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dor_v );
DEFCSTRING( t3544, "BIT-OR" );

TSCP  scrt4_bit_2dor( x2880, y2881 )
        TSCP  x2880, y2881;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3544 );
        X1 = x2880;
        X2 = y2881;
L3547:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3548;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3551;
        scrt1__24__car_2derror( X2 );
L3551:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITOR32( TSCP_S2CUINT( X4 ), 
                                    TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3547 );
L3548:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dnot_v );
DEFCSTRING( t3554, "BIT-NOT" );
EXTERNTSCPP( scrt4_bit_2dxor, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dxor_v );

TSCP  scrt4_bit_2dnot( x2904 )
        TSCP  x2904;
{
        PUSHSTACKTRACE( t3554 );
        POPSTACKTRACE( scrt4_bit_2dxor( x2904, 
                                        CONS( _TSCP( -4 ), EMPTYLIST ) ) );
}

DEFTSCP( scrt4_bit_2dxor_v );
DEFCSTRING( t3556, "BIT-XOR" );

TSCP  scrt4_bit_2dxor( x2906, y2907 )
        TSCP  x2906, y2907;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3556 );
        X1 = x2906;
        X2 = y2907;
L3559:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3560;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3563;
        scrt1__24__car_2derror( X2 );
L3563:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITXOR32( TSCP_S2CUINT( X4 ), 
                                     TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3559 );
L3560:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dlsh_v );
DEFCSTRING( t3566, "BIT-LSH" );

TSCP  scrt4_bit_2dlsh( x2930, y2931 )
        TSCP  x2930, y2931;
{
        PUSHSTACKTRACE( t3566 );
        POPSTACKTRACE( S2CUINT_TSCP( BITLSH32( TSCP_S2CUINT( x2930 ), 
                                               TSCP_S2CUINT( y2931 ) ) ) );
}

DEFTSCP( scrt4_bit_2drsh_v );
DEFCSTRING( t3568, "BIT-RSH" );

TSCP  scrt4_bit_2drsh( x2933, y2934 )
        TSCP  x2933, y2934;
{
        PUSHSTACKTRACE( t3568 );
        POPSTACKTRACE( S2CUINT_TSCP( BITRSH32( TSCP_S2CUINT( x2933 ), 
                                               TSCP_S2CUINT( y2934 ) ) ) );
}

DEFTSCP( scrt4_when_2dunreferenced_v );
DEFCSTRING( t3570, "WHEN-UNREFERENCED" );
EXTERNTSCP( sc_whenfreed );
EXTERNTSCPP( scrt1_remq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remq_v );

TSCP  scrt4_when_2dunreferenced( o2936, p2937 )
        TSCP  o2936, p2937;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3570 );
        if  ( FALSE( p2937 ) )  goto L3574;
        if  ( AND( EQ( TSCPTAG( p2937 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p2937 ), PROCEDURETAG ) )
            )  goto L3574;
        scdebug_error( c2944, 
                       c2945, CONS( p2937, EMPTYLIST ) );
L3574:
        X1 = scrt1_assq( o2936, sc_whenfreed );
        if  ( FALSE( X1 ) )  goto L3577;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3580;
        scrt1__24__cdr_2derror( X1 );
L3580:
        X2 = PAIR_CDR( X1 );
        goto L3578;
L3577:
        X2 = X1;
L3578:
        if  ( FALSE( p2937 ) )  goto L3583;
        if  ( FALSE( X1 ) )  goto L3585;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3588;
        scdebug_error( c2469, 
                       c2470, CONS( X1, EMPTYLIST ) );
L3588:
        SETGEN( PAIR_CDR( X1 ), p2937 );
        goto L3590;
L3585:
        X3 = sc_cons( o2936, p2937 );
        sc_whenfreed = sc_cons( X3, sc_whenfreed );
        goto L3590;
L3583:
        if  ( FALSE( X1 ) )  goto L3590;
        sc_whenfreed = scrt1_remq( X1, sc_whenfreed );
L3590:
        POPSTACKTRACE( X2 );
}

DEFTSCP( scrt4_sc__whenfreed_v );
DEFCSTRING( t3592, "SCRT4_SC_WHENFREED" );

TSCP  scrt4_sc__whenfreed(  )
{
        PUSHSTACKTRACE( t3592 );
        POPSTACKTRACE( sc_whenfreed );
}

DEFTSCP( scrt4_signals_v );
DEFCSTRING( t3594, "SCRT4_SIGNALS" );
DEFTSCP( scrt4_signal_v );
DEFCSTRING( t3595, "SIGNAL" );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( sc_ossignal, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_ossignal_v );

TSCP  scrt4_signal( s2968, h2969 )
        TSCP  s2968, h2969;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3595 );
        if  ( NEQ( TSCPTAG( s2968 ), FIXNUMTAG ) )  goto L3597;
        X1 = BOOLEAN( LT( _S2CINT( s2968 ), 0 ) );
        goto L3598;
L3597:
        X1 = scrt2_negative_3f( s2968 );
L3598:
        if  ( TRUE( X1 ) )  goto L3603;
        X3 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L3605;
        scdebug_error( c2142, 
                       c2143, CONS( X3, EMPTYLIST ) );
L3605:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( s2968 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L3609;
        if  ( GTE( _S2CINT( s2968 ), _S2CINT( X2 ) ) )  goto L3603;
        goto L3616;
L3609:
        if  ( FALSE( scrt2__3e_3d_2dtwo( s2968, X2 ) ) )  goto L3616;
L3603:
        scdebug_error( c2990, 
                       c2991, CONS( s2968, EMPTYLIST ) );
L3616:
        if  ( AND( EQ( TSCPTAG( h2969 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( h2969 ), PROCEDURETAG ) )
            )  goto L3621;
        if  ( EQ( TSCPTAG( h2969 ), FIXNUMTAG ) )  goto L3621;
        if  ( AND( EQ( TSCPTAG( h2969 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( h2969 ), DOUBLEFLOATTAG ) )
            )  goto L3621;
        scdebug_error( c2990, 
                       c3008, CONS( h2969, EMPTYLIST ) );
L3621:
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3624;
        scdebug_error( c2152, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3624:
        if  ( EQ( TSCPTAG( s2968 ), FIXNUMTAG ) )  goto L3626;
        scdebug_error( c2152, 
                       c2155, CONS( s2968, EMPTYLIST ) );
L3626:
        if  ( LT( _S2CUINT( FIXED_C( s2968 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3628;
        scdebug_error( c2152, 
                       c2159, CONS( s2968, EMPTYLIST ) );
L3628:
        X1 = VECTOR_ELEMENT( X2, s2968 );
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3632;
        scdebug_error( c2170, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3632:
        if  ( LT( _S2CUINT( FIXED_C( s2968 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3634;
        scdebug_error( c2170, 
                       c2159, CONS( s2968, EMPTYLIST ) );
L3634:
        SETGEN( VECTOR_ELEMENT( X2, s2968 ), h2969 );
        if  ( NEQ( TSCPTAG( h2969 ), FIXNUMTAG ) )  goto L3636;
        X3 = h2969;
        goto L3639;
L3636:
        if  ( NOT( AND( EQ( TSCPTAG( h2969 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( h2969 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3638;
        X3 = h2969;
        goto L3639;
L3638:
        X3 = TRUEVALUE;
L3639:
        X2 = sc_ossignal( s2968, X3 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), PROCEDURETAG ) )
            )  goto L3641;
        POPSTACKTRACE( X2 );
L3641:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_callsignalhandler_v );
DEFCSTRING( t3643, "SCRT4_CALLSIGNALHANDLER" );

TSCP  scrt4_callsignalhandler( s3048 )
        TSCP  s3048;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3643 );
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3646;
        scdebug_error( c2152, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3646:
        if  ( EQ( TSCPTAG( s3048 ), FIXNUMTAG ) )  goto L3648;
        scdebug_error( c2152, 
                       c2155, CONS( s3048, EMPTYLIST ) );
L3648:
        if  ( LT( _S2CUINT( FIXED_C( s3048 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3650;
        scdebug_error( c2152, 
                       c2159, CONS( s3048, EMPTYLIST ) );
L3650:
        X1 = VECTOR_ELEMENT( X2, s3048 );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( s3048, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt4_system_v );
DEFCSTRING( t3652, "SYSTEM" );
EXTERNTSCPP( sc_ossystem, XAL1( TSCP ) );
EXTERNTSCP( sc_ossystem_v );

TSCP  scrt4_system( c3060 )
        TSCP  c3060;
{
        PUSHSTACKTRACE( t3652 );
        if  ( AND( EQ( TSCPTAG( c3060 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c3060 ), STRINGTAG ) )
            )  goto L3654;
        scdebug_error( c3063, 
                       c3064, CONS( c3060, EMPTYLIST ) );
L3654:
        POPSTACKTRACE( sc_ossystem( c3060 ) );
}

void scrt3__init();
void scrt6__init();
void scrt5__init();
void scrt1__init();
void scrt2__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt3__init();
        scrt6__init();
        scrt5__init();
        scrt1__init();
        scrt2__init();
        scdebug__init();
        MAXDISPLAY( 3 );
}

void  scrt4__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt4 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3129, 
                       ADR( scrt4_vector_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3131, 
                       ADR( scrt4_vector_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt4_vector, EMPTYLIST ) );
        INITIALIZEVAR( t3133, 
                       ADR( scrt4_vector_2dlength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_2dlength, EMPTYLIST ) );
        INITIALIZEVAR( t3138, 
                       ADR( scrt4_vector_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_vector_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3147, 
                       ADR( scrt4_vector_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_vector_2dset_21, EMPTYLIST ) );
        INITIALIZEVAR( t3156, 
                       ADR( scrt4_vector_2d_3elist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_2d_3elist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3182, 
                       ADR( scrt4_list_2d_3evector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_list_2d_3evector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3202, 
                       ADR( scrt4_vector_2dfill_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_vector_2dfill_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3228, 
                       ADR( scrt4_procedure_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_procedure_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3230, 
                       ADR( scrt4_apply_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt4_apply, EMPTYLIST ) );
        INITIALIZEVAR( t3244, 
                       ADR( scrt4_map_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt4_map, EMPTYLIST ) );
        INITIALIZEVAR( t3279, 
                       ADR( scrt4_for_2deach_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      scrt4_for_2deach, EMPTYLIST ) );
        INITIALIZEVAR( t3321, 
                       ADR( scrt4_force_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt4_force, EMPTYLIST ) );
        INITIALIZEVAR( t3323, 
                       ADR( scrt4_make_2dpromise_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_make_2dpromise, EMPTYLIST ) );
        INITIALIZEVAR( t3331, 
                       ADR( scrt4_catch_2derror_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_catch_2derror, EMPTYLIST ) );
        INITIALIZEVAR( t3342, 
                       ADR( scrt4__25record_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3344, 
                       ADR( scrt4__25record_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt4__25record, EMPTYLIST ) );
        INITIALIZEVAR( t3346, 
                       ADR( scrt4__25record_2dlength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2dlength, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3351, 
                       ADR( scrt4__25record_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4__25record_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3360, 
                       ADR( scrt4__25record_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4__25record_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3369, 
                       ADR( scrt4__25record_2d_3elist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2d_3elist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3395, 
                       ADR( scrt4_list_2d_3e_25record_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_list_2d_3e_25record, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3415, 
                       ADR( scrt4__25record_2dmethods_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2dmethods, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3420, 
                       ADR( scrt4_s_2dset_21_fcaf91b1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_s_2dset_21_fcaf91b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3425, 
                       ADR( scrt4_fix_2dchar_c117a402_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3426, 
                       ADR( scrt4__25record_2dread_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3427, 
                       ADR( scrt4_p_2dmethod_3ccf392b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_p_2dmethod_3ccf392b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3451, 
                       ADR( scrt4_c_2dsizeof_2dshort_v ), 
                       C_FIXED( SIZEOF( short ) ) );
        INITIALIZEVAR( t3452, 
                       ADR( scrt4_c_2dsizeof_2dint_v ), 
                       C_FIXED( SIZEOF( int ) ) );
        INITIALIZEVAR( t3453, 
                       ADR( scrt4_c_2dsizeof_2dlong_v ), 
                       C_FIXED( SIZEOF( long ) ) );
        INITIALIZEVAR( t3454, 
                       ADR( scrt4_c_2dsizeof_2dfloat_v ), 
                       C_FIXED( SIZEOF( float ) ) );
        INITIALIZEVAR( t3455, 
                       ADR( scrt4_c_2dsizeof_2ddouble_v ), 
                       C_FIXED( SIZEOF( double ) ) );
        INITIALIZEVAR( t3456, 
                       ADR( scrt4_c_2dsizeof_2dtscp_v ), 
                       C_FIXED( SIZEOF( TSCP ) ) );
        INITIALIZEVAR( t3457, 
                       ADR( scrt4_c_2dsizeof_2ds2cuint_v ), 
                       C_FIXED( SIZEOF( S2CUINT ) ) );
        INITIALIZEVAR( t3458, 
                       ADR( scrt4_c_2dbyte_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dbyte_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3460, 
                       ADR( scrt4_c_2dshortint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dshortint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3462, 
                       ADR( scrt4_c_2dshortunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dshortunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3464, 
                       ADR( scrt4_c_2dint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dint_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3466, 
                       ADR( scrt4_c_2dunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3468, 
                       ADR( scrt4_c_2dlongint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dlongint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3470, 
                       ADR( scrt4_c_2dlongunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dlongunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3472, 
                       ADR( scrt4_c_2ds2cuint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2ds2cuint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3474, 
                       ADR( scrt4_c_2dtscp_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dtscp_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3476, 
                       ADR( scrt4_c_2dfloat_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dfloat_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3478, 
                       ADR( scrt4_c_2ddouble_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2ddouble_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3480, 
                       ADR( scrt4_c_2dbyte_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dbyte_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3482, 
                       ADR( scrt4_c_2dshortint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dshortint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3484, 
                       ADR( scrt4_d_2dset_21_828269c5_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_d_2dset_21_828269c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3486, 
                       ADR( scrt4_c_2dint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3488, 
                       ADR( scrt4_c_2dunsigned_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dunsigned_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3490, 
                       ADR( scrt4_c_2dlongint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dlongint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3492, 
                       ADR( scrt4_d_2dset_21_2e97375c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_d_2dset_21_2e97375c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3494, 
                       ADR( scrt4_c_2ds2cuint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2ds2cuint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3496, 
                       ADR( scrt4_c_2dtscp_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dtscp_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3498, 
                       ADR( scrt4_c_2dfloat_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dfloat_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3500, 
                       ADR( scrt4_c_2ddouble_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2ddouble_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3502, 
                       ADR( scrt4_scheme_2dbyte_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dbyte_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3506, 
                       ADR( scrt4_scheme_2dint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3510, 
                       ADR( scrt4_scheme_2dtscp_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dtscp_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3514, 
                       ADR( scrt4_scheme_2ds2cuint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2ds2cuint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3518, 
                       ADR( scrt4_scheme_2dbyte_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dbyte_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3522, 
                       ADR( scrt4_scheme_2dint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3526, 
                       ADR( scrt4_scheme_2dtscp_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dtscp_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3530, 
                       ADR( scrt4_t_2dset_21_925753db_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_t_2dset_21_925753db, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3534, 
                       ADR( scrt4_bit_2dand_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt4_bit_2dand, EMPTYLIST ) );
        INITIALIZEVAR( t3544, 
                       ADR( scrt4_bit_2dor_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt4_bit_2dor, EMPTYLIST ) );
        INITIALIZEVAR( t3554, 
                       ADR( scrt4_bit_2dnot_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_bit_2dnot, EMPTYLIST ) );
        INITIALIZEVAR( t3556, 
                       ADR( scrt4_bit_2dxor_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt4_bit_2dxor, EMPTYLIST ) );
        INITIALIZEVAR( t3566, 
                       ADR( scrt4_bit_2dlsh_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_bit_2dlsh, EMPTYLIST ) );
        INITIALIZEVAR( t3568, 
                       ADR( scrt4_bit_2drsh_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_bit_2drsh, EMPTYLIST ) );
        INITIALIZEVAR( t3570, 
                       ADR( scrt4_when_2dunreferenced_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_when_2dunreferenced, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3592, 
                       ADR( scrt4_sc__whenfreed_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt4_sc__whenfreed, EMPTYLIST ) );
        INITIALIZEVAR( t3594, 
                       ADR( scrt4_signals_v ), 
                       sc_make_2dvector( _TSCP( 128 ), 
                                         CONS( FALSEVALUE, EMPTYLIST ) ) );
        INITIALIZEVAR( t3595, 
                       ADR( scrt4_signal_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt4_signal, EMPTYLIST ) );
        INITIALIZEVAR( t3643, 
                       ADR( scrt4_callsignalhandler_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_callsignalhandler, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3652, 
                       ADR( scrt4_system_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt4_system, EMPTYLIST ) );
        return;
}
