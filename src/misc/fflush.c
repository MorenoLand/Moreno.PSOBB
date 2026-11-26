#include "protos.h"

void f_0085b9e3(void) /* __fflush_lk */
{
    FN_ENTER(0x0085b9e3);
    /* 0085b9e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b9e4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0085b9e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b9e9: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x85b9eeu); f_0085b986();
    /* 0085b9ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b9f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b9f1: je 0x85b9f8 */ if (fZ) goto L_0085b9f8;
L_0085b9f3:; BB(0x0085b9f3);
    /* 0085b9f3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b9f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b9f7: ret  */ FN_RET(0x0085b9e3); r_esp += 4; return;
L_0085b9f8:; BB(0x0085b9f8);
    /* 0085b9f8: test byte ptr [esi + 0xd], 0x40 */ {  u32 a = R8((u32)(r_esi+0xdu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085b9fc: je 0x85ba0d */ if (fZ) goto L_0085ba0d;
L_0085b9fe:; BB(0x0085b9fe);
    /* 0085b9fe: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ba01: call 0x86603f */ r_esp -= 4; W32(r_esp, 0x85ba06u); f_0086603f();
    /* 0085ba06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba07: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085ba09: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 0085ba0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ba0c: ret  */ FN_RET(0x0085b9e3); r_esp += 4; return;
L_0085ba0d:; BB(0x0085ba0d);
    /* 0085ba0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085ba0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ba10: ret  */ FN_RET(0x0085b9e3); r_esp += 4; return;
}

