#include "protos.h"

void f_0083dd24(void) /* _malloc_0 */
{
    FN_ENTER(0x0083dd24);
    /* 0083dd24: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dd28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd2a: push dword ptr [0xa21c60] */ { u32 v = R32((u32)(0xa21c60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dd30: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x83dd36u); call_ind(t); }
    /* 0083dd36: ret  */ FN_RET(0x0083dd24); r_esp += 4; return;
}

