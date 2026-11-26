#include "protos.h"

void f_00869797(void) /* _x_ismbbtype */
{
    FN_ENTER(0x00869797);
    /* 00869797: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0086979c: mov cl, byte ptr [esp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esp+0xcu))) & 0xffu);
    /* 008697a0: test byte ptr [eax + 0xaf0841], cl */ {  u32 a = R8((u32)(r_eax+0xaf0841u)); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008697a6: jne 0x8697c6 */ if (!fZ) goto L_008697c6;
L_008697a8:; BB(0x008697a8);
    /* 008697a8: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008697ad: je 0x8697bf */ if (fZ) goto L_008697bf;
L_008697af:; BB(0x008697af);
    /* 008697af: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 008697b5: movzx eax, word ptr [ecx + eax*2] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2));
    /* 008697b9: and eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008697bd: jmp 0x8697c1 */ goto L_008697c1;
L_008697bf:; BB(0x008697bf);
    /* 008697bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008697c1:; BB(0x008697c1);
    /* 008697c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008697c3: jne 0x8697c6 */ if (!fZ) goto L_008697c6;
L_008697c5:; BB(0x008697c5);
    /* 008697c5: ret  */ FN_RET(0x00869797); r_esp += 4; return;
L_008697c6:; BB(0x008697c6);
    /* 008697c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008697c8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008697c9: ret  */ FN_RET(0x00869797); r_esp += 4; return;
}

