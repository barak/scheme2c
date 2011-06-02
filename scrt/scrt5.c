
/* SCHEME->C */

#include <objects.h>

void scrt5__init();
DEFCSTRING( t3240, "Argument is not a PORT: ~s" );
DEFSTATICTSCP( c3090 );
DEFSTATICTSCP( c3078 );
DEFCSTRING( t3241, "Argument(s) incorrect" );
DEFSTATICTSCP( c2810 );
DEFCSTRING( t3242, "Argument is not a CHAR: ~s" );
DEFSTATICTSCP( c2789 );
DEFSTATICTSCP( c2786 );
DEFSTATICTSCP( c2612 );
DEFSTATICTSCP( c2608 );
DEFSTATICTSCP( c2604 );
DEFSTATICTSCP( c2600 );
DEFSTATICTSCP( c2596 );
DEFSTATICTSCP( c2592 );
DEFSTATICTSCP( c2588 );
DEFSTATICTSCP( c2584 );
DEFSTATICTSCP( c2580 );
DEFSTATICTSCP( c2576 );
DEFSTATICTSCP( c2572 );
DEFSTATICTSCP( c2568 );
DEFSTATICTSCP( c2564 );
DEFSTATICTSCP( c2560 );
DEFSTATICTSCP( c2556 );
DEFSTATICTSCP( c2546 );
DEFSTATICTSCP( c2542 );
DEFSTATICTSCP( c2535 );
DEFSTATICTSCP( c2503 );
DEFCSTRING( t3243, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2430 );
DEFSTATICTSCP( c2429 );
DEFCSTRING( t3244, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2408 );
DEFSTATICTSCP( c2407 );
DEFSTATICTSCP( c2370 );
DEFSTATICTSCP( c2330 );
DEFCSTRING( t3245, "Argument(s) not CHAR: ~s ~s" );
DEFSTATICTSCP( c2321 );
DEFSTATICTSCP( c2320 );
DEFCSTRING( t3246, ": ~s" );
DEFSTATICTSCP( c2272 );
DEFCSTRING( t3247, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2269 );
DEFSTATICTSCP( c2268 );
DEFSTATICTSCP( c2256 );
DEFSTATICTSCP( c2247 );
DEFSTATICTSCP( c2229 );
DEFSTATICTSCP( t3248 );
DEFSTATICTSCP( t3249 );
DEFSTATICTSCP( c2228 );
DEFSTATICTSCP( c2221 );
DEFSTATICTSCP( c2187 );
DEFSTATICTSCP( c2171 );
DEFCSTRING( t3250, "w" );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2147 );
DEFCSTRING( t3251, "r" );
DEFSTATICTSCP( c2141 );
DEFCSTRING( t3252, "Argument is not a PROCEDURE: ~s" );
DEFSTATICTSCP( c2136 );
DEFSTATICTSCP( c2135 );

static void  init_constants()
{
        c3090 = CSTRING_TSCP( t3240 );
        CONSTANTEXP( ADR( c3090 ) );
        c3078 = STRINGTOSYMBOL( CSTRING_TSCP( "GET-OUTPUT-STRING" ) );
        CONSTANTEXP( ADR( c3078 ) );
        c2810 = CSTRING_TSCP( t3241 );
        CONSTANTEXP( ADR( c2810 ) );
        c2789 = CSTRING_TSCP( t3242 );
        CONSTANTEXP( ADR( c2789 ) );
        c2786 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-SET!" ) );
        CONSTANTEXP( ADR( c2786 ) );
        c2612 = STRINGTOSYMBOL( CSTRING_TSCP( "FILE-PORT" ) );
        CONSTANTEXP( ADR( c2612 ) );
        c2608 = STRINGTOSYMBOL( CSTRING_TSCP( "ECHO!" ) );
        CONSTANTEXP( ADR( c2608 ) );
        c2604 = STRINGTOSYMBOL( CSTRING_TSCP( "ECHO" ) );
        CONSTANTEXP( ADR( c2604 ) );
        c2600 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-PRETTY!" ) );
        CONSTANTEXP( ADR( c2600 ) );
        c2596 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-PRETTY" ) );
        CONSTANTEXP( ADR( c2596 ) );
        c2592 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LENGTH!" ) );
        CONSTANTEXP( ADR( c2592 ) );
        c2588 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LENGTH" ) );
        CONSTANTEXP( ADR( c2588 ) );
        c2584 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LEVEL!" ) );
        CONSTANTEXP( ADR( c2584 ) );
        c2580 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LEVEL" ) );
        CONSTANTEXP( ADR( c2580 ) );
        c2576 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CIRCLE!" ) );
        CONSTANTEXP( ADR( c2576 ) );
        c2572 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CIRCLE" ) );
        CONSTANTEXP( ADR( c2572 ) );
        c2568 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-FLUSH" ) );
        CONSTANTEXP( ADR( c2568 ) );
        c2564 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-COUNT" ) );
        CONSTANTEXP( ADR( c2564 ) );
        c2560 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-WIDTH!" ) );
        CONSTANTEXP( ADR( c2560 ) );
        c2556 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-WIDTH" ) );
        CONSTANTEXP( ADR( c2556 ) );
        c2546 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-READY?" ) );
        CONSTANTEXP( ADR( c2546 ) );
        c2542 = STRINGTOSYMBOL( CSTRING_TSCP( "PEEK-CHAR" ) );
        CONSTANTEXP( ADR( c2542 ) );
        c2535 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSE-PORT" ) );
        CONSTANTEXP( ADR( c2535 ) );
        c2503 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-TOKEN" ) );
        CONSTANTEXP( ADR( c2503 ) );
        c2430 = CSTRING_TSCP( t3243 );
        CONSTANTEXP( ADR( c2430 ) );
        c2429 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2429 ) );
        c2408 = CSTRING_TSCP( t3244 );
        CONSTANTEXP( ADR( c2408 ) );
        c2407 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c2407 ) );
        c2370 = STRINGTOSYMBOL( CSTRING_TSCP( "MAKE-FILE-PORT" ) );
        CONSTANTEXP( ADR( c2370 ) );
        c2330 = EMPTYLIST;
        c2330 = CONS( _TSCP( 2578 ), c2330 );
        c2330 = CONS( _TSCP( 3346 ), c2330 );
        c2330 = CONS( _TSCP( 2578 ), c2330 );
        CONSTANTEXP( ADR( c2330 ) );
        c2321 = CSTRING_TSCP( t3245 );
        CONSTANTEXP( ADR( c2321 ) );
        c2320 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR<?" ) );
        CONSTANTEXP( ADR( c2320 ) );
        c2272 = CSTRING_TSCP( t3246 );
        CONSTANTEXP( ADR( c2272 ) );
        c2269 = CSTRING_TSCP( t3247 );
        CONSTANTEXP( ADR( c2269 ) );
        c2268 = STRINGTOSYMBOL( CSTRING_TSCP( "FILENAME->FILE" ) );
        CONSTANTEXP( ADR( c2268 ) );
        c2256 = STRINGTOSYMBOL( CSTRING_TSCP( "WITH-OUTPUT-TO-FILE" ) );
        CONSTANTEXP( ADR( c2256 ) );
        c2247 = STRINGTOSYMBOL( CSTRING_TSCP( "WITH-INPUT-FROM-FILE" ) );
        CONSTANTEXP( ADR( c2247 ) );
        c2229 = EMPTYLIST;
        t3248 = STRINGTOSYMBOL( CSTRING_TSCP( "INTERACTIVE" ) );
        c2229 = CONS( t3248, c2229 );
        t3249 = STRINGTOSYMBOL( CSTRING_TSCP( "STAND-ALONE" ) );
        c2229 = CONS( t3249, c2229 );
        CONSTANTEXP( ADR( c2229 ) );
        c2228 = STRINGTOSYMBOL( CSTRING_TSCP( "EMBEDDED" ) );
        CONSTANTEXP( ADR( c2228 ) );
        c2221 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CHAR" ) );
        CONSTANTEXP( ADR( c2221 ) );
        c2187 = STRINGTOSYMBOL( CSTRING_TSCP( "READ-CHAR" ) );
        CONSTANTEXP( ADR( c2187 ) );
        c2171 = STRINGTOSYMBOL( CSTRING_TSCP( "PORT" ) );
        CONSTANTEXP( ADR( c2171 ) );
        c2152 = CSTRING_TSCP( t3250 );
        CONSTANTEXP( ADR( c2152 ) );
        c2147 = STRINGTOSYMBOL( CSTRING_TSCP( "CALL-WITH-OUTPUT-FILE" ) );
        CONSTANTEXP( ADR( c2147 ) );
        c2141 = CSTRING_TSCP( t3251 );
        CONSTANTEXP( ADR( c2141 ) );
        c2136 = CSTRING_TSCP( t3252 );
        CONSTANTEXP( ADR( c2136 ) );
        c2135 = STRINGTOSYMBOL( CSTRING_TSCP( "CALL-WITH-INPUT-FILE" ) );
        CONSTANTEXP( ADR( c2135 ) );
}

DEFTSCP( scrt5_put_2dfile_36807e3e_v );
DEFCSTRING( t3253, "CALL-WITH-INPUT-FILE" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt5_open_2dfile, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt5_open_2dfile_v );
EXTERNTSCPP( scrt5_close_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2dport_v );

TSCP  scrt5_put_2dfile_36807e3e( f2131, p2132 )
        TSCP  f2131, p2132;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3253 );
        if  ( AND( EQ( TSCPTAG( p2132 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p2132 ), PROCEDURETAG ) )
            )  goto L3255;
        scdebug_error( c2135, 
                       c2136, CONS( p2132, EMPTYLIST ) );
L3255:
        X1 = scrt5_open_2dfile( f2131, c2141 );
        X3 = p2132;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                          PROCEDURE_CLOSURE( X3 ) );
        scrt5_close_2dport( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( scrt5_put_2dfile_16bb0f3_v );
DEFCSTRING( t3259, "CALL-WITH-OUTPUT-FILE" );

TSCP  scrt5_put_2dfile_16bb0f3( f2143, p2144 )
        TSCP  f2143, p2144;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3259 );
        if  ( AND( EQ( TSCPTAG( p2144 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p2144 ), PROCEDURETAG ) )
            )  goto L3261;
        scdebug_error( c2147, 
                       c2136, CONS( p2144, EMPTYLIST ) );
L3261:
        X1 = scrt5_open_2dfile( f2143, c2152 );
        X3 = p2144;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                          PROCEDURE_CLOSURE( X3 ) );
        scrt5_close_2dport( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( scrt5_input_2dport_3f_v );
DEFCSTRING( t3265, "INPUT-PORT?" );

TSCP  scrt5_input_2dport_3f( x2154 )
        TSCP  x2154;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3265 );
        if  ( NEQ( TSCPTAG( x2154 ), PAIRTAG ) )  goto L3267;
        X1 = PAIR_CAR( x2154 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2171 ) ) )  goto L3269;
        X1 = PAIR_CDR( x2154 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), PROCEDURETAG ) ) )
            )  goto L3272;
        X1 = PAIR_CDR( x2154 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X1 ) )( c2187, 
                                                 PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3275;
        POPSTACKTRACE( FALSEVALUE );
L3275:
        POPSTACKTRACE( TRUEVALUE );
L3272:
        POPSTACKTRACE( FALSEVALUE );
L3269:
        POPSTACKTRACE( FALSEVALUE );
L3267:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt5_output_2dport_3f_v );
DEFCSTRING( t3278, "OUTPUT-PORT?" );

TSCP  scrt5_output_2dport_3f( x2189 )
        TSCP  x2189;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3278 );
        if  ( NEQ( TSCPTAG( x2189 ), PAIRTAG ) )  goto L3280;
        X1 = PAIR_CAR( x2189 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2171 ) ) )  goto L3282;
        X1 = PAIR_CDR( x2189 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), PROCEDURETAG ) ) )
            )  goto L3285;
        X1 = PAIR_CDR( x2189 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X1 ) )( c2221, 
                                                 PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3288;
        POPSTACKTRACE( FALSEVALUE );
L3288:
        POPSTACKTRACE( TRUEVALUE );
L3285:
        POPSTACKTRACE( FALSEVALUE );
L3282:
        POPSTACKTRACE( FALSEVALUE );
L3280:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt5_rt_2dvalue_e3d6f738_v );
DEFCSTRING( t3291, "SCRT5_CURRENT-INPUT-PORT-VALUE" );
DEFTSCP( scrt5_rt_2dvalue_c91906c5_v );
DEFCSTRING( t3292, "SCRT5_CURRENT-OUTPUT-PORT-VALUE" );
DEFTSCP( scrt5_stderr_2dport_v );
DEFCSTRING( t3293, "STDERR-PORT" );
EXTERNTSCPP( sc_scheme_2dmode, XAL0(  ) );
EXTERNTSCP( sc_scheme_2dmode_v );
EXTERNTSCPP( scrt5_open_2dinput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dstring_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt5_open_2doutput_2dstring, XAL0(  ) );
EXTERNTSCP( scrt5_open_2doutput_2dstring_v );
EXTERNTSCPP( scrt6_set_2dwrite_2dcircle_21, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_set_2dwrite_2dcircle_21_v );
EXTERNTSCPP( scrt6_set_2dwrite_2dlevel_21, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_set_2dwrite_2dlevel_21_v );
EXTERNTSCPP( scrt6_set_2dwrite_2dlength_21, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_set_2dwrite_2dlength_21_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( scrt5_make_2dfile_2dport, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt5_make_2dfile_2dport_v );
EXTERNTSCP( sc_stdin_v );
EXTERNTSCP( sc_stdout_v );
EXTERNTSCP( sc_stderr_v );
DEFTSCP( scrt5_stdin_2dport_v );
DEFCSTRING( t3303, "STDIN-PORT" );
DEFTSCP( scrt5_stdout_2dport_v );
DEFCSTRING( t3304, "STDOUT-PORT" );
DEFTSCP( scrt5_debug_2doutput_2dport_v );
DEFCSTRING( t3305, "DEBUG-OUTPUT-PORT" );
DEFTSCP( scrt5_trace_2doutput_2dport_v );
DEFCSTRING( t3306, "TRACE-OUTPUT-PORT" );
DEFTSCP( scrt5_current_2dinput_2dport_v );
DEFCSTRING( t3307, "CURRENT-INPUT-PORT" );

TSCP  scrt5_current_2dinput_2dport(  )
{
        PUSHSTACKTRACE( t3307 );
        POPSTACKTRACE( scrt5_rt_2dvalue_e3d6f738_v );
}

DEFTSCP( scrt5_current_2doutput_2dport_v );
DEFCSTRING( t3309, "CURRENT-OUTPUT-PORT" );

TSCP  scrt5_current_2doutput_2dport(  )
{
        PUSHSTACKTRACE( t3309 );
        POPSTACKTRACE( scrt5_rt_2dvalue_c91906c5_v );
}

DEFTSCP( scrt5_rom_2dfile_73f9e308_v );
DEFCSTRING( t3311, "WITH-INPUT-FROM-FILE" );

TSCP  scrt5_rom_2dfile_73f9e308( f2240, p2241 )
        TSCP  f2240, p2241;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3311 );
        X1 = EMPTYLIST;
        X2 = scrt5_current_2dinput_2dport(  );
        X1 = CONS( X1, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( p2241 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p2241 ), PROCEDURETAG ) )
            )  goto L3314;
        scdebug_error( c2247, 
                       c2136, CONS( p2241, EMPTYLIST ) );
L3314:
        scrt5_rt_2dvalue_e3d6f738_v = scrt5_open_2dfile( f2240, c2141 );
        X4 = p2241;
        X4 = UNKNOWNCALL( X4, 0 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        SETGEN( PAIR_CAR( X1 ), X3 );
        scrt5_close_2dport( scrt5_rt_2dvalue_e3d6f738_v );
        scrt5_rt_2dvalue_e3d6f738_v = X2;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt5_dto_2dfile_6f7edfd9_v );
DEFCSTRING( t3316, "WITH-OUTPUT-TO-FILE" );

TSCP  scrt5_dto_2dfile_6f7edfd9( f2249, p2250 )
        TSCP  f2249, p2250;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3316 );
        X1 = EMPTYLIST;
        X2 = scrt5_current_2doutput_2dport(  );
        X1 = CONS( X1, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( p2250 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( p2250 ), PROCEDURETAG ) )
            )  goto L3319;
        scdebug_error( c2256, 
                       c2136, CONS( p2250, EMPTYLIST ) );
L3319:
        scrt5_rt_2dvalue_c91906c5_v = scrt5_open_2dfile( f2249, c2152 );
        X4 = p2250;
        X4 = UNKNOWNCALL( X4, 0 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        SETGEN( PAIR_CAR( X1 ), X3 );
        scrt5_close_2dport( scrt5_rt_2dvalue_c91906c5_v );
        scrt5_rt_2dvalue_c91906c5_v = X2;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( scrt5_open_2dinput_2dfile_v );
DEFCSTRING( t3321, "OPEN-INPUT-FILE" );

TSCP  scrt5_open_2dinput_2dfile( f2258 )
        TSCP  f2258;
{
        PUSHSTACKTRACE( t3321 );
        POPSTACKTRACE( scrt5_open_2dfile( f2258, c2141 ) );
}

DEFTSCP( scrt5_open_2doutput_2dfile_v );
DEFCSTRING( t3323, "OPEN-OUTPUT-FILE" );

TSCP  scrt5_open_2doutput_2dfile( f2260 )
        TSCP  f2260;
{
        PUSHSTACKTRACE( t3323 );
        POPSTACKTRACE( scrt5_open_2dfile( f2260, c2152 ) );
}

DEFTSCP( scrt5_open_2dfile_v );
DEFCSTRING( t3325, "OPEN-FILE" );
EXTERNTSCPP( sc_fopen, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_fopen_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt4_when_2dunreferenced, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_when_2dunreferenced_v );

TSCP  scrt5_open_2dfile( f2262, t2263 )
        TSCP  f2262, t2263;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3325 );
        X1 = EMPTYLIST;
        X1 = CONS( X1, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( f2262 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( f2262 ), STRINGTAG ) )
            )  goto L3328;
        scdebug_error( c2268, 
                       c2269, CONS( f2262, EMPTYLIST ) );
L3328:
        X2 = sc_fopen( f2262, t2263 );
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( X1 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( X1 ) ), 
                            STRINGTAG ) ) ) )  goto L3330;
        X3 = CONS( c2272, EMPTYLIST );
        X2 = scrt3_string_2dappend( CONS( PAIR_CAR( X1 ), X3 ) );
        scdebug_error( c2268, 
                       X2, CONS( f2262, EMPTYLIST ) );
L3330:
        X2 = scrt5_make_2dfile_2dport( PAIR_CAR( X1 ), t2263 );
        scrt4_when_2dunreferenced( X2, scrt5_close_2dport_v );
        POPSTACKTRACE( X2 );
}

DEFTSCP( scrt5_make_2dfile_2dport_v );
DEFCSTRING( t3333, "MAKE-FILE-PORT" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( sc_fputc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_fputc_v );

TSCP  scrt5_l2312( c2313, c3336 )
        TSCP  c2313, c3336;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2312 [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 32 );
        DISPLAY( 32 ) = CLOSURE_VAR( c3336, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3336, 1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( c2313 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 8210 ) ), 
                       CHARACTERTAG ) ) )  goto L3339;
        X4 = CONS( _TSCP( 8210 ), EMPTYLIST );
        scdebug_error( c2320, c2321, CONS( c2313, X4 ) );
L3339:
        if  ( GTE( _S2CINT( c2313 ), 
                   _S2CINT( _TSCP( 8210 ) ) ) )  goto L3341;
        if  ( FALSE( scrt1_memq( c2313, c2330 ) ) )  goto L3343;
        X4 = _TSCP( 0 );
        SETGEN( PAIR_CAR( DISPLAY( 32 ) ), X4 );
        goto L3342;
L3343:
        if  ( NEQ( _S2CUINT( c2313 ), 
                   _S2CUINT( _TSCP( 2322 ) ) ) )  goto L3345;
        X7 = PAIR_CAR( DISPLAY( 32 ) );
        X8 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X7 ), 
                                          _S2CINT( _TSCP( 32 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X8 ) )  goto L3354;
        if  ( EQ( _S2CUINT( _TSCP( 32 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3354;
        X6 = _TSCP( REMAINDER( _S2CINT( X7 ), 
                               _S2CINT( _TSCP( 32 ) ) ) );
        goto L3355;
L3354:
        X6 = scrt2_remainder( X7, _TSCP( 32 ) );
L3355:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 32 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L3357;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 32 ) ), 
                                 _S2CINT( X6 ) ) );
        goto L3358;
L3357:
        X5 = scrt2__2d_2dtwo( _TSCP( 32 ), X6 );
L3358:
        X6 = PAIR_CAR( DISPLAY( 32 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L3360;
        X4 = _TSCP( IPLUS( _S2CINT( X6 ), _S2CINT( X5 ) ) );
        goto L3361;
L3360:
        X4 = scrt2__2b_2dtwo( X6, X5 );
L3361:
        SETGEN( PAIR_CAR( DISPLAY( 32 ) ), X4 );
        goto L3342;
L3345:
        X5 = PAIR_CAR( DISPLAY( 32 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3363;
        X4 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3364;
L3363:
        X4 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L3364:
        SETGEN( PAIR_CAR( DISPLAY( 32 ) ), X4 );
        goto L3342;
L3341:
        X5 = PAIR_CAR( DISPLAY( 32 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3366;
        X4 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3367;
L3366:
        X4 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L3367:
        SETGEN( PAIR_CAR( DISPLAY( 32 ) ), X4 );
L3342:
        X4 = sc_fputc( c2313, DISPLAY( 0 ) );
        if  ( FALSE( X4 ) )  goto L3369;
        X3 = scdebug_error( c2370, X4, EMPTYLIST );
        goto L3370;
L3369:
        X3 = FALSEVALUE;
L3370:
        DISPLAY( 32 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  scrt5_w2289( t2372, c3371 )
        TSCP  t2372, c3371;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-TOKEN [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 24 );
        DISPLAY( 24 ) = CLOSURE_VAR( c3371, 0 );
        if  ( NEQ( TSCPIMMEDIATETAG( t2372 ), CHARACTERTAG ) )  goto L3373;
        X3 = PAIR_CAR( DISPLAY( 24 ) );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( t2372, 
                                          PROCEDURE_CLOSURE( X3 ) );
        goto L3424;
L3373:
        X3 = BOOLEAN( EQ( TSCPTAG( t2372 ), PAIRTAG ) );
        if  ( TRUE( X3 ) )  goto L3379;
        if  ( EQ( _S2CUINT( t2372 ), _S2CUINT( EMPTYLIST ) ) )  goto L3379;
        if  ( AND( EQ( TSCPTAG( t2372 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t2372 ), STRINGTAG ) )
            )  goto L3383;
        scdebug_error( c2429, 
                       c2269, CONS( t2372, EMPTYLIST ) );
L3383:
        X4 = C_FIXED( STRING_LENGTH( t2372 ) );
        X5 = _TSCP( 0 );
L3387:
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3389;
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X4 ) ) )  goto L3393;
        X2 = FALSEVALUE;
        goto L3424;
L3389:
        if  ( FALSE( scrt2__3d_2dtwo( X5, X4 ) ) )  goto L3393;
        X2 = FALSEVALUE;
        goto L3424;
L3393:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3399;
        scdebug_error( c2407, 
                       c2408, CONS( X5, EMPTYLIST ) );
L3399:
        X8 = BOOLEAN( LT( _S2CINT( X5 ), 0 ) );
        if  ( TRUE( X8 ) )  goto L3405;
        X9 = C_FIXED( STRING_LENGTH( t2372 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L3409;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X9 ) ) )  goto L3405;
        goto L3416;
L3409:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, X9 ) ) )  goto L3416;
L3405:
        scdebug_error( c2407, 
                       c2430, CONS( X5, EMPTYLIST ) );
L3416:
        X7 = C_CHAR( STRING_CHAR( t2372, X5 ) );
        X6 = PAIR_CAR( DISPLAY( 24 ) );
        X6 = UNKNOWNCALL( X6, 1 );
        VIA( PROCEDURE_CODE( X6 ) )( X7, PROCEDURE_CLOSURE( X6 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3417;
        X5 = _TSCP( IPLUS( _S2CINT( X5 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3387 );
L3417:
        X5 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L3387 );
L3379:
        X3 = PAIR_CAR( DISPLAY( 24 ) );
        X4 = t2372;
L3422:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3423;
        X2 = FALSEVALUE;
        goto L3424;
L3423:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3427;
        scrt1__24__car_2derror( X4 );
L3427:
        X6 = PAIR_CAR( X4 );
        X5 = X3;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X6, PROCEDURE_CLOSURE( X5 ) );
        X4 = PAIR_CDR( X4 );
        GOBACK( L3422 );
L3424:
        DISPLAY( 24 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( scrt6_system_2dfile_2dmask_v );
EXTERNTSCPP( sc_charready, XAL1( TSCP ) );
EXTERNTSCP( sc_charready_v );
EXTERNTSCPP( scrt6_wait_2dsystem_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt6_wait_2dsystem_2dfile_v );
EXTERNTSCPP( sc_fileno, XAL1( TSCP ) );
EXTERNTSCP( sc_fileno_v );
EXTERNTSCPP( sc_fgetc, XAL1( TSCP ) );
EXTERNTSCP( sc_fgetc_v );

TSCP  scrt5_l2462( c3430 )
        TSCP  c3430;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2462 [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3430, 0 );
        X2 = DISPLAY( 25 );
        DISPLAY( 25 ) = CLOSURE_VAR( c3430, 1 );
        if  ( FALSE( PAIR_CAR( DISPLAY( 25 ) ) ) )  goto L3432;
        X4 = PAIR_CAR( DISPLAY( 25 ) );
        X5 = FALSEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 25 ) ), X5 );
        X3 = X4;
        goto L3442;
L3432:
        if  ( EQ( _S2CUINT( scrt6_system_2dfile_2dmask_v ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3438;
        if  ( TRUE( sc_charready( DISPLAY( 0 ) ) ) )  goto L3438;
        X4 = sc_fileno( DISPLAY( 0 ) );
        scrt6_wait_2dsystem_2dfile( X4 );
L3438:
        X4 = sc_fgetc( DISPLAY( 0 ) );
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), STRINGTAG ) ) )
            )  goto L3441;
        X3 = scdebug_error( c2370, X4, EMPTYLIST );
        goto L3442;
L3441:
        X3 = X4;
L3442:
        DISPLAY( 0 ) = X1;
        DISPLAY( 25 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  scrt5_p2291( c3443 )
        TSCP  c3443;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "PEEK-CHAR [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 22 );
        DISPLAY( 22 ) = CLOSURE_VAR( c3443, 0 );
        X2 = DISPLAY( 25 );
        DISPLAY( 25 ) = CLOSURE_VAR( c3443, 1 );
        if  ( FALSE( PAIR_CAR( DISPLAY( 25 ) ) ) )  goto L3445;
        X3 = PAIR_CAR( DISPLAY( 25 ) );
        goto L3446;
L3445:
        X5 = PAIR_CAR( DISPLAY( 22 ) );
        X5 = UNKNOWNCALL( X5, 0 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        X3 = SETGEN( PAIR_CAR( DISPLAY( 25 ) ), X4 );
L3446:
        DISPLAY( 22 ) = X1;
        DISPLAY( 25 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  scrt5_l2478( c3447 )
        TSCP  c3447;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2478 [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 22 );
        DISPLAY( 22 ) = CLOSURE_VAR( c3447, 0 );
        X2 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3447, 1 );
        X5 = PAIR_CAR( DISPLAY( 22 ) );
        X5 = UNKNOWNCALL( X5, 0 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        if  ( TRUE( scrt6_eof_2dobject_3f( X4 ) ) )  goto L3450;
        X7 = PAIR_CAR( DISPLAY( 26 ) );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3453;
        scrt1__24__cdr_2derror( X7 );
L3453:
        X6 = PAIR_CDR( X7 );
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( c2221, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X4, PROCEDURE_CLOSURE( X5 ) );
L3450:
        X3 = X4;
        DISPLAY( 22 ) = X1;
        DISPLAY( 26 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  scrt5_c2293( c3455 )
        TSCP  c3455;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "CHAR-READY? [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 25 );
        DISPLAY( 25 ) = CLOSURE_VAR( c3455, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3455, 1 );
        X4 = PAIR_CAR( DISPLAY( 25 ) );
        if  ( FALSE( X4 ) )  goto L3458;
        X3 = X4;
        goto L3459;
L3458:
        X3 = sc_charready( DISPLAY( 0 ) );
L3459:
        DISPLAY( 25 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( sc_fflush, XAL1( TSCP ) );
EXTERNTSCP( sc_fflush_v );
EXTERNTSCPP( sc_fclose, XAL1( TSCP ) );
EXTERNTSCP( sc_fclose_v );

TSCP  scrt5_c2294( c3460 )
        TSCP  c3460;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "CLOSE-PORT [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3460, 0 );
        sc_fflush( DISPLAY( 0 ) );
        X2 = sc_fclose( DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_l2491( c2492, c3462 )
        TSCP  c2492, c3462;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2491 [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 24 );
        DISPLAY( 24 ) = CLOSURE_VAR( c3462, 0 );
        X2 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3462, 1 );
        X4 = PAIR_CAR( DISPLAY( 24 ) );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2492, 
                                     PROCEDURE_CLOSURE( X4 ) );
        X6 = PAIR_CAR( DISPLAY( 26 ) );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3465;
        scrt1__24__cdr_2derror( X6 );
L3465:
        X5 = PAIR_CDR( X6 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( c2221, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c2492, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 24 ) = X1;
        DISPLAY( 26 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  scrt5_w2296( t2498, c3467 )
        TSCP  t2498, c3467;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-TOKEN-ECHO [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 23 );
        DISPLAY( 23 ) = CLOSURE_VAR( c3467, 0 );
        X2 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3467, 1 );
        scrt5_w2289( t2498, 
                     PROCEDURE_CLOSURE( PAIR_CAR( DISPLAY( 23 ) ) ) );
        X6 = PAIR_CAR( DISPLAY( 26 ) );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3470;
        scrt1__24__cdr_2derror( X6 );
L3470:
        X5 = PAIR_CDR( X6 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( c2503, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( t2498, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 23 ) = X1;
        DISPLAY( 26 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  scrt5_w2297( c3472 )
        TSCP  c3472;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-COUNT [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 32 );
        DISPLAY( 32 ) = CLOSURE_VAR( c3472, 0 );
        X2 = PAIR_CAR( DISPLAY( 32 ) );
        DISPLAY( 32 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2298( c3474 )
        TSCP  c3474;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-WIDTH [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 31 );
        DISPLAY( 31 ) = CLOSURE_VAR( c3474, 0 );
        X2 = PAIR_CAR( DISPLAY( 31 ) );
        DISPLAY( 31 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2299( w2507, c3476 )
        TSCP  w2507, c3476;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-WIDTH! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 31 );
        DISPLAY( 31 ) = CLOSURE_VAR( c3476, 0 );
        X3 = w2507;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 31 ) ), X3 );
        DISPLAY( 31 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2300( c3478 )
        TSCP  c3478;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-FLUSH [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3478, 0 );
        X2 = sc_fflush( DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2301( c3480 )
        TSCP  c3480;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-CIRCLE [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 30 );
        DISPLAY( 30 ) = CLOSURE_VAR( c3480, 0 );
        X2 = PAIR_CAR( DISPLAY( 30 ) );
        DISPLAY( 30 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2302( c2511, c3482 )
        TSCP  c2511, c3482;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-CIRCLE! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 30 );
        DISPLAY( 30 ) = CLOSURE_VAR( c3482, 0 );
        X3 = c2511;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 30 ) ), X3 );
        DISPLAY( 30 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2303( c3484 )
        TSCP  c3484;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-LEVEL [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 29 );
        DISPLAY( 29 ) = CLOSURE_VAR( c3484, 0 );
        X2 = PAIR_CAR( DISPLAY( 29 ) );
        DISPLAY( 29 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2304( l2514, c3486 )
        TSCP  l2514, c3486;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-LEVEL! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 29 );
        DISPLAY( 29 ) = CLOSURE_VAR( c3486, 0 );
        X3 = l2514;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 29 ) ), X3 );
        DISPLAY( 29 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2305( c3488 )
        TSCP  c3488;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-LENGTH [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 28 );
        DISPLAY( 28 ) = CLOSURE_VAR( c3488, 0 );
        X2 = PAIR_CAR( DISPLAY( 28 ) );
        DISPLAY( 28 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2306( l2517, c3490 )
        TSCP  l2517, c3490;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-LENGTH! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 28 );
        DISPLAY( 28 ) = CLOSURE_VAR( c3490, 0 );
        X3 = l2517;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 28 ) ), X3 );
        DISPLAY( 28 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2307( c3492 )
        TSCP  c3492;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-PRETTY [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 27 );
        DISPLAY( 27 ) = CLOSURE_VAR( c3492, 0 );
        X2 = PAIR_CAR( DISPLAY( 27 ) );
        DISPLAY( 27 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2308( p2520, c3494 )
        TSCP  p2520, c3494;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-PRETTY! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 27 );
        DISPLAY( 27 ) = CLOSURE_VAR( c3494, 0 );
        X3 = p2520;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 27 ) ), X3 );
        DISPLAY( 27 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_e2309( c3496 )
        TSCP  c3496;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "ECHO [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3496, 0 );
        X2 = PAIR_CAR( DISPLAY( 26 ) );
        DISPLAY( 26 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_e2310( p2523, c3498 )
        TSCP  p2523, c3498;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "ECHO! [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3498, 0 );
        X3 = p2523;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 26 ) ), X3 );
        DISPLAY( 26 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_f2311( c3500 )
        TSCP  c3500;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "FILE-PORT [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3500, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt5_l2528( m2529, c3509 )
        TSCP  m2529, c3509;
{
        TSCP  X26, 
              X25, 
              X24, 
              X23, 
              X22, 
              X21, 
              X20, 
              X19, 
              X18, 
              X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2528 [inside MAKE-FILE-PORT]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3509, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3509, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c3509, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c3509, 3 );
        X5 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c3509, 4 );
        X6 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c3509, 5 );
        X7 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c3509, 6 );
        X8 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c3509, 7 );
        X9 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c3509, 8 );
        X10 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c3509, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c3509, 10 );
        X12 = DISPLAY( 12 );
        DISPLAY( 12 ) = CLOSURE_VAR( c3509, 11 );
        X13 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c3509, 12 );
        X14 = DISPLAY( 13 );
        DISPLAY( 13 ) = CLOSURE_VAR( c3509, 13 );
        X15 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c3509, 14 );
        X16 = DISPLAY( 23 );
        DISPLAY( 23 ) = CLOSURE_VAR( c3509, 15 );
        X17 = DISPLAY( 16 );
        DISPLAY( 16 ) = CLOSURE_VAR( c3509, 16 );
        X18 = DISPLAY( 24 );
        DISPLAY( 24 ) = CLOSURE_VAR( c3509, 17 );
        X19 = DISPLAY( 17 );
        DISPLAY( 17 ) = CLOSURE_VAR( c3509, 18 );
        X20 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c3509, 19 );
        X21 = DISPLAY( 21 );
        DISPLAY( 21 ) = CLOSURE_VAR( c3509, 20 );
        X22 = DISPLAY( 22 );
        DISPLAY( 22 ) = CLOSURE_VAR( c3509, 21 );
        X23 = DISPLAY( 20 );
        DISPLAY( 20 ) = CLOSURE_VAR( c3509, 22 );
        X24 = DISPLAY( 26 );
        DISPLAY( 26 ) = CLOSURE_VAR( c3509, 23 );
        X25 = DISPLAY( 18 );
        DISPLAY( 18 ) = CLOSURE_VAR( c3509, 24 );
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2535 ) ) )  goto L3511;
        X26 = PAIR_CAR( DISPLAY( 18 ) );
        goto L3558;
L3511:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2187 ) ) )  goto L3513;
        if  ( FALSE( PAIR_CAR( DISPLAY( 26 ) ) ) )  goto L3515;
        X26 = PAIR_CAR( DISPLAY( 20 ) );
        goto L3558;
L3515:
        X26 = PAIR_CAR( DISPLAY( 22 ) );
        goto L3558;
L3513:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2542 ) ) )  goto L3517;
        X26 = PAIR_CAR( DISPLAY( 21 ) );
        goto L3558;
L3517:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2546 ) ) )  goto L3519;
        X26 = PAIR_CAR( DISPLAY( 19 ) );
        goto L3558;
L3519:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2221 ) ) )  goto L3521;
        if  ( FALSE( PAIR_CAR( DISPLAY( 26 ) ) ) )  goto L3523;
        X26 = PAIR_CAR( DISPLAY( 17 ) );
        goto L3558;
L3523:
        X26 = PAIR_CAR( DISPLAY( 24 ) );
        goto L3558;
L3521:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2503 ) ) )  goto L3525;
        if  ( FALSE( PAIR_CAR( DISPLAY( 26 ) ) ) )  goto L3527;
        X26 = PAIR_CAR( DISPLAY( 16 ) );
        goto L3558;
L3527:
        X26 = PAIR_CAR( DISPLAY( 23 ) );
        goto L3558;
L3525:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2556 ) ) )  goto L3529;
        X26 = PAIR_CAR( DISPLAY( 14 ) );
        goto L3558;
L3529:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2560 ) ) )  goto L3531;
        X26 = PAIR_CAR( DISPLAY( 13 ) );
        goto L3558;
L3531:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2564 ) ) )  goto L3533;
        X26 = PAIR_CAR( DISPLAY( 15 ) );
        goto L3558;
L3533:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2568 ) ) )  goto L3535;
        X26 = PAIR_CAR( DISPLAY( 12 ) );
        goto L3558;
L3535:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2572 ) ) )  goto L3537;
        X26 = PAIR_CAR( DISPLAY( 11 ) );
        goto L3558;
L3537:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2576 ) ) )  goto L3539;
        X26 = PAIR_CAR( DISPLAY( 10 ) );
        goto L3558;
L3539:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2580 ) ) )  goto L3541;
        X26 = PAIR_CAR( DISPLAY( 9 ) );
        goto L3558;
L3541:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2584 ) ) )  goto L3543;
        X26 = PAIR_CAR( DISPLAY( 8 ) );
        goto L3558;
L3543:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2588 ) ) )  goto L3545;
        X26 = PAIR_CAR( DISPLAY( 7 ) );
        goto L3558;
L3545:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2592 ) ) )  goto L3547;
        X26 = PAIR_CAR( DISPLAY( 6 ) );
        goto L3558;
L3547:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2596 ) ) )  goto L3549;
        X26 = PAIR_CAR( DISPLAY( 5 ) );
        goto L3558;
L3549:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2600 ) ) )  goto L3551;
        X26 = PAIR_CAR( DISPLAY( 4 ) );
        goto L3558;
L3551:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2604 ) ) )  goto L3553;
        X26 = PAIR_CAR( DISPLAY( 3 ) );
        goto L3558;
L3553:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2608 ) ) )  goto L3555;
        X26 = PAIR_CAR( DISPLAY( 2 ) );
        goto L3558;
L3555:
        if  ( NEQ( _S2CUINT( m2529 ), _S2CUINT( c2612 ) ) )  goto L3557;
        X26 = PAIR_CAR( DISPLAY( 1 ) );
        goto L3558;
L3557:
        X26 = FALSEVALUE;
L3558:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 5 ) = X5;
        DISPLAY( 6 ) = X6;
        DISPLAY( 7 ) = X7;
        DISPLAY( 8 ) = X8;
        DISPLAY( 9 ) = X9;
        DISPLAY( 10 ) = X10;
        DISPLAY( 11 ) = X11;
        DISPLAY( 12 ) = X12;
        DISPLAY( 15 ) = X13;
        DISPLAY( 13 ) = X14;
        DISPLAY( 14 ) = X15;
        DISPLAY( 23 ) = X16;
        DISPLAY( 16 ) = X17;
        DISPLAY( 24 ) = X18;
        DISPLAY( 17 ) = X19;
        DISPLAY( 19 ) = X20;
        DISPLAY( 21 ) = X21;
        DISPLAY( 22 ) = X22;
        DISPLAY( 20 ) = X23;
        DISPLAY( 26 ) = X24;
        DISPLAY( 18 ) = X25;
        POPSTACKTRACE( X26 );
}

TSCP  scrt5_make_2dfile_2dport( f2277, t2278 )
        TSCP  f2277, t2278;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SD12 = DISPLAY( 12 );
        TSCP  SD13 = DISPLAY( 13 );
        TSCP  SD14 = DISPLAY( 14 );
        TSCP  SD15 = DISPLAY( 15 );
        TSCP  SD16 = DISPLAY( 16 );
        TSCP  SD17 = DISPLAY( 17 );
        TSCP  SD18 = DISPLAY( 18 );
        TSCP  SD19 = DISPLAY( 19 );
        TSCP  SD20 = DISPLAY( 20 );
        TSCP  SD21 = DISPLAY( 21 );
        TSCP  SD22 = DISPLAY( 22 );
        TSCP  SD23 = DISPLAY( 23 );
        TSCP  SD24 = DISPLAY( 24 );
        TSCP  SD25 = DISPLAY( 25 );
        TSCP  SD26 = DISPLAY( 26 );
        TSCP  SD27 = DISPLAY( 27 );
        TSCP  SD28 = DISPLAY( 28 );
        TSCP  SD29 = DISPLAY( 29 );
        TSCP  SD30 = DISPLAY( 30 );
        TSCP  SD31 = DISPLAY( 31 );
        TSCP  SD32 = DISPLAY( 32 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3333 );
        DISPLAY( 0 ) = f2277;
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 2 ) = _TSCP( 0 );
        DISPLAY( 3 ) = _TSCP( 0 );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
        DISPLAY( 6 ) = _TSCP( 0 );
        DISPLAY( 7 ) = _TSCP( 0 );
        DISPLAY( 8 ) = _TSCP( 0 );
        DISPLAY( 9 ) = _TSCP( 0 );
        DISPLAY( 10 ) = _TSCP( 0 );
        DISPLAY( 11 ) = _TSCP( 0 );
        DISPLAY( 12 ) = _TSCP( 0 );
        DISPLAY( 13 ) = _TSCP( 0 );
        DISPLAY( 14 ) = _TSCP( 0 );
        DISPLAY( 15 ) = _TSCP( 0 );
        DISPLAY( 16 ) = _TSCP( 0 );
        DISPLAY( 17 ) = _TSCP( 0 );
        DISPLAY( 18 ) = _TSCP( 0 );
        DISPLAY( 19 ) = _TSCP( 0 );
        DISPLAY( 20 ) = _TSCP( 0 );
        DISPLAY( 21 ) = _TSCP( 0 );
        DISPLAY( 22 ) = _TSCP( 0 );
        DISPLAY( 23 ) = _TSCP( 0 );
        DISPLAY( 24 ) = _TSCP( 0 );
        DISPLAY( 25 ) = FALSEVALUE;
        DISPLAY( 26 ) = FALSEVALUE;
        DISPLAY( 27 ) = FALSEVALUE;
        DISPLAY( 28 ) = FALSEVALUE;
        DISPLAY( 29 ) = FALSEVALUE;
        DISPLAY( 30 ) = FALSEVALUE;
        DISPLAY( 31 ) = _TSCP( 320 );
        DISPLAY( 32 ) = _TSCP( 0 );
        DISPLAY( 32 ) = CONS( DISPLAY( 32 ), EMPTYLIST );
        DISPLAY( 31 ) = CONS( DISPLAY( 31 ), EMPTYLIST );
        DISPLAY( 30 ) = CONS( DISPLAY( 30 ), EMPTYLIST );
        DISPLAY( 29 ) = CONS( DISPLAY( 29 ), EMPTYLIST );
        DISPLAY( 28 ) = CONS( DISPLAY( 28 ), EMPTYLIST );
        DISPLAY( 27 ) = CONS( DISPLAY( 27 ), EMPTYLIST );
        DISPLAY( 26 ) = CONS( DISPLAY( 26 ), EMPTYLIST );
        DISPLAY( 25 ) = CONS( DISPLAY( 25 ), EMPTYLIST );
        DISPLAY( 24 ) = CONS( DISPLAY( 24 ), EMPTYLIST );
        DISPLAY( 23 ) = CONS( DISPLAY( 23 ), EMPTYLIST );
        DISPLAY( 22 ) = CONS( DISPLAY( 22 ), EMPTYLIST );
        DISPLAY( 21 ) = CONS( DISPLAY( 21 ), EMPTYLIST );
        DISPLAY( 20 ) = CONS( DISPLAY( 20 ), EMPTYLIST );
        DISPLAY( 19 ) = CONS( DISPLAY( 19 ), EMPTYLIST );
        DISPLAY( 18 ) = CONS( DISPLAY( 18 ), EMPTYLIST );
        DISPLAY( 17 ) = CONS( DISPLAY( 17 ), EMPTYLIST );
        DISPLAY( 16 ) = CONS( DISPLAY( 16 ), EMPTYLIST );
        DISPLAY( 15 ) = CONS( DISPLAY( 15 ), EMPTYLIST );
        DISPLAY( 14 ) = CONS( DISPLAY( 14 ), EMPTYLIST );
        DISPLAY( 13 ) = CONS( DISPLAY( 13 ), EMPTYLIST );
        DISPLAY( 12 ) = CONS( DISPLAY( 12 ), EMPTYLIST );
        DISPLAY( 11 ) = CONS( DISPLAY( 11 ), EMPTYLIST );
        DISPLAY( 10 ) = CONS( DISPLAY( 10 ), EMPTYLIST );
        DISPLAY( 9 ) = CONS( DISPLAY( 9 ), EMPTYLIST );
        DISPLAY( 8 ) = CONS( DISPLAY( 8 ), EMPTYLIST );
        DISPLAY( 7 ) = CONS( DISPLAY( 7 ), EMPTYLIST );
        DISPLAY( 6 ) = CONS( DISPLAY( 6 ), EMPTYLIST );
        DISPLAY( 5 ) = CONS( DISPLAY( 5 ), EMPTYLIST );
        DISPLAY( 4 ) = CONS( DISPLAY( 4 ), EMPTYLIST );
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_l2312, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 32 ), 
                                         DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 24 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2289, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 24 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 23 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_l2462, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 25 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 22 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_p2291, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 22 ), 
                                         DISPLAY( 25 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 21 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_l2478, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 22 ), 
                                         DISPLAY( 26 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 20 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_c2293, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 25 ), 
                                         DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 19 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_c2294, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 18 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_l2491, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 24 ), 
                                         DISPLAY( 26 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 17 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2296, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 23 ), 
                                         DISPLAY( 26 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 16 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2297, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 32 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 15 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2298, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 31 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 14 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2299, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 31 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 13 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2300, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 12 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2301, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 30 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 11 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2302, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 30 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 10 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2303, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 29 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 9 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2304, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 29 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 8 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2305, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 28 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 7 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2306, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 28 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 6 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2307, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 27 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 5 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2308, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 27 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_e2309, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 26 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_e2310, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 26 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_f2311, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        if  ( FALSE( scrt1_equal_3f( t2278, c2141 ) ) )  goto L3503;
        X1 = FALSEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 17 ) ), X1 );
        X1 = FALSEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 24 ) ), X1 );
        goto L3506;
L3503:
        if  ( FALSE( scrt1_equal_3f( t2278, c2152 ) ) )  goto L3506;
        X1 = FALSEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 20 ) ), X1 );
        X1 = FALSEVALUE;
        SETGEN( PAIR_CAR( DISPLAY( 22 ) ), X1 );
L3506:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_l2528, 
                            MAKECLOSURE( EMPTYLIST, 
                                         25, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 12 ), 
                                         DISPLAY( 15 ), 
                                         DISPLAY( 13 ), 
                                         DISPLAY( 14 ), 
                                         DISPLAY( 23 ), 
                                         DISPLAY( 16 ), 
                                         DISPLAY( 24 ), 
                                         DISPLAY( 17 ), 
                                         DISPLAY( 19 ), 
                                         DISPLAY( 21 ), 
                                         DISPLAY( 22 ), 
                                         DISPLAY( 20 ), 
                                         DISPLAY( 26 ), 
                                         DISPLAY( 18 ) ) );
        SDVAL = sc_cons( c2171, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        DISPLAY( 16 ) = SD16;
        DISPLAY( 17 ) = SD17;
        DISPLAY( 18 ) = SD18;
        DISPLAY( 19 ) = SD19;
        DISPLAY( 20 ) = SD20;
        DISPLAY( 21 ) = SD21;
        DISPLAY( 22 ) = SD22;
        DISPLAY( 23 ) = SD23;
        DISPLAY( 24 ) = SD24;
        DISPLAY( 25 ) = SD25;
        DISPLAY( 26 ) = SD26;
        DISPLAY( 27 ) = SD27;
        DISPLAY( 28 ) = SD28;
        DISPLAY( 29 ) = SD29;
        DISPLAY( 30 ) = SD30;
        DISPLAY( 31 ) = SD31;
        DISPLAY( 32 ) = SD32;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt5_open_2dinput_2dstring_v );
DEFCSTRING( t3559, "OPEN-INPUT-STRING" );
EXTERNTSCP( sc_eofobject );

TSCP  scrt5_r2620( c3565 )
        TSCP  c3565;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "READ-CHAR [inside OPEN-INPUT-STRING]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c3565, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3565, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c3565, 2 );
        X5 = PAIR_CAR( DISPLAY( 4 ) );
        X6 = PAIR_CAR( DISPLAY( 5 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L3569;
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L3573;
        X4 = sc_eofobject;
        goto L3576;
L3569:
        if  ( FALSE( scrt2__3d_2dtwo( X6, X5 ) ) )  goto L3573;
        X4 = sc_eofobject;
        goto L3576;
L3573:
        X6 = DISPLAY( 0 );
        X7 = PAIR_CAR( DISPLAY( 5 ) );
        if  ( EQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L3578;
        scdebug_error( c2407, 
                       c2408, CONS( X7, EMPTYLIST ) );
L3578:
        X8 = BOOLEAN( LT( _S2CINT( X7 ), 0 ) );
        if  ( TRUE( X8 ) )  goto L3584;
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), STRINGTAG ) ) )  goto L3586;
        scdebug_error( c2429, 
                       c2269, CONS( X6, EMPTYLIST ) );
L3586:
        X9 = C_FIXED( STRING_LENGTH( X6 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L3590;
        if  ( GTE( _S2CINT( X7 ), _S2CINT( X9 ) ) )  goto L3584;
        goto L3597;
L3590:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X7, X9 ) ) )  goto L3597;
L3584:
        scdebug_error( c2407, 
                       c2430, CONS( X7, EMPTYLIST ) );
L3597:
        X5 = C_CHAR( STRING_CHAR( X6, X7 ) );
        X7 = PAIR_CAR( DISPLAY( 5 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L3600;
        X6 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X7 ) ) );
        goto L3601;
L3600:
        X6 = scrt2__2b_2dtwo( _TSCP( 4 ), X7 );
L3601:
        SETGEN( PAIR_CAR( DISPLAY( 5 ) ), X6 );
        X4 = X5;
L3576:
        DISPLAY( 4 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 5 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  scrt5_p2621( c3602 )
        TSCP  c3602;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "PEEK-CHAR [inside OPEN-INPUT-STRING]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c3602, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c3602, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3602, 2 );
        X5 = PAIR_CAR( DISPLAY( 4 ) );
        X6 = PAIR_CAR( DISPLAY( 5 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L3606;
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) )  goto L3610;
        X4 = sc_eofobject;
        goto L3613;
L3606:
        if  ( FALSE( scrt2__3d_2dtwo( X6, X5 ) ) )  goto L3610;
        X4 = sc_eofobject;
        goto L3613;
L3610:
        X5 = DISPLAY( 0 );
        X6 = PAIR_CAR( DISPLAY( 5 ) );
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L3615;
        scdebug_error( c2407, 
                       c2408, CONS( X6, EMPTYLIST ) );
L3615:
        X7 = BOOLEAN( LT( _S2CINT( X6 ), 0 ) );
        if  ( TRUE( X7 ) )  goto L3621;
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), STRINGTAG ) ) )  goto L3623;
        scdebug_error( c2429, 
                       c2269, CONS( X5, EMPTYLIST ) );
L3623:
        X8 = C_FIXED( STRING_LENGTH( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L3627;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( X8 ) ) )  goto L3621;
        goto L3634;
L3627:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, X8 ) ) )  goto L3634;
L3621:
        scdebug_error( c2407, 
                       c2430, CONS( X6, EMPTYLIST ) );
L3634:
        X4 = C_CHAR( STRING_CHAR( X5, X6 ) );
L3613:
        DISPLAY( 4 ) = X1;
        DISPLAY( 5 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  scrt5_t2622( c3635 )
        TSCP  c3635;
{
        PUSHSTACKTRACE( "TRUE [inside OPEN-INPUT-STRING]" );
        POPSTACKTRACE( TRUEVALUE );
}

TSCP  scrt5_l2706( m2707, c3637 )
        TSCP  m2707, c3637;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l2706 [inside OPEN-INPUT-STRING]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3637, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3637, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c3637, 2 );
        if  ( NEQ( _S2CUINT( m2707 ), _S2CUINT( c2187 ) ) )  goto L3639;
        X4 = PAIR_CAR( DISPLAY( 3 ) );
        goto L3646;
L3639:
        if  ( NEQ( _S2CUINT( m2707 ), _S2CUINT( c2542 ) ) )  goto L3641;
        X4 = PAIR_CAR( DISPLAY( 2 ) );
        goto L3646;
L3641:
        if  ( NEQ( _S2CUINT( m2707 ), _S2CUINT( c2546 ) ) )  goto L3643;
        X4 = PAIR_CAR( DISPLAY( 1 ) );
        goto L3646;
L3643:
        if  ( NEQ( _S2CUINT( m2707 ), _S2CUINT( c2535 ) ) )  goto L3645;
        X4 = PAIR_CAR( DISPLAY( 1 ) );
        goto L3646;
L3645:
        X4 = FALSEVALUE;
L3646:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 3 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  scrt5_open_2dinput_2dstring( s2616 )
        TSCP  s2616;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3559 );
        DISPLAY( 0 ) = s2616;
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 2 ) = _TSCP( 0 );
        DISPLAY( 3 ) = _TSCP( 0 );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
        DISPLAY( 5 ) = CONS( DISPLAY( 5 ), EMPTYLIST );
        DISPLAY( 4 ) = CONS( DISPLAY( 4 ), EMPTYLIST );
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X2 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )  goto L3563;
        scdebug_error( c2429, 
                       c2269, CONS( X2, EMPTYLIST ) );
L3563:
        X1 = C_FIXED( STRING_LENGTH( X2 ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_r2620, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 5 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_p2621, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 0, scrt5_t2622, EMPTYLIST );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_l2706, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ) ) );
        SDVAL = sc_cons( c2171, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt5_open_2doutput_2dstring_v );
DEFCSTRING( t3647, "OPEN-OUTPUT-STRING" );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  scrt5_w2731( t2746, c3650 )
        TSCP  t2746, c3650;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-TOKEN [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 13 );
        DISPLAY( 13 ) = CLOSURE_VAR( c3650, 0 );
        X2 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c3650, 1 );
L3651:
        if  ( NEQ( TSCPIMMEDIATETAG( t2746 ), CHARACTERTAG ) )  goto L3652;
        X4 = sc_cons( t2746, PAIR_CAR( DISPLAY( 19 ) ) );
        X3 = SETGEN( PAIR_CAR( DISPLAY( 19 ) ), X4 );
        goto L3661;
L3652:
        X4 = BOOLEAN( EQ( TSCPTAG( t2746 ), PAIRTAG ) );
        if  ( TRUE( X4 ) )  goto L3658;
        if  ( EQ( _S2CUINT( t2746 ), _S2CUINT( EMPTYLIST ) ) )  goto L3658;
        t2746 = scrt3_string_2d_3elist( t2746 );
        GOBACK( L3651 );
L3658:
        X5 = scrt1_reverse( t2746 );
        X4 = scrt1_append_2dtwo( X5, 
                                 PAIR_CAR( DISPLAY( 19 ) ) );
        X3 = SETGEN( PAIR_CAR( DISPLAY( 19 ) ), X4 );
L3661:
        DISPLAY( 13 ) = X1;
        DISPLAY( 19 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2_min_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_min_2dtwo_v );

TSCP  scrt5_g2732( c3662 )
        TSCP  c3662;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "GET-OUTPUT-STRING [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c3662, 0 );
        X3 = PAIR_CAR( DISPLAY( 19 ) );
        X4 = C_FIXED( MAXSTRINGSIZE );
        X5 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3667;
        X6 = BOOLEAN( GT( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L3668;
L3667:
        X6 = scrt2__3e_2dtwo( X5, X4 );
L3668:
        X7 = EMPTYLIST;
        SETGEN( PAIR_CAR( DISPLAY( 19 ) ), X7 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3671;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X4 ) ) )  goto L3673;
        X8 = X5;
        goto L3672;
L3673:
        X8 = X4;
        goto L3672;
L3671:
        X8 = scrt2_min_2dtwo( X5, X4 );
L3672:
        X7 = sc_make_2dstring( X8, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3675;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X4 ) ) )  goto L3677;
        X9 = X5;
        goto L3676;
L3677:
        X9 = X4;
        goto L3676;
L3675:
        X9 = scrt2_min_2dtwo( X5, X4 );
L3676:
        if  ( BITAND( BITOR( _S2CINT( X9 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3680;
        X8 = _TSCP( IDIFFERENCE( _S2CINT( X9 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3681;
L3680:
        X8 = scrt2__2d_2dtwo( X9, _TSCP( 4 ) );
L3681:
        if  ( FALSE( X6 ) )  goto L3682;
        X9 = _TSCP( 8 );
        goto L3683;
L3682:
        X9 = _TSCP( -4 );
L3683:
        X10 = X3;
L3684:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( X9 ) ) )  goto L3685;
        if  ( FALSE( X6 ) )  goto L3688;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L3692;
        scdebug_error( c2786, 
                       c2408, CONS( _TSCP( 0 ), EMPTYLIST ) );
L3692:
        if  ( EQ( TSCPIMMEDIATETAG( _TSCP( 11794 ) ), 
                  CHARACTERTAG ) )  goto L3694;
        scdebug_error( c2786, 
                       c2789, 
                       CONS( _TSCP( 11794 ), EMPTYLIST ) );
L3694:
        X11 = BOOLEAN( LT( _S2CINT( _TSCP( 0 ) ), 0 ) );
        if  ( TRUE( X11 ) )  goto L3700;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), STRINGTAG ) ) )  goto L3702;
        scdebug_error( c2429, 
                       c2269, CONS( X7, EMPTYLIST ) );
L3702:
        X12 = C_FIXED( STRING_LENGTH( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L3706;
        if  ( GTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X12 ) ) )  goto L3700;
        goto L3713;
L3706:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 0 ), X12 ) ) )  goto L3713;
L3700:
        scdebug_error( c2786, c2810, EMPTYLIST );
L3713:
        STRING_CHAR( X7, _TSCP( 0 ) ) = CHAR_C( _TSCP( 11794 ) );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L3715;
        scdebug_error( c2786, 
                       c2408, CONS( _TSCP( 4 ), EMPTYLIST ) );
L3715:
        X11 = BOOLEAN( LT( _S2CINT( _TSCP( 4 ) ), 0 ) );
        if  ( TRUE( X11 ) )  goto L3721;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), STRINGTAG ) ) )  goto L3723;
        scdebug_error( c2429, 
                       c2269, CONS( X7, EMPTYLIST ) );
L3723:
        X12 = C_FIXED( STRING_LENGTH( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L3727;
        if  ( GTE( _S2CINT( _TSCP( 4 ) ), _S2CINT( X12 ) ) )  goto L3721;
        goto L3734;
L3727:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 4 ), X12 ) ) )  goto L3734;
L3721:
        scdebug_error( c2786, c2810, EMPTYLIST );
L3734:
        STRING_CHAR( X7, _TSCP( 4 ) ) = CHAR_C( _TSCP( 11794 ) );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L3736;
        scdebug_error( c2786, 
                       c2408, CONS( _TSCP( 8 ), EMPTYLIST ) );
L3736:
        X11 = BOOLEAN( LT( _S2CINT( _TSCP( 8 ) ), 0 ) );
        if  ( TRUE( X11 ) )  goto L3742;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), STRINGTAG ) ) )  goto L3744;
        scdebug_error( c2429, 
                       c2269, CONS( X7, EMPTYLIST ) );
L3744:
        X12 = C_FIXED( STRING_LENGTH( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L3748;
        if  ( GTE( _S2CINT( _TSCP( 8 ) ), _S2CINT( X12 ) ) )  goto L3742;
        goto L3755;
L3748:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 8 ), X12 ) ) )  goto L3755;
L3742:
        scdebug_error( c2786, c2810, EMPTYLIST );
L3755:
        STRING_CHAR( X7, _TSCP( 8 ) ) = CHAR_C( _TSCP( 11794 ) );
L3688:
        X2 = X7;
        goto L3686;
L3685:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3758;
        scrt1__24__car_2derror( X10 );
L3758:
        X11 = PAIR_CAR( X10 );
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L3761;
        scdebug_error( c2786, 
                       c2408, CONS( X8, EMPTYLIST ) );
L3761:
        if  ( EQ( TSCPIMMEDIATETAG( X11 ), CHARACTERTAG ) )  goto L3763;
        scdebug_error( c2786, 
                       c2789, CONS( X11, EMPTYLIST ) );
L3763:
        X12 = BOOLEAN( LT( _S2CINT( X8 ), 0 ) );
        if  ( TRUE( X12 ) )  goto L3769;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), STRINGTAG ) ) )  goto L3771;
        scdebug_error( c2429, 
                       c2269, CONS( X7, EMPTYLIST ) );
L3771:
        X13 = C_FIXED( STRING_LENGTH( X7 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X13 ) ), 
                      3 ) )  goto L3775;
        if  ( GTE( _S2CINT( X8 ), _S2CINT( X13 ) ) )  goto L3769;
        goto L3782;
L3775:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X8, X13 ) ) )  goto L3782;
L3769:
        scdebug_error( c2786, c2810, EMPTYLIST );
L3782:
        STRING_CHAR( X7, X8 ) = CHAR_C( X11 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3783;
        X11 = _TSCP( IDIFFERENCE( _S2CINT( X8 ), 
                                  _S2CINT( _TSCP( 4 ) ) ) );
        goto L3784;
L3783:
        X11 = scrt2__2d_2dtwo( X8, _TSCP( 4 ) );
L3784:
        X10 = PAIR_CDR( X10 );
        X8 = X11;
        GOBACK( L3684 );
L3686:
        DISPLAY( 19 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2733( c2939, c3786 )
        TSCP  c2939, c3786;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-CHAR [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c3786, 0 );
        X3 = sc_cons( c2939, PAIR_CAR( DISPLAY( 19 ) ) );
        X2 = SETGEN( PAIR_CAR( DISPLAY( 19 ) ), X3 );
        DISPLAY( 19 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2734( c3788 )
        TSCP  c3788;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-WIDTH [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 18 );
        DISPLAY( 18 ) = CLOSURE_VAR( c3788, 0 );
        X2 = PAIR_CAR( DISPLAY( 18 ) );
        DISPLAY( 18 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2735( w2942, c3790 )
        TSCP  w2942, c3790;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-WIDTH! [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 18 );
        DISPLAY( 18 ) = CLOSURE_VAR( c3790, 0 );
        X3 = w2942;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 18 ) ), X3 );
        DISPLAY( 18 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt5_l2949, XAL1( TSCP ) );

TSCP  scrt5_l2949( c2951 )
        TSCP  c2951;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside OPEN-OUTPUT-STRING]" );
        if  ( EQ( _S2CUINT( c2951 ), _S2CUINT( EMPTYLIST ) ) )  goto L3798;
        if  ( EQ( TSCPTAG( c2951 ), PAIRTAG ) )  goto L3801;
        scrt1__24__car_2derror( c2951 );
L3801:
        X2 = PAIR_CAR( c2951 );
        X1 = scrt1_memq( X2, c2330 );
        if  ( TRUE( X1 ) )  goto L3804;
        X2 = PAIR_CAR( c2951 );
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 2322 ) ) ) )  goto L3806;
        X2 = PAIR_CDR( c2951 );
        scrt5_l2949( X2 );
        X5 = PAIR_CAR( DISPLAY( 20 ) );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( _TSCP( 32 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3818;
        if  ( EQ( _S2CUINT( _TSCP( 32 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3818;
        X4 = _TSCP( REMAINDER( _S2CINT( X5 ), 
                               _S2CINT( _TSCP( 32 ) ) ) );
        goto L3819;
L3818:
        X4 = scrt2_remainder( X5, _TSCP( 32 ) );
L3819:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 32 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3821;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( _TSCP( 32 ) ), 
                                 _S2CINT( X4 ) ) );
        goto L3822;
L3821:
        X3 = scrt2__2d_2dtwo( _TSCP( 32 ), X4 );
L3822:
        X4 = PAIR_CAR( DISPLAY( 20 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3824;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L3825;
L3824:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L3825:
        POPSTACKTRACE( SETGEN( PAIR_CAR( DISPLAY( 20 ) ), 
                               X2 ) );
L3806:
        X2 = PAIR_CDR( c2951 );
        scrt5_l2949( X2 );
        X3 = PAIR_CAR( DISPLAY( 20 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L3829;
        X2 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X3 ) ) );
        goto L3830;
L3829:
        X2 = scrt2__2b_2dtwo( _TSCP( 4 ), X3 );
L3830:
        POPSTACKTRACE( SETGEN( PAIR_CAR( DISPLAY( 20 ) ), 
                               X2 ) );
L3804:
        POPSTACKTRACE( X1 );
L3798:
        POPSTACKTRACE( TRUEVALUE );
}

TSCP  scrt5_w2736( c3792 )
        TSCP  c3792;
{
        TSCP  X3, X2, X1;
        TSCP  SD20 = DISPLAY( 20 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "WRITE-COUNT [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c3792, 0 );
        DISPLAY( 20 ) = _TSCP( 0 );
        DISPLAY( 20 ) = CONS( DISPLAY( 20 ), EMPTYLIST );
        X3 = PAIR_CAR( DISPLAY( 19 ) );
        scrt5_l2949( X3 );
        X2 = PAIR_CAR( DISPLAY( 20 ) );
        DISPLAY( 19 ) = X1;
        SDVAL = X2;
        DISPLAY( 20 ) = SD20;
        POPSTACKTRACE( SDVAL );
}

TSCP  scrt5_w2737( c3831 )
        TSCP  c3831;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-CIRCLE [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 17 );
        DISPLAY( 17 ) = CLOSURE_VAR( c3831, 0 );
        X2 = PAIR_CAR( DISPLAY( 17 ) );
        DISPLAY( 17 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2738( c3019, c3833 )
        TSCP  c3019, c3833;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-CIRCLE! [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 17 );
        DISPLAY( 17 ) = CLOSURE_VAR( c3833, 0 );
        X3 = c3019;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 17 ) ), X3 );
        DISPLAY( 17 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2739( c3835 )
        TSCP  c3835;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-LEVEL [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 16 );
        DISPLAY( 16 ) = CLOSURE_VAR( c3835, 0 );
        X2 = PAIR_CAR( DISPLAY( 16 ) );
        DISPLAY( 16 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2740( l3022, c3837 )
        TSCP  l3022, c3837;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-LEVEL! [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 16 );
        DISPLAY( 16 ) = CLOSURE_VAR( c3837, 0 );
        X3 = l3022;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 16 ) ), X3 );
        DISPLAY( 16 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2741( c3839 )
        TSCP  c3839;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-LENGTH [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c3839, 0 );
        X2 = PAIR_CAR( DISPLAY( 15 ) );
        DISPLAY( 15 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2742( l3025, c3841 )
        TSCP  l3025, c3841;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-LENGTH! [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c3841, 0 );
        X3 = l3025;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 15 ) ), X3 );
        DISPLAY( 15 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2743( c3843 )
        TSCP  c3843;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "WRITE-PRETTY [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c3843, 0 );
        X2 = PAIR_CAR( DISPLAY( 14 ) );
        DISPLAY( 14 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_w2744( p3028, c3845 )
        TSCP  p3028, c3845;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "WRITE-PRETTY! [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c3845, 0 );
        X3 = p3028;
        X2 = SETGEN( PAIR_CAR( DISPLAY( 14 ) ), X3 );
        DISPLAY( 14 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  scrt5_l3079( c3861 )
        TSCP  c3861;
{
        PUSHSTACKTRACE( "scrt5_l3079 [inside OPEN-OUTPUT-STRING]" );
        POPSTACKTRACE( TRUEVALUE );
}

TSCP  scrt5_l3029( m3030, c3847 )
        TSCP  m3030, c3847;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "scrt5_l3029 [inside OPEN-OUTPUT-STRING]" );
        X1 = DISPLAY( 12 );
        DISPLAY( 12 ) = CLOSURE_VAR( c3847, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3847, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3847, 2 );
        X4 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c3847, 3 );
        X5 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c3847, 4 );
        X6 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c3847, 5 );
        X7 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c3847, 6 );
        X8 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c3847, 7 );
        X9 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c3847, 8 );
        X10 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c3847, 9 );
        X11 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c3847, 10 );
        X12 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c3847, 11 );
        X13 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c3847, 12 );
        X14 = DISPLAY( 13 );
        DISPLAY( 13 ) = CLOSURE_VAR( c3847, 13 );
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2503 ) ) )  goto L3849;
        X15 = PAIR_CAR( DISPLAY( 13 ) );
        goto L3880;
L3849:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2221 ) ) )  goto L3851;
        X15 = PAIR_CAR( DISPLAY( 11 ) );
        goto L3880;
L3851:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2556 ) ) )  goto L3853;
        X15 = PAIR_CAR( DISPLAY( 10 ) );
        goto L3880;
L3853:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2560 ) ) )  goto L3855;
        X15 = PAIR_CAR( DISPLAY( 9 ) );
        goto L3880;
L3855:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2564 ) ) )  goto L3857;
        X15 = PAIR_CAR( DISPLAY( 8 ) );
        goto L3880;
L3857:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2568 ) ) )  goto L3859;
        X15 = MAKEPROCEDURE( 0, 0, scrt5_l3079, EMPTYLIST );
        goto L3880;
L3859:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2572 ) ) )  goto L3863;
        X15 = PAIR_CAR( DISPLAY( 7 ) );
        goto L3880;
L3863:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2576 ) ) )  goto L3865;
        X15 = PAIR_CAR( DISPLAY( 6 ) );
        goto L3880;
L3865:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2580 ) ) )  goto L3867;
        X15 = PAIR_CAR( DISPLAY( 5 ) );
        goto L3880;
L3867:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2584 ) ) )  goto L3869;
        X15 = PAIR_CAR( DISPLAY( 4 ) );
        goto L3880;
L3869:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2588 ) ) )  goto L3871;
        X15 = PAIR_CAR( DISPLAY( 3 ) );
        goto L3880;
L3871:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2592 ) ) )  goto L3873;
        X15 = PAIR_CAR( DISPLAY( 2 ) );
        goto L3880;
L3873:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2596 ) ) )  goto L3875;
        X15 = PAIR_CAR( DISPLAY( 1 ) );
        goto L3880;
L3875:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c2600 ) ) )  goto L3877;
        X15 = PAIR_CAR( DISPLAY( 0 ) );
        goto L3880;
L3877:
        if  ( NEQ( _S2CUINT( m3030 ), _S2CUINT( c3078 ) ) )  goto L3879;
        X15 = PAIR_CAR( DISPLAY( 12 ) );
        goto L3880;
L3879:
        X15 = FALSEVALUE;
L3880:
        DISPLAY( 12 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 1 ) = X3;
        DISPLAY( 2 ) = X4;
        DISPLAY( 3 ) = X5;
        DISPLAY( 4 ) = X6;
        DISPLAY( 5 ) = X7;
        DISPLAY( 6 ) = X8;
        DISPLAY( 7 ) = X9;
        DISPLAY( 8 ) = X10;
        DISPLAY( 9 ) = X11;
        DISPLAY( 10 ) = X12;
        DISPLAY( 11 ) = X13;
        DISPLAY( 13 ) = X14;
        POPSTACKTRACE( X15 );
}

TSCP  scrt5_open_2doutput_2dstring(  )
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SD12 = DISPLAY( 12 );
        TSCP  SD13 = DISPLAY( 13 );
        TSCP  SD14 = DISPLAY( 14 );
        TSCP  SD15 = DISPLAY( 15 );
        TSCP  SD16 = DISPLAY( 16 );
        TSCP  SD17 = DISPLAY( 17 );
        TSCP  SD18 = DISPLAY( 18 );
        TSCP  SD19 = DISPLAY( 19 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3647 );
        DISPLAY( 0 ) = _TSCP( 0 );
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 2 ) = _TSCP( 0 );
        DISPLAY( 3 ) = _TSCP( 0 );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
        DISPLAY( 6 ) = _TSCP( 0 );
        DISPLAY( 7 ) = _TSCP( 0 );
        DISPLAY( 8 ) = _TSCP( 0 );
        DISPLAY( 9 ) = _TSCP( 0 );
        DISPLAY( 10 ) = _TSCP( 0 );
        DISPLAY( 11 ) = _TSCP( 0 );
        DISPLAY( 12 ) = _TSCP( 0 );
        DISPLAY( 13 ) = _TSCP( 0 );
        DISPLAY( 14 ) = FALSEVALUE;
        DISPLAY( 15 ) = FALSEVALUE;
        DISPLAY( 16 ) = FALSEVALUE;
        DISPLAY( 17 ) = TRUEVALUE;
        DISPLAY( 18 ) = _TSCP( 320 );
        DISPLAY( 19 ) = EMPTYLIST;
        DISPLAY( 19 ) = CONS( DISPLAY( 19 ), EMPTYLIST );
        DISPLAY( 18 ) = CONS( DISPLAY( 18 ), EMPTYLIST );
        DISPLAY( 17 ) = CONS( DISPLAY( 17 ), EMPTYLIST );
        DISPLAY( 16 ) = CONS( DISPLAY( 16 ), EMPTYLIST );
        DISPLAY( 15 ) = CONS( DISPLAY( 15 ), EMPTYLIST );
        DISPLAY( 14 ) = CONS( DISPLAY( 14 ), EMPTYLIST );
        DISPLAY( 13 ) = CONS( DISPLAY( 13 ), EMPTYLIST );
        DISPLAY( 12 ) = CONS( DISPLAY( 12 ), EMPTYLIST );
        DISPLAY( 11 ) = CONS( DISPLAY( 11 ), EMPTYLIST );
        DISPLAY( 10 ) = CONS( DISPLAY( 10 ), EMPTYLIST );
        DISPLAY( 9 ) = CONS( DISPLAY( 9 ), EMPTYLIST );
        DISPLAY( 8 ) = CONS( DISPLAY( 8 ), EMPTYLIST );
        DISPLAY( 7 ) = CONS( DISPLAY( 7 ), EMPTYLIST );
        DISPLAY( 6 ) = CONS( DISPLAY( 6 ), EMPTYLIST );
        DISPLAY( 5 ) = CONS( DISPLAY( 5 ), EMPTYLIST );
        DISPLAY( 4 ) = CONS( DISPLAY( 4 ), EMPTYLIST );
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        DISPLAY( 2 ) = CONS( DISPLAY( 2 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 0 ) = CONS( DISPLAY( 0 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2731, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 13 ), 
                                         DISPLAY( 19 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 13 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_g2732, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 19 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 12 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2733, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 19 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 11 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2734, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 18 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 10 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2735, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 18 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 9 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2736, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 19 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 8 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2737, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 17 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 7 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2738, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 17 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 6 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2739, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 16 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 5 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2740, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 16 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2741, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 15 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2742, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 15 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 2 ) ), X1 );
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            scrt5_w2743, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 14 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_w2744, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 14 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            scrt5_l3029, 
                            MAKECLOSURE( EMPTYLIST, 
                                         14, 
                                         DISPLAY( 12 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 13 ) ) );
        SDVAL = sc_cons( c2171, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        DISPLAY( 16 ) = SD16;
        DISPLAY( 17 ) = SD17;
        DISPLAY( 18 ) = SD18;
        DISPLAY( 19 ) = SD19;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( scrt5_close_2dinput_2dport_v );
DEFCSTRING( t3881, "CLOSE-INPUT-PORT" );

TSCP  scrt5_close_2dinput_2dport( p3081 )
        TSCP  p3081;
{
        PUSHSTACKTRACE( t3881 );
        POPSTACKTRACE( scrt5_close_2dport( p3081 ) );
}

DEFTSCP( scrt5_close_2doutput_2dport_v );
DEFCSTRING( t3883, "CLOSE-OUTPUT-PORT" );

TSCP  scrt5_close_2doutput_2dport( p3083 )
        TSCP  p3083;
{
        PUSHSTACKTRACE( t3883 );
        POPSTACKTRACE( scrt5_close_2dport( p3083 ) );
}

DEFTSCP( scrt5_close_2dport_v );
DEFCSTRING( t3885, "CLOSE-PORT" );

TSCP  scrt5_close_2dport( p3085 )
        TSCP  p3085;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3885 );
        if  ( TRUE( scrt5_input_2dport_3f( p3085 ) ) )  goto L3889;
        if  ( TRUE( scrt5_output_2dport_3f( p3085 ) ) )  goto L3889;
        scdebug_error( c2535, 
                       c3090, CONS( p3085, EMPTYLIST ) );
L3889:
        scrt4_when_2dunreferenced( p3085, FALSEVALUE );
        if  ( EQ( TSCPTAG( p3085 ), PAIRTAG ) )  goto L3892;
        scrt1__24__cdr_2derror( p3085 );
L3892:
        X2 = PAIR_CDR( p3085 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2535, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

void scrt2__init();
void scrt4__init();
void scrt3__init();
void scrt1__init();
void scrt6__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        scrt4__init();
        scrt3__init();
        scrt1__init();
        scrt6__init();
        scdebug__init();
        MAXDISPLAY( 33 );
}

void  scrt5__init()
{
        TSCP  X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt5 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3253, 
                       ADR( scrt5_put_2dfile_36807e3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_put_2dfile_36807e3e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3259, 
                       ADR( scrt5_put_2dfile_16bb0f3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_put_2dfile_16bb0f3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3265, 
                       ADR( scrt5_input_2dport_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_input_2dport_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3278, 
                       ADR( scrt5_output_2dport_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_output_2dport_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3291, 
                       ADR( scrt5_rt_2dvalue_e3d6f738_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3292, 
                       ADR( scrt5_rt_2dvalue_c91906c5_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3293, 
                       ADR( scrt5_stderr_2dport_v ), FALSEVALUE );
        X1 = sc_scheme_2dmode(  );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2228 ) ) )  goto L3295;
        scrt5_rt_2dvalue_e3d6f738_v = scrt5_open_2dinput_2dstring( sc_emptystring );
        scrt5_rt_2dvalue_c91906c5_v = scrt5_open_2doutput_2dstring(  );
        X2 = scrt5_open_2doutput_2dstring(  );
        scrt6_set_2dwrite_2dcircle_21( TRUEVALUE, 
                                       CONS( X2, EMPTYLIST ) );
        scrt6_set_2dwrite_2dlevel_21( _TSCP( 160 ), 
                                      CONS( X2, EMPTYLIST ) );
        scrt6_set_2dwrite_2dlength_21( _TSCP( 160 ), 
                                       CONS( X2, EMPTYLIST ) );
        scrt5_stderr_2dport_v = X2;
        goto L3299;
L3295:
        if  ( FALSE( scrt1_memv( X1, c2229 ) ) )  goto L3299;
        scrt5_rt_2dvalue_e3d6f738_v = scrt5_make_2dfile_2dport( sc_stdin_v, 
                                                                c2141 );
        scrt5_rt_2dvalue_c91906c5_v = scrt5_make_2dfile_2dport( sc_stdout_v, 
                                                                c2152 );
        X2 = scrt5_make_2dfile_2dport( sc_stderr_v, c2152 );
        scrt6_set_2dwrite_2dcircle_21( TRUEVALUE, 
                                       CONS( X2, EMPTYLIST ) );
        scrt6_set_2dwrite_2dlevel_21( _TSCP( 160 ), 
                                      CONS( X2, EMPTYLIST ) );
        scrt6_set_2dwrite_2dlength_21( _TSCP( 160 ), 
                                       CONS( X2, EMPTYLIST ) );
        scrt5_stderr_2dport_v = X2;
L3299:
        INITIALIZEVAR( t3303, 
                       ADR( scrt5_stdin_2dport_v ), 
                       scrt5_rt_2dvalue_e3d6f738_v );
        INITIALIZEVAR( t3304, 
                       ADR( scrt5_stdout_2dport_v ), 
                       scrt5_rt_2dvalue_c91906c5_v );
        INITIALIZEVAR( t3305, 
                       ADR( scrt5_debug_2doutput_2dport_v ), 
                       scrt5_stderr_2dport_v );
        INITIALIZEVAR( t3306, 
                       ADR( scrt5_trace_2doutput_2dport_v ), 
                       scrt5_stdout_2dport_v );
        INITIALIZEVAR( t3307, 
                       ADR( scrt5_current_2dinput_2dport_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt5_current_2dinput_2dport, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3309, 
                       ADR( scrt5_current_2doutput_2dport_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt5_current_2doutput_2dport, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3311, 
                       ADR( scrt5_rom_2dfile_73f9e308_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_rom_2dfile_73f9e308, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3316, 
                       ADR( scrt5_dto_2dfile_6f7edfd9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_dto_2dfile_6f7edfd9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3321, 
                       ADR( scrt5_open_2dinput_2dfile_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_open_2dinput_2dfile, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3323, 
                       ADR( scrt5_open_2doutput_2dfile_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_open_2doutput_2dfile, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3325, 
                       ADR( scrt5_open_2dfile_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_open_2dfile, EMPTYLIST ) );
        INITIALIZEVAR( t3333, 
                       ADR( scrt5_make_2dfile_2dport_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt5_make_2dfile_2dport, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3559, 
                       ADR( scrt5_open_2dinput_2dstring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_open_2dinput_2dstring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3647, 
                       ADR( scrt5_open_2doutput_2dstring_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt5_open_2doutput_2dstring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3881, 
                       ADR( scrt5_close_2dinput_2dport_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_close_2dinput_2dport, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3883, 
                       ADR( scrt5_close_2doutput_2dport_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_close_2doutput_2dport, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3885, 
                       ADR( scrt5_close_2dport_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt5_close_2dport, EMPTYLIST ) );
        return;
}
