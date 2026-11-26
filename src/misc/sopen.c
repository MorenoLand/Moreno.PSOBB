#include "protos.h"

void f_00869656(void) /* __sopen_0 */
{
    FN_ENTER(0x00869656);
    /* 00869656: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00869658: push 0x99a448 */ { u32 v = 0x99a448u; r_esp -= 4; W32(r_esp, v); }
    /* 0086965d: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x869662u); f_0085e5ac();
    /* 00869662: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869666: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086966a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086966d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00869670: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869673: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00869676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869677: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0086967a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086967b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086967e: call 0x86936e */ r_esp -= 4; W32(r_esp, 0x869683u); f_0086936e();
    /* 00869683: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869686: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00869689: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086968d: call 0x86969b */ r_esp -= 4; W32(r_esp, 0x869692u); f_0086969b();
    /* 00869692: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00869695: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86969au); f_0085e5e7();
    /* 0086969a: ret  */ FN_RET(0x00869656); r_esp += 4; return;
}

