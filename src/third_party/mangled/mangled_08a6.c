#include "protos.h"

void f_008a64b4(void) /* ?EncodePremult@@YAJPAUD3DXCOLOR@@PBU1@@Z */
{
    FN_ENTER(0x008a64b4);
    /* 008a64b4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a64b6: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a64b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008a64b8:; BB(0x008a64b8);
    /* 008a64b8: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008a64bb: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 008a64bd: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a64c0: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008a64c2: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a64c5: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008a64c6: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 008a64c9: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 008a64cc: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 008a64cf: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 008a64d2: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 008a64d5: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 008a64d8: mov esi, dword ptr [eax - 4] */ r_esi = R32((u32)(r_eax+0xfffffffcu));
    /* 008a64db: mov dword ptr [ecx - 4], esi */ W32((u32)(r_ecx+0xfffffffcu), r_esi);
    /* 008a64de: jne 0x8a64b8 */ if (!fZ) goto L_008a64b8;
L_008a64e0:; BB(0x008a64e0);
    /* 008a64e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a64e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a64e3: ret  */ FN_RET(0x008a64b4); r_esp += 4; return;
}

