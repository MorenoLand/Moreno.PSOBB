#include "protos.h"

void f_008cb57f(void) /* __rt_probe_read4@4 */
{
    FN_ENTER(0x008cb57f);
    /* 008cb57f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008cb581: push 0x9a01b0 */ { u32 v = 0x9a01b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cb586: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8cb58bu); f_0085e5ac();
    /* 008cb58b: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb58f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008cb592: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008cb594: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008cb596: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cb597: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008cb59a: jmp 0x8cb5b5 */ goto L_008cb5b5;
L_008cb5b5:; BB(0x008cb5b5);
    /* 008cb5b5: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008cb5b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8cb5beu); f_0085e5e7();
    /* 008cb5be: ret 4 */ FN_RET(0x008cb57f); r_esp += 8; return;
}

