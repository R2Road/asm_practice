#pragma once

#include <iostream>
#include "loop.h"

void loop_test()
{
	std::cout << "CPP loop" << std::endl;
	std::cout << "ASM loop" << std::endl;

	cpp_loop_for();
	asm_loop_for();

	std::cout << std::endl;
}