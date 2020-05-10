#include "data_register_eax.h"

int cpp_eax()
{
	return 10;
}

// Processor Registers
// > Data Registers
// > > used for arithmetic, logical, and other operations
// > > 32 bit
// > > EAX, EBX, ECX, EDX

// EAX
// > E is Extended
// > the AX register corresponds to the lowest 16 bits of the new 32 - bit EAX register
int asm_eax()
{
	__asm mov eax, 10;
}
