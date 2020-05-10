#pragma once

#include <iostream>
#include "mnemonic_add.h"

void mnemonic_add_test()
{
	int left = -13;
	int right = 4;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP Add : " << cpp_add( left, right ) << std::endl;
	std::cout << "ASM Add : " << asm_add( left, right ) << std::endl;
	std::cout << std::endl;
}