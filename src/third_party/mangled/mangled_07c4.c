#include "protos.h"

void f_007c4f10(void) /* ?allocate@?$allocator@D@std@@QAEPADI@Z_1 */
{
    FN_ENTER(0x007c4f10);
    /* 007c4f10: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4f14: call 0x74c5f4 */ r_esp -= 4; W32(r_esp, 0x7c4f19u); f_0074c5f4();
    /* 007c4f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4f1a: ret 4 */ FN_RET(0x007c4f10); r_esp += 8; return;
}

void f_007c4f20(void) /* ?allocate@?$allocator@D@std@@QAEPADI@Z_2 */
{
    FN_ENTER(0x007c4f20);
    /* 007c4f20: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4f24: call 0x79f614 */ r_esp -= 4; W32(r_esp, 0x7c4f29u); f_0079f614();
    /* 007c4f29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4f2a: ret 4 */ FN_RET(0x007c4f20); r_esp += 8; return;
}

void f_007c4f30(void) /* ?allocate@?$allocator@D@std@@QAEPADI@Z_3 */
{
    FN_ENTER(0x007c4f30);
    /* 007c4f30: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4f34: call 0x79da04 */ r_esp -= 4; W32(r_esp, 0x7c4f39u); f_0079da04();
    /* 007c4f39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4f3a: ret 4 */ FN_RET(0x007c4f30); r_esp += 8; return;
}

