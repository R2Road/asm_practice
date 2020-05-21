#include "loop.h"

int cpp_loop_while( const int left )
{
	int i = 0;
	while( i < left )
	{
		++i;
	}

	return i;
}
int cpp_loop_dowhile( const int left )
{
	int i = 0;
	do
	{
		++i;
	} while( i < left );

	return i;
}
int cpp_loop_for( const int left )
{
	int i = 0;
	for( ; i < left; ++i );

	return i;
}

int asm_loop_dec( const int left )
{
	__asm
	{
		mov	ecx, left;
	L1: // label

		// body

		dec ecx; // ecx == 0 > ZF is 1
		jnz L1; // Jump if ZF( Zero Flag ) Not Zero

		mov eax, ecx;
	}
}
int asm_loop_inc( const int left )
{
	__asm
	{
		mov	eax, 0;
	L1: // label

		// body

		inc eax;
		cmp eax, left; // eax == left > ZF is 1
		jne L1; // Jump if ZF( Zero Flag ) Not Zero
	}
}
