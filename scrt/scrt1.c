
/* SCHEME->C */

#include <objects.h>

void scrt1__init();
DEFSTATICTSCP( c2674 );
DEFCSTRING( t3308, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2665 );
DEFSTATICTSCP( c2664 );
DEFSTATICTSCP( c2203 );
DEFCSTRING( t3309, "Argument not a PAIR: ~a" );
DEFSTATICTSCP( c2200 );
DEFSTATICTSCP( c2199 );
DEFCSTRING( t3310, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2109 );
DEFCSTRING( t3311, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2105 );
DEFSTATICTSCP( c2102 );
DEFCSTRING( t3312, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2072 );
DEFSTATICTSCP( c2071 );
DEFSTATICTSCP( c2040 );

static void  init_constants()
{
        c2674 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2674 ) );
        c2665 = CSTRING_TSCP( t3308 );
        CONSTANTEXP( ADR( c2665 ) );
        c2664 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c2664 ) );
        c2203 = STRINGTOSYMBOL( CSTRING_TSCP( "CDR" ) );
        CONSTANTEXP( ADR( c2203 ) );
        c2200 = CSTRING_TSCP( t3309 );
        CONSTANTEXP( ADR( c2200 ) );
        c2199 = STRINGTOSYMBOL( CSTRING_TSCP( "CAR" ) );
        CONSTANTEXP( ADR( c2199 ) );
        c2109 = CSTRING_TSCP( t3310 );
        CONSTANTEXP( ADR( c2109 ) );
        c2105 = CSTRING_TSCP( t3311 );
        CONSTANTEXP( ADR( c2105 ) );
        c2102 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2102 ) );
        c2072 = CSTRING_TSCP( t3312 );
        CONSTANTEXP( ADR( c2072 ) );
        c2071 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c2071 ) );
        c2040 = STRINGTOSYMBOL( CSTRING_TSCP( "%TO-EQUAL?" ) );
        CONSTANTEXP( ADR( c2040 ) );
}

DEFTSCP( scrt1_not_v );
DEFCSTRING( t3313, "NOT" );

TSCP  scrt1_not( x2001 )
        TSCP  x2001;
{
        PUSHSTACKTRACE( t3313 );
        if  ( TRUE( x2001 ) )  goto L3315;
        POPSTACKTRACE( TRUEVALUE );
L3315:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_boolean_3f_v );
DEFCSTRING( t3317, "BOOLEAN?" );

TSCP  scrt1_boolean_3f( x2003 )
        TSCP  x2003;
{
        PUSHSTACKTRACE( t3317 );
        if  ( EQ( _S2CUINT( x2003 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3319;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2003 ), 
                                    _S2CUINT( TRUEVALUE ) ) ) );
L3319:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt1_eqv_3f_v );
DEFCSTRING( t3321, "EQV?" );

TSCP  scrt1_eqv_3f( x2015, y2016 )
        TSCP  x2015, y2016;
{
        PUSHSTACKTRACE( t3321 );
        POPSTACKTRACE( BOOLEAN( OR( EQ( _S2CUINT( x2015 ), 
                                        _S2CUINT( y2016 ) ), 
                                    AND( EQ( TSCPTAG( x2015 ), 
                                             EXTENDEDTAG ), 
                                         AND( EQ( TSCP_EXTENDEDTAG( x2015 ), 
                                                  DOUBLEFLOATTAG ), 
                                              AND( EQ( TSCPTAG( y2016 ), 
                                                       EXTENDEDTAG ), 
                                                   AND( EQ( TSCP_EXTENDEDTAG( y2016 ), 
                                                            DOUBLEFLOATTAG ), 
                                                        EQ( FLOAT_VALUE( x2015 ), 
                                                            FLOAT_VALUE( y2016 ) ) ) ) ) ) ) ) );
}

DEFTSCP( scrt1_eq_3f_v );
DEFCSTRING( t3323, "EQ?" );

TSCP  scrt1_eq_3f( x2021, y2022 )
        TSCP  x2021, y2022;
{
        PUSHSTACKTRACE( t3323 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2021 ), 
                                    _S2CUINT( y2022 ) ) ) );
}

DEFTSCP( scrt1_equal_3f_v );
DEFCSTRING( t3325, "EQUAL?" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt3_string_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_string_3d_3f_v );
EXTERNTSCPP( scrt4_p_2dmethod_3ccf392b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_p_2dmethod_3ccf392b_v );

TSCP  scrt1_equal_3f( x2027, y2028 )
        TSCP  x2027, y2028;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3325 );
L3326:
        if  ( NEQ( TSCPTAG( x2027 ), PAIRTAG ) )  goto L3327;
        if  ( NEQ( TSCPTAG( y2028 ), PAIRTAG ) )  goto L3329;
        X2 = PAIR_CAR( x2027 );
        X3 = PAIR_CAR( y2028 );
        X1 = scrt1_equal_3f( X2, X3 );
        if  ( FALSE( X1 ) )  goto L3334;
        X2 = PAIR_CDR( x2027 );
        y2028 = PAIR_CDR( y2028 );
        x2027 = X2;
        GOBACK( L3326 );
L3334:
        POPSTACKTRACE( X1 );
L3329:
        POPSTACKTRACE( FALSEVALUE );
L3327:
        if  ( NOT( AND( EQ( TSCPTAG( x2027 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2027 ), VECTORTAG ) ) )
            )  goto L3338;
        X1 = C_FIXED( VECTOR_LENGTH( x2027 ) );
        if  ( NOT( AND( EQ( TSCPTAG( y2028 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2028 ), VECTORTAG ) ) )
            )  goto L3342;
        X3 = C_FIXED( VECTOR_LENGTH( y2028 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L3346;
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), _S2CUINT( X1 ) ) );
        goto L3347;
L3346:
        X2 = scrt2__3d_2dtwo( X3, X1 );
L3347:
        if  ( FALSE( X2 ) )  goto L3349;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3351;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3352;
L3351:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L3352:
        X4 = X3;
L3355:
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L3356;
        X5 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( _TSCP( -4 ) ) ) );
        goto L3357;
L3356:
        X5 = scrt2__3d_2dtwo( X4, _TSCP( -4 ) );
L3357:
        if  ( TRUE( X5 ) )  goto L3359;
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L3362;
        scdebug_error( c2102, 
                       c2105, CONS( X4, EMPTYLIST ) );
L3362:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( x2027 ) ) ) )  goto L3364;
        scdebug_error( c2102, 
                       c2109, CONS( X4, EMPTYLIST ) );
L3364:
        X7 = VECTOR_ELEMENT( x2027, X4 );
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( y2028 ) ) ) )  goto L3367;
        scdebug_error( c2102, 
                       c2109, CONS( X4, EMPTYLIST ) );
L3367:
        X8 = VECTOR_ELEMENT( y2028, X4 );
        X6 = scrt1_equal_3f( X7, X8 );
        if  ( FALSE( X6 ) )  goto L3370;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3372;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3355 );
L3372:
        X4 = scrt2__2d_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L3355 );
L3370:
        POPSTACKTRACE( X6 );
L3359:
        POPSTACKTRACE( X5 );
L3349:
        POPSTACKTRACE( X2 );
L3342:
        POPSTACKTRACE( FALSEVALUE );
L3338:
        if  ( NOT( AND( EQ( TSCPTAG( x2027 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2027 ), STRINGTAG ) ) )
            )  goto L3374;
        if  ( NOT( AND( EQ( TSCPTAG( y2028 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( y2028 ), STRINGTAG ) ) )
            )  goto L3376;
        POPSTACKTRACE( scrt3_string_3d_3f( x2027, y2028 ) );
L3376:
        POPSTACKTRACE( FALSEVALUE );
L3374:
        if  ( NOT( AND( EQ( TSCPTAG( x2027 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x2027 ), RECORDTAG ) ) )
            )  goto L3378;
        X1 = scrt4_p_2dmethod_3ccf392b( x2027, c2040 );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( x2027, 
                                                    y2028, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3378:
        POPSTACKTRACE( BOOLEAN( OR( EQ( _S2CUINT( x2027 ), 
                                        _S2CUINT( y2028 ) ), 
                                    AND( EQ( TSCPTAG( x2027 ), 
                                             EXTENDEDTAG ), 
                                         AND( EQ( TSCP_EXTENDEDTAG( x2027 ), 
                                                  DOUBLEFLOATTAG ), 
                                              AND( EQ( TSCPTAG( y2028 ), 
                                                       EXTENDEDTAG ), 
                                                   AND( EQ( TSCP_EXTENDEDTAG( y2028 ), 
                                                            DOUBLEFLOATTAG ), 
                                                        EQ( FLOAT_VALUE( x2027 ), 
                                                            FLOAT_VALUE( y2028 ) ) ) ) ) ) ) ) );
}

DEFTSCP( scrt1_pair_3f_v );
DEFCSTRING( t3380, "PAIR?" );

TSCP  scrt1_pair_3f( x2166 )
        TSCP  x2166;
{
        PUSHSTACKTRACE( t3380 );
        POPSTACKTRACE( BOOLEAN( EQ( TSCPTAG( x2166 ), PAIRTAG ) ) );
}

DEFTSCP( scrt1_cons_2a_v );
DEFCSTRING( t3382, "CONS*" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_c2173, XAL1( TSCP ) );

TSCP  scrt1_c2173( x2175 )
        TSCP  x2175;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "CONS*1 [inside CONS*]" );
        if  ( EQ( TSCPTAG( x2175 ), PAIRTAG ) )  goto L3389;
        scrt1__24__cdr_2derror( x2175 );
L3389:
        X1 = PAIR_CDR( x2175 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3386;
        POPSTACKTRACE( PAIR_CAR( x2175 ) );
L3386:
        if  ( EQ( TSCPTAG( x2175 ), PAIRTAG ) )  goto L3393;
        scrt1__24__car_2derror( x2175 );
L3393:
        X1 = PAIR_CAR( x2175 );
        X3 = PAIR_CDR( x2175 );
        X2 = scrt1_c2173( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

TSCP  scrt1_cons_2a( x2170, y2171 )
        TSCP  x2170, y2171;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3382 );
        if  ( FALSE( y2171 ) )  goto L3396;
        X1 = scrt1_c2173( y2171 );
        POPSTACKTRACE( sc_cons( x2170, X1 ) );
L3396:
        POPSTACKTRACE( x2170 );
}

DEFTSCP( scrt1__24__car_2derror_v );
DEFCSTRING( t3398, "SCRT1_$_CAR-ERROR" );

TSCP  scrt1__24__car_2derror( x2198 )
        TSCP  x2198;
{
        PUSHSTACKTRACE( t3398 );
        POPSTACKTRACE( scdebug_error( c2199, 
                                      c2200, 
                                      CONS( x2198, EMPTYLIST ) ) );
}

DEFTSCP( scrt1__24__cdr_2derror_v );
DEFCSTRING( t3400, "SCRT1_$_CDR-ERROR" );

TSCP  scrt1__24__cdr_2derror( x2202 )
        TSCP  x2202;
{
        PUSHSTACKTRACE( t3400 );
        POPSTACKTRACE( scdebug_error( c2203, 
                                      c2200, 
                                      CONS( x2202, EMPTYLIST ) ) );
}

DEFTSCP( scrt1_car_v );
DEFCSTRING( t3402, "CAR" );

TSCP  scrt1_car( x2205 )
        TSCP  x2205;
{
        PUSHSTACKTRACE( t3402 );
        if  ( EQ( TSCPTAG( x2205 ), PAIRTAG ) )  goto L3405;
        scrt1__24__car_2derror( x2205 );
L3405:
        POPSTACKTRACE( PAIR_CAR( x2205 ) );
}

DEFTSCP( scrt1_cdr_v );
DEFCSTRING( t3407, "CDR" );

TSCP  scrt1_cdr( x2211 )
        TSCP  x2211;
{
        PUSHSTACKTRACE( t3407 );
        if  ( EQ( TSCPTAG( x2211 ), PAIRTAG ) )  goto L3410;
        scrt1__24__cdr_2derror( x2211 );
L3410:
        POPSTACKTRACE( PAIR_CDR( x2211 ) );
}

DEFTSCP( scrt1_caar_v );
DEFCSTRING( t3412, "CAAR" );

TSCP  scrt1_caar( x2217 )
        TSCP  x2217;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3412 );
        if  ( EQ( TSCPTAG( x2217 ), PAIRTAG ) )  goto L3415;
        scrt1__24__car_2derror( x2217 );
L3415:
        X1 = PAIR_CAR( x2217 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3418;
        scrt1__24__car_2derror( X1 );
L3418:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cadr_v );
DEFCSTRING( t3420, "CADR" );

TSCP  scrt1_cadr( x2227 )
        TSCP  x2227;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3420 );
        if  ( EQ( TSCPTAG( x2227 ), PAIRTAG ) )  goto L3423;
        scrt1__24__cdr_2derror( x2227 );
L3423:
        X1 = PAIR_CDR( x2227 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3426;
        scrt1__24__car_2derror( X1 );
L3426:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cdar_v );
DEFCSTRING( t3428, "CDAR" );

TSCP  scrt1_cdar( x2237 )
        TSCP  x2237;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3428 );
        if  ( EQ( TSCPTAG( x2237 ), PAIRTAG ) )  goto L3431;
        scrt1__24__car_2derror( x2237 );
L3431:
        X1 = PAIR_CAR( x2237 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3434;
        scrt1__24__cdr_2derror( X1 );
L3434:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cddr_v );
DEFCSTRING( t3436, "CDDR" );

TSCP  scrt1_cddr( x2247 )
        TSCP  x2247;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3436 );
        if  ( EQ( TSCPTAG( x2247 ), PAIRTAG ) )  goto L3439;
        scrt1__24__cdr_2derror( x2247 );
L3439:
        X1 = PAIR_CDR( x2247 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3442;
        scrt1__24__cdr_2derror( X1 );
L3442:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_caaar_v );
DEFCSTRING( t3444, "CAAAR" );

TSCP  scrt1_caaar( x2257 )
        TSCP  x2257;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3444 );
        if  ( EQ( TSCPTAG( x2257 ), PAIRTAG ) )  goto L3447;
        scrt1__24__car_2derror( x2257 );
L3447:
        X2 = PAIR_CAR( x2257 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3450;
        scrt1__24__car_2derror( X2 );
L3450:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3453;
        scrt1__24__car_2derror( X1 );
L3453:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caadr_v );
DEFCSTRING( t3455, "CAADR" );

TSCP  scrt1_caadr( x2271 )
        TSCP  x2271;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3455 );
        if  ( EQ( TSCPTAG( x2271 ), PAIRTAG ) )  goto L3458;
        scrt1__24__cdr_2derror( x2271 );
L3458:
        X2 = PAIR_CDR( x2271 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3461;
        scrt1__24__car_2derror( X2 );
L3461:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3464;
        scrt1__24__car_2derror( X1 );
L3464:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cadar_v );
DEFCSTRING( t3466, "CADAR" );

TSCP  scrt1_cadar( x2285 )
        TSCP  x2285;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3466 );
        if  ( EQ( TSCPTAG( x2285 ), PAIRTAG ) )  goto L3469;
        scrt1__24__car_2derror( x2285 );
L3469:
        X2 = PAIR_CAR( x2285 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3472;
        scrt1__24__cdr_2derror( X2 );
L3472:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3475;
        scrt1__24__car_2derror( X1 );
L3475:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caddr_v );
DEFCSTRING( t3477, "CADDR" );

TSCP  scrt1_caddr( x2299 )
        TSCP  x2299;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3477 );
        if  ( EQ( TSCPTAG( x2299 ), PAIRTAG ) )  goto L3480;
        scrt1__24__cdr_2derror( x2299 );
L3480:
        X2 = PAIR_CDR( x2299 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3483;
        scrt1__24__cdr_2derror( X2 );
L3483:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3486;
        scrt1__24__car_2derror( X1 );
L3486:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cdaar_v );
DEFCSTRING( t3488, "CDAAR" );

TSCP  scrt1_cdaar( x2313 )
        TSCP  x2313;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3488 );
        if  ( EQ( TSCPTAG( x2313 ), PAIRTAG ) )  goto L3491;
        scrt1__24__car_2derror( x2313 );
L3491:
        X2 = PAIR_CAR( x2313 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3494;
        scrt1__24__car_2derror( X2 );
L3494:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3497;
        scrt1__24__cdr_2derror( X1 );
L3497:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdadr_v );
DEFCSTRING( t3499, "CDADR" );

TSCP  scrt1_cdadr( x2327 )
        TSCP  x2327;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3499 );
        if  ( EQ( TSCPTAG( x2327 ), PAIRTAG ) )  goto L3502;
        scrt1__24__cdr_2derror( x2327 );
L3502:
        X2 = PAIR_CDR( x2327 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3505;
        scrt1__24__car_2derror( X2 );
L3505:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3508;
        scrt1__24__cdr_2derror( X1 );
L3508:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cddar_v );
DEFCSTRING( t3510, "CDDAR" );

TSCP  scrt1_cddar( x2341 )
        TSCP  x2341;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3510 );
        if  ( EQ( TSCPTAG( x2341 ), PAIRTAG ) )  goto L3513;
        scrt1__24__car_2derror( x2341 );
L3513:
        X2 = PAIR_CAR( x2341 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3516;
        scrt1__24__cdr_2derror( X2 );
L3516:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3519;
        scrt1__24__cdr_2derror( X1 );
L3519:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdddr_v );
DEFCSTRING( t3521, "CDDDR" );

TSCP  scrt1_cdddr( x2355 )
        TSCP  x2355;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3521 );
        if  ( EQ( TSCPTAG( x2355 ), PAIRTAG ) )  goto L3524;
        scrt1__24__cdr_2derror( x2355 );
L3524:
        X2 = PAIR_CDR( x2355 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3527;
        scrt1__24__cdr_2derror( X2 );
L3527:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3530;
        scrt1__24__cdr_2derror( X1 );
L3530:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_caaaar_v );
DEFCSTRING( t3532, "CAAAAR" );

TSCP  scrt1_caaaar( x2369 )
        TSCP  x2369;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3532 );
        if  ( EQ( TSCPTAG( x2369 ), PAIRTAG ) )  goto L3535;
        scrt1__24__car_2derror( x2369 );
L3535:
        X3 = PAIR_CAR( x2369 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3538;
        scrt1__24__car_2derror( X3 );
L3538:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3541;
        scrt1__24__car_2derror( X2 );
L3541:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3544;
        scrt1__24__car_2derror( X1 );
L3544:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caaadr_v );
DEFCSTRING( t3546, "CAAADR" );

TSCP  scrt1_caaadr( x2387 )
        TSCP  x2387;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3546 );
        if  ( EQ( TSCPTAG( x2387 ), PAIRTAG ) )  goto L3549;
        scrt1__24__cdr_2derror( x2387 );
L3549:
        X3 = PAIR_CDR( x2387 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3552;
        scrt1__24__car_2derror( X3 );
L3552:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3555;
        scrt1__24__car_2derror( X2 );
L3555:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3558;
        scrt1__24__car_2derror( X1 );
L3558:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caadar_v );
DEFCSTRING( t3560, "CAADAR" );

TSCP  scrt1_caadar( x2405 )
        TSCP  x2405;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3560 );
        if  ( EQ( TSCPTAG( x2405 ), PAIRTAG ) )  goto L3563;
        scrt1__24__car_2derror( x2405 );
L3563:
        X3 = PAIR_CAR( x2405 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3566;
        scrt1__24__cdr_2derror( X3 );
L3566:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3569;
        scrt1__24__car_2derror( X2 );
L3569:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3572;
        scrt1__24__car_2derror( X1 );
L3572:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caaddr_v );
DEFCSTRING( t3574, "CAADDR" );

TSCP  scrt1_caaddr( x2423 )
        TSCP  x2423;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3574 );
        if  ( EQ( TSCPTAG( x2423 ), PAIRTAG ) )  goto L3577;
        scrt1__24__cdr_2derror( x2423 );
L3577:
        X3 = PAIR_CDR( x2423 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3580;
        scrt1__24__cdr_2derror( X3 );
L3580:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3583;
        scrt1__24__car_2derror( X2 );
L3583:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3586;
        scrt1__24__car_2derror( X1 );
L3586:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cadaar_v );
DEFCSTRING( t3588, "CADAAR" );

TSCP  scrt1_cadaar( x2441 )
        TSCP  x2441;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3588 );
        if  ( EQ( TSCPTAG( x2441 ), PAIRTAG ) )  goto L3591;
        scrt1__24__car_2derror( x2441 );
L3591:
        X3 = PAIR_CAR( x2441 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3594;
        scrt1__24__car_2derror( X3 );
L3594:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3597;
        scrt1__24__cdr_2derror( X2 );
L3597:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3600;
        scrt1__24__car_2derror( X1 );
L3600:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cadadr_v );
DEFCSTRING( t3602, "CADADR" );

TSCP  scrt1_cadadr( x2459 )
        TSCP  x2459;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3602 );
        if  ( EQ( TSCPTAG( x2459 ), PAIRTAG ) )  goto L3605;
        scrt1__24__cdr_2derror( x2459 );
L3605:
        X3 = PAIR_CDR( x2459 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3608;
        scrt1__24__car_2derror( X3 );
L3608:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3611;
        scrt1__24__cdr_2derror( X2 );
L3611:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3614;
        scrt1__24__car_2derror( X1 );
L3614:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_caddar_v );
DEFCSTRING( t3616, "CADDAR" );

TSCP  scrt1_caddar( x2477 )
        TSCP  x2477;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3616 );
        if  ( EQ( TSCPTAG( x2477 ), PAIRTAG ) )  goto L3619;
        scrt1__24__car_2derror( x2477 );
L3619:
        X3 = PAIR_CAR( x2477 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3622;
        scrt1__24__cdr_2derror( X3 );
L3622:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3625;
        scrt1__24__cdr_2derror( X2 );
L3625:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3628;
        scrt1__24__car_2derror( X1 );
L3628:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cadddr_v );
DEFCSTRING( t3630, "CADDDR" );

TSCP  scrt1_cadddr( x2495 )
        TSCP  x2495;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3630 );
        if  ( EQ( TSCPTAG( x2495 ), PAIRTAG ) )  goto L3633;
        scrt1__24__cdr_2derror( x2495 );
L3633:
        X3 = PAIR_CDR( x2495 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3636;
        scrt1__24__cdr_2derror( X3 );
L3636:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3639;
        scrt1__24__cdr_2derror( X2 );
L3639:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3642;
        scrt1__24__car_2derror( X1 );
L3642:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_cdaaar_v );
DEFCSTRING( t3644, "CDAAAR" );

TSCP  scrt1_cdaaar( x2513 )
        TSCP  x2513;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3644 );
        if  ( EQ( TSCPTAG( x2513 ), PAIRTAG ) )  goto L3647;
        scrt1__24__car_2derror( x2513 );
L3647:
        X3 = PAIR_CAR( x2513 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3650;
        scrt1__24__car_2derror( X3 );
L3650:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3653;
        scrt1__24__car_2derror( X2 );
L3653:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3656;
        scrt1__24__cdr_2derror( X1 );
L3656:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdaadr_v );
DEFCSTRING( t3658, "CDAADR" );

TSCP  scrt1_cdaadr( x2531 )
        TSCP  x2531;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3658 );
        if  ( EQ( TSCPTAG( x2531 ), PAIRTAG ) )  goto L3661;
        scrt1__24__cdr_2derror( x2531 );
L3661:
        X3 = PAIR_CDR( x2531 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3664;
        scrt1__24__car_2derror( X3 );
L3664:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3667;
        scrt1__24__car_2derror( X2 );
L3667:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3670;
        scrt1__24__cdr_2derror( X1 );
L3670:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdadar_v );
DEFCSTRING( t3672, "CDADAR" );

TSCP  scrt1_cdadar( x2549 )
        TSCP  x2549;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3672 );
        if  ( EQ( TSCPTAG( x2549 ), PAIRTAG ) )  goto L3675;
        scrt1__24__car_2derror( x2549 );
L3675:
        X3 = PAIR_CAR( x2549 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3678;
        scrt1__24__cdr_2derror( X3 );
L3678:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3681;
        scrt1__24__car_2derror( X2 );
L3681:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3684;
        scrt1__24__cdr_2derror( X1 );
L3684:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdaddr_v );
DEFCSTRING( t3686, "CDADDR" );

TSCP  scrt1_cdaddr( x2567 )
        TSCP  x2567;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3686 );
        if  ( EQ( TSCPTAG( x2567 ), PAIRTAG ) )  goto L3689;
        scrt1__24__cdr_2derror( x2567 );
L3689:
        X3 = PAIR_CDR( x2567 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3692;
        scrt1__24__cdr_2derror( X3 );
L3692:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3695;
        scrt1__24__car_2derror( X2 );
L3695:
        X1 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3698;
        scrt1__24__cdr_2derror( X1 );
L3698:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cddaar_v );
DEFCSTRING( t3700, "CDDAAR" );

TSCP  scrt1_cddaar( x2585 )
        TSCP  x2585;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3700 );
        if  ( EQ( TSCPTAG( x2585 ), PAIRTAG ) )  goto L3703;
        scrt1__24__car_2derror( x2585 );
L3703:
        X3 = PAIR_CAR( x2585 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3706;
        scrt1__24__car_2derror( X3 );
L3706:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3709;
        scrt1__24__cdr_2derror( X2 );
L3709:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3712;
        scrt1__24__cdr_2derror( X1 );
L3712:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cddadr_v );
DEFCSTRING( t3714, "CDDADR" );

TSCP  scrt1_cddadr( x2603 )
        TSCP  x2603;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3714 );
        if  ( EQ( TSCPTAG( x2603 ), PAIRTAG ) )  goto L3717;
        scrt1__24__cdr_2derror( x2603 );
L3717:
        X3 = PAIR_CDR( x2603 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3720;
        scrt1__24__car_2derror( X3 );
L3720:
        X2 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3723;
        scrt1__24__cdr_2derror( X2 );
L3723:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3726;
        scrt1__24__cdr_2derror( X1 );
L3726:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cdddar_v );
DEFCSTRING( t3728, "CDDDAR" );

TSCP  scrt1_cdddar( x2621 )
        TSCP  x2621;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3728 );
        if  ( EQ( TSCPTAG( x2621 ), PAIRTAG ) )  goto L3731;
        scrt1__24__car_2derror( x2621 );
L3731:
        X3 = PAIR_CAR( x2621 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3734;
        scrt1__24__cdr_2derror( X3 );
L3734:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3737;
        scrt1__24__cdr_2derror( X2 );
L3737:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3740;
        scrt1__24__cdr_2derror( X1 );
L3740:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_cddddr_v );
DEFCSTRING( t3742, "CDDDDR" );

TSCP  scrt1_cddddr( x2639 )
        TSCP  x2639;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3742 );
        if  ( EQ( TSCPTAG( x2639 ), PAIRTAG ) )  goto L3745;
        scrt1__24__cdr_2derror( x2639 );
L3745:
        X3 = PAIR_CDR( x2639 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3748;
        scrt1__24__cdr_2derror( X3 );
L3748:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3751;
        scrt1__24__cdr_2derror( X2 );
L3751:
        X1 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3754;
        scrt1__24__cdr_2derror( X1 );
L3754:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt1_set_2dcar_21_v );
DEFCSTRING( t3756, "SET-CAR!" );

TSCP  scrt1_set_2dcar_21( x2657, y2658 )
        TSCP  x2657, y2658;
{
        PUSHSTACKTRACE( t3756 );
        if  ( EQ( TSCPTAG( x2657 ), PAIRTAG ) )  goto L3759;
        scdebug_error( c2664, 
                       c2665, CONS( x2657, EMPTYLIST ) );
L3759:
        POPSTACKTRACE( SETGEN( PAIR_CAR( x2657 ), y2658 ) );
}

DEFTSCP( scrt1_set_2dcdr_21_v );
DEFCSTRING( t3761, "SET-CDR!" );

TSCP  scrt1_set_2dcdr_21( x2667, y2668 )
        TSCP  x2667, y2668;
{
        PUSHSTACKTRACE( t3761 );
        if  ( EQ( TSCPTAG( x2667 ), PAIRTAG ) )  goto L3764;
        scdebug_error( c2674, 
                       c2665, CONS( x2667, EMPTYLIST ) );
L3764:
        POPSTACKTRACE( SETGEN( PAIR_CDR( x2667 ), y2668 ) );
}

DEFTSCP( scrt1_null_3f_v );
DEFCSTRING( t3766, "NULL?" );

TSCP  scrt1_null_3f( x2676 )
        TSCP  x2676;
{
        PUSHSTACKTRACE( t3766 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( x2676 ), 
                                    _S2CUINT( EMPTYLIST ) ) ) );
}

DEFTSCP( scrt1_list_3f_v );
DEFCSTRING( t3768, "LIST?" );

TSCP  scrt1_list_3f( x2683 )
        TSCP  x2683;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3768 );
        if  ( EQ( _S2CUINT( x2683 ), _S2CUINT( EMPTYLIST ) ) )  goto L3771;
        if  ( NEQ( TSCPTAG( x2683 ), PAIRTAG ) )  goto L3773;
        X1 = PAIR_CDR( x2683 );
        X2 = x2683;
L3776:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3777;
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3779;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( X2 ) ) )  goto L3781;
        X3 = PAIR_CDR( X1 );
        X4 = X2;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3785;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3787;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L3789;
        X5 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3793;
        scrt1__24__cdr_2derror( X4 );
L3793:
        X2 = PAIR_CDR( X4 );
        X1 = X5;
        GOBACK( L3776 );
L3789:
        POPSTACKTRACE( FALSEVALUE );
L3787:
        POPSTACKTRACE( FALSEVALUE );
L3785:
        POPSTACKTRACE( TRUEVALUE );
L3781:
        POPSTACKTRACE( FALSEVALUE );
L3779:
        POPSTACKTRACE( FALSEVALUE );
L3777:
        POPSTACKTRACE( TRUEVALUE );
L3773:
        POPSTACKTRACE( FALSEVALUE );
L3771:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt1_list_v );
DEFCSTRING( t3795, "LIST" );

TSCP  scrt1_list( x2737 )
        TSCP  x2737;
{
        PUSHSTACKTRACE( t3795 );
        POPSTACKTRACE( x2737 );
}

DEFTSCP( scrt1_length_v );
DEFCSTRING( t3797, "LENGTH" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  scrt1_length( x2739 )
        TSCP  x2739;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3797 );
        X1 = _TSCP( 0 );
        X2 = x2739;
L3800:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3801;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3803;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3804;
L3803:
        X3 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L3804:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3806;
        scrt1__24__cdr_2derror( X2 );
L3806:
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3800 );
L3801:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt1_append_2dtwo_v );
DEFCSTRING( t3808, "SCRT1_APPEND-TWO" );

TSCP  scrt1_append_2dtwo( x2761, y2762 )
        TSCP  x2761, y2762;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3808 );
        if  ( EQ( _S2CUINT( x2761 ), _S2CUINT( EMPTYLIST ) ) )  goto L3810;
        if  ( EQ( TSCPTAG( x2761 ), PAIRTAG ) )  goto L3813;
        scrt1__24__car_2derror( x2761 );
L3813:
        X2 = PAIR_CAR( x2761 );
        X1 = sc_cons( X2, EMPTYLIST );
        X2 = PAIR_CDR( x2761 );
        X3 = X1;
        X4 = X2;
L3819:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3820;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3824;
        scdebug_error( c2674, 
                       c2665, CONS( X3, EMPTYLIST ) );
L3824:
        SETGEN( PAIR_CDR( X3 ), y2762 );
        POPSTACKTRACE( X1 );
L3820:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3828;
        scrt1__24__car_2derror( X4 );
L3828:
        X6 = PAIR_CAR( X4 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3831;
        scdebug_error( c2674, 
                       c2665, CONS( X3, EMPTYLIST ) );
L3831:
        SETGEN( PAIR_CDR( X3 ), X5 );
        X5 = PAIR_CDR( X3 );
        X4 = PAIR_CDR( X4 );
        X3 = X5;
        GOBACK( L3819 );
L3810:
        POPSTACKTRACE( y2762 );
}

DEFTSCP( scrt1_append_v );
DEFCSTRING( t3835, "APPEND" );
EXTERNTSCPP( scrt1_a2819, XAL1( TSCP ) );

TSCP  scrt1_a2819( x2821 )
        TSCP  x2821;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "APPEND-LIST [inside APPEND]" );
        X1 = scrt1_length( x2821 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L3840;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L3842;
        if  ( EQ( TSCPTAG( x2821 ), PAIRTAG ) )  goto L3845;
        scrt1__24__car_2derror( x2821 );
L3845:
        POPSTACKTRACE( PAIR_CAR( x2821 ) );
L3842:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L3847;
        if  ( EQ( TSCPTAG( x2821 ), PAIRTAG ) )  goto L3850;
        scrt1__24__car_2derror( x2821 );
L3850:
        X2 = PAIR_CAR( x2821 );
        X4 = PAIR_CDR( x2821 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3854;
        scrt1__24__car_2derror( X4 );
L3854:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( scrt1_append_2dtwo( X2, X3 ) );
L3847:
        if  ( EQ( TSCPTAG( x2821 ), PAIRTAG ) )  goto L3857;
        scrt1__24__car_2derror( x2821 );
L3857:
        X2 = PAIR_CAR( x2821 );
        X4 = PAIR_CDR( x2821 );
        X3 = scrt1_a2819( X4 );
        POPSTACKTRACE( scrt1_append_2dtwo( X2, X3 ) );
L3840:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  scrt1_append( x2817 )
        TSCP  x2817;
{
        PUSHSTACKTRACE( t3835 );
        POPSTACKTRACE( scrt1_a2819( x2817 ) );
}

DEFTSCP( scrt1_reverse_v );
DEFCSTRING( t3860, "REVERSE" );

TSCP  scrt1_reverse( x2861 )
        TSCP  x2861;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3860 );
        X1 = EMPTYLIST;
        X2 = x2861;
L3863:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3864;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3867;
        scrt1__24__car_2derror( X2 );
L3867:
        X4 = PAIR_CAR( X2 );
        X3 = sc_cons( X4, X1 );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L3863 );
L3864:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt1_list_2dtail_v );
DEFCSTRING( t3870, "LIST-TAIL" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );

TSCP  scrt1_list_2dtail( x2881, k2882 )
        TSCP  x2881, k2882;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3870 );
L3871:
        if  ( NEQ( TSCPTAG( k2882 ), FIXNUMTAG ) )  goto L3873;
        if  ( NEQ( _S2CUINT( k2882 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L3877;
        POPSTACKTRACE( x2881 );
L3873:
        if  ( FALSE( scrt2_zero_3f( k2882 ) ) )  goto L3877;
        POPSTACKTRACE( x2881 );
L3877:
        if  ( EQ( TSCPTAG( x2881 ), PAIRTAG ) )  goto L3881;
        scrt1__24__cdr_2derror( x2881 );
L3881:
        X1 = PAIR_CDR( x2881 );
        if  ( BITAND( BITOR( _S2CINT( k2882 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3883;
        k2882 = _TSCP( IDIFFERENCE( _S2CINT( k2882 ), 
                                    _S2CINT( _TSCP( 4 ) ) ) );
        goto L3884;
L3883:
        k2882 = scrt2__2d_2dtwo( k2882, _TSCP( 4 ) );
L3884:
        x2881 = X1;
        GOBACK( L3871 );
}

DEFTSCP( scrt1_list_2dref_v );
DEFCSTRING( t3885, "LIST-REF" );

TSCP  scrt1_list_2dref( x2903, k2904 )
        TSCP  x2903, k2904;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3885 );
        X1 = scrt1_list_2dtail( x2903, k2904 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3888;
        scrt1__24__car_2derror( X1 );
L3888:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt1_last_2dpair_v );
DEFCSTRING( t3890, "LAST-PAIR" );

TSCP  scrt1_last_2dpair( x2910 )
        TSCP  x2910;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3890 );
L3891:
        if  ( EQ( TSCPTAG( x2910 ), PAIRTAG ) )  goto L3893;
        scrt1__24__cdr_2derror( x2910 );
L3893:
        X1 = PAIR_CDR( x2910 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3896;
        x2910 = X1;
        GOBACK( L3891 );
L3896:
        POPSTACKTRACE( x2910 );
}

DEFTSCP( scrt1_memq_v );
DEFCSTRING( t3898, "MEMQ" );

TSCP  scrt1_memq( x2920, y2921 )
        TSCP  x2920, y2921;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3898 );
L3899:
        if  ( EQ( _S2CUINT( y2921 ), _S2CUINT( EMPTYLIST ) ) )  goto L3900;
        if  ( EQ( TSCPTAG( y2921 ), PAIRTAG ) )  goto L3905;
        scrt1__24__car_2derror( y2921 );
L3905:
        X1 = PAIR_CAR( y2921 );
        if  ( EQ( _S2CUINT( x2920 ), _S2CUINT( X1 ) ) )  goto L3902;
        y2921 = PAIR_CDR( y2921 );
        GOBACK( L3899 );
L3902:
        POPSTACKTRACE( y2921 );
L3900:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_memv_v );
DEFCSTRING( t3908, "MEMV" );

TSCP  scrt1_memv( x2939, y2940 )
        TSCP  x2939, y2940;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3908 );
L3909:
        if  ( EQ( _S2CUINT( y2940 ), _S2CUINT( EMPTYLIST ) ) )  goto L3910;
        if  ( EQ( TSCPTAG( y2940 ), PAIRTAG ) )  goto L3915;
        scrt1__24__car_2derror( y2940 );
L3915:
        X1 = PAIR_CAR( y2940 );
        if  ( OR( EQ( _S2CUINT( x2939 ), _S2CUINT( X1 ) ), 
                  AND( EQ( TSCPTAG( x2939 ), EXTENDEDTAG ), 
                       AND( EQ( TSCP_EXTENDEDTAG( x2939 ), 
                                DOUBLEFLOATTAG ), 
                            AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                                 AND( EQ( TSCP_EXTENDEDTAG( X1 ), 
                                          DOUBLEFLOATTAG ), 
                                      EQ( FLOAT_VALUE( x2939 ), 
                                          FLOAT_VALUE( X1 ) ) ) ) ) ) )
            )  goto L3912;
        y2940 = PAIR_CDR( y2940 );
        GOBACK( L3909 );
L3912:
        POPSTACKTRACE( y2940 );
L3910:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_member_v );
DEFCSTRING( t3918, "MEMBER" );

TSCP  scrt1_member( x2958, y2959 )
        TSCP  x2958, y2959;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3918 );
L3919:
        if  ( EQ( _S2CUINT( y2959 ), _S2CUINT( EMPTYLIST ) ) )  goto L3920;
        if  ( EQ( TSCPTAG( y2959 ), PAIRTAG ) )  goto L3925;
        scrt1__24__car_2derror( y2959 );
L3925:
        X1 = PAIR_CAR( y2959 );
        if  ( TRUE( scrt1_equal_3f( x2958, X1 ) ) )  goto L3922;
        y2959 = PAIR_CDR( y2959 );
        GOBACK( L3919 );
L3922:
        POPSTACKTRACE( y2959 );
L3920:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_assq_v );
DEFCSTRING( t3928, "ASSQ" );

TSCP  scrt1_assq( x2974, y2975 )
        TSCP  x2974, y2975;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3928 );
L3929:
        if  ( FALSE( y2975 ) )  goto L3930;
        if  ( EQ( TSCPTAG( y2975 ), PAIRTAG ) )  goto L3933;
        scrt1__24__car_2derror( y2975 );
L3933:
        X1 = PAIR_CAR( y2975 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3939;
        scrt1__24__car_2derror( X1 );
L3939:
        X2 = PAIR_CAR( X1 );
        if  ( EQ( _S2CUINT( x2974 ), _S2CUINT( X2 ) ) )  goto L3936;
        y2975 = PAIR_CDR( y2975 );
        GOBACK( L3929 );
L3936:
        POPSTACKTRACE( X1 );
L3930:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_assv_v );
DEFCSTRING( t3942, "ASSV" );

TSCP  scrt1_assv( x2994, y2995 )
        TSCP  x2994, y2995;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3942 );
L3943:
        if  ( FALSE( y2995 ) )  goto L3944;
        if  ( EQ( TSCPTAG( y2995 ), PAIRTAG ) )  goto L3947;
        scrt1__24__car_2derror( y2995 );
L3947:
        X1 = PAIR_CAR( y2995 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3953;
        scrt1__24__car_2derror( X1 );
L3953:
        X2 = PAIR_CAR( X1 );
        if  ( OR( EQ( _S2CUINT( x2994 ), _S2CUINT( X2 ) ), 
                  AND( EQ( TSCPTAG( x2994 ), EXTENDEDTAG ), 
                       AND( EQ( TSCP_EXTENDEDTAG( x2994 ), 
                                DOUBLEFLOATTAG ), 
                            AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                                 AND( EQ( TSCP_EXTENDEDTAG( X2 ), 
                                          DOUBLEFLOATTAG ), 
                                      EQ( FLOAT_VALUE( x2994 ), 
                                          FLOAT_VALUE( X2 ) ) ) ) ) ) )
            )  goto L3950;
        y2995 = PAIR_CDR( y2995 );
        GOBACK( L3943 );
L3950:
        POPSTACKTRACE( X1 );
L3944:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_assoc_v );
DEFCSTRING( t3956, "ASSOC" );

TSCP  scrt1_assoc( x3014, y3015 )
        TSCP  x3014, y3015;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3956 );
L3957:
        if  ( FALSE( y3015 ) )  goto L3958;
        if  ( EQ( TSCPTAG( y3015 ), PAIRTAG ) )  goto L3961;
        scrt1__24__car_2derror( y3015 );
L3961:
        X1 = PAIR_CAR( y3015 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3967;
        scrt1__24__car_2derror( X1 );
L3967:
        X2 = PAIR_CAR( X1 );
        if  ( TRUE( scrt1_equal_3f( x3014, X2 ) ) )  goto L3964;
        y3015 = PAIR_CDR( y3015 );
        GOBACK( L3957 );
L3964:
        POPSTACKTRACE( X1 );
L3958:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt1_remq_v );
DEFCSTRING( t3970, "REMQ" );
EXTERNTSCPP( scrt1_remq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remq_v );

TSCP  scrt1_remq( x3031, y3032 )
        TSCP  x3031, y3032;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3970 );
L3971:
        if  ( EQ( _S2CUINT( y3032 ), _S2CUINT( EMPTYLIST ) ) )  goto L3972;
        if  ( EQ( TSCPTAG( y3032 ), PAIRTAG ) )  goto L3977;
        scrt1__24__car_2derror( y3032 );
L3977:
        X1 = PAIR_CAR( y3032 );
        if  ( NEQ( _S2CUINT( x3031 ), _S2CUINT( X1 ) ) )  goto L3974;
        y3032 = PAIR_CDR( y3032 );
        GOBACK( L3971 );
L3974:
        if  ( EQ( TSCPTAG( y3032 ), PAIRTAG ) )  goto L3981;
        scrt1__24__car_2derror( y3032 );
L3981:
        X1 = PAIR_CAR( y3032 );
        X3 = PAIR_CDR( y3032 );
        X2 = scrt1_remq( x3031, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3972:
        POPSTACKTRACE( y3032 );
}

DEFTSCP( scrt1_remv_v );
DEFCSTRING( t3984, "REMV" );
EXTERNTSCPP( scrt1_remv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remv_v );

TSCP  scrt1_remv( x3058, y3059 )
        TSCP  x3058, y3059;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3984 );
L3985:
        if  ( EQ( _S2CUINT( y3059 ), _S2CUINT( EMPTYLIST ) ) )  goto L3986;
        if  ( EQ( TSCPTAG( y3059 ), PAIRTAG ) )  goto L3991;
        scrt1__24__car_2derror( y3059 );
L3991:
        X1 = PAIR_CAR( y3059 );
        if  ( NOT( OR( EQ( _S2CUINT( x3058 ), 
                           _S2CUINT( X1 ) ), 
                       AND( EQ( TSCPTAG( x3058 ), EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( x3058 ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( X1 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( X1 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( x3058 ), 
                                               FLOAT_VALUE( X1 ) ) ) ) ) ) ) )
            )  goto L3988;
        y3059 = PAIR_CDR( y3059 );
        GOBACK( L3985 );
L3988:
        if  ( EQ( TSCPTAG( y3059 ), PAIRTAG ) )  goto L3995;
        scrt1__24__car_2derror( y3059 );
L3995:
        X1 = PAIR_CAR( y3059 );
        X3 = PAIR_CDR( y3059 );
        X2 = scrt1_remv( x3058, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3986:
        POPSTACKTRACE( y3059 );
}

DEFTSCP( scrt1_remove_v );
DEFCSTRING( t3998, "REMOVE" );
EXTERNTSCPP( scrt1_remove, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remove_v );

TSCP  scrt1_remove( x3085, y3086 )
        TSCP  x3085, y3086;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3998 );
L3999:
        if  ( EQ( _S2CUINT( y3086 ), _S2CUINT( EMPTYLIST ) ) )  goto L4000;
        if  ( EQ( TSCPTAG( y3086 ), PAIRTAG ) )  goto L4005;
        scrt1__24__car_2derror( y3086 );
L4005:
        X1 = PAIR_CAR( y3086 );
        if  ( FALSE( scrt1_equal_3f( x3085, X1 ) ) )  goto L4002;
        y3086 = PAIR_CDR( y3086 );
        GOBACK( L3999 );
L4002:
        if  ( EQ( TSCPTAG( y3086 ), PAIRTAG ) )  goto L4009;
        scrt1__24__car_2derror( y3086 );
L4009:
        X1 = PAIR_CAR( y3086 );
        X3 = PAIR_CDR( y3086 );
        X2 = scrt1_remove( x3085, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L4000:
        POPSTACKTRACE( y3086 );
}

DEFTSCP( scrt1_remq_21_v );
DEFCSTRING( t4012, "REMQ!" );

TSCP  scrt1_remq_21( x3109, y3110 )
        TSCP  x3109, y3110;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4012 );
L4013:
        if  ( EQ( _S2CUINT( y3110 ), _S2CUINT( EMPTYLIST ) ) )  goto L4014;
        if  ( EQ( TSCPTAG( y3110 ), PAIRTAG ) )  goto L4019;
        scrt1__24__car_2derror( y3110 );
L4019:
        X1 = PAIR_CAR( y3110 );
        if  ( NEQ( _S2CUINT( x3109 ), _S2CUINT( X1 ) ) )  goto L4016;
        y3110 = PAIR_CDR( y3110 );
        GOBACK( L4013 );
L4016:
        X1 = y3110;
L4023:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4027;
        scrt1__24__cdr_2derror( X1 );
L4027:
        X2 = PAIR_CDR( X1 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4024;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4033;
        scrt1__24__car_2derror( X3 );
L4033:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( x3109 ) ) )  goto L4029;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4038;
        scrt1__24__cdr_2derror( X3 );
L4038:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CDR( X1 ), X2 );
        GOBACK( L4023 );
L4029:
        X1 = PAIR_CDR( X1 );
        GOBACK( L4023 );
L4024:
        POPSTACKTRACE( y3110 );
L4014:
        POPSTACKTRACE( y3110 );
}

DEFTSCP( scrt1_remv_21_v );
DEFCSTRING( t4042, "REMV!" );

TSCP  scrt1_remv_21( x3176, y3177 )
        TSCP  x3176, y3177;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4042 );
L4043:
        if  ( EQ( _S2CUINT( y3177 ), _S2CUINT( EMPTYLIST ) ) )  goto L4044;
        if  ( EQ( TSCPTAG( y3177 ), PAIRTAG ) )  goto L4049;
        scrt1__24__car_2derror( y3177 );
L4049:
        X1 = PAIR_CAR( y3177 );
        if  ( NOT( OR( EQ( _S2CUINT( x3176 ), 
                           _S2CUINT( X1 ) ), 
                       AND( EQ( TSCPTAG( x3176 ), EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( x3176 ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( X1 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( X1 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( x3176 ), 
                                               FLOAT_VALUE( X1 ) ) ) ) ) ) ) )
            )  goto L4046;
        y3177 = PAIR_CDR( y3177 );
        GOBACK( L4043 );
L4046:
        X1 = y3177;
L4053:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4057;
        scrt1__24__cdr_2derror( X1 );
L4057:
        X2 = PAIR_CDR( X1 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4054;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4063;
        scrt1__24__car_2derror( X3 );
L4063:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( OR( EQ( _S2CUINT( X2 ), 
                           _S2CUINT( x3176 ) ), 
                       AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( X2 ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( x3176 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( x3176 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( X2 ), 
                                               FLOAT_VALUE( x3176 ) ) ) ) ) ) ) )
            )  goto L4059;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4068;
        scrt1__24__cdr_2derror( X3 );
L4068:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CDR( X1 ), X2 );
        GOBACK( L4053 );
L4059:
        X1 = PAIR_CDR( X1 );
        GOBACK( L4053 );
L4054:
        POPSTACKTRACE( y3177 );
L4044:
        POPSTACKTRACE( y3177 );
}

DEFTSCP( scrt1_remove_21_v );
DEFCSTRING( t4072, "REMOVE!" );

TSCP  scrt1_remove_21( x3243, y3244 )
        TSCP  x3243, y3244;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4072 );
L4073:
        if  ( EQ( _S2CUINT( y3244 ), _S2CUINT( EMPTYLIST ) ) )  goto L4074;
        if  ( EQ( TSCPTAG( y3244 ), PAIRTAG ) )  goto L4079;
        scrt1__24__car_2derror( y3244 );
L4079:
        X1 = PAIR_CAR( y3244 );
        if  ( FALSE( scrt1_equal_3f( x3243, X1 ) ) )  goto L4076;
        y3244 = PAIR_CDR( y3244 );
        GOBACK( L4073 );
L4076:
        X1 = y3244;
L4083:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4087;
        scrt1__24__cdr_2derror( X1 );
L4087:
        X2 = PAIR_CDR( X1 );
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4084;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4093;
        scrt1__24__car_2derror( X3 );
L4093:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scrt1_equal_3f( X2, x3243 ) ) )  goto L4089;
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4098;
        scrt1__24__cdr_2derror( X3 );
L4098:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CDR( X1 ), X2 );
        GOBACK( L4083 );
L4089:
        X1 = PAIR_CDR( X1 );
        GOBACK( L4083 );
L4084:
        POPSTACKTRACE( y3244 );
L4074:
        POPSTACKTRACE( y3244 );
}

void scrt4__init();
void scrt3__init();
void scdebug__init();
void scrt2__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        scrt3__init();
        scdebug__init();
        scrt2__init();
        MAXDISPLAY( 0 );
}

void  scrt1__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt1 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3313, 
                       ADR( scrt1_not_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_not, EMPTYLIST ) );
        INITIALIZEVAR( t3317, 
                       ADR( scrt1_boolean_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt1_boolean_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3321, 
                       ADR( scrt1_eqv_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_eqv_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3323, 
                       ADR( scrt1_eq_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_eq_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3325, 
                       ADR( scrt1_equal_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_equal_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3380, 
                       ADR( scrt1_pair_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_pair_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3382, 
                       ADR( scrt1_cons_2a_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt1_cons_2a, EMPTYLIST ) );
        INITIALIZEVAR( t3398, 
                       ADR( scrt1__24__car_2derror_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt1__24__car_2derror, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3400, 
                       ADR( scrt1__24__cdr_2derror_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt1__24__cdr_2derror, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3402, 
                       ADR( scrt1_car_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_car, EMPTYLIST ) );
        INITIALIZEVAR( t3407, 
                       ADR( scrt1_cdr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdr, EMPTYLIST ) );
        INITIALIZEVAR( t3412, 
                       ADR( scrt1_caar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caar, EMPTYLIST ) );
        INITIALIZEVAR( t3420, 
                       ADR( scrt1_cadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cadr, EMPTYLIST ) );
        INITIALIZEVAR( t3428, 
                       ADR( scrt1_cdar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdar, EMPTYLIST ) );
        INITIALIZEVAR( t3436, 
                       ADR( scrt1_cddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cddr, EMPTYLIST ) );
        INITIALIZEVAR( t3444, 
                       ADR( scrt1_caaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caaar, EMPTYLIST ) );
        INITIALIZEVAR( t3455, 
                       ADR( scrt1_caadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caadr, EMPTYLIST ) );
        INITIALIZEVAR( t3466, 
                       ADR( scrt1_cadar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cadar, EMPTYLIST ) );
        INITIALIZEVAR( t3477, 
                       ADR( scrt1_caddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caddr, EMPTYLIST ) );
        INITIALIZEVAR( t3488, 
                       ADR( scrt1_cdaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdaar, EMPTYLIST ) );
        INITIALIZEVAR( t3499, 
                       ADR( scrt1_cdadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdadr, EMPTYLIST ) );
        INITIALIZEVAR( t3510, 
                       ADR( scrt1_cddar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cddar, EMPTYLIST ) );
        INITIALIZEVAR( t3521, 
                       ADR( scrt1_cdddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdddr, EMPTYLIST ) );
        INITIALIZEVAR( t3532, 
                       ADR( scrt1_caaaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caaaar, EMPTYLIST ) );
        INITIALIZEVAR( t3546, 
                       ADR( scrt1_caaadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caaadr, EMPTYLIST ) );
        INITIALIZEVAR( t3560, 
                       ADR( scrt1_caadar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caadar, EMPTYLIST ) );
        INITIALIZEVAR( t3574, 
                       ADR( scrt1_caaddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caaddr, EMPTYLIST ) );
        INITIALIZEVAR( t3588, 
                       ADR( scrt1_cadaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cadaar, EMPTYLIST ) );
        INITIALIZEVAR( t3602, 
                       ADR( scrt1_cadadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cadadr, EMPTYLIST ) );
        INITIALIZEVAR( t3616, 
                       ADR( scrt1_caddar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_caddar, EMPTYLIST ) );
        INITIALIZEVAR( t3630, 
                       ADR( scrt1_cadddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cadddr, EMPTYLIST ) );
        INITIALIZEVAR( t3644, 
                       ADR( scrt1_cdaaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdaaar, EMPTYLIST ) );
        INITIALIZEVAR( t3658, 
                       ADR( scrt1_cdaadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdaadr, EMPTYLIST ) );
        INITIALIZEVAR( t3672, 
                       ADR( scrt1_cdadar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdadar, EMPTYLIST ) );
        INITIALIZEVAR( t3686, 
                       ADR( scrt1_cdaddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdaddr, EMPTYLIST ) );
        INITIALIZEVAR( t3700, 
                       ADR( scrt1_cddaar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cddaar, EMPTYLIST ) );
        INITIALIZEVAR( t3714, 
                       ADR( scrt1_cddadr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cddadr, EMPTYLIST ) );
        INITIALIZEVAR( t3728, 
                       ADR( scrt1_cdddar_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cdddar, EMPTYLIST ) );
        INITIALIZEVAR( t3742, 
                       ADR( scrt1_cddddr_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_cddddr, EMPTYLIST ) );
        INITIALIZEVAR( t3756, 
                       ADR( scrt1_set_2dcar_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_set_2dcar_21, EMPTYLIST ) );
        INITIALIZEVAR( t3761, 
                       ADR( scrt1_set_2dcdr_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_set_2dcdr_21, EMPTYLIST ) );
        INITIALIZEVAR( t3766, 
                       ADR( scrt1_null_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_null_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3768, 
                       ADR( scrt1_list_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_list_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3795, 
                       ADR( scrt1_list_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt1_list, EMPTYLIST ) );
        INITIALIZEVAR( t3797, 
                       ADR( scrt1_length_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_length, EMPTYLIST ) );
        INITIALIZEVAR( t3808, 
                       ADR( scrt1_append_2dtwo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_append_2dtwo, EMPTYLIST ) );
        INITIALIZEVAR( t3835, 
                       ADR( scrt1_append_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt1_append, EMPTYLIST ) );
        INITIALIZEVAR( t3860, 
                       ADR( scrt1_reverse_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, scrt1_reverse, EMPTYLIST ) );
        INITIALIZEVAR( t3870, 
                       ADR( scrt1_list_2dtail_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_list_2dtail, EMPTYLIST ) );
        INITIALIZEVAR( t3885, 
                       ADR( scrt1_list_2dref_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_list_2dref, EMPTYLIST ) );
        INITIALIZEVAR( t3890, 
                       ADR( scrt1_last_2dpair_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt1_last_2dpair, EMPTYLIST ) );
        INITIALIZEVAR( t3898, 
                       ADR( scrt1_memq_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_memq, EMPTYLIST ) );
        INITIALIZEVAR( t3908, 
                       ADR( scrt1_memv_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_memv, EMPTYLIST ) );
        INITIALIZEVAR( t3918, 
                       ADR( scrt1_member_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_member, EMPTYLIST ) );
        INITIALIZEVAR( t3928, 
                       ADR( scrt1_assq_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_assq, EMPTYLIST ) );
        INITIALIZEVAR( t3942, 
                       ADR( scrt1_assv_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_assv, EMPTYLIST ) );
        INITIALIZEVAR( t3956, 
                       ADR( scrt1_assoc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_assoc, EMPTYLIST ) );
        INITIALIZEVAR( t3970, 
                       ADR( scrt1_remq_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_remq, EMPTYLIST ) );
        INITIALIZEVAR( t3984, 
                       ADR( scrt1_remv_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_remv, EMPTYLIST ) );
        INITIALIZEVAR( t3998, 
                       ADR( scrt1_remove_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_remove, EMPTYLIST ) );
        INITIALIZEVAR( t4012, 
                       ADR( scrt1_remq_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_remq_21, EMPTYLIST ) );
        INITIALIZEVAR( t4042, 
                       ADR( scrt1_remv_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt1_remv_21, EMPTYLIST ) );
        INITIALIZEVAR( t4072, 
                       ADR( scrt1_remove_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt1_remove_21, EMPTYLIST ) );
        return;
}
