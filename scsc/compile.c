
/* SCHEME->C */

#include <objects.h>

void compile__init();
DEFSTATICTSCP( lexical_2dfree_2dvars_v );
DEFSTATICTSCP( lexical_2dbound_2dvars_v );
DEFSTATICTSCP( current_2dlambda_2did_v );
DEFSTATICTSCP( quote_2dconstants_v );
DEFSTATICTSCP( lap_2dcode_v );
DEFSTATICTSCP( predef_2ddefault_v );
DEFSTATICTSCP( copy_2dplist_v );
DEFSTATICTSCP( global_2dfree_2dvars_v );
DEFSTATICTSCP( make_2dalpha_2dseq_v );
DEFSTATICTSCP( lap_2dexp_v );
DEFSTATICTSCP( quote_2dexp_v );
DEFSTATICTSCP( set_21_2dexp_v );
DEFSTATICTSCP( if_2dexp_v );
DEFSTATICTSCP( define_2dexp_v );
DEFSTATICTSCP( old_2dmacro_v );
DEFSTATICTSCP( quasiquote_2dmacro_v );
DEFSTATICTSCP( cond_2dmacro_v );
DEFSTATICTSCP( case_2dmacro_v );
DEFSTATICTSCP( and_2dmacro_v );
DEFSTATICTSCP( or_2dmacro_v );
DEFSTATICTSCP( not_2dmacro_v );
DEFSTATICTSCP( begin_2dmacro_v );
DEFSTATICTSCP( let_2dmacro_v );
DEFSTATICTSCP( let_2a_2dmacro_v );
DEFSTATICTSCP( letrec_2dmacro_v );
DEFSTATICTSCP( do_2dmacro_v );
DEFSTATICTSCP( when_2dmacro_v );
DEFSTATICTSCP( unless_2dmacro_v );
DEFSTATICTSCP( quote_2dmacro_v );
DEFSTATICTSCP( lap_2dmacro_v );
DEFSTATICTSCP( define_2dmacro_v );
DEFSTATICTSCP( define_2dmacro_2dmacro_v );
DEFSTATICTSCP( define_2dconstant_2dmacro_v );
DEFSTATICTSCP( eval_2dwhen_2dmacro_v );
DEFSTATICTSCP( lambda_2dmacro_v );
DEFSTATICTSCP( lambda_2dexp_v );
DEFSTATICTSCP( load_2dplist_2dlap_v );
DEFSTATICTSCP( read_2dtext_v );
DEFSTATICTSCP( expand_2dforms_v );
DEFSTATICTSCP( analyze_2dclosures1a_v );
DEFSTATICTSCP( analyze_2dclosures1b_v );
DEFSTATICTSCP( transform_v );
DEFSTATICTSCP( analyze_2dclosures2_v );
DEFSTATICTSCP( walk_2d_24tree_v );
DEFSTATICTSCP( print_2dlambda_2dinfo_v );
DEFSTATICTSCP( generate_2dcode_v );
DEFCSTRING( t3582, "Argument is out of range: ~s" );
DEFSTATICTSCP( c3404 );
DEFSTATICTSCP( c3383 );
DEFCSTRING( t3583, "Argument(s) incorrect" );
DEFSTATICTSCP( c3377 );
DEFCSTRING( t3584, "Argument is not a CHAR: ~s" );
DEFSTATICTSCP( c3356 );
DEFCSTRING( t3585, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c3353 );
DEFSTATICTSCP( c3352 );
DEFCSTRING( t3586, "~s" );
DEFSTATICTSCP( c3313 );
DEFCSTRING( t3587, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c3312 );
DEFSTATICTSCP( c3311 );
DEFSTATICTSCP( c3217 );
DEFSTATICTSCP( c3072 );
DEFSTATICTSCP( c3069 );
DEFCSTRING( t3588, "(~S ~S ~S" );
DEFSTATICTSCP( c2989 );
DEFCSTRING( t3589, "(~S ~S" );
DEFSTATICTSCP( c2933 );
DEFCSTRING( t3590, ")" );
DEFSTATICTSCP( c2931 );
DEFCSTRING( t3591, ". " );
DEFSTATICTSCP( c2911 );
DEFCSTRING( t3592, "(" );
DEFSTATICTSCP( c2889 );
DEFSTATICTSCP( c2864 );
DEFSTATICTSCP( t3593 );
DEFSTATICTSCP( t3594 );
DEFSTATICTSCP( t3595 );
DEFSTATICTSCP( c2833 );
DEFSTATICTSCP( c2772 );
DEFCSTRING( t3596, "***** WARNING - ~a ~a" );
DEFSTATICTSCP( c2724 );
DEFCSTRING( t3597, " ~a" );
DEFSTATICTSCP( c2712 );
DEFCSTRING( t3598, "***** ERROR - ~a ~a" );
DEFSTATICTSCP( c2688 );
DEFCSTRING( t3599, "   ***** Code Generation ***** */~%" );
DEFSTATICTSCP( c2674 );
DEFSTATICTSCP( c2671 );
DEFSTATICTSCP( c2637 );
DEFCSTRING( t3600, "   ***** Closure Analysis *****~%" );
DEFSTATICTSCP( c2573 );
DEFCSTRING( t3601, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2563 );
DEFSTATICTSCP( c2562 );
DEFCSTRING( t3602, "   ***** Transformations *****~%" );
DEFSTATICTSCP( c2483 );
DEFCSTRING( t3603, "/* ***** Expand Forms *****~%" );
DEFSTATICTSCP( c2480 );
DEFSTATICTSCP( c2473 );
DEFCSTRING( t3604, "scltext.sc" );
DEFSTATICTSCP( c2472 );
DEFSTATICTSCP( c2448 );
DEFSTATICTSCP( t3605 );
DEFSTATICTSCP( t3606 );
DEFSTATICTSCP( c2393 );
DEFCSTRING( t3607, "Duplicate option:" );
DEFSTATICTSCP( c2386 );
DEFCSTRING( t3608, "Unrecognized option:" );
DEFSTATICTSCP( c2339 );
DEFSTATICTSCP( c2333 );
DEFSTATICTSCP( c2326 );
DEFSTATICTSCP( c2309 );
DEFSTATICTSCP( c2305 );
DEFCSTRING( t3609, ".c" );
DEFSTATICTSCP( c2272 );
DEFSTATICTSCP( c2236 );
DEFSTATICTSCP( t3610 );
DEFCSTRING( t3611, ".sc" );
DEFSTATICTSCP( c2202 );
DEFCSTRING( t3612, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2201 );
DEFSTATICTSCP( c2200 );
DEFCSTRING( t3613, "Illegal predefinition form:" );
DEFSTATICTSCP( c2176 );
DEFSTATICTSCP( c2167 );
DEFSTATICTSCP( c2165 );
DEFSTATICTSCP( c2163 );
DEFSTATICTSCP( c2161 );
DEFSTATICTSCP( c2159 );
DEFSTATICTSCP( c2158 );
DEFSTATICTSCP( c2157 );
DEFSTATICTSCP( c2156 );
DEFSTATICTSCP( c2152 );
DEFSTATICTSCP( c2150 );
DEFSTATICTSCP( c2148 );
DEFSTATICTSCP( c2146 );
DEFSTATICTSCP( c2144 );
DEFSTATICTSCP( c2142 );
DEFSTATICTSCP( c2140 );
DEFSTATICTSCP( c2138 );
DEFSTATICTSCP( c2136 );
DEFSTATICTSCP( c2134 );
DEFSTATICTSCP( c2132 );
DEFSTATICTSCP( c2130 );
DEFSTATICTSCP( c2127 );
DEFSTATICTSCP( c2126 );
DEFSTATICTSCP( c2124 );
DEFSTATICTSCP( c2122 );
DEFSTATICTSCP( c2120 );
DEFSTATICTSCP( c2118 );
DEFSTATICTSCP( c2116 );
DEFSTATICTSCP( c2115 );
DEFCSTRING( t3614, "EMPTYLIST" );
DEFSTATICTSCP( c2108 );
DEFCSTRING( t3615, "FALSEVALUE" );
DEFSTATICTSCP( c2098 );
DEFSTATICTSCP( c2094 );
DEFSTATICTSCP( c2090 );
DEFSTATICTSCP( c2089 );
DEFCSTRING( t3616, "TRUEVALUE" );
DEFSTATICTSCP( c2085 );
DEFSTATICTSCP( c2084 );
DEFSTATICTSCP( c2080 );
DEFCSTRING( t3617, "*initialize*" );
DEFSTATICTSCP( c2079 );
DEFSTATICTSCP( c2076 );
DEFSTATICTSCP( c2075 );
DEFSTATICTSCP( c2068 );
DEFSTATICTSCP( c2067 );
DEFSTATICTSCP( c2053 );
DEFSTATICTSCP( c2051 );
DEFSTATICTSCP( c2049 );
DEFSTATICTSCP( c2044 );
DEFSTATICTSCP( c2038 );
DEFSTATICTSCP( t3618 );
DEFSTATICTSCP( t3619 );
DEFSTATICTSCP( c2029 );

static void  init_constants()
{
        lexical_2dfree_2dvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL-FRE\
E-VARS" ) );
        CONSTANTEXP( ADR( lexical_2dfree_2dvars_v ) );
        lexical_2dbound_2dvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL-BO\
UND-VARS" ) );
        CONSTANTEXP( ADR( lexical_2dbound_2dvars_v ) );
        current_2dlambda_2did_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-LAM\
BDA-ID" ) );
        CONSTANTEXP( ADR( current_2dlambda_2did_v ) );
        quote_2dconstants_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE-CONSTANTS\
" ) );
        CONSTANTEXP( ADR( quote_2dconstants_v ) );
        lap_2dcode_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAP-CODE" ) );
        CONSTANTEXP( ADR( lap_2dcode_v ) );
        predef_2ddefault_v = STRINGTOSYMBOL( CSTRING_TSCP( "PREDEF-DEFAULT" ) );
        CONSTANTEXP( ADR( predef_2ddefault_v ) );
        copy_2dplist_v = STRINGTOSYMBOL( CSTRING_TSCP( "COPY-PLIST" ) );
        CONSTANTEXP( ADR( copy_2dplist_v ) );
        global_2dfree_2dvars_v = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL-FREE-\
VARS" ) );
        CONSTANTEXP( ADR( global_2dfree_2dvars_v ) );
        make_2dalpha_2dseq_v = STRINGTOSYMBOL( CSTRING_TSCP( "MAKE-ALPHA-SEQ\
" ) );
        CONSTANTEXP( ADR( make_2dalpha_2dseq_v ) );
        lap_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAP-EXP" ) );
        CONSTANTEXP( ADR( lap_2dexp_v ) );
        quote_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE-EXP" ) );
        CONSTANTEXP( ADR( quote_2dexp_v ) );
        set_21_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "SET!-EXP" ) );
        CONSTANTEXP( ADR( set_21_2dexp_v ) );
        if_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "IF-EXP" ) );
        CONSTANTEXP( ADR( if_2dexp_v ) );
        define_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-EXP" ) );
        CONSTANTEXP( ADR( define_2dexp_v ) );
        old_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "OLD-MACRO" ) );
        CONSTANTEXP( ADR( old_2dmacro_v ) );
        quasiquote_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTE-MAC\
RO" ) );
        CONSTANTEXP( ADR( quasiquote_2dmacro_v ) );
        cond_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "COND-MACRO" ) );
        CONSTANTEXP( ADR( cond_2dmacro_v ) );
        case_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "CASE-MACRO" ) );
        CONSTANTEXP( ADR( case_2dmacro_v ) );
        and_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "AND-MACRO" ) );
        CONSTANTEXP( ADR( and_2dmacro_v ) );
        or_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "OR-MACRO" ) );
        CONSTANTEXP( ADR( or_2dmacro_v ) );
        not_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "NOT-MACRO" ) );
        CONSTANTEXP( ADR( not_2dmacro_v ) );
        begin_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN-MACRO" ) );
        CONSTANTEXP( ADR( begin_2dmacro_v ) );
        let_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "LET-MACRO" ) );
        CONSTANTEXP( ADR( let_2dmacro_v ) );
        let_2a_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "LET*-MACRO" ) );
        CONSTANTEXP( ADR( let_2a_2dmacro_v ) );
        letrec_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "LETREC-MACRO" ) );
        CONSTANTEXP( ADR( letrec_2dmacro_v ) );
        do_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "DO-MACRO" ) );
        CONSTANTEXP( ADR( do_2dmacro_v ) );
        when_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN-MACRO" ) );
        CONSTANTEXP( ADR( when_2dmacro_v ) );
        unless_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "UNLESS-MACRO" ) );
        CONSTANTEXP( ADR( unless_2dmacro_v ) );
        quote_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE-MACRO" ) );
        CONSTANTEXP( ADR( quote_2dmacro_v ) );
        lap_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAP-MACRO" ) );
        CONSTANTEXP( ADR( lap_2dmacro_v ) );
        define_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MACRO" ) );
        CONSTANTEXP( ADR( define_2dmacro_v ) );
        define_2dmacro_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MAC\
RO-MACRO" ) );
        CONSTANTEXP( ADR( define_2dmacro_2dmacro_v ) );
        define_2dconstant_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-\
CONSTANT-MACRO" ) );
        CONSTANTEXP( ADR( define_2dconstant_2dmacro_v ) );
        eval_2dwhen_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL-WHEN-MAC\
RO" ) );
        CONSTANTEXP( ADR( eval_2dwhen_2dmacro_v ) );
        lambda_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-MACRO" ) );
        CONSTANTEXP( ADR( lambda_2dmacro_v ) );
        lambda_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-EXP" ) );
        CONSTANTEXP( ADR( lambda_2dexp_v ) );
        load_2dplist_2dlap_v = STRINGTOSYMBOL( CSTRING_TSCP( "LOAD-PLIST-LAP\
" ) );
        CONSTANTEXP( ADR( load_2dplist_2dlap_v ) );
        read_2dtext_v = STRINGTOSYMBOL( CSTRING_TSCP( "READ-TEXT" ) );
        CONSTANTEXP( ADR( read_2dtext_v ) );
        expand_2dforms_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND-FORMS" ) );
        CONSTANTEXP( ADR( expand_2dforms_v ) );
        analyze_2dclosures1a_v = STRINGTOSYMBOL( CSTRING_TSCP( "ANALYZE-CLOS\
URES1A" ) );
        CONSTANTEXP( ADR( analyze_2dclosures1a_v ) );
        analyze_2dclosures1b_v = STRINGTOSYMBOL( CSTRING_TSCP( "ANALYZE-CLOS\
URES1B" ) );
        CONSTANTEXP( ADR( analyze_2dclosures1b_v ) );
        transform_v = STRINGTOSYMBOL( CSTRING_TSCP( "TRANSFORM" ) );
        CONSTANTEXP( ADR( transform_v ) );
        analyze_2dclosures2_v = STRINGTOSYMBOL( CSTRING_TSCP( "ANALYZE-CLOSU\
RES2" ) );
        CONSTANTEXP( ADR( analyze_2dclosures2_v ) );
        walk_2d_24tree_v = STRINGTOSYMBOL( CSTRING_TSCP( "WALK-$TREE" ) );
        CONSTANTEXP( ADR( walk_2d_24tree_v ) );
        print_2dlambda_2dinfo_v = STRINGTOSYMBOL( CSTRING_TSCP( "PRINT-LAMBD\
A-INFO" ) );
        CONSTANTEXP( ADR( print_2dlambda_2dinfo_v ) );
        generate_2dcode_v = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE-CODE" ) );
        CONSTANTEXP( ADR( generate_2dcode_v ) );
        c3404 = CSTRING_TSCP( t3582 );
        CONSTANTEXP( ADR( c3404 ) );
        c3383 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c3383 ) );
        c3377 = CSTRING_TSCP( t3583 );
        CONSTANTEXP( ADR( c3377 ) );
        c3356 = CSTRING_TSCP( t3584 );
        CONSTANTEXP( ADR( c3356 ) );
        c3353 = CSTRING_TSCP( t3585 );
        CONSTANTEXP( ADR( c3353 ) );
        c3352 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-SET!" ) );
        CONSTANTEXP( ADR( c3352 ) );
        c3313 = CSTRING_TSCP( t3586 );
        CONSTANTEXP( ADR( c3313 ) );
        c3312 = CSTRING_TSCP( t3587 );
        CONSTANTEXP( ADR( c3312 ) );
        c3311 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c3311 ) );
        c3217 = STRINGTOSYMBOL( CSTRING_TSCP( "<-" ) );
        CONSTANTEXP( ADR( c3217 ) );
        c3072 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c3072 ) );
        c3069 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c3069 ) );
        c2989 = CSTRING_TSCP( t3588 );
        CONSTANTEXP( ADR( c2989 ) );
        c2933 = CSTRING_TSCP( t3589 );
        CONSTANTEXP( ADR( c2933 ) );
        c2931 = CSTRING_TSCP( t3590 );
        CONSTANTEXP( ADR( c2931 ) );
        c2911 = CSTRING_TSCP( t3591 );
        CONSTANTEXP( ADR( c2911 ) );
        c2889 = CSTRING_TSCP( t3592 );
        CONSTANTEXP( ADR( c2889 ) );
        c2864 = EMPTYLIST;
        t3593 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        c2864 = CONS( t3593, c2864 );
        t3594 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        c2864 = CONS( t3594, c2864 );
        t3595 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        c2864 = CONS( t3595, c2864 );
        CONSTANTEXP( ADR( c2864 ) );
        c2833 = STRINGTOSYMBOL( CSTRING_TSCP( "<APPLY>" ) );
        CONSTANTEXP( ADR( c2833 ) );
        c2772 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2772 ) );
        c2724 = CSTRING_TSCP( t3596 );
        CONSTANTEXP( ADR( c2724 ) );
        c2712 = CSTRING_TSCP( t3597 );
        CONSTANTEXP( ADR( c2712 ) );
        c2688 = CSTRING_TSCP( t3598 );
        CONSTANTEXP( ADR( c2688 ) );
        c2674 = CSTRING_TSCP( t3599 );
        CONSTANTEXP( ADR( c2674 ) );
        c2671 = STRINGTOSYMBOL( CSTRING_TSCP( "TREE" ) );
        CONSTANTEXP( ADR( c2671 ) );
        c2637 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2637 ) );
        c2573 = CSTRING_TSCP( t3600 );
        CONSTANTEXP( ADR( c2573 ) );
        c2563 = CSTRING_TSCP( t3601 );
        CONSTANTEXP( ADR( c2563 ) );
        c2562 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2562 ) );
        c2483 = CSTRING_TSCP( t3602 );
        CONSTANTEXP( ADR( c2483 ) );
        c2480 = CSTRING_TSCP( t3603 );
        CONSTANTEXP( ADR( c2480 ) );
        c2473 = STRINGTOSYMBOL( CSTRING_TSCP( "SCLTEXT" ) );
        CONSTANTEXP( ADR( c2473 ) );
        c2472 = CSTRING_TSCP( t3604 );
        CONSTANTEXP( ADR( c2472 ) );
        c2448 = EMPTYLIST;
        t3605 = STRINGTOSYMBOL( CSTRING_TSCP( "TEST" ) );
        c2448 = CONS( t3605, c2448 );
        t3606 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        c2448 = CONS( t3606, c2448 );
        CONSTANTEXP( ADR( c2448 ) );
        c2393 = STRINGTOSYMBOL( CSTRING_TSCP( "SC-DONE" ) );
        CONSTANTEXP( ADR( c2393 ) );
        c2386 = CSTRING_TSCP( t3607 );
        CONSTANTEXP( ADR( c2386 ) );
        c2339 = CSTRING_TSCP( t3608 );
        CONSTANTEXP( ADR( c2339 ) );
        c2333 = STRINGTOSYMBOL( CSTRING_TSCP( "PREDEF" ) );
        CONSTANTEXP( ADR( c2333 ) );
        c2326 = STRINGTOSYMBOL( CSTRING_TSCP( "NOTRACE" ) );
        CONSTANTEXP( ADR( c2326 ) );
        c2309 = STRINGTOSYMBOL( CSTRING_TSCP( "LOG" ) );
        CONSTANTEXP( ADR( c2309 ) );
        c2305 = STRINGTOSYMBOL( CSTRING_TSCP( "ERROR" ) );
        CONSTANTEXP( ADR( c2305 ) );
        c2272 = CSTRING_TSCP( t3609 );
        CONSTANTEXP( ADR( c2272 ) );
        c2236 = EMPTYLIST;
        c2236 = CONS( c2333, c2236 );
        t3610 = STRINGTOSYMBOL( CSTRING_TSCP( "PROFILE" ) );
        c2236 = CONS( t3610, c2236 );
        c2236 = CONS( c2309, c2236 );
        c2236 = CONS( c2305, c2236 );
        CONSTANTEXP( ADR( c2236 ) );
        c2202 = CSTRING_TSCP( t3611 );
        CONSTANTEXP( ADR( c2202 ) );
        c2201 = CSTRING_TSCP( t3612 );
        CONSTANTEXP( ADR( c2201 ) );
        c2200 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2200 ) );
        c2176 = CSTRING_TSCP( t3613 );
        CONSTANTEXP( ADR( c2176 ) );
        c2167 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2167 ) );
        c2165 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL-WHEN" ) );
        CONSTANTEXP( ADR( c2165 ) );
        c2163 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-CONSTANT" ) );
        CONSTANTEXP( ADR( c2163 ) );
        c2161 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MACRO" ) );
        CONSTANTEXP( ADR( c2161 ) );
        c2159 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-C-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2159 ) );
        c2158 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-EXTERNAL" ) );
        CONSTANTEXP( ADR( c2158 ) );
        c2157 = STRINGTOSYMBOL( CSTRING_TSCP( "INCLUDE" ) );
        CONSTANTEXP( ADR( c2157 ) );
        c2156 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2156 ) );
        c2152 = STRINGTOSYMBOL( CSTRING_TSCP( "UNLESS" ) );
        CONSTANTEXP( ADR( c2152 ) );
        c2150 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN" ) );
        CONSTANTEXP( ADR( c2150 ) );
        c2148 = STRINGTOSYMBOL( CSTRING_TSCP( "DO" ) );
        CONSTANTEXP( ADR( c2148 ) );
        c2146 = STRINGTOSYMBOL( CSTRING_TSCP( "LETREC" ) );
        CONSTANTEXP( ADR( c2146 ) );
        c2144 = STRINGTOSYMBOL( CSTRING_TSCP( "LET*" ) );
        CONSTANTEXP( ADR( c2144 ) );
        c2142 = STRINGTOSYMBOL( CSTRING_TSCP( "LET" ) );
        CONSTANTEXP( ADR( c2142 ) );
        c2140 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2140 ) );
        c2138 = STRINGTOSYMBOL( CSTRING_TSCP( "NOT" ) );
        CONSTANTEXP( ADR( c2138 ) );
        c2136 = STRINGTOSYMBOL( CSTRING_TSCP( "OR" ) );
        CONSTANTEXP( ADR( c2136 ) );
        c2134 = STRINGTOSYMBOL( CSTRING_TSCP( "AND" ) );
        CONSTANTEXP( ADR( c2134 ) );
        c2132 = STRINGTOSYMBOL( CSTRING_TSCP( "CASE" ) );
        CONSTANTEXP( ADR( c2132 ) );
        c2130 = STRINGTOSYMBOL( CSTRING_TSCP( "COND" ) );
        CONSTANTEXP( ADR( c2130 ) );
        c2127 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        CONSTANTEXP( ADR( c2127 ) );
        c2126 = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTE" ) );
        CONSTANTEXP( ADR( c2126 ) );
        c2124 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE" ) );
        CONSTANTEXP( ADR( c2124 ) );
        c2122 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2122 ) );
        c2120 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2120 ) );
        c2118 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2118 ) );
        c2116 = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND" ) );
        CONSTANTEXP( ADR( c2116 ) );
        c2115 = STRINGTOSYMBOL( CSTRING_TSCP( "LAP" ) );
        CONSTANTEXP( ADR( c2115 ) );
        c2108 = CSTRING_TSCP( t3614 );
        CONSTANTEXP( ADR( c2108 ) );
        c2098 = CSTRING_TSCP( t3615 );
        CONSTANTEXP( ADR( c2098 ) );
        c2094 = STRINGTOSYMBOL( CSTRING_TSCP( "VALUE" ) );
        CONSTANTEXP( ADR( c2094 ) );
        c2090 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c2090 ) );
        c2089 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2089 ) );
        c2085 = CSTRING_TSCP( t3616 );
        CONSTANTEXP( ADR( c2085 ) );
        c2084 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2084 ) );
        c2080 = STRINGTOSYMBOL( CSTRING_TSCP( "NULL-PROPERTY" ) );
        CONSTANTEXP( ADR( c2080 ) );
        c2079 = CSTRING_TSCP( t3617 );
        CONSTANTEXP( ADR( c2079 ) );
        c2076 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2076 ) );
        c2075 = STRINGTOSYMBOL( CSTRING_TSCP( "$_UNDEFINED" ) );
        CONSTANTEXP( ADR( c2075 ) );
        c2068 = STRINGTOSYMBOL( CSTRING_TSCP( "INITIAL-SCC" ) );
        CONSTANTEXP( ADR( c2068 ) );
        c2067 = STRINGTOSYMBOL( CSTRING_TSCP( "SCC" ) );
        CONSTANTEXP( ADR( c2067 ) );
        c2053 = STRINGTOSYMBOL( CSTRING_TSCP( "EMPTY-LIST-ALPHA" ) );
        CONSTANTEXP( ADR( c2053 ) );
        c2051 = STRINGTOSYMBOL( CSTRING_TSCP( "FALSE-ALPHA" ) );
        CONSTANTEXP( ADR( c2051 ) );
        c2049 = STRINGTOSYMBOL( CSTRING_TSCP( "TRUE-ALPHA" ) );
        CONSTANTEXP( ADR( c2049 ) );
        c2044 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2044 ) );
        c2038 = EMPTYLIST;
        c2038 = CONS( c2671, c2038 );
        c2038 = CONS( c2167, c2038 );
        c2038 = CONS( transform_v, c2038 );
        t3618 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        c2038 = CONS( t3618, c2038 );
        c2038 = CONS( c2116, c2038 );
        c2038 = CONS( c2127, c2038 );
        t3619 = STRINGTOSYMBOL( CSTRING_TSCP( "SOURCE" ) );
        c2038 = CONS( t3619, c2038 );
        CONSTANTEXP( ADR( c2038 ) );
        c2029 = EMPTYLIST;
        c2029 = CONS( EMPTYSTRING, c2029 );
        CONSTANTEXP( ADR( c2029 ) );
}

DEFTSCP( compile_sc_2dinput_v );
DEFCSTRING( t3620, "SC-INPUT" );
DEFTSCP( compile_sc_2dsplice_v );
DEFCSTRING( t3621, "SC-SPLICE" );
DEFTSCP( compile_sc_2dsource_2dname_v );
DEFCSTRING( t3622, "SC-SOURCE-NAME" );
DEFTSCP( compile_sc_2dinclude_2ddirs_v );
DEFCSTRING( t3623, "SC-INCLUDE-DIRS" );
DEFTSCP( compile_sc_2dicode_v );
DEFCSTRING( t3624, "SC-ICODE" );
DEFTSCP( compile_sc_2derror_v );
DEFCSTRING( t3625, "SC-ERROR" );
DEFTSCP( compile_sc_2derror_2dcnt_v );
DEFCSTRING( t3626, "SC-ERROR-CNT" );
DEFTSCP( compile_sc_2dlog_v );
DEFCSTRING( t3627, "SC-LOG" );
DEFTSCP( compile_sc_2dstack_2dtrace_v );
DEFCSTRING( t3628, "SC-STACK-TRACE" );
DEFTSCP( compile_sc_2dinterpreter_v );
DEFCSTRING( t3629, "SC-INTERPRETER" );
DEFTSCP( compile_sc_2dlog_2ddefault_v );
DEFCSTRING( t3630, "SC-LOG-DEFAULT" );
DEFTSCP( compile_module_2dname_v );
DEFCSTRING( t3631, "MODULE-NAME" );
EXTERNTSCP( sc_emptystring );
DEFTSCP( compile_e_2dupcase_6e1220a4_v );
DEFCSTRING( t3632, "MODULE-NAME-UPCASE" );
DEFTSCP( compile_main_2dprogram_2dname_v );
DEFCSTRING( t3633, "MAIN-PROGRAM-NAME" );
DEFTSCP( compile_heap_2dsize_v );
DEFCSTRING( t3634, "HEAP-SIZE" );
DEFTSCP( compile_ine_2dname_3e60377e_v );
DEFCSTRING( t3635, "CURRENT-DEFINE-NAME" );
DEFTSCP( compile_top_2dlevel_2dsymbols_v );
DEFCSTRING( t3636, "TOP-LEVEL-SYMBOLS" );
DEFTSCP( compile_with_2dmodules_v );
DEFCSTRING( t3637, "WITH-MODULES" );
DEFTSCP( compile_restore_2dplist_v );
DEFCSTRING( t3638, "RESTORE-PLIST" );
DEFTSCP( compile_true_2dalpha_v );
DEFCSTRING( t3639, "TRUE-ALPHA" );
DEFTSCP( compile_false_2dalpha_v );
DEFCSTRING( t3640, "FALSE-ALPHA" );
DEFTSCP( compile_empty_2dlist_2dalpha_v );
DEFCSTRING( t3641, "EMPTY-LIST-ALPHA" );
DEFTSCP( compile_cons_2dalpha_v );
DEFCSTRING( t3642, "CONS-ALPHA" );
DEFTSCP( compile_undefined_2dalpha_v );
DEFCSTRING( t3643, "UNDEFINED-ALPHA" );
DEFTSCP( compile_initialize_2dcompile_v );
DEFCSTRING( t3644, "INITIALIZE-COMPILE" );
EXTERNTSCPP( compile_create_2dplist, XAL1( TSCP ) );
EXTERNTSCP( compile_create_2dplist_v );

TSCP  compile_l2072( c3650 )
        TSCP  c3650;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "compile_l2072 [inside INITIALIZE-COMPILE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c3650, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3650, 1 );
        SETGENTL( SYMBOL_VALUE( global_2dfree_2dvars_v ), 
                  DISPLAY( 1 ) );
        SETGENTL( SYMBOL_VALUE( make_2dalpha_2dseq_v ), 
                  DISPLAY( 0 ) );
        X4 = SYMBOL_VALUE( copy_2dplist_v );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c2068, 
                                          c2067, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( expform_bound, XAL1( TSCP ) );
EXTERNTSCP( expform_bound_v );

TSCP  compile_initialize_2dcompile(  )
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3644 );
        SETGENTL( SYMBOL_VALUE( lexical_2dfree_2dvars_v ), 
                  EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( lexical_2dbound_2dvars_v ), 
                  EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( current_2dlambda_2did_v ), c2044 );
        SETGENTL( SYMBOL_VALUE( quote_2dconstants_v ), EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( lap_2dcode_v ), EMPTYLIST );
        compile_sc_2dlog_v = EMPTYLIST;
        compile_sc_2dstack_2dtrace_v = TRUEVALUE;
        compile_sc_2dinterpreter_v = FALSEVALUE;
        if  ( FALSE( compile_restore_2dplist_v ) )  goto L3646;
        X1 = compile_restore_2dplist_v;
        X1 = UNKNOWNCALL( X1, 0 );
        VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        goto L3647;
L3646:
        X1 = SYMBOL_VALUE( predef_2ddefault_v );
        compile_create_2dplist( X1 );
        X1 = SYMBOL_VALUE( copy_2dplist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( c2067, 
                                     c2068, 
                                     PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SYMBOL_VALUE( make_2dalpha_2dseq_v );
        DISPLAY( 1 ) = SYMBOL_VALUE( global_2dfree_2dvars_v );
        compile_restore_2dplist_v = MAKEPROCEDURE( 0, 
                                                   0, 
                                                   compile_l2072, 
                                                   MAKECLOSURE( EMPTYLIST, 
                                                                2, 
                                                                DISPLAY( 1 ), 
                                                                DISPLAY( 0 ) ) );
L3647:
        compile_sc_2dinput_v = EMPTYLIST;
        compile_sc_2dsplice_v = EMPTYLIST;
        compile_sc_2dinclude_2ddirs_v = c2029;
        compile_sc_2dicode_v = EMPTYLIST;
        compile_sc_2derror_v = EMPTYLIST;
        compile_sc_2derror_2dcnt_v = _TSCP( 0 );
        compile_main_2dprogram_2dname_v = EMPTYLIST;
        compile_heap_2dsize_v = _TSCP( 0 );
        compile_ine_2dname_3e60377e_v = c2044;
        compile_top_2dlevel_2dsymbols_v = TRUEVALUE;
        compile_with_2dmodules_v = EMPTYLIST;
        compile_undefined_2dalpha_v = expform_bound( c2075 );
        compile_cons_2dalpha_v = expform_bound( c2076 );
        SDVAL = SET( compile_module_2dname_v, sc_emptystring );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( compile_create_2dplist_v );
DEFCSTRING( t3652, "CREATE-PLIST" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt5_open_2dinput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dfile_v );
EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );
EXTERNTSCPP( compile_report_2derror, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile_report_2derror_v );
EXTERNTSCPP( scrt5_close_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2dport_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );

TSCP  compile_create_2dplist( p2078 )
        TSCP  p2078;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3652 );
        compile_module_2dname_v = c2079;
        X1 = SYMBOL_VALUE( copy_2dplist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( c2080, 
                                     c2067, 
                                     PROCEDURE_CLOSURE( X1 ) );
        SETGENTL( SYMBOL_VALUE( global_2dfree_2dvars_v ), 
                  EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( make_2dalpha_2dseq_v ), 
                  _TSCP( 0 ) );
        plist_put( c2049, c2084, c2085 );
        plist_put( c2049, c2089, c2090 );
        plist_put( c2049, c2094, TRUEVALUE );
        plist_put( c2051, c2084, c2098 );
        plist_put( c2051, c2089, c2090 );
        plist_put( c2051, c2094, FALSEVALUE );
        plist_put( c2053, c2084, c2108 );
        plist_put( c2053, c2089, c2090 );
        plist_put( c2053, c2094, EMPTYLIST );
        X1 = SYMBOL_VALUE( lap_2dexp_v );
        plist_put( c2115, c2116, X1 );
        X1 = SYMBOL_VALUE( quote_2dexp_v );
        plist_put( c2118, c2116, X1 );
        X1 = SYMBOL_VALUE( set_21_2dexp_v );
        plist_put( c2120, c2116, X1 );
        X1 = SYMBOL_VALUE( if_2dexp_v );
        plist_put( c2122, c2116, X1 );
        X1 = SYMBOL_VALUE( define_2dexp_v );
        plist_put( c2124, c2116, X1 );
        X3 = SYMBOL_VALUE( quasiquote_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2126, c2127, X1 );
        X3 = SYMBOL_VALUE( cond_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2130, c2127, X1 );
        X3 = SYMBOL_VALUE( case_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2132, c2127, X1 );
        X3 = SYMBOL_VALUE( and_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2134, c2127, X1 );
        X3 = SYMBOL_VALUE( or_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2136, c2127, X1 );
        X3 = SYMBOL_VALUE( not_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2138, c2127, X1 );
        X3 = SYMBOL_VALUE( begin_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2140, c2127, X1 );
        X3 = SYMBOL_VALUE( let_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2142, c2127, X1 );
        X3 = SYMBOL_VALUE( let_2a_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2144, c2127, X1 );
        X3 = SYMBOL_VALUE( letrec_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2146, c2127, X1 );
        X3 = SYMBOL_VALUE( do_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2148, c2127, X1 );
        X3 = SYMBOL_VALUE( when_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2150, c2127, X1 );
        X3 = SYMBOL_VALUE( unless_2dmacro_v );
        X2 = SYMBOL_VALUE( old_2dmacro_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        plist_put( c2152, c2127, X1 );
        X1 = SYMBOL_VALUE( quote_2dmacro_v );
        plist_put( c2118, c2127, X1 );
        X1 = SYMBOL_VALUE( lap_2dmacro_v );
        plist_put( c2115, c2127, X1 );
        X1 = SYMBOL_VALUE( quote_2dmacro_v );
        plist_put( c2156, c2127, X1 );
        X1 = SYMBOL_VALUE( quote_2dmacro_v );
        plist_put( c2157, c2127, X1 );
        X1 = SYMBOL_VALUE( quote_2dmacro_v );
        plist_put( c2158, c2127, X1 );
        X1 = SYMBOL_VALUE( quote_2dmacro_v );
        plist_put( c2159, c2127, X1 );
        X1 = SYMBOL_VALUE( define_2dmacro_v );
        plist_put( c2124, c2127, X1 );
        X1 = SYMBOL_VALUE( define_2dmacro_2dmacro_v );
        plist_put( c2161, c2127, X1 );
        X1 = SYMBOL_VALUE( define_2dconstant_2dmacro_v );
        plist_put( c2163, c2127, X1 );
        X1 = SYMBOL_VALUE( eval_2dwhen_2dmacro_v );
        plist_put( c2165, c2127, X1 );
        X1 = SYMBOL_VALUE( lambda_2dmacro_v );
        plist_put( c2167, c2127, X1 );
        X1 = SYMBOL_VALUE( lambda_2dexp_v );
        plist_put( c2167, c2116, X1 );
        X1 = SYMBOL_VALUE( load_2dplist_2dlap_v );
        X1 = UNKNOWNCALL( X1, 0 );
        VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        X2 = scrt5_open_2dinput_2dfile( p2078 );
        X1 = sc_cons( X2, EMPTYLIST );
        compile_sc_2dinput_v = X1;
        X2 = SYMBOL_VALUE( read_2dtext_v );
        X2 = UNKNOWNCALL( X2, 0 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) );
        if  ( TRUE( scrt6_eof_2dobject_3f( X1 ) ) )  goto L3656;
        compile_report_2derror( c2176, CONS( X1, EMPTYLIST ) );
L3656:
        X2 = compile_sc_2dinput_v;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3659;
        scrt1__24__car_2derror( X2 );
L3659:
        X1 = PAIR_CAR( X2 );
        scrt5_close_2dport( X1 );
        compile_sc_2dinput_v = EMPTYLIST;
        X1 = SYMBOL_VALUE( make_2dalpha_2dseq_v );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8000 ) ) ), 
                      3 ) )  goto L3662;
        if  ( LTE( _S2CINT( X1 ), _S2CINT( _TSCP( 8000 ) ) ) )  goto L3664;
        X2 = X1;
        goto L3663;
L3664:
        X2 = _TSCP( 8000 );
        goto L3663;
L3662:
        X2 = scrt2_max_2dtwo( X1, _TSCP( 8000 ) );
L3663:
        SETGENTL( SYMBOL_VALUE( make_2dalpha_2dseq_v ), X2 );
        compile_undefined_2dalpha_v = expform_bound( c2075 );
        compile_cons_2dalpha_v = expform_bound( c2076 );
        POPSTACKTRACE( SET( compile_module_2dname_v, sc_emptystring ) );
}

DEFTSCP( compile_sc_v );
DEFCSTRING( t3666, "SC" );
EXTERNTSCPP( compile_string_2ddowncase, XAL1( TSCP ) );
EXTERNTSCP( compile_string_2ddowncase_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt5_output_2dport_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt5_output_2dport_3f_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt5_open_2doutput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2doutput_2dfile_v );
EXTERNTSCPP( compile_docompile, XAL0(  ) );
EXTERNTSCP( compile_docompile_v );
EXTERNTSCPP( compile_close_2dsc_2dfiles, XAL0(  ) );
EXTERNTSCP( compile_close_2dsc_2dfiles_v );

TSCP  compile_sc( i2191, o2192 )
        TSCP  i2191, o2192;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3666 );
        i2191 = CONS( i2191, EMPTYLIST );
        o2192 = CONS( o2192, EMPTYLIST );
        compile_initialize_2dcompile(  );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( i2191 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( i2191 ) ), 
                            SYMBOLTAG ) ) ) )  goto L3668;
        X3 = PAIR_CAR( i2191 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )  goto L3671;
        scdebug_error( c2200, 
                       c2201, CONS( X3, EMPTYLIST ) );
L3671:
        X2 = SYMBOL_NAME( X3 );
        X1 = compile_string_2ddowncase( X2 );
        SETGEN( PAIR_CAR( i2191 ), X1 );
L3668:
        X1 = CONS( c2202, EMPTYLIST );
        compile_sc_2dsource_2dname_v = scrt3_string_2dappend( CONS( PAIR_CAR( i2191 ), 
                                                                    X1 ) );
        X2 = scrt5_open_2dinput_2dfile( compile_sc_2dsource_2dname_v );
        X1 = sc_cons( X2, EMPTYLIST );
        compile_sc_2dinput_v = X1;
        X1 = PAIR_CAR( o2192 );
        if  ( FALSE( X1 ) )  goto L3690;
        X3 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3681;
        scrt1__24__car_2derror( X3 );
L3681:
        X2 = PAIR_CAR( X3 );
        if  ( FALSE( scrt5_output_2dport_3f( X2 ) ) )  goto L3690;
        X2 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3685;
        scrt1__24__car_2derror( X2 );
L3685:
        compile_sc_2dicode_v = PAIR_CAR( X2 );
        X3 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3688;
        scrt1__24__cdr_2derror( X3 );
L3688:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CAR( o2192 ), X2 );
        goto L3691;
L3690:
        X2 = BOOLEAN( EQ( _S2CUINT( PAIR_CAR( o2192 ) ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X2 ) )  goto L3696;
        X4 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3701;
        scrt1__24__car_2derror( X4 );
L3701:
        X3 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3696;
        X4 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3707;
        scrt1__24__car_2derror( X4 );
L3707:
        X3 = PAIR_CAR( X4 );
        if  ( TRUE( scrt1_memq( X3, c2236 ) ) )  goto L3696;
        X5 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3710;
        scrt1__24__car_2derror( X5 );
L3710:
        X4 = PAIR_CAR( X5 );
        X3 = BOOLEAN( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) );
        if  ( TRUE( X3 ) )  goto L3716;
        X5 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3720;
        scrt1__24__car_2derror( X5 );
L3720:
        X4 = PAIR_CAR( X5 );
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), STRINGTAG ) ) )
            )  goto L3691;
L3716:
        X3 = CONS( c2272, EMPTYLIST );
        X6 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3726;
        scrt1__24__car_2derror( X6 );
L3726:
        X5 = PAIR_CAR( X6 );
        if  ( NOT( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X5 ), SYMBOLTAG ) ) )
            )  goto L3723;
        X7 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3729;
        scrt1__24__car_2derror( X7 );
L3729:
        X6 = PAIR_CAR( X7 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), SYMBOLTAG ) ) )  goto L3732;
        scdebug_error( c2200, 
                       c2201, CONS( X6, EMPTYLIST ) );
L3732:
        X5 = SYMBOL_NAME( X6 );
        X4 = compile_string_2ddowncase( X5 );
        goto L3724;
L3723:
        X5 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3735;
        scrt1__24__car_2derror( X5 );
L3735:
        X4 = PAIR_CAR( X5 );
L3724:
        X2 = scrt3_string_2dappend( CONS( X4, X3 ) );
        compile_sc_2dicode_v = scrt5_open_2doutput_2dfile( X2 );
        X3 = PAIR_CAR( o2192 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3738;
        scrt1__24__cdr_2derror( X3 );
L3738:
        X2 = PAIR_CDR( X3 );
        SETGEN( PAIR_CAR( o2192 ), X2 );
        goto L3691;
L3696:
        X3 = CONS( c2272, EMPTYLIST );
        X2 = scrt3_string_2dappend( CONS( PAIR_CAR( i2191 ), X3 ) );
        compile_sc_2dicode_v = scrt5_open_2doutput_2dfile( X2 );
L3691:
        X1 = PAIR_CAR( o2192 );
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3741:
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        if  ( NEQ( _S2CUINT( PAIR_CAR( X1 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L3742;
        compile_docompile(  );
        goto L3743;
L3742:
        X5 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3746;
        scrt1__24__car_2derror( X5 );
L3746:
        X4 = PAIR_CAR( X5 );
        SETGEN( PAIR_CAR( X2 ), X4 );
        if  ( FALSE( scrt1_memq( PAIR_CAR( X2 ), X3 ) ) )  goto L3748;
        compile_report_2derror( c2386, 
                                CONS( PAIR_CAR( X2 ), EMPTYLIST ) );
        goto L3768;
L3748:
        if  ( NEQ( _S2CUINT( PAIR_CAR( X2 ) ), 
                   _S2CUINT( c2305 ) ) )  goto L3750;
        compile_sc_2derror_v = TRUEVALUE;
        goto L3768;
L3750:
        if  ( NEQ( _S2CUINT( PAIR_CAR( X2 ) ), 
                   _S2CUINT( c2309 ) ) )  goto L3752;
        compile_sc_2dlog_v = compile_sc_2dlog_2ddefault_v;
        goto L3768;
L3752:
        X4 = BOOLEAN( EQ( TSCPTAG( PAIR_CAR( X2 ) ), 
                          PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L3767;
        X6 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3761;
        scrt1__24__car_2derror( X6 );
L3761:
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2309 ) ) )  goto L3767;
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3765;
        scrt1__24__cdr_2derror( X5 );
L3765:
        compile_sc_2dlog_v = PAIR_CDR( X5 );
        X5 = c2309;
        SETGEN( PAIR_CAR( X2 ), X5 );
        goto L3768;
L3767:
        if  ( NEQ( _S2CUINT( PAIR_CAR( X2 ) ), 
                   _S2CUINT( c2326 ) ) )  goto L3769;
        compile_sc_2dstack_2dtrace_v = FALSEVALUE;
        goto L3768;
L3769:
        X5 = BOOLEAN( EQ( _S2CUINT( PAIR_CAR( X2 ) ), 
                          _S2CUINT( c2333 ) ) );
        if  ( FALSE( X5 ) )  goto L3810;
        X6 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3776;
        scrt1__24__cdr_2derror( X6 );
L3776:
        if  ( FALSE( PAIR_CDR( X6 ) ) )  goto L3810;
        X8 = CONS( c2202, EMPTYLIST );
        X11 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3785;
        scrt1__24__cdr_2derror( X11 );
L3785:
        X12 = PAIR_CDR( X11 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3788;
        scrt1__24__car_2derror( X12 );
L3788:
        X10 = PAIR_CAR( X12 );
        if  ( NOT( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X10 ), SYMBOLTAG ) ) )
            )  goto L3781;
        X12 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3792;
        scrt1__24__cdr_2derror( X12 );
L3792:
        X13 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L3795;
        scrt1__24__car_2derror( X13 );
L3795:
        X11 = PAIR_CAR( X13 );
        if  ( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X11 ), SYMBOLTAG ) )
            )  goto L3798;
        scdebug_error( c2200, 
                       c2201, CONS( X11, EMPTYLIST ) );
L3798:
        X10 = SYMBOL_NAME( X11 );
        X9 = compile_string_2ddowncase( X10 );
        goto L3782;
L3781:
        X10 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3802;
        scrt1__24__cdr_2derror( X10 );
L3802:
        X11 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L3805;
        scrt1__24__car_2derror( X11 );
L3805:
        X9 = PAIR_CAR( X11 );
L3782:
        X7 = scrt3_string_2dappend( CONS( X9, X8 ) );
        compile_create_2dplist( X7 );
        X8 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3808;
        scrt1__24__cdr_2derror( X8 );
L3808:
        X7 = PAIR_CDR( X8 );
        SETGEN( PAIR_CAR( X1 ), X7 );
        goto L3768;
L3810:
        compile_report_2derror( c2339, 
                                CONS( PAIR_CAR( X2 ), EMPTYLIST ) );
L3768:
        X5 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3812;
        scrt1__24__cdr_2derror( X5 );
L3812:
        X4 = PAIR_CDR( X5 );
        X3 = sc_cons( PAIR_CAR( X2 ), X3 );
        X2 = PAIR_CAR( X2 );
        X1 = X4;
        GOBACK( L3741 );
L3743:
        compile_close_2dsc_2dfiles(  );
        POPSTACKTRACE( c2393 );
}

DEFTSCP( compile_close_2dsc_2dfiles_v );
DEFCSTRING( t3814, "CLOSE-SC-FILES" );
EXTERNTSCPP( scrt5_current_2doutput_2dport, XAL0(  ) );
EXTERNTSCP( scrt5_current_2doutput_2dport_v );

TSCP  compile_c2396( f2419 )
        TSCP  f2419;
{
        TSCP  X1;

        PUSHSTACKTRACE( "CIFO [inside CLOSE-SC-FILES]" );
        if  ( FALSE( f2419 ) )  goto L3817;
        X1 = scrt5_current_2doutput_2dport(  );
        if  ( EQ( _S2CUINT( f2419 ), _S2CUINT( X1 ) ) )  goto L3819;
        POPSTACKTRACE( scrt5_close_2dport( f2419 ) );
L3819:
        POPSTACKTRACE( FALSEVALUE );
L3817:
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  compile_close_2dsc_2dfiles(  )
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t3814 );
        X1 = compile_sc_2dinput_v;
        X2 = X1;
L3824:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3825;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3829;
        scrt1__24__car_2derror( X2 );
L3829:
        X3 = PAIR_CAR( X2 );
        compile_c2396( X3 );
        X2 = PAIR_CDR( X2 );
        GOBACK( L3824 );
L3825:
        compile_sc_2dinput_v = EMPTYLIST;
        compile_sc_2dsplice_v = EMPTYLIST;
        compile_sc_2dinclude_2ddirs_v = c2029;
        compile_c2396( compile_sc_2dicode_v );
        POPSTACKTRACE( SET( compile_sc_2dicode_v, EMPTYLIST ) );
}

DEFTSCP( compile_scl_v );
DEFCSTRING( t3832, "SCL" );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( scrt5_close_2doutput_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2doutput_2dport_v );

TSCP  compile_scl( e2429 )
        TSCP  e2429;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3832 );
        X1 = c2473;
        X1 = CONS( X1, EMPTYLIST );
        if  ( FALSE( e2429 ) )  goto L3854;
        if  ( EQ( TSCPTAG( e2429 ), PAIRTAG ) )  goto L3841;
        scrt1__24__car_2derror( e2429 );
L3841:
        X2 = PAIR_CAR( e2429 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3854;
        X2 = scrt5_open_2doutput_2dfile( c2472 );
        scrt6_write( c2448, CONS( X2, EMPTYLIST ) );
        scrt6_newline( CONS( X2, EMPTYLIST ) );
        X3 = e2429;
L3845:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3846;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3851;
        scrt1__24__car_2derror( X3 );
L3851:
        X4 = PAIR_CAR( X3 );
        scrt6_write( X4, CONS( X2, EMPTYLIST ) );
        scrt6_newline( CONS( X2, EMPTYLIST ) );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3845 );
L3846:
        scrt5_close_2doutput_2dport( X2 );
        goto L3856;
L3854:
        if  ( FALSE( e2429 ) )  goto L3856;
        if  ( EQ( TSCPTAG( e2429 ), PAIRTAG ) )  goto L3859;
        scrt1__24__car_2derror( e2429 );
L3859:
        X2 = PAIR_CAR( e2429 );
        SETGEN( PAIR_CAR( X1 ), X2 );
L3856:
        X2 = CONS( c2309, EMPTYLIST );
        POPSTACKTRACE( compile_sc( PAIR_CAR( X1 ), 
                                   CONS( scrt5_current_2doutput_2dport(  ), 
                                         X2 ) ) );
}

DEFTSCP( compile_log_3f_v );
DEFCSTRING( t3861, "LOG?" );

TSCP  compile_log_3f( e2476 )
        TSCP  e2476;
{
        PUSHSTACKTRACE( t3861 );
        POPSTACKTRACE( scrt1_memq( e2476, compile_sc_2dlog_v ) );
}

DEFTSCP( compile_docompile_v );
DEFCSTRING( t3863, "DOCOMPILE" );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( compile_pp_24t_2dlist, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile_pp_24t_2dlist_v );

TSCP  compile_l2620( l2621, c3932 )
        TSCP  l2621, c3932;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "compile_l2620 [inside DOCOMPILE]" );
        if  ( NEQ( TSCPTAG( l2621 ), PAIRTAG ) )  goto L3934;
        X1 = PAIR_CAR( l2621 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2637 ) ) )  goto L3936;
        X4 = PAIR_CAR( l2621 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2637 ) ) );
        if  ( FALSE( X3 ) )  goto L3942;
        X4 = PAIR_CDR( l2621 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3946;
        scrt1__24__car_2derror( X4 );
L3946:
        X2 = PAIR_CAR( X4 );
        goto L3943;
L3942:
        X2 = X3;
L3943:
        X1 = SYMBOL_VALUE( print_2dlambda_2dinfo_v );
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                     compile_sc_2dicode_v, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( scrt6_newline( CONS( compile_sc_2dicode_v, 
                                            EMPTYLIST ) ) );
L3936:
        POPSTACKTRACE( FALSEVALUE );
L3934:
        POPSTACKTRACE( FALSEVALUE );
}

EXTERNTSCPP( compile__2d_24tree_b5ec3baf, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile__2d_24tree_b5ec3baf_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );

TSCP  compile_docompile(  )
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3863 );
        X1 = EMPTYLIST;
        X1 = CONS( X1, EMPTYLIST );
        if  ( FALSE( compile_sc_2dlog_v ) )  goto L3866;
        scrt6_format( compile_sc_2dicode_v, 
                      CONS( c2480, EMPTYLIST ) );
L3866:
        X3 = SYMBOL_VALUE( expand_2dforms_v );
        X3 = UNKNOWNCALL( X3, 0 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( compile_log_3f( c2116 ) ) )  goto L3868;
        compile_pp_24t_2dlist( PAIR_CAR( X1 ), 
                               compile_sc_2dicode_v );
L3868:
        if  ( FALSE( compile_sc_2dlog_v ) )  goto L3870;
        scrt6_format( compile_sc_2dicode_v, 
                      CONS( c2483, EMPTYLIST ) );
L3870:
        X2 = PAIR_CAR( X1 );
        X3 = SYMBOL_VALUE( analyze_2dclosures1a_v );
        X4 = X2;
L3874:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3875;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3879;
        scrt1__24__car_2derror( X4 );
L3879:
        X6 = PAIR_CAR( X4 );
        X5 = X3;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X6, PROCEDURE_CLOSURE( X5 ) );
        X4 = PAIR_CDR( X4 );
        GOBACK( L3874 );
L3875:
        X2 = PAIR_CAR( X1 );
        X3 = SYMBOL_VALUE( analyze_2dclosures1b_v );
        X4 = X2;
L3884:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3885;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3889;
        scrt1__24__car_2derror( X4 );
L3889:
        X6 = PAIR_CAR( X4 );
        X5 = X3;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X6, PROCEDURE_CLOSURE( X5 ) );
        X4 = PAIR_CDR( X4 );
        GOBACK( L3884 );
L3885:
        X3 = PAIR_CAR( X1 );
        X4 = SYMBOL_VALUE( transform_v );
        X5 = X3;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L3894:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3895;
        X2 = X6;
        goto L3902;
L3895:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3898;
        scrt1__24__car_2derror( X5 );
L3898:
        X11 = PAIR_CAR( X5 );
        X10 = X4;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X11, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L3901;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L3894 );
L3901:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3906;
        scdebug_error( c2562, 
                       c2563, CONS( X7, EMPTYLIST ) );
L3906:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L3894 );
L3902:
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( compile_sc_2dlog_v ) )  goto L3908;
        scrt6_format( compile_sc_2dicode_v, 
                      CONS( c2573, EMPTYLIST ) );
L3908:
        X2 = PAIR_CAR( X1 );
        X3 = SYMBOL_VALUE( analyze_2dclosures2_v );
        X4 = X2;
L3912:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L3913;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3917;
        scrt1__24__car_2derror( X4 );
L3917:
        X6 = PAIR_CAR( X4 );
        X5 = X3;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X6, PROCEDURE_CLOSURE( X5 ) );
        X4 = PAIR_CDR( X4 );
        GOBACK( L3912 );
L3913:
        if  ( FALSE( compile_log_3f( c2167 ) ) )  goto L3925;
        X2 = PAIR_CAR( X1 );
        X3 = X2;
L3924:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3925;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3929;
        scrt1__24__car_2derror( X3 );
L3929:
        X4 = PAIR_CAR( X3 );
        X6 = MAKEPROCEDURE( 1, 0, compile_l2620, EMPTYLIST );
        X5 = SYMBOL_VALUE( walk_2d_24tree_v );
        X5 = UNKNOWNCALL( X5, 2 );
        VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                     X4, PROCEDURE_CLOSURE( X5 ) );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3924 );
L3925:
        if  ( FALSE( compile_log_3f( c2671 ) ) )  goto L3949;
        compile_pp_24t_2dlist( PAIR_CAR( X1 ), 
                               compile_sc_2dicode_v );
        scrt6_newline( CONS( compile_sc_2dicode_v, EMPTYLIST ) );
        X2 = SYMBOL_VALUE( quote_2dconstants_v );
        compile__2d_24tree_b5ec3baf( X2, compile_sc_2dicode_v );
        scrt6_newline( CONS( compile_sc_2dicode_v, EMPTYLIST ) );
L3949:
        if  ( FALSE( compile_sc_2dlog_v ) )  goto L3952;
        scrt6_format( compile_sc_2dicode_v, 
                      CONS( c2674, EMPTYLIST ) );
L3952:
        X2 = compile_sc_2derror_2dcnt_v;
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3956;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L3960;
        POPSTACKTRACE( FALSEVALUE );
L3956:
        if  ( TRUE( scrt2_zero_3f( X2 ) ) )  goto L3960;
        POPSTACKTRACE( FALSEVALUE );
L3960:
        X2 = SYMBOL_VALUE( generate_2dcode_v );
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( PAIR_CAR( X1 ), 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
}

DEFTSCP( compile_report_2derror_v );
DEFCSTRING( t3963, "REPORT-ERROR" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  compile_report_2derror( m2686, l2687 )
        TSCP  m2686, l2687;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3963 );
        if  ( TRUE( compile_sc_2derror_v ) )  goto L3965;
        compile_sc_2derror_v = scrt5_current_2doutput_2dport(  );
L3965:
        X1 = CONS( m2686, EMPTYLIST );
        X1 = CONS( compile_ine_2dname_3e60377e_v, X1 );
        scrt6_format( compile_sc_2derror_v, 
                      CONS( c2688, X1 ) );
        X1 = l2687;
L3968:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3969;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3973;
        scrt1__24__car_2derror( X1 );
L3973:
        X2 = CONS( PAIR_CAR( X1 ), EMPTYLIST );
        scrt6_format( compile_sc_2derror_v, 
                      CONS( c2712, X2 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L3968 );
L3969:
        scrt6_newline( CONS( compile_sc_2derror_v, EMPTYLIST ) );
        X1 = compile_sc_2derror_2dcnt_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L3977;
        X2 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X1 ) ) );
        goto L3978;
L3977:
        X2 = scrt2__2b_2dtwo( _TSCP( 4 ), X1 );
L3978:
        POPSTACKTRACE( SET( compile_sc_2derror_2dcnt_v, X2 ) );
}

DEFTSCP( compile_report_2dwarning_v );
DEFCSTRING( t3979, "REPORT-WARNING" );

TSCP  compile_report_2dwarning( m2722, l2723 )
        TSCP  m2722, l2723;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3979 );
        if  ( TRUE( compile_sc_2derror_v ) )  goto L3981;
        compile_sc_2derror_v = scrt5_current_2doutput_2dport(  );
L3981:
        X1 = CONS( m2722, EMPTYLIST );
        X1 = CONS( compile_ine_2dname_3e60377e_v, X1 );
        scrt6_format( compile_sc_2derror_v, 
                      CONS( c2724, X1 ) );
        X1 = l2723;
L3984:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3985;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3989;
        scrt1__24__car_2derror( X1 );
L3989:
        X2 = CONS( PAIR_CAR( X1 ), EMPTYLIST );
        scrt6_format( compile_sc_2derror_v, 
                      CONS( c2712, X2 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L3984 );
L3985:
        POPSTACKTRACE( scrt6_newline( CONS( compile_sc_2derror_v, 
                                            EMPTYLIST ) ) );
}

DEFTSCP( compile__2d_24tree_b5ec3baf_v );
DEFCSTRING( t3992, "PRETTY-PRINT-$TREE" );
EXTERNTSCPP( scrt6_write_2dcount, XAL1( TSCP ) );
EXTERNTSCP( scrt6_write_2dcount_v );
EXTERNTSCPP( scrt6_write_2dwidth, XAL1( TSCP ) );
EXTERNTSCP( scrt6_write_2dwidth_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( compile_bda_2dbind_8f865e9, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( compile_bda_2dbind_8f865e9_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( compile_print_2din, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile_print_2din_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( compile_2dcount_21_4d4ecab9, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile_2dcount_21_4d4ecab9_v );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );

TSCP  compile__2d_24tree_b5ec3baf( t2749, o2750 )
        TSCP  t2749, o2750;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3992 );
L3993:
        X3 = scrt6_write_2dcount( CONS( o2750, EMPTYLIST ) );
        X4 = scrt6_write_2dwidth( CONS( o2750, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3995;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( X3 ) ) );
        goto L3996;
L3995:
        X1 = scrt2__2d_2dtwo( X4, X3 );
L3996:
        X2 = scrt6_write_2dcount( CONS( o2750, EMPTYLIST ) );
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L3998;
        X4 = PAIR_CAR( t2749 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2772 ) ) );
        goto L3999;
L3998:
        X3 = FALSEVALUE;
L3999:
        if  ( FALSE( X3 ) )  goto L4076;
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4005;
        X6 = PAIR_CAR( t2749 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2772 ) ) );
        goto L4006;
L4005:
        X5 = FALSEVALUE;
L4006:
        if  ( FALSE( X5 ) )  goto L4009;
        X4 = scrt1_caddr( t2749 );
        goto L4010;
L4009:
        X4 = X5;
L4010:
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4076;
        X5 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2637 ) ) )  goto L4076;
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4018;
        X8 = PAIR_CAR( t2749 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2772 ) ) );
        goto L4019;
L4018:
        X7 = FALSEVALUE;
L4019:
        if  ( FALSE( X7 ) )  goto L4022;
        X6 = scrt1_caddr( t2749 );
        goto L4023;
L4022:
        X6 = X7;
L4023:
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4025;
        X8 = PAIR_CAR( X6 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2637 ) ) );
        goto L4026;
L4025:
        X7 = FALSEVALUE;
L4026:
        if  ( FALSE( X7 ) )  goto L4029;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4032;
        scrt1__24__cdr_2derror( X6 );
L4032:
        X8 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L4035;
        scrt1__24__car_2derror( X8 );
L4035:
        X5 = PAIR_CAR( X8 );
        goto L4030;
L4029:
        X5 = X7;
L4030:
        X9 = plist_get( X5, c3069 );
        X10 = plist_get( X5, c3072 );
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4038;
        X13 = PAIR_CAR( t2749 );
        X12 = BOOLEAN( EQ( _S2CUINT( X13 ), 
                           _S2CUINT( c2772 ) ) );
        goto L4039;
L4038:
        X12 = FALSEVALUE;
L4039:
        if  ( FALSE( X12 ) )  goto L4042;
        X11 = scrt1_cdddr( t2749 );
        goto L4043;
L4042:
        X11 = X12;
L4043:
        X8 = compile_bda_2dbind_8f865e9( X9, X10, X11 );
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4044;
        X14 = PAIR_CAR( t2749 );
        X13 = BOOLEAN( EQ( _S2CUINT( X14 ), 
                           _S2CUINT( c2772 ) ) );
        goto L4045;
L4044:
        X13 = FALSEVALUE;
L4045:
        if  ( FALSE( X13 ) )  goto L4048;
        X12 = scrt1_caddr( t2749 );
        goto L4049;
L4048:
        X12 = X13;
L4049:
        if  ( NEQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4051;
        X14 = PAIR_CAR( X12 );
        X13 = BOOLEAN( EQ( _S2CUINT( X14 ), 
                           _S2CUINT( c2637 ) ) );
        goto L4052;
L4051:
        X13 = FALSEVALUE;
L4052:
        if  ( FALSE( X13 ) )  goto L4055;
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4058;
        scrt1__24__cdr_2derror( X12 );
L4058:
        X14 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L4061;
        scrt1__24__cdr_2derror( X14 );
L4061:
        X11 = PAIR_CDR( X14 );
        goto L4056;
L4055:
        X11 = X13;
L4056:
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X10 = scrt1_append_2dtwo( X11, X12 );
        X9 = scrt1_cons_2a( X10, EMPTYLIST );
        X7 = CONS( scrt1_append_2dtwo( X8, X9 ), EMPTYLIST );
        X7 = CONS( X5, X7 );
        if  ( NEQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4063;
        X9 = PAIR_CAR( t2749 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2772 ) ) );
        goto L4064;
L4063:
        X8 = FALSEVALUE;
L4064:
        if  ( FALSE( X8 ) )  goto L4067;
        if  ( EQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4070;
        scrt1__24__cdr_2derror( t2749 );
L4070:
        X10 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L4073;
        scrt1__24__car_2derror( X10 );
L4073:
        X9 = PAIR_CAR( X10 );
        goto L4068;
L4067:
        X9 = X8;
L4068:
        X6 = scrt1_cons_2a( c2833, CONS( X9, X7 ) );
        t2749 = X6;
        GOBACK( L3993 );
L4076:
        X3 = BOOLEAN( NEQ( TSCPTAG( t2749 ), PAIRTAG ) );
        if  ( TRUE( X3 ) )  goto L4081;
        X4 = compile_print_2din( t2749, X1 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4084;
        if  ( GTE( _S2CINT( X4 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L4081;
        goto L4089;
L4084:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L4081;
L4089:
        if  ( EQ( TSCPTAG( t2749 ), PAIRTAG ) )  goto L4093;
        scrt1__24__car_2derror( t2749 );
L4093:
        X4 = PAIR_CAR( t2749 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2833 ) ) );
        if  ( FALSE( X3 ) )  goto L4115;
        X7 = PAIR_CAR( t2749 );
        X10 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L4102;
        scrt1__24__car_2derror( X10 );
L4102:
        X9 = PAIR_CAR( X10 );
        X11 = scrt1_caddr( t2749 );
        X10 = sc_cons( X11, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X6 = sc_cons( X7, X8 );
        X5 = X6;
        X4 = compile_print_2din( X5, X1 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4107;
        if  ( GTE( _S2CINT( X4 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L4111;
        goto L4115;
L4107:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L4115;
L4111:
        X3 = CONS( scrt1_caddr( t2749 ), EMPTYLIST );
        X4 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4119;
        scrt1__24__car_2derror( X4 );
L4119:
        X3 = CONS( PAIR_CAR( X4 ), X3 );
        X3 = CONS( PAIR_CAR( t2749 ), X3 );
        scrt6_format( o2750, CONS( c2989, X3 ) );
        X3 = scrt1_cdddr( t2749 );
        X4 = X3;
L4124:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4125;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4129;
        scrt1__24__car_2derror( X4 );
L4129:
        X5 = PAIR_CAR( X4 );
        scrt6_newline( CONS( o2750, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4132;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L4133;
L4132:
        X6 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L4133:
        compile_2dcount_21_4d4ecab9( o2750, X6 );
        compile__2d_24tree_b5ec3baf( X5, o2750 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L4124 );
L4125:
        POPSTACKTRACE( scrt6_format( o2750, 
                                     CONS( c2931, EMPTYLIST ) ) );
L4115:
        X4 = PAIR_CAR( t2749 );
        X3 = scrt1_memq( X4, c2864 );
        if  ( FALSE( X3 ) )  goto L4156;
        X7 = PAIR_CAR( t2749 );
        X10 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L4143;
        scrt1__24__car_2derror( X10 );
L4143:
        X9 = PAIR_CAR( X10 );
        X8 = sc_cons( X9, EMPTYLIST );
        X6 = sc_cons( X7, X8 );
        X5 = X6;
        X4 = compile_print_2din( X5, X1 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4148;
        if  ( GTE( _S2CINT( X4 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L4152;
        goto L4156;
L4148:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L4156;
L4152:
        X4 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4160;
        scrt1__24__car_2derror( X4 );
L4160:
        X3 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        X3 = CONS( PAIR_CAR( t2749 ), X3 );
        scrt6_format( o2750, CONS( c2933, X3 ) );
        X4 = PAIR_CDR( t2749 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4165;
        scrt1__24__cdr_2derror( X4 );
L4165:
        X3 = PAIR_CDR( X4 );
        X4 = X3;
L4169:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4170;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4174;
        scrt1__24__car_2derror( X4 );
L4174:
        X5 = PAIR_CAR( X4 );
        scrt6_newline( CONS( o2750, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 20 ) ) ), 
                      3 ) )  goto L4177;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 20 ) ) ) );
        goto L4178;
L4177:
        X6 = scrt2__2b_2dtwo( X2, _TSCP( 20 ) );
L4178:
        compile_2dcount_21_4d4ecab9( o2750, X6 );
        compile__2d_24tree_b5ec3baf( X5, o2750 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L4169 );
L4170:
        POPSTACKTRACE( scrt6_format( o2750, 
                                     CONS( c2931, EMPTYLIST ) ) );
L4156:
        scrt6_format( o2750, CONS( c2889, EMPTYLIST ) );
        X3 = PAIR_CAR( t2749 );
        compile__2d_24tree_b5ec3baf( X3, o2750 );
        X3 = PAIR_CDR( t2749 );
        X4 = X3;
L4185:
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4186;
        scrt6_newline( CONS( o2750, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L4189;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L4190;
L4189:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 8 ) );
L4190:
        compile_2dcount_21_4d4ecab9( o2750, X5 );
        X5 = PAIR_CAR( X4 );
        compile__2d_24tree_b5ec3baf( X5, o2750 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L4185 );
L4186:
        if  ( FALSE( X4 ) )  goto L4193;
        scrt6_newline( CONS( o2750, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L4196;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L4197;
L4196:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 8 ) );
L4197:
        compile_2dcount_21_4d4ecab9( o2750, X5 );
        scrt6_display( c2911, CONS( o2750, EMPTYLIST ) );
        compile__2d_24tree_b5ec3baf( X4, o2750 );
L4193:
        POPSTACKTRACE( scrt6_format( o2750, 
                                     CONS( c2931, EMPTYLIST ) ) );
L4081:
        POPSTACKTRACE( scrt6_write( t2749, 
                                    CONS( o2750, EMPTYLIST ) ) );
}

DEFTSCP( compile_bda_2dbind_8f865e9_v );
DEFCSTRING( t4198, "PP$T-LAMBDA-BIND" );

TSCP  compile_bda_2dbind_8f865e9( r3205, o3206, v3207 )
        TSCP  r3205, o3206, v3207;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4198 );
        if  ( NEQ( _S2CUINT( r3205 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4200;
        if  ( FALSE( o3206 ) )  goto L4202;
        if  ( EQ( TSCPTAG( o3206 ), PAIRTAG ) )  goto L4205;
        scrt1__24__car_2derror( o3206 );
L4205:
        X2 = PAIR_CAR( o3206 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( v3207, X3 );
        X1 = scrt1_cons_2a( X2, CONS( c3217, X3 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L4202:
        POPSTACKTRACE( EMPTYLIST );
L4200:
        if  ( EQ( TSCPTAG( r3205 ), PAIRTAG ) )  goto L4208;
        scrt1__24__car_2derror( r3205 );
L4208:
        X2 = PAIR_CAR( r3205 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( v3207 ), PAIRTAG ) )  goto L4211;
        scrt1__24__car_2derror( v3207 );
L4211:
        X3 = CONS( PAIR_CAR( v3207 ), X3 );
        X1 = scrt1_cons_2a( X2, CONS( c3217, X3 ) );
        X3 = PAIR_CDR( r3205 );
        X4 = PAIR_CDR( v3207 );
        X2 = compile_bda_2dbind_8f865e9( X3, o3206, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

DEFTSCP( compile_pp_24t_2dlist_v );
DEFCSTRING( t4215, "PP$T-LIST" );

TSCP  compile_pp_24t_2dlist( f3235, o3236 )
        TSCP  f3235, o3236;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4215 );
        X1 = f3235;
L4218:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L4219;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4224;
        scrt1__24__car_2derror( X1 );
L4224:
        X2 = PAIR_CAR( X1 );
        compile__2d_24tree_b5ec3baf( X2, o3236 );
        scrt6_newline( CONS( o3236, EMPTYLIST ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L4218 );
L4219:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( compile_2dcount_21_4d4ecab9_v );
DEFCSTRING( t4227, "SET-WRITE-COUNT!" );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );
EXTERNTSCPP( scrt6_write_2dchar, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_2dchar_v );

TSCP  compile_2dcount_21_4d4ecab9( o3261, c3262 )
        TSCP  o3261, c3262;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t4227 );
        X2 = scrt6_write_2dcount( CONS( o3261, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( c3262 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4231;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( c3262 ), 
                                 _S2CINT( X2 ) ) );
        goto L4232;
L4231:
        X1 = scrt2__2d_2dtwo( c3262, X2 );
L4232:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4235;
        if  ( GT( _S2CINT( X1 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L4239;
        POPSTACKTRACE( FALSEVALUE );
L4235:
        if  ( FALSE( scrt2__3c_3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L4239;
        POPSTACKTRACE( FALSEVALUE );
L4239:
        scrt6_write_2dchar( _TSCP( 8210 ), 
                            CONS( o3261, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4243;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L4232 );
L4243:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L4232 );
}

DEFTSCP( compile_print_2din_v );
DEFCSTRING( t4245, "PRINT-IN" );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  compile_print_2din( s3288, l3289 )
        TSCP  s3288, l3289;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4245 );
L4246:
        s3288 = CONS( s3288, EMPTYLIST );
        if  ( NEQ( TSCPTAG( l3289 ), FIXNUMTAG ) )  goto L4248;
        if  ( GTE( _S2CINT( l3289 ), 0 ) )  goto L4252;
        POPSTACKTRACE( l3289 );
L4248:
        if  ( FALSE( scrt2_negative_3f( l3289 ) ) )  goto L4252;
        POPSTACKTRACE( l3289 );
L4252:
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( s3288 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( s3288 ) ), 
                            VECTORTAG ) ) ) )  goto L4256;
        X1 = scrt4_vector_2d_3elist( PAIR_CAR( s3288 ) );
        SETGEN( PAIR_CAR( s3288 ), X1 );
L4256:
        if  ( NEQ( TSCPTAG( PAIR_CAR( s3288 ) ), PAIRTAG ) )  goto L4258;
        X2 = PAIR_CAR( s3288 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4261;
        scrt1__24__cdr_2derror( X2 );
L4261:
        X1 = PAIR_CDR( X2 );
        X4 = PAIR_CAR( s3288 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4264;
        scrt1__24__car_2derror( X4 );
L4264:
        X3 = PAIR_CAR( X4 );
        X2 = compile_print_2din( X3, l3289 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4267;
        l3289 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                    _S2CINT( _TSCP( 4 ) ) ) );
        goto L4268;
L4267:
        l3289 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L4268:
        s3288 = X1;
        GOBACK( L4246 );
L4258:
        X2 = scrt6_format( c3313, 
                           CONS( PAIR_CAR( s3288 ), EMPTYLIST ) );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )  goto L4270;
        scdebug_error( c3311, 
                       c3312, CONS( X2, EMPTYLIST ) );
L4270:
        X1 = C_FIXED( STRING_LENGTH( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( l3289 ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L4273;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( l3289 ), 
                                           _S2CINT( X1 ) ) ) );
L4273:
        POPSTACKTRACE( scrt2__2d_2dtwo( l3289, X1 ) );
}

DEFTSCP( compile_string_2ddowncase_v );
DEFCSTRING( t4275, "STRING-DOWNCASE" );
EXTERNTSCPP( sc_make_2dstring, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dstring_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt3_char_2ddowncase, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2ddowncase_v );

TSCP  compile_string_2ddowncase( s3329 )
        TSCP  s3329;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4275 );
        if  ( AND( EQ( TSCPTAG( s3329 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s3329 ), STRINGTAG ) )
            )  goto L4279;
        scdebug_error( c3311, 
                       c3312, CONS( s3329, EMPTYLIST ) );
L4279:
        X2 = C_FIXED( STRING_LENGTH( s3329 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4282;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4283;
L4282:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L4283:
        X3 = C_FIXED( STRING_LENGTH( s3329 ) );
        X2 = sc_make_2dstring( X3, EMPTYLIST );
L4285:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( -4 ) ) ), 
                      3 ) )  goto L4287;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( -4 ) ) ) )  goto L4291;
        POPSTACKTRACE( X2 );
L4287:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( -4 ) ) ) )  goto L4291;
        POPSTACKTRACE( X2 );
L4291:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L4296;
        scdebug_error( c3383, 
                       c3353, CONS( X1, EMPTYLIST ) );
L4296:
        X5 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L4302;
        X6 = C_FIXED( STRING_LENGTH( s3329 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L4306;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X6 ) ) )  goto L4302;
        goto L4313;
L4306:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X6 ) ) )  goto L4313;
L4302:
        scdebug_error( c3383, 
                       c3404, CONS( X1, EMPTYLIST ) );
L4313:
        X4 = C_CHAR( STRING_CHAR( s3329, X1 ) );
        X3 = scrt3_char_2ddowncase( X4 );
        if  ( EQ( TSCPIMMEDIATETAG( X3 ), CHARACTERTAG ) )  goto L4315;
        scdebug_error( c3352, 
                       c3356, CONS( X3, EMPTYLIST ) );
L4315:
        X4 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L4321;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )  goto L4323;
        scdebug_error( c3311, 
                       c3312, CONS( X2, EMPTYLIST ) );
L4323:
        X5 = C_FIXED( STRING_LENGTH( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L4327;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X5 ) ) )  goto L4321;
        goto L4334;
L4327:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X5 ) ) )  goto L4334;
L4321:
        scdebug_error( c3352, c3377, EMPTYLIST );
L4334:
        STRING_CHAR( X2, X1 ) = CHAR_C( X3 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4335;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4336;
L4335:
        X3 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
L4336:
        X1 = X3;
        GOBACK( L4285 );
}

DEFTSCP( compile_list_2dhead_v );
DEFCSTRING( t4337, "LIST-HEAD" );
EXTERNTSCPP( compile_list_2dhead, XAL2( TSCP, TSCP ) );
EXTERNTSCP( compile_list_2dhead_v );

TSCP  compile_list_2dhead( l3427, n3428 )
        TSCP  l3427, n3428;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4337 );
        if  ( NEQ( TSCPTAG( n3428 ), FIXNUMTAG ) )  goto L4340;
        if  ( NEQ( _S2CUINT( n3428 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L4344;
        POPSTACKTRACE( EMPTYLIST );
L4340:
        if  ( FALSE( scrt2_zero_3f( n3428 ) ) )  goto L4344;
        POPSTACKTRACE( EMPTYLIST );
L4344:
        if  ( EQ( TSCPTAG( l3427 ), PAIRTAG ) )  goto L4348;
        scrt1__24__car_2derror( l3427 );
L4348:
        X1 = PAIR_CAR( l3427 );
        X3 = PAIR_CDR( l3427 );
        if  ( BITAND( BITOR( _S2CINT( n3428 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4351;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( n3428 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4352;
L4351:
        X4 = scrt2__2d_2dtwo( n3428, _TSCP( 4 ) );
L4352:
        X2 = compile_list_2dhead( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
}

void scrt4__init();
void scrt3__init();
void scdebug__init();
void scrt2__init();
void scrt1__init();
void scrt6__init();
void scrt5__init();
void plist__init();
void expform__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        scrt3__init();
        scdebug__init();
        scrt2__init();
        scrt1__init();
        scrt6__init();
        scrt5__init();
        plist__init();
        expform__init();
        MAXDISPLAY( 2 );
}

void  compile__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(compile SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3620, 
                       ADR( compile_sc_2dinput_v ), EMPTYLIST );
        INITIALIZEVAR( t3621, 
                       ADR( compile_sc_2dsplice_v ), EMPTYLIST );
        INITIALIZEVAR( t3622, 
                       ADR( compile_sc_2dsource_2dname_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3623, 
                       ADR( compile_sc_2dinclude_2ddirs_v ), 
                       c2029 );
        INITIALIZEVAR( t3624, 
                       ADR( compile_sc_2dicode_v ), EMPTYLIST );
        INITIALIZEVAR( t3625, 
                       ADR( compile_sc_2derror_v ), EMPTYLIST );
        INITIALIZEVAR( t3626, 
                       ADR( compile_sc_2derror_2dcnt_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3627, 
                       ADR( compile_sc_2dlog_v ), EMPTYLIST );
        INITIALIZEVAR( t3628, 
                       ADR( compile_sc_2dstack_2dtrace_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t3629, 
                       ADR( compile_sc_2dinterpreter_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3630, 
                       ADR( compile_sc_2dlog_2ddefault_v ), 
                       c2038 );
        INITIALIZEVAR( t3631, 
                       ADR( compile_module_2dname_v ), 
                       sc_emptystring );
        INITIALIZEVAR( t3632, 
                       ADR( compile_e_2dupcase_6e1220a4_v ), 
                       sc_emptystring );
        INITIALIZEVAR( t3633, 
                       ADR( compile_main_2dprogram_2dname_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3634, 
                       ADR( compile_heap_2dsize_v ), _TSCP( 0 ) );
        INITIALIZEVAR( t3635, 
                       ADR( compile_ine_2dname_3e60377e_v ), 
                       c2044 );
        INITIALIZEVAR( t3636, 
                       ADR( compile_top_2dlevel_2dsymbols_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t3637, 
                       ADR( compile_with_2dmodules_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3638, 
                       ADR( compile_restore_2dplist_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3639, 
                       ADR( compile_true_2dalpha_v ), c2049 );
        INITIALIZEVAR( t3640, 
                       ADR( compile_false_2dalpha_v ), c2051 );
        INITIALIZEVAR( t3641, 
                       ADR( compile_empty_2dlist_2dalpha_v ), 
                       c2053 );
        INITIALIZEVAR( t3642, 
                       ADR( compile_cons_2dalpha_v ), EMPTYLIST );
        INITIALIZEVAR( t3643, 
                       ADR( compile_undefined_2dalpha_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3644, 
                       ADR( compile_initialize_2dcompile_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      compile_initialize_2dcompile, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3652, 
                       ADR( compile_create_2dplist_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      compile_create_2dplist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3666, 
                       ADR( compile_sc_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, compile_sc, EMPTYLIST ) );
        INITIALIZEVAR( t3814, 
                       ADR( compile_close_2dsc_2dfiles_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      compile_close_2dsc_2dfiles, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3832, 
                       ADR( compile_scl_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, compile_scl, EMPTYLIST ) );
        INITIALIZEVAR( t3861, 
                       ADR( compile_log_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, compile_log_3f, EMPTYLIST ) );
        INITIALIZEVAR( t3863, 
                       ADR( compile_docompile_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      compile_docompile, EMPTYLIST ) );
        INITIALIZEVAR( t3963, 
                       ADR( compile_report_2derror_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      compile_report_2derror, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3979, 
                       ADR( compile_report_2dwarning_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      compile_report_2dwarning, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3992, 
                       ADR( compile__2d_24tree_b5ec3baf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      compile__2d_24tree_b5ec3baf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4198, 
                       ADR( compile_bda_2dbind_8f865e9_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      compile_bda_2dbind_8f865e9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4215, 
                       ADR( compile_pp_24t_2dlist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      compile_pp_24t_2dlist, EMPTYLIST ) );
        INITIALIZEVAR( t4227, 
                       ADR( compile_2dcount_21_4d4ecab9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      compile_2dcount_21_4d4ecab9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4245, 
                       ADR( compile_print_2din_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      compile_print_2din, EMPTYLIST ) );
        INITIALIZEVAR( t4275, 
                       ADR( compile_string_2ddowncase_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      compile_string_2ddowncase, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4337, 
                       ADR( compile_list_2dhead_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      compile_list_2dhead, EMPTYLIST ) );
        return;
}
