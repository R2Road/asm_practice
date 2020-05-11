#include "mnemonic_bit_shl.h"

int cpp_shl( const int left )
{
	return left << 1;
}

int asm_shl( const int left )
{
	__asm {
		mov eax, left
		shl eax, 1
	}
}
