#include "mnemonic_bit_shl.h"

unsigned char cpp_shl( const unsigned char left )
{
	return left << 1;
}
unsigned char asm_shl( const unsigned char left )
{
	__asm {
		mov al, left
		shl al, 1
	}
}


char cpp_sal( const char left )
{
	return left << 1;
}
char asm_sal( const char left )
{
	__asm {
		mov al, left
		sal al, 1 // sal == shl, sar != shr
	}
}
