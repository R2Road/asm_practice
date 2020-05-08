#include "eax.h"

int cpp_eax()
{
	return 10;
}

int asm_eax()
{
	__asm mov eax, 10;
}
