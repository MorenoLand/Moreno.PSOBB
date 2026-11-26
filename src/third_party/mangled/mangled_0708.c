#include "protos.h"

void f_00708120(void) /* ?SetClassToken@tagCOR_ILMETHOD_SECT_EH_CLAUSE_FAT@@QAEXK@Z */
{
    FN_ENTER(0x00708120);
    /* 00708120: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00708124: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00708127: ret 4 */ FN_RET(0x00708120); r_esp += 8; return;
}

