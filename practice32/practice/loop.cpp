#include "mnemonic_sub.h"

void cpp_loop_for()
{
	for( int i = 0; i < 3; ++i )
		;
}

void asm_loop_for()
{
	__asm
	{
		mov	CL, 10
		L1: // label

		// body

		dec CL
		jnz L1
	}
}
