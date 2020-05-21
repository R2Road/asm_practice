#include "loop.h"

// je - Jump if ZF is equl Zero
// setne - Set byte if not equal - ZF == 0

bool cpp_jump_je( const int left, const int right )
{
	if( left != right )
	{
		return true;
	}
	
	return false;
}

bool asm_jump_je_1( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;
		je L_EndIf;

		mov al, 1;
		jmp L_Exit;

	L_EndIf:
		mov al, 0;

	L_Exit:
	}
}

bool asm_jump_je_2( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;

		// setne - Set byte if not equal - ZF == 0
		// zf == 1 -> 0
		// zf == 0 -> 1
		setne al;
	}
}