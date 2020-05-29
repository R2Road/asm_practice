#pragma once

int asm_flags_just_do_lahf();
int asm_flags_zf_inc_and_lahf( int left );
int asm_flags_zf_dec_and_lahf( int left );
