#include "mnemonic_dec.h"

// go debug/release folder
// look asm

int cpp_dec_1( int left )
{
	return --left;
}
int cpp_dec_2( int left )
{
	return left - 1;
}

int asm_dec( const int left )
{
	__asm {
		mov eax, left;
		dec eax;
	}
}
