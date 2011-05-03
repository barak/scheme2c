
/* SCHEME->C */

#include <objects.h>

void scrt6__init();
DEFSTATICTSCP( c2947 );
DEFSTATICTSCP( c2815 );
DEFCSTRING( t3098, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2784 );
DEFCSTRING( t3099, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2778 );
DEFSTATICTSCP( c2777 );
DEFCSTRING( t3100, ": ~s ~s" );
DEFSTATICTSCP( c2759 );
DEFSTATICTSCP( c2754 );
DEFCSTRING( t3101, ": ~s" );
DEFSTATICTSCP( c2748 );
DEFSTATICTSCP( c2745 );
DEFCSTRING( t3102, ")" );
DEFSTATICTSCP( c2630 );
DEFCSTRING( t3103, ". " );
DEFSTATICTSCP( c2629 );
DEFCSTRING( t3104, "(" );
DEFSTATICTSCP( c2606 );
DEFCSTRING( t3105, "#" );
DEFSTATICTSCP( c2604 );
DEFCSTRING( t3106, "Too few ARGUMENTS for ~s" );
DEFSTATICTSCP( c2552 );
DEFCSTRING( t3107, "Too many ARGUMENTS for ~s" );
DEFSTATICTSCP( c2545 );
DEFCSTRING( t3108, "FORM ends with a ~~:  ~s" );
DEFSTATICTSCP( c2544 );
DEFCSTRING( t3109, "Unrecognized OUTPUT DESCRIPTOR in ~s" );
DEFSTATICTSCP( c2535 );
DEFSTATICTSCP( c2534 );
DEFSTATICTSCP( c2533 );
DEFSTATICTSCP( c2532 );
DEFCSTRING( t3110, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2517 );
DEFCSTRING( t3111, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2496 );
DEFSTATICTSCP( c2495 );
DEFCSTRING( t3112, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2488 );
DEFSTATICTSCP( c2487 );
DEFCSTRING( t3113, "Illegal arguments: ~s" );
DEFSTATICTSCP( c2439 );
DEFSTATICTSCP( c2438 );
DEFSTATICTSCP( c2401 );
DEFSTATICTSCP( c2394 );
DEFCSTRING( t3114, "A TRANSCRIPT is not in progress" );
DEFSTATICTSCP( c2387 );
DEFSTATICTSCP( c2386 );
DEFCSTRING( t3115, "w" );
DEFSTATICTSCP( c2381 );
DEFCSTRING( t3116, "A TRANSCRIPT is already in progress" );
DEFSTATICTSCP( c2378 );
DEFSTATICTSCP( c2377 );
DEFSTATICTSCP( c2366 );
DEFCSTRING( t3117, "PORT cannot be echoed to itself: ~s" );
DEFSTATICTSCP( c2361 );
DEFCSTRING( t3118, "Argument is not an OUTPUT PORT or #F: ~s" );
DEFSTATICTSCP( c2360 );
DEFCSTRING( t3119, "Port does not support ECHO: ~s" );
DEFSTATICTSCP( c2349 );
DEFCSTRING( t3120, "Argument is not a port: ~s" );
DEFSTATICTSCP( c2344 );
DEFSTATICTSCP( c2343 );
DEFSTATICTSCP( c2335 );
DEFSTATICTSCP( c2334 );
DEFSTATICTSCP( c2330 );
DEFSTATICTSCP( c2327 );
DEFSTATICTSCP( c2326 );
DEFSTATICTSCP( c2303 );
DEFSTATICTSCP( c2300 );
DEFCSTRING( t3121, "Argument is not #F or a NON-NEGATIVE INTEGER: ~s" );
DEFSTATICTSCP( c2299 );
DEFSTATICTSCP( c2298 );
DEFSTATICTSCP( c2275 );
DEFSTATICTSCP( c2272 );
DEFCSTRING( t3122, "Argument is not a BOOLEAN: ~s" );
DEFSTATICTSCP( c2271 );
DEFSTATICTSCP( c2270 );
DEFSTATICTSCP( c2266 );
DEFSTATICTSCP( c2263 );
DEFCSTRING( t3123, "Argument is not a POSITIVE INTEGER: ~s" );
DEFSTATICTSCP( c2262 );
DEFSTATICTSCP( c2261 );
DEFSTATICTSCP( c2244 );
DEFSTATICTSCP( c2241 );
DEFCSTRING( t3124, "Argument is not an OUTPUT STRING PORT: ~s" );
DEFSTATICTSCP( c2230 );
DEFSTATICTSCP( c2229 );
DEFSTATICTSCP( c2224 );
DEFSTATICTSCP( c2220 );
DEFCSTRING( t3125, "Argument is not a CHARACTER: ~s" );
DEFSTATICTSCP( c2217 );
DEFSTATICTSCP( c2216 );
DEFSTATICTSCP( c2210 );
DEFSTATICTSCP( c2206 );
DEFCSTRING( t3126, "Argument is not an OUTPUT-PORT: ~s" );
DEFSTATICTSCP( c2198 );
DEFSTATICTSCP( c2191 );
DEFSTATICTSCP( c2166 );
DEFSTATICTSCP( c2163 );
DEFSTATICTSCP( c2160 );
DEFSTATICTSCP( c2157 );
DEFCSTRING( t3127, "Argument is not an INPUT-PORT: ~s" );
DEFSTATICTSCP( c2150 );

static void  init_constants()
{
        c2947 = STRINGTOSYMBOL( CSTRING_TSCP( "WAIT" ) );
        CONSTANTEXP( ADR( c2947 ) );
        c2815 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2815 ) );
        c2784 = CSTRING_TSCP( t3098 );
        CONSTANTEXP( ADR( c2784 ) );
        c2778 = CSTRING_TSCP( t3099 );
        CONSTANTEXP( ADR( c2778 ) );
        c2777 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c2777 ) );
        c2759 = CSTRING_TSCP( t3100 );
        CONSTANTEXP( ADR( c2759 ) );
        c2754 = STRINGTOSYMBOL( CSTRING_TSCP( "RENAME-FILE" ) );
        CONSTANTEXP( ADR( c2754 ) );
        c2748 = CSTRING_TSCP( t3101 );
        CONSTANTEXP( ADR( c2748 ) );
        c2745 = STRINGTOSYMBOL( CSTRING_TSCP( "REMOVE-FILE" ) );
        CONSTANTEXP( ADR( c2745 ) );
        c2630 = CSTRING_TSCP( t3102 );
        CONSTANTEXP( ADR( c2630 ) );
        c2629 = CSTRING_TSCP( t3103 );
        CONSTANTEXP( ADR( c2629 ) );
        c2606 = CSTRING_TSCP( t3104 );
        CONSTANTEXP( ADR( c2606 ) );
        c2604 = CSTRING_TSCP( t3105 );
        CONSTANTEXP( ADR( c2604 ) );
        c2552 = CSTRING_TSCP( t3106 );
        CONSTANTEXP( ADR( c2552 ) );
        c2545 = CSTRING_TSCP( t3107 );
        CONSTANTEXP( ADR( c2545 ) );
        c2544 = CSTRING_TSCP( t3108 );
        CONSTANTEXP( ADR( c2544 ) );
        c2535 = CSTRING_TSCP( t3109 );
        CONSTANTEXP( ADR( c2535 ) );
        c2534 = EMPTYLIST;
        c2534 = CONS( _TSCP( 17170 ), c2534 );
        c2534 = CONS( _TSCP( 25362 ), c2534 );
        CONSTANTEXP( ADR( c2534 ) );
        c2533 = EMPTYLIST;
        c2533 = CONS( _TSCP( 16658 ), c2533 );
        c2533 = CONS( _TSCP( 24850 ), c2533 );
        CONSTANTEXP( ADR( c2533 ) );
        c2532 = EMPTYLIST;
        c2532 = CONS( _TSCP( 21266 ), c2532 );
        c2532 = CONS( _TSCP( 29458 ), c2532 );
        CONSTANTEXP( ADR( c2532 ) );
        c2517 = CSTRING_TSCP( t3110 );
        CONSTANTEXP( ADR( c2517 ) );
        c2496 = CSTRING_TSCP( t3111 );
        CONSTANTEXP( ADR( c2496 ) );
        c2495 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c2495 ) );
        c2488 = CSTRING_TSCP( t3112 );
        CONSTANTEXP( ADR( c2488 ) );
        c2487 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2487 ) );
        c2439 = CSTRING_TSCP( t3113 );
        CONSTANTEXP( ADR( c2439 ) );
        c2438 = STRINGTOSYMBOL( CSTRING_TSCP( "FORMAT" ) );
        CONSTANTEXP( ADR( c2438 ) );
        c2401 = STRINGTOSYMBOL( CSTRING_TSCP( "FILE-PORT" ) );
        CONSTANTEXP( ADR( c2401 ) );
        c2394 = STRINGTOSYMBOL( CSTRING_TSCP( "PORT->STDIO-FILE" ) );
        CONSTANTEXP( ADR( c2394 ) );
        c2387 = CSTRING_TSCP( t3114 );
        CONSTANTEXP( ADR( c2387 ) );
        c2386 = STRINGTOSYMBOL( CSTRING_TSCP( "TRANSCRIPT-OFF" ) );
        CONSTANTEXP( ADR( c2386 ) );
        c2381 = CSTRING_TSCP( t3115 );
        CONSTANTEXP( ADR( c2381 ) );
        c2378 = CSTRING_TSCP( t3116 );
        CONSTANTEXP( ADR( c2378 ) );
        c2377 = STRINGTOSYMBOL( CSTRING_TSCP( "TRANSCRIPT-ON" ) );
        CONSTANTEXP( ADR( c2377 ) );
        c2366 = STRINGTOSYMBOL( CSTRING_TSCP( "ECHO!" ) );
        CONSTANTEXP( ADR( c2366 ) );
        c2361 = CSTRING_TSCP( t3117 );
        CONSTANTEXP( ADR( c2361 ) );
        c2360 = CSTRING_TSCP( t3118 );
        CONSTANTEXP( ADR( c2360 ) );
        c2349 = CSTRING_TSCP( t3119 );
        CONSTANTEXP( ADR( c2349 ) );
        c2344 = CSTRING_TSCP( t3120 );
        CONSTANTEXP( ADR( c2344 ) );
        c2343 = STRINGTOSYMBOL( CSTRING_TSCP( "ECHO" ) );
        CONSTANTEXP( ADR( c2343 ) );
        c2335 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-PRETTY!" ) );
        CONSTANTEXP( ADR( c2335 ) );
        c2334 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-WRITE-PRETTY!" ) );
        CONSTANTEXP( ADR( c2334 ) );
        c2330 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-PRETTY" ) );
        CONSTANTEXP( ADR( c2330 ) );
        c2327 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LENGTH!" ) );
        CONSTANTEXP( ADR( c2327 ) );
        c2326 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-WRITE-LENGTH!" ) );
        CONSTANTEXP( ADR( c2326 ) );
        c2303 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LENGTH" ) );
        CONSTANTEXP( ADR( c2303 ) );
        c2300 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LEVEL!" ) );
        CONSTANTEXP( ADR( c2300 ) );
        c2299 = CSTRING_TSCP( t3121 );
        CONSTANTEXP( ADR( c2299 ) );
        c2298 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-WRITE-LEVEL!" ) );
        CONSTANTEXP( ADR( c2298 ) );
        c2275 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-LEVEL" ) );
        CONSTANTEXP( ADR( c2275 ) );
        c2272 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CIRCLE!" ) );
        CONSTANTEXP( ADR( c2272 ) );
        c2271 = CSTRING_TSCP( t3122 );
        CONSTANTEXP( ADR( c2271 ) );
        c2270 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-WRITE-CIRCLE!" ) );
        CONSTANTEXP( ADR( c2270 ) );
        c2266 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CIRCLE" ) );
        CONSTANTEXP( ADR( c2266 ) );
        c2263 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-WIDTH!" ) );
        CONSTANTEXP( ADR( c2263 ) );
        c2262 = CSTRING_TSCP( t3123 );
        CONSTANTEXP( ADR( c2262 ) );
        c2261 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-WRITE-WIDTH!" ) );
        CONSTANTEXP( ADR( c2261 ) );
        c2244 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-WIDTH" ) );
        CONSTANTEXP( ADR( c2244 ) );
        c2241 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-COUNT" ) );
        CONSTANTEXP( ADR( c2241 ) );
        c2230 = CSTRING_TSCP( t3124 );
        CONSTANTEXP( ADR( c2230 ) );
        c2229 = STRINGTOSYMBOL( CSTRING_TSCP( "GET-OUTPUT-STRING" ) );
        CONSTANTEXP( ADR( c2229 ) );
        c2224 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-FLUSH" ) );
        CONSTANTEXP( ADR( c2224 ) );
        c2220 = STRINGTOSYMBOL( CSTRING_TSCP( "NEWLINE" ) );
        CONSTANTEXP( ADR( c2220 ) );
        c2217 = CSTRING_TSCP( t3125 );
        CONSTANTEXP( ADR( c2217 ) );
        c2216 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE-CHAR" ) );
        CONSTANTEXP( ADR( c2216 ) );
        c2210 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2210 ) );
        c2206 = STRINGTOSYMBOL( CSTRING_TSCP( "WRITE" ) );
        CONSTANTEXP( ADR( c2206 ) );
        c2198 = CSTRING_TSCP( t3126 );
        CONSTANTEXP( ADR( c2198 ) );
        c2191 = STRINGTOSYMBOL( CSTRING_TSCP( "FLUSH-BUFFER" ) );
        CONSTANTEXP( ADR( c2191 ) );
        c2166 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR-READY?" ) );
        CONSTANTEXP( ADR( c2166 ) );
        c2163 = STRINGTOSYMBOL( CSTRING_TSCP( "PEEK-CHAR" ) );
        CONSTANTEXP( ADR( c2163 ) );
        c2160 = STRINGTOSYMBOL( CSTRING_TSCP( "READ-CHAR" ) );
        CONSTANTEXP( ADR( c2160 ) );
        c2157 = STRINGTOSYMBOL( CSTRING_TSCP( "READ" ) );
        CONSTANTEXP( ADR( c2157 ) );
        c2150 = CSTRING_TSCP( t3127 );
        CONSTANTEXP( ADR( c2150 ) );
}

DEFTSCP( scrt6_pending_2dstdout_v );
DEFCSTRING( t3128, "SCRT6_PENDING-STDOUT" );
DEFTSCP( scrt6_input_2dport_v );
DEFCSTRING( t3129, "SCRT6_INPUT-PORT" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt5_input_2dport_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt5_input_2dport_3f_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt5_current_2dinput_2dport, XAL0(  ) );
EXTERNTSCP( scrt5_current_2dinput_2dport_v );
EXTERNTSCP( scrt5_stdin_2dport_v );
EXTERNTSCPP( scrt6_flush_2dbuffer, XAL1( TSCP ) );
EXTERNTSCP( scrt6_flush_2dbuffer_v );
EXTERNTSCP( scrt5_stdout_2dport_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  scrt6_input_2dport( f2133, p2134 )
        TSCP  f2133, p2134;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3129 );
        if  ( FALSE( p2134 ) )  goto L3131;
        if  ( EQ( TSCPTAG( p2134 ), PAIRTAG ) )  goto L3134;
        scrt1__24__car_2derror( p2134 );
L3134:
        X2 = PAIR_CAR( p2134 );
        if  ( FALSE( scrt5_input_2dport_3f( X2 ) ) )  goto L3137;
        X1 = X2;
        goto L3132;
L3137:
        X1 = scdebug_error( f2133, 
                            c2150, CONS( X2, EMPTYLIST ) );
        goto L3132;
L3131:
        X1 = scrt5_current_2dinput_2dport(  );
L3132:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( scrt5_stdin_2dport_v ) ) )  goto L3142;
        if  ( FALSE( scrt6_pending_2dstdout_v ) )  goto L3142;
        scrt6_flush_2dbuffer( CONS( scrt5_stdout_2dport_v, EMPTYLIST ) );
L3142:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3145;
        scrt1__24__cdr_2derror( X1 );
L3145:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt6_read_v );
DEFCSTRING( t3147, "READ" );
EXTERNTSCPP( scrt7_read_2ddatum, XAL1( TSCP ) );
EXTERNTSCP( scrt7_read_2ddatum_v );

TSCP  scrt6_read( p2156 )
        TSCP  p2156;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3147 );
        X1 = scrt6_input_2dport( c2157, p2156 );
        POPSTACKTRACE( scrt7_read_2ddatum( X1 ) );
}

DEFTSCP( scrt6_read_2dchar_v );
DEFCSTRING( t3149, "READ-CHAR" );

TSCP  scrt6_read_2dchar( p2159 )
        TSCP  p2159;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3149 );
        X2 = scrt6_input_2dport( c2160, p2159 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2160, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_peek_2dchar_v );
DEFCSTRING( t3151, "PEEK-CHAR" );

TSCP  scrt6_peek_2dchar( p2162 )
        TSCP  p2162;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3151 );
        X2 = scrt6_input_2dport( c2163, p2162 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2163, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_char_2dready_3f_v );
DEFCSTRING( t3153, "CHAR-READY?" );

TSCP  scrt6_char_2dready_3f( p2165 )
        TSCP  p2165;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3153 );
        X2 = scrt6_input_2dport( c2166, p2165 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2166, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_eof_2dobject_3f_v );
DEFCSTRING( t3155, "EOF-OBJECT?" );
EXTERNTSCP( sc_eofobject );

TSCP  scrt6_eof_2dobject_3f( o2168 )
        TSCP  o2168;
{
        PUSHSTACKTRACE( t3155 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( o2168 ), 
                                    _S2CUINT( sc_eofobject ) ) ) );
}

DEFTSCP( scrt6_output_2dport_v );
DEFCSTRING( t3157, "SCRT6_OUTPUT-PORT" );
EXTERNTSCPP( scrt5_output_2dport_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt5_output_2dport_3f_v );
EXTERNTSCPP( scrt5_current_2doutput_2dport, XAL0(  ) );
EXTERNTSCP( scrt5_current_2doutput_2dport_v );
EXTERNTSCP( scrt5_stderr_2dport_v );

TSCP  scrt6_output_2dport( f2174, p2175 )
        TSCP  f2174, p2175;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3157 );
        if  ( FALSE( p2175 ) )  goto L3159;
        if  ( EQ( TSCPTAG( p2175 ), PAIRTAG ) )  goto L3162;
        scrt1__24__car_2derror( p2175 );
L3162:
        X2 = PAIR_CAR( p2175 );
        if  ( FALSE( scrt5_output_2dport_3f( X2 ) ) )  goto L3165;
        X1 = X2;
        goto L3160;
L3165:
        X1 = scdebug_error( f2174, 
                            c2198, CONS( X2, EMPTYLIST ) );
        goto L3160;
L3159:
        X1 = scrt5_current_2doutput_2dport(  );
L3160:
        X2 = BOOLEAN( EQ( _S2CUINT( X1 ), 
                          _S2CUINT( scrt5_stderr_2dport_v ) ) );
        if  ( FALSE( X2 ) )  goto L3174;
        if  ( FALSE( scrt6_pending_2dstdout_v ) )  goto L3174;
        scrt6_flush_2dbuffer( CONS( scrt5_stdout_2dport_v, EMPTYLIST ) );
        goto L3176;
L3174:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( scrt5_stdout_2dport_v ) ) )  goto L3176;
        scrt6_pending_2dstdout_v = BOOLEAN( NEQ( _S2CUINT( f2174 ), 
                                                 _S2CUINT( c2191 ) ) );
L3176:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3179;
        scrt1__24__cdr_2derror( X1 );
L3179:
        POPSTACKTRACE( PAIR_CDR( X1 ) );
}

DEFTSCP( scrt6_write_v );
DEFCSTRING( t3181, "WRITE" );
EXTERNTSCPP( scrt7_write_2fdisplay, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt7_write_2fdisplay_v );

TSCP  scrt6_write( o2204, p2205 )
        TSCP  o2204, p2205;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3181 );
        X1 = scrt6_output_2dport( c2206, p2205 );
        POPSTACKTRACE( scrt7_write_2fdisplay( o2204, TRUEVALUE, X1 ) );
}

DEFTSCP( scrt6_display_v );
DEFCSTRING( t3183, "DISPLAY" );

TSCP  scrt6_display( o2208, p2209 )
        TSCP  o2208, p2209;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3183 );
        X1 = scrt6_output_2dport( c2210, p2209 );
        POPSTACKTRACE( scrt7_write_2fdisplay( o2208, 
                                              FALSEVALUE, X1 ) );
}

DEFTSCP( scrt6_write_2dchar_v );
DEFCSTRING( t3185, "WRITE-CHAR" );

TSCP  scrt6_write_2dchar( c2212, p2213 )
        TSCP  c2212, p2213;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3185 );
        if  ( EQ( TSCPIMMEDIATETAG( c2212 ), CHARACTERTAG ) )  goto L3187;
        scdebug_error( c2216, 
                       c2217, CONS( c2212, EMPTYLIST ) );
L3187:
        X2 = scrt6_output_2dport( c2216, p2213 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2216, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2212, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_newline_v );
DEFCSTRING( t3189, "NEWLINE" );

TSCP  scrt6_newline( p2219 )
        TSCP  p2219;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3189 );
        X2 = scrt6_output_2dport( c2220, p2219 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2216, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( _TSCP( 2578 ), 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_flush_2dbuffer_v );
DEFCSTRING( t3191, "FLUSH-BUFFER" );

TSCP  scrt6_flush_2dbuffer( p2223 )
        TSCP  p2223;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3191 );
        X2 = scrt6_output_2dport( c2191, p2223 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2224, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_get_2doutput_2dstring_v );
DEFCSTRING( t3193, "GET-OUTPUT-STRING" );

TSCP  scrt6_get_2doutput_2dstring( p2226 )
        TSCP  p2226;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3193 );
        X2 = scrt5_output_2dport_3f( p2226 );
        if  ( FALSE( X2 ) )  goto L3196;
        if  ( EQ( TSCPTAG( p2226 ), PAIRTAG ) )  goto L3199;
        scrt1__24__cdr_2derror( p2226 );
L3199:
        X4 = PAIR_CDR( p2226 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c2229, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X3 = UNKNOWNCALL( X3, 0 );
        X1 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        goto L3197;
L3196:
        X1 = X2;
L3197:
        if  ( TRUE( X1 ) )  goto L3202;
        POPSTACKTRACE( scdebug_error( c2229, 
                                      c2230, 
                                      CONS( p2226, EMPTYLIST ) ) );
L3202:
        POPSTACKTRACE( X1 );
}

DEFTSCP( scrt6_write_2dcount_v );
DEFCSTRING( t3204, "WRITE-COUNT" );

TSCP  scrt6_write_2dcount( p2240 )
        TSCP  p2240;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3204 );
        X2 = scrt6_output_2dport( c2241, p2240 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2241, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_write_2dwidth_v );
DEFCSTRING( t3206, "WRITE-WIDTH" );

TSCP  scrt6_write_2dwidth( p2243 )
        TSCP  p2243;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3206 );
        X2 = scrt6_output_2dport( c2244, p2243 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2244, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_set_2dwrite_2dwidth_21_v );
DEFCSTRING( t3208, "SET-WRITE-WIDTH!" );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );

TSCP  scrt6_set_2dwrite_2dwidth_21( w2246, p2247 )
        TSCP  w2246, p2247;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3208 );
        X1 = BOOLEAN( NEQ( TSCPTAG( w2246 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L3214;
        if  ( BITAND( BITOR( _S2CINT( w2246 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L3216;
        if  ( LTE( _S2CINT( w2246 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L3214;
        goto L3223;
L3216:
        if  ( FALSE( scrt2__3c_3d_2dtwo( w2246, _TSCP( 0 ) ) )
            )  goto L3223;
L3214:
        scdebug_error( c2261, 
                       c2262, CONS( w2246, EMPTYLIST ) );
L3223:
        X2 = scrt6_output_2dport( c2261, p2247 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2263, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( w2246, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_write_2dcircle_v );
DEFCSTRING( t3224, "WRITE-CIRCLE" );

TSCP  scrt6_write_2dcircle( p2265 )
        TSCP  p2265;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3224 );
        X2 = scrt6_output_2dport( c2266, p2265 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2266, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_set_2dwrite_2dcircle_21_v );
DEFCSTRING( t3226, "SET-WRITE-CIRCLE!" );
EXTERNTSCPP( scrt1_boolean_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_boolean_3f_v );

TSCP  scrt6_set_2dwrite_2dcircle_21( f2268, p2269 )
        TSCP  f2268, p2269;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3226 );
        if  ( TRUE( scrt1_boolean_3f( f2268 ) ) )  goto L3228;
        scdebug_error( c2270, 
                       c2271, CONS( f2268, EMPTYLIST ) );
L3228:
        X2 = scrt6_output_2dport( c2270, p2269 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2272, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( f2268, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_write_2dlevel_v );
DEFCSTRING( t3230, "WRITE-LEVEL" );

TSCP  scrt6_write_2dlevel( p2274 )
        TSCP  p2274;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3230 );
        X2 = scrt6_output_2dport( c2275, p2274 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2275, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_set_2dwrite_2dlevel_21_v );
DEFCSTRING( t3232, "SET-WRITE-LEVEL!" );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );

TSCP  scrt6_set_2dwrite_2dlevel_21( l2277, p2278 )
        TSCP  l2277, p2278;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3232 );
        if  ( EQ( _S2CUINT( l2277 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3248;
        if  ( NEQ( TSCPTAG( l2277 ), FIXNUMTAG ) )  goto L3247;
        if  ( BITAND( BITOR( _S2CINT( l2277 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L3240;
        if  ( LT( _S2CINT( l2277 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L3247;
        goto L3248;
L3240:
        if  ( TRUE( scrt2__3e_3d_2dtwo( l2277, _TSCP( 0 ) ) )
            )  goto L3248;
L3247:
        scdebug_error( c2298, 
                       c2299, CONS( l2277, EMPTYLIST ) );
L3248:
        X2 = scrt6_output_2dport( c2298, p2278 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2300, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2277, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_write_2dlength_v );
DEFCSTRING( t3249, "WRITE-LENGTH" );

TSCP  scrt6_write_2dlength( p2302 )
        TSCP  p2302;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3249 );
        X2 = scrt6_output_2dport( c2303, p2302 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2303, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_set_2dwrite_2dlength_21_v );
DEFCSTRING( t3251, "SET-WRITE-LENGTH!" );

TSCP  scrt6_set_2dwrite_2dlength_21( l2305, p2306 )
        TSCP  l2305, p2306;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3251 );
        if  ( EQ( _S2CUINT( l2305 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3267;
        if  ( NEQ( TSCPTAG( l2305 ), FIXNUMTAG ) )  goto L3266;
        if  ( BITAND( BITOR( _S2CINT( l2305 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L3259;
        if  ( LT( _S2CINT( l2305 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L3266;
        goto L3267;
L3259:
        if  ( TRUE( scrt2__3e_3d_2dtwo( l2305, _TSCP( 0 ) ) )
            )  goto L3267;
L3266:
        scdebug_error( c2326, 
                       c2299, CONS( l2305, EMPTYLIST ) );
L3267:
        X2 = scrt6_output_2dport( c2326, p2306 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2327, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2305, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_write_2dpretty_v );
DEFCSTRING( t3268, "WRITE-PRETTY" );

TSCP  scrt6_write_2dpretty( p2329 )
        TSCP  p2329;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3268 );
        X2 = scrt6_output_2dport( c2330, p2329 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2330, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_set_2dwrite_2dpretty_21_v );
DEFCSTRING( t3270, "SET-WRITE-PRETTY!" );

TSCP  scrt6_set_2dwrite_2dpretty_21( f2332, p2333 )
        TSCP  f2332, p2333;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3270 );
        if  ( TRUE( scrt1_boolean_3f( f2332 ) ) )  goto L3272;
        scdebug_error( c2334, 
                       c2271, CONS( f2332, EMPTYLIST ) );
L3272:
        X2 = scrt6_output_2dport( c2334, p2333 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2335, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( f2332, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_echo_v );
DEFCSTRING( t3274, "ECHO" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  scrt6_echo( p2337, a2338 )
        TSCP  p2337, a2338;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3274 );
        if  ( TRUE( scrt5_input_2dport_3f( p2337 ) ) )  goto L3278;
        if  ( TRUE( scrt5_output_2dport_3f( p2337 ) ) )  goto L3278;
        scdebug_error( c2343, 
                       c2344, CONS( p2337, EMPTYLIST ) );
L3278:
        if  ( EQ( TSCPTAG( p2337 ), PAIRTAG ) )  goto L3283;
        scrt1__24__cdr_2derror( p2337 );
L3283:
        X1 = PAIR_CDR( p2337 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X1 ) )( c2343, 
                                                 PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3280;
        scdebug_error( c2343, 
                       c2349, CONS( p2337, EMPTYLIST ) );
L3280:
        if  ( FALSE( a2338 ) )  goto L3285;
        if  ( EQ( TSCPTAG( a2338 ), PAIRTAG ) )  goto L3288;
        scrt1__24__car_2derror( a2338 );
L3288:
        X1 = PAIR_CAR( a2338 );
        if  ( FALSE( X1 ) )  goto L3293;
        if  ( TRUE( scrt5_output_2dport_3f( X1 ) ) )  goto L3293;
        scdebug_error( c2343, 
                       c2360, CONS( X1, EMPTYLIST ) );
L3293:
        if  ( FALSE( scrt1_equal_3f( p2337, X1 ) ) )  goto L3295;
        scdebug_error( c2343, 
                       c2361, CONS( X1, EMPTYLIST ) );
L3295:
        if  ( EQ( TSCPTAG( p2337 ), PAIRTAG ) )  goto L3298;
        scrt1__24__cdr_2derror( p2337 );
L3298:
        X3 = PAIR_CDR( p2337 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c2366, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X1, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L3285:
        if  ( EQ( TSCPTAG( p2337 ), PAIRTAG ) )  goto L3301;
        scrt1__24__cdr_2derror( p2337 );
L3301:
        X2 = PAIR_CDR( p2337 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2343, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scrt6_transcript_2don_v );
DEFCSTRING( t3303, "TRANSCRIPT-ON" );
EXTERNTSCPP( scrt5_open_2dfile, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt5_open_2dfile_v );

TSCP  scrt6_transcript_2don( f2372 )
        TSCP  f2372;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3303 );
        X1 = scrt6_echo( scrt5_stdin_2dport_v, EMPTYLIST );
        if  ( TRUE( X1 ) )  goto L3309;
        if  ( FALSE( scrt6_echo( scrt5_stdout_2dport_v, EMPTYLIST ) )
            )  goto L3312;
L3309:
        scdebug_error( c2377, c2378, EMPTYLIST );
L3312:
        X1 = scrt5_open_2dfile( f2372, c2381 );
        scrt6_echo( scrt5_stdin_2dport_v, 
                    CONS( X1, EMPTYLIST ) );
        scrt6_echo( scrt5_stdout_2dport_v, 
                    CONS( X1, EMPTYLIST ) );
        POPSTACKTRACE( c2377 );
}

DEFTSCP( scrt6_transcript_2doff_v );
DEFCSTRING( t3314, "TRANSCRIPT-OFF" );
EXTERNTSCPP( scrt5_close_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2dport_v );

TSCP  scrt6_transcript_2doff(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3314 );
        X1 = scrt6_echo( scrt5_stdin_2dport_v, EMPTYLIST );
        X2 = scrt6_echo( scrt5_stdout_2dport_v, EMPTYLIST );
        if  ( TRUE( scrt1_equal_3f( X1, X2 ) ) )  goto L3317;
        scdebug_error( c2386, c2387, EMPTYLIST );
L3317:
        scrt6_echo( scrt5_stdin_2dport_v, 
                    CONS( FALSEVALUE, EMPTYLIST ) );
        scrt6_echo( scrt5_stdout_2dport_v, 
                    CONS( FALSEVALUE, EMPTYLIST ) );
        POPSTACKTRACE( scrt5_close_2dport( X1 ) );
}

DEFTSCP( scrt6_port_2d_3estdio_2dfile_v );
DEFCSTRING( t3319, "PORT->STDIO-FILE" );

TSCP  scrt6_port_2d_3estdio_2dfile( p2389 )
        TSCP  p2389;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3319 );
        X1 = scrt5_input_2dport_3f( p2389 );
        if  ( TRUE( X1 ) )  goto L3325;
        if  ( TRUE( scrt5_output_2dport_3f( p2389 ) ) )  goto L3325;
        POPSTACKTRACE( scdebug_error( c2394, 
                                      c2344, 
                                      CONS( p2389, EMPTYLIST ) ) );
L3325:
        if  ( EQ( TSCPTAG( p2389 ), PAIRTAG ) )  goto L3329;
        scrt1__24__cdr_2derror( p2389 );
L3329:
        X2 = PAIR_CDR( p2389 );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c2401, 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L3332;
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) ) );
L3332:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt6_format_v );
DEFCSTRING( t3334, "FORMAT" );
EXTERNTSCPP( scrt5_open_2doutput_2dstring, XAL0(  ) );
EXTERNTSCP( scrt5_open_2doutput_2dstring_v );
EXTERNTSCPP( scrt6_formatx, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt6_formatx_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  scrt6_format( f2403, a2404 )
        TSCP  f2403, a2404;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3334 );
        f2403 = CONS( f2403, EMPTYLIST );
        if  ( NEQ( _S2CUINT( PAIR_CAR( f2403 ) ), 
                   _S2CUINT( TRUEVALUE ) ) )  goto L3336;
        X1 = scrt5_current_2doutput_2dport(  );
        SETGEN( PAIR_CAR( f2403 ), X1 );
L3336:
        if  ( FALSE( PAIR_CAR( f2403 ) ) )  goto L3338;
        X1 = FALSEVALUE;
        goto L3339;
L3338:
        X1 = TRUEVALUE;
L3339:
        if  ( FALSE( X1 ) )  goto L3356;
        if  ( FALSE( a2404 ) )  goto L3356;
        if  ( EQ( TSCPTAG( a2404 ), PAIRTAG ) )  goto L3350;
        scrt1__24__car_2derror( a2404 );
L3350:
        X2 = PAIR_CAR( a2404 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )
            )  goto L3356;
        X2 = scrt5_open_2doutput_2dstring(  );
        X3 = PAIR_CAR( a2404 );
        X4 = PAIR_CDR( a2404 );
        scrt6_formatx( X2, X3, X4 );
        POPSTACKTRACE( scrt6_get_2doutput_2dstring( X2 ) );
L3356:
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( f2403 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( f2403 ) ), 
                            STRINGTAG ) ) ) )  goto L3357;
        X1 = scrt5_open_2doutput_2dstring(  );
        scrt6_formatx( X1, PAIR_CAR( f2403 ), a2404 );
        POPSTACKTRACE( scrt6_get_2doutput_2dstring( X1 ) );
L3357:
        X1 = scrt5_output_2dport_3f( PAIR_CAR( f2403 ) );
        if  ( FALSE( X1 ) )  goto L3375;
        if  ( FALSE( a2404 ) )  goto L3375;
        if  ( EQ( TSCPTAG( a2404 ), PAIRTAG ) )  goto L3370;
        scrt1__24__car_2derror( a2404 );
L3370:
        X2 = PAIR_CAR( a2404 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )
            )  goto L3375;
        X2 = PAIR_CAR( a2404 );
        X3 = PAIR_CDR( a2404 );
        POPSTACKTRACE( scrt6_formatx( PAIR_CAR( f2403 ), 
                                      X2, X3 ) );
L3375:
        POPSTACKTRACE( scdebug_error( c2438, 
                                      c2439, 
                                      CONS( sc_cons( PAIR_CAR( f2403 ), 
                                                     a2404 ), 
                                            EMPTYLIST ) ) );
}

DEFTSCP( scrt6_formatx_v );
DEFCSTRING( t3376, "SCRT6_FORMATX" );

TSCP  scrt6_a2467(  )
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "ARG [inside FORMATX]" );
        if  ( NEQ( _S2CUINT( PAIR_CAR( DISPLAY( 1 ) ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3379;
        scdebug_error( c2438, 
                       c2552, 
                       CONS( DISPLAY( 0 ), EMPTYLIST ) );
L3379:
        X2 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3382;
        scrt1__24__car_2derror( X2 );
L3382:
        X1 = PAIR_CAR( X2 );
        X3 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3386;
        scrt1__24__cdr_2derror( X3 );
L3386:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X2 );
        POPSTACKTRACE( X1 );
}

EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  scrt6_formatx( p2463, f2464, a2465 )
        TSCP  p2463, f2464, a2465;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3376 );
        DISPLAY( 0 ) = f2464;
        DISPLAY( 1 ) = a2465;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = _TSCP( 0 );
        X2 = FALSEVALUE;
        X3 = FALSEVALUE;
L3390:
        X3 = CONS( X3, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( DISPLAY( 0 ) ), 
                       EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( DISPLAY( 0 ) ), 
                       STRINGTAG ) ) )  goto L3392;
        scdebug_error( c2487, 
                       c2488, 
                       CONS( DISPLAY( 0 ), EMPTYLIST ) );
L3392:
        X4 = C_FIXED( STRING_LENGTH( DISPLAY( 0 ) ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3396;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( X4 ) ) )  goto L3400;
        goto L3401;
L3396:
        if  ( FALSE( scrt2__3d_2dtwo( X1, X4 ) ) )  goto L3401;
L3400:
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L3405;
        scdebug_error( c2438, 
                       c2544, 
                       CONS( DISPLAY( 0 ), EMPTYLIST ) );
L3405:
        if  ( FALSE( PAIR_CAR( DISPLAY( 1 ) ) ) )  goto L3407;
        SDVAL = scdebug_error( c2438, 
                               c2545, 
                               CONS( DISPLAY( 0 ), EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L3407:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L3401:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3411;
        scdebug_error( c2495, 
                       c2496, CONS( X1, EMPTYLIST ) );
L3411:
        X5 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L3417;
        X6 = C_FIXED( STRING_LENGTH( DISPLAY( 0 ) ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L3421;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X6 ) ) )  goto L3417;
        goto L3428;
L3421:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X6 ) ) )  goto L3428;
L3417:
        scdebug_error( c2495, 
                       c2517, CONS( X1, EMPTYLIST ) );
L3428:
        X4 = C_CHAR( STRING_CHAR( DISPLAY( 0 ), X1 ) );
        SETGEN( PAIR_CAR( X3 ), X4 );
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L3429;
        X4 = FALSEVALUE;
        SETGEN( PAIR_CAR( X2 ), X4 );
        X4 = PAIR_CAR( X3 );
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 32274 ) ) ) )  goto L3433;
        scrt6_display( PAIR_CAR( X3 ), 
                       CONS( p2463, EMPTYLIST ) );
        goto L3444;
L3433:
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 9490 ) ) ) )  goto L3435;
        scrt6_newline( CONS( p2463, EMPTYLIST ) );
        goto L3444;
L3435:
        if  ( FALSE( scrt1_memv( X4, c2532 ) ) )  goto L3437;
        X5 = scrt6_a2467(  );
        scrt6_write( X5, CONS( p2463, EMPTYLIST ) );
        goto L3444;
L3437:
        if  ( FALSE( scrt1_memv( X4, c2533 ) ) )  goto L3439;
        X5 = scrt6_a2467(  );
        scrt6_display( X5, CONS( p2463, EMPTYLIST ) );
        goto L3444;
L3439:
        if  ( FALSE( scrt1_memv( X4, c2534 ) ) )  goto L3441;
        X5 = scrt6_a2467(  );
        scrt6_write_2dchar( X5, CONS( p2463, EMPTYLIST ) );
        goto L3444;
L3441:
        scdebug_error( c2438, 
                       c2535, 
                       CONS( DISPLAY( 0 ), EMPTYLIST ) );
        goto L3444;
L3429:
        if  ( NEQ( _S2CUINT( PAIR_CAR( X3 ) ), 
                   _S2CUINT( _TSCP( 32274 ) ) ) )  goto L3443;
        X4 = TRUEVALUE;
        SETGEN( PAIR_CAR( X2 ), X4 );
        goto L3444;
L3443:
        scrt6_write_2dchar( PAIR_CAR( X3 ), 
                            CONS( p2463, EMPTYLIST ) );
L3444:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3445;
        X4 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X1 ) ) );
        goto L3446;
L3445:
        X4 = scrt2__2b_2dtwo( _TSCP( 4 ), X1 );
L3446:
        X3 = PAIR_CAR( X3 );
        X2 = PAIR_CAR( X2 );
        X1 = X4;
        GOBACK( L3390 );
}

DEFTSCP( scrt6_pp_v );
DEFCSTRING( t3447, "PP" );
EXTERNTSCPP( scrt6_pp1, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_pp1_v );
EXTERNTSCPP( scrt5_open_2doutput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2doutput_2dfile_v );
EXTERNTSCPP( scrt5_close_2doutput_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2doutput_2dport_v );

TSCP  scrt6_pp( f2564, o2565 )
        TSCP  f2564, o2565;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3447 );
        if  ( NEQ( _S2CUINT( o2565 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3449;
        X1 = scrt5_current_2doutput_2dport(  );
        scrt6_pp1( f2564, X1 );
        goto L3452;
L3449:
        if  ( EQ( TSCPTAG( o2565 ), PAIRTAG ) )  goto L3454;
        scrt1__24__car_2derror( o2565 );
L3454:
        X1 = PAIR_CAR( o2565 );
        if  ( FALSE( scrt5_output_2dport_3f( X1 ) ) )  goto L3451;
        X1 = PAIR_CAR( o2565 );
        scrt6_pp1( f2564, X1 );
        goto L3452;
L3451:
        if  ( EQ( TSCPTAG( o2565 ), PAIRTAG ) )  goto L3458;
        scrt1__24__car_2derror( o2565 );
L3458:
        X2 = PAIR_CAR( o2565 );
        X1 = scrt5_open_2doutput_2dfile( X2 );
        scrt6_pp1( f2564, X1 );
        scrt5_close_2doutput_2dport( X1 );
L3452:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( scrt6_pp1_v );
DEFCSTRING( t3461, "SCRT6_PP1" );
EXTERNTSCPP( scrt6_print_2din, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_print_2din_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  scrt6_pp1( f2587, p2588 )
        TSCP  f2587, p2588;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3461 );
L3462:
        X1 = scrt6_write_2dcount( CONS( p2588, EMPTYLIST ) );
        X4 = scrt6_write_2dwidth( CONS( p2588, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L3465;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( X1 ) ) );
        goto L3466;
L3465:
        X3 = scrt2__2d_2dtwo( X4, X1 );
L3466:
        X2 = scrt6_print_2din( f2587, X3 );
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3469;
        if  ( LT( _S2CINT( X2 ), 0 ) )  goto L3473;
        goto L3474;
L3469:
        if  ( FALSE( scrt2_negative_3f( X2 ) ) )  goto L3474;
L3473:
        if  ( NEQ( TSCPTAG( f2587 ), PAIRTAG ) )  goto L3477;
        scrt6_display( c2606, CONS( p2588, EMPTYLIST ) );
        X2 = PAIR_CAR( f2587 );
        scrt6_pp1( X2, p2588 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3482;
        X3 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L3483;
L3482:
        X3 = scrt2__2b_2dtwo( X1, _TSCP( 8 ) );
L3483:
        X2 = sc_make_2dstring( X3, 
                               CONS( _TSCP( 8210 ), EMPTYLIST ) );
        X3 = PAIR_CDR( f2587 );
L3485:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3486;
        scrt6_newline( CONS( p2588, EMPTYLIST ) );
        scrt6_display( X2, CONS( p2588, EMPTYLIST ) );
        X4 = PAIR_CAR( X3 );
        scrt6_pp1( X4, p2588 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3485 );
L3486:
        if  ( FALSE( X3 ) )  goto L3492;
        scrt6_newline( CONS( p2588, EMPTYLIST ) );
        scrt6_display( X2, CONS( p2588, EMPTYLIST ) );
        scrt6_display( c2629, CONS( p2588, EMPTYLIST ) );
        scrt6_pp1( X3, p2588 );
L3492:
        POPSTACKTRACE( scrt6_display( c2630, 
                                      CONS( p2588, EMPTYLIST ) ) );
L3477:
        if  ( NOT( AND( EQ( TSCPTAG( f2587 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( f2587 ), VECTORTAG ) ) )
            )  goto L3495;
        scrt6_display( c2604, CONS( p2588, EMPTYLIST ) );
        X2 = scrt4_vector_2d_3elist( f2587 );
        f2587 = X2;
        GOBACK( L3462 );
L3495:
        POPSTACKTRACE( scrt6_write( f2587, 
                                    CONS( p2588, EMPTYLIST ) ) );
L3474:
        POPSTACKTRACE( scrt6_write( f2587, 
                                    CONS( p2588, EMPTYLIST ) ) );
}

DEFTSCP( scrt6_print_2din_v );
DEFCSTRING( t3498, "SCRT6_PRINT-IN" );

TSCP  scrt6_print_2din( f2651, l2652 )
        TSCP  f2651, l2652;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3498 );
L3499:
        if  ( NEQ( TSCPTAG( l2652 ), FIXNUMTAG ) )  goto L3501;
        if  ( GTE( _S2CINT( l2652 ), 0 ) )  goto L3505;
        POPSTACKTRACE( l2652 );
L3501:
        if  ( FALSE( scrt2_negative_3f( l2652 ) ) )  goto L3505;
        POPSTACKTRACE( l2652 );
L3505:
        if  ( NEQ( TSCPTAG( f2651 ), PAIRTAG ) )  goto L3508;
        X1 = PAIR_CDR( f2651 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3510;
        X2 = PAIR_CAR( f2651 );
        if  ( BITAND( BITOR( _S2CINT( l2652 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3514;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( l2652 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3515;
L3514:
        X3 = scrt2__2d_2dtwo( l2652, _TSCP( 4 ) );
L3515:
        X1 = scrt6_print_2din( X2, X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3517;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                           _S2CINT( _TSCP( 4 ) ) ) ) );
L3517:
        POPSTACKTRACE( scrt2__2d_2dtwo( X1, _TSCP( 4 ) ) );
L3510:
        X1 = PAIR_CDR( f2651 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3519;
        X1 = PAIR_CDR( f2651 );
        X2 = PAIR_CAR( f2651 );
        if  ( BITAND( BITOR( _S2CINT( l2652 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3524;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( l2652 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3525;
L3524:
        X3 = scrt2__2d_2dtwo( l2652, _TSCP( 4 ) );
L3525:
        l2652 = scrt6_print_2din( X2, X3 );
        f2651 = X1;
        GOBACK( L3499 );
L3519:
        X1 = PAIR_CDR( f2651 );
        X2 = PAIR_CAR( f2651 );
        if  ( BITAND( BITOR( _S2CINT( l2652 ), 
                             _S2CINT( _TSCP( 20 ) ) ), 
                      3 ) )  goto L3528;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( l2652 ), 
                                 _S2CINT( _TSCP( 20 ) ) ) );
        goto L3529;
L3528:
        X3 = scrt2__2d_2dtwo( l2652, _TSCP( 20 ) );
L3529:
        l2652 = scrt6_print_2din( X2, X3 );
        f2651 = X1;
        GOBACK( L3499 );
L3508:
        if  ( NOT( AND( EQ( TSCPTAG( f2651 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( f2651 ), VECTORTAG ) ) )
            )  goto L3530;
        X1 = scrt4_vector_2d_3elist( f2651 );
        if  ( BITAND( BITOR( _S2CINT( l2652 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3532;
        l2652 = _TSCP( IDIFFERENCE( _S2CINT( l2652 ), 
                                    _S2CINT( _TSCP( 4 ) ) ) );
        goto L3533;
L3532:
        l2652 = scrt2__2d_2dtwo( l2652, _TSCP( 4 ) );
L3533:
        f2651 = X1;
        GOBACK( L3499 );
L3530:
        X1 = scrt5_open_2doutput_2dstring(  );
        scrt6_write( f2651, CONS( X1, EMPTYLIST ) );
        X3 = scrt6_get_2doutput_2dstring( X1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), STRINGTAG ) ) )  goto L3536;
        scdebug_error( c2487, 
                       c2488, CONS( X3, EMPTYLIST ) );
L3536:
        X2 = C_FIXED( STRING_LENGTH( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( l2652 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L3539;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( l2652 ), 
                                           _S2CINT( X2 ) ) ) );
L3539:
        POPSTACKTRACE( scrt2__2d_2dtwo( l2652, X2 ) );
}

DEFTSCP( scrt6_remove_2dfile_v );
DEFCSTRING( t3541, "REMOVE-FILE" );
EXTERNTSCPP( sc_removefile, XAL1( TSCP ) );
EXTERNTSCP( sc_removefile_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  scrt6_remove_2dfile( f2742 )
        TSCP  f2742;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3541 );
        if  ( AND( EQ( TSCPTAG( f2742 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( f2742 ), STRINGTAG ) )
            )  goto L3543;
        scdebug_error( c2745, 
                       c2488, CONS( f2742, EMPTYLIST ) );
L3543:
        X1 = sc_removefile( f2742 );
        if  ( FALSE( X1 ) )  goto L3546;
        X3 = CONS( c2748, EMPTYLIST );
        X2 = scrt3_string_2dappend( CONS( X1, X3 ) );
        POPSTACKTRACE( scdebug_error( c2745, 
                                      X2, 
                                      CONS( f2742, EMPTYLIST ) ) );
L3546:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt6_rename_2dfile_v );
DEFCSTRING( t3548, "RENAME-FILE" );
EXTERNTSCPP( sc_rename, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_rename_v );

TSCP  scrt6_rename_2dfile( o2750, n2751 )
        TSCP  o2750, n2751;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3548 );
        if  ( AND( EQ( TSCPTAG( o2750 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( o2750 ), STRINGTAG ) )
            )  goto L3550;
        scdebug_error( c2754, 
                       c2488, CONS( o2750, EMPTYLIST ) );
L3550:
        if  ( AND( EQ( TSCPTAG( n2751 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( n2751 ), STRINGTAG ) )
            )  goto L3552;
        scdebug_error( c2754, 
                       c2488, CONS( n2751, EMPTYLIST ) );
L3552:
        X1 = sc_rename( o2750, n2751 );
        if  ( FALSE( X1 ) )  goto L3555;
        X3 = CONS( c2759, EMPTYLIST );
        X2 = scrt3_string_2dappend( CONS( X1, X3 ) );
        X3 = CONS( n2751, EMPTYLIST );
        POPSTACKTRACE( scdebug_error( c2754, 
                                      X2, CONS( o2750, X3 ) ) );
L3555:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt6_system_2dtasking_v );
DEFCSTRING( t3557, "SCRT6_SYSTEM-TASKING" );
DEFTSCP( scrt6_system_2dfile_2dmask_v );
DEFCSTRING( t3558, "SCRT6_SYSTEM-FILE-MASK" );
DEFTSCP( scrt6_max_2dsystem_2dfile_v );
DEFCSTRING( t3559, "SCRT6_MAX-SYSTEM-FILE" );
DEFTSCP( scrt6_system_2dfile_2dtask_v );
DEFCSTRING( t3560, "SCRT6_SYSTEM-FILE-TASK" );
DEFTSCP( scrt6_idle_2dtasks_v );
DEFCSTRING( t3561, "SCRT6_IDLE-TASKS" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
DEFTSCP( scrt6_file_2dtasks_v );
DEFCSTRING( t3562, "SCRT6_FILE-TASKS" );
DEFTSCP( scrt6_ile_2dtask_5ef7698b_v );
DEFCSTRING( t3563, "DEFINE-SYSTEM-FILE-TASK" );
EXTERNTSCPP( scrt4_bit_2dor, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dor_v );
EXTERNTSCPP( scrt4_bit_2dlsh, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dlsh_v );

TSCP  scrt6_ile_2dtask_5ef7698b( f2768, i2769, f2770 )
        TSCP  f2768, i2769, f2770;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3563 );
        X1 = scrt6_idle_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3566;
        scdebug_error( c2777, 
                       c2778, CONS( X1, EMPTYLIST ) );
L3566:
        if  ( EQ( TSCPTAG( f2768 ), FIXNUMTAG ) )  goto L3568;
        scdebug_error( c2777, 
                       c2496, CONS( f2768, EMPTYLIST ) );
L3568:
        if  ( LT( _S2CUINT( FIXED_C( f2768 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3570;
        scdebug_error( c2777, 
                       c2784, CONS( f2768, EMPTYLIST ) );
L3570:
        SETGEN( VECTOR_ELEMENT( X1, f2768 ), i2769 );
        X1 = scrt6_file_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L3573;
        scdebug_error( c2777, 
                       c2778, CONS( X1, EMPTYLIST ) );
L3573:
        if  ( LT( _S2CUINT( FIXED_C( f2768 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L3575;
        scdebug_error( c2777, 
                       c2784, CONS( f2768, EMPTYLIST ) );
L3575:
        SETGEN( VECTOR_ELEMENT( X1, f2768 ), f2770 );
        scrt6_system_2dfile_2dmask_v = _TSCP( 0 );
        scrt6_max_2dsystem_2dfile_v = _TSCP( -4 );
        X1 = _TSCP( 0 );
L3578:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L3580;
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 128 ) ) ) )  goto L3584;
        goto L3587;
L3580:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 128 ) ) ) )  goto L3587;
L3584:
        X2 = scrt6_file_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L3590;
        scdebug_error( c2815, 
                       c2778, CONS( X2, EMPTYLIST ) );
L3590:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3592;
        scdebug_error( c2815, 
                       c2496, CONS( X1, EMPTYLIST ) );
L3592:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L3594;
        scdebug_error( c2815, 
                       c2784, CONS( X1, EMPTYLIST ) );
L3594:
        if  ( FALSE( VECTOR_ELEMENT( X2, X1 ) ) )  goto L3596;
        scrt6_max_2dsystem_2dfile_v = X1;
        scrt6_system_2dfile_2dmask_v = scrt4_bit_2dor( scrt6_system_2dfile_2dmask_v, 
                                                       CONS( scrt4_bit_2dlsh( _TSCP( 4 ), 
                                                                              X1 ), 
                                                             EMPTYLIST ) );
L3596:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3599;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X1 ) ) );
        GOBACK( L3578 );
L3599:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), X1 );
        GOBACK( L3578 );
L3587:
        POPSTACKTRACE( f2768 );
}

DEFTSCP( scrt6_wait_2dsystem_2dfile_v );
DEFCSTRING( t3601, "WAIT-SYSTEM-FILE" );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCP( screp__2areading_2dstdin_2a_v );
EXTERNTSCPP( sc_inputready, XAL1( TSCP ) );
EXTERNTSCP( sc_inputready_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( scrt4_bit_2dand, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dand_v );

TSCP  scrt6_wait_2dsystem_2dfile( f2829 )
        TSCP  f2829;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3601 );
L3602:
        if  ( EQ( _S2CUINT( scrt6_system_2dfile_2dmask_v ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3603;
        if  ( FALSE( scrt6_system_2dtasking_v ) )  goto L3605;
        if  ( NEQ( _S2CUINT( f2829 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L3608;
        scrt6_flush_2dbuffer( CONS( scrt5_stdout_2dport_v, EMPTYLIST ) );
L3608:
        X2 = _TSCP( 0 );
L3611:
        X3 = scrt6_max_2dsystem_2dfile_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3614;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L3618;
        goto L3621;
L3614:
        if  ( TRUE( scrt2__3e_2dtwo( X2, X3 ) ) )  goto L3621;
L3618:
        X3 = scrt6_idle_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L3624;
        scdebug_error( c2815, 
                       c2778, CONS( X3, EMPTYLIST ) );
L3624:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3626;
        scdebug_error( c2815, 
                       c2496, CONS( X2, EMPTYLIST ) );
L3626:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L3628;
        scdebug_error( c2815, 
                       c2784, CONS( X2, EMPTYLIST ) );
L3628:
        if  ( FALSE( VECTOR_ELEMENT( X3, X2 ) ) )  goto L3630;
        X4 = screp__2areading_2dstdin_2a_v;
        screp__2areading_2dstdin_2a_v = FALSEVALUE;
        X6 = scrt6_idle_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3634;
        scdebug_error( c2815, 
                       c2778, CONS( X6, EMPTYLIST ) );
L3634:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3636;
        scdebug_error( c2815, 
                       c2784, CONS( X2, EMPTYLIST ) );
L3636:
        X5 = VECTOR_ELEMENT( X6, X2 );
        X5 = UNKNOWNCALL( X5, 0 );
        VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        screp__2areading_2dstdin_2a_v = X4;
L3630:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3638;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L3611 );
L3638:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
        GOBACK( L3611 );
L3621:
        if  ( FALSE( f2829 ) )  goto L3640;
        X3 = scrt4_bit_2dlsh( _TSCP( 4 ), f2829 );
        goto L3641;
L3640:
        X3 = _TSCP( 0 );
L3641:
        X2 = scrt4_bit_2dor( scrt6_system_2dfile_2dmask_v, 
                             CONS( X3, EMPTYLIST ) );
        X1 = sc_inputready( X2 );
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L3644;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  GOBACK( L3602 );
        goto L3649;
L3644:
        if  ( TRUE( scrt2_zero_3f( X1 ) ) )  GOBACK( L3602 );
        goto L3649;
L3605:
        POPSTACKTRACE( FALSEVALUE );
L3603:
        POPSTACKTRACE( FALSEVALUE );
L3649:
        X2 = _TSCP( 0 );
        X3 = _TSCP( 4 );
L3654:
        X4 = scrt6_max_2dsystem_2dfile_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3657;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X4 ) ) )  goto L3661;
        goto L3664;
L3657:
        if  ( TRUE( scrt2__3e_2dtwo( X2, X4 ) ) )  goto L3664;
L3661:
        X4 = scrt4_bit_2dand( X3, CONS( X1, EMPTYLIST ) );
        if  ( EQ( _S2CUINT( _TSCP( 0 ) ), _S2CUINT( X4 ) ) )  goto L3676;
        X5 = scrt6_file_2dtasks_v;
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L3669;
        scdebug_error( c2815, 
                       c2778, CONS( X5, EMPTYLIST ) );
L3669:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3671;
        scdebug_error( c2815, 
                       c2496, CONS( X2, EMPTYLIST ) );
L3671:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L3673;
        scdebug_error( c2815, 
                       c2784, CONS( X2, EMPTYLIST ) );
L3673:
        X4 = VECTOR_ELEMENT( X5, X2 );
        if  ( FALSE( X4 ) )  goto L3676;
        X5 = screp__2areading_2dstdin_2a_v;
        screp__2areading_2dstdin_2a_v = FALSEVALUE;
        scrt6_system_2dfile_2dtask_v = X2;
        X6 = X4;
        X6 = UNKNOWNCALL( X6, 0 );
        VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        screp__2areading_2dstdin_2a_v = X5;
L3676:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3679;
        X4 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L3680;
L3679:
        X4 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L3680:
        X3 = scrt4_bit_2dlsh( X3, _TSCP( 4 ) );
        X2 = X4;
        GOBACK( L3654 );
L3664:
        scrt6_system_2dfile_2dtask_v = FALSEVALUE;
        if  ( FALSE( f2829 ) )  goto L3681;
        X2 = FALSEVALUE;
        goto L3682;
L3681:
        X2 = TRUEVALUE;
L3682:
        if  ( TRUE( X2 ) )  GOBACK( L3602 );
        X3 = scrt4_bit_2dand( X1, 
                              CONS( scrt4_bit_2dlsh( _TSCP( 4 ), f2829 ), 
                                    EMPTYLIST ) );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3690;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  GOBACK( L3602 );
        POPSTACKTRACE( FALSEVALUE );
L3690:
        if  ( TRUE( scrt2_zero_3f( X3 ) ) )  GOBACK( L3602 );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( scrt6_le_2dtasks_e4d983f4_v );
DEFCSTRING( t3697, "ENABLE-SYSTEM-FILE-TASKS" );

TSCP  scrt6_le_2dtasks_e4d983f4( e2941 )
        TSCP  e2941;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3697 );
        X1 = scrt6_system_2dtasking_v;
        if  ( FALSE( e2941 ) )  goto L3700;
        X2 = TRUEVALUE;
        goto L3701;
L3700:
        X2 = FALSEVALUE;
L3701:
        scrt6_system_2dtasking_v = X2;
        if  ( NEQ( _S2CUINT( e2941 ), _S2CUINT( c2947 ) ) )  goto L3702;
        scrt6_wait_2dsystem_2dfile( FALSEVALUE );
L3702:
        POPSTACKTRACE( X1 );
}

void screp__init();
void scrt3__init();
void scrt4__init();
void scrt2__init();
void scrt7__init();
void scdebug__init();
void scrt5__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        screp__init();
        scrt3__init();
        scrt4__init();
        scrt2__init();
        scrt7__init();
        scdebug__init();
        scrt5__init();
        scrt1__init();
        MAXDISPLAY( 2 );
}

void  scrt6__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scrt6 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3128, 
                       ADR( scrt6_pending_2dstdout_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3129, 
                       ADR( scrt6_input_2dport_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt6_input_2dport, EMPTYLIST ) );
        INITIALIZEVAR( t3147, 
                       ADR( scrt6_read_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt6_read, EMPTYLIST ) );
        INITIALIZEVAR( t3149, 
                       ADR( scrt6_read_2dchar_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_read_2dchar, EMPTYLIST ) );
        INITIALIZEVAR( t3151, 
                       ADR( scrt6_peek_2dchar_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_peek_2dchar, EMPTYLIST ) );
        INITIALIZEVAR( t3153, 
                       ADR( scrt6_char_2dready_3f_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_char_2dready_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3155, 
                       ADR( scrt6_eof_2dobject_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_eof_2dobject_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3157, 
                       ADR( scrt6_output_2dport_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt6_output_2dport, EMPTYLIST ) );
        INITIALIZEVAR( t3181, 
                       ADR( scrt6_write_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt6_write, EMPTYLIST ) );
        INITIALIZEVAR( t3183, 
                       ADR( scrt6_display_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt6_display, EMPTYLIST ) );
        INITIALIZEVAR( t3185, 
                       ADR( scrt6_write_2dchar_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_write_2dchar, EMPTYLIST ) );
        INITIALIZEVAR( t3189, 
                       ADR( scrt6_newline_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, scrt6_newline, EMPTYLIST ) );
        INITIALIZEVAR( t3191, 
                       ADR( scrt6_flush_2dbuffer_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_flush_2dbuffer, EMPTYLIST ) );
        INITIALIZEVAR( t3193, 
                       ADR( scrt6_get_2doutput_2dstring_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_get_2doutput_2dstring, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3204, 
                       ADR( scrt6_write_2dcount_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dcount, EMPTYLIST ) );
        INITIALIZEVAR( t3206, 
                       ADR( scrt6_write_2dwidth_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dwidth, EMPTYLIST ) );
        INITIALIZEVAR( t3208, 
                       ADR( scrt6_set_2dwrite_2dwidth_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_set_2dwrite_2dwidth_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3224, 
                       ADR( scrt6_write_2dcircle_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dcircle, EMPTYLIST ) );
        INITIALIZEVAR( t3226, 
                       ADR( scrt6_set_2dwrite_2dcircle_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_set_2dwrite_2dcircle_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3230, 
                       ADR( scrt6_write_2dlevel_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dlevel, EMPTYLIST ) );
        INITIALIZEVAR( t3232, 
                       ADR( scrt6_set_2dwrite_2dlevel_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_set_2dwrite_2dlevel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3249, 
                       ADR( scrt6_write_2dlength_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dlength, EMPTYLIST ) );
        INITIALIZEVAR( t3251, 
                       ADR( scrt6_set_2dwrite_2dlength_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_set_2dwrite_2dlength_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3268, 
                       ADR( scrt6_write_2dpretty_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      scrt6_write_2dpretty, EMPTYLIST ) );
        INITIALIZEVAR( t3270, 
                       ADR( scrt6_set_2dwrite_2dpretty_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      scrt6_set_2dwrite_2dpretty_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3274, 
                       ADR( scrt6_echo_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt6_echo, EMPTYLIST ) );
        INITIALIZEVAR( t3303, 
                       ADR( scrt6_transcript_2don_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_transcript_2don, EMPTYLIST ) );
        INITIALIZEVAR( t3314, 
                       ADR( scrt6_transcript_2doff_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      scrt6_transcript_2doff, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3319, 
                       ADR( scrt6_port_2d_3estdio_2dfile_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_port_2d_3estdio_2dfile, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3334, 
                       ADR( scrt6_format_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt6_format, EMPTYLIST ) );
        INITIALIZEVAR( t3376, 
                       ADR( scrt6_formatx_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, scrt6_formatx, EMPTYLIST ) );
        INITIALIZEVAR( t3447, 
                       ADR( scrt6_pp_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, scrt6_pp, EMPTYLIST ) );
        INITIALIZEVAR( t3461, 
                       ADR( scrt6_pp1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, scrt6_pp1, EMPTYLIST ) );
        INITIALIZEVAR( t3498, 
                       ADR( scrt6_print_2din_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt6_print_2din, EMPTYLIST ) );
        INITIALIZEVAR( t3541, 
                       ADR( scrt6_remove_2dfile_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_remove_2dfile, EMPTYLIST ) );
        INITIALIZEVAR( t3548, 
                       ADR( scrt6_rename_2dfile_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      scrt6_rename_2dfile, EMPTYLIST ) );
        INITIALIZEVAR( t3557, 
                       ADR( scrt6_system_2dtasking_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t3558, 
                       ADR( scrt6_system_2dfile_2dmask_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3559, 
                       ADR( scrt6_max_2dsystem_2dfile_v ), 
                       _TSCP( -4 ) );
        INITIALIZEVAR( t3560, 
                       ADR( scrt6_system_2dfile_2dtask_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3561, 
                       ADR( scrt6_idle_2dtasks_v ), 
                       sc_make_2dvector( _TSCP( 128 ), 
                                         CONS( FALSEVALUE, EMPTYLIST ) ) );
        INITIALIZEVAR( t3562, 
                       ADR( scrt6_file_2dtasks_v ), 
                       sc_make_2dvector( _TSCP( 128 ), 
                                         CONS( FALSEVALUE, EMPTYLIST ) ) );
        INITIALIZEVAR( t3563, 
                       ADR( scrt6_ile_2dtask_5ef7698b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scrt6_ile_2dtask_5ef7698b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3601, 
                       ADR( scrt6_wait_2dsystem_2dfile_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_wait_2dsystem_2dfile, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3697, 
                       ADR( scrt6_le_2dtasks_e4d983f4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scrt6_le_2dtasks_e4d983f4, 
                                      EMPTYLIST ) );
        return;
}
