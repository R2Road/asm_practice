#include "mnemonic_div.h"

unsigned int cpp_div( const unsigned int left, const unsigned int right )
{
	return left / right;
}
unsigned int asm_div( const unsigned int left, const unsigned int right )
{
	__asm {
		mov eax, left;
		cdq;
		div right; // is eax / right
	}
}

unsigned int cpp_div_remainder( const unsigned int left, const unsigned int right )
{
	return left % right;
}
unsigned int asm_div_remainder( const unsigned int left, const unsigned int right )
{
	__asm {
		mov eax, left;
		cdq;
		div right; // is eax / right - store result to eax - store remainder to edx

		mov eax, edx;
	}
}




int cpp_idiv( const int left, const int right )
{
	return left / right;
}
int asm_idiv( const int left, const int right )
{
	__asm {
		mov eax, left;
		cdq;
		idiv right; // is eax / right
	}
}

int cpp_idiv_remainder( const int left, const int right )
{
	return left % right;
}
int asm_idiv_remainder( const int left, const int right )
{
	__asm {
		mov eax, left;
		cdq;
		idiv right; // is eax / right - store result to eax - store remainder to edx

		mov eax, edx;
	}
}
