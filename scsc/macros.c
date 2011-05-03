
/* SCHEME->C */

#include <objects.h>

void macros__init();
DEFSTATICTSCP( islist_v );
DEFSTATICTSCP( expand_2derror_v );
DEFSTATICTSCP( quasiquotation_v );
DEFSTATICTSCP( make_2dalpha_v );
DEFSTATICTSCP( get_v );
DEFSTATICTSCP( current_2ddefine_2dname_v );
DEFSTATICTSCP( report_2derror_v );
DEFSTATICTSCP( do_2ddefine_2dmacro_v );
DEFSTATICTSCP( do_2ddefine_2dconstant_v );
DEFSTATICTSCP( put_v );
DEFSTATICTSCP( _xpander_2a_9e90dc74_v );
DEFSTATICTSCP( _xpander_2a_ecf97896_v );
DEFSTATICTSCP( c3676 );
DEFSTATICTSCP( c3652 );
DEFSTATICTSCP( c3628 );
DEFSTATICTSCP( c3617 );
DEFSTATICTSCP( c3603 );
DEFSTATICTSCP( c3602 );
DEFSTATICTSCP( c3591 );
DEFSTATICTSCP( c3587 );
DEFSTATICTSCP( c3562 );
DEFSTATICTSCP( c3550 );
DEFSTATICTSCP( c3546 );
DEFCSTRING( t3922, "Duplicately defined symbol:" );
DEFSTATICTSCP( c3505 );
DEFCSTRING( t3923, "Argument must be a symbol:" );
DEFSTATICTSCP( c3504 );
DEFCSTRING( t3924, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c3380 );
DEFSTATICTSCP( c3379 );
DEFSTATICTSCP( c3278 );
DEFCSTRING( t3925, "DOLOOP" );
DEFSTATICTSCP( c3275 );
DEFSTATICTSCP( c3202 );
DEFSTATICTSCP( c3146 );
DEFSTATICTSCP( c3130 );
DEFSTATICTSCP( c2910 );
DEFCSTRING( t3926, "x" );
DEFSTATICTSCP( c2853 );
DEFSTATICTSCP( c2780 );
DEFCSTRING( t3927, "$_~s" );
DEFSTATICTSCP( c2763 );
DEFSTATICTSCP( c2655 );
DEFSTATICTSCP( c2544 );
DEFSTATICTSCP( c2327 );
DEFSTATICTSCP( c2326 );
DEFSTATICTSCP( c2325 );
DEFSTATICTSCP( c2314 );
DEFSTATICTSCP( c2272 );
DEFSTATICTSCP( c2242 );
DEFSTATICTSCP( c2231 );
DEFSTATICTSCP( c2210 );
DEFSTATICTSCP( c2209 );
DEFSTATICTSCP( c2133 );
DEFSTATICTSCP( c2109 );
DEFSTATICTSCP( c2104 );
DEFCSTRING( t3928, "TEST" );
DEFSTATICTSCP( c2103 );
DEFSTATICTSCP( c2098 );
DEFSTATICTSCP( c2091 );
DEFSTATICTSCP( c2086 );
DEFSTATICTSCP( c2081 );
DEFSTATICTSCP( c2080 );
DEFSTATICTSCP( c2061 );
DEFSTATICTSCP( c2035 );
DEFSTATICTSCP( c2012 );

static void  init_constants()
{
        islist_v = STRINGTOSYMBOL( CSTRING_TSCP( "ISLIST" ) );
        CONSTANTEXP( ADR( islist_v ) );
        expand_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND-ERROR" ) );
        CONSTANTEXP( ADR( expand_2derror_v ) );
        quasiquotation_v = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTATION" ) );
        CONSTANTEXP( ADR( quasiquotation_v ) );
        make_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "MAKE-ALPHA" ) );
        CONSTANTEXP( ADR( make_2dalpha_v ) );
        get_v = STRINGTOSYMBOL( CSTRING_TSCP( "GET" ) );
        CONSTANTEXP( ADR( get_v ) );
        current_2ddefine_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-D\
EFINE-NAME" ) );
        CONSTANTEXP( ADR( current_2ddefine_2dname_v ) );
        report_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "REPORT-ERROR" ) );
        CONSTANTEXP( ADR( report_2derror_v ) );
        do_2ddefine_2dmacro_v = STRINGTOSYMBOL( CSTRING_TSCP( "DO-DEFINE-MAC\
RO" ) );
        CONSTANTEXP( ADR( do_2ddefine_2dmacro_v ) );
        do_2ddefine_2dconstant_v = STRINGTOSYMBOL( CSTRING_TSCP( "DO-DEFINE-\
CONSTANT" ) );
        CONSTANTEXP( ADR( do_2ddefine_2dconstant_v ) );
        put_v = STRINGTOSYMBOL( CSTRING_TSCP( "PUT" ) );
        CONSTANTEXP( ADR( put_v ) );
        _xpander_2a_9e90dc74_v = STRINGTOSYMBOL( CSTRING_TSCP( "*SC-IDENTIFI\
ER-EXPANDER*" ) );
        CONSTANTEXP( ADR( _xpander_2a_9e90dc74_v ) );
        _xpander_2a_ecf97896_v = STRINGTOSYMBOL( CSTRING_TSCP( "*SC-APPLICAT\
ION-EXPANDER*" ) );
        CONSTANTEXP( ADR( _xpander_2a_ecf97896_v ) );
        c3676 = STRINGTOSYMBOL( CSTRING_TSCP( "UNLESS" ) );
        CONSTANTEXP( ADR( c3676 ) );
        c3652 = STRINGTOSYMBOL( CSTRING_TSCP( "WHEN" ) );
        CONSTANTEXP( ADR( c3652 ) );
        c3628 = STRINGTOSYMBOL( CSTRING_TSCP( "PUT" ) );
        CONSTANTEXP( ADR( c3628 ) );
        c3617 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST" ) );
        CONSTANTEXP( ADR( c3617 ) );
        c3603 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-CONSTANT" ) );
        CONSTANTEXP( ADR( c3603 ) );
        c3602 = STRINGTOSYMBOL( CSTRING_TSCP( "*EXPANDER*" ) );
        CONSTANTEXP( ADR( c3602 ) );
        c3591 = STRINGTOSYMBOL( CSTRING_TSCP( "PUTPROP" ) );
        CONSTANTEXP( ADR( c3591 ) );
        c3587 = STRINGTOSYMBOL( CSTRING_TSCP( "DEFINE-MACRO" ) );
        CONSTANTEXP( ADR( c3587 ) );
        c3562 = STRINGTOSYMBOL( CSTRING_TSCP( "LOAD" ) );
        CONSTANTEXP( ADR( c3562 ) );
        c3550 = STRINGTOSYMBOL( CSTRING_TSCP( "COMPILE" ) );
        CONSTANTEXP( ADR( c3550 ) );
        c3546 = STRINGTOSYMBOL( CSTRING_TSCP( "EVAL-WHEN" ) );
        CONSTANTEXP( ADR( c3546 ) );
        c3505 = CSTRING_TSCP( t3922 );
        CONSTANTEXP( ADR( c3505 ) );
        c3504 = CSTRING_TSCP( t3923 );
        CONSTANTEXP( ADR( c3504 ) );
        c3380 = CSTRING_TSCP( t3924 );
        CONSTANTEXP( ADR( c3380 ) );
        c3379 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c3379 ) );
        c3278 = EMPTYLIST;
        c3278 = CONS( FALSEVALUE, c3278 );
        CONSTANTEXP( ADR( c3278 ) );
        c3275 = CSTRING_TSCP( t3925 );
        CONSTANTEXP( ADR( c3275 ) );
        c3202 = STRINGTOSYMBOL( CSTRING_TSCP( "DO" ) );
        CONSTANTEXP( ADR( c3202 ) );
        c3146 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c3146 ) );
        c3130 = EMPTYLIST;
        c3130 = CONS( FALSEVALUE, c3130 );
        c3130 = CONS( TRUEVALUE, c3130 );
        CONSTANTEXP( ADR( c3130 ) );
        c2910 = STRINGTOSYMBOL( CSTRING_TSCP( "LET*" ) );
        CONSTANTEXP( ADR( c2910 ) );
        c2853 = CSTRING_TSCP( t3926 );
        CONSTANTEXP( ADR( c2853 ) );
        c2780 = STRINGTOSYMBOL( CSTRING_TSCP( "LETREC" ) );
        CONSTANTEXP( ADR( c2780 ) );
        c2763 = CSTRING_TSCP( t3927 );
        CONSTANTEXP( ADR( c2763 ) );
        c2655 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        CONSTANTEXP( ADR( c2655 ) );
        c2544 = STRINGTOSYMBOL( CSTRING_TSCP( "NOT" ) );
        CONSTANTEXP( ADR( c2544 ) );
        c2327 = STRINGTOSYMBOL( CSTRING_TSCP( "AND" ) );
        CONSTANTEXP( ADR( c2327 ) );
        c2326 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        CONSTANTEXP( ADR( c2326 ) );
        c2325 = STRINGTOSYMBOL( CSTRING_TSCP( "THUNK" ) );
        CONSTANTEXP( ADR( c2325 ) );
        c2314 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        CONSTANTEXP( ADR( c2314 ) );
        c2272 = STRINGTOSYMBOL( CSTRING_TSCP( "K" ) );
        CONSTANTEXP( ADR( c2272 ) );
        c2242 = STRINGTOSYMBOL( CSTRING_TSCP( "EQ?" ) );
        CONSTANTEXP( ADR( c2242 ) );
        c2231 = STRINGTOSYMBOL( CSTRING_TSCP( "EQV?" ) );
        CONSTANTEXP( ADR( c2231 ) );
        c2210 = STRINGTOSYMBOL( CSTRING_TSCP( "QUOTE" ) );
        CONSTANTEXP( ADR( c2210 ) );
        c2209 = STRINGTOSYMBOL( CSTRING_TSCP( "MEMV" ) );
        CONSTANTEXP( ADR( c2209 ) );
        c2133 = STRINGTOSYMBOL( CSTRING_TSCP( "CASE" ) );
        CONSTANTEXP( ADR( c2133 ) );
        c2109 = STRINGTOSYMBOL( CSTRING_TSCP( "COND-CLAUSE" ) );
        CONSTANTEXP( ADR( c2109 ) );
        c2104 = STRINGTOSYMBOL( CSTRING_TSCP( "OR" ) );
        CONSTANTEXP( ADR( c2104 ) );
        c2103 = CSTRING_TSCP( t3928 );
        CONSTANTEXP( ADR( c2103 ) );
        c2098 = STRINGTOSYMBOL( CSTRING_TSCP( "LET" ) );
        CONSTANTEXP( ADR( c2098 ) );
        c2091 = STRINGTOSYMBOL( CSTRING_TSCP( "COND" ) );
        CONSTANTEXP( ADR( c2091 ) );
        c2086 = STRINGTOSYMBOL( CSTRING_TSCP( "BEGIN" ) );
        CONSTANTEXP( ADR( c2086 ) );
        c2081 = STRINGTOSYMBOL( CSTRING_TSCP( "IF" ) );
        CONSTANTEXP( ADR( c2081 ) );
        c2080 = STRINGTOSYMBOL( CSTRING_TSCP( "ELSE" ) );
        CONSTANTEXP( ADR( c2080 ) );
        c2061 = STRINGTOSYMBOL( CSTRING_TSCP( "=>" ) );
        CONSTANTEXP( ADR( c2061 ) );
        c2035 = EMPTYLIST;
        c2035 = CONS( c2080, c2035 );
        CONSTANTEXP( ADR( c2035 ) );
        c2012 = STRINGTOSYMBOL( CSTRING_TSCP( "QUASIQUOTE" ) );
        CONSTANTEXP( ADR( c2012 ) );
}

DEFTSCP( macros_old_2dmacro_v );
DEFCSTRING( t3929, "OLD-MACRO" );

TSCP  macros_l2003( e2004, e2005, c3931 )
        TSCP  e2004, e2005, c3931;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "macros_l2003 [inside OLD-MACRO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c3931, 0 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( e2004, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X3 = e2005;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          e2005, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  macros_old_2dmacro( e2002 )
        TSCP  e2002;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t3929 );
        DISPLAY( 0 ) = e2002;
        SDVAL = MAKEPROCEDURE( 2, 
                               0, 
                               macros_l2003, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( macros_quasiquote_2dmacro_v );
DEFCSTRING( t3933, "QUASIQUOTE-MACRO" );

TSCP  macros_quasiquote_2dmacro( e2008 )
        TSCP  e2008;
{
        TSCP  X1;

        PUSHSTACKTRACE( t3933 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e2008, 
                                                  _TSCP( 8 ), 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L3935;
        X1 = SYMBOL_VALUE( quasiquotation_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( _TSCP( 4 ), 
                                                    e2008, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L3935:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2012, 
                                                    e2008, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_cond_2dmacro_v );
DEFCSTRING( t3937, "COND-MACRO" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( sc_d_2dsymbol_ab4b4447, XAL1( TSCP ) );
EXTERNTSCP( sc_d_2dsymbol_ab4b4447_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );

TSCP  macros_cond_2dmacro( e2017 )
        TSCP  e2017;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3937 );
        if  ( EQ( TSCPTAG( e2017 ), PAIRTAG ) )  goto L3940;
        scrt1__24__cdr_2derror( e2017 );
L3940:
        X3 = PAIR_CDR( e2017 );
        if  ( FALSE( X3 ) )  goto L3943;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3946;
        scrt1__24__car_2derror( X3 );
L3946:
        X2 = PAIR_CAR( X3 );
        goto L3944;
L3943:
        X2 = X3;
L3944:
        if  ( FALSE( X2 ) )  goto L3949;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L3952;
        scrt1__24__cdr_2derror( X3 );
L3952:
        X1 = PAIR_CDR( X3 );
        goto L3950;
L3949:
        X1 = X2;
L3950:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L3955;
        X4 = BOOLEAN( NEQ( TSCPTAG( X2 ), PAIRTAG ) );
        if  ( TRUE( X4 ) )  goto L3961;
        if  ( TRUE( scrt1_equal_3f( X2, c2035 ) ) )  goto L3961;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3967;
        scrt1__24__cdr_2derror( X2 );
L3967:
        X5 = PAIR_CDR( X2 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L3964;
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2091, 
                                  CONS( scrt1_append_2dtwo( X1, X6 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        POPSTACKTRACE( scrt1_cons_2a( c2104, 
                                      CONS( PAIR_CAR( X2 ), X5 ) ) );
L3964:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L3971;
        scrt1__24__cdr_2derror( X2 );
L3971:
        X7 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L3974;
        scrt1__24__car_2derror( X7 );
L3974:
        X6 = PAIR_CAR( X7 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2061 ) ) );
        if  ( FALSE( X5 ) )  goto L3990;
        X6 = scrt1_length( X2 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L3982;
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( _TSCP( 12 ) ) ) )  goto L3986;
        goto L3990;
L3982:
        if  ( TRUE( scrt2__3d_2dtwo( X6, _TSCP( 12 ) ) ) )  goto L3986;
        goto L3990;
L3955:
        POPSTACKTRACE( FALSEVALUE );
L3961:
        X3 = SYMBOL_VALUE( expand_2derror_v );
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( c2109, 
                                                    e2017, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L3986:
        X3 = sc_d_2dsymbol_ab4b4447( c2103 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2091, 
                                  CONS( scrt1_append_2dtwo( X1, X6 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        X6 = scrt1_caddr( X2 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( X6, CONS( X3, X7 ) ), 
                   X5 );
        X4 = CONS( scrt1_cons_2a( c2081, CONS( X3, X5 ) ), 
                   X4 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = scrt1_cons_2a( X3, 
                            CONS( PAIR_CAR( X2 ), X6 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X5, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X4 ) ) );
L3990:
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2080 ) ) )  goto L3993;
        X3 = PAIR_CDR( X2 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2086, 
                                      CONS( scrt1_append_2dtwo( X3, X4 ), 
                                            EMPTYLIST ) ) );
L3993:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2091, 
                                  CONS( scrt1_append_2dtwo( X1, X4 ), 
                                        EMPTYLIST ) ), 
                   X3 );
        X4 = PAIR_CDR( X2 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2086, 
                                  CONS( scrt1_append_2dtwo( X4, X5 ), 
                                        EMPTYLIST ) ), 
                   X3 );
        POPSTACKTRACE( scrt1_cons_2a( c2081, 
                                      CONS( PAIR_CAR( X2 ), X3 ) ) );
}

DEFTSCP( macros_case_2dmacro_v );
DEFCSTRING( t3999, "CASE-MACRO" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_caaar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caaar_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  macros_case_2dmacro( e2132 )
        TSCP  e2132;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t3999 );
        X5 = SYMBOL_VALUE( islist_v );
        X5 = UNKNOWNCALL( X5, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X5 ) )( e2132, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X5 ) ) )
            )  goto L4001;
        if  ( EQ( TSCPTAG( e2132 ), PAIRTAG ) )  goto L4005;
        scrt1__24__cdr_2derror( e2132 );
L4005:
        X5 = PAIR_CDR( e2132 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4008;
        scrt1__24__car_2derror( X5 );
L4008:
        X2 = PAIR_CAR( X5 );
        X5 = SYMBOL_VALUE( make_2dalpha_v );
        X5 = UNKNOWNCALL( X5, 1 );
        X3 = VIA( PROCEDURE_CODE( X5 ) )( c2272, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X5 = PAIR_CDR( e2132 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4012;
        scrt1__24__cdr_2derror( X5 );
L4012:
        X4 = PAIR_CDR( X5 );
        X1 = EMPTYLIST;
L4014:
        X1 = CONS( X1, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L4019;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4023;
        scrt1__24__car_2derror( X4 );
L4023:
        X7 = PAIR_CAR( X4 );
        X6 = SYMBOL_VALUE( islist_v );
        X6 = UNKNOWNCALL( X6, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X6 ) ) )
            )  goto L4019;
        X7 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4030;
        scrt1__24__car_2derror( X7 );
L4030:
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2080 ) ) )  goto L4026;
        X7 = PAIR_CAR( X4 );
        X6 = sc_cons( X7, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X6 );
        goto L4051;
L4026:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4035;
        scrt1__24__car_2derror( X9 );
L4035:
        X8 = PAIR_CAR( X9 );
        X7 = scrt1_length( X8 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4038;
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( _TSCP( 4 ) ) ) );
        goto L4039;
L4038:
        X6 = scrt2__3d_2dtwo( X7, _TSCP( 4 ) );
L4039:
        if  ( FALSE( X6 ) )  goto L4050;
        X7 = scrt1_caaar( X4 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), DOUBLEFLOATTAG ) )
            )  goto L4050;
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( scrt1_cons_2a( c2210, 
                                   CONS( scrt1_caaar( X4 ), X11 ) ), 
                    X10 );
        X9 = scrt1_cons_2a( c2242, CONS( X3, X10 ) );
        X11 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4048;
        scrt1__24__cdr_2derror( X11 );
L4048:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X7 = sc_cons( X8, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
        goto L4051;
L4050:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4054;
        scrt1__24__car_2derror( X9 );
L4054:
        X8 = PAIR_CAR( X9 );
        X7 = scrt1_length( X8 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L4058;
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L4062;
        goto L4063;
L4058:
        if  ( TRUE( scrt2__3d_2dtwo( X7, _TSCP( 4 ) ) ) )  goto L4062;
L4063:
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4068;
        scrt1__24__car_2derror( X12 );
L4068:
        X10 = CONS( scrt1_cons_2a( c2210, 
                                   CONS( PAIR_CAR( X12 ), X11 ) ), 
                    X10 );
        X9 = scrt1_cons_2a( c2209, CONS( X3, X10 ) );
        X11 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4072;
        scrt1__24__cdr_2derror( X11 );
L4072:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X7 = sc_cons( X8, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
        goto L4051;
L4062:
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( scrt1_cons_2a( c2210, 
                                   CONS( scrt1_caaar( X4 ), X11 ) ), 
                    X10 );
        X9 = scrt1_cons_2a( c2231, CONS( X3, X10 ) );
        X11 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4076;
        scrt1__24__cdr_2derror( X11 );
L4076:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X7 = sc_cons( X8, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X7 );
L4051:
        X6 = PAIR_CDR( X4 );
        X1 = PAIR_CAR( X1 );
        X4 = X6;
        GOBACK( L4014 );
L4001:
        X5 = SYMBOL_VALUE( expand_2derror_v );
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( c2133, 
                                                    e2132, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L4019:
        if  ( FALSE( X4 ) )  goto L4079;
        X5 = SYMBOL_VALUE( expand_2derror_v );
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( c2133, 
                                                    e2132, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L4079:
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_reverse( PAIR_CAR( X1 ) );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_cons_2a( c2091, 
                                  CONS( scrt1_append_2dtwo( X6, X7 ), 
                                        EMPTYLIST ) ), 
                   X5 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X3, CONS( X2, X7 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X6, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X5 ) ) );
}

DEFTSCP( macros_and_2dmacro_v );
DEFCSTRING( t4081, "AND-MACRO" );
EXTERNTSCPP( macros_boolean_2dconstant, XAL1( TSCP ) );
EXTERNTSCP( macros_boolean_2dconstant_v );

TSCP  macros_and_2dmacro( e2286 )
        TSCP  e2286;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4081 );
        if  ( EQ( TSCPTAG( e2286 ), PAIRTAG ) )  goto L4084;
        scrt1__24__cdr_2derror( e2286 );
L4084:
        if  ( FALSE( PAIR_CDR( e2286 ) ) )  goto L4086;
        X3 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4090;
        scrt1__24__car_2derror( X3 );
L4090:
        X2 = PAIR_CAR( X3 );
        X1 = macros_boolean_2dconstant( X2 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4093;
        if  ( FALSE( PAIR_CAR( X1 ) ) )  goto L4096;
        X2 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4100;
        scrt1__24__cdr_2derror( X2 );
L4100:
        if  ( FALSE( PAIR_CDR( X2 ) ) )  goto L4102;
        X4 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4106;
        scrt1__24__cdr_2derror( X4 );
L4106:
        X3 = PAIR_CDR( X4 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2327, 
                                      CONS( scrt1_append_2dtwo( X3, X4 ), 
                                            EMPTYLIST ) ) );
L4102:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4096:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4093:
        X3 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4114;
        scrt1__24__cdr_2derror( X3 );
L4114:
        X2 = PAIR_CDR( X3 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4110;
        X2 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4118;
        scrt1__24__car_2derror( X2 );
L4118:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L4110:
        X5 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4122;
        scrt1__24__cdr_2derror( X5 );
L4122:
        X4 = PAIR_CDR( X5 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2327, 
                            CONS( scrt1_append_2dtwo( X4, X5 ), 
                                  EMPTYLIST ) );
        X2 = macros_boolean_2dconstant( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4125;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2314, X4 );
        X4 = CONS( PAIR_CAR( X2 ), X4 );
        X3 = CONS( scrt1_cons_2a( c2081, CONS( c2314, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4130;
        scrt1__24__car_2derror( X6 );
L4130:
        X4 = scrt1_cons_2a( c2314, 
                            CONS( PAIR_CAR( X6 ), X5 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X3 ) ) );
L4125:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( c2314, X4 );
        X4 = CONS( scrt1_cons_2a( c2325, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X4 );
        X3 = CONS( scrt1_cons_2a( c2081, CONS( c2314, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4134;
        scrt1__24__car_2derror( X6 );
L4134:
        X4 = scrt1_cons_2a( c2314, 
                            CONS( PAIR_CAR( X6 ), X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = PAIR_CDR( e2286 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4138;
        scrt1__24__cdr_2derror( X9 );
L4138:
        X8 = PAIR_CDR( X9 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( c2327, 
                                  CONS( scrt1_append_2dtwo( X8, X9 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( scrt1_cons_2a( c2325, 
                                                                                CONS( scrt1_cons_2a( c2326, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X7 ) ), 
                                                                                      X6 ) ), 
                                                                 X5 ) ), 
                                            X3 ) ) );
L4086:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( macros_or_2dmacro_v );
DEFCSTRING( t4140, "OR-MACRO" );

TSCP  macros_or_2dmacro( e2417 )
        TSCP  e2417;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4140 );
        if  ( EQ( TSCPTAG( e2417 ), PAIRTAG ) )  goto L4143;
        scrt1__24__cdr_2derror( e2417 );
L4143:
        if  ( FALSE( PAIR_CDR( e2417 ) ) )  goto L4145;
        X3 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4149;
        scrt1__24__car_2derror( X3 );
L4149:
        X2 = PAIR_CAR( X3 );
        X1 = macros_boolean_2dconstant( X2 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4152;
        if  ( FALSE( PAIR_CAR( X1 ) ) )  goto L4155;
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4155:
        X2 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4160;
        scrt1__24__cdr_2derror( X2 );
L4160:
        if  ( FALSE( PAIR_CDR( X2 ) ) )  goto L4162;
        X4 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4166;
        scrt1__24__cdr_2derror( X4 );
L4166:
        X3 = PAIR_CDR( X4 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( c2104, 
                                      CONS( scrt1_append_2dtwo( X3, X4 ), 
                                            EMPTYLIST ) ) );
L4162:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4152:
        X3 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4173;
        scrt1__24__cdr_2derror( X3 );
L4173:
        X2 = PAIR_CDR( X3 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L4169;
        X2 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4177;
        scrt1__24__car_2derror( X2 );
L4177:
        POPSTACKTRACE( PAIR_CAR( X2 ) );
L4169:
        X5 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4181;
        scrt1__24__cdr_2derror( X5 );
L4181:
        X4 = PAIR_CDR( X5 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( c2104, 
                            CONS( scrt1_append_2dtwo( X4, X5 ), 
                                  EMPTYLIST ) );
        X2 = macros_boolean_2dconstant( X3 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4184;
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( PAIR_CAR( X2 ), X4 );
        X4 = CONS( c2314, X4 );
        X3 = CONS( scrt1_cons_2a( c2081, CONS( c2314, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4189;
        scrt1__24__car_2derror( X6 );
L4189:
        X4 = scrt1_cons_2a( c2314, 
                            CONS( PAIR_CAR( X6 ), X5 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X3 ) ) );
L4184:
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( scrt1_cons_2a( c2325, 
                                  CONS( EMPTYLIST, EMPTYLIST ) ), 
                   X4 );
        X4 = CONS( c2314, X4 );
        X3 = CONS( scrt1_cons_2a( c2081, CONS( c2314, X4 ) ), 
                   X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4193;
        scrt1__24__car_2derror( X6 );
L4193:
        X4 = scrt1_cons_2a( c2314, 
                            CONS( PAIR_CAR( X6 ), X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = PAIR_CDR( e2417 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4197;
        scrt1__24__cdr_2derror( X9 );
L4197:
        X8 = PAIR_CDR( X9 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_cons_2a( c2104, 
                                  CONS( scrt1_append_2dtwo( X8, X9 ), 
                                        EMPTYLIST ) ), 
                   X7 );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_cons_2a( X4, 
                                                           CONS( scrt1_cons_2a( c2325, 
                                                                                CONS( scrt1_cons_2a( c2326, 
                                                                                                     CONS( EMPTYLIST, 
                                                                                                           X7 ) ), 
                                                                                      X6 ) ), 
                                                                 X5 ) ), 
                                            X3 ) ) );
L4145:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( macros_not_2dmacro_v );
DEFCSTRING( t4199, "NOT-MACRO" );

TSCP  macros_not_2dmacro( e2543 )
        TSCP  e2543;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4199 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e2543, 
                                                  _TSCP( 8 ), 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4201;
        if  ( EQ( TSCPTAG( e2543 ), PAIRTAG ) )  goto L4204;
        scrt1__24__cdr_2derror( e2543 );
L4204:
        X3 = PAIR_CDR( e2543 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4207;
        scrt1__24__car_2derror( X3 );
L4207:
        X2 = PAIR_CAR( X3 );
        X1 = macros_boolean_2dconstant( X2 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4210;
        if  ( TRUE( PAIR_CAR( X1 ) ) )  goto L4213;
        POPSTACKTRACE( TRUEVALUE );
L4213:
        POPSTACKTRACE( FALSEVALUE );
L4210:
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X2 = CONS( TRUEVALUE, X2 );
        X2 = CONS( FALSEVALUE, X2 );
        X3 = PAIR_CDR( e2543 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4217;
        scrt1__24__car_2derror( X3 );
L4217:
        POPSTACKTRACE( scrt1_cons_2a( c2081, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L4201:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2544, 
                                                    e2543, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_boolean_2dconstant_v );
DEFCSTRING( t4219, "BOOLEAN-CONSTANT" );
EXTERNTSCPP( scrt1_boolean_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_boolean_3f_v );

TSCP  macros_boolean_2dconstant( e2575 )
        TSCP  e2575;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4219 );
L4220:
        if  ( NEQ( TSCPTAG( e2575 ), FIXNUMTAG ) )  goto L4221;
        X1 = TRUEVALUE;
        goto L4222;
L4221:
        X1 = BOOLEAN( AND( EQ( TSCPTAG( e2575 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( e2575 ), 
                               DOUBLEFLOATTAG ) ) );
L4222:
        if  ( TRUE( X1 ) )  goto L4227;
        X2 = scrt1_boolean_3f( e2575 );
        if  ( TRUE( X2 ) )  goto L4227;
        if  ( AND( EQ( TSCPTAG( e2575 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e2575 ), STRINGTAG ) )
            )  goto L4227;
        if  ( NEQ( TSCPTAG( e2575 ), PAIRTAG ) )  goto L4251;
        X3 = PAIR_CAR( e2575 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2210 ) ) )  goto L4251;
        X3 = PAIR_CDR( e2575 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4246;
        scrt1__24__car_2derror( X3 );
L4246:
        if  ( TRUE( PAIR_CAR( X3 ) ) )  goto L4227;
L4251:
        if  ( NOT( AND( EQ( TSCPTAG( e2575 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e2575 ), SYMBOLTAG ) ) )
            )  goto L4252;
        X2 = SYMBOL_VALUE( get_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e2575, 
                                          c2655, 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4255;
        e2575 = PAIR_CAR( X1 );
        GOBACK( L4220 );
L4255:
        POPSTACKTRACE( FALSEVALUE );
L4252:
        if  ( NEQ( TSCPTAG( e2575 ), PAIRTAG ) )  goto L4258;
        X1 = PAIR_CAR( e2575 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2544 ) ) )  goto L4262;
        e2575 = macros_not_2dmacro( e2575 );
        GOBACK( L4220 );
L4262:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2327 ) ) )  goto L4264;
        e2575 = macros_and_2dmacro( e2575 );
        GOBACK( L4220 );
L4264:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2104 ) ) )  goto L4266;
        e2575 = macros_or_2dmacro( e2575 );
        GOBACK( L4220 );
L4266:
        POPSTACKTRACE( FALSEVALUE );
L4258:
        POPSTACKTRACE( FALSEVALUE );
L4227:
        X1 = sc_cons( e2575, EMPTYLIST );
        POPSTACKTRACE( X1 );
}

DEFTSCP( macros_begin_2dmacro_v );
DEFCSTRING( t4269, "BEGIN-MACRO" );

TSCP  macros_begin_2dmacro( e2660 )
        TSCP  e2660;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4269 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e2660, 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4271;
        X1 = scrt1_length( e2660 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L4275;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L4279;
        goto L4280;
L4275:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 8 ) ) ) )  goto L4279;
        goto L4280;
L4271:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c2086, 
                                                    e2660, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L4279:
        if  ( EQ( TSCPTAG( e2660 ), PAIRTAG ) )  goto L4284;
        scrt1__24__cdr_2derror( e2660 );
L4284:
        X1 = PAIR_CDR( e2660 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4287;
        scrt1__24__car_2derror( X1 );
L4287:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L4280:
        if  ( EQ( TSCPTAG( e2660 ), PAIRTAG ) )  goto L4290;
        scrt1__24__cdr_2derror( e2660 );
L4290:
        X3 = PAIR_CDR( e2660 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X2 = CONS( scrt1_append_2dtwo( X3, X4 ), EMPTYLIST );
        X1 = scrt1_cons_2a( c2326, CONS( EMPTYLIST, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

DEFTSCP( macros_let_2dmacro_v );
DEFCSTRING( t4292, "LET-MACRO" );
EXTERNTSCPP( scrt1_cadar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadar_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );

TSCP  macros_let_2dmacro( e2686 )
        TSCP  e2686;
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

        PUSHSTACKTRACE( t4292 );
        X9 = SYMBOL_VALUE( islist_v );
        X9 = UNKNOWNCALL( X9, 2 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( e2686, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( FALSE( X8 ) )  goto L4343;
        if  ( EQ( TSCPTAG( e2686 ), PAIRTAG ) )  goto L4301;
        scrt1__24__cdr_2derror( e2686 );
L4301:
        X11 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4304;
        scrt1__24__car_2derror( X11 );
L4304:
        X10 = PAIR_CAR( X11 );
        X9 = SYMBOL_VALUE( islist_v );
        X9 = UNKNOWNCALL( X9, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                                  _TSCP( 0 ), 
                                                  PROCEDURE_CLOSURE( X9 ) ) )
            )  goto L4343;
        X9 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4309;
        scrt1__24__car_2derror( X9 );
L4309:
        X7 = PAIR_CAR( X9 );
        X6 = EMPTYLIST;
        X5 = EMPTYLIST;
L4311:
        X5 = CONS( X5, EMPTYLIST );
        X6 = CONS( X6, EMPTYLIST );
        X9 = BOOLEAN( NEQ( TSCPTAG( X7 ), PAIRTAG ) );
        if  ( TRUE( X9 ) )  goto L4316;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4320;
        scrt1__24__car_2derror( X7 );
L4320:
        X12 = PAIR_CAR( X7 );
        X11 = SYMBOL_VALUE( islist_v );
        X11 = UNKNOWNCALL( X11, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                                   _TSCP( 8 ), 
                                                   _TSCP( 8 ), 
                                                   PROCEDURE_CLOSURE( X11 ) ) )
            )  goto L4317;
        X10 = FALSEVALUE;
        goto L4318;
L4317:
        X10 = TRUEVALUE;
L4318:
        if  ( TRUE( X10 ) )  goto L4316;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4330;
        scrt1__24__car_2derror( X7 );
L4330:
        X12 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4333;
        scrt1__24__car_2derror( X12 );
L4333:
        X11 = PAIR_CAR( X12 );
        if  ( NOT( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X11 ), SYMBOLTAG ) ) )
            )  goto L4316;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4337;
        scrt1__24__car_2derror( X7 );
L4337:
        X13 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L4340;
        scrt1__24__car_2derror( X13 );
L4340:
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
        GOBACK( L4311 );
L4343:
        X9 = SYMBOL_VALUE( islist_v );
        X9 = UNKNOWNCALL( X9, 2 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( e2686, 
                                          _TSCP( 16 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( FALSE( X8 ) )  goto L4395;
        if  ( EQ( TSCPTAG( e2686 ), PAIRTAG ) )  goto L4351;
        scrt1__24__cdr_2derror( e2686 );
L4351:
        X10 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L4354;
        scrt1__24__car_2derror( X10 );
L4354:
        X9 = PAIR_CAR( X10 );
        if  ( NOT( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X9 ), SYMBOLTAG ) ) )
            )  goto L4395;
        X4 = scrt1_caddr( e2686 );
        X9 = _TSCP( 0 );
        X1 = EMPTYLIST;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L4357:
        X3 = CONS( X3, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X10 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X10 ) )  goto L4362;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4366;
        scrt1__24__car_2derror( X4 );
L4366:
        X13 = PAIR_CAR( X4 );
        X12 = SYMBOL_VALUE( islist_v );
        X12 = UNKNOWNCALL( X12, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X12 ) )( X13, 
                                                   _TSCP( 8 ), 
                                                   _TSCP( 8 ), 
                                                   PROCEDURE_CLOSURE( X12 ) ) )
            )  goto L4363;
        X11 = FALSEVALUE;
        goto L4364;
L4363:
        X11 = TRUEVALUE;
L4364:
        if  ( TRUE( X11 ) )  goto L4362;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4376;
        scrt1__24__car_2derror( X4 );
L4376:
        X13 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L4379;
        scrt1__24__car_2derror( X13 );
L4379:
        X12 = PAIR_CAR( X13 );
        if  ( NOT( AND( EQ( TSCPTAG( X12 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X12 ), SYMBOLTAG ) ) )
            )  goto L4362;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4383;
        scrt1__24__car_2derror( X4 );
L4383:
        X14 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L4386;
        scrt1__24__car_2derror( X14 );
L4386:
        X13 = PAIR_CAR( X14 );
        X12 = sc_cons( X13, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X12 );
        X14 = scrt6_format( c2763, CONS( X9, EMPTYLIST ) );
        X13 = sc_d_2dsymbol_ab4b4447( X14 );
        X12 = sc_cons( X13, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X12 );
        X16 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L4389;
        scrt1__24__car_2derror( X16 );
L4389:
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
                      3 ) )  goto L4393;
        X13 = _TSCP( IPLUS( _S2CINT( X9 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L4394;
L4393:
        X13 = scrt2__2b_2dtwo( X9, _TSCP( 4 ) );
L4394:
        X3 = PAIR_CAR( X3 );
        X2 = PAIR_CAR( X2 );
        X1 = PAIR_CAR( X1 );
        X9 = X13;
        X4 = X12;
        GOBACK( L4357 );
L4395:
        X8 = SYMBOL_VALUE( expand_2derror_v );
        X8 = UNKNOWNCALL( X8, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X8 ) )( c2098, 
                                                    e2686, 
                                                    PROCEDURE_CLOSURE( X8 ) ) );
L4316:
        if  ( FALSE( X7 ) )  goto L4396;
        X8 = SYMBOL_VALUE( expand_2derror_v );
        X8 = UNKNOWNCALL( X8, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X8 ) )( c2098, 
                                                    e2686, 
                                                    PROCEDURE_CLOSURE( X8 ) ) );
L4396:
        X11 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4400;
        scrt1__24__cdr_2derror( X11 );
L4400:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_append_2dtwo( X10, X11 ), EMPTYLIST );
        if  ( NEQ( _S2CUINT( PAIR_CAR( X6 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L4402;
        X10 = sc_d_2dsymbol_ab4b4447( c2853 );
        goto L4403;
L4402:
        X10 = scrt1_reverse( PAIR_CAR( X6 ) );
L4403:
        X8 = scrt1_cons_2a( c2326, CONS( X10, X9 ) );
        X9 = scrt1_reverse( PAIR_CAR( X5 ) );
        X10 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X8, 
                                      CONS( scrt1_append_2dtwo( X9, 
                                                                X10 ), 
                                            EMPTYLIST ) ) );
L4362:
        if  ( FALSE( X4 ) )  goto L4404;
        X8 = SYMBOL_VALUE( expand_2derror_v );
        X8 = UNKNOWNCALL( X8, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X8 ) )( c2098, 
                                                    e2686, 
                                                    PROCEDURE_CLOSURE( X8 ) ) );
L4404:
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4408;
        scrt1__24__car_2derror( X11 );
L4408:
        X10 = PAIR_CAR( X11 );
        X11 = scrt1_reverse( PAIR_CAR( X1 ) );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( X10, 
                                  CONS( scrt1_append_2dtwo( X11, X12 ), 
                                        EMPTYLIST ) ), 
                   X9 );
        X12 = PAIR_CDR( e2686 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4412;
        scrt1__24__car_2derror( X12 );
L4412:
        X11 = PAIR_CAR( X12 );
        X12 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = scrt1_cdddr( e2686 );
        X15 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X13 = CONS( scrt1_append_2dtwo( X14, X15 ), 
                    EMPTYLIST );
        X10 = scrt1_cons_2a( X11, 
                             CONS( scrt1_cons_2a( c2326, 
                                                  CONS( scrt1_reverse( PAIR_CAR( X2 ) ), 
                                                        X13 ) ), 
                                   X12 ) );
        X8 = CONS( scrt1_cons_2a( c2780, 
                                  CONS( scrt1_cons_2a( X10, 
                                                       CONS( EMPTYLIST, 
                                                             EMPTYLIST ) ), 
                                        X9 ) ), 
                   X8 );
        POPSTACKTRACE( scrt1_cons_2a( c2098, 
                                      CONS( scrt1_reverse( PAIR_CAR( X3 ) ), 
                                            X8 ) ) );
}

DEFTSCP( macros_let_2a_2dmacro_v );
DEFCSTRING( t4414, "LET*-MACRO" );
EXTERNTSCPP( macros_let_2a_2dresult, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( macros_let_2a_2dresult_v );

TSCP  macros_let_2a_2dmacro( e2876 )
        TSCP  e2876;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4414 );
        X5 = SYMBOL_VALUE( islist_v );
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( e2876, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X5 ) );
        if  ( FALSE( X4 ) )  goto L4465;
        if  ( EQ( TSCPTAG( e2876 ), PAIRTAG ) )  goto L4423;
        scrt1__24__cdr_2derror( e2876 );
L4423:
        X7 = PAIR_CDR( e2876 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4426;
        scrt1__24__car_2derror( X7 );
L4426:
        X6 = PAIR_CAR( X7 );
        X5 = SYMBOL_VALUE( islist_v );
        X5 = UNKNOWNCALL( X5, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X5 ) ) )
            )  goto L4465;
        X5 = PAIR_CDR( e2876 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4431;
        scrt1__24__car_2derror( X5 );
L4431:
        X3 = PAIR_CAR( X5 );
        X2 = EMPTYLIST;
        X1 = EMPTYLIST;
L4433:
        X1 = CONS( X1, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X5 = BOOLEAN( NEQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( TRUE( X5 ) )  goto L4438;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4442;
        scrt1__24__car_2derror( X3 );
L4442:
        X8 = PAIR_CAR( X3 );
        X7 = SYMBOL_VALUE( islist_v );
        X7 = UNKNOWNCALL( X7, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                                  _TSCP( 8 ), 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X7 ) ) )
            )  goto L4439;
        X6 = FALSEVALUE;
        goto L4440;
L4439:
        X6 = TRUEVALUE;
L4440:
        if  ( TRUE( X6 ) )  goto L4438;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4452;
        scrt1__24__car_2derror( X3 );
L4452:
        X8 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L4455;
        scrt1__24__car_2derror( X8 );
L4455:
        X7 = PAIR_CAR( X8 );
        if  ( NOT( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X7 ), SYMBOLTAG ) ) )
            )  goto L4438;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4459;
        scrt1__24__car_2derror( X3 );
L4459:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4462;
        scrt1__24__car_2derror( X9 );
L4462:
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
        GOBACK( L4433 );
L4465:
        X5 = SYMBOL_VALUE( islist_v );
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( e2876, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X5 ) );
        if  ( FALSE( X4 ) )  goto L4482;
        if  ( EQ( TSCPTAG( e2876 ), PAIRTAG ) )  goto L4473;
        scrt1__24__cdr_2derror( e2876 );
L4473:
        X6 = PAIR_CDR( e2876 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4476;
        scrt1__24__car_2derror( X6 );
L4476:
        X5 = PAIR_CAR( X6 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4482;
        X8 = PAIR_CDR( e2876 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L4480;
        scrt1__24__cdr_2derror( X8 );
L4480:
        X7 = PAIR_CDR( X8 );
        X8 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X5 = scrt1_cons_2a( c2326, CONS( EMPTYLIST, X6 ) );
        POPSTACKTRACE( scrt1_cons_2a( X5, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L4482:
        X4 = SYMBOL_VALUE( expand_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( c2910, 
                                                    e2876, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L4438:
        if  ( FALSE( X3 ) )  goto L4483;
        X4 = SYMBOL_VALUE( expand_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( c2910, 
                                                    e2876, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L4483:
        X6 = PAIR_CDR( e2876 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4487;
        scrt1__24__cdr_2derror( X6 );
L4487:
        X5 = PAIR_CDR( X6 );
        X4 = macros_let_2a_2dresult( PAIR_CAR( X2 ), 
                                     PAIR_CAR( X1 ), X5 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4490;
        scrt1__24__car_2derror( X4 );
L4490:
        POPSTACKTRACE( PAIR_CAR( X4 ) );
}

DEFTSCP( macros_let_2a_2dresult_v );
DEFCSTRING( t4492, "LET*-RESULT" );

TSCP  macros_let_2a_2dresult( v2994, i2995, b2996 )
        TSCP  v2994, i2995, b2996;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4492 );
L4493:
        if  ( EQ( _S2CUINT( v2994 ), _S2CUINT( EMPTYLIST ) ) )  goto L4494;
        if  ( EQ( TSCPTAG( v2994 ), PAIRTAG ) )  goto L4497;
        scrt1__24__cdr_2derror( v2994 );
L4497:
        X1 = PAIR_CDR( v2994 );
        if  ( EQ( TSCPTAG( i2995 ), PAIRTAG ) )  goto L4500;
        scrt1__24__cdr_2derror( i2995 );
L4500:
        X2 = PAIR_CDR( i2995 );
        X6 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X5 = CONS( scrt1_append_2dtwo( b2996, X6 ), 
                   EMPTYLIST );
        X6 = PAIR_CAR( v2994 );
        X4 = scrt1_cons_2a( c2326, 
                            CONS( scrt1_cons_2a( X6, 
                                                 CONS( EMPTYLIST, 
                                                       EMPTYLIST ) ), 
                                  X5 ) );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = scrt1_cons_2a( X4, 
                            CONS( PAIR_CAR( i2995 ), X5 ) );
        b2996 = scrt1_cons_2a( X3, 
                               CONS( EMPTYLIST, EMPTYLIST ) );
        i2995 = X2;
        v2994 = X1;
        GOBACK( L4493 );
L4494:
        POPSTACKTRACE( b2996 );
}

DEFTSCP( macros_letrec_2dmacro_v );
DEFCSTRING( t4504, "LETREC-MACRO" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );

TSCP  macros_letrec_2dmacro( e3020 )
        TSCP  e3020;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4504 );
        X6 = SYMBOL_VALUE( islist_v );
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( e3020, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( X5 ) )  goto L4585;
        if  ( EQ( TSCPTAG( e3020 ), PAIRTAG ) )  goto L4513;
        scrt1__24__cdr_2derror( e3020 );
L4513:
        X8 = PAIR_CDR( e3020 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L4516;
        scrt1__24__car_2derror( X8 );
L4516:
        X7 = PAIR_CAR( X8 );
        X6 = SYMBOL_VALUE( islist_v );
        X6 = UNKNOWNCALL( X6, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X6 ) ) )
            )  goto L4585;
        X6 = PAIR_CDR( e3020 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4521;
        scrt1__24__car_2derror( X6 );
L4521:
        X4 = PAIR_CAR( X6 );
        X3 = EMPTYLIST;
        X1 = EMPTYLIST;
        X2 = EMPTYLIST;
L4523:
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X3 = CONS( X3, EMPTYLIST );
        X6 = BOOLEAN( NEQ( TSCPTAG( X4 ), PAIRTAG ) );
        if  ( TRUE( X6 ) )  goto L4528;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4532;
        scrt1__24__car_2derror( X4 );
L4532:
        X9 = PAIR_CAR( X4 );
        X8 = SYMBOL_VALUE( islist_v );
        X8 = UNKNOWNCALL( X8, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X8 ) )( X9, 
                                                  _TSCP( 8 ), 
                                                  _TSCP( 8 ), 
                                                  PROCEDURE_CLOSURE( X8 ) ) )
            )  goto L4529;
        X7 = FALSEVALUE;
        goto L4530;
L4529:
        X7 = TRUEVALUE;
L4530:
        if  ( TRUE( X7 ) )  goto L4528;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4542;
        scrt1__24__car_2derror( X4 );
L4542:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4545;
        scrt1__24__car_2derror( X9 );
L4545:
        X8 = PAIR_CAR( X9 );
        if  ( NOT( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X8 ), SYMBOLTAG ) ) )
            )  goto L4528;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4549;
        scrt1__24__car_2derror( X4 );
L4549:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4552;
        scrt1__24__car_2derror( X9 );
L4552:
        X8 = PAIR_CAR( X9 );
        X9 = scrt1_cadar( X4 );
        if  ( NEQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L4555;
        X10 = TRUEVALUE;
        goto L4556;
L4555:
        X10 = BOOLEAN( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                            EQ( TSCP_EXTENDEDTAG( X9 ), 
                                DOUBLEFLOATTAG ) ) );
L4556:
        if  ( TRUE( X10 ) )  goto L4561;
        if  ( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X9 ), STRINGTAG ) ) )  goto L4561;
        if  ( EQ( TSCPIMMEDIATETAG( X9 ), CHARACTERTAG ) )  goto L4561;
        X11 = scrt1_memq( X9, c3130 );
        if  ( TRUE( X11 ) )  goto L4561;
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4581;
        X12 = PAIR_CAR( X9 );
        if  ( EQ( _S2CUINT( X12 ), _S2CUINT( c2210 ) ) )  goto L4561;
L4581:
        X11 = sc_cons( _TSCP( 0 ), PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X11 );
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X13 = CONS( X9, X13 );
        X12 = scrt1_cons_2a( c3146, CONS( X8, X13 ) );
        X11 = sc_cons( X12, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X11 );
        goto L4582;
L4561:
        X11 = sc_cons( X9, PAIR_CAR( X1 ) );
        SETGEN( PAIR_CAR( X1 ), X11 );
L4582:
        X10 = sc_cons( X8, PAIR_CAR( X3 ) );
        SETGEN( PAIR_CAR( X3 ), X10 );
        X8 = PAIR_CDR( X4 );
        X2 = PAIR_CAR( X2 );
        X1 = PAIR_CAR( X1 );
        X3 = PAIR_CAR( X3 );
        X4 = X8;
        GOBACK( L4523 );
L4585:
        X6 = SYMBOL_VALUE( islist_v );
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( e3020, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( X5 ) )  goto L4602;
        if  ( EQ( TSCPTAG( e3020 ), PAIRTAG ) )  goto L4593;
        scrt1__24__cdr_2derror( e3020 );
L4593:
        X7 = PAIR_CDR( e3020 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L4596;
        scrt1__24__car_2derror( X7 );
L4596:
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L4602;
        X9 = PAIR_CDR( e3020 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L4600;
        scrt1__24__cdr_2derror( X9 );
L4600:
        X8 = PAIR_CDR( X9 );
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X7 = CONS( scrt1_append_2dtwo( X8, X9 ), EMPTYLIST );
        X6 = scrt1_cons_2a( c2326, CONS( EMPTYLIST, X7 ) );
        POPSTACKTRACE( scrt1_cons_2a( X6, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
L4602:
        X5 = SYMBOL_VALUE( expand_2derror_v );
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( c2780, 
                                                    e3020, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L4528:
        if  ( FALSE( X4 ) )  goto L4603;
        X5 = SYMBOL_VALUE( expand_2derror_v );
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( c2780, 
                                                    e3020, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L4603:
        X7 = scrt1_reverse( PAIR_CAR( X2 ) );
        X11 = PAIR_CDR( e3020 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L4607;
        scrt1__24__cdr_2derror( X11 );
L4607:
        X10 = PAIR_CDR( X11 );
        X11 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_cons_2a( c2086, 
                            CONS( scrt1_append_2dtwo( X10, X11 ), 
                                  EMPTYLIST ) );
        X8 = scrt1_cons_2a( X9, CONS( EMPTYLIST, EMPTYLIST ) );
        X6 = CONS( scrt1_append_2dtwo( X7, X8 ), EMPTYLIST );
        X5 = scrt1_cons_2a( c2326, 
                            CONS( scrt1_reverse( PAIR_CAR( X3 ) ), 
                                  X6 ) );
        X6 = scrt1_reverse( PAIR_CAR( X1 ) );
        X7 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X5, 
                                      CONS( scrt1_append_2dtwo( X6, X7 ), 
                                            EMPTYLIST ) ) );
}

DEFTSCP( macros_do_2dmacro_v );
DEFCSTRING( t4609, "DO-MACRO" );
EXTERNTSCPP( scrt1_caaddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caaddr_v );
EXTERNTSCPP( scrt1_cdaddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdaddr_v );

TSCP  macros_do_2dmacro( e3183 )
        TSCP  e3183;
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

        PUSHSTACKTRACE( t4609 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( e3183, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L4665;
        if  ( EQ( TSCPTAG( e3183 ), PAIRTAG ) )  goto L4616;
        scrt1__24__cdr_2derror( e3183 );
L4616:
        X5 = PAIR_CDR( e3183 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4619;
        scrt1__24__car_2derror( X5 );
L4619:
        X4 = PAIR_CAR( X5 );
        X3 = SYMBOL_VALUE( islist_v );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          _TSCP( 0 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        if  ( FALSE( X2 ) )  goto L4665;
        X4 = scrt1_caddr( e3183 );
        X3 = SYMBOL_VALUE( islist_v );
        X3 = UNKNOWNCALL( X3, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L4665;
        X4 = PAIR_CDR( e3183 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4629;
        scrt1__24__car_2derror( X4 );
L4629:
        X3 = PAIR_CAR( X4 );
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
        X7 = sc_d_2dsymbol_ab4b4447( c3275 );
        X8 = scrt1_caaddr( e3183 );
        X10 = scrt1_cdaddr( e3183 );
        if  ( FALSE( X10 ) )  goto L4632;
        X9 = X10;
        goto L4633;
L4632:
        X9 = c3278;
L4633:
        X10 = scrt1_cdddr( e3183 );
        X6 = CONS( X6, EMPTYLIST );
        X5 = CONS( X5, EMPTYLIST );
        X4 = CONS( X4, EMPTYLIST );
        X11 = scrt1_reverse( X3 );
        X12 = X11;
L4637:
        if  ( EQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L4638;
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4642;
        scrt1__24__car_2derror( X12 );
L4642:
        X13 = PAIR_CAR( X12 );
        X14 = SYMBOL_VALUE( islist_v );
        X14 = UNKNOWNCALL( X14, 3 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X14 ) )( X13, 
                                                   _TSCP( 8 ), 
                                                   _TSCP( 12 ), 
                                                   PROCEDURE_CLOSURE( X14 ) ) )
            )  goto L4645;
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L4648;
        scrt1__24__car_2derror( X13 );
L4648:
        X14 = PAIR_CAR( X13 );
        X16 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L4653;
        scrt1__24__car_2derror( X16 );
L4653:
        X15 = PAIR_CAR( X16 );
        X17 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L4658;
        scrt1__24__cdr_2derror( X17 );
L4658:
        if  ( FALSE( PAIR_CDR( X17 ) ) )  goto L4660;
        X16 = scrt1_caddr( X13 );
        goto L4661;
L4660:
        X16 = X14;
L4661:
        X17 = sc_cons( X14, PAIR_CAR( X4 ) );
        SETGEN( PAIR_CAR( X4 ), X17 );
        X17 = sc_cons( X16, PAIR_CAR( X6 ) );
        SETGEN( PAIR_CAR( X6 ), X17 );
        X17 = sc_cons( X15, PAIR_CAR( X5 ) );
        SETGEN( PAIR_CAR( X5 ), X17 );
        goto L4646;
L4645:
        X14 = SYMBOL_VALUE( expand_2derror_v );
        X14 = UNKNOWNCALL( X14, 2 );
        VIA( PROCEDURE_CODE( X14 ) )( c3202, 
                                      X13, 
                                      PROCEDURE_CLOSURE( X14 ) );
L4646:
        X12 = PAIR_CDR( X12 );
        GOBACK( L4637 );
L4638:
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
        X15 = CONS( scrt1_cons_2a( c2086, 
                                   CONS( scrt1_append_2dtwo( X10, X16 ), 
                                         EMPTYLIST ) ), 
                    X15 );
        X16 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X15 = CONS( scrt1_cons_2a( c2086, 
                                   CONS( scrt1_append_2dtwo( X9, X16 ), 
                                         EMPTYLIST ) ), 
                    X15 );
        X14 = CONS( scrt1_cons_2a( c2081, CONS( X8, X15 ) ), 
                    X14 );
        X12 = scrt1_cons_2a( X7, 
                             CONS( scrt1_cons_2a( c2326, 
                                                  CONS( PAIR_CAR( X4 ), 
                                                        X14 ) ), 
                                   X13 ) );
        POPSTACKTRACE( scrt1_cons_2a( c2780, 
                                      CONS( scrt1_cons_2a( X12, 
                                                           CONS( EMPTYLIST, 
                                                                 EMPTYLIST ) ), 
                                            X11 ) ) );
L4665:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3202, 
                                                    e3183, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_quote_2dmacro_v );
DEFCSTRING( t4666, "QUOTE-MACRO" );

TSCP  macros_quote_2dmacro( f3281, e3282 )
        TSCP  f3281, e3282;
{
        PUSHSTACKTRACE( t4666 );
        POPSTACKTRACE( f3281 );
}

DEFTSCP( macros_define_2dmacro_v );
DEFCSTRING( t4668, "DEFINE-MACRO" );
EXTERNTSCPP( scrt1_caadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caadr_v );
EXTERNTSCPP( macros_bda_2dvars_8ad3f36b, XAL1( TSCP ) );
EXTERNTSCP( macros_bda_2dvars_8ad3f36b_v );
EXTERNTSCPP( scrt1_cdadr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdadr_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  macros_define_2dmacro( f3285, e3286 )
        TSCP  f3285, e3286;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4668 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( f3285, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4670;
        if  ( EQ( TSCPTAG( f3285 ), PAIRTAG ) )  goto L4676;
        scrt1__24__cdr_2derror( f3285 );
L4676:
        X2 = PAIR_CDR( f3285 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4679;
        scrt1__24__car_2derror( X2 );
L4679:
        X1 = PAIR_CAR( X2 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L4673;
        X1 = PAIR_CDR( f3285 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4683;
        scrt1__24__car_2derror( X1 );
L4683:
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  PAIR_CAR( X1 ) );
        goto L4693;
L4673:
        if  ( EQ( TSCPTAG( f3285 ), PAIRTAG ) )  goto L4688;
        scrt1__24__cdr_2derror( f3285 );
L4688:
        X2 = PAIR_CDR( f3285 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4691;
        scrt1__24__car_2derror( X2 );
L4691:
        X1 = PAIR_CAR( X2 );
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4693;
        X1 = scrt1_caadr( f3285 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), SYMBOLTAG ) ) )
            )  goto L4693;
        SETGENTL( SYMBOL_VALUE( current_2ddefine_2dname_v ), 
                  scrt1_caadr( f3285 ) );
        X1 = scrt1_cdadr( f3285 );
        macros_bda_2dvars_8ad3f36b( X1 );
L4693:
        if  ( EQ( TSCPTAG( f3285 ), PAIRTAG ) )  goto L4697;
        scrt1__24__car_2derror( f3285 );
L4697:
        X1 = PAIR_CAR( f3285 );
        X4 = PAIR_CDR( f3285 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4701;
        scrt1__24__cdr_2derror( X4 );
L4701:
        X3 = PAIR_CDR( X4 );
        X4 = X3;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L4705:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4706;
        X7 = X5;
        goto L4713;
L4706:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4709;
        scrt1__24__car_2derror( X4 );
L4709:
        X11 = PAIR_CAR( X4 );
        X10 = e3286;
        X10 = UNKNOWNCALL( X10, 2 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X11, 
                                           e3286, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4712;
        X9 = PAIR_CDR( X4 );
        X6 = X8;
        X5 = X8;
        X4 = X9;
        GOBACK( L4705 );
L4712:
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4717;
        scdebug_error( c3379, 
                       c3380, CONS( X6, EMPTYLIST ) );
L4717:
        X6 = SETGEN( PAIR_CDR( X6 ), X8 );
        X4 = X9;
        GOBACK( L4705 );
L4713:
        X2 = CONS( X7, EMPTYLIST );
        X3 = PAIR_CDR( f3285 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4721;
        scrt1__24__car_2derror( X3 );
L4721:
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L4670:
        POPSTACKTRACE( f3285 );
}

DEFTSCP( macros_lambda_2dmacro_v );
DEFCSTRING( t4723, "LAMBDA-MACRO" );

TSCP  macros_lambda_2dmacro( f3403, e3404 )
        TSCP  f3403, e3404;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4723 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( f3403, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4725;
        if  ( EQ( TSCPTAG( f3403 ), PAIRTAG ) )  goto L4729;
        scrt1__24__cdr_2derror( f3403 );
L4729:
        X2 = PAIR_CDR( f3403 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4732;
        scrt1__24__car_2derror( X2 );
L4732:
        X1 = PAIR_CAR( X2 );
        macros_bda_2dvars_8ad3f36b( X1 );
        X1 = PAIR_CAR( f3403 );
        X4 = PAIR_CDR( f3403 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4737;
        scrt1__24__cdr_2derror( X4 );
L4737:
        X3 = PAIR_CDR( X4 );
        X4 = X3;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L4741:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L4742;
        X7 = X5;
        goto L4749;
L4742:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4745;
        scrt1__24__car_2derror( X4 );
L4745:
        X11 = PAIR_CAR( X4 );
        X10 = e3404;
        X10 = UNKNOWNCALL( X10, 2 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X11, 
                                           e3404, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L4748;
        X9 = PAIR_CDR( X4 );
        X6 = X8;
        X5 = X8;
        X4 = X9;
        GOBACK( L4741 );
L4748:
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4753;
        scdebug_error( c3379, 
                       c3380, CONS( X6, EMPTYLIST ) );
L4753:
        X6 = SETGEN( PAIR_CDR( X6 ), X8 );
        X4 = X9;
        GOBACK( L4741 );
L4749:
        X2 = CONS( X7, EMPTYLIST );
        X3 = PAIR_CDR( f3403 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4757;
        scrt1__24__car_2derror( X3 );
L4757:
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L4725:
        POPSTACKTRACE( f3403 );
}

DEFTSCP( macros_bda_2dvars_8ad3f36b_v );
DEFCSTRING( t4759, "DUPLICATE-LAMBDA-VARS" );

TSCP  macros_bda_2dvars_8ad3f36b( v3485 )
        TSCP  v3485;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4759 );
        X1 = v3485;
        X2 = EMPTYLIST;
L4762:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L4763;
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4765;
        X3 = PAIR_CAR( X1 );
        goto L4766;
L4765:
        X3 = X1;
L4766:
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )  goto L4769;
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        VIA( PROCEDURE_CODE( X4 ) )( c3504, 
                                     X3, PROCEDURE_CLOSURE( X4 ) );
L4769:
        if  ( FALSE( scrt1_memq( X3, X2 ) ) )  goto L4771;
        X4 = SYMBOL_VALUE( report_2derror_v );
        X4 = UNKNOWNCALL( X4, 2 );
        VIA( PROCEDURE_CODE( X4 ) )( c3505, 
                                     X3, PROCEDURE_CLOSURE( X4 ) );
L4771:
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L4773;
        X4 = PAIR_CDR( X1 );
        X2 = sc_cons( X3, X2 );
        X1 = X4;
        GOBACK( L4762 );
L4773:
        POPSTACKTRACE( FALSEVALUE );
L4763:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( macros_define_2dmacro_2dmacro_v );
DEFCSTRING( t4776, "DEFINE-MACRO-MACRO" );

TSCP  macros_define_2dmacro_2dmacro( f3520, e3521 )
        TSCP  f3520, e3521;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4776 );
        X1 = SYMBOL_VALUE( do_2ddefine_2dmacro_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( f3520, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( f3520 );
}

DEFTSCP( macros_nt_2dmacro_17bbc940_v );
DEFCSTRING( t4778, "DEFINE-CONSTANT-MACRO" );

TSCP  macros_nt_2dmacro_17bbc940( f3525, e3526 )
        TSCP  f3525, e3526;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4778 );
        X1 = SYMBOL_VALUE( do_2ddefine_2dconstant_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( f3525, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( f3525 );
}

DEFTSCP( macros_eval_2dwhen_2dmacro_v );
DEFCSTRING( t4780, "EVAL-WHEN-MACRO" );

TSCP  macros_l3588( f3589, e3590, c4817 )
        TSCP  f3589, e3590, c4817;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "macros_l3588 [inside EVAL-WHEN-MACRO]" );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_caddr( f3589 ), X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2210, CONS( c3602, X4 ) ), 
                   X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( f3589 ), PAIRTAG ) )  goto L4820;
        scrt1__24__cdr_2derror( f3589 );
L4820:
        X5 = PAIR_CDR( f3589 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4823;
        scrt1__24__car_2derror( X5 );
L4823:
        X2 = scrt1_cons_2a( c3591, 
                            CONS( scrt1_cons_2a( c2210, 
                                                 CONS( PAIR_CAR( X5 ), 
                                                       X4 ) ), 
                                  X3 ) );
        X1 = e3590;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3590, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

TSCP  macros_l3604( f3605, e3606, c4825 )
        TSCP  f3605, e3606, c4825;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "macros_l3604 [inside EVAL-WHEN-MACRO]" );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c3617, 
                                  CONS( scrt1_caddr( f3605 ), X4 ) ), 
                   X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_cons_2a( c2210, CONS( c3602, X4 ) ), 
                   X3 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( f3605 ), PAIRTAG ) )  goto L4828;
        scrt1__24__cdr_2derror( f3605 );
L4828:
        X5 = PAIR_CDR( f3605 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L4831;
        scrt1__24__car_2derror( X5 );
L4831:
        X2 = scrt1_cons_2a( c3591, 
                            CONS( scrt1_cons_2a( c2210, 
                                                 CONS( PAIR_CAR( X5 ), 
                                                       X4 ) ), 
                                  X3 ) );
        X1 = e3606;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    e3606, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

TSCP  macros_eval_2dwhen_2dmacro( f3530, e3531 )
        TSCP  f3530, e3531;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t4780 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( f3530, 
                                          _TSCP( 12 ), 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( FALSE( X1 ) )  goto L4809;
        if  ( EQ( TSCPTAG( f3530 ), PAIRTAG ) )  goto L4789;
        scrt1__24__cdr_2derror( f3530 );
L4789:
        X4 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4792;
        scrt1__24__car_2derror( X4 );
L4792:
        X3 = PAIR_CAR( X4 );
        X2 = SYMBOL_VALUE( islist_v );
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                  _TSCP( 4 ), 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L4809;
        X4 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4796;
        scrt1__24__car_2derror( X4 );
L4796:
        X3 = PAIR_CAR( X4 );
        X2 = scrt1_memq( c3550, X3 );
        if  ( FALSE( X2 ) )  goto L4808;
        X4 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4806;
        scrt1__24__car_2derror( X4 );
L4806:
        X3 = PAIR_CAR( X4 );
        if  ( TRUE( scrt1_memq( c3562, X3 ) ) )  goto L4808;
        POPSTACKTRACE( f3530 );
L4809:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3546, 
                                                    f3530, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L4808:
        X2 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4814;
        scrt1__24__car_2derror( X2 );
L4814:
        X1 = PAIR_CAR( X2 );
        if  ( FALSE( scrt1_memq( c3562, X1 ) ) )  goto L4810;
        X2 = SYMBOL_VALUE( get_v );
        X2 = UNKNOWNCALL( X2, 2 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c3603, 
                                          c2655, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X3 = SYMBOL_VALUE( get_v );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c3587, 
                                          c2655, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = MAKEPROCEDURE( 2, 0, macros_l3588, EMPTYLIST );
        X3 = SYMBOL_VALUE( put_v );
        X3 = UNKNOWNCALL( X3, 3 );
        VIA( PROCEDURE_CODE( X3 ) )( c3587, 
                                     c2655, 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        X4 = MAKEPROCEDURE( 2, 0, macros_l3604, EMPTYLIST );
        X3 = SYMBOL_VALUE( put_v );
        X3 = UNKNOWNCALL( X3, 3 );
        VIA( PROCEDURE_CODE( X3 ) )( c3603, 
                                     c2655, 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        X6 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L4835;
        scrt1__24__cdr_2derror( X6 );
L4835:
        X5 = PAIR_CDR( X6 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( c2210, CONS( X1, X10 ) ), 
                   X9 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( c2210, CONS( c2655, X10 ) ), 
                   X9 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_cons_2a( c3628, 
                                  CONS( scrt1_cons_2a( c2210, 
                                                       CONS( c3603, 
                                                             X10 ) ), 
                                        X9 ) ), 
                   X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( c2210, CONS( X2, X10 ) ), 
                   X9 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( scrt1_cons_2a( c2210, CONS( c2655, X10 ) ), 
                   X9 );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( scrt1_cons_2a( c3628, 
                                  CONS( scrt1_cons_2a( c2210, 
                                                       CONS( c3587, 
                                                             X10 ) ), 
                                        X9 ) ), 
                   X8 );
        X7 = scrt1_cons_2a( c3546, 
                            CONS( scrt1_cons_2a( c3550, 
                                                 CONS( EMPTYLIST, 
                                                       EMPTYLIST ) ), 
                                  X8 ) );
        X10 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L4841;
        scrt1__24__car_2derror( X10 );
L4841:
        X9 = PAIR_CAR( X10 );
        if  ( FALSE( scrt1_memq( c3550, X9 ) ) )  goto L4837;
        X12 = PAIR_CDR( f3530 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L4845;
        scrt1__24__cdr_2derror( X12 );
L4845:
        X11 = PAIR_CDR( X12 );
        X12 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X10 = CONS( scrt1_append_2dtwo( X11, X12 ), 
                    EMPTYLIST );
        X9 = scrt1_cons_2a( c3546, 
                            CONS( scrt1_cons_2a( c3550, 
                                                 CONS( EMPTYLIST, 
                                                       EMPTYLIST ) ), 
                                  X10 ) );
        X8 = scrt1_cons_2a( X9, CONS( EMPTYLIST, EMPTYLIST ) );
        goto L4838;
L4837:
        X8 = EMPTYLIST;
L4838:
        X9 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X6 = scrt1_cons_2a( X7, 
                            CONS( scrt1_append_2dtwo( X8, X9 ), 
                                  EMPTYLIST ) );
        X4 = scrt1_cons_2a( c2086, 
                            CONS( scrt1_append_2dtwo( X5, X6 ), 
                                  EMPTYLIST ) );
        X3 = e3531;
        X3 = UNKNOWNCALL( X3, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                                    e3531, 
                                                    PROCEDURE_CLOSURE( X3 ) ) );
L4810:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( macros_when_2dmacro_v );
DEFCSTRING( t4847, "WHEN-MACRO" );

TSCP  macros_when_2dmacro( e3651 )
        TSCP  e3651;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4847 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e3651, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4849;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3651 ), PAIRTAG ) )  goto L4852;
        scrt1__24__cdr_2derror( e3651 );
L4852:
        X3 = PAIR_CDR( e3651 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4855;
        scrt1__24__cdr_2derror( X3 );
L4855:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2086, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = PAIR_CDR( e3651 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L4859;
        scrt1__24__car_2derror( X2 );
L4859:
        POPSTACKTRACE( scrt1_cons_2a( c2081, 
                                      CONS( PAIR_CAR( X2 ), X1 ) ) );
L4849:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3652, 
                                                    e3651, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_unless_2dmacro_v );
DEFCSTRING( t4861, "UNLESS-MACRO" );

TSCP  macros_unless_2dmacro( e3675 )
        TSCP  e3675;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t4861 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( e3675, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4863;
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( EQ( TSCPTAG( e3675 ), PAIRTAG ) )  goto L4866;
        scrt1__24__cdr_2derror( e3675 );
L4866:
        X3 = PAIR_CDR( e3675 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4869;
        scrt1__24__cdr_2derror( X3 );
L4869:
        X2 = PAIR_CDR( X3 );
        X3 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = CONS( scrt1_cons_2a( c2086, 
                                  CONS( scrt1_append_2dtwo( X2, X3 ), 
                                        EMPTYLIST ) ), 
                   X1 );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X3 = PAIR_CDR( e3675 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4873;
        scrt1__24__car_2derror( X3 );
L4873:
        POPSTACKTRACE( scrt1_cons_2a( c2081, 
                                      CONS( scrt1_cons_2a( c2544, 
                                                           CONS( PAIR_CAR( X3 ), 
                                                                 X2 ) ), 
                                            X1 ) ) );
L4863:
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c3676, 
                                                    e3675, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_lap_2dmacro_v );
DEFCSTRING( t4875, "LAP-MACRO" );
EXTERNTSCPP( macros_t_2dexpand_dcf6ab5b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( macros_t_2dexpand_dcf6ab5b_v );

TSCP  macros_lap_2dmacro( f3699, e3700 )
        TSCP  f3699, e3700;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t4875 );
        X1 = SYMBOL_VALUE( islist_v );
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( f3699, 
                                                  _TSCP( 12 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L4877;
        if  ( EQ( TSCPTAG( f3699 ), PAIRTAG ) )  goto L4880;
        scrt1__24__car_2derror( f3699 );
L4880:
        X1 = PAIR_CAR( f3699 );
        X4 = PAIR_CDR( f3699 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L4884;
        scrt1__24__cdr_2derror( X4 );
L4884:
        X3 = PAIR_CDR( X4 );
        X2 = CONS( macros_t_2dexpand_dcf6ab5b( X3, 
                                               macros_t_2dexpand_dcf6ab5b_v ), 
                   EMPTYLIST );
        X3 = PAIR_CDR( f3699 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L4888;
        scrt1__24__car_2derror( X3 );
L4888:
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( PAIR_CAR( X3 ), X2 ) ) );
L4877:
        if  ( EQ( TSCPTAG( f3699 ), PAIRTAG ) )  goto L4891;
        scrt1__24__car_2derror( f3699 );
L4891:
        X2 = PAIR_CAR( f3699 );
        X1 = SYMBOL_VALUE( expand_2derror_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    f3699, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( macros_t_2dexpand_dcf6ab5b_v );
DEFCSTRING( t4893, "LAP-CONSTANT-EXPAND" );

TSCP  macros_l3737( x3738, e3739, c4899 )
        TSCP  x3738, e3739, c4899;
{
        PUSHSTACKTRACE( "macros_l3737 [inside LAP-CONSTANT-EXPAND]" );
        POPSTACKTRACE( x3738 );
}

TSCP  macros_t_2dexpand_dcf6ab5b( x3731, e3732 )
        TSCP  x3731, e3732;
{
        TSCP  X1;

        PUSHSTACKTRACE( t4893 );
        if  ( NEQ( TSCPTAG( x3731 ), PAIRTAG ) )  goto L4895;
        X1 = SYMBOL_VALUE( _xpander_2a_ecf97896_v );
        goto L4898;
L4895:
        if  ( NOT( AND( EQ( TSCPTAG( x3731 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( x3731 ), SYMBOLTAG ) ) )
            )  goto L4897;
        X1 = SYMBOL_VALUE( _xpander_2a_9e90dc74_v );
        goto L4898;
L4897:
        X1 = MAKEPROCEDURE( 2, 0, macros_l3737, EMPTYLIST );
L4898:
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( x3731, 
                                                    e3732, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

void scdebug__init();
void scrt6__init();
void scrt2__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt6__init();
        scrt2__init();
        scrt1__init();
        MAXDISPLAY( 1 );
}

void  macros__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(macros SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t3929, 
                       ADR( macros_old_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_old_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t3933, 
                       ADR( macros_quasiquote_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_quasiquote_2dmacro, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t3937, 
                       ADR( macros_cond_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_cond_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t3999, 
                       ADR( macros_case_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_case_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4081, 
                       ADR( macros_and_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_and_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4140, 
                       ADR( macros_or_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_or_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4199, 
                       ADR( macros_not_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_not_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4219, 
                       ADR( macros_boolean_2dconstant_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_boolean_2dconstant, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4269, 
                       ADR( macros_begin_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_begin_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4292, 
                       ADR( macros_let_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_let_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4414, 
                       ADR( macros_let_2a_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_let_2a_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4492, 
                       ADR( macros_let_2a_2dresult_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      macros_let_2a_2dresult, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4504, 
                       ADR( macros_letrec_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_letrec_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4609, 
                       ADR( macros_do_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_do_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4666, 
                       ADR( macros_quote_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_quote_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4668, 
                       ADR( macros_define_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_define_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4723, 
                       ADR( macros_lambda_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_lambda_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4759, 
                       ADR( macros_bda_2dvars_8ad3f36b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_bda_2dvars_8ad3f36b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4776, 
                       ADR( macros_define_2dmacro_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_define_2dmacro_2dmacro, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4778, 
                       ADR( macros_nt_2dmacro_17bbc940_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_nt_2dmacro_17bbc940, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4780, 
                       ADR( macros_eval_2dwhen_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_eval_2dwhen_2dmacro, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t4847, 
                       ADR( macros_when_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_when_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4861, 
                       ADR( macros_unless_2dmacro_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      macros_unless_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4875, 
                       ADR( macros_lap_2dmacro_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_lap_2dmacro, EMPTYLIST ) );
        INITIALIZEVAR( t4893, 
                       ADR( macros_t_2dexpand_dcf6ab5b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      macros_t_2dexpand_dcf6ab5b, 
                                      EMPTYLIST ) );
        return;
}
