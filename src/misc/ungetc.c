#include "protos.h"

void f_008692a8(void) /* _ungetc_0 */
{
    FN_ENTER(0x008692a8);
    /* 008692a8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008692aa: push 0x99a438 */ { u32 v = 0x99a438u; r_esp -= 4; W32(r_esp, v); }
    /* 008692af: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8692b4u); f_0085e5ac();
    /* 008692b4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008692b7: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x8692bcu); f_0085bbfc();
    /* 008692bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008692bd: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008692c1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008692c4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008692c7: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x8692ccu); f_0086923c();
    /* 008692cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008692cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008692ce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008692d1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008692d5: call 0x8692e3 */ r_esp -= 4; W32(r_esp, 0x8692dau); f_008692e3();
    /* 008692da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008692dd: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8692e2u); f_0085e5e7();
    /* 008692e2: ret  */ FN_RET(0x008692a8); r_esp += 4; return;
}

