#include "protos.h"

void f_008a8c52(void) /* _IP6_GET_V4_ADDR@4 */
{
    FN_ENTER(0x008a8c52);
    /* 008a8c52: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a8c56: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008a8c59: ret 4 */ FN_RET(0x008a8c52); r_esp += 8; return;
}

