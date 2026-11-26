#include "protos.h"

void f_005c5dc4(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_3 */
{
    FN_ENTER(0x005c5dc4);
    /* 005c5dc4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c5dc8: call 0x5c5dd0 */ r_esp -= 4; W32(r_esp, 0x5c5dcdu); f_005c5dd0();
    /* 005c5dcd: ret 4 */ FN_RET(0x005c5dc4); r_esp += 8; return;
}

