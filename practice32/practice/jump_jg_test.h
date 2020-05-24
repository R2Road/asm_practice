#pragma once

#include <iostream>
#include <random>
#include "jump_jg.h"

void jump_jg_test()
{
	//
	// for Release Build
	// - block asm optimazation
	//
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution( 2, 6 );

	const int left = distribution( generator );
	int right = left;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump jg : " << cpp_jump_jg( left, right ) << std::endl;
	std::cout << "ASM jump jg 1 : " << asm_jump_jg_1( left, right ) << std::endl;
	std::cout << "ASM jump jg 2 : " << asm_jump_jg_2( left, right ) << std::endl;
	std::cout << std::endl;



	++right;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump jg : " << cpp_jump_jg( left, right ) << std::endl;
	std::cout << "ASM jump jg 1 : " << asm_jump_jg_1( left, right ) << std::endl;
	std::cout << "ASM jump jg 2 : " << asm_jump_jg_2( left, right ) << std::endl;
	std::cout << std::endl;



	----right;

	std::cout << "left : " << left << std::endl;
	std::cout << "right : " << right << std::endl;
	std::cout << std::endl;

	std::cout << "CPP jump jg : " << cpp_jump_jg( left, right ) << std::endl;
	std::cout << "ASM jump jg 1 : " << asm_jump_jg_1( left, right ) << std::endl;
	std::cout << "ASM jump jg 2 : " << asm_jump_jg_2( left, right ) << std::endl;
	std::cout << std::endl;
}