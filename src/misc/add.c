#include "protos.h"

void f_00869924(void) /* ___add_12 */
{
    FN_ENTER(0x00869924);
    /* 00869924: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869925: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00869929: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086992a: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0086992e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086992f: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00869931: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00869933: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x869938u); f_00869903();
    /* 00869938: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086993b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086993d: je 0x869956 */ if (fZ) goto L_00869956;
L_0086993f:; BB(0x0086993f);
    /* 0086993f: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 00869942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869943: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00869945: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00869947: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x86994cu); f_00869903();
    /* 0086994c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086994f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869951: je 0x869956 */ if (fZ) goto L_00869956;
L_00869953:; BB(0x00869953);
    /* 00869953: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00869956:; BB(0x00869956);
    /* 00869956: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 00869959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086995a: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086995d: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0086995f: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x869964u); f_00869903();
    /* 00869964: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869969: je 0x86996e */ if (fZ) goto L_0086996e;
L_0086996b:; BB(0x0086996b);
    /* 0086996b: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086996e:; BB(0x0086996e);
    /* 0086996e: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 00869971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869972: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869975: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00869977: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x86997cu); f_00869903();
    /* 0086997c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086997f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869980: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869981: ret  */ FN_RET(0x00869924); r_esp += 4; return;
}

