#pragma once

#include <iostream>
#include <bitset>
#include <numeric>

#include "mnemonic_bit_shr.h"

void mnemonic_bit_shr_test()
{
	std::bitset<std::numeric_limits<char>::digits + 1> temp_bitset;

	const unsigned char left_unsigned_max = std::numeric_limits<unsigned char>::max();

	std::cout << "left unsigned max : " << ( temp_bitset = left_unsigned_max ) << ", " << static_cast<unsigned int>( left_unsigned_max ) << std::endl;
	std::cout << "CPP shr : " << ( temp_bitset = cpp_shr( left_unsigned_max ) ) << ", " << static_cast<unsigned int>( cpp_shr( left_unsigned_max ) ) << std::endl;
	std::cout << "ASM shr : " << ( temp_bitset = asm_shr( left_unsigned_max ) ) << ", " << static_cast<unsigned int>( asm_shr( left_unsigned_max ) ) << std::endl;
	std::cout << std::endl;

	const unsigned char left_unsigned_min = std::numeric_limits<unsigned char>::min();

	std::cout << "left unsigned min : " << ( temp_bitset = left_unsigned_min ) << ", " << static_cast<unsigned int>( left_unsigned_min ) << std::endl;
	std::cout << "CPP shr : " << ( temp_bitset = cpp_shr( left_unsigned_min ) ) << ", " << static_cast<unsigned int>( cpp_shr( left_unsigned_min ) ) << std::endl;
	std::cout << "ASM shr : " << ( temp_bitset = asm_shr( left_unsigned_min ) ) << ", " << static_cast<unsigned int>( cpp_shr( left_unsigned_min ) ) << std::endl;
	std::cout << std::endl;



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	const char left_signed_max = std::numeric_limits<char>::max();

	std::cout << "left signed max : " << ( temp_bitset = left_signed_max ) << ", " << static_cast<int>( left_signed_max ) << std::endl;
	std::cout << "CPP sar : " << ( temp_bitset = cpp_sar( left_signed_max ) ) << ", " << static_cast<int>( cpp_sar( left_signed_max ) ) << std::endl;
	std::cout << "ASM sar : " << ( temp_bitset = asm_sar( left_signed_max ) ) << ", " << static_cast<int>( asm_sar( left_signed_max ) ) << std::endl;
	std::cout << std::endl;

	const char left_signed_min = std::numeric_limits<char>::min();

	std::cout << "left signed min : " << ( temp_bitset = left_signed_min ) << ", " << static_cast<int>( left_signed_min ) << std::endl;
	std::cout << "CPP sar : " << ( temp_bitset = cpp_sar( left_signed_min ) ) << ", " << static_cast<int>( cpp_sar( left_signed_min ) ) << std::endl;
	std::cout << "ASM sar : " << ( temp_bitset = asm_sar( left_signed_min ) ) << ", " << static_cast<int>( asm_sar( left_signed_min ) ) << std::endl;
	std::cout << std::endl;
}