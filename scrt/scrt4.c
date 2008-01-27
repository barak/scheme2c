
/* SCHEME->C */

#include <objects.h>

DEFCSTRING( t3194, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c3143 );
DEFSTATICTSCP( c3142 );
DEFCSTRING( t3195, "Argument is not a valid SIGNAL HANDLER: ~s" );
DEFSTATICTSCP( c3087 );
DEFCSTRING( t3196, "Argument is not a valid SIGNAL: ~s" );
DEFSTATICTSCP( c3070 );
DEFSTATICTSCP( c3069 );
DEFCSTRING( t3197, "Argument is not a PROCEDURE: ~s" );
DEFSTATICTSCP( c3024 );
DEFSTATICTSCP( c3023 );
DEFSTATICTSCP( c2933 );
DEFSTATICTSCP( c2926 );
DEFSTATICTSCP( c2919 );
DEFSTATICTSCP( c2912 );
DEFSTATICTSCP( c2905 );
DEFSTATICTSCP( c2899 );
DEFSTATICTSCP( c2893 );
DEFCSTRING( t3198, "Structure is not a SCHEME pointer: ~s" );
DEFSTATICTSCP( c2887 );
DEFSTATICTSCP( c2886 );
DEFCSTRING( t3199, "#~" );
DEFSTATICTSCP( c2792 );
DEFSTATICTSCP( c2785 );
DEFSTATICTSCP( c2781 );
DEFSTATICTSCP( c2777 );
DEFSTATICTSCP( t3200 );
DEFSTATICTSCP( t3201 );
DEFSTATICTSCP( c2760 );
DEFSTATICTSCP( c2666 );
DEFSTATICTSCP( c2650 );
DEFCSTRING( t3202, "Argument is not a %RECORD: ~s" );
DEFSTATICTSCP( c2641 );
DEFSTATICTSCP( c2640 );
DEFCSTRING( t3203, "***** ~a " );
DEFSTATICTSCP( c2625 );
DEFCSTRING( t3204, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2400 );
DEFSTATICTSCP( c2399 );
DEFSTATICTSCP( c2170 );
DEFCSTRING( t3205, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2159 );
DEFCSTRING( t3206, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2152 );
DEFCSTRING( t3207, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2143 );
DEFSTATICTSCP( c2142 );

static void  init_constants()
{
        c3143 = CSTRING_TSCP( t3194 );
        CONSTANTEXP( ADR( c3143 ) );
        c3142 = STRINGTOSYMBOL( CSTRING_TSCP( "SYSTEM" ) );
        CONSTANTEXP( ADR( c3142 ) );
        c3087 = CSTRING_TSCP( t3195 );
        CONSTANTEXP( ADR( c3087 ) );
        c3070 = CSTRING_TSCP( t3196 );
        CONSTANTEXP( ADR( c3070 ) );
        c3069 = STRINGTOSYMBOL( CSTRING_TSCP( "SIGNAL" ) );
        CONSTANTEXP( ADR( c3069 ) );
        c3024 = CSTRING_TSCP( t3197 );
        CONSTANTEXP( ADR( c3024 ) );
        c3023 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN-UNREFERENCED" ) );
        CONSTANTEXP( ADR( c3023 ) );
        c2933 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-S2CUINT-SET!" ) );
        CONSTANTEXP( ADR( c2933 ) );
        c2926 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-TSCP-SET!" ) );
        CONSTANTEXP( ADR( c2926 ) );
        c2919 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-INT-SET!" ) );
        CONSTANTEXP( ADR( c2919 ) );
        c2912 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-BYTE-SET!" ) );
        CONSTANTEXP( ADR( c2912 ) );
        c2905 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-S2CUINT-REF" ) );
        CONSTANTEXP( ADR( c2905 ) );
        c2899 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-TSCP-REF" ) );
        CONSTANTEXP( ADR( c2899 ) );
        c2893 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-INT-REF" ) );
        CONSTANTEXP( ADR( c2893 ) );
        c2887 = CSTRING_TSCP( t3198 );
        CONSTANTEXP( ADR( c2887 ) );
        c2886 = STRINGTOSYMBOL( CSTRING_TSCP( "SCHEME-BYTE-REF" ) );
        CONSTANTEXP( ADR( c2886 ) );
        c2792 = CSTRING_TSCP( t3199 );
        CONSTANTEXP( ADR( c2792 ) );
        c2785 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EVAL" ) );
        CONSTANTEXP( ADR( c2785 ) );
        c2781 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EQUAL?" ) );
        CONSTANTEXP( ADR( c2781 ) );
        c2777 = EMPTYLIST;
        t3200 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-DISPLAY" ) );
        c2777 = CONS( t3200, c2777 );
        t3201 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-WRITE" ) );
        c2777 = CONS( t3201, c2777 );
        CONSTANTEXP( ADR( c2777 ) );
        c2760 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-METHODS" ) );
        CONSTANTEXP( ADR( c2760 ) );
        c2666 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-SET!" ) );
        CONSTANTEXP( ADR( c2666 ) );
        c2650 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-REF" ) );
        CONSTANTEXP( ADR( c2650 ) );
        c2641 = CSTRING_TSCP( t3202 );
        CONSTANTEXP( ADR( c2641 ) );
        c2640 = STRINGTOSYMBOL( CSTRING_TSCP( "%RECORD-LENGTH" ) );
        CONSTANTEXP( ADR( c2640 ) );
        c2625 = CSTRING_TSCP( t3203 );
        CONSTANTEXP( ADR( c2625 ) );
        c2400 = CSTRING_TSCP( t3204 );
        CONSTANTEXP( ADR( c2400 ) );
        c2399 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2399 ) );
        c2170 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c2170 ) );
        c2159 = CSTRING_TSCP( t3205 );
        CONSTANTEXP( ADR( c2159 ) );
        c2155 = CSTRING_TSCP( t3206 );
        CONSTANTEXP( ADR( c2155 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2152 ) );
        c2143 = CSTRING_TSCP( t3207 );
        CONSTANTEXP( ADR( c2143 ) );
        c2142 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c2142 ) );
}

DEFTSCP( scrt4_vector_3f_v );
DEFCSTRING( t3208, "VECTOR?" );

TSCP  scrt4_vector_3f( x2131 )
        TSCP  x2131;
{
        PUSHSTACKTRACE( t3208 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2131 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2131 ), 
                                         VECTORTAG ) ) ) );
}

DEFTSCP( scrt4_vector_v );
DEFCSTRING( t3210, "VECTOR" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );

TSCP  scrt4_vector( x2135 )
        TSCP  x2135;
{
        PUSHSTACKTRACE( t3210 );
        POPSTACKTRACE( scrt4_list_2d_3evector( x2135 ) );
}

DEFTSCP( scrt4_vector_2dlength_v );
DEFCSTRING( t3212, "VECTOR-LENGTH" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scrt4_vector_2dlength( x2137 )
        TSCP  x2137;
{
        PUSHSTACKTRACE( t3212 );
        if  ( AND( EQ( TSCPTAG( x2137 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2137 ), VECTORTAG ) )
            )  goto L3215;
        scdebug_error( c2142, 
                       c2143, CONS( x2137, EMPTYLIST ) );
L3215:
        POPSTACKTRACE( C_FIXED( VECTOR_LENGTH( x2137 ) ) );
}

DEFTSCP( scrt4_vector_2dref_v );
DEFCSTRING( t3217, "VECTOR-REF" );

TSCP  scrt4_vector_2dref( x2145, y2146 )
        TSCP  x2145, y2146;
{
        PUSHSTACKTRACE( t3217 );
        if  ( AND( EQ( TSCPTAG( x2145 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2145 ), VECTORTAG ) )
            )  goto L3220;
        scdebug_error( c2152, 
                       c2143, CONS( x2145, EMPTYLIST ) );
L3220:
        if  ( EQ( TSCPTAG( y2146 ), FIXNUMTAG ) )  goto L3222;
        scdebug_error( c2152, 
                       c2155, CONS( y2146, EMPTYLIST ) );
L3222:
        if  ( LT( _S2CUINT( FIXED_C( y2146 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2145 ) ) ) )  goto L3224;
        scdebug_error( c2152, 
                       c2159, CONS( y2146, EMPTYLIST ) );
L3224:
        POPSTACKTRACE( VECTOR_ELEMENT( x2145, y2146 ) );
}

DEFTSCP( scrt4_vector_2dset_21_v );
DEFCSTRING( t3226, "VECTOR-SET!" );

TSCP  scrt4_vector_2dset_21( x2161, y2162, z2163 )
        TSCP  x2161, y2162, z2163;
{
        PUSHSTACKTRACE( t3226 );
        if  ( AND( EQ( TSCPTAG( x2161 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2161 ), VECTORTAG ) )
            )  goto L3229;
        scdebug_error( c2170, 
                       c2143, CONS( x2161, EMPTYLIST ) );
L3229:
        if  ( EQ( TSCPTAG( y2162 ), FIXNUMTAG ) )  goto L3231;
        scdebug_error( c2170, 
                       c2155, CONS( y2162, EMPTYLIST ) );
L3231:
        if  ( LT( _S2CUINT( FIXED_C( y2162 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2161 ) ) ) )  goto L3233;
        scdebug_error( c2170, 
                       c2159, CONS( y2162, EMPTYLIST ) );
L3233:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( x2161, y2162 ), 
                               z2163 ) );
}

DEFTSCP( scrt4_vector_2d_3elist_v );
DEFCSTRING( t3235, "VECTOR->LIST" );
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

        PUSHSTACKTRACE( t3235 );
        if  ( AND( EQ( TSCPTAG( x2177 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2177 ), VECTORTAG ) )
            )  goto L3239;
        scdebug_error( c2142, 
                       c2143, CONS( x2177, EMPTYLIST ) );
L3239:
        X2 = C_FIXED( VECTOR_LENGTH( x2177 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3242;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3243;
L3242:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3243:
        X2 = EMPTYLIST;
L3244:
        X2 = CONS( X2, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3246;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3250;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3246:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3250;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3250:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3255;
        scdebug_error( c2152, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3255:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2177 ) ) ) )  goto L3257;
        scdebug_error( c2152, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3257:
        X4 = VECTOR_ELEMENT( x2177, X1 );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3259;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3260;
L3259:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L3260:
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L3244 );
}

DEFTSCP( scrt4_list_2d_3evector_v );
DEFCSTRING( t3261, "LIST->VECTOR" );
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

        PUSHSTACKTRACE( t3261 );
        X2 = scrt1_length( x2223 );
        X1 = sc_make_2dvector( X2, EMPTYLIST );
        X2 = x2223;
        X3 = _TSCP( 0 );
L3264:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3265;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3269;
        scrt1__24__car_2derror( X2 );
L3269:
        X4 = PAIR_CAR( X2 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3272;
        scdebug_error( c2170, 
                       c2143, CONS( X1, EMPTYLIST ) );
L3272:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3274;
        scdebug_error( c2170, 
                       c2155, CONS( X3, EMPTYLIST ) );
L3274:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3276;
        scdebug_error( c2170, 
                       c2159, CONS( X3, EMPTYLIST ) );
L3276:
        SETGEN( VECTOR_ELEMENT( X1, X3 ), X4 );
        X4 = PAIR_CDR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3279;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3280;
L3279:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L3280:
        X2 = X4;
        GOBACK( L3264 );
L3265:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_vector_2dfill_21_v );
DEFCSTRING( t3281, "VECTOR-FILL!" );

TSCP  scrt4_vector_2dfill_21( v2262, x2263 )
        TSCP  v2262, x2263;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3281 );
        if  ( AND( EQ( TSCPTAG( v2262 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v2262 ), VECTORTAG ) )
            )  goto L3285;
        scdebug_error( c2142, 
                       c2143, CONS( v2262, EMPTYLIST ) );
L3285:
        X2 = C_FIXED( VECTOR_LENGTH( v2262 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3288;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3289;
L3288:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3289:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3292;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3296;
        POPSTACKTRACE( v2262 );
L3292:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3296;
        POPSTACKTRACE( v2262 );
L3296:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3301;
        scdebug_error( c2170, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3301:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v2262 ) ) ) )  goto L3303;
        scdebug_error( c2170, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3303:
        SETGEN( VECTOR_ELEMENT( v2262, X1 ), x2263 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3305;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3289 );
L3305:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L3289 );
}

DEFTSCP( scrt4_procedure_3f_v );
DEFCSTRING( t3307, "PROCEDURE?" );

TSCP  scrt4_procedure_3f( x2306 )
        TSCP  x2306;
{
        PUSHSTACKTRACE( t3307 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2306 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2306 ), 
                                         PROCEDURETAG ) ) ) );
}

DEFTSCP( scrt4_apply_v );
DEFCSTRING( t3309, "APPLY" );
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
        if  ( EQ( TSCPTAG( o2318 ), PAIRTAG ) )  goto L3316;
        scrt1__24__cdr_2derror( o2318 );
L3316:
        if  ( FALSE( PAIR_CDR( o2318 ) ) )  goto L3318;
        X1 = PAIR_CAR( o2318 );
        X3 = PAIR_CDR( o2318 );
        X2 = scrt4_l2316( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3318:
        POPSTACKTRACE( PAIR_CAR( o2318 ) );
}

TSCP  scrt4_apply( p2310, a2311, o2312 )
        TSCP  p2310, a2311, o2312;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3309 );
        if  ( FALSE( o2312 ) )  goto L3311;
        X2 = scrt4_l2316( o2312 );
        X1 = sc_cons( a2311, X2 );
        POPSTACKTRACE( sc_apply_2dtwo( p2310, X1 ) );
L3311:
        POPSTACKTRACE( sc_apply_2dtwo( p2310, a2311 ) );
}

DEFTSCP( scrt4_map_v );
DEFCSTRING( t3323, "MAP" );
EXTERNTSCPP( scrt1_car, XAL1( TSCP ) );
EXTERNTSCP( scrt1_car_v );
EXTERNTSCPP( scrt1_cdr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdr_v );

TSCP  scrt4_map( p2336, a2337, o2338 )
        TSCP  p2336, a2337, o2338;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3323 );
        X1 = sc_cons( a2337, o2338 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L3327:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3331;
        scrt1__24__car_2derror( X2 );
L3331:
        X5 = PAIR_CAR( X2 );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3328;
        X8 = X2;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L3335:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3336;
        X7 = X9;
        goto L3343;
L3336:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3339;
        scrt1__24__car_2derror( X8 );
L3339:
        X13 = PAIR_CAR( X8 );
        X12 = scrt1_car( X13 );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L3342;
        X12 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X12;
        GOBACK( L3335 );
L3342:
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3347;
        scdebug_error( c2399, 
                       c2400, CONS( X10, EMPTYLIST ) );
L3347:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X12;
        GOBACK( L3335 );
L3343:
        X6 = sc_apply_2dtwo( p2336, X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3350;
        X7 = X2;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L3354:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3355;
        X6 = X8;
        goto L3362;
L3355:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3358;
        scrt1__24__car_2derror( X7 );
L3358:
        X12 = PAIR_CAR( X7 );
        X11 = scrt1_cdr( X12 );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3361;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L3354 );
L3361:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3366;
        scdebug_error( c2399, 
                       c2400, CONS( X9, EMPTYLIST ) );
L3366:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L3354 );
L3362:
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L3327 );
L3350:
        X7 = X2;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L3370:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3371;
        X6 = X8;
        goto L3378;
L3371:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3374;
        scrt1__24__car_2derror( X7 );
L3374:
        X12 = PAIR_CAR( X7 );
        X11 = scrt1_cdr( X12 );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3377;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L3370 );
L3377:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3382;
        scdebug_error( c2399, 
                       c2400, CONS( X9, EMPTYLIST ) );
L3382:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L3370 );
L3378:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3385;
        scdebug_error( c2399, 
                       c2400, CONS( X4, EMPTYLIST ) );
L3385:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L3327 );
L3328:
        POPSTACKTRACE( X3 );
}

DEFTSCP( scrt4_for_2deach_v );
DEFCSTRING( t3387, "FOR-EACH" );

TSCP  scrt4_for_2deach( p2499, a2500, o2501 )
        TSCP  p2499, a2500, o2501;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3387 );
        X1 = sc_cons( a2500, o2501 );
L3390:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3394;
        scrt1__24__car_2derror( X1 );
L3394:
        X2 = PAIR_CAR( X1 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3391;
        X3 = X1;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3399:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3400;
        X2 = X4;
        goto L3407;
L3400:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3403;
        scrt1__24__car_2derror( X3 );
L3403:
        X8 = PAIR_CAR( X3 );
        X7 = scrt1_car( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3406;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L3399 );
L3406:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3411;
        scdebug_error( c2399, 
                       c2400, CONS( X5, EMPTYLIST ) );
L3411:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L3399 );
L3407:
        sc_apply_2dtwo( p2499, X2 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L3415:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3416;
        X1 = X3;
        GOBACK( L3390 );
L3416:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3419;
        scrt1__24__car_2derror( X2 );
L3419:
        X7 = PAIR_CAR( X2 );
        X6 = scrt1_cdr( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3422;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L3415 );
L3422:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3427;
        scdebug_error( c2399, 
                       c2400, CONS( X4, EMPTYLIST ) );
L3427:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L3415 );
L3391:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt4_force_v );
DEFCSTRING( t3429, "FORCE" );

TSCP  scrt4_force( o2601 )
        TSCP  o2601;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3429 );
        X1 = o2601;
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt4_make_2dpromise_v );
DEFCSTRING( t3431, "MAKE-PROMISE" );

TSCP  scrt4_l2607( c3434 )
        TSCP  c3434;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt4_l2607 [inside MAKE-PROMISE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3434, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3434, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3434, 2 );
        if  ( TRUE( PAIR_CAR( DISPLAY( 2 ) ) ) )  goto L3436;
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 0 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X5 );
        X5 = TRUEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X5 );
L3436:
        X4 = PAIR_CAR( DISPLAY( 1 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  scrt4_make_2dpromise( p2603 )
        TSCP  p2603;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3431 );
        DISPLAY( 0 ) = p2603;
        DISPLAY( 1 ) = FALSEVALUE;
        DISPLAY( 2 ) = FALSEVALUE;
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        SDVAL = MAKEPROCEDURE( 0, 
                               0, 
                               scrt4_l2607, 
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
DEFCSTRING( t3439, "CATCH-ERROR" );
EXTERNTSCP( scdebug__2aerror_2dhandler_2a_v );
EXTERNTSCPP( scrt5_open_2doutput_2dstring, XAL0(  ) );
EXTERNTSCP( scrt5_open_2doutput_2dstring_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt6_get_2doutput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt6_get_2doutput_2dstring_v );

TSCP  scrt4_e2618( i2620, f2621, a2622, c3445 )
        TSCP  i2620, f2621, a2622, c3445;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "ERROR [inside CATCH-ERROR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3445, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3445, 1 );
        X4 = scrt5_open_2doutput_2dstring(  );
        scdebug__2aerror_2dhandler_2a_v = DISPLAY( 1 );
        X5 = CONS( i2620, EMPTYLIST );
        scrt6_format( X4, CONS( c2625, X5 ) );
        X6 = CONS( a2622, EMPTYLIST );
        X5 = scrt1_cons_2a( X4, CONS( f2621, X6 ) );
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

TSCP  scrt4_l2615( r2616, c3442 )
        TSCP  r2616, c3442;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "scrt4_l2615 [inside CATCH-ERROR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3442, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3442, 1 );
        DISPLAY( 2 ) = r2616;
        X4 = _TSCP( 0 );
        X4 = CONS( X4, EMPTYLIST );
        X5 = MAKEPROCEDURE( 2, 
                            1, 
                            scrt4_e2618, 
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

TSCP  scrt4_catch_2derror( p2610 )
        TSCP  p2610;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3439 );
        DISPLAY( 0 ) = p2610;
        DISPLAY( 1 ) = scdebug__2aerror_2dhandler_2a_v;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt4_l2615, 
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
DEFCSTRING( t3450, "%RECORD?" );

TSCP  scrt4__25record_3f( x2629 )
        TSCP  x2629;
{
        PUSHSTACKTRACE( t3450 );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( x2629 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( x2629 ), 
                                         RECORDTAG ) ) ) );
}

DEFTSCP( scrt4__25record_v );
DEFCSTRING( t3452, "%RECORD" );
EXTERNTSCPP( scrt4_list_2d_3e_25record, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3e_25record_v );

TSCP  scrt4__25record( x2633 )
        TSCP  x2633;
{
        PUSHSTACKTRACE( t3452 );
        POPSTACKTRACE( scrt4_list_2d_3e_25record( x2633 ) );
}

DEFTSCP( scrt4__25record_2dlength_v );
DEFCSTRING( t3454, "%RECORD-LENGTH" );

TSCP  scrt4__25record_2dlength( x2635 )
        TSCP  x2635;
{
        PUSHSTACKTRACE( t3454 );
        if  ( AND( EQ( TSCPTAG( x2635 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2635 ), RECORDTAG ) )
            )  goto L3457;
        scdebug_error( c2640, 
                       c2641, CONS( x2635, EMPTYLIST ) );
L3457:
        POPSTACKTRACE( C_FIXED( RECORD_LENGTH( x2635 ) ) );
}

DEFTSCP( scrt4__25record_2dref_v );
DEFCSTRING( t3459, "%RECORD-REF" );

TSCP  scrt4__25record_2dref( x2643, y2644 )
        TSCP  x2643, y2644;
{
        PUSHSTACKTRACE( t3459 );
        if  ( AND( EQ( TSCPTAG( x2643 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2643 ), RECORDTAG ) )
            )  goto L3462;
        scdebug_error( c2650, 
                       c2641, CONS( x2643, EMPTYLIST ) );
L3462:
        if  ( EQ( TSCPTAG( y2644 ), FIXNUMTAG ) )  goto L3464;
        scdebug_error( c2650, 
                       c2155, CONS( y2644, EMPTYLIST ) );
L3464:
        if  ( LT( _S2CUINT( FIXED_C( y2644 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2643 ) ) ) )  goto L3466;
        scdebug_error( c2650, 
                       c2159, CONS( y2644, EMPTYLIST ) );
L3466:
        POPSTACKTRACE( RECORD_ELEMENT( x2643, y2644 ) );
}

DEFTSCP( scrt4__25record_2dset_21_v );
DEFCSTRING( t3468, "%RECORD-SET!" );

TSCP  scrt4__25record_2dset_21( x2657, y2658, z2659 )
        TSCP  x2657, y2658, z2659;
{
        PUSHSTACKTRACE( t3468 );
        if  ( AND( EQ( TSCPTAG( x2657 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2657 ), RECORDTAG ) )
            )  goto L3471;
        scdebug_error( c2666, 
                       c2641, CONS( x2657, EMPTYLIST ) );
L3471:
        if  ( EQ( TSCPTAG( y2658 ), FIXNUMTAG ) )  goto L3473;
        scdebug_error( c2666, 
                       c2155, CONS( y2658, EMPTYLIST ) );
L3473:
        if  ( LT( _S2CUINT( FIXED_C( y2658 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2657 ) ) ) )  goto L3475;
        scdebug_error( c2666, 
                       c2159, CONS( y2658, EMPTYLIST ) );
L3475:
        POPSTACKTRACE( SETGEN( RECORD_ELEMENT( x2657, y2658 ), 
                               z2659 ) );
}

DEFTSCP( scrt4__25record_2d_3elist_v );
DEFCSTRING( t3477, "%RECORD->LIST" );

TSCP  scrt4__25record_2d_3elist( x2673 )
        TSCP  x2673;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3477 );
        if  ( AND( EQ( TSCPTAG( x2673 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2673 ), RECORDTAG ) )
            )  goto L3481;
        scdebug_error( c2640, 
                       c2641, CONS( x2673, EMPTYLIST ) );
L3481:
        X2 = C_FIXED( RECORD_LENGTH( x2673 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3484;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3485;
L3484:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L3485:
        X2 = EMPTYLIST;
L3486:
        X2 = CONS( X2, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3488;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L3492;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3488:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L3492;
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L3492:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3497;
        scdebug_error( c2650, 
                       c2155, CONS( X1, EMPTYLIST ) );
L3497:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( RECORD_LENGTH( x2673 ) ) ) )  goto L3499;
        scdebug_error( c2650, 
                       c2159, CONS( X1, EMPTYLIST ) );
L3499:
        X4 = RECORD_ELEMENT( x2673, X1 );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3501;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3502;
L3501:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L3502:
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L3486 );
}

DEFTSCP( scrt4_list_2d_3e_25record_v );
DEFCSTRING( t3503, "LIST->%RECORD" );
EXTERNTSCPP( sc_make_2d_25record, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2d_25record_v );

TSCP  scrt4_list_2d_3e_25record( x2716 )
        TSCP  x2716;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3503 );
        X2 = scrt1_length( x2716 );
        X1 = sc_make_2d_25record( X2, EMPTYLIST );
        X2 = x2716;
        X3 = _TSCP( 0 );
L3506:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3507;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3511;
        scrt1__24__car_2derror( X2 );
L3511:
        X4 = PAIR_CAR( X2 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), RECORDTAG ) ) )  goto L3514;
        scdebug_error( c2666, 
                       c2641, CONS( X1, EMPTYLIST ) );
L3514:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3516;
        scdebug_error( c2666, 
                       c2155, CONS( X3, EMPTYLIST ) );
L3516:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( RECORD_LENGTH( X1 ) ) ) )  goto L3518;
        scdebug_error( c2666, 
                       c2159, CONS( X3, EMPTYLIST ) );
L3518:
        SETGEN( RECORD_ELEMENT( X1, X3 ), X4 );
        X4 = PAIR_CDR( X2 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3521;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3522;
L3521:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L3522:
        X2 = X4;
        GOBACK( L3506 );
L3507:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4__25record_2dmethods_v );
DEFCSTRING( t3523, "%RECORD-METHODS" );

TSCP  scrt4__25record_2dmethods( x2755 )
        TSCP  x2755;
{
        PUSHSTACKTRACE( t3523 );
        if  ( AND( EQ( TSCPTAG( x2755 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2755 ), RECORDTAG ) )
            )  goto L3526;
        scdebug_error( c2760, 
                       c2641, CONS( x2755, EMPTYLIST ) );
L3526:
        POPSTACKTRACE( RECORD_METHODS( x2755 ) );
}

DEFTSCP( scrt4_s_2dset_21_fcaf91b1_v );
DEFCSTRING( t3528, "%RECORD-METHODS-SET!" );

TSCP  scrt4_s_2dset_21_fcaf91b1( x2762, y2763 )
        TSCP  x2762, y2763;
{
        PUSHSTACKTRACE( t3528 );
        if  ( AND( EQ( TSCPTAG( x2762 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( x2762 ), RECORDTAG ) )
            )  goto L3531;
        scdebug_error( c2666, 
                       c2641, CONS( x2762, EMPTYLIST ) );
L3531:
        POPSTACKTRACE( SETGEN( RECORD_METHODS( x2762 ), y2763 ) );
}

DEFTSCP( scrt4_fix_2dchar_c117a402_v );
DEFCSTRING( t3533, "%RECORD-PREFIX-CHAR" );
DEFTSCP( scrt4__25record_2dread_v );
DEFCSTRING( t3534, "%RECORD-READ" );
DEFTSCP( scrt4_p_2dmethod_3ccf392b_v );
DEFCSTRING( t3535, "%RECORD-LOOKUP-METHOD" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt3_string, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_v );

TSCP  scrt4_l2788( r2789, p2790, i2791, c3548 )
        TSCP  r2789, p2790, i2791, c3548;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scrt4_l2788 [inside %RECORD-LOOKUP-METHOD]" );
        if  ( FALSE( scrt4_fix_2dchar_c117a402_v ) )  goto L3550;
        X2 = CONS( scrt4_fix_2dchar_c117a402_v, EMPTYLIST );
        X1 = scrt3_string( CONS( _TSCP( 8978 ), X2 ) );
        goto L3551;
L3550:
        X1 = c2792;
L3551:
        scrt6_display( X1, CONS( p2790, EMPTYLIST ) );
        X2 = scrt4__25record_2d_3elist( r2789 );
        X1 = sc_cons( X2, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

TSCP  scrt4_l2786( x2787, c3557 )
        TSCP  x2787, c3557;
{
        PUSHSTACKTRACE( "scrt4_l2786 [inside %RECORD-LOOKUP-METHOD]" );
        POPSTACKTRACE( x2787 );
}

EXTERNTSCPP( scrt1_eq_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_eq_3f_v );

TSCP  scrt4_p_2dmethod_3ccf392b( r2771, m2772 )
        TSCP  r2771, m2772;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3535 );
        if  ( AND( EQ( TSCPTAG( r2771 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( r2771 ), RECORDTAG ) )
            )  goto L3538;
        scdebug_error( c2760, 
                       c2641, CONS( r2771, EMPTYLIST ) );
L3538:
        X2 = RECORD_METHODS( r2771 );
        X1 = scrt1_assq( m2772, X2 );
        if  ( FALSE( X1 ) )  goto L3541;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3544;
        scrt1__24__cdr_2derror( X1 );
L3544:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
L3541:
        if  ( FALSE( scrt1_memv( m2772, c2777 ) ) )  goto L3546;
        POPSTACKTRACE( MAKEPROCEDURE( 2, 
                                      1, scrt4_l2788, EMPTYLIST ) );
L3546:
        if  ( EQ( _S2CUINT( m2772 ), _S2CUINT( c2781 ) ) )  goto L3553;
        if  ( NEQ( _S2CUINT( m2772 ), _S2CUINT( c2785 ) ) )  goto L3555;
        POPSTACKTRACE( MAKEPROCEDURE( 1, 
                                      0, scrt4_l2786, EMPTYLIST ) );
L3555:
        POPSTACKTRACE( FALSEVALUE );
L3553:
        POPSTACKTRACE( scrt1_eq_3f_v );
}

DEFTSCP( scrt4_c_2dsizeof_2dshort_v );
DEFCSTRING( t3559, "C-SIZEOF-SHORT" );
DEFTSCP( scrt4_c_2dsizeof_2dint_v );
DEFCSTRING( t3560, "C-SIZEOF-INT" );
DEFTSCP( scrt4_c_2dsizeof_2dlong_v );
DEFCSTRING( t3561, "C-SIZEOF-LONG" );
DEFTSCP( scrt4_c_2dsizeof_2dfloat_v );
DEFCSTRING( t3562, "C-SIZEOF-FLOAT" );
DEFTSCP( scrt4_c_2dsizeof_2ddouble_v );
DEFCSTRING( t3563, "C-SIZEOF-DOUBLE" );
DEFTSCP( scrt4_c_2dsizeof_2dtscp_v );
DEFCSTRING( t3564, "C-SIZEOF-TSCP" );
DEFTSCP( scrt4_c_2dsizeof_2ds2cuint_v );
DEFCSTRING( t3565, "C-SIZEOF-S2CUINT" );
DEFTSCP( scrt4_c_2dbyte_2dref_v );
DEFCSTRING( t3566, "C-BYTE-REF" );

TSCP  scrt4_c_2dbyte_2dref( s2805, x2806 )
        TSCP  s2805, x2806;
{
        PUSHSTACKTRACE( t3566 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CUINT( MBYTE( TSCP_POINTER( s2805 ), 
                                                     TSCP_S2CINT( x2806 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dshortint_2dref_v );
DEFCSTRING( t3568, "C-SHORTINT-REF" );

TSCP  scrt4_c_2dshortint_2dref( s2808, x2809 )
        TSCP  s2808, x2809;
{
        PUSHSTACKTRACE( t3568 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MSINT( TSCP_POINTER( s2808 ), 
                                                    TSCP_S2CINT( x2809 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dshortunsigned_2dref_v );
DEFCSTRING( t3570, "C-SHORTUNSIGNED-REF" );

TSCP  scrt4_c_2dshortunsigned_2dref( s2811, x2812 )
        TSCP  s2811, x2812;
{
        PUSHSTACKTRACE( t3570 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MSUNSIGNED( TSCP_POINTER( s2811 ), 
                                                           TSCP_S2CINT( x2812 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dint_2dref_v );
DEFCSTRING( t3572, "C-INT-REF" );

TSCP  scrt4_c_2dint_2dref( s2814, x2815 )
        TSCP  s2814, x2815;
{
        PUSHSTACKTRACE( t3572 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MINT( TSCP_POINTER( s2814 ), 
                                                   TSCP_S2CINT( x2815 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dunsigned_2dref_v );
DEFCSTRING( t3574, "C-UNSIGNED-REF" );

TSCP  scrt4_c_2dunsigned_2dref( s2817, x2818 )
        TSCP  s2817, x2818;
{
        PUSHSTACKTRACE( t3574 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MUNSIGNED( TSCP_POINTER( s2817 ), 
                                                          TSCP_S2CINT( x2818 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dlongint_2dref_v );
DEFCSTRING( t3576, "C-LONGINT-REF" );

TSCP  scrt4_c_2dlongint_2dref( s2820, x2821 )
        TSCP  s2820, x2821;
{
        PUSHSTACKTRACE( t3576 );
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MLINT( TSCP_POINTER( s2820 ), 
                                                    TSCP_S2CINT( x2821 ) ) ) ) );
}

DEFTSCP( scrt4_c_2dlongunsigned_2dref_v );
DEFCSTRING( t3578, "C-LONGUNSIGNED-REF" );

TSCP  scrt4_c_2dlongunsigned_2dref( s2823, x2824 )
        TSCP  s2823, x2824;
{
        PUSHSTACKTRACE( t3578 );
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MLUNSIGNED( TSCP_POINTER( s2823 ), 
                                                           TSCP_S2CINT( x2824 ) ) ) ) );
}

DEFTSCP( scrt4_c_2ds2cuint_2dref_v );
DEFCSTRING( t3580, "C-S2CUINT-REF" );

TSCP  scrt4_c_2ds2cuint_2dref( s2826, x2827 )
        TSCP  s2826, x2827;
{
        PUSHSTACKTRACE( t3580 );
        POPSTACKTRACE( S2CUINT_TSCP( MS2CUINT( TSCP_POINTER( s2826 ), 
                                               TSCP_S2CINT( x2827 ) ) ) );
}

DEFTSCP( scrt4_c_2dtscp_2dref_v );
DEFCSTRING( t3582, "C-TSCP-REF" );

TSCP  scrt4_c_2dtscp_2dref( s2829, x2830 )
        TSCP  s2829, x2830;
{
        PUSHSTACKTRACE( t3582 );
        POPSTACKTRACE( MTSCP( TSCP_POINTER( s2829 ), 
                              TSCP_S2CINT( x2830 ) ) );
}

DEFTSCP( scrt4_c_2dfloat_2dref_v );
DEFCSTRING( t3584, "C-FLOAT-REF" );

TSCP  scrt4_c_2dfloat_2dref( s2832, x2833 )
        TSCP  s2832, x2833;
{
        PUSHSTACKTRACE( t3584 );
        POPSTACKTRACE( DOUBLE_TSCP( CDOUBLE( MFLOAT( TSCP_POINTER( s2832 ), 
                                                     TSCP_S2CINT( x2833 ) ) ) ) );
}

DEFTSCP( scrt4_c_2ddouble_2dref_v );
DEFCSTRING( t3586, "C-DOUBLE-REF" );

TSCP  scrt4_c_2ddouble_2dref( s2835, x2836 )
        TSCP  s2835, x2836;
{
        PUSHSTACKTRACE( t3586 );
        POPSTACKTRACE( DOUBLE_TSCP( MDOUBLE( TSCP_POINTER( s2835 ), 
                                             TSCP_S2CINT( x2836 ) ) ) );
}

DEFTSCP( scrt4_c_2dbyte_2dset_21_v );
DEFCSTRING( t3588, "C-BYTE-SET!" );

TSCP  scrt4_c_2dbyte_2dset_21( s2838, x2839, v2840 )
        TSCP  s2838, x2839, v2840;
{
        PUSHSTACKTRACE( t3588 );
        SET( MBYTE( TSCP_POINTER( s2838 ), 
                    TSCP_S2CINT( x2839 ) ), 
             TSCP_S2CINT( v2840 ) );
        POPSTACKTRACE( v2840 );
}

DEFTSCP( scrt4_c_2dshortint_2dset_21_v );
DEFCSTRING( t3590, "C-SHORTINT-SET!" );

TSCP  scrt4_c_2dshortint_2dset_21( s2842, x2843, v2844 )
        TSCP  s2842, x2843, v2844;
{
        PUSHSTACKTRACE( t3590 );
        SET( MSINT( TSCP_POINTER( s2842 ), 
                    TSCP_S2CINT( x2843 ) ), 
             TSCP_S2CINT( v2844 ) );
        POPSTACKTRACE( v2844 );
}

DEFTSCP( scrt4_d_2dset_21_828269c5_v );
DEFCSTRING( t3592, "C-SHORTUNSIGNED-SET!" );

TSCP  scrt4_d_2dset_21_828269c5( s2846, x2847, v2848 )
        TSCP  s2846, x2847, v2848;
{
        PUSHSTACKTRACE( t3592 );
        SET( MSUNSIGNED( TSCP_POINTER( s2846 ), 
                         TSCP_S2CINT( x2847 ) ), 
             TSCP_S2CUINT( v2848 ) );
        POPSTACKTRACE( v2848 );
}

DEFTSCP( scrt4_c_2dint_2dset_21_v );
DEFCSTRING( t3594, "C-INT-SET!" );

TSCP  scrt4_c_2dint_2dset_21( s2850, x2851, v2852 )
        TSCP  s2850, x2851, v2852;
{
        PUSHSTACKTRACE( t3594 );
        SET( MINT( TSCP_POINTER( s2850 ), 
                   TSCP_S2CINT( x2851 ) ), 
             TSCP_S2CINT( v2852 ) );
        POPSTACKTRACE( v2852 );
}

DEFTSCP( scrt4_c_2dunsigned_2dset_21_v );
DEFCSTRING( t3596, "C-UNSIGNED-SET!" );

TSCP  scrt4_c_2dunsigned_2dset_21( s2854, x2855, v2856 )
        TSCP  s2854, x2855, v2856;
{
        PUSHSTACKTRACE( t3596 );
        SET( MUNSIGNED( TSCP_POINTER( s2854 ), 
                        TSCP_S2CINT( x2855 ) ), 
             TSCP_S2CUINT( v2856 ) );
        POPSTACKTRACE( v2856 );
}

DEFTSCP( scrt4_c_2dlongint_2dset_21_v );
DEFCSTRING( t3598, "C-LONGINT-SET!" );

TSCP  scrt4_c_2dlongint_2dset_21( s2858, x2859, v2860 )
        TSCP  s2858, x2859, v2860;
{
        PUSHSTACKTRACE( t3598 );
        SET( MLINT( TSCP_POINTER( s2858 ), 
                    TSCP_S2CINT( x2859 ) ), 
             TSCP_S2CINT( v2860 ) );
        POPSTACKTRACE( v2860 );
}

DEFTSCP( scrt4_d_2dset_21_2e97375c_v );
DEFCSTRING( t3600, "C-LONGUNSIGNED-SET!" );

TSCP  scrt4_d_2dset_21_2e97375c( s2862, x2863, v2864 )
        TSCP  s2862, x2863, v2864;
{
        PUSHSTACKTRACE( t3600 );
        SET( MLUNSIGNED( TSCP_POINTER( s2862 ), 
                         TSCP_S2CINT( x2863 ) ), 
             TSCP_S2CUINT( v2864 ) );
        POPSTACKTRACE( v2864 );
}

DEFTSCP( scrt4_c_2ds2cuint_2dset_21_v );
DEFCSTRING( t3602, "C-S2CUINT-SET!" );

TSCP  scrt4_c_2ds2cuint_2dset_21( s2866, x2867, v2868 )
        TSCP  s2866, x2867, v2868;
{
        PUSHSTACKTRACE( t3602 );
        SET( MS2CUINT( TSCP_POINTER( s2866 ), 
                       TSCP_S2CINT( x2867 ) ), 
             TSCP_S2CUINT( v2868 ) );
        POPSTACKTRACE( v2868 );
}

DEFTSCP( scrt4_c_2dtscp_2dset_21_v );
DEFCSTRING( t3604, "C-TSCP-SET!" );

TSCP  scrt4_c_2dtscp_2dset_21( s2870, x2871, v2872 )
        TSCP  s2870, x2871, v2872;
{
        PUSHSTACKTRACE( t3604 );
        SET( MTSCP( TSCP_POINTER( s2870 ), 
                    TSCP_S2CINT( x2871 ) ), 
             v2872 );
        POPSTACKTRACE( v2872 );
}

DEFTSCP( scrt4_c_2dfloat_2dset_21_v );
DEFCSTRING( t3606, "C-FLOAT-SET!" );

TSCP  scrt4_c_2dfloat_2dset_21( s2874, x2875, v2876 )
        TSCP  s2874, x2875, v2876;
{
        PUSHSTACKTRACE( t3606 );
        SET( MFLOAT( TSCP_POINTER( s2874 ), 
                     TSCP_S2CINT( x2875 ) ), 
             TSCP_DOUBLE( v2876 ) );
        POPSTACKTRACE( v2876 );
}

DEFTSCP( scrt4_c_2ddouble_2dset_21_v );
DEFCSTRING( t3608, "C-DOUBLE-SET!" );

TSCP  scrt4_c_2ddouble_2dset_21( s2878, x2879, v2880 )
        TSCP  s2878, x2879, v2880;
{
        PUSHSTACKTRACE( t3608 );
        SET( MDOUBLE( TSCP_POINTER( s2878 ), 
                      TSCP_S2CINT( x2879 ) ), 
             TSCP_DOUBLE( v2880 ) );
        POPSTACKTRACE( v2880 );
}

DEFTSCP( scrt4_scheme_2dbyte_2dref_v );
DEFCSTRING( t3610, "SCHEME-BYTE-REF" );

TSCP  scrt4_scheme_2dbyte_2dref( s2882, x2883 )
        TSCP  s2882, x2883;
{
        PUSHSTACKTRACE( t3610 );
        if  ( BITAND( TSCPTAG( s2882 ), 1 ) )  goto L3612;
        scdebug_error( c2886, 
                       c2887, CONS( s2882, EMPTYLIST ) );
L3612:
        POPSTACKTRACE( S2CUINT_TSCP( _S2CUINT( MBYTE( T_U( s2882 ), 
                                                      TSCP_S2CINT( x2883 ) ) ) ) );
}

DEFTSCP( scrt4_scheme_2dint_2dref_v );
DEFCSTRING( t3614, "SCHEME-INT-REF" );

TSCP  scrt4_scheme_2dint_2dref( s2889, x2890 )
        TSCP  s2889, x2890;
{
        PUSHSTACKTRACE( t3614 );
        if  ( BITAND( TSCPTAG( s2889 ), 1 ) )  goto L3616;
        scdebug_error( c2893, 
                       c2887, CONS( s2889, EMPTYLIST ) );
L3616:
        POPSTACKTRACE( S2CINT_TSCP( _S2CINT( MINT( T_U( s2889 ), 
                                                   TSCP_S2CINT( x2890 ) ) ) ) );
}

DEFTSCP( scrt4_scheme_2dtscp_2dref_v );
DEFCSTRING( t3618, "SCHEME-TSCP-REF" );

TSCP  scrt4_scheme_2dtscp_2dref( s2895, x2896 )
        TSCP  s2895, x2896;
{
        PUSHSTACKTRACE( t3618 );
        if  ( BITAND( TSCPTAG( s2895 ), 1 ) )  goto L3620;
        scdebug_error( c2899, 
                       c2887, CONS( s2895, EMPTYLIST ) );
L3620:
        POPSTACKTRACE( MTSCP( T_U( s2895 ), 
                              TSCP_S2CINT( x2896 ) ) );
}

DEFTSCP( scrt4_scheme_2ds2cuint_2dref_v );
DEFCSTRING( t3622, "SCHEME-S2CUINT-REF" );

TSCP  scrt4_scheme_2ds2cuint_2dref( s2901, x2902 )
        TSCP  s2901, x2902;
{
        PUSHSTACKTRACE( t3622 );
        if  ( BITAND( TSCPTAG( s2901 ), 1 ) )  goto L3624;
        scdebug_error( c2905, 
                       c2887, CONS( s2901, EMPTYLIST ) );
L3624:
        POPSTACKTRACE( S2CUINT_TSCP( MS2CUINT( T_U( s2901 ), 
                                               TSCP_S2CINT( x2902 ) ) ) );
}

DEFTSCP( scrt4_scheme_2dbyte_2dset_21_v );
DEFCSTRING( t3626, "SCHEME-BYTE-SET!" );

TSCP  scrt4_scheme_2dbyte_2dset_21( s2907, x2908, v2909 )
        TSCP  s2907, x2908, v2909;
{
        PUSHSTACKTRACE( t3626 );
        if  ( BITAND( TSCPTAG( s2907 ), 1 ) )  goto L3628;
        scdebug_error( c2912, 
                       c2887, CONS( s2907, EMPTYLIST ) );
L3628:
        SET( MBYTE( T_U( s2907 ), TSCP_S2CINT( x2908 ) ), 
             TSCP_S2CINT( v2909 ) );
        POPSTACKTRACE( v2909 );
}

DEFTSCP( scrt4_scheme_2dint_2dset_21_v );
DEFCSTRING( t3630, "SCHEME-INT-SET!" );

TSCP  scrt4_scheme_2dint_2dset_21( s2914, x2915, v2916 )
        TSCP  s2914, x2915, v2916;
{
        PUSHSTACKTRACE( t3630 );
        if  ( BITAND( TSCPTAG( s2914 ), 1 ) )  goto L3632;
        scdebug_error( c2919, 
                       c2887, CONS( s2914, EMPTYLIST ) );
L3632:
        SET( MINT( T_U( s2914 ), TSCP_S2CINT( x2915 ) ), 
             TSCP_S2CINT( v2916 ) );
        POPSTACKTRACE( v2916 );
}

DEFTSCP( scrt4_scheme_2dtscp_2dset_21_v );
DEFCSTRING( t3634, "SCHEME-TSCP-SET!" );

TSCP  scrt4_scheme_2dtscp_2dset_21( s2921, x2922, v2923 )
        TSCP  s2921, x2922, v2923;
{
        PUSHSTACKTRACE( t3634 );
        if  ( BITAND( TSCPTAG( s2921 ), 1 ) )  goto L3636;
        scdebug_error( c2926, 
                       c2887, CONS( s2921, EMPTYLIST ) );
L3636:
        SETGENTL( MTSCP( T_U( s2921 ), 
                         TSCP_S2CINT( x2922 ) ), 
                  v2923 );
        POPSTACKTRACE( v2923 );
}

DEFTSCP( scrt4_t_2dset_21_925753db_v );
DEFCSTRING( t3638, "SCHEME-S2CUINT-SET!" );

TSCP  scrt4_t_2dset_21_925753db( s2928, x2929, v2930 )
        TSCP  s2928, x2929, v2930;
{
        PUSHSTACKTRACE( t3638 );
        if  ( BITAND( TSCPTAG( s2928 ), 1 ) )  goto L3640;
        scdebug_error( c2933, 
                       c2887, CONS( s2928, EMPTYLIST ) );
L3640:
        SET( MS2CUINT( T_U( s2928 ), TSCP_S2CINT( x2929 ) ), 
             TSCP_S2CUINT( v2930 ) );
        POPSTACKTRACE( v2930 );
}

DEFTSCP( scrt4_bit_2dand_v );
DEFCSTRING( t3642, "BIT-AND" );

TSCP  scrt4_bit_2dand( x2935, y2936 )
        TSCP  x2935, y2936;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3642 );
        X1 = x2935;
        X2 = y2936;
L3645:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3646;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3649;
        scrt1__24__car_2derror( X2 );
L3649:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITAND32( TSCP_S2CUINT( X4 ), 
                                     TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3645 );
L3646:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dor_v );
DEFCSTRING( t3652, "BIT-OR" );

TSCP  scrt4_bit_2dor( x2959, y2960 )
        TSCP  x2959, y2960;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3652 );
        X1 = x2959;
        X2 = y2960;
L3655:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3656;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3659;
        scrt1__24__car_2derror( X2 );
L3659:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITOR32( TSCP_S2CUINT( X4 ), 
                                    TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3655 );
L3656:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dnot_v );
DEFCSTRING( t3662, "BIT-NOT" );
EXTERNTSCPP( scrt4_bit_2dxor, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dxor_v );

TSCP  scrt4_bit_2dnot( x2983 )
        TSCP  x2983;
{
        PUSHSTACKTRACE( t3662 );
        POPSTACKTRACE( scrt4_bit_2dxor( x2983, 
                                        CONS( _TSCP( -4 ), EMPTYLIST ) ) );
}

DEFTSCP( scrt4_bit_2dxor_v );
DEFCSTRING( t3664, "BIT-XOR" );

TSCP  scrt4_bit_2dxor( x2985, y2986 )
        TSCP  x2985, y2986;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3664 );
        X1 = x2985;
        X2 = y2986;
L3667:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3668;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3671;
        scrt1__24__car_2derror( X2 );
L3671:
        X4 = PAIR_CAR( X2 );
        X3 = S2CUINT_TSCP( BITXOR32( TSCP_S2CUINT( X4 ), 
                                     TSCP_S2CUINT( X1 ) ) );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3667 );
L3668:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_bit_2dlsh_v );
DEFCSTRING( t3674, "BIT-LSH" );

TSCP  scrt4_bit_2dlsh( x3009, y3010 )
        TSCP  x3009, y3010;
{
        PUSHSTACKTRACE( t3674 );
        POPSTACKTRACE( S2CUINT_TSCP( BITLSH32( TSCP_S2CUINT( x3009 ), 
                                               TSCP_S2CUINT( y3010 ) ) ) );
}

DEFTSCP( scrt4_bit_2drsh_v );
DEFCSTRING( t3676, "BIT-RSH" );

TSCP  scrt4_bit_2drsh( x3012, y3013 )
        TSCP  x3012, y3013;
{
        PUSHSTACKTRACE( t3676 );
        POPSTACKTRACE( S2CUINT_TSCP( BITRSH32( TSCP_S2CUINT( x3012 ), 
                                               TSCP_S2CUINT( y3013 ) ) ) );
}

DEFTSCP( scrt4_when_2dunreferenced_v );
DEFCSTRING( t3678, "WHEN-UNREFERENCED" );
EXTERNTSCP( sc_whenfreed );
EXTERNTSCPP( scrt1_remq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remq_v );

TSCP  scrt4_when_2dunreferenced( o3015, p3016 )
        TSCP  o3015, p3016;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3678 );
        if  ( FALSE( p3016 ) )  goto L3682;
        if  ( AND( EQ( TSCPTAG( p3016 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p3016 ), PROCEDURETAG ) )
            )  goto L3682;
        scdebug_error( c3023, 
                       c3024, CONS( p3016, EMPTYLIST ) );
L3682:
        X1 = scrt1_assq( o3015, sc_whenfreed );
        if  ( FALSE( X1 ) )  goto L3685;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3688;
        scrt1__24__cdr_2derror( X1 );
L3688:
        X2 = PAIR_CDR( X1 );
        goto L3686;
L3685:
        X2 = X1;
L3686:
        if  ( FALSE( p3016 ) )  goto L3691;
        if  ( FALSE( X1 ) )  goto L3693;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3696;
        scdebug_error( c2399, 
                       c2400, CONS( X1, EMPTYLIST ) );
L3696:
        SETGEN( PAIR_CDR( X1 ), p3016 );
        goto L3698;
L3693:
        X3 = sc_cons( o3015, p3016 );
        sc_whenfreed = sc_cons( X3, sc_whenfreed );
        goto L3698;
L3691:
        if  ( FALSE( X1 ) )  goto L3698;
        sc_whenfreed = scrt1_remq( X1, sc_whenfreed );
L3698:
        POPSTACKTRACE( X2 );
}

DEFTSCP( scrt4_sc__whenfreed_v );
DEFCSTRING( t3700, "SCRT4_SC_WHENFREED" );

TSCP  scrt4_sc__whenfreed(  )
{
        PUSHSTACKTRACE( t3700 );
        POPSTACKTRACE( sc_whenfreed );
}

DEFTSCP( scrt4_signals_v );
DEFCSTRING( t3702, "SCRT4_SIGNALS" );
DEFTSCP( scrt4_signal_v );
DEFCSTRING( t3703, "SIGNAL" );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( sc_ossignal, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_ossignal_v );

TSCP  scrt4_signal( s3047, h3048 )
        TSCP  s3047, h3048;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3703 );
        if  ( NEQ( TSCPTAG( s3047 ), FIXNUMTAG ) )  goto L3705;
        X1 = BOOLEAN( LT( _S2CINT( s3047 ), 0 ) );
        goto L3706;
L3705:
        X1 = scrt2_negative_3f( s3047 );
L3706:
        if  ( TRUE( X1 ) )  goto L3711;
        X3 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L3713;
        scdebug_error( c2142, 
                       c2143, CONS( X3, EMPTYLIST ) );
L3713:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( s3047 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L3717;
        if  ( GTE( _S2CINT( s3047 ), _S2CINT( X2 ) ) )  goto L3711;
        goto L3724;
L3717:
        if  ( FALSE( scrt2__3e_3d_2dtwo( s3047, X2 ) ) )  goto L3724;
L3711:
        scdebug_error( c3069, 
                       c3070, CONS( s3047, EMPTYLIST ) );
L3724:
        if  ( AND( EQ( TSCPTAG( h3048 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( h3048 ), PROCEDURETAG ) )
            )  goto L3729;
        if  ( EQ( TSCPTAG( h3048 ), FIXNUMTAG ) )  goto L3729;
        if  ( AND( EQ( TSCPTAG( h3048 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( h3048 ), DOUBLEFLOATTAG ) )
            )  goto L3729;
        scdebug_error( c3069, 
                       c3087, CONS( h3048, EMPTYLIST ) );
L3729:
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3732;
        scdebug_error( c2152, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3732:
        if  ( EQ( TSCPTAG( s3047 ), FIXNUMTAG ) )  goto L3734;
        scdebug_error( c2152, 
                       c2155, CONS( s3047, EMPTYLIST ) );
L3734:
        if  ( LT( _S2CUINT( FIXED_C( s3047 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3736;
        scdebug_error( c2152, 
                       c2159, CONS( s3047, EMPTYLIST ) );
L3736:
        X1 = VECTOR_ELEMENT( X2, s3047 );
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3740;
        scdebug_error( c2170, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3740:
        if  ( LT( _S2CUINT( FIXED_C( s3047 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3742;
        scdebug_error( c2170, 
                       c2159, CONS( s3047, EMPTYLIST ) );
L3742:
        SETGEN( VECTOR_ELEMENT( X2, s3047 ), h3048 );
        if  ( NEQ( TSCPTAG( h3048 ), FIXNUMTAG ) )  goto L3744;
        X3 = h3048;
        goto L3747;
L3744:
        if  ( NOT( AND( EQ( TSCPTAG( h3048 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( h3048 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3746;
        X3 = h3048;
        goto L3747;
L3746:
        X3 = TRUEVALUE;
L3747:
        X2 = sc_ossignal( s3047, X3 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), PROCEDURETAG ) )
            )  goto L3749;
        POPSTACKTRACE( X2 );
L3749:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt4_callsignalhandler_v );
DEFCSTRING( t3751, "SCRT4_CALLSIGNALHANDLER" );

TSCP  scrt4_callsignalhandler( s3127 )
        TSCP  s3127;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3751 );
        X2 = scrt4_signals_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3754;
        scdebug_error( c2152, 
                       c2143, CONS( X2, EMPTYLIST ) );
L3754:
        if  ( EQ( TSCPTAG( s3127 ), FIXNUMTAG ) )  goto L3756;
        scdebug_error( c2152, 
                       c2155, CONS( s3127, EMPTYLIST ) );
L3756:
        if  ( LT( _S2CUINT( FIXED_C( s3127 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3758;
        scdebug_error( c2152, 
                       c2159, CONS( s3127, EMPTYLIST ) );
L3758:
        X1 = VECTOR_ELEMENT( X2, s3127 );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( s3127, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt4_system_v );
DEFCSTRING( t3760, "SYSTEM" );
EXTERNTSCPP( sc_ossystem, XAL1( TSCP ) );
EXTERNTSCP( sc_ossystem_v );

TSCP  scrt4_system( c3139 )
        TSCP  c3139;
{
        PUSHSTACKTRACE( t3760 );
        if  ( AND( EQ( TSCPTAG( c3139 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c3139 ), STRINGTAG ) )
            )  goto L3762;
        scdebug_error( c3142, 
                       c3143, CONS( c3139, EMPTYLIST ) );
L3762:
        POPSTACKTRACE( sc_ossystem( c3139 ) );
}

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
        INITIALIZEVAR( t3208, 
                       ADR( scrt4_vector_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3210, 
                       ADR( scrt4_vector_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt4_vector, EMPTYLIST ) );
        INITIALIZEVAR( t3212, 
                       ADR( scrt4_vector_2dlength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_2dlength, EMPTYLIST ) );
        INITIALIZEVAR( t3217, 
                       ADR( scrt4_vector_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_vector_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3226, 
                       ADR( scrt4_vector_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_vector_2dset_21, EMPTYLIST ) );
        INITIALIZEVAR( t3235, 
                       ADR( scrt4_vector_2d_3elist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_vector_2d_3elist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3261, 
                       ADR( scrt4_list_2d_3evector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_list_2d_3evector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3281, 
                       ADR( scrt4_vector_2dfill_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_vector_2dfill_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3307, 
                       ADR( scrt4_procedure_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_procedure_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3309, 
                       ADR( scrt4_apply_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt4_apply, EMPTYLIST ) );
        INITIALIZEVAR( t3323, 
                       ADR( scrt4_map_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, scrt4_map, EMPTYLIST ) );
        INITIALIZEVAR( t3387, 
                       ADR( scrt4_for_2deach_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      scrt4_for_2deach, EMPTYLIST ) );
        INITIALIZEVAR( t3429, 
                       ADR( scrt4_force_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt4_force, EMPTYLIST ) );
        INITIALIZEVAR( t3431, 
                       ADR( scrt4_make_2dpromise_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_make_2dpromise, EMPTYLIST ) );
        INITIALIZEVAR( t3439, 
                       ADR( scrt4_catch_2derror_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_catch_2derror, EMPTYLIST ) );
        INITIALIZEVAR( t3450, 
                       ADR( scrt4__25record_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3452, 
                       ADR( scrt4__25record_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt4__25record, EMPTYLIST ) );
        INITIALIZEVAR( t3454, 
                       ADR( scrt4__25record_2dlength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2dlength, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3459, 
                       ADR( scrt4__25record_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4__25record_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3468, 
                       ADR( scrt4__25record_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4__25record_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3477, 
                       ADR( scrt4__25record_2d_3elist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2d_3elist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3503, 
                       ADR( scrt4_list_2d_3e_25record_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_list_2d_3e_25record, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3523, 
                       ADR( scrt4__25record_2dmethods_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4__25record_2dmethods, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3528, 
                       ADR( scrt4_s_2dset_21_fcaf91b1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_s_2dset_21_fcaf91b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3533, 
                       ADR( scrt4_fix_2dchar_c117a402_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3534, 
                       ADR( scrt4__25record_2dread_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3535, 
                       ADR( scrt4_p_2dmethod_3ccf392b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_p_2dmethod_3ccf392b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3559, 
                       ADR( scrt4_c_2dsizeof_2dshort_v ), 
                       C_FIXED( SIZEOF( short ) ) );
        INITIALIZEVAR( t3560, 
                       ADR( scrt4_c_2dsizeof_2dint_v ), 
                       C_FIXED( SIZEOF( int ) ) );
        INITIALIZEVAR( t3561, 
                       ADR( scrt4_c_2dsizeof_2dlong_v ), 
                       C_FIXED( SIZEOF( long ) ) );
        INITIALIZEVAR( t3562, 
                       ADR( scrt4_c_2dsizeof_2dfloat_v ), 
                       C_FIXED( SIZEOF( float ) ) );
        INITIALIZEVAR( t3563, 
                       ADR( scrt4_c_2dsizeof_2ddouble_v ), 
                       C_FIXED( SIZEOF( double ) ) );
        INITIALIZEVAR( t3564, 
                       ADR( scrt4_c_2dsizeof_2dtscp_v ), 
                       C_FIXED( SIZEOF( TSCP ) ) );
        INITIALIZEVAR( t3565, 
                       ADR( scrt4_c_2dsizeof_2ds2cuint_v ), 
                       C_FIXED( SIZEOF( S2CUINT ) ) );
        INITIALIZEVAR( t3566, 
                       ADR( scrt4_c_2dbyte_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dbyte_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3568, 
                       ADR( scrt4_c_2dshortint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dshortint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3570, 
                       ADR( scrt4_c_2dshortunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dshortunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3572, 
                       ADR( scrt4_c_2dint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dint_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3574, 
                       ADR( scrt4_c_2dunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3576, 
                       ADR( scrt4_c_2dlongint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dlongint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3578, 
                       ADR( scrt4_c_2dlongunsigned_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dlongunsigned_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3580, 
                       ADR( scrt4_c_2ds2cuint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2ds2cuint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3582, 
                       ADR( scrt4_c_2dtscp_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dtscp_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3584, 
                       ADR( scrt4_c_2dfloat_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2dfloat_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3586, 
                       ADR( scrt4_c_2ddouble_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_c_2ddouble_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3588, 
                       ADR( scrt4_c_2dbyte_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dbyte_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3590, 
                       ADR( scrt4_c_2dshortint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dshortint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3592, 
                       ADR( scrt4_d_2dset_21_828269c5_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_d_2dset_21_828269c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3594, 
                       ADR( scrt4_c_2dint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3596, 
                       ADR( scrt4_c_2dunsigned_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dunsigned_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3598, 
                       ADR( scrt4_c_2dlongint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dlongint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3600, 
                       ADR( scrt4_d_2dset_21_2e97375c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_d_2dset_21_2e97375c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3602, 
                       ADR( scrt4_c_2ds2cuint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2ds2cuint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3604, 
                       ADR( scrt4_c_2dtscp_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dtscp_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3606, 
                       ADR( scrt4_c_2dfloat_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2dfloat_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3608, 
                       ADR( scrt4_c_2ddouble_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_c_2ddouble_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3610, 
                       ADR( scrt4_scheme_2dbyte_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dbyte_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3614, 
                       ADR( scrt4_scheme_2dint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3618, 
                       ADR( scrt4_scheme_2dtscp_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2dtscp_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3622, 
                       ADR( scrt4_scheme_2ds2cuint_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_scheme_2ds2cuint_2dref, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3626, 
                       ADR( scrt4_scheme_2dbyte_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dbyte_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3630, 
                       ADR( scrt4_scheme_2dint_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dint_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3634, 
                       ADR( scrt4_scheme_2dtscp_2dset_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_scheme_2dtscp_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3638, 
                       ADR( scrt4_t_2dset_21_925753db_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt4_t_2dset_21_925753db, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3642, 
                       ADR( scrt4_bit_2dand_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt4_bit_2dand, EMPTYLIST ) );
        INITIALIZEVAR( t3652, 
                       ADR( scrt4_bit_2dor_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt4_bit_2dor, EMPTYLIST ) );
        INITIALIZEVAR( t3662, 
                       ADR( scrt4_bit_2dnot_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_bit_2dnot, EMPTYLIST ) );
        INITIALIZEVAR( t3664, 
                       ADR( scrt4_bit_2dxor_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt4_bit_2dxor, EMPTYLIST ) );
        INITIALIZEVAR( t3674, 
                       ADR( scrt4_bit_2dlsh_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_bit_2dlsh, EMPTYLIST ) );
        INITIALIZEVAR( t3676, 
                       ADR( scrt4_bit_2drsh_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_bit_2drsh, EMPTYLIST ) );
        INITIALIZEVAR( t3678, 
                       ADR( scrt4_when_2dunreferenced_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt4_when_2dunreferenced, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3700, 
                       ADR( scrt4_sc__whenfreed_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt4_sc__whenfreed, EMPTYLIST ) );
        INITIALIZEVAR( t3702, 
                       ADR( scrt4_signals_v ), 
                       sc_make_2dvector( _TSCP( 128 ), 
                                         CONS( FALSEVALUE, EMPTYLIST ) ) );
        INITIALIZEVAR( t3703, 
                       ADR( scrt4_signal_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt4_signal, EMPTYLIST ) );
        INITIALIZEVAR( t3751, 
                       ADR( scrt4_callsignalhandler_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt4_callsignalhandler, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3760, 
                       ADR( scrt4_system_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt4_system, EMPTYLIST ) );
        return;
}
