#pragma once

#include <iostream>
#include <random>
#include "flags_zf.h"

void flags_zf_test()
{
	//
	// for Release Build
	// - block asm optimazation
	//
	const int left = 1;

	std::cout << "left : " << left << std::endl;
	std::cout << std::endl;

	std::cout << "CPP flags zf is 1 : " << cpp_flags_zf_is_1( left ) << std::endl;
	std::cout << "ASM flags zf is 1 : " << asm_flags_zf_is_1( left ) << std::endl;
	std::cout << std::endl;



	std::cout << "CPP flags zf is 0 : " << cpp_flags_zf_is_0( left ) << std::endl;
	std::cout << "ASM flags zf is 0 : " << asm_flags_zf_is_0( left ) << std::endl;
	std::cout << std::endl;
}