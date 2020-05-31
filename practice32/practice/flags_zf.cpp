#include "flags_zf.h"

// zf - zero flag

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019
// ref : https://en.wikipedia.org/wiki/FLAGS_register
// open register window : alt + 5 in debug
// mouse right click in register window
// check flag
// ZR is zf

// "lahf" is load flags in to "ah"
// | SF | ZF | xx | AF | xx | PF | xx | CF |

int asm_flags_just_do_lahf()
{
	__asm
	{
		lahf;
	}
}


int asm_flags_zf_inc_and_lahf( int left )
{
	__asm
	{
		mov eax, left;
		inc eax;
		
		lahf;
	}
}


int asm_flags_zf_dec_and_lahf( int left )
{
	__asm
	{
		mov eax, left;
		dec eax;
		
		lahf;
	}
}