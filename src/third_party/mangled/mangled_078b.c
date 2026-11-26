#include "protos.h"

void f_0078b14c(void) /* ?SetOutputDC@CDC@@UAEXPAUHDC__@@@Z */
{
    FN_ENTER(0x0078b14c);
    /* 0078b14c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078b150: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0078b153: ret 4 */ FN_RET(0x0078b14c); r_esp += 8; return;
}

