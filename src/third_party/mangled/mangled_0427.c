#include "protos.h"

void f_00427bb4(void) /* ?ContinueRouting@CCmdUI@@QAEXXZ */
{
    FN_ENTER(0x00427bb4);
    /* 00427bb4: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 00427bbb: ret  */ FN_RET(0x00427bb4); r_esp += 4; return;
}

