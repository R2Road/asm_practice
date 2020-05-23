#include "jump_jne.h"

// jne - Jump if ZF is not equl 1
// sete - Set byte if equal 1 - ZF == 1 --> set 1

bool cpp_jump_jne( const int left, const int right )
{
	if( left == right )
	{
		return true;
	}
	
	return false;
}

bool asm_jump_jne_1( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;
		jne L_EndIf;

		mov al, 1;
		jmp L_Exit;

	L_EndIf:
		mov al, 0;

	L_Exit:
	}
}

bool asm_jump_jne_2( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;

		// sete - Set byte if equal 1
		// zf == 1 -> 1
		// zf == 0 -> 0
		sete al;
	}
}