#include "protos.h"

void f_005c34e8(void) /* ?allocate@?$allocator@D@std@@QAEPADI@Z_0 */
{
    FN_ENTER(0x005c34e8);
    /* 005c34e8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c34ec: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x5c34f1u); f_005022dc();
    /* 005c34f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c34f2: ret 4 */ FN_RET(0x005c34e8); r_esp += 8; return;
}

