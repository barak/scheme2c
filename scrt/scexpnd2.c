
/* SCHEME->C */

#include <objects.h>

void scexpnd2__init();
DEFSTATICTSCP( c2751 );
DEFSTATICTSCP( t2832 );
DEFSTATICTSCP( t2833 );
DEFSTATICTSCP( t2834 );
DEFSTATICTSCP( c2747 );
DEFSTATICTSCP( c2746 );
DEFSTATICTSCP( t2835 );
DEFSTATICTSCP( c2742 );
DEFSTATICTSCP( c2738 );
DEFCSTRING( t2836, "doloop" );
DEFSTATICTSCP( c2735 );
DEFSTATICTSCP( c2724 );
DEFCSTRING( t2837, "Illegal form:" );
DEFSTATICTSCP( c2693 );
DEFSTATICTSCP( c2660 );
DEFSTATICTSCP( c2659 );
DEFCSTRING( t2838, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2614 );
DEFSTATICTSCP( c2613 );
DEFSTATICTSCP( c2568 );
DEFSTATICTSCP( c2559 );
DEFSTATICTSCP( c2359 );
DEFSTATICTSCP( c2242 );
DEFSTATICTSCP( c2231 );
DEFCSTRING( t2839, "$_~s" );
DEFSTATICTSCP( c2213 );
DEFCSTRING( t2840, "Illegal form: ~s" );
DEFSTATICTSCP( c2166 );
DEFSTATICTSCP( c2165 );

static void  init_constants()
{
        TSCP  X1;

        c2751 = EMPTYLIST;
        X1 = EMPTYLIST;
        t2832 = STRINGTOSYMBOL( CSTRING_TSCP( "*IGNORED*" ) );
        X1 = CONS( t2832, X1 );
        t2833 = STRINGTOSYMBOL( CSTRING_TSCP( "INCLUDE" ) );
        X1 = CONS( t2833, X1 );
        c2751 = CONS( X1, c2751 );
        t2834 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        c2751 = CONS( t2834, c2751 );
        CONSTANTEXP( ADR( c2751 ) );
        c2747 = STRINGTOSYMBOL( CSTRING_TSCP( "INCLUDE" ) );
        CONSTANTEXP( ADR( c2747 ) );
        c2746 = EMPTYLIST;
        X1 = EMPTYLIST;
        X1 = CONS( t2832, X1 );
        t2835 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        X1 = CONS( t2835, X1 );
        c2746 = CONS( X1, c2746 );
        c2746 = CONS( t2834, c2746 );
        CONSTANTEXP( ADR( c2746 ) );
        c2742 = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE" ) );
        CONSTANTEXP( ADR( c2742 ) );
        c2738 = EMPTYLIST;
        c2738 = CONS( FALSEVALUE, c2738 );
        CONSTANTEXP( ADR( c2738 ) );
        c2735 = CSTRING_TSCP( t2836 );
        CONSTANTEXP( ADR( c2735 ) );
        c2724 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2724 ) );
        c2693 = CSTRING_TSCP( t2837 );
        CONSTANTEXP( ADR( c2693 ) );
        c2660 = STRINGTOSYMBOL( CSTRING_TSCP( "EXP" ) );
        CONSTANTEXP( ADR( c2660 ) );
        c2659 = STRINGTOSYMBOL( CSTRING_TSCP( "DO" ) );
        CONSTANTEXP( ADR( c2659 ) );
        c2614 = CSTRING_TSCP( t2838 );
        CONSTANTEXP( ADR( c2614 ) );
        c2613 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2613 ) );
        c2568 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2568 ) );
        c2559 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c2559 ) );
        c2359 = STRINGTOSYMBOL( CSTRING_TSCP( "LET*" ) );
        CONSTANTEXP( ADR( c2359 ) );
        c2242 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2242 ) );
        c2231 = STRINGTOSYMBOL( CSTRING_TSCP( "LETREC" ) );
        CONSTANTEXP( ADR( c2231 ) );
        c2213 = CSTRING_TSCP( t2839 );
        CONSTANTEXP( ADR( c2213 ) );
        c2166 = CSTRING_TSCP( t2840 );
        CONSTANTEXP( ADR( c2166 ) );
        c2165 = STRINGTOSYMBOL( CSTRING_TSCP( "LET" ) );
        CONSTANTEXP( ADR( c2165 ) );
}

DEFTSCP( scexpnd2_let_2dmacro_v );
DEFCSTRING( t2841, "SCEXPND2_LET-MACRO" );
EXTERNTSCPP( scexpand_islist, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scexpand_islist_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_cadar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadar_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( sc_d_2dsymbol_ab4b4447, XAL1( TSCP ) );
EXTERNTSCP( sc_d_2dsymbol_ab4b4447_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );

TSCP  scexpnd2_let_2dmacro( e2131 )
        TSCP  e2131;
{
        TSCP  X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2841 );
        X8 = scexpand_islist( e2131, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X8 ) )  goto L2892;
        if  ( EQ( TSCPTAG( e2131 ), PAIRTAG ) )  goto L2850;
        scrt1__24__cdr_2derror( e2131 );
L2850:
        X10 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L2853;
        scrt1__24__car_2derror( X10 );
L2853:
        X9 = PAIR_CAR( X10 );
        if  ( FALSE( scexpand_islist( X9, _TSCP( 0 ), EMPTYLIST ) )
            )  goto L2892;
        X9 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L2858;
        scrt1__24__car_2derror( X9 );
L2858:
        X7 = PAIR_CAR( X9 );
        X6 = EMPTYLIST;
        X5 = EMPTYLIST;
L2860:
        X5 = CONS( X5, EMPTYLIST );
        X6 = CONS( X6, EMPTYLIST );
        X9 = BOOLEAN( NEQ( TSCPTAG( X7 ), PAIRTAG ) );
        if  ( TRUE( X9 ) )  goto L2865;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L2869;
        scrt1__24__car_2derror( X7 );
L2869:
        X11 = PAIR_CAR( X7 );
        if  ( FALSE( scexpand_islist( X11, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2866;
        X10 = FALSEVALUE;
        goto L2867;
L2866:
        X10 = TRUEVALUE;
L2867:
        if  ( TRUE( X10 ) )  goto L2865;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L2879;
        scrt1__24__car_2derror( X7 );
L2879:
        X12 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L2882;
        scrt1__24__car_2derror( X12 );
L2882:
        X11 = PAIR_CAR( X12 );
        if  ( NOT( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X11 ), SYMBOLTAG ) ) )
            )  goto L2865;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L2886;
        scrt1__24__car_2derror( X7 );
L2886:
        X13 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2889;
        scrt1__24__car_2derror( X13 );
L2889:
        X12 = PAIR_CAR( X13 );
        X11 = sc_cons( X12, PAIR_CAR( X6 ) );
        SETGEN( PAIR_CAR( X6 ), X11 );
        X12 = scrt1_cadar( X7 );
        X11 = sc_cons( X12, PAIR_CAR( X5 ) );
        SETGEN( PAIR_CAR( X5 ), X11 );
        X11 = PAIR_CDR( X7 );
        X5 = PAIR_CAR( X5 );
        X6 = PAIR_CAR( X6 );
        X7 = X11;
        GOBACK( L2860 );
L2892:
        X8 = scexpand_islist( e2131, _TSCP( 16 ), EMPTYLIST );
        if  ( FALSE( X8 ) )  goto L2944;
        if  ( EQ( TSCPTAG( e2131 ), PAIRTAG ) )  goto L2900;
        scrt1__24__cdr_2derror( e2131 );
L2900:
        X10 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L2903;
        scrt1__24__car_2derror( X10 );
L2903:
        X9 = PAIR_CAR( X10 );
        if  ( NOT( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X9 ), SYMBOLTAG ) ) )
            )  goto L2944;
        X4 = scrt1_caddr( e2131 );
        X9 = _TSCP( 0 );
        X1 = EMPTYLIST;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L2906:
        X3 = CONS( X3, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X10 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X10 ) )  goto L2911;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2915;
        scrt1__24__car_2derror( X4 );
L2915:
        X12 = PAIR_CAR( X4 );
        if  ( FALSE( scexpand_islist( X12, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2912;
        X11 = FALSEVALUE;
        goto L2913;
L2912:
        X11 = TRUEVALUE;
L2913:
        if  ( TRUE( X11 ) )  goto L2911;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2925;
        scrt1__24__car_2derror( X4 );
L2925:
        X13 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2928;
        scrt1__24__car_2derror( X13 );
L2928:
        X12 = PAIR_CAR( X13 );
        if  ( NOT( AND( EQ( TSCPTAG( X12 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X12 ), SYMBOLTAG ) ) )
            )  goto L2911;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2932;
        scrt1__24__car_2derror( X4 );
L2932:
        X14 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2935;
        scrt1__24__car_2derror( X14 );
L2935:
        X13 = PAIR_CAR( X14 );
        X12 = sc_cons( X13, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X12 );
        X14 = scrt6_format( c2213, CONS( X9, EMPTYLIST ) );
        X13 = sc_d_2dsymbol_ab4b4447( X14 );
        X12 = sc_cons( X13, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X12 );
        X16 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L2938;
        scrt1__24__car_2derror( X16 );
L2938:
        X15 = PAIR_CAR( X16 );
        X17 = scrt1_cadar( X4 );
        X16 = sc_cons( X17, EMPTYLIST );
        X14 = sc_cons( X15, X16 );
        X13 = X14;
        X12 = sc_cons( X13, PAIR_CAR( X3 ) );
        SETGEN( PAIR_CAR( X3 ), X12 );
        X12 = PAIR_CDR( X4 );
        if  ( BITAND( BITOR( _S2CINT( X9 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2942;
        X13 = _TSCP( IPLUS( _S2CINT( X9 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L2943;
L2942:
        X13 = scrt2__2b_2dtwo( X9, _TSCP( 4 ) );
L2943:
        X3 = PAIR_CAR( X3 );
        X2 = PAIR_CAR( X2 );
        X1 = PAIR_CAR( X1 );
        X9 = X13;
        X4 = X12;
        GOBACK( L2906 );
L2944:
        POPSTACKTRACE( scdebug_error( c2165, 
                                      c2166, 
                                      CONS( e2131, EMPTYLIST ) ) );
L2865:
        if  ( FALSE( X7 ) )  goto L2945;
        POPSTACKTRACE( scdebug_error( c2165, 
                                      c2166, 
                                      CONS( e2131, EMPTYLIST ) ) );
L2945:
        X11 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L2949;
        scrt1__24__cdr_2derror( X11 );
L2949:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_append_2dtwo( X10, X11 ), EMPTYLIST );
        X8 = scrt1_cons_2a( c2242, 
                            CONS( scrt1_reverse( PAIR_CAR( X6 ) ), 
                                  X9 ) );
        X9 = scrt1_reverse( PAIR_CAR( X5 ) );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X8, 
                                      CONS( scrt1_append_2dtwo( X9, 
                                                                X10 ), 
                                            EMPTYLIST ) ) );
L2911:
        if  ( FALSE( X4 ) )  goto L2951;
        POPSTACKTRACE( scdebug_error( c2165, 
                                      c2166, 
                                      CONS( e2131, EMPTYLIST ) ) );
L2951:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L2955;
        scrt1__24__car_2derror( X11 );
L2955:
        X10 = PAIR_CAR( X11 );
        X11 = scrt1_reverse( PAIR_CAR( X1 ) );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( X10, 
                                  CONS( scrt1_append_2dtwo( X11, X12 ), 
                                        EMPTYLIST ) ), 
                   X9 );
        X12 = PAIR_CDR( e2131 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L2959;
        scrt1__24__car_2derror( X12 );
L2959:
        X11 = PAIR_CAR( X12 );
        X12 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = scrt1_cdddr( e2131 );
        X15 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X13 = CONS( scrt1_append_2dtwo( X14, X15 ), 
                    EMPTYLIST );
        X10 = scrt1_cons_2a( X11, 
                             CONS( scrt1_cons_2a( c2242, 
                                                  CONS( scrt1_reverse( PAIR_CAR( X2 ) ), 
                                                        X13 ) ), 
                                   X12 ) );
        X8 = CONS( scrt1_cons_2a( c2231, 
                                  CONS( scrt1_cons_2a( X10, 
                                                       CONS( EMPTYLIST, 
                                                             EMPTYLIST ) ), 
                                        X9 ) ), 
                   X8 );
        POPSTACKTRACE( scrt1_cons_2a( c2165, 
                                      CONS( scrt1_reverse( PAIR_CAR( X3 ) ), 
                                            X8 ) ) );
}

EXTERNTSCPP( scexpand_install_2dexpander, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scexpand_install_2dexpander_v );

TSCP  scexpnd2_l2320( x2321, e2322 )
        TSCP  x2321, e2322;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd2_l2320 [inside TOP-LEVEL]" );
        X2 = scexpnd2_let_2dmacro( x2321 );
        X1 = e2322;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2322, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd2_let_2a_2dmacro_v );
DEFCSTRING( t2962, "SCEXPND2_LET*-MACRO" );
EXTERNTSCPP( scexpnd2_let_2a_2dresult, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scexpnd2_let_2a_2dresult_v );

TSCP  scexpnd2_let_2a_2dmacro( e2325 )
        TSCP  e2325;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2962 );
        X4 = scexpand_islist( e2325, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X4 ) )  goto L3013;
        if  ( EQ( TSCPTAG( e2325 ), PAIRTAG ) )  goto L2971;
        scrt1__24__cdr_2derror( e2325 );
L2971:
        X6 = PAIR_CDR( e2325 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L2974;
        scrt1__24__car_2derror( X6 );
L2974:
        X5 = PAIR_CAR( X6 );
        if  ( FALSE( scexpand_islist( X5, _TSCP( 4 ), EMPTYLIST ) )
            )  goto L3013;
        X5 = PAIR_CDR( e2325 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L2979;
        scrt1__24__car_2derror( X5 );
L2979:
        X3 = PAIR_CAR( X5 );
        X2 = EMPTYLIST;
        X1 = EMPTYLIST;
L2981:
        X1 = CONS( X1, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L2986;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L2990;
        scrt1__24__car_2derror( X3 );
L2990:
        X7 = PAIR_CAR( X3 );
        if  ( FALSE( scexpand_islist( X7, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L2987;
        X6 = FALSEVALUE;
        goto L2988;
L2987:
        X6 = TRUEVALUE;
L2988:
        if  ( TRUE( X6 ) )  goto L2986;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3000;
        scrt1__24__car_2derror( X3 );
L3000:
        X8 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3003;
        scrt1__24__car_2derror( X8 );
L3003:
        X7 = PAIR_CAR( X8 );
        if  ( NOT( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X7 ), SYMBOLTAG ) ) )
            )  goto L2986;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3007;
        scrt1__24__car_2derror( X3 );
L3007:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3010;
        scrt1__24__car_2derror( X9 );
L3010:
        X8 = PAIR_CAR( X9 );
        X7 = sc_cons( X8, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X7 );
        X8 = scrt1_cadar( X3 );
        X7 = sc_cons( X8, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
        X7 = PAIR_CDR( X3 );
        X1 = PAIR_CAR( X1 );
        X2 = PAIR_CAR( X2 );
        X3 = X7;
        GOBACK( L2981 );
L3013:
        X4 = scexpand_islist( e2325, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X4 ) )  goto L3030;
        if  ( EQ( TSCPTAG( e2325 ), PAIRTAG ) )  goto L3021;
        scrt1__24__cdr_2derror( e2325 );
L3021:
        X6 = PAIR_CDR( e2325 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3024;
        scrt1__24__car_2derror( X6 );
L3024:
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3030;
        X8 = PAIR_CDR( e2325 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3028;
        scrt1__24__cdr_2derror( X8 );
L3028:
        X7 = PAIR_CDR( X8 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X5 = scrt1_cons_2a( c2242, CONS( EMPTYLIST, X6 ) );
        POPSTACKTRACE( scrt1_cons_2a( X5, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L3030:
        POPSTACKTRACE( scdebug_error( c2359, 
                                      c2166, 
                                      CONS( e2325, EMPTYLIST ) ) );
L2986:
        if  ( FALSE( X3 ) )  goto L3031;
        POPSTACKTRACE( scdebug_error( c2359, 
                                      c2166, 
                                      CONS( e2325, EMPTYLIST ) ) );
L3031:
        X6 = PAIR_CDR( e2325 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3035;
        scrt1__24__cdr_2derror( X6 );
L3035:
        X5 = PAIR_CDR( X6 );
        X4 = scexpnd2_let_2a_2dresult( PAIR_CAR( X2 ), 
                                       PAIR_CAR( X1 ), X5 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3038;
        scrt1__24__car_2derror( X4 );
L3038:
        POPSTACKTRACE( PAIR_CAR( X4 ) );
}

TSCP  scexpnd2_l2442( x2443, e2444 )
        TSCP  x2443, e2444;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd2_l2442 [inside TOP-LEVEL]" );
        X2 = scexpnd2_let_2a_2dmacro( x2443 );
        X1 = e2444;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2444, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd2_let_2a_2dresult_v );
DEFCSTRING( t3041, "SCEXPND2_LET*-RESULT" );

TSCP  scexpnd2_let_2a_2dresult( v2446, i2447, b2448 )
        TSCP  v2446, i2447, b2448;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3041 );
L3042:
        if  ( EQ( _S2CUINT( v2446 ), _S2CUINT( EMPTYLIST ) ) )  goto L3043;
        if  ( EQ( TSCPTAG( v2446 ), PAIRTAG ) )  goto L3046;
        scrt1__24__cdr_2derror( v2446 );
L3046:
        X1 = PAIR_CDR( v2446 );
        if  ( EQ( TSCPTAG( i2447 ), PAIRTAG ) )  goto L3049;
        scrt1__24__cdr_2derror( i2447 );
L3049:
        X2 = PAIR_CDR( i2447 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_append_2dtwo( b2448, X6 ), 
                   EMPTYLIST );
        X6 = PAIR_CAR( v2446 );
        X4 = scrt1_cons_2a( c2242, 
                            CONS( scrt1_cons_2a( X6, 
                                                 CONS( EMPTYLIST, 
                                                       EMPTYLIST ) ), 
                                  X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( X4, 
                            CONS( PAIR_CAR( i2447 ), X5 ) );
        b2448 = scrt1_cons_2a( X3, 
                               CONS( EMPTYLIST, EMPTYLIST ) );
        i2447 = X2;
        v2446 = X1;
        GOBACK( L3042 );
L3043:
        POPSTACKTRACE( b2448 );
}

DEFTSCP( scexpnd2_letrec_2dmacro_v );
DEFCSTRING( t3053, "SCEXPND2_LETREC-MACRO" );

TSCP  scexpnd2_letrec_2dmacro( e2472 )
        TSCP  e2472;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3053 );
        X4 = scexpand_islist( e2472, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X4 ) )  goto L3105;
        if  ( EQ( TSCPTAG( e2472 ), PAIRTAG ) )  goto L3062;
        scrt1__24__cdr_2derror( e2472 );
L3062:
        X6 = PAIR_CDR( e2472 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3065;
        scrt1__24__car_2derror( X6 );
L3065:
        X5 = PAIR_CAR( X6 );
        if  ( FALSE( scexpand_islist( X5, _TSCP( 4 ), EMPTYLIST ) )
            )  goto L3105;
        X5 = PAIR_CDR( e2472 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L3070;
        scrt1__24__car_2derror( X5 );
L3070:
        X3 = PAIR_CAR( X5 );
        X2 = EMPTYLIST;
        X1 = EMPTYLIST;
L3072:
        X1 = CONS( X1, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L3077;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3081;
        scrt1__24__car_2derror( X3 );
L3081:
        X7 = PAIR_CAR( X3 );
        if  ( FALSE( scexpand_islist( X7, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 8 ), EMPTYLIST ) ) )
            )  goto L3078;
        X6 = FALSEVALUE;
        goto L3079;
L3078:
        X6 = TRUEVALUE;
L3079:
        if  ( TRUE( X6 ) )  goto L3077;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3091;
        scrt1__24__car_2derror( X3 );
L3091:
        X8 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3094;
        scrt1__24__car_2derror( X8 );
L3094:
        X7 = PAIR_CAR( X8 );
        if  ( NOT( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X7 ), SYMBOLTAG ) ) )
            )  goto L3077;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3098;
        scrt1__24__car_2derror( X3 );
L3098:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3101;
        scrt1__24__car_2derror( X9 );
L3101:
        X8 = PAIR_CAR( X9 );
        X7 = sc_cons( X8, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X7 );
        X9 = PAIR_CAR( X3 );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2559, 
                            CONS( scrt1_append_2dtwo( X9, X10 ), 
                                  EMPTYLIST ) );
        X7 = sc_cons( X8, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
        X7 = PAIR_CDR( X3 );
        X1 = PAIR_CAR( X1 );
        X2 = PAIR_CAR( X2 );
        X3 = X7;
        GOBACK( L3072 );
L3105:
        X4 = scexpand_islist( e2472, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X4 ) )  goto L3122;
        if  ( EQ( TSCPTAG( e2472 ), PAIRTAG ) )  goto L3113;
        scrt1__24__cdr_2derror( e2472 );
L3113:
        X6 = PAIR_CDR( e2472 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L3116;
        scrt1__24__car_2derror( X6 );
L3116:
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3122;
        X8 = PAIR_CDR( e2472 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L3120;
        scrt1__24__cdr_2derror( X8 );
L3120:
        X7 = PAIR_CDR( X8 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X5 = scrt1_cons_2a( c2242, CONS( EMPTYLIST, X6 ) );
        POPSTACKTRACE( scrt1_cons_2a( X5, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L3122:
        POPSTACKTRACE( scdebug_error( c2231, 
                                      c2166, 
                                      CONS( e2472, EMPTYLIST ) ) );
L3077:
        if  ( FALSE( X3 ) )  goto L3123;
        POPSTACKTRACE( scdebug_error( c2231, 
                                      c2166, 
                                      CONS( e2472, EMPTYLIST ) ) );
L3123:
        X6 = scrt1_reverse( PAIR_CAR( X1 ) );
        X10 = PAIR_CDR( e2472 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L3127;
        scrt1__24__cdr_2derror( X10 );
L3127:
        X9 = PAIR_CDR( X10 );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( c2568, 
                            CONS( scrt1_append_2dtwo( X9, X10 ), 
                                  EMPTYLIST ) );
        X7 = scrt1_cons_2a( X8, CONS( EMPTYLIST, EMPTYLIST ) );
        X5 = CONS( scrt1_append_2dtwo( X6, X7 ), EMPTYLIST );
        X4 = scrt1_cons_2a( c2242, 
                            CONS( scrt1_reverse( PAIR_CAR( X2 ) ), 
                                  X5 ) );
        X6 = PAIR_CAR( X2 );
        X7 = X6;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L3131:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L3132;
        X5 = X8;
        goto L3140;
L3132:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3135;
        scrt1__24__car_2derror( X7 );
L3135:
        X12 = PAIR_CAR( X7 );
        X11 = _TSCP( 0 );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L3139;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L3131 );
L3139:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L3144;
        scdebug_error( c2613, 
                       c2614, CONS( X9, EMPTYLIST ) );
L3144:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L3131 );
L3140:
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( scrt1_append_2dtwo( X5, X6 ), 
                                            EMPTYLIST ) ) );
}

TSCP  scexpnd2_l2635( x2636, e2637 )
        TSCP  x2636, e2637;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd2_l2635 [inside TOP-LEVEL]" );
        X2 = scexpnd2_letrec_2dmacro( x2636 );
        X1 = e2637;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2637, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( scexpnd2_do_2dmacro_v );
DEFCSTRING( t3147, "SCEXPND2_DO-MACRO" );
EXTERNTSCPP( scrt1_caaddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caaddr_v );
EXTERNTSCPP( scrt1_cdaddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdaddr_v );

TSCP  scexpnd2_do_2dmacro( e2640 )
        TSCP  e2640;
{
        TSCP  X18, 
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

        PUSHSTACKTRACE( t3147 );
        X1 = scexpand_islist( e2640, _TSCP( 12 ), EMPTYLIST );
        if  ( FALSE( X1 ) )  goto L3203;
        if  ( EQ( TSCPTAG( e2640 ), PAIRTAG ) )  goto L3154;
        scrt1__24__cdr_2derror( e2640 );
L3154:
        X4 = PAIR_CDR( e2640 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3157;
        scrt1__24__car_2derror( X4 );
L3157:
        X3 = PAIR_CAR( X4 );
        X2 = scexpand_islist( X3, _TSCP( 0 ), EMPTYLIST );
        if  ( FALSE( X2 ) )  goto L3203;
        X3 = scrt1_caddr( e2640 );
        if  ( FALSE( scexpand_islist( X3, _TSCP( 4 ), EMPTYLIST ) )
            )  goto L3203;
        X4 = PAIR_CDR( e2640 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L3167;
        scrt1__24__car_2derror( X4 );
L3167:
        X3 = PAIR_CAR( X4 );
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
        X7 = sc_d_2dsymbol_ab4b4447( c2735 );
        X8 = scrt1_caaddr( e2640 );
        X10 = scrt1_cdaddr( e2640 );
        if  ( FALSE( X10 ) )  goto L3170;
        X9 = X10;
        goto L3171;
L3170:
        X9 = c2738;
L3171:
        X10 = scrt1_cdddr( e2640 );
        X6 = CONS( X6, EMPTYLIST );
        X5 = CONS( X5, EMPTYLIST );
        X4 = CONS( X4, EMPTYLIST );
        X11 = scrt1_reverse( X3 );
        X12 = X11;
L3175:
        if  ( EQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L3176;
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L3180;
        scrt1__24__car_2derror( X12 );
L3180:
        X13 = PAIR_CAR( X12 );
        if  ( FALSE( scexpand_islist( X13, 
                                      _TSCP( 8 ), 
                                      CONS( _TSCP( 12 ), EMPTYLIST ) ) )
            )  goto L3183;
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L3186;
        scrt1__24__car_2derror( X13 );
L3186:
        X14 = PAIR_CAR( X13 );
        X16 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L3191;
        scrt1__24__car_2derror( X16 );
L3191:
        X15 = PAIR_CAR( X16 );
        X17 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L3196;
        scrt1__24__cdr_2derror( X17 );
L3196:
        if  ( FALSE( PAIR_CDR( X17 ) ) )  goto L3198;
        X16 = scrt1_caddr( X13 );
        goto L3199;
L3198:
        X16 = X14;
L3199:
        X17 = sc_cons( X14, PAIR_CAR( X4 ) );
        SETGEN( PAIR_CAR( X4 ), X17 );
        X17 = sc_cons( X16, PAIR_CAR( X6 ) );
        SETGEN( PAIR_CAR( X6 ), X17 );
        X17 = sc_cons( X15, PAIR_CAR( X5 ) );
        SETGEN( PAIR_CAR( X5 ), X17 );
        goto L3184;
L3183:
        scdebug_error( c2659, 
                       c2693, CONS( X13, EMPTYLIST ) );
L3184:
        X12 = PAIR_CDR( X12 );
        GOBACK( L3175 );
L3176:
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X11 = CONS( scrt1_cons_2a( X7, 
                                   CONS( scrt1_append_2dtwo( PAIR_CAR( X5 ), 
                                                             X12 ), 
                                         EMPTYLIST ) ), 
                    X11 );
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X18 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X17 = scrt1_cons_2a( X7, 
                             CONS( scrt1_append_2dtwo( PAIR_CAR( X6 ), 
                                                       X18 ), 
                                   EMPTYLIST ) );
        X16 = scrt1_cons_2a( X17, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
        X15 = CONS( scrt1_cons_2a( c2568, 
                                   CONS( scrt1_append_2dtwo( X10, X16 ), 
                                         EMPTYLIST ) ), 
                    X15 );
        X16 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X15 = CONS( scrt1_cons_2a( c2568, 
                                   CONS( scrt1_append_2dtwo( X9, X16 ), 
                                         EMPTYLIST ) ), 
                    X15 );
        X14 = CONS( scrt1_cons_2a( c2724, CONS( X8, X15 ) ), 
                    X14 );
        X12 = scrt1_cons_2a( X7, 
                             CONS( scrt1_cons_2a( c2242, 
                                                  CONS( PAIR_CAR( X4 ), 
                                                        X14 ) ), 
                                   X13 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2231, 
                                      CONS( scrt1_cons_2a( X12, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X11 ) ) );
L3203:
        POPSTACKTRACE( scdebug_error( c2659, 
                                      c2166, 
                                      CONS( c2660, EMPTYLIST ) ) );
}

TSCP  scexpnd2_l2739( x2740, e2741 )
        TSCP  x2740, e2741;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "scexpnd2_l2739 [inside TOP-LEVEL]" );
        X2 = scexpnd2_do_2dmacro( x2740 );
        X1 = e2741;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e2741, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

TSCP  scexpnd2_l2743( x2744, e2745 )
        TSCP  x2744, e2745;
{
        TSCP  X1;

        PUSHSTACKTRACE( "scexpnd2_l2743 [inside TOP-LEVEL]" );
        X1 = e2745;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2746, 
                                                    e2745, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

TSCP  scexpnd2_l2748( x2749, e2750 )
        TSCP  x2749, e2750;
{
        TSCP  X1;

        PUSHSTACKTRACE( "scexpnd2_l2748 [inside TOP-LEVEL]" );
        X1 = e2750;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2751, 
                                                    e2750, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

void scdebug__init();
void scrt2__init();
void scrt6__init();
void scrt1__init();
void scexpand__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt2__init();
        scrt6__init();
        scrt1__init();
        scexpand__init();
        MAXDISPLAY( 0 );
}

void  scexpnd2__init()
{
        TSCP  X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(scexpnd2 SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2841, 
                       ADR( scexpnd2_let_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd2_let_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2320, EMPTYLIST );
        scexpand_install_2dexpander( c2165, X1 );
        INITIALIZEVAR( t2962, 
                       ADR( scexpnd2_let_2a_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd2_let_2a_2dmacro, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2442, EMPTYLIST );
        scexpand_install_2dexpander( c2359, X1 );
        INITIALIZEVAR( t3041, 
                       ADR( scexpnd2_let_2a_2dresult_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      scexpnd2_let_2a_2dresult, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3053, 
                       ADR( scexpnd2_letrec_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd2_letrec_2dmacro, 
                                      EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2635, EMPTYLIST );
        scexpand_install_2dexpander( c2231, X1 );
        INITIALIZEVAR( t3147, 
                       ADR( scexpnd2_do_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      scexpnd2_do_2dmacro, EMPTYLIST ) );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2739, EMPTYLIST );
        scexpand_install_2dexpander( c2659, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2743, EMPTYLIST );
        scexpand_install_2dexpander( c2742, X1 );
        X1 = MAKEPROCEDURE( 2, 0, scexpnd2_l2748, EMPTYLIST );
        scexpand_install_2dexpander( c2747, X1 );
        return;
}
