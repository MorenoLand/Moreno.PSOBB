#include "protos.h"

void f_00b5f7d0(void)
{
    FN_ENTER(0x00b5f7d0);
    /* 00b5f7d0: push 0x96eba5 */ { u32 v = 0x96eba5u; r_esp -= 4; W32(r_esp, v); }
    /* 00b5f7d5: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0xb5f7dbu); call_ind(t); }
    /* 00b5f7db: mov ebx, 0x227 */ r_ebx = 0x227u;
    /* 00b5f7e0: call 0xb60005 */ r_esp -= 4; W32(r_esp, 0xb5f7e5u); f_00b60005();
    /* 00b5f7e5: ret  */ FN_RET(0x00b5f7d0); r_esp += 4; return;
}

