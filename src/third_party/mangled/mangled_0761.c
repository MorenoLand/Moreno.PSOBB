#include "protos.h"

void f_00761390(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_8 */
{
    FN_ENTER(0x00761390);
    /* 00761390: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00761394: call 0x760b18 */ r_esp -= 4; W32(r_esp, 0x761399u); f_00760b18();
    /* 00761399: ret 4 */ FN_RET(0x00761390); r_esp += 8; return;
}

