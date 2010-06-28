
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
DEFCSTRING( t3036, "TRUEVALUE" );
DEFSTATICTSCP( c2955 );
DEFCSTRING( t3037, "EMPTYLIST" );
DEFSTATICTSCP( c2954 );
DEFCSTRING( t3038, "FALSEVALUE" );
DEFSTATICTSCP( c2953 );
DEFCSTRING( t3039, "EMPTYSTRING" );
DEFSTATICTSCP( c2952 );
DEFCSTRING( t3040, "EMPTYVECTOR" );
DEFSTATICTSCP( c2951 );
DEFSTATICTSCP( c2950 );
DEFSTATICTSCP( c2890 );
DEFSTATICTSCP( c2721 );
DEFSTATICTSCP( c2719 );
DEFCSTRING( t3041, " )" );
DEFSTATICTSCP( c2715 );
DEFCSTRING( t3042, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c2712 );
DEFSTATICTSCP( c2711 );
DEFCSTRING( t3043, "_TSCP( " );
DEFSTATICTSCP( c2694 );
DEFSTATICTSCP( c2692 );
DEFCSTRING( t3044, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2687 );
DEFSTATICTSCP( c2686 );
DEFSTATICTSCP( c2681 );
DEFSTATICTSCP( c2680 );
DEFSTATICTSCP( c2677 );
DEFSTATICTSCP( c2670 );
DEFSTATICTSCP( c2669 );
DEFCSTRING( t3045, "EMIT-CONSTANT compile error:" );
DEFSTATICTSCP( c2667 );
DEFSTATICTSCP( c2634 );
DEFSTATICTSCP( c2633 );
DEFSTATICTSCP( c2596 );
DEFSTATICTSCP( t3046 );
DEFSTATICTSCP( c2595 );
DEFCSTRING( t3048, "static void  init_constants()" );
DEFSTATICTSCP( t3047 );
DEFSTATICTSCP( t3049 );
DEFCSTRING( t3050, "}" );
DEFSTATICTSCP( c2589 );
DEFSTATICTSCP( c2588 );
DEFCSTRING( t3051, "__init();" );
DEFSTATICTSCP( c2586 );
DEFSTATICTSCP( c2562 );
DEFCSTRING( t3053, "        char *compiler_version;" );
DEFSTATICTSCP( t3052 );
DEFSTATICTSCP( c2561 );
DEFCSTRING( t3055, "static void  init_modules( compiler_version )" );
DEFSTATICTSCP( t3054 );
DEFSTATICTSCP( c2557 );
DEFSTATICTSCP( c2531 );
DEFSTATICTSCP( c2497 );
DEFCSTRING( t3056, "..." );
DEFSTATICTSCP( c2494 );
DEFCSTRING( t3057, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2476 );
DEFCSTRING( t3058, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2472 );
DEFCSTRING( t3059, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2469 );
DEFSTATICTSCP( c2468 );
DEFSTATICTSCP( c2459 );
DEFCSTRING( t3061, "double" );
DEFSTATICTSCP( t3060 );
DEFSTATICTSCP( t3062 );
DEFCSTRING( t3064, "float" );
DEFSTATICTSCP( t3063 );
DEFSTATICTSCP( t3065 );
DEFCSTRING( t3067, "long unsigned" );
DEFSTATICTSCP( t3066 );
DEFSTATICTSCP( t3068 );
DEFCSTRING( t3070, "short unsigned" );
DEFSTATICTSCP( t3069 );
DEFSTATICTSCP( t3071 );
DEFCSTRING( t3073, "unsigned" );
DEFSTATICTSCP( t3072 );
DEFSTATICTSCP( t3074 );
DEFCSTRING( t3076, "long int" );
DEFSTATICTSCP( t3075 );
DEFSTATICTSCP( t3077 );
DEFCSTRING( t3079, "short int" );
DEFSTATICTSCP( t3078 );
DEFSTATICTSCP( t3080 );
DEFCSTRING( t3082, "int" );
DEFSTATICTSCP( t3081 );
DEFSTATICTSCP( t3083 );
DEFCSTRING( t3085, "char" );
DEFSTATICTSCP( t3084 );
DEFSTATICTSCP( t3086 );
DEFCSTRING( t3088, "TSCP" );
DEFSTATICTSCP( t3087 );
DEFCSTRING( t3090, "void*" );
DEFSTATICTSCP( t3089 );
DEFSTATICTSCP( t3091 );
DEFCSTRING( t3093, "void*" );
DEFSTATICTSCP( t3092 );
DEFSTATICTSCP( t3094 );
DEFCSTRING( t3096, "void" );
DEFSTATICTSCP( t3095 );
DEFSTATICTSCP( t3097 );
DEFCSTRING( t3098, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2444 );
DEFSTATICTSCP( c2443 );
DEFSTATICTSCP( c2406 );
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
DEFSTATICTSCP( t3125 );
DEFSTATICTSCP( c2400 );
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
DEFSTATICTSCP( t3138 );
DEFSTATICTSCP( c2382 );
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
DEFSTATICTSCP( t3150 );
DEFSTATICTSCP( c2371 );
DEFSTATICTSCP( c2367 );
DEFCSTRING( t3152, "sc" );
DEFSTATICTSCP( t3151 );
DEFSTATICTSCP( c2359 );
DEFSTATICTSCP( c2353 );
DEFSTATICTSCP( c2341 );
DEFSTATICTSCP( c2336 );
DEFSTATICTSCP( c2333 );
DEFSTATICTSCP( c2321 );
DEFSTATICTSCP( c2306 );
DEFSTATICTSCP( c2298 );
DEFCSTRING( t3153, "SYMBOL does not have a value cell" );
DEFSTATICTSCP( c2295 );
DEFSTATICTSCP( c2292 );
DEFSTATICTSCP( c2277 );
DEFSTATICTSCP( c2274 );
DEFCSTRING( t3154, "DISPLAY" );
DEFSTATICTSCP( c2273 );
DEFSTATICTSCP( c2272 );
DEFSTATICTSCP( c2267 );
DEFCSTRING( t3155, "Variable is not bound" );
DEFSTATICTSCP( c2266 );
DEFSTATICTSCP( c2248 );
DEFSTATICTSCP( c2242 );
DEFSTATICTSCP( c2241 );
DEFSTATICTSCP( c2236 );
DEFSTATICTSCP( c2226 );
DEFSTATICTSCP( c2225 );
DEFSTATICTSCP( c2224 );
DEFSTATICTSCP( c2223 );
DEFCSTRING( t3156, "Illegal use of LAP" );
DEFSTATICTSCP( c2214 );
DEFCSTRING( t3157, "GENERATE-CODE compiler error" );
DEFSTATICTSCP( c2213 );
DEFSTATICTSCP( c2212 );
DEFSTATICTSCP( c2204 );
DEFSTATICTSCP( c2196 );
DEFSTATICTSCP( c2188 );
DEFSTATICTSCP( c2180 );
DEFSTATICTSCP( c2172 );
DEFCSTRING( t3158, "main" );
DEFSTATICTSCP( c2158 );
DEFCSTRING( t3159, "__init" );
DEFSTATICTSCP( c2157 );
DEFCSTRING( t3160, "Compiler error - display index is not 0" );
DEFSTATICTSCP( c2155 );
DEFSTATICTSCP( c2145 );
DEFCSTRING( t3162, "}" );
DEFSTATICTSCP( t3161 );
DEFSTATICTSCP( c2144 );
DEFSTATICTSCP( t3163 );
DEFSTATICTSCP( c2141 );
DEFCSTRING( t3165, "SCHEMEEXIT();" );
DEFSTATICTSCP( t3164 );
DEFCSTRING( t3166, "( CLARGUMENTS( argc, argv ) );" );
DEFSTATICTSCP( c2140 );
DEFCSTRING( t3167, "Main procedure is not defined" );
DEFSTATICTSCP( c2139 );
DEFCSTRING( t3168, "__init(){}" );
DEFSTATICTSCP( c2137 );
DEFSTATICTSCP( c2134 );
DEFCSTRING( t3170, "void" );
DEFSTATICTSCP( t3169 );
DEFSTATICTSCP( t3171 );
DEFSTATICTSCP( c2133 );
DEFSTATICTSCP( c2108 );
DEFCSTRING( t3173, "sc_segv__handlers();" );
DEFSTATICTSCP( t3172 );
DEFCSTRING( t3174, " );" );
DEFSTATICTSCP( c2107 );
DEFCSTRING( t3175, ")" );
DEFSTATICTSCP( c2106 );
DEFCSTRING( t3176, " SCHEME->C COMPILER " );
DEFSTATICTSCP( c2104 );
DEFCSTRING( t3177, "(" );
DEFSTATICTSCP( c2102 );
DEFSTATICTSCP( c2101 );
DEFCSTRING( t3178, "init_modules( " );
DEFSTATICTSCP( c2100 );
DEFSTATICTSCP( c2098 );
DEFCSTRING( t3180, "init_constants();" );
DEFSTATICTSCP( t3179 );
DEFSTATICTSCP( c2097 );
DEFCSTRING( t3181, "argv" );
DEFSTATICTSCP( c2094 );
DEFCSTRING( t3182, "argc" );
DEFSTATICTSCP( c2093 );
DEFSTATICTSCP( c2091 );
DEFSTATICTSCP( c2090 );
DEFCSTRING( t3184, "init = 1;" );
DEFSTATICTSCP( t3183 );
DEFSTATICTSCP( c2089 );
DEFCSTRING( t3186, "if  (init)  return;" );
DEFSTATICTSCP( t3185 );
DEFSTATICTSCP( c2088 );
DEFCSTRING( t3188, "static int  init = 0;" );
DEFSTATICTSCP( t3187 );
DEFSTATICTSCP( c2087 );
DEFSTATICTSCP( c2086 );
DEFSTATICTSCP( c2085 );
DEFCSTRING( t3190, "{" );
DEFSTATICTSCP( t3189 );
DEFSTATICTSCP( c2084 );
DEFCSTRING( t3192, "        int argc;  char *argv[];" );
DEFSTATICTSCP( t3191 );
DEFSTATICTSCP( c2083 );
DEFCSTRING( t3194, "main( argc, argv )" );
DEFSTATICTSCP( t3193 );
DEFCSTRING( t3195, "()" );
DEFSTATICTSCP( c2081 );
DEFCSTRING( t3196, "void  " );
DEFSTATICTSCP( c2080 );
DEFSTATICTSCP( c2078 );
DEFCSTRING( t3197, "#include " );
DEFSTATICTSCP( c2074 );
DEFCSTRING( t3198, "/* SCHEME->C */" );
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
        c2955 = CSTRING_TSCP( t3036 );
        CONSTANTEXP( ADR( c2955 ) );
        c2954 = CSTRING_TSCP( t3037 );
        CONSTANTEXP( ADR( c2954 ) );
        c2953 = CSTRING_TSCP( t3038 );
        CONSTANTEXP( ADR( c2953 ) );
        c2952 = CSTRING_TSCP( t3039 );
        CONSTANTEXP( ADR( c2952 ) );
        c2951 = CSTRING_TSCP( t3040 );
        CONSTANTEXP( ADR( c2951 ) );
        c2950 = STRINGTOSYMBOL( CSTRING_TSCP( "EMIT-CONSTANT-KLUDGE" ) );
        CONSTANTEXP( ADR( c2950 ) );
        c2890 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2890 ) );
        c2721 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE_TSCP" ) );
        CONSTANTEXP( ADR( c2721 ) );
        c2719 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2719 ) );
        c2715 = CSTRING_TSCP( t3041 );
        CONSTANTEXP( ADR( c2715 ) );
        c2712 = CSTRING_TSCP( t3042 );
        CONSTANTEXP( ADR( c2712 ) );
        c2711 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c2711 ) );
        c2694 = CSTRING_TSCP( t3043 );
        CONSTANTEXP( ADR( c2694 ) );
        c2692 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFCSTRING" ) );
        CONSTANTEXP( ADR( c2692 ) );
        c2687 = CSTRING_TSCP( t3044 );
        CONSTANTEXP( ADR( c2687 ) );
        c2686 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2686 ) );
        c2681 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING_TSCP" ) );
        CONSTANTEXP( ADR( c2681 ) );
        c2680 = STRINGTOSYMBOL( CSTRING_TSCP( "STRINGTOSYMBOL" ) );
        CONSTANTEXP( ADR( c2680 ) );
        c2677 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFSTATICTSCP" ) );
        CONSTANTEXP( ADR( c2677 ) );
        c2670 = STRINGTOSYMBOL( CSTRING_TSCP( "LISTTOVECTOR" ) );
        CONSTANTEXP( ADR( c2670 ) );
        c2669 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2669 ) );
        c2667 = CSTRING_TSCP( t3045 );
        CONSTANTEXP( ADR( c2667 ) );
        c2634 = STRINGTOSYMBOL( CSTRING_TSCP( "ADR" ) );
        CONSTANTEXP( ADR( c2634 ) );
        c2633 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANTEXP" ) );
        CONSTANTEXP( ADR( c2633 ) );
        c2596 = EMPTYLIST;
        t3046 = STRINGTOSYMBOL( CSTRING_TSCP( "LOCALS" ) );
        c2596 = CONS( t3046, c2596 );
        CONSTANTEXP( ADR( c2596 ) );
        c2595 = EMPTYLIST;
        t3047 = CSTRING_TSCP( t3048 );
        c2595 = CONS( t3047, c2595 );
        t3049 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        c2595 = CONS( t3049, c2595 );
        CONSTANTEXP( ADR( c2595 ) );
        c2589 = CSTRING_TSCP( t3050 );
        CONSTANTEXP( ADR( c2589 ) );
        c2588 = STRINGTOSYMBOL( CSTRING_TSCP( "MAXDISPLAY" ) );
        CONSTANTEXP( ADR( c2588 ) );
        c2586 = CSTRING_TSCP( t3051 );
        CONSTANTEXP( ADR( c2586 ) );
        c2562 = EMPTYLIST;
        t3052 = CSTRING_TSCP( t3053 );
        c2562 = CONS( t3052, c2562 );
        c2562 = CONS( t3049, c2562 );
        CONSTANTEXP( ADR( c2562 ) );
        c2561 = EMPTYLIST;
        t3054 = CSTRING_TSCP( t3055 );
        c2561 = CONS( t3054, c2561 );
        c2561 = CONS( t3049, c2561 );
        CONSTANTEXP( ADR( c2561 ) );
        c2557 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        CONSTANTEXP( ADR( c2557 ) );
        c2531 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP" ) );
        CONSTANTEXP( ADR( c2531 ) );
        c2497 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2497 ) );
        c2494 = CSTRING_TSCP( t3056 );
        CONSTANTEXP( ADR( c2494 ) );
        c2476 = CSTRING_TSCP( t3057 );
        CONSTANTEXP( ADR( c2476 ) );
        c2472 = CSTRING_TSCP( t3058 );
        CONSTANTEXP( ADR( c2472 ) );
        c2469 = CSTRING_TSCP( t3059 );
        CONSTANTEXP( ADR( c2469 ) );
        c2468 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2468 ) );
        c2459 = EMPTYLIST;
        t3060 = CSTRING_TSCP( t3061 );
        X1 = t3060;
        t3062 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        X1 = CONS( t3062, X1 );
        c2459 = CONS( X1, c2459 );
        t3063 = CSTRING_TSCP( t3064 );
        X1 = t3063;
        t3065 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        X1 = CONS( t3065, X1 );
        c2459 = CONS( X1, c2459 );
        t3066 = CSTRING_TSCP( t3067 );
        X1 = t3066;
        t3068 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        X1 = CONS( t3068, X1 );
        c2459 = CONS( X1, c2459 );
        t3069 = CSTRING_TSCP( t3070 );
        X1 = t3069;
        t3071 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        X1 = CONS( t3071, X1 );
        c2459 = CONS( X1, c2459 );
        t3072 = CSTRING_TSCP( t3073 );
        X1 = t3072;
        t3074 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        X1 = CONS( t3074, X1 );
        c2459 = CONS( X1, c2459 );
        t3075 = CSTRING_TSCP( t3076 );
        X1 = t3075;
        t3077 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        X1 = CONS( t3077, X1 );
        c2459 = CONS( X1, c2459 );
        t3078 = CSTRING_TSCP( t3079 );
        X1 = t3078;
        t3080 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        X1 = CONS( t3080, X1 );
        c2459 = CONS( X1, c2459 );
        t3081 = CSTRING_TSCP( t3082 );
        X1 = t3081;
        t3083 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        X1 = CONS( t3083, X1 );
        c2459 = CONS( X1, c2459 );
        t3084 = CSTRING_TSCP( t3085 );
        X1 = t3084;
        t3086 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        X1 = CONS( t3086, X1 );
        c2459 = CONS( X1, c2459 );
        t3087 = CSTRING_TSCP( t3088 );
        X1 = t3087;
        X1 = CONS( c2531, X1 );
        c2459 = CONS( X1, c2459 );
        t3089 = CSTRING_TSCP( t3090 );
        X1 = t3089;
        t3091 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        X1 = CONS( t3091, X1 );
        c2459 = CONS( X1, c2459 );
        t3092 = CSTRING_TSCP( t3093 );
        X1 = t3092;
        t3094 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        X1 = CONS( t3094, X1 );
        c2459 = CONS( X1, c2459 );
        t3095 = CSTRING_TSCP( t3096 );
        X1 = t3095;
        t3097 = STRINGTOSYMBOL( CSTRING_TSCP( "VOID" ) );
        X1 = CONS( t3097, X1 );
        c2459 = CONS( X1, c2459 );
        CONSTANTEXP( ADR( c2459 ) );
        c2444 = CSTRING_TSCP( t3098 );
        CONSTANTEXP( ADR( c2444 ) );
        c2443 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2443 ) );
        c2406 = EMPTYLIST;
        t3099 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL26" ) );
        c2406 = CONS( t3099, c2406 );
        t3100 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL25" ) );
        c2406 = CONS( t3100, c2406 );
        t3101 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL24" ) );
        c2406 = CONS( t3101, c2406 );
        t3102 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL23" ) );
        c2406 = CONS( t3102, c2406 );
        t3103 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL22" ) );
        c2406 = CONS( t3103, c2406 );
        t3104 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL21" ) );
        c2406 = CONS( t3104, c2406 );
        t3105 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL20" ) );
        c2406 = CONS( t3105, c2406 );
        t3106 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL19" ) );
        c2406 = CONS( t3106, c2406 );
        t3107 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL18" ) );
        c2406 = CONS( t3107, c2406 );
        t3108 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL17" ) );
        c2406 = CONS( t3108, c2406 );
        t3109 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL16" ) );
        c2406 = CONS( t3109, c2406 );
        t3110 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL15" ) );
        c2406 = CONS( t3110, c2406 );
        t3111 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL14" ) );
        c2406 = CONS( t3111, c2406 );
        t3112 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL13" ) );
        c2406 = CONS( t3112, c2406 );
        t3113 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL12" ) );
        c2406 = CONS( t3113, c2406 );
        t3114 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL11" ) );
        c2406 = CONS( t3114, c2406 );
        t3115 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL10" ) );
        c2406 = CONS( t3115, c2406 );
        t3116 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL9" ) );
        c2406 = CONS( t3116, c2406 );
        t3117 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL8" ) );
        c2406 = CONS( t3117, c2406 );
        t3118 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL7" ) );
        c2406 = CONS( t3118, c2406 );
        t3119 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL6" ) );
        c2406 = CONS( t3119, c2406 );
        t3120 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL5" ) );
        c2406 = CONS( t3120, c2406 );
        t3121 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL4" ) );
        c2406 = CONS( t3121, c2406 );
        t3122 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL3" ) );
        c2406 = CONS( t3122, c2406 );
        t3123 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL2" ) );
        c2406 = CONS( t3123, c2406 );
        t3124 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL1" ) );
        c2406 = CONS( t3124, c2406 );
        t3125 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL0" ) );
        c2406 = CONS( t3125, c2406 );
        c2406 = LISTTOVECTOR( c2406 );
        CONSTANTEXP( ADR( c2406 ) );
        c2400 = EMPTYLIST;
        t3126 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLEP" ) );
        X1 = t3126;
        X1 = CONS( t3062, X1 );
        c2400 = CONS( X1, c2400 );
        t3127 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOATP" ) );
        X1 = t3127;
        X1 = CONS( t3065, X1 );
        c2400 = CONS( X1, c2400 );
        t3128 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNEDP" ) );
        X1 = t3128;
        X1 = CONS( t3068, X1 );
        c2400 = CONS( X1, c2400 );
        t3129 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNEDP" ) );
        X1 = t3129;
        X1 = CONS( t3071, X1 );
        c2400 = CONS( X1, c2400 );
        t3130 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNEDP" ) );
        X1 = t3130;
        X1 = CONS( t3074, X1 );
        c2400 = CONS( X1, c2400 );
        t3131 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINTP" ) );
        X1 = t3131;
        X1 = CONS( t3077, X1 );
        c2400 = CONS( X1, c2400 );
        t3132 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINTP" ) );
        X1 = t3132;
        X1 = CONS( t3080, X1 );
        c2400 = CONS( X1, c2400 );
        t3133 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINTP" ) );
        X1 = t3133;
        X1 = CONS( t3083, X1 );
        c2400 = CONS( X1, c2400 );
        t3134 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHARP" ) );
        X1 = t3134;
        X1 = CONS( t3086, X1 );
        c2400 = CONS( X1, c2400 );
        t3135 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        X1 = t3135;
        X1 = CONS( c2531, X1 );
        c2400 = CONS( X1, c2400 );
        t3136 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAYP" ) );
        X1 = t3136;
        X1 = CONS( t3091, X1 );
        c2400 = CONS( X1, c2400 );
        t3137 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTERP" ) );
        X1 = t3137;
        X1 = CONS( t3094, X1 );
        c2400 = CONS( X1, c2400 );
        t3138 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNVOIDP" ) );
        X1 = t3138;
        X1 = CONS( t3097, X1 );
        c2400 = CONS( X1, c2400 );
        CONSTANTEXP( ADR( c2400 ) );
        c2382 = EMPTYLIST;
        t3139 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLE" ) );
        X1 = t3139;
        X1 = CONS( t3062, X1 );
        c2382 = CONS( X1, c2382 );
        t3140 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOAT" ) );
        X1 = t3140;
        X1 = CONS( t3065, X1 );
        c2382 = CONS( X1, c2382 );
        t3141 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNED" ) );
        X1 = t3141;
        X1 = CONS( t3068, X1 );
        c2382 = CONS( X1, c2382 );
        t3142 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNED" ) );
        X1 = t3142;
        X1 = CONS( t3071, X1 );
        c2382 = CONS( X1, c2382 );
        t3143 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNED" ) );
        X1 = t3143;
        X1 = CONS( t3074, X1 );
        c2382 = CONS( X1, c2382 );
        t3144 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINT" ) );
        X1 = t3144;
        X1 = CONS( t3077, X1 );
        c2382 = CONS( X1, c2382 );
        t3145 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINT" ) );
        X1 = t3145;
        X1 = CONS( t3080, X1 );
        c2382 = CONS( X1, c2382 );
        t3146 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINT" ) );
        X1 = t3146;
        X1 = CONS( t3083, X1 );
        c2382 = CONS( X1, c2382 );
        t3147 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHAR" ) );
        X1 = t3147;
        X1 = CONS( t3086, X1 );
        c2382 = CONS( X1, c2382 );
        t3148 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        X1 = t3148;
        X1 = CONS( c2531, X1 );
        c2382 = CONS( X1, c2382 );
        t3149 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAY" ) );
        X1 = t3149;
        X1 = CONS( t3091, X1 );
        c2382 = CONS( X1, c2382 );
        t3150 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTER" ) );
        X1 = t3150;
        X1 = CONS( t3094, X1 );
        c2382 = CONS( X1, c2382 );
        CONSTANTEXP( ADR( c2382 ) );
        c2371 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2371 ) );
        c2367 = EMPTYLIST;
        t3151 = CSTRING_TSCP( t3152 );
        c2367 = CONS( t3151, c2367 );
        c2367 = CONS( EMPTYSTRING, c2367 );
        CONSTANTEXP( ADR( c2367 ) );
        c2359 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        CONSTANTEXP( ADR( c2359 ) );
        c2353 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        CONSTANTEXP( ADR( c2353 ) );
        c2341 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2341 ) );
        c2336 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2336 ) );
        c2333 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2333 ) );
        c2321 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c2321 ) );
        c2306 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c2306 ) );
        c2298 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2298 ) );
        c2295 = CSTRING_TSCP( t3153 );
        CONSTANTEXP( ADR( c2295 ) );
        c2292 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2292 ) );
        c2277 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2277 ) );
        c2274 = STRINGTOSYMBOL( CSTRING_TSCP( "PAIR_CAR" ) );
        CONSTANTEXP( ADR( c2274 ) );
        c2273 = CSTRING_TSCP( t3154 );
        CONSTANTEXP( ADR( c2273 ) );
        c2272 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2272 ) );
        c2267 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL_VALUE" ) );
        CONSTANTEXP( ADR( c2267 ) );
        c2266 = CSTRING_TSCP( t3155 );
        CONSTANTEXP( ADR( c2266 ) );
        c2248 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2248 ) );
        c2242 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMPORARY" ) );
        CONSTANTEXP( ADR( c2242 ) );
        c2241 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMP" ) );
        CONSTANTEXP( ADR( c2241 ) );
        c2236 = STRINGTOSYMBOL( CSTRING_TSCP( "CODE-LABEL" ) );
        CONSTANTEXP( ADR( c2236 ) );
        c2226 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTOS" ) );
        CONSTANTEXP( ADR( c2226 ) );
        c2225 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2225 ) );
        c2224 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2224 ) );
        c2223 = STRINGTOSYMBOL( CSTRING_TSCP( "L" ) );
        CONSTANTEXP( ADR( c2223 ) );
        c2214 = CSTRING_TSCP( t3156 );
        CONSTANTEXP( ADR( c2214 ) );
        c2213 = CSTRING_TSCP( t3157 );
        CONSTANTEXP( ADR( c2213 ) );
        c2212 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2212 ) );
        c2204 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2204 ) );
        c2196 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2196 ) );
        c2188 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2188 ) );
        c2180 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2180 ) );
        c2172 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2172 ) );
        c2158 = CSTRING_TSCP( t3158 );
        CONSTANTEXP( ADR( c2158 ) );
        c2157 = CSTRING_TSCP( t3159 );
        CONSTANTEXP( ADR( c2157 ) );
        c2155 = CSTRING_TSCP( t3160 );
        CONSTANTEXP( ADR( c2155 ) );
        c2145 = EMPTYLIST;
        t3161 = CSTRING_TSCP( t3162 );
        c2145 = CONS( t3161, c2145 );
        c2145 = CONS( t3049, c2145 );
        CONSTANTEXP( ADR( c2145 ) );
        c2144 = EMPTYLIST;
        c2144 = CONS( _TSCP( 0 ), c2144 );
        t3163 = STRINGTOSYMBOL( CSTRING_TSCP( "INDENT" ) );
        c2144 = CONS( t3163, c2144 );
        CONSTANTEXP( ADR( c2144 ) );
        c2141 = EMPTYLIST;
        t3164 = CSTRING_TSCP( t3165 );
        c2141 = CONS( t3164, c2141 );
        c2141 = CONS( t3049, c2141 );
        CONSTANTEXP( ADR( c2141 ) );
        c2140 = CSTRING_TSCP( t3166 );
        CONSTANTEXP( ADR( c2140 ) );
        c2139 = CSTRING_TSCP( t3167 );
        CONSTANTEXP( ADR( c2139 ) );
        c2137 = CSTRING_TSCP( t3168 );
        CONSTANTEXP( ADR( c2137 ) );
        c2134 = EMPTYLIST;
        t3169 = CSTRING_TSCP( t3170 );
        c2134 = CONS( t3169, c2134 );
        t3171 = STRINGTOSYMBOL( CSTRING_TSCP( "RETURN" ) );
        c2134 = CONS( t3171, c2134 );
        c2134 = CONS( c2669, c2134 );
        CONSTANTEXP( ADR( c2134 ) );
        c2133 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2133 ) );
        c2108 = EMPTYLIST;
        t3172 = CSTRING_TSCP( t3173 );
        c2108 = CONS( t3172, c2108 );
        c2108 = CONS( t3049, c2108 );
        CONSTANTEXP( ADR( c2108 ) );
        c2107 = CSTRING_TSCP( t3174 );
        CONSTANTEXP( ADR( c2107 ) );
        c2106 = CSTRING_TSCP( t3175 );
        CONSTANTEXP( ADR( c2106 ) );
        c2104 = CSTRING_TSCP( t3176 );
        CONSTANTEXP( ADR( c2104 ) );
        c2102 = CSTRING_TSCP( t3177 );
        CONSTANTEXP( ADR( c2102 ) );
        c2101 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2101 ) );
        c2100 = CSTRING_TSCP( t3178 );
        CONSTANTEXP( ADR( c2100 ) );
        c2098 = EMPTYLIST;
        t3179 = CSTRING_TSCP( t3180 );
        c2098 = CONS( t3179, c2098 );
        c2098 = CONS( t3049, c2098 );
        CONSTANTEXP( ADR( c2098 ) );
        c2097 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2097 ) );
        c2094 = CSTRING_TSCP( t3181 );
        CONSTANTEXP( ADR( c2094 ) );
        c2093 = CSTRING_TSCP( t3182 );
        CONSTANTEXP( ADR( c2093 ) );
        c2091 = STRINGTOSYMBOL( CSTRING_TSCP( "INITHEAP" ) );
        CONSTANTEXP( ADR( c2091 ) );
        c2090 = EMPTYLIST;
        t3183 = CSTRING_TSCP( t3184 );
        c2090 = CONS( t3183, c2090 );
        c2090 = CONS( t3049, c2090 );
        CONSTANTEXP( ADR( c2090 ) );
        c2089 = EMPTYLIST;
        t3185 = CSTRING_TSCP( t3186 );
        c2089 = CONS( t3185, c2089 );
        c2089 = CONS( t3049, c2089 );
        CONSTANTEXP( ADR( c2089 ) );
        c2088 = EMPTYLIST;
        t3187 = CSTRING_TSCP( t3188 );
        c2088 = CONS( t3187, c2088 );
        c2088 = CONS( t3049, c2088 );
        CONSTANTEXP( ADR( c2088 ) );
        c2087 = EMPTYLIST;
        c2087 = CONS( _TSCP( 0 ), c2087 );
        c2087 = CONS( c2277, c2087 );
        c2087 = CONS( t3046, c2087 );
        CONSTANTEXP( ADR( c2087 ) );
        c2086 = EMPTYLIST;
        c2086 = CONS( _TSCP( 32 ), c2086 );
        c2086 = CONS( t3163, c2086 );
        CONSTANTEXP( ADR( c2086 ) );
        c2085 = EMPTYLIST;
        t3189 = CSTRING_TSCP( t3190 );
        c2085 = CONS( t3189, c2085 );
        c2085 = CONS( t3049, c2085 );
        CONSTANTEXP( ADR( c2085 ) );
        c2084 = EMPTYLIST;
        t3191 = CSTRING_TSCP( t3192 );
        c2084 = CONS( t3191, c2084 );
        c2084 = CONS( t3049, c2084 );
        CONSTANTEXP( ADR( c2084 ) );
        c2083 = EMPTYLIST;
        t3193 = CSTRING_TSCP( t3194 );
        c2083 = CONS( t3193, c2083 );
        c2083 = CONS( t3049, c2083 );
        CONSTANTEXP( ADR( c2083 ) );
        c2081 = CSTRING_TSCP( t3195 );
        CONSTANTEXP( ADR( c2081 ) );
        c2080 = CSTRING_TSCP( t3196 );
        CONSTANTEXP( ADR( c2080 ) );
        c2078 = EMPTYLIST;
        c2078 = CONS( t3049, c2078 );
        CONSTANTEXP( ADR( c2078 ) );
        c2074 = CSTRING_TSCP( t3197 );
        CONSTANTEXP( ADR( c2074 ) );
        c2073 = CSTRING_TSCP( t3198 );
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
DEFCSTRING( t3199, "CURRENT-CODE-LAMBDA" );
DEFTSCP( gencode_e_2dstring_8ca45c6a_v );
DEFCSTRING( t3200, "CURRENT-DEFINE-STRING" );
DEFTSCP( gencode_init_2dmodules_v );
DEFCSTRING( t3201, "INIT-MODULES" );
DEFTSCP( gencode_free_2ddisplay_v );
DEFCSTRING( t3202, "FREE-DISPLAY" );
DEFTSCP( gencode_max_2ddisplay_v );
DEFCSTRING( t3203, "MAX-DISPLAY" );
DEFTSCP( gencode_ion_2dinfo_cc47b64b_v );
DEFCSTRING( t3204, "EMPTY-CONDITION-INFO" );
DEFTSCP( gencode_ion_2dinfo_f92fd619_v );
DEFCSTRING( t3205, "GLOBAL-CONDITION-INFO" );
DEFTSCP( gencode_error_2did_v );
DEFCSTRING( t3206, "ERROR-ID" );
DEFTSCP( gencode__24__car_2derror_2did_v );
DEFCSTRING( t3207, "$_CAR-ERROR-ID" );
DEFTSCP( gencode__24__cdr_2derror_2did_v );
DEFCSTRING( t3208, "$_CDR-ERROR-ID" );
DEFTSCP( gencode_generate_2dcode_v );
DEFCSTRING( t3209, "GENERATE-CODE" );
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

        PUSHSTACKTRACE( t3209 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3211;
        X1 = c2158;
        goto L3212;
L3211:
        X2 = CONS( c2157, EMPTYLIST );
        X1 = scrt3_string_2dappend( CONS( SYMBOL_VALUE( module_2dname_v ), 
                                          X2 ) );
L3212:
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
            )  goto L3214;
        lap_emit_2dlap( c2083 );
        lap_emit_2dlap( c2084 );
        goto L3215;
L3214:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2081, X4 );
        X4 = CONS( X1, X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2080, X4 ) );
        lap_emit_2dlap( X3 );
L3215:
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2087 );
        lap_emit_2dlap( c2088 );
        lap_emit_2dlap( c2089 );
        lap_emit_2dlap( c2090 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3217;
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
        goto L3218;
L3217:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( c2091, 
                            CONS( SYMBOL_VALUE( heap_2dsize_v ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
L3218:
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
        lap_emit_2dlap( c2108 );
        X3 = e2062;
L3220:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3221;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3225;
        scrt1__24__car_2derror( X3 );
L3225:
        X4 = PAIR_CAR( X3 );
        gencode_ion_2dinfo_f92fd619_v = gencode_ion_2dinfo_cc47b64b_v;
        gencode_exp_2dgenc( c2133, X4, EMPTYLIST );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3220 );
L3221:
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3229;
        X4 = SYMBOL_VALUE( main_2dprogram_2dname_v );
        X3 = plist_get( X4, c2097 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2137, X5 );
        X5 = CONS( SYMBOL_VALUE( module_2dname_v ), X5 );
        X4 = scrt1_cons_2a( c2072, CONS( c2080, X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
        if  ( FALSE( X3 ) )  goto L3232;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2140, X5 );
        X4 = scrt1_cons_2a( c2072, 
                            CONS( expform_cname( X3 ), X5 ) );
        lap_emit_2dlap( X4 );
        goto L3233;
L3232:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2139, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3233:
        lap_emit_2dlap( c2141 );
        goto L3230;
L3229:
        lap_emit_2dlap( c2134 );
L3230:
        lap_emit_2dlap( c2144 );
        lap_emit_2dlap( c2145 );
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L3236;
        if  ( NEQ( _S2CUINT( _TSCP( 0 ) ), _S2CUINT( X3 ) ) )  goto L3240;
        goto L3243;
L3236:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), X3 ) ) )  goto L3243;
L3240:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2155, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3243:
        gencode_t__modules_bfe186ca(  );
        X3 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        POPSTACKTRACE( lap_done_2dlap( X3 ) );
}

DEFTSCP( gencode_exp_2dgenc_v );
DEFCSTRING( t3244, "EXP-GENC" );

TSCP  gencode_exp_2dgenc( l2160, e2161, b2162 )
        TSCP  l2160, e2161, b2162;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3244 );
        if  ( NOT( AND( EQ( TSCPTAG( e2161 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2161 ), SYMBOLTAG ) ) )
            )  goto L3246;
        X1 = SYMBOL_VALUE( symbol_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3246:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3251;
        scrt1__24__car_2derror( e2161 );
L3251:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2172 ) ) )  goto L3248;
        X1 = SYMBOL_VALUE( _24call_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3248:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3256;
        scrt1__24__car_2derror( e2161 );
L3256:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2180 ) ) )  goto L3253;
        X1 = SYMBOL_VALUE( _24set_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3253:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3261;
        scrt1__24__car_2derror( e2161 );
L3261:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2188 ) ) )  goto L3258;
        X1 = SYMBOL_VALUE( _24lambda_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3258:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3266;
        scrt1__24__car_2derror( e2161 );
L3266:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2196 ) ) )  goto L3263;
        X1 = SYMBOL_VALUE( _24if_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3263:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3271;
        scrt1__24__car_2derror( e2161 );
L3271:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2204 ) ) )  goto L3268;
        X1 = SYMBOL_VALUE( _24define_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2160, 
                                                    e2161, 
                                                    b2162, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3268:
        if  ( EQ( TSCPTAG( e2161 ), PAIRTAG ) )  goto L3276;
        scrt1__24__car_2derror( e2161 );
L3276:
        X1 = PAIR_CAR( e2161 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2212 ) ) )  goto L3273;
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2214, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3273:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2213, 
                                                    e2161, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_make_2dlabel_v );
DEFCSTRING( t3278, "MAKE-LABEL" );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );

TSCP  gencode_make_2dlabel(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3278 );
        X1 = CONS( _TSCP( 0 ), EMPTYLIST );
        X1 = CONS( c2226, X1 );
        X1 = CONS( c2225, X1 );
        POPSTACKTRACE( expform_newv( c2223, 
                                     CONS( c2224, X1 ) ) );
}

DEFTSCP( gencode_code_2dlabel_v );
DEFCSTRING( t3280, "CODE-LABEL" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  gencode_code_2dlabel( i2229 )
        TSCP  i2229;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3280 );
        X1 = plist_get( i2229, c2236 );
        X1 = CONS( X1, EMPTYLIST );
        if  ( TRUE( PAIR_CAR( X1 ) ) )  goto L3283;
        X2 = gencode_make_2dlabel(  );
        SETGEN( PAIR_CAR( X1 ), X2 );
        plist_put( i2229, c2236, PAIR_CAR( X1 ) );
L3283:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( gencode_make_2dc_2dglobal_v );
DEFCSTRING( t3286, "MAKE-C-GLOBAL" );

TSCP  gencode_make_2dc_2dglobal(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3286 );
        X1 = CONS( c2242, EMPTYLIST );
        POPSTACKTRACE( expform_newv( c2241, 
                                     CONS( c2224, X1 ) ) );
}

DEFTSCP( gencode_optional_2dargs_v );
DEFCSTRING( t3288, "OPTIONAL-ARGS" );

TSCP  gencode_optional_2dargs( i2245 )
        TSCP  i2245;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3288 );
        if  ( FALSE( plist_get( i2245, c2248 ) ) )  goto L3290;
        X1 = plist_get( i2245, c2248 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3293;
        scrt1__24__car_2derror( X1 );
L3293:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3290:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( gencode_lookup_v );
DEFCSTRING( t3295, "LOOKUP" );
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

TSCP  gencode_lookup( v2257, b2258 )
        TSCP  v2257, b2258;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3295 );
        if  ( FALSE( gencode_var_2dis_2dconstant( v2257 ) ) )  goto L3297;
        POPSTACKTRACE( expform_vname( v2257 ) );
L3297:
        if  ( FALSE( gencode_var_2dis_2dglobal( v2257 ) ) )  goto L3299;
        gencode_emit_2dextern( v2257 );
        X1 = expform_vname( v2257 );
        if  ( TRUE( X1 ) )  goto L3303;
        X3 = plist_get( v2257, c2292 );
        if  ( FALSE( X3 ) )  goto L3306;
        X2 = expform_cname( v2257 );
        goto L3307;
L3306:
        X2 = X3;
L3307:
        if  ( TRUE( X2 ) )  goto L3309;
        X4 = plist_get( v2257, c2298 );
        X3 = SYMBOL_VALUE( report_2derror_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2295, 
                                                    X4, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3309:
        POPSTACKTRACE( X2 );
L3303:
        POPSTACKTRACE( X1 );
L3299:
        if  ( FALSE( gencode_var_2din_2dstack( v2257 ) ) )  goto L3311;
        X1 = plist_get( v2257, c2277 );
        if  ( FALSE( plist_get( v2257, c2272 ) ) )  goto L3314;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3316;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2273, CONS( X1, X4 ) );
        goto L3317;
L3316:
        X3 = expform_vname( v2257 );
L3317:
        POPSTACKTRACE( scrt1_cons_2a( c2274, CONS( X3, X2 ) ) );
L3314:
        if  ( FALSE( X1 ) )  goto L3318;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2273, CONS( X1, X2 ) ) );
L3318:
        POPSTACKTRACE( expform_vname( v2257 ) );
L3311:
        if  ( FALSE( gencode_op_2dlevel_343ff0cb( v2257 ) ) )  goto L3320;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2267, 
                                      CONS( expform_vname( v2257 ), 
                                            X1 ) ) );
L3320:
        X2 = expform_vname( v2257 );
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2266, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_var_2din_2dstack_v );
DEFCSTRING( t3322, "VAR-IN-STACK" );

TSCP  gencode_var_2din_2dstack( v2300 )
        TSCP  v2300;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3322 );
        X1 = plist_get( v2300, c2224 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2306 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dglobal_v );
DEFCSTRING( t3324, "VAR-IS-GLOBAL" );

TSCP  gencode_var_2dis_2dglobal( v2308 )
        TSCP  v2308;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3324 );
        X1 = plist_get( v2308, c2224 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2097 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dconstant_v );
DEFCSTRING( t3326, "VAR-IS-CONSTANT" );

TSCP  gencode_var_2dis_2dconstant( v2315 )
        TSCP  v2315;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3326 );
        X1 = plist_get( v2315, c2224 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2321 ) ) ) );
}

DEFTSCP( gencode_op_2dlevel_343ff0cb_v );
DEFCSTRING( t3328, "VAR-IS-TOP-LEVEL" );

TSCP  gencode_op_2dlevel_343ff0cb( v2323 )
        TSCP  v2323;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3328 );
        X1 = plist_get( v2323, c2224 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2048 ) ) ) );
}

DEFTSCP( gencode_emit_2dextern_v );
DEFCSTRING( t3330, "EMIT-EXTERN" );
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

TSCP  gencode_emit_2dextern( v2330 )
        TSCP  v2330;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3330 );
        v2330 = CONS( v2330, EMPTYLIST );
        if  ( FALSE( plist_get( PAIR_CAR( v2330 ), c2333 ) ) )  goto L3332;
        X2 = plist_get( PAIR_CAR( v2330 ), c2333 );
        X1 = plist_get( X2, c2336 );
        SETGEN( PAIR_CAR( v2330 ), X1 );
L3332:
        if  ( TRUE( plist_get( PAIR_CAR( v2330 ), c2341 ) ) )  goto L3334;
        plist_put( PAIR_CAR( v2330 ), c2341, TRUEVALUE );
        X2 = plist_get( PAIR_CAR( v2330 ), c2333 );
        if  ( FALSE( X2 ) )  goto L3338;
        X3 = plist_get( PAIR_CAR( v2330 ), c2292 );
        X1 = scrt1_assq( X3, c2400 );
        goto L3339;
L3338:
        X1 = X2;
L3339:
        if  ( FALSE( X1 ) )  goto L3341;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3344;
        scrt1__24__cdr_2derror( X1 );
L3344:
        X3 = PAIR_CDR( X1 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2330 ), c2333 );
        X4 = CONS( gencode_ern_2dargl_18fb6091( X5 ), X4 );
        X2 = scrt1_cons_2a( X3, 
                            CONS( expform_cname( PAIR_CAR( v2330 ) ), 
                                  X4 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X2 ) );
L3341:
        X3 = plist_get( PAIR_CAR( v2330 ), c2292 );
        X2 = scrt1_assq( X3, c2382 );
        if  ( FALSE( X2 ) )  goto L3347;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3350;
        scrt1__24__cdr_2derror( X2 );
L3350:
        X4 = PAIR_CDR( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( X4, 
                            CONS( expform_vname( PAIR_CAR( v2330 ) ), 
                                  X5 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X3 ) );
L3347:
        if  ( FALSE( plist_get( PAIR_CAR( v2330 ), c2333 ) ) )  goto L3353;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2330 ), c2333 );
        X4 = CONS( gencode_emit_2dextern_2dargl( X5 ), X4 );
        X3 = scrt1_cons_2a( c2353, 
                            CONS( expform_cname( PAIR_CAR( v2330 ) ), 
                                  X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
L3353:
        if  ( FALSE( gencode_var_2dis_2dglobal( PAIR_CAR( v2330 ) ) )
            )  goto L3355;
        X3 = plist_get( PAIR_CAR( v2330 ), c2371 );
        if  ( FALSE( expform_vname( PAIR_CAR( v2330 ) ) ) )  goto L3358;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2359, 
                            CONS( expform_vname( PAIR_CAR( v2330 ) ), 
                                  X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
L3358:
        X4 = SYMBOL_VALUE( module_2dname_v );
        if  ( TRUE( scrt1_equal_3f( X4, X3 ) ) )  goto L3360;
        if  ( TRUE( scrt1_member( X3, c2367 ) ) )  goto L3362;
        if  ( TRUE( scrt1_member( X3, gencode_init_2dmodules_v ) )
            )  goto L3364;
        X4 = plist_get( PAIR_CAR( v2330 ), c2371 );
        POPSTACKTRACE( SET( gencode_init_2dmodules_v, 
                            sc_cons( X4, gencode_init_2dmodules_v ) ) );
L3364:
        POPSTACKTRACE( FALSEVALUE );
L3362:
        POPSTACKTRACE( FALSEVALUE );
L3360:
        POPSTACKTRACE( FALSEVALUE );
L3355:
        POPSTACKTRACE( FALSEVALUE );
L3334:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( gencode_ern_2dargl_18fb6091_v );
DEFCSTRING( t3366, "EMIT-C-EXTERN-ARGL" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  gencode_c2404( v2408 )
        TSCP  v2408;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "CTYPES [inside EMIT-C-EXTERN-ARGL]" );
        X1 = v2408;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3371:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3372;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3375;
        scrt1__24__car_2derror( X1 );
L3375:
        X6 = PAIR_CAR( X1 );
        X7 = scrt1_assq( X6, c2459 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3379;
        scrt1__24__cdr_2derror( X7 );
L3379:
        X5 = PAIR_CDR( X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3382;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3371 );
L3382:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3387;
        scdebug_error( c2443, 
                       c2444, CONS( X3, EMPTYLIST ) );
L3387:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3371 );
L3372:
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  gencode_ern_2dargl_18fb6091( l2402 )
        TSCP  l2402;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3366 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2406;
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = plist_get( l2402, c2248 );
        X3 = plist_get( l2402, c2497 );
        if  ( FALSE( X2 ) )  goto L3390;
        X6 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3393;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L3394;
L3393:
        X5 = scrt2__2b_2dtwo( X6, _TSCP( 8 ) );
L3394:
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3396;
        scdebug_error( c2468, 
                       c2469, CONS( X6, EMPTYLIST ) );
L3396:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3398;
        scdebug_error( c2468, 
                       c2472, CONS( X5, EMPTYLIST ) );
L3398:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3400;
        scdebug_error( c2468, 
                       c2476, CONS( X5, EMPTYLIST ) );
L3400:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2404( X3 );
        X8 = gencode_c2404( X2 );
        X9 = scrt1_cons_2a( c2494, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X7 = scrt1_append_2dtwo( X8, X9 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3390:
        X5 = scrt1_length( X3 );
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3403;
        scdebug_error( c2468, 
                       c2469, CONS( X6, EMPTYLIST ) );
L3403:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3405;
        scdebug_error( c2468, 
                       c2472, CONS( X5, EMPTYLIST ) );
L3405:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3407;
        scdebug_error( c2468, 
                       c2476, CONS( X5, EMPTYLIST ) );
L3407:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2404( X3 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
}

DEFTSCP( gencode_emit_2dextern_2dargl_v );
DEFCSTRING( t3409, "EMIT-EXTERN-ARGL" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( gencode_l2519, XAL1( TSCP ) );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  gencode_l2519( i2521 )
        TSCP  i2521;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EMIT-EXTERN-ARGL]" );
        if  ( NEQ( TSCPTAG( i2521 ), FIXNUMTAG ) )  goto L3431;
        if  ( NEQ( _S2CUINT( i2521 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L3435;
        POPSTACKTRACE( EMPTYLIST );
L3431:
        if  ( FALSE( scrt2_zero_3f( i2521 ) ) )  goto L3435;
        POPSTACKTRACE( EMPTYLIST );
L3435:
        if  ( BITAND( BITOR( _S2CINT( i2521 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3438;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( i2521 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3439;
L3438:
        X2 = scrt2__2d_2dtwo( i2521, _TSCP( 4 ) );
L3439:
        X1 = gencode_l2519( X2 );
        POPSTACKTRACE( sc_cons( c2531, X1 ) );
}

TSCP  gencode_emit_2dextern_2dargl( l2501 )
        TSCP  l2501;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3409 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2406;
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( plist_get( l2501, c2557 ) ) )  goto L3412;
        X4 = _TSCP( 4 );
        goto L3413;
L3412:
        X4 = _TSCP( 0 );
L3413:
        X6 = plist_get( l2501, c2248 );
        X5 = scrt1_length( X6 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3415;
        X3 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L3416;
L3415:
        X3 = scrt2__2b_2dtwo( X5, X4 );
L3416:
        X5 = plist_get( l2501, c2497 );
        X4 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3418;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L3419;
L3418:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L3419:
        X4 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L3422;
        scdebug_error( c2468, 
                       c2469, CONS( X4, EMPTYLIST ) );
L3422:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3424;
        scdebug_error( c2468, 
                       c2472, CONS( X2, EMPTYLIST ) );
L3424:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L3426;
        scdebug_error( c2468, 
                       c2476, CONS( X2, EMPTYLIST ) );
L3426:
        X3 = VECTOR_ELEMENT( X4, X2 );
        X4 = gencode_l2519( X2 );
        POPSTACKTRACE( sc_cons( X3, X4 ) );
}

DEFTSCP( gencode_t__modules_bfe186ca_v );
DEFCSTRING( t3440, "GENERATE-INIT_MODULES" );

TSCP  gencode_t__modules_bfe186ca(  )
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3440 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        lap_emit_2dlap( c2561 );
        lap_emit_2dlap( c2562 );
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        X3 = SYMBOL_VALUE( with_2dmodules_v );
        X2 = scrt1_append_2dtwo( gencode_init_2dmodules_v, X3 );
        X3 = X2;
L3445:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3446;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3450;
        scrt1__24__car_2derror( X3 );
L3450:
        X4 = PAIR_CAR( X3 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( c2586, EMPTYLIST );
        X5 = scrt1_cons_2a( c2072, 
                            CONS( scrt3_string_2dappend( CONS( X4, X7 ) ), 
                                  X6 ) );
        lap_emit_2dlap( X5 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3445 );
L3446:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2588, 
                            CONS( gencode_max_2ddisplay_v, X3 ) );
        lap_emit_2dlap( X2 );
        lap_emit_2dlap( c2144 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2072, CONS( c2589, X3 ) );
        lap_emit_2dlap( X2 );
        X2 = lap_save_2dcurrent_2dlap( X1 );
        POPSTACKTRACE( lap_done_2dlap( X2 ) );
}

DEFTSCP( gencode_constant_2dsymbols_v );
DEFCSTRING( t3454, "CONSTANT-SYMBOLS" );
DEFTSCP( gencode_bol_2dport_c6b2ebee_v );
DEFCSTRING( t3455, "CONSTANT-SYMBOL-PORT" );
DEFTSCP( gencode_emit_2dconstants_v );
DEFCSTRING( t3456, "EMIT-CONSTANTS" );
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

        PUSHSTACKTRACE( t3456 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        gencode_constant_2dsymbols_v = EMPTYLIST;
        gencode_bol_2dport_c6b2ebee_v = scrt5_open_2doutput_2dstring(  );
        lap_emit_2dlap( c2595 );
        lap_emit_2dlap( c2085 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2596 );
        X2 = SYMBOL_VALUE( quote_2dconstants_v );
        X3 = X2;
L3461:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3462;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3466;
        scrt1__24__car_2derror( X3 );
L3466:
        X4 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3470;
        scrt1__24__cdr_2derror( X4 );
L3470:
        X6 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3473;
        scrt1__24__car_2derror( X6 );
L3473:
        X5 = PAIR_CAR( X6 );
        X6 = PAIR_CAR( X4 );
        X7 = lap_save_2dlap_2dtemps(  );
        gencode_emit_2dconstant( X5, X6 );
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L3479;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L3479;
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2633, 
                            CONS( scrt1_cons_2a( c2634, 
                                                 CONS( expform_vname( X5 ), 
                                                       X10 ) ), 
                                  X9 ) );
        lap_emit_2dlap( X8 );
L3479:
        lap_restore_2dlap_2dtemps( X7 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3461 );
L3462:
        lap_emit_2dlap( c2144 );
        lap_emit_2dlap( c2145 );
        POPSTACKTRACE( lap_save_2dcurrent_2dlap( X1 ) );
}

DEFTSCP( gencode_emit_2dconstant_v );
DEFCSTRING( t3482, "EMIT-CONSTANT" );
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

TSCP  gencode_emit_2dconstant( v2651, c2652 )
        TSCP  v2651, c2652;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3482 );
        if  ( NEQ( TSCPTAG( c2652 ), FIXNUMTAG ) )  goto L3484;
        scrt6_display( c2694, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( c2652 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3487;
        X1 = BOOLEAN( GT( _S2CINT( c2652 ), 
                          _S2CINT( _TSCP( 8 ) ) ) );
        goto L3488;
L3487:
        X1 = scrt2__3e_2dtwo( c2652, _TSCP( 8 ) );
L3488:
        if  ( TRUE( X1 ) )  goto L3493;
        if  ( BITAND( BITOR( _S2CINT( c2652 ), 
                             _S2CINT( _TSCP( -8 ) ) ), 
                      3 ) )  goto L3495;
        if  ( LT( _S2CINT( c2652 ), _S2CINT( _TSCP( -8 ) ) ) )  goto L3493;
        goto L3500;
L3495:
        if  ( TRUE( scrt2__3c_2dtwo( c2652, _TSCP( -8 ) ) ) )  goto L3493;
L3500:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2652 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3510;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3510;
        X4 = _TSCP( REMAINDER( _S2CINT( c2652 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3511;
L3510:
        X4 = scrt2_remainder( c2652, _TSCP( 40 ) );
L3511:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3513;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3514;
L3513:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3514:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L3522;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3522;
        X2 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3523;
L3522:
        X2 = scrt2_remainder( X3, _TSCP( 40 ) );
L3523:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        goto L3503;
L3493:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2652 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3531;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3531;
        X4 = C_FIXED( QUOTIENT( _S2CINT( c2652 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3532;
L3531:
        X4 = scrt2_quotient( c2652, _TSCP( 40 ) );
L3532:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3534;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3535;
L3534:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3535:
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2652 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L3542;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3542;
        X6 = _TSCP( REMAINDER( _S2CINT( c2652 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3543;
L3542:
        X6 = scrt2_remainder( c2652, _TSCP( 40 ) );
L3543:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L3545;
        X5 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X6 ) ) );
        goto L3546;
L3545:
        X5 = scrt2__2a_2dtwo( _TSCP( 16 ), X6 );
L3546:
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3554;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3554;
        X4 = C_FIXED( QUOTIENT( _S2CINT( X5 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3555;
L3554:
        X4 = scrt2_quotient( X5, _TSCP( 40 ) );
L3555:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3557;
        X2 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X4 ) ) );
        goto L3558;
L3557:
        X2 = scrt2__2b_2dtwo( X3, X4 );
L3558:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2652 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3565;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3565;
        X5 = _TSCP( REMAINDER( _S2CINT( c2652 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3566;
L3565:
        X5 = scrt2_remainder( c2652, _TSCP( 40 ) );
L3566:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L3568;
        X4 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X5 ) ) );
        goto L3569;
L3568:
        X4 = scrt2__2a_2dtwo( _TSCP( 16 ), X5 );
L3569:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X4 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3577;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3577;
        X3 = _TSCP( REMAINDER( _S2CINT( X4 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3578;
L3577:
        X3 = scrt2_remainder( X4, _TSCP( 40 ) );
L3578:
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3580;
        if  ( LT( _S2CINT( X3 ), 0 ) )  goto L3585;
        X2 = X3;
        goto L3586;
L3580:
        X2 = scrt2_abs( X3 );
        goto L3586;
L3585:
        X2 = _TSCP( INEGATE( _S2CINT( X3 ) ) );
L3586:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
L3503:
        scrt6_display( c2715, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2651, c2719, X1 ) );
L3484:
        if  ( NOT( AND( EQ( TSCPTAG( c2652 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2652 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3587;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2677, 
                            CONS( expform_vname( v2651 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2721, CONS( c2652, X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2669, 
                            CONS( expform_vname( v2651 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3587:
        if  ( NEQ( TSCPIMMEDIATETAG( c2652 ), CHARACTERTAG ) )  goto L3590;
        scrt6_display( c2694, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X3 = CHAR_FIX( c2652 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 1024 ) ) ), 
                      3 ) )  goto L3595;
        X2 = _TSCP( ITIMES( FIXED_C( X3 ), 
                            _S2CINT( _TSCP( 1024 ) ) ) );
        goto L3596;
L3595:
        X2 = scrt2__2a_2dtwo( X3, _TSCP( 1024 ) );
L3596:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 72 ) ) ), 
                      3 ) )  goto L3598;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 72 ) ) ) );
        goto L3599;
L3598:
        X1 = scrt2__2b_2dtwo( X2, _TSCP( 72 ) );
L3599:
        scrt6_write( X1, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        scrt6_display( c2715, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2651, c2719, X1 ) );
L3590:
        if  ( NOT( AND( EQ( TSCPTAG( c2652 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2652 ), STRINGTAG ) ) )
            )  goto L3600;
        X1 = gencode_make_2dc_2dglobal(  );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2101, CONS( c2652, X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2692, 
                            CONS( expform_vname( X1 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2677, 
                            CONS( expform_vname( v2651 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2681, 
                                  CONS( expform_vname( X1 ), X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2669, 
                            CONS( expform_vname( v2651 ), X3 ) );
        POPSTACKTRACE( lap_emit_2dlap( X2 ) );
L3600:
        if  ( NOT( AND( EQ( TSCPTAG( c2652 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2652 ), SYMBOLTAG ) ) )
            )  goto L3603;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2677, 
                            CONS( expform_vname( v2651 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2680, 
                                  CONS( scrt1_cons_2a( c2681, 
                                                       CONS( scrt1_cons_2a( c2101, 
                                                                            CONS( SYMBOL_NAME( c2652 ), 
                                                                                  X5 ) ), 
                                                             X4 ) ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2669, 
                            CONS( expform_vname( v2651 ), X2 ) );
        lap_emit_2dlap( X1 );
        X3 = sc_cons( v2651, EMPTYLIST );
        X2 = sc_cons( c2652, X3 );
        X1 = X2;
        POPSTACKTRACE( SET( gencode_constant_2dsymbols_v, 
                            sc_cons( X1, gencode_constant_2dsymbols_v ) ) );
L3603:
        if  ( NEQ( TSCPTAG( c2652 ), PAIRTAG ) )  goto L3608;
        X1 = plist_get( v2651, c2224 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2321 ) ) )  goto L3611;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2677, 
                            CONS( expform_vname( v2651 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
L3611:
        X1 = expform_vname( v2651 );
        POPSTACKTRACE( gencode_ant_2dlist_82e6441b( X1, c2652 ) );
L3608:
        if  ( NOT( AND( EQ( TSCPTAG( c2652 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2652 ), VECTORTAG ) ) )
            )  goto L3613;
        X1 = scrt4_vector_2d_3elist( c2652 );
        gencode_emit_2dconstant( v2651, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2670, 
                                  CONS( expform_vname( v2651 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2669, 
                            CONS( expform_vname( v2651 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3613:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2667, 
                                                    c2652, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_ant_2dlist_82e6441b_v );
DEFCSTRING( t3616, "EMIT-CONSTANT-LIST" );
EXTERNTSCPP( gencode__2delement_28e1d5cf, XAL1( TSCP ) );
EXTERNTSCP( gencode__2delement_28e1d5cf_v );

TSCP  gencode_ant_2dlist_82e6441b( v2880, c2881 )
        TSCP  v2880, c2881;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3616 );
        if  ( NEQ( TSCPTAG( c2881 ), PAIRTAG ) )  goto L3618;
        X1 = PAIR_CDR( c2881 );
        gencode_ant_2dlist_82e6441b( v2880, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( v2880, X3 );
        X4 = PAIR_CAR( c2881 );
        X2 = CONS( scrt1_cons_2a( c2890, 
                                  CONS( gencode__2delement_28e1d5cf( X4 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2669, CONS( v2880, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3618:
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( gencode__2delement_28e1d5cf( c2881 ), X2 );
        X1 = scrt1_cons_2a( c2669, CONS( v2880, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
}

DEFTSCP( gencode__2delement_28e1d5cf_v );
DEFCSTRING( t3623, "EMIT-CONSTANT-ELEMENT" );
EXTERNTSCP( sc_emptystring );
EXTERNTSCP( sc_emptyvector );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  gencode__2delement_28e1d5cf( c2896 )
        TSCP  c2896;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3623 );
        if  ( EQ( _S2CUINT( c2896 ), _S2CUINT( TRUEVALUE ) ) )  goto L3625;
        if  ( EQ( _S2CUINT( c2896 ), _S2CUINT( EMPTYLIST ) ) )  goto L3627;
        if  ( EQ( _S2CUINT( c2896 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3629;
        if  ( TRUE( scrt1_equal_3f( c2896, sc_emptystring ) )
            )  goto L3631;
        if  ( TRUE( scrt1_equal_3f( c2896, sc_emptyvector ) )
            )  goto L3633;
        X1 = BOOLEAN( EQ( TSCPTAG( c2896 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L3639;
        if  ( EQ( TSCPIMMEDIATETAG( c2896 ), CHARACTERTAG ) )  goto L3639;
        if  ( NEQ( TSCPTAG( c2896 ), PAIRTAG ) )  goto L3642;
        X2 = lap_use_2dlap_2dtemp(  );
        X3 = expform_vname( X2 );
        gencode_ant_2dlist_82e6441b( X3, c2896 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2719 ) );
L3642:
        if  ( NOT( AND( EQ( TSCPTAG( c2896 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2896 ), VECTORTAG ) ) )
            )  goto L3645;
        X2 = lap_use_2dlap_2dtemp(  );
        gencode_emit_2dconstant( X2, c2896 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2719 ) );
L3645:
        if  ( NOT( AND( EQ( TSCPTAG( c2896 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2896 ), SYMBOLTAG ) ) )
            )  goto L3648;
        X2 = scrt1_assq( c2896, gencode_constant_2dsymbols_v );
        goto L3649;
L3648:
        X2 = FALSEVALUE;
L3649:
        if  ( FALSE( X2 ) )  goto L3651;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3654;
        scrt1__24__cdr_2derror( X2 );
L3654:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3657;
        scrt1__24__car_2derror( X4 );
L3657:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( expform_vname( X3 ) );
L3651:
        X3 = gencode_make_2dc_2dglobal(  );
        gencode_emit_2dconstant( X3, c2896 );
        POPSTACKTRACE( plist_get( X3, c2719 ) );
L3633:
        POPSTACKTRACE( c2951 );
L3631:
        POPSTACKTRACE( c2952 );
L3629:
        POPSTACKTRACE( c2953 );
L3627:
        POPSTACKTRACE( c2954 );
L3625:
        POPSTACKTRACE( c2955 );
L3639:
        POPSTACKTRACE( gencode_emit_2dconstant( c2950, c2896 ) );
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
        sc_segv__handlers();
        INITIALIZEVAR( t3199, 
                       ADR( gencode_e_2dlambda_7a3ae383_v ), 
                       c2048 );
        INITIALIZEVAR( t3200, 
                       ADR( gencode_e_2dstring_8ca45c6a_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3201, 
                       ADR( gencode_init_2dmodules_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3202, 
                       ADR( gencode_free_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3203, 
                       ADR( gencode_max_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3204, 
                       ADR( gencode_ion_2dinfo_cc47b64b_v ), 
                       c2055 );
        INITIALIZEVAR( t3205, 
                       ADR( gencode_ion_2dinfo_f92fd619_v ), 
                       gencode_ion_2dinfo_cc47b64b_v );
        INITIALIZEVAR( t3206, 
                       ADR( gencode_error_2did_v ), FALSEVALUE );
        INITIALIZEVAR( t3207, 
                       ADR( gencode__24__car_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3208, 
                       ADR( gencode__24__cdr_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3209, 
                       ADR( gencode_generate_2dcode_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_generate_2dcode, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3244, 
                       ADR( gencode_exp_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      gencode_exp_2dgenc, EMPTYLIST ) );
        INITIALIZEVAR( t3278, 
                       ADR( gencode_make_2dlabel_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3280, 
                       ADR( gencode_code_2dlabel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_code_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3286, 
                       ADR( gencode_make_2dc_2dglobal_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dc_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3288, 
                       ADR( gencode_optional_2dargs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_optional_2dargs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3295, 
                       ADR( gencode_lookup_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, gencode_lookup, EMPTYLIST ) );
        INITIALIZEVAR( t3322, 
                       ADR( gencode_var_2din_2dstack_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2din_2dstack, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3324, 
                       ADR( gencode_var_2dis_2dglobal_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3326, 
                       ADR( gencode_var_2dis_2dconstant_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3328, 
                       ADR( gencode_op_2dlevel_343ff0cb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_op_2dlevel_343ff0cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3330, 
                       ADR( gencode_emit_2dextern_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern, EMPTYLIST ) );
        INITIALIZEVAR( t3366, 
                       ADR( gencode_ern_2dargl_18fb6091_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_ern_2dargl_18fb6091, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3409, 
                       ADR( gencode_emit_2dextern_2dargl_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern_2dargl, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3440, 
                       ADR( gencode_t__modules_bfe186ca_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_t__modules_bfe186ca, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3454, 
                       ADR( gencode_constant_2dsymbols_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3455, 
                       ADR( gencode_bol_2dport_c6b2ebee_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3456, 
                       ADR( gencode_emit_2dconstants_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_emit_2dconstants, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3482, 
                       ADR( gencode_emit_2dconstant_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_emit_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3616, 
                       ADR( gencode_ant_2dlist_82e6441b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_ant_2dlist_82e6441b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3623, 
                       ADR( gencode__2delement_28e1d5cf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode__2delement_28e1d5cf, 
                                      EMPTYLIST ) );
        return;
}
