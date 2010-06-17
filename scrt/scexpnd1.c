
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( c3058 );
DEFSTATICTSCP( c3057 );
DEFSTATICTSCP( c3030 );
DEFSTATICTSCP( c2943 );
DEFSTATICTSCP( c2942 );
DEFCSTRING( t3157, "key" );
DEFSTATICTSCP( c2891 );
DEFSTATICTSCP( c2852 );
DEFCSTRING( t3158, "Illegal form:" );
DEFSTATICTSCP( c2820 );
DEFSTATICTSCP( c2819 );
DEFCSTRING( t3159, "Illegal form ~s:" );
DEFSTATICTSCP( c2792 );
DEFSTATICTSCP( c2791 );
DEFSTATICTSCP( c2786 );
DEFSTATICTSCP( c2785 );
DEFSTATICTSCP( c2784 );
DEFSTATICTSCP( c2779 );
DEFSTATICTSCP( c2778 );
DEFSTATICTSCP( c2773 );
DEFSTATICTSCP( c2764 );
DEFSTATICTSCP( c2746 );
DEFSTATICTSCP( c2720 );
DEFSTATICTSCP( c2525 );
DEFSTATICTSCP( c2516 );
DEFCSTRING( t3160, "Argument not a PAIR: ~s" );
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
DEFCSTRING( t3161, "***** ~s is redefined~%" );
DEFSTATICTSCP( c2161 );
DEFSTATICTSCP( c2148 );
DEFSTATICTSCP( c2137 );
DEFSTATICTSCP( c2136 );
DEFCSTRING( t3162, "Illegal form: ~s" );
DEFSTATICTSCP( c2135 );
DEFSTATICTSCP( c2130 );

static void  init_constants()
{
        c3058 = STRINGTOSYMBOL( CSTRING_TSCP( "NOT" ) );
        CONSTANTEXP( ADR( c3058 ) );
        c3057 = STRINGTOSYMBOL( CSTRING_TSCP( "UNLESS" ) );
        CONSTANTEXP( ADR( c3057 ) );
        c3030 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN" ) );
        CONSTANTEXP( ADR( c3030 ) );
        c2943 = STRINGTOSYMBOL( CSTRING_TSCP( "AND" ) );
        CONSTANTEXP( ADR( c2943 ) );
        c2942 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK" ) );
        CONSTANTEXP( ADR( c2942 ) );
        c2891 = CSTRING_TSCP( t3157 );
        CONSTANTEXP( ADR( c2891 ) );
        c2852 = STRINGTOSYMBOL( CSTRING_TSCP( "MEMV" ) );
        CONSTANTEXP( ADR( c2852 ) );
        c2820 = CSTRING_TSCP( t3158 );
        CONSTANTEXP( ADR( c2820 ) );
        c2819 = STRINGTOSYMBOL( CSTRING_TSCP( "CASE" ) );
        CONSTANTEXP( ADR( c2819 ) );
        c2792 = CSTRING_TSCP( t3159 );
        CONSTANTEXP( ADR( c2792 ) );
        c2791 = STRINGTOSYMBOL( CSTRING_TSCP( "COND-CLAUSE" ) );
        CONSTANTEXP( ADR( c2791 ) );
        c2786 = STRINGTOSYMBOL( CSTRING_TSCP( "OR" ) );
        CONSTANTEXP( ADR( c2786 ) );
        c2785 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK3" ) );
        CONSTANTEXP( ADR( c2785 ) );
        c2784 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK2" ) );
        CONSTANTEXP( ADR( c2784 ) );
        c2779 = STRINGTOSYMBOL( CSTRING_TSCP( "TEST-RESULT" ) );
        CONSTANTEXP( ADR( c2779 ) );
        c2778 = STRINGTOSYMBOL( CSTRING_TSCP( "LET" ) );
        CONSTANTEXP( ADR( c2778 ) );
        c2773 = STRINGTOSYMBOL( CSTRING_TSCP( "COND" ) );
        CONSTANTEXP( ADR( c2773 ) );
        c2764 = STRINGTOSYMBOL( CSTRING_TSCP( "ELSE" ) );
        CONSTANTEXP( ADR( c2764 ) );
        c2746 = STRINGTOSYMBOL( CSTRING_TSCP( "=>" ) );
        CONSTANTEXP( ADR( c2746 ) );
        c2720 = EMPTYLIST;
        c2720 = CONS( c2764, c2720 );
        CONSTANTEXP( ADR( c2720 ) );
        c2525 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2525 ) );
        c2516 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2516 ) );
        c2458 = CSTRING_TSCP( t3160 );
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
        c2161 = CSTRING_TSCP( t3161 );
        CONSTANTEXP( ADR( c2161 ) );
        c2148 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2148 ) );
        c2137 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2137 ) );
        c2136 = STRINGTOSYMBOL( CSTRING_TSCP( "MAKE-PROMISE" ) );
        CONSTANTEXP( ADR( c2136 ) );
        c2135 = CSTRING_TSCP( t3162 );
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
            )  goto L3164;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( x2132 ), PAIRTAG ) )  goto L3167;
        scrt1__24__cdr_2derror( x2132 );
L3167:
        X5 = PAIR_CDR( x2132 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3170;
        scrt1__24__car_2derror( X5 );
L3170:
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
L3164:
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
            )  goto L3173;
        POPSTACKTRACE( scdebug_error( c2148, 
                                      c2135, 
                                      CONS( x2150, EMPTYLIST ) ) );
L3173:
        POPSTACKTRACE( x2150 );
}

DEFTSCP( scexpnd1_do_2ddefine_v );
DEFCSTRING( t3175, "DO-DEFINE" );
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

        PUSHSTACKTRACE( t3175 );
        X1 = scrt2_top_2dlevel_2dvalue( s2154 );
        scrt2_2dvalue_21_c9d2a496( s2154, v2155 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( sc_undefined ) ) )  goto L3178;
        X2 = scrt6_format( c2161, CONS( s2154, EMPTYLIST ) );
        scrt6_display( X2, EMPTYLIST );
L3178:
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
        if  ( FALSE( X1 ) )  goto L3197;
        if  ( EQ( TSCPTAG( x2164 ), PAIRTAG ) )  goto L3188;
        scrt1__24__cdr_2derror( x2164 );
L3188:
        X3 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3191;
        scrt1__24__car_2derror( X3 );
L3191:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3197;
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
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3195;
        scrt1__24__car_2derror( X4 );
L3195:
        POPSTACKTRACE( scrt1_cons_2a( c2205, 
                                      CONS( scrt1_cons_2a( c2148, 
                                                           CONS( PAIR_CAR( X4 ), 
                                                                 X3 ) ), 
                                            X2 ) ) );
L3197:
        X1 = scexpand_islist( x2164, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3218;
        if  ( EQ( TSCPTAG( x2164 ), PAIRTAG ) )  goto L3206;
        scrt1__24__cdr_2derror( x2164 );
L3206:
        X3 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3209;
        scrt1__24__car_2derror( X3 );
L3209:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3218;
        X2 = scrt1_caadr( x2164 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3218;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( x2164 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3215;
        scrt1__24__cdr_2derror( X7 );
L3215:
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
L3218:
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
        if  ( FALSE( X1 ) )  goto L3241;
        if  ( EQ( TSCPTAG( x2228 ), PAIRTAG ) )  goto L3228;
        scrt1__24__cdr_2derror( x2228 );
L3228:
        X3 = PAIR_CDR( x2228 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3231;
        scrt1__24__car_2derror( X3 );
L3231:
        X2 = PAIR_CAR( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3241;
        X2 = scrt1_caadr( x2228 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3241;
        X2 = scrt1_caadr( x2228 );
        X3 = scrt1_cdadr( x2228 );
        X5 = PAIR_CDR( x2228 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3237;
        scrt1__24__cdr_2derror( X5 );
L3237:
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
L3241:
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
        if  ( FALSE( X1 ) )  goto L3264;
        if  ( EQ( TSCPTAG( x2272 ), PAIRTAG ) )  goto L3250;
        scrt1__24__cdr_2derror( x2272 );
L3250:
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3253;
        scrt1__24__car_2derror( X3 );
L3253:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3264;
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3258;
        scrt1__24__car_2derror( X3 );
L3258:
        X2 = PAIR_CAR( X3 );
        X4 = scrt1_caddr( x2272 );
        X3 = sceval_eval( X4, EMPTYLIST );
        scexpand_install_2dexpander( X2, X3 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( x2272 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3262;
        scrt1__24__car_2derror( X3 );
L3262:
        POPSTACKTRACE( scrt1_cons_2a( c2148, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3264:
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
        if  ( FALSE( X1 ) )  goto L3288;
        if  ( EQ( TSCPTAG( x2313 ), PAIRTAG ) )  goto L3273;
        scrt1__24__cdr_2derror( x2313 );
L3273:
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3276;
        scrt1__24__car_2derror( X3 );
L3276:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3288;
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3281;
        scrt1__24__car_2derror( X3 );
L3281:
        X2 = PAIR_CAR( X3 );
        X6 = scrt1_caddr( x2313 );
        X5 = sceval_eval( X6, EMPTYLIST );
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = X4;
        scexpand_install_2dexpander( X2, X3 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( x2313 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3286;
        scrt1__24__car_2derror( X3 );
L3286:
        POPSTACKTRACE( scrt1_cons_2a( c2148, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3288:
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
        if  ( FALSE( X1 ) )  goto L3316;
        if  ( EQ( TSCPTAG( x2368 ), PAIRTAG ) )  goto L3301;
        scrt1__24__cdr_2derror( x2368 );
L3301:
        X3 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3304;
        scrt1__24__car_2derror( X3 );
L3304:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scexpand_islist( X2, _TSCP( 4 ), EMPTYLIST ) )
            )  goto L3316;
        X3 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3310;
        scrt1__24__car_2derror( X3 );
L3310:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scrt1_memq( c2385, X2 ) ) )  goto L3306;
        X5 = PAIR_CDR( x2368 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3314;
        scrt1__24__cdr_2derror( X5 );
L3314:
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
L3306:
        POPSTACKTRACE( FALSEVALUE );
L3316:
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
            )  goto L3319;
        if  ( EQ( TSCPTAG( x2408 ), PAIRTAG ) )  goto L3322;
        scrt1__24__cdr_2derror( x2408 );
L3322:
        X6 = PAIR_CDR( x2408 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3325;
        scrt1__24__cdr_2derror( X6 );
L3325:
        X5 = PAIR_CDR( X6 );
        X6 = X5;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L3329:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3330;
        X4 = X7;
        goto L3337;
L3330:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3333;
        scrt1__24__car_2derror( X6 );
L3333:
        X12 = PAIR_CAR( X6 );
        X11 = X1;
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                            X1, 
                                            PROCEDURE_CLOSURE( X11 ) );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3336;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L3329 );
L3336:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3341;
        scdebug_error( c2457, 
                       c2458, CONS( X8, EMPTYLIST ) );
L3341:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L3329 );
L3337:
        X3 = scexpnd1_lambda_2ddefines( X4 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_append_2dtwo( X3, X4 ), EMPTYLIST );
        X3 = PAIR_CDR( x2408 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3345;
        scrt1__24__car_2derror( X3 );
L3345:
        POPSTACKTRACE( scrt1_cons_2a( c2137, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3319:
        POPSTACKTRACE( scdebug_error( c2137, 
                                      c2135, 
                                      CONS( x2408, EMPTYLIST ) ) );
}

DEFTSCP( scexpnd1_lambda_2ddefines_v );
DEFCSTRING( t3347, "SCEXPND1_LAMBDA-DEFINES" );
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

        PUSHSTACKTRACE( t3347 );
        X1 = b2482;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L3350:
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3351;
        X5 = PAIR_CAR( X1 );
        X6 = BOOLEAN( NEQ( TSCPTAG( X5 ), PAIRTAG ) );
        if  ( TRUE( X6 ) )  goto L3359;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3363;
        scrt1__24__car_2derror( X5 );
L3363:
        X7 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( c2205 ) ) )  goto L3359;
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
        GOBACK( L3350 );
L3351:
        if  ( FALSE( X3 ) )  goto L3366;
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
L3366:
        POPSTACKTRACE( b2482 );
L3359:
        X6 = PAIR_CDR( X1 );
        X7 = sc_cons( X5, X2 );
        X2 = X7;
        X1 = X6;
        GOBACK( L3350 );
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
            )  goto L3370;
        if  ( EQ( TSCPTAG( x2527 ), PAIRTAG ) )  goto L3373;
        scrt1__24__cdr_2derror( x2527 );
L3373:
        X6 = PAIR_CDR( x2527 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3376;
        scrt1__24__car_2derror( X6 );
L3376:
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
L3370:
        if  ( FALSE( scexpand_islist( x2527, 
                                      _TSCP( 16 ), 
                                      CONS( _TSCP( 16 ), EMPTYLIST ) ) )
            )  goto L3379;
        if  ( EQ( TSCPTAG( x2527 ), PAIRTAG ) )  goto L3382;
        scrt1__24__cdr_2derror( x2527 );
L3382:
        X6 = PAIR_CDR( x2527 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3385;
        scrt1__24__car_2derror( X6 );
L3385:
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
L3379:
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
        if  ( FALSE( X1 ) )  goto L3405;
        if  ( EQ( TSCPTAG( x2555 ), PAIRTAG ) )  goto L3396;
        scrt1__24__cdr_2derror( x2555 );
L3396:
        X3 = PAIR_CDR( x2555 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3399;
        scrt1__24__car_2derror( X3 );
L3399:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L3405;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_caddr( x2555 );
        X3 = e2556;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = CONS( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                e2556, 
                                                PROCEDURE_CLOSURE( X3 ) ), 
                   X2 );
        X3 = PAIR_CDR( x2555 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3403;
        scrt1__24__car_2derror( X3 );
L3403:
        POPSTACKTRACE( scrt1_cons_2a( c2516, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L3405:
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
            )  goto L3407;
        if  ( FALSE( scexpand_islist( x2584, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3409;
        if  ( EQ( TSCPTAG( x2584 ), PAIRTAG ) )  goto L3412;
        scrt1__24__cdr_2derror( x2584 );
L3412:
        X2 = PAIR_CDR( x2584 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L3416:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3417;
        X1 = X4;
        goto L3424;
L3417:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3420;
        scrt1__24__car_2derror( X3 );
L3420:
        X9 = PAIR_CAR( X3 );
        X8 = e2585;
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X9, 
                                          e2585, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3423;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L3416 );
L3423:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3428;
        scdebug_error( c2457, 
                       c2458, CONS( X5, EMPTYLIST ) );
L3428:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L3416 );
L3424:
        X2 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2396, 
                                      CONS( scrt1_append_2dtwo( X1, X2 ), 
                                            EMPTYLIST ) ) );
L3409:
        if  ( FALSE( scdebug_error_v ) )  goto L3430;
        POPSTACKTRACE( x2584 );
L3430:
        POPSTACKTRACE( FALSEVALUE );
L3407:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scexpnd1_2dexpander_afd5ebf4_v );
DEFCSTRING( t3433, "SCEXPND1_INTERNAL-BEGIN-EXPANDER" );

TSCP  scexpnd1_l2637( e2638, e2639, c3435 )
        TSCP  e2638, e2639, c3435;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2637 [inside INTERNAL-BEGIN-EXPANDER]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3435, 0 );
        X3 = BOOLEAN( EQ( TSCPTAG( e2638 ), PAIRTAG ) );
        if  ( FALSE( X3 ) )  goto L3465;
        if  ( EQ( TSCPTAG( e2638 ), PAIRTAG ) )  goto L3444;
        scrt1__24__car_2derror( e2638 );
L3444:
        X4 = PAIR_CAR( e2638 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2396 ) ) )  goto L3465;
        if  ( FALSE( scexpand_islist( e2638, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3446;
        X6 = PAIR_CDR( e2638 );
        X7 = X6;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L3451:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3452;
        X5 = X8;
        goto L3459;
L3452:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3455;
        scrt1__24__car_2derror( X7 );
L3455:
        X13 = PAIR_CAR( X7 );
        X12 = e2639;
        X12 = UNKNOWNCALL( X12, 2 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( X13, 
                                            e2639, 
                                            PROCEDURE_CLOSURE( X12 ) );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3458;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L3451 );
L3458:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3463;
        scdebug_error( c2457, 
                       c2458, CONS( X9, EMPTYLIST ) );
L3463:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L3451 );
L3459:
        X4 = scexpnd1_lambda_2ddefines( X5 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2396, 
                            CONS( scrt1_append_2dtwo( X4, X5 ), 
                                  EMPTYLIST ) );
        goto L3466;
L3446:
        X2 = scdebug_error( c2396, 
                            c2135, CONS( e2638, EMPTYLIST ) );
        goto L3466;
L3465:
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( e2638, 
                                          e2639, 
                                          PROCEDURE_CLOSURE( X3 ) );
L3466:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scexpnd1_2dexpander_afd5ebf4( o2636 )
        TSCP  o2636;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3433 );
        DISPLAY( 0 ) = o2636;
        SDVAL = MAKEPROCEDURE( 2, 
                               0, 
                               scexpnd1_l2637, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scexpnd1_cond_2dmacro_v );
DEFCSTRING( t3467, "SCEXPND1_COND-MACRO" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  scexpnd1_cond_2dmacro( e2702 )
        TSCP  e2702;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3467 );
        if  ( EQ( TSCPTAG( e2702 ), PAIRTAG ) )  goto L3470;
        scrt1__24__cdr_2derror( e2702 );
L3470:
        X3 = PAIR_CDR( e2702 );
        if  ( FALSE( X3 ) )  goto L3473;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3476;
        scrt1__24__car_2derror( X3 );
L3476:
        X2 = PAIR_CAR( X3 );
        goto L3474;
L3473:
        X2 = X3;
L3474:
        if  ( FALSE( X2 ) )  goto L3479;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3482;
        scrt1__24__cdr_2derror( X3 );
L3482:
        X1 = PAIR_CDR( X3 );
        goto L3480;
L3479:
        X1 = X2;
L3480:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3485;
        X4 = BOOLEAN( NEQ( TSCPTAG( X2 ), PAIRTAG ) );
        if  ( TRUE( X4 ) )  goto L3491;
        if  ( TRUE( scrt1_equal_3f( X2, c2720 ) ) )  goto L3491;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3497;
        scrt1__24__cdr_2derror( X2 );
L3497:
        X5 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3494;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2773, 
                                  CONS( scrt1_append_2dtwo( X1, X6 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2786, 
                                      CONS( PAIR_CAR( X2 ), X5 ) ) );
L3494:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3501;
        scrt1__24__cdr_2derror( X2 );
L3501:
        X7 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3504;
        scrt1__24__car_2derror( X7 );
L3504:
        X6 = PAIR_CAR( X7 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2746 ) ) );
        if  ( FALSE( X5 ) )  goto L3520;
        X6 = scrt1_length( X2 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L3512;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 12 ) ) ) )  goto L3516;
        goto L3520;
L3512:
        if  ( TRUE( scrt2__3d_2dtwo( X6, _TSCP( 12 ) ) ) )  goto L3516;
        goto L3520;
L3485:
        POPSTACKTRACE( FALSEVALUE );
L3491:
        POPSTACKTRACE( scdebug_error( c2791, 
                                      c2792, 
                                      CONS( e2702, EMPTYLIST ) ) );
L3516:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( c2785, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X4 );
        X5 = scrt1_cons_2a( c2784, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( X5, CONS( c2779, X6 ) ), 
                   X4 );
        X3 = CONS( scrt1_cons_2a( c2525, CONS( c2779, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2779, 
                            CONS( PAIR_CAR( X2 ), X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( c2773, 
                                  CONS( scrt1_append_2dtwo( X1, X8 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        X5 = CONS( scrt1_cons_2a( c2785, 
                                  CONS( scrt1_cons_2a( c2137, 
                                                       CONS( EMPTYLIST, 
                                                             X7 ) ), 
                                        X6 ) ), 
                   X5 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_caddr( X2 ), X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2778, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( scrt1_cons_2a( c2784, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X7 ) ), 
                                                                                      X6 ) ), 
                                                                 X5 ) ), 
                                            X3 ) ) );
L3520:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2764 ) ) )  goto L3522;
        X3 = PAIR_CDR( X2 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2396, 
                                      CONS( scrt1_append_2dtwo( X3, X4 ), 
                                            EMPTYLIST ) ) );
L3522:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2773, 
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

TSCP  scexpnd1_l2813( x2814, e2815 )
        TSCP  x2814, e2815;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2813 [inside TOP-LEVEL]" );
        X2 = scexpnd1_cond_2dmacro( x2814 );
        X1 = e2815;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2815, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_case_2dmacro_v );
DEFCSTRING( t3529, "SCEXPND1_CASE-MACRO" );
EXTERNTSCPP( sc_d_2dsymbol_ab4b4447, XAL1( TSCP ) );
EXTERNTSCP( sc_d_2dsymbol_ab4b4447_v );

TSCP  scexpnd1_case_2dmacro( e2818 )
        TSCP  e2818;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3529 );
        if  ( FALSE( scexpand_islist( e2818, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3531;
        if  ( EQ( TSCPTAG( e2818 ), PAIRTAG ) )  goto L3535;
        scrt1__24__cdr_2derror( e2818 );
L3535:
        X5 = PAIR_CDR( e2818 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3538;
        scrt1__24__car_2derror( X5 );
L3538:
        X2 = PAIR_CAR( X5 );
        X3 = sc_d_2dsymbol_ab4b4447( c2891 );
        X5 = PAIR_CDR( e2818 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3542;
        scrt1__24__cdr_2derror( X5 );
L3542:
        X4 = PAIR_CDR( X5 );
        X1 = EMPTYLIST;
L3544:
        X1 = CONS( X1, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L3549;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3553;
        scrt1__24__car_2derror( X4 );
L3553:
        X6 = PAIR_CAR( X4 );
        if  ( FALSE( scexpand_islist( X6, _TSCP( 8 ), EMPTYLIST ) )
            )  goto L3549;
        X7 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3560;
        scrt1__24__car_2derror( X7 );
L3560:
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2764 ) ) )  goto L3556;
        X7 = PAIR_CAR( X4 );
        X6 = sc_cons( X7, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
        goto L3557;
L3556:
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3565;
        scrt1__24__car_2derror( X11 );
L3565:
        X9 = CONS( scrt1_cons_2a( c2148, 
                                  CONS( PAIR_CAR( X11 ), X10 ) ), 
                   X9 );
        X8 = scrt1_cons_2a( c2852, CONS( X3, X9 ) );
        X10 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3569;
        scrt1__24__cdr_2derror( X10 );
L3569:
        X9 = PAIR_CDR( X10 );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = scrt1_cons_2a( X8, 
                            CONS( scrt1_append_2dtwo( X9, X10 ), 
                                  EMPTYLIST ) );
        X6 = sc_cons( X7, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
L3557:
        X6 = PAIR_CDR( X4 );
        X1 = PAIR_CAR( X1 );
        X4 = X6;
        GOBACK( L3544 );
L3531:
        POPSTACKTRACE( scdebug_error( c2819, 
                                      c2820, 
                                      CONS( e2818, EMPTYLIST ) ) );
L3549:
        if  ( FALSE( X4 ) )  goto L3572;
        POPSTACKTRACE( scdebug_error( c2819, 
                                      c2135, 
                                      CONS( e2818, EMPTYLIST ) ) );
L3572:
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_reverse( PAIR_CAR( X1 ) );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2773, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X3, CONS( X2, X7 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2778, 
                                      CONS( scrt1_cons_2a( X6, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X5 ) ) );
}

TSCP  scexpnd1_l2902( x2903, e2904 )
        TSCP  x2903, e2904;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2902 [inside TOP-LEVEL]" );
        X2 = scexpnd1_case_2dmacro( x2903 );
        X1 = e2904;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2904, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_and_2dmacro_v );
DEFCSTRING( t3575, "SCEXPND1_AND-MACRO" );

TSCP  scexpnd1_and_2dmacro( e2907 )
        TSCP  e2907;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3575 );
        if  ( EQ( TSCPTAG( e2907 ), PAIRTAG ) )  goto L3580;
        scrt1__24__cdr_2derror( e2907 );
L3580:
        X1 = PAIR_CDR( e2907 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3577;
        X2 = PAIR_CDR( e2907 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3586;
        scrt1__24__cdr_2derror( X2 );
L3586:
        X1 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3582;
        X1 = PAIR_CDR( e2907 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3590;
        scrt1__24__car_2derror( X1 );
L3590:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3582:
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( c2256, X2 );
        X2 = CONS( scrt1_cons_2a( c2942, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X2 );
        X1 = CONS( scrt1_cons_2a( c2525, CONS( c2256, X2 ) ), 
                   X1 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = PAIR_CDR( e2907 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3594;
        scrt1__24__car_2derror( X4 );
L3594:
        X2 = scrt1_cons_2a( c2256, 
                            CONS( PAIR_CAR( X4 ), X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( e2907 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3598;
        scrt1__24__cdr_2derror( X7 );
L3598:
        X6 = PAIR_CDR( X7 );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2943, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2778, 
                                      CONS( scrt1_cons_2a( X2, 
                                                           CONS( scrt1_cons_2a( c2942, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X5 ) ), 
                                                                                      X4 ) ), 
                                                                 X3 ) ), 
                                            X1 ) ) );
L3577:
        POPSTACKTRACE( TRUEVALUE );
}

TSCP  scexpnd1_l2964( x2965, e2966 )
        TSCP  x2965, e2966;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l2964 [inside TOP-LEVEL]" );
        X2 = scexpnd1_and_2dmacro( x2965 );
        X1 = e2966;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2966, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_or_2dmacro_v );
DEFCSTRING( t3601, "SCEXPND1_OR-MACRO" );

TSCP  scexpnd1_or_2dmacro( e2969 )
        TSCP  e2969;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3601 );
        if  ( EQ( TSCPTAG( e2969 ), PAIRTAG ) )  goto L3606;
        scrt1__24__cdr_2derror( e2969 );
L3606:
        X1 = PAIR_CDR( e2969 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3603;
        X2 = PAIR_CDR( e2969 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3612;
        scrt1__24__cdr_2derror( X2 );
L3612:
        X1 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3608;
        X1 = PAIR_CDR( e2969 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3616;
        scrt1__24__car_2derror( X1 );
L3616:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3608:
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2942, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X2 );
        X2 = CONS( c2256, X2 );
        X1 = CONS( scrt1_cons_2a( c2525, CONS( c2256, X2 ) ), 
                   X1 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = PAIR_CDR( e2969 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3620;
        scrt1__24__car_2derror( X4 );
L3620:
        X2 = scrt1_cons_2a( c2256, 
                            CONS( PAIR_CAR( X4 ), X3 ) );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CDR( e2969 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3624;
        scrt1__24__cdr_2derror( X7 );
L3624:
        X6 = PAIR_CDR( X7 );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2786, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2778, 
                                      CONS( scrt1_cons_2a( X2, 
                                                           CONS( scrt1_cons_2a( c2942, 
                                                                                CONS( scrt1_cons_2a( c2137, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X5 ) ), 
                                                                                      X4 ) ), 
                                                                 X3 ) ), 
                                            X1 ) ) );
L3603:
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  scexpnd1_l3024( x3025, e3026 )
        TSCP  x3025, e3026;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3024 [inside TOP-LEVEL]" );
        X2 = scexpnd1_or_2dmacro( x3025 );
        X1 = e3026;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3026, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_when_2dmacro_v );
DEFCSTRING( t3627, "SCEXPND1_WHEN-MACRO" );

TSCP  scexpnd1_when_2dmacro( e3029 )
        TSCP  e3029;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3627 );
        if  ( FALSE( scexpand_islist( e3029, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3629;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3029 ), PAIRTAG ) )  goto L3632;
        scrt1__24__cdr_2derror( e3029 );
L3632:
        X3 = PAIR_CDR( e3029 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3635;
        scrt1__24__cdr_2derror( X3 );
L3635:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2396, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = PAIR_CDR( e3029 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3639;
        scrt1__24__car_2derror( X2 );
L3639:
        POPSTACKTRACE( scrt1_cons_2a( c2525, 
                                      CONS( PAIR_CAR( X2 ), X1 ) ) );
L3629:
        POPSTACKTRACE( scdebug_error( c3030, 
                                      c2135, 
                                      CONS( e3029, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l3051( x3052, e3053 )
        TSCP  x3052, e3053;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3051 [inside TOP-LEVEL]" );
        X2 = scexpnd1_when_2dmacro( x3052 );
        X1 = e3053;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3053, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd1_unless_2dmacro_v );
DEFCSTRING( t3642, "SCEXPND1_UNLESS-MACRO" );

TSCP  scexpnd1_unless_2dmacro( e3056 )
        TSCP  e3056;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3642 );
        if  ( FALSE( scexpand_islist( e3056, 
                                      _TSCP( 12 ), EMPTYLIST ) )
            )  goto L3644;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3056 ), PAIRTAG ) )  goto L3647;
        scrt1__24__cdr_2derror( e3056 );
L3647:
        X3 = PAIR_CDR( e3056 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3650;
        scrt1__24__cdr_2derror( X3 );
L3650:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2396, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( e3056 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3654;
        scrt1__24__car_2derror( X3 );
L3654:
        POPSTACKTRACE( scrt1_cons_2a( c2525, 
                                      CONS( scrt1_cons_2a( c3058, 
                                                           CONS( PAIR_CAR( X3 ), 
                                                                 X2 ) ), 
                                            X1 ) ) );
L3644:
        POPSTACKTRACE( scdebug_error( c3057, 
                                      c2135, 
                                      CONS( e3056, EMPTYLIST ) ) );
}

TSCP  scexpnd1_l3079( x3080, e3081 )
        TSCP  x3080, e3081;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd1_l3079 [inside TOP-LEVEL]" );
        X2 = scexpnd1_unless_2dmacro( x3080 );
        X1 = e3081;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3081, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

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
        INITIALIZEVAR( t3175, 
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
        INITIALIZEVAR( t3347, 
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
        INITIALIZEVAR( t3433, 
                       ADR( scexpnd1_2dexpander_afd5ebf4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_2dexpander_afd5ebf4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3467, 
                       ADR( scexpnd1_cond_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_cond_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2813, EMPTYLIST );
        scexpand_install_2dexpander( c2773, X1 );
        INITIALIZEVAR( t3529, 
                       ADR( scexpnd1_case_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_case_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2902, EMPTYLIST );
        scexpand_install_2dexpander( c2819, X1 );
        INITIALIZEVAR( t3575, 
                       ADR( scexpnd1_and_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_and_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l2964, EMPTYLIST );
        scexpand_install_2dexpander( c2943, X1 );
        INITIALIZEVAR( t3601, 
                       ADR( scexpnd1_or_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_or_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3024, EMPTYLIST );
        scexpand_install_2dexpander( c2786, X1 );
        INITIALIZEVAR( t3627, 
                       ADR( scexpnd1_when_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_when_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3051, EMPTYLIST );
        scexpand_install_2dexpander( c3030, X1 );
        INITIALIZEVAR( t3642, 
                       ADR( scexpnd1_unless_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd1_unless_2dmacro, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd1_l3079, EMPTYLIST );
        scexpand_install_2dexpander( c3057, X1 );
        return;
}
