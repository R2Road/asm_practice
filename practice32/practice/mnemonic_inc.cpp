#include "mnemonic_inc.h"

// go debug/release folder
// look asm

int cpp_inc_1( int left )
{
	return ++left;
}
int cpp_inc_2( int left )
{
	left++;
	return left;
}
int cpp_inc_3( int left )
{
	return left + 1;
}

int asm_inc( const int left )
{
	__asm {
		mov eax, left;
		inc eax;
	}
}
