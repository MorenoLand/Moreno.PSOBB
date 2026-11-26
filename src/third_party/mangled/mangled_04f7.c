#include "protos.h"

void f_004f7fb0(void) /* ?allocate@?$allocator@D@std@@QAEPADI@Z */
{
    FN_ENTER(0x004f7fb0);
    /* 004f7fb0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f7fb4: call 0x807bac */ r_esp -= 4; W32(r_esp, 0x4f7fb9u); f_00807bac();
    /* 004f7fb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7fba: ret 4 */ FN_RET(0x004f7fb0); r_esp += 8; return;
}

