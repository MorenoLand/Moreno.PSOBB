#include "protos.h"

void f_00869982(void) /* ___shl_12 */
{
    FN_ENTER(0x00869982);
    /* 00869982: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00869986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869987: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00869989: mov ecx, esi */ r_ecx = r_esi;
    /* 0086998b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086998d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086998e: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00869991: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00869994: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00869996: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00869999: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0086999b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0086999e: mov edx, edi */ r_edx = r_edi;
    /* 008699a0: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008699a3: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008699a5: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008699a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008699a8: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008699ab: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008699ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008699af: ret  */ FN_RET(0x00869982); r_esp += 4; return;
}

