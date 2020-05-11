#pragma once

#include <iostream>
#include "mnemonic_dec.h"

void mnemonic_dec_test()
{
	int left = 13;

	std::cout << "left : " << left << std::endl;
	std::cout << std::endl;

	std::cout << "CPP dec 1 : " << cpp_dec_1( left ) << std::endl;
	std::cout << "CPP dec 2 : " << cpp_dec_2( left ) << std::endl;
	std::cout << "ASM dec : " << asm_dec( left ) << std::endl;
	std::cout << std::endl;
}