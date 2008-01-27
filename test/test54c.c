/* Global variable access test */

char  c1 = 'A', c2 = 'c';

short int  si1 = -4, si2 = 24;

short unsigned  su1 = 0xFFFF, su2 = 23;

int  i1 = -2, i2 = 2;

unsigned int  ui1 = 0xFFFFFFFF, ui2 = 0x1FFFFFFF, ui3 = 0xFFFF;

float  f1 = 23.23;

double  d1 = 32.32, ad1[3] = {0.0, 1.0, 2.0};

/* Typed function returns */

char  fc1() { return c1; }

char  fc2() { return c2; }

short int  fsi1() { return si1; }

short int  fsi2() { return si2; }

short unsigned fsu1() { return su1; }

short unsigned fsu2() { return su2; }

int  fi1() { return i1; }

int  fi2() { return i2; }

unsigned int fui1() { return ui1; }

unsigned int fui2() { return ui2; }

unsigned int fui3() { return ui3; }

float  ff1() { return f1; }

double  fd1()  { return d1; }

/* Typed function arguments and return */

#ifndef __STDC__

char* loop_pointer( x ) char *x; { return x; }

char* loop_array( x ) char *x; { return x; }

char loop_char( x) char x; { return x; }

short int loop_shortint( x ) short int x; { return x; }

unsigned short int loop_shortunsigned( x ) unsigned short int x; { return x; }

int loop_int( x ) int x; { return x; }

unsigned int loop_unsigned( x ) unsigned int x; { return x; }

long int loop_longint( x ) long int x; { return x; }

unsigned long int loop_longunsigned( x ) unsigned long int x; { return x; }

float loop_float( x ) float x; { return x; }

double loop_double( x ) double x; { return x; }

#else

void* loop_pointer( void* x ) { return x; }

void* loop_array( void* x ) { return x; }

char loop_char( char x ) { return x; }

short int loop_shortint( short int x ) { return x; }

unsigned short int loop_shortunsigned( unsigned short int x ) { return x; }

int loop_int( int x ) { return x; }

unsigned int loop_unsigned( unsigned int x ) { return x; }

long int loop_longint( long int x ) { return x; }

unsigned long int loop_longunsigned( unsigned long int x ) { return x; }

float loop_float( float x ) { return x; }

double loop_double( double x ) { return x; }

#endif
