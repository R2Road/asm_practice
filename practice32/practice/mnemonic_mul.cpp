#include "mnemonic_mul.h"

unsigned int cpp_mul( const unsigned int left, const unsigned int right )
{
	return left * right;
}
unsigned int asm_mul( const unsigned int left, const unsigned int right )
{
	__asm {
		mov eax, left;
		mul right; // is eax * right
	}
}


int cpp_imul( const int left, const int right )
{
	return left * right;
}
int asm_imul( const int left, const int right )
{
	__asm {
		mov eax, left;
		imul right; // is eax * right
	}
}
