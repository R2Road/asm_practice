#pragma once

#include <bitset>
#include <iostream>
#include <numeric>
#include "flags_zf.h"

void flags_zf_test()
{
	const std::size_t bit_position = 6u;

	std::cout << "#### ZF( Zero Flag ) Test ####" << std::endl << std::endl;
	std::cout << "Flag Position " << bit_position << " is ZF" << std::endl;
	std::cout << "Bit Struct : " << "| SF | ZF | xx | AF | xx | PF | xx | CF |" << std::endl;
	std::cout << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	{
		temp_bitset = asm_flags_just_do_lahf() >> 8;
		std::cout << "Just Do LAHF Result : " << temp_bitset << std::endl;
		std::cout << "Flag Position 6 is ZF : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}


	std::cout << std::endl << std::endl;


	{
		int left = 0;


		std::cout << "left : " << left << "   process : + 1 " << std::endl;

		temp_bitset = asm_flags_zf_inc_and_lahf( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;



		std::cout << "left : " << left << "   process : - 1 " << std::endl;

		temp_bitset = asm_flags_zf_dec_and_lahf( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;



		left = 1;
		std::cout << "left : " << left << "   process : - 1 " << std::endl;

		temp_bitset = asm_flags_zf_dec_and_lahf( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;



		left = -1;
		std::cout << "left : " << left << "   process : + 1 " << std::endl;

		temp_bitset = asm_flags_zf_inc_and_lahf( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}

	{
		const auto signed_left = std::numeric_limits<int>::max();


		std::cout << "signed int max left : " << signed_left << "   process : + 1 " << std::endl;

		temp_bitset = asm_flags_zf_inc_and_lahf( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}

	{
		const auto signed_left = std::numeric_limits<int>::min();


		std::cout << "signed int min left : " << signed_left << "   process : - 1 " << std::endl;

		temp_bitset = asm_flags_zf_dec_and_lahf( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}


	std::cout << std::endl << std::endl;


	{
		const auto unsigned_left = std::numeric_limits<unsigned int>::max();


		std::cout << "unsigned int max left : " << unsigned_left << "   process : + 1 " << std::endl;

		temp_bitset = asm_flags_zf_inc_and_lahf_for_unsigned_int( unsigned_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}

	{
		const auto unsigned_left = std::numeric_limits<unsigned int>::min();


		std::cout << "unsigned int min left : " << unsigned_left << "   process : - 1 " << std::endl;

		temp_bitset = asm_flags_zf_dec_and_lahf_for_unsigned_int( unsigned_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "    Is Zero : " << temp_bitset.test( bit_position ) << std::endl;
		std::cout << std::endl;
	}
}