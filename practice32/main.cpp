#include <iostream>

#include "practice/mnemonic_sub.h"

int main()
{
	std::cout << "CPP Sub : " << cpp_sub( 5, 4 ) << std::endl;
	std::cout << "ASM Sub : " << asm_sub( 5, 4 ) << std::endl;
}
