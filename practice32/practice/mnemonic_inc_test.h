#pragma once

#include <iostream>
#include "mnemonic_inc.h"

void mnemonic_inc_test()
{
	int left = 13;

	std::cout << "left : " << left << std::endl;
	std::cout << std::endl;

	std::cout << "CPP inc 1 : " << cpp_inc_1( left ) << std::endl;
	std::cout << "CPP inc 2 : " << cpp_inc_2( left ) << std::endl;
	std::cout << "CPP inc 3 : " << cpp_inc_3( left ) << std::endl;
	std::cout << "ASM inc : " << asm_inc( left ) << std::endl;
	std::cout << std::endl;
}