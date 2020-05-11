#pragma once

#include <iostream>
#include <bitset>

#include "mnemonic_bit_shl.h"

void mnemonic_bit_shl_test()
{
	int left = 5;

	std::bitset<16> temp_bitset;

	std::cout << "left : " << ( temp_bitset = left ) << std::endl;
	std::cout << std::endl;

	std::cout << "CPP shl : " << ( temp_bitset = cpp_shl( left ) ) << std::endl;
	std::cout << "ASM shl : " << ( temp_bitset = asm_shl( left ) ) << std::endl;
	std::cout << std::endl;
}