#include "protos.h"

void f_0085a636(void) /* ??1type_info@@UAE@XZ */
{
    FN_ENTER(0x0085a636);
    /* 0085a636: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a638: push 0x997fd0 */ { u32 v = 0x997fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a63d: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a642u); f_0085e5ac();
    /* 0085a642: mov esi, ecx */ r_esi = r_ecx;
    /* 0085a644: mov dword ptr [esi], 0x997fc8 */ W32((u32)(r_esi), 0x997fc8u);
    /* 0085a64a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0085a64c: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85a651u); f_0085e57a();
    /* 0085a651: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a652: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a656: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0085a659: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a65b: je 0x85a664 */ if (fZ) goto L_0085a664;
L_0085a65d:; BB(0x0085a65d);
    /* 0085a65d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a65e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85a663u); f_00858882();
    /* 0085a663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a664:; BB(0x0085a664);
    /* 0085a664: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a668: call 0x85a673 */ r_esp -= 4; W32(r_esp, 0x85a66du); f_0085a673();
    /* 0085a66d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a672u); f_0085e5e7();
    /* 0085a672: ret  */ FN_RET(0x0085a636); r_esp += 4; return;
}

void f_0085a67c(void) /* ??_Gtype_info@@UAEPAXI@Z */
{
    FN_ENTER(0x0085a67c);
    /* 0085a67c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a67d: mov esi, ecx */ r_esi = r_ecx;
    /* 0085a67f: call 0x85a636 */ r_esp -= 4; W32(r_esp, 0x85a684u); f_0085a636();
    /* 0085a684: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a689: je 0x85a692 */ if (fZ) goto L_0085a692;
L_0085a68b:; BB(0x0085a68b);
    /* 0085a68b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a68c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x85a691u); f_00857e98();
    /* 0085a691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a692:; BB(0x0085a692);
    /* 0085a692: mov eax, esi */ r_eax = r_esi;
    /* 0085a694: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a695: ret 4 */ FN_RET(0x0085a67c); r_esp += 8; return;
}

