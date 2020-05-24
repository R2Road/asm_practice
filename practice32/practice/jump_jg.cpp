#include "jump_jg.h"

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019

// sf - sign flag - bit position 32
// zf - zero flag
// cf - carry flag - check over bits    ex ) unsigned char 255 -> 256 : cf = 1
// of - overflow flag - check over signed range    ex ) char 127 -> -128 : of = 1

// jg - Jump if ZF = 0 and SF = OF
// setle - Set if Less or Equal

bool cpp_jump_jg( const int left, const int right )
{
	if( left <= right )
	{
		return true;
	}
	
	return false;
}

bool asm_jump_jg_1( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;
		jg L_EndIf;

		mov al, 1;
		jmp L_Exit;

	L_EndIf:
		mov al, 0;

	L_Exit:
	}
}

bool asm_jump_jg_2( const int left, const int right )
{
	__asm
	{
		mov eax, left;
		cmp eax, right;

		// setle - Set if Less or Equal
		setle al;

	}
}