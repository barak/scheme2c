
/* SCHEME->C */

#include <objects.h>

void gencode__init();
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
DEFCSTRING( t3062, "TRUEVALUE" );
DEFSTATICTSCP( c2981 );
DEFCSTRING( t3063, "EMPTYLIST" );
DEFSTATICTSCP( c2980 );
DEFCSTRING( t3064, "FALSEVALUE" );
DEFSTATICTSCP( c2979 );
DEFCSTRING( t3065, "EMPTYSTRING" );
DEFSTATICTSCP( c2978 );
DEFCSTRING( t3066, "EMPTYVECTOR" );
DEFSTATICTSCP( c2977 );
DEFSTATICTSCP( c2976 );
DEFSTATICTSCP( c2916 );
DEFSTATICTSCP( c2747 );
DEFSTATICTSCP( c2745 );
DEFCSTRING( t3067, " )" );
DEFSTATICTSCP( c2741 );
DEFCSTRING( t3068, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c2738 );
DEFSTATICTSCP( c2737 );
DEFCSTRING( t3069, "_TSCP( " );
DEFSTATICTSCP( c2720 );
DEFSTATICTSCP( c2718 );
DEFCSTRING( t3070, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c2713 );
DEFSTATICTSCP( c2712 );
DEFSTATICTSCP( c2707 );
DEFSTATICTSCP( c2706 );
DEFSTATICTSCP( c2703 );
DEFSTATICTSCP( c2696 );
DEFSTATICTSCP( c2695 );
DEFCSTRING( t3071, "EMIT-CONSTANT compile error:" );
DEFSTATICTSCP( c2693 );
DEFSTATICTSCP( c2660 );
DEFSTATICTSCP( c2659 );
DEFSTATICTSCP( c2622 );
DEFSTATICTSCP( t3072 );
DEFSTATICTSCP( c2621 );
DEFCSTRING( t3074, "static void  init_constants()" );
DEFSTATICTSCP( t3073 );
DEFSTATICTSCP( t3075 );
DEFCSTRING( t3076, "}" );
DEFSTATICTSCP( c2615 );
DEFSTATICTSCP( c2614 );
DEFSTATICTSCP( c2590 );
DEFCSTRING( t3078, "        char *compiler_version;" );
DEFSTATICTSCP( t3077 );
DEFSTATICTSCP( c2589 );
DEFCSTRING( t3080, "static void  init_modules( compiler_version )" );
DEFSTATICTSCP( t3079 );
DEFCSTRING( t3081, "__init();" );
DEFSTATICTSCP( c2587 );
DEFSTATICTSCP( c2560 );
DEFSTATICTSCP( c2534 );
DEFSTATICTSCP( c2500 );
DEFCSTRING( t3082, "..." );
DEFSTATICTSCP( c2497 );
DEFCSTRING( t3083, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c2479 );
DEFCSTRING( t3084, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c2475 );
DEFCSTRING( t3085, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c2472 );
DEFSTATICTSCP( c2471 );
DEFSTATICTSCP( c2462 );
DEFCSTRING( t3087, "double" );
DEFSTATICTSCP( t3086 );
DEFSTATICTSCP( t3088 );
DEFCSTRING( t3090, "float" );
DEFSTATICTSCP( t3089 );
DEFSTATICTSCP( t3091 );
DEFCSTRING( t3093, "long unsigned" );
DEFSTATICTSCP( t3092 );
DEFSTATICTSCP( t3094 );
DEFCSTRING( t3096, "short unsigned" );
DEFSTATICTSCP( t3095 );
DEFSTATICTSCP( t3097 );
DEFCSTRING( t3099, "unsigned" );
DEFSTATICTSCP( t3098 );
DEFSTATICTSCP( t3100 );
DEFCSTRING( t3102, "long int" );
DEFSTATICTSCP( t3101 );
DEFSTATICTSCP( t3103 );
DEFCSTRING( t3105, "short int" );
DEFSTATICTSCP( t3104 );
DEFSTATICTSCP( t3106 );
DEFCSTRING( t3108, "int" );
DEFSTATICTSCP( t3107 );
DEFSTATICTSCP( t3109 );
DEFCSTRING( t3111, "char" );
DEFSTATICTSCP( t3110 );
DEFSTATICTSCP( t3112 );
DEFCSTRING( t3114, "TSCP" );
DEFSTATICTSCP( t3113 );
DEFCSTRING( t3116, "void*" );
DEFSTATICTSCP( t3115 );
DEFSTATICTSCP( t3117 );
DEFCSTRING( t3119, "void*" );
DEFSTATICTSCP( t3118 );
DEFSTATICTSCP( t3120 );
DEFCSTRING( t3122, "void" );
DEFSTATICTSCP( t3121 );
DEFSTATICTSCP( t3123 );
DEFCSTRING( t3124, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2447 );
DEFSTATICTSCP( c2446 );
DEFSTATICTSCP( c2409 );
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
DEFSTATICTSCP( t3150 );
DEFSTATICTSCP( t3151 );
DEFSTATICTSCP( c2403 );
DEFSTATICTSCP( t3152 );
DEFSTATICTSCP( t3153 );
DEFSTATICTSCP( t3154 );
DEFSTATICTSCP( t3155 );
DEFSTATICTSCP( t3156 );
DEFSTATICTSCP( t3157 );
DEFSTATICTSCP( t3158 );
DEFSTATICTSCP( t3159 );
DEFSTATICTSCP( t3160 );
DEFSTATICTSCP( t3161 );
DEFSTATICTSCP( t3162 );
DEFSTATICTSCP( t3163 );
DEFSTATICTSCP( t3164 );
DEFSTATICTSCP( c2385 );
DEFSTATICTSCP( t3165 );
DEFSTATICTSCP( t3166 );
DEFSTATICTSCP( t3167 );
DEFSTATICTSCP( t3168 );
DEFSTATICTSCP( t3169 );
DEFSTATICTSCP( t3170 );
DEFSTATICTSCP( t3171 );
DEFSTATICTSCP( t3172 );
DEFSTATICTSCP( t3173 );
DEFSTATICTSCP( t3174 );
DEFSTATICTSCP( t3175 );
DEFSTATICTSCP( t3176 );
DEFSTATICTSCP( c2374 );
DEFSTATICTSCP( c2370 );
DEFCSTRING( t3178, "sc" );
DEFSTATICTSCP( t3177 );
DEFSTATICTSCP( c2362 );
DEFSTATICTSCP( c2356 );
DEFSTATICTSCP( c2344 );
DEFSTATICTSCP( c2339 );
DEFSTATICTSCP( c2336 );
DEFSTATICTSCP( c2324 );
DEFSTATICTSCP( c2309 );
DEFSTATICTSCP( c2301 );
DEFCSTRING( t3179, "SYMBOL does not have a value cell" );
DEFSTATICTSCP( c2298 );
DEFSTATICTSCP( c2295 );
DEFSTATICTSCP( c2280 );
DEFSTATICTSCP( c2277 );
DEFCSTRING( t3180, "DISPLAY" );
DEFSTATICTSCP( c2276 );
DEFSTATICTSCP( c2275 );
DEFSTATICTSCP( c2270 );
DEFCSTRING( t3181, "Variable is not bound" );
DEFSTATICTSCP( c2269 );
DEFSTATICTSCP( c2251 );
DEFSTATICTSCP( c2245 );
DEFSTATICTSCP( c2244 );
DEFSTATICTSCP( c2239 );
DEFSTATICTSCP( c2229 );
DEFSTATICTSCP( c2228 );
DEFSTATICTSCP( c2227 );
DEFSTATICTSCP( c2226 );
DEFCSTRING( t3182, "Illegal use of LAP" );
DEFSTATICTSCP( c2217 );
DEFCSTRING( t3183, "GENERATE-CODE compiler error" );
DEFSTATICTSCP( c2216 );
DEFSTATICTSCP( c2215 );
DEFSTATICTSCP( c2207 );
DEFSTATICTSCP( c2199 );
DEFSTATICTSCP( c2191 );
DEFSTATICTSCP( c2183 );
DEFSTATICTSCP( c2175 );
DEFCSTRING( t3184, "main" );
DEFSTATICTSCP( c2161 );
DEFCSTRING( t3185, "__init" );
DEFSTATICTSCP( c2160 );
DEFCSTRING( t3186, "Compiler error - display index is not 0" );
DEFSTATICTSCP( c2158 );
DEFSTATICTSCP( c2148 );
DEFCSTRING( t3188, "}" );
DEFSTATICTSCP( t3187 );
DEFSTATICTSCP( c2147 );
DEFSTATICTSCP( t3189 );
DEFSTATICTSCP( c2144 );
DEFCSTRING( t3191, "return 0;" );
DEFSTATICTSCP( t3190 );
DEFSTATICTSCP( c2143 );
DEFCSTRING( t3193, "SCHEMEEXIT();" );
DEFSTATICTSCP( t3192 );
DEFCSTRING( t3194, "( CLARGUMENTS( argc, argv ) );" );
DEFSTATICTSCP( c2142 );
DEFCSTRING( t3195, "Main procedure is not defined" );
DEFSTATICTSCP( c2141 );
DEFCSTRING( t3196, "__init(){}" );
DEFSTATICTSCP( c2139 );
DEFSTATICTSCP( c2136 );
DEFCSTRING( t3198, "void" );
DEFSTATICTSCP( t3197 );
DEFSTATICTSCP( t3199 );
DEFSTATICTSCP( c2135 );
DEFSTATICTSCP( c2110 );
DEFCSTRING( t3201, "sc_segv__handlers();" );
DEFSTATICTSCP( t3200 );
DEFCSTRING( t3202, " );" );
DEFSTATICTSCP( c2109 );
DEFCSTRING( t3203, ")" );
DEFSTATICTSCP( c2108 );
DEFCSTRING( t3204, " SCHEME->C COMPILER " );
DEFSTATICTSCP( c2106 );
DEFCSTRING( t3205, "(" );
DEFSTATICTSCP( c2104 );
DEFSTATICTSCP( c2103 );
DEFCSTRING( t3206, "init_modules( " );
DEFSTATICTSCP( c2102 );
DEFSTATICTSCP( c2100 );
DEFCSTRING( t3208, "init_constants();" );
DEFSTATICTSCP( t3207 );
DEFSTATICTSCP( c2099 );
DEFCSTRING( t3209, "argv" );
DEFSTATICTSCP( c2096 );
DEFCSTRING( t3210, "argc" );
DEFSTATICTSCP( c2095 );
DEFSTATICTSCP( c2093 );
DEFSTATICTSCP( c2092 );
DEFCSTRING( t3212, "init = 1;" );
DEFSTATICTSCP( t3211 );
DEFSTATICTSCP( c2091 );
DEFCSTRING( t3214, "if  (init)  return 1;" );
DEFSTATICTSCP( t3213 );
DEFSTATICTSCP( c2090 );
DEFCSTRING( t3216, "if  (init)  return;" );
DEFSTATICTSCP( t3215 );
DEFSTATICTSCP( c2089 );
DEFCSTRING( t3218, "static int  init = 0;" );
DEFSTATICTSCP( t3217 );
DEFSTATICTSCP( c2088 );
DEFSTATICTSCP( c2087 );
DEFSTATICTSCP( c2086 );
DEFCSTRING( t3220, "{" );
DEFSTATICTSCP( t3219 );
DEFSTATICTSCP( c2085 );
DEFCSTRING( t3222, "int main( int argc, char *argv[] )" );
DEFSTATICTSCP( t3221 );
DEFCSTRING( t3223, "()" );
DEFSTATICTSCP( c2084 );
DEFCSTRING( t3224, "void  " );
DEFSTATICTSCP( c2083 );
DEFCSTRING( t3225, "();" );
DEFSTATICTSCP( c2082 );
DEFCSTRING( t3226, "int " );
DEFSTATICTSCP( c2081 );
DEFCSTRING( t3227, "void " );
DEFSTATICTSCP( c2080 );
DEFSTATICTSCP( c2078 );
DEFCSTRING( t3228, "#include " );
DEFSTATICTSCP( c2074 );
DEFCSTRING( t3229, "/* SCHEME->C */" );
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
        c2981 = CSTRING_TSCP( t3062 );
        CONSTANTEXP( ADR( c2981 ) );
        c2980 = CSTRING_TSCP( t3063 );
        CONSTANTEXP( ADR( c2980 ) );
        c2979 = CSTRING_TSCP( t3064 );
        CONSTANTEXP( ADR( c2979 ) );
        c2978 = CSTRING_TSCP( t3065 );
        CONSTANTEXP( ADR( c2978 ) );
        c2977 = CSTRING_TSCP( t3066 );
        CONSTANTEXP( ADR( c2977 ) );
        c2976 = STRINGTOSYMBOL( CSTRING_TSCP( "EMIT-CONSTANT-KLUDGE" ) );
        CONSTANTEXP( ADR( c2976 ) );
        c2916 = STRINGTOSYMBOL( CSTRING_TSCP( "CONS" ) );
        CONSTANTEXP( ADR( c2916 ) );
        c2747 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE_TSCP" ) );
        CONSTANTEXP( ADR( c2747 ) );
        c2745 = STRINGTOSYMBOL( CSTRING_TSCP( "VNAME" ) );
        CONSTANTEXP( ADR( c2745 ) );
        c2741 = CSTRING_TSCP( t3067 );
        CONSTANTEXP( ADR( c2741 ) );
        c2738 = CSTRING_TSCP( t3068 );
        CONSTANTEXP( ADR( c2738 ) );
        c2737 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c2737 ) );
        c2720 = CSTRING_TSCP( t3069 );
        CONSTANTEXP( ADR( c2720 ) );
        c2718 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFCSTRING" ) );
        CONSTANTEXP( ADR( c2718 ) );
        c2713 = CSTRING_TSCP( t3070 );
        CONSTANTEXP( ADR( c2713 ) );
        c2712 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c2712 ) );
        c2707 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING_TSCP" ) );
        CONSTANTEXP( ADR( c2707 ) );
        c2706 = STRINGTOSYMBOL( CSTRING_TSCP( "STRINGTOSYMBOL" ) );
        CONSTANTEXP( ADR( c2706 ) );
        c2703 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFSTATICTSCP" ) );
        CONSTANTEXP( ADR( c2703 ) );
        c2696 = STRINGTOSYMBOL( CSTRING_TSCP( "LISTTOVECTOR" ) );
        CONSTANTEXP( ADR( c2696 ) );
        c2695 = STRINGTOSYMBOL( CSTRING_TSCP( "SET" ) );
        CONSTANTEXP( ADR( c2695 ) );
        c2693 = CSTRING_TSCP( t3071 );
        CONSTANTEXP( ADR( c2693 ) );
        c2660 = STRINGTOSYMBOL( CSTRING_TSCP( "ADR" ) );
        CONSTANTEXP( ADR( c2660 ) );
        c2659 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANTEXP" ) );
        CONSTANTEXP( ADR( c2659 ) );
        c2622 = EMPTYLIST;
        t3072 = STRINGTOSYMBOL( CSTRING_TSCP( "LOCALS" ) );
        c2622 = CONS( t3072, c2622 );
        CONSTANTEXP( ADR( c2622 ) );
        c2621 = EMPTYLIST;
        t3073 = CSTRING_TSCP( t3074 );
        c2621 = CONS( t3073, c2621 );
        t3075 = STRINGTOSYMBOL( CSTRING_TSCP( "LIT" ) );
        c2621 = CONS( t3075, c2621 );
        CONSTANTEXP( ADR( c2621 ) );
        c2615 = CSTRING_TSCP( t3076 );
        CONSTANTEXP( ADR( c2615 ) );
        c2614 = STRINGTOSYMBOL( CSTRING_TSCP( "MAXDISPLAY" ) );
        CONSTANTEXP( ADR( c2614 ) );
        c2590 = EMPTYLIST;
        t3077 = CSTRING_TSCP( t3078 );
        c2590 = CONS( t3077, c2590 );
        c2590 = CONS( t3075, c2590 );
        CONSTANTEXP( ADR( c2590 ) );
        c2589 = EMPTYLIST;
        t3079 = CSTRING_TSCP( t3080 );
        c2589 = CONS( t3079, c2589 );
        c2589 = CONS( t3075, c2589 );
        CONSTANTEXP( ADR( c2589 ) );
        c2587 = CSTRING_TSCP( t3081 );
        CONSTANTEXP( ADR( c2587 ) );
        c2560 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        CONSTANTEXP( ADR( c2560 ) );
        c2534 = STRINGTOSYMBOL( CSTRING_TSCP( "TSCP" ) );
        CONSTANTEXP( ADR( c2534 ) );
        c2500 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2500 ) );
        c2497 = CSTRING_TSCP( t3082 );
        CONSTANTEXP( ADR( c2497 ) );
        c2479 = CSTRING_TSCP( t3083 );
        CONSTANTEXP( ADR( c2479 ) );
        c2475 = CSTRING_TSCP( t3084 );
        CONSTANTEXP( ADR( c2475 ) );
        c2472 = CSTRING_TSCP( t3085 );
        CONSTANTEXP( ADR( c2472 ) );
        c2471 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c2471 ) );
        c2462 = EMPTYLIST;
        t3086 = CSTRING_TSCP( t3087 );
        X1 = t3086;
        t3088 = STRINGTOSYMBOL( CSTRING_TSCP( "DOUBLE" ) );
        X1 = CONS( t3088, X1 );
        c2462 = CONS( X1, c2462 );
        t3089 = CSTRING_TSCP( t3090 );
        X1 = t3089;
        t3091 = STRINGTOSYMBOL( CSTRING_TSCP( "FLOAT" ) );
        X1 = CONS( t3091, X1 );
        c2462 = CONS( X1, c2462 );
        t3092 = CSTRING_TSCP( t3093 );
        X1 = t3092;
        t3094 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGUNSIGNED" ) );
        X1 = CONS( t3094, X1 );
        c2462 = CONS( X1, c2462 );
        t3095 = CSTRING_TSCP( t3096 );
        X1 = t3095;
        t3097 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTUNSIGNED" ) );
        X1 = CONS( t3097, X1 );
        c2462 = CONS( X1, c2462 );
        t3098 = CSTRING_TSCP( t3099 );
        X1 = t3098;
        t3100 = STRINGTOSYMBOL( CSTRING_TSCP( "UNSIGNED" ) );
        X1 = CONS( t3100, X1 );
        c2462 = CONS( X1, c2462 );
        t3101 = CSTRING_TSCP( t3102 );
        X1 = t3101;
        t3103 = STRINGTOSYMBOL( CSTRING_TSCP( "LONGINT" ) );
        X1 = CONS( t3103, X1 );
        c2462 = CONS( X1, c2462 );
        t3104 = CSTRING_TSCP( t3105 );
        X1 = t3104;
        t3106 = STRINGTOSYMBOL( CSTRING_TSCP( "SHORTINT" ) );
        X1 = CONS( t3106, X1 );
        c2462 = CONS( X1, c2462 );
        t3107 = CSTRING_TSCP( t3108 );
        X1 = t3107;
        t3109 = STRINGTOSYMBOL( CSTRING_TSCP( "INT" ) );
        X1 = CONS( t3109, X1 );
        c2462 = CONS( X1, c2462 );
        t3110 = CSTRING_TSCP( t3111 );
        X1 = t3110;
        t3112 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR" ) );
        X1 = CONS( t3112, X1 );
        c2462 = CONS( X1, c2462 );
        t3113 = CSTRING_TSCP( t3114 );
        X1 = t3113;
        X1 = CONS( c2534, X1 );
        c2462 = CONS( X1, c2462 );
        t3115 = CSTRING_TSCP( t3116 );
        X1 = t3115;
        t3117 = STRINGTOSYMBOL( CSTRING_TSCP( "ARRAY" ) );
        X1 = CONS( t3117, X1 );
        c2462 = CONS( X1, c2462 );
        t3118 = CSTRING_TSCP( t3119 );
        X1 = t3118;
        t3120 = STRINGTOSYMBOL( CSTRING_TSCP( "POINTER" ) );
        X1 = CONS( t3120, X1 );
        c2462 = CONS( X1, c2462 );
        t3121 = CSTRING_TSCP( t3122 );
        X1 = t3121;
        t3123 = STRINGTOSYMBOL( CSTRING_TSCP( "VOID" ) );
        X1 = CONS( t3123, X1 );
        c2462 = CONS( X1, c2462 );
        CONSTANTEXP( ADR( c2462 ) );
        c2447 = CSTRING_TSCP( t3124 );
        CONSTANTEXP( ADR( c2447 ) );
        c2446 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2446 ) );
        c2409 = EMPTYLIST;
        t3125 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL26" ) );
        c2409 = CONS( t3125, c2409 );
        t3126 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL25" ) );
        c2409 = CONS( t3126, c2409 );
        t3127 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL24" ) );
        c2409 = CONS( t3127, c2409 );
        t3128 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL23" ) );
        c2409 = CONS( t3128, c2409 );
        t3129 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL22" ) );
        c2409 = CONS( t3129, c2409 );
        t3130 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL21" ) );
        c2409 = CONS( t3130, c2409 );
        t3131 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL20" ) );
        c2409 = CONS( t3131, c2409 );
        t3132 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL19" ) );
        c2409 = CONS( t3132, c2409 );
        t3133 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL18" ) );
        c2409 = CONS( t3133, c2409 );
        t3134 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL17" ) );
        c2409 = CONS( t3134, c2409 );
        t3135 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL16" ) );
        c2409 = CONS( t3135, c2409 );
        t3136 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL15" ) );
        c2409 = CONS( t3136, c2409 );
        t3137 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL14" ) );
        c2409 = CONS( t3137, c2409 );
        t3138 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL13" ) );
        c2409 = CONS( t3138, c2409 );
        t3139 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL12" ) );
        c2409 = CONS( t3139, c2409 );
        t3140 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL11" ) );
        c2409 = CONS( t3140, c2409 );
        t3141 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL10" ) );
        c2409 = CONS( t3141, c2409 );
        t3142 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL9" ) );
        c2409 = CONS( t3142, c2409 );
        t3143 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL8" ) );
        c2409 = CONS( t3143, c2409 );
        t3144 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL7" ) );
        c2409 = CONS( t3144, c2409 );
        t3145 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL6" ) );
        c2409 = CONS( t3145, c2409 );
        t3146 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL5" ) );
        c2409 = CONS( t3146, c2409 );
        t3147 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL4" ) );
        c2409 = CONS( t3147, c2409 );
        t3148 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL3" ) );
        c2409 = CONS( t3148, c2409 );
        t3149 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL2" ) );
        c2409 = CONS( t3149, c2409 );
        t3150 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL1" ) );
        c2409 = CONS( t3150, c2409 );
        t3151 = STRINGTOSYMBOL( CSTRING_TSCP( "XAL0" ) );
        c2409 = CONS( t3151, c2409 );
        c2409 = LISTTOVECTOR( c2409 );
        CONSTANTEXP( ADR( c2409 ) );
        c2403 = EMPTYLIST;
        t3152 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLEP" ) );
        X1 = t3152;
        X1 = CONS( t3088, X1 );
        c2403 = CONS( X1, c2403 );
        t3153 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOATP" ) );
        X1 = t3153;
        X1 = CONS( t3091, X1 );
        c2403 = CONS( X1, c2403 );
        t3154 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNEDP" ) );
        X1 = t3154;
        X1 = CONS( t3094, X1 );
        c2403 = CONS( X1, c2403 );
        t3155 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNEDP" ) );
        X1 = t3155;
        X1 = CONS( t3097, X1 );
        c2403 = CONS( X1, c2403 );
        t3156 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNEDP" ) );
        X1 = t3156;
        X1 = CONS( t3100, X1 );
        c2403 = CONS( X1, c2403 );
        t3157 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINTP" ) );
        X1 = t3157;
        X1 = CONS( t3103, X1 );
        c2403 = CONS( X1, c2403 );
        t3158 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINTP" ) );
        X1 = t3158;
        X1 = CONS( t3106, X1 );
        c2403 = CONS( X1, c2403 );
        t3159 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINTP" ) );
        X1 = t3159;
        X1 = CONS( t3109, X1 );
        c2403 = CONS( X1, c2403 );
        t3160 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHARP" ) );
        X1 = t3160;
        X1 = CONS( t3112, X1 );
        c2403 = CONS( X1, c2403 );
        t3161 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        X1 = t3161;
        X1 = CONS( c2534, X1 );
        c2403 = CONS( X1, c2403 );
        t3162 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAYP" ) );
        X1 = t3162;
        X1 = CONS( t3117, X1 );
        c2403 = CONS( X1, c2403 );
        t3163 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTERP" ) );
        X1 = t3163;
        X1 = CONS( t3120, X1 );
        c2403 = CONS( X1, c2403 );
        t3164 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNVOIDP" ) );
        X1 = t3164;
        X1 = CONS( t3123, X1 );
        c2403 = CONS( X1, c2403 );
        CONSTANTEXP( ADR( c2403 ) );
        c2385 = EMPTYLIST;
        t3165 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNDOUBLE" ) );
        X1 = t3165;
        X1 = CONS( t3088, X1 );
        c2385 = CONS( X1, c2385 );
        t3166 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNFLOAT" ) );
        X1 = t3166;
        X1 = CONS( t3091, X1 );
        c2385 = CONS( X1, c2385 );
        t3167 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGUNSIGNED" ) );
        X1 = t3167;
        X1 = CONS( t3094, X1 );
        c2385 = CONS( X1, c2385 );
        t3168 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTUNSIGNED" ) );
        X1 = t3168;
        X1 = CONS( t3097, X1 );
        c2385 = CONS( X1, c2385 );
        t3169 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNUNSIGNED" ) );
        X1 = t3169;
        X1 = CONS( t3100, X1 );
        c2385 = CONS( X1, c2385 );
        t3170 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNLONGINT" ) );
        X1 = t3170;
        X1 = CONS( t3103, X1 );
        c2385 = CONS( X1, c2385 );
        t3171 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNSHORTINT" ) );
        X1 = t3171;
        X1 = CONS( t3106, X1 );
        c2385 = CONS( X1, c2385 );
        t3172 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNINT" ) );
        X1 = t3172;
        X1 = CONS( t3109, X1 );
        c2385 = CONS( X1, c2385 );
        t3173 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNCHAR" ) );
        X1 = t3173;
        X1 = CONS( t3112, X1 );
        c2385 = CONS( X1, c2385 );
        t3174 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        X1 = t3174;
        X1 = CONS( c2534, X1 );
        c2385 = CONS( X1, c2385 );
        t3175 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNARRAY" ) );
        X1 = t3175;
        X1 = CONS( t3117, X1 );
        c2385 = CONS( X1, c2385 );
        t3176 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNPOINTER" ) );
        X1 = t3176;
        X1 = CONS( t3120, X1 );
        c2385 = CONS( X1, c2385 );
        CONSTANTEXP( ADR( c2385 ) );
        c2374 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2374 ) );
        c2370 = EMPTYLIST;
        t3177 = CSTRING_TSCP( t3178 );
        c2370 = CONS( t3177, c2370 );
        c2370 = CONS( EMPTYSTRING, c2370 );
        CONSTANTEXP( ADR( c2370 ) );
        c2362 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCP" ) );
        CONSTANTEXP( ADR( c2362 ) );
        c2356 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNTSCPP" ) );
        CONSTANTEXP( ADR( c2356 ) );
        c2344 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c2344 ) );
        c2339 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c2339 ) );
        c2336 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2336 ) );
        c2324 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c2324 ) );
        c2309 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c2309 ) );
        c2301 = STRINGTOSYMBOL( CSTRING_TSCP( "PRINTNAME" ) );
        CONSTANTEXP( ADR( c2301 ) );
        c2298 = CSTRING_TSCP( t3179 );
        CONSTANTEXP( ADR( c2298 ) );
        c2295 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2295 ) );
        c2280 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c2280 ) );
        c2277 = STRINGTOSYMBOL( CSTRING_TSCP( "PAIR_CAR" ) );
        CONSTANTEXP( ADR( c2277 ) );
        c2276 = CSTRING_TSCP( t3180 );
        CONSTANTEXP( ADR( c2276 ) );
        c2275 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2275 ) );
        c2270 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL_VALUE" ) );
        CONSTANTEXP( ADR( c2270 ) );
        c2269 = CSTRING_TSCP( t3181 );
        CONSTANTEXP( ADR( c2269 ) );
        c2251 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c2251 ) );
        c2245 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMPORARY" ) );
        CONSTANTEXP( ADR( c2245 ) );
        c2244 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMP" ) );
        CONSTANTEXP( ADR( c2244 ) );
        c2239 = STRINGTOSYMBOL( CSTRING_TSCP( "CODE-LABEL" ) );
        CONSTANTEXP( ADR( c2239 ) );
        c2229 = STRINGTOSYMBOL( CSTRING_TSCP( "GOTOS" ) );
        CONSTANTEXP( ADR( c2229 ) );
        c2228 = STRINGTOSYMBOL( CSTRING_TSCP( "LABEL" ) );
        CONSTANTEXP( ADR( c2228 ) );
        c2227 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2227 ) );
        c2226 = STRINGTOSYMBOL( CSTRING_TSCP( "L" ) );
        CONSTANTEXP( ADR( c2226 ) );
        c2217 = CSTRING_TSCP( t3182 );
        CONSTANTEXP( ADR( c2217 ) );
        c2216 = CSTRING_TSCP( t3183 );
        CONSTANTEXP( ADR( c2216 ) );
        c2215 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2215 ) );
        c2207 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2207 ) );
        c2199 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2199 ) );
        c2191 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2191 ) );
        c2183 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2183 ) );
        c2175 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2175 ) );
        c2161 = CSTRING_TSCP( t3184 );
        CONSTANTEXP( ADR( c2161 ) );
        c2160 = CSTRING_TSCP( t3185 );
        CONSTANTEXP( ADR( c2160 ) );
        c2158 = CSTRING_TSCP( t3186 );
        CONSTANTEXP( ADR( c2158 ) );
        c2148 = EMPTYLIST;
        t3187 = CSTRING_TSCP( t3188 );
        c2148 = CONS( t3187, c2148 );
        c2148 = CONS( t3075, c2148 );
        CONSTANTEXP( ADR( c2148 ) );
        c2147 = EMPTYLIST;
        c2147 = CONS( _TSCP( 0 ), c2147 );
        t3189 = STRINGTOSYMBOL( CSTRING_TSCP( "INDENT" ) );
        c2147 = CONS( t3189, c2147 );
        CONSTANTEXP( ADR( c2147 ) );
        c2144 = EMPTYLIST;
        t3190 = CSTRING_TSCP( t3191 );
        c2144 = CONS( t3190, c2144 );
        c2144 = CONS( t3075, c2144 );
        CONSTANTEXP( ADR( c2144 ) );
        c2143 = EMPTYLIST;
        t3192 = CSTRING_TSCP( t3193 );
        c2143 = CONS( t3192, c2143 );
        c2143 = CONS( t3075, c2143 );
        CONSTANTEXP( ADR( c2143 ) );
        c2142 = CSTRING_TSCP( t3194 );
        CONSTANTEXP( ADR( c2142 ) );
        c2141 = CSTRING_TSCP( t3195 );
        CONSTANTEXP( ADR( c2141 ) );
        c2139 = CSTRING_TSCP( t3196 );
        CONSTANTEXP( ADR( c2139 ) );
        c2136 = EMPTYLIST;
        t3197 = CSTRING_TSCP( t3198 );
        c2136 = CONS( t3197, c2136 );
        t3199 = STRINGTOSYMBOL( CSTRING_TSCP( "RETURN" ) );
        c2136 = CONS( t3199, c2136 );
        c2136 = CONS( c2695, c2136 );
        CONSTANTEXP( ADR( c2136 ) );
        c2135 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c2135 ) );
        c2110 = EMPTYLIST;
        t3200 = CSTRING_TSCP( t3201 );
        c2110 = CONS( t3200, c2110 );
        c2110 = CONS( t3075, c2110 );
        CONSTANTEXP( ADR( c2110 ) );
        c2109 = CSTRING_TSCP( t3202 );
        CONSTANTEXP( ADR( c2109 ) );
        c2108 = CSTRING_TSCP( t3203 );
        CONSTANTEXP( ADR( c2108 ) );
        c2106 = CSTRING_TSCP( t3204 );
        CONSTANTEXP( ADR( c2106 ) );
        c2104 = CSTRING_TSCP( t3205 );
        CONSTANTEXP( ADR( c2104 ) );
        c2103 = STRINGTOSYMBOL( CSTRING_TSCP( "CSTRING" ) );
        CONSTANTEXP( ADR( c2103 ) );
        c2102 = CSTRING_TSCP( t3206 );
        CONSTANTEXP( ADR( c2102 ) );
        c2100 = EMPTYLIST;
        t3207 = CSTRING_TSCP( t3208 );
        c2100 = CONS( t3207, c2100 );
        c2100 = CONS( t3075, c2100 );
        CONSTANTEXP( ADR( c2100 ) );
        c2099 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2099 ) );
        c2096 = CSTRING_TSCP( t3209 );
        CONSTANTEXP( ADR( c2096 ) );
        c2095 = CSTRING_TSCP( t3210 );
        CONSTANTEXP( ADR( c2095 ) );
        c2093 = STRINGTOSYMBOL( CSTRING_TSCP( "INITHEAP" ) );
        CONSTANTEXP( ADR( c2093 ) );
        c2092 = EMPTYLIST;
        t3211 = CSTRING_TSCP( t3212 );
        c2092 = CONS( t3211, c2092 );
        c2092 = CONS( t3075, c2092 );
        CONSTANTEXP( ADR( c2092 ) );
        c2091 = EMPTYLIST;
        t3213 = CSTRING_TSCP( t3214 );
        c2091 = CONS( t3213, c2091 );
        c2091 = CONS( t3075, c2091 );
        CONSTANTEXP( ADR( c2091 ) );
        c2090 = EMPTYLIST;
        t3215 = CSTRING_TSCP( t3216 );
        c2090 = CONS( t3215, c2090 );
        c2090 = CONS( t3075, c2090 );
        CONSTANTEXP( ADR( c2090 ) );
        c2089 = EMPTYLIST;
        t3217 = CSTRING_TSCP( t3218 );
        c2089 = CONS( t3217, c2089 );
        c2089 = CONS( t3075, c2089 );
        CONSTANTEXP( ADR( c2089 ) );
        c2088 = EMPTYLIST;
        c2088 = CONS( _TSCP( 0 ), c2088 );
        c2088 = CONS( c2280, c2088 );
        c2088 = CONS( t3072, c2088 );
        CONSTANTEXP( ADR( c2088 ) );
        c2087 = EMPTYLIST;
        c2087 = CONS( _TSCP( 32 ), c2087 );
        c2087 = CONS( t3189, c2087 );
        CONSTANTEXP( ADR( c2087 ) );
        c2086 = EMPTYLIST;
        t3219 = CSTRING_TSCP( t3220 );
        c2086 = CONS( t3219, c2086 );
        c2086 = CONS( t3075, c2086 );
        CONSTANTEXP( ADR( c2086 ) );
        c2085 = EMPTYLIST;
        t3221 = CSTRING_TSCP( t3222 );
        c2085 = CONS( t3221, c2085 );
        c2085 = CONS( t3075, c2085 );
        CONSTANTEXP( ADR( c2085 ) );
        c2084 = CSTRING_TSCP( t3223 );
        CONSTANTEXP( ADR( c2084 ) );
        c2083 = CSTRING_TSCP( t3224 );
        CONSTANTEXP( ADR( c2083 ) );
        c2082 = CSTRING_TSCP( t3225 );
        CONSTANTEXP( ADR( c2082 ) );
        c2081 = CSTRING_TSCP( t3226 );
        CONSTANTEXP( ADR( c2081 ) );
        c2080 = CSTRING_TSCP( t3227 );
        CONSTANTEXP( ADR( c2080 ) );
        c2078 = EMPTYLIST;
        c2078 = CONS( t3075, c2078 );
        CONSTANTEXP( ADR( c2078 ) );
        c2074 = CSTRING_TSCP( t3228 );
        CONSTANTEXP( ADR( c2074 ) );
        c2073 = CSTRING_TSCP( t3229 );
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
DEFCSTRING( t3230, "CURRENT-CODE-LAMBDA" );
DEFTSCP( gencode_e_2dstring_8ca45c6a_v );
DEFCSTRING( t3231, "CURRENT-DEFINE-STRING" );
DEFTSCP( gencode_init_2dmodules_v );
DEFCSTRING( t3232, "INIT-MODULES" );
DEFTSCP( gencode_free_2ddisplay_v );
DEFCSTRING( t3233, "FREE-DISPLAY" );
DEFTSCP( gencode_max_2ddisplay_v );
DEFCSTRING( t3234, "MAX-DISPLAY" );
DEFTSCP( gencode_ion_2dinfo_cc47b64b_v );
DEFCSTRING( t3235, "EMPTY-CONDITION-INFO" );
DEFTSCP( gencode_ion_2dinfo_f92fd619_v );
DEFCSTRING( t3236, "GLOBAL-CONDITION-INFO" );
DEFTSCP( gencode_error_2did_v );
DEFCSTRING( t3237, "ERROR-ID" );
DEFTSCP( gencode__24__car_2derror_2did_v );
DEFCSTRING( t3238, "$_CAR-ERROR-ID" );
DEFTSCP( gencode__24__cdr_2derror_2did_v );
DEFCSTRING( t3239, "$_CDR-ERROR-ID" );
DEFTSCP( gencode_generate_2dcode_v );
DEFCSTRING( t3240, "GENERATE-CODE" );
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

        PUSHSTACKTRACE( t3240 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3242;
        X1 = c2161;
        goto L3243;
L3242:
        X2 = CONS( c2160, EMPTYLIST );
        X1 = scrt3_string_2dappend( CONS( SYMBOL_VALUE( module_2dname_v ), 
                                          X2 ) );
L3243:
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
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2082, X4 );
        X4 = CONS( X1, X4 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3245;
        X5 = c2081;
        goto L3246;
L3245:
        X5 = c2080;
L3246:
        X3 = scrt1_cons_2a( c2072, CONS( X5, X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
        gencode_init_2dmodules_v = EMPTYLIST;
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3247;
        lap_emit_2dlap( c2085 );
        goto L3248;
L3247:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2084, X4 );
        X4 = CONS( X1, X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2083, X4 ) );
        lap_emit_2dlap( X3 );
L3248:
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2087 );
        lap_emit_2dlap( c2088 );
        lap_emit_2dlap( c2089 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3249;
        lap_emit_2dlap( c2091 );
        goto L3250;
L3249:
        lap_emit_2dlap( c2090 );
L3250:
        lap_emit_2dlap( c2092 );
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3251;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = SYMBOL_VALUE( main_2dprogram_2dname_v );
        X5 = plist_get( X6, c2099 );
        X4 = CONS( expform_cname( X5 ), X4 );
        X4 = CONS( c2096, X4 );
        X4 = CONS( c2095, X4 );
        X3 = scrt1_cons_2a( c2093, 
                            CONS( SYMBOL_VALUE( heap_2dsize_v ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
        goto L3252;
L3251:
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( c2093, 
                            CONS( SYMBOL_VALUE( heap_2dsize_v ), 
                                  X4 ) );
        lap_emit_2dlap( X3 );
L3252:
        lap_emit_2dlap( c2100 );
        X3 = gencode_emit_2dconstants(  );
        SETGEN( PAIR_CAR( X2 ), X3 );
        lap_done_2dlap( PAIR_CAR( X2 ) );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2109, X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( c2108, EMPTYLIST );
        X6 = CONS( SYMBOL_VALUE( scc_2dversion_v ), X6 );
        X6 = CONS( c2106, X6 );
        X6 = CONS( SYMBOL_VALUE( module_2dname_v ), X6 );
        X4 = CONS( scrt1_cons_2a( c2103, 
                                  CONS( scrt3_string_2dappend( CONS( c2104, 
                                                                     X6 ) ), 
                                        X5 ) ), 
                   X4 );
        X3 = scrt1_cons_2a( c2072, CONS( c2102, X4 ) );
        lap_emit_2dlap( X3 );
        lap_emit_2dlap( c2110 );
        X3 = e2062;
L3254:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3255;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3259;
        scrt1__24__car_2derror( X3 );
L3259:
        X4 = PAIR_CAR( X3 );
        gencode_ion_2dinfo_f92fd619_v = gencode_ion_2dinfo_cc47b64b_v;
        gencode_exp_2dgenc( c2135, X4, EMPTYLIST );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3254 );
L3255:
        if  ( FALSE( SYMBOL_VALUE( main_2dprogram_2dname_v ) )
            )  goto L3263;
        X4 = SYMBOL_VALUE( main_2dprogram_2dname_v );
        X3 = plist_get( X4, c2099 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2139, X5 );
        X5 = CONS( SYMBOL_VALUE( module_2dname_v ), X5 );
        X4 = scrt1_cons_2a( c2072, CONS( c2083, X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
        if  ( FALSE( X3 ) )  goto L3266;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( c2142, X5 );
        X4 = scrt1_cons_2a( c2072, 
                            CONS( expform_cname( X3 ), X5 ) );
        lap_emit_2dlap( X4 );
        goto L3267;
L3266:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2141, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3267:
        lap_emit_2dlap( c2143 );
        lap_emit_2dlap( c2144 );
        goto L3264;
L3263:
        lap_emit_2dlap( c2136 );
L3264:
        lap_emit_2dlap( c2147 );
        lap_emit_2dlap( c2148 );
        X3 = gencode_free_2ddisplay_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L3270;
        if  ( NEQ( _S2CUINT( _TSCP( 0 ) ), _S2CUINT( X3 ) ) )  goto L3274;
        goto L3277;
L3270:
        if  ( TRUE( scrt2__3d_2dtwo( _TSCP( 0 ), X3 ) ) )  goto L3277;
L3274:
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( c2158, 
                                     PROCEDURE_CLOSURE( X4 ) );
L3277:
        gencode_t__modules_bfe186ca(  );
        X3 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        POPSTACKTRACE( lap_done_2dlap( X3 ) );
}

DEFTSCP( gencode_exp_2dgenc_v );
DEFCSTRING( t3278, "EXP-GENC" );

TSCP  gencode_exp_2dgenc( l2163, e2164, b2165 )
        TSCP  l2163, e2164, b2165;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3278 );
        if  ( NOT( AND( EQ( TSCPTAG( e2164 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2164 ), SYMBOLTAG ) ) )
            )  goto L3280;
        X1 = SYMBOL_VALUE( symbol_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3280:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3285;
        scrt1__24__car_2derror( e2164 );
L3285:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2175 ) ) )  goto L3282;
        X1 = SYMBOL_VALUE( _24call_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3282:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3290;
        scrt1__24__car_2derror( e2164 );
L3290:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2183 ) ) )  goto L3287;
        X1 = SYMBOL_VALUE( _24set_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3287:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3295;
        scrt1__24__car_2derror( e2164 );
L3295:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2191 ) ) )  goto L3292;
        X1 = SYMBOL_VALUE( _24lambda_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3292:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3300;
        scrt1__24__car_2derror( e2164 );
L3300:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2199 ) ) )  goto L3297;
        X1 = SYMBOL_VALUE( _24if_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3297:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3305;
        scrt1__24__car_2derror( e2164 );
L3305:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2207 ) ) )  goto L3302;
        X1 = SYMBOL_VALUE( _24define_2dgenc_v );
        X1 = UNKNOWNCALL( X1, 3 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( l2163, 
                                                    e2164, 
                                                    b2165, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3302:
        if  ( EQ( TSCPTAG( e2164 ), PAIRTAG ) )  goto L3310;
        scrt1__24__car_2derror( e2164 );
L3310:
        X1 = PAIR_CAR( e2164 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2215 ) ) )  goto L3307;
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2217, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3307:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2216, 
                                                    e2164, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_make_2dlabel_v );
DEFCSTRING( t3312, "MAKE-LABEL" );
EXTERNTSCPP( expform_newv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( expform_newv_v );

TSCP  gencode_make_2dlabel(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3312 );
        X1 = CONS( _TSCP( 0 ), EMPTYLIST );
        X1 = CONS( c2229, X1 );
        X1 = CONS( c2228, X1 );
        POPSTACKTRACE( expform_newv( c2226, 
                                     CONS( c2227, X1 ) ) );
}

DEFTSCP( gencode_code_2dlabel_v );
DEFCSTRING( t3314, "CODE-LABEL" );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  gencode_code_2dlabel( i2232 )
        TSCP  i2232;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t3314 );
        X1 = plist_get( i2232, c2239 );
        X1 = CONS( X1, EMPTYLIST );
        if  ( TRUE( PAIR_CAR( X1 ) ) )  goto L3317;
        X2 = gencode_make_2dlabel(  );
        SETGEN( PAIR_CAR( X1 ), X2 );
        plist_put( i2232, c2239, PAIR_CAR( X1 ) );
L3317:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( gencode_make_2dc_2dglobal_v );
DEFCSTRING( t3320, "MAKE-C-GLOBAL" );

TSCP  gencode_make_2dc_2dglobal(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t3320 );
        X1 = CONS( c2245, EMPTYLIST );
        POPSTACKTRACE( expform_newv( c2244, 
                                     CONS( c2227, X1 ) ) );
}

DEFTSCP( gencode_optional_2dargs_v );
DEFCSTRING( t3322, "OPTIONAL-ARGS" );

TSCP  gencode_optional_2dargs( i2248 )
        TSCP  i2248;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3322 );
        if  ( FALSE( plist_get( i2248, c2251 ) ) )  goto L3324;
        X1 = plist_get( i2248, c2251 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3327;
        scrt1__24__car_2derror( X1 );
L3327:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L3324:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( gencode_lookup_v );
DEFCSTRING( t3329, "LOOKUP" );
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

TSCP  gencode_lookup( v2260, b2261 )
        TSCP  v2260, b2261;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3329 );
        if  ( FALSE( gencode_var_2dis_2dconstant( v2260 ) ) )  goto L3331;
        POPSTACKTRACE( expform_vname( v2260 ) );
L3331:
        if  ( FALSE( gencode_var_2dis_2dglobal( v2260 ) ) )  goto L3333;
        gencode_emit_2dextern( v2260 );
        X1 = expform_vname( v2260 );
        if  ( TRUE( X1 ) )  goto L3337;
        X3 = plist_get( v2260, c2295 );
        if  ( FALSE( X3 ) )  goto L3340;
        X2 = expform_cname( v2260 );
        goto L3341;
L3340:
        X2 = X3;
L3341:
        if  ( TRUE( X2 ) )  goto L3343;
        X4 = plist_get( v2260, c2301 );
        X3 = SYMBOL_VALUE( report_2derror_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2298, 
                                                    X4, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3343:
        POPSTACKTRACE( X2 );
L3337:
        POPSTACKTRACE( X1 );
L3333:
        if  ( FALSE( gencode_var_2din_2dstack( v2260 ) ) )  goto L3345;
        X1 = plist_get( v2260, c2280 );
        if  ( FALSE( plist_get( v2260, c2275 ) ) )  goto L3348;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3350;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2276, CONS( X1, X4 ) );
        goto L3351;
L3350:
        X3 = expform_vname( v2260 );
L3351:
        POPSTACKTRACE( scrt1_cons_2a( c2277, CONS( X3, X2 ) ) );
L3348:
        if  ( FALSE( X1 ) )  goto L3352;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2276, CONS( X1, X2 ) ) );
L3352:
        POPSTACKTRACE( expform_vname( v2260 ) );
L3345:
        if  ( FALSE( gencode_op_2dlevel_343ff0cb( v2260 ) ) )  goto L3354;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2270, 
                                      CONS( expform_vname( v2260 ), 
                                            X1 ) ) );
L3354:
        X2 = expform_vname( v2260 );
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2269, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_var_2din_2dstack_v );
DEFCSTRING( t3356, "VAR-IN-STACK" );

TSCP  gencode_var_2din_2dstack( v2303 )
        TSCP  v2303;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3356 );
        X1 = plist_get( v2303, c2227 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2309 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dglobal_v );
DEFCSTRING( t3358, "VAR-IS-GLOBAL" );

TSCP  gencode_var_2dis_2dglobal( v2311 )
        TSCP  v2311;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3358 );
        X1 = plist_get( v2311, c2227 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2099 ) ) ) );
}

DEFTSCP( gencode_var_2dis_2dconstant_v );
DEFCSTRING( t3360, "VAR-IS-CONSTANT" );

TSCP  gencode_var_2dis_2dconstant( v2318 )
        TSCP  v2318;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3360 );
        X1 = plist_get( v2318, c2227 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2324 ) ) ) );
}

DEFTSCP( gencode_op_2dlevel_343ff0cb_v );
DEFCSTRING( t3362, "VAR-IS-TOP-LEVEL" );

TSCP  gencode_op_2dlevel_343ff0cb( v2326 )
        TSCP  v2326;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3362 );
        X1 = plist_get( v2326, c2227 );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( c2048 ) ) ) );
}

DEFTSCP( gencode_emit_2dextern_v );
DEFCSTRING( t3364, "EMIT-EXTERN" );
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

TSCP  gencode_emit_2dextern( v2333 )
        TSCP  v2333;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3364 );
        v2333 = CONS( v2333, EMPTYLIST );
        if  ( FALSE( plist_get( PAIR_CAR( v2333 ), c2336 ) ) )  goto L3366;
        X2 = plist_get( PAIR_CAR( v2333 ), c2336 );
        X1 = plist_get( X2, c2339 );
        SETGEN( PAIR_CAR( v2333 ), X1 );
L3366:
        if  ( TRUE( plist_get( PAIR_CAR( v2333 ), c2344 ) ) )  goto L3368;
        plist_put( PAIR_CAR( v2333 ), c2344, TRUEVALUE );
        X2 = plist_get( PAIR_CAR( v2333 ), c2336 );
        if  ( FALSE( X2 ) )  goto L3372;
        X3 = plist_get( PAIR_CAR( v2333 ), c2295 );
        X1 = scrt1_assq( X3, c2403 );
        goto L3373;
L3372:
        X1 = X2;
L3373:
        if  ( FALSE( X1 ) )  goto L3375;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3378;
        scrt1__24__cdr_2derror( X1 );
L3378:
        X3 = PAIR_CDR( X1 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2333 ), c2336 );
        X4 = CONS( gencode_ern_2dargl_18fb6091( X5 ), X4 );
        X2 = scrt1_cons_2a( X3, 
                            CONS( expform_cname( PAIR_CAR( v2333 ) ), 
                                  X4 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X2 ) );
L3375:
        X3 = plist_get( PAIR_CAR( v2333 ), c2295 );
        X2 = scrt1_assq( X3, c2385 );
        if  ( FALSE( X2 ) )  goto L3381;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3384;
        scrt1__24__cdr_2derror( X2 );
L3384:
        X4 = PAIR_CDR( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( X4, 
                            CONS( expform_vname( PAIR_CAR( v2333 ) ), 
                                  X5 ) );
        POPSTACKTRACE( lap_emit_2dglobal_2dlap( X3 ) );
L3381:
        if  ( FALSE( plist_get( PAIR_CAR( v2333 ), c2336 ) ) )  goto L3387;
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = plist_get( PAIR_CAR( v2333 ), c2336 );
        X4 = CONS( gencode_emit_2dextern_2dargl( X5 ), X4 );
        X3 = scrt1_cons_2a( c2356, 
                            CONS( expform_cname( PAIR_CAR( v2333 ) ), 
                                  X4 ) );
        lap_emit_2dglobal_2dlap( X3 );
L3387:
        if  ( FALSE( gencode_var_2dis_2dglobal( PAIR_CAR( v2333 ) ) )
            )  goto L3389;
        X3 = plist_get( PAIR_CAR( v2333 ), c2374 );
        if  ( FALSE( expform_vname( PAIR_CAR( v2333 ) ) ) )  goto L3392;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( c2362, 
                            CONS( expform_vname( PAIR_CAR( v2333 ) ), 
                                  X5 ) );
        lap_emit_2dglobal_2dlap( X4 );
L3392:
        X4 = SYMBOL_VALUE( module_2dname_v );
        if  ( TRUE( scrt1_equal_3f( X4, X3 ) ) )  goto L3394;
        if  ( TRUE( scrt1_member( X3, c2370 ) ) )  goto L3396;
        if  ( TRUE( scrt1_member( X3, gencode_init_2dmodules_v ) )
            )  goto L3398;
        X4 = plist_get( PAIR_CAR( v2333 ), c2374 );
        POPSTACKTRACE( SET( gencode_init_2dmodules_v, 
                            sc_cons( X4, gencode_init_2dmodules_v ) ) );
L3398:
        POPSTACKTRACE( FALSEVALUE );
L3396:
        POPSTACKTRACE( FALSEVALUE );
L3394:
        POPSTACKTRACE( FALSEVALUE );
L3389:
        POPSTACKTRACE( FALSEVALUE );
L3368:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( gencode_ern_2dargl_18fb6091_v );
DEFCSTRING( t3400, "EMIT-C-EXTERN-ARGL" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  gencode_c2407( v2411 )
        TSCP  v2411;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "CTYPES [inside EMIT-C-EXTERN-ARGL]" );
        X1 = v2411;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L3405:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L3406;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L3409;
        scrt1__24__car_2derror( X1 );
L3409:
        X6 = PAIR_CAR( X1 );
        X7 = scrt1_assq( X6, c2462 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3413;
        scrt1__24__cdr_2derror( X7 );
L3413:
        X5 = PAIR_CDR( X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3416;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L3405 );
L3416:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3421;
        scdebug_error( c2446, 
                       c2447, CONS( X3, EMPTYLIST ) );
L3421:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L3405 );
L3406:
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  gencode_ern_2dargl_18fb6091( l2405 )
        TSCP  l2405;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3400 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2409;
        SETGEN( PAIR_CAR( X1 ), X2 );
        X2 = plist_get( l2405, c2251 );
        X3 = plist_get( l2405, c2500 );
        if  ( FALSE( X2 ) )  goto L3424;
        X6 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3427;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L3428;
L3427:
        X5 = scrt2__2b_2dtwo( X6, _TSCP( 8 ) );
L3428:
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3430;
        scdebug_error( c2471, 
                       c2472, CONS( X6, EMPTYLIST ) );
L3430:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3432;
        scdebug_error( c2471, 
                       c2475, CONS( X5, EMPTYLIST ) );
L3432:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3434;
        scdebug_error( c2471, 
                       c2479, CONS( X5, EMPTYLIST ) );
L3434:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2407( X3 );
        X8 = gencode_c2407( X2 );
        X9 = scrt1_cons_2a( c2497, 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X7 = scrt1_append_2dtwo( X8, X9 );
        X6 = scrt1_cons_2a( X7, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
L3424:
        X5 = scrt1_length( X3 );
        X6 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L3437;
        scdebug_error( c2471, 
                       c2472, CONS( X6, EMPTYLIST ) );
L3437:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L3439;
        scdebug_error( c2471, 
                       c2475, CONS( X5, EMPTYLIST ) );
L3439:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L3441;
        scdebug_error( c2471, 
                       c2479, CONS( X5, EMPTYLIST ) );
L3441:
        X4 = VECTOR_ELEMENT( X6, X5 );
        X5 = gencode_c2407( X3 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
}

DEFTSCP( gencode_emit_2dextern_2dargl_v );
DEFCSTRING( t3443, "EMIT-EXTERN-ARGL" );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( gencode_l2522, XAL1( TSCP ) );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  gencode_l2522( i2524 )
        TSCP  i2524;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EMIT-EXTERN-ARGL]" );
        if  ( NEQ( TSCPTAG( i2524 ), FIXNUMTAG ) )  goto L3465;
        if  ( NEQ( _S2CUINT( i2524 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L3469;
        POPSTACKTRACE( EMPTYLIST );
L3465:
        if  ( FALSE( scrt2_zero_3f( i2524 ) ) )  goto L3469;
        POPSTACKTRACE( EMPTYLIST );
L3469:
        if  ( BITAND( BITOR( _S2CINT( i2524 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L3472;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( i2524 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L3473;
L3472:
        X2 = scrt2__2d_2dtwo( i2524, _TSCP( 4 ) );
L3473:
        X1 = gencode_l2522( X2 );
        POPSTACKTRACE( sc_cons( c2534, X1 ) );
}

TSCP  gencode_emit_2dextern_2dargl( l2504 )
        TSCP  l2504;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3443 );
        X1 = _TSCP( 0 );
        X1 = CONS( X1, EMPTYLIST );
        X2 = c2409;
        SETGEN( PAIR_CAR( X1 ), X2 );
        if  ( FALSE( plist_get( l2504, c2560 ) ) )  goto L3446;
        X4 = _TSCP( 4 );
        goto L3447;
L3446:
        X4 = _TSCP( 0 );
L3447:
        X6 = plist_get( l2504, c2251 );
        X5 = scrt1_length( X6 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3449;
        X3 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L3450;
L3449:
        X3 = scrt2__2b_2dtwo( X5, X4 );
L3450:
        X5 = plist_get( l2504, c2500 );
        X4 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L3452;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L3453;
L3452:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L3453:
        X4 = PAIR_CAR( X1 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L3456;
        scdebug_error( c2471, 
                       c2472, CONS( X4, EMPTYLIST ) );
L3456:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L3458;
        scdebug_error( c2471, 
                       c2475, CONS( X2, EMPTYLIST ) );
L3458:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L3460;
        scdebug_error( c2471, 
                       c2479, CONS( X2, EMPTYLIST ) );
L3460:
        X3 = VECTOR_ELEMENT( X4, X2 );
        X4 = gencode_l2522( X2 );
        POPSTACKTRACE( sc_cons( X3, X4 ) );
}

DEFTSCP( gencode_t__modules_bfe186ca_v );
DEFCSTRING( t3474, "GENERATE-INIT_MODULES" );

TSCP  gencode_t__modules_bfe186ca(  )
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3474 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        X3 = SYMBOL_VALUE( with_2dmodules_v );
        X2 = scrt1_append_2dtwo( gencode_init_2dmodules_v, X3 );
        X3 = X2;
L3479:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3480;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3484;
        scrt1__24__car_2derror( X3 );
L3484:
        X4 = PAIR_CAR( X3 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( c2587, EMPTYLIST );
        X7 = CONS( X4, X7 );
        X5 = scrt1_cons_2a( c2072, 
                            CONS( scrt3_string_2dappend( CONS( c2080, 
                                                               X7 ) ), 
                                  X6 ) );
        lap_emit_2dglobal_2dlap( X5 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3479 );
L3480:
        lap_emit_2dlap( c2589 );
        lap_emit_2dlap( c2590 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2087 );
        X3 = SYMBOL_VALUE( with_2dmodules_v );
        X2 = scrt1_append_2dtwo( gencode_init_2dmodules_v, X3 );
        X3 = X2;
L3490:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3491;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3495;
        scrt1__24__car_2derror( X3 );
L3495:
        X4 = PAIR_CAR( X3 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( c2587, EMPTYLIST );
        X5 = scrt1_cons_2a( c2072, 
                            CONS( scrt3_string_2dappend( CONS( X4, X7 ) ), 
                                  X6 ) );
        lap_emit_2dlap( X5 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3490 );
L3491:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2614, 
                            CONS( gencode_max_2ddisplay_v, X3 ) );
        lap_emit_2dlap( X2 );
        lap_emit_2dlap( c2147 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2072, CONS( c2615, X3 ) );
        lap_emit_2dlap( X2 );
        X2 = lap_save_2dcurrent_2dlap( X1 );
        POPSTACKTRACE( lap_done_2dlap( X2 ) );
}

DEFTSCP( gencode_constant_2dsymbols_v );
DEFCSTRING( t3499, "CONSTANT-SYMBOLS" );
DEFTSCP( gencode_bol_2dport_c6b2ebee_v );
DEFCSTRING( t3500, "CONSTANT-SYMBOL-PORT" );
DEFTSCP( gencode_emit_2dconstants_v );
DEFCSTRING( t3501, "EMIT-CONSTANTS" );
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

        PUSHSTACKTRACE( t3501 );
        X1 = lap_save_2dcurrent_2dlap( EMPTYLIST );
        gencode_constant_2dsymbols_v = EMPTYLIST;
        gencode_bol_2dport_c6b2ebee_v = scrt5_open_2doutput_2dstring(  );
        lap_emit_2dlap( c2621 );
        lap_emit_2dlap( c2086 );
        lap_emit_2dlap( c2087 );
        lap_emit_2dlap( c2622 );
        X2 = SYMBOL_VALUE( quote_2dconstants_v );
        X3 = X2;
L3506:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L3507;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3511;
        scrt1__24__car_2derror( X3 );
L3511:
        X4 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3515;
        scrt1__24__cdr_2derror( X4 );
L3515:
        X6 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3518;
        scrt1__24__car_2derror( X6 );
L3518:
        X5 = PAIR_CAR( X6 );
        X6 = PAIR_CAR( X4 );
        X7 = lap_save_2dlap_2dtemps(  );
        gencode_emit_2dconstant( X5, X6 );
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L3524;
        if  ( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ) )  goto L3524;
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2659, 
                            CONS( scrt1_cons_2a( c2660, 
                                                 CONS( expform_vname( X5 ), 
                                                       X10 ) ), 
                                  X9 ) );
        lap_emit_2dlap( X8 );
L3524:
        lap_restore_2dlap_2dtemps( X7 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L3506 );
L3507:
        lap_emit_2dlap( c2147 );
        lap_emit_2dlap( c2148 );
        POPSTACKTRACE( lap_save_2dcurrent_2dlap( X1 ) );
}

DEFTSCP( gencode_emit_2dconstant_v );
DEFCSTRING( t3527, "EMIT-CONSTANT" );
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

TSCP  gencode_emit_2dconstant( v2677, c2678 )
        TSCP  v2677, c2678;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3527 );
        if  ( NEQ( TSCPTAG( c2678 ), FIXNUMTAG ) )  goto L3529;
        scrt6_display( c2720, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        if  ( BITAND( BITOR( _S2CINT( c2678 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L3532;
        X1 = BOOLEAN( GT( _S2CINT( c2678 ), 
                          _S2CINT( _TSCP( 8 ) ) ) );
        goto L3533;
L3532:
        X1 = scrt2__3e_2dtwo( c2678, _TSCP( 8 ) );
L3533:
        if  ( TRUE( X1 ) )  goto L3538;
        if  ( BITAND( BITOR( _S2CINT( c2678 ), 
                             _S2CINT( _TSCP( -8 ) ) ), 
                      3 ) )  goto L3540;
        if  ( LT( _S2CINT( c2678 ), _S2CINT( _TSCP( -8 ) ) ) )  goto L3538;
        goto L3545;
L3540:
        if  ( TRUE( scrt2__3c_2dtwo( c2678, _TSCP( -8 ) ) ) )  goto L3538;
L3545:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2678 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3555;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3555;
        X4 = _TSCP( REMAINDER( _S2CINT( c2678 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3556;
L3555:
        X4 = scrt2_remainder( c2678, _TSCP( 40 ) );
L3556:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3558;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3559;
L3558:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3559:
        X4 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X3 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X4 ) )  goto L3567;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3567;
        X2 = _TSCP( REMAINDER( _S2CINT( X3 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3568;
L3567:
        X2 = scrt2_remainder( X3, _TSCP( 40 ) );
L3568:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        goto L3548;
L3538:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2678 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3576;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3576;
        X4 = C_FIXED( QUOTIENT( _S2CINT( c2678 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3577;
L3576:
        X4 = scrt2_quotient( c2678, _TSCP( 40 ) );
L3577:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L3579;
        X3 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X4 ) ) );
        goto L3580;
L3579:
        X3 = scrt2__2a_2dtwo( _TSCP( 16 ), X4 );
L3580:
        X7 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2678 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X7 ) )  goto L3587;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3587;
        X6 = _TSCP( REMAINDER( _S2CINT( c2678 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3588;
L3587:
        X6 = scrt2_remainder( c2678, _TSCP( 40 ) );
L3588:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L3590;
        X5 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X6 ) ) );
        goto L3591;
L3590:
        X5 = scrt2__2a_2dtwo( _TSCP( 16 ), X6 );
L3591:
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3599;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3599;
        X4 = C_FIXED( QUOTIENT( _S2CINT( X5 ), 
                                _S2CINT( _TSCP( 40 ) ) ) );
        goto L3600;
L3599:
        X4 = scrt2_quotient( X5, _TSCP( 40 ) );
L3600:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L3602;
        X2 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X4 ) ) );
        goto L3603;
L3602:
        X2 = scrt2__2b_2dtwo( X3, X4 );
L3603:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c2678 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L3610;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3610;
        X5 = _TSCP( REMAINDER( _S2CINT( c2678 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3611;
L3610:
        X5 = scrt2_remainder( c2678, _TSCP( 40 ) );
L3611:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 16 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L3613;
        X4 = _TSCP( ITIMES( FIXED_C( _TSCP( 16 ) ), 
                            _S2CINT( X5 ) ) );
        goto L3614;
L3613:
        X4 = scrt2__2a_2dtwo( _TSCP( 16 ), X5 );
L3614:
        X5 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X4 ), 
                                          _S2CINT( _TSCP( 40 ) ) ), 
                                   3 ) ) );
        if  ( FALSE( X5 ) )  goto L3622;
        if  ( EQ( _S2CUINT( _TSCP( 40 ) ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L3622;
        X3 = _TSCP( REMAINDER( _S2CINT( X4 ), 
                               _S2CINT( _TSCP( 40 ) ) ) );
        goto L3623;
L3622:
        X3 = scrt2_remainder( X4, _TSCP( 40 ) );
L3623:
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L3625;
        if  ( LT( _S2CINT( X3 ), 0 ) )  goto L3630;
        X2 = X3;
        goto L3631;
L3625:
        X2 = scrt2_abs( X3 );
        goto L3631;
L3630:
        X2 = _TSCP( INEGATE( _S2CINT( X3 ) ) );
L3631:
        scrt6_write( X2, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
L3548:
        scrt6_display( c2741, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2677, c2745, X1 ) );
L3529:
        if  ( NOT( AND( EQ( TSCPTAG( c2678 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2678 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L3632;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2703, 
                            CONS( expform_vname( v2677 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2747, CONS( c2678, X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2695, 
                            CONS( expform_vname( v2677 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3632:
        if  ( NEQ( TSCPIMMEDIATETAG( c2678 ), CHARACTERTAG ) )  goto L3635;
        scrt6_display( c2720, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X3 = CHAR_FIX( c2678 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 1024 ) ) ), 
                      3 ) )  goto L3640;
        X2 = _TSCP( ITIMES( FIXED_C( X3 ), 
                            _S2CINT( _TSCP( 1024 ) ) ) );
        goto L3641;
L3640:
        X2 = scrt2__2a_2dtwo( X3, _TSCP( 1024 ) );
L3641:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 72 ) ) ), 
                      3 ) )  goto L3643;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 72 ) ) ) );
        goto L3644;
L3643:
        X1 = scrt2__2b_2dtwo( X2, _TSCP( 72 ) );
L3644:
        scrt6_write( X1, 
                     CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        scrt6_display( c2741, 
                       CONS( gencode_bol_2dport_c6b2ebee_v, EMPTYLIST ) );
        X1 = scrt6_get_2doutput_2dstring( gencode_bol_2dport_c6b2ebee_v );
        POPSTACKTRACE( plist_put( v2677, c2745, X1 ) );
L3635:
        if  ( NOT( AND( EQ( TSCPTAG( c2678 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2678 ), STRINGTAG ) ) )
            )  goto L3645;
        X1 = gencode_make_2dc_2dglobal(  );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2103, CONS( c2678, X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2718, 
                            CONS( expform_vname( X1 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = scrt1_cons_2a( c2703, 
                            CONS( expform_vname( v2677 ), X3 ) );
        lap_emit_2dglobal_2dlap( X2 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2707, 
                                  CONS( expform_vname( X1 ), X4 ) ), 
                   X3 );
        X2 = scrt1_cons_2a( c2695, 
                            CONS( expform_vname( v2677 ), X3 ) );
        POPSTACKTRACE( lap_emit_2dlap( X2 ) );
L3645:
        if  ( NOT( AND( EQ( TSCPTAG( c2678 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2678 ), SYMBOLTAG ) ) )
            )  goto L3648;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2703, 
                            CONS( expform_vname( v2677 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2706, 
                                  CONS( scrt1_cons_2a( c2707, 
                                                       CONS( scrt1_cons_2a( c2103, 
                                                                            CONS( SYMBOL_NAME( c2678 ), 
                                                                                  X5 ) ), 
                                                             X4 ) ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2695, 
                            CONS( expform_vname( v2677 ), X2 ) );
        lap_emit_2dlap( X1 );
        X3 = sc_cons( v2677, EMPTYLIST );
        X2 = sc_cons( c2678, X3 );
        X1 = X2;
        POPSTACKTRACE( SET( gencode_constant_2dsymbols_v, 
                            sc_cons( X1, gencode_constant_2dsymbols_v ) ) );
L3648:
        if  ( NEQ( TSCPTAG( c2678 ), PAIRTAG ) )  goto L3653;
        X1 = plist_get( v2677, c2227 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2324 ) ) )  goto L3656;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( c2703, 
                            CONS( expform_vname( v2677 ), X2 ) );
        lap_emit_2dglobal_2dlap( X1 );
L3656:
        X1 = expform_vname( v2677 );
        POPSTACKTRACE( gencode_ant_2dlist_82e6441b( X1, c2678 ) );
L3653:
        if  ( NOT( AND( EQ( TSCPTAG( c2678 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2678 ), VECTORTAG ) ) )
            )  goto L3658;
        X1 = scrt4_vector_2d_3elist( c2678 );
        gencode_emit_2dconstant( v2677, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_cons_2a( c2696, 
                                  CONS( expform_vname( v2677 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2695, 
                            CONS( expform_vname( v2677 ), X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3658:
        X1 = SYMBOL_VALUE( report_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2693, 
                                                    c2678, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( gencode_ant_2dlist_82e6441b_v );
DEFCSTRING( t3661, "EMIT-CONSTANT-LIST" );
EXTERNTSCPP( gencode__2delement_28e1d5cf, XAL1( TSCP ) );
EXTERNTSCP( gencode__2delement_28e1d5cf_v );

TSCP  gencode_ant_2dlist_82e6441b( v2906, c2907 )
        TSCP  v2906, c2907;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3661 );
        if  ( NEQ( TSCPTAG( c2907 ), PAIRTAG ) )  goto L3663;
        X1 = PAIR_CDR( c2907 );
        gencode_ant_2dlist_82e6441b( v2906, X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( v2906, X3 );
        X4 = PAIR_CAR( c2907 );
        X2 = CONS( scrt1_cons_2a( c2916, 
                                  CONS( gencode__2delement_28e1d5cf( X4 ), 
                                        X3 ) ), 
                   X2 );
        X1 = scrt1_cons_2a( c2695, CONS( v2906, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
L3663:
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( gencode__2delement_28e1d5cf( c2907 ), X2 );
        X1 = scrt1_cons_2a( c2695, CONS( v2906, X2 ) );
        POPSTACKTRACE( lap_emit_2dlap( X1 ) );
}

DEFTSCP( gencode__2delement_28e1d5cf_v );
DEFCSTRING( t3668, "EMIT-CONSTANT-ELEMENT" );
EXTERNTSCP( sc_emptystring );
EXTERNTSCP( sc_emptyvector );
EXTERNTSCPP( lap_use_2dlap_2dtemp, XAL0(  ) );
EXTERNTSCP( lap_use_2dlap_2dtemp_v );
EXTERNTSCPP( lap_drop_2dlap_2dtemp, XAL1( TSCP ) );
EXTERNTSCP( lap_drop_2dlap_2dtemp_v );

TSCP  gencode__2delement_28e1d5cf( c2922 )
        TSCP  c2922;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t3668 );
        if  ( EQ( _S2CUINT( c2922 ), _S2CUINT( TRUEVALUE ) ) )  goto L3670;
        if  ( EQ( _S2CUINT( c2922 ), _S2CUINT( EMPTYLIST ) ) )  goto L3672;
        if  ( EQ( _S2CUINT( c2922 ), 
                  _S2CUINT( FALSEVALUE ) ) )  goto L3674;
        if  ( TRUE( scrt1_equal_3f( c2922, sc_emptystring ) )
            )  goto L3676;
        if  ( TRUE( scrt1_equal_3f( c2922, sc_emptyvector ) )
            )  goto L3678;
        X1 = BOOLEAN( EQ( TSCPTAG( c2922 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L3684;
        if  ( EQ( TSCPIMMEDIATETAG( c2922 ), CHARACTERTAG ) )  goto L3684;
        if  ( NEQ( TSCPTAG( c2922 ), PAIRTAG ) )  goto L3687;
        X2 = lap_use_2dlap_2dtemp(  );
        X3 = expform_vname( X2 );
        gencode_ant_2dlist_82e6441b( X3, c2922 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2745 ) );
L3687:
        if  ( NOT( AND( EQ( TSCPTAG( c2922 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2922 ), VECTORTAG ) ) )
            )  goto L3690;
        X2 = lap_use_2dlap_2dtemp(  );
        gencode_emit_2dconstant( X2, c2922 );
        lap_drop_2dlap_2dtemp( X2 );
        POPSTACKTRACE( plist_get( X2, c2745 ) );
L3690:
        if  ( NOT( AND( EQ( TSCPTAG( c2922 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( c2922 ), SYMBOLTAG ) ) )
            )  goto L3693;
        X2 = scrt1_assq( c2922, gencode_constant_2dsymbols_v );
        goto L3694;
L3693:
        X2 = FALSEVALUE;
L3694:
        if  ( FALSE( X2 ) )  goto L3696;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3699;
        scrt1__24__cdr_2derror( X2 );
L3699:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3702;
        scrt1__24__car_2derror( X4 );
L3702:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( expform_vname( X3 ) );
L3696:
        X3 = gencode_make_2dc_2dglobal(  );
        gencode_emit_2dconstant( X3, c2922 );
        POPSTACKTRACE( plist_get( X3, c2745 ) );
L3678:
        POPSTACKTRACE( c2977 );
L3676:
        POPSTACKTRACE( c2978 );
L3674:
        POPSTACKTRACE( c2979 );
L3672:
        POPSTACKTRACE( c2980 );
L3670:
        POPSTACKTRACE( c2981 );
L3684:
        POPSTACKTRACE( gencode_emit_2dconstant( c2976, c2922 ) );
}

void scrt4__init();
void scrt6__init();
void scrt5__init();
void scdebug__init();
void scrt2__init();
void plist__init();
void scrt1__init();
void expform__init();
void lap__init();
void scrt3__init();

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
        INITIALIZEVAR( t3230, 
                       ADR( gencode_e_2dlambda_7a3ae383_v ), 
                       c2048 );
        INITIALIZEVAR( t3231, 
                       ADR( gencode_e_2dstring_8ca45c6a_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3232, 
                       ADR( gencode_init_2dmodules_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3233, 
                       ADR( gencode_free_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3234, 
                       ADR( gencode_max_2ddisplay_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t3235, 
                       ADR( gencode_ion_2dinfo_cc47b64b_v ), 
                       c2055 );
        INITIALIZEVAR( t3236, 
                       ADR( gencode_ion_2dinfo_f92fd619_v ), 
                       gencode_ion_2dinfo_cc47b64b_v );
        INITIALIZEVAR( t3237, 
                       ADR( gencode_error_2did_v ), FALSEVALUE );
        INITIALIZEVAR( t3238, 
                       ADR( gencode__24__car_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3239, 
                       ADR( gencode__24__cdr_2derror_2did_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t3240, 
                       ADR( gencode_generate_2dcode_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_generate_2dcode, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3278, 
                       ADR( gencode_exp_2dgenc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      gencode_exp_2dgenc, EMPTYLIST ) );
        INITIALIZEVAR( t3312, 
                       ADR( gencode_make_2dlabel_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3314, 
                       ADR( gencode_code_2dlabel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_code_2dlabel, EMPTYLIST ) );
        INITIALIZEVAR( t3320, 
                       ADR( gencode_make_2dc_2dglobal_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_make_2dc_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3322, 
                       ADR( gencode_optional_2dargs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_optional_2dargs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3329, 
                       ADR( gencode_lookup_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, gencode_lookup, EMPTYLIST ) );
        INITIALIZEVAR( t3356, 
                       ADR( gencode_var_2din_2dstack_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2din_2dstack, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3358, 
                       ADR( gencode_var_2dis_2dglobal_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dglobal, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3360, 
                       ADR( gencode_var_2dis_2dconstant_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_var_2dis_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3362, 
                       ADR( gencode_op_2dlevel_343ff0cb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_op_2dlevel_343ff0cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3364, 
                       ADR( gencode_emit_2dextern_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern, EMPTYLIST ) );
        INITIALIZEVAR( t3400, 
                       ADR( gencode_ern_2dargl_18fb6091_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_ern_2dargl_18fb6091, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3443, 
                       ADR( gencode_emit_2dextern_2dargl_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode_emit_2dextern_2dargl, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3474, 
                       ADR( gencode_t__modules_bfe186ca_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_t__modules_bfe186ca, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3499, 
                       ADR( gencode_constant_2dsymbols_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3500, 
                       ADR( gencode_bol_2dport_c6b2ebee_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t3501, 
                       ADR( gencode_emit_2dconstants_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      gencode_emit_2dconstants, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3527, 
                       ADR( gencode_emit_2dconstant_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_emit_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3661, 
                       ADR( gencode_ant_2dlist_82e6441b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      gencode_ant_2dlist_82e6441b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3668, 
                       ADR( gencode__2delement_28e1d5cf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      gencode__2delement_28e1d5cf, 
                                      EMPTYLIST ) );
        return;
}
