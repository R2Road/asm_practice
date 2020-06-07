#pragma once

#include <bitset>
#include <iostream>
#include <numeric>
#include "flags_sf.h"

void flags_sf_test()
{
	const std::size_t bit_position = 7u;

	std::cout << "#### SF( Sign Flag ) Test ####" << std::endl << std::endl;
	std::cout << "Flag Position " << bit_position << " is SF" << std::endl;
	std::cout << "Bit Struct : " << "| SF | ZF | xx | AF | xx | PF | xx | CF |" << std::endl;
	std::cout << std::endl << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	{
		const int signed_left = 0;

		std::cout << "signed int left : " << signed_left << "\t" << "process : + 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_inc_and_lahf_for_signed_int( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;


		std::cout << "signed int left : " << signed_left << "\t" << "process : - 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_dec_and_lahf_for_signed_int( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}

	{
		const auto signed_left = std::numeric_limits<int>::max();

		std::cout << "signed max int left : " << signed_left << "\t" << "process : + 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_inc_and_lahf_for_signed_int( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}

	{
		const auto signed_left = std::numeric_limits<int>::min();

		std::cout << "signed min int left : " << signed_left << "\t" << "process : - 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_dec_and_lahf_for_signed_int( signed_left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}


	std::cout << std::endl << std::endl;


	{
		const unsigned int left = 0;

		std::cout << "unsigned int left : " << left << "\t" << "process : + 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_inc_and_lahf_for_unsigned_int( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
		

		std::cout << "unsigned int left : " << left << "\t" << "process : - 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_dec_and_lahf_for_unsigned_int( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}


	{
		const auto left = std::numeric_limits<unsigned int>::max();

		std::cout << "unsigned max int : left : " << left << "\t" << "process : + 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_inc_and_lahf_for_unsigned_int( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;


		std::cout << "unsigned max int : left : " << left << "\t" << "process : - 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_dec_and_lahf_for_unsigned_int( left ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}


	{
		const auto unsigned_left_m1 = std::numeric_limits<unsigned int>::max() - 1;

		std::cout << "unsigned max int - 1 : left : " << unsigned_left_m1 << "\t" << "process : + 1 ";
		std::cout << std::endl;

		temp_bitset = asm_flags_sf_inc_and_lahf_for_unsigned_int( unsigned_left_m1 ) >> 8;
		std::cout << "LAHF Result : " << temp_bitset;
		std::cout << "\t\t";
		std::cout << "Is On SF : " << temp_bitset.test( bit_position );
		std::cout << std::endl << std::endl;
	}
}