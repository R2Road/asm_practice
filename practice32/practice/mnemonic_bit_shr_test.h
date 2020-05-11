#pragma once

#include <iostream>
#include <bitset>

#include "mnemonic_bit_shr.h"

void mnemonic_bit_shr_test()
{
	int left = 5;

	std::bitset<16> temp_bitset;

	std::cout << "left : " << ( temp_bitset = left ) << std::endl;
	std::cout << std::endl;

	std::cout << "CPP shr : " << ( temp_bitset = cpp_shr( left ) ) << std::endl;
	std::cout << "ASM shr : " << ( temp_bitset = asm_shr( left ) ) << std::endl;
	std::cout << std::endl;
}