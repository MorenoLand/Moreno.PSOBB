#include "protos.h"

void f_006a6f68(void) /* o_2:ulink:a_104:m__9__:S_0_pe */
{
    FN_ENTER(0x006a6f68);
    /* 006a6f68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6f6a: ret 8 */ FN_RET(0x006a6f68); r_esp += 12; return;
}

