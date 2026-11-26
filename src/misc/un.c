#include "protos.h"

void f_0085e6a1(void) /* __un_inc */
{
    FN_ENTER(0x0085e6a1);
    /* 0085e6a1: cmp word ptr [esp + 4], 0xffff */ {  u32 a = R16((u32)(r_esp+0x4u)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085e6a8: je 0x85e6af */ if (fZ) goto L_0085e6af;
L_0085e6aa:; BB(0x0085e6aa);
    /* 0085e6aa: jmp 0x868b19 */ f_00868b19(); return;
L_0085e6af:; BB(0x0085e6af);
    /* 0085e6af: ret  */ FN_RET(0x0085e6a1); r_esp += 4; return;
}

