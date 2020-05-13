#pragma once

#include <iostream>

#include "mnemonic_bit_neg.h"

void mnemonic_bit_neg_test()
{
	int left = 5;

	std::cout << "left : " << left << std::endl;
	std::cout << std::endl;

	std::cout << "CPP neg : " << cpp_neg( left ) << std::endl;
	std::cout << "ASM neg : " << asm_neg( left ) << std::endl;
	std::cout << std::endl;
}