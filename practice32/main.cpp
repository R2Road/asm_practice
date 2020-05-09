#include <iostream>

#include "practice/mnemonic_add.h"

int main()
{
	std::cout << "CPP Add : " << cpp_add( 5, 4 ) << std::endl;
	std::cout << "ASM Add : " << asm_add( 5, 4 ) << std::endl;
}
