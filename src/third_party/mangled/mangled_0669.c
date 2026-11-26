#include "protos.h"

void f_00669644(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_5 */
{
    FN_ENTER(0x00669644);
    /* 00669644: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669648: call 0x669650 */ r_esp -= 4; W32(r_esp, 0x66964du); f_00669650();
    /* 0066964d: ret 4 */ FN_RET(0x00669644); r_esp += 8; return;
}

