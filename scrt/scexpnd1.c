
/* SCHEME->C */

#include <objects.h>

void scexpnd1__init();
DEFSTATICTSCP( c3057 );
DEFSTATICTSCP( c3056 );
DEFSTATICTSCP( c3029 );
DEFSTATICTSCP( c2942 );
DEFSTATICTSCP( c2941 );
DEFCSTRING( t3156, "key" );
DEFSTATICTSCP( c2890 );
DEFSTATICTSCP( c2851 );
DEFCSTRING( t3157, "Illegal form:" );
DEFSTATICTSCP( c2819 );
DEFSTATICTSCP( c2818 );
DEFCSTRING( t3158, "Illegal form ~s:" );
DEFSTATICTSCP( c2791 );
DEFSTATICTSCP( c2790 );
DEFSTATICTSCP( c2785 );
DEFSTATICTSCP( c2784 );
DEFSTATICTSCP( c2783 );
DEFSTATICTSCP( c2778 );
DEFSTATICTSCP( c2777 );
DEFSTATICTSCP( c2772 );
DEFSTATICTSCP( c2763 );
DEFSTATICTSCP( c2745 );
DEFSTATICTSCP( c2719 );
DEFSTATICTSCP( c2525 );
DEFSTATICTSCP( c2516 );
DEFCSTRING( t3159, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2458 );
DEFSTATICTSCP( c2457 );
DEFSTATICTSCP( c2396 );
DEFSTATICTSCP( c2385 );
DEFSTATICTSCP( c2366 );
DEFSTATICTSCP( c2360 );
DEFSTATICTSCP( c2354 );
DEFSTATICTSCP( c2311 );
DEFSTATICTSCP( c2270 );
DEFSTATICTSCP( c2259 );
DEFSTATICTSCP( c2258 );
DEFSTATICTSCP( c2257 );
DEFSTATICTSCP( c2256 );
DEFSTATICTSCP( c2226 );
DEFSTATICTSCP( c2205 );
DEFSTATICTSCP( c2162 );
DEFCSTRING( t3160, "***** ~s is redefined~%" );
DEFSTATICTSCP( c2161 );
DEFSTATICTSCP( c2148 );
DEFSTATICTSCP( c2137 );
DEFSTATICTSCP( c2136 );
DEFCSTRING( t3161, "Illegal form: ~s" );
DEFSTATICTSCP( c2135 );
DEFSTATICTSCP( c2130 );

static void  init_constants()
{
        c3057 = STRINGTOSYMBOL( CSTRING_TSCP( "NOT" ) );
        CONSTANTEXP( ADR( c3057 ) );
        c3056 = STRINGTOSYMBOL( CSTRING_TSCP( "UNLESS" ) );
        CONSTANTEXP( ADR( c3056 ) );
        c3029 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN" ) );
        CONSTANTEXP( ADR( c3029 ) );
        c2942 = STRINGTOSYMBOL( CSTRING_TSCP( "AND" ) );
        CONSTANTEXP( ADR( c2942 ) );
        c2941 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK" ) );
        CONSTANTEXP( ADR( c2941 ) );
        c2890 = CSTRING_TSCP( t3156 );
        CONSTANTEXP( ADR( c2890 ) );
        c2851 = STRINGTOSYMBOL( CSTRING_TSCP( "MEMV" ) );
        CONSTANTEXP( ADR( c2851 ) );
        c2819 = CSTRING_TSCP( t3157 );
        CONSTANTEXP( ADR( c2819 ) );
        c2818 = STRINGTOSYMBOL( CSTRING_TSCP( "CASE" ) );
        CONSTANTEXP( ADR( c2818 ) );
        c2791 = CSTRING_TSCP( t3158 );
        CONSTANTEXP( ADR( c2791 ) );
        c2790 = STRINGTOSYMBOL( CSTRING_TSCP( "COND-CLAUSE" ) );
        CONSTANTEXP( ADR( c2790 ) );
        c2785 = STRINGTOSYMBOL( CSTRING_TSCP( "OR" ) );
        CONSTANTEXP( ADR( c2785 ) );
        c2784 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK3" ) );
        CONSTANTEXP( ADR( c2784 ) );
        c2783 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK2" ) );
        CONSTANTEXP( ADR( c2783 ) );
        c2778 = STRINGTOSYMBOL( CSTRING_TSCP( "TEST-RESULT" ) );
        CONSTANTEXP( ADR( c2778 ) );
        c2777 = STRINGTOSYMBOL( CSTRING_TSCP( "LET" ) );
        CONSTANTEXP( ADR( c2777 ) );
        c2772 = STRINGTOSYMBOL( CSTRING_TSCP( "COND" ) );
        CONSTANTEXP( ADR( c2772 ) );
        c2763 = STRINGTOSYMBOL( CSTRING_TSCP( "ELSE" ) );
        CONSTANTEXP( ADR( c2763 ) );
        c2745 = STRINGTOSYMBOL( CSTRING_TSCP( "=>" ) );
        CONSTANTEXP( ADR( c2745 ) );
        c2719 = EMPTYLIST;
        c2719 = CONS( c2763, c2719 );
        CONSTANTEXP( ADR( c2719 ) );
        c2525 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2525 ) );
        c2516 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2516 ) );
        c2458 = CSTRING_TSCP( t3159 );
        CONSTANTEXP( ADR( c2458 ) );
        c2457 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2457 ) );
        c2396 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2396 ) );
        c2385 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL" ) );
        CONSTANTEXP( ADR( c2385 ) );
        c2366 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL-WHEN" ) );
        CONSTANTEXP( ADR( c2366 ) );
        c2360 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-C-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2360 ) );
        c2354 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2354 ) );
        c2311 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-CONSTANT" ) );
        CONSTANTEXP( ADR( c2311 ) );
        c2270 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MACRO" ) );
        CONSTANTEXP( ADR( c2270 ) );
        c2259 = STRINGTOSYMBOL( CSTRING_TSCP( "CDR" ) );
        CONSTANTEXP( ADR( c2259 ) );
        c2258 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2258 ) );
        c2257 = STRINGTOSYMBOL( CSTRING_TSCP( "E" ) );
        CONSTANTEXP( ADR( c2257 ) );
        c2256 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        CONSTANTEXP( ADR( c2256 ) );
        c2226 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-IN-LINE" ) );
        CONSTANTEXP( ADR( c2226 ) );
        c2205 = STRINGTOSYMBOL( CSTRING_TSCP( "DO-DEFINE" ) );
        CONSTANTEXP( ADR( c2205 ) );
        c2162 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE" ) );
        CONSTANTEXP( ADR( c2162 ) );
        c2161 = CSTRING_TSCP( t3160 );
        CONSTANTEXP( ADR( c2161 ) );
        c2148 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2148 ) );
        c2137 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2137 ) );
        c2136 = STRINGTOSYMBOL( CSTRING_TSCP( "MAKE-PROMISE" ) );
        CONSTANTEXP( ADR( c2136 ) );
        c2135 = CSTRING_TSCP( t3161 );
        CONSTANTEXP( ADR( c2135 ) );
        c2130 = STRINGTOSYMBOL( CSTRING_TSCP( "DELAY" ) );
        CONSTANTEXP( ADR( c2130 ) );
}

EXTERNTSCPP( scexpand_install_2dexpander, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_install_2dexpander_v );
EXTERNTSCPP( scexpand_islist, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scexpand_islist_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  scexpnd1_l2131( x2132, e2133 )
        TSCP  x2132, e2133;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2131 [inside TOP-LEVEL]" );
        if  ( FALSE( scexpand_islist( x2132, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L3163;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( x2132 ), PAIRTAG ) )  goto L3166;
        scrt1__24__cdr_2derror( x2132 );
L3166:
        X5 = PAIR_CDR( x2132 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3169;
        scrt1__24__car_2derror( X5 );
L3169:
        X4 = CONS( PAIR_CAR( X5 ), X4 );
        X2 = scrt1_cons_2a( c2136, 
                            CONS( scrt1_cons_2a( c2137, 
                                                 CONS( EMPTYLIST, X4 ) ), 
                                  X3 ) );
        X1 = e2133;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2133, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3163:
        POPSTACKTRACE( scdebug_error( c2130, 
                                      c2135, 
                                      CONS( x2132, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l2149( x2150, e2151 )
        TSCP  x2150, e2151;
{
        PUSHSTACKTRACE( "scexpnd1_l2149 [inside TOP-LEVEL]" );
        if  ( TRUE( scexpand_islist( x2150, 
                                     _TSCP( 8 ), 
                                     CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L3172;
        POPSTACKTRACE( scdebug_error( c2148, 
                                      c2135, 
                                      CONS( x2150, EMPTYLIST ) ) );
L3172:
        POPSTACKTRACE( x2150 );
}

DEFTSCP( scexpnd1_do_2ddefine_v );
DEFCSTRING( t3174, "DO-DEFINE" );
EXTERNTSCPP( scrt2_top_2dlevel_2dvalue, XAL1( TSCP ) );
EXTERNTSCP( scrt2_top_2dlevel_2dvalue_v );
EXTERNTSCPP( scrt2_2dvalue_21_c9d2a496, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_2dvalue_21_c9d2a496_v );
EXTERNTSCP( sc_undefined );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  scexpnd1_do_2ddefine( s2154, v2155 )
        TSCP  s2154, v2155;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3174 );
        X1 = scrt2_top_2dlevel_2dvalue( s2154 );
        scrt2_2dvalue_21_c9d2a496( s2154, v2155 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( sc_undefined ) ) )  goto L3177;
        X2 = scrt6_format( c2161, CONS( s2154, EMPTYLIST ) );
        scrt6_display( X2, EMPTYLIST );
L3177:
        POPSTACKTRACE( s2154 );
}

EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_cdadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdadr_v );

TSCP  scexpnd1_l2163( x2164, e2165 )
        TSCP  x2164, e2165;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2163 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2164, 
                              _TSCP( 12 ), 
                              CONS( _TSCP( 12 ), EMPTYLIST ) );
        if  ( FALSE( X1 ) )  goto L3196;
        if  ( EQ( TSCPTAG( x2164 ), PAIRTAG ) )  goto L3187;
        scrt1__24__cdr_2derror( x2164 );
L3187:
        X3 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3190;
        scrt1__24__car_2derror( X3 );
L3190:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3196;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_caddr( x2164 );
        X3 = e2165;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = CONS( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                e2165, 
                                                PROCEDURE_CLOSURE( X3 ) ), 
                   X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3194;
        scrt1__24__car_2derror( X4 );
L3194:
        POPSTACKTRACE( scrt1_cons_2a( c2205, 
                                      CONS( scrt1_cons_2a( c2148, 
                                                           CONS( PAIR_CAR( X4 ), 
                                                                 X3 ) ), 
                                            X2 ) ) );
L3196:
        X1 = scexpand_islist( x2164, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3217;
        if  ( EQ( TSCPTAG( x2164 ), PAIRTAG ) )  goto L3205;
        scrt1__24__cdr_2derror( x2164 );
L3205:
        X3 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3208;
        scrt1__24__car_2derror( X3 );
L3208:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3217;
        X2 = scrt1_caadr( x2164 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3217;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3214;
        scrt1__24__cdr_2derror( X7 );
L3214:
        X6 = PAIR_CDR( X7 );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_append_2dtwo( X6, X7 ), EMPTYLIST );
        X4 = scrt1_cons_2a( c2137, 
                            CONS( scrt1_cdadr( x2164 ), X5 ) );
        X3 = e2165;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = CONS( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                e2165, 
                                                PROCEDURE_CLOSURE( X3 ) ), 
                   X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2205, 
                                      CONS( scrt1_cons_2a( c2148, 
                                                           CONS( scrt1_caadr( x2164 ), 
                                                                 X3 ) ), 
                                            X2 ) ) );
L3217:
        POPSTACKTRACE( scdebug_error( c2162, 
                                      c2135, 
                                      CONS( x2164, EMPTYLIST ) ) );
}

EXTERNTSCPP( sceval_eval, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sceval_eval_v );

TSCP  scexpnd1_l2227( x2228, e2229 )
        TSCP  x2228, e2229;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2227 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2228, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3240;
        if  ( EQ( TSCPTAG( x2228 ), PAIRTAG ) )  goto L3227;
        scrt1__24__cdr_2derror( x2228 );
L3227:
        X3 = PAIR_CDR( x2228 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3230;
        scrt1__24__car_2derror( X3 );
L3230:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3240;
        X2 = scrt1_caadr( x2228 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3240;
        X2 = scrt1_caadr( x2228 );
        X3 = scrt1_cdadr( x2228 );
        X5 = PAIR_CDR( x2228 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3236;
        scrt1__24__cdr_2derror( X5 );
L3236:
        X4 = PAIR_CDR( X5 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( c2257, X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( c2259, CONS( c2256, X10 ) ), 
                   X9 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X11 = CONS( scrt1_append_2dtwo( X4, X12 ), EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( c2257, 
                                  CONS( scrt1_cons_2a( c2258, 
                                                       CONS( scrt1_cons_2a( c2148, 
                                                                            CONS( scrt1_cons_2a( c2137, 
                                                                                                 CONS( X3, 
                                                                                                       X11 ) ), 
                                                                                  X10 ) ), 
                                                             X9 ) ), 
                                        X8 ) ), 
                   X7 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( c2137, 
                            CONS( scrt1_cons_2a( c2256, 
                                                 CONS( c2257, X8 ) ), 
                                  X7 ) );
        X5 = sceval_eval( X6, EMPTYLIST );
        scexpand_install_2dexpander( X2, X5 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2148, CONS( X2, X5 ) ) );
L3240:
        POPSTACKTRACE( scdebug_error( c2226, 
                                      c2135, 
                                      CONS( x2228, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l2271( x2272, e2273 )
        TSCP  x2272, e2273;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2271 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2272, 
                              _TSCP( 12 ), 
                              CONS( _TSCP( 12 ), EMPTYLIST ) );
        if  ( FALSE( X1 ) )  goto L3263;
        if  ( EQ( TSCPTAG( x2272 ), PAIRTAG ) )  goto L3249;
        scrt1__24__cdr_2derror( x2272 );
L3249:
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3252;
        scrt1__24__car_2derror( X3 );
L3252:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3263;
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3257;
        scrt1__24__car_2derror( X3 );
L3257:
        X2 = PAIR_CAR( X3 );
        X4 = scrt1_caddr( x2272 );
        X3 = sceval_eval( X4, EMPTYLIST );
        scexpand_install_2dexpander( X2, X3 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3261;
        scrt1__24__car_2derror( X3 );
L3261:
        POPSTACKTRACE( scrt1_cons_2a( c2148, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3263:
        POPSTACKTRACE( scdebug_error( c2270, 
                                      c2135, 
                                      CONS( x2272, EMPTYLIST ) ) );
}

EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scexpnd1_l2312( x2313, e2314 )
        TSCP  x2313, e2314;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2312 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2313, 
                              _TSCP( 12 ), 
                              CONS( _TSCP( 12 ), EMPTYLIST ) );
        if  ( FALSE( X1 ) )  goto L3287;
        if  ( EQ( TSCPTAG( x2313 ), PAIRTAG ) )  goto L3272;
        scrt1__24__cdr_2derror( x2313 );
L3272:
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3275;
        scrt1__24__car_2derror( X3 );
L3275:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3287;
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3280;
        scrt1__24__car_2derror( X3 );
L3280:
        X2 = PAIR_CAR( X3 );
        X6 = scrt1_caddr( x2313 );
        X5 = sceval_eval( X6, EMPTYLIST );
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = X4;
        scexpand_install_2dexpander( X2, X3 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3285;
        scrt1__24__car_2derror( X3 );
L3285:
        POPSTACKTRACE( scrt1_cons_2a( c2148, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3287:
        POPSTACKTRACE( scdebug_error( c2311, 
                                      c2135, 
                                      CONS( x2313, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l2355( x2356, e2357 )
        TSCP  x2356, e2357;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2355 [inside TOP-LEVEL]" );
        X4 = sc_cons( x2356, EMPTYLIST );
        X3 = sc_cons( c2148, X4 );
        X2 = X3;
        X1 = e2357;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2357, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

TSCP  scexpnd1_l2361( x2362, e2363 )
        TSCP  x2362, e2363;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2361 [inside TOP-LEVEL]" );
        X4 = sc_cons( x2362, EMPTYLIST );
        X3 = sc_cons( c2148, X4 );
        X2 = X3;
        X1 = e2363;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2363, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );

TSCP  scexpnd1_l2367( x2368, e2369 )
        TSCP  x2368, e2369;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2367 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2368, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3315;
        if  ( EQ( TSCPTAG( x2368 ), PAIRTAG ) )  goto L3300;
        scrt1__24__cdr_2derror( x2368 );
L3300:
        X3 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3303;
        scrt1__24__car_2derror( X3 );
L3303:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scexpand_islist( X2, _TSCP( 4 ), EMPTYLIST ) )
            )  goto L3315;
        X3 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3309;
        scrt1__24__car_2derror( X3 );
L3309:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scrt1_memq( c2385, X2 ) ) )  goto L3305;
        X5 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3313;
        scrt1__24__cdr_2derror( X5 );
L3313:
        X4 = PAIR_CDR( X5 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2396, 
                            CONS( scrt1_append_2dtwo( X4, X5 ), 
                                  EMPTYLIST ) );
        X2 = e2369;
        X2 = UNKNOWNCALL( X2, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                    e2369, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L3305:
        POPSTACKTRACE( FALSEVALUE );
L3315:
        POPSTACKTRACE( scdebug_error( c2366, 
                                      c2135, 
                                      CONS( x2368, EMPTYLIST ) ) );
}

EXTERNTSCPP( scexpnd1_2dexpander_afd5ebf4, XAL1( TSCP ) );
EXTERNTSCP( scexpnd1_2dexpander_afd5ebf4_v );
EXTERNTSCPP( scexpnd1_lambda_2ddefines, XAL1( TSCP ) );
EXTERNTSCP( scexpnd1_lambda_2ddefines_v );

TSCP  scexpnd1_l2407( x2408, e2409 )
        TSCP  x2408, e2409;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2407 [inside TOP-LEVEL]" );
        X1 = scexpnd1_2dexpander_afd5ebf4( e2409 );
        if  ( FALSE( scexpand_islist( x2408, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3318;
        if  ( EQ( TSCPTAG( x2408 ), PAIRTAG ) )  goto L3321;
        scrt1__24__cdr_2derror( x2408 );
L3321:
        X6 = PAIR_CDR( x2408 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3324;
        scrt1__24__cdr_2derror( X6 );
L3324:
        X5 = PAIR_CDR( X6 );
        X6 = X5;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L3328:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3329;
        X4 = X7;
        goto L3336;
L3329:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3332;
        scrt1__24__car_2derror( X6 );
L3332:
        X12 = PAIR_CAR( X6 );
        X11 = X1;
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                            X1, 
                                            PROCEDURE_CLOSURE( X11 ) );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3335;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L3328 );
L3335:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3340;
        scdebug_error( c2457, 
                       c2458, CONS( X8, EMPTYLIST ) );
L3340:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L3328 );
L3336:
        X3 = scexpnd1_lambda_2ddefines( X4 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_append_2dtwo( X3, X4 ), EMPTYLIST );
        X3 = PAIR_CDR( x2408 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3344;
        scrt1__24__car_2derror( X3 );
L3344:
        POPSTACKTRACE( scrt1_cons_2a( c2137, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3318:
        POPSTACKTRACE( scdebug_error( c2137, 
                                      c2135, 
                                      CONS( x2408, EMPTYLIST ) ) );
}

DEFTSCP( scexpnd1_lambda_2ddefines_v );
DEFCSTRING( t3346, "SCEXPND1_LAMBDA-DEFINES" );
EXTERNTSCPP( scrt1_cadadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadadr_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );

TSCP  scexpnd1_lambda_2ddefines( b2482 )
        TSCP  b2482;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3346 );
        X1 = b2482;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L3349:
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3350;
        X5 = PAIR_CAR( X1 );
        X6 = BOOLEAN( NEQ( TSCPTAG( X5 ), PAIRTAG ) );
        if  ( TRUE( X6 ) )  goto L3358;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3362;
        scrt1__24__car_2derror( X5 );
L3362:
        X7 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( c2205 ) ) )  goto L3358;
        X7 = PAIR_CDR( X1 );
        X9 = scrt1_cadadr( X5 );
        X8 = sc_cons( X9, X3 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( scrt1_caddr( X5 ), X10 );
        X9 = scrt1_cons_2a( c2516, 
                            CONS( scrt1_cadadr( X5 ), X10 ) );
        X4 = sc_cons( X9, X4 );
        X3 = X8;
        X1 = X7;
        GOBACK( L3349 );
L3350:
        if  ( FALSE( X3 ) )  goto L3365;
        X9 = scrt1_reverse( X4 );
        X12 = scrt1_reverse( X2 );
        X13 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X11 = scrt1_append_2dtwo( X12, X13 );
        X10 = scrt1_cons_2a( X11, EMPTYLIST );
        X8 = CONS( scrt1_append_2dtwo( X9, X10 ), EMPTYLIST );
        X7 = scrt1_cons_2a( c2137, CONS( X3, X8 ) );
        X10 = scrt1_length( X3 );
        X9 = sc_make_2dvector( X10, 
                               CONS( _TSCP( 0 ), EMPTYLIST ) );
        X8 = scrt4_vector_2d_3elist( X9 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X7, 
                            CONS( scrt1_append_2dtwo( X8, X9 ), 
                                  EMPTYLIST ) );
        POPSTACKTRACE( scrt1_cons_2a( X6, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L3365:
        POPSTACKTRACE( b2482 );
L3358:
        X6 = PAIR_CDR( X1 );
        X7 = sc_cons( X5, X2 );
        X2 = X7;
        X1 = X6;
        GOBACK( L3349 );
}

EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );

TSCP  scexpnd1_l2526( x2527, e2528 )
        TSCP  x2527, e2528;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2526 [inside TOP-LEVEL]" );
        if  ( FALSE( scexpand_islist( x2527, 
                                      _TSCP( 12 ), 
                                      CONS( _TSCP( 12 ), EMPTYLIST ) ) )
            )  goto L3369;
        if  ( EQ( TSCPTAG( x2527 ), PAIRTAG ) )  goto L3372;
        scrt1__24__cdr_2derror( x2527 );
L3372:
        X6 = PAIR_CDR( x2527 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3375;
        scrt1__24__car_2derror( X6 );
L3375:
        X5 = PAIR_CAR( X6 );
        X4 = e2528;
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          e2528, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X7 = scrt1_caddr( x2527 );
        X6 = e2528;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          e2528, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X6 = sc_cons( FALSEVALUE, EMPTYLIST );
        X4 = sc_cons( X5, X6 );
        X2 = sc_cons( X3, X4 );
        X1 = sc_cons( c2525, X2 );
        POPSTACKTRACE( X1 );
L3369:
        if  ( FALSE( scexpand_islist( x2527, 
                                      _TSCP( 16 ), 
                                      CONS( _TSCP( 16 ), EMPTYLIST ) ) )
            )  goto L3378;
        if  ( EQ( TSCPTAG( x2527 ), PAIRTAG ) )  goto L3381;
        scrt1__24__cdr_2derror( x2527 );
L3381:
        X6 = PAIR_CDR( x2527 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3384;
        scrt1__24__car_2derror( X6 );
L3384:
        X5 = PAIR_CAR( X6 );
        X4 = e2528;
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          e2528, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X7 = scrt1_caddr( x2527 );
        X6 = e2528;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          e2528, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X9 = scrt1_cadddr( x2527 );
        X8 = e2528;
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X9, 
                                          e2528, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = sc_cons( X7, EMPTYLIST );
        X4 = sc_cons( X5, X6 );
        X2 = sc_cons( X3, X4 );
        X1 = sc_cons( c2525, X2 );
        POPSTACKTRACE( X1 );
L3378:
        POPSTACKTRACE( scdebug_error( c2525, 
                                      c2135, 
                                      CONS( x2527, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l2554( x2555, e2556 )
        TSCP  x2555, e2556;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2554 [inside TOP-LEVEL]" );
        X1 = scexpand_islist( x2555, 
                              _TSCP( 12 ), 
                              CONS( _TSCP( 12 ), EMPTYLIST ) );
        if  ( FALSE( X1 ) )  goto L3404;
        if  ( EQ( TSCPTAG( x2555 ), PAIRTAG ) )  goto L3395;
        scrt1__24__cdr_2derror( x2555 );
L3395:
        X3 = PAIR_CDR( x2555 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3398;
        scrt1__24__car_2derror( X3 );
L3398:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3404;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_caddr( x2555 );
        X3 = e2556;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = CONS( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                e2556, 
                                                PROCEDURE_CLOSURE( X3 ) ), 
                   X2 );
        X3 = PAIR_CDR( x2555 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3402;
        scrt1__24__car_2derror( X3 );
L3402:
        POPSTACKTRACE( scrt1_cons_2a( c2516, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3404:
        POPSTACKTRACE( scdebug_error( c2516, 
                                      c2135, 
                                      CONS( x2555, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l2583( x2584, e2585 )
        TSCP  x2584, e2585;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2583 [inside TOP-LEVEL]" );
        if  ( TRUE( scexpand_islist( x2584, 
                                     _TSCP( 4 ), 
                                     CONS( _TSCP( 4 ), EMPTYLIST ) ) )
            )  goto L3406;
        if  ( FALSE( scexpand_islist( x2584, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3408;
        if  ( EQ( TSCPTAG( x2584 ), PAIRTAG ) )  goto L3411;
        scrt1__24__cdr_2derror( x2584 );
L3411:
        X2 = PAIR_CDR( x2584 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3415:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3416;
        X1 = X4;
        goto L3423;
L3416:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3419;
        scrt1__24__car_2derror( X3 );
L3419:
        X9 = PAIR_CAR( X3 );
        X8 = e2585;
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X9, 
                                          e2585, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3422;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L3415 );
L3422:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3427;
        scdebug_error( c2457, 
                       c2458, CONS( X5, EMPTYLIST ) );
L3427:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L3415 );
L3423:
        X2 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2396, 
                                      CONS( scrt1_append_2dtwo( X1, X2 ), 
                                            EMPTYLIST ) ) );
L3408:
        POPSTACKTRACE( scdebug_error( c2396, 
                                      c2135, 
                                      CONS( x2584, EMPTYLIST ) ) );
L3406:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scexpnd1_2dexpander_afd5ebf4_v );
DEFCSTRING( t3429, "SCEXPND1_INTERNAL-BEGIN-EXPANDER" );

TSCP  scexpnd1_l2636( e2637, e2638, c3431 )
        TSCP  e2637, e2638, c3431;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2636 [inside INTERNAL-BEGIN-EXPANDER]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3431, 0 );
        X3 = BOOLEAN( EQ( TSCPTAG( e2637 ), PAIRTAG ) );
        if  ( FALSE( X3 ) )  goto L3461;
        if  ( EQ( TSCPTAG( e2637 ), PAIRTAG ) )  goto L3440;
        scrt1__24__car_2derror( e2637 );
L3440:
        X4 = PAIR_CAR( e2637 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2396 ) ) )  goto L3461;
        if  ( FALSE( scexpand_islist( e2637, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3442;
        X6 = PAIR_CDR( e2637 );
        X7 = X6;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L3447:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3448;
        X5 = X8;
        goto L3455;
L3448:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3451;
        scrt1__24__car_2derror( X7 );
L3451:
        X13 = PAIR_CAR( X7 );
        X12 = e2638;
        X12 = UNKNOWNCALL( X12, 2 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( X13, 
                                            e2638, 
                                            PROCEDURE_CLOSURE( X12 ) );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3454;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L3447 );
L3454:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3459;
        scdebug_error( c2457, 
                       c2458, CONS( X9, EMPTYLIST ) );
L3459:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L3447 );
L3455:
        X4 = scexpnd1_lambda_2ddefines( X5 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2396, 
                            CONS( scrt1_append_2dtwo( X4, X5 ), 
                                  EMPTYLIST ) );
        goto L3462;
L3442:
        X2 = scdebug_error( c2396, 
                            c2135, CONS( e2637, EMPTYLIST ) );
        goto L3462;
L3461:
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( e2637, 
                                          e2638, 
                                          PROCEDURE_CLOSURE( X3 ) );
L3462:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scexpnd1_2dexpander_afd5ebf4( o2635 )
        TSCP  o2635;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3429 );
        DISPLAY( 0 ) = o2635;
        SDVAL = MAKEPROCEDURE( 2, 
                               0, 
                               scexpnd1_l2636, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scexpnd1_cond_2dmacro_v );
DEFCSTRING( t3463, "SCEXPND1_COND-MACRO" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  scexpnd1_cond_2dmacro( e2701 )
        TSCP  e2701;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3463 );
        if  ( EQ( TSCPTAG( e2701 ), PAIRTAG ) )  goto L3466;
        scrt1__24__cdr_2derror( e2701 );
L3466:
        X3 = PAIR_CDR( e2701 );
        if  ( FALSE( X3 ) )  goto L3469;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3472;
        scrt1__24__car_2derror( X3 );
L3472:
        X2 = PAIR_CAR( X3 );
        goto L3470;
L3469:
        X2 = X3;
L3470:
        if  ( FALSE( X2 ) )  goto L3475;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3478;
        scrt1__24__cdr_2derror( X3 );
L3478:
        X1 = PAIR_CDR( X3 );
        goto L3476;
L3475:
        X1 = X2;
L3476:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3481;
        X4 = BOOLEAN( NEQ( TSCPTAG( X2 ), PAIRTAG ) );
        if  ( TRUE( X4 ) )  goto L3487;
        if  ( TRUE( scrt1_equal_3f( X2, c2719 ) ) )  goto L3487;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3493;
        scrt1__24__cdr_2derror( X2 );
L3493:
        X5 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3490;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2772, 
                                  CONS( scrt1_append_2dtwo( X1, X6 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2785, 
                                      CONS( PAIR_CAR( X2 ), X5 ) ) );
L3490:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3497;
        scrt1__24__cdr_2derror( X2 );
L3497:
        X7 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3500;
        scrt1__24__car_2derror( X7 );
L3500:
        X6 = PAIR_CAR( X7 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2745 ) ) );
        if  ( FALSE( X5 ) )  goto L3516;
        X6 = scrt1_length( X2 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L3508;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 12 ) ) ) )  goto L3512;
        goto L3516;
L3508:
        if  ( TRUE( scrt2__3d_2dtwo( X6, _TSCP( 12 ) ) ) )  goto L3512;
        goto L3516;
L3481:
        POPSTACKTRACE( FALSEVALUE );
L3487:
        POPSTACKTRACE( scdebug_error( c2790, 
                                      c2791, 
                                      CONS( e2701, EMPTYLIST ) ) );
L3512:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( c2784, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X4 );
        X5 = scrt1_cons_2a( c2783, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( X5, CONS( c2778, X6 ) ), 
                   X4 );
        X3 = CONS( scrt1_cons_2a( c2525, CONS( c2778, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2778, 
                            CONS( PAIR_CAR( X2 ), X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( c2772, 
                                  CONS( scrt1_append_2dtwo( X1, X8 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        X5 = CONS( scrt1_cons_2a( c2784, 
                                  CONS( scrt1_cons_2a( c2137, 
                                                       CONS( EMPTYLIST, 
                                                             X7 ) ), 
                                        X6 ) ), 
                   X5 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_caddr( X2 ), X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2777, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( scrt1_cons_2a( c2783, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X7 ) ), 
                                                                                      X6 ) ), 
                                                                 X5 ) ), 
                                            X3 ) ) );
L3516:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2763 ) ) )  goto L3518;
        X3 = PAIR_CDR( X2 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2396, 
                                      CONS( scrt1_append_2dtwo( X3, X4 ), 
                                            EMPTYLIST ) ) );
L3518:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2772, 
                                  CONS( scrt1_append_2dtwo( X1, X4 ), 
                                        EMPTYLIST ) ), 
                   X3 );
        X4 = PAIR_CDR( X2 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2396, 
                                  CONS( scrt1_append_2dtwo( X4, X5 ), 
                                        EMPTYLIST ) ), 
                   X3 );
        POPSTACKTRACE( scrt1_cons_2a( c2525, 
                                      CONS( PAIR_CAR( X2 ), X3 ) ) );
}

TSCP  scexpnd1_l2812( x2813, e2814 )
        TSCP  x2813, e2814;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2812 [inside TOP-LEVEL]" );
        X2 = scexpnd1_cond_2dmacro( x2813 );
        X1 = e2814;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2814, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_case_2dmacro_v );
DEFCSTRING( t3525, "SCEXPND1_CASE-MACRO" );
EXTERNTSCPP( sc_d_2dsymbol_ab4b4447, XAL1( TSCP ) );
EXTERNTSCP( sc_d_2dsymbol_ab4b4447_v );

TSCP  scexpnd1_case_2dmacro( e2817 )
        TSCP  e2817;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3525 );
        if  ( FALSE( scexpand_islist( e2817, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3527;
        if  ( EQ( TSCPTAG( e2817 ), PAIRTAG ) )  goto L3531;
        scrt1__24__cdr_2derror( e2817 );
L3531:
        X5 = PAIR_CDR( e2817 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3534;
        scrt1__24__car_2derror( X5 );
L3534:
        X2 = PAIR_CAR( X5 );
        X3 = sc_d_2dsymbol_ab4b4447( c2890 );
        X5 = PAIR_CDR( e2817 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3538;
        scrt1__24__cdr_2derror( X5 );
L3538:
        X4 = PAIR_CDR( X5 );
        X1 = EMPTYLIST;
L3540:
        X1 = CONS( X1, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L3545;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3549;
        scrt1__24__car_2derror( X4 );
L3549:
        X6 = PAIR_CAR( X4 );
        if  ( FALSE( scexpand_islist( X6, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3545;
        X7 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3556;
        scrt1__24__car_2derror( X7 );
L3556:
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2763 ) ) )  goto L3552;
        X7 = PAIR_CAR( X4 );
        X6 = sc_cons( X7, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
        goto L3553;
L3552:
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3561;
        scrt1__24__car_2derror( X11 );
L3561:
        X9 = CONS( scrt1_cons_2a( c2148, 
                                  CONS( PAIR_CAR( X11 ), X10 ) ), 
                   X9 );
        X8 = scrt1_cons_2a( c2851, CONS( X3, X9 ) );
        X10 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3565;
        scrt1__24__cdr_2derror( X10 );
L3565:
        X9 = PAIR_CDR( X10 );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( X8, 
                            CONS( scrt1_append_2dtwo( X9, X10 ), 
                                  EMPTYLIST ) );
        X6 = sc_cons( X7, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
L3553:
        X6 = PAIR_CDR( X4 );
        X1 = PAIR_CAR( X1 );
        X4 = X6;
        GOBACK( L3540 );
L3527:
        POPSTACKTRACE( scdebug_error( c2818, 
                                      c2819, 
                                      CONS( e2817, EMPTYLIST ) ) );
L3545:
        if  ( FALSE( X4 ) )  goto L3568;
        POPSTACKTRACE( scdebug_error( c2818, 
                                      c2135, 
                                      CONS( e2817, EMPTYLIST ) ) );
L3568:
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_reverse( PAIR_CAR( X1 ) );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2772, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X3, CONS( X2, X7 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2777, 
                                      CONS( scrt1_cons_2a( X6, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X5 ) ) );
}

TSCP  scexpnd1_l2901( x2902, e2903 )
        TSCP  x2902, e2903;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2901 [inside TOP-LEVEL]" );
        X2 = scexpnd1_case_2dmacro( x2902 );
        X1 = e2903;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2903, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_and_2dmacro_v );
DEFCSTRING( t3571, "SCEXPND1_AND-MACRO" );

TSCP  scexpnd1_and_2dmacro( e2906 )
        TSCP  e2906;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3571 );
        if  ( EQ( TSCPTAG( e2906 ), PAIRTAG ) )  goto L3576;
        scrt1__24__cdr_2derror( e2906 );
L3576:
        X1 = PAIR_CDR( e2906 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3573;
        X2 = PAIR_CDR( e2906 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3582;
        scrt1__24__cdr_2derror( X2 );
L3582:
        X1 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3578;
        X1 = PAIR_CDR( e2906 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3586;
        scrt1__24__car_2derror( X1 );
L3586:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3578:
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( c2256, X2 );
        X2 = CONS( scrt1_cons_2a( c2941, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X2 );
        X1 = CONS( scrt1_cons_2a( c2525, CONS( c2256, X2 ) ), 
                   X1 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = PAIR_CDR( e2906 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3590;
        scrt1__24__car_2derror( X4 );
L3590:
        X2 = scrt1_cons_2a( c2256, 
                            CONS( PAIR_CAR( X4 ), X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( e2906 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3594;
        scrt1__24__cdr_2derror( X7 );
L3594:
        X6 = PAIR_CDR( X7 );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2942, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2777, 
                                      CONS( scrt1_cons_2a( X2, 
                                                           CONS( scrt1_cons_2a( c2941, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X5 ) ), 
                                                                                      X4 ) ), 
                                                                 X3 ) ), 
                                            X1 ) ) );
L3573:
        POPSTACKTRACE( TRUEVALUE );
}

TSCP  scexpnd1_l2963( x2964, e2965 )
        TSCP  x2964, e2965;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2963 [inside TOP-LEVEL]" );
        X2 = scexpnd1_and_2dmacro( x2964 );
        X1 = e2965;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2965, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_or_2dmacro_v );
DEFCSTRING( t3597, "SCEXPND1_OR-MACRO" );

TSCP  scexpnd1_or_2dmacro( e2968 )
        TSCP  e2968;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3597 );
        if  ( EQ( TSCPTAG( e2968 ), PAIRTAG ) )  goto L3602;
        scrt1__24__cdr_2derror( e2968 );
L3602:
        X1 = PAIR_CDR( e2968 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3599;
        X2 = PAIR_CDR( e2968 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3608;
        scrt1__24__cdr_2derror( X2 );
L3608:
        X1 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3604;
        X1 = PAIR_CDR( e2968 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3612;
        scrt1__24__car_2derror( X1 );
L3612:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3604:
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2941, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X2 );
        X2 = CONS( c2256, X2 );
        X1 = CONS( scrt1_cons_2a( c2525, CONS( c2256, X2 ) ), 
                   X1 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = PAIR_CDR( e2968 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3616;
        scrt1__24__car_2derror( X4 );
L3616:
        X2 = scrt1_cons_2a( c2256, 
                            CONS( PAIR_CAR( X4 ), X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( e2968 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3620;
        scrt1__24__cdr_2derror( X7 );
L3620:
        X6 = PAIR_CDR( X7 );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2785, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2777, 
                                      CONS( scrt1_cons_2a( X2, 
                                                           CONS( scrt1_cons_2a( c2941, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X5 ) ), 
                                                                                      X4 ) ), 
                                                                 X3 ) ), 
                                            X1 ) ) );
L3599:
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  scexpnd1_l3023( x3024, e3025 )
        TSCP  x3024, e3025;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3023 [inside TOP-LEVEL]" );
        X2 = scexpnd1_or_2dmacro( x3024 );
        X1 = e3025;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3025, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_when_2dmacro_v );
DEFCSTRING( t3623, "SCEXPND1_WHEN-MACRO" );

TSCP  scexpnd1_when_2dmacro( e3028 )
        TSCP  e3028;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3623 );
        if  ( FALSE( scexpand_islist( e3028, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3625;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3028 ), PAIRTAG ) )  goto L3628;
        scrt1__24__cdr_2derror( e3028 );
L3628:
        X3 = PAIR_CDR( e3028 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3631;
        scrt1__24__cdr_2derror( X3 );
L3631:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2396, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = PAIR_CDR( e3028 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3635;
        scrt1__24__car_2derror( X2 );
L3635:
        POPSTACKTRACE( scrt1_cons_2a( c2525, 
                                      CONS( PAIR_CAR( X2 ), X1 ) ) );
L3625:
        POPSTACKTRACE( scdebug_error( c3029, 
                                      c2135, 
                                      CONS( e3028, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l3050( x3051, e3052 )
        TSCP  x3051, e3052;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3050 [inside TOP-LEVEL]" );
        X2 = scexpnd1_when_2dmacro( x3051 );
        X1 = e3052;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3052, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_unless_2dmacro_v );
DEFCSTRING( t3638, "SCEXPND1_UNLESS-MACRO" );

TSCP  scexpnd1_unless_2dmacro( e3055 )
        TSCP  e3055;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3638 );
        if  ( FALSE( scexpand_islist( e3055, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3640;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3055 ), PAIRTAG ) )  goto L3643;
        scrt1__24__cdr_2derror( e3055 );
L3643:
        X3 = PAIR_CDR( e3055 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3646;
        scrt1__24__cdr_2derror( X3 );
L3646:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2396, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( e3055 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3650;
        scrt1__24__car_2derror( X3 );
L3650:
        POPSTACKTRACE( scrt1_cons_2a( c2525, 
                                      CONS( scrt1_cons_2a( c3057, 
                                                           CONS( PAIR_CAR( X3 ), 
                                                                 X2 ) ), 
                                            X1 ) ) );
L3640:
        POPSTACKTRACE( scdebug_error( c3056, 
                                      c2135, 
                                      CONS( e3055, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l3078( x3079, e3080 )
        TSCP  x3079, e3080;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3078 [inside TOP-LEVEL]" );
        X2 = scexpnd1_unless_2dmacro( x3079 );
        X1 = e3080;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3080, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

void scrt4__init();
void sceval__init();
void scrt6__init();
void scrt2__init();
void scdebug__init();
void scrt1__init();
void scexpand__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        sceval__init();
        scrt6__init();
        scrt2__init();
        scdebug__init();
        scrt1__init();
        scexpand__init();
        MAXDISPLAY( 1 );
}

void  scexpnd1__init()
{
        TSCP  X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scexpnd1 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2131, EMPTYLIST );
        scexpand_install_2dexpander( c2130, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2149, EMPTYLIST );
        scexpand_install_2dexpander( c2148, X1 );
        INITIALIZEVAR( t3174, 
                       ADR( scexpnd1_do_2ddefine_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scexpnd1_do_2ddefine, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2163, EMPTYLIST );
        scexpand_install_2dexpander( c2162, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2227, EMPTYLIST );
        scexpand_install_2dexpander( c2226, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2271, EMPTYLIST );
        scexpand_install_2dexpander( c2270, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2312, EMPTYLIST );
        scexpand_install_2dexpander( c2311, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2355, EMPTYLIST );
        scexpand_install_2dexpander( c2354, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2361, EMPTYLIST );
        scexpand_install_2dexpander( c2360, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2367, EMPTYLIST );
        scexpand_install_2dexpander( c2366, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2407, EMPTYLIST );
        scexpand_install_2dexpander( c2137, X1 );
        INITIALIZEVAR( t3346, 
                       ADR( scexpnd1_lambda_2ddefines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_lambda_2ddefines, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2526, EMPTYLIST );
        scexpand_install_2dexpander( c2525, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2554, EMPTYLIST );
        scexpand_install_2dexpander( c2516, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2583, EMPTYLIST );
        scexpand_install_2dexpander( c2396, X1 );
        INITIALIZEVAR( t3429, 
                       ADR( scexpnd1_2dexpander_afd5ebf4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_2dexpander_afd5ebf4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3463, 
                       ADR( scexpnd1_cond_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_cond_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2812, EMPTYLIST );
        scexpand_install_2dexpander( c2772, X1 );
        INITIALIZEVAR( t3525, 
                       ADR( scexpnd1_case_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_case_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2901, EMPTYLIST );
        scexpand_install_2dexpander( c2818, X1 );
        INITIALIZEVAR( t3571, 
                       ADR( scexpnd1_and_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_and_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2963, EMPTYLIST );
        scexpand_install_2dexpander( c2942, X1 );
        INITIALIZEVAR( t3597, 
                       ADR( scexpnd1_or_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_or_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3023, EMPTYLIST );
        scexpand_install_2dexpander( c2785, X1 );
        INITIALIZEVAR( t3623, 
                       ADR( scexpnd1_when_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_when_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3050, EMPTYLIST );
        scexpand_install_2dexpander( c3029, X1 );
        INITIALIZEVAR( t3638, 
                       ADR( scexpnd1_unless_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_unless_2dmacro, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3078, EMPTYLIST );
        scexpand_install_2dexpander( c3056, X1 );
        return;
}
