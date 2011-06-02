
/* SCHEME->C */

#include <objects.h>

void expform__init();
DEFSTATICTSCP( read_2dtext_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( report_2dwarning_v );
DEFSTATICTSCP( quote_2dconstants_v );
DEFSTATICTSCP( islist_v );
DEFSTATICTSCP( call_2dexp_v );
DEFSTATICTSCP( module_2dname_v );
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( downshift_v );
DEFSTATICTSCP( find_2dquote_2dconstant_v );
DEFSTATICTSCP( c3507 );
DEFSTATICTSCP( t3728 );
DEFCSTRING( t3729, "syntax:" );
DEFSTATICTSCP( c3506 );
DEFCSTRING( t3730, "Illegal" );
DEFSTATICTSCP( c3505 );
DEFCSTRING( t3731, "~A~A" );
DEFSTATICTSCP( c3420 );
DEFSTATICTSCP( c3360 );
DEFSTATICTSCP( t3732 );
DEFSTATICTSCP( t3733 );
DEFSTATICTSCP( t3734 );
DEFSTATICTSCP( t3735 );
DEFSTATICTSCP( t3736 );
DEFSTATICTSCP( c3359 );
DEFSTATICTSCP( c3355 );
DEFSTATICTSCP( t3737 );
DEFSTATICTSCP( t3738 );
DEFSTATICTSCP( t3739 );
DEFCSTRING( t3740, "Duplicately defined symbol:" );
DEFSTATICTSCP( c3297 );
DEFSTATICTSCP( c3279 );
DEFSTATICTSCP( c3262 );
DEFSTATICTSCP( c3168 );
DEFSTATICTSCP( c3167 );
DEFCSTRING( t3741, "0" );
DEFSTATICTSCP( c3166 );
DEFCSTRING( t3742, "0123456789abcdef" );
DEFSTATICTSCP( c3101 );
DEFCSTRING( t3743, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2976 );
DEFCSTRING( t3744, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2970 );
DEFSTATICTSCP( c2969 );
DEFCSTRING( t3745, "~a_~a_~a" );
DEFSTATICTSCP( c2904 );
DEFCSTRING( t3746, "Argument(s) incorrect" );
DEFSTATICTSCP( c2903 );
DEFCSTRING( t3747, "Argument is not a CHAR: ~s" );
DEFSTATICTSCP( c2882 );
DEFSTATICTSCP( c2879 );
DEFCSTRING( t3748, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c2801 );
DEFSTATICTSCP( c2800 );
DEFCSTRING( t3749, "Argument not an unsigned 8-bit INTEGER: ~s" );
DEFSTATICTSCP( c2789 );
DEFSTATICTSCP( c2788 );
DEFSTATICTSCP( c2689 );
DEFSTATICTSCP( c2680 );
DEFCSTRING( t3750, "Argument(s) not CHAR: ~s ~s" );
DEFSTATICTSCP( c2669 );
DEFSTATICTSCP( c2668 );
DEFCSTRING( t3751, "Argument is out of range: ~s" );
DEFSTATICTSCP( c2661 );
DEFCSTRING( t3752, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2640 );
DEFSTATICTSCP( c2639 );
DEFCSTRING( t3753, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2632 );
DEFSTATICTSCP( c2631 );
DEFCSTRING( t3754, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2611 );
DEFSTATICTSCP( c2610 );
DEFSTATICTSCP( c2561 );
DEFSTATICTSCP( c2542 );
DEFCSTRING( t3755, "_" );
DEFSTATICTSCP( c2508 );
DEFSTATICTSCP( c2475 );
DEFSTATICTSCP( c2434 );
DEFSTATICTSCP( c2421 );
DEFSTATICTSCP( c2408 );
DEFSTATICTSCP( c2395 );
DEFSTATICTSCP( c2382 );
DEFSTATICTSCP( c2369 );
DEFSTATICTSCP( c2356 );
DEFSTATICTSCP( c2343 );
DEFSTATICTSCP( c2330 );
DEFSTATICTSCP( c2317 );
DEFSTATICTSCP( c2304 );
DEFSTATICTSCP( c2291 );
DEFSTATICTSCP( c2254 );
DEFSTATICTSCP( c2229 );
DEFCSTRING( t3756, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2213 );
DEFSTATICTSCP( c2212 );
DEFSTATICTSCP( c2177 );
DEFSTATICTSCP( c2172 );
DEFSTATICTSCP( c2169 );
DEFSTATICTSCP( c2150 );
DEFCSTRING( t3757, "_v" );
DEFSTATICTSCP( c2101 );
DEFSTATICTSCP( c2099 );
DEFCSTRING( t3758, "Variable assumed to be TOP-LEVEL:" );
DEFSTATICTSCP( c2089 );
DEFSTATICTSCP( c2086 );
DEFSTATICTSCP( c2082 );
DEFSTATICTSCP( c2078 );
DEFSTATICTSCP( c2077 );
DEFSTATICTSCP( c2029 );

static void  init_constants()
{
        read_2dtext_v = STRINGTOSYMBOL( CSTRING_TSCP( "READ-TEXT" ) );
        CONSTANTEXP( ADR( read_2dtext_v ) );
        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        report_2dwarning_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-WARNING" ) );
        CONSTANTEXP( ADR( report_2dwarning_v ) );
        quote_2dconstants_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE-CONSTANTS\
" ) );
        CONSTANTEXP( ADR( quote_2dconstants_v ) );
        islist_v = STRINGTOSYMBOL( CSTRING_TSCP( "ISLIST" ) );
        CONSTANTEXP( ADR( islist_v ) );
        call_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "CALL-EXP" ) );
        CONSTANTEXP( ADR( call_2dexp_v ) );
        module_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAME" ) );
        CONSTANTEXP( ADR( module_2dname_v ) );
        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        downshift_v = STRINGTOSYMBOL( CSTRING_TSCP( "DOWNSHIFT" ) );
        CONSTANTEXP( ADR( downshift_v ) );
        find_2dquote_2dconstant_v = STRINGTOSYMBOL( CSTRING_TSCP( "FIND-QUOT\
E-CONSTANT" ) );
        CONSTANTEXP( ADR( find_2dquote_2dconstant_v ) );
        c3507 = EMPTYLIST;
        c3507 = CONS( TRUEVALUE, c3507 );
        t3728 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        c3507 = CONS( t3728, c3507 );
        CONSTANTEXP( ADR( c3507 ) );
        c3506 = CSTRING_TSCP( t3729 );
        CONSTANTEXP( ADR( c3506 ) );
        c3505 = CSTRING_TSCP( t3730 );
        CONSTANTEXP( ADR( c3505 ) );
        c3420 = CSTRING_TSCP( t3731 );
        CONSTANTEXP( ADR( c3420 ) );
        c3360 = EMPTYLIST;
        t3732 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSUREP" ) );
        c3360 = CONS( t3732, c3360 );
        t3733 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMPORARY" ) );
        c3360 = CONS( t3733, c3360 );
        t3734 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        c3360 = CONS( t3734, c3360 );
        t3735 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        c3360 = CONS( t3735, c3360 );
        t3736 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        c3360 = CONS( t3736, c3360 );
        CONSTANTEXP( ADR( c3360 ) );
        c3359 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c3359 ) );
        c3355 = EMPTYLIST;
        t3737 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        c3355 = CONS( t3737, c3355 );
        t3738 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        c3355 = CONS( t3738, c3355 );
        t3739 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        c3355 = CONS( t3739, c3355 );
        CONSTANTEXP( ADR( c3355 ) );
        c3297 = CSTRING_TSCP( t3740 );
        CONSTANTEXP( ADR( c3297 ) );
        c3279 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        CONSTANTEXP( ADR( c3279 ) );
        c3262 = EMPTYLIST;
        c3262 = CONS( c3359, c3262 );
        c3262 = CONS( c3279, c3262 );
        c3262 = CONS( t3739, c3262 );
        CONSTANTEXP( ADR( c3262 ) );
        c3168 = EMPTYLIST;
        c3168 = CONS( _TSCP( 245300 ), c3168 );
        c3168 = CONS( _TSCP( 228460 ), c3168 );
        c3168 = CONS( _TSCP( 146052 ), c3168 );
        c3168 = CONS( _TSCP( 194780 ), c3168 );
        c3168 = CONS( _TSCP( 44624 ), c3168 );
        c3168 = CONS( _TSCP( 27656 ), c3168 );
        c3168 = CONS( _TSCP( 76512 ), c3168 );
        c3168 = CONS( _TSCP( 125112 ), c3168 );
        c3168 = CONS( _TSCP( 106236 ), c3168 );
        c3168 = CONS( _TSCP( 89252 ), c3168 );
        c3168 = CONS( _TSCP( 6732 ), c3168 );
        c3168 = CONS( _TSCP( 55316 ), c3168 );
        c3168 = CONS( _TSCP( 167576 ), c3168 );
        c3168 = CONS( _TSCP( 150720 ), c3168 );
        c3168 = CONS( _TSCP( 199208 ), c3168 );
        c3168 = CONS( _TSCP( 247920 ), c3168 );
        c3168 = CONS( _TSCP( 262052 ), c3168 );
        c3168 = CONS( _TSCP( 212476 ), c3168 );
        c3168 = CONS( _TSCP( 162580 ), c3168 );
        c3168 = CONS( _TSCP( 178508 ), c3168 );
        c3168 = CONS( _TSCP( 61376 ), c3168 );
        c3168 = CONS( _TSCP( 11672 ), c3168 );
        c3168 = CONS( _TSCP( 93040 ), c3168 );
        c3168 = CONS( _TSCP( 108840 ), c3168 );
        c3168 = CONS( _TSCP( 122732 ), c3168 );
        c3168 = CONS( _TSCP( 73012 ), c3168 );
        c3168 = CONS( _TSCP( 23516 ), c3168 );
        c3168 = CONS( _TSCP( 39300 ), c3168 );
        c3168 = CONS( _TSCP( 184072 ), c3168 );
        c3168 = CONS( _TSCP( 134480 ), c3168 );
        c3168 = CONS( _TSCP( 215992 ), c3168 );
        c3168 = CONS( _TSCP( 231904 ), c3168 );
        c3168 = CONS( _TSCP( 212244 ), c3168 );
        c3168 = CONS( _TSCP( 261964 ), c3168 );
        c3168 = CONS( _TSCP( 178596 ), c3168 );
        c3168 = CONS( _TSCP( 162812 ), c3168 );
        c3168 = CONS( _TSCP( 11632 ), c3168 );
        c3168 = CONS( _TSCP( 61224 ), c3168 );
        c3168 = CONS( _TSCP( 108992 ), c3168 );
        c3168 = CONS( _TSCP( 93080 ), c3168 );
        c3168 = CONS( _TSCP( 73180 ), c3168 );
        c3168 = CONS( _TSCP( 122756 ), c3168 );
        c3168 = CONS( _TSCP( 39276 ), c3168 );
        c3168 = CONS( _TSCP( 23348 ), c3168 );
        c3168 = CONS( _TSCP( 134584 ), c3168 );
        c3168 = CONS( _TSCP( 184288 ), c3168 );
        c3168 = CONS( _TSCP( 231688 ), c3168 );
        c3168 = CONS( _TSCP( 215888 ), c3168 );
        c3168 = CONS( _TSCP( 228484 ), c3168 );
        c3168 = CONS( _TSCP( 245468 ), c3168 );
        c3168 = CONS( _TSCP( 194612 ), c3168 );
        c3168 = CONS( _TSCP( 146028 ), c3168 );
        c3168 = CONS( _TSCP( 27872 ), c3168 );
        c3168 = CONS( _TSCP( 44728 ), c3168 );
        c3168 = CONS( _TSCP( 125008 ), c3168 );
        c3168 = CONS( _TSCP( 76296 ), c3168 );
        c3168 = CONS( _TSCP( 89164 ), c3168 );
        c3168 = CONS( _TSCP( 106004 ), c3168 );
        c3168 = CONS( _TSCP( 55548 ), c3168 );
        c3168 = CONS( _TSCP( 6820 ), c3168 );
        c3168 = CONS( _TSCP( 150568 ), c3168 );
        c3168 = CONS( _TSCP( 167536 ), c3168 );
        c3168 = CONS( _TSCP( 247960 ), c3168 );
        c3168 = CONS( _TSCP( 199360 ), c3168 );
        c3168 = CONS( _TSCP( 178292 ), c3168 );
        c3168 = CONS( _TSCP( 162348 ), c3168 );
        c3168 = CONS( _TSCP( 212164 ), c3168 );
        c3168 = CONS( _TSCP( 261788 ), c3168 );
        c3168 = CONS( _TSCP( 108560 ), c3168 );
        c3168 = CONS( _TSCP( 92744 ), c3168 );
        c3168 = CONS( _TSCP( 11424 ), c3168 );
        c3168 = CONS( _TSCP( 61176 ), c3168 );
        c3168 = CONS( _TSCP( 39100 ), c3168 );
        c3168 = CONS( _TSCP( 23268 ), c3168 );
        c3168 = CONS( _TSCP( 72716 ), c3168 );
        c3168 = CONS( _TSCP( 122452 ), c3168 );
        c3168 = CONS( _TSCP( 231640 ), c3168 );
        c3168 = CONS( _TSCP( 215680 ), c3168 );
        c3168 = CONS( _TSCP( 134248 ), c3168 );
        c3168 = CONS( _TSCP( 183856 ), c3168 );
        c3168 = CONS( _TSCP( 195044 ), c3168 );
        c3168 = CONS( _TSCP( 146364 ), c3168 );
        c3168 = CONS( _TSCP( 228692 ), c3168 );
        c3168 = CONS( _TSCP( 245516 ), c3168 );
        c3168 = CONS( _TSCP( 125312 ), c3168 );
        c3168 = CONS( _TSCP( 76760 ), c3168 );
        c3168 = CONS( _TSCP( 27952 ), c3168 );
        c3168 = CONS( _TSCP( 44904 ), c3168 );
        c3168 = CONS( _TSCP( 55596 ), c3168 );
        c3168 = CONS( _TSCP( 7028 ), c3168 );
        c3168 = CONS( _TSCP( 89500 ), c3168 );
        c3168 = CONS( _TSCP( 106436 ), c3168 );
        c3168 = CONS( _TSCP( 248136 ), c3168 );
        c3168 = CONS( _TSCP( 199440 ), c3168 );
        c3168 = CONS( _TSCP( 151032 ), c3168 );
        c3168 = CONS( _TSCP( 167840 ), c3168 );
        c3168 = CONS( _TSCP( 146260 ), c3168 );
        c3168 = CONS( _TSCP( 194828 ), c3168 );
        c3168 = CONS( _TSCP( 245732 ), c3168 );
        c3168 = CONS( _TSCP( 228796 ), c3168 );
        c3168 = CONS( _TSCP( 76592 ), c3168 );
        c3168 = CONS( _TSCP( 125288 ), c3168 );
        c3168 = CONS( _TSCP( 44928 ), c3168 );
        c3168 = CONS( _TSCP( 28120 ), c3168 );
        c3168 = CONS( _TSCP( 7068 ), c3168 );
        c3168 = CONS( _TSCP( 55748 ), c3168 );
        c3168 = CONS( _TSCP( 106284 ), c3168 );
        c3168 = CONS( _TSCP( 89460 ), c3168 );
        c3168 = CONS( _TSCP( 199672 ), c3168 );
        c3168 = CONS( _TSCP( 248224 ), c3168 );
        c3168 = CONS( _TSCP( 167752 ), c3168 );
        c3168 = CONS( _TSCP( 150800 ), c3168 );
        c3168 = CONS( _TSCP( 162500 ), c3168 );
        c3168 = CONS( _TSCP( 178332 ), c3168 );
        c3168 = CONS( _TSCP( 261748 ), c3168 );
        c3168 = CONS( _TSCP( 212012 ), c3168 );
        c3168 = CONS( _TSCP( 92832 ), c3168 );
        c3168 = CONS( _TSCP( 108792 ), c3168 );
        c3168 = CONS( _TSCP( 60944 ), c3168 );
        c3168 = CONS( _TSCP( 11336 ), c3168 );
        c3168 = CONS( _TSCP( 23052 ), c3168 );
        c3168 = CONS( _TSCP( 38996 ), c3168 );
        c3168 = CONS( _TSCP( 122556 ), c3168 );
        c3168 = CONS( _TSCP( 72932 ), c3168 );
        c3168 = CONS( _TSCP( 215656 ), c3168 );
        c3168 = CONS( _TSCP( 231472 ), c3168 );
        c3168 = CONS( _TSCP( 184024 ), c3168 );
        c3168 = CONS( _TSCP( 134272 ), c3168 );
        c3168 = CONS( _TSCP( 111284 ), c3168 );
        c3168 = CONS( _TSCP( 94444 ), c3168 );
        c3168 = CONS( _TSCP( 13828 ), c3168 );
        c3168 = CONS( _TSCP( 62556 ), c3168 );
        c3168 = CONS( _TSCP( 172752 ), c3168 );
        c3168 = CONS( _TSCP( 155784 ), c3168 );
        c3168 = CONS( _TSCP( 206432 ), c3168 );
        c3168 = CONS( _TSCP( 255032 ), c3168 );
        c3168 = CONS( _TSCP( 234108 ), c3168 );
        c3168 = CONS( _TSCP( 217124 ), c3168 );
        c3168 = CONS( _TSCP( 136908 ), c3168 );
        c3168 = CONS( _TSCP( 185492 ), c3168 );
        c3168 = CONS( _TSCP( 33304 ), c3168 );
        c3168 = CONS( _TSCP( 16448 ), c3168 );
        c3168 = CONS( _TSCP( 67240 ), c3168 );
        c3168 = CONS( _TSCP( 115952 ), c3168 );
        c3168 = CONS( _TSCP( 127780 ), c3168 );
        c3168 = CONS( _TSCP( 78204 ), c3168 );
        c3168 = CONS( _TSCP( 30612 ), c3168 );
        c3168 = CONS( _TSCP( 46540 ), c3168 );
        c3168 = CONS( _TSCP( 189248 ), c3168 );
        c3168 = CONS( _TSCP( 139544 ), c3168 );
        c3168 = CONS( _TSCP( 223216 ), c3168 );
        c3168 = CONS( _TSCP( 239016 ), c3168 );
        c3168 = CONS( _TSCP( 250860 ), c3168 );
        c3168 = CONS( _TSCP( 201140 ), c3168 );
        c3168 = CONS( _TSCP( 153436 ), c3168 );
        c3168 = CONS( _TSCP( 169220 ), c3168 );
        c3168 = CONS( _TSCP( 50056 ), c3168 );
        c3168 = CONS( _TSCP( 464 ), c3168 );
        c3168 = CONS( _TSCP( 83768 ), c3168 );
        c3168 = CONS( _TSCP( 99680 ), c3168 );
        c3168 = CONS( _TSCP( 78228 ), c3168 );
        c3168 = CONS( _TSCP( 127948 ), c3168 );
        c3168 = CONS( _TSCP( 46372 ), c3168 );
        c3168 = CONS( _TSCP( 30588 ), c3168 );
        c3168 = CONS( _TSCP( 139760 ), c3168 );
        c3168 = CONS( _TSCP( 189352 ), c3168 );
        c3168 = CONS( _TSCP( 238912 ), c3168 );
        c3168 = CONS( _TSCP( 223000 ), c3168 );
        c3168 = CONS( _TSCP( 201052 ), c3168 );
        c3168 = CONS( _TSCP( 250628 ), c3168 );
        c3168 = CONS( _TSCP( 169452 ), c3168 );
        c3168 = CONS( _TSCP( 153524 ), c3168 );
        c3168 = CONS( _TSCP( 312 ), c3168 );
        c3168 = CONS( _TSCP( 50016 ), c3168 );
        c3168 = CONS( _TSCP( 99720 ), c3168 );
        c3168 = CONS( _TSCP( 83920 ), c3168 );
        c3168 = CONS( _TSCP( 94212 ), c3168 );
        c3168 = CONS( _TSCP( 111196 ), c3168 );
        c3168 = CONS( _TSCP( 62644 ), c3168 );
        c3168 = CONS( _TSCP( 14060 ), c3168 );
        c3168 = CONS( _TSCP( 155744 ), c3168 );
        c3168 = CONS( _TSCP( 172600 ), c3168 );
        c3168 = CONS( _TSCP( 255184 ), c3168 );
        c3168 = CONS( _TSCP( 206472 ), c3168 );
        c3168 = CONS( _TSCP( 217292 ), c3168 );
        c3168 = CONS( _TSCP( 234132 ), c3168 );
        c3168 = CONS( _TSCP( 185468 ), c3168 );
        c3168 = CONS( _TSCP( 136740 ), c3168 );
        c3168 = CONS( _TSCP( 16552 ), c3168 );
        c3168 = CONS( _TSCP( 33520 ), c3168 );
        c3168 = CONS( _TSCP( 115736 ), c3168 );
        c3168 = CONS( _TSCP( 67136 ), c3168 );
        c3168 = CONS( _TSCP( 46324 ), c3168 );
        c3168 = CONS( _TSCP( 30380 ), c3168 );
        c3168 = CONS( _TSCP( 77892 ), c3168 );
        c3168 = CONS( _TSCP( 127516 ), c3168 );
        c3168 = CONS( _TSCP( 238736 ), c3168 );
        c3168 = CONS( _TSCP( 222920 ), c3168 );
        c3168 = CONS( _TSCP( 139296 ), c3168 );
        c3168 = CONS( _TSCP( 189048 ), c3168 );
        c3168 = CONS( _TSCP( 169020 ), c3168 );
        c3168 = CONS( _TSCP( 153188 ), c3168 );
        c3168 = CONS( _TSCP( 200844 ), c3168 );
        c3168 = CONS( _TSCP( 250580 ), c3168 );
        c3168 = CONS( _TSCP( 99416 ), c3168 );
        c3168 = CONS( _TSCP( 83456 ), c3168 );
        c3168 = CONS( _TSCP( 232 ), c3168 );
        c3168 = CONS( _TSCP( 49840 ), c3168 );
        c3168 = CONS( _TSCP( 62820 ), c3168 );
        c3168 = CONS( _TSCP( 14140 ), c3168 );
        c3168 = CONS( _TSCP( 94676 ), c3168 );
        c3168 = CONS( _TSCP( 111500 ), c3168 );
        c3168 = CONS( _TSCP( 255232 ), c3168 );
        c3168 = CONS( _TSCP( 206680 ), c3168 );
        c3168 = CONS( _TSCP( 156080 ), c3168 );
        c3168 = CONS( _TSCP( 173032 ), c3168 );
        c3168 = CONS( _TSCP( 185772 ), c3168 );
        c3168 = CONS( _TSCP( 137204 ), c3168 );
        c3168 = CONS( _TSCP( 217372 ), c3168 );
        c3168 = CONS( _TSCP( 234308 ), c3168 );
        c3168 = CONS( _TSCP( 116168 ), c3168 );
        c3168 = CONS( _TSCP( 67472 ), c3168 );
        c3168 = CONS( _TSCP( 16760 ), c3168 );
        c3168 = CONS( _TSCP( 33568 ), c3168 );
        c3168 = CONS( _TSCP( 14292 ), c3168 );
        c3168 = CONS( _TSCP( 62860 ), c3168 );
        c3168 = CONS( _TSCP( 111460 ), c3168 );
        c3168 = CONS( _TSCP( 94524 ), c3168 );
        c3168 = CONS( _TSCP( 206768 ), c3168 );
        c3168 = CONS( _TSCP( 255464 ), c3168 );
        c3168 = CONS( _TSCP( 172800 ), c3168 );
        c3168 = CONS( _TSCP( 155992 ), c3168 );
        c3168 = CONS( _TSCP( 136988 ), c3168 );
        c3168 = CONS( _TSCP( 185668 ), c3168 );
        c3168 = CONS( _TSCP( 234412 ), c3168 );
        c3168 = CONS( _TSCP( 217588 ), c3168 );
        c3168 = CONS( _TSCP( 67448 ), c3168 );
        c3168 = CONS( _TSCP( 116000 ), c3168 );
        c3168 = CONS( _TSCP( 33736 ), c3168 );
        c3168 = CONS( _TSCP( 16784 ), c3168 );
        c3168 = CONS( _TSCP( 30276 ), c3168 );
        c3168 = CONS( _TSCP( 46108 ), c3168 );
        c3168 = CONS( _TSCP( 127732 ), c3168 );
        c3168 = CONS( _TSCP( 77996 ), c3168 );
        c3168 = CONS( _TSCP( 222752 ), c3168 );
        c3168 = CONS( _TSCP( 238712 ), c3168 );
        c3168 = CONS( _TSCP( 189072 ), c3168 );
        c3168 = CONS( _TSCP( 139464 ), c3168 );
        c3168 = CONS( _TSCP( 153228 ), c3168 );
        c3168 = CONS( _TSCP( 169172 ), c3168 );
        c3168 = CONS( _TSCP( 250428 ), c3168 );
        c3168 = CONS( _TSCP( 200804 ), c3168 );
        c3168 = CONS( _TSCP( 83688 ), c3168 );
        c3168 = CONS( _TSCP( 99504 ), c3168 );
        c3168 = CONS( _TSCP( 49752 ), c3168 );
        c3168 = CONS( _TSCP( 0 ), c3168 );
        c3168 = LISTTOVECTOR( c3168 );
        CONSTANTEXP( ADR( c3168 ) );
        c3167 = EMPTYLIST;
        c3167 = CONS( _TSCP( 46088 ), c3167 );
        c3167 = CONS( _TSCP( 92180 ), c3167 );
        c3167 = CONS( _TSCP( 199728 ), c3167 );
        c3167 = CONS( _TSCP( 184364 ), c3167 );
        c3167 = CONS( _TSCP( 43452 ), c3167 );
        c3167 = CONS( _TSCP( 95648 ), c3167 );
        c3167 = CONS( _TSCP( 201092 ), c3167 );
        c3167 = CONS( _TSCP( 183704 ), c3167 );
        c3167 = CONS( _TSCP( 36708 ), c3167 );
        c3167 = CONS( _TSCP( 86904 ), c3167 );
        c3167 = CONS( _TSCP( 210780 ), c3167 );
        c3167 = CONS( _TSCP( 191296 ), c3167 );
        c3167 = CONS( _TSCP( 37584 ), c3167 );
        c3167 = CONS( _TSCP( 85708 ), c3167 );
        c3167 = CONS( _TSCP( 207592 ), c3167 );
        c3167 = CONS( _TSCP( 194292 ), c3167 );
        c3167 = CONS( _TSCP( 49876 ), c3167 );
        c3167 = CONS( _TSCP( 73416 ), c3167 );
        c3167 = CONS( _TSCP( 228076 ), c3167 );
        c3167 = CONS( _TSCP( 173808 ), c3167 );
        c3167 = CONS( _TSCP( 57184 ), c3167 );
        c3167 = CONS( _TSCP( 66428 ), c3167 );
        c3167 = CONS( _TSCP( 223064 ), c3167 );
        c3167 = CONS( _TSCP( 179012 ), c3167 );
        c3167 = CONS( _TSCP( 63928 ), c3167 );
        c3167 = CONS( _TSCP( 75172 ), c3167 );
        c3167 = CONS( _TSCP( 213376 ), c3167 );
        c3167 = CONS( _TSCP( 171420 ), c3167 );
        c3167 = CONS( _TSCP( 58380 ), c3167 );
        c3167 = CONS( _TSCP( 79888 ), c3167 );
        c3167 = CONS( _TSCP( 220212 ), c3167 );
        c3167 = CONS( _TSCP( 163880 ), c3167 );
        c3167 = CONS( _TSCP( 22960 ), c3167 );
        c3167 = CONS( _TSCP( 99756 ), c3167 );
        c3167 = CONS( _TSCP( 254344 ), c3167 );
        c3167 = CONS( _TSCP( 146836 ), c3167 );
        c3167 = CONS( _TSCP( 17412 ), c3167 );
        c3167 = CONS( _TSCP( 104472 ), c3167 );
        c3167 = CONS( _TSCP( 261180 ), c3167 );
        c3167 = CONS( _TSCP( 139296 ), c3167 );
        c3167 = CONS( _TSCP( 25308 ), c3167 );
        c3167 = CONS( _TSCP( 114368 ), c3167 );
        c3167 = CONS( _TSCP( 252644 ), c3167 );
        c3167 = CONS( _TSCP( 132856 ), c3167 );
        c3167 = CONS( _TSCP( 32616 ), c3167 );
        c3167 = CONS( _TSCP( 107380 ), c3167 );
        c3167 = CONS( _TSCP( 247632 ), c3167 );
        c3167 = CONS( _TSCP( 138060 ), c3167 );
        c3167 = CONS( _TSCP( 12140 ), c3167 );
        c3167 = CONS( _TSCP( 127856 ), c3167 );
        c3167 = CONS( _TSCP( 235348 ), c3167 );
        c3167 = CONS( _TSCP( 150344 ), c3167 );
        c3167 = CONS( _TSCP( 13016 ), c3167 );
        c3167 = CONS( _TSCP( 126660 ), c3167 );
        c3167 = CONS( _TSCP( 232160 ), c3167 );
        c3167 = CONS( _TSCP( 153340 ), c3167 );
        c3167 = CONS( _TSCP( 5120 ), c3167 );
        c3167 = CONS( _TSCP( 116764 ), c3167 );
        c3167 = CONS( _TSCP( 240696 ), c3167 );
        c3167 = CONS( _TSCP( 159780 ), c3167 );
        c3167 = CONS( _TSCP( 2484 ), c3167 );
        c3167 = CONS( _TSCP( 120232 ), c3167 );
        c3167 = CONS( _TSCP( 242060 ), c3167 );
        c3167 = CONS( _TSCP( 159120 ), c3167 );
        c3167 = CONS( _TSCP( 94072 ), c3167 );
        c3167 = CONS( _TSCP( 45924 ), c3167 );
        c3167 = CONS( _TSCP( 186176 ), c3167 );
        c3167 = CONS( _TSCP( 199516 ), c3167 );
        c3167 = CONS( _TSCP( 94924 ), c3167 );
        c3167 = CONS( _TSCP( 44752 ), c3167 );
        c3167 = CONS( _TSCP( 183028 ), c3167 );
        c3167 = CONS( _TSCP( 202472 ), c3167 );
        c3167 = CONS( _TSCP( 87060 ), c3167 );
        c3167 = CONS( _TSCP( 34824 ), c3167 );
        c3167 = CONS( _TSCP( 191532 ), c3167 );
        c3167 = CONS( _TSCP( 208944 ), c3167 );
        c3167 = CONS( _TSCP( 84384 ), c3167 );
        c3167 = CONS( _TSCP( 38332 ), c3167 );
        c3167 = CONS( _TSCP( 192920 ), c3167 );
        c3167 = CONS( _TSCP( 208260 ), c3167 );
        c3167 = CONS( _TSCP( 72100 ), c3167 );
        c3167 = CONS( _TSCP( 50616 ), c3167 );
        c3167 = CONS( _TSCP( 172444 ), c3167 );
        c3167 = CONS( _TSCP( 228736 ), c3167 );
        c3167 = CONS( _TSCP( 66576 ), c3167 );
        c3167 = CONS( _TSCP( 55308 ), c3167 );
        c3167 = CONS( _TSCP( 179240 ), c3167 );
        c3167 = CONS( _TSCP( 221236 ), c3167 );
        c3167 = CONS( _TSCP( 74440 ), c3167 );
        c3167 = CONS( _TSCP( 65236 ), c3167 );
        c3167 = CONS( _TSCP( 170736 ), c3167 );
        c3167 = CONS( _TSCP( 214764 ), c3167 );
        c3167 = CONS( _TSCP( 81788 ), c3167 );
        c3167 = CONS( _TSCP( 58208 ), c3167 );
        c3167 = CONS( _TSCP( 165700 ), c3167 );
        c3167 = CONS( _TSCP( 219992 ), c3167 );
        c3167 = CONS( _TSCP( 99008 ), c3167 );
        c3167 = CONS( _TSCP( 24284 ), c3167 );
        c3167 = CONS( _TSCP( 146168 ), c3167 );
        c3167 = CONS( _TSCP( 255716 ), c3167 );
        c3167 = CONS( _TSCP( 106356 ), c3167 );
        c3167 = CONS( _TSCP( 17256 ), c3167 );
        c3167 = CONS( _TSCP( 141132 ), c3167 );
        c3167 = CONS( _TSCP( 260944 ), c3167 );
        c3167 = CONS( _TSCP( 113068 ), c3167 );
        c3167 = CONS( _TSCP( 26032 ), c3167 );
        c3167 = CONS( _TSCP( 131476 ), c3167 );
        c3167 = CONS( _TSCP( 253320 ), c3167 );
        c3167 = CONS( _TSCP( 107544 ), c3167 );
        c3167 = CONS( _TSCP( 30724 ), c3167 );
        c3167 = CONS( _TSCP( 138272 ), c3167 );
        c3167 = CONS( _TSCP( 245820 ), c3167 );
        c3167 = CONS( _TSCP( 128028 ), c3167 );
        c3167 = CONS( _TSCP( 10240 ), c3167 );
        c3167 = CONS( _TSCP( 150564 ), c3167 );
        c3167 = CONS( _TSCP( 233528 ), c3167 );
        c3167 = CONS( _TSCP( 125352 ), c3167 );
        c3167 = CONS( _TSCP( 13748 ), c3167 );
        c3167 = CONS( _TSCP( 151952 ), c3167 );
        c3167 = CONS( _TSCP( 232844 ), c3167 );
        c3167 = CONS( _TSCP( 118640 ), c3167 );
        c3167 = CONS( _TSCP( 4972 ), c3167 );
        c3167 = CONS( _TSCP( 161608 ), c3167 );
        c3167 = CONS( _TSCP( 240468 ), c3167 );
        c3167 = CONS( _TSCP( 119492 ), c3167 );
        c3167 = CONS( _TSCP( 3800 ), c3167 );
        c3167 = CONS( _TSCP( 158460 ), c3167 );
        c3167 = CONS( _TSCP( 243424 ), c3167 );
        c3167 = CONS( _TSCP( 197352 ), c3167 );
        c3167 = CONS( _TSCP( 188148 ), c3167 );
        c3167 = CONS( _TSCP( 47824 ), c3167 );
        c3167 = CONS( _TSCP( 91852 ), c3167 );
        c3167 = CONS( _TSCP( 204636 ), c3167 );
        c3167 = CONS( _TSCP( 181056 ), c3167 );
        c3167 = CONS( _TSCP( 42852 ), c3167 );
        c3167 = CONS( _TSCP( 97144 ), c3167 );
        c3167 = CONS( _TSCP( 211332 ), c3167 );
        c3167 = CONS( _TSCP( 189848 ), c3167 );
        c3167 = CONS( _TSCP( 33212 ), c3167 );
        c3167 = CONS( _TSCP( 89504 ), c3167 );
        c3167 = CONS( _TSCP( 205872 ), c3167 );
        c3167 = CONS( _TSCP( 194604 ), c3167 );
        c3167 = CONS( _TSCP( 39944 ), c3167 );
        c3167 = CONS( _TSCP( 81940 ), c3167 );
        c3167 = CONS( _TSCP( 226356 ), c3167 );
        c3167 = CONS( _TSCP( 174120 ), c3167 );
        c3167 = CONS( _TSCP( 52236 ), c3167 );
        c3167 = CONS( _TSCP( 69648 ), c3167 );
        c3167 = CONS( _TSCP( 223616 ), c3167 );
        c3167 = CONS( _TSCP( 177564 ), c3167 );
        c3167 = CONS( _TSCP( 53688 ), c3167 );
        c3167 = CONS( _TSCP( 69028 ), c3167 );
        c3167 = CONS( _TSCP( 216920 ), c3167 );
        c3167 = CONS( _TSCP( 168772 ), c3167 );
        c3167 = CONS( _TSCP( 63328 ), c3167 );
        c3167 = CONS( _TSCP( 76668 ), c3167 );
        c3167 = CONS( _TSCP( 217836 ), c3167 );
        c3167 = CONS( _TSCP( 167664 ), c3167 );
        c3167 = CONS( _TSCP( 60116 ), c3167 );
        c3167 = CONS( _TSCP( 79560 ), c3167 );
        c3167 = CONS( _TSCP( 257872 ), c3167 );
        c3167 = CONS( _TSCP( 144204 ), c3167 );
        c3167 = CONS( _TSCP( 22376 ), c3167 );
        c3167 = CONS( _TSCP( 101236 ), c3167 );
        c3167 = CONS( _TSCP( 258788 ), c3167 );
        c3167 = CONS( _TSCP( 143096 ), c3167 );
        c3167 = CONS( _TSCP( 19164 ), c3167 );
        c3167 = CONS( _TSCP( 104128 ), c3167 );
        c3167 = CONS( _TSCP( 250940 ), c3167 );
        c3167 = CONS( _TSCP( 133152 ), c3167 );
        c3167 = CONS( _TSCP( 27652 ), c3167 );
        c3167 = CONS( _TSCP( 110616 ), c3167 );
        c3167 = CONS( _TSCP( 248200 ), c3167 );
        c3167 = CONS( _TSCP( 136596 ), c3167 );
        c3167 = CONS( _TSCP( 29104 ), c3167 );
        c3167 = CONS( _TSCP( 109996 ), c3167 );
        c3167 = CONS( _TSCP( 235916 ), c3167 );
        c3167 = CONS( _TSCP( 148880 ), c3167 );
        c3167 = CONS( _TSCP( 8628 ), c3167 );
        c3167 = CONS( _TSCP( 130472 ), c3167 );
        c3167 = CONS( _TSCP( 230456 ), c3167 );
        c3167 = CONS( _TSCP( 153636 ), c3167 );
        c3167 = CONS( _TSCP( 15360 ), c3167 );
        c3167 = CONS( _TSCP( 122908 ), c3167 );
        c3167 = CONS( _TSCP( 238304 ), c3167 );
        c3167 = CONS( _TSCP( 163580 ), c3167 );
        c3167 = CONS( _TSCP( 6872 ), c3167 );
        c3167 = CONS( _TSCP( 116420 ), c3167 );
        c3167 = CONS( _TSCP( 245588 ), c3167 );
        c3167 = CONS( _TSCP( 156488 ), c3167 );
        c3167 = CONS( _TSCP( 1900 ), c3167 );
        c3167 = CONS( _TSCP( 121712 ), c3167 );
        c3167 = CONS( _TSCP( 186776 ), c3167 );
        c3167 = CONS( _TSCP( 198020 ), c3167 );
        c3167 = CONS( _TSCP( 90528 ), c3167 );
        c3167 = CONS( _TSCP( 48572 ), c3167 );
        c3167 = CONS( _TSCP( 181292 ), c3167 );
        c3167 = CONS( _TSCP( 202800 ), c3167 );
        c3167 = CONS( _TSCP( 97300 ), c3167 );
        c3167 = CONS( _TSCP( 40968 ), c3167 );
        c3167 = CONS( _TSCP( 189172 ), c3167 );
        c3167 = CONS( _TSCP( 212712 ), c3167 );
        c3167 = CONS( _TSCP( 88780 ), c3167 );
        c3167 = CONS( _TSCP( 34512 ), c3167 );
        c3167 = CONS( _TSCP( 196416 ), c3167 );
        c3167 = CONS( _TSCP( 205660 ), c3167 );
        c3167 = CONS( _TSCP( 83832 ), c3167 );
        c3167 = CONS( _TSCP( 39780 ), c3167 );
        c3167 = CONS( _TSCP( 175940 ), c3167 );
        c3167 = CONS( _TSCP( 226136 ), c3167 );
        c3167 = CONS( _TSCP( 71548 ), c3167 );
        c3167 = CONS( _TSCP( 52064 ), c3167 );
        c3167 = CONS( _TSCP( 176880 ), c3167 );
        c3167 = CONS( _TSCP( 225004 ), c3167 );
        c3167 = CONS( _TSCP( 68296 ), c3167 );
        c3167 = CONS( _TSCP( 54996 ), c3167 );
        c3167 = CONS( _TSCP( 169000 ), c3167 );
        c3167 = CONS( _TSCP( 215092 ), c3167 );
        c3167 = CONS( _TSCP( 76816 ), c3167 );
        c3167 = CONS( _TSCP( 61452 ), c3167 );
        c3167 = CONS( _TSCP( 166300 ), c3167 );
        c3167 = CONS( _TSCP( 218496 ), c3167 );
        c3167 = CONS( _TSCP( 78244 ), c3167 );
        c3167 = CONS( _TSCP( 60856 ), c3167 );
        c3167 = CONS( _TSCP( 144416 ), c3167 );
        c3167 = CONS( _TSCP( 256060 ), c3167 );
        c3167 = CONS( _TSCP( 101400 ), c3167 );
        c3167 = CONS( _TSCP( 20484 ), c3167 );
        c3167 = CONS( _TSCP( 141716 ), c3167 );
        c3167 = CONS( _TSCP( 259464 ), c3167 );
        c3167 = CONS( _TSCP( 102828 ), c3167 );
        c3167 = CONS( _TSCP( 19888 ), c3167 );
        c3167 = CONS( _TSCP( 134988 ), c3167 );
        c3167 = CONS( _TSCP( 250704 ), c3167 );
        c3167 = CONS( _TSCP( 112500 ), c3167 );
        c3167 = CONS( _TSCP( 27496 ), c3167 );
        c3167 = CONS( _TSCP( 135928 ), c3167 );
        c3167 = CONS( _TSCP( 249572 ), c3167 );
        c3167 = CONS( _TSCP( 109248 ), c3167 );
        c3167 = CONS( _TSCP( 30428 ), c3167 );
        c3167 = CONS( _TSCP( 148220 ), c3167 );
        c3167 = CONS( _TSCP( 237280 ), c3167 );
        c3167 = CONS( _TSCP( 129732 ), c3167 );
        c3167 = CONS( _TSCP( 9944 ), c3167 );
        c3167 = CONS( _TSCP( 155464 ), c3167 );
        c3167 = CONS( _TSCP( 230228 ), c3167 );
        c3167 = CONS( _TSCP( 124784 ), c3167 );
        c3167 = CONS( _TSCP( 15212 ), c3167 );
        c3167 = CONS( _TSCP( 162192 ), c3167 );
        c3167 = CONS( _TSCP( 238988 ), c3167 );
        c3167 = CONS( _TSCP( 115112 ), c3167 );
        c3167 = CONS( _TSCP( 7604 ), c3167 );
        c3167 = CONS( _TSCP( 156708 ), c3167 );
        c3167 = CONS( _TSCP( 243768 ), c3167 );
        c3167 = CONS( _TSCP( 121884 ), c3167 );
        c3167 = CONS( _TSCP( 0 ), c3167 );
        c3167 = LISTTOVECTOR( c3167 );
        CONSTANTEXP( ADR( c3167 ) );
        c3166 = CSTRING_TSCP( t3741 );
        CONSTANTEXP( ADR( c3166 ) );
        c3101 = CSTRING_TSCP( t3742 );
        CONSTANTEXP( ADR( c3101 ) );
        c2976 = CSTRING_TSCP( t3743 );
        CONSTANTEXP( ADR( c2976 ) );
        c2970 = CSTRING_TSCP( t3744 );
        CONSTANTEXP( ADR( c2970 ) );
        c2969 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2969 ) );
        c2904 = CSTRING_TSCP( t3745 );
        CONSTANTEXP( ADR( c2904 ) );
        c2903 = CSTRING_TSCP( t3746 );
        CONSTANTEXP( ADR( c2903 ) );
        c2882 = CSTRING_TSCP( t3747 );
        CONSTANTEXP( ADR( c2882 ) );
        c2879 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-SET!" ) );
        CONSTANTEXP( ADR( c2879 ) );
        c2801 = CSTRING_TSCP( t3748 );
        CONSTANTEXP( ADR( c2801 ) );
        c2800 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c2800 ) );
        c2789 = CSTRING_TSCP( t3749 );
        CONSTANTEXP( ADR( c2789 ) );
        c2788 = STRINGTOSYMBOL( CSTRING_TSCP( "INTEGER->CHAR" ) );
        CONSTANTEXP( ADR( c2788 ) );
        c2689 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR<=?" ) );
        CONSTANTEXP( ADR( c2689 ) );
        c2680 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR>=?" ) );
        CONSTANTEXP( ADR( c2680 ) );
        c2669 = CSTRING_TSCP( t3750 );
        CONSTANTEXP( ADR( c2669 ) );
        c2668 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR=?" ) );
        CONSTANTEXP( ADR( c2668 ) );
        c2661 = CSTRING_TSCP( t3751 );
        CONSTANTEXP( ADR( c2661 ) );
        c2640 = CSTRING_TSCP( t3752 );
        CONSTANTEXP( ADR( c2640 ) );
        c2639 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c2639 ) );
        c2632 = CSTRING_TSCP( t3753 );
        CONSTANTEXP( ADR( c2632 ) );
        c2631 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2631 ) );
        c2611 = CSTRING_TSCP( t3754 );
        CONSTANTEXP( ADR( c2611 ) );
        c2610 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2610 ) );
        c2561 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2561 ) );
        c2542 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2542 ) );
        c2508 = CSTRING_TSCP( t3755 );
        CONSTANTEXP( ADR( c2508 ) );
        c2475 = EMPTYLIST;
        c2475 = CONS( t3732, c2475 );
        c2475 = CONS( c3359, c2475 );
        CONSTANTEXP( ADR( c2475 ) );
        c2434 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTOS" ) );
        CONSTANTEXP( ADR( c2434 ) );
        c2421 = STRINGTOSYMBOL( CSTRING_TSCP( "ALIAS" ) );
        CONSTANTEXP( ADR( c2421 ) );
        c2408 = STRINGTOSYMBOL( CSTRING_TSCP( "CALLS" ) );
        CONSTANTEXP( ADR( c2408 ) );
        c2395 = STRINGTOSYMBOL( CSTRING_TSCP( "REFS" ) );
        CONSTANTEXP( ADR( c2395 ) );
        c2382 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2382 ) );
        c2369 = STRINGTOSYMBOL( CSTRING_TSCP( "VALUE" ) );
        CONSTANTEXP( ADR( c2369 ) );
        c2356 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINED" ) );
        CONSTANTEXP( ADR( c2356 ) );
        c2343 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2343 ) );
        c2330 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2330 ) );
        c2317 = STRINGTOSYMBOL( CSTRING_TSCP( "BOUNDID" ) );
        CONSTANTEXP( ADR( c2317 ) );
        c2304 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2304 ) );
        c2291 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2291 ) );
        c2254 = STRINGTOSYMBOL( CSTRING_TSCP( "CNAME" ) );
        CONSTANTEXP( ADR( c2254 ) );
        c2229 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2229 ) );
        c2213 = CSTRING_TSCP( t3756 );
        CONSTANTEXP( ADR( c2213 ) );
        c2212 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2212 ) );
        c2177 = STRINGTOSYMBOL( CSTRING_TSCP( "EXPRESSION-LIST" ) );
        CONSTANTEXP( ADR( c2177 ) );
        c2172 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2172 ) );
        c2169 = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND" ) );
        CONSTANTEXP( ADR( c2169 ) );
        c2150 = EMPTYLIST;
        c2150 = CONS( FALSEVALUE, c2150 );
        c2150 = CONS( TRUEVALUE, c2150 );
        CONSTANTEXP( ADR( c2150 ) );
        c2101 = CSTRING_TSCP( t3757 );
        CONSTANTEXP( ADR( c2101 ) );
        c2099 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2099 ) );
        c2089 = CSTRING_TSCP( t3758 );
        CONSTANTEXP( ADR( c2089 ) );
        c2086 = STRINGTOSYMBOL( CSTRING_TSCP( "UNDEFREF" ) );
        CONSTANTEXP( ADR( c2086 ) );
        c2082 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2082 ) );
        c2078 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2078 ) );
        c2077 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2077 ) );
        c2029 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2029 ) );
}

DEFTSCP( expform_global_2dfree_2dvars_v );
DEFCSTRING( t3759, "GLOBAL-FREE-VARS" );
DEFTSCP( expform_lexical_2dfree_2dvars_v );
DEFCSTRING( t3760, "LEXICAL-FREE-VARS" );
DEFTSCP( expform_und_2dvars_85c10849_v );
DEFCSTRING( t3761, "LEXICAL-BOUND-VARS" );
DEFTSCP( expform_current_2dlambda_2did_v );
DEFCSTRING( t3762, "CURRENT-LAMBDA-ID" );
DEFTSCP( expform_make_2dalpha_2dseq_v );
DEFCSTRING( t3763, "MAKE-ALPHA-SEQ" );
DEFTSCP( expform_expand_2dforms_v );
DEFCSTRING( t3764, "EXPAND-FORMS" );
EXTERNTSCPP( scrt6_eof_2dobject_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt6_eof_2dobject_3f_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( expform_exp_2dform, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_exp_2dform_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( expform_hex28, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_hex28_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( expform_lchexname, XAL1( TSCP ) );
EXTERNTSCP( expform_lchexname_v );

TSCP  expform_expand_2dforms(  )
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3764 );
        X1 = EMPTYLIST;
        X1 = CONS( X1, EMPTYLIST );
        X3 = SYMBOL_VALUE( read_2dtext_v );
        X3 = UNKNOWNCALL( X3, 0 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
L3768:
        X2 = CONS( X2, EMPTYLIST );
        if  ( FALSE( scrt6_eof_2dobject_3f( PAIR_CAR( X2 ) ) )
            )  goto L3769;
        X3 = scrt1_reverse( PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X3 );
        goto L3770;
L3769:
        expform_lexical_2dfree_2dvars_v = EMPTYLIST;
        expform_current_2dlambda_2did_v = c2029;
        X3 = expform_exp_2dform( PAIR_CAR( X2 ), 
                                 expform_exp_2dform_v );
        SETGEN( PAIR_CAR( X2 ), X3 );
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L3772;
        X3 = sc_cons( PAIR_CAR( X2 ), PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X3 );
L3772:
        X3 = SYMBOL_VALUE( read_2dtext_v );
        X3 = UNKNOWNCALL( X3, 0 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        GOBACK( L3768 );
L3770:
        X2 = expform_global_2dfree_2dvars_v;
        X3 = X2;
L3776:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3777;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3781;
        scrt1__24__car_2derror( X3 );
L3781:
        X4 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3785;
        scrt1__24__car_2derror( X4 );
L3785:
        X5 = PAIR_CAR( X4 );
        X7 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3789;
        scrt1__24__car_2derror( X7 );
L3789:
        X6 = PAIR_CAR( X7 );
        X7 = plist_get( X6, c2077 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( c2078 ) ) )  goto L3794;
        if  ( TRUE( plist_get( X6, c2082 ) ) )  goto L3794;
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  plist_get( X6, c2086 ) );
        X7 = SYMBOL_VALUE( report_2dwarning_v );
        X7 = UNKNOWNCALL( X7, 2 );
        VIA( PROCEDURE_CODE( X7 ) )( c2089, 
                                     X5, PROCEDURE_CLOSURE( X7 ) );
        plist_put( X6, c2077, c2029 );
        plist_put( X6, c2082, c2029 );
        X8 = CONS( c2101, EMPTYLIST );
        X9 = expform_lchexname( X5 );
        X7 = scrt3_string_2dappend( CONS( expform_hex28( sc_emptystring, 
                                                         X9 ), 
                                          X8 ) );
        plist_put( X6, c2099, X7 );
        X9 = sc_cons( X6, EMPTYLIST );
        X8 = sc_cons( X5, X9 );
        X7 = X8;
        X8 = SYMBOL_VALUE( quote_2dconstants_v );
        SETGENTL( SYMBOL_VALUE( quote_2dconstants_v ), 
                  sc_cons( X7, X8 ) );
L3794:
        X3 = PAIR_CDR( X3 );
        GOBACK( L3776 );
L3777:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( expform_exp_2dform_v );
DEFCSTRING( t3799, "EXP-FORM" );
EXTERNTSCPP( expform_bound, XAL1( TSCP ) );
EXTERNTSCP( expform_bound_v );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( expform_expand_2derror, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_expand_2derror_v );

TSCP  expform_exp_2dform( e2120, e2121 )
        TSCP  e2120, e2121;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3799 );
        if  ( NOT( AND( EQ( TSCPTAG( e2120 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2120 ), SYMBOLTAG ) ) )
            )  goto L3801;
        POPSTACKTRACE( expform_bound( e2120 ) );
L3801:
        if  ( NEQ( TSCPTAG( e2120 ), FIXNUMTAG ) )  goto L3803;
        X1 = TRUEVALUE;
        goto L3804;
L3803:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( e2120 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( e2120 ), 
                               DOUBLEFLOATTAG ) ) );
L3804:
        if  ( TRUE( X1 ) )  goto L3809;
        if  ( AND( EQ( TSCPTAG( e2120 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2120 ), STRINGTAG ) )
            )  goto L3809;
        if  ( EQ( TSCPIMMEDIATETAG( e2120 ), CHARACTERTAG ) )  goto L3809;
        if  ( TRUE( scrt1_member( e2120, c2150 ) ) )  goto L3809;
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( e2120, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L3820;
        if  ( EQ( TSCPTAG( e2120 ), PAIRTAG ) )  goto L3825;
        scrt1__24__car_2derror( e2120 );
L3825:
        X3 = PAIR_CAR( e2120 );
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L3822;
        X3 = PAIR_CAR( e2120 );
        X2 = plist_get( X3, c2169 );
        goto L3823;
L3822:
        X2 = EMPTYLIST;
L3823:
        if  ( FALSE( X2 ) )  goto L3829;
        X3 = X2;
        goto L3830;
L3829:
        X3 = SYMBOL_VALUE( call_2dexp_v );
L3830:
        X6 = sc_cons( e2121, EMPTYLIST );
        X5 = sc_cons( e2120, X6 );
        X4 = X5;
        POPSTACKTRACE( sc_apply_2dtwo( X3, X4 ) );
L3820:
        POPSTACKTRACE( expform_expand_2derror( sc_emptystring, e2120 ) );
L3809:
        X4 = sc_cons( e2120, EMPTYLIST );
        X3 = sc_cons( c2172, X4 );
        X2 = X3;
        X1 = e2121;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2121, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( expform_exp_2dform_2dlist_v );
DEFCSTRING( t3833, "EXP-FORM-LIST" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  expform_exp_2dform_2dlist( e2175, f2176 )
        TSCP  e2175, f2176;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3833 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e2175, 
                                                  _TSCP( 0 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3835;
        X1 = e2175;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3838:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3839;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3842;
        scrt1__24__car_2derror( X1 );
L3842:
        X7 = PAIR_CAR( X1 );
        X6 = f2176;
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          f2176, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3845;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3838 );
L3845:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3850;
        scdebug_error( c2212, 
                       c2213, CONS( X3, EMPTYLIST ) );
L3850:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3838 );
L3839:
        POPSTACKTRACE( X2 );
L3835:
        POPSTACKTRACE( expform_expand_2derror( c2177, e2175 ) );
}

DEFTSCP( expform_id_2dprintname_v );
DEFCSTRING( t3852, "ID-PRINTNAME" );

TSCP  expform_id_2dprintname( i2226 )
        TSCP  i2226;
{
        PUSHSTACKTRACE( t3852 );
        POPSTACKTRACE( plist_get( i2226, c2229 ) );
}

DEFTSCP( expform_intname_21_e25cd208_v );
DEFCSTRING( t3854, "SET-ID-PRINTNAME!" );

TSCP  expform_intname_21_e25cd208( i2232, n2233 )
        TSCP  i2232, n2233;
{
        PUSHSTACKTRACE( t3854 );
        POPSTACKTRACE( plist_put( i2232, c2229, n2233 ) );
}

DEFTSCP( expform_id_2dvname_v );
DEFCSTRING( t3856, "ID-VNAME" );

TSCP  expform_id_2dvname( i2239 )
        TSCP  i2239;
{
        PUSHSTACKTRACE( t3856 );
        POPSTACKTRACE( plist_get( i2239, c2099 ) );
}

DEFTSCP( expform_set_2did_2dvname_21_v );
DEFCSTRING( t3858, "SET-ID-VNAME!" );

TSCP  expform_set_2did_2dvname_21( i2244, n2245 )
        TSCP  i2244, n2245;
{
        PUSHSTACKTRACE( t3858 );
        POPSTACKTRACE( plist_put( i2244, c2099, n2245 ) );
}

DEFTSCP( expform_id_2dcname_v );
DEFCSTRING( t3860, "ID-CNAME" );

TSCP  expform_id_2dcname( i2251 )
        TSCP  i2251;
{
        PUSHSTACKTRACE( t3860 );
        POPSTACKTRACE( plist_get( i2251, c2254 ) );
}

DEFTSCP( expform_set_2did_2dcname_21_v );
DEFCSTRING( t3862, "SET-ID-CNAME!" );

TSCP  expform_set_2did_2dcname_21( i2257, n2258 )
        TSCP  i2257, n2258;
{
        PUSHSTACKTRACE( t3862 );
        POPSTACKTRACE( plist_put( i2257, c2254, n2258 ) );
}

DEFTSCP( expform_id_2dmodule_v );
DEFCSTRING( t3864, "ID-MODULE" );

TSCP  expform_id_2dmodule( i2264 )
        TSCP  i2264;
{
        PUSHSTACKTRACE( t3864 );
        POPSTACKTRACE( plist_get( i2264, c2082 ) );
}

DEFTSCP( expform_set_2did_2dmodule_21_v );
DEFCSTRING( t3866, "SET-ID-MODULE!" );

TSCP  expform_set_2did_2dmodule_21( i2269, n2270 )
        TSCP  i2269, n2270;
{
        PUSHSTACKTRACE( t3866 );
        POPSTACKTRACE( plist_put( i2269, c2082, n2270 ) );
}

DEFTSCP( expform_id_2duse_v );
DEFCSTRING( t3868, "ID-USE" );

TSCP  expform_id_2duse( i2276 )
        TSCP  i2276;
{
        PUSHSTACKTRACE( t3868 );
        POPSTACKTRACE( plist_get( i2276, c2077 ) );
}

DEFTSCP( expform_set_2did_2duse_21_v );
DEFCSTRING( t3870, "SET-ID-USE!" );

TSCP  expform_set_2did_2duse_21( i2281, t2282 )
        TSCP  i2281, t2282;
{
        PUSHSTACKTRACE( t3870 );
        POPSTACKTRACE( plist_put( i2281, c2077, t2282 ) );
}

DEFTSCP( expform_id_2dtype_v );
DEFCSTRING( t3872, "ID-TYPE" );

TSCP  expform_id_2dtype( i2288 )
        TSCP  i2288;
{
        PUSHSTACKTRACE( t3872 );
        POPSTACKTRACE( plist_get( i2288, c2291 ) );
}

DEFTSCP( expform_set_2did_2dtype_21_v );
DEFCSTRING( t3874, "SET-ID-TYPE!" );

TSCP  expform_set_2did_2dtype_21( i2294, t2295 )
        TSCP  i2294, t2295;
{
        PUSHSTACKTRACE( t3874 );
        POPSTACKTRACE( plist_put( i2294, c2291, t2295 ) );
}

DEFTSCP( expform_id_2ddisplay_v );
DEFCSTRING( t3876, "ID-DISPLAY" );

TSCP  expform_id_2ddisplay( i2301 )
        TSCP  i2301;
{
        PUSHSTACKTRACE( t3876 );
        POPSTACKTRACE( plist_get( i2301, c2304 ) );
}

DEFTSCP( expform_set_2did_2ddisplay_21_v );
DEFCSTRING( t3878, "SET-ID-DISPLAY!" );

TSCP  expform_set_2did_2ddisplay_21( i2307, f2308 )
        TSCP  i2307, f2308;
{
        PUSHSTACKTRACE( t3878 );
        POPSTACKTRACE( plist_put( i2307, c2304, f2308 ) );
}

DEFTSCP( expform_id_2dboundid_v );
DEFCSTRING( t3880, "ID-BOUNDID" );

TSCP  expform_id_2dboundid( i2314 )
        TSCP  i2314;
{
        PUSHSTACKTRACE( t3880 );
        POPSTACKTRACE( plist_get( i2314, c2317 ) );
}

DEFTSCP( expform_set_2did_2dboundid_v );
DEFCSTRING( t3882, "SET-ID-BOUNDID" );

TSCP  expform_set_2did_2dboundid( i2320, v2321 )
        TSCP  i2320, v2321;
{
        PUSHSTACKTRACE( t3882 );
        POPSTACKTRACE( plist_put( i2320, c2317, v2321 ) );
}

DEFTSCP( expform_id_2dlambda_v );
DEFCSTRING( t3884, "ID-LAMBDA" );

TSCP  expform_id_2dlambda( i2327 )
        TSCP  i2327;
{
        PUSHSTACKTRACE( t3884 );
        POPSTACKTRACE( plist_get( i2327, c2330 ) );
}

DEFTSCP( expform_set_2did_2dlambda_21_v );
DEFCSTRING( t3886, "SET-ID-LAMBDA!" );

TSCP  expform_set_2did_2dlambda_21( i2333, l2334 )
        TSCP  i2333, l2334;
{
        PUSHSTACKTRACE( t3886 );
        POPSTACKTRACE( plist_put( i2333, c2330, l2334 ) );
}

DEFTSCP( expform_id_2dexternal_v );
DEFCSTRING( t3888, "ID-EXTERNAL" );

TSCP  expform_id_2dexternal( i2340 )
        TSCP  i2340;
{
        PUSHSTACKTRACE( t3888 );
        POPSTACKTRACE( plist_get( i2340, c2343 ) );
}

DEFTSCP( expform_xternal_21_97042b81_v );
DEFCSTRING( t3890, "SET-ID-EXTERNAL!" );

TSCP  expform_xternal_21_97042b81( i2346, f2347 )
        TSCP  i2346, f2347;
{
        PUSHSTACKTRACE( t3890 );
        POPSTACKTRACE( plist_put( i2346, c2343, f2347 ) );
}

DEFTSCP( expform_id_2ddefined_v );
DEFCSTRING( t3892, "ID-DEFINED" );

TSCP  expform_id_2ddefined( i2353 )
        TSCP  i2353;
{
        PUSHSTACKTRACE( t3892 );
        POPSTACKTRACE( plist_get( i2353, c2356 ) );
}

DEFTSCP( expform_set_2did_2ddefined_21_v );
DEFCSTRING( t3894, "SET-ID-DEFINED!" );

TSCP  expform_set_2did_2ddefined_21( i2359, f2360 )
        TSCP  i2359, f2360;
{
        PUSHSTACKTRACE( t3894 );
        POPSTACKTRACE( plist_put( i2359, c2356, f2360 ) );
}

DEFTSCP( expform_id_2dvalue_v );
DEFCSTRING( t3896, "ID-VALUE" );

TSCP  expform_id_2dvalue( i2366 )
        TSCP  i2366;
{
        PUSHSTACKTRACE( t3896 );
        POPSTACKTRACE( plist_get( i2366, c2369 ) );
}

DEFTSCP( expform_set_2did_2dvalue_21_v );
DEFCSTRING( t3898, "SET-ID-VALUE!" );

TSCP  expform_set_2did_2dvalue_21( i2372, x2373 )
        TSCP  i2372, x2373;
{
        PUSHSTACKTRACE( t3898 );
        POPSTACKTRACE( plist_put( i2372, c2369, x2373 ) );
}

DEFTSCP( expform_id_2dset_21_v );
DEFCSTRING( t3900, "ID-SET!" );

TSCP  expform_id_2dset_21( i2379 )
        TSCP  i2379;
{
        PUSHSTACKTRACE( t3900 );
        POPSTACKTRACE( plist_get( i2379, c2382 ) );
}

DEFTSCP( expform_set_2did_2dset_21_21_v );
DEFCSTRING( t3902, "SET-ID-SET!!" );

TSCP  expform_set_2did_2dset_21_21( i2385, f2386 )
        TSCP  i2385, f2386;
{
        PUSHSTACKTRACE( t3902 );
        POPSTACKTRACE( plist_put( i2385, c2382, f2386 ) );
}

DEFTSCP( expform_id_2drefs_v );
DEFCSTRING( t3904, "ID-REFS" );

TSCP  expform_id_2drefs( i2392 )
        TSCP  i2392;
{
        PUSHSTACKTRACE( t3904 );
        POPSTACKTRACE( plist_get( i2392, c2395 ) );
}

DEFTSCP( expform_set_2did_2drefs_21_v );
DEFCSTRING( t3906, "SET-ID-REFS!" );

TSCP  expform_set_2did_2drefs_21( i2398, c2399 )
        TSCP  i2398, c2399;
{
        PUSHSTACKTRACE( t3906 );
        POPSTACKTRACE( plist_put( i2398, c2395, c2399 ) );
}

DEFTSCP( expform_id_2dcalls_v );
DEFCSTRING( t3908, "ID-CALLS" );

TSCP  expform_id_2dcalls( i2405 )
        TSCP  i2405;
{
        PUSHSTACKTRACE( t3908 );
        POPSTACKTRACE( plist_get( i2405, c2408 ) );
}

DEFTSCP( expform_set_2did_2dcalls_21_v );
DEFCSTRING( t3910, "SET-ID-CALLS!" );

TSCP  expform_set_2did_2dcalls_21( i2411, c2412 )
        TSCP  i2411, c2412;
{
        PUSHSTACKTRACE( t3910 );
        POPSTACKTRACE( plist_put( i2411, c2408, c2412 ) );
}

DEFTSCP( expform_id_2dalias_v );
DEFCSTRING( t3912, "ID-ALIAS" );

TSCP  expform_id_2dalias( i2418 )
        TSCP  i2418;
{
        PUSHSTACKTRACE( t3912 );
        POPSTACKTRACE( plist_get( i2418, c2421 ) );
}

DEFTSCP( expform_set_2did_2dalias_21_v );
DEFCSTRING( t3914, "SET-ID-ALIAS!" );

TSCP  expform_set_2did_2dalias_21( i2424, l2425 )
        TSCP  i2424, l2425;
{
        PUSHSTACKTRACE( t3914 );
        POPSTACKTRACE( plist_put( i2424, c2421, l2425 ) );
}

DEFTSCP( expform_id_2dgotos_v );
DEFCSTRING( t3916, "ID-GOTOS" );

TSCP  expform_id_2dgotos( i2431 )
        TSCP  i2431;
{
        PUSHSTACKTRACE( t3916 );
        POPSTACKTRACE( plist_get( i2431, c2434 ) );
}

DEFTSCP( expform_set_2did_2dgotos_21_v );
DEFCSTRING( t3918, "SET-ID-GOTOS!" );

TSCP  expform_set_2did_2dgotos_21( i2437, c2438 )
        TSCP  i2437, c2438;
{
        PUSHSTACKTRACE( t3918 );
        POPSTACKTRACE( plist_put( i2437, c2434, c2438 ) );
}

DEFTSCP( expform_id_2dundefref_v );
DEFCSTRING( t3920, "ID-UNDEFREF" );

TSCP  expform_id_2dundefref( i2444 )
        TSCP  i2444;
{
        PUSHSTACKTRACE( t3920 );
        POPSTACKTRACE( plist_get( i2444, c2086 ) );
}

DEFTSCP( expform_ndefref_21_c23a600d_v );
DEFCSTRING( t3922, "SET-ID-UNDEFREF!" );

TSCP  expform_ndefref_21_c23a600d( i2449, v2450 )
        TSCP  i2449, v2450;
{
        PUSHSTACKTRACE( t3922 );
        POPSTACKTRACE( plist_put( i2449, c2086, v2450 ) );
}

DEFTSCP( expform_id_2dglobal_v );
DEFCSTRING( t3924, "ID-GLOBAL" );

TSCP  expform_id_2dglobal( i2456 )
        TSCP  i2456;
{
        PUSHSTACKTRACE( t3924 );
        POPSTACKTRACE( plist_get( i2456, c2078 ) );
}

DEFTSCP( expform_set_2did_2dglobal_21_v );
DEFCSTRING( t3926, "SET-ID-GLOBAL!" );

TSCP  expform_set_2did_2dglobal_21( i2461, a2462 )
        TSCP  i2461, a2462;
{
        PUSHSTACKTRACE( t3926 );
        POPSTACKTRACE( plist_put( i2461, c2078, a2462 ) );
}

DEFTSCP( expform_assign_2dknown_2dname_v );
DEFCSTRING( t3928, "ASSIGN-KNOWN-NAME" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );

TSCP  expform_assign_2dknown_2dname( v2468 )
        TSCP  v2468;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3928 );
        X1 = plist_get( v2468, c2077 );
        X2 = plist_get( v2468, c2082 );
        X4 = plist_get( v2468, c2229 );
        X3 = expform_lchexname( X4 );
        if  ( FALSE( scrt1_memq( X1, c2475 ) ) )  goto L3933;
        X4 = expform_lchexname( v2468 );
        if  ( FALSE( plist_get( v2468, c2330 ) ) )  goto L3936;
        X6 = CONS( X4, EMPTYLIST );
        X6 = CONS( c2508, X6 );
        X5 = scrt3_string_2dappend( CONS( SYMBOL_VALUE( module_2dname_v ), 
                                          X6 ) );
        plist_put( v2468, c2254, X5 );
        X6 = CONS( c2101, EMPTYLIST );
        X5 = scrt3_string_2dappend( CONS( X4, X6 ) );
        POPSTACKTRACE( plist_put( v2468, c2099, X5 ) );
L3936:
        POPSTACKTRACE( plist_put( v2468, c2099, X4 ) );
L3933:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2078 ) ) )  goto L3939;
        X4 = plist_get( v2468, c2291 );
        goto L3940;
L3939:
        X4 = FALSEVALUE;
L3940:
        if  ( TRUE( X4 ) )  goto L3942;
        X6 = CONS( c2101, EMPTYLIST );
        X5 = scrt3_string_2dappend( CONS( expform_hex28( X2, X3 ), 
                                          X6 ) );
        plist_put( v2468, c2099, X5 );
        X5 = scrt3_string_2dappend( CONS( expform_hex28( X2, X3 ), 
                                          EMPTYLIST ) );
        POPSTACKTRACE( plist_put( v2468, c2254, X5 ) );
L3942:
        POPSTACKTRACE( X4 );
}

DEFTSCP( expform_name_2da_2dlambda_v );
DEFCSTRING( t3945, "NAME-A-LAMBDA" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  expform_name_2da_2dlambda( n2520, e2521 )
        TSCP  n2520, e2521;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3945 );
        e2521 = CONS( e2521, EMPTYLIST );
        X2 = PAIR_CAR( e2521 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3948;
        X4 = PAIR_CAR( X2 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2542 ) ) );
        goto L3949;
L3948:
        X3 = FALSEVALUE;
L3949:
        if  ( FALSE( X3 ) )  goto L3952;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3955;
        scrt1__24__cdr_2derror( X2 );
L3955:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3958;
        scrt1__24__car_2derror( X4 );
L3958:
        X1 = PAIR_CAR( X4 );
        goto L3953;
L3952:
        X1 = X3;
L3953:
        SETGEN( PAIR_CAR( e2521 ), X1 );
        if  ( FALSE( PAIR_CAR( e2521 ) ) )  goto L3960;
        plist_put( n2520, c2330, PAIR_CAR( e2521 ) );
        POPSTACKTRACE( plist_put( PAIR_CAR( e2521 ), 
                                  c2561, n2520 ) );
L3960:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( expform_vname_v );
DEFCSTRING( t3963, "VNAME" );

TSCP  expform_vname( e2563 )
        TSCP  e2563;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3963 );
        e2563 = CONS( e2563, EMPTYLIST );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( e2563 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( e2563 ) ), 
                            SYMBOLTAG ) ) ) )  goto L3965;
        X1 = plist_get( PAIR_CAR( e2563 ), c2077 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2330 ) ) )  goto L3970;
        if  ( FALSE( plist_get( PAIR_CAR( e2563 ), c2561 ) ) )  goto L3970;
        X1 = plist_get( PAIR_CAR( e2563 ), c2561 );
        SETGEN( PAIR_CAR( e2563 ), X1 );
L3970:
        POPSTACKTRACE( plist_get( PAIR_CAR( e2563 ), c2099 ) );
L3965:
        POPSTACKTRACE( PAIR_CAR( e2563 ) );
}

DEFTSCP( expform_cname_v );
DEFCSTRING( t3972, "CNAME" );

TSCP  expform_cname( e2583 )
        TSCP  e2583;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3972 );
        e2583 = CONS( e2583, EMPTYLIST );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( e2583 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( e2583 ) ), 
                            SYMBOLTAG ) ) ) )  goto L3974;
        X1 = plist_get( PAIR_CAR( e2583 ), c2077 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2330 ) ) )  goto L3979;
        if  ( FALSE( plist_get( PAIR_CAR( e2583 ), c2561 ) ) )  goto L3979;
        X1 = plist_get( PAIR_CAR( e2583 ), c2561 );
        SETGEN( PAIR_CAR( e2583 ), X1 );
L3979:
        POPSTACKTRACE( plist_get( PAIR_CAR( e2583 ), c2254 ) );
L3974:
        POPSTACKTRACE( PAIR_CAR( e2583 ) );
}

DEFTSCP( expform_lchexname_v );
DEFCSTRING( t3981, "LCHEXNAME" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt1_last_2dpair, XAL1( TSCP ) );
EXTERNTSCP( scrt1_last_2dpair_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( expform_char_2d_3edl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( expform_char_2d_3edl_v );

TSCP  expform_lchexname( n2603 )
        TSCP  n2603;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3981 );
        n2603 = CONS( n2603, EMPTYLIST );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( n2603 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( n2603 ) ), 
                            SYMBOLTAG ) ) ) )  goto L3983;
        X2 = PAIR_CAR( n2603 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )  goto L3986;
        scdebug_error( c2610, 
                       c2611, CONS( X2, EMPTYLIST ) );
L3986:
        X1 = SYMBOL_NAME( X2 );
        SETGEN( PAIR_CAR( n2603 ), X1 );
L3983:
        X1 = EMPTYLIST;
        X2 = _TSCP( 0 );
        X4 = sc_cons( _TSCP( 4 ), EMPTYLIST );
        X3 = X4;
L3990:
        X1 = CONS( X1, EMPTYLIST );
        X5 = PAIR_CAR( n2603 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), STRINGTAG ) ) )  goto L3992;
        scdebug_error( c2631, 
                       c2632, CONS( X5, EMPTYLIST ) );
L3992:
        X4 = C_FIXED( STRING_LENGTH( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3996;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( X4 ) ) )  goto L4000;
        goto L4001;
L3996:
        if  ( FALSE( scrt2__3d_2dtwo( X2, X4 ) ) )  goto L4001;
L4000:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4005;
        scrt1__24__cdr_2derror( X3 );
L4005:
        X4 = PAIR_CDR( X3 );
        POPSTACKTRACE( scrt3_list_2d_3estring( X4 ) );
L4001:
        X5 = PAIR_CAR( n2603 );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4009;
        scdebug_error( c2639, 
                       c2640, CONS( X2, EMPTYLIST ) );
L4009:
        X6 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L4015;
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), STRINGTAG ) ) )  goto L4017;
        scdebug_error( c2631, 
                       c2632, CONS( X5, EMPTYLIST ) );
L4017:
        X7 = C_FIXED( STRING_LENGTH( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L4021;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X7 ) ) )  goto L4015;
        goto L4028;
L4021:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X7 ) ) )  goto L4028;
L4015:
        scdebug_error( c2639, 
                       c2661, CONS( X2, EMPTYLIST ) );
L4028:
        X4 = C_CHAR( STRING_CHAR( X5, X2 ) );
        SETGEN( PAIR_CAR( X1 ), X4 );
        X4 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24338 ) ), 
                       CHARACTERTAG ) ) )  goto L4030;
        X5 = CONS( _TSCP( 24338 ), EMPTYLIST );
        scdebug_error( c2668, c2669, CONS( X4, X5 ) );
L4030:
        if  ( NEQ( _S2CINT( X4 ), 
                   _S2CINT( _TSCP( 24338 ) ) ) )  goto L4032;
        X7 = sc_cons( _TSCP( 24338 ), EMPTYLIST );
        X6 = sc_cons( _TSCP( 24338 ), X7 );
        X5 = X6;
        X6 = scrt1_last_2dpair( X3 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4036;
        scdebug_error( c2212, 
                       c2213, CONS( X6, EMPTYLIST ) );
L4036:
        SETGEN( PAIR_CDR( X6 ), X5 );
        goto L4083;
L4032:
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 16658 ) ), 
                       CHARACTERTAG ) ) )  goto L4039;
        X7 = CONS( _TSCP( 16658 ), EMPTYLIST );
        scdebug_error( c2680, c2669, CONS( X6, X7 ) );
L4039:
        X5 = BOOLEAN( GTE( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 16658 ) ) ) );
        if  ( FALSE( X5 ) )  goto L4082;
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23058 ) ), 
                       CHARACTERTAG ) ) )  goto L4046;
        X7 = CONS( _TSCP( 23058 ), EMPTYLIST );
        scdebug_error( c2689, c2669, CONS( X6, X7 ) );
L4046:
        if  ( GT( _S2CINT( X6 ), _S2CINT( _TSCP( 23058 ) ) ) )  goto L4082;
        X12 = PAIR_CAR( X1 );
        if  ( EQ( TSCPIMMEDIATETAG( X12 ), CHARACTERTAG ) )  goto L4051;
        scdebug_error( c2800, 
                       c2801, CONS( X12, EMPTYLIST ) );
L4051:
        X11 = CHAR_FIX( X12 );
        if  ( BITAND( BITOR( _S2CINT( X11 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L4054;
        X10 = _TSCP( IPLUS( _S2CINT( X11 ), 
                            _S2CINT( _TSCP( 128 ) ) ) );
        goto L4055;
L4054:
        X10 = scrt2__2b_2dtwo( X11, _TSCP( 128 ) );
L4055:
        X11 = BOOLEAN( NEQ( TSCPTAG( X10 ), FIXNUMTAG ) );
        if  ( TRUE( X11 ) )  goto L4061;
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4062;
        X12 = BOOLEAN( LT( _S2CINT( X10 ), 
                           _S2CINT( _TSCP( 0 ) ) ) );
        goto L4063;
L4062:
        X12 = scrt2__3c_2dtwo( X10, _TSCP( 0 ) );
L4063:
        if  ( TRUE( X12 ) )  goto L4061;
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L4070;
        if  ( GT( _S2CINT( X10 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L4061;
        goto L4077;
L4070:
        if  ( FALSE( scrt2__3e_2dtwo( X10, _TSCP( 1020 ) ) ) )  goto L4077;
L4061:
        scdebug_error( c2788, 
                       c2789, CONS( X10, EMPTYLIST ) );
L4077:
        X9 = FIX_CHAR( X10 );
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = X8;
        X8 = scrt1_last_2dpair( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L4080;
        scdebug_error( c2212, 
                       c2213, CONS( X8, EMPTYLIST ) );
L4080:
        SETGEN( PAIR_CDR( X8 ), X7 );
        goto L4083;
L4082:
        X7 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24850 ) ), 
                       CHARACTERTAG ) ) )  goto L4085;
        X8 = CONS( _TSCP( 24850 ), EMPTYLIST );
        scdebug_error( c2680, c2669, CONS( X7, X8 ) );
L4085:
        X6 = BOOLEAN( GTE( _S2CINT( X7 ), 
                           _S2CINT( _TSCP( 24850 ) ) ) );
        if  ( FALSE( X6 ) )  goto L4088;
        X7 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 31250 ) ), 
                       CHARACTERTAG ) ) )  goto L4091;
        X8 = CONS( _TSCP( 31250 ), EMPTYLIST );
        scdebug_error( c2689, c2669, CONS( X7, X8 ) );
L4091:
        X5 = BOOLEAN( LTE( _S2CINT( X7 ), 
                           _S2CINT( _TSCP( 31250 ) ) ) );
        goto L4089;
L4088:
        X5 = X6;
L4089:
        if  ( TRUE( X5 ) )  goto L4097;
        X7 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 12306 ) ), 
                       CHARACTERTAG ) ) )  goto L4099;
        X8 = CONS( _TSCP( 12306 ), EMPTYLIST );
        scdebug_error( c2680, c2669, CONS( X7, X8 ) );
L4099:
        X6 = BOOLEAN( GTE( _S2CINT( X7 ), 
                           _S2CINT( _TSCP( 12306 ) ) ) );
        if  ( FALSE( X6 ) )  goto L4122;
        X8 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X8 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 14610 ) ), 
                       CHARACTERTAG ) ) )  goto L4106;
        X9 = CONS( _TSCP( 14610 ), EMPTYLIST );
        scdebug_error( c2689, c2669, CONS( X8, X9 ) );
L4106:
        X7 = BOOLEAN( LTE( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 14610 ) ) ) );
        if  ( FALSE( X7 ) )  goto L4122;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L4113;
        if  ( GT( _S2CINT( X2 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L4097;
        goto L4122;
L4113:
        if  ( TRUE( scrt2__3e_2dtwo( X2, _TSCP( 0 ) ) ) )  goto L4097;
L4122:
        X5 = scrt1_last_2dpair( X3 );
        X7 = expform_char_2d_3edl( PAIR_CAR( X1 ), 
                                   _TSCP( 64 ), _TSCP( 8 ) );
        X6 = sc_cons( _TSCP( 24338 ), X7 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4124;
        scdebug_error( c2212, 
                       c2213, CONS( X5, EMPTYLIST ) );
L4124:
        SETGEN( PAIR_CDR( X5 ), X6 );
        goto L4083;
L4097:
        X6 = sc_cons( PAIR_CAR( X1 ), EMPTYLIST );
        X5 = X6;
        X6 = scrt1_last_2dpair( X3 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4128;
        scdebug_error( c2212, 
                       c2213, CONS( X6, EMPTYLIST ) );
L4128:
        SETGEN( PAIR_CDR( X6 ), X5 );
L4083:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L4130;
        X4 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X2 ) ) );
        goto L4131;
L4130:
        X4 = scrt2__2b_2dtwo( _TSCP( 4 ), X2 );
L4131:
        X2 = X4;
        X1 = PAIR_CAR( X1 );
        GOBACK( L3990 );
}

DEFTSCP( expform_hex28_v );
DEFCSTRING( t4132, "HEX28" );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( expform_crc_2d32x2, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( expform_crc_2d32x2_v );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );
EXTERNTSCPP( scrt3_char_2dnumeric_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dnumeric_3f_v );

TSCP  expform_hex28( m2823, n2824 )
        TSCP  m2823, n2824;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4132 );
        if  ( AND( EQ( TSCPTAG( m2823 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m2823 ), STRINGTAG ) )
            )  goto L4135;
        scdebug_error( c2631, 
                       c2632, CONS( m2823, EMPTYLIST ) );
L4135:
        X2 = C_FIXED( STRING_LENGTH( m2823 ) );
        if  ( AND( EQ( TSCPTAG( n2824 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( n2824 ), STRINGTAG ) )
            )  goto L4138;
        scdebug_error( c2631, 
                       c2632, CONS( n2824, EMPTYLIST ) );
L4138:
        X3 = C_FIXED( STRING_LENGTH( n2824 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L4141;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), _S2CINT( X3 ) ) );
        goto L4142;
L4141:
        X1 = scrt2__2b_2dtwo( X2, X3 );
L4142:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 112 ) ) ), 
                      3 ) )  goto L4145;
        if  ( LTE( _S2CINT( X1 ), _S2CINT( _TSCP( 112 ) ) ) )  goto L4149;
        goto L4150;
L4145:
        if  ( FALSE( scrt2__3c_3d_2dtwo( X1, _TSCP( 112 ) ) )
            )  goto L4150;
L4149:
        if  ( TRUE( scrt1_equal_3f( m2823, sc_emptystring ) )
            )  goto L4153;
        X1 = CONS( n2824, EMPTYLIST );
        X1 = CONS( c2508, X1 );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( m2823, X1 ) ) );
L4153:
        POPSTACKTRACE( n2824 );
L4150:
        X5 = CONS( n2824, EMPTYLIST );
        X4 = scrt3_string_2dappend( CONS( m2823, X5 ) );
        X3 = scrt3_string_2d_3elist( X4 );
        X2 = CONS( expform_crc_2d32x2( X3, _TSCP( 0 ), _TSCP( 0 ) ), 
                   EMPTYLIST );
        X5 = C_FIXED( STRING_LENGTH( n2824 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 40 ) ) ), 
                      3 ) )  goto L4157;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( _TSCP( 40 ) ) ) );
        goto L4158;
L4157:
        X4 = scrt2__2d_2dtwo( X5, _TSCP( 40 ) );
L4158:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L4160;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X4 ) ) )  goto L4162;
        X3 = _TSCP( 0 );
        goto L4161;
L4162:
        X3 = X4;
        goto L4161;
L4160:
        X3 = scrt2_max_2dtwo( _TSCP( 0 ), X4 );
L4161:
        X4 = C_FIXED( STRING_LENGTH( n2824 ) );
        X2 = CONS( scrt3_substring( n2824, X3, X4 ), X2 );
        X5 = C_FIXED( STRING_LENGTH( m2823 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 36 ) ) ), 
                      3 ) )  goto L4167;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( _TSCP( 36 ) ) ) );
        goto L4168;
L4167:
        X4 = scrt2__2d_2dtwo( X5, _TSCP( 36 ) );
L4168:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L4170;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X4 ) ) )  goto L4172;
        X3 = _TSCP( 0 );
        goto L4171;
L4172:
        X3 = X4;
        goto L4171;
L4170:
        X3 = scrt2_max_2dtwo( _TSCP( 0 ), X4 );
L4171:
        X4 = C_FIXED( STRING_LENGTH( m2823 ) );
        X2 = CONS( scrt3_substring( m2823, X3, X4 ), X2 );
        X1 = scrt6_format( EMPTYLIST, CONS( c2904, X2 ) );
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L4179;
        scdebug_error( c2639, 
                       c2640, CONS( _TSCP( 0 ), EMPTYLIST ) );
L4179:
        X3 = BOOLEAN( LT( _S2CINT( _TSCP( 0 ) ), 0 ) );
        if  ( TRUE( X3 ) )  goto L4185;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), STRINGTAG ) ) )  goto L4187;
        scdebug_error( c2631, 
                       c2632, CONS( X1, EMPTYLIST ) );
L4187:
        X4 = C_FIXED( STRING_LENGTH( X1 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L4191;
        if  ( GTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X4 ) ) )  goto L4185;
        goto L4198;
L4191:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 0 ), X4 ) ) )  goto L4198;
L4185:
        scdebug_error( c2639, 
                       c2661, CONS( _TSCP( 0 ), EMPTYLIST ) );
L4198:
        X2 = C_CHAR( STRING_CHAR( X1, _TSCP( 0 ) ) );
        if  ( FALSE( scrt3_char_2dnumeric_3f( X2 ) ) )  goto L4176;
        if  ( EQ( TSCPIMMEDIATETAG( _TSCP( 24338 ) ), 
                  CHARACTERTAG ) )  goto L4200;
        scdebug_error( c2879, 
                       c2882, 
                       CONS( _TSCP( 24338 ), EMPTYLIST ) );
L4200:
        X2 = BOOLEAN( LT( _S2CINT( _TSCP( 0 ) ), 0 ) );
        if  ( TRUE( X2 ) )  goto L4206;
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), STRINGTAG ) ) )  goto L4208;
        scdebug_error( c2631, 
                       c2632, CONS( X1, EMPTYLIST ) );
L4208:
        X3 = C_FIXED( STRING_LENGTH( X1 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L4212;
        if  ( GTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X3 ) ) )  goto L4206;
        goto L4219;
L4212:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 0 ), X3 ) ) )  goto L4219;
L4206:
        scdebug_error( c2879, c2903, EMPTYLIST );
L4219:
        STRING_CHAR( X1, _TSCP( 0 ) ) = CHAR_C( _TSCP( 24338 ) );
L4176:
        POPSTACKTRACE( X1 );
}

DEFTSCP( expform_crc_2d32x2_v );
DEFCSTRING( t4220, "CRC-32X2" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );
EXTERNTSCPP( scrt2_quotient, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_quotient_v );
EXTERNTSCPP( scrt4_bit_2dlsh, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dlsh_v );
EXTERNTSCPP( scrt4_bit_2dxor, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dxor_v );
EXTERNTSCPP( scrt4_bit_2drsh, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2drsh_v );
EXTERNTSCP( expform_t_2dleft_v );
EXTERNTSCPP( scrt4_bit_2dor, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dor_v );
EXTERNTSCPP( scrt4_bit_2dand, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_bit_2dand_v );
EXTERNTSCP( expform_t_2dright_v );

TSCP  expform_crc_2d32x2( c2949, c2950, c2951 )
        TSCP  c2949, c2950, c2951;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4220 );
L4221:
        if  ( NEQ( _S2CUINT( c2949 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4222;
        X1 = EMPTYLIST;
        X2 = c2950;
        X3 = c2951;
L4225:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4226;
        X4 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L4227;
L4226:
        X4 = scrt2_zero_3f( X2 );
L4227:
        if  ( FALSE( X4 ) )  goto L4241;
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L4233;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L4237;
        goto L4241;
L4233:
        if  ( FALSE( scrt2_zero_3f( X3 ) ) )  goto L4241;
L4237:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L4242;
        POPSTACKTRACE( scrt3_list_2d_3estring( X1 ) );
L4242:
        POPSTACKTRACE( c3166 );
L4241:
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( _TSCP( 64 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L4250;
        if  ( EQ( _S2CUINT( _TSCP( 64 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4250;
        X6 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( _TSCP( 64 ) ) ) );
        goto L4251;
L4250:
        X6 = scrt2_remainder( X3, _TSCP( 64 ) );
L4251:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L4253;
        scdebug_error( c2639, 
                       c2640, CONS( X6, EMPTYLIST ) );
L4253:
        X7 = BOOLEAN( LT( _S2CINT( X6 ), 0 ) );
        if  ( TRUE( X7 ) )  goto L4259;
        if  ( AND( EQ( TSCPTAG( c3101 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c3101 ), STRINGTAG ) )
            )  goto L4261;
        scdebug_error( c2631, 
                       c2632, CONS( c3101, EMPTYLIST ) );
L4261:
        X8 = C_FIXED( STRING_LENGTH( c3101 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L4265;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( X8 ) ) )  goto L4259;
        goto L4272;
L4265:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, X8 ) ) )  goto L4272;
L4259:
        scdebug_error( c2639, 
                       c2661, CONS( X6, EMPTYLIST ) );
L4272:
        X5 = C_CHAR( STRING_CHAR( c3101, X6 ) );
        X4 = sc_cons( X5, X1 );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( _TSCP( 64 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L4279;
        if  ( EQ( _S2CUINT( _TSCP( 64 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4279;
        X5 = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                _S2CINT( _TSCP( 64 ) ) ) );
        goto L4280;
L4279:
        X5 = scrt2_quotient( X2, _TSCP( 64 ) );
L4280:
        X8 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( _TSCP( 64 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X8 ) )  goto L4287;
        if  ( EQ( _S2CUINT( _TSCP( 64 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4287;
        X7 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( _TSCP( 64 ) ) ) );
        goto L4288;
L4287:
        X7 = scrt2_remainder( X2, _TSCP( 64 ) );
L4288:
        X6 = scrt4_bit_2dlsh( X7, _TSCP( 48 ) );
        X8 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( _TSCP( 64 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X8 ) )  goto L4295;
        if  ( EQ( _S2CUINT( _TSCP( 64 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4295;
        X7 = C_FIXED( QUOTIENT( _S2CINT( X3 ), 
                                _S2CINT( _TSCP( 64 ) ) ) );
        goto L4296;
L4295:
        X7 = scrt2_quotient( X3, _TSCP( 64 ) );
L4296:
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L4298;
        X3 = _TSCP( IPLUS( _S2CINT( X6 ), _S2CINT( X7 ) ) );
        goto L4299;
L4298:
        X3 = scrt2__2b_2dtwo( X6, X7 );
L4299:
        X2 = X5;
        X1 = X4;
        GOBACK( L4225 );
L4222:
        if  ( EQ( TSCPTAG( c2949 ), PAIRTAG ) )  goto L4301;
        scrt1__24__car_2derror( c2949 );
L4301:
        X2 = PAIR_CAR( c2949 );
        if  ( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ) )  goto L4304;
        scdebug_error( c2800, 
                       c2801, CONS( X2, EMPTYLIST ) );
L4304:
        X1 = CHAR_FIX( X2 );
        X2 = PAIR_CDR( c2949 );
        X4 = scrt4_bit_2drsh( c2950, _TSCP( 32 ) );
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2951 ), 
                                          _S2CINT( _TSCP( 1024 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L4314;
        if  ( EQ( _S2CUINT( _TSCP( 1024 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4314;
        X6 = _TSCP( REMAINDER( _S2CINT( c2951 ), 
                               _S2CINT( _TSCP( 1024 ) ) ) );
        goto L4315;
L4314:
        X6 = scrt2_remainder( c2951, _TSCP( 1024 ) );
L4315:
        X7 = expform_t_2dleft_v;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L4317;
        scdebug_error( c2969, 
                       c2970, CONS( X7, EMPTYLIST ) );
L4317:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L4319;
        scdebug_error( c2969, 
                       c2640, CONS( X6, EMPTYLIST ) );
L4319:
        if  ( LT( _S2CUINT( FIXED_C( X6 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L4321;
        scdebug_error( c2969, 
                       c2976, CONS( X6, EMPTYLIST ) );
L4321:
        X5 = CONS( VECTOR_ELEMENT( X7, X6 ), EMPTYLIST );
        X6 = expform_t_2dleft_v;
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L4324;
        scdebug_error( c2969, 
                       c2970, CONS( X6, EMPTYLIST ) );
L4324:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L4326;
        scdebug_error( c2969, 
                       c2640, CONS( X1, EMPTYLIST ) );
L4326:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L4328;
        scdebug_error( c2969, 
                       c2976, CONS( X1, EMPTYLIST ) );
L4328:
        X3 = scrt4_bit_2dxor( X4, 
                              CONS( VECTOR_ELEMENT( X6, X1 ), 
                                    X5 ) );
        X6 = scrt4_bit_2dand( c2950, 
                              CONS( _TSCP( 1020 ), EMPTYLIST ) );
        X5 = scrt4_bit_2dlsh( X6, _TSCP( 32 ) );
        X4 = scrt4_bit_2dor( X5, 
                             CONS( scrt4_bit_2drsh( c2951, _TSCP( 32 ) ), 
                                   EMPTYLIST ) );
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2951 ), 
                                          _S2CINT( _TSCP( 1024 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L4336;
        if  ( EQ( _S2CUINT( _TSCP( 1024 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4336;
        X6 = _TSCP( REMAINDER( _S2CINT( c2951 ), 
                               _S2CINT( _TSCP( 1024 ) ) ) );
        goto L4337;
L4336:
        X6 = scrt2_remainder( c2951, _TSCP( 1024 ) );
L4337:
        X7 = expform_t_2dright_v;
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L4339;
        scdebug_error( c2969, 
                       c2970, CONS( X7, EMPTYLIST ) );
L4339:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L4341;
        scdebug_error( c2969, 
                       c2640, CONS( X6, EMPTYLIST ) );
L4341:
        if  ( LT( _S2CUINT( FIXED_C( X6 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L4343;
        scdebug_error( c2969, 
                       c2976, CONS( X6, EMPTYLIST ) );
L4343:
        X5 = CONS( VECTOR_ELEMENT( X7, X6 ), EMPTYLIST );
        X6 = expform_t_2dright_v;
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L4346;
        scdebug_error( c2969, 
                       c2970, CONS( X6, EMPTYLIST ) );
L4346:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L4348;
        scdebug_error( c2969, 
                       c2976, CONS( X1, EMPTYLIST ) );
L4348:
        c2951 = scrt4_bit_2dxor( X4, 
                                 CONS( VECTOR_ELEMENT( X6, X1 ), 
                                       X5 ) );
        c2950 = X3;
        c2949 = X2;
        GOBACK( L4221 );
}

DEFTSCP( expform_t_2dleft_v );
DEFCSTRING( t4350, "T-LEFT" );
DEFTSCP( expform_t_2dright_v );
DEFCSTRING( t4351, "T-RIGHT" );
DEFTSCP( expform_char_2d_3edl_v );
DEFCSTRING( t4352, "CHAR->DL" );

TSCP  expform_char_2d_3edl( c3170, b3171, l3172 )
        TSCP  c3170, b3171, l3172;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4352 );
        c3170 = CONS( c3170, EMPTYLIST );
        l3172 = CONS( l3172, EMPTYLIST );
        X2 = PAIR_CAR( c3170 );
        if  ( EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ) )  goto L4355;
        scdebug_error( c2800, 
                       c2801, CONS( X2, EMPTYLIST ) );
L4355:
        X1 = CHAR_FIX( X2 );
        SETGEN( PAIR_CAR( c3170 ), X1 );
        X1 = EMPTYLIST;
L4358:
        X1 = CONS( X1, EMPTYLIST );
        X2 = PAIR_CAR( l3172 );
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L4361;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L4365;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4361:
        if  ( FALSE( scrt2_zero_3f( X2 ) ) )  goto L4365;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4365:
        X5 = PAIR_CAR( c3170 );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( b3171 ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L4376;
        if  ( EQ( _S2CUINT( b3171 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4376;
        X4 = _TSCP( REMAINDER( _S2CINT( X5 ), 
                               _S2CINT( b3171 ) ) );
        goto L4377;
L4376:
        X4 = scrt2_remainder( X5, b3171 );
L4377:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L4379;
        scdebug_error( c2639, 
                       c2640, CONS( X4, EMPTYLIST ) );
L4379:
        X5 = BOOLEAN( LT( _S2CINT( X4 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L4385;
        if  ( AND( EQ( TSCPTAG( c3101 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( c3101 ), STRINGTAG ) )
            )  goto L4387;
        scdebug_error( c2631, 
                       c2632, CONS( c3101, EMPTYLIST ) );
L4387:
        X6 = C_FIXED( STRING_LENGTH( c3101 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L4391;
        if  ( GTE( _S2CINT( X4 ), _S2CINT( X6 ) ) )  goto L4385;
        goto L4398;
L4391:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X4, X6 ) ) )  goto L4398;
L4385:
        scdebug_error( c2639, 
                       c2661, CONS( X4, EMPTYLIST ) );
L4398:
        X3 = C_CHAR( STRING_CHAR( c3101, X4 ) );
        X2 = sc_cons( X3, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X2 );
        X3 = PAIR_CAR( c3170 );
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( b3171 ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L4406;
        if  ( EQ( _S2CUINT( b3171 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L4406;
        X2 = C_FIXED( QUOTIENT( _S2CINT( X3 ), 
                                _S2CINT( b3171 ) ) );
        goto L4407;
L4406:
        X2 = scrt2_quotient( X3, b3171 );
L4407:
        SETGEN( PAIR_CAR( c3170 ), X2 );
        X3 = PAIR_CAR( l3172 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4409;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L4410;
L4409:
        X2 = scrt2__2d_2dtwo( X3, _TSCP( 4 ) );
L4410:
        SETGEN( PAIR_CAR( l3172 ), X2 );
        X1 = PAIR_CAR( X1 );
        GOBACK( L4358 );
}

DEFTSCP( expform_newv_v );
DEFCSTRING( t4411, "NEWV" );
EXTERNTSCPP( expform_make_2dalpha, XAL1( TSCP ) );
EXTERNTSCP( expform_make_2dalpha_v );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );

TSCP  expform_newv( v3250, p3251 )
        TSCP  v3250, p3251;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4411 );
        X1 = plist_get( v3250, c2078 );
        X3 = scrt1_memq( c2077, p3251 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4416;
        scrt1__24__cdr_2derror( X3 );
L4416:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4419;
        scrt1__24__car_2derror( X4 );
L4419:
        X2 = PAIR_CAR( X4 );
        X3 = EMPTYLIST;
        X3 = CONS( X3, EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L4447;
        if  ( FALSE( scrt1_memq( X2, c3262 ) ) )  goto L4447;
        if  ( FALSE( plist_get( X1, c2082 ) ) )  goto L4442;
        X4 = plist_get( X1, c2077 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c3279 ) ) )  goto L4434;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2078 ) ) )  goto L4442;
L4434:
        if  ( FALSE( plist_get( X1, c2356 ) ) )  goto L4438;
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        VIA( PROCEDURE_CODE( X4 ) )( c3297, 
                                     v3250, 
                                     PROCEDURE_CLOSURE( X4 ) );
        goto L4442;
L4438:
        X4 = plist_get( X1, c2082 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( c2029 ) ) )  goto L4442;
        X4 = plist_get( X1, c2082 );
        X5 = SYMBOL_VALUE( module_2dname_v );
        if  ( TRUE( scrt1_equal_3f( X4, X5 ) ) )  goto L4442;
        X4 = SYMBOL_VALUE( report_2dwarning_v );
        X4 = UNKNOWNCALL( X4, 2 );
        VIA( PROCEDURE_CODE( X4 ) )( c3297, 
                                     v3250, 
                                     PROCEDURE_CLOSURE( X4 ) );
L4442:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2078 ) ) )  goto L4444;
        X4 = X1;
        SETGEN( PAIR_CAR( X3 ), X4 );
        plist_put( PAIR_CAR( X3 ), c2330, EMPTYLIST );
        plist_put( PAIR_CAR( X3 ), c2082, EMPTYLIST );
        plist_put( PAIR_CAR( X3 ), c2099, EMPTYLIST );
        plist_put( PAIR_CAR( X3 ), c2254, EMPTYLIST );
        goto L4448;
L4444:
        X4 = expform_make_2dalpha( v3250 );
        SETGEN( PAIR_CAR( X3 ), X4 );
        goto L4448;
L4447:
        X4 = expform_make_2dalpha( v3250 );
        SETGEN( PAIR_CAR( X3 ), X4 );
L4448:
        plist_put( PAIR_CAR( X3 ), c2229, v3250 );
        X4 = p3251;
L4450:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4451;
        X5 = plist_get( PAIR_CAR( X3 ), c2077 );
        if  ( FALSE( scrt1_memv( X5, c3355 ) ) )  goto L4455;
        plist_put( v3250, c2078, PAIR_CAR( X3 ) );
        if  ( EQ( _S2CUINT( PAIR_CAR( X3 ) ), 
                  _S2CUINT( X1 ) ) )  goto L4464;
        X8 = sc_cons( PAIR_CAR( X3 ), EMPTYLIST );
        X7 = sc_cons( v3250, X8 );
        X6 = X7;
        expform_global_2dfree_2dvars_v = sc_cons( X6, 
                                                  expform_global_2dfree_2dvars_v );
        goto L4464;
L4455:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c3359 ) ) )  goto L4461;
        X8 = sc_cons( PAIR_CAR( X3 ), EMPTYLIST );
        X7 = sc_cons( v3250, X8 );
        X6 = X7;
        expform_und_2dvars_85c10849_v = sc_cons( X6, 
                                                 expform_und_2dvars_85c10849_v );
        goto L4464;
L4461:
        if  ( FALSE( scrt1_memv( X5, c3360 ) ) )  goto L4464;
        X7 = SYMBOL_VALUE( downshift_v );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( PAIR_CAR( X3 ), 
                                          PROCEDURE_CLOSURE( X7 ) );
        plist_put( PAIR_CAR( X3 ), 
                   c2229, PAIR_CAR( X3 ) );
        X7 = plist_get( PAIR_CAR( X3 ), c2077 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( c2330 ) ) )  goto L4467;
        X8 = SYMBOL_VALUE( module_2dname_v );
        X7 = expform_hex28( X8, X6 );
        plist_put( PAIR_CAR( X3 ), c2254, X7 );
        goto L4468;
L4467:
        X7 = expform_hex28( sc_emptystring, X6 );
        plist_put( PAIR_CAR( X3 ), c2254, X7 );
L4468:
        X7 = expform_hex28( sc_emptystring, X6 );
        plist_put( PAIR_CAR( X3 ), c2099, X7 );
L4464:
        POPSTACKTRACE( PAIR_CAR( X3 ) );
L4451:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4471;
        scrt1__24__car_2derror( X4 );
L4471:
        X5 = PAIR_CAR( X4 );
        X7 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4475;
        scrt1__24__car_2derror( X7 );
L4475:
        X6 = PAIR_CAR( X7 );
        plist_put( PAIR_CAR( X3 ), X5, X6 );
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4479;
        scrt1__24__cdr_2derror( X5 );
L4479:
        X4 = PAIR_CDR( X5 );
        GOBACK( L4450 );
}

DEFTSCP( expform_make_2dalpha_v );
DEFCSTRING( t4481, "MAKE-ALPHA" );
EXTERNTSCPP( sc_string_2d_3esymbol, XAL1( TSCP ) );
EXTERNTSCP( sc_string_2d_3esymbol_v );

TSCP  expform_make_2dalpha( v3407 )
        TSCP  v3407;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4481 );
L4482:
        if  ( AND( EQ( TSCPTAG( v3407 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v3407 ), SYMBOLTAG ) )
            )  goto L4484;
        scdebug_error( c2610, 
                       c2611, CONS( v3407, EMPTYLIST ) );
L4484:
        X2 = SYMBOL_NAME( v3407 );
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L4487;
        scdebug_error( c2639, 
                       c2640, CONS( _TSCP( 0 ), EMPTYLIST ) );
L4487:
        X3 = BOOLEAN( LT( _S2CINT( _TSCP( 0 ) ), 0 ) );
        if  ( TRUE( X3 ) )  goto L4493;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )  goto L4495;
        scdebug_error( c2631, 
                       c2632, CONS( X2, EMPTYLIST ) );
L4495:
        X4 = C_FIXED( STRING_LENGTH( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L4499;
        if  ( GTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X4 ) ) )  goto L4493;
        goto L4506;
L4499:
        if  ( FALSE( scrt2__3e_3d_2dtwo( _TSCP( 0 ), X4 ) ) )  goto L4506;
L4493:
        scdebug_error( c2639, 
                       c2661, CONS( _TSCP( 0 ), EMPTYLIST ) );
L4506:
        X1 = C_CHAR( STRING_CHAR( X2, _TSCP( 0 ) ) );
        X4 = CONS( expform_make_2dalpha_2dseq_v, EMPTYLIST );
        X4 = CONS( X1, X4 );
        X3 = scrt6_format( EMPTYLIST, CONS( c3420, X4 ) );
        X2 = sc_string_2d_3esymbol( X3 );
        X3 = expform_make_2dalpha_2dseq_v;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4510;
        X4 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L4511;
L4510:
        X4 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L4511:
        expform_make_2dalpha_2dseq_v = X4;
        if  ( TRUE( plist_get( X2, c2229 ) ) )  GOBACK( L4482 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( expform_bound_v );
DEFCSTRING( t4514, "BOUND" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );

TSCP  expform_bound( v3451 )
        TSCP  v3451;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4514 );
        X1 = scrt1_assq( v3451, expform_und_2dvars_85c10849_v );
        if  ( FALSE( X1 ) )  goto L4517;
        X2 = X1;
        goto L4518;
L4517:
        X2 = scrt1_assq( v3451, expform_lexical_2dfree_2dvars_v );
L4518:
        X2 = CONS( X2, EMPTYLIST );
        X4 = PAIR_CAR( X2 );
        if  ( FALSE( X4 ) )  goto L4521;
        X3 = X4;
        goto L4522;
L4521:
        X3 = plist_get( v3451, c2078 );
L4522:
        if  ( FALSE( X1 ) )  goto L4524;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4527;
        scrt1__24__cdr_2derror( X1 );
L4527:
        X4 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4530;
        scrt1__24__car_2derror( X4 );
L4530:
        POPSTACKTRACE( PAIR_CAR( X4 ) );
L4524:
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L4532;
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4537;
        scrt1__24__cdr_2derror( X5 );
L4537:
        X6 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4540;
        scrt1__24__car_2derror( X6 );
L4540:
        X4 = PAIR_CAR( X6 );
        SETGEN( PAIR_CAR( X2 ), X4 );
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L4532:
        if  ( FALSE( X3 ) )  goto L4542;
        X4 = plist_get( X3, c2077 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2029 ) ) )  goto L4547;
        X4 = SYMBOL_VALUE( find_2dquote_2dconstant_v );
        X4 = UNKNOWNCALL( X4, 2 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X4 ) )( v3451, 
                                                 c2029, 
                                                 PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L4547;
        X6 = sc_cons( X3, EMPTYLIST );
        X5 = sc_cons( v3451, X6 );
        X4 = X5;
        X5 = SYMBOL_VALUE( quote_2dconstants_v );
        SETGENTL( SYMBOL_VALUE( quote_2dconstants_v ), 
                  sc_cons( X4, X5 ) );
L4547:
        POPSTACKTRACE( X3 );
L4542:
        X4 = CONS( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                   EMPTYLIST );
        X4 = CONS( c2086, X4 );
        X4 = CONS( c2078, X4 );
        POPSTACKTRACE( expform_newv( v3451, 
                                     CONS( c2077, X4 ) ) );
}

DEFTSCP( expform_expand_2derror_v );
DEFCSTRING( t4550, "EXPAND-ERROR" );

TSCP  expform_expand_2derror( f3503, e3504 )
        TSCP  f3503, e3504;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4550 );
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 4 );
        VIA( PROCEDURE_CODE( X1 ) )( c3505, 
                                     f3503, 
                                     c3506, 
                                     e3504, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( c3507 );
}

void scrt4__init();
void scrt2__init();
void scdebug__init();
void scrt3__init();
void plist__init();
void scrt1__init();
void scrt6__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        scrt2__init();
        scdebug__init();
        scrt3__init();
        plist__init();
        scrt1__init();
        scrt6__init();
        MAXDISPLAY( 0 );
}

void  expform__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(expform SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3759, 
                       ADR( expform_global_2dfree_2dvars_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3760, 
                       ADR( expform_lexical_2dfree_2dvars_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3761, 
                       ADR( expform_und_2dvars_85c10849_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3762, 
                       ADR( expform_current_2dlambda_2did_v ), 
                       c2029 );
        INITIALIZEVAR( t3763, 
                       ADR( expform_make_2dalpha_2dseq_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3764, 
                       ADR( expform_expand_2dforms_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      expform_expand_2dforms, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3799, 
                       ADR( expform_exp_2dform_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_exp_2dform, EMPTYLIST ) );
        INITIALIZEVAR( t3833, 
                       ADR( expform_exp_2dform_2dlist_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_exp_2dform_2dlist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3852, 
                       ADR( expform_id_2dprintname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dprintname, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3854, 
                       ADR( expform_intname_21_e25cd208_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_intname_21_e25cd208, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3856, 
                       ADR( expform_id_2dvname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dvname, EMPTYLIST ) );
        INITIALIZEVAR( t3858, 
                       ADR( expform_set_2did_2dvname_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dvname_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3860, 
                       ADR( expform_id_2dcname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dcname, EMPTYLIST ) );
        INITIALIZEVAR( t3862, 
                       ADR( expform_set_2did_2dcname_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dcname_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3864, 
                       ADR( expform_id_2dmodule_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dmodule, EMPTYLIST ) );
        INITIALIZEVAR( t3866, 
                       ADR( expform_set_2did_2dmodule_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dmodule_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3868, 
                       ADR( expform_id_2duse_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2duse, EMPTYLIST ) );
        INITIALIZEVAR( t3870, 
                       ADR( expform_set_2did_2duse_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2duse_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3872, 
                       ADR( expform_id_2dtype_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dtype, EMPTYLIST ) );
        INITIALIZEVAR( t3874, 
                       ADR( expform_set_2did_2dtype_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dtype_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3876, 
                       ADR( expform_id_2ddisplay_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2ddisplay, EMPTYLIST ) );
        INITIALIZEVAR( t3878, 
                       ADR( expform_set_2did_2ddisplay_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2ddisplay_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3880, 
                       ADR( expform_id_2dboundid_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dboundid, EMPTYLIST ) );
        INITIALIZEVAR( t3882, 
                       ADR( expform_set_2did_2dboundid_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dboundid, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3884, 
                       ADR( expform_id_2dlambda_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dlambda, EMPTYLIST ) );
        INITIALIZEVAR( t3886, 
                       ADR( expform_set_2did_2dlambda_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dlambda_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3888, 
                       ADR( expform_id_2dexternal_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dexternal, EMPTYLIST ) );
        INITIALIZEVAR( t3890, 
                       ADR( expform_xternal_21_97042b81_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_xternal_21_97042b81, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3892, 
                       ADR( expform_id_2ddefined_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2ddefined, EMPTYLIST ) );
        INITIALIZEVAR( t3894, 
                       ADR( expform_set_2did_2ddefined_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2ddefined_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3896, 
                       ADR( expform_id_2dvalue_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dvalue, EMPTYLIST ) );
        INITIALIZEVAR( t3898, 
                       ADR( expform_set_2did_2dvalue_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dvalue_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3900, 
                       ADR( expform_id_2dset_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dset_21, EMPTYLIST ) );
        INITIALIZEVAR( t3902, 
                       ADR( expform_set_2did_2dset_21_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dset_21_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3904, 
                       ADR( expform_id_2drefs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2drefs, EMPTYLIST ) );
        INITIALIZEVAR( t3906, 
                       ADR( expform_set_2did_2drefs_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2drefs_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3908, 
                       ADR( expform_id_2dcalls_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dcalls, EMPTYLIST ) );
        INITIALIZEVAR( t3910, 
                       ADR( expform_set_2did_2dcalls_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dcalls_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3912, 
                       ADR( expform_id_2dalias_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dalias, EMPTYLIST ) );
        INITIALIZEVAR( t3914, 
                       ADR( expform_set_2did_2dalias_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dalias_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3916, 
                       ADR( expform_id_2dgotos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dgotos, EMPTYLIST ) );
        INITIALIZEVAR( t3918, 
                       ADR( expform_set_2did_2dgotos_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dgotos_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3920, 
                       ADR( expform_id_2dundefref_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dundefref, EMPTYLIST ) );
        INITIALIZEVAR( t3922, 
                       ADR( expform_ndefref_21_c23a600d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_ndefref_21_c23a600d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3924, 
                       ADR( expform_id_2dglobal_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_id_2dglobal, EMPTYLIST ) );
        INITIALIZEVAR( t3926, 
                       ADR( expform_set_2did_2dglobal_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_set_2did_2dglobal_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3928, 
                       ADR( expform_assign_2dknown_2dname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_assign_2dknown_2dname, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3945, 
                       ADR( expform_name_2da_2dlambda_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_name_2da_2dlambda, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3963, 
                       ADR( expform_vname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, expform_vname, EMPTYLIST ) );
        INITIALIZEVAR( t3972, 
                       ADR( expform_cname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, expform_cname, EMPTYLIST ) );
        INITIALIZEVAR( t3981, 
                       ADR( expform_lchexname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_lchexname, EMPTYLIST ) );
        INITIALIZEVAR( t4132, 
                       ADR( expform_hex28_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, expform_hex28, EMPTYLIST ) );
        INITIALIZEVAR( t4220, 
                       ADR( expform_crc_2d32x2_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      expform_crc_2d32x2, EMPTYLIST ) );
        INITIALIZEVAR( t4350, 
                       ADR( expform_t_2dleft_v ), c3167 );
        INITIALIZEVAR( t4351, 
                       ADR( expform_t_2dright_v ), c3168 );
        INITIALIZEVAR( t4352, 
                       ADR( expform_char_2d_3edl_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      expform_char_2d_3edl, EMPTYLIST ) );
        INITIALIZEVAR( t4411, 
                       ADR( expform_newv_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, expform_newv, EMPTYLIST ) );
        INITIALIZEVAR( t4481, 
                       ADR( expform_make_2dalpha_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      expform_make_2dalpha, EMPTYLIST ) );
        INITIALIZEVAR( t4514, 
                       ADR( expform_bound_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, expform_bound, EMPTYLIST ) );
        INITIALIZEVAR( t4550, 
                       ADR( expform_expand_2derror_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      expform_expand_2derror, 
                                      EMPTYLIST ) );
        return;
}
