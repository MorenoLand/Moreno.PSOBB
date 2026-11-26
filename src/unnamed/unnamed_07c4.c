#include "protos.h"

void f_007c4cfc(void) /* sub_7C4CFC */
{
    FN_ENTER(0x007c4cfc);
    /* 007c4cfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4cfd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c4d00: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007c4d04: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 007c4d07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c4d09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4d0b: je 0x7c4d49 */ if (fZ) goto L_007c4d49;
L_007c4d0d:; BB(0x007c4d0d);
    /* 007c4d0d: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007c4d11: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007c4d14: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007c4d17: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d19: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d1b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d1f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d23: lea edx, [edx + edx + 0x18] */ r_edx = (u32)(r_edx+r_edx+0x18u);
    /* 007c4d27: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007c4d29: mov edi, eax */ r_edi = r_eax;
    /* 007c4d2b: mov esi, edx */ r_esi = r_edx;
L_007c4d2d:; BB(0x007c4d2d);
    /* 007c4d2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d2f: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4d34u); f_00813a78();
    /* 007c4d34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c4d37: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4d3a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007c4d3d: cmp edi, dword ptr [ebx + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007c4d40: jb 0x7c4d2d */ if (fC) goto L_007c4d2d;
L_007c4d42:; BB(0x007c4d42);
    /* 007c4d42: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c4d46: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007c4d49:; BB(0x007c4d49);
    /* 007c4d49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d4a: call 0x74eddc */ r_esp -= 4; W32(r_esp, 0x7c4d4fu); f_0074eddc();
    /* 007c4d4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d50: call 0x79db38 */ r_esp -= 4; W32(r_esp, 0x7c4d55u); f_0079db38();
    /* 007c4d55: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4d58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c4d59: ret 4 */ FN_RET(0x007c4cfc); r_esp += 8; return;
}

void f_007c4d5c(void)
{
    FN_ENTER(0x007c4d5c);
    /* 007c4d5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4d60: lea edx, [eax + 0x28] */ r_edx = (u32)(r_eax+0x28u);
    /* 007c4d63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d65: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4d6au); f_00813a78();
    /* 007c4d6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4d6d: ret 4 */ FN_RET(0x007c4d5c); r_esp += 8; return;
}

void f_007c4d70(void)
{
    FN_ENTER(0x007c4d70);
    /* 007c4d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d71: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007c4d75: lea eax, [ebp + 0x18] */ r_eax = (u32)(r_ebp+0x18u);
    /* 007c4d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d7a: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4d7fu); f_00813a78();
    /* 007c4d7f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c4d80: call 0x74d47c */ r_esp -= 4; W32(r_esp, 0x7c4d85u); f_0074d47c();
    /* 007c4d85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c4d89: ret 4 */ FN_RET(0x007c4d70); r_esp += 8; return;
}

void f_007c4d8c(void)
{
    FN_ENTER(0x007c4d8c);
    /* 007c4d8c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4d90: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007c4d93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4d95: je 0x7c4dbb */ if (fZ) goto L_007c4dbb;
L_007c4d97:; BB(0x007c4d97);
    /* 007c4d97: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4d9a: je 0x7c4db3 */ if (fZ) goto L_007c4db3;
L_007c4d9c:; BB(0x007c4d9c);
    /* 007c4d9c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c4d9f: jb 0x7c4db8 */ if (fC) goto L_007c4db8;
L_007c4da1:; BB(0x007c4da1);
    /* 007c4da1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007c4da4: jbe 0x7c4dab */ if ((fC||fZ)) goto L_007c4dab;
L_007c4da6:; BB(0x007c4da6);
    /* 007c4da6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c4da9: jne 0x7c4db8 */ if (!fZ) goto L_007c4db8;
L_007c4dab:; BB(0x007c4dab);
    /* 007c4dab: call 0x7a0cd0 */ r_esp -= 4; W32(r_esp, 0x7c4db0u); f_007a0cd0();
    /* 007c4db0: ret 4 */ FN_RET(0x007c4d8c); r_esp += 8; return;
L_007c4db3:; BB(0x007c4db3);
    /* 007c4db3: call 0x79e958 */ r_esp -= 4; W32(r_esp, 0x7c4db8u); f_0079e958();
L_007c4db8:; BB(0x007c4db8);
    /* 007c4db8: ret 4 */ FN_RET(0x007c4d8c); r_esp += 8; return;
L_007c4dbb:; BB(0x007c4dbb);
    /* 007c4dbb: call 0x79e528 */ r_esp -= 4; W32(r_esp, 0x7c4dc0u); f_0079e528();
    /* 007c4dc0: ret 4 */ FN_RET(0x007c4d8c); r_esp += 8; return;
}

void f_007c4dc4(void) /* sub_7C4DC4 */
{
    FN_ENTER(0x007c4dc4);
    /* 007c4dc4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c4dc7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007c4dcb: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 007c4dce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c4dd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4dd2: je 0x7c4e2b */ if (fZ) goto L_007c4e2b;
L_007c4dd4:; BB(0x007c4dd4);
    /* 007c4dd4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007c4dd8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007c4ddc: mov esi, eax */ r_esi = r_eax;
    /* 007c4dde: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007c4de1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4de3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007c4de6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4de8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4dea: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4dec: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4dee: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4df0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4df2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4df4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4df6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4df8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4dfa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4dfc: lea ecx, [ecx + ecx + 0x44] */ r_ecx = (u32)(r_ecx+r_ecx+0x44u);
    /* 007c4e00: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007c4e02: mov edi, edx */ r_edi = r_edx;
    /* 007c4e04: mov ebx, ecx */ r_ebx = r_ecx;
L_007c4e06:; BB(0x007c4e06);
    /* 007c4e06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4e07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4e08: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4e0du); f_00813a78();
    /* 007c4e0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c4e10: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e16: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e19: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007c4e1c: jb 0x7c4e06 */ if (fC) goto L_007c4e06;
L_007c4e1e:; BB(0x007c4e1e);
    /* 007c4e1e: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007c4e22: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007c4e26: mov edx, edi */ r_edx = r_edi;
    /* 007c4e28: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007c4e2b:; BB(0x007c4e2b);
    /* 007c4e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4e2c: call 0x74d37c */ r_esp -= 4; W32(r_esp, 0x7c4e31u); f_0074d37c();
    /* 007c4e31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4e34: ret 4 */ FN_RET(0x007c4dc4); r_esp += 8; return;
}

void f_007c4e38(void) /* sub_7C4E38 */
{
    FN_ENTER(0x007c4e38);
    /* 007c4e38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4e39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4e3a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c4e3d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007c4e41: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 007c4e44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c4e46: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4e48: je 0x7c4edb */ if (fZ) goto L_007c4edb;
L_007c4e4e:; BB(0x007c4e4e);
    /* 007c4e4e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007c4e52: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007c4e56: mov edi, edx */ r_edi = r_edx;
    /* 007c4e58: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 007c4e5b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e5d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007c4e60: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e62: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e64: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e66: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e68: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e6a: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e6c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e6e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e70: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e72: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e74: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e76: lea ebx, [ebx + ebx + 0x44] */ r_ebx = (u32)(r_ebx+r_ebx+0x44u);
    /* 007c4e7a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4e7c: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007c4e7f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e81: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e83: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e85: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e87: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e89: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e8b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e8d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e8f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e91: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e93: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e95: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e97: lea esi, [esi + esi + 8] */ r_esi = (u32)(r_esi+r_esi+0x8u);
    /* 007c4e9b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4e9d: mov ebp, eax */ r_ebp = r_eax;
L_007c4e9f:; BB(0x007c4e9f);
    /* 007c4e9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4ea0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4ea1: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7c4ea6u); f_00813a78();
    /* 007c4ea6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c4ea9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007c4ead: mov ecx, dword ptr [ecx + 0x1e134] */ r_ecx = R32((u32)(r_ecx+0x1e134u));
    /* 007c4eb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4eb5: je 0x7c4ec0 */ if (fZ) goto L_007c4ec0;
L_007c4eb7:; BB(0x007c4eb7);
    /* 007c4eb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4eb8: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4ebb: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x7c4ebdu); call_ind(t); }
    /* 007c4ebd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c4ec0:; BB(0x007c4ec0);
    /* 007c4ec0: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c4ec6: add esi, 0x85c */ {  u32 a = r_esi; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007c4ecc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007c4ecf: cmp ebp, dword ptr [edi + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007c4ed2: jb 0x7c4e9f */ if (fC) goto L_007c4e9f;
L_007c4ed4:; BB(0x007c4ed4);
    /* 007c4ed4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007c4ed8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007c4edb:; BB(0x007c4edb);
    /* 007c4edb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4ede: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c4edf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c4ee0: ret 4 */ FN_RET(0x007c4e38); r_esp += 8; return;
}

void f_007c4ee4(void)
{
    FN_ENTER(0x007c4ee4);
    /* 007c4ee4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4ee8: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4eeb: call 0x74eb60 */ r_esp -= 4; W32(r_esp, 0x7c4ef0u); f_0074eb60();
    /* 007c4ef0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4ef1: ret 4 */ FN_RET(0x007c4ee4); r_esp += 8; return;
}

void f_007c4ef4(void)
{
    FN_ENTER(0x007c4ef4);
    /* 007c4ef4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4ef5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007c4ef9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c4efa: call 0x74c5b0 */ r_esp -= 4; W32(r_esp, 0x7c4effu); f_0074c5b0();
    /* 007c4eff: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c4f02: call 0x79f534 */ r_esp -= 4; W32(r_esp, 0x7c4f07u); f_0079f534();
    /* 007c4f07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c4f0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c4f0b: ret 4 */ FN_RET(0x007c4ef4); r_esp += 8; return;
}

void f_007c4f40(void)
{
    FN_ENTER(0x007c4f40);
    /* 007c4f40: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 007c4f46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c4f48: je 0x7c4f57 */ if (fZ) goto L_007c4f57;
L_007c4f4a:; BB(0x007c4f4a);
    /* 007c4f4a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4f4e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007c4f51: mov dword ptr [ecx + 0xaec], edx */ W32((u32)(r_ecx+0xaecu), r_edx);
L_007c4f57:; BB(0x007c4f57);
    /* 007c4f57: ret 4 */ FN_RET(0x007c4f40); r_esp += 8; return;
}

void f_007c4f5c(void)
{
    FN_ENTER(0x007c4f5c);
    /* 007c4f5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4f60: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007c4f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c4f65: jne 0x7c4f71 */ if (!fZ) goto L_007c4f71;
L_007c4f67:; BB(0x007c4f67);
    /* 007c4f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c4f68: call 0x79e0a0 */ r_esp -= 4; W32(r_esp, 0x7c4f6du); f_0079e0a0();
    /* 007c4f6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4f6e: ret 4 */ FN_RET(0x007c4f5c); r_esp += 8; return;
L_007c4f71:; BB(0x007c4f71);
    /* 007c4f71: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c4f74: jb 0x7c4f82 */ if (fC) goto L_007c4f82;
L_007c4f76:; BB(0x007c4f76);
    /* 007c4f76: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c4f79: ja 0x7c4f82 */ if ((!fC&&!fZ)) goto L_007c4f82;
L_007c4f7b:; BB(0x007c4f7b);
    /* 007c4f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c4f7c: call 0x79e0a0 */ r_esp -= 4; W32(r_esp, 0x7c4f81u); f_0079e0a0();
    /* 007c4f81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c4f82:; BB(0x007c4f82);
    /* 007c4f82: ret 4 */ FN_RET(0x007c4f5c); r_esp += 8; return;
}

void f_007c4f88(void)
{
    FN_ENTER(0x007c4f88);
    /* 007c4f88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c4f8c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007c4f8f: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c4f92: ja 0x7c4fae */ if ((!fC&&!fZ)) goto L_007c4fae;
L_007c4f94:; BB(0x007c4f94);
    /* 007c4f94: mov eax, dword ptr [edx*4 + 0x97e738] */ r_eax = R32((u32)(r_edx*4+0x97e738u));
    /* 007c4f9b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007c4fae:; BB(0x007c4fae);
    /* 007c4fae: ret 4 */ FN_RET(0x007c4f88); r_esp += 8; return;
}

void f_007c4f9d(void)
{
    FN_ENTER(0x007c4f9d);
    /* 007c4f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4f9e: call 0x79e0a0 */ r_esp -= 4; W32(r_esp, 0x7c4fa3u); f_0079e0a0();
    /* 007c4fa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4fa4: ret 4 */ FN_RET(0x007c4f9d); r_esp += 8; return;
}

void f_007c4fa7(void)
{
    FN_ENTER(0x007c4fa7);
    /* 007c4fa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fa8: call 0x79e0a0 */ r_esp -= 4; W32(r_esp, 0x7c4fadu); f_0079e0a0();
    /* 007c4fad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c4fae: ret 4 */ FN_RET(0x007c4fa7); r_esp += 8; return;
}

void f_007c4fb4(void) /* sub_7C4FB4 */
{
    FN_ENTER(0x007c4fb4);
    /* 007c4fb4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007c4fb8: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 007c4fbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fbd: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7c4fc2u); f_0077fd10();
    /* 007c4fc2: ret 4 */ FN_RET(0x007c4fb4); r_esp += 8; return;
}

void f_007c4fc8(void) /* sub_7C4FC8 */
{
    FN_ENTER(0x007c4fc8);
    /* 007c4fc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fc9: mov ebp, esp */ r_ebp = r_esp;
    /* 007c4fcb: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c4fce: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 007c4fd1: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 007c4fd4: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 007c4fd7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007c4fda: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c4fdb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fe1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c4fe3: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7c4fe9u); call_ind(t); }
    /* 007c4fe9: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c4fea: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c4feb: jmp 0x7c820c */ goto L_007c820c;
L_007c820c:; BB(0x007c820c);
    /* 007c820c: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c820d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007c8210: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 007c8213: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 007c8216: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007c8219: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007c821c: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 007c821f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 007c8222: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007c8225: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 007c8228: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 007c822b: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 007c822e: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 007c8231: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 007c8234: mov edi, dword ptr [eax + 0x24] */ r_edi = R32((u32)(r_eax+0x24u));
    /* 007c8237: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 007c823a: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 007c823d: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 007c8240: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 007c8243: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c8246: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 007c8249: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007c824c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c824e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007c8251: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007c8254: jne 0x7c82c6 */ if (!fZ) goto L_007c82c6;
L_007c8256:; BB(0x007c8256);
    /* 007c8256: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007c8259: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 007c825c: mov dword ptr [eax + 0x12130], 1 */ W32((u32)(r_eax+0x12130u), 0x1u);
    /* 007c8266: mov dword ptr [eax + 0x12120], ebx */ W32((u32)(r_eax+0x12120u), r_ebx);
    /* 007c826c: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007c826f: mov dword ptr [eax + 0x12124], ecx */ W32((u32)(r_eax+0x12124u), r_ecx);
    /* 007c8275: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007c8278: mov dword ptr [eax + 0x163f4], ecx */ W32((u32)(r_eax+0x163f4u), r_ecx);
    /* 007c827e: mov dword ptr [eax + 0x163f8], ebx */ W32((u32)(r_eax+0x163f8u), r_ebx);
    /* 007c8284: mov dword ptr [eax + 0x163fc], edx */ W32((u32)(r_eax+0x163fcu), r_edx);
    /* 007c828a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c828d: mov dword ptr [eax + 0x16400], edx */ W32((u32)(r_eax+0x16400u), r_edx);
    /* 007c8293: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007c8296: mov dword ptr [eax + 0x16404], edi */ W32((u32)(r_eax+0x16404u), r_edi);
    /* 007c829c: mov dword ptr [eax + 0x16408], edx */ W32((u32)(r_eax+0x16408u), r_edx);
    /* 007c82a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007c82a5: mov dword ptr [eax + 0x1640c], edx */ W32((u32)(r_eax+0x1640cu), r_edx);
    /* 007c82ab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007c82ae: mov dword ptr [eax + 0x16410], edx */ W32((u32)(r_eax+0x16410u), r_edx);
    /* 007c82b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c82b7: mov dword ptr [eax + 0x16414], edx */ W32((u32)(r_eax+0x16414u), r_edx);
    /* 007c82bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007c82c0: mov dword ptr [eax + 0x16418], edx */ W32((u32)(r_eax+0x16418u), r_edx);
L_007c82c6:; BB(0x007c82c6);
    /* 007c82c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007c82c9: mov eax, dword ptr [eax + 0x1e07c] */ r_eax = R32((u32)(r_eax+0x1e07cu));
    /* 007c82cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c82d1: je 0x7c82d7 */ if (fZ) goto L_007c82d7;
L_007c82d3:; BB(0x007c82d3);
    /* 007c82d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c82d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7c82d6u); call_ind(t); }
    /* 007c82d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c82d7:; BB(0x007c82d7);
    /* 007c82d7: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c82d8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c82da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c82dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c82de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c82e0: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7c82e6u); call_ind(t); }
    /* 007c82e6: jmp 0x7c8306 */ goto L_007c8306;
L_007c8306:; BB(0x007c8306);
    /* 007c8306: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c8307: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007c830a: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007c830d: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 007c8310: mov esp, ebp */ r_esp = r_ebp;
    /* 007c8312: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c8313: ret 4 */ FN_RET(0x007c4fc8); r_esp += 8; return;
}

