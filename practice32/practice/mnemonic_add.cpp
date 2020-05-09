#include "mnemonic_add.h"

int cpp_add( const int left, const int right )
{
	return left + right;
}

int asm_add( const int right, const int left )
{
	__asm {
		mov eax, left;
		add eax, right;
	}
}
