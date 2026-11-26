#include "protos.h"

void f_0072db50(void) /* ?_com_issue_error@@YGXJ@Z */
{
    FN_ENTER(0x0072db50);
    /* 0072db50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072db52: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072db56: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x72db5bu); f_0072db60();
    /* 0072db5b: ret 4 */ FN_RET(0x0072db50); r_esp += 8; return;
}

