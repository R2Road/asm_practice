#include "mnemonic_bit_shr.h"

unsigned char cpp_shr( const unsigned char left )
{
	return left >> 1;
}
unsigned char asm_shr( const unsigned char left )
{
	__asm {
		mov al, left
		shr al, 1
	}
}


char cpp_sar( const char left )
{
	return left >> 1;
}
char asm_sar( const char left )
{
	__asm {
		mov al, left
		sar al, 1 // sal == shl, sar != shr
	}
}
