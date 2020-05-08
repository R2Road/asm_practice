#include "sum.h"

int cpp_sum( const int right, const int left )
{
	return right + left;
}

int asm_sum( const int right, const int left )
{
	__asm {
		mov eax, right;
		mov ebx, left;
		add eax, ebx;
	}
}
