#include "protos.h"

void f_0086fec4(void) /* ?_Addfac@_Locimp@locale@std@@AAEXPAVfacet@23@I@Z */
{
    FN_ENTER(0x0086fec4);
    /* 0086fec4: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fec8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086fecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086fecd: call 0x871d34 */ r_esp -= 4; W32(r_esp, 0x86fed2u); f_00871d34();
    /* 0086fed2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086fed5: ret 8 */ FN_RET(0x0086fec4); r_esp += 12; return;
}

