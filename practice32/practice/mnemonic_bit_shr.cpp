#include "mnemonic_bit_shr.h"

int cpp_shr( const int left )
{
	return left >> 1;
}

int asm_shr( const int left )
{
	__asm {
		mov eax, left
		shr eax, 1
	}
}
