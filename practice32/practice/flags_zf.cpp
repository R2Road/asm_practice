#include "flags_zf.h"

// zf - zero flag

// ref : https://docs.microsoft.com/ko-kr/visualstudio/debugger/debugging-basics-registers-window?view=vs-2019
// open register window : alt + 5 in debug
// mouse right click in register window
// check flag
// ZR is zf

bool cpp_flags_zf_is_1( int left )
{
	--left;
	return 0 == left;
}
bool asm_flags_zf_is_1( int left )
{
	__asm
	{
		mov eax, left;
		dec eax;
		sete al;
	}
}


bool cpp_flags_zf_is_0( int left )
{
	++left;
	return 0 != left;
}
bool asm_flags_zf_is_0( int left )
{
	__asm
	{
		mov eax, left;
		inc eax;
		setne al;
	}
}