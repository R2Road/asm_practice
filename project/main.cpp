#include "pch.h"
#include <iostream>

int sum( int left, int right )
{
	__asm {
		mov eax, left;
		mov ebx, right;
		add eax, ebx;
	}
}

int main()
{
	std::cout << "Sum : " << sum( 1, 2 );
}
