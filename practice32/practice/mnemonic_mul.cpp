#include "mnemonic_mul.h"

int cpp_mul( const int left, const int right )
{
	return left * right;
}

int asm_mul( const int left, const int right )
{
	__asm {
		mov eax, left;
		mul right; // is eax * right
	}
}
