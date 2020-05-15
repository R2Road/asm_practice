#pragma once

#include <iostream>
#include "mnemonic_div.h"

void mnemonic_div_test()
{
	int left = 13;
	int right = 4;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP Div : " << cpp_div( left, right ) << std::endl;
	std::cout << "ASM Div : " << asm_div( left, right ) << std::endl;
	std::cout << std::endl;

	std::cout << "CPP Div remainder : " << cpp_div_remainder( left, right ) << std::endl;
	std::cout << "ASM Div remainder : " << asm_div_remainder( left, right ) << std::endl;
	std::cout << std::endl;



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;



	left = -13;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP iDiv : " << cpp_idiv( left, right ) << std::endl;
	std::cout << "ASM iDiv : " << asm_idiv( left, right ) << std::endl;
	std::cout << std::endl;

	std::cout << "CPP iDiv remainder : " << cpp_idiv_remainder( left, right ) << std::endl;
	std::cout << "ASM iDiv remainder : " << asm_idiv_remainder( left, right ) << std::endl;
	std::cout << std::endl;
}