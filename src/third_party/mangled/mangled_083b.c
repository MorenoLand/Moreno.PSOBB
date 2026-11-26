#include "protos.h"

void f_0083bcf4(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_9 */
{
    FN_ENTER(0x0083bcf4);
    /* 0083bcf4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083bcf8: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x83bcfdu); f_0083bd00();
    /* 0083bcfd: ret 4 */ FN_RET(0x0083bcf4); r_esp += 8; return;
}

void f_0083be3c(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_10 */
{
    FN_ENTER(0x0083be3c);
    /* 0083be3c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083be40: call 0x83be48 */ r_esp -= 4; W32(r_esp, 0x83be45u); f_0083be48();
    /* 0083be45: ret 4 */ FN_RET(0x0083be3c); r_esp += 8; return;
}

