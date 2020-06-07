#include "flags_af.h"

// af - Auxiliary Carry Flag
//  - 보조 캐리 플래그

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019
// ref : https://en.wikipedia.org/wiki/FLAGS_register
// open register window : alt + 5 in debug
// mouse right click in register window
// check flag
// AC is af

// "lahf" is load flags in to "ah"
// | SF | ZF | xx | AF | xx | PF | xx | CF |

int cpp_flags_af_inc_and_lahf_for_unsigned_char( unsigned char left )
{
	++left;

	__asm
	{
		lahf;
	}
}
int asm_flags_af_inc_and_lahf_for_unsigned_char( unsigned char left )
{
	__asm
	{
		mov al, left;
		inc al;
		
		lahf;
	}
}


int cpp_flags_af_inc_and_lahf_for_signed_char( unsigned char left )
{
	++left;

	__asm
	{
		lahf;
	}
}
int asm_flags_af_inc_and_lahf_for_signed_char( unsigned char left )
{
	__asm
	{
		mov al, left;
		inc al;
		
		lahf;
	}
}



int asm_flags_af_inc_and_lahf_for_unsigned_short( unsigned short left )
{
	__asm
	{
		mov ax, left;
		inc ax;

		lahf;
	}
}
int asm_flags_af_inc_and_lahf_for_signed_short( short left )
{
	__asm
	{
		mov ax, left;
		inc ax;

		lahf;
	}
}



int asm_flags_af_inc_and_lahf_for_unsigned_int( unsigned int left )
{
	__asm
	{
		mov eax, left;
		inc eax;

		lahf;
	}
}
int asm_flags_af_inc_and_lahf_for_signed_int( int left )
{
	__asm
	{
		mov eax, left;
		inc eax;

		lahf;
	}
}