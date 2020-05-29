#pragma once

#include <bitset>
#include <iostream>
#include <random>
#include "flags_zf.h"

void flags_zf_test()
{
	std::cout << "Zero Flag Test" << std::endl;
	std::cout << std::endl;

	std::bitset<std::numeric_limits<unsigned char>::digits> temp_bitset;
	int left = 0;


	temp_bitset = asm_flags_just_do_lahf() >> 8;
	std::cout << "Just Do LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Flag Position 6 is ZF : " << temp_bitset.test( 6 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "left : " << left << "   process : + 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_zf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Is Zero : " << temp_bitset.test( 6 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	std::cout << "left : " << left << "   process : - 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_zf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Is Zero : " << temp_bitset.test( 6 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	left = 1;
	std::cout << "left : " << left << "   process : - 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_zf_dec_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Is Zero : " << temp_bitset.test( 6 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	left = -1;
	std::cout << "left : " << left << "   process : + 1 " << std::endl;
	std::cout << std::endl;

	temp_bitset = asm_flags_zf_inc_and_lahf( left ) >> 8;
	std::cout << "LAHF Result : " << temp_bitset << std::endl;
	std::cout << "Is Zero : " << temp_bitset.test( 6 ) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}