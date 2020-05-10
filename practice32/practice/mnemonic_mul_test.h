#pragma once

#include <iostream>
#include "mnemonic_mul.h"

void mnemonic_mul_test()
{
	int left = 13;
	int right = 4;

	std::cout << "CPP Mul : " << cpp_mul( left, right ) << std::endl;
	std::cout << "ASM Mul : " << asm_mul( left, right ) << std::endl;

	std::cout << "CPP iMul : " << cpp_imul( -left, right ) << std::endl;
	std::cout << "ASM iMul : " << asm_imul( -left, right ) << std::endl;
}