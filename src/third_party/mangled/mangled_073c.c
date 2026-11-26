#include "protos.h"

void f_0073cb1c(void) /* ?EnableStackedTabs@CPropertySheet@@QAEXH@Z */
{
    FN_ENTER(0x0073cb1c);
    /* 0073cb1c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073cb20: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 0073cb26: ret 4 */ FN_RET(0x0073cb1c); r_esp += 8; return;
}

