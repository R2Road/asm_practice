#include <iostream>

#include "practice/mnemonic_div.h"

int main()
{
	int left = 13;
	int right = 4;

	std::cout << "CPP Div : " << cpp_div( left, right ) << std::endl;
	std::cout << "ASM Div : " << asm_div( left, right ) << std::endl;

	std::cout << "CPP iDiv : " << cpp_idiv( -left, right ) << std::endl;
	std::cout << "ASM iDiv : " << asm_idiv( -left, right ) << std::endl;
}
