#include "protos.h"

void f_0088fd17(void) /* ??_H@YGXPAXIHP6EPAX0@Z@Z */
{
    FN_ENTER(0x0088fd17);
    /* 0088fd17: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088fd1b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088fd1c: js 0x88fd36 */ if (fS) goto L_0088fd36;
L_0088fd1e:; BB(0x0088fd1e);
    /* 0088fd1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd1f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088fd23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd24: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
L_0088fd27:; BB(0x0088fd27);
    /* 0088fd27: mov ecx, esi */ r_ecx = r_esi;
    /* 0088fd29: call dword ptr [esp + 0x18] */ { u32 t = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, 0x88fd2du); call_ind(t); }
    /* 0088fd2d: add esi, dword ptr [esp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 0088fd31: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088fd32: jne 0x88fd27 */ if (!fZ) goto L_0088fd27;
L_0088fd34:; BB(0x0088fd34);
    /* 0088fd34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088fd35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0088fd36:; BB(0x0088fd36);
    /* 0088fd36: ret 0x10 */ FN_RET(0x0088fd17); r_esp += 20; return;
}

