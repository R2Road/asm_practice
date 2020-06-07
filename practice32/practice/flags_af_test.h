#pragma once

#include <bitset>
#include <iostream>
#include "flags_af.h"

void flags_af_test()
{
	const std::size_t bit_position = 4u;

	std::cout << "#### AF( Auxiliary Carry Flag ) Test ####" << std::endl << std::endl;
	std::cout << "AF is on when set bit 4" << std::endl;
	std::cout << "Flag Position " << bit_position << " is AF" << std::endl;
	std::cout << "Bit Struct : " << "| SF | ZF | xx | AF | xx | PF | xx | CF |" << std::endl;
	std::cout << std::endl << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	{
		const auto unsigned_left = std::numeric_limits<unsigned char>::max();

		std::cout << "unsigned left : " << static_cast<int>( unsigned_left ) << "   process : + 1 " << std::endl;

		temp_bitset = cpp_flags_af_inc_and_lahf_for_unsigned_char( unsigned_left ) >> 8;
		std::cout << "CPP LAHF Result : " << temp_bitset;
		std::cout << "\t";
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position );
		std::cout << std::endl;

		temp_bitset = asm_flags_af_inc_and_lahf_for_unsigned_char( unsigned_left ) >> 8;
		std::cout << "ASM LAHF Result : " << temp_bitset;
		std::cout << "\t";
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl << std::endl;



		const auto signed_left = std::numeric_limits<char>::max();

		std::cout << "signed left : " << static_cast<int>( signed_left ) << "   process : + 1 " << std::endl;

		temp_bitset = cpp_flags_af_inc_and_lahf_for_signed_char( signed_left ) >> 8;
		std::cout << "CPP LAHF Result : " << temp_bitset;
		std::cout << "\t";
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position );
		std::cout << std::endl;

		temp_bitset = asm_flags_af_inc_and_lahf_for_signed_char( signed_left ) >> 8;
		std::cout << "ASM LAHF Result : " << temp_bitset;
		std::cout << "\t";
		std::cout << "Is On Carry : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl << std::endl;
	}
}