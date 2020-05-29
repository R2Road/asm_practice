#pragma once

#include <bitset>
#include <iostream>
#include "flags_af.h"

void flags_af_test()
{
	const std::size_t bit_position = 4u;

	std::cout << "Auxiliary Carry Flag Test" << std::endl;
	std::cout << "Flag Position " << bit_position << " is AF" << std::endl;
	std::cout << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	{
		const auto left = std::numeric_limits<unsigned char>::max();

		std::cout << "unsigned left : " << static_cast<int>( left ) << "   process : + 1 " << std::endl;
		std::cout << std::endl;

		temp_bitset = cpp_flags_af_inc_and_lahf_for_unsigned( left ) >> 8;
		std::cout << "CPP LAHF Result : " << temp_bitset << std::endl;
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		temp_bitset = asm_flags_af_inc_and_lahf_for_unsigned( left ) >> 8;
		std::cout << "ASM LAHF Result : " << temp_bitset << std::endl;
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;



		std::cout << "unsigned left : " << static_cast<int>( left ) << "   process : - 1 " << std::endl;
		std::cout << std::endl;

		temp_bitset = cpp_flags_af_dec_and_lahf_for_unsigned( left ) >> 8;
		std::cout << "CPP LAHF Result : " << temp_bitset << std::endl;
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		temp_bitset = asm_flags_af_dec_and_lahf_for_unsigned( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset << std::endl;
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
}