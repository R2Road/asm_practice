#pragma once

#include <iostream>
#include "loop.h"

void loop_test()
{
	const int left = 3;

	std::cout << "left : " << left << std::endl;
	std::cout << std::endl;

	std::cout << "CPP loop while : " << cpp_loop_while( left ) << std::endl;
	std::cout << "CPP loop for : " << cpp_loop_for( left ) << std::endl;
	std::cout << "ASM loop dec : " << asm_loop_dec( left ) << std::endl;
	std::cout << "ASM loop inc : " << asm_loop_inc( left ) << std::endl;
	std::cout << std::endl;
}