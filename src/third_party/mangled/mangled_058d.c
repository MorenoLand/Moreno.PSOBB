#include "protos.h"

void f_0058d25c(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_2 */
{
    FN_ENTER(0x0058d25c);
    /* 0058d25c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d260: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x58d265u); f_00521010();
    /* 0058d265: ret 4 */ FN_RET(0x0058d25c); r_esp += 8; return;
}

