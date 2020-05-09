#include "mnemonic_sub.h"

int cpp_sub( const int left, const int right )
{
	return left - right;
}

int asm_sub( const int left, const int right )
{
	__asm {
		mov eax, left;
		sub eax, right;
	}
}
