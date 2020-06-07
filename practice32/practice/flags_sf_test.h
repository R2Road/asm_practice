#pragma once

#include <bitset>
#include <iostream>
#include <random>
#include "flags_sf.h"

void flags_sf_test()
{
	const std::size_t bit_position = 7u;

	std::cout << "#### SF( Sign Flag ) Test ####" << std::endl << std::endl;
	std::cout << "Flag Position " << bit_position << " is SF" << std::endl;
	std::cout << "Bit Struct : " << "| SF | ZF | xx | AF | xx | PF | xx | CF |" << std::endl;
	std::cout << std::endl << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	int left = 0;

	std::cout << "left : " << left;
	std::cout << "\t";
	std::cout << "process : + 1 ";
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset;
	std::cout << "\t\t";
	std::cout << "Is On SF : " << temp_bitset.test( bit_position );
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "left : " << left;
	std::cout << "\t";
	std::cout << "process : - 1 ";
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset;
	std::cout << "\t\t";
	std::cout << "Is On SF : " << temp_bitset.test( bit_position );
	std::cout << std::endl;
	std::cout << std::endl;



	left = 1;
	std::cout << "left : " << left;
	std::cout << "\t";
	std::cout << "process : - 1 ";
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset;
	std::cout << "\t\t";
	std::cout << "Is On SF : " << temp_bitset.test( bit_position );
	std::cout << std::endl;
	std::cout << std::endl;



	left = -1;
	std::cout << "left : " << left;
	std::cout << "\t";
	std::cout << "process : + 1 ";
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset;
	std::cout << "\t\t";
	std::cout << "Is On SF : " << temp_bitset.test( bit_position );
	std::cout << std::endl;
	std::cout << std::endl;
}