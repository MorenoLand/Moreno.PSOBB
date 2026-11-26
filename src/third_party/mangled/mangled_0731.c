#include "protos.h"

void f_00731264(void) /* ?InitAllocator@CBaseOutputPin@@UAEJPAPAUIMemAllocator@@@Z_7 */
{
    FN_ENTER(0x00731264);
    /* 00731264: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731268: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73126du); f_00712624();
    /* 0073126d: ret 4 */ FN_RET(0x00731264); r_esp += 8; return;
}

void f_007312c4(void) /* ?NotifyMediaType@CDrawImage@@QAEXPAVCMediaType@@@Z */
{
    FN_ENTER(0x007312c4);
    /* 007312c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007312c8: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 007312cb: ret 4 */ FN_RET(0x007312c4); r_esp += 8; return;
}

