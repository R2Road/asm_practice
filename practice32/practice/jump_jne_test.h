#pragma once

#include <iostream>
#include "jump_jne.h"

void jump_jne_test()
{
	const int left = 3;
	int right = 3;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump jne : " << cpp_jump_jne( left, right ) << std::endl;
	std::cout << "ASM jump jne 1 : " << asm_jump_jne_1( left, right ) << std::endl;
	std::cout << "ASM jump jne 2 : " << asm_jump_jne_2( left, right ) << std::endl;
	std::cout << std::endl;



	right = 4;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump jne : " << cpp_jump_jne( left, right ) << std::endl;
	std::cout << "ASM jump jne 1 : " << asm_jump_jne_1( left, right ) << std::endl;
	std::cout << "ASM jump jne 2 : " << asm_jump_jne_2( left, right ) << std::endl;
	std::cout << std::endl;
}