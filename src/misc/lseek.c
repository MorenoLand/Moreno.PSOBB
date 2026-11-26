#include "protos.h"

void f_0086485b(void) /* __lseek_lk */
{
    FN_ENTER(0x0086485b);
    /* 0086485b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086485c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00864860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864861: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x864866u); f_00863ad0();
    /* 00864866: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086486a: jne 0x86487c */ if (!fZ) goto L_0086487c;
L_0086486c:; BB(0x0086486c);
    /* 0086486c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x864871u); f_00859dd6();
    /* 00864871: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00864877: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086487a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086487b: ret  */ FN_RET(0x0086485b); r_esp += 4; return;
L_0086487c:; BB(0x0086487c);
    /* 0086487c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086487d: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864881: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00864883: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864888: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x86488eu); call_ind(t); }
    /* 0086488e: mov edi, eax */ r_edi = r_eax;
    /* 00864890: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864893: jne 0x86489d */ if (!fZ) goto L_0086489d;
L_00864895:; BB(0x00864895);
    /* 00864895: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86489bu); call_ind(t); }
    /* 0086489b: jmp 0x86489f */ goto L_0086489f;
L_0086489d:; BB(0x0086489d);
    /* 0086489d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086489f:; BB(0x0086489f);
    /* 0086489f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008648a1: je 0x8648af */ if (fZ) goto L_008648af;
L_008648a3:; BB(0x008648a3);
    /* 008648a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008648a4: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x8648a9u); f_00859de8();
    /* 008648a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008648aa: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008648ad: jmp 0x8648cc */ goto L_008648cc;
L_008648af:; BB(0x008648af);
    /* 008648af: mov ecx, esi */ r_ecx = r_esi;
    /* 008648b1: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008648b4: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008648b7: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 008648be: mov eax, esi */ r_eax = r_esi;
    /* 008648c0: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 008648c3: lea eax, [ecx + eax*4 + 4] */ r_eax = (u32)(r_ecx+r_eax*4+0x4u);
    /* 008648c7: and byte ptr [eax], 0xfd */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0xfdu; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008648ca: mov eax, edi */ r_eax = r_edi;
L_008648cc:; BB(0x008648cc);
    /* 008648cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008648cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008648ce: ret  */ FN_RET(0x0086485b); r_esp += 4; return;
}

