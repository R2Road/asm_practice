#pragma once

#include <iostream>
#include "mnemonic_sub.h"

void mnemonic_sub_test()
{
	int left = 13;
	int right = -4;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP Sub : " << cpp_sub( left, right ) << std::endl;
	std::cout << "ASM Sub : " << asm_sub( left, right ) << std::endl;
	std::cout << std::endl;
}