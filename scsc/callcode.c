
/* SCHEME->C */

#include <objects.h>

void callcode__init();
DEFSTATICTSCP( lambda_2dbody_2dgenc_v );
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( reserve_2ddisplay_v );
DEFSTATICTSCP( update_2dcondition_2dinfo_v );
DEFSTATICTSCP( report_2dwarning_v );
DEFSTATICTSCP( list_2dhead_v );
DEFCSTRING( t3308, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c3134 );
DEFSTATICTSCP( c3133 );
DEFSTATICTSCP( c3095 );
DEFSTATICTSCP( c3094 );
DEFSTATICTSCP( c3093 );
DEFSTATICTSCP( c3076 );
DEFSTATICTSCP( c3070 );
DEFSTATICTSCP( t3309 );
DEFSTATICTSCP( c3067 );
DEFSTATICTSCP( c3012 );
DEFSTATICTSCP( c3009 );
DEFSTATICTSCP( c2997 );
DEFSTATICTSCP( t3310 );
DEFSTATICTSCP( c2996 );
DEFSTATICTSCP( t3311 );
DEFSTATICTSCP( t3312 );
DEFSTATICTSCP( c2995 );
DEFSTATICTSCP( t3313 );
DEFSTATICTSCP( t3314 );
DEFSTATICTSCP( c2994 );
DEFSTATICTSCP( t3315 );
DEFSTATICTSCP( c2993 );
DEFSTATICTSCP( t3316 );
DEFSTATICTSCP( t3317 );
DEFSTATICTSCP( c2992 );
DEFSTATICTSCP( c2991 );
DEFSTATICTSCP( c2990 );
DEFSTATICTSCP( t3318 );
DEFSTATICTSCP( t3319 );
DEFCSTRING( t3320, "C procedure does not return a value:" );
DEFSTATICTSCP( c2989 );
DEFSTATICTSCP( c2986 );
DEFSTATICTSCP( t3321 );
DEFSTATICTSCP( c2985 );
DEFSTATICTSCP( c2975 );
DEFSTATICTSCP( t3322 );
DEFSTATICTSCP( t3323 );
DEFSTATICTSCP( t3324 );
DEFSTATICTSCP( c2974 );
DEFSTATICTSCP( t3325 );
DEFSTATICTSCP( t3326 );
DEFSTATICTSCP( t3327 );
DEFSTATICTSCP( c2945 );
DEFSTATICTSCP( c2932 );
DEFSTATICTSCP( c2919 );
DEFSTATICTSCP( c2914 );
DEFSTATICTSCP( c2909 );
DEFSTATICTSCP( c2904 );
DEFSTATICTSCP( c2899 );
DEFSTATICTSCP( c2895 );
DEFSTATICTSCP( c2891 );
DEFSTATICTSCP( t3328 );
DEFSTATICTSCP( t3329 );
DEFSTATICTSCP( c2890 );
DEFSTATICTSCP( c2886 );
DEFSTATICTSCP( c2882 );
DEFSTATICTSCP( c2878 );
DEFSTATICTSCP( c2874 );
DEFSTATICTSCP( c2870 );
DEFSTATICTSCP( c2866 );
DEFCSTRING( t3330, "Incorrect number of arguments for LAP construct" );
DEFSTATICTSCP( c2703 );
DEFSTATICTSCP( c2595 );
DEFCSTRING( t3331, "Incorrect number of arguments for" );
DEFSTATICTSCP( c2531 );
DEFSTATICTSCP( c2529 );
DEFSTATICTSCP( c2490 );
DEFCSTRING( t3332, "EMPTYLIST" );
DEFSTATICTSCP( c2484 );
DEFSTATICTSCP( c2478 );
DEFSTATICTSCP( c2477 );
DEFSTATICTSCP( c2463 );
DEFSTATICTSCP( c2403 );
DEFCSTRING( t3333, "DISPLAY" );
DEFSTATICTSCP( c2394 );
DEFSTATICTSCP( c2388 );
DEFSTATICTSCP( c2383 );
DEFCSTRING( t3334, "Incorrect number of arguments for lambda" );
DEFSTATICTSCP( c2378 );
DEFSTATICTSCP( c2366 );
DEFSTATICTSCP( c2361 );
DEFSTATICTSCP( c2275 );
DEFSTATICTSCP( c2205 );
DEFSTATICTSCP( c2184 );
DEFSTATICTSCP( c2171 );
DEFSTATICTSCP( c2164 );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2151 );
DEFSTATICTSCP( c2134 );
DEFSTATICTSCP( c2118 );

static void  init_constants()
{
        TSCP  X1;

        lambda_2dbody_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-BODY-\
GENC" ) );
        CONSTANTEXP( ADR( lambda_2dbody_2dgenc_v ) );
        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        reserve_2ddisplay_v = STRINGTOSYMBOL( CSTRING_TSCP( "RESERVE-DISPLAY\
" ) );
        CONSTANTEXP( ADR( reserve_2ddisplay_v ) );
        update_2dcondition_2dinfo_v = STRINGTOSYMBOL( CSTRING_TSCP( "UPDATE-\
CONDITION-INFO" ) );
        CONSTANTEXP( ADR( update_2dcondition_2dinfo_v ) );
        report_2dwarning_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-WARNING" ) );
        CONSTANTEXP( ADR( report_2dwarning_v ) );
        list_2dhead_v = STRINGTOSYMBOL( CSTRING_TSCP( "LIST-HEAD" ) );
        CONSTANTEXP( ADR( list_2dhead_v ) );
        c3134 = CSTRING_TSCP( t3308 );
        CONSTANTEXP( ADR( c3134 ) );
        c3133 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c3133 ) );
        c3095 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE_CODE" ) );
        CONSTANTEXP( ADR( c3095 ) );
        c3094 = STRINGTOSYMBOL( CSTRING_TSCP( "VIA" ) );
        CONSTANTEXP( ADR( c3094 ) );
        c3093 = STRINGTOSYMBOL( CSTRING_TSCP( "UNKNOWNCALL" ) );
        CONSTANTEXP( ADR( c3093 ) );
        c3076 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE_CLOSURE" ) );
        CONSTANTEXP( ADR( c3076 ) );
        c3070 = EMPTYLIST;
        t3309 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        c3070 = CONS( t3309, c3070 );
        CONSTANTEXP( ADR( c3070 ) );
        c3067 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c3067 ) );
        c3012 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c3012 ) );
        c3009 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c3009 ) );
        c2997 = EMPTYLIST;
        c2997 = CONS( t3309, c2997 );
        t3310 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR_TSCP" ) );
        c2997 = CONS( t3310, c2997 );
        CONSTANTEXP( ADR( c2997 ) );
        c2996 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3309, X1 );
        t3311 = STRINGTOSYMBOL( CSTRING_TSCP( "_S2CINT" ) );
        X1 = CONS( t3311, X1 );
        c2996 = CONS( X1, c2996 );
        t3312 = STRINGTOSYMBOL( CSTRING_TSCP( "S2CINT_TSCP" ) );
        c2996 = CONS( t3312, c2996 );
        CONSTANTEXP( ADR( c2996 ) );
        c2995 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3309, X1 );
        t3313 = STRINGTOSYMBOL( CSTRING_TSCP( "_S2CUINT" ) );
        X1 = CONS( t3313, X1 );
        c2995 = CONS( X1, c2995 );
        t3314 = STRINGTOSYMBOL( CSTRING_TSCP( "S2CUINT_TSCP" ) );
        c2995 = CONS( t3314, c2995 );
        CONSTANTEXP( ADR( c2995 ) );
        c2994 = EMPTYLIST;
        c2994 = CONS( t3309, c2994 );
        t3315 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER_TSCP" ) );
        c2994 = CONS( t3315, c2994 );
        CONSTANTEXP( ADR( c2994 ) );
        c2993 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t3309, X1 );
        t3316 = STRINGTOSYMBOL( CSTRING_TSCP( "CDOUBLE" ) );
        X1 = CONS( t3316, X1 );
        c2993 = CONS( X1, c2993 );
        t3317 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE_TSCP" ) );
        c2993 = CONS( t3317, c2993 );
        CONSTANTEXP( ADR( c2993 ) );
        c2992 = EMPTYLIST;
        c2992 = CONS( t3309, c2992 );
        c2992 = CONS( t3317, c2992 );
        CONSTANTEXP( ADR( c2992 ) );
        c2991 = STRINGTOSYMBOL( CSTRING_TSCP( "FALSEVALUE" ) );
        CONSTANTEXP( ADR( c2991 ) );
        c2990 = EMPTYLIST;
        c2990 = CONS( t3309, c2990 );
        t3318 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        c2990 = CONS( t3318, c2990 );
        t3319 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        c2990 = CONS( t3319, c2990 );
        CONSTANTEXP( ADR( c2990 ) );
        c2989 = CSTRING_TSCP( t3320 );
        CONSTANTEXP( ADR( c2989 ) );
        c2986 = EMPTYLIST;
        c2986 = CONS( t3309, c2986 );
        t3321 = STRINGTOSYMBOL( CSTRING_TSCP( "_TSCP" ) );
        c2986 = CONS( t3321, c2986 );
        CONSTANTEXP( ADR( c2986 ) );
        c2985 = STRINGTOSYMBOL( CSTRING_TSCP( "VOID" ) );
        CONSTANTEXP( ADR( c2985 ) );
        c2975 = EMPTYLIST;
        t3322 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        c2975 = CONS( t3322, c2975 );
        t3323 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        c2975 = CONS( t3323, c2975 );
        t3324 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        c2975 = CONS( t3324, c2975 );
        CONSTANTEXP( ADR( c2975 ) );
        c2974 = EMPTYLIST;
        t3325 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        c2974 = CONS( t3325, c2974 );
        t3326 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        c2974 = CONS( t3326, c2974 );
        t3327 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        c2974 = CONS( t3327, c2974 );
        CONSTANTEXP( ADR( c2974 ) );
        c2945 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_CHAR" ) );
        CONSTANTEXP( ADR( c2945 ) );
        c2932 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_S2CINT" ) );
        CONSTANTEXP( ADR( c2932 ) );
        c2919 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_S2CUINT" ) );
        CONSTANTEXP( ADR( c2919 ) );
        c2914 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_POINTER" ) );
        CONSTANTEXP( ADR( c2914 ) );
        c2909 = STRINGTOSYMBOL( CSTRING_TSCP( "CFLOAT" ) );
        CONSTANTEXP( ADR( c2909 ) );
        c2904 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP_DOUBLE" ) );
        CONSTANTEXP( ADR( c2904 ) );
        c2899 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        CONSTANTEXP( ADR( c2899 ) );
        c2895 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        CONSTANTEXP( ADR( c2895 ) );
        c2891 = EMPTYLIST;
        t3328 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        c2891 = CONS( t3328, c2891 );
        t3329 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        c2891 = CONS( t3329, c2891 );
        CONSTANTEXP( ADR( c2891 ) );
        c2890 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        CONSTANTEXP( ADR( c2890 ) );
        c2886 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        CONSTANTEXP( ADR( c2886 ) );
        c2882 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        CONSTANTEXP( ADR( c2882 ) );
        c2878 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        CONSTANTEXP( ADR( c2878 ) );
        c2874 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        CONSTANTEXP( ADR( c2874 ) );
        c2870 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        CONSTANTEXP( ADR( c2870 ) );
        c2866 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        CONSTANTEXP( ADR( c2866 ) );
        c2703 = CSTRING_TSCP( t3330 );
        CONSTANTEXP( ADR( c2703 ) );
        c2595 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2595 ) );
        c2531 = CSTRING_TSCP( t3331 );
        CONSTANTEXP( ADR( c2531 ) );
        c2529 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTO" ) );
        CONSTANTEXP( ADR( c2529 ) );
        c2490 = STRINGTOSYMBOL( CSTRING_TSCP( "EMPTYLIST" ) );
        CONSTANTEXP( ADR( c2490 ) );
        c2484 = CSTRING_TSCP( t3332 );
        CONSTANTEXP( ADR( c2484 ) );
        c2478 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2478 ) );
        c2477 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2477 ) );
        c2463 = STRINGTOSYMBOL( CSTRING_TSCP( "TOS" ) );
        CONSTANTEXP( ADR( c2463 ) );
        c2403 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2403 ) );
        c2394 = CSTRING_TSCP( t3333 );
        CONSTANTEXP( ADR( c2394 ) );
        c2388 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2388 ) );
        c2383 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2383 ) );
        c2378 = CSTRING_TSCP( t3334 );
        CONSTANTEXP( ADR( c2378 ) );
        c2366 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2366 ) );
        c2361 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED-PROCEDURE" ) );
        CONSTANTEXP( ADR( c2361 ) );
        c2275 = STRINGTOSYMBOL( CSTRING_TSCP( "EXITS" ) );
        CONSTANTEXP( ADR( c2275 ) );
        c2205 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2205 ) );
        c2184 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2184 ) );
        c2171 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2171 ) );
        c2164 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE" ) );
        CONSTANTEXP( ADR( c2164 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAIL" ) );
        CONSTANTEXP( ADR( c2152 ) );
        c2151 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c2151 ) );
        c2134 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2134 ) );
        c2118 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2118 ) );
}

DEFTSCP( callcode__24call_2dgenc_v );
DEFCSTRING( t3335, "$CALL-GENC" );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( callcode_inline_2dcall, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_inline_2dcall_v );
EXTERNTSCPP( callcode__24lap_2dgenc, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode__24lap_2dgenc_v );
EXTERNTSCPP( callcode_la_2dexits_2dlb_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( callcode_la_2dexits_2dlb_3f_v );
EXTERNTSCPP( callcode_tail_2dcall, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_tail_2dcall_v );
EXTERNTSCPP( callcode_known_2dc_2dcall, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_known_2dc_2dcall_v );
EXTERNTSCPP( callcode_known_2dcall, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_known_2dcall_v );
EXTERNTSCPP( callcode_unknown_2dcall, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_unknown_2dcall_v );

TSCP  callcode__24call_2dgenc( l2092, e2093, b2094 )
        TSCP  l2092, e2093, b2094;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3335 );
        if  ( NEQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3337;
        X6 = PAIR_CAR( e2093 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2205 ) ) );
        goto L3338;
L3337:
        X5 = FALSEVALUE;
L3338:
        if  ( FALSE( X5 ) )  goto L3341;
        X4 = scrt1_caddr( e2093 );
        goto L3342;
L3341:
        X4 = X5;
L3342:
        if  ( NEQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3344;
        X6 = PAIR_CAR( e2093 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2205 ) ) );
        goto L3345;
L3344:
        X5 = FALSEVALUE;
L3345:
        if  ( FALSE( X5 ) )  goto L3348;
        if  ( EQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3351;
        scrt1__24__cdr_2derror( e2093 );
L3351:
        X6 = PAIR_CDR( e2093 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3354;
        scrt1__24__car_2derror( X6 );
L3354:
        X1 = PAIR_CAR( X6 );
        goto L3349;
L3348:
        X1 = X5;
L3349:
        if  ( NEQ( TSCPTAG( e2093 ), PAIRTAG ) )  goto L3357;
        X6 = PAIR_CAR( e2093 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2205 ) ) );
        goto L3358;
L3357:
        X5 = FALSEVALUE;
L3358:
        if  ( FALSE( X5 ) )  goto L3361;
        X3 = scrt1_cdddr( e2093 );
        goto L3362;
L3361:
        X3 = X5;
L3362:
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L3364;
        X2 = plist_get( X4, c2184 );
        goto L3365;
L3364:
        X2 = FALSEVALUE;
L3365:
        X5 = BOOLEAN( EQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( FALSE( X5 ) )  goto L3376;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3374;
        scrt1__24__car_2derror( X4 );
L3374:
        X6 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2118 ) ) )  goto L3376;
        POPSTACKTRACE( callcode_inline_2dcall( l2092, 
                                               X4, X3, b2094 ) );
L3376:
        X5 = BOOLEAN( EQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( FALSE( X5 ) )  goto L3386;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3384;
        scrt1__24__car_2derror( X4 );
L3384:
        X6 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2134 ) ) )  goto L3386;
        POPSTACKTRACE( callcode__24lap_2dgenc( l2092, 
                                               X4, X3, b2094 ) );
L3386:
        if  ( FALSE( X2 ) )  goto L3400;
        if  ( FALSE( X1 ) )  goto L3400;
        X5 = plist_get( X2, c2151 );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( c2152 ) ) )  goto L3396;
        if  ( FALSE( callcode_la_2dexits_2dlb_3f( X1, X2 ) ) )  goto L3400;
L3396:
        POPSTACKTRACE( callcode_tail_2dcall( l2092, 
                                             X4, X3, X2, b2094 ) );
L3400:
        if  ( FALSE( X2 ) )  goto L3406;
        X5 = plist_get( X2, c2151 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2164 ) ) )  goto L3406;
        X5 = plist_get( X2, c2118 );
        POPSTACKTRACE( callcode_inline_2dcall( l2092, 
                                               X5, X3, b2094 ) );
L3406:
        if  ( FALSE( X2 ) )  goto L3412;
        if  ( FALSE( plist_get( X4, c2171 ) ) )  goto L3412;
        POPSTACKTRACE( callcode_known_2dc_2dcall( l2092, 
                                                  X4, 
                                                  X3, X2, b2094 ) );
L3412:
        if  ( FALSE( X2 ) )  goto L3413;
        POPSTACKTRACE( callcode_known_2dcall( l2092, 
                                              X4, 
                                              X3, X2, b2094 ) );
L3413:
        POPSTACKTRACE( callcode_unknown_2dcall( l2092, 
                                                X4, X3, b2094 ) );
}

DEFTSCP( callcode_la_2dexits_2dlb_3f_v );
DEFCSTRING( t3415, "LA-EXITS-LB?" );

TSCP  callcode_la_2dexits_2dlb_3f( i2260, i2261 )
        TSCP  i2260, i2261;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3415 );
L3416:
        if  ( FALSE( i2260 ) )  goto L3417;
        if  ( EQ( _S2CUINT( i2260 ), _S2CUINT( i2261 ) ) )  goto L3419;
        X1 = plist_get( i2260, c2275 );
        i2260 = X1;
        GOBACK( L3416 );
L3419:
        POPSTACKTRACE( TRUEVALUE );
L3417:
        POPSTACKTRACE( i2260 );
}

DEFTSCP( callcode_inline_2dcall_v );
DEFCSTRING( t3421, "INLINE-CALL" );
EXTERNTSCPP( gencode_optional_2dargs, XAL1( TSCP ) );
EXTERNTSCP( gencode_optional_2dargs_v );
EXTERNTSCPP( lap_save_2dlap_2dtemps, XAL0(  ) );
EXTERNTSCP( lap_save_2dlap_2dtemps_v );
EXTERNTSCP( gencode_free_2ddisplay_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );

TSCP  callcode_b2296( v2380 )
        TSCP  v2380;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "BIND [inside INLINE-CALL]" );
        X1 = sc_cons( v2380, PAIR_CAR( DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        if  ( FALSE( plist_get( v2380, c2383 ) ) )  goto L3443;
        if  ( TRUE( scrt1_memq( v2380, 
                                PAIR_CAR( DISPLAY( 0 ) ) ) ) )  goto L3446;
        X5 = sc_cons( v2380, EMPTYLIST );
        X4 = X5;
        X3 = SYMBOL_VALUE( reserve_2ddisplay_v );
        X3 = UNKNOWNCALL( X3, 2 );
        VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                     PAIR_CAR( DISPLAY( 0 ) ), 
                                     PROCEDURE_CLOSURE( X3 ) );
        X3 = sc_cons( v2380, PAIR_CAR( DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X3 );
L3446:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2394, 
                            CONS( plist_get( v2380, c2383 ), 
                                  X3 ) );
        goto L3451;
L3443:
        if  ( FALSE( scrt1_memq( v2380, 
                                 PAIR_CAR( DISPLAY( 0 ) ) ) )
            )  goto L3450;
        X2 = v2380;
        goto L3451;
L3450:
        X3 = sc_cons( v2380, PAIR_CAR( DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X3 );
        X3 = lap_use_2dlap_2dtemp(  );
        plist_put( v2380, c2388, X3 );
        X2 = v2380;
L3451:
        X1 = sc_cons( X2, PAIR_CAR( DISPLAY( 2 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X1 );
        X1 = PAIR_CAR( DISPLAY( 2 ) );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3454;
        scrt1__24__car_2derror( X1 );
L3454:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );
EXTERNTSCPP( gencode_exp_2dgenc, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( gencode_exp_2dgenc_v );
EXTERNTSCPP( callcode_nal_2dargs_9446856b, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_nal_2dargs_9446856b_v );
EXTERNTSCPP( lap_restore_2dlap_2dtemps, XAL1( TSCP ) );
EXTERNTSCP( lap_restore_2dlap_2dtemps_v );

TSCP  callcode_inline_2dcall( l2277, e2278, a2279, b2280 )
        TSCP  l2277, e2278, a2279, b2280;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3421 );
        DISPLAY( 0 ) = b2280;
        a2279 = CONS( a2279, EMPTYLIST );
        DISPLAY( 0 ) = CONS( DISPLAY( 0 ), EMPTYLIST );
        if  ( NEQ( TSCPTAG( e2278 ), PAIRTAG ) )  goto L3423;
        X3 = PAIR_CAR( e2278 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2118 ) ) );
        goto L3424;
L3423:
        X2 = FALSEVALUE;
L3424:
        if  ( FALSE( X2 ) )  goto L3427;
        if  ( EQ( TSCPTAG( e2278 ), PAIRTAG ) )  goto L3430;
        scrt1__24__cdr_2derror( e2278 );
L3430:
        X3 = PAIR_CDR( e2278 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3433;
        scrt1__24__car_2derror( X3 );
L3433:
        X1 = PAIR_CAR( X3 );
        goto L3428;
L3427:
        X1 = X2;
L3428:
        X2 = plist_get( X1, c2403 );
        X3 = gencode_optional_2dargs( X1 );
        X4 = lap_save_2dlap_2dtemps(  );
        DISPLAY( 1 ) = EMPTYLIST;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 2 ) = EMPTYLIST;
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        X5 = gencode_free_2ddisplay_v;
        if  ( FALSE( X3 ) )  goto L3457;
        X7 = scrt1_length( X2 );
        X8 = scrt1_length( PAIR_CAR( a2279 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L3460;
        X6 = BOOLEAN( LT( _S2CINT( X8 ), _S2CINT( X7 ) ) );
        goto L3458;
L3460:
        X6 = scrt2__3c_2dtwo( X8, X7 );
        goto L3458;
L3457:
        X6 = X3;
L3458:
        if  ( TRUE( X6 ) )  goto L3466;
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3472;
        X7 = scrt1_length( PAIR_CAR( a2279 ) );
        X8 = scrt1_length( X2 );
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( X8 ) ) )  goto L3472;
L3466:
        X7 = SYMBOL_VALUE( report_2derror_v );
        X7 = UNKNOWNCALL( X7, 1 );
        VIA( PROCEDURE_CODE( X7 ) )( c2378, 
                                     PROCEDURE_CLOSURE( X7 ) );
        goto L3473;
L3472:
        X7 = X2;
L3476:
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3477;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3481;
        scrt1__24__car_2derror( X7 );
L3481:
        X8 = PAIR_CAR( X7 );
        X9 = plist_get( X8, c2184 );
        if  ( FALSE( X9 ) )  goto L3493;
        X11 = plist_get( X8, c2184 );
        X10 = plist_get( X11, c2151 );
        if  ( EQ( _S2CUINT( X10 ), _S2CUINT( c2361 ) ) )  goto L3493;
        X11 = PAIR_CAR( a2279 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3491;
        scrt1__24__car_2derror( X11 );
L3491:
        X10 = PAIR_CAR( X11 );
        gencode_exp_2dgenc( c2366, 
                            X10, PAIR_CAR( DISPLAY( 0 ) ) );
        goto L3494;
L3493:
        X10 = callcode_b2296( X8 );
        X12 = PAIR_CAR( a2279 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3496;
        scrt1__24__car_2derror( X12 );
L3496:
        X11 = PAIR_CAR( X12 );
        gencode_exp_2dgenc( X10, 
                            X11, PAIR_CAR( DISPLAY( 0 ) ) );
L3494:
        X10 = PAIR_CAR( a2279 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3499;
        scrt1__24__cdr_2derror( X10 );
L3499:
        X9 = PAIR_CDR( X10 );
        SETGEN( PAIR_CAR( a2279 ), X9 );
        X7 = PAIR_CDR( X7 );
        GOBACK( L3476 );
L3477:
        if  ( FALSE( X3 ) )  goto L3502;
        X7 = callcode_b2296( X3 );
        callcode_nal_2dargs_9446856b( X7, 
                                      PAIR_CAR( a2279 ), 
                                      PAIR_CAR( DISPLAY( 0 ) ) );
L3502:
        X7 = SYMBOL_VALUE( lambda_2dbody_2dgenc_v );
        X7 = UNKNOWNCALL( X7, 5 );
        VIA( PROCEDURE_CODE( X7 ) )( l2277, 
                                     e2278, 
                                     PAIR_CAR( DISPLAY( 1 ) ), 
                                     PAIR_CAR( DISPLAY( 2 ) ), 
                                     PAIR_CAR( DISPLAY( 0 ) ), 
                                     PROCEDURE_CLOSURE( X7 ) );
L3473:
        gencode_free_2ddisplay_v = X5;
        SDVAL = lap_restore_2dlap_2dtemps( X4 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( callcode_nal_2dargs_9446856b_v );
DEFCSTRING( t3504, "LISTIFY-OPTIONAL-ARGS" );
EXTERNTSCPP( lap_emit_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dlap_v );
EXTERNTSCPP( expform_vname, XAL1( TSCP ) );
EXTERNTSCP( expform_vname_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  callcode_nal_2dargs_9446856b( v2436, a2437, b2438 )
        TSCP  v2436, a2437, b2438;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3504 );
        if  ( NEQ( _S2CUINT( a2437 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3506;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( c2490, X2 );
        X1 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( v2436 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3506:
        if  ( EQ( TSCPTAG( a2437 ), PAIRTAG ) )  goto L3511;
        scrt1__24__cdr_2derror( a2437 );
L3511:
        X1 = PAIR_CDR( a2437 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3508;
        X1 = PAIR_CAR( a2437 );
        gencode_exp_2dgenc( c2463, X1, b2438 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( c2490, X3 );
        X2 = CONS( scrt1_cons_2a( c2478, CONS( c2463, X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( v2436 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3508:
        X1 = lap_use_2dlap_2dtemp(  );
        X2 = scrt1_reverse( a2437 );
        X3 = X2;
        X4 = c2484;
L3518:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3520;
        scrt1__24__car_2derror( X3 );
L3520:
        X5 = PAIR_CAR( X3 );
        gencode_exp_2dgenc( c2463, X5, b2438 );
        X5 = PAIR_CDR( X3 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3522;
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( X4, X7 );
        X6 = CONS( scrt1_cons_2a( c2478, CONS( c2463, X7 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( v2436 ), X6 ) );
        lap_emit_2dlap( X5 );
        goto L3523;
L3522:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( X4, X7 );
        X6 = CONS( scrt1_cons_2a( c2478, CONS( c2463, X7 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( X1 ), X6 ) );
        lap_emit_2dlap( X5 );
        X5 = PAIR_CDR( X3 );
        X4 = expform_vname( X1 );
        X3 = X5;
        GOBACK( L3518 );
L3523:
        POPSTACKTRACE( lap_drop_2dlap_2dtemp( X1 ) );
}

DEFTSCP( callcode_tail_2dcall_v );
DEFCSTRING( t3527, "TAIL-CALL" );
EXTERNTSCPP( callcode_tail_2dcall_2dbind, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( callcode_tail_2dcall_2dbind_v );
EXTERNTSCPP( gencode_code_2dlabel, XAL1( TSCP ) );
EXTERNTSCP( gencode_code_2dlabel_v );

TSCP  callcode_tail_2dcall( l2492, 
                            f2493, a2494, i2495, b2496 )
        TSCP  l2492, f2493, a2494, i2495, b2496;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3527 );
        X1 = gencode_optional_2dargs( i2495 );
        X2 = plist_get( i2495, c2403 );
        if  ( FALSE( X1 ) )  goto L3530;
        X4 = scrt1_length( X2 );
        X5 = scrt1_length( a2494 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3533;
        X3 = BOOLEAN( LT( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L3531;
L3533:
        X3 = scrt2__3c_2dtwo( X5, X4 );
        goto L3531;
L3530:
        X3 = X1;
L3531:
        if  ( TRUE( X3 ) )  goto L3539;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3545;
        X4 = scrt1_length( a2494 );
        X5 = scrt1_length( X2 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( X5 ) ) )  goto L3545;
L3539:
        X3 = SYMBOL_VALUE( report_2derror_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2531, 
                                                    f2493, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3545:
        X3 = lap_save_2dlap_2dtemps(  );
        callcode_tail_2dcall_2dbind( X2, X1, a2494, b2496 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2529, 
                            CONS( gencode_code_2dlabel( i2495 ), 
                                  X5 ) );
        lap_emit_2dlap( X4 );
        X4 = SYMBOL_VALUE( update_2dcondition_2dinfo_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( i2495, 
                                     PROCEDURE_CLOSURE( X4 ) );
        POPSTACKTRACE( lap_restore_2dlap_2dtemps( X3 ) );
}

DEFTSCP( callcode_tail_2dcall_2dbind_v );
DEFCSTRING( t3547, "TAIL-CALL-BIND" );
EXTERNTSCPP( gencode_lookup, XAL2( TSCP, TSCP ) );
EXTERNTSCP( gencode_lookup_v );
EXTERNTSCPP( callcode_load_2dargl, XAL2( TSCP, TSCP ) );
EXTERNTSCP( callcode_load_2dargl_v );

TSCP  callcode_tail_2dcall_2dbind( r2535, o2536, a2537, b2538 )
        TSCP  r2535, o2536, a2537, b2538;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3547 );
        if  ( NEQ( _S2CUINT( r2535 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3549;
        X1 = BOOLEAN( EQ( _S2CUINT( o2536 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        goto L3550;
L3549:
        X1 = FALSEVALUE;
L3550:
        if  ( TRUE( X1 ) )  goto L3552;
        if  ( NEQ( _S2CUINT( r2535 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3554;
        X2 = gencode_lookup( o2536, b2538 );
        POPSTACKTRACE( callcode_nal_2dargs_9446856b( X2, 
                                                     a2537, b2538 ) );
L3554:
        if  ( EQ( TSCPTAG( r2535 ), PAIRTAG ) )  goto L3557;
        scrt1__24__cdr_2derror( r2535 );
L3557:
        X3 = PAIR_CDR( r2535 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( FALSE( X2 ) )  goto L3580;
        if  ( NEQ( _S2CUINT( o2536 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3580;
        X3 = PAIR_CAR( r2535 );
        if  ( FALSE( plist_get( X3, c2595 ) ) )  goto L3567;
        if  ( EQ( TSCPTAG( a2537 ), PAIRTAG ) )  goto L3571;
        scrt1__24__car_2derror( a2537 );
L3571:
        X4 = PAIR_CAR( a2537 );
        gencode_exp_2dgenc( c2463, X4, b2538 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2463, X5 );
        X6 = plist_get( X3, c2383 );
        if  ( FALSE( X6 ) )  goto L3574;
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( c2394, CONS( X6, X8 ) );
        goto L3575;
L3574:
        X7 = expform_vname( X3 );
L3575:
        X4 = scrt1_cons_2a( c2477, CONS( X7, X5 ) );
        POPSTACKTRACE( lap_emit_2dlap( X4 ) );
L3567:
        X5 = PAIR_CAR( r2535 );
        X4 = gencode_lookup( X5, b2538 );
        if  ( EQ( TSCPTAG( a2537 ), PAIRTAG ) )  goto L3578;
        scrt1__24__car_2derror( a2537 );
L3578:
        X5 = PAIR_CAR( a2537 );
        POPSTACKTRACE( gencode_exp_2dgenc( X4, X5, b2538 ) );
L3552:
        POPSTACKTRACE( X1 );
L3580:
        X1 = PAIR_CAR( r2535 );
        if  ( EQ( TSCPTAG( a2537 ), PAIRTAG ) )  goto L3583;
        scrt1__24__car_2derror( a2537 );
L3583:
        X3 = PAIR_CAR( a2537 );
        X4 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( o2536 ) ) );
        if  ( TRUE( X4 ) )  goto L3590;
        X5 = PAIR_CDR( r2535 );
        if  ( TRUE( scrt1_memq( X3, X5 ) ) )  goto L3590;
        X7 = sc_cons( X3, EMPTYLIST );
        X6 = X7;
        X5 = callcode_load_2dargl( X6, b2538 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3596;
        scrt1__24__car_2derror( X5 );
L3596:
        X2 = PAIR_CAR( X5 );
        goto L3598;
L3590:
        X4 = lap_use_2dlap_2dtemp(  );
        gencode_exp_2dgenc( X4, X3, b2538 );
        X2 = X4;
L3598:
        X3 = PAIR_CDR( r2535 );
        X4 = PAIR_CDR( a2537 );
        callcode_tail_2dcall_2dbind( X3, o2536, X4, b2538 );
        X3 = plist_get( X1, c2383 );
        if  ( FALSE( plist_get( X1, c2595 ) ) )  goto L3604;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( X2, X5 );
        if  ( FALSE( X3 ) )  goto L3606;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2394, CONS( X3, X7 ) );
        goto L3607;
L3606:
        X6 = expform_vname( X1 );
L3607:
        X4 = scrt1_cons_2a( c2477, CONS( X6, X5 ) );
        POPSTACKTRACE( lap_emit_2dlap( X4 ) );
L3604:
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( X2, X5 );
        X4 = scrt1_cons_2a( c2477, 
                            CONS( gencode_lookup( X1, b2538 ), 
                                  X5 ) );
        POPSTACKTRACE( lap_emit_2dlap( X4 ) );
}

DEFTSCP( callcode__24lap_2dgenc_v );
DEFCSTRING( t3608, "$LAP-GENC" );
EXTERNTSCPP( callcode_subsym, XAL2( TSCP, TSCP ) );
EXTERNTSCP( callcode_subsym_v );

TSCP  callcode__24lap_2dgenc( l2654, l2655, a2656, b2657 )
        TSCP  l2654, l2655, a2656, b2657;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3608 );
        X1 = lap_save_2dlap_2dtemps(  );
        X2 = EMPTYLIST;
        X2 = CONS( X2, EMPTYLIST );
        if  ( NEQ( TSCPTAG( l2655 ), PAIRTAG ) )  goto L3612;
        X6 = PAIR_CAR( l2655 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2134 ) ) );
        goto L3613;
L3612:
        X5 = FALSEVALUE;
L3613:
        if  ( FALSE( X5 ) )  goto L3616;
        X3 = scrt1_caddr( l2655 );
        goto L3617;
L3616:
        X3 = X5;
L3617:
        X4 = callcode_load_2dargl( a2656, b2657 );
L3618:
        X5 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X5 ) )  goto L3623;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3623;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3628;
        scrt1__24__car_2derror( X3 );
L3628:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3631;
        scrt1__24__car_2derror( X4 );
L3631:
        X11 = PAIR_CAR( X4 );
        X10 = sc_cons( X11, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X7 = X8;
        X6 = sc_cons( X7, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X6 );
        X6 = PAIR_CDR( X3 );
        X4 = PAIR_CDR( X4 );
        X3 = X6;
        GOBACK( L3618 );
L3623:
        if  ( TRUE( X4 ) )  goto L3640;
        if  ( FALSE( X3 ) )  goto L3636;
L3640:
        X5 = SYMBOL_VALUE( report_2derror_v );
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( c2703, 
                                     PROCEDURE_CLOSURE( X5 ) );
L3636:
        if  ( NEQ( TSCPTAG( l2655 ), PAIRTAG ) )  goto L3643;
        X5 = PAIR_CAR( l2655 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2134 ) ) );
        goto L3644;
L3643:
        X4 = FALSEVALUE;
L3644:
        if  ( FALSE( X4 ) )  goto L3647;
        X3 = scrt1_cdddr( l2655 );
        goto L3648;
L3647:
        X3 = X4;
L3648:
        X4 = X3;
L3651:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3653;
        scrt1__24__cdr_2derror( X4 );
L3653:
        if  ( FALSE( PAIR_CDR( X4 ) ) )  goto L3655;
        X6 = PAIR_CAR( X4 );
        X5 = callcode_subsym( X6, PAIR_CAR( X2 ) );
        lap_emit_2dlap( X5 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L3651 );
L3655:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CAR( X4 );
        X6 = CONS( callcode_subsym( X7, PAIR_CAR( X2 ) ), 
                   X6 );
        X5 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( l2654 ), X6 ) );
        lap_emit_2dlap( X5 );
        POPSTACKTRACE( lap_restore_2dlap_2dtemps( X1 ) );
}

DEFTSCP( callcode_subsym_v );
DEFCSTRING( t3661, "SUBSYM" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );

TSCP  callcode_subsym( e2771, a2772 )
        TSCP  e2771, a2772;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3661 );
        if  ( EQ( _S2CUINT( e2771 ), _S2CUINT( EMPTYLIST ) ) )  goto L3663;
        if  ( NOT( AND( EQ( TSCPTAG( e2771 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2771 ), SYMBOLTAG ) ) )
            )  goto L3665;
        X1 = scrt1_assq( e2771, a2772 );
        if  ( FALSE( X1 ) )  goto L3668;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3671;
        scrt1__24__cdr_2derror( X1 );
L3671:
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3674;
        scrt1__24__car_2derror( X3 );
L3674:
        X2 = PAIR_CAR( X3 );
        POPSTACKTRACE( expform_vname( X2 ) );
L3668:
        POPSTACKTRACE( e2771 );
L3665:
        if  ( NEQ( TSCPTAG( e2771 ), PAIRTAG ) )  goto L3676;
        X2 = PAIR_CAR( e2771 );
        X1 = callcode_subsym( X2, a2772 );
        X3 = PAIR_CDR( e2771 );
        X2 = callcode_subsym( X3, a2772 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3676:
        POPSTACKTRACE( e2771 );
L3663:
        POPSTACKTRACE( e2771 );
}

DEFTSCP( callcode_known_2dc_2dcall_v );
DEFCSTRING( t3680, "KNOWN-C-CALL" );
EXTERNTSCPP( gencode_emit_2dextern, XAL1( TSCP ) );
EXTERNTSCP( gencode_emit_2dextern_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( expform_cname, XAL1( TSCP ) );
EXTERNTSCP( expform_cname_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( callcode_l2857, XAL2( TSCP, TSCP ) );

TSCP  callcode_l2857( a2859, t2860 )
        TSCP  a2859, t2860;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside KNOWN-C-CALL]" );
        if  ( FALSE( a2859 ) )  goto L3718;
        if  ( EQ( TSCPTAG( t2860 ), PAIRTAG ) )  goto L3721;
        scrt1__24__car_2derror( t2860 );
L3721:
        X2 = PAIR_CAR( t2860 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2866 ) ) )  goto L3724;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3727;
        scrt1__24__car_2derror( a2859 );
L3727:
        X1 = scrt1_cons_2a( c2945, 
                            CONS( PAIR_CAR( a2859 ), X3 ) );
        goto L3770;
L3724:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2870 ) ) )  goto L3729;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3732;
        scrt1__24__car_2derror( a2859 );
L3732:
        X1 = scrt1_cons_2a( c2870, 
                            CONS( scrt1_cons_2a( c2932, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3729:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2874 ) ) )  goto L3734;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3737;
        scrt1__24__car_2derror( a2859 );
L3737:
        X1 = scrt1_cons_2a( c2874, 
                            CONS( scrt1_cons_2a( c2932, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3734:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2878 ) ) )  goto L3739;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3742;
        scrt1__24__car_2derror( a2859 );
L3742:
        X1 = scrt1_cons_2a( c2878, 
                            CONS( scrt1_cons_2a( c2932, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3739:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2882 ) ) )  goto L3744;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3747;
        scrt1__24__car_2derror( a2859 );
L3747:
        X1 = scrt1_cons_2a( c2882, 
                            CONS( scrt1_cons_2a( c2919, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3744:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2886 ) ) )  goto L3749;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3752;
        scrt1__24__car_2derror( a2859 );
L3752:
        X1 = scrt1_cons_2a( c2886, 
                            CONS( scrt1_cons_2a( c2919, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3749:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2890 ) ) )  goto L3754;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3757;
        scrt1__24__car_2derror( a2859 );
L3757:
        X1 = scrt1_cons_2a( c2890, 
                            CONS( scrt1_cons_2a( c2919, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3754:
        if  ( FALSE( scrt1_memv( X2, c2891 ) ) )  goto L3759;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3762;
        scrt1__24__car_2derror( a2859 );
L3762:
        X1 = scrt1_cons_2a( c2914, 
                            CONS( PAIR_CAR( a2859 ), X3 ) );
        goto L3770;
L3759:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2895 ) ) )  goto L3764;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3767;
        scrt1__24__car_2derror( a2859 );
L3767:
        X1 = scrt1_cons_2a( c2909, 
                            CONS( scrt1_cons_2a( c2904, 
                                                 CONS( PAIR_CAR( a2859 ), 
                                                       X4 ) ), 
                                  X3 ) );
        goto L3770;
L3764:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2899 ) ) )  goto L3769;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3772;
        scrt1__24__car_2derror( a2859 );
L3772:
        X1 = scrt1_cons_2a( c2904, 
                            CONS( PAIR_CAR( a2859 ), X3 ) );
        goto L3770;
L3769:
        if  ( EQ( TSCPTAG( a2859 ), PAIRTAG ) )  goto L3775;
        scrt1__24__car_2derror( a2859 );
L3775:
        X1 = PAIR_CAR( a2859 );
L3770:
        X3 = PAIR_CDR( a2859 );
        X5 = PAIR_CDR( t2860 );
        if  ( FALSE( X5 ) )  goto L3780;
        X4 = X5;
        goto L3781;
L3780:
        X4 = t2860;
L3781:
        X2 = callcode_l2857( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L3718:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  callcode_known_2dc_2dcall( l2805, 
                                 f2806, a2807, i2808, b2809 )
        TSCP  l2805, f2806, a2807, i2808, b2809;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3680 );
        X1 = plist_get( i2808, c2403 );
        X2 = plist_get( i2808, c3012 );
        X3 = scrt1_length( X1 );
        X4 = lap_save_2dlap_2dtemps(  );
        X5 = callcode_load_2dargl( a2807, b2809 );
        gencode_emit_2dextern( f2806 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3687;
        X7 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3690;
        X6 = BOOLEAN( NEQ( _S2CUINT( X7 ), _S2CUINT( X3 ) ) );
        goto L3688;
L3690:
        if  ( FALSE( scrt2__3d_2dtwo( X7, X3 ) ) )  goto L3692;
        X6 = FALSEVALUE;
        goto L3688;
L3692:
        X6 = TRUEVALUE;
        goto L3688;
L3687:
        X6 = FALSEVALUE;
L3688:
        if  ( TRUE( X6 ) )  goto L3698;
        if  ( FALSE( X2 ) )  goto L3712;
        X7 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3704;
        if  ( LT( _S2CINT( X7 ), _S2CINT( X3 ) ) )  goto L3698;
        goto L3712;
L3704:
        if  ( TRUE( scrt2__3c_2dtwo( X7, X3 ) ) )  goto L3698;
L3712:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = expform_cname( i2808 );
        X11 = scrt1_append_2dtwo( X1, X2 );
        X10 = callcode_l2857( X5, X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_cons_2a( X9, 
                                  CONS( scrt1_append_2dtwo( X10, X11 ), 
                                        EMPTYLIST ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c2477, CONS( c2463, X8 ) );
        lap_emit_2dlap( X7 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( NEQ( _S2CUINT( l2805 ), _S2CUINT( c2366 ) ) )  goto L3782;
        X9 = TRUEVALUE;
        goto L3783;
L3782:
        X9 = plist_get( f2806, c2171 );
L3783:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( TRUEVALUE ) ) )  goto L3785;
        X10 = c2463;
        goto L3800;
L3785:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( c2866 ) ) )  goto L3787;
        X10 = c2997;
        goto L3800;
L3787:
        if  ( FALSE( scrt1_memv( X9, c2974 ) ) )  goto L3789;
        X10 = c2996;
        goto L3800;
L3789:
        if  ( FALSE( scrt1_memv( X9, c2975 ) ) )  goto L3791;
        X10 = c2995;
        goto L3800;
L3791:
        if  ( FALSE( scrt1_memv( X9, c2891 ) ) )  goto L3793;
        X10 = c2994;
        goto L3800;
L3793:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( c2895 ) ) )  goto L3795;
        X10 = c2993;
        goto L3800;
L3795:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( c2899 ) ) )  goto L3797;
        X10 = c2992;
        goto L3800;
L3797:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( c2985 ) ) )  goto L3799;
        X12 = expform_cname( i2808 );
        X11 = SYMBOL_VALUE( report_2dwarning_v );
        X11 = UNKNOWNCALL( X11, 2 );
        VIA( PROCEDURE_CODE( X11 ) )( c2989, 
                                      X12, 
                                      PROCEDURE_CLOSURE( X11 ) );
        lap_emit_2dlap( c2990 );
        X10 = c2991;
        goto L3800;
L3799:
        X10 = c2986;
L3800:
        X8 = CONS( X10, X8 );
        X7 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( l2805 ), X8 ) );
        lap_emit_2dlap( X7 );
        goto L3713;
L3698:
        X8 = plist_get( f2806, c3009 );
        X7 = SYMBOL_VALUE( report_2derror_v );
        X7 = UNKNOWNCALL( X7, 2 );
        VIA( PROCEDURE_CODE( X7 ) )( c2531, 
                                     X8, PROCEDURE_CLOSURE( X7 ) );
L3713:
        POPSTACKTRACE( lap_restore_2dlap_2dtemps( X4 ) );
}

DEFTSCP( callcode_known_2dcall_v );
DEFCSTRING( t3802, "KNOWN-CALL" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt1_list_2dtail, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dtail_v );

TSCP  callcode_known_2dcall( l3016, 
                             f3017, a3018, i3019, b3020 )
        TSCP  l3016, f3017, a3018, i3019, b3020;
{
        TSCP  X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3802 );
        a3018 = CONS( a3018, EMPTYLIST );
        X1 = plist_get( i3019, c2403 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = gencode_optional_2dargs( i3019 );
        X3 = scrt1_length( PAIR_CAR( X1 ) );
        X4 = lap_save_2dlap_2dtemps(  );
        gencode_emit_2dextern( f3017 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3808;
        X6 = scrt1_length( PAIR_CAR( a3018 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3811;
        X5 = BOOLEAN( NEQ( _S2CUINT( X6 ), _S2CUINT( X3 ) ) );
        goto L3809;
L3811:
        if  ( FALSE( scrt2__3d_2dtwo( X6, X3 ) ) )  goto L3813;
        X5 = FALSEVALUE;
        goto L3809;
L3813:
        X5 = TRUEVALUE;
        goto L3809;
L3808:
        X5 = FALSEVALUE;
L3809:
        if  ( TRUE( X5 ) )  goto L3819;
        if  ( FALSE( X2 ) )  goto L3833;
        X6 = scrt1_length( PAIR_CAR( a3018 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3825;
        if  ( LT( _S2CINT( X6 ), _S2CINT( X3 ) ) )  goto L3819;
        goto L3833;
L3825:
        if  ( TRUE( scrt2__3c_2dtwo( X6, X3 ) ) )  goto L3819;
L3833:
        if  ( FALSE( X2 ) )  goto L3841;
        X6 = plist_get( f3017, c3067 );
        if  ( FALSE( scrt1_equal_3f( X6, sc_emptystring ) ) )  goto L3841;
        X6 = callcode_load_2dargl( PAIR_CAR( a3018 ), b3020 );
        SETGEN( PAIR_CAR( a3018 ), X6 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = expform_cname( i3019 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( X8, 
                                  CONS( scrt1_append_2dtwo( PAIR_CAR( a3018 ), 
                                                            X9 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        X6 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( l3016 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3834;
L3841:
        X8 = SYMBOL_VALUE( list_2dhead_v );
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( PAIR_CAR( a3018 ), 
                                          X3, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = callcode_load_2dargl( X7, b3020 );
        SETGEN( PAIR_CAR( X1 ), X6 );
        if  ( FALSE( X2 ) )  goto L3843;
        X6 = scrt1_list_2dtail( PAIR_CAR( a3018 ), X3 );
        callcode_nal_2dargs_9446856b( c2463, X6, b3020 );
L3843:
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = expform_cname( i3019 );
        if  ( FALSE( X2 ) )  goto L3845;
        X11 = c3070;
        goto L3846;
L3845:
        X11 = EMPTYLIST;
L3846:
        X15 = plist_get( i3019, c2151 );
        if  ( NEQ( _S2CUINT( X15 ), _S2CUINT( c2361 ) ) )  goto L3847;
        X16 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = scrt1_cons_2a( c3076, 
                             CONS( gencode_lookup( f3017, b3020 ), 
                                   X16 ) );
        X14 = scrt1_cons_2a( X15, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
        goto L3848;
L3847:
        X14 = EMPTYLIST;
L3848:
        X15 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X13 = scrt1_append_2dtwo( X14, X15 );
        X12 = scrt1_cons_2a( X13, EMPTYLIST );
        X10 = scrt1_append_2dtwo( X11, X12 );
        X9 = scrt1_cons_2a( X10, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( X8, 
                                  CONS( scrt1_append_2dtwo( PAIR_CAR( X1 ), 
                                                            X9 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        X6 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( l3016 ), X7 ) );
        lap_emit_2dlap( X6 );
        goto L3834;
L3819:
        X7 = plist_get( f3017, c3009 );
        X6 = SYMBOL_VALUE( report_2derror_v );
        X6 = UNKNOWNCALL( X6, 2 );
        VIA( PROCEDURE_CODE( X6 ) )( c2531, 
                                     X7, PROCEDURE_CLOSURE( X6 ) );
L3834:
        POPSTACKTRACE( lap_restore_2dlap_2dtemps( X4 ) );
}

DEFTSCP( callcode_unknown_2dcall_v );
DEFCSTRING( t3849, "UNKNOWN-CALL" );

TSCP  callcode_unknown_2dcall( l3083, f3084, a3085, b3086 )
        TSCP  l3083, f3084, a3085, b3086;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3849 );
        X1 = lap_save_2dlap_2dtemps(  );
        X2 = lap_use_2dlap_2dtemp(  );
        X3 = callcode_load_2dargl( a3085, b3086 );
        gencode_exp_2dgenc( X2, f3084, b3086 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_length( a3085 ), X6 );
        X5 = CONS( scrt1_cons_2a( c3093, 
                                  CONS( expform_vname( X2 ), X6 ) ), 
                   X5 );
        X4 = scrt1_cons_2a( c2477, CONS( X2, X5 ) );
        lap_emit_2dlap( X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c3094, 
                            CONS( scrt1_cons_2a( c3095, 
                                                 CONS( expform_vname( X2 ), 
                                                       X8 ) ), 
                                  X7 ) );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c3076, 
                            CONS( expform_vname( X2 ), X9 ) );
        X7 = scrt1_cons_2a( X8, CONS( EMPTYLIST, EMPTYLIST ) );
        X5 = CONS( scrt1_cons_2a( X6, 
                                  CONS( scrt1_append_2dtwo( X3, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        X4 = scrt1_cons_2a( c2477, 
                            CONS( expform_vname( l3083 ), X5 ) );
        lap_emit_2dlap( X4 );
        POPSTACKTRACE( lap_restore_2dlap_2dtemps( X1 ) );
}

DEFTSCP( callcode_load_2dargl_v );
DEFCSTRING( t3854, "LOAD-ARGL" );
EXTERNTSCPP( gencode_var_2din_2dstack, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2din_2dstack_v );
EXTERNTSCPP( gencode_var_2dis_2dglobal, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2dis_2dglobal_v );
EXTERNTSCPP( gencode_var_2dis_2dconstant, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2dis_2dconstant_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  callcode_load_2dargl( a3097, b3098 )
        TSCP  a3097, b3098;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3854 );
        X1 = a3097;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3857:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3858;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3861;
        scrt1__24__car_2derror( X1 );
L3861:
        X6 = PAIR_CAR( X1 );
        X7 = BOOLEAN( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) );
        if  ( FALSE( X7 ) )  goto L3885;
        X8 = gencode_var_2din_2dstack( X6 );
        if  ( TRUE( X8 ) )  goto L3872;
        X10 = gencode_var_2dis_2dglobal( X6 );
        if  ( FALSE( X10 ) )  goto L3874;
        if  ( FALSE( plist_get( X6, c2171 ) ) )  goto L3876;
        X9 = FALSEVALUE;
        goto L3875;
L3876:
        X9 = TRUEVALUE;
        goto L3875;
L3874:
        X9 = X10;
L3875:
        if  ( TRUE( X9 ) )  goto L3872;
        if  ( TRUE( gencode_var_2dis_2dconstant( X6 ) ) )  goto L3872;
L3885:
        X7 = lap_use_2dlap_2dtemp(  );
        gencode_exp_2dgenc( X7, X6, b3098 );
        X5 = X7;
        goto L3886;
L3872:
        gencode_emit_2dextern( X6 );
        X5 = gencode_lookup( X6, b3098 );
L3886:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3890;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3857 );
L3890:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3895;
        scdebug_error( c3133, 
                       c3134, CONS( X3, EMPTYLIST ) );
L3895:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3857 );
L3858:
        POPSTACKTRACE( X2 );
}

void scdebug__init();
void expform__init();
void scrt2__init();
void lap__init();
void gencode__init();
void plist__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        expform__init();
        scrt2__init();
        lap__init();
        gencode__init();
        plist__init();
        scrt1__init();
        MAXDISPLAY( 3 );
}

void  callcode__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(callcode SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3335, 
                       ADR( callcode__24call_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      callcode__24call_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3415, 
                       ADR( callcode_la_2dexits_2dlb_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      callcode_la_2dexits_2dlb_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3421, 
                       ADR( callcode_inline_2dcall_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      callcode_inline_2dcall, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3504, 
                       ADR( callcode_nal_2dargs_9446856b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      callcode_nal_2dargs_9446856b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3527, 
                       ADR( callcode_tail_2dcall_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      callcode_tail_2dcall, EMPTYLIST ) );
        INITIALIZEVAR( t3547, 
                       ADR( callcode_tail_2dcall_2dbind_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      callcode_tail_2dcall_2dbind, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3608, 
                       ADR( callcode__24lap_2dgenc_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      callcode__24lap_2dgenc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3661, 
                       ADR( callcode_subsym_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      callcode_subsym, EMPTYLIST ) );
        INITIALIZEVAR( t3680, 
                       ADR( callcode_known_2dc_2dcall_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      callcode_known_2dc_2dcall, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3802, 
                       ADR( callcode_known_2dcall_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      callcode_known_2dcall, EMPTYLIST ) );
        INITIALIZEVAR( t3849, 
                       ADR( callcode_unknown_2dcall_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      callcode_unknown_2dcall, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3854, 
                       ADR( callcode_load_2dargl_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      callcode_load_2dargl, EMPTYLIST ) );
        return;
}
