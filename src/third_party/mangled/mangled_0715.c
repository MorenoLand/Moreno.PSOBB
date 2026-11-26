#include "protos.h"

void f_00715c74(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_6 */
{
    FN_ENTER(0x00715c74);
    /* 00715c74: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715c78: call 0x73a54c */ r_esp -= 4; W32(r_esp, 0x715c7du); f_0073a54c();
    /* 00715c7d: ret 4 */ FN_RET(0x00715c74); r_esp += 8; return;
}

