#include "flags_zf.h"

// sf - sign flag

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019
// open register window : alt + 5 in debug
// mouse right click in register window
// check flag
// PL : is sf

// "lahf" is load flags in to "ah"
// | SF | ZF | xx | AF | xx | PF | xx | CF |

int asm_flags_sf_inc_and_lahf_for_signed_int( const int left )
{
	__asm
	{
		mov eax, left;
		inc eax;
		
		lahf;
	}
}
int asm_flags_sf_dec_and_lahf_for_signed_int( const int left )
{
	__asm
	{
		mov eax, left;
		dec eax;
		
		lahf;
	}
}

int asm_flags_sf_inc_and_lahf_for_unsigned_int( const unsigned int left )
{
	__asm
	{
		mov eax, left;
		inc eax;

		lahf;
	}
}
int asm_flags_sf_dec_and_lahf_for_unsigned_int( const unsigned int left )
{
	__asm
	{
		mov eax, left;
		dec eax;

		lahf;
	}
}