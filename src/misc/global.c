#include "protos.h"

void f_008578cc(void) /* __global_unwind2 */
{
    FN_ENTER(0x008578cc);
    /* 008578cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008578cd: mov ebp, esp */ r_ebp = r_esp;
    /* 008578cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008578d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008578d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008578d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008578d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008578d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008578d7: push 0x8578e4 */ { u32 v = 0x8578e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008578dc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008578df: call 0x8c9b20 */ r_esp -= 4; W32(r_esp, 0x8578e4u); f_008c9b20();
    /* 008578e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008578e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008578e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008578e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578e8: mov esp, ebp */ r_esp = r_ebp;
    /* 008578ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008578eb: ret  */ FN_RET(0x008578cc); r_esp += 4; return;
}

