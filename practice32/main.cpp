#include <iostream>

#include "practice/mnemonic_mul.h"

int main()
{
	std::cout << "CPP Mul : " << cpp_mul( 5, 4 ) << std::endl;
	std::cout << "ASM Mul : " << asm_mul( 5, 4 ) << std::endl;
}
