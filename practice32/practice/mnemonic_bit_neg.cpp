#include "mnemonic_bit_neg.h"

int cpp_neg( const int left )
{
	return -left;
}

int asm_neg( const int left )
{
	__asm {
		mov eax, left
		neg eax;
	}
}
