#pragma once

#include <iostream>
#include <bitset>
#include <numeric>

#include "mnemonic_bit_shl.h"

void mnemonic_bit_shl_test()
{
	std::bitset<std::numeric_limits<char>::digits + 1> temp_bitset;

	const unsigned char left_unsigned_max = std::numeric_limits<unsigned char>::max();

	std::cout << "left unsigned max : " << ( temp_bitset = left_unsigned_max ) << ", " << static_cast<unsigned int>( left_unsigned_max ) << std::endl;
	std::cout << "CPP shl : " << ( temp_bitset = cpp_shl( left_unsigned_max ) ) << ", " << static_cast<unsigned int>( cpp_shl( left_unsigned_max ) ) << std::endl;
	std::cout << "ASM shl : " << ( temp_bitset = asm_shl( left_unsigned_max ) ) << ", " << static_cast<unsigned int>( cpp_shl( left_unsigned_max ) ) << std::endl;
	std::cout << std::endl;

	const unsigned char left_unsigned_min = std::numeric_limits<unsigned char>::min();

	std::cout << "left unsigned min : " << ( temp_bitset = left_unsigned_min ) << ", " << static_cast<unsigned int>( left_unsigned_min ) << std::endl;
	std::cout << "CPP shl : " << ( temp_bitset = cpp_shl( left_unsigned_min ) ) << ", " << static_cast<unsigned int>( cpp_shl( left_unsigned_min ) ) << std::endl;
	std::cout << "ASM shl : " << ( temp_bitset = asm_shl( left_unsigned_min ) ) << ", " << static_cast<unsigned int>( cpp_shl( left_unsigned_min ) ) << std::endl;
	std::cout << std::endl;



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	const char left_signed_max = std::numeric_limits<char>::max();

	std::cout << "left signed max : " << ( temp_bitset = left_signed_max ) << ", " << static_cast<int>( left_signed_max ) << std::endl;
	std::cout << "CPP sal : " << ( temp_bitset = cpp_sal( left_signed_max ) ) << ", " << static_cast<int>( cpp_sal( left_signed_max ) ) << std::endl;
	std::cout << "ASM sal : " << ( temp_bitset = asm_sal( left_signed_max ) ) << ", " << static_cast<int>( asm_sal( left_signed_max ) ) << std::endl;
	std::cout << std::endl;

	const char left_signed_min = std::numeric_limits<char>::min();

	std::cout << "left signed min : " << ( temp_bitset = left_signed_min ) << ", " << static_cast<int>( left_signed_min ) << std::endl;
	std::cout << "CPP sal : " << ( temp_bitset = cpp_sal( left_signed_min ) ) << ", " << static_cast<int>( cpp_sal( left_signed_min ) ) << std::endl;
	std::cout << "ASM sal : " << ( temp_bitset = asm_sal( left_signed_min ) ) << ", " << static_cast<int>( asm_sal( left_signed_min ) ) << std::endl;
	std::cout << std::endl;
}