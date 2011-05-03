
/* SCHEME->C */

#include <objects.h>

void closeana__init();
DEFSTATICTSCP( name_2da_2dlambda_v );
DEFSTATICTSCP( log_3f_v );
DEFSTATICTSCP( sc_2dicode_v );
DEFSTATICTSCP( assign_2dknown_2dname_v );
DEFCSTRING( t5203, "~A forces ~A to display~%" );
DEFSTATICTSCP( c4820 );
DEFSTATICTSCP( c4780 );
DEFSTATICTSCP( t5204 );
DEFSTATICTSCP( t5205 );
DEFSTATICTSCP( c4681 );
DEFSTATICTSCP( t5206 );
DEFSTATICTSCP( t5207 );
DEFSTATICTSCP( c4648 );
DEFSTATICTSCP( c4551 );
DEFSTATICTSCP( c4537 );
DEFSTATICTSCP( c4517 );
DEFSTATICTSCP( c4508 );
DEFSTATICTSCP( c4186 );
DEFSTATICTSCP( c4065 );
DEFCSTRING( t5208, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c4020 );
DEFSTATICTSCP( c4019 );
DEFSTATICTSCP( c3821 );
DEFSTATICTSCP( c3817 );
DEFSTATICTSCP( c3813 );
DEFSTATICTSCP( c3339 );
DEFSTATICTSCP( t5209 );
DEFSTATICTSCP( c3317 );
DEFSTATICTSCP( c3189 );
DEFSTATICTSCP( c3184 );
DEFSTATICTSCP( c3181 );
DEFSTATICTSCP( c3165 );
DEFSTATICTSCP( c3151 );
DEFSTATICTSCP( c3042 );
DEFCSTRING( t5210, "~A forces ~A to the display~%" );
DEFSTATICTSCP( c3015 );
DEFCSTRING( t5211, "~A must be a closed procedure~%" );
DEFSTATICTSCP( c2958 );
DEFSTATICTSCP( c2955 );
DEFSTATICTSCP( c2950 );
DEFSTATICTSCP( c2949 );
DEFSTATICTSCP( c2936 );
DEFSTATICTSCP( c2574 );
DEFSTATICTSCP( c2550 );
DEFSTATICTSCP( c2407 );
DEFSTATICTSCP( t5212 );
DEFSTATICTSCP( c2223 );
DEFSTATICTSCP( c2207 );
DEFSTATICTSCP( c2161 );
DEFSTATICTSCP( c2126 );
DEFSTATICTSCP( c2069 );
DEFSTATICTSCP( c2065 );
DEFSTATICTSCP( c2043 );

static void  init_constants()
{
        name_2da_2dlambda_v = STRINGTOSYMBOL( CSTRING_TSCP( "NAME-A-LAMBDA" ) );
        CONSTANTEXP( ADR( name_2da_2dlambda_v ) );
        log_3f_v = STRINGTOSYMBOL( CSTRING_TSCP( "LOG?" ) );
        CONSTANTEXP( ADR( log_3f_v ) );
        sc_2dicode_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ICODE" ) );
        CONSTANTEXP( ADR( sc_2dicode_v ) );
        assign_2dknown_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "ASSIGN-KNOW\
N-NAME" ) );
        CONSTANTEXP( ADR( assign_2dknown_2dname_v ) );
        c4820 = CSTRING_TSCP( t5203 );
        CONSTANTEXP( ADR( c4820 ) );
        c4780 = EMPTYLIST;
        t5204 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED-PROCEDURE" ) );
        c4780 = CONS( t5204, c4780 );
        t5205 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE" ) );
        c4780 = CONS( t5205, c4780 );
        CONSTANTEXP( ADR( c4780 ) );
        c4681 = EMPTYLIST;
        t5206 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAIL" ) );
        c4681 = CONS( t5206, c4681 );
        t5207 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE" ) );
        c4681 = CONS( t5207, c4681 );
        CONSTANTEXP( ADR( c4681 ) );
        c4648 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAILS" ) );
        CONSTANTEXP( ADR( c4648 ) );
        c4551 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-TAIL" ) );
        CONSTANTEXP( ADR( c4551 ) );
        c4537 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE" ) );
        CONSTANTEXP( ADR( c4537 ) );
        c4517 = STRINGTOSYMBOL( CSTRING_TSCP( "PROCEDURE" ) );
        CONSTANTEXP( ADR( c4517 ) );
        c4508 = STRINGTOSYMBOL( CSTRING_TSCP( "NAME" ) );
        CONSTANTEXP( ADR( c4508 ) );
        c4186 = STRINGTOSYMBOL( CSTRING_TSCP( "EXTERNAL" ) );
        CONSTANTEXP( ADR( c4186 ) );
        c4065 = STRINGTOSYMBOL( CSTRING_TSCP( "EXITS" ) );
        CONSTANTEXP( ADR( c4065 ) );
        c4020 = CSTRING_TSCP( t5208 );
        CONSTANTEXP( ADR( c4020 ) );
        c4019 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c4019 ) );
        c3821 = STRINGTOSYMBOL( CSTRING_TSCP( "REAL-CALLS" ) );
        CONSTANTEXP( ADR( c3821 ) );
        c3817 = STRINGTOSYMBOL( CSTRING_TSCP( "TAIL-CALLS" ) );
        CONSTANTEXP( ADR( c3817 ) );
        c3813 = STRINGTOSYMBOL( CSTRING_TSCP( "STR-CALLS" ) );
        CONSTANTEXP( ADR( c3813 ) );
        c3339 = EMPTYLIST;
        t5209 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE-CLOSED" ) );
        c3339 = CONS( t5209, c3339 );
        c3339 = CONS( c4537, c3339 );
        CONSTANTEXP( ADR( c3339 ) );
        c3317 = STRINGTOSYMBOL( CSTRING_TSCP( "BOUNDID" ) );
        CONSTANTEXP( ADR( c3317 ) );
        c3189 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c3189 ) );
        c3184 = STRINGTOSYMBOL( CSTRING_TSCP( "CALLS" ) );
        CONSTANTEXP( ADR( c3184 ) );
        c3181 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c3181 ) );
        c3165 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED-PROCEDURE" ) );
        CONSTANTEXP( ADR( c3165 ) );
        c3151 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c3151 ) );
        c3042 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c3042 ) );
        c3015 = CSTRING_TSCP( t5210 );
        CONSTANTEXP( ADR( c3015 ) );
        c2958 = CSTRING_TSCP( t5211 );
        CONSTANTEXP( ADR( c2958 ) );
        c2955 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        CONSTANTEXP( ADR( c2955 ) );
        c2950 = STRINGTOSYMBOL( CSTRING_TSCP( "GLOBAL" ) );
        CONSTANTEXP( ADR( c2950 ) );
        c2949 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c2949 ) );
        c2936 = STRINGTOSYMBOL( CSTRING_TSCP( "NESTIN" ) );
        CONSTANTEXP( ADR( c2936 ) );
        c2574 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c2574 ) );
        c2550 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2550 ) );
        c2407 = EMPTYLIST;
        t5212 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        c2407 = CONS( t5212, c2407 );
        CONSTANTEXP( ADR( c2407 ) );
        c2223 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2223 ) );
        c2207 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2207 ) );
        c2161 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2161 ) );
        c2126 = STRINGTOSYMBOL( CSTRING_TSCP( "TOP-LEVEL" ) );
        CONSTANTEXP( ADR( c2126 ) );
        c2069 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2069 ) );
        c2065 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2065 ) );
        c2043 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2043 ) );
}

DEFTSCP( closeana_analyze_2dclosures1a_v );
DEFCSTRING( t5213, "ANALYZE-CLOSURES1A" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );

TSCP  closeana_analyze_2dclosures1a( e2027 )
        TSCP  e2027;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5213 );
        if  ( NEQ( TSCPTAG( e2027 ), PAIRTAG ) )  goto L5215;
        X1 = PAIR_CAR( e2027 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2043 ) ) )  goto L5217;
        X3 = PAIR_CAR( e2027 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2043 ) ) );
        if  ( FALSE( X2 ) )  goto L5222;
        X3 = PAIR_CDR( e2027 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5226;
        scrt1__24__car_2derror( X3 );
L5226:
        X1 = PAIR_CAR( X3 );
        goto L5223;
L5222:
        X1 = X2;
L5223:
        X4 = PAIR_CAR( e2027 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2043 ) ) );
        if  ( FALSE( X3 ) )  goto L5230;
        X2 = scrt1_caddr( e2027 );
        goto L5231;
L5230:
        X2 = X3;
L5231:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5233;
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2065 ) ) )  goto L5235;
        if  ( TRUE( plist_get( X1, c2069 ) ) )  goto L5238;
        X3 = SYMBOL_VALUE( name_2da_2dlambda_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L5238:
        POPSTACKTRACE( FALSEVALUE );
L5235:
        POPSTACKTRACE( FALSEVALUE );
L5233:
        POPSTACKTRACE( FALSEVALUE );
L5217:
        POPSTACKTRACE( FALSEVALUE );
L5215:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_analyze_2dclosures1b_v );
DEFCSTRING( t5240, "ANALYZE-CLOSURES1B" );
EXTERNTSCP( closeana_walk_2dlambda_2did_v );
EXTERNTSCPP( closeana_da_2dslots_a659d0e7, XAL1( TSCP ) );
EXTERNTSCP( closeana_da_2dslots_a659d0e7_v );
EXTERNTSCPP( closeana_walk_2d_24tree, XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_walk_2d_24tree_v );
EXTERNTSCPP( closeana_assign_2dlambdas, XAL1( TSCP ) );
EXTERNTSCP( closeana_assign_2dlambdas_v );
EXTERNTSCPP( closeana_inherit_2dclosed, XAL1( TSCP ) );
EXTERNTSCP( closeana_inherit_2dclosed_v );

TSCP  closeana_analyze_2dclosures1b( e2125 )
        TSCP  e2125;
{
        PUSHSTACKTRACE( t5240 );
        closeana_walk_2dlambda_2did_v = c2126;
        closeana_da_2dslots_a659d0e7( e2125 );
        closeana_walk_2d_24tree( closeana_assign_2dlambdas_v, e2125 );
        closeana_da_2dslots_a659d0e7( e2125 );
        POPSTACKTRACE( closeana_walk_2d_24tree( closeana_inherit_2dclosed_v, 
                                                e2125 ) );
}

DEFTSCP( closeana_analyze_2dclosures2_v );
DEFCSTRING( t5242, "ANALYZE-CLOSURES2" );
EXTERNTSCP( closeana_bda_2dlist_c52ab123_v );
EXTERNTSCPP( closeana_mark_2dtail_2dcalls, XAL1( TSCP ) );
EXTERNTSCP( closeana_mark_2dtail_2dcalls_v );
EXTERNTSCPP( closeana_count_2dcalls, XAL1( TSCP ) );
EXTERNTSCP( closeana_count_2dcalls_v );
EXTERNTSCPP( closeana_generate_2dlambdas, XAL1( TSCP ) );
EXTERNTSCP( closeana_generate_2dlambdas_v );
EXTERNTSCPP( closeana_display_2dclose, XAL1( TSCP ) );
EXTERNTSCP( closeana_display_2dclose_v );

TSCP  closeana_analyze_2dclosures2( e2134 )
        TSCP  e2134;
{
        PUSHSTACKTRACE( t5242 );
        closeana_walk_2dlambda_2did_v = c2126;
        closeana_bda_2dlist_c52ab123_v = EMPTYLIST;
        closeana_da_2dslots_a659d0e7( e2134 );
        closeana_walk_2d_24tree( closeana_mark_2dtail_2dcalls_v, e2134 );
        closeana_walk_2d_24tree( closeana_count_2dcalls_v, e2134 );
        closeana_generate_2dlambdas( closeana_bda_2dlist_c52ab123_v );
        closeana_da_2dslots_a659d0e7( e2134 );
        POPSTACKTRACE( closeana_walk_2d_24tree( closeana_display_2dclose_v, 
                                                e2134 ) );
}

DEFTSCP( closeana_walk_2d_24tree_v );
DEFCSTRING( t5244, "WALK-$TREE" );
EXTERNTSCPP( closeana_ree_2dlist_f50a563f, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_ree_2dlist_f50a563f_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );

TSCP  closeana_walk_2d_24tree( f2141, l2142 )
        TSCP  f2141, l2142;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5244 );
L5245:
        if  ( NEQ( TSCPTAG( l2142 ), PAIRTAG ) )  goto L5246;
        X1 = f2141;
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( l2142, 
                                     PROCEDURE_CLOSURE( X1 ) );
        X1 = BOOLEAN( EQ( TSCPTAG( l2142 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5260;
        X2 = PAIR_CAR( l2142 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2161 ) ) )  goto L5260;
        X3 = PAIR_CAR( l2142 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2161 ) ) );
        if  ( FALSE( X2 ) )  goto L5258;
        l2142 = scrt1_caddr( l2142 );
        GOBACK( L5245 );
L5258:
        l2142 = X2;
        GOBACK( L5245 );
L5246:
        POPSTACKTRACE( FALSEVALUE );
L5260:
        X1 = BOOLEAN( EQ( TSCPTAG( l2142 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5272;
        X2 = PAIR_CAR( l2142 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2043 ) ) )  goto L5272;
        X3 = PAIR_CAR( l2142 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2043 ) ) );
        if  ( FALSE( X2 ) )  goto L5270;
        l2142 = scrt1_caddr( l2142 );
        GOBACK( L5245 );
L5270:
        l2142 = X2;
        GOBACK( L5245 );
L5272:
        X1 = BOOLEAN( EQ( TSCPTAG( l2142 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5297;
        X2 = PAIR_CAR( l2142 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L5297;
        X2 = closeana_walk_2dlambda_2did_v;
        X4 = PAIR_CAR( l2142 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X3 ) )  goto L5283;
        X5 = PAIR_CDR( l2142 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5287;
        scrt1__24__car_2derror( X5 );
L5287:
        X4 = PAIR_CAR( X5 );
        goto L5284;
L5283:
        X4 = X3;
L5284:
        closeana_walk_2dlambda_2did_v = X4;
        X5 = PAIR_CAR( l2142 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X4 ) )  goto L5291;
        X5 = PAIR_CDR( l2142 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5295;
        scrt1__24__cdr_2derror( X5 );
L5295:
        X3 = PAIR_CDR( X5 );
        goto L5292;
L5291:
        X3 = X4;
L5292:
        closeana_ree_2dlist_f50a563f( f2141, X3 );
        POPSTACKTRACE( SET( closeana_walk_2dlambda_2did_v, X2 ) );
L5297:
        X1 = BOOLEAN( EQ( TSCPTAG( l2142 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5314;
        X2 = PAIR_CAR( l2142 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2207 ) ) )  goto L5314;
        X4 = PAIR_CAR( l2142 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X3 ) )  goto L5307;
        X2 = scrt1_caddr( l2142 );
        goto L5308;
L5307:
        X2 = X3;
L5308:
        X5 = PAIR_CAR( l2142 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X4 ) )  goto L5312;
        X3 = scrt1_cdddr( l2142 );
        goto L5313;
L5312:
        X3 = X4;
L5313:
        closeana_ree_2dlist_f50a563f( f2141, X3 );
        l2142 = X2;
        GOBACK( L5245 );
L5314:
        X1 = PAIR_CAR( l2142 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2223 ) ) )  goto L5315;
        X1 = PAIR_CDR( l2142 );
        POPSTACKTRACE( closeana_ree_2dlist_f50a563f( f2141, X1 ) );
L5315:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_ree_2dlist_f50a563f_v );
DEFCSTRING( t5319, "WALK-$TREE-LIST" );

TSCP  closeana_ree_2dlist_f50a563f( f2380, f2381 )
        TSCP  f2380, f2381;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5319 );
        X1 = f2381;
L5322:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L5323;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L5327;
        scrt1__24__car_2derror( X1 );
L5327:
        X2 = PAIR_CAR( X1 );
        closeana_walk_2d_24tree( f2380, X2 );
        X1 = PAIR_CDR( X1 );
        GOBACK( L5322 );
L5323:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_walk_2dlambda_2did_v );
DEFCSTRING( t5330, "WALK-LAMBDA-ID" );
DEFTSCP( closeana_walk_2dlambda_2dids_v );
DEFCSTRING( t5331, "WALK-LAMBDA-IDS" );
DEFTSCP( closeana__2dlexical_455a78ac_v );
DEFCSTRING( t5332, "WALK-LAMBDA-LEXICAL" );
DEFTSCP( closeana_bda_2dlist_c52ab123_v );
DEFCSTRING( t5333, "CLOSE-LAMBDA-LIST" );
DEFTSCP( closeana_assign_2dlambdas_v );
DEFCSTRING( t5334, "ASSIGN-LAMBDAS" );
EXTERNTSCPP( closeana_bdas_2darg_a7a3fa97, XAL1( TSCP ) );
EXTERNTSCP( closeana_bdas_2darg_a7a3fa97_v );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );

TSCP  closeana_assign_2dlambdas( e2410 )
        TSCP  e2410;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5334 );
        X1 = BOOLEAN( EQ( TSCPTAG( e2410 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5385;
        if  ( EQ( TSCPTAG( e2410 ), PAIRTAG ) )  goto L5343;
        scrt1__24__car_2derror( e2410 );
L5343:
        X2 = PAIR_CAR( e2410 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2161 ) ) )  goto L5385;
        X5 = PAIR_CAR( e2410 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2161 ) ) );
        if  ( FALSE( X4 ) )  goto L5347;
        X3 = scrt1_caddr( e2410 );
        goto L5348;
L5347:
        X3 = X4;
L5348:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5350;
        X4 = PAIR_CAR( X3 );
        X2 = BOOLEAN( NEQ( _S2CUINT( X4 ), 
                           _S2CUINT( c2065 ) ) );
        goto L5351;
L5350:
        X2 = TRUEVALUE;
L5351:
        if  ( TRUE( X2 ) )  goto L5357;
        X6 = PAIR_CAR( e2410 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2161 ) ) );
        if  ( FALSE( X5 ) )  goto L5362;
        X6 = PAIR_CDR( e2410 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5366;
        scrt1__24__car_2derror( X6 );
L5366:
        X4 = PAIR_CAR( X6 );
        goto L5363;
L5362:
        X4 = X5;
L5363:
        X3 = plist_get( X4, c2550 );
        X7 = PAIR_CAR( e2410 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2161 ) ) );
        if  ( FALSE( X6 ) )  goto L5370;
        X5 = scrt1_caddr( e2410 );
        goto L5371;
L5370:
        X5 = X6;
L5371:
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5373;
        X7 = PAIR_CAR( X5 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5374;
L5373:
        X6 = FALSEVALUE;
L5374:
        if  ( FALSE( X6 ) )  goto L5377;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5380;
        scrt1__24__cdr_2derror( X5 );
L5380:
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L5383;
        scrt1__24__car_2derror( X7 );
L5383:
        X4 = PAIR_CAR( X7 );
        goto L5378;
L5377:
        X4 = X6;
L5378:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L5357;
        POPSTACKTRACE( FALSEVALUE );
L5385:
        X1 = BOOLEAN( EQ( TSCPTAG( e2410 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5413;
        if  ( EQ( TSCPTAG( e2410 ), PAIRTAG ) )  goto L5393;
        scrt1__24__car_2derror( e2410 );
L5393:
        X2 = PAIR_CAR( e2410 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L5413;
        X4 = PAIR_CAR( e2410 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X3 ) )  goto L5397;
        X4 = PAIR_CDR( e2410 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5401;
        scrt1__24__cdr_2derror( X4 );
L5401:
        X2 = PAIR_CDR( X4 );
        goto L5398;
L5397:
        X2 = X3;
L5398:
        X3 = X2;
L5405:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5406;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5410;
        scrt1__24__car_2derror( X3 );
L5410:
        X4 = PAIR_CAR( X3 );
        closeana_bdas_2darg_a7a3fa97( X4 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L5405 );
L5406:
        POPSTACKTRACE( FALSEVALUE );
L5413:
        X1 = BOOLEAN( EQ( TSCPTAG( e2410 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5440;
        if  ( EQ( TSCPTAG( e2410 ), PAIRTAG ) )  goto L5421;
        scrt1__24__car_2derror( e2410 );
L5421:
        X2 = PAIR_CAR( e2410 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2223 ) ) )  goto L5440;
        X4 = PAIR_CAR( e2410 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2223 ) ) );
        if  ( FALSE( X3 ) )  goto L5426;
        X4 = PAIR_CDR( e2410 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5430;
        scrt1__24__car_2derror( X4 );
L5430:
        X2 = PAIR_CAR( X4 );
        goto L5427;
L5426:
        X2 = X3;
L5427:
        closeana_bdas_2darg_a7a3fa97( X2 );
        X4 = PAIR_CAR( e2410 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2223 ) ) );
        if  ( FALSE( X3 ) )  goto L5434;
        X2 = scrt1_caddr( e2410 );
        goto L5435;
L5434:
        X2 = X3;
L5435:
        closeana_bdas_2darg_a7a3fa97( X2 );
        X4 = PAIR_CAR( e2410 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2223 ) ) );
        if  ( FALSE( X3 ) )  goto L5438;
        X2 = scrt1_cadddr( e2410 );
        goto L5439;
L5438:
        X2 = X3;
L5439:
        POPSTACKTRACE( closeana_bdas_2darg_a7a3fa97( X2 ) );
L5440:
        if  ( NEQ( TSCPTAG( e2410 ), PAIRTAG ) )  goto L5441;
        X1 = PAIR_CAR( e2410 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2207 ) ) )  goto L5443;
        X3 = PAIR_CAR( e2410 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X2 ) )  goto L5448;
        X1 = scrt1_caddr( e2410 );
        goto L5449;
L5448:
        X1 = X2;
L5449:
        X2 = BOOLEAN( EQ( TSCPTAG( X1 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L5490;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L5458;
        scrt1__24__car_2derror( X1 );
L5458:
        X3 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2065 ) ) )  goto L5490;
        X6 = PAIR_CAR( X1 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X5 ) )  goto L5462;
        X6 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5466;
        scrt1__24__car_2derror( X6 );
L5466:
        X4 = PAIR_CAR( X6 );
        goto L5463;
L5462:
        X4 = X5;
L5463:
        X3 = plist_get( X4, c2574 );
        X6 = PAIR_CAR( e2410 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X5 ) )  goto L5470;
        X4 = scrt1_cdddr( e2410 );
        goto L5471;
L5470:
        X4 = X5;
L5471:
        X5 = X3;
        X6 = X4;
L5474:
        if  ( FALSE( X5 ) )  goto L5475;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5478;
        scrt1__24__car_2derror( X5 );
L5478:
        X7 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5481;
        scrt1__24__car_2derror( X6 );
L5481:
        X8 = PAIR_CAR( X6 );
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L5486;
        if  ( FALSE( plist_get( X8, c2550 ) ) )  goto L5486;
        X9 = plist_get( X8, c2550 );
        plist_put( X7, c2550, X9 );
L5486:
        X9 = PAIR_CDR( X5 );
        X6 = PAIR_CDR( X6 );
        X5 = X9;
        GOBACK( L5474 );
L5475:
        POPSTACKTRACE( FALSEVALUE );
L5443:
        POPSTACKTRACE( FALSEVALUE );
L5441:
        POPSTACKTRACE( FALSEVALUE );
L5490:
        X3 = PAIR_CAR( e2410 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X2 ) )  goto L5493;
        X1 = scrt1_cdddr( e2410 );
        goto L5494;
L5493:
        X1 = X2;
L5494:
        X2 = X1;
L5497:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L5498;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5502;
        scrt1__24__car_2derror( X2 );
L5502:
        X3 = PAIR_CAR( X2 );
        closeana_bdas_2darg_a7a3fa97( X3 );
        X2 = PAIR_CDR( X2 );
        GOBACK( L5497 );
L5498:
        POPSTACKTRACE( FALSEVALUE );
L5357:
        X3 = PAIR_CAR( e2410 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2161 ) ) );
        if  ( FALSE( X2 ) )  goto L5507;
        X1 = scrt1_caddr( e2410 );
        goto L5508;
L5507:
        X1 = X2;
L5508:
        POPSTACKTRACE( closeana_bdas_2darg_a7a3fa97( X1 ) );
}

DEFTSCP( closeana_bdas_2darg_a7a3fa97_v );
DEFCSTRING( t5509, "ASSIGN-LAMBDAS-ARG" );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( closeana_dprocedure_40e51573, XAL1( TSCP ) );
EXTERNTSCP( closeana_dprocedure_40e51573_v );

TSCP  closeana_bdas_2darg_a7a3fa97( e2924 )
        TSCP  e2924;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5509 );
        if  ( NOT( AND( EQ( TSCPTAG( e2924 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2924 ), SYMBOLTAG ) ) )
            )  goto L5511;
        X2 = plist_get( e2924, c2550 );
        goto L5512;
L5511:
        X2 = FALSEVALUE;
L5512:
        if  ( FALSE( X2 ) )  goto L5514;
        X1 = X2;
        goto L5521;
L5514:
        if  ( NEQ( TSCPTAG( e2924 ), PAIRTAG ) )  goto L5516;
        X4 = PAIR_CAR( e2924 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5517;
L5516:
        X3 = FALSEVALUE;
L5517:
        if  ( FALSE( X3 ) )  goto L5520;
        if  ( EQ( TSCPTAG( e2924 ), PAIRTAG ) )  goto L5523;
        scrt1__24__cdr_2derror( e2924 );
L5523:
        X4 = PAIR_CDR( e2924 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5526;
        scrt1__24__car_2derror( X4 );
L5526:
        X1 = PAIR_CAR( X4 );
        goto L5521;
L5520:
        X1 = X3;
L5521:
        if  ( FALSE( X1 ) )  goto L5529;
        X3 = plist_get( X1, c2936 );
        X2 = BOOLEAN( NEQ( _S2CUINT( X3 ), 
                           _S2CUINT( c2126 ) ) );
        if  ( TRUE( X2 ) )  goto L5536;
        if  ( NOT( AND( EQ( TSCPTAG( e2924 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2924 ), SYMBOLTAG ) ) )
            )  goto L5543;
        X3 = plist_get( e2924, c2949 );
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( c2950 ) ) )  goto L5543;
L5536:
        plist_put( X1, c2955, TRUEVALUE );
        X3 = SYMBOL_VALUE( log_3f_v );
        X3 = UNKNOWNCALL( X3, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( c2955, 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L5543;
        X3 = SYMBOL_VALUE( sc_2dicode_v );
        X4 = CONS( X1, EMPTYLIST );
        scrt6_format( X3, CONS( c2958, X4 ) );
L5543:
        POPSTACKTRACE( closeana_dprocedure_40e51573( X1 ) );
L5529:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_inherit_2dclosed_v );
DEFCSTRING( t5545, "INHERIT-CLOSED" );
EXTERNTSCPP( closeana__2dlexical_34c6288f, XAL1( TSCP ) );
EXTERNTSCP( closeana__2dlexical_34c6288f_v );

TSCP  closeana_inherit_2dclosed( e3004 )
        TSCP  e3004;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t5545 );
        if  ( NEQ( TSCPTAG( e3004 ), PAIRTAG ) )  goto L5547;
        X3 = PAIR_CAR( e3004 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5548;
L5547:
        X2 = FALSEVALUE;
L5548:
        if  ( FALSE( X2 ) )  goto L5551;
        if  ( EQ( TSCPTAG( e3004 ), PAIRTAG ) )  goto L5554;
        scrt1__24__cdr_2derror( e3004 );
L5554:
        X3 = PAIR_CDR( e3004 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5557;
        scrt1__24__car_2derror( X3 );
L5557:
        X1 = PAIR_CAR( X3 );
        goto L5552;
L5551:
        X1 = X2;
L5552:
        if  ( FALSE( X1 ) )  goto L5560;
        if  ( FALSE( plist_get( X1, c2955 ) ) )  goto L5562;
        X2 = closeana__2dlexical_34c6288f( X1 );
        X3 = SYMBOL_VALUE( log_3f_v );
        X3 = UNKNOWNCALL( X3, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( c2955, 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L5565;
        X3 = SYMBOL_VALUE( sc_2dicode_v );
        X4 = CONS( X2, EMPTYLIST );
        X4 = CONS( X1, X4 );
        scrt6_format( X3, CONS( c3015, X4 ) );
L5565:
        X3 = X2;
L5568:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L5569;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5573;
        scrt1__24__car_2derror( X3 );
L5573:
        X4 = PAIR_CAR( X3 );
        plist_put( X4, c3042, TRUEVALUE );
        X3 = PAIR_CDR( X3 );
        GOBACK( L5568 );
L5569:
        POPSTACKTRACE( FALSEVALUE );
L5562:
        POPSTACKTRACE( FALSEVALUE );
L5560:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana__2dchecked_ed79e461_v );
DEFCSTRING( t5576, "INDIRECT-LAMBDA-CHECKED" );
DEFTSCP( closeana__2dlexical_34c6288f_v );
DEFCSTRING( t5577, "INDIRECT-LAMBDA-LEXICAL" );
EXTERNTSCPP( closeana_2dlexical1_2ced58a3, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( closeana_2dlexical1_2ced58a3_v );

TSCP  closeana__2dlexical_34c6288f( l3077 )
        TSCP  l3077;
{
        PUSHSTACKTRACE( t5577 );
        closeana__2dchecked_ed79e461_v = EMPTYLIST;
        POPSTACKTRACE( closeana_2dlexical1_2ced58a3( l3077, 
                                                     EMPTYLIST, 
                                                     EMPTYLIST ) );
}

DEFTSCP( closeana_2dlexical1_2ced58a3_v );
DEFCSTRING( t5579, "INDIRECT-LAMBDA-LEXICAL1" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  closeana_2dlexical1_2ced58a3( l3080, l3081, b3082 )
        TSCP  l3080, l3081, b3082;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5579 );
        if  ( TRUE( scrt1_memq( l3080, closeana__2dchecked_ed79e461_v ) )
            )  goto L5581;
        X3 = plist_get( l3080, c2574 );
        X4 = plist_get( l3080, c3189 );
        X2 = scrt1_append_2dtwo( X3, X4 );
        X1 = scrt1_append_2dtwo( X2, b3082 );
        X2 = plist_get( l3080, c3184 );
        X2 = CONS( X2, EMPTYLIST );
        X4 = plist_get( l3080, c3181 );
        X5 = X4;
        X6 = l3081;
L5587:
        if  ( FALSE( X5 ) )  goto L5589;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5592;
        scrt1__24__car_2derror( X5 );
L5592:
        X7 = PAIR_CAR( X5 );
        X8 = scrt1_memq( X7, X6 );
        if  ( TRUE( X8 ) )  goto L5599;
        X9 = scrt1_memq( X7, X1 );
        if  ( TRUE( X9 ) )  goto L5599;
        X10 = plist_get( X7, c2550 );
        if  ( FALSE( X10 ) )  goto L5623;
        X12 = plist_get( X7, c2550 );
        X11 = plist_get( X12, c3151 );
        if  ( FALSE( X11 ) )  goto L5623;
        X13 = plist_get( X7, c2550 );
        X12 = plist_get( X13, c3151 );
        if  ( EQ( _S2CUINT( X12 ), _S2CUINT( c3165 ) ) )  goto L5623;
        X12 = X7;
        if  ( TRUE( scrt1_memq( X12, PAIR_CAR( X2 ) ) ) )  goto L5619;
        X14 = plist_get( X12, c2550 );
        X13 = sc_cons( X14, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X13 );
L5619:
        if  ( TRUE( TRUEVALUE ) )  goto L5599;
        goto L5623;
L5589:
        X3 = X6;
        goto L5624;
L5623:
        X8 = PAIR_CDR( X5 );
        X6 = sc_cons( X7, X6 );
        X5 = X8;
        GOBACK( L5587 );
L5599:
        X8 = PAIR_CDR( X5 );
        X5 = X8;
        GOBACK( L5587 );
L5624:
        closeana__2dchecked_ed79e461_v = sc_cons( l3080, 
                                                  closeana__2dchecked_ed79e461_v );
        X4 = PAIR_CAR( X2 );
        X5 = X4;
        X6 = X3;
L5630:
        if  ( FALSE( X5 ) )  goto L5631;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5634;
        scrt1__24__car_2derror( X5 );
L5634:
        X7 = PAIR_CAR( X5 );
        X8 = plist_get( X7, c2936 );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( c2126 ) ) )  goto L5637;
        X8 = PAIR_CDR( X5 );
        X5 = X8;
        GOBACK( L5630 );
L5637:
        X8 = PAIR_CDR( X5 );
        X6 = closeana_2dlexical1_2ced58a3( X7, X6, X1 );
        X5 = X8;
        GOBACK( L5630 );
L5631:
        POPSTACKTRACE( X6 );
L5581:
        POPSTACKTRACE( l3081 );
}

DEFTSCP( closeana_da_2dslots_a659d0e7_v );
DEFCSTRING( t5641, "UPDATE-LAMBDA-SLOTS" );
EXTERNTSCPP( closeana_mergeq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_mergeq_v );

TSCP  closeana_da_2dslots_a659d0e7( e3191 )
        TSCP  e3191;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5641 );
L5642:
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5643;
        X2 = PAIR_CAR( e3191 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2161 ) ) );
        goto L5644;
L5643:
        X1 = FALSEVALUE;
L5644:
        if  ( TRUE( X1 ) )  goto L5650;
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5657;
        X2 = PAIR_CAR( e3191 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2223 ) ) )  goto L5657;
L5650:
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5659;
        scrt1__24__cdr_2derror( e3191 );
L5659:
        X1 = PAIR_CDR( e3191 );
        X2 = X1;
L5663:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L5664;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5668;
        scrt1__24__car_2derror( X2 );
L5668:
        X3 = PAIR_CAR( X2 );
        closeana_da_2dslots_a659d0e7( X3 );
        X2 = PAIR_CDR( X2 );
        GOBACK( L5663 );
L5664:
        POPSTACKTRACE( FALSEVALUE );
L5657:
        X1 = BOOLEAN( EQ( TSCPTAG( e3191 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5685;
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5678;
        scrt1__24__car_2derror( e3191 );
L5678:
        X2 = PAIR_CAR( e3191 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2043 ) ) )  goto L5685;
        closeana_walk_2dlambda_2did_v = c2126;
        closeana_walk_2dlambda_2dids_v = c2407;
        closeana__2dlexical_455a78ac_v = EMPTYLIST;
        X3 = PAIR_CAR( e3191 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2043 ) ) );
        if  ( FALSE( X2 ) )  goto L5683;
        e3191 = scrt1_caddr( e3191 );
        GOBACK( L5642 );
L5683:
        e3191 = X2;
        GOBACK( L5642 );
L5685:
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5686;
        X2 = PAIR_CAR( e3191 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5687;
L5686:
        X1 = FALSEVALUE;
L5687:
        if  ( FALSE( X1 ) )  goto L5707;
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5695;
        X4 = PAIR_CAR( e3191 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5696;
L5695:
        X3 = FALSEVALUE;
L5696:
        if  ( FALSE( X3 ) )  goto L5699;
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5702;
        scrt1__24__cdr_2derror( e3191 );
L5702:
        X4 = PAIR_CDR( e3191 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5705;
        scrt1__24__car_2derror( X4 );
L5705:
        X2 = PAIR_CAR( X4 );
        goto L5700;
L5699:
        X2 = X3;
L5700:
        if  ( TRUE( scrt1_memq( X2, closeana_walk_2dlambda_2dids_v ) )
            )  goto L5707;
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5709;
        X4 = PAIR_CAR( e3191 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5710;
L5709:
        X3 = FALSEVALUE;
L5710:
        if  ( FALSE( X3 ) )  goto L5713;
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5716;
        scrt1__24__cdr_2derror( e3191 );
L5716:
        X4 = PAIR_CDR( e3191 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5719;
        scrt1__24__car_2derror( X4 );
L5719:
        X2 = PAIR_CAR( X4 );
        goto L5714;
L5713:
        X2 = X3;
L5714:
        closeana_walk_2dlambda_2dids_v = sc_cons( X2, 
                                                  closeana_walk_2dlambda_2dids_v );
        X2 = closeana_walk_2dlambda_2dids_v;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5722;
        scrt1__24__car_2derror( X2 );
L5722:
        closeana_walk_2dlambda_2did_v = PAIR_CAR( X2 );
        plist_put( closeana_walk_2dlambda_2did_v, c3184, EMPTYLIST );
        X2 = EMPTYLIST;
        X3 = closeana__2dlexical_455a78ac_v;
        X2 = CONS( X2, EMPTYLIST );
        if  ( NEQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5725;
        X6 = PAIR_CAR( e3191 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5726;
L5725:
        X5 = FALSEVALUE;
L5726:
        if  ( FALSE( X5 ) )  goto L5729;
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5732;
        scrt1__24__cdr_2derror( e3191 );
L5732:
        X6 = PAIR_CDR( e3191 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5735;
        scrt1__24__cdr_2derror( X6 );
L5735:
        X4 = PAIR_CDR( X6 );
        goto L5730;
L5729:
        X4 = X5;
L5730:
        X5 = X4;
L5739:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L5740;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5744;
        scrt1__24__car_2derror( X5 );
L5744:
        X6 = PAIR_CAR( X5 );
        closeana__2dlexical_455a78ac_v = EMPTYLIST;
        closeana_da_2dslots_a659d0e7( X6 );
        X7 = closeana__2dlexical_455a78ac_v;
        X8 = X7;
L5749:
        if  ( EQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L5766;
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L5753;
        scrt1__24__car_2derror( X8 );
L5753:
        X10 = PAIR_CAR( X8 );
        X9 = scrt1_memq( X10, PAIR_CAR( X2 ) );
        if  ( TRUE( X9 ) )  goto L5759;
        X11 = PAIR_CAR( X8 );
        X10 = plist_get( X11, c3317 );
        if  ( EQ( _S2CUINT( X10 ), 
                  _S2CUINT( closeana_walk_2dlambda_2did_v ) )
            )  goto L5759;
        X11 = PAIR_CAR( X8 );
        X10 = sc_cons( X11, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X10 );
        X8 = PAIR_CDR( X8 );
        GOBACK( L5749 );
L5759:
        X8 = PAIR_CDR( X8 );
        GOBACK( L5749 );
L5766:
        X5 = PAIR_CDR( X5 );
        GOBACK( L5739 );
L5740:
        plist_put( closeana_walk_2dlambda_2did_v, 
                   c3181, PAIR_CAR( X2 ) );
        closeana__2dlexical_455a78ac_v = X3;
        X4 = PAIR_CAR( X2 );
        X5 = X4;
L5771:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L5772;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5776;
        scrt1__24__car_2derror( X5 );
L5776:
        X6 = PAIR_CAR( X5 );
        closeana__2dlexical_455a78ac_v = closeana_mergeq( X6, 
                                                          closeana__2dlexical_455a78ac_v );
        X5 = PAIR_CDR( X5 );
        GOBACK( L5771 );
L5772:
        X2 = closeana_walk_2dlambda_2dids_v;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5781;
        scrt1__24__cdr_2derror( X2 );
L5781:
        closeana_walk_2dlambda_2dids_v = PAIR_CDR( X2 );
        X2 = closeana_walk_2dlambda_2dids_v;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5784;
        scrt1__24__car_2derror( X2 );
L5784:
        POPSTACKTRACE( SET( closeana_walk_2dlambda_2did_v, 
                            PAIR_CAR( X2 ) ) );
L5707:
        X1 = BOOLEAN( EQ( TSCPTAG( e3191 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5839;
        if  ( EQ( TSCPTAG( e3191 ), PAIRTAG ) )  goto L5793;
        scrt1__24__car_2derror( e3191 );
L5793:
        X2 = PAIR_CAR( e3191 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2207 ) ) )  goto L5839;
        X4 = PAIR_CAR( e3191 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X3 ) )  goto L5797;
        X2 = scrt1_caddr( e3191 );
        goto L5798;
L5797:
        X2 = X3;
L5798:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5800;
        X6 = PAIR_CAR( X2 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5801;
L5800:
        X5 = FALSEVALUE;
L5801:
        if  ( FALSE( X5 ) )  goto L5804;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5807;
        scrt1__24__cdr_2derror( X2 );
L5807:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L5810;
        scrt1__24__car_2derror( X6 );
L5810:
        X4 = PAIR_CAR( X6 );
        goto L5805;
L5804:
        X4 = X5;
L5805:
        if  ( FALSE( X4 ) )  goto L5813;
        X3 = X4;
        goto L5816;
L5813:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L5815;
        X3 = plist_get( X2, c2550 );
        goto L5816;
L5815:
        X3 = FALSEVALUE;
L5816:
        if  ( FALSE( X3 ) )  goto L5823;
        X5 = plist_get( closeana_walk_2dlambda_2did_v, c3184 );
        X4 = closeana_mergeq( X3, X5 );
        plist_put( closeana_walk_2dlambda_2did_v, c3184, X4 );
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L5823;
        X4 = plist_get( X3, c3151 );
        if  ( FALSE( scrt1_memq( X4, c3339 ) ) )  goto L5823;
        X4 = plist_get( X3, c2065 );
        closeana_da_2dslots_a659d0e7( X4 );
L5823:
        closeana_da_2dslots_a659d0e7( X2 );
        X6 = PAIR_CAR( e3191 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X5 ) )  goto L5827;
        X4 = scrt1_cdddr( e3191 );
        goto L5828;
L5827:
        X4 = X5;
L5828:
        X5 = X4;
L5831:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L5832;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5836;
        scrt1__24__car_2derror( X5 );
L5836:
        X6 = PAIR_CAR( X5 );
        closeana_da_2dslots_a659d0e7( X6 );
        X5 = PAIR_CDR( X5 );
        GOBACK( L5831 );
L5832:
        POPSTACKTRACE( FALSEVALUE );
L5839:
        if  ( NOT( AND( EQ( TSCPTAG( e3191 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e3191 ), SYMBOLTAG ) ) )
            )  goto L5840;
        if  ( FALSE( plist_get( e3191, c3317 ) ) )  goto L5842;
        X1 = plist_get( e3191, c3317 );
        if  ( EQ( _S2CUINT( X1 ), 
                  _S2CUINT( closeana_walk_2dlambda_2did_v ) )
            )  goto L5844;
        POPSTACKTRACE( SET( closeana__2dlexical_455a78ac_v, 
                            closeana_mergeq( e3191, 
                                             closeana__2dlexical_455a78ac_v ) ) );
L5844:
        POPSTACKTRACE( FALSEVALUE );
L5842:
        POPSTACKTRACE( FALSEVALUE );
L5840:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_mergeq_v );
DEFCSTRING( t5846, "MERGEQ" );

TSCP  closeana_mergeq( x3671, y3672 )
        TSCP  x3671, y3672;
{
        PUSHSTACKTRACE( t5846 );
        if  ( EQ( _S2CUINT( x3671 ), _S2CUINT( EMPTYLIST ) ) )  goto L5848;
        if  ( TRUE( scrt1_memq( x3671, y3672 ) ) )  goto L5850;
        POPSTACKTRACE( sc_cons( x3671, y3672 ) );
L5850:
        POPSTACKTRACE( y3672 );
L5848:
        POPSTACKTRACE( y3672 );
}

DEFTSCP( closeana_mark_2dtail_2dcalls_v );
DEFCSTRING( t5852, "MARK-TAIL-CALLS" );
EXTERNTSCPP( closeana_mark_2dtail_2dcalls1, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_mark_2dtail_2dcalls1_v );
EXTERNTSCPP( scrt1_last_2dpair, XAL1( TSCP ) );
EXTERNTSCP( scrt1_last_2dpair_v );
EXTERNTSCPP( closeana_lambda_2dis_2dinline, XAL1( TSCP ) );
EXTERNTSCP( closeana_lambda_2dis_2dinline_v );

TSCP  closeana_mark_2dtail_2dcalls( e3679 )
        TSCP  e3679;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5852 );
        X1 = BOOLEAN( EQ( TSCPTAG( e3679 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L5887;
        if  ( EQ( TSCPTAG( e3679 ), PAIRTAG ) )  goto L5861;
        scrt1__24__car_2derror( e3679 );
L5861:
        X2 = PAIR_CAR( e3679 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L5887;
        X4 = PAIR_CAR( e3679 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X3 ) )  goto L5865;
        X4 = PAIR_CDR( e3679 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5869;
        scrt1__24__car_2derror( X4 );
L5869:
        X2 = PAIR_CAR( X4 );
        goto L5866;
L5865:
        X2 = X3;
L5866:
        closeana_bda_2dlist_c52ab123_v = sc_cons( X2, 
                                                  closeana_bda_2dlist_c52ab123_v );
        plist_put( X2, c3813, EMPTYLIST );
        plist_put( X2, c3817, EMPTYLIST );
        plist_put( X2, c3821, EMPTYLIST );
        X3 = plist_get( X2, c2936 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2126 ) ) )  goto L5872;
        if  ( TRUE( plist_get( X2, c3151 ) ) )  goto L5873;
        closeana_dprocedure_40e51573( X2 );
        goto L5873;
L5872:
        plist_put( X2, c2065, e3679 );
L5873:
        X7 = PAIR_CAR( e3679 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X6 ) )  goto L5878;
        X7 = PAIR_CDR( e3679 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L5882;
        scrt1__24__cdr_2derror( X7 );
L5882:
        X5 = PAIR_CDR( X7 );
        goto L5879;
L5878:
        X5 = X6;
L5879:
        X4 = scrt1_last_2dpair( X5 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L5885;
        scrt1__24__car_2derror( X4 );
L5885:
        X3 = PAIR_CAR( X4 );
        POPSTACKTRACE( closeana_mark_2dtail_2dcalls1( X3, X2 ) );
L5887:
        if  ( NEQ( TSCPTAG( e3679 ), PAIRTAG ) )  goto L5888;
        X1 = PAIR_CAR( e3679 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2207 ) ) )  goto L5890;
        X3 = PAIR_CAR( e3679 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X2 ) )  goto L5895;
        X1 = scrt1_caddr( e3679 );
        goto L5896;
L5895:
        X1 = X2;
L5896:
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L5898;
        X2 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L5900;
        X5 = PAIR_CAR( e3679 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X4 ) )  goto L5905;
        X3 = scrt1_caddr( e3679 );
        goto L5906;
L5905:
        X3 = X4;
L5906:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5908;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5909;
L5908:
        X4 = FALSEVALUE;
L5909:
        if  ( FALSE( X4 ) )  goto L5912;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5915;
        scrt1__24__cdr_2derror( X3 );
L5915:
        X5 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5918;
        scrt1__24__car_2derror( X5 );
L5918:
        X2 = PAIR_CAR( X5 );
        goto L5913;
L5912:
        X2 = X4;
L5913:
        plist_put( X2, c2936, closeana_walk_2dlambda_2did_v );
        POPSTACKTRACE( closeana_lambda_2dis_2dinline( X2 ) );
L5900:
        POPSTACKTRACE( FALSEVALUE );
L5898:
        POPSTACKTRACE( FALSEVALUE );
L5890:
        POPSTACKTRACE( FALSEVALUE );
L5888:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_mark_2dtail_2dcalls1_v );
DEFCSTRING( t5921, "MARK-TAIL-CALLS1" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  closeana_mark_2dtail_2dcalls1( e3900, e3901 )
        TSCP  e3900, e3901;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5921 );
L5922:
        if  ( NEQ( TSCPTAG( e3900 ), PAIRTAG ) )  goto L5923;
        X2 = PAIR_CAR( e3900 );
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( c2207 ) ) );
        goto L5924;
L5923:
        X1 = FALSEVALUE;
L5924:
        if  ( FALSE( X1 ) )  goto L5943;
        if  ( NEQ( TSCPTAG( e3900 ), PAIRTAG ) )  goto L5945;
        X2 = PAIR_CAR( e3900 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2207 ) ) )  goto L5945;
        X2 = PAIR_CDR( e3900 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L5939;
        scrt1__24__car_2derror( X2 );
L5939:
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L5945;
L5943:
        if  ( NEQ( TSCPTAG( e3900 ), PAIRTAG ) )  goto L5946;
        X1 = PAIR_CAR( e3900 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2223 ) ) )  goto L5948;
        X3 = PAIR_CAR( e3900 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2223 ) ) );
        if  ( FALSE( X2 ) )  goto L5954;
        X1 = scrt1_caddr( e3900 );
        goto L5955;
L5954:
        X1 = X2;
L5955:
        closeana_mark_2dtail_2dcalls1( X1, e3901 );
        X3 = PAIR_CAR( e3900 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2223 ) ) );
        if  ( FALSE( X2 ) )  goto L5958;
        X1 = scrt1_cadddr( e3900 );
        goto L5959;
L5958:
        X1 = X2;
L5959:
        e3900 = X1;
        GOBACK( L5922 );
L5948:
        POPSTACKTRACE( FALSEVALUE );
L5946:
        POPSTACKTRACE( FALSEVALUE );
L5945:
        if  ( EQ( TSCPTAG( e3900 ), PAIRTAG ) )  goto L5962;
        scrt1__24__cdr_2derror( e3900 );
L5962:
        X1 = PAIR_CDR( e3900 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L5965;
        scdebug_error( c4019, 
                       c4020, CONS( X1, EMPTYLIST ) );
L5965:
        SETGEN( PAIR_CAR( X1 ), e3901 );
        X3 = PAIR_CAR( e3900 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X2 ) )  goto L5969;
        X1 = scrt1_caddr( e3900 );
        goto L5970;
L5969:
        X1 = X2;
L5970:
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L5972;
        X2 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2065 ) ) )  goto L5974;
        X5 = PAIR_CAR( e3900 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X4 ) )  goto L5980;
        X3 = scrt1_caddr( e3900 );
        goto L5981;
L5980:
        X3 = X4;
L5981:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5983;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2065 ) ) );
        goto L5984;
L5983:
        X4 = FALSEVALUE;
L5984:
        if  ( FALSE( X4 ) )  goto L5987;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L5990;
        scrt1__24__cdr_2derror( X3 );
L5990:
        X5 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L5993;
        scrt1__24__car_2derror( X5 );
L5993:
        X2 = PAIR_CAR( X5 );
        goto L5988;
L5987:
        X2 = X4;
L5988:
        plist_put( X2, c4065, e3901 );
        X7 = PAIR_CAR( e3900 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X6 ) )  goto L5997;
        X5 = scrt1_caddr( e3900 );
        goto L5998;
L5997:
        X5 = X6;
L5998:
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6000;
        X7 = PAIR_CAR( X5 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2065 ) ) );
        goto L6001;
L6000:
        X6 = FALSEVALUE;
L6001:
        if  ( FALSE( X6 ) )  goto L6004;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6007;
        scrt1__24__cdr_2derror( X5 );
L6007:
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6010;
        scrt1__24__cdr_2derror( X7 );
L6010:
        X4 = PAIR_CDR( X7 );
        goto L6005;
L6004:
        X4 = X6;
L6005:
        X3 = scrt1_last_2dpair( X4 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6013;
        scrt1__24__car_2derror( X3 );
L6013:
        X2 = PAIR_CAR( X3 );
        e3900 = X2;
        GOBACK( L5922 );
L5974:
        POPSTACKTRACE( FALSEVALUE );
L5972:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_count_2dcalls_v );
DEFCSTRING( t6015, "COUNT-CALLS" );

TSCP  closeana_count_2dcalls( e4175 )
        TSCP  e4175;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6015 );
        if  ( NEQ( TSCPTAG( e4175 ), PAIRTAG ) )  goto L6017;
        X3 = PAIR_CAR( e4175 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2207 ) ) )  goto L6019;
        X4 = PAIR_CAR( e4175 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2207 ) ) );
        if  ( FALSE( X3 ) )  goto L6024;
        X2 = scrt1_caddr( e4175 );
        goto L6018;
L6024:
        X2 = X3;
        goto L6018;
L6019:
        X2 = FALSEVALUE;
        goto L6018;
L6017:
        X2 = FALSEVALUE;
L6018:
        if  ( NOT( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X2 ), SYMBOLTAG ) ) )
            )  goto L6027;
        X1 = plist_get( X2, c2550 );
        goto L6028;
L6027:
        X1 = FALSEVALUE;
L6028:
        if  ( FALSE( X1 ) )  goto L6030;
        if  ( TRUE( plist_get( X2, c4186 ) ) )  goto L6032;
        if  ( NEQ( TSCPTAG( e4175 ), PAIRTAG ) )  goto L6036;
        X5 = PAIR_CAR( e4175 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2207 ) ) );
        goto L6037;
L6036:
        X4 = FALSEVALUE;
L6037:
        if  ( FALSE( X4 ) )  goto L6040;
        if  ( EQ( TSCPTAG( e4175 ), PAIRTAG ) )  goto L6043;
        scrt1__24__cdr_2derror( e4175 );
L6043:
        X5 = PAIR_CDR( e4175 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6046;
        scrt1__24__car_2derror( X5 );
L6046:
        X3 = PAIR_CAR( X5 );
        goto L6041;
L6040:
        X3 = X4;
L6041:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X1 ) ) )  goto L6034;
        X4 = plist_get( X1, c3813 );
        X3 = sc_cons( closeana_walk_2dlambda_2did_v, X4 );
        POPSTACKTRACE( plist_put( X1, c3813, X3 ) );
L6034:
        if  ( NEQ( TSCPTAG( e4175 ), PAIRTAG ) )  goto L6048;
        X4 = PAIR_CAR( e4175 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2207 ) ) );
        goto L6049;
L6048:
        X3 = FALSEVALUE;
L6049:
        if  ( FALSE( X3 ) )  goto L6072;
        if  ( EQ( TSCPTAG( e4175 ), PAIRTAG ) )  goto L6056;
        scrt1__24__cdr_2derror( e4175 );
L6056:
        X4 = PAIR_CDR( e4175 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6059;
        scrt1__24__car_2derror( X4 );
L6059:
        if  ( FALSE( PAIR_CAR( X4 ) ) )  goto L6072;
        X11 = PAIR_CAR( e4175 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2207 ) ) );
        if  ( FALSE( X10 ) )  goto L6065;
        X11 = PAIR_CDR( e4175 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L6069;
        scrt1__24__car_2derror( X11 );
L6069:
        X9 = PAIR_CAR( X11 );
        goto L6066;
L6065:
        X9 = X10;
L6066:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( closeana_walk_2dlambda_2did_v, X8 );
        X6 = X7;
        X7 = plist_get( X1, c3817 );
        X5 = sc_cons( X6, X7 );
        POPSTACKTRACE( plist_put( X1, c3817, X5 ) );
L6032:
        POPSTACKTRACE( FALSEVALUE );
L6030:
        POPSTACKTRACE( FALSEVALUE );
L6072:
        X3 = plist_get( X1, c3821 );
        X2 = sc_cons( closeana_walk_2dlambda_2did_v, X3 );
        POPSTACKTRACE( plist_put( X1, c3821, X2 ) );
}

DEFTSCP( closeana_generate_2dlambdas_v );
DEFCSTRING( t6073, "GENERATE-LAMBDAS" );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt1_cadar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadar_v );
EXTERNTSCPP( closeana_la_2dnestin_2dlb_3f, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_la_2dnestin_2dlb_3f_v );
EXTERNTSCPP( closeana_generate_2dtails, XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_generate_2dtails_v );

TSCP  closeana_generate_2dlambdas( l4341 )
        TSCP  l4341;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6073 );
        X1 = EMPTYLIST;
        X1 = CONS( X1, EMPTYLIST );
        X2 = l4341;
L6077:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L6078;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6082;
        scrt1__24__car_2derror( X2 );
L6082:
        X3 = PAIR_CAR( X2 );
        X5 = plist_get( X3, c3821 );
        X4 = plist_get( X3, c3817 );
        if  ( TRUE( plist_get( X3, c3151 ) ) )  goto L6121;
        X7 = scrt1_length( X5 );
        X8 = scrt1_length( X4 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L6089;
        X6 = _TSCP( IPLUS( _S2CINT( X7 ), _S2CINT( X8 ) ) );
        goto L6090;
L6089:
        X6 = scrt2__2b_2dtwo( X7, X8 );
L6090:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L6093;
        if  ( EQ( _S2CUINT( _TSCP( 4 ) ), _S2CUINT( X6 ) ) )  goto L6097;
        goto L6098;
L6093:
        if  ( FALSE( scrt2__3d_2dtwo( _TSCP( 4 ), X6 ) ) )  goto L6098;
L6097:
        if  ( FALSE( X4 ) )  goto L6103;
        X6 = scrt1_cadar( X4 );
        plist_put( X3, c4065, X6 );
L6103:
        if  ( FALSE( X5 ) )  goto L6105;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6108;
        scrt1__24__car_2derror( X5 );
L6108:
        X6 = PAIR_CAR( X5 );
        goto L6106;
L6105:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6111;
        scrt1__24__car_2derror( X4 );
L6111:
        X7 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6114;
        scrt1__24__car_2derror( X7 );
L6114:
        X6 = PAIR_CAR( X7 );
L6106:
        if  ( FALSE( closeana_la_2dnestin_2dlb_3f( X6, X3 ) )
            )  goto L6117;
        closeana_dprocedure_40e51573( X3 );
        goto L6121;
L6117:
        plist_put( X3, c2936, X6 );
        closeana_lambda_2dis_2dinline( X3 );
        goto L6121;
L6098:
        if  ( FALSE( X5 ) )  goto L6120;
        closeana_dprocedure_40e51573( X3 );
        goto L6121;
L6120:
        X6 = sc_cons( X3, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
L6121:
        X2 = PAIR_CDR( X2 );
        GOBACK( L6077 );
L6078:
        X3 = closeana_generate_2dtails( PAIR_CAR( X1 ), 
                                        _TSCP( 4 ) );
        X2 = closeana_generate_2dtails( X3, _TSCP( 8 ) );
        X3 = X2;
L6125:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L6126;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6130;
        scrt1__24__car_2derror( X3 );
L6130:
        X4 = PAIR_CAR( X3 );
        closeana_dprocedure_40e51573( X4 );
        X3 = PAIR_CDR( X3 );
        GOBACK( L6125 );
L6126:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_generate_2dtails_v );
DEFCSTRING( t6133, "GENERATE-TAILS" );
EXTERNTSCPP( closeana_lf_2dtails_de466e28, XAL1( TSCP ) );
EXTERNTSCP( closeana_lf_2dtails_de466e28_v );
EXTERNTSCPP( closeana_verify_2dtails, XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_verify_2dtails_v );

TSCP  closeana_generate_2dtails( u4441, p4442 )
        TSCP  u4441, p4442;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6133 );
L6134:
        X1 = EMPTYLIST;
        X2 = FALSEVALUE;
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X3 = u4441;
L6137:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L6138;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6142;
        scrt1__24__car_2derror( X3 );
L6142:
        X4 = PAIR_CAR( X3 );
        X5 = closeana_lf_2dtails_de466e28( X4 );
        X6 = scrt1_length( X5 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L6148;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L6152;
        goto L6153;
L6148:
        if  ( TRUE( scrt2__3d_2dtwo( X6, _TSCP( 4 ) ) ) )  goto L6152;
L6153:
        closeana_verify_2dtails( X4, p4442 );
        goto L6156;
L6152:
        X7 = scrt1_cadar( X5 );
        plist_put( X4, c4065, X7 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6159;
        scrt1__24__car_2derror( X5 );
L6159:
        X8 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6162;
        scrt1__24__car_2derror( X8 );
L6162:
        X7 = PAIR_CAR( X8 );
        plist_put( X4, c2936, X7 );
        closeana_lambda_2dis_2dinline( X4 );
L6156:
        if  ( FALSE( plist_get( X4, c3151 ) ) )  goto L6164;
        X6 = TRUEVALUE;
        SETGEN( PAIR_CAR( X2 ), X6 );
        goto L6165;
L6164:
        X6 = sc_cons( X4, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
L6165:
        X3 = PAIR_CDR( X3 );
        GOBACK( L6137 );
L6138:
        if  ( FALSE( PAIR_CAR( X2 ) ) )  goto L6167;
        u4441 = PAIR_CAR( X1 );
        GOBACK( L6134 );
L6167:
        POPSTACKTRACE( u4441 );
}

DEFTSCP( closeana_dprocedure_40e51573_v );
DEFCSTRING( t6169, "LAMBDA-IS-PROCEDURE" );

TSCP  closeana_dprocedure_40e51573( l4502 )
        TSCP  l4502;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t6169 );
        plist_put( l4502, c2065, EMPTYLIST );
        if  ( FALSE( plist_get( l4502, c4508 ) ) )  goto L6171;
        X2 = plist_get( l4502, c4508 );
        X1 = SYMBOL_VALUE( assign_2dknown_2dname_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
L6171:
        if  ( FALSE( plist_get( l4502, c2955 ) ) )  goto L6173;
        plist_put( l4502, c2936, c2126 );
        POPSTACKTRACE( plist_put( l4502, c3151, c3165 ) );
L6173:
        POPSTACKTRACE( plist_put( l4502, c3151, c4517 ) );
}

DEFTSCP( closeana_lambda_2dis_2dinline_v );
DEFCSTRING( t6176, "LAMBDA-IS-INLINE" );

TSCP  closeana_lambda_2dis_2dinline( l4526 )
        TSCP  l4526;
{
        TSCP  X1;

        PUSHSTACKTRACE( t6176 );
        if  ( FALSE( plist_get( l4526, c4508 ) ) )  goto L6178;
        X1 = plist_get( l4526, c4508 );
        plist_put( X1, c3042, FALSEVALUE );
L6178:
        POPSTACKTRACE( plist_put( l4526, c3151, c4537 ) );
}

DEFTSCP( closeana_ine_2dtail_c88b625b_v );
DEFCSTRING( t6180, "LAMBDA-IS-INLINE-TAIL" );

TSCP  closeana_ine_2dtail_c88b625b( l4540 )
        TSCP  l4540;
{
        TSCP  X1;

        PUSHSTACKTRACE( t6180 );
        if  ( FALSE( plist_get( l4540, c4508 ) ) )  goto L6182;
        X1 = plist_get( l4540, c4508 );
        plist_put( X1, c3042, FALSEVALUE );
L6182:
        POPSTACKTRACE( plist_put( l4540, c3151, c4551 ) );
}

DEFTSCP( closeana_lf_2dtails_de466e28_v );
DEFCSTRING( t6184, "REMOVE-SELF-TAILS" );
EXTERNTSCPP( closeana_ls_2dexits_350c85e5, XAL1( TSCP ) );
EXTERNTSCP( closeana_ls_2dexits_350c85e5_v );

TSCP  closeana_lf_2dtails_de466e28( l4553 )
        TSCP  l4553;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t6184 );
        X1 = plist_get( l4553, c3817 );
        X2 = EMPTYLIST;
L6187:
        X2 = CONS( X2, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L6188;
        plist_put( l4553, c3817, PAIR_CAR( X2 ) );
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L6188:
        X4 = scrt1_cadar( X1 );
        X3 = closeana_ls_2dexits_350c85e5( X4 );
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( l4553 ) ) )  goto L6192;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L6195;
        scrt1__24__car_2derror( X1 );
L6195:
        X4 = PAIR_CAR( X1 );
        X3 = sc_cons( X4, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X3 );
L6192:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L6198;
        scrt1__24__cdr_2derror( X1 );
L6198:
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L6187 );
}

DEFTSCP( closeana_verify_2dtails_v );
DEFCSTRING( t6200, "VERIFY-TAILS" );
EXTERNTSCPP( closeana_ne_2dtails_e19eeda8, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana_ne_2dtails_e19eeda8_v );
EXTERNTSCPP( closeana__2dtail_3f_8c527d1, XAL2( TSCP, TSCP ) );
EXTERNTSCP( closeana__2dtail_3f_8c527d1_v );

TSCP  closeana_verify_2dtails( l4584, p4585 )
        TSCP  l4584, p4585;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6200 );
        X1 = plist_get( l4584, c3817 );
        X2 = EMPTYLIST;
L6203:
        X2 = CONS( X2, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L6204;
        X4 = scrt1_length( PAIR_CAR( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L6208;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L6212;
        X3 = FALSEVALUE;
        goto L6215;
L6208:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 4 ) ) ) )  goto L6212;
        X3 = FALSEVALUE;
        goto L6215;
L6212:
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6217;
        scrt1__24__car_2derror( X5 );
L6217:
        X3 = PAIR_CAR( X5 );
L6215:
        if  ( FALSE( X3 ) )  goto L6220;
        X4 = plist_get( X3, c4648 );
        X6 = plist_get( l4584, c4648 );
        X5 = sc_cons( l4584, X6 );
L6224:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L6225;
        plist_put( X3, c4648, X4 );
        goto L6226;
L6225:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6229;
        scrt1__24__car_2derror( X5 );
L6229:
        X6 = PAIR_CAR( X5 );
        plist_put( X6, c4065, X3 );
        X7 = PAIR_CAR( X5 );
        X6 = closeana_ne_2dtails_e19eeda8( X7, X4 );
        X5 = PAIR_CDR( X5 );
        X4 = X6;
        GOBACK( L6224 );
L6226:
        plist_put( l4584, c4648, EMPTYLIST );
        plist_put( l4584, c2936, X3 );
        POPSTACKTRACE( closeana_ine_2dtail_c88b625b( l4584 ) );
L6220:
        POPSTACKTRACE( FALSEVALUE );
L6204:
        X4 = scrt1_cadar( X1 );
        X3 = closeana_ls_2dexits_350c85e5( X4 );
        if  ( TRUE( scrt1_memq( X3, PAIR_CAR( X2 ) ) ) )  goto L6243;
        if  ( EQ( _S2CUINT( p4585 ), 
                  _S2CUINT( _TSCP( 4 ) ) ) )  goto L6240;
        X4 = scrt1_cadar( X1 );
        if  ( TRUE( closeana__2dtail_3f_8c527d1( X4, 
                                                 PAIR_CAR( X2 ) ) )
            )  goto L6243;
L6240:
        X4 = sc_cons( X3, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X4 );
L6243:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L6245;
        scrt1__24__cdr_2derror( X1 );
L6245:
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X2 );
        X1 = X3;
        GOBACK( L6203 );
}

DEFTSCP( closeana_ls_2dexits_350c85e5_v );
DEFCSTRING( t6247, "GENERATE-TAILS-EXITS" );

TSCP  closeana_ls_2dexits_350c85e5( l4675 )
        TSCP  l4675;
{
        TSCP  X1;

        PUSHSTACKTRACE( t6247 );
L6248:
        X1 = plist_get( l4675, c3151 );
        if  ( FALSE( scrt1_memq( X1, c4681 ) ) )  goto L6249;
        if  ( FALSE( plist_get( l4675, c4065 ) ) )  goto L6251;
        l4675 = plist_get( l4675, c4065 );
        GOBACK( L6248 );
L6251:
        POPSTACKTRACE( l4675 );
L6249:
        POPSTACKTRACE( l4675 );
}

DEFTSCP( closeana__2dtail_3f_8c527d1_v );
DEFCSTRING( t6253, "COULD-INLINE-TAIL?" );

TSCP  closeana__2dtail_3f_8c527d1( l4688, e4689 )
        TSCP  l4688, e4689;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6253 );
        if  ( FALSE( plist_get( l4688, c3151 ) ) )  goto L6255;
        X1 = FALSEVALUE;
        goto L6256;
L6255:
        X1 = TRUEVALUE;
L6256:
        if  ( FALSE( X1 ) )  goto L6258;
        X2 = plist_get( l4688, c3817 );
        X3 = X2;
L6262:
        if  ( FALSE( X3 ) )  goto L6263;
        X5 = scrt1_cadar( X3 );
        X4 = closeana_ls_2dexits_350c85e5( X5 );
        X5 = plist_get( X4, c3151 );
        if  ( FALSE( X5 ) )  goto L6272;
        if  ( TRUE( scrt1_memq( X4, e4689 ) ) )  goto L6272;
        POPSTACKTRACE( FALSEVALUE );
L6263:
        POPSTACKTRACE( TRUEVALUE );
L6272:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6274;
        scrt1__24__cdr_2derror( X3 );
L6274:
        X3 = PAIR_CDR( X3 );
        GOBACK( L6262 );
L6258:
        POPSTACKTRACE( X1 );
}

DEFTSCP( closeana_ne_2dtails_e19eeda8_v );
DEFCSTRING( t6276, "MERGE-INLINE-TAILS" );

TSCP  closeana_ne_2dtails_e19eeda8( l4717, t4718 )
        TSCP  l4717, t4718;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t6276 );
        if  ( NEQ( _S2CUINT( t4718 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L6278;
        X1 = sc_cons( l4717, EMPTYLIST );
        POPSTACKTRACE( X1 );
L6278:
        if  ( EQ( TSCPTAG( t4718 ), PAIRTAG ) )  goto L6282;
        scrt1__24__car_2derror( t4718 );
L6282:
        X2 = PAIR_CAR( t4718 );
        X1 = closeana_la_2dnestin_2dlb_3f( X2, l4717 );
        if  ( TRUE( X1 ) )  goto L6288;
        X2 = PAIR_CAR( t4718 );
        X3 = plist_get( l4717, c3184 );
        if  ( TRUE( scrt1_memq( X2, X3 ) ) )  goto L6288;
        X2 = PAIR_CAR( t4718 );
        X4 = PAIR_CDR( t4718 );
        X3 = closeana_ne_2dtails_e19eeda8( l4717, X4 );
        POPSTACKTRACE( sc_cons( X2, X3 ) );
L6288:
        POPSTACKTRACE( sc_cons( l4717, t4718 ) );
}

DEFTSCP( closeana_la_2dnestin_2dlb_3f_v );
DEFCSTRING( t6294, "LA-NESTIN-LB?" );

TSCP  closeana_la_2dnestin_2dlb_3f( l4749, l4750 )
        TSCP  l4749, l4750;
{
        TSCP  X1;

        PUSHSTACKTRACE( t6294 );
L6295:
        if  ( EQ( _S2CUINT( l4749 ), _S2CUINT( l4750 ) ) )  goto L6296;
        if  ( EQ( _S2CUINT( l4749 ), _S2CUINT( c2126 ) ) )  goto L6298;
        X1 = plist_get( l4749, c2936 );
        l4749 = X1;
        GOBACK( L6295 );
L6298:
        POPSTACKTRACE( FALSEVALUE );
L6296:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( closeana_display_2dclose_v );
DEFCSTRING( t6300, "DISPLAY-CLOSE" );
EXTERNTSCPP( closeana_all_2dlexical_2dvars, XAL1( TSCP ) );
EXTERNTSCP( closeana_all_2dlexical_2dvars_v );

TSCP  closeana_display_2dclose( e4760 )
        TSCP  e4760;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6300 );
        if  ( NEQ( TSCPTAG( e4760 ), PAIRTAG ) )  goto L6302;
        X1 = PAIR_CAR( e4760 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2065 ) ) )  goto L6304;
        X3 = PAIR_CAR( e4760 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2065 ) ) );
        if  ( FALSE( X2 ) )  goto L6309;
        X3 = PAIR_CDR( e4760 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6313;
        scrt1__24__car_2derror( X3 );
L6313:
        X1 = PAIR_CAR( X3 );
        goto L6310;
L6309:
        X1 = X2;
L6310:
        X2 = plist_get( X1, c3151 );
        if  ( FALSE( scrt1_memq( X2, c4780 ) ) )  goto L6316;
        X2 = closeana_all_2dlexical_2dvars( X1 );
        X3 = X2;
L6320:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L6321;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6325;
        scrt1__24__car_2derror( X3 );
L6325:
        X4 = PAIR_CAR( X3 );
        X5 = plist_get( X4, c2550 );
        if  ( FALSE( X5 ) )  goto L6334;
        X7 = plist_get( X4, c2550 );
        X6 = plist_get( X7, c3151 );
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( c3165 ) ) )  goto L6334;
        plist_put( X4, c3042, FALSEVALUE );
        goto L6336;
L6334:
        if  ( TRUE( plist_get( X4, c3042 ) ) )  goto L6336;
        X5 = SYMBOL_VALUE( log_3f_v );
        X5 = UNKNOWNCALL( X5, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X5 ) )( c2955, 
                                                  PROCEDURE_CLOSURE( X5 ) ) )
            )  goto L6339;
        X5 = SYMBOL_VALUE( sc_2dicode_v );
        X6 = CONS( X4, EMPTYLIST );
        X6 = CONS( X1, X6 );
        scrt6_format( X5, CONS( c4820, X6 ) );
L6339:
        plist_put( X4, c3042, TRUEVALUE );
L6336:
        X3 = PAIR_CDR( X3 );
        GOBACK( L6320 );
L6321:
        POPSTACKTRACE( FALSEVALUE );
L6316:
        POPSTACKTRACE( FALSEVALUE );
L6304:
        POPSTACKTRACE( FALSEVALUE );
L6302:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( closeana_all_2dlexical_2dvars_v );
DEFCSTRING( t6342, "ALL-LEXICAL-VARS" );

TSCP  closeana_all_2dlexical_2dvars( i4860 )
        TSCP  i4860;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6342 );
        X1 = plist_get( i4860, c4648 );
        X2 = plist_get( i4860, c3181 );
        X3 = X2;
        X4 = X1;
L6346:
        X3 = CONS( X3, EMPTYLIST );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L6347;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6351;
        scrt1__24__car_2derror( X4 );
L6351:
        X6 = PAIR_CAR( X4 );
        X5 = plist_get( X6, c3181 );
        X6 = X5;
L6355:
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L6356;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6360;
        scrt1__24__car_2derror( X6 );
L6360:
        X7 = PAIR_CAR( X6 );
        X8 = plist_get( X7, c3317 );
        if  ( TRUE( closeana_la_2dnestin_2dlb_3f( X8, i4860 ) )
            )  goto L6365;
        if  ( TRUE( scrt1_memq( X7, PAIR_CAR( X3 ) ) ) )  goto L6365;
        X8 = sc_cons( X7, PAIR_CAR( X3 ) );
        SETGEN( PAIR_CAR( X3 ), X8 );
L6365:
        X6 = PAIR_CDR( X6 );
        GOBACK( L6355 );
L6356:
        X4 = PAIR_CDR( X4 );
        X3 = PAIR_CAR( X3 );
        GOBACK( L6346 );
L6347:
        POPSTACKTRACE( PAIR_CAR( X3 ) );
}

void scrt2__init();
void scdebug__init();
void scrt6__init();
void plist__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        scdebug__init();
        scrt6__init();
        plist__init();
        scrt1__init();
        MAXDISPLAY( 0 );
}

void  closeana__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(closeana SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t5213, 
                       ADR( closeana_analyze_2dclosures1a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_analyze_2dclosures1a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5240, 
                       ADR( closeana_analyze_2dclosures1b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_analyze_2dclosures1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5242, 
                       ADR( closeana_analyze_2dclosures2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_analyze_2dclosures2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5244, 
                       ADR( closeana_walk_2d_24tree_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_walk_2d_24tree, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5319, 
                       ADR( closeana_ree_2dlist_f50a563f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_ree_2dlist_f50a563f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5330, 
                       ADR( closeana_walk_2dlambda_2did_v ), 
                       c2126 );
        INITIALIZEVAR( t5331, 
                       ADR( closeana_walk_2dlambda_2dids_v ), 
                       c2407 );
        INITIALIZEVAR( t5332, 
                       ADR( closeana__2dlexical_455a78ac_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t5333, 
                       ADR( closeana_bda_2dlist_c52ab123_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t5334, 
                       ADR( closeana_assign_2dlambdas_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_assign_2dlambdas, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5509, 
                       ADR( closeana_bdas_2darg_a7a3fa97_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_bdas_2darg_a7a3fa97, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5545, 
                       ADR( closeana_inherit_2dclosed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_inherit_2dclosed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5576, 
                       ADR( closeana__2dchecked_ed79e461_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t5577, 
                       ADR( closeana__2dlexical_34c6288f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana__2dlexical_34c6288f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5579, 
                       ADR( closeana_2dlexical1_2ced58a3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      closeana_2dlexical1_2ced58a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5641, 
                       ADR( closeana_da_2dslots_a659d0e7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_da_2dslots_a659d0e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5846, 
                       ADR( closeana_mergeq_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_mergeq, EMPTYLIST ) );
        INITIALIZEVAR( t5852, 
                       ADR( closeana_mark_2dtail_2dcalls_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_mark_2dtail_2dcalls, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t5921, 
                       ADR( closeana_mark_2dtail_2dcalls1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_mark_2dtail_2dcalls1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6015, 
                       ADR( closeana_count_2dcalls_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_count_2dcalls, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6073, 
                       ADR( closeana_generate_2dlambdas_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_generate_2dlambdas, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6133, 
                       ADR( closeana_generate_2dtails_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_generate_2dtails, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6169, 
                       ADR( closeana_dprocedure_40e51573_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_dprocedure_40e51573, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6176, 
                       ADR( closeana_lambda_2dis_2dinline_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_lambda_2dis_2dinline, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6180, 
                       ADR( closeana_ine_2dtail_c88b625b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_ine_2dtail_c88b625b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6184, 
                       ADR( closeana_lf_2dtails_de466e28_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_lf_2dtails_de466e28, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6200, 
                       ADR( closeana_verify_2dtails_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_verify_2dtails, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6247, 
                       ADR( closeana_ls_2dexits_350c85e5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_ls_2dexits_350c85e5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6253, 
                       ADR( closeana__2dtail_3f_8c527d1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana__2dtail_3f_8c527d1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6276, 
                       ADR( closeana_ne_2dtails_e19eeda8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_ne_2dtails_e19eeda8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6294, 
                       ADR( closeana_la_2dnestin_2dlb_3f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      closeana_la_2dnestin_2dlb_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6300, 
                       ADR( closeana_display_2dclose_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_display_2dclose, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6342, 
                       ADR( closeana_all_2dlexical_2dvars_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      closeana_all_2dlexical_2dvars, 
                                      EMPTYLIST ) );
        return;
}
