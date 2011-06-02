
/* SCHEME->C */

#include <objects.h>

void transform__init();
DEFSTATICTSCP( current_2dlambda_2did_v );
DEFSTATICTSCP( true_2dalpha_v );
DEFSTATICTSCP( false_2dalpha_v );
DEFSTATICTSCP( name_2da_2dlambda_v );
DEFSTATICTSCP( lambda_2dexp_v );
DEFSTATICTSCP( log_3f_v );
DEFSTATICTSCP( pretty_2dprint_2d_24tree_v );
DEFSTATICTSCP( sc_2dicode_v );
DEFCSTRING( t5983, "~A" );
DEFSTATICTSCP( c5386 );
DEFCSTRING( t5984, " replaced by lambda " );
DEFSTATICTSCP( c5249 );
DEFCSTRING( t5985, " replaced by " );
DEFSTATICTSCP( c5228 );
DEFSTATICTSCP( c4819 );
DEFSTATICTSCP( c4781 );
DEFSTATICTSCP( c4671 );
DEFSTATICTSCP( c4667 );
DEFSTATICTSCP( c4010 );
DEFSTATICTSCP( c4009 );
DEFCSTRING( t5986, "Lambda ~A collapsed~%" );
DEFSTATICTSCP( c4005 );
DEFSTATICTSCP( c3929 );
DEFSTATICTSCP( c3917 );
DEFSTATICTSCP( c3910 );
DEFSTATICTSCP( c3851 );
DEFSTATICTSCP( c3847 );
DEFSTATICTSCP( c3818 );
DEFCSTRING( t5987, "~%~%" );
DEFSTATICTSCP( c3795 );
DEFCSTRING( t5988, " => ~%" );
DEFSTATICTSCP( c3791 );
DEFSTATICTSCP( c3787 );
DEFSTATICTSCP( c3710 );
DEFSTATICTSCP( c3504 );
DEFSTATICTSCP( c3503 );
DEFSTATICTSCP( c3476 );
DEFSTATICTSCP( c3216 );
DEFSTATICTSCP( t5989 );
DEFSTATICTSCP( t5990 );
DEFSTATICTSCP( t5991 );
DEFSTATICTSCP( c3178 );
DEFSTATICTSCP( c3165 );
DEFSTATICTSCP( c2965 );
DEFSTATICTSCP( c2882 );
DEFSTATICTSCP( c2833 );
DEFSTATICTSCP( c2832 );
DEFSTATICTSCP( c2603 );
DEFSTATICTSCP( c2358 );
DEFCSTRING( t5992, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2126 );
DEFSTATICTSCP( c2125 );
DEFSTATICTSCP( c2115 );
DEFSTATICTSCP( c2099 );
DEFSTATICTSCP( c2083 );
DEFSTATICTSCP( c2067 );
DEFSTATICTSCP( c2051 );

static void  init_constants()
{
        TSCP  X1;

        current_2dlambda_2did_v = STRINGTOSYMBOL( CSTRING_TSCP( "CURRENT-LAM\
BDA-ID" ) );
        CONSTANTEXP( ADR( current_2dlambda_2did_v ) );
        true_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "TRUE-ALPHA" ) );
        CONSTANTEXP( ADR( true_2dalpha_v ) );
        false_2dalpha_v = STRINGTOSYMBOL( CSTRING_TSCP( "FALSE-ALPHA" ) );
        CONSTANTEXP( ADR( false_2dalpha_v ) );
        name_2da_2dlambda_v = STRINGTOSYMBOL( CSTRING_TSCP( "NAME-A-LAMBDA" ) );
        CONSTANTEXP( ADR( name_2da_2dlambda_v ) );
        lambda_2dexp_v = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA-EXP" ) );
        CONSTANTEXP( ADR( lambda_2dexp_v ) );
        log_3f_v = STRINGTOSYMBOL( CSTRING_TSCP( "LOG?" ) );
        CONSTANTEXP( ADR( log_3f_v ) );
        pretty_2dprint_2d_24tree_v = STRINGTOSYMBOL( CSTRING_TSCP( "PRETTY-P\
RINT-$TREE" ) );
        CONSTANTEXP( ADR( pretty_2dprint_2d_24tree_v ) );
        sc_2dicode_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ICODE" ) );
        CONSTANTEXP( ADR( sc_2dicode_v ) );
        c5386 = CSTRING_TSCP( t5983 );
        CONSTANTEXP( ADR( c5386 ) );
        c5249 = CSTRING_TSCP( t5984 );
        CONSTANTEXP( ADR( c5249 ) );
        c5228 = CSTRING_TSCP( t5985 );
        CONSTANTEXP( ADR( c5228 ) );
        c4819 = STRINGTOSYMBOL( CSTRING_TSCP( "LEXICAL" ) );
        CONSTANTEXP( ADR( c4819 ) );
        c4781 = STRINGTOSYMBOL( CSTRING_TSCP( "OPTVARS" ) );
        CONSTANTEXP( ADR( c4781 ) );
        c4671 = STRINGTOSYMBOL( CSTRING_TSCP( "DISPLAY" ) );
        CONSTANTEXP( ADR( c4671 ) );
        c4667 = STRINGTOSYMBOL( CSTRING_TSCP( "SET!" ) );
        CONSTANTEXP( ADR( c4667 ) );
        c4010 = STRINGTOSYMBOL( CSTRING_TSCP( "INLINE" ) );
        CONSTANTEXP( ADR( c4010 ) );
        c4009 = STRINGTOSYMBOL( CSTRING_TSCP( "GENERATE" ) );
        CONSTANTEXP( ADR( c4009 ) );
        c4005 = CSTRING_TSCP( t5986 );
        CONSTANTEXP( ADR( c4005 ) );
        c3929 = STRINGTOSYMBOL( CSTRING_TSCP( "BOTH" ) );
        CONSTANTEXP( ADR( c3929 ) );
        c3917 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-CHANGE" ) );
        CONSTANTEXP( ADR( c3917 ) );
        c3910 = STRINGTOSYMBOL( CSTRING_TSCP( "NO-VALUE" ) );
        CONSTANTEXP( ADR( c3910 ) );
        c3851 = STRINGTOSYMBOL( CSTRING_TSCP( "CALLS" ) );
        CONSTANTEXP( ADR( c3851 ) );
        c3847 = STRINGTOSYMBOL( CSTRING_TSCP( "REFS" ) );
        CONSTANTEXP( ADR( c3847 ) );
        c3818 = STRINGTOSYMBOL( CSTRING_TSCP( "TCL" ) );
        CONSTANTEXP( ADR( c3818 ) );
        c3795 = CSTRING_TSCP( t5987 );
        CONSTANTEXP( ADR( c3795 ) );
        c3791 = CSTRING_TSCP( t5988 );
        CONSTANTEXP( ADR( c3791 ) );
        c3787 = STRINGTOSYMBOL( CSTRING_TSCP( "TRANSFORM" ) );
        CONSTANTEXP( ADR( c3787 ) );
        c3710 = STRINGTOSYMBOL( CSTRING_TSCP( "VALUE" ) );
        CONSTANTEXP( ADR( c3710 ) );
        c3504 = STRINGTOSYMBOL( CSTRING_TSCP( "CONSTANT" ) );
        CONSTANTEXP( ADR( c3504 ) );
        c3503 = STRINGTOSYMBOL( CSTRING_TSCP( "USE" ) );
        CONSTANTEXP( ADR( c3503 ) );
        c3476 = STRINGTOSYMBOL( CSTRING_TSCP( "IF2" ) );
        CONSTANTEXP( ADR( c3476 ) );
        c3216 = EMPTYLIST;
        X1 = EMPTYLIST;
        t5989 = STRINGTOSYMBOL( CSTRING_TSCP( "Y" ) );
        X1 = CONS( t5989, X1 );
        t5990 = STRINGTOSYMBOL( CSTRING_TSCP( "X" ) );
        X1 = CONS( t5990, X1 );
        c3216 = CONS( X1, c3216 );
        t5991 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        c3216 = CONS( t5991, c3216 );
        CONSTANTEXP( ADR( c3216 ) );
        c3178 = STRINGTOSYMBOL( CSTRING_TSCP( "REQVARS" ) );
        CONSTANTEXP( ADR( c3178 ) );
        c3165 = EMPTYLIST;
        c3165 = CONS( EMPTYLIST, c3165 );
        c3165 = CONS( t5991, c3165 );
        CONSTANTEXP( ADR( c3165 ) );
        c2965 = STRINGTOSYMBOL( CSTRING_TSCP( "NOT" ) );
        CONSTANTEXP( ADR( c2965 ) );
        c2882 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAP" ) );
        CONSTANTEXP( ADR( c2882 ) );
        c2833 = STRINGTOSYMBOL( CSTRING_TSCP( "BOOLEAN" ) );
        CONSTANTEXP( ADR( c2833 ) );
        c2832 = STRINGTOSYMBOL( CSTRING_TSCP( "TYPE" ) );
        CONSTANTEXP( ADR( c2832 ) );
        c2603 = STRINGTOSYMBOL( CSTRING_TSCP( "IF1" ) );
        CONSTANTEXP( ADR( c2603 ) );
        c2358 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2358 ) );
        c2126 = CSTRING_TSCP( t5992 );
        CONSTANTEXP( ADR( c2126 ) );
        c2125 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c2125 ) );
        c2115 = STRINGTOSYMBOL( CSTRING_TSCP( "$SET" ) );
        CONSTANTEXP( ADR( c2115 ) );
        c2099 = STRINGTOSYMBOL( CSTRING_TSCP( "$DEFINE" ) );
        CONSTANTEXP( ADR( c2099 ) );
        c2083 = STRINGTOSYMBOL( CSTRING_TSCP( "$IF" ) );
        CONSTANTEXP( ADR( c2083 ) );
        c2067 = STRINGTOSYMBOL( CSTRING_TSCP( "$LAMBDA" ) );
        CONSTANTEXP( ADR( c2067 ) );
        c2051 = STRINGTOSYMBOL( CSTRING_TSCP( "$CALL" ) );
        CONSTANTEXP( ADR( c2051 ) );
}

DEFTSCP( transform_transform_2dstack_v );
DEFCSTRING( t5993, "TRANSFORM-STACK" );
DEFTSCP( transform_transform_v );
DEFCSTRING( t5994, "TRANSFORM" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( transform_transformx, XAL1( TSCP ) );
EXTERNTSCP( transform_transformx_v );

TSCP  transform_transform( e2028 )
        TSCP  e2028;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t5994 );
        X1 = transform_transform_2dstack_v;
        transform_transform_2dstack_v = sc_cons( e2028, 
                                                 transform_transform_2dstack_v );
        X2 = transform_transformx( e2028 );
        transform_transform_2dstack_v = X1;
        POPSTACKTRACE( X2 );
}

DEFTSCP( transform_transformx_v );
DEFCSTRING( t5998, "TRANSFORMX" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( transform_l_2dlambda_8f20e049, XAL1( TSCP ) );
EXTERNTSCP( transform_l_2dlambda_8f20e049_v );
EXTERNTSCPP( transform_transform_2dif1, XAL1( TSCP ) );
EXTERNTSCP( transform_transform_2dif1_v );
EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCPP( transform_transform_2dif2, XAL1( TSCP ) );
EXTERNTSCP( transform_transform_2dif2_v );

TSCP  transform_transformx( e2035 )
        TSCP  e2035;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t5998 );
        X1 = BOOLEAN( EQ( TSCPTAG( e2035 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6060;
        if  ( EQ( TSCPTAG( e2035 ), PAIRTAG ) )  goto L6007;
        scrt1__24__car_2derror( e2035 );
L6007:
        X2 = PAIR_CAR( e2035 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2051 ) ) )  goto L6060;
        X5 = PAIR_CAR( e2035 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X4 ) )  goto L6012;
        X3 = scrt1_caddr( e2035 );
        goto L6013;
L6012:
        X3 = X4;
L6013:
        X2 = transform_transform( X3 );
        X4 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6017;
        scrt1__24__cdr_2derror( X4 );
L6017:
        X3 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6020;
        scdebug_error( c2125, 
                       c2126, CONS( X3, EMPTYLIST ) );
L6020:
        SETGEN( PAIR_CAR( X3 ), X2 );
        X5 = PAIR_CAR( e2035 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X4 ) )  goto L6024;
        X3 = scrt1_cdddr( e2035 );
        goto L6025;
L6024:
        X3 = X4;
L6025:
        X4 = X3;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L6028:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L6029;
        X2 = X5;
        goto L6036;
L6029:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6032;
        scrt1__24__car_2derror( X4 );
L6032:
        X9 = PAIR_CAR( X4 );
        X8 = transform_transform( X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L6035;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L6028 );
L6035:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6040;
        scdebug_error( c2358, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6040:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L6028 );
L6036:
        X4 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6045;
        scrt1__24__cdr_2derror( X4 );
L6045:
        X3 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6048;
        scdebug_error( c2358, 
                       c2126, CONS( X3, EMPTYLIST ) );
L6048:
        SETGEN( PAIR_CDR( X3 ), X2 );
        X4 = PAIR_CAR( e2035 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X3 ) )  goto L6052;
        X2 = scrt1_caddr( e2035 );
        goto L6053;
L6052:
        X2 = X3;
L6053:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6055;
        X3 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2067 ) ) )  goto L6057;
        POPSTACKTRACE( transform_l_2dlambda_8f20e049( e2035 ) );
L6057:
        POPSTACKTRACE( e2035 );
L6055:
        POPSTACKTRACE( e2035 );
L6060:
        X1 = BOOLEAN( EQ( TSCPTAG( e2035 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6108;
        if  ( EQ( TSCPTAG( e2035 ), PAIRTAG ) )  goto L6068;
        scrt1__24__car_2derror( e2035 );
L6068:
        X2 = PAIR_CAR( e2035 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2067 ) ) )  goto L6108;
        X2 = SYMBOL_VALUE( current_2dlambda_2did_v );
        X4 = PAIR_CAR( e2035 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2067 ) ) );
        if  ( FALSE( X3 ) )  goto L6073;
        X5 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6077;
        scrt1__24__car_2derror( X5 );
L6077:
        X4 = PAIR_CAR( X5 );
        goto L6074;
L6073:
        X4 = X3;
L6074:
        SETGENTL( SYMBOL_VALUE( current_2dlambda_2did_v ), X4 );
        X6 = PAIR_CAR( e2035 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2067 ) ) );
        if  ( FALSE( X5 ) )  goto L6081;
        X6 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6085;
        scrt1__24__cdr_2derror( X6 );
L6085:
        X4 = PAIR_CDR( X6 );
        goto L6082;
L6081:
        X4 = X5;
L6082:
        X5 = X4;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L6089:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L6090;
        X3 = X6;
        goto L6097;
L6090:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6093;
        scrt1__24__car_2derror( X5 );
L6093:
        X10 = PAIR_CAR( X5 );
        X9 = transform_transform( X10 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L6096;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L6089 );
L6096:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6101;
        scdebug_error( c2358, 
                       c2126, CONS( X7, EMPTYLIST ) );
L6101:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L6089 );
L6097:
        X4 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6106;
        scdebug_error( c2358, 
                       c2126, CONS( X4, EMPTYLIST ) );
L6106:
        SETGEN( PAIR_CDR( X4 ), X3 );
        SETGENTL( SYMBOL_VALUE( current_2dlambda_2did_v ), X2 );
        POPSTACKTRACE( e2035 );
L6108:
        X1 = BOOLEAN( EQ( TSCPTAG( e2035 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6155;
        if  ( EQ( TSCPTAG( e2035 ), PAIRTAG ) )  goto L6116;
        scrt1__24__car_2derror( e2035 );
L6116:
        X2 = PAIR_CAR( e2035 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2083 ) ) )  goto L6155;
        X2 = transform_transform_2dif1( e2035 );
        if  ( TRUE( X2 ) )  goto L6119;
        X6 = PAIR_CAR( e2035 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X5 ) )  goto L6124;
        X6 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6128;
        scrt1__24__car_2derror( X6 );
L6128:
        X4 = PAIR_CAR( X6 );
        goto L6125;
L6124:
        X4 = X5;
L6125:
        X3 = transform_transform( X4 );
        X4 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6133;
        scdebug_error( c2125, 
                       c2126, CONS( X4, EMPTYLIST ) );
L6133:
        SETGEN( PAIR_CAR( X4 ), X3 );
        X6 = PAIR_CAR( e2035 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X5 ) )  goto L6137;
        X4 = scrt1_caddr( e2035 );
        goto L6138;
L6137:
        X4 = X5;
L6138:
        X3 = transform_transform( X4 );
        X5 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6142;
        scrt1__24__cdr_2derror( X5 );
L6142:
        X4 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6145;
        scdebug_error( c2125, 
                       c2126, CONS( X4, EMPTYLIST ) );
L6145:
        SETGEN( PAIR_CAR( X4 ), X3 );
        X6 = PAIR_CAR( e2035 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X5 ) )  goto L6149;
        X4 = scrt1_cadddr( e2035 );
        goto L6150;
L6149:
        X4 = X5;
L6150:
        X3 = transform_transform( X4 );
        X4 = scrt1_cdddr( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6153;
        scdebug_error( c2125, 
                       c2126, CONS( X4, EMPTYLIST ) );
L6153:
        SETGEN( PAIR_CAR( X4 ), X3 );
        POPSTACKTRACE( transform_transform_2dif2( e2035 ) );
L6119:
        POPSTACKTRACE( X2 );
L6155:
        X1 = BOOLEAN( EQ( TSCPTAG( e2035 ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L6178;
        if  ( EQ( TSCPTAG( e2035 ), PAIRTAG ) )  goto L6163;
        scrt1__24__car_2derror( e2035 );
L6163:
        X2 = PAIR_CAR( e2035 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2099 ) ) )  goto L6178;
        X5 = PAIR_CAR( e2035 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2099 ) ) );
        if  ( FALSE( X4 ) )  goto L6168;
        X3 = scrt1_caddr( e2035 );
        goto L6169;
L6168:
        X3 = X4;
L6169:
        X2 = transform_transform( X3 );
        X4 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6173;
        scrt1__24__cdr_2derror( X4 );
L6173:
        X3 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6176;
        scdebug_error( c2125, 
                       c2126, CONS( X3, EMPTYLIST ) );
L6176:
        SETGEN( PAIR_CAR( X3 ), X2 );
        POPSTACKTRACE( e2035 );
L6178:
        if  ( NEQ( TSCPTAG( e2035 ), PAIRTAG ) )  goto L6179;
        X1 = PAIR_CAR( e2035 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2115 ) ) )  goto L6181;
        X4 = PAIR_CAR( e2035 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2115 ) ) );
        if  ( FALSE( X3 ) )  goto L6187;
        X2 = scrt1_caddr( e2035 );
        goto L6188;
L6187:
        X2 = X3;
L6188:
        X1 = transform_transform( X2 );
        X3 = PAIR_CDR( e2035 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6192;
        scrt1__24__cdr_2derror( X3 );
L6192:
        X2 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6195;
        scdebug_error( c2125, 
                       c2126, CONS( X2, EMPTYLIST ) );
L6195:
        SETGEN( PAIR_CAR( X2 ), X1 );
        POPSTACKTRACE( e2035 );
L6181:
        POPSTACKTRACE( e2035 );
L6179:
        POPSTACKTRACE( e2035 );
}

DEFTSCP( transform_transform_2dif1_v );
DEFCSTRING( t6197, "TRANSFORM-IF1" );
EXTERNTSCPP( transform_log_2dbefore, XAL1( TSCP ) );
EXTERNTSCP( transform_log_2dbefore_v );
EXTERNTSCPP( scrt1_last_2dpair, XAL1( TSCP ) );
EXTERNTSCP( scrt1_last_2dpair_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( transform_log_2dafter, XAL1( TSCP ) );
EXTERNTSCP( transform_log_2dafter_v );
EXTERNTSCPP( plist_get, XAL2( TSCP, TSCP ) );
EXTERNTSCP( plist_get_v );
EXTERNTSCPP( scrt1_cadar, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadar_v );

TSCP  transform_transform_2dif1( e2596 )
        TSCP  e2596;
{
        TSCP  X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6197 );
        if  ( NEQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6199;
        X5 = PAIR_CAR( e2596 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6200;
L6199:
        X4 = FALSEVALUE;
L6200:
        if  ( FALSE( X4 ) )  goto L6203;
        X1 = scrt1_cadddr( e2596 );
        goto L6204;
L6203:
        X1 = X4;
L6204:
        if  ( NEQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6205;
        X5 = PAIR_CAR( e2596 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6206;
L6205:
        X4 = FALSEVALUE;
L6206:
        if  ( FALSE( X4 ) )  goto L6209;
        X2 = scrt1_caddr( e2596 );
        goto L6210;
L6209:
        X2 = X4;
L6210:
        if  ( NEQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6211;
        X5 = PAIR_CAR( e2596 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6212;
L6211:
        X4 = FALSEVALUE;
L6212:
        if  ( FALSE( X4 ) )  goto L6215;
        if  ( EQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6218;
        scrt1__24__cdr_2derror( e2596 );
L6218:
        X5 = PAIR_CDR( e2596 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6221;
        scrt1__24__car_2derror( X5 );
L6221:
        X3 = PAIR_CAR( X5 );
        goto L6216;
L6215:
        X3 = X4;
L6216:
        X6 = sc_cons( e2596, EMPTYLIST );
        X5 = sc_cons( c2603, X6 );
        X4 = X5;
        transform_transform_2dstack_v = sc_cons( X4, 
                                                 transform_transform_2dstack_v );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6225;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6226;
L6225:
        X4 = FALSEVALUE;
L6226:
        if  ( FALSE( X4 ) )  goto L6271;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6232;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6233;
L6232:
        X6 = FALSEVALUE;
L6233:
        if  ( FALSE( X6 ) )  goto L6236;
        X5 = scrt1_caddr( X3 );
        goto L6237;
L6236:
        X5 = X6;
L6237:
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6271;
        X6 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2067 ) ) )  goto L6271;
        transform_log_2dbefore( e2596 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6246;
        X10 = PAIR_CAR( X3 );
        X9 = BOOLEAN( EQ( _S2CUINT( X10 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6247;
L6246:
        X9 = FALSEVALUE;
L6247:
        if  ( FALSE( X9 ) )  goto L6250;
        X8 = scrt1_caddr( X3 );
        goto L6251;
L6250:
        X8 = X9;
L6251:
        if  ( NEQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6253;
        X10 = PAIR_CAR( X8 );
        X9 = BOOLEAN( EQ( _S2CUINT( X10 ), 
                          _S2CUINT( c2067 ) ) );
        goto L6254;
L6253:
        X9 = FALSEVALUE;
L6254:
        if  ( FALSE( X9 ) )  goto L6257;
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6260;
        scrt1__24__cdr_2derror( X8 );
L6260:
        X10 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6263;
        scrt1__24__cdr_2derror( X10 );
L6263:
        X7 = PAIR_CDR( X10 );
        goto L6258;
L6257:
        X7 = X9;
L6258:
        X6 = scrt1_last_2dpair( X7 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( X1, X8 );
        X8 = CONS( X2, X8 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6267;
        scrt1__24__car_2derror( X6 );
L6267:
        X7 = scrt1_cons_2a( c2083, 
                            CONS( PAIR_CAR( X6 ), X8 ) );
        SETGEN( PAIR_CAR( X6 ), X7 );
        X7 = transform_log_2dafter( X3 );
        POPSTACKTRACE( transform_transform( X7 ) );
L6271:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6272;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6273;
L6272:
        X4 = FALSEVALUE;
L6273:
        if  ( FALSE( X4 ) )  goto L6317;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6282;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6283;
L6282:
        X6 = FALSEVALUE;
L6283:
        if  ( FALSE( X6 ) )  goto L6286;
        X5 = scrt1_caddr( X3 );
        goto L6287;
L6286:
        X5 = X6;
L6287:
        X6 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L6317;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6290;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6291;
L6290:
        X6 = FALSEVALUE;
L6291:
        if  ( FALSE( X6 ) )  goto L6294;
        X5 = scrt1_cadddr( X3 );
        goto L6295;
L6294:
        X5 = X6;
L6295:
        X6 = SYMBOL_VALUE( false_2dalpha_v );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L6317;
        transform_log_2dbefore( e2596 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6297;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6298;
L6297:
        X6 = FALSEVALUE;
L6298:
        if  ( FALSE( X6 ) )  goto L6301;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6304;
        scrt1__24__cdr_2derror( X3 );
L6304:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6307;
        scrt1__24__car_2derror( X7 );
L6307:
        X5 = PAIR_CAR( X7 );
        goto L6302;
L6301:
        X5 = X6;
L6302:
        if  ( EQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6311;
        scrt1__24__cdr_2derror( e2596 );
L6311:
        X6 = PAIR_CDR( e2596 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6314;
        scdebug_error( c2125, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6314:
        SETGEN( PAIR_CAR( X6 ), X5 );
        X5 = transform_log_2dafter( e2596 );
        POPSTACKTRACE( transform_transform( X5 ) );
L6317:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6318;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6319;
L6318:
        X4 = FALSEVALUE;
L6319:
        if  ( FALSE( X4 ) )  goto L6373;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6328;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6329;
L6328:
        X6 = FALSEVALUE;
L6329:
        if  ( FALSE( X6 ) )  goto L6332;
        X5 = scrt1_caddr( X3 );
        goto L6333;
L6332:
        X5 = X6;
L6333:
        X6 = SYMBOL_VALUE( false_2dalpha_v );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L6373;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6336;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6337;
L6336:
        X6 = FALSEVALUE;
L6337:
        if  ( FALSE( X6 ) )  goto L6340;
        X5 = scrt1_cadddr( X3 );
        goto L6341;
L6340:
        X5 = X6;
L6341:
        X6 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L6373;
        transform_log_2dbefore( e2596 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6343;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6344;
L6343:
        X6 = FALSEVALUE;
L6344:
        if  ( FALSE( X6 ) )  goto L6347;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6350;
        scrt1__24__cdr_2derror( X3 );
L6350:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6353;
        scrt1__24__car_2derror( X7 );
L6353:
        X5 = PAIR_CAR( X7 );
        goto L6348;
L6347:
        X5 = X6;
L6348:
        if  ( EQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6357;
        scrt1__24__cdr_2derror( e2596 );
L6357:
        X6 = PAIR_CDR( e2596 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6360;
        scdebug_error( c2125, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6360:
        SETGEN( PAIR_CAR( X6 ), X5 );
        X6 = PAIR_CDR( e2596 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6364;
        scrt1__24__cdr_2derror( X6 );
L6364:
        X5 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6367;
        scdebug_error( c2125, 
                       c2126, CONS( X5, EMPTYLIST ) );
L6367:
        SETGEN( PAIR_CAR( X5 ), X1 );
        X5 = scrt1_cdddr( e2596 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6370;
        scdebug_error( c2125, 
                       c2126, CONS( X5, EMPTYLIST ) );
L6370:
        SETGEN( PAIR_CAR( X5 ), X2 );
        X5 = transform_log_2dafter( e2596 );
        POPSTACKTRACE( transform_transform( X5 ) );
L6373:
        X4 = BOOLEAN( EQ( TSCPTAG( X3 ), PAIRTAG ) );
        if  ( FALSE( X4 ) )  goto L6451;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6381;
        scrt1__24__car_2derror( X3 );
L6381:
        X5 = PAIR_CAR( X3 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2083 ) ) )  goto L6451;
        transform_log_2dbefore( e2596 );
        X6 = SYMBOL_VALUE( lambda_2dexp_v );
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( c3216, 
                                          EMPTYLIST, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6385;
        X8 = PAIR_CAR( X5 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2067 ) ) );
        goto L6386;
L6385:
        X7 = FALSEVALUE;
L6386:
        if  ( FALSE( X7 ) )  goto L6389;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6392;
        scrt1__24__cdr_2derror( X5 );
L6392:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6395;
        scrt1__24__car_2derror( X8 );
L6395:
        X6 = PAIR_CAR( X8 );
        goto L6390;
L6389:
        X6 = X7;
L6390:
        X8 = plist_get( X6, c3178 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6399;
        scrt1__24__car_2derror( X8 );
L6399:
        X7 = PAIR_CAR( X8 );
        X9 = plist_get( X6, c3178 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L6404;
        scrt1__24__cdr_2derror( X9 );
L6404:
        X10 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6407;
        scrt1__24__car_2derror( X10 );
L6407:
        X8 = PAIR_CAR( X10 );
        X10 = SYMBOL_VALUE( lambda_2dexp_v );
        X10 = UNKNOWNCALL( X10, 2 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( c3165, 
                                           EMPTYLIST, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X11 = SYMBOL_VALUE( lambda_2dexp_v );
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( c3165, 
                                            EMPTYLIST, 
                                            PROCEDURE_CLOSURE( X11 ) );
        X12 = sc_cons( X2, EMPTYLIST );
        X11 = X12;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L6415;
        scrt1__24__cdr_2derror( X9 );
L6415:
        X12 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L6418;
        scdebug_error( c2358, 
                       c2126, CONS( X12, EMPTYLIST ) );
L6418:
        SETGEN( PAIR_CDR( X12 ), X11 );
        X12 = sc_cons( X1, EMPTYLIST );
        X11 = X12;
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6423;
        scrt1__24__cdr_2derror( X10 );
L6423:
        X12 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L6426;
        scdebug_error( c2358, 
                       c2126, CONS( X12, EMPTYLIST ) );
L6426:
        SETGEN( PAIR_CDR( X12 ), X11 );
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( X8, X15 );
        X14 = CONS( scrt1_cons_2a( c2051, 
                                   CONS( EMPTYLIST, X15 ) ), 
                    X14 );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( X7, X15 );
        X14 = CONS( scrt1_cons_2a( c2051, 
                                   CONS( EMPTYLIST, X15 ) ), 
                    X14 );
        X16 = PAIR_CAR( X3 );
        X15 = BOOLEAN( EQ( _S2CUINT( X16 ), 
                           _S2CUINT( c2083 ) ) );
        if  ( FALSE( X15 ) )  goto L6430;
        X16 = scrt1_cadddr( X3 );
        goto L6431;
L6430:
        X16 = X15;
L6431:
        X13 = CONS( scrt1_cons_2a( c2083, CONS( X16, X14 ) ), 
                    X13 );
        X14 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( X8, X15 );
        X14 = CONS( scrt1_cons_2a( c2051, 
                                   CONS( EMPTYLIST, X15 ) ), 
                    X14 );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X15 = CONS( X7, X15 );
        X14 = CONS( scrt1_cons_2a( c2051, 
                                   CONS( EMPTYLIST, X15 ) ), 
                    X14 );
        X16 = PAIR_CAR( X3 );
        X15 = BOOLEAN( EQ( _S2CUINT( X16 ), 
                           _S2CUINT( c2083 ) ) );
        if  ( FALSE( X15 ) )  goto L6434;
        X16 = scrt1_caddr( X3 );
        goto L6435;
L6434:
        X16 = X15;
L6435:
        X13 = CONS( scrt1_cons_2a( c2083, CONS( X16, X14 ) ), 
                    X13 );
        X15 = PAIR_CAR( X3 );
        X14 = BOOLEAN( EQ( _S2CUINT( X15 ), 
                           _S2CUINT( c2083 ) ) );
        if  ( FALSE( X14 ) )  goto L6438;
        X16 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L6442;
        scrt1__24__car_2derror( X16 );
L6442:
        X15 = PAIR_CAR( X16 );
        goto L6439;
L6438:
        X15 = X14;
L6439:
        X12 = scrt1_cons_2a( c2083, CONS( X15, X13 ) );
        X11 = scrt1_cons_2a( X12, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6446;
        scrt1__24__cdr_2derror( X5 );
L6446:
        X12 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L6449;
        scdebug_error( c2358, 
                       c2126, CONS( X12, EMPTYLIST ) );
L6449:
        SETGEN( PAIR_CDR( X12 ), X11 );
        X11 = SYMBOL_VALUE( name_2da_2dlambda_v );
        X11 = UNKNOWNCALL( X11, 2 );
        VIA( PROCEDURE_CODE( X11 ) )( X7, 
                                      X9, 
                                      PROCEDURE_CLOSURE( X11 ) );
        X11 = SYMBOL_VALUE( name_2da_2dlambda_v );
        X11 = UNKNOWNCALL( X11, 2 );
        VIA( PROCEDURE_CODE( X11 ) )( X8, 
                                      X10, 
                                      PROCEDURE_CLOSURE( X11 ) );
        X13 = CONS( EMPTYLIST, EMPTYLIST );
        X13 = CONS( X10, X13 );
        X13 = CONS( X9, X13 );
        X13 = CONS( X5, X13 );
        X12 = scrt1_cons_2a( c2051, CONS( EMPTYLIST, X13 ) );
        X11 = transform_log_2dafter( X12 );
        POPSTACKTRACE( transform_transform( X11 ) );
L6451:
        X4 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X4 ) )  goto L6473;
        X5 = plist_get( X3, c2832 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2833 ) ) )  goto L6473;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X3 ) ) )  goto L6473;
        transform_log_2dbefore( e2596 );
        X5 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( EQ( TSCPTAG( e2596 ), PAIRTAG ) )  goto L6464;
        scrt1__24__cdr_2derror( e2596 );
L6464:
        X7 = PAIR_CDR( e2596 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6467;
        scrt1__24__cdr_2derror( X7 );
L6467:
        X6 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6470;
        scdebug_error( c2125, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6470:
        SETGEN( PAIR_CAR( X6 ), X5 );
        X5 = transform_log_2dafter( e2596 );
        POPSTACKTRACE( transform_transform( X5 ) );
L6473:
        X4 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X4 ) )  goto L6489;
        X5 = plist_get( X3, c2832 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2833 ) ) )  goto L6489;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X3 ) ) )  goto L6489;
        transform_log_2dbefore( e2596 );
        X5 = SYMBOL_VALUE( false_2dalpha_v );
        X6 = scrt1_cdddr( e2596 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6486;
        scdebug_error( c2125, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6486:
        SETGEN( PAIR_CAR( X6 ), X5 );
        X5 = transform_log_2dafter( e2596 );
        POPSTACKTRACE( transform_transform( X5 ) );
L6489:
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6492;
        X7 = PAIR_CAR( X3 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6493;
L6492:
        X6 = FALSEVALUE;
L6493:
        if  ( FALSE( X6 ) )  goto L6496;
        X5 = scrt1_caddr( X3 );
        goto L6497;
L6496:
        X5 = X6;
L6497:
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6499;
        X7 = PAIR_CAR( X5 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2882 ) ) );
        goto L6500;
L6499:
        X6 = FALSEVALUE;
L6500:
        if  ( FALSE( X6 ) )  goto L6503;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6506;
        scrt1__24__cdr_2derror( X5 );
L6506:
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6509;
        scrt1__24__car_2derror( X7 );
L6509:
        X4 = PAIR_CAR( X7 );
        goto L6504;
L6503:
        X4 = X6;
L6504:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2833 ) ) )  goto L6490;
        X5 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X5 ) ) )  goto L6511;
        X5 = SYMBOL_VALUE( false_2dalpha_v );
        X4 = BOOLEAN( EQ( _S2CUINT( X1 ), _S2CUINT( X5 ) ) );
        goto L6512;
L6511:
        X4 = FALSEVALUE;
L6512:
        if  ( TRUE( X4 ) )  goto L6517;
        X5 = SYMBOL_VALUE( false_2dalpha_v );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X5 ) ) )  goto L6518;
        X5 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( X5 ) ) )  goto L6517;
        POPSTACKTRACE( FALSEVALUE );
L6518:
        POPSTACKTRACE( FALSEVALUE );
L6490:
        POPSTACKTRACE( FALSEVALUE );
L6517:
        transform_log_2dbefore( e2596 );
        X4 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X4 ) ) )  goto L6523;
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6525;
        X6 = PAIR_CAR( X3 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6526;
L6525:
        X5 = FALSEVALUE;
L6526:
        if  ( FALSE( X5 ) )  goto L6529;
        X4 = scrt1_caddr( X3 );
        goto L6530;
L6529:
        X4 = X5;
L6530:
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6532;
        X11 = PAIR_CAR( X4 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2882 ) ) );
        goto L6533;
L6532:
        X10 = FALSEVALUE;
L6533:
        if  ( FALSE( X10 ) )  goto L6536;
        X9 = scrt1_cdddr( X4 );
        goto L6537;
L6536:
        X9 = X10;
L6537:
        X6 = scrt1_cons_2a( c2833, 
                            CONS( scrt1_cons_2a( c2965, 
                                                 CONS( scrt1_cadar( X9 ), 
                                                       X8 ) ), 
                                  X7 ) );
        X5 = scrt1_cons_2a( X6, CONS( EMPTYLIST, EMPTYLIST ) );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6540;
        scrt1__24__cdr_2derror( X4 );
L6540:
        X7 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6543;
        scrt1__24__cdr_2derror( X7 );
L6543:
        X6 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6546;
        scdebug_error( c2358, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6546:
        SETGEN( PAIR_CDR( X6 ), X5 );
L6523:
        X4 = transform_log_2dafter( X3 );
        POPSTACKTRACE( transform_transform( X4 ) );
}

DEFTSCP( transform_transform_2dif2_v );
DEFCSTRING( t6548, "TRANSFORM-IF2" );

TSCP  transform_transform_2dif2( e3469 )
        TSCP  e3469;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6548 );
L6549:
        if  ( NEQ( TSCPTAG( e3469 ), PAIRTAG ) )  goto L6550;
        X5 = PAIR_CAR( e3469 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6551;
L6550:
        X4 = FALSEVALUE;
L6551:
        if  ( FALSE( X4 ) )  goto L6554;
        X1 = scrt1_cadddr( e3469 );
        goto L6555;
L6554:
        X1 = X4;
L6555:
        if  ( NEQ( TSCPTAG( e3469 ), PAIRTAG ) )  goto L6556;
        X5 = PAIR_CAR( e3469 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6557;
L6556:
        X4 = FALSEVALUE;
L6557:
        if  ( FALSE( X4 ) )  goto L6560;
        X2 = scrt1_caddr( e3469 );
        goto L6561;
L6560:
        X2 = X4;
L6561:
        if  ( NEQ( TSCPTAG( e3469 ), PAIRTAG ) )  goto L6562;
        X5 = PAIR_CAR( e3469 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6563;
L6562:
        X4 = FALSEVALUE;
L6563:
        if  ( FALSE( X4 ) )  goto L6566;
        if  ( EQ( TSCPTAG( e3469 ), PAIRTAG ) )  goto L6569;
        scrt1__24__cdr_2derror( e3469 );
L6569:
        X5 = PAIR_CDR( e3469 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6572;
        scrt1__24__car_2derror( X5 );
L6572:
        X3 = PAIR_CAR( X5 );
        goto L6567;
L6566:
        X3 = X4;
L6567:
        X6 = sc_cons( e3469, EMPTYLIST );
        X5 = sc_cons( c3476, X6 );
        X4 = X5;
        transform_transform_2dstack_v = sc_cons( X4, 
                                                 transform_transform_2dstack_v );
        if  ( NEQ( TSCPTAG( e3469 ), PAIRTAG ) )  goto L6576;
        X4 = PAIR_CAR( e3469 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2083 ) ) )  goto L6578;
        X4 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X4 ) )  goto L6590;
        X5 = plist_get( X3, c3503 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c3504 ) ) )  goto L6590;
        transform_log_2dbefore( e3469 );
        if  ( FALSE( plist_get( X3, c3710 ) ) )  goto L6588;
        X5 = X2;
        goto L6589;
L6588:
        X5 = X1;
L6589:
        e3469 = transform_log_2dafter( X5 );
        GOBACK( L6549 );
L6578:
        POPSTACKTRACE( e3469 );
L6576:
        POPSTACKTRACE( e3469 );
L6590:
        X5 = SYMBOL_VALUE( true_2dalpha_v );
        X4 = BOOLEAN( EQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) );
        if  ( TRUE( X4 ) )  goto L6595;
        X5 = SYMBOL_VALUE( false_2dalpha_v );
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L6595;
        X5 = BOOLEAN( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) );
        if  ( FALSE( X5 ) )  goto L6639;
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6602;
        X7 = PAIR_CAR( X2 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6603;
L6602:
        X6 = FALSEVALUE;
L6603:
        if  ( FALSE( X6 ) )  goto L6639;
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6611;
        X9 = PAIR_CAR( X2 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6612;
L6611:
        X8 = FALSEVALUE;
L6612:
        if  ( FALSE( X8 ) )  goto L6615;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6618;
        scrt1__24__cdr_2derror( X2 );
L6618:
        X9 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L6621;
        scrt1__24__car_2derror( X9 );
L6621:
        X7 = PAIR_CAR( X9 );
        goto L6616;
L6615:
        X7 = X8;
L6616:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( X3 ) ) )  goto L6639;
        transform_log_2dbefore( e3469 );
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6624;
        X9 = PAIR_CAR( X2 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2083 ) ) );
        goto L6625;
L6624:
        X8 = FALSEVALUE;
L6625:
        if  ( FALSE( X8 ) )  goto L6628;
        X7 = scrt1_caddr( X2 );
        goto L6629;
L6628:
        X7 = X8;
L6629:
        X9 = PAIR_CDR( e3469 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L6633;
        scrt1__24__cdr_2derror( X9 );
L6633:
        X8 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6636;
        scdebug_error( c2125, 
                       c2126, CONS( X8, EMPTYLIST ) );
L6636:
        SETGEN( PAIR_CAR( X8 ), X7 );
        e3469 = transform_log_2dafter( e3469 );
        GOBACK( L6549 );
L6595:
        transform_log_2dbefore( e3469 );
        X5 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( X5 ) ) )  goto L6641;
        X4 = X2;
        goto L6642;
L6641:
        X4 = X1;
L6642:
        e3469 = transform_log_2dafter( X4 );
        GOBACK( L6549 );
L6639:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), SYMBOLTAG ) ) )
            )  goto L6643;
        if  ( NEQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L6645;
        X4 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2083 ) ) )  goto L6647;
        X6 = PAIR_CAR( X1 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X5 ) )  goto L6654;
        X6 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6658;
        scrt1__24__car_2derror( X6 );
L6658:
        X4 = PAIR_CAR( X6 );
        goto L6655;
L6654:
        X4 = X5;
L6655:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) )  goto L6650;
        transform_log_2dbefore( e3469 );
        X6 = PAIR_CAR( X1 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X5 ) )  goto L6663;
        X4 = scrt1_cadddr( X1 );
        goto L6664;
L6663:
        X4 = X5;
L6664:
        X5 = scrt1_cdddr( e3469 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6667;
        scdebug_error( c2125, 
                       c2126, CONS( X5, EMPTYLIST ) );
L6667:
        SETGEN( PAIR_CAR( X5 ), X4 );
        e3469 = transform_log_2dafter( e3469 );
        GOBACK( L6549 );
L6650:
        POPSTACKTRACE( e3469 );
L6647:
        POPSTACKTRACE( e3469 );
L6645:
        POPSTACKTRACE( e3469 );
L6643:
        POPSTACKTRACE( e3469 );
}

DEFTSCP( transform_log_2dbefore_v );
DEFCSTRING( t6669, "LOG-BEFORE" );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  transform_log_2dbefore( e3785 )
        TSCP  e3785;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t6669 );
        X1 = SYMBOL_VALUE( log_3f_v );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( c3787, 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L6671;
        X2 = SYMBOL_VALUE( sc_2dicode_v );
        X1 = SYMBOL_VALUE( pretty_2dprint_2d_24tree_v );
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( e3785, 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = SYMBOL_VALUE( sc_2dicode_v );
        POPSTACKTRACE( scrt6_format( X1, 
                                     CONS( c3791, EMPTYLIST ) ) );
L6671:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( transform_log_2dafter_v );
DEFCSTRING( t6674, "LOG-AFTER" );

TSCP  transform_log_2dafter( e3793 )
        TSCP  e3793;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t6674 );
        X1 = SYMBOL_VALUE( log_3f_v );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( c3787, 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L6676;
        X2 = SYMBOL_VALUE( sc_2dicode_v );
        X1 = SYMBOL_VALUE( pretty_2dprint_2d_24tree_v );
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( e3793, 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = SYMBOL_VALUE( sc_2dicode_v );
        scrt6_format( X1, CONS( c3795, EMPTYLIST ) );
L6676:
        POPSTACKTRACE( e3793 );
}

DEFTSCP( transform_l_2dlambda_8f20e049_v );
DEFCSTRING( t6679, "TRANSFORM-CALL-LAMBDA" );
EXTERNTSCPP( transform_bda_2dbind_8a6984c8, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( transform_bda_2dbind_8a6984c8_v );
EXTERNTSCPP( plist_put, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( plist_put_v );
EXTERNTSCPP( transform_var_2duses_93ec09fc, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( transform_var_2duses_93ec09fc_v );
EXTERNTSCPP( transform_mbda_2dvar_cbbaf994, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( transform_mbda_2dvar_cbbaf994_v );
EXTERNTSCPP( transform_to_2dvalue_e947c03, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( transform_to_2dvalue_e947c03_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  transform_l_2dlambda_8f20e049( e3797 )
        TSCP  e3797;
{
        TSCP  X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6679 );
        e3797 = CONS( e3797, EMPTYLIST );
        X3 = PAIR_CAR( e3797 );
        if  ( NEQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L6682;
        X5 = PAIR_CAR( X3 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6683;
L6682:
        X4 = FALSEVALUE;
L6683:
        if  ( FALSE( X4 ) )  goto L6686;
        X2 = scrt1_caddr( X3 );
        goto L6687;
L6686:
        X2 = X4;
L6687:
        if  ( NEQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6689;
        X4 = PAIR_CAR( X2 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2067 ) ) );
        goto L6690;
L6689:
        X3 = FALSEVALUE;
L6690:
        if  ( FALSE( X3 ) )  goto L6693;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L6696;
        scrt1__24__cdr_2derror( X2 );
L6696:
        X4 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6699;
        scrt1__24__car_2derror( X4 );
L6699:
        X1 = PAIR_CAR( X4 );
        goto L6694;
L6693:
        X1 = X3;
L6694:
        X3 = plist_get( X1, c3178 );
        X5 = PAIR_CAR( e3797 );
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6703;
        X7 = PAIR_CAR( X5 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6704;
L6703:
        X6 = FALSEVALUE;
L6704:
        if  ( FALSE( X6 ) )  goto L6707;
        X4 = scrt1_cdddr( X5 );
        goto L6708;
L6707:
        X4 = X6;
L6708:
        X2 = transform_bda_2dbind_8a6984c8( X3, X4 );
        X4 = X2;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L6711:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L6712;
        X3 = X5;
        goto L6723;
L6712:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6715;
        scrt1__24__car_2derror( X4 );
L6715:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L6719;
        scrt1__24__car_2derror( X9 );
L6719:
        X8 = PAIR_CAR( X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L6722;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L6711 );
L6722:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6727;
        scdebug_error( c2358, 
                       c2126, CONS( X6, EMPTYLIST ) );
L6727:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L6711 );
L6723:
        X5 = X2;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L6731:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L6732;
        X4 = X6;
        goto L6746;
L6732:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6735;
        scrt1__24__car_2derror( X5 );
L6735:
        X10 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6739;
        scrt1__24__cdr_2derror( X10 );
L6739:
        X11 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L6742;
        scrt1__24__car_2derror( X11 );
L6742:
        X9 = PAIR_CAR( X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L6745;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L6731 );
L6745:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6750;
        scdebug_error( c2358, 
                       c2126, CONS( X7, EMPTYLIST ) );
L6750:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L6731 );
L6746:
        X4 = CONS( X4, EMPTYLIST );
        X7 = PAIR_CAR( e3797 );
        if  ( NEQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L6754;
        X9 = PAIR_CAR( X7 );
        X8 = BOOLEAN( EQ( _S2CUINT( X9 ), 
                          _S2CUINT( c2051 ) ) );
        goto L6755;
L6754:
        X8 = FALSEVALUE;
L6755:
        if  ( FALSE( X8 ) )  goto L6758;
        X6 = scrt1_caddr( X7 );
        goto L6759;
L6758:
        X6 = X8;
L6759:
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6761;
        X8 = PAIR_CAR( X6 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2067 ) ) );
        goto L6762;
L6761:
        X7 = FALSEVALUE;
L6762:
        if  ( FALSE( X7 ) )  goto L6765;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L6768;
        scrt1__24__cdr_2derror( X6 );
L6768:
        X8 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L6771;
        scrt1__24__cdr_2derror( X8 );
L6771:
        X5 = PAIR_CDR( X8 );
        goto L6766;
L6765:
        X5 = X7;
L6766:
        X5 = CONS( X5, EMPTYLIST );
        X6 = FALSEVALUE;
        X6 = CONS( X6, EMPTYLIST );
        X7 = EMPTYLIST;
        X7 = CONS( X7, EMPTYLIST );
        X8 = EMPTYLIST;
        X8 = CONS( X8, EMPTYLIST );
        X9 = EMPTYLIST;
        X9 = CONS( X9, EMPTYLIST );
        X12 = sc_cons( PAIR_CAR( e3797 ), EMPTYLIST );
        X11 = sc_cons( c3818, X12 );
        X10 = X11;
        transform_transform_2dstack_v = sc_cons( X10, 
                                                 transform_transform_2dstack_v );
        X10 = X2;
L6780:
        if  ( EQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L6781;
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6785;
        scrt1__24__car_2derror( X10 );
L6785:
        X11 = PAIR_CAR( X10 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L6789;
        scrt1__24__car_2derror( X11 );
L6789:
        X12 = PAIR_CAR( X11 );
        plist_put( X12, c3847, _TSCP( 0 ) );
        plist_put( X12, c3851, _TSCP( 0 ) );
        X10 = PAIR_CDR( X10 );
        GOBACK( L6780 );
L6781:
        if  ( FALSE( X3 ) )  goto L6798;
        X10 = PAIR_CAR( X5 );
        X11 = X10;
L6797:
        if  ( EQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L6798;
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L6802;
        scrt1__24__car_2derror( X11 );
L6802:
        X12 = PAIR_CAR( X11 );
        transform_var_2duses_93ec09fc( X3, X12 );
        X11 = PAIR_CDR( X11 );
        GOBACK( L6797 );
L6798:
        X10 = X3;
L6806:
        if  ( EQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L6807;
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L6811;
        scrt1__24__car_2derror( X10 );
L6811:
        X11 = PAIR_CAR( X10 );
        X11 = CONS( X11, EMPTYLIST );
        X13 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L6815;
        scrt1__24__car_2derror( X13 );
L6815:
        X12 = PAIR_CAR( X13 );
        X12 = CONS( X12, EMPTYLIST );
        X13 = transform_mbda_2dvar_cbbaf994( PAIR_CAR( X11 ), 
                                             PAIR_CAR( X12 ), 
                                             PAIR_CAR( X5 ) );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( c3910 ) ) )  goto L6819;
        X14 = X13;
        SETGEN( PAIR_CAR( X12 ), X14 );
        goto L6826;
L6819:
        if  ( EQ( _S2CUINT( X13 ), _S2CUINT( c3917 ) ) )  goto L6826;
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( c2833 ) ) )  goto L6823;
        X14 = TRUEVALUE;
        SETGEN( PAIR_CAR( X6 ), X14 );
        goto L6826;
L6823:
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L6828;
        scrt1__24__car_2derror( X13 );
L6828:
        X14 = PAIR_CAR( X13 );
        if  ( NEQ( _S2CUINT( X14 ), _S2CUINT( c3929 ) ) )  goto L6825;
        X15 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L6833;
        scrt1__24__car_2derror( X15 );
L6833:
        X14 = PAIR_CAR( X15 );
        SETGEN( PAIR_CAR( X12 ), X14 );
        X16 = PAIR_CDR( X13 );
        if  ( EQ( TSCPTAG( X16 ), PAIRTAG ) )  goto L6837;
        scrt1__24__cdr_2derror( X16 );
L6837:
        X15 = PAIR_CDR( X16 );
        X14 = sc_cons( X15, PAIR_CAR( X9 ) );
        SETGEN( PAIR_CAR( X9 ), X14 );
        goto L6826;
L6825:
        X14 = sc_cons( X13, PAIR_CAR( X9 ) );
        SETGEN( PAIR_CAR( X9 ), X14 );
        X14 = EMPTYLIST;
        SETGEN( PAIR_CAR( X11 ), X14 );
L6826:
        if  ( FALSE( PAIR_CAR( X11 ) ) )  goto L6840;
        X14 = sc_cons( PAIR_CAR( X11 ), PAIR_CAR( X7 ) );
        SETGEN( PAIR_CAR( X7 ), X14 );
        X14 = sc_cons( PAIR_CAR( X12 ), PAIR_CAR( X8 ) );
        SETGEN( PAIR_CAR( X8 ), X14 );
L6840:
        X15 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L6844;
        scrt1__24__cdr_2derror( X15 );
L6844:
        X14 = PAIR_CDR( X15 );
        SETGEN( PAIR_CAR( X4 ), X14 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L6806 );
L6807:
        if  ( FALSE( PAIR_CAR( X9 ) ) )  goto L6847;
        X10 = transform_to_2dvalue_e947c03( X1, 
                                            PAIR_CAR( X5 ), 
                                            PAIR_CAR( X9 ) );
        SETGEN( PAIR_CAR( X5 ), X10 );
L6847:
        X10 = BOOLEAN( EQ( _S2CUINT( PAIR_CAR( X7 ) ), 
                           _S2CUINT( EMPTYLIST ) ) );
        if  ( FALSE( X10 ) )  goto L6863;
        X11 = scrt1_length( PAIR_CAR( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X11 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L6855;
        if  ( EQ( _S2CUINT( X11 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L6859;
        goto L6863;
L6855:
        if  ( FALSE( scrt2__3d_2dtwo( X11, _TSCP( 4 ) ) ) )  goto L6863;
L6859:
        X11 = SYMBOL_VALUE( log_3f_v );
        X11 = UNKNOWNCALL( X11, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X11 ) )( c3787, 
                                                   PROCEDURE_CLOSURE( X11 ) ) )
            )  goto L6866;
        X11 = SYMBOL_VALUE( sc_2dicode_v );
        X12 = CONS( X1, EMPTYLIST );
        scrt6_format( X11, CONS( c4005, X12 ) );
L6866:
        plist_put( X1, c4009, c4010 );
        X12 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L6869;
        scrt1__24__car_2derror( X12 );
L6869:
        X11 = PAIR_CAR( X12 );
        SETGEN( PAIR_CAR( e3797 ), X11 );
        goto L6864;
L6863:
        plist_put( X1, c3178, PAIR_CAR( X7 ) );
        X11 = PAIR_CAR( X8 );
        X12 = PAIR_CAR( e3797 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L6874;
        scrt1__24__cdr_2derror( X12 );
L6874:
        X14 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L6877;
        scrt1__24__cdr_2derror( X14 );
L6877:
        X13 = PAIR_CDR( X14 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L6880;
        scdebug_error( c2358, 
                       c2126, CONS( X13, EMPTYLIST ) );
L6880:
        SETGEN( PAIR_CDR( X13 ), X11 );
L6864:
        X10 = PAIR_CAR( X9 );
        if  ( TRUE( X10 ) )  goto L6886;
        if  ( TRUE( PAIR_CAR( X6 ) ) )  goto L6886;
        POPSTACKTRACE( PAIR_CAR( e3797 ) );
L6886:
        POPSTACKTRACE( transform_transform( PAIR_CAR( e3797 ) ) );
}

DEFTSCP( transform_bda_2dbind_8a6984c8_v );
DEFCSTRING( t6889, "TRANSFORM-LAMBDA-BIND" );

TSCP  transform_bda_2dbind_8a6984c8( v4250, v4251 )
        TSCP  v4250, v4251;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6889 );
        if  ( EQ( _S2CUINT( v4250 ), _S2CUINT( EMPTYLIST ) ) )  goto L6891;
        if  ( NEQ( TSCPTAG( v4250 ), PAIRTAG ) )  goto L6893;
        X3 = PAIR_CAR( v4250 );
        if  ( EQ( TSCPTAG( v4251 ), PAIRTAG ) )  goto L6897;
        scrt1__24__car_2derror( v4251 );
L6897:
        X5 = PAIR_CAR( v4251 );
        X4 = sc_cons( X5, EMPTYLIST );
        X2 = sc_cons( X3, X4 );
        X1 = X2;
        X3 = PAIR_CDR( v4250 );
        X4 = PAIR_CDR( v4251 );
        X2 = transform_bda_2dbind_8a6984c8( X3, X4 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L6893:
        POPSTACKTRACE( FALSEVALUE );
L6891:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( transform_var_2duses_93ec09fc_v );
DEFCSTRING( t6902, "COUNT-LAMBDA-VAR-USES" );
EXTERNTSCPP( scrt1_memq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memq_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  transform_var_2duses_93ec09fc( v4278, e4279 )
        TSCP  v4278, e4279;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t6902 );
L6903:
        if  ( NOT( AND( EQ( TSCPTAG( e4279 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e4279 ), SYMBOLTAG ) ) )
            )  goto L6904;
        if  ( FALSE( scrt1_memq( e4279, v4278 ) ) )  goto L6906;
        X3 = plist_get( e4279, c3847 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L6909;
        X2 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X3 ) ) );
        goto L6910;
L6909:
        X2 = scrt2__2b_2dtwo( _TSCP( 4 ), X3 );
L6910:
        POPSTACKTRACE( plist_put( e4279, c3847, X2 ) );
L6906:
        POPSTACKTRACE( FALSEVALUE );
L6904:
        X2 = BOOLEAN( EQ( TSCPTAG( e4279 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L6924;
        if  ( EQ( TSCPTAG( e4279 ), PAIRTAG ) )  goto L6918;
        scrt1__24__car_2derror( e4279 );
L6918:
        X3 = PAIR_CAR( e4279 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2099 ) ) )  goto L6924;
        X4 = PAIR_CAR( e4279 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2099 ) ) );
        if  ( FALSE( X3 ) )  goto L6922;
        e4279 = scrt1_caddr( e4279 );
        GOBACK( L6903 );
L6922:
        e4279 = X3;
        GOBACK( L6903 );
L6924:
        X2 = BOOLEAN( EQ( TSCPTAG( e4279 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L6967;
        if  ( EQ( TSCPTAG( e4279 ), PAIRTAG ) )  goto L6932;
        scrt1__24__car_2derror( e4279 );
L6932:
        X3 = PAIR_CAR( e4279 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2051 ) ) )  goto L6967;
        X4 = PAIR_CAR( e4279 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X3 ) )  goto L6936;
        X1 = scrt1_caddr( e4279 );
        goto L6937;
L6936:
        X1 = X3;
L6937:
        X5 = PAIR_CAR( e4279 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X4 ) )  goto L6941;
        X3 = scrt1_cdddr( e4279 );
        goto L6942;
L6941:
        X3 = X4;
L6942:
        X4 = X3;
L6945:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L6946;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L6950;
        scrt1__24__car_2derror( X4 );
L6950:
        X5 = PAIR_CAR( X4 );
        transform_var_2duses_93ec09fc( v4278, X5 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L6945 );
L6946:
        X3 = BOOLEAN( EQ( TSCPTAG( X1 ), PAIRTAG ) );
        if  ( FALSE( X3 ) )  goto L6966;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L6960;
        scrt1__24__car_2derror( X1 );
L6960:
        X4 = PAIR_CAR( X1 );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( c2067 ) ) )  goto L6966;
        X5 = PAIR_CAR( e4279 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X4 ) )  goto L6964;
        e4279 = scrt1_caddr( e4279 );
        GOBACK( L6903 );
L6964:
        e4279 = X4;
        GOBACK( L6903 );
L6967:
        X2 = BOOLEAN( EQ( TSCPTAG( e4279 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L6981;
        if  ( EQ( TSCPTAG( e4279 ), PAIRTAG ) )  goto L6975;
        scrt1__24__car_2derror( e4279 );
L6975:
        X3 = PAIR_CAR( e4279 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2115 ) ) )  goto L6981;
        X4 = PAIR_CAR( e4279 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2115 ) ) );
        if  ( FALSE( X3 ) )  goto L6979;
        e4279 = scrt1_caddr( e4279 );
        GOBACK( L6903 );
L6979:
        e4279 = X3;
        GOBACK( L6903 );
L6981:
        X2 = BOOLEAN( EQ( TSCPTAG( e4279 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L7009;
        if  ( EQ( TSCPTAG( e4279 ), PAIRTAG ) )  goto L6989;
        scrt1__24__car_2derror( e4279 );
L6989:
        X3 = PAIR_CAR( e4279 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2067 ) ) )  goto L7009;
        X5 = PAIR_CAR( e4279 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2067 ) ) );
        if  ( FALSE( X4 ) )  goto L6993;
        X5 = PAIR_CDR( e4279 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L6997;
        scrt1__24__cdr_2derror( X5 );
L6997:
        X3 = PAIR_CDR( X5 );
        goto L6994;
L6993:
        X3 = X4;
L6994:
        X4 = X3;
L7001:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L7002;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L7006;
        scrt1__24__car_2derror( X4 );
L7006:
        X5 = PAIR_CAR( X4 );
        transform_var_2duses_93ec09fc( v4278, X5 );
        X4 = PAIR_CDR( X4 );
        GOBACK( L7001 );
L7002:
        POPSTACKTRACE( FALSEVALUE );
L7009:
        if  ( NEQ( TSCPTAG( e4279 ), PAIRTAG ) )  goto L7010;
        X2 = PAIR_CAR( e4279 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c2083 ) ) )  goto L7012;
        X4 = PAIR_CAR( e4279 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X3 ) )  goto L7018;
        X4 = PAIR_CDR( e4279 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L7022;
        scrt1__24__car_2derror( X4 );
L7022:
        X2 = PAIR_CAR( X4 );
        goto L7019;
L7018:
        X2 = X3;
L7019:
        transform_var_2duses_93ec09fc( v4278, X2 );
        X4 = PAIR_CAR( e4279 );
        X3 = BOOLEAN( EQ( _S2CUINT( X4 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X3 ) )  goto L7026;
        X2 = scrt1_caddr( e4279 );
        goto L7027;
L7026:
        X2 = X3;
L7027:
        transform_var_2duses_93ec09fc( v4278, X2 );
        X3 = PAIR_CAR( e4279 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2083 ) ) );
        if  ( FALSE( X2 ) )  goto L7030;
        e4279 = scrt1_cadddr( e4279 );
        GOBACK( L6903 );
L7030:
        e4279 = X2;
        GOBACK( L6903 );
L7012:
        POPSTACKTRACE( FALSEVALUE );
L7010:
        POPSTACKTRACE( FALSEVALUE );
L6966:
        if  ( FALSE( scrt1_memq( X1, v4278 ) ) )  goto L7032;
        X3 = plist_get( X1, c3851 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L7035;
        X2 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X3 ) ) );
        goto L7036;
L7035:
        X2 = scrt2__2b_2dtwo( _TSCP( 4 ), X3 );
L7036:
        POPSTACKTRACE( plist_put( X1, c3851, X2 ) );
L7032:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( transform_mbda_2dvar_cbbaf994_v );
DEFCSTRING( t7037, "TRANSFORM-LAMBDA-VAR" );

TSCP  transform_m4661( v5319, s5320 )
        TSCP  v5319, s5320;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "MEMVARLIST [inside TRANSFORM-LAMBDA-VAR]" );
        X1 = s5320;
        X2 = FALSEVALUE;
L7041:
        if  ( FALSE( X1 ) )  goto L7042;
        X3 = FALSEVALUE;
        goto L7043;
L7042:
        X3 = TRUEVALUE;
L7043:
        if  ( TRUE( X3 ) )  goto L7048;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L7052;
        scrt1__24__car_2derror( X1 );
L7052:
        X4 = PAIR_CAR( X1 );
        if  ( NOT( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X4 ), SYMBOLTAG ) ) )
            )  goto L7048;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L7055;
        scrt1__24__cdr_2derror( X1 );
L7055:
        X4 = PAIR_CDR( X1 );
        if  ( TRUE( X2 ) )  goto L7058;
        X5 = PAIR_CAR( X1 );
        X2 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( v5319 ) ) );
L7058:
        X1 = X4;
        GOBACK( L7041 );
L7048:
        if  ( FALSE( X2 ) )  goto L7060;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( EMPTYLIST ) ) ) );
L7060:
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( transform_log_2dtransform, XAL1( TSCP ) );
EXTERNTSCP( transform_log_2dtransform_v );

TSCP  transform_mbda_2dvar_cbbaf994( v4653, v4654, e4655 )
        TSCP  v4653, v4654, e4655;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t7037 );
        if  ( NEQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7062;
        X6 = PAIR_CAR( v4654 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2067 ) ) );
        goto L7063;
L7062:
        X5 = FALSEVALUE;
L7063:
        if  ( FALSE( X5 ) )  goto L7066;
        if  ( EQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7069;
        scrt1__24__cdr_2derror( v4654 );
L7069:
        X6 = PAIR_CDR( v4654 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7072;
        scrt1__24__cdr_2derror( X6 );
L7072:
        X4 = PAIR_CDR( X6 );
        goto L7067;
L7066:
        X4 = X5;
L7067:
        if  ( NEQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7074;
        X6 = PAIR_CAR( v4654 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2067 ) ) );
        goto L7075;
L7074:
        X5 = FALSEVALUE;
L7075:
        if  ( FALSE( X5 ) )  goto L7078;
        if  ( EQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7081;
        scrt1__24__cdr_2derror( v4654 );
L7081:
        X6 = PAIR_CDR( v4654 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7084;
        scrt1__24__car_2derror( X6 );
L7084:
        X1 = PAIR_CAR( X6 );
        goto L7079;
L7078:
        X1 = X5;
L7079:
        X2 = plist_get( v4653, c3851 );
        X3 = plist_get( v4653, c3847 );
        if  ( TRUE( plist_get( v4653, c4667 ) ) )  goto L7087;
        if  ( TRUE( plist_get( v4653, c4671 ) ) )  goto L7089;
        if  ( NEQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7091;
        X6 = PAIR_CAR( v4654 );
        X5 = BOOLEAN( EQ( _S2CUINT( X6 ), 
                          _S2CUINT( c2067 ) ) );
        goto L7092;
L7091:
        X5 = FALSEVALUE;
L7092:
        if  ( FALSE( X5 ) )  goto L7114;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L7098;
        X6 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 4 ) ) ) );
        goto L7099;
L7098:
        X6 = scrt2__3d_2dtwo( X2, _TSCP( 4 ) );
L7099:
        if  ( FALSE( X6 ) )  goto L7114;
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L7105;
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L7109;
        goto L7114;
L7105:
        if  ( TRUE( scrt2_zero_3f( X3 ) ) )  goto L7109;
        goto L7114;
L7089:
        POPSTACKTRACE( c3917 );
L7087:
        POPSTACKTRACE( c3917 );
L7109:
        X5 = CONS( X1, EMPTYLIST );
        X5 = CONS( c5249, X5 );
        transform_log_2dtransform( CONS( v4653, X5 ) );
        X6 = sc_cons( v4654, EMPTYLIST );
        X5 = sc_cons( v4653, X6 );
        POPSTACKTRACE( X5 );
L7114:
        if  ( FALSE( X4 ) )  goto L7160;
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L7120;
        X5 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L7121;
L7120:
        X5 = scrt2_zero_3f( X3 );
L7121:
        if  ( FALSE( X5 ) )  goto L7160;
        X7 = scrt1_length( X4 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L7127;
        X6 = BOOLEAN( EQ( _S2CUINT( _TSCP( 4 ) ), 
                          _S2CUINT( X7 ) ) );
        goto L7128;
L7127:
        X6 = scrt2__3d_2dtwo( _TSCP( 4 ), X7 );
L7128:
        if  ( FALSE( X6 ) )  goto L7160;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L7137;
        scrt1__24__car_2derror( X4 );
L7137:
        X7 = PAIR_CAR( X4 );
        if  ( NOT( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X7 ), SYMBOLTAG ) ) )
            )  goto L7160;
        X8 = PAIR_CAR( X4 );
        if  ( FALSE( plist_get( X8, c4671 ) ) )  goto L7139;
        X7 = FALSEVALUE;
        goto L7140;
L7139:
        X7 = TRUEVALUE;
L7140:
        if  ( FALSE( X7 ) )  goto L7160;
        X8 = plist_get( X1, c3178 );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L7160;
        X8 = plist_get( X1, c4781 );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L7160;
        X8 = CONS( PAIR_CAR( X4 ), EMPTYLIST );
        X8 = CONS( c5228, X8 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = CONS( v4653, X9 );
        transform_log_2dtransform( CONS( scrt1_cons_2a( c2051, 
                                                        CONS( EMPTYLIST, 
                                                              X9 ) ), 
                                         X8 ) );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( v4653, X10 );
        X9 = scrt1_cons_2a( c2051, CONS( EMPTYLIST, X10 ) );
        X11 = PAIR_CAR( X4 );
        X10 = sc_cons( X11, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        POPSTACKTRACE( X8 );
L7160:
        X5 = BOOLEAN( AND( EQ( TSCPTAG( v4654 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( v4654 ), 
                               SYMBOLTAG ) ) );
        if  ( FALSE( X5 ) )  goto L7190;
        X6 = SYMBOL_VALUE( true_2dalpha_v );
        if  ( EQ( _S2CUINT( v4654 ), _S2CUINT( X6 ) ) )  goto L7168;
        X6 = SYMBOL_VALUE( false_2dalpha_v );
        if  ( EQ( _S2CUINT( v4654 ), _S2CUINT( X6 ) ) )  goto L7168;
        X6 = plist_get( v4654, c3503 );
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( c3504 ) ) )  goto L7168;
        X6 = plist_get( v4654, c3503 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c4819 ) ) )  goto L7190;
        if  ( FALSE( plist_get( v4654, c4671 ) ) )  goto L7180;
        X6 = FALSEVALUE;
        goto L7181;
L7180:
        X6 = TRUEVALUE;
L7181:
        if  ( FALSE( X6 ) )  goto L7190;
        if  ( TRUE( plist_get( v4654, c4667 ) ) )  goto L7190;
L7168:
        X5 = CONS( v4654, EMPTYLIST );
        X5 = CONS( c5228, X5 );
        transform_log_2dtransform( CONS( v4653, X5 ) );
        X6 = sc_cons( v4654, EMPTYLIST );
        X5 = sc_cons( v4653, X6 );
        POPSTACKTRACE( X5 );
L7190:
        if  ( EQ( TSCPTAG( e4655 ), PAIRTAG ) )  goto L7194;
        scrt1__24__car_2derror( e4655 );
L7194:
        X6 = PAIR_CAR( e4655 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7197;
        X7 = PAIR_CAR( X6 );
        X5 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2083 ) ) );
        goto L7198;
L7197:
        X5 = FALSEVALUE;
L7198:
        if  ( FALSE( X5 ) )  goto L7259;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L7204;
        X6 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 4 ) ) ) );
        goto L7205;
L7204:
        X6 = scrt2__3d_2dtwo( X3, _TSCP( 4 ) );
L7205:
        if  ( FALSE( X6 ) )  goto L7259;
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L7210;
        X7 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L7211;
L7210:
        X7 = scrt2_zero_3f( X2 );
L7211:
        if  ( FALSE( X7 ) )  goto L7259;
        X9 = PAIR_CAR( e4655 );
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7221;
        X11 = PAIR_CAR( X9 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2083 ) ) );
        goto L7222;
L7221:
        X10 = FALSEVALUE;
L7222:
        if  ( FALSE( X10 ) )  goto L7225;
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7228;
        scrt1__24__cdr_2derror( X9 );
L7228:
        X11 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L7231;
        scrt1__24__car_2derror( X11 );
L7231:
        X8 = PAIR_CAR( X11 );
        goto L7226;
L7225:
        X8 = X10;
L7226:
        if  ( EQ( _S2CUINT( X8 ), _S2CUINT( v4653 ) ) )  goto L7233;
        X10 = PAIR_CAR( e4655 );
        if  ( NEQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L7238;
        X12 = PAIR_CAR( X10 );
        X11 = BOOLEAN( EQ( _S2CUINT( X12 ), 
                           _S2CUINT( c2083 ) ) );
        goto L7239;
L7238:
        X11 = FALSEVALUE;
L7239:
        if  ( FALSE( X11 ) )  goto L7242;
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L7245;
        scrt1__24__cdr_2derror( X10 );
L7245:
        X12 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L7248;
        scrt1__24__car_2derror( X12 );
L7248:
        X9 = PAIR_CAR( X12 );
        goto L7243;
L7242:
        X9 = X11;
L7243:
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7251;
        X11 = PAIR_CAR( X9 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2051 ) ) );
        goto L7252;
L7251:
        X10 = FALSEVALUE;
L7252:
        if  ( FALSE( X10 ) )  goto L7255;
        X8 = scrt1_cdddr( X9 );
        goto L7256;
L7255:
        X8 = X10;
L7256:
        if  ( FALSE( transform_m4661( v4653, X8 ) ) )  goto L7259;
L7233:
        X5 = CONS( v4654, EMPTYLIST );
        X5 = CONS( c5228, X5 );
        transform_log_2dtransform( CONS( v4653, X5 ) );
        X6 = sc_cons( v4654, EMPTYLIST );
        X5 = sc_cons( v4653, X6 );
        POPSTACKTRACE( X5 );
L7259:
        X6 = PAIR_CAR( e4655 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7264;
        X7 = PAIR_CAR( X6 );
        X5 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2051 ) ) );
        goto L7265;
L7264:
        X5 = FALSEVALUE;
L7265:
        if  ( FALSE( X5 ) )  goto L7297;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L7271;
        X6 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( _TSCP( 4 ) ) ) );
        goto L7272;
L7271:
        X6 = scrt2__3d_2dtwo( X3, _TSCP( 4 ) );
L7272:
        if  ( FALSE( X6 ) )  goto L7297;
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L7277;
        X7 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L7278;
L7277:
        X7 = scrt2_zero_3f( X2 );
L7278:
        if  ( FALSE( X7 ) )  goto L7297;
        X9 = PAIR_CAR( e4655 );
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7287;
        X11 = PAIR_CAR( X9 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2051 ) ) );
        goto L7288;
L7287:
        X10 = FALSEVALUE;
L7288:
        if  ( FALSE( X10 ) )  goto L7291;
        X8 = scrt1_cdddr( X9 );
        goto L7292;
L7291:
        X8 = X10;
L7292:
        if  ( FALSE( transform_m4661( v4653, X8 ) ) )  goto L7297;
        X8 = CONS( v4654, EMPTYLIST );
        X8 = CONS( c5228, X8 );
        transform_log_2dtransform( CONS( v4653, X8 ) );
        X9 = sc_cons( v4654, EMPTYLIST );
        X8 = sc_cons( v4653, X9 );
        POPSTACKTRACE( X8 );
L7297:
        if  ( NEQ( TSCPTAG( v4654 ), PAIRTAG ) )  goto L7298;
        X5 = PAIR_CAR( v4654 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2051 ) ) )  goto L7300;
        X7 = PAIR_CAR( v4654 );
        X6 = BOOLEAN( EQ( _S2CUINT( X7 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X6 ) )  goto L7305;
        X5 = scrt1_caddr( v4654 );
        goto L7306;
L7305:
        X5 = X6;
L7306:
        if  ( NEQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L7308;
        X6 = PAIR_CAR( X5 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2882 ) ) )  goto L7310;
        if  ( TRUE( plist_get( v4653, c2832 ) ) )  goto L7313;
        X11 = PAIR_CAR( v4654 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2051 ) ) );
        if  ( FALSE( X10 ) )  goto L7319;
        X9 = scrt1_caddr( v4654 );
        goto L7320;
L7319:
        X9 = X10;
L7320:
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7322;
        X11 = PAIR_CAR( X9 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2882 ) ) );
        goto L7323;
L7322:
        X10 = FALSEVALUE;
L7323:
        if  ( FALSE( X10 ) )  goto L7326;
        X8 = scrt1_cdddr( X9 );
        goto L7327;
L7326:
        X8 = X10;
L7327:
        X7 = scrt1_last_2dpair( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L7329;
        scrt1__24__car_2derror( X7 );
L7329:
        X6 = PAIR_CAR( X7 );
        if  ( NEQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7315;
        X11 = PAIR_CAR( v4654 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2051 ) ) );
        if  ( FALSE( X10 ) )  goto L7335;
        X9 = scrt1_caddr( v4654 );
        goto L7336;
L7335:
        X9 = X10;
L7336:
        if  ( NEQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L7338;
        X11 = PAIR_CAR( X9 );
        X10 = BOOLEAN( EQ( _S2CUINT( X11 ), 
                           _S2CUINT( c2882 ) ) );
        goto L7339;
L7338:
        X10 = FALSEVALUE;
L7339:
        if  ( FALSE( X10 ) )  goto L7342;
        X8 = scrt1_cdddr( X9 );
        goto L7343;
L7342:
        X8 = X10;
L7343:
        X7 = scrt1_last_2dpair( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L7346;
        scrt1__24__car_2derror( X7 );
L7346:
        X8 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L7349;
        scrt1__24__car_2derror( X8 );
L7349:
        X6 = PAIR_CAR( X8 );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( c2833 ) ) )  goto L7331;
        plist_put( v4653, c2832, c2833 );
        POPSTACKTRACE( c2833 );
L7331:
        POPSTACKTRACE( c3917 );
L7315:
        POPSTACKTRACE( c3917 );
L7313:
        POPSTACKTRACE( c3917 );
L7310:
        POPSTACKTRACE( c3917 );
L7308:
        POPSTACKTRACE( c3917 );
L7300:
        POPSTACKTRACE( c3917 );
L7298:
        POPSTACKTRACE( c3917 );
}

DEFTSCP( transform_log_2dtransform_v );
DEFCSTRING( t7352, "LOG-TRANSFORM" );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );

TSCP  transform_log_2dtransform( e5361 )
        TSCP  e5361;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t7352 );
        X1 = SYMBOL_VALUE( log_3f_v );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( c3787, 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L7354;
        X1 = e5361;
L7358:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L7359;
        X2 = SYMBOL_VALUE( sc_2dicode_v );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L7363;
        scrt1__24__car_2derror( X1 );
L7363:
        X3 = CONS( PAIR_CAR( X1 ), EMPTYLIST );
        scrt6_format( X2, CONS( c5386, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L7358 );
L7359:
        POPSTACKTRACE( scrt6_newline( CONS( SYMBOL_VALUE( sc_2dicode_v ), 
                                            EMPTYLIST ) ) );
L7354:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( transform_to_2dvalue_e947c03_v );
DEFCSTRING( t7366, "TRANSFORM-VAR-TO-VALUE" );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );

TSCP  transform_to_2dvalue_e947c03( l5388, e5389, s5390 )
        TSCP  l5388, e5389, s5390;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t7366 );
L7367:
        l5388 = CONS( l5388, EMPTYLIST );
        X1 = scrt1_assoc( e5389, s5390 );
        if  ( FALSE( X1 ) )  goto L7369;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L7372;
        scrt1__24__cdr_2derror( X1 );
L7372:
        X3 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L7375;
        scrt1__24__car_2derror( X3 );
L7375:
        X2 = PAIR_CAR( X3 );
        e5389 = X2;
        l5388 = PAIR_CAR( l5388 );
        GOBACK( L7367 );
L7369:
        X2 = BOOLEAN( EQ( TSCPTAG( e5389 ), PAIRTAG ) );
        if  ( FALSE( X2 ) )  goto L7418;
        if  ( EQ( TSCPTAG( e5389 ), PAIRTAG ) )  goto L7384;
        scrt1__24__car_2derror( e5389 );
L7384:
        X3 = PAIR_CAR( e5389 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( c2051 ) ) )  goto L7418;
        X5 = PAIR_CAR( e5389 );
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X4 ) )  goto L7388;
        X3 = scrt1_caddr( e5389 );
        goto L7389;
L7388:
        X3 = X4;
L7389:
        X4 = transform_to_2dvalue_e947c03( PAIR_CAR( l5388 ), 
                                           X3, s5390 );
        X6 = PAIR_CDR( e5389 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7394;
        scrt1__24__cdr_2derror( X6 );
L7394:
        X5 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L7397;
        scdebug_error( c2125, 
                       c2126, CONS( X5, EMPTYLIST ) );
L7397:
        SETGEN( PAIR_CAR( X5 ), X4 );
        X8 = PAIR_CAR( e5389 );
        X7 = BOOLEAN( EQ( _S2CUINT( X8 ), 
                          _S2CUINT( c2051 ) ) );
        if  ( FALSE( X7 ) )  goto L7401;
        X6 = scrt1_cdddr( e5389 );
        goto L7402;
L7401:
        X6 = X7;
L7402:
        X5 = transform_to_2dvalue_e947c03( PAIR_CAR( l5388 ), 
                                           X6, s5390 );
        X7 = PAIR_CDR( e5389 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L7406;
        scrt1__24__cdr_2derror( X7 );
L7406:
        X6 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L7409;
        scdebug_error( c2358, 
                       c2126, CONS( X6, EMPTYLIST ) );
L7409:
        SETGEN( PAIR_CDR( X6 ), X5 );
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( X4 ) ) )  goto L7411;
        if  ( NEQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L7413;
        X5 = PAIR_CAR( X4 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c2067 ) ) )  goto L7415;
        POPSTACKTRACE( transform_l_2dlambda_8f20e049( e5389 ) );
L7415:
        POPSTACKTRACE( e5389 );
L7413:
        POPSTACKTRACE( e5389 );
L7411:
        POPSTACKTRACE( e5389 );
L7418:
        if  ( NEQ( TSCPTAG( e5389 ), PAIRTAG ) )  goto L7419;
        X1 = PAIR_CAR( e5389 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2882 ) ) )  goto L7425;
        POPSTACKTRACE( e5389 );
L7419:
        POPSTACKTRACE( e5389 );
L7425:
        X1 = PAIR_CAR( e5389 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c2067 ) ) )  goto L7427;
        X3 = PAIR_CAR( e5389 );
        X2 = BOOLEAN( EQ( _S2CUINT( X3 ), 
                          _S2CUINT( c2067 ) ) );
        if  ( FALSE( X2 ) )  goto L7432;
        X3 = PAIR_CDR( e5389 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L7436;
        scrt1__24__car_2derror( X3 );
L7436:
        X1 = PAIR_CAR( X3 );
        goto L7433;
L7432:
        X1 = X2;
L7433:
        SETGEN( PAIR_CAR( l5388 ), X1 );
L7427:
        X2 = PAIR_CAR( e5389 );
        X1 = transform_to_2dvalue_e947c03( PAIR_CAR( l5388 ), 
                                           X2, s5390 );
        SETGEN( PAIR_CAR( e5389 ), X1 );
        X2 = PAIR_CDR( e5389 );
        X1 = transform_to_2dvalue_e947c03( PAIR_CAR( l5388 ), 
                                           X2, s5390 );
        SETGEN( PAIR_CDR( e5389 ), X1 );
        POPSTACKTRACE( e5389 );
}

void scrt2__init();
void scrt6__init();
void plist__init();
void scdebug__init();
void scrt1__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        scrt6__init();
        plist__init();
        scdebug__init();
        scrt1__init();
        MAXDISPLAY( 0 );
}

void  transform__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(transform SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t5993, 
                       ADR( transform_transform_2dstack_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t5994, 
                       ADR( transform_transform_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_transform, EMPTYLIST ) );
        INITIALIZEVAR( t5998, 
                       ADR( transform_transformx_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_transformx, EMPTYLIST ) );
        INITIALIZEVAR( t6197, 
                       ADR( transform_transform_2dif1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_transform_2dif1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6548, 
                       ADR( transform_transform_2dif2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_transform_2dif2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6669, 
                       ADR( transform_log_2dbefore_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_log_2dbefore, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6674, 
                       ADR( transform_log_2dafter_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_log_2dafter, EMPTYLIST ) );
        INITIALIZEVAR( t6679, 
                       ADR( transform_l_2dlambda_8f20e049_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      transform_l_2dlambda_8f20e049, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6889, 
                       ADR( transform_bda_2dbind_8a6984c8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      transform_bda_2dbind_8a6984c8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t6902, 
                       ADR( transform_var_2duses_93ec09fc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      transform_var_2duses_93ec09fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t7037, 
                       ADR( transform_mbda_2dvar_cbbaf994_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      transform_mbda_2dvar_cbbaf994, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t7352, 
                       ADR( transform_log_2dtransform_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      transform_log_2dtransform, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t7366, 
                       ADR( transform_to_2dvalue_e947c03_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      transform_to_2dvalue_e947c03, 
                                      EMPTYLIST ) );
        return;
}
