
/* SCHEME->C */

#include <objects.h>

DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( global_2dlap_2dcode_v );
DEFSTATICTSCP( c_2dinclude_2dfile_v );
DEFSTATICTSCP( main_2dprogram_2dname_v );
DEFSTATICTSCP( heap_2dsize_v );
DEFSTATICTSCP( module_2dname_v );
DEFSTATICTSCP( scc_2dversion_v );
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( _24define_2dgenc_v );
DEFSTATICTSCP( _24if_2dgenc_v );
DEFSTATICTSCP( _24lambda_2dgenc_v );
DEFSTATICTSCP( _24set_2dgenc_v );
DEFSTATICTSCP( _24call_2dgenc_v );
DEFSTATICTSCP( symbol_2dgenc_v );
DEFSTATICTSCP( with_2dmodules_v );
DEFSTATICTSCP( quote_2dconstants_v );
DEFCSTRING( t3035, "TRUEVALUE" );
DEFSTATICTSCP( c2954 );
DEFCSTRING( t3036, "EMPTYLIST" );
DEFSTATICTSCP( c2953 );
DEFCSTRING( t3037, "FALSEVALUE" );
DEFSTATICTSCP( c2952 );
DEFCSTRING( t3038, "EMPTYSTRING" );
DEFSTATICTSCP( c2951 );
DEFCSTRING( t3039, "EMPTYVECTOR" );
DEFSTATICTSCP( c2950 );
DEFSTATICTSCP( c2949 );
DEFSTATICTSCP( c2889 );
DEFSTATICTSCP( c2720 );
DEFSTATICTSCP( c2718 );
DEFCSTRING( t3040, " )" );
DEFSTATICTSCP( c2714 );
DEFCSTRING( t3041, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c2711 );
DEFSTATICTSCP( c2710 );
DEFCSTRING( t3042, "_TSCP( " );
DEFSTATICTSCP( c2693 );
DEFSTATICTSCP( c2691 );
DEFCSTRING( t3043, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2686 );
DEFSTATICTSCP( c2685 );
DEFSTATICTSCP( c2680 );
DEFSTATICTSCP( c2679 );
DEFSTATICTSCP( c2676 );
DEFSTATICTSCP( c2669 );
DEFSTATICTSCP( c2668 );
DEFCSTRING( t3044, "EMIT-CONSTANT compile error:" );
DEFSTATICTSCP( c2666 );
DEFSTATICTSCP( c2633 );
DEFSTATICTSCP( c2632 );
DEFSTATICTSCP( c2595 );
DEFSTATICTSCP( t3045 );
DEFSTATICTSCP( c2594 );
DEFCSTRING( t3047, "static void  init_constants()" );
DEFSTATICTSCP( t3046 );
DEFSTATICTSCP( t3048 );
DEFCSTRING( t3049, "}" );
DEFSTATICTSCP( c2588 );
DEFSTATICTSCP( c2587 );
DEFCSTRING( t3050, "__init();" );
DEFSTATICTSCP( c2585 );
DEFSTATICTSCP( c2561 );
DEFCSTRING( t3052, "        char *compiler_version;" );
DEFSTATICTSCP( t3051 );
DEFSTATICTSCP( c2560 );
DEFCSTRING( t3054, "static void  init_modules( compiler_version )" );
DEFSTATICTSCP( t3053 );
DEFSTATICTSCP( c2556 );
DEFSTATICTSCP( c2530 );
DEFSTATICTSCP( c2496 );
DEFCSTRING( t3055, "..." );
DEFSTATICTSCP( c2493 );
DEFCSTRING( t3056, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2475 );
DEFCSTRING( t3057, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2471 );
DEFCSTRING( t3058, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2468 );
DEFSTATICTSCP( c2467 );
DEFSTATICTSCP( c2458 );
DEFCSTRING( t3060, "double" );
DEFSTATICTSCP( t3059 );
DEFSTATICTSCP( t3061 );
DEFCSTRING( t3063, "float" );
DEFSTATICTSCP( t3062 );
DEFSTATICTSCP( t3064 );
DEFCSTRING( t3066, "long unsigned" );
DEFSTATICTSCP( t3065 );
DEFSTATICTSCP( t3067 );
DEFCSTRING( t3069, "short unsigned" );
DEFSTATICTSCP( t3068 );
DEFSTATICTSCP( t3070 );
DEFCSTRING( t3072, "unsigned" );
DEFSTATICTSCP( t3071 );
DEFSTATICTSCP( t3073 );
DEFCSTRING( t3075, "long int" );
DEFSTATICTSCP( t3074 );
DEFSTATICTSCP( t3076 );
DEFCSTRING( t3078, "short int" );
DEFSTATICTSCP( t3077 );
DEFSTATICTSCP( t3079 );
DEFCSTRING( t3081, "int" );
DEFSTATICTSCP( t3080 );
DEFSTATICTSCP( t3082 );
DEFCSTRING( t3084, "char" );
DEFSTATICTSCP( t3083 );
DEFSTATICTSCP( t3085 );
DEFCSTRING( t3087, "TSCP" );
DEFSTATICTSCP( t3086 );
DEFCSTRING( t3089, "void*" );
DEFSTATICTSCP( t3088 );
DEFSTATICTSCP( t3090 );
DEFCSTRING( t3092, "void*" );
DEFSTATICTSCP( t3091 );
DEFSTATICTSCP( t3093 );
DEFCSTRING( t3095, "void" );
DEFSTATICTSCP( t3094 );
DEFSTATICTSCP( t3096 );
DEFCSTRING( t3097, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2443 );
DEFSTATICTSCP( c2442 );
DEFSTATICTSCP( c2405 );
DEFSTATICTSCP( t3098 );
DEFSTATICTSCP( t3099 );
DEFSTATICTSCP( t3100 );
DEFSTATICTSCP( t3101 );
DEFSTATICTSCP( t3102 );
DEFSTATICTSCP( t3103 );
DEFSTATICTSCP( t3104 );
DEFSTATICTSCP( t3105 );
DEFSTATICTSCP( t3106 );
DEFSTATICTSCP( t3107 );
DEFSTATICTSCP( t3108 );
DEFSTATICTSCP( t3109 );
DEFSTATICTSCP( t3110 );
DEFSTATICTSCP( t3111 );
DEFSTATICTSCP( t3112 );
DEFSTATICTSCP( t3113 );
DEFSTATICTSCP( t3114 );
DEFSTATICTSCP( t3115 );
DEFSTATICTSCP( t3116 );
DEFSTATICTSCP( t3117 );
DEFSTATICTSCP( t3118 );
DEFSTATICTSCP( t3119 );
DEFSTATICTSCP( t3120 );
DEFSTATICTSCP( t3121 );
DEFSTATICTSCP( t3122 );
DEFSTATICTSCP( t3123 );
DEFSTATICTSCP( t3124 );
DEFSTATICTSCP( c2399 );
DEFSTATICTSCP( t3125 );
DEFSTATICTSCP( t3126 );
DEFSTATICTSCP( t3127 );
DEFSTATICTSCP( t3128 );
DEFSTATICTSCP( t3129 );
DEFSTATICTSCP( t3130 );
DEFSTATICTSCP( t3131 );
DEFSTATICTSCP( t3132 );
DEFSTATICTSCP( t3133 );
DEFSTATICTSCP( t3134 );
DEFSTATICTSCP( t3135 );
DEFSTATICTSCP( t3136 );
DEFSTATICTSCP( t3137 );
DEFSTATICTSCP( c2381 );
DEFSTATICTSCP( t3138 );
DEFSTATICTSCP( t3139 );
DEFSTATICTSCP( t3140 );
DEFSTATICTSCP( t3141 );
DEFSTATICTSCP( t3142 );
DEFSTATICTSCP( t3143 );
DEFSTATICTSCP( t3144 );
DEFSTATICTSCP( t3145 );
DEFSTATICTSCP( t3146 );
DEFSTATICTSCP( t3147 );
DEFSTATICTSCP( t3148 );
DEFSTATICTSCP( t3149 );
DEFSTATICTSCP( c2370 );
DEFSTATICTSCP( c2366 );
DEFCSTRING( t3151, "sc" );
DEFSTATICTSCP( t3150 );
DEFSTATICTSCP( c2358 );
DEFSTATICTSCP( c2352 );
DEFSTATICTSCP( c2340 );
DEFSTATICTSCP( c2335 );
DEFSTATICTSCP( c2332 );
DEFSTATICTSCP( c2320 );
DEFSTATICTSCP( c2305 );
DEFSTATICTSCP( c2297 );
DEFCSTRING( t3152, "SYMBOL does not have a value cell" );
DEFSTATICTSCP( c2294 );
DEFSTATICTSCP( c2291 );
DEFSTATICTSCP( c2276 );
DEFSTATICTSCP( c2273 );
DEFCSTRING( t3153, "DISPLAY" );
DEFSTATICTSCP( c2272 );
DEFSTATICTSCP( c2271 );
DEFSTATICTSCP( c2266 );
DEFCSTRING( t3154, "Variable is not bound" );
DEFSTATICTSCP( c2265 );
DEFSTATICTSCP( c2247 );
DEFSTATICTSCP( c2241 );
DEFSTATICTSCP( c2240 );
DEFSTATICTSCP( c2235 );
DEFSTATICTSCP( c2225 );
DEFSTATICTSCP( c2224 );
DEFSTATICTSCP( c2223 );
DEFSTATICTSCP( c2222 );
DEFCSTRING( t3155, "Illegal use of LAP" );
DEFSTATICTSCP( c2213 );
DEFCSTRING( t3156, "GENERATE-CODE compiler error" );
DEFSTATICTSCP( c2212 );
DEFSTATICTSCP( c2211 );
DEFSTATICTSCP( c2203 );
DEFSTATICTSCP( c2195 );
DEFSTATICTSCP( c2187 );
DEFSTATICTSCP( c2179 );
DEFSTATICTSCP( c2171 );
DEFCSTRING( t3157, "main" );
DEFSTATICTSCP( c2157 );
DEFCSTRING( t3158, "__init" );
DEFSTATICTSCP( c2156 );
DEFCSTRING( t3159, "Compiler error - display index is not 0" );
DEFSTATICTSCP( c2154 );
DEFSTATICTSCP( c2144 );
DEFCSTRING( t3161, "}" );
DEFSTATICTSCP( t3160 );
DEFSTATICTSCP( c2143 );
DEFSTATICTSCP( t3162 );
DEFSTATICTSCP( c2140 );
DEFCSTRING( t3164, "SCHEMEEXIT();" );
DEFSTATICTSCP( t3163 );
DEFCSTRING( t3165, "( CLARGUMENTS( argc, argv ) );" );
DEFSTATICTSCP( c2139 );
DEFCSTRING( t3166, "Main procedure is not defined" );
DEFSTATICTSCP( c2138 );
DEFCSTRING( t3167, "__init(){}" );
DEFSTATICTSCP( c2136 );
DEFSTATICTSCP( c2133 );
DEFCSTRING( t3169, "void" );
DEFSTATICTSCP( t3168 );
DEFSTATICTSCP( t3170 );
DEFSTATICTSCP( c2132 );
DEFCSTRING( t3171, " );" );
DEFSTATICTSCP( c2107 );
DEFCSTRING( t3172, ")" );
DEFSTATICTSCP( c2106 );
DEFCSTRING( t3173, " SCHEME->C COMPILER " );
DEFSTATICTSCP( c2104 );
DEFCSTRING( t3174, "(" );
DEFSTATICTSCP( c2102 );
DEFSTATICTSCP( c2101 );
DEFCSTRING( t3175, "init_modules( " );
DEFSTATICTSCP( c2100 );
DEFSTATICTSCP( c2098 );
DEFCSTRING( t3177, "init_constants();" );
DEFSTATICTSCP( t3176 );
DEFSTATICTSCP( c2097 );
DEFCSTRING( t3178, "argv" );
DEFSTATICTSCP( c2094 );
DEFCSTRING( t3179, "argc" );
DEFSTATICTSCP( c2093 );
DEFSTATICTSCP( c2091 );
DEFSTATICTSCP( c2090 );
DEFCSTRING( t3181, "init = 1;" );
DEFSTATICTSCP( t3180 );
DEFSTATICTSCP( c2089 );
DEFCSTRING( t3183, "if  (init)  return;" );
DEFSTATICTSCP( t3182 );
DEFSTATICTSCP( c2088 );
DEFCSTRING( t3185, "static int  init = 0;" );
DEFSTATICTSCP( t3184 );
DEFSTATICTSCP( c2087 );
DEFSTATICTSCP( c2086 );
DEFSTATICTSCP( c2085 );
DEFCSTRING( t3187, "{" );
DEFSTATICTSCP( t3186 );
DEFSTATICTSCP( c2084 );
DEFCSTRING( t3189, "        int argc;  char *argv[];" );
DEFSTATICTSCP( t3188 );
DEFSTATICTSCP( c2083 );
DEFCSTRING( t3191, "main( argc, argv )" );
DEFSTATICTSCP( t3190 );
DEFCSTRING( t3192, "()" );
DEFSTATICTSCP( c2081 );
DEFCSTRING( t3193, "void  " );
DEFSTATICTSCP( c2080 );
DEFSTATICTSCP( c2078 );
DEFCSTRING( t3194, "#include " );
DEFSTATICTSCP( c2074 );
DEFCSTRING( t3195, "/* SCHEME->C */" );
DEFSTATICTSCP( c2073 );
DEFSTATICTSCP( c2072 );
DEFSTATICTSCP( c2070 );
DEFSTATICTSCP( c2069 );
DEFSTATICTSCP( c2068 );
DEFSTATICTSCP( c2055 );
DEFSTATICTSCP( c2048 );

static void  init_constants()
{
        TSCP  X1;

        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        global_2dlap_2dcode_v = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL-LAP-CO\
DE" ) );
        CONSTANTEXP( ADR( global_2dlap_2dcode_v ) );
        c_2dinclude_2dfile_v = STRINGTOSYMBOL( CSTRING_TSCP( "C-INCLUDE-FILE\
" ) );
        CONSTANTEXP( ADR( c_2dinclude_2dfile_v ) );
        main_2dprogram_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MAIN-PROGRA\
M-NAME" ) );
        CONSTANTEXP( ADR( main_2dprogram_2dname_v ) );
        heap_2dsize_v = STRINGTOSYMBOL( CSTRING_TSCP( "HEAP-SIZE" ) );
        CONSTANTEXP( ADR( heap_2dsize_v ) );
        module_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAME" ) );
        CONSTANTEXP( ADR( module_2dname_v ) );
        scc_2dversion_v = STRINGTOSYMBOL( CSTRING_TSCP( "SCC-VERSION" ) );
        CONSTANTEXP( ADR( scc_2dversion_v ) );
        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        _24define_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE-GENC" ) );
        CONSTANTEXP( ADR( _24define_2dgenc_v ) );
        _24if_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "$IF-GENC" ) );
        CONSTANTEXP( ADR( _24if_2dgenc_v ) );
        _24lambda_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA-GENC" ) );
        CONSTANTEXP( ADR( _24lambda_2dgenc_v ) );
        _24set_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "$SET-GENC" ) );
        CONSTANTEXP( ADR( _24set_2dgenc_v ) );
        _24call_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL-GENC" ) );
        CONSTANTEXP( ADR( _24call_2dgenc_v ) );
        symbol_2dgenc_v = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL-GENC" ) );
        CONSTANTEXP( ADR( symbol_2dgenc_v ) );
        with_2dmodules_v = STRINGTOSYMBOL( CSTRING_TSCP( "WITH-MODULES" ) );
        CONSTANTEXP( ADR( with_2dmodules_v ) );
        quote_2dconstants_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE-CONSTANTS\
" ) );
        CONSTANTEXP( ADR( quote_2dconstants_v ) );
        c2954 = CSTRING_TSCP( t3035 );
        CONSTANTEXP( ADR( c2954 ) );
        c2953 = CSTRING_TSCP( t3036 );
        CONSTANTEXP( ADR( c2953 ) );
        c2952 = CSTRING_TSCP( t3037 );
        CONSTANTEXP( ADR( c2952 ) );
        c2951 = CSTRING_TSCP( t3038 );
        CONSTANTEXP( ADR( c2951 ) );
        c2950 = CSTRING_TSCP( t3039 );
        CONSTANTEXP( ADR( c2950 ) );
        c2949 = STRINGTOSYMBOL( CSTRING_TSCP( "EMIT-CONSTANT-KLUDGE" ) );
        CONSTANTEXP( ADR( c2949 ) );
        c2889 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2889 ) );
        c2720 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE_TSCP" ) );
        CONSTANTEXP( ADR( c2720 ) );
        c2718 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2718 ) );
        c2714 = CSTRING_TSCP( t3040 );
        CONSTANTEXP( ADR( c2714 ) );
        c2711 = CSTRING_TSCP( t3041 );
        CONSTANTEXP( ADR( c2711 ) );
        c2710 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c2710 ) );
        c2693 = CSTRING_TSCP( t3042 );
        CONSTANTEXP( ADR( c2693 ) );
        c2691 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFCSTRING" ) );
        CONSTANTEXP( ADR( c2691 ) );
        c2686 = CSTRING_TSCP( t3043 );
        CONSTANTEXP( ADR( c2686 ) );
        c2685 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2685 ) );
        c2680 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING_TSCP" ) );
        CONSTANTEXP( ADR( c2680 ) );
        c2679 = STRINGTOSYMBOL( CSTRING_TSCP( "STRINGTOSYMBOL" ) );
        CONSTANTEXP( ADR( c2679 ) );
        c2676 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFSTATICTSCP" ) );
        CONSTANTEXP( ADR( c2676 ) );
        c2669 = STRINGTOSYMBOL( CSTRING_TSCP( "LISTTOVECTOR" ) );
        CONSTANTEXP( ADR( c2669 ) );
        c2668 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2668 ) );
        c2666 = CSTRING_TSCP( t3044 );
        CONSTANTEXP( ADR( c2666 ) );
        c2633 = STRINGTOSYMBOL( CSTRING_TSCP( "ADR" ) );
        CONSTANTEXP( ADR( c2633 ) );
        c2632 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANTEXP" ) );
        CONSTANTEXP( ADR( c2632 ) );
        c2595 = EMPTYLIST;
        t3045 = STRINGTOSYMBOL( CSTRING_TSCP( "LOCALS" ) );
        c2595 = CONS( t3045, c2595 );
        CONSTANTEXP( ADR( c2595 ) );
        c2594 = EMPTYLIST;
        t3046 = CSTRING_TSCP( t3047 );
        c2594 = CONS( t3046, c2594 );
        t3048 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        c2594 = CONS( t3048, c2594 );
        CONSTANTEXP( ADR( c2594 ) );
        c2588 = CSTRING_TSCP( t3049 );
        CONSTANTEXP( ADR( c2588 ) );
        c2587 = STRINGTOSYMBOL( CSTRING_TSCP( "MAXDISPLAY" ) );
        CONSTANTEXP( ADR( c2587 ) );
        c2585 = CSTRING_TSCP( t3050 );
        CONSTANTEXP( ADR( c2585 ) );
        c2561 = EMPTYLIST;
        t3051 = CSTRING_TSCP( t3052 );
        c2561 = CONS( t3051, c2561 );
        c2561 = CONS( t3048, c2561 );
        CONSTANTEXP( ADR( c2561 ) );
        c2560 = EMPTYLIST;
        t3053 = CSTRING_TSCP( t3054 );
        c2560 = CONS( t3053, c2560 );
        c2560 = CONS( t3048, c2560 );
        CONSTANTEXP( ADR( c2560 ) );
        c2556 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        CONSTANTEXP( ADR( c2556 ) );
        c2530 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP" ) );
        CONSTANTEXP( ADR( c2530 ) );
        c2496 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2496 ) );
        c2493 = CSTRING_TSCP( t3055 );
        CONSTANTEXP( ADR( c2493 ) );
        c2475 = CSTRING_TSCP( t3056 );
        CONSTANTEXP( ADR( c2475 ) );
        c2471 = CSTRING_TSCP( t3057 );
        CONSTANTEXP( ADR( c2471 ) );
        c2468 = CSTRING_TSCP( t3058 );
        CONSTANTEXP( ADR( c2468 ) );
        c2467 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2467 ) );
        c2458 = EMPTYLIST;
        t3059 = CSTRING_TSCP( t3060 );
        X1 = t3059;
        t3061 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        X1 = CONS( t3061, X1 );
        c2458 = CONS( X1, c2458 );
        t3062 = CSTRING_TSCP( t3063 );
        X1 = t3062;
        t3064 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        X1 = CONS( t3064, X1 );
        c2458 = CONS( X1, c2458 );
        t3065 = CSTRING_TSCP( t3066 );
        X1 = t3065;
        t3067 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        X1 = CONS( t3067, X1 );
        c2458 = CONS( X1, c2458 );
        t3068 = CSTRING_TSCP( t3069 );
        X1 = t3068;
        t3070 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        X1 = CONS( t3070, X1 );
        c2458 = CONS( X1, c2458 );
        t3071 = CSTRING_TSCP( t3072 );
        X1 = t3071;
        t3073 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        X1 = CONS( t3073, X1 );
        c2458 = CONS( X1, c2458 );
        t3074 = CSTRING_TSCP( t3075 );
        X1 = t3074;
        t3076 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        X1 = CONS( t3076, X1 );
        c2458 = CONS( X1, c2458 );
        t3077 = CSTRING_TSCP( t3078 );
        X1 = t3077;
        t3079 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        X1 = CONS( t3079, X1 );
        c2458 = CONS( X1, c2458 );
        t3080 = CSTRING_TSCP( t3081 );
        X1 = t3080;
        t3082 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        X1 = CONS( t3082, X1 );
        c2458 = CONS( X1, c2458 );
        t3083 = CSTRING_TSCP( t3084 );
        X1 = t3083;
        t3085 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        X1 = CONS( t3085, X1 );
        c2458 = CONS( X1, c2458 );
        t3086 = CSTRING_TSCP( t3087 );
        X1 = t3086;
        X1 = CONS( c2530, X1 );
        c2458 = CONS( X1, c2458 );
        t3088 = CSTRING_TSCP( t3089 );
        X1 = t3088;
        t3090 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        X1 = CONS( t3090, X1 );
        c2458 = CONS( X1, c2458 );
        t3091 = CSTRING_TSCP( t3092 );
        X1 = t3091;
        t3093 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        X1 = CONS( t3093, X1 );
        c2458 = CONS( X1, c2458 );
        t3094 = CSTRING_TSCP( t3095 );
        X1 = t3094;
        t3096 = STRINGTOSYMBOL( CSTRING_TSCP( "VOID" ) );
        X1 = CONS( t3096, X1 );
        c2458 = CONS( X1, c2458 );
        CONSTANTEXP( ADR( c2458 ) );
        c2443 = CSTRING_TSCP( t3097 );
        CONSTANTEXP( ADR( c2443 ) );
        c2442 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2442 ) );
        c2405 = EMPTYLIST;
        t3098 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL26" ) );
        c2405 = CONS( t3098, c2405 );
        t3099 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL25" ) );
        c2405 = CONS( t3099, c2405 );
        t3100 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL24" ) );
        c2405 = CONS( t3100, c2405 );
        t3101 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL23" ) );
        c2405 = CONS( t3101, c2405 );
        t3102 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL22" ) );
        c2405 = CONS( t3102, c2405 );
        t3103 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL21" ) );
        c2405 = CONS( t3103, c2405 );
        t3104 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL20" ) );
        c2405 = CONS( t3104, c2405 );
        t3105 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL19" ) );
        c2405 = CONS( t3105, c2405 );
        t3106 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL18" ) );
        c2405 = CONS( t3106, c2405 );
        t3107 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL17" ) );
        c2405 = CONS( t3107, c2405 );
        t3108 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL16" ) );
        c2405 = CONS( t3108, c2405 );
        t3109 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL15" ) );
        c2405 = CONS( t3109, c2405 );
        t3110 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL14" ) );
        c2405 = CONS( t3110, c2405 );
        t3111 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL13" ) );
        c2405 = CONS( t3111, c2405 );
        t3112 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL12" ) );
        c2405 = CONS( t3112, c2405 );
        t3113 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL11" ) );
        c2405 = CONS( t3113, c2405 );
        t3114 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL10" ) );
        c2405 = CONS( t3114, c2405 );
        t3115 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL9" ) );
        c2405 = CONS( t3115, c2405 );
        t3116 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL8" ) );
        c2405 = CONS( t3116, c2405 );
        t3117 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL7" ) );
        c2405 = CONS( t3117, c2405 );
        t3118 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL6" ) );
        c2405 = CONS( t3118, c2405 );
        t3119 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL5" ) );
        c2405 = CONS( t3119, c2405 );
        t3120 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL4" ) );
        c2405 = CONS( t3120, c2405 );
        t3121 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL3" ) );
        c2405 = CONS( t3121, c2405 );
        t3122 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL2" ) );
        c2405 = CONS( t3122, c2405 );
        t3123 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL1" ) );
        c2405 = CONS( t3123, c2405 );
        t3124 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL0" ) );
        c2405 = CONS( t3124, c2405 );
        c2405 = LISTTOVECTOR( c2405 );
        CONSTANTEXP( ADR( c2405 ) );
        c2399 = EMPTYLIST;
        t3125 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLEP" ) );
        X1 = t3125;
        X1 = CONS( t3061, X1 );
        c2399 = CONS( X1, c2399 );
        t3126 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOATP" ) );
        X1 = t3126;
        X1 = CONS( t3064, X1 );
        c2399 = CONS( X1, c2399 );
        t3127 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNEDP" ) );
        X1 = t3127;
        X1 = CONS( t3067, X1 );
        c2399 = CONS( X1, c2399 );
        t3128 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNEDP" ) );
        X1 = t3128;
        X1 = CONS( t3070, X1 );
        c2399 = CONS( X1, c2399 );
        t3129 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNEDP" ) );
        X1 = t3129;
        X1 = CONS( t3073, X1 );
        c2399 = CONS( X1, c2399 );
        t3130 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINTP" ) );
        X1 = t3130;
        X1 = CONS( t3076, X1 );
        c2399 = CONS( X1, c2399 );
        t3131 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINTP" ) );
        X1 = t3131;
        X1 = CONS( t3079, X1 );
        c2399 = CONS( X1, c2399 );
        t3132 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINTP" ) );
        X1 = t3132;
        X1 = CONS( t3082, X1 );
        c2399 = CONS( X1, c2399 );
        t3133 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHARP" ) );
        X1 = t3133;
        X1 = CONS( t3085, X1 );
        c2399 = CONS( X1, c2399 );
        t3134 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        X1 = t3134;
        X1 = CONS( c2530, X1 );
        c2399 = CONS( X1, c2399 );
        t3135 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAYP" ) );
        X1 = t3135;
        X1 = CONS( t3090, X1 );
        c2399 = CONS( X1, c2399 );
        t3136 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTERP" ) );
        X1 = t3136;
        X1 = CONS( t3093, X1 );
        c2399 = CONS( X1, c2399 );
        t3137 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNVOIDP" ) );
        X1 = t3137;
        X1 = CONS( t3096, X1 );
        c2399 = CONS( X1, c2399 );
        CONSTANTEXP( ADR( c2399 ) );
        c2381 = EMPTYLIST;
        t3138 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLE" ) );
        X1 = t3138;
        X1 = CONS( t3061, X1 );
        c2381 = CONS( X1, c2381 );
        t3139 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOAT" ) );
        X1 = t3139;
        X1 = CONS( t3064, X1 );
        c2381 = CONS( X1, c2381 );
        t3140 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNED" ) );
        X1 = t3140;
        X1 = CONS( t3067, X1 );
        c2381 = CONS( X1, c2381 );
        t3141 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNED" ) );
        X1 = t3141;
        X1 = CONS( t3070, X1 );
        c2381 = CONS( X1, c2381 );
        t3142 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNED" ) );
        X1 = t3142;
        X1 = CONS( t3073, X1 );
        c2381 = CONS( X1, c2381 );
        t3143 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINT" ) );
        X1 = t3143;
        X1 = CONS( t3076, X1 );
        c2381 = CONS( X1, c2381 );
        t3144 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINT" ) );
        X1 = t3144;
        X1 = CONS( t3079, X1 );
        c2381 = CONS( X1, c2381 );
        t3145 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINT" ) );
        X1 = t3145;
        X1 = CONS( t3082, X1 );
        c2381 = CONS( X1, c2381 );
        t3146 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHAR" ) );
        X1 = t3146;
        X1 = CONS( t3085, X1 );
        c2381 = CONS( X1, c2381 );
        t3147 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        X1 = t3147;
        X1 = CONS( c2530, X1 );
        c2381 = CONS( X1, c2381 );
        t3148 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAY" ) );
        X1 = t3148;
        X1 = CONS( t3090, X1 );
        c2381 = CONS( X1, c2381 );
        t3149 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTER" ) );
        X1 = t3149;
        X1 = CONS( t3093, X1 );
        c2381 = CONS( X1, c2381 );
        CONSTANTEXP( ADR( c2381 ) );
        c2370 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2370 ) );
        c2366 = EMPTYLIST;
        t3150 = CSTRING_TSCP( t3151 );
        c2366 = CONS( t3150, c2366 );
        c2366 = CONS( EMPTYSTRING, c2366 );
        CONSTANTEXP( ADR( c2366 ) );
        c2358 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        CONSTANTEXP( ADR( c2358 ) );
        c2352 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        CONSTANTEXP( ADR( c2352 ) );
        c2340 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2340 ) );
        c2335 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2335 ) );
        c2332 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2332 ) );
        c2320 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c2320 ) );
        c2305 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c2305 ) );
        c2297 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2297 ) );
        c2294 = CSTRING_TSCP( t3152 );
        CONSTANTEXP( ADR( c2294 ) );
        c2291 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2291 ) );
        c2276 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2276 ) );
        c2273 = STRINGTOSYMBOL( CSTRING_TSCP( "PAIR_CAR" ) );
        CONSTANTEXP( ADR( c2273 ) );
        c2272 = CSTRING_TSCP( t3153 );
        CONSTANTEXP( ADR( c2272 ) );
        c2271 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2271 ) );
        c2266 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL_VALUE" ) );
        CONSTANTEXP( ADR( c2266 ) );
        c2265 = CSTRING_TSCP( t3154 );
        CONSTANTEXP( ADR( c2265 ) );
        c2247 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2247 ) );
        c2241 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMPORARY" ) );
        CONSTANTEXP( ADR( c2241 ) );
        c2240 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMP" ) );
        CONSTANTEXP( ADR( c2240 ) );
        c2235 = STRINGTOSYMBOL( CSTRING_TSCP( "CODE-LABEL" ) );
        CONSTANTEXP( ADR( c2235 ) );
        c2225 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTOS" ) );
        CONSTANTEXP( ADR( c2225 ) );
        c2224 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2224 ) );
        c2223 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2223 ) );
        c2222 = STRINGTOSYMBOL( CSTRING_TSCP( "L" ) );
        CONSTANTEXP( ADR( c2222 ) );
        c2213 = CSTRING_TSCP( t3155 );
        CONSTANTEXP( ADR( c2213 ) );
        c2212 = CSTRING_TSCP( t3156 );
        CONSTANTEXP( ADR( c2212 ) );
        c2211 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2211 ) );
        c2203 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2203 ) );
        c2195 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2195 ) );
        c2187 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2187 ) );
        c2179 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2179 ) );
        c2171 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2171 ) );
        c2157 = CSTRING_TSCP( t3157 );
        CONSTANTEXP( ADR( c2157 ) );
        c2156 = CSTRING_TSCP( t3158 );
        CONSTANTEXP( ADR( c2156 ) );
        c2154 = CSTRING_TSCP( t3159 );
        CONSTANTEXP( ADR( c2154 ) );
        c2144 = EMPTYLIST;
        t3160 = CSTRING_TSCP( t3161 );
        c2144 = CONS( t3160, c2144 );
        c2144 = CONS( t3048, c2144 );
        CONSTANTEXP( ADR( c2144 ) );
        c2143 = EMPTYLIST;
        c2143 = CONS( _TSCP( 0 ), c2143 );
        t3162 = STRINGTOSYMBOL( CSTRING_TSCP( "INDENT" ) );
        c2143 = CONS( t3162, c2143 );
        CONSTANTEXP( ADR( c2143 ) );
        c2140 = EMPTYLIST;
        t3163 = CSTRING_TSCP( t3164 );
        c2140 = CONS( t3163, c2140 );
        c2140 = CONS( t3048, c2140 );
        CONSTANTEXP( ADR( c2140 ) );
        c2139 = CSTRING_TSCP( t3165 );
        CONSTANTEXP( ADR( c2139 ) );
        c2138 = CSTRING_TSCP( t3166 );
        CONSTANTEXP( ADR( c2138 ) );
        c2136 = CSTRING_TSCP( t3167 );
        CONSTANTEXP( ADR( c2136 ) );
        c2133 = EMPTYLIST;
        t3168 = CSTRING_TSCP( t3169 );
        c2133 = CONS( t3168, c2133 );
        t3170 = STRINGTOSYMBOL( CSTRING_TSCP( "RETURN" ) );
        c2133 = CONS( t3170, c2133 );
        c2133 = CONS( c2668, c2133 );
        CONSTANTEXP( ADR( c2133 ) );
        c2132 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2132 ) );
        c2107 = CSTRING_TSCP( t3171 );
        CONSTANTEXP( ADR( c2107 ) );
        c2106 = CSTRING_TSCP( t3172 );
        CONSTANTEXP( ADR( c2106 ) );
        c2104 = CSTRING_TSCP( t3173 );
        CONSTANTEXP( ADR( c2104 ) );
        c2102 = CSTRING_TSCP( t3174 );
        CONSTANTEXP( ADR( c2102 ) );
        c2101 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2101 ) );
        c2100 = CSTRING_TSCP( t3175 );
        CONSTANTEXP( ADR( c2100 ) );
        c2098 = EMPTYLIST;
        t3176 = CSTRING_TSCP( t3177 );
        c2098 = CONS( t3176, c2098 );
        c2098 = CONS( t3048, c2098 );
        CONSTANTEXP( ADR( c2098 ) );
        c2097 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2097 ) );
        c2094 = CSTRING_TSCP( t3178 );
        CONSTANTEXP( ADR( c2094 ) );
        c2093 = CSTRING_TSCP( t3179 );
        CONSTANTEXP( ADR( c2093 ) );
        c2091 = STRINGTOSYMBOL( CSTRING_TSCP( "INITHEAP" ) );
        CONSTANTEXP( ADR( c2091 ) );
        c2090 = EMPTYLIST;
        t3180 = CSTRING_TSCP( t3181 );
        c2090 = CONS( t3180, c2090 );
        c2090 = CONS( t3048, c2090 );
        CONSTANTEXP( ADR( c2090 ) );
        c2089 = EMPTYLIST;
        t3182 = CSTRING_TSCP( t3183 );
        c2089 = CONS( t3182, c2089 );
        c2089 = CONS( t3048, c2089 );
        CONSTANTEXP( ADR( c2089 ) );
        c2088 = EMPTYLIST;
        t3184 = CSTRING_TSCP( t3185 );
        c2088 = CONS( t3184, c2088 );
        c2088 = CONS( t3048, c2088 );
        CONSTANTEXP( ADR( c2088 ) );
        c2087 = EMPTYLIST;
        c2087 = CONS( _TSCP( 0 ), c2087 );
        c2087 = CONS( c2276, c2087 );
        c2087 = CONS( t3045, c2087 );
        CONSTANTEXP( ADR( c2087 ) );
        c2086 = EMPTYLIST;
        c2086 = CONS( _TSCP( 32 ), c2086 );
        c2086 = CONS( t3162, c2086 );
        CONSTANTEXP( ADR( c2086 ) );
        c2085 = EMPTYLIST;
        t3186 = CSTRING_TSCP( t3187 );
        c2085 = CONS( t3186, c2085 );
        c2085 = CONS( t3048, c2085 );
        CONSTANTEXP( ADR( c2085 ) );
        c2084 = EMPTYLIST;
        t3188 = CSTRING_TSCP( t3189 );
        c2084 = CONS( t3188, c2084 );
        c2084 = CONS( t3048, c2084 );
        CONSTANTEXP( ADR( c2084 ) );
        c2083 = EMPTYLIST;
        t3190 = CSTRING_TSCP( t3191 );
        c2083 = CONS( t3190, c2083 );
        c2083 = CONS( t3048, c2083 );
        CONSTANTEXP( ADR( c2083 ) );
        c2081 = CSTRING_TSCP( t3192 );
        CONSTANTEXP( ADR( c2081 ) );
        c2080 = CSTRING_TSCP( t3193 );
        CONSTANTEXP( ADR( c2080 ) );
        c2078 = EMPTYLIST;
        c2078 = CONS( t3048, c2078 );
        CONSTANTEXP( ADR( c2078 ) );
        c2074 = CSTRING_TSCP( t3194 );
        CONSTANTEXP( ADR( c2074 ) );
        c2073 = CSTRING_TSCP( t3195 );
        CONSTANTEXP( ADR( c2073 ) );
        c2072 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        CONSTANTEXP( ADR( c2072 ) );
        c2070 = STRINGTOSYMBOL( CSTRING_TSCP( "$_CDR-ERROR" ) );
        CONSTANTEXP( ADR( c2070 ) );
        c2069 = STRINGTOSYMBOL( CSTRING_TSCP( "$_CAR-ERROR" ) );
        CONSTANTEXP( ADR( c2069 ) );
        c2068 = STRINGTOSYMBOL( CSTRING_TSCP( "ERROR" ) );
        CONSTANTEXP( ADR( c2068 ) );
        c2055 = EMPTYLIST;
        c2055 = CONS( EMPTYLIST, c2055 );
        CONSTANTEXP( ADR( c2055 ) );
        c2048 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2048 ) );
}

DEFTSCP( gencode_e_2dlambda_7a3ae383_v );
DEFCSTRING( t3196, "CURRENT-CODE-LAMBDA" );
DEFTSCP( gencode_e_2dstring_8ca45c6a_v );
DEFCSTRING( t3197, "CURRENT-DEFINE-STRING" );
DEFTSCP( gencode_init_2dmodules_v );
DEFCSTRING( t3198, "INIT-MODULES" );
DEFTSCP( gencode_free_2ddisplay_v );
DEFCSTRING( t3199, "FREE-DISPLAY" );
DEFTSCP( gencode_max_2ddisplay_v );
DEFCSTRING( t3200, "MAX-DISPLAY" );
DEFTSCP( gencode_ion_2dinfo_cc47b64b_v );
DEFCSTRING( t3201, "EMPTY-CONDITION-INFO" );
DEFTSCP( gencode_ion_2dinfo_f92fd619_v );
DEFCSTRING( t3202, "GLOBAL-CONDITION-INFO" );
DEFTSCP( gencode_error_2did_v );
DEFCSTRING( t3203, "ERROR-ID" );
DEFTSCP( gencode__24__car_2derror_2did_v );
DEFCSTRING( t3204, "$_CAR-ERROR-ID" );
DEFTSCP( gencode__24__cdr_2derror_2did_v );
DEFCSTRING( t3205, "$_CDR-ERROR-ID" );
DEFTSCP( gencode_generate_2dcode_v );
DEFCSTRING( t3206, "GENERATE-CODE" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( lap_save_2dcurrent_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_save_2dcurrent_2dlap_v );
EXTERNTSCPP( expform_bound, XAL1( TSCP ) );
EXTERNTSCP( expform_bound_v );
EXTERNTSCPP( lap_emit_2dglobal_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dglobal_2dlap_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( lap_emit_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_emit_2dlap_v );
EXTERNTSCPP( expform_cname, XAL1( TSCP ) );
EXTERNTSCP( expform_cname_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( gencode_emit_2dconstants, XAL0(  ) );
EXTERNTSCP( gencode_emit_2dconstants_v );
EXTERNTSCPP( lap_done_2dlap, XAL1( TSCP ) );
EXTERNTSCP( lap_done_2dlap_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( gencode_exp_2dgenc, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( gencode_exp_2dgenc_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( gencode_t__modules_bfe186ca, XAL0(  ) );
EXTERNTSCP( gencode_t__modules_bfe186ca_v );

TSCP  gencode_generate_2dcode( e2062 )
        TSCP  e2062;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3206 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3208;
        X1 = c2157;
        goto L3209;
L3208:
        X2 = CONS( c2156, EMPTYLIST );
        X1 = scrt3_string_2dappend( CONS( SYMBOL_VALUE( module_2dname_v ), 
                                          X2 ) );
L3209:
        X2 = EMPTYLIST;
        X2 = CONS( X2, EMPTYLIST );
        gencode_e_2dlambda_7a3ae383_v = c2048;
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  c2048 );
        lap_save_2dcurrent_2dlap( FALSEVALUE );
        gencode_max_2ddisplay_v = _TSCP( 0 );
        gencode_free_2ddisplay_v = _TSCP( 0 );
        gencode_error_2did_v = expform_bound( c2068 );
        gencode__24__car_2derror_2did_v = expform_bound( c2069 );
        gencode__24__cdr_2derror_2did_v = expform_bound( c2070 );
        SETGENTL( SYMBOL_VALUE( global_2dlap_2dcode_v ), 
                  EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2072, CONS( c2073, X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
        X3 = scrt1_cons_2a( c2072, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        lap_emit_2dglobal_2dlap( X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 15890 ), X4 );
        X4 = CONS( SYMBOL_VALUE( c_2dinclude_2dfile_v ), X4 );
        X4 = CONS( _TSCP( 15378 ), X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2074, X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
        lap_emit_2dglobal_2dlap( c2078 );
        gencode_init_2dmodules_v = EMPTYLIST;
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3211;
        lap_emit_2dlap( c2083 );
        lap_emit_2dlap( c2084 );
        goto L3212;
L3211:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2081, X4 );
        X4 = CONS( X1, X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2080, X4 ) );
        lap_emit_2dlap( X3 );
L3212:
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2087 );
        lap_emit_2dlap( c2088 );
        lap_emit_2dlap( c2089 );
        lap_emit_2dlap( c2090 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3214;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = SYMBOL_VALUE( main_2dprogram_2dname_v );
        X5 = plist_get( X6, c2097 );
        X4 = CONS( expform_cname( X5 ), X4 );
        X4 = CONS( c2094, X4 );
        X4 = CONS( c2093, X4 );
        X3 = scrt1_cons_2a( c2091, 
                            CONS( SYMBOL_VALUE( heap_2dsize_v ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
        goto L3215;
L3214:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( c2091, 
                            CONS( SYMBOL_VALUE( heap_2dsize_v ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
L3215:
        lap_emit_2dlap( c2098 );
        X3 = gencode_emit_2dconstants(  );
        SETGEN( PAIR_CAR( X2 ), X3 );
        lap_done_2dlap( PAIR_CAR( X2 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2107, X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( c2106, EMPTYLIST );
        X6 = CONS( SYMBOL_VALUE( scc_2dversion_v ), X6 );
        X6 = CONS( c2104, X6 );
        X6 = CONS( SYMBOL_VALUE( module_2dname_v ), X6 );
        X4 = CONS( scrt1_cons_2a( c2101, 
                                  CONS( scrt3_string_2dappend( CONS( c2102, 
                                                                     X6 ) ), 
                                        X5 ) ), 
                   X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2100, X4 ) );
        lap_emit_2dlap( X3 );
        X3 = e2062;
L3217:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3218;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3222;
        scrt1__24__car_2derror( X3 );
L3222:
        X4 = PAIR_CAR( X3 );
        gencode_ion_2dinfo_f92fd619_v = gencode_ion_2dinfo_cc47b64b_v;
        gencode_exp_2dgenc( c2132, X4, EMPTYLIST );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3217 );
L3218:
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3226;
        X4 = SYMBOL_VALUE( main_2dprogram_2dname_v );
        X3 = plist_get( X4, c2097 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2136, X5 );
        X5 = CONS( SYMBOL_VALUE( module_2dname_v ), X5 );
        X4 = scrt1_cons_2a( c2072, CONS( c2080, X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
        if  ( FALSE( X3 ) )  goto L3229;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2139, X5 );
        X4 = scrt1_cons_2a( c2072, 
                            CONS( expform_cname( X3 ), X5 ) );
        lap_emit_2dlap( X4 );
        goto L3230;
L3229:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2138, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3230:
        lap_emit_2dlap( c2140 );
        goto L3227;
L3226:
        lap_emit_2dlap( c2133 );
L3227:
        lap_emit_2dlap( c2143 );
        lap_emit_2dlap( c2144 );
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L3233;
        if  ( NEQ( _S2CUINT( _TSCP( 0 ) ), _S2CUINT( X3 ) ) )  goto L3237;
        goto L3240;
L3233:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), X3 ) ) )  goto L3240;
L3237:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2154, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3240:
        gencode_t__modules_bfe186ca(  );
        X3 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        POPSTACKTRACE( lap_done_2dlap( X3 ) );
}

DEFTSCP( gencode_exp_2dgenc_v );
DEFCSTRING( t3241, "EXP-GENC" );

TSCP  gencode_exp_2dgenc( l2159, e2160, b2161 )
        TSCP  l2159, e2160, b2161;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3241 );
        if  ( NOT( AND( EQ( TSCPTAG( e2160 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2160 ), SYMBOLTAG ) ) )
            )  goto L3243;
        X1 = SYMBOL_VALUE( symbol_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3243:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3248;
        scrt1__24__car_2derror( e2160 );
L3248:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2171 ) ) )  goto L3245;
        X1 = SYMBOL_VALUE( _24call_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3245:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3253;
        scrt1__24__car_2derror( e2160 );
L3253:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2179 ) ) )  goto L3250;
        X1 = SYMBOL_VALUE( _24set_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3250:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3258;
        scrt1__24__car_2derror( e2160 );
L3258:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2187 ) ) )  goto L3255;
        X1 = SYMBOL_VALUE( _24lambda_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3255:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3263;
        scrt1__24__car_2derror( e2160 );
L3263:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2195 ) ) )  goto L3260;
        X1 = SYMBOL_VALUE( _24if_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3260:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3268;
        scrt1__24__car_2derror( e2160 );
L3268:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2203 ) ) )  goto L3265;
        X1 = SYMBOL_VALUE( _24define_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2159, 
                                                    e2160, 
                                                    b2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3265:
        if  ( EQ( TSCPTAG( e2160 ), PAIRTAG ) )  goto L3273;
        scrt1__24__car_2derror( e2160 );
L3273:
        X1 = PAIR_CAR( e2160 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2211 ) ) )  goto L3270;
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2213, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3270:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2212, 
                                                    e2160, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_make_2dlabel_v );
DEFCSTRING( t3275, "MAKE-LABEL" );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );

TSCP  gencode_make_2dlabel(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3275 );
        X1 = CONS( _TSCP( 0 ), EMPTYLIST );
        X1 = CONS( c2225, X1 );
        X1 = CONS( c2224, X1 );
        POPSTACKTRACE( expform_newv( c2222, 
                                     CONS( c2223, X1 ) ) );
}

DEFTSCP( gencode_code_2dlabel_v );
DEFCSTRING( t3277, "CODE-LABEL" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  gencode_code_2dlabel( i2228 )
        TSCP  i2228;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3277 );
        X1 = plist_get( i2228, c2235 );
        X1 = CONS( X1, EMPTYLIST );
        if  ( TRUE( PAIR_CAR( X1 ) ) )  goto L3280;
        X2 = gencode_make_2dlabel(  );
        SETGEN( PAIR_CAR( X1 ), X2 );
        plist_put( i2228, c2235, PAIR_CAR( X1 ) );
L3280:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( gencode_make_2dc_2dglobal_v );
DEFCSTRING( t3283, "MAKE-C-GLOBAL" );

TSCP  gencode_make_2dc_2dglobal(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3283 );
        X1 = CONS( c2241, EMPTYLIST );
        POPSTACKTRACE( expform_newv( c2240, 
                                     CONS( c2223, X1 ) ) );
}

DEFTSCP( gencode_optional_2dargs_v );
DEFCSTRING( t3285, "OPTIONAL-ARGS" );

TSCP  gencode_optional_2dargs( i2244 )
        TSCP  i2244;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3285 );
        if  ( FALSE( plist_get( i2244, c2247 ) ) )  goto L3287;
        X1 = plist_get( i2244, c2247 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3290;
        scrt1__24__car_2derror( X1 );
L3290:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3287:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( gencode_lookup_v );
DEFCSTRING( t3292, "LOOKUP" );
EXTERNTSCPP( gencode_var_2dis_2dconstant, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2dis_2dconstant_v );
EXTERNTSCPP( expform_vname, XAL1( TSCP ) );
EXTERNTSCP( expform_vname_v );
EXTERNTSCPP( gencode_var_2dis_2dglobal, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2dis_2dglobal_v );
EXTERNTSCPP( gencode_emit_2dextern, XAL1( TSCP ) );
EXTERNTSCP( gencode_emit_2dextern_v );
EXTERNTSCPP( gencode_var_2din_2dstack, XAL1( TSCP ) );
EXTERNTSCP( gencode_var_2din_2dstack_v );
EXTERNTSCPP( gencode_op_2dlevel_343ff0cb, XAL1( TSCP ) );
EXTERNTSCP( gencode_op_2dlevel_343ff0cb_v );

TSCP  gencode_lookup( v2256, b2257 )
        TSCP  v2256, b2257;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3292 );
        if  ( FALSE( gencode_var_2dis_2dconstant( v2256 ) ) )  goto L3294;
        POPSTACKTRACE( expform_vname( v2256 ) );
L3294:
        if  ( FALSE( gencode_var_2dis_2dglobal( v2256 ) ) )  goto L3296;
        gencode_emit_2dextern( v2256 );
        X1 = expform_vname( v2256 );
        if  ( TRUE( X1 ) )  goto L3300;
        X3 = plist_get( v2256, c2291 );
        if  ( FALSE( X3 ) )  goto L3303;
        X2 = expform_cname( v2256 );
        goto L3304;
L3303:
        X2 = X3;
L3304:
        if  ( TRUE( X2 ) )  goto L3306;
        X4 = plist_get( v2256, c2297 );
        X3 = SYMBOL_VALUE( report_2derror_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2294, 
                                                    X4, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3306:
        POPSTACKTRACE( X2 );
L3300:
        POPSTACKTRACE( X1 );
L3296:
        if  ( FALSE( gencode_var_2din_2dstack( v2256 ) ) )  goto L3308;
        X1 = plist_get( v2256, c2276 );
        if  ( FALSE( plist_get( v2256, c2271 ) ) )  goto L3311;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3313;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2272, CONS( X1, X4 ) );
        goto L3314;
L3313:
        X3 = expform_vname( v2256 );
L3314:
        POPSTACKTRACE( scrt1_cons_2a( c2273, CONS( X3, X2 ) ) );
L3311:
        if  ( FALSE( X1 ) )  goto L3315;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2272, CONS( X1, X2 ) ) );
L3315:
        POPSTACKTRACE( expform_vname( v2256 ) );
L3308:
        if  ( FALSE( gencode_op_2dlevel_343ff0cb( v2256 ) ) )  goto L3317;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2266, 
                                      CONS( expform_vname( v2256 ), 
                                            X1 ) ) );
L3317:
        X2 = expform_vname( v2256 );
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2265, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_var_2din_2dstack_v );
DEFCSTRING( t3319, "VAR-IN-STACK" );

TSCP  gencode_var_2din_2dstack( v2299 )
        TSCP  v2299;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3319 );
        X1 = plist_get( v2299, c2223 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2305 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dglobal_v );
DEFCSTRING( t3321, "VAR-IS-GLOBAL" );

TSCP  gencode_var_2dis_2dglobal( v2307 )
        TSCP  v2307;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3321 );
        X1 = plist_get( v2307, c2223 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2097 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dconstant_v );
DEFCSTRING( t3323, "VAR-IS-CONSTANT" );

TSCP  gencode_var_2dis_2dconstant( v2314 )
        TSCP  v2314;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3323 );
        X1 = plist_get( v2314, c2223 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2320 ) ) ) );
}

DEFTSCP( gencode_op_2dlevel_343ff0cb_v );
DEFCSTRING( t3325, "VAR-IS-TOP-LEVEL" );

TSCP  gencode_op_2dlevel_343ff0cb( v2322 )
        TSCP  v2322;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3325 );
        X1 = plist_get( v2322, c2223 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2048 ) ) ) );
}

DEFTSCP( gencode_emit_2dextern_v );
DEFCSTRING( t3327, "EMIT-EXTERN" );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( gencode_ern_2dargl_18fb6091, XAL1( TSCP ) );
EXTERNTSCP( gencode_ern_2dargl_18fb6091_v );
EXTERNTSCPP( gencode_emit_2dextern_2dargl, XAL1( TSCP ) );
EXTERNTSCP( gencode_emit_2dextern_2dargl_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  gencode_emit_2dextern( v2329 )
        TSCP  v2329;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3327 );
        v2329 = CONS( v2329, EMPTYLIST );
        if  ( FALSE( plist_get( PAIR_CAR( v2329 ), c2332 ) ) )  goto L3329;
        X2 = plist_get( PAIR_CAR( v2329 ), c2332 );
        X1 = plist_get( X2, c2335 );
        SETGEN( PAIR_CAR( v2329 ), X1 );
L3329:
        if  ( TRUE( plist_get( PAIR_CAR( v2329 ), c2340 ) ) )  goto L3331;
        plist_put( PAIR_CAR( v2329 ), c2340, TRUEVALUE );
        X2 = plist_get( PAIR_CAR( v2329 ), c2332 );
        if  ( FALSE( X2 ) )  goto L3335;
        X3 = plist_get( PAIR_CAR( v2329 ), c2291 );
        X1 = scrt1_assq( X3, c2399 );
        goto L3336;
L3335:
        X1 = X2;
L3336:
        if  ( FALSE( X1 ) )  goto L3338;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3341;
        scrt1__24__cdr_2derror( X1 );
L3341:
        X3 = PAIR_CDR( X1 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2329 ), c2332 );
        X4 = CONS( gencode_ern_2dargl_18fb6091( X5 ), X4 );
        X2 = scrt1_cons_2a( X3, 
                            CONS( expform_cname( PAIR_CAR( v2329 ) ), 
                                  X4 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X2 ) );
L3338:
        X3 = plist_get( PAIR_CAR( v2329 ), c2291 );
        X2 = scrt1_assq( X3, c2381 );
        if  ( FALSE( X2 ) )  goto L3344;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3347;
        scrt1__24__cdr_2derror( X2 );
L3347:
        X4 = PAIR_CDR( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( X4, 
                            CONS( expform_vname( PAIR_CAR( v2329 ) ), 
                                  X5 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X3 ) );
L3344:
        if  ( FALSE( plist_get( PAIR_CAR( v2329 ), c2332 ) ) )  goto L3350;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2329 ), c2332 );
        X4 = CONS( gencode_emit_2dextern_2dargl( X5 ), X4 );
        X3 = scrt1_cons_2a( c2352, 
                            CONS( expform_cname( PAIR_CAR( v2329 ) ), 
                                  X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
L3350:
        if  ( FALSE( gencode_var_2dis_2dglobal( PAIR_CAR( v2329 ) ) )
            )  goto L3352;
        X3 = plist_get( PAIR_CAR( v2329 ), c2370 );
        if  ( FALSE( expform_vname( PAIR_CAR( v2329 ) ) ) )  goto L3355;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2358, 
                            CONS( expform_vname( PAIR_CAR( v2329 ) ), 
                                  X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
L3355:
        X4 = SYMBOL_VALUE( module_2dname_v );
        if  ( TRUE( scrt1_equal_3f( X4, X3 ) ) )  goto L3357;
        if  ( TRUE( scrt1_member( X3, c2366 ) ) )  goto L3359;
        if  ( TRUE( scrt1_member( X3, gencode_init_2dmodules_v ) )
            )  goto L3361;
        X4 = plist_get( PAIR_CAR( v2329 ), c2370 );
        POPSTACKTRACE( SET( gencode_init_2dmodules_v, 
                            sc_cons( X4, gencode_init_2dmodules_v ) ) );
L3361:
        POPSTACKTRACE( FALSEVALUE );
L3359:
        POPSTACKTRACE( FALSEVALUE );
L3357:
        POPSTACKTRACE( FALSEVALUE );
L3352:
        POPSTACKTRACE( FALSEVALUE );
L3331:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( gencode_ern_2dargl_18fb6091_v );
DEFCSTRING( t3363, "EMIT-C-EXTERN-ARGL" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  gencode_c2403( v2407 )
        TSCP  v2407;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "CTYPES [inside EMIT-C-EXTERN-ARGL]" );
        X1 = v2407;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3368:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3369;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3372;
        scrt1__24__car_2derror( X1 );
L3372:
        X6 = PAIR_CAR( X1 );
        X7 = scrt1_assq( X6, c2458 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3376;
        scrt1__24__cdr_2derror( X7 );
L3376:
        X5 = PAIR_CDR( X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3379;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3368 );
L3379:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3384;
        scdebug_error( c2442, 
                       c2443, CONS( X3, EMPTYLIST ) );
L3384:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3368 );
L3369:
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( gencode_c2403, XAL1( TSCP ) );

TSCP  gencode_ern_2dargl_18fb6091( l2401 )
        TSCP  l2401;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3363 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2405;
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = plist_get( l2401, c2247 );
        X3 = plist_get( l2401, c2496 );
        if  ( FALSE( X2 ) )  goto L3387;
        X6 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3390;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L3391;
L3390:
        X5 = scrt2__2b_2dtwo( X6, _TSCP( 8 ) );
L3391:
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3393;
        scdebug_error( c2467, 
                       c2468, CONS( X6, EMPTYLIST ) );
L3393:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3395;
        scdebug_error( c2467, 
                       c2471, CONS( X5, EMPTYLIST ) );
L3395:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3397;
        scdebug_error( c2467, 
                       c2475, CONS( X5, EMPTYLIST ) );
L3397:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2403( X3 );
        X8 = gencode_c2403( X2 );
        X9 = scrt1_cons_2a( c2493, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X7 = scrt1_append_2dtwo( X8, X9 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3387:
        X5 = scrt1_length( X3 );
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3400;
        scdebug_error( c2467, 
                       c2468, CONS( X6, EMPTYLIST ) );
L3400:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3402;
        scdebug_error( c2467, 
                       c2471, CONS( X5, EMPTYLIST ) );
L3402:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3404;
        scdebug_error( c2467, 
                       c2475, CONS( X5, EMPTYLIST ) );
L3404:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2403( X3 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
}

DEFTSCP( gencode_emit_2dextern_2dargl_v );
DEFCSTRING( t3406, "EMIT-EXTERN-ARGL" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( gencode_l2518, XAL1( TSCP ) );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  gencode_l2518( i2520 )
        TSCP  i2520;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EMIT-EXTERN-ARGL]" );
        if  ( NEQ( TSCPTAG( i2520 ), FIXNUMTAG ) )  goto L3428;
        if  ( NEQ( _S2CUINT( i2520 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L3432;
        POPSTACKTRACE( EMPTYLIST );
L3428:
        if  ( FALSE( scrt2_zero_3f( i2520 ) ) )  goto L3432;
        POPSTACKTRACE( EMPTYLIST );
L3432:
        if  ( BITAND( BITOR( _S2CINT( i2520 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3435;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( i2520 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3436;
L3435:
        X2 = scrt2__2d_2dtwo( i2520, _TSCP( 4 ) );
L3436:
        X1 = gencode_l2518( X2 );
        POPSTACKTRACE( sc_cons( c2530, X1 ) );
}

TSCP  gencode_emit_2dextern_2dargl( l2500 )
        TSCP  l2500;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3406 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2405;
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( plist_get( l2500, c2556 ) ) )  goto L3409;
        X4 = _TSCP( 4 );
        goto L3410;
L3409:
        X4 = _TSCP( 0 );
L3410:
        X6 = plist_get( l2500, c2247 );
        X5 = scrt1_length( X6 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3412;
        X3 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L3413;
L3412:
        X3 = scrt2__2b_2dtwo( X5, X4 );
L3413:
        X5 = plist_get( l2500, c2496 );
        X4 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3415;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L3416;
L3415:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L3416:
        X4 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L3419;
        scdebug_error( c2467, 
                       c2468, CONS( X4, EMPTYLIST ) );
L3419:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3421;
        scdebug_error( c2467, 
                       c2471, CONS( X2, EMPTYLIST ) );
L3421:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L3423;
        scdebug_error( c2467, 
                       c2475, CONS( X2, EMPTYLIST ) );
L3423:
        X3 = VECTOR_ELEMENT( X4, X2 );
        X4 = gencode_l2518( X2 );
        POPSTACKTRACE( sc_cons( X3, X4 ) );
}

DEFTSCP( gencode_t__modules_bfe186ca_v );
DEFCSTRING( t3437, "GENERATE-INIT_MODULES" );

TSCP  gencode_t__modules_bfe186ca(  )
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3437 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        lap_emit_2dlap( c2560 );
        lap_emit_2dlap( c2561 );
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        X3 = SYMBOL_VALUE( with_2dmodules_v );
        X2 = scrt1_append_2dtwo( gencode_init_2dmodules_v, X3 );
        X3 = X2;
L3442:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3443;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3447;
        scrt1__24__car_2derror( X3 );
L3447:
        X4 = PAIR_CAR( X3 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( c2585, EMPTYLIST );
        X5 = scrt1_cons_2a( c2072, 
                            CONS( scrt3_string_2dappend( CONS( X4, X7 ) ), 
                                  X6 ) );
        lap_emit_2dlap( X5 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3442 );
L3443:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2587, 
                            CONS( gencode_max_2ddisplay_v, X3 ) );
        lap_emit_2dlap( X2 );
        lap_emit_2dlap( c2143 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2072, CONS( c2588, X3 ) );
        lap_emit_2dlap( X2 );
        X2 = lap_save_2dcurrent_2dlap( X1 );
        POPSTACKTRACE( lap_done_2dlap( X2 ) );
}

DEFTSCP( gencode_constant_2dsymbols_v );
DEFCSTRING( t3451, "CONSTANT-SYMBOLS" );
DEFTSCP( gencode_bol_2dport_c6b2ebee_v );
DEFCSTRING( t3452, "CONSTANT-SYMBOL-PORT" );
DEFTSCP( gencode_emit_2dconstants_v );
DEFCSTRING( t3453, "EMIT-CONSTANTS" );
EXTERNTSCPP( scrt5_open_2doutput_2dstring, XAL0(  ) );
EXTERNTSCP( scrt5_open_2doutput_2dstring_v );
EXTERNTSCPP( lap_save_2dlap_2dtemps, XAL0(  ) );
EXTERNTSCP( lap_save_2dlap_2dtemps_v );
EXTERNTSCPP( gencode_emit_2dconstant, XAL2( TSCP, TSCP ) );
EXTERNTSCP( gencode_emit_2dconstant_v );
EXTERNTSCPP( lap_restore_2dlap_2dtemps, XAL1( TSCP ) );
EXTERNTSCP( lap_restore_2dlap_2dtemps_v );

TSCP  gencode_emit_2dconstants(  )
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3453 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        gencode_constant_2dsymbols_v = EMPTYLIST;
        gencode_bol_2dport_c6b2ebee_v = scrt5_open_2doutput_2dstring(  );
        lap_emit_2dlap( c2594 );
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2595 );
        X2 = SYMBOL_VALUE( quote_2dconstants_v );
        X3 = X2;
L3458:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3459;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3463;
        scrt1__24__car_2derror( X3 );
L3463:
        X4 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3467;
        scrt1__24__cdr_2derror( X4 );
L3467:
        X6 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3470;
        scrt1__24__car_2derror( X6 );
L3470:
        X5 = PAIR_CAR( X6 );
        X6 = PAIR_CAR( X4 );
        X7 = lap_save_2dlap_2dtemps(  );
        gencode_emit_2dconstant( X5, X6 );
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L3476;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L3476;
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2632, 
                            CONS( scrt1_cons_2a( c2633, 
                                                 CONS( expform_vname( X5 ), 
                                                       X10 ) ), 
                                  X9 ) );
        lap_emit_2dlap( X8 );
L3476:
        lap_restore_2dlap_2dtemps( X7 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3458 );
L3459:
        lap_emit_2dlap( c2143 );
        lap_emit_2dlap( c2144 );
        POPSTACKTRACE( lap_save_2dcurrent_2dlap( X1 ) );
}

DEFTSCP( gencode_emit_2dconstant_v );
DEFCSTRING( t3479, "EMIT-CONSTANT" );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt2_remainder, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_remainder_v );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
EXTERNTSCPP( scrt2_quotient, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_quotient_v );
EXTERNTSCPP( scrt2_abs, XAL1( TSCP ) );
EXTERNTSCP( scrt2_abs_v );
EXTERNTSCPP( scrt6_get_2doutput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt6_get_2doutput_2dstring_v );
EXTERNTSCPP( gencode_ant_2dlist_82e6441b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( gencode_ant_2dlist_82e6441b_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  gencode_emit_2dconstant( v2650, c2651 )
        TSCP  v2650, c2651;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3479 );
        if  ( NEQ( TSCPTAG( c2651 ), FIXNUMTAG ) )  goto L3481;
        scrt6_display( c2693, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( c2651 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3484;
        X1 = BOOLEAN( GT( _S2CINT( c2651 ), 
                          _S2CINT( _TSCP( 8 ) ) ) );
        goto L3485;
L3484:
        X1 = scrt2__3e_2dtwo( c2651, _TSCP( 8 ) );
L3485:
        if  ( TRUE( X1 ) )  goto L3490;
        if  ( BITAND( BITOR( _S2CINT( c2651 ), 
                             _S2CINT( _TSCP( -8 ) ) ), 
                      3 ) )  goto L3492;
        if  ( LT( _S2CINT( c2651 ), _S2CINT( _TSCP( -8 ) ) ) )  goto L3490;
        goto L3497;
L3492:
        if  ( TRUE( scrt2__3c_2dtwo( c2651, _TSCP( -8 ) ) ) )  goto L3490;
L3497:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2651 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3507;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3507;
        X4 = _TSCP( REMAINDER( _S2CINT( c2651 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3508;
L3507:
        X4 = scrt2_remainder( c2651, _TSCP( 40 ) );
L3508:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3510;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3511;
L3510:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3511:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L3519;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3519;
        X2 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3520;
L3519:
        X2 = scrt2_remainder( X3, _TSCP( 40 ) );
L3520:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        goto L3500;
L3490:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2651 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3528;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3528;
        X4 = C_FIXED( QUOTIENT( _S2CINT( c2651 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3529;
L3528:
        X4 = scrt2_quotient( c2651, _TSCP( 40 ) );
L3529:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3531;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3532;
L3531:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3532:
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2651 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L3539;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3539;
        X6 = _TSCP( REMAINDER( _S2CINT( c2651 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3540;
L3539:
        X6 = scrt2_remainder( c2651, _TSCP( 40 ) );
L3540:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L3542;
        X5 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X6 ) ) );
        goto L3543;
L3542:
        X5 = scrt2__2a_2dtwo( _TSCP( 16 ), X6 );
L3543:
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3551;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3551;
        X4 = C_FIXED( QUOTIENT( _S2CINT( X5 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3552;
L3551:
        X4 = scrt2_quotient( X5, _TSCP( 40 ) );
L3552:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3554;
        X2 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X4 ) ) );
        goto L3555;
L3554:
        X2 = scrt2__2b_2dtwo( X3, X4 );
L3555:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2651 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3562;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3562;
        X5 = _TSCP( REMAINDER( _S2CINT( c2651 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3563;
L3562:
        X5 = scrt2_remainder( c2651, _TSCP( 40 ) );
L3563:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L3565;
        X4 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X5 ) ) );
        goto L3566;
L3565:
        X4 = scrt2__2a_2dtwo( _TSCP( 16 ), X5 );
L3566:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X4 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3574;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3574;
        X3 = _TSCP( REMAINDER( _S2CINT( X4 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3575;
L3574:
        X3 = scrt2_remainder( X4, _TSCP( 40 ) );
L3575:
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3577;
        if  ( LT( _S2CINT( X3 ), 0 ) )  goto L3582;
        X2 = X3;
        goto L3583;
L3577:
        X2 = scrt2_abs( X3 );
        goto L3583;
L3582:
        X2 = _TSCP( INEGATE( _S2CINT( X3 ) ) );
L3583:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
L3500:
        scrt6_display( c2714, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2650, c2718, X1 ) );
L3481:
        if  ( NOT( AND( EQ( TSCPTAG( c2651 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2651 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3584;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2676, 
                            CONS( expform_vname( v2650 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2720, CONS( c2651, X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2668, 
                            CONS( expform_vname( v2650 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3584:
        if  ( NEQ( TSCPIMMEDIATETAG( c2651 ), CHARACTERTAG ) )  goto L3587;
        scrt6_display( c2693, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X3 = CHAR_FIX( c2651 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 1024 ) ) ), 
                      3 ) )  goto L3592;
        X2 = _TSCP( ITIMES( FIXED_C( X3 ), 
                            _S2CINT( _TSCP( 1024 ) ) ) );
        goto L3593;
L3592:
        X2 = scrt2__2a_2dtwo( X3, _TSCP( 1024 ) );
L3593:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 72 ) ) ), 
                      3 ) )  goto L3595;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 72 ) ) ) );
        goto L3596;
L3595:
        X1 = scrt2__2b_2dtwo( X2, _TSCP( 72 ) );
L3596:
        scrt6_write( X1, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        scrt6_display( c2714, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2650, c2718, X1 ) );
L3587:
        if  ( NOT( AND( EQ( TSCPTAG( c2651 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2651 ), STRINGTAG ) ) )
            )  goto L3597;
        X1 = gencode_make_2dc_2dglobal(  );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2101, CONS( c2651, X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2691, 
                            CONS( expform_vname( X1 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2676, 
                            CONS( expform_vname( v2650 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2680, 
                                  CONS( expform_vname( X1 ), X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2668, 
                            CONS( expform_vname( v2650 ), X3 ) );
        POPSTACKTRACE( lap_emit_2dlap( X2 ) );
L3597:
        if  ( NOT( AND( EQ( TSCPTAG( c2651 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2651 ), SYMBOLTAG ) ) )
            )  goto L3600;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2676, 
                            CONS( expform_vname( v2650 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2679, 
                                  CONS( scrt1_cons_2a( c2680, 
                                                       CONS( scrt1_cons_2a( c2101, 
                                                                            CONS( SYMBOL_NAME( c2651 ), 
                                                                                  X5 ) ), 
                                                             X4 ) ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2668, 
                            CONS( expform_vname( v2650 ), X2 ) );
        lap_emit_2dlap( X1 );
        X3 = sc_cons( v2650, EMPTYLIST );
        X2 = sc_cons( c2651, X3 );
        X1 = X2;
        POPSTACKTRACE( SET( gencode_constant_2dsymbols_v, 
                            sc_cons( X1, gencode_constant_2dsymbols_v ) ) );
L3600:
        if  ( NEQ( TSCPTAG( c2651 ), PAIRTAG ) )  goto L3605;
        X1 = plist_get( v2650, c2223 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2320 ) ) )  goto L3608;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2676, 
                            CONS( expform_vname( v2650 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
L3608:
        X1 = expform_vname( v2650 );
        POPSTACKTRACE( gencode_ant_2dlist_82e6441b( X1, c2651 ) );
L3605:
        if  ( NOT( AND( EQ( TSCPTAG( c2651 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2651 ), VECTORTAG ) ) )
            )  goto L3610;
        X1 = scrt4_vector_2d_3elist( c2651 );
        gencode_emit_2dconstant( v2650, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2669, 
                                  CONS( expform_vname( v2650 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2668, 
                            CONS( expform_vname( v2650 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3610:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2666, 
                                                    c2651, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_ant_2dlist_82e6441b_v );
DEFCSTRING( t3613, "EMIT-CONSTANT-LIST" );
EXTERNTSCPP( gencode__2delement_28e1d5cf, XAL1( TSCP ) );
EXTERNTSCP( gencode__2delement_28e1d5cf_v );

TSCP  gencode_ant_2dlist_82e6441b( v2879, c2880 )
        TSCP  v2879, c2880;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3613 );
        if  ( NEQ( TSCPTAG( c2880 ), PAIRTAG ) )  goto L3615;
        X1 = PAIR_CDR( c2880 );
        gencode_ant_2dlist_82e6441b( v2879, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( v2879, X3 );
        X4 = PAIR_CAR( c2880 );
        X2 = CONS( scrt1_cons_2a( c2889, 
                                  CONS( gencode__2delement_28e1d5cf( X4 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2668, CONS( v2879, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3615:
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( gencode__2delement_28e1d5cf( c2880 ), X2 );
        X1 = scrt1_cons_2a( c2668, CONS( v2879, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
}

DEFTSCP( gencode__2delement_28e1d5cf_v );
DEFCSTRING( t3620, "EMIT-CONSTANT-ELEMENT" );
EXTERNTSCP( sc_emptystring );
EXTERNTSCP( sc_emptyvector );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  gencode__2delement_28e1d5cf( c2895 )
        TSCP  c2895;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3620 );
        if  ( EQ( _S2CUINT( c2895 ), _S2CUINT( TRUEVALUE ) ) )  goto L3622;
        if  ( EQ( _S2CUINT( c2895 ), _S2CUINT( EMPTYLIST ) ) )  goto L3624;
        if  ( EQ( _S2CUINT( c2895 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3626;
        if  ( TRUE( scrt1_equal_3f( c2895, sc_emptystring ) )
            )  goto L3628;
        if  ( TRUE( scrt1_equal_3f( c2895, sc_emptyvector ) )
            )  goto L3630;
        X1 = BOOLEAN( EQ( TSCPTAG( c2895 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L3636;
        if  ( EQ( TSCPIMMEDIATETAG( c2895 ), CHARACTERTAG ) )  goto L3636;
        if  ( NEQ( TSCPTAG( c2895 ), PAIRTAG ) )  goto L3639;
        X2 = lap_use_2dlap_2dtemp(  );
        X3 = expform_vname( X2 );
        gencode_ant_2dlist_82e6441b( X3, c2895 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2718 ) );
L3639:
        if  ( NOT( AND( EQ( TSCPTAG( c2895 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2895 ), VECTORTAG ) ) )
            )  goto L3642;
        X2 = lap_use_2dlap_2dtemp(  );
        gencode_emit_2dconstant( X2, c2895 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2718 ) );
L3642:
        if  ( NOT( AND( EQ( TSCPTAG( c2895 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2895 ), SYMBOLTAG ) ) )
            )  goto L3645;
        X2 = scrt1_assq( c2895, gencode_constant_2dsymbols_v );
        goto L3646;
L3645:
        X2 = FALSEVALUE;
L3646:
        if  ( FALSE( X2 ) )  goto L3648;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3651;
        scrt1__24__cdr_2derror( X2 );
L3651:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3654;
        scrt1__24__car_2derror( X4 );
L3654:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( expform_vname( X3 ) );
L3648:
        X3 = gencode_make_2dc_2dglobal(  );
        gencode_emit_2dconstant( X3, c2895 );
        POPSTACKTRACE( plist_get( X3, c2718 ) );
L3630:
        POPSTACKTRACE( c2950 );
L3628:
        POPSTACKTRACE( c2951 );
L3626:
        POPSTACKTRACE( c2952 );
L3624:
        POPSTACKTRACE( c2953 );
L3622:
        POPSTACKTRACE( c2954 );
L3636:
        POPSTACKTRACE( gencode_emit_2dconstant( c2949, c2895 ) );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        scrt6__init();
        scrt5__init();
        scdebug__init();
        scrt2__init();
        plist__init();
        scrt1__init();
        expform__init();
        lap__init();
        scrt3__init();
        MAXDISPLAY( 0 );
}

void  gencode__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(gencode SCHEME->C COMPILER 15mar93jfb)" );
        INITIALIZEVAR( t3196, 
                       ADR( gencode_e_2dlambda_7a3ae383_v ), 
                       c2048 );
        INITIALIZEVAR( t3197, 
                       ADR( gencode_e_2dstring_8ca45c6a_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3198, 
                       ADR( gencode_init_2dmodules_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3199, 
                       ADR( gencode_free_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3200, 
                       ADR( gencode_max_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3201, 
                       ADR( gencode_ion_2dinfo_cc47b64b_v ), 
                       c2055 );
        INITIALIZEVAR( t3202, 
                       ADR( gencode_ion_2dinfo_f92fd619_v ), 
                       gencode_ion_2dinfo_cc47b64b_v );
        INITIALIZEVAR( t3203, 
                       ADR( gencode_error_2did_v ), FALSEVALUE );
        INITIALIZEVAR( t3204, 
                       ADR( gencode__24__car_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3205, 
                       ADR( gencode__24__cdr_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3206, 
                       ADR( gencode_generate_2dcode_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_generate_2dcode, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3241, 
                       ADR( gencode_exp_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      gencode_exp_2dgenc, EMPTYLIST ) );
        INITIALIZEVAR( t3275, 
                       ADR( gencode_make_2dlabel_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3277, 
                       ADR( gencode_code_2dlabel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_code_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3283, 
                       ADR( gencode_make_2dc_2dglobal_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dc_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3285, 
                       ADR( gencode_optional_2dargs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_optional_2dargs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3292, 
                       ADR( gencode_lookup_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, gencode_lookup, EMPTYLIST ) );
        INITIALIZEVAR( t3319, 
                       ADR( gencode_var_2din_2dstack_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2din_2dstack, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3321, 
                       ADR( gencode_var_2dis_2dglobal_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3323, 
                       ADR( gencode_var_2dis_2dconstant_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3325, 
                       ADR( gencode_op_2dlevel_343ff0cb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_op_2dlevel_343ff0cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3327, 
                       ADR( gencode_emit_2dextern_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern, EMPTYLIST ) );
        INITIALIZEVAR( t3363, 
                       ADR( gencode_ern_2dargl_18fb6091_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_ern_2dargl_18fb6091, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3406, 
                       ADR( gencode_emit_2dextern_2dargl_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern_2dargl, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3437, 
                       ADR( gencode_t__modules_bfe186ca_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_t__modules_bfe186ca, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3451, 
                       ADR( gencode_constant_2dsymbols_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3452, 
                       ADR( gencode_bol_2dport_c6b2ebee_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3453, 
                       ADR( gencode_emit_2dconstants_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_emit_2dconstants, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3479, 
                       ADR( gencode_emit_2dconstant_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_emit_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3613, 
                       ADR( gencode_ant_2dlist_82e6441b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_ant_2dlist_82e6441b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3620, 
                       ADR( gencode__2delement_28e1d5cf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode__2delement_28e1d5cf, 
                                      EMPTYLIST ) );
        return;
}
