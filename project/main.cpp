#include <iostream>

#include "practice/sum.h"

int main()
{
	std::cout << "CPP Sum : " << cpp_sum( 1, 2 ) << std::endl;
	std::cout << "ASM Sum : " << asm_sum( 2, 3 ) << std::endl;
}
