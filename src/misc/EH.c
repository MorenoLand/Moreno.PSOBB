#include "protos.h"

void f_008cb064(void) /* __EH_prolog */
{
    FN_ENTER(0x008cb064);
    /* 008cb064: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008cb066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb067: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008cb06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb06e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008cb072: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008cb079: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008cb07d: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 008cb081: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cb082: ret  */ FN_RET(0x008cb064); r_esp += 4; return;
}

