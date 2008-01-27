!
! SCHEME->C
!
! SPARC assembly code.

! Take care of different conventions for global identifiers,
! pseudo-ops, segment/section names, and other declarations.

#ifdef __STDC__
#define CONCAT(prefix,suffix)	prefix ## suffix
#else /* non-portable.. */
#define CONCAT(prefix,suffix)	prefix/**/suffix
#endif

#ifdef SUNOS5

#define XID(id) id

#define FUNBEGIN(id)		\
	.section ".text" ;	\
	.align	4 ;		\
	.global	XID(id) ;	\
XID(id):

#define FUNEND(id)			\
	.type	XID(id),#function ;	\
	.size	XID(id),(.-XID(id))

#else	/*!SUNOS5, assume SUNOS4*/

#define XID(id) id

#define FUNBEGIN(id)		\
	.seg	"text" ;	\
	.align	4 ;		\
	.global	XID(id) ;	\
XID(id):

#define FUNEND(id)	/*empty*/

#endif	/*SUNOS5*/

#ifdef SUNOS5
	.file	"sparc.s"
#define _ASM	/* prevent typedef sysset_t */
#endif

! This misnamed function is responsible for providing the
! top of stack address, via macro STACKPTR, to the continuation
! builder and the heap manager. Because both of these functions
! immediately begin examining the memory on the stack, the register
! windows are flushed to memory so their values will be saved in
! heap allocated continuations and seen by the garbage collector.
!
! extern void *sc_processor_register()

FUNBEGIN(sc_processor_register)
	ta	3			! flush register windows
	retl				! return
	mov	%sp, %o0		! ..with stack pointer
FUNEND(sc_processor_register)

! On the SPARC, doubles are normally aligned on eight-byte boundaries.
! Sun's bundled C compiler will, upon seeing a double-typed field in a struct,
! make sure the byte offset from the beginning of that struct to the field
! is a multiple of 8. The compiler will therefore insert a 4-byte padding
! between the header and the f.p. value in struct doublefloat (objects.h).
! This means that the object really extends 4 bytes past its allocated memory,
! causing garbage to be read when the object is accessed (the last half of
! the f.p. value will often be read from the next node's header!). Sun's C
! compiler can be tricked into doing this correctly by declaring the field
! as "int value[2]" and accessing it as "*(double*)&(.. ->doublefloat.value[0])".
! Unfortunately, GCC _insists_ on using the ldd/std instructions when accessing
! any "double*". My solution (can you say "kludge"?) is to use the fake
! declaration hack, and two assembly-coded routines for safe accesses.
! As a consequence, DOUBLE_ALIGN need not be defined for the SPARC.
! The two routines below expect the address of the "double" itself, rather
! than the base address of the node.

! extern double sc_get_double(int*)

FUNBEGIN(sc_get_double)
	ld	[%o0 + 0], %f0
	retl
	ld	[%o0 + 4], %f1
FUNEND(sc_get_double)

! extern void sc_set_double(int*, double)
	
FUNBEGIN(sc_set_double)
	st	%o1, [%o0 + 0]
	retl
	st	%o2, [%o0 + 4]
FUNEND(sc_set_double)

! Rules for building continuations on the SPARC:
!
! 1 - register windows must be flushed to memory before
!	the stack is copied to the heap.
!
! 2 - setjmp must save the caller's local and input register
!	frames when saving context, because longjmp will not
!	have access to the saved stack to fetch the registers
!	from their normal resting place.
!
! 3 - longjmp must flush register windows so the correct register
!	values will be reloaded from memory when execution continues
!	on the restored stack.
!
! 4 - longjmp must restore the caller's local and input register
!	frames because the stack hasn't been restored when longjmp
!	is called.
!

!
! Save the current environment in a heap allocated continuation.
!
! extern int sc_setjmp(int *jmpbuf)

FUNBEGIN(sc_setjmp)
	st	%o6, [%o0 +  0]		! save stack pointer
	st	%o7, [%o0 +  4]		! save continuation pointer
	st	%g1, [%o0 +  8]		! save global registers
	st	%g2, [%o0 + 12]		! these may be allocated for
	st	%g3, [%o0 + 16]		! caller saves registers or
	st	%g4, [%o0 + 20]		! for global values.
	st	%g5, [%o0 + 24]
	st	%g6, [%o0 + 28]
	st	%g7, [%o0 + 32]
	st	%l0, [%o0 + 36]		! save local registers
	st	%l1, [%o0 + 40]		! the sunos setjmp uses
	st	%l2, [%o0 + 44]		! the register windows to
	st	%l3, [%o0 + 48]		! save these, we can't.
	st	%l4, [%o0 + 52]
	st	%l5, [%o0 + 56]
	st	%l6, [%o0 + 60]
	st	%l7, [%o0 + 64]
	st	%i0, [%o0 + 68]
	st	%i1, [%o0 + 72]
	st	%i2, [%o0 + 76]
	st	%i3, [%o0 + 80]
	st	%i4, [%o0 + 84]
	st	%i5, [%o0 + 88]
	st	%i6, [%o0 + 92]
	st	%i7, [%o0 + 96]
	mov	%y, %o2			! fetch %y
	st	%o2, [%o0 + 100]	! and save it
#ifdef SUNOS4
	mov	%o0, %o5		! save %o0 in %o5
	clr	%o0
	mov	SYS_sigblock, %g1	! 0x6d
	ta	0			! sigblock(0) --> returns old mask
	st	%o0, [%o5 + 104]	! save signal mask
#endif
#ifdef SUNOS5
	add	%o0, 104, %o2		! &jmpbuf[26]
	clr	%o1			! NULL
	clr	%o0			! <arbitrary>
	mov	SYS_sigprocmask, %g1	! 0x5f
	ta	8			! sigprocmask(0, NULL, &jmpbuf[26])
#endif
	retl				! return
	mov	%g0, %o0		! ..zero to caller of sc_setjmp()
FUNEND(sc_setjmp)

!
! Restore an environment from a heap allocated continuation.
!
! extern void sc_longjmp(int *jmpbuf, int)

FUNBEGIN(sc_longjmp)
	mov	%o0, %i0		! save %o0 in %i0
	mov	%o1, %i1		! save %o1 in %i1
#ifdef SUNOS4
	ld	[%o0 + 104], %o0
	mov	SYS_sigsetmask, %g1
	ta	0			! sigsetmask(oldmask)
#endif
#ifdef SUNOS5
	clr	%o2			! NULL
	add	%o0, 104, %o1		! &jmpbuf[26]
	mov	3, %o0			! SIG_SETMASK
	mov	SYS_sigprocmask, %g1	! 0x5f
	ta	8			! sigprocmask(SIG_SETMASK, &jmpbuf[26], NULL)
#endif
	mov	%i0, %o0		! restore %o0
	mov	%i1, %o1		! restore o1
	ta	3			! flush register windows
	ld	[%o0 +  0], %o6		! restore stack pointer
	ld	[%o0 +  4], %o7		! load continuation pointer
	ld	[%o0 +  8], %g1		! restore global registers
	ld	[%o0 + 12], %g2
	ld	[%o0 + 16], %g3
	ld	[%o0 + 20], %g4
	ld	[%o0 + 24], %g5
	ld	[%o0 + 28], %g6
	ld	[%o0 + 32], %g7
	ld	[%o0 + 36], %l0		! restore local frame from stack
	ld	[%o0 + 40], %l1
	ld	[%o0 + 44], %l2
	ld	[%o0 + 48], %l3
	ld	[%o0 + 52], %l4
	ld	[%o0 + 56], %l5
	ld	[%o0 + 60], %l6
	ld	[%o0 + 64], %l7
	ld	[%o0 + 68], %i0
	ld	[%o0 + 72], %i1
	ld	[%o0 + 76], %i2
	ld	[%o0 + 80], %i3
	ld	[%o0 + 84], %i4
	ld	[%o0 + 88], %i5
	ld	[%o0 + 92], %i6
	ld	[%o0 + 96], %i7
	ld	[%o0 + 100], %o2	! restore %y
	mov	%o2, %y
	retl				! return
	mov	%o1, %o0		! ..value is second arg
FUNEND(sc_longjmp)

!
! Overflow-checking arithmetic functions
!
! "addcc" and "subcc" always indicate arithmetic overflow by setting the V
! (overflow) flag. ".mul" sets Z if it succeeded, clears it otherwise

! given two upshifted fixnums in <%o0,%o1>, place in %o0 their sum
! either as an upshifted fixnum or as a tagged pointer to a boxed flonum
!
! extern int sc_iplus(int, int)

FUNBEGIN(sc_iplus)
	addcc	%o0, %o1, %o2
	bvc	0f
	nop
	save	%sp, -72, %sp
	sra	%i0, 2, %i0			! downshift to remove tags
	sra	%i1, 2, %i1
	std	%i0, [%sp + 64]			! transfer to f.p. regs
	ldd	[%sp + 64], %f0
	fitod	%f0, %f2			! convert int -> double
	fitod	%f1, %f4
	faddd	%f2, %f4, %f6			! add'em
	std	%f6, [%sp + 64]			! move f.p. num back to arg regs
	ldd	[%sp + 64], %i0
	call	XID(sc_makedoublefloat), 2	! box & tag result
	restore
0:	retl					! return fixnum
	mov	%o2, %o0
FUNEND(sc_iplus)

! given two upshifted fixnums in <%o0,%o1>, place in %o0 their difference
! either as an upshifted fixnum or as a tagged pointer to a boxed flonum
!
! extern int sc_idifference(int, int)

FUNBEGIN(sc_idifference)
	subcc	%o0, %o1, %o2
	bvc	0f
	nop
	save	%sp, -72, %sp
	sra	%i0, 2, %i0
	sra	%i1, 2, %i1
	std	%i0, [%sp + 64]
	ldd	[%sp + 64], %f0
	fitod	%f0, %f2
	fitod	%f1, %f4
	fsubd	%f2, %f4, %f6
	std	%f6, [%sp + 64]
	ldd	[%sp + 64], %i0
	call	XID(sc_makedoublefloat), 2
	restore
0:	retl
	mov	%o2, %o0
FUNEND(sc_idifference)

! given an upshifted fixnum in %o0, place in %o0 its negation
! either as an upshifted fixnum or as a tagged pointer to a boxed flonum
!
! extern int sc_inegate(int)

FUNBEGIN(sc_inegate)
	subcc	%g0, %o0, %o2
	bvc	0f
	nop
	save	%sp, -72, %sp
	sra	%i0, 2, %i0
	st	%i0, [%sp + 64]
	ld	[%sp + 64], %f0	
	fitod	%f0, %f6
	fnegs	%f6, %f6
	std	%f6, [%sp + 64]
	ldd	[%sp + 64], %i0
	call	XID(sc_makedoublefloat), 2
	restore
0:	retl
	mov	%o2, %o0
FUNEND(sc_inegate)

! given a downshifted fixnum in %o0 and an upshifted fixnum in %o1, place in
! %o0 their product either as an upshifted fixnum or as a tagged pointer to
! a boxed flonum
!
! extern int sc_itimes(int, int)

FUNBEGIN(sc_itimes)
	save	%sp, -104, %sp
	mov	%i0, %o0
	call	.mul, 2
	mov	%i1, %o1
	bz,a	0f			! Z == no overflow
	mov	%o0, %i0
	sra	%i1, 2, %i1		! %i0 is already down-shifted
	std	%i0, [%sp + 96]
	ldd	[%sp + 96], %f0
	fitod	%f0, %f2
	fitod	%f1, %f4
	fmuld	%f2, %f4, %f6
	std	%f6, [%sp + 96]
	ldd	[%sp + 96], %i0
	call	XID(sc_makedoublefloat), 2
	restore
0:	ret
	restore
FUNEND(sc_itimes)
