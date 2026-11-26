#include "protos.h"

void f_005db464(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_4 */
{
    FN_ENTER(0x005db464);
    /* 005db464: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005db468: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5db46du); f_005d9a60();
    /* 005db46d: ret 4 */ FN_RET(0x005db464); r_esp += 8; return;
}

