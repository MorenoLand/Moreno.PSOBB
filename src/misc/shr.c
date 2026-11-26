#include "protos.h"

void f_008699b0(void) /* ___shr_12 */
{
    FN_ENTER(0x008699b0);
    /* 008699b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008699b4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008699b7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008699ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008699bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008699bc: mov edi, ecx */ r_edi = r_ecx;
    /* 008699be: mov esi, edx */ r_esi = r_edx;
    /* 008699c0: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008699c2: shl esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008699c5: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008699c7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008699ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008699cc: shl edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008699cf: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008699d1: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008699d3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008699d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008699d6: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008699d9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008699db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008699dc: ret  */ FN_RET(0x008699b0); r_esp += 4; return;
}

