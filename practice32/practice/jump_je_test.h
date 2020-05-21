#pragma once

#include <iostream>
#include "jump_je.h"

void jump_je_test()
{
	const int left = 3;
	int right = 3;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump je : " << cpp_jump_je( left, right ) << std::endl;
	std::cout << "ASM jump je 1 : " << asm_jump_je_1( left, right ) << std::endl;
	std::cout << "ASM jump je 2 : " << asm_jump_je_2( left, right ) << std::endl;
	std::cout << std::endl;



	right = 4;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump je : " << cpp_jump_je( left, right ) << std::endl;
	std::cout << "ASM jump je 1 : " << asm_jump_je_1( left, right ) << std::endl;
	std::cout << "ASM jump je 2 : " << asm_jump_je_2( left, right ) << std::endl;
	std::cout << std::endl;
}