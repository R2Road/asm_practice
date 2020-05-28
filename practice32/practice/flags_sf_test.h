#pragma once

#include <bitset>
#include <iostream>
#include <random>
#include "flags_sf.h"

void flags_sf_test()
{
	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;

	int left = 0;

	std::cout << "left : " << left << std::endl;
	std::cout << "process : left + 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Flag Position 7 is SF : " << temp_bitset.test( 7 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "left : " << left << std::endl;
	std::cout << "process : left - 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Flag Position 7 is SF : " << temp_bitset.test( 7 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	left = 1;
	std::cout << "left : " << left << std::endl;
	std::cout << "process : left - 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Flag Position 7 is SF : " << temp_bitset.test( 7 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	left = -1;
	std::cout << "left : " << left << std::endl;
	std::cout << "process : left + 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_sf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Flag Position 7 is SF : " << temp_bitset.test( 7 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}