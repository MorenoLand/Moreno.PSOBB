#include "protos.h"

void f_00520390(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_0 */
{
    FN_ENTER(0x00520390);
    /* 00520390: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520394: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x520399u); f_00787550();
    /* 00520399: ret 4 */ FN_RET(0x00520390); r_esp += 8; return;
}

void f_00520f80(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_1 */
{
    FN_ENTER(0x00520f80);
    /* 00520f80: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520f84: call 0x520f8c */ r_esp -= 4; W32(r_esp, 0x520f89u); f_00520f8c();
    /* 00520f89: ret 4 */ FN_RET(0x00520f80); r_esp += 8; return;
}

