#include "protos.h"

void f_004d1824(void) /* ?SetHostFlags@CDHtmlDialog@@QAEXK@Z */
{
    FN_ENTER(0x004d1824);
    /* 004d1824: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004d1828: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 004d182e: ret 4 */ FN_RET(0x004d1824); r_esp += 8; return;
}

