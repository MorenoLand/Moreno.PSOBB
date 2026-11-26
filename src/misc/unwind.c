#include "protos.h"

void f_008578ec(void) /* __unwind_handler */
{
    FN_ENTER(0x008578ec);
    /* 008578ec: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008578f0: test dword ptr [ecx + 4], 6 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008578f7: mov eax, 1 */ r_eax = 0x1u;
    /* 008578fc: je 0x85790d */ if (fZ) goto L_0085790d;
L_008578fe:; BB(0x008578fe);
    /* 008578fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00857902: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00857906: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857908: mov eax, 3 */ r_eax = 0x3u;
L_0085790d:; BB(0x0085790d);
    /* 0085790d: ret  */ FN_RET(0x008578ec); r_esp += 4; return;
}

