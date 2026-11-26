#include "protos.h"

void f_007a8a2c(void) /* ??1_Timevec@std@@QAE@XZ_0 */
{
    FN_ENTER(0x007a8a2c);
    /* 007a8a2c: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8a2e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7a8a33u); f_00858882();
    /* 007a8a33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a8a34: ret  */ FN_RET(0x007a8a2c); r_esp += 4; return;
}

void f_007a8b74(void) /* ??3@YAXPAX@Z */
{
    FN_ENTER(0x007a8b74);
    /* 007a8b74: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a8b78: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7a8b7du); f_00858882();
    /* 007a8b7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a8b7e: ret  */ FN_RET(0x007a8b74); r_esp += 4; return;
}

