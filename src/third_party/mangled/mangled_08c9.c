#include "protos.h"

void f_008c9aa0(void) /* ??0_Init_locks@std@@QAE@XZ */
{
    FN_ENTER(0x008c9aa0);
    /* 008c9aa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9aa1: push 0xa3a558 */ { u32 v = 0xa3a558u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9aa6: mov edi, ecx */ r_edi = r_ecx;
    /* 008c9aa8: call dword ptr [0x8f810c] */ { u32 t = R32((u32)(0x8f810cu)); r_esp -= 4; W32(r_esp, 0x8c9aaeu); call_ind(t); }
    /* 008c9aae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9ab0: jne 0x8c9acb */ if (!fZ) goto L_008c9acb;
L_008c9ab2:; BB(0x008c9ab2);
    /* 008c9ab2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9ab3: mov esi, 0xaeb430 */ r_esi = 0xaeb430u;
L_008c9ab8:; BB(0x008c9ab8);
    /* 008c9ab8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9ab9: call 0x8c9af8 */ r_esp -= 4; W32(r_esp, 0x8c9abeu); f_008c9af8();
    /* 008c9abe: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9ac1: cmp esi, 0xaeb490 */ {  u32 a = r_esi; u32 b = 0xaeb490u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c9ac7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c9ac8: jl 0x8c9ab8 */ if ((fS!=fO)) goto L_008c9ab8;
L_008c9aca:; BB(0x008c9aca);
    /* 008c9aca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c9acb:; BB(0x008c9acb);
    /* 008c9acb: mov eax, edi */ r_eax = r_edi;
    /* 008c9acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9ace: ret  */ FN_RET(0x008c9aa0); r_esp += 4; return;
}

