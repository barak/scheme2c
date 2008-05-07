/* Generate the structure offset and type information required by the
   cdecl compiler.
*/

#include <stdio.h>

typedef  (*pp)();

struct {char dummy; char x; char dummy2;} c1;
struct {char dummy; short x; char dummy2;} s1;
struct {char dummy; unsigned short x; char dummy2;} us1;
struct {char dummy; int x; char dummy2;} i1;
struct {char dummy; unsigned x; char dummy2;} u1;
struct {char dummy; long x; char dummy2;} l1;
struct {char dummy; unsigned long x; char dummy2;} ul1;
struct {char dummy; float x; char dummy2;} f1;
struct {char dummy; double x; char dummy2;} d1;
struct {char dummy; char* x; char dummy2;} cp1;
struct {char dummy; pp x; char dummy2;} pp1;

int main()
{
	char  *toref, *toset;

	printf( "(sizeof char %i %li c-byte-ref c-byte-set!)\n",
		sizeof( char ), ((long)&c1.x)-((long)&c1) );
	printf( "(sizeof shortint %i %li c-shortint-ref c-shortint-set!)\n",
		sizeof( short ), ((long)&s1.x)-((long)&s1) );
	printf( "(sizeof shortunsigned %i %li c-shortunsigned-ref c-shortunsigned-set!)\n",
		sizeof( unsigned short ), ((long)&us1.x)-((long)&us1) );
	printf( "(sizeof int %i %li c-int-ref c-int-set!)\n",
		sizeof( int ), ((long)&i1.x)-((long)&i1) );
	printf( "(sizeof unsigned %i %li c-unsigned-ref c-unsigned-set!)\n",
		sizeof( unsigned ), ((long)&u1.x)-((long)&u1) );
	printf( "(sizeof longint %i %li c-longint-ref c-longint-set!)\n",
		sizeof( long ), ((long)&l1.x)-((long)&l1) );
	printf( "(sizeof longunsigned %i %li c-longunsigned-ref c-longunsigned-set!)\n",
		sizeof( long ), ((long)&ul1.x)-((long)&ul1) );
	printf( "(sizeof float %i %li c-float-ref c-float-set!)\n",
		sizeof( float ), ((long)&f1.x)-((long)&f1) );
	printf( "(sizeof double %i %li c-double-ref c-double-set!)\n",
		sizeof( double ), ((long)&d1.x)-((long)&d1) );
	if  (sizeof( char* ) == sizeof( unsigned short ))  {
	   toref = "c-shortunsigned-ref";
	   toset = "c-shortunsigned-set!";
	}  else  if  (sizeof( char* ) == sizeof( unsigned ))  {
	   toref = "c-unsigned-ref";
	   toset = "c-unsigned-set!";
	}  else  {
	   toref = "c-longunsigned-ref";
	   toset = "c-longunsigned-set!";
	}
	printf( "(sizeof pointer %i %li %s %s)\n",
		sizeof( char* ), ((long)&cp1.x)-((long)&cp1), toref, toset );
	if  (sizeof( pp ) == sizeof( unsigned short ))  {
	   toref = "c-shortunsigned-ref";
	   toset = "c-shortunsigned-set!";
	}  else  if  (sizeof( pp ) == sizeof( unsigned ))  {
	   toref = "c-unsigned-ref";
	   toset = "c-unsigned-set!";
	}  else  {
	   toref = "c-longunsigned-ref";
	   toset = "c-longunsigned-set!";
	}
	printf( "(sizeof procedure %i %li %s %s)\n",
		sizeof( pp ), ((long)&pp1.x)-((long)&pp1), toref, toset );
	return 0;
}
