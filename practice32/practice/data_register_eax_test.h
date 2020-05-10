#pragma once

#include <iostream>
#include "data_register_eax.h"

void data_register_eax_test()
{
	std::cout << "CPP Eax : " << cpp_eax() << std::endl;
	std::cout << "ASM Eax : " << asm_eax() << std::endl;
	std::cout << std::endl;
}