#include "flags_zf.h"

// sf - sign flag

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019
// open register window : alt + 5 in debug
// mouse right click in register window
// check flag
// P: is zf

// "lahf" is load flags in to "ah"

int asm_flags_sf_inc_and_lahf( const int left )
{
	__asm
	{
		mov eax, left;
		inc eax;
		
		lahf;
	}
}


int asm_flags_sf_dec_and_lahf( const int left )
{
	__asm
	{
		mov eax, left;
		dec eax;
		
		lahf;
	}
}