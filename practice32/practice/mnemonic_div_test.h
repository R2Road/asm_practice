#pragma once

#include <iostream>
#include "mnemonic_div.h"

void mnemonic_div_test()
{
	int left = 13;
	int right = 4;

	std::cout << "CPP Div : " << cpp_div( left, right ) << std::endl;
	std::cout << "ASM Div : " << asm_div( left, right ) << std::endl;

	std::cout << "CPP Div : " << cpp_idiv( -left, right ) << std::endl;
	std::cout << "ASM Div : " << asm_idiv( -left, right ) << std::endl;
}