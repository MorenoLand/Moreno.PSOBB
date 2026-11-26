#include "protos.h"

void f_0080c12c(void) /* sub_80C12C */
{
    FN_ENTER(0x0080c12c);
    /* 0080c12c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080c12d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080c12e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0080c132: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0080c136: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080c139: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c13c: jg 0x80c1e4 */ if ((!fZ&&fS==fO)) goto L_0080c1e4;
L_0080c142:; BB(0x0080c142);
    /* 0080c142: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 0080c148: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c14b: jne 0x80c181 */ if (!fZ) goto L_0080c181;
L_0080c14d:; BB(0x0080c14d);
    /* 0080c14d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c14f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c151: jle 0x80c1e4 */ if ((fZ||fS!=fO)) goto L_0080c1e4;
L_0080c157:; BB(0x0080c157);
    /* 0080c157: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0080c15a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080c15c: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0080c15f: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080c161:; BB(0x0080c161);
    /* 0080c161: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0080c163: mov dword ptr [ecx + 0xaafce4], esi */ W32((u32)(r_ecx+0xaafce4u), r_esi);
    /* 0080c169: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0080c16c: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080c16f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c172: mov dword ptr [ecx + 0xaafce8], esi */ W32((u32)(r_ecx+0xaafce8u), r_esi);
    /* 0080c178: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c17b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c17d: jl 0x80c161 */ if ((fS!=fO)) goto L_0080c161;
L_0080c17f:; BB(0x0080c17f);
    /* 0080c17f: jmp 0x80c1e4 */ goto L_0080c1e4;
L_0080c181:; BB(0x0080c181);
    /* 0080c181: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c184: jne 0x80c1b6 */ if (!fZ) goto L_0080c1b6;
L_0080c186:; BB(0x0080c186);
    /* 0080c186: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c18a: jle 0x80c1e4 */ if ((fZ||fS!=fO)) goto L_0080c1e4;
L_0080c18c:; BB(0x0080c18c);
    /* 0080c18c: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0080c18f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080c191: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0080c194: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080c196:; BB(0x0080c196);
    /* 0080c196: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0080c198: mov dword ptr [ecx + 0xaafce4], esi */ W32((u32)(r_ecx+0xaafce4u), r_esi);
    /* 0080c19e: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0080c1a1: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080c1a4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c1a7: mov dword ptr [ecx + 0xaafce8], esi */ W32((u32)(r_ecx+0xaafce8u), r_esi);
    /* 0080c1ad: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c1b0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c1b2: jl 0x80c196 */ if ((fS!=fO)) goto L_0080c196;
L_0080c1b4:; BB(0x0080c1b4);
    /* 0080c1b4: jmp 0x80c1e4 */ goto L_0080c1e4;
L_0080c1b6:; BB(0x0080c1b6);
    /* 0080c1b6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c1b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c1ba: jle 0x80c1e4 */ if ((fZ||fS!=fO)) goto L_0080c1e4;
L_0080c1bc:; BB(0x0080c1bc);
    /* 0080c1bc: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0080c1bf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080c1c1: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0080c1c4: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0080c1c6:; BB(0x0080c1c6);
    /* 0080c1c6: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0080c1c8: mov dword ptr [ecx + 0xaafce4], esi */ W32((u32)(r_ecx+0xaafce4u), r_esi);
    /* 0080c1ce: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0080c1d1: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080c1d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c1d7: mov dword ptr [ecx + 0xaafce8], esi */ W32((u32)(r_ecx+0xaafce8u), r_esi);
    /* 0080c1dd: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c1e0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c1e2: jl 0x80c1c6 */ if ((fS!=fO)) goto L_0080c1c6;
L_0080c1e4:; BB(0x0080c1e4);
    /* 0080c1e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080c1e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080c1e6: ret  */ FN_RET(0x0080c12c); r_esp += 4; return;
}

void f_0080c1e8(void) /* sub_80C1E8 */
{
    FN_ENTER(0x0080c1e8);
    /* 0080c1e8: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80c1edu); f_0080a640();
    /* 0080c1ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c1ef: jne 0x80c1f4 */ if (!fZ) goto L_0080c1f4;
L_0080c1f1:; BB(0x0080c1f1);
    /* 0080c1f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c1f3: ret  */ FN_RET(0x0080c1e8); r_esp += 4; return;
L_0080c1f4:; BB(0x0080c1f4);
    /* 0080c1f4: mov eax, dword ptr [0xaafc98] */ r_eax = R32((u32)(0xaafc98u));
    /* 0080c1f9: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c1fc: jl 0x80c1f1 */ if ((fS!=fO)) goto L_0080c1f1;
L_0080c1fe:; BB(0x0080c1fe);
    /* 0080c1fe: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c201: jge 0x80c1f1 */ if ((fS==fO)) goto L_0080c1f1;
L_0080c203:; BB(0x0080c203);
    /* 0080c203: mov eax, 1 */ r_eax = 0x1u;
    /* 0080c208: ret  */ FN_RET(0x0080c1e8); r_esp += 4; return;
}

void f_0080c20c(void) /* sub_80C20C */
{
    FN_ENTER(0x0080c20c);
    /* 0080c20c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080c210: cmp eax, 0xd8 */ {  u32 a = r_eax; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c215: jbe 0x80c218 */ if ((fC||fZ)) goto L_0080c218;
L_0080c217:; BB(0x0080c217);
    /* 0080c217: ret  */ FN_RET(0x0080c20c); r_esp += 4; return;
L_0080c218:; BB(0x0080c218);
    /* 0080c218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080c219: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080c21d: push 0xaafce0 */ { u32 v = 0xaafce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c222: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80c227u); f_0086b6b8();
    /* 0080c227: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c22a: ret  */ FN_RET(0x0080c20c); r_esp += 4; return;
}

void f_0080c22c(void) /* sub_80C22C */
{
    FN_ENTER(0x0080c22c);
    /* 0080c22c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080c230: push 0xaafce0 */ { u32 v = 0xaafce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c235: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080c239: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80c23eu); f_0086b6b8();
    /* 0080c23e: mov eax, 1 */ r_eax = 0x1u;
    /* 0080c243: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c246: ret  */ FN_RET(0x0080c22c); r_esp += 4; return;
}

void f_0080c248(void) /* sub_80C248 */
{
    FN_ENTER(0x0080c248);
    /* 0080c248: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080c24c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c24f: jle 0x80c254 */ if ((fZ||fS!=fO)) goto L_0080c254;
L_0080c251:; BB(0x0080c251);
    /* 0080c251: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c253: ret  */ FN_RET(0x0080c248); r_esp += 4; return;
L_0080c254:; BB(0x0080c254);
    /* 0080c254: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0080c258: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080c25b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c25d: mov dword ptr [edx + eax*8 + 0xaafce0], ecx */ W32((u32)(r_edx+r_eax*8+0xaafce0u), r_ecx);
    /* 0080c264: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0080c268: mov dword ptr [edx + eax*8 + 0xaafce4], ecx */ W32((u32)(r_edx+r_eax*8+0xaafce4u), r_ecx);
    /* 0080c26f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0080c273: mov dword ptr [edx + eax*8 + 0xaafce8], ecx */ W32((u32)(r_edx+r_eax*8+0xaafce8u), r_ecx);
    /* 0080c27a: mov eax, 1 */ r_eax = 0x1u;
    /* 0080c27f: ret  */ FN_RET(0x0080c248); r_esp += 4; return;
}

void f_0080c280(void) /* sub_80C280 */
{
    FN_ENTER(0x0080c280);
    /* 0080c280: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x80c285u); f_0078b220();
    /* 0080c285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c287: je 0x80c295 */ if (fZ) goto L_0080c295;
L_0080c289:; BB(0x0080c289);
    /* 0080c289: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080c28d: mov eax, dword ptr [edx*8 + 0xa114e4] */ r_eax = R32((u32)(r_edx*8+0xa114e4u));
    /* 0080c294: ret  */ FN_RET(0x0080c280); r_esp += 4; return;
L_0080c295:; BB(0x0080c295);
    /* 0080c295: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080c299: mov eax, dword ptr [edx*8 + 0xa116e4] */ r_eax = R32((u32)(r_edx*8+0xa116e4u));
    /* 0080c2a0: ret  */ FN_RET(0x0080c280); r_esp += 4; return;
}

void f_0080c2a4(void) /* sub_80C2A4 */
{
    FN_ENTER(0x0080c2a4);
    /* 0080c2a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080c2a8: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c2ab: jle 0x80c2b0 */ if ((fZ||fS!=fO)) goto L_0080c2b0;
L_0080c2ad:; BB(0x0080c2ad);
    /* 0080c2ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c2af: ret  */ FN_RET(0x0080c2a4); r_esp += 4; return;
L_0080c2b0:; BB(0x0080c2b0);
    /* 0080c2b0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080c2b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c2b5: mov eax, dword ptr [edx + eax*8 + 0xaafce4] */ r_eax = R32((u32)(r_edx+r_eax*8+0xaafce4u));
    /* 0080c2bc: ret  */ FN_RET(0x0080c2a4); r_esp += 4; return;
}

void f_0080c2c0(void) /* sub_80C2C0 */
{
    FN_ENTER(0x0080c2c0);
    /* 0080c2c0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0080c2c4: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c2c7: jle 0x80c2ca */ if ((fZ||fS!=fO)) goto L_0080c2ca;
L_0080c2c9:; BB(0x0080c2c9);
    /* 0080c2c9: ret  */ FN_RET(0x0080c2c0); r_esp += 4; return;
L_0080c2ca:; BB(0x0080c2ca);
    /* 0080c2ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080c2ce: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0080c2d1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c2d3: mov dword ptr [edx + ecx*8 + 0xaafce4], eax */ W32((u32)(r_edx+r_ecx*8+0xaafce4u), r_eax);
    /* 0080c2da: ret  */ FN_RET(0x0080c2c0); r_esp += 4; return;
}

void f_0080c2dc(void) /* sub_80C2DC */
{
    FN_ENTER(0x0080c2dc);
    /* 0080c2dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c2df: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080c2e3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0080c2e7: call 0x80bf30 */ r_esp -= 4; W32(r_esp, 0x80c2ecu); f_0080bf30();
    /* 0080c2ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c2ef: je 0x80c2fa */ if (fZ) goto L_0080c2fa;
L_0080c2f1:; BB(0x0080c2f1);
    /* 0080c2f1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0080c2f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c2f9: ret  */ FN_RET(0x0080c2dc); r_esp += 4; return;
L_0080c2fa:; BB(0x0080c2fa);
    /* 0080c2fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080c2fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c301: ret  */ FN_RET(0x0080c2dc); r_esp += 4; return;
}

void f_0080c304(void) /* sub_80C304 */
{
    FN_ENTER(0x0080c304);
    /* 0080c304: mov eax, dword ptr [0xa11858] */ r_eax = R32((u32)(0xa11858u));
    /* 0080c309: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c30c: je 0x80c311 */ if (fZ) goto L_0080c311;
L_0080c30e:; BB(0x0080c30e);
    /* 0080c30e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080c310: ret  */ FN_RET(0x0080c304); r_esp += 4; return;
L_0080c311:; BB(0x0080c311);
    /* 0080c311: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080c315: mov dword ptr [0xa11858], edx */ W32((u32)(0xa11858u), r_edx);
    /* 0080c31b: mov eax, 1 */ r_eax = 0x1u;
    /* 0080c320: ret  */ FN_RET(0x0080c304); r_esp += 4; return;
}

void f_0080c324(void) /* sub_80C324 */
{
    FN_ENTER(0x0080c324);
    /* 0080c324: mov eax, dword ptr [0xa11858] */ r_eax = R32((u32)(0xa11858u));
    /* 0080c329: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c32c: je 0x80c33f */ if (fZ) goto L_0080c33f;
L_0080c32e:; BB(0x0080c32e);
    /* 0080c32e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080c32f: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x80c334u); f_0080c79c();
    /* 0080c334: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080c335: mov dword ptr [0xa11858], 0xffffffff */ W32((u32)(0xa11858u), 0xffffffffu);
L_0080c33f:; BB(0x0080c33f);
    /* 0080c33f: ret  */ FN_RET(0x0080c324); r_esp += 4; return;
}

void f_0080c340(void) /* sub_80C340 */
{
    FN_ENTER(0x0080c340);
    /* 0080c340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080c341: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080c342: sub esp, 0x194 */ {  u32 a = r_esp; u32 b = 0x194u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c348: mov esi, 0x97f380 */ r_esi = 0x97f380u;
    /* 0080c34d: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0080c350: mov ecx, 0xd8 */ r_ecx = 0xd8u;
    /* 0080c355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080c356: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080c359: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0080c35b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080c35c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c35f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0080c361: lea edi, [esp + 0xd8] */ r_edi = (u32)(r_esp+0xd8u);
    /* 0080c368: mov esi, 0x97f2c0 */ r_esi = 0x97f2c0u;
    /* 0080c36d: mov ecx, 0xbc */ r_ecx = 0xbcu;
    /* 0080c372: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080c373: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080c376: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0080c378: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080c379: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c37c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0080c37e: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x80c383u); f_0078b1c4();
    /* 0080c383: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c386: je 0x80c3af */ if (fZ) goto L_0080c3af;
L_0080c388:; BB(0x0080c388);
    /* 0080c388: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0080c38e: mov ecx, dword ptr [0xaafca0] */ r_ecx = R32((u32)(0xaafca0u));
    /* 0080c394: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 0080c397: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080c399: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080c39b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080c39d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c39f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080c3a1: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080c3a3: mov eax, dword ptr [esp + eax] */ r_eax = R32((u32)(r_esp+r_eax));
    /* 0080c3a6: add esp, 0x194 */ {  u32 a = r_esp; u32 b = 0x194u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c3ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080c3ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080c3ae: ret  */ FN_RET(0x0080c340); r_esp += 4; return;
L_0080c3af:; BB(0x0080c3af);
    /* 0080c3af: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x80c3b4u); f_00807ac0();
    /* 0080c3b4: mov eax, dword ptr [esp + eax*4 + 0xd8] */ r_eax = R32((u32)(r_esp+r_eax*4+0xd8u));
    /* 0080c3bb: add esp, 0x194 */ {  u32 a = r_esp; u32 b = 0x194u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c3c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080c3c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080c3c3: ret  */ FN_RET(0x0080c340); r_esp += 4; return;
}

void f_0080c3c4(void) /* sub_80C3C4 */
{
    FN_ENTER(0x0080c3c4);
    /* 0080c3c4: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0080c3c9: mov dword ptr [0xa1185c], eax */ W32((u32)(0xa1185cu), r_eax);
    /* 0080c3ce: ret  */ FN_RET(0x0080c3c4); r_esp += 4; return;
}

void f_0080c3d0(void) /* sub_80C3D0 */
{
    FN_ENTER(0x0080c3d0);
    /* 0080c3d0: mov eax, dword ptr [0xa1185c] */ r_eax = R32((u32)(0xa1185cu));
    /* 0080c3d5: mov dword ptr [0xaafdb8], eax */ W32((u32)(0xaafdb8u), r_eax);
    /* 0080c3da: ret  */ FN_RET(0x0080c3d0); r_esp += 4; return;
}

void f_0080c3dc(void) /* sub_80C3DC */
{
    FN_ENTER(0x0080c3dc);
    /* 0080c3dc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c3df: mov eax, 0x97f460 */ r_eax = 0x97f460u;
    /* 0080c3e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080c3e6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0080c3e9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080c3ec: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080c3ef: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0080c3f3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0080c3f7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0080c3fa: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080c3fe: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0080c401: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0080c405: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0080c408: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0080c40c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0080c40f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0080c413: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0080c416: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080c41a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0080c41d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0080c421: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0080c424: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0080c428: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0080c42b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0080c42f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0080c432: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0080c436: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0080c439: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0080c43d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0080c440: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0080c444: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0080c447: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0080c44b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0080c44e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0080c452: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0080c455: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 0080c458: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0080c45c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0080c460: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c465: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c467: push 0xaafce0 */ { u32 v = 0xaafce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c46c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x80c471u); f_0086b688();
    /* 0080c471: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080c475: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080c479: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0080c47d: mov dword ptr [0xaafce0], eax */ W32((u32)(0xaafce0u), r_eax);
    /* 0080c482: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080c486: mov dword ptr [0xaafcec], edx */ W32((u32)(0xaafcecu), r_edx);
    /* 0080c48c: mov dword ptr [0xaafcf8], ecx */ W32((u32)(0xaafcf8u), r_ecx);
    /* 0080c492: mov dword ptr [0xaafd04], eax */ W32((u32)(0xaafd04u), r_eax);
    /* 0080c497: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080c49b: mov dword ptr [0xaafd10], eax */ W32((u32)(0xaafd10u), r_eax);
    /* 0080c4a0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0080c4a4: mov dword ptr [0xaafd1c], eax */ W32((u32)(0xaafd1cu), r_eax);
    /* 0080c4a9: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0080c4ad: mov dword ptr [0xaafd28], eax */ W32((u32)(0xaafd28u), r_eax);
    /* 0080c4b2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0080c4b6: mov dword ptr [0xaafd34], eax */ W32((u32)(0xaafd34u), r_eax);
    /* 0080c4bb: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0080c4bf: mov dword ptr [0xaafd40], eax */ W32((u32)(0xaafd40u), r_eax);
    /* 0080c4c4: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0080c4c8: mov dword ptr [0xaafd4c], eax */ W32((u32)(0xaafd4cu), r_eax);
    /* 0080c4cd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0080c4d1: mov dword ptr [0xaafd58], eax */ W32((u32)(0xaafd58u), r_eax);
    /* 0080c4d6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0080c4da: mov dword ptr [0xaafd64], eax */ W32((u32)(0xaafd64u), r_eax);
    /* 0080c4df: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0080c4e3: mov dword ptr [0xaafd70], eax */ W32((u32)(0xaafd70u), r_eax);
    /* 0080c4e8: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0080c4ec: mov dword ptr [0xaafd7c], eax */ W32((u32)(0xaafd7cu), r_eax);
    /* 0080c4f1: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0080c4f5: mov dword ptr [0xaafd88], eax */ W32((u32)(0xaafd88u), r_eax);
    /* 0080c4fa: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0080c4fe: mov dword ptr [0xaafd94], eax */ W32((u32)(0xaafd94u), r_eax);
    /* 0080c503: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0080c507: mov dword ptr [0xaafda0], eax */ W32((u32)(0xaafda0u), r_eax);
    /* 0080c50c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0080c510: mov dword ptr [0xaafdac], eax */ W32((u32)(0xaafdacu), r_eax);
    /* 0080c515: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c518: ret  */ FN_RET(0x0080c3dc); r_esp += 4; return;
}

void f_0080c51c(void) /* sub_80C51C */
{
    FN_ENTER(0x0080c51c);
    /* 0080c51c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c51f: mov eax, 0x97f4c0 */ r_eax = 0x97f4c0u;
    /* 0080c524: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080c526: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0080c529: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080c52c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080c52f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0080c533: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0080c537: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0080c53a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080c53e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0080c541: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0080c545: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0080c548: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0080c54c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0080c54f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0080c553: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0080c556: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080c55a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0080c55d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0080c561: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0080c564: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0080c568: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0080c56b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0080c56f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0080c572: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0080c576: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0080c579: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0080c57d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0080c580: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0080c584: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0080c587: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0080c58b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0080c58e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0080c592: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0080c595: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 0080c598: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0080c59c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0080c5a0: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c5a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c5a7: push 0xaafce0 */ { u32 v = 0xaafce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c5ac: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x80c5b1u); f_0086b688();
    /* 0080c5b1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080c5b5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080c5b9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0080c5bd: mov dword ptr [0xaafce0], eax */ W32((u32)(0xaafce0u), r_eax);
    /* 0080c5c2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080c5c6: mov dword ptr [0xaafcec], edx */ W32((u32)(0xaafcecu), r_edx);
    /* 0080c5cc: mov dword ptr [0xaafcf8], ecx */ W32((u32)(0xaafcf8u), r_ecx);
    /* 0080c5d2: mov dword ptr [0xaafd04], eax */ W32((u32)(0xaafd04u), r_eax);
    /* 0080c5d7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080c5db: mov dword ptr [0xaafd10], eax */ W32((u32)(0xaafd10u), r_eax);
    /* 0080c5e0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0080c5e4: mov dword ptr [0xaafd1c], eax */ W32((u32)(0xaafd1cu), r_eax);
    /* 0080c5e9: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0080c5ed: mov dword ptr [0xaafd28], eax */ W32((u32)(0xaafd28u), r_eax);
    /* 0080c5f2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0080c5f6: mov dword ptr [0xaafd34], eax */ W32((u32)(0xaafd34u), r_eax);
    /* 0080c5fb: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0080c5ff: mov dword ptr [0xaafd40], eax */ W32((u32)(0xaafd40u), r_eax);
    /* 0080c604: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0080c608: mov dword ptr [0xaafd4c], eax */ W32((u32)(0xaafd4cu), r_eax);
    /* 0080c60d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0080c611: mov dword ptr [0xaafd58], eax */ W32((u32)(0xaafd58u), r_eax);
    /* 0080c616: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0080c61a: mov dword ptr [0xaafd64], eax */ W32((u32)(0xaafd64u), r_eax);
    /* 0080c61f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0080c623: mov dword ptr [0xaafd70], eax */ W32((u32)(0xaafd70u), r_eax);
    /* 0080c628: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0080c62c: mov dword ptr [0xaafd7c], eax */ W32((u32)(0xaafd7cu), r_eax);
    /* 0080c631: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0080c635: mov dword ptr [0xaafd88], eax */ W32((u32)(0xaafd88u), r_eax);
    /* 0080c63a: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0080c63e: mov dword ptr [0xaafd94], eax */ W32((u32)(0xaafd94u), r_eax);
    /* 0080c643: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0080c647: mov dword ptr [0xaafda0], eax */ W32((u32)(0xaafda0u), r_eax);
    /* 0080c64c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0080c650: mov dword ptr [0xaafdac], eax */ W32((u32)(0xaafdacu), r_eax);
    /* 0080c655: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c658: ret  */ FN_RET(0x0080c51c); r_esp += 4; return;
}

void f_0080c65c(void) /* sub_80C65C */
{
    FN_ENTER(0x0080c65c);
    /* 0080c65c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c65f: mov eax, 0x97f520 */ r_eax = 0x97f520u;
    /* 0080c664: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080c666: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0080c669: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080c66c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080c66f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0080c673: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0080c677: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0080c67a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080c67e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0080c681: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0080c685: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0080c688: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0080c68c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0080c68f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0080c693: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0080c696: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080c69a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0080c69d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0080c6a1: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0080c6a4: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0080c6a8: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0080c6ab: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0080c6af: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0080c6b2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0080c6b6: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0080c6b9: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0080c6bd: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0080c6c0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0080c6c4: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0080c6c7: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0080c6cb: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0080c6ce: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0080c6d2: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0080c6d5: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 0080c6d8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0080c6dc: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0080c6e0: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c6e7: push 0xaafce0 */ { u32 v = 0xaafce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c6ec: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x80c6f1u); f_0086b688();
    /* 0080c6f1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080c6f5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080c6f9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0080c6fd: mov dword ptr [0xaafce0], eax */ W32((u32)(0xaafce0u), r_eax);
    /* 0080c702: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080c706: mov dword ptr [0xaafcec], edx */ W32((u32)(0xaafcecu), r_edx);
    /* 0080c70c: mov dword ptr [0xaafcf8], ecx */ W32((u32)(0xaafcf8u), r_ecx);
    /* 0080c712: mov dword ptr [0xaafd04], eax */ W32((u32)(0xaafd04u), r_eax);
    /* 0080c717: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080c71b: mov dword ptr [0xaafd10], eax */ W32((u32)(0xaafd10u), r_eax);
    /* 0080c720: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0080c724: mov dword ptr [0xaafd1c], eax */ W32((u32)(0xaafd1cu), r_eax);
    /* 0080c729: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0080c72d: mov dword ptr [0xaafd28], eax */ W32((u32)(0xaafd28u), r_eax);
    /* 0080c732: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0080c736: mov dword ptr [0xaafd34], eax */ W32((u32)(0xaafd34u), r_eax);
    /* 0080c73b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0080c73f: mov dword ptr [0xaafd40], eax */ W32((u32)(0xaafd40u), r_eax);
    /* 0080c744: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0080c748: mov dword ptr [0xaafd4c], eax */ W32((u32)(0xaafd4cu), r_eax);
    /* 0080c74d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0080c751: mov dword ptr [0xaafd58], eax */ W32((u32)(0xaafd58u), r_eax);
    /* 0080c756: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0080c75a: mov dword ptr [0xaafd64], eax */ W32((u32)(0xaafd64u), r_eax);
    /* 0080c75f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0080c763: mov dword ptr [0xaafd70], eax */ W32((u32)(0xaafd70u), r_eax);
    /* 0080c768: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0080c76c: mov dword ptr [0xaafd7c], eax */ W32((u32)(0xaafd7cu), r_eax);
    /* 0080c771: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0080c775: mov dword ptr [0xaafd88], eax */ W32((u32)(0xaafd88u), r_eax);
    /* 0080c77a: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0080c77e: mov dword ptr [0xaafd94], eax */ W32((u32)(0xaafd94u), r_eax);
    /* 0080c783: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0080c787: mov dword ptr [0xaafda0], eax */ W32((u32)(0xaafda0u), r_eax);
    /* 0080c78c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0080c790: mov dword ptr [0xaafdac], eax */ W32((u32)(0xaafdacu), r_eax);
    /* 0080c795: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c798: ret  */ FN_RET(0x0080c65c); r_esp += 4; return;
}

void f_0080c79c(void) /* sub_80C79C */
{
    FN_ENTER(0x0080c79c);
    /* 0080c79c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080c7a0: mov dword ptr [0xaafdb8], eax */ W32((u32)(0xaafdb8u), r_eax);
    /* 0080c7a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c7a7: je 0x80c7bf */ if (fZ) goto L_0080c7bf;
L_0080c7a9:; BB(0x0080c7a9);
    /* 0080c7a9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c7ac: jne 0x80c7b4 */ if (!fZ) goto L_0080c7b4;
L_0080c7ae:; BB(0x0080c7ae);
    /* 0080c7ae: call 0x80c51c */ r_esp -= 4; W32(r_esp, 0x80c7b3u); f_0080c51c();
    /* 0080c7b3: ret  */ FN_RET(0x0080c79c); r_esp += 4; return;
L_0080c7b4:; BB(0x0080c7b4);
    /* 0080c7b4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080c7b7: jne 0x80c7c4 */ if (!fZ) goto L_0080c7c4;
L_0080c7b9:; BB(0x0080c7b9);
    /* 0080c7b9: call 0x80c3dc */ r_esp -= 4; W32(r_esp, 0x80c7beu); f_0080c3dc();
    /* 0080c7be: ret  */ FN_RET(0x0080c79c); r_esp += 4; return;
L_0080c7bf:; BB(0x0080c7bf);
    /* 0080c7bf: call 0x80c65c */ r_esp -= 4; W32(r_esp, 0x80c7c4u); f_0080c65c();
L_0080c7c4:; BB(0x0080c7c4);
    /* 0080c7c4: ret  */ FN_RET(0x0080c79c); r_esp += 4; return;
}

void f_0080c7c8(void) /* sub_80C7C8 */
{
    FN_ENTER(0x0080c7c8);
    /* 0080c7c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080c7c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080c7ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080c7cb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080c7ce: push dword ptr [0xaafdb8] */ { u32 v = R32((u32)(0xaafdb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080c7d4: mov esi, 0xaafce0 */ r_esi = 0xaafce0u;
    /* 0080c7d9: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x80c7deu); f_0080c79c();
    /* 0080c7de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080c7df: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x80c7e4u); f_007a61a4();
    /* 0080c7e4: mov ebx, eax */ r_ebx = r_eax;
    /* 0080c7e6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80c7ebu); f_006dc358();
    /* 0080c7eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c7ee: jne 0x80c7f5 */ if (!fZ) goto L_0080c7f5;
L_0080c7f0:; BB(0x0080c7f0);
    /* 0080c7f0: mov ebx, 0xb */ r_ebx = 0xbu;
L_0080c7f5:; BB(0x0080c7f5);
    /* 0080c7f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080c7f7: mov edi, ebx */ r_edi = r_ebx;
    /* 0080c7f9: mov ebx, eax */ r_ebx = r_eax;
L_0080c7fb:; BB(0x0080c7fb);
    /* 0080c7fb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c7fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080c7ff: jl 0x80c976 */ if ((fS!=fO)) goto L_0080c976;
L_0080c805:; BB(0x0080c805);
    /* 0080c805: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c808: jne 0x80c883 */ if (!fZ) goto L_0080c883;
L_0080c80a:; BB(0x0080c80a);
    /* 0080c80a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c80fu); f_008587a5();
    /* 0080c80f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c811: fild dword ptr [edx*8 + 0x97f700] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f700u)));
    /* 0080c818: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080c81b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0080c81e: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c824: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c826: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c82a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c82f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c834: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c838: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c83c: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c83f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c843: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c848u); f_008587a5();
    /* 0080c848: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c84a: fild dword ptr [edx*8 + 0x97f704] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f704u)));
    /* 0080c851: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c855: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c859: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c85f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c861: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c865: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c86a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c86f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c873: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c877: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c87a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c87e: jmp 0x80c976 */ goto L_0080c976;
L_0080c883:; BB(0x0080c883);
    /* 0080c883: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c886: jne 0x80c900 */ if (!fZ) goto L_0080c900;
L_0080c888:; BB(0x0080c888);
    /* 0080c888: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c88du); f_008587a5();
    /* 0080c88d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c88f: fild dword ptr [edx*8 + 0x97f580] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f580u)));
    /* 0080c896: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c89a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c89e: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c8a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c8a6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c8aa: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c8af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c8b4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c8b8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c8bc: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c8bf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c8c3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c8c8u); f_008587a5();
    /* 0080c8c8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c8ca: fild dword ptr [edx*8 + 0x97f584] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f584u)));
    /* 0080c8d1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c8d5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c8d9: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c8df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c8e1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c8e5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c8ea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c8ef: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c8f3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c8f7: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c8fa: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c8fe: jmp 0x80c976 */ goto L_0080c976;
L_0080c900:; BB(0x0080c900);
    /* 0080c900: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c905u); f_008587a5();
    /* 0080c905: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c907: fild dword ptr [edx*8 + 0x97f700] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f700u)));
    /* 0080c90e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c912: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c916: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c91c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c91e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c922: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c927: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c92c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c930: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c934: fistp dword ptr [esi + 4] */ W32((u32)(r_esi+0x4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c937: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080c93b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80c940u); f_008587a5();
    /* 0080c940: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080c942: fild dword ptr [edx*8 + 0x97f704] */ FPUSH((long double)(i32)R32((u32)(r_edx*8+0x97f704u)));
    /* 0080c949: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080c94d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0080c951: fdiv dword ptr [0x97f878] */ ST(0) = ST(0) / R_F32((u32)(0x97f878u));
    /* 0080c957: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080c959: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0080c95d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0080c962: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080c967: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080c96b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080c96f: fistp dword ptr [esi + 8] */ W32((u32)(r_esi+0x8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080c972: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
L_0080c976:; BB(0x0080c976);
    /* 0080c976: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080c979: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080c97c: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c97f: jl 0x80c7fb */ if ((fS!=fO)) goto L_0080c7fb;
L_0080c985:; BB(0x0080c985);
    /* 0080c985: mov edx, dword ptr [0x9ff9ac] */ r_edx = R32((u32)(0x9ff9acu));
    /* 0080c98b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080c98e: je 0x80c9e6 */ if (fZ) goto L_0080c9e6;
L_0080c990:; BB(0x0080c990);
    /* 0080c990: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080c993: jle 0x80c999 */ if ((fZ||fS!=fO)) goto L_0080c999;
L_0080c995:; BB(0x0080c995);
    /* 0080c995: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080c997: jmp 0x80c9a5 */ goto L_0080c9a5;
L_0080c999:; BB(0x0080c999);
    /* 0080c999: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0080c99c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080c99e: mov eax, dword ptr [eax + edx*8 + 0xaafce4] */ r_eax = R32((u32)(r_eax+r_edx*8+0xaafce4u));
L_0080c9a5:; BB(0x0080c9a5);
    /* 0080c9a5: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 0080c9ab: mov dword ptr [0xac9d5c], eax */ W32((u32)(0xac9d5cu), r_eax);
    /* 0080c9b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080c9b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080c9b5: mov dword ptr [0xac9d54], edx */ W32((u32)(0xac9d54u), r_edx);
    /* 0080c9bb: mov dword ptr [0xac9d58], edx */ W32((u32)(0xac9d58u), r_edx);
    /* 0080c9c1: mov dword ptr [0xac9d60], eax */ W32((u32)(0xac9d60u), r_eax);
    /* 0080c9c6: mov dword ptr [0xac9d64], eax */ W32((u32)(0xac9d64u), r_eax);
    /* 0080c9cb: mov dword ptr [0xac9d68], eax */ W32((u32)(0xac9d68u), r_eax);
    /* 0080c9d0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0080c9d5: mov dword ptr [0xac9d4c], edx */ W32((u32)(0xac9d4cu), r_edx);
    /* 0080c9db: mov dword ptr [0xac9d6c], eax */ W32((u32)(0xac9d6cu), r_eax);
    /* 0080c9e0: mov dword ptr [0x9ff9ac], edx */ W32((u32)(0x9ff9acu), r_edx);
L_0080c9e6:; BB(0x0080c9e6);
    /* 0080c9e6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080c9e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080c9ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080c9eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080c9ec: ret  */ FN_RET(0x0080c7c8); r_esp += 4; return;
}

void f_0080c9f0(void) /* sub_80C9F0 */
{
    FN_ENTER(0x0080c9f0);
    /* 0080c9f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080c9f2: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x80c9f7u); f_0080c79c();
    /* 0080c9f7: mov dword ptr [0xa11858], 0xffffffff */ W32((u32)(0xa11858u), 0xffffffffu);
    /* 0080ca01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ca02: ret  */ FN_RET(0x0080c9f0); r_esp += 4; return;
}

void f_0080ca04(void) /* sub_80CA04 */
{
    FN_ENTER(0x0080ca04);
    /* 0080ca04: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ca07: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x80ca0cu); f_00807ac0();
    /* 0080ca0c: mov edx, dword ptr [eax*4 + 0xa05d60] */ r_edx = R32((u32)(r_eax*4+0xa05d60u));
    /* 0080ca13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ca15: je 0x80ca5c */ if (fZ) goto L_0080ca5c;
L_0080ca17:; BB(0x0080ca17);
    /* 0080ca17: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0080ca1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ca1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ca1e: je 0x80ca2d */ if (fZ) goto L_0080ca2d;
L_0080ca20:; BB(0x0080ca20);
    /* 0080ca20: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ca23: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0080ca26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080ca29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ca2b: jne 0x80ca20 */ if (!fZ) goto L_0080ca20;
L_0080ca2d:; BB(0x0080ca2d);
    /* 0080ca2d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ca2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ca31: jle 0x80ca5c */ if ((fZ||fS!=fO)) goto L_0080ca5c;
L_0080ca33:; BB(0x0080ca33);
    /* 0080ca33: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080ca37: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080ca39: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0080ca3d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0080ca40: mov esi, eax */ r_esi = r_eax;
    /* 0080ca42: mov edi, edx */ r_edi = r_edx;
L_0080ca44:; BB(0x0080ca44);
    /* 0080ca44: add edi, -8 */ {  u32 a = r_edi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080ca47: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x80ca4au); call_ind(t); }
    /* 0080ca4a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ca4d: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ca4f: jl 0x80ca44 */ if ((fS!=fO)) goto L_0080ca44;
L_0080ca51:; BB(0x0080ca51);
    /* 0080ca51: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080ca55: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0080ca59: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0080ca5c:; BB(0x0080ca5c);
    /* 0080ca5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ca5f: ret  */ FN_RET(0x0080ca04); r_esp += 4; return;
}

void f_0080ca60(void) /* sub_80CA60 */
{
    FN_ENTER(0x0080ca60);
    /* 0080ca60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080ca64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ca66: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0080ca68: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0080ca6b: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0080ca6e: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0080ca71: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0080ca74: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0080ca77: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0080ca7a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0080ca7d: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0080ca80: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0080ca83: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0080ca86: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0080ca89: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0080ca8c: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0080ca8f: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0080ca92: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0080ca97: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0080ca9a: mov ecx, dword ptr [0xaafca0] */ r_ecx = R32((u32)(0xaafca0u));
    /* 0080caa0: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0080caa5: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0080caa9: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 0080caad: ret  */ FN_RET(0x0080ca60); r_esp += 4; return;
}

void f_0080cab0(void) /* sub_80CAB0 */
{
    FN_ENTER(0x0080cab0);
    /* 0080cab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080cab1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cab2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080cab6: mov edx, dword ptr [eax*4 + 0xa05d60] */ r_edx = R32((u32)(r_eax*4+0xa05d60u));
    /* 0080cabd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cabf: je 0x80cae0 */ if (fZ) goto L_0080cae0;
L_0080cac1:; BB(0x0080cac1);
    /* 0080cac1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080cac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cac5: je 0x80cae0 */ if (fZ) goto L_0080cae0;
L_0080cac7:; BB(0x0080cac7);
    /* 0080cac7: mov ebx, eax */ r_ebx = r_eax;
    /* 0080cac9: mov esi, edx */ r_esi = r_edx;
L_0080cacb:; BB(0x0080cacb);
    /* 0080cacb: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x80cad0u); f_005ba1f0();
    /* 0080cad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cad2: jne 0x80cae8 */ if (!fZ) goto L_0080cae8;
L_0080cad4:; BB(0x0080cad4);
    /* 0080cad4: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x80cad6u); call_ind(t); }
    /* 0080cad6: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 0080cad9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080cadc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cade: jne 0x80cacb */ if (!fZ) goto L_0080cacb;
L_0080cae0:; BB(0x0080cae0);
    /* 0080cae0: mov eax, 1 */ r_eax = 0x1u;
    /* 0080cae5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080cae6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080cae7: ret  */ FN_RET(0x0080cab0); r_esp += 4; return;
L_0080cae8:; BB(0x0080cae8);
    /* 0080cae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080caea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080caeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080caec: ret  */ FN_RET(0x0080cab0); r_esp += 4; return;
}

void f_0080caf0(void) /* sub_80CAF0 */
{
    FN_ENTER(0x0080caf0);
    /* 0080caf0: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x80caf5u); f_00807ac0();
    /* 0080caf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080caf6: call 0x80cab0 */ r_esp -= 4; W32(r_esp, 0x80cafbu); f_0080cab0();
    /* 0080cafb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cafc: ret  */ FN_RET(0x0080caf0); r_esp += 4; return;
}

void f_0080cb00(void) /* sub_80CB00 */
{
    FN_ENTER(0x0080cb00);
    /* 0080cb00: mov eax, dword ptr [0xaafdc4] */ r_eax = R32((u32)(0xaafdc4u));
    /* 0080cb05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cb07: je 0x80cb26 */ if (fZ) goto L_0080cb26;
L_0080cb09:; BB(0x0080cb09);
    /* 0080cb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cb0a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x80cb0fu); f_0082e960();
    /* 0080cb0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cb10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cb12: mov dword ptr [0xaafdc4], eax */ W32((u32)(0xaafdc4u), r_eax);
    /* 0080cb17: mov dword ptr [0xaafdc8], eax */ W32((u32)(0xaafdc8u), r_eax);
    /* 0080cb1c: mov dword ptr [0xaafdcc], eax */ W32((u32)(0xaafdccu), r_eax);
    /* 0080cb21: mov dword ptr [0xaafdd0], eax */ W32((u32)(0xaafdd0u), r_eax);
L_0080cb26:; BB(0x0080cb26);
    /* 0080cb26: ret  */ FN_RET(0x0080cb00); r_esp += 4; return;
}

void f_0080cb28(void) /* sub_80CB28 */
{
    FN_ENTER(0x0080cb28);
    /* 0080cb28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cb29: mov edx, dword ptr [0xaafdc4] */ r_edx = R32((u32)(0xaafdc4u));
    /* 0080cb2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080cb31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cb33: mov dword ptr [0xaafdcc], eax */ W32((u32)(0xaafdccu), r_eax);
    /* 0080cb38: mov dword ptr [0xaafdc8], eax */ W32((u32)(0xaafdc8u), r_eax);
    /* 0080cb3d: je 0x80cb84 */ if (fZ) goto L_0080cb84;
L_0080cb3f:; BB(0x0080cb3f);
    /* 0080cb3f: call 0x80cb88 */ r_esp -= 4; W32(r_esp, 0x80cb44u); f_0080cb88();
    /* 0080cb44: mov ebx, eax */ r_ebx = r_eax;
    /* 0080cb46: push dword ptr [ebx*4 + 0xa11d88] */ { u32 v = R32((u32)(r_ebx*4+0xa11d88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cb4d: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80cb52u); f_005b9328();
    /* 0080cb52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cb53: cmp eax, 0x2ba0 */ {  u32 a = r_eax; u32 b = 0x2ba0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080cb58: jg 0x80cb84 */ if ((!fZ&&fS==fO)) goto L_0080cb84;
L_0080cb5a:; BB(0x0080cb5a);
    /* 0080cb5a: push dword ptr [0xaafdc4] */ { u32 v = R32((u32)(0xaafdc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cb60: push dword ptr [ebx*4 + 0xa11d88] */ { u32 v = R32((u32)(r_ebx*4+0xa11d88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cb67: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80cb6cu); f_005b9bf4();
    /* 0080cb6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080cb6f: mov dword ptr [0xaafdc8], eax */ W32((u32)(0xaafdc8u), r_eax);
    /* 0080cb74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cb76: je 0x80cb84 */ if (fZ) goto L_0080cb84;
L_0080cb78:; BB(0x0080cb78);
    /* 0080cb78: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0080cb7a: mov dword ptr [0xaafdcc], eax */ W32((u32)(0xaafdccu), r_eax);
    /* 0080cb7f: mov dword ptr [0xaafdd0], eax */ W32((u32)(0xaafdd0u), r_eax);
L_0080cb84:; BB(0x0080cb84);
    /* 0080cb84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080cb85: ret  */ FN_RET(0x0080cb28); r_esp += 4; return;
}

void f_0080cb88(void) /* sub_80CB88 */
{
    FN_ENTER(0x0080cb88);
    /* 0080cb88: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0080cb8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cb8f: jne 0x80cb9b */ if (!fZ) goto L_0080cb9b;
L_0080cb91:; BB(0x0080cb91);
    /* 0080cb91: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0080cb96: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cb99: je 0x80cbad */ if (fZ) goto L_0080cbad;
L_0080cb9b:; BB(0x0080cb9b);
    /* 0080cb9b: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 0080cba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cba2: je 0x80cba7 */ if (fZ) goto L_0080cba7;
L_0080cba4:; BB(0x0080cba4);
    /* 0080cba4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cba6: ret  */ FN_RET(0x0080cb88); r_esp += 4; return;
L_0080cba7:; BB(0x0080cba7);
    /* 0080cba7: mov eax, 2 */ r_eax = 0x2u;
    /* 0080cbac: ret  */ FN_RET(0x0080cb88); r_esp += 4; return;
L_0080cbad:; BB(0x0080cbad);
    /* 0080cbad: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 0080cbb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cbb4: je 0x80cbbc */ if (fZ) goto L_0080cbbc;
L_0080cbb6:; BB(0x0080cbb6);
    /* 0080cbb6: mov eax, 1 */ r_eax = 0x1u;
    /* 0080cbbb: ret  */ FN_RET(0x0080cb88); r_esp += 4; return;
L_0080cbbc:; BB(0x0080cbbc);
    /* 0080cbbc: mov eax, 3 */ r_eax = 0x3u;
    /* 0080cbc1: ret  */ FN_RET(0x0080cb88); r_esp += 4; return;
}

void f_0080cbc4(void) /* sub_80CBC4 */
{
    FN_ENTER(0x0080cbc4);
    /* 0080cbc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cbc5: push 0x2ba0 */ { u32 v = 0x2ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080cbca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080cbcc: mov dword ptr [0xaafdcc], eax */ W32((u32)(0xaafdccu), r_eax);
    /* 0080cbd1: mov dword ptr [0xaafdc8], eax */ W32((u32)(0xaafdc8u), r_eax);
    /* 0080cbd6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80cbdbu); f_0082e940();
    /* 0080cbdb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cbdc: mov dword ptr [0xaafdc4], eax */ W32((u32)(0xaafdc4u), r_eax);
    /* 0080cbe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cbe3: je 0x80cc2a */ if (fZ) goto L_0080cc2a;
L_0080cbe5:; BB(0x0080cbe5);
    /* 0080cbe5: call 0x80cb88 */ r_esp -= 4; W32(r_esp, 0x80cbeau); f_0080cb88();
    /* 0080cbea: mov ebx, eax */ r_ebx = r_eax;
    /* 0080cbec: push dword ptr [ebx*4 + 0xa11d88] */ { u32 v = R32((u32)(r_ebx*4+0xa11d88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cbf3: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80cbf8u); f_005b9328();
    /* 0080cbf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cbf9: cmp eax, 0x2ba0 */ {  u32 a = r_eax; u32 b = 0x2ba0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080cbfe: jg 0x80cc2a */ if ((!fZ&&fS==fO)) goto L_0080cc2a;
L_0080cc00:; BB(0x0080cc00);
    /* 0080cc00: push dword ptr [0xaafdc4] */ { u32 v = R32((u32)(0xaafdc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cc06: push dword ptr [ebx*4 + 0xa11d88] */ { u32 v = R32((u32)(r_ebx*4+0xa11d88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cc0d: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80cc12u); f_005b9bf4();
    /* 0080cc12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080cc15: mov dword ptr [0xaafdc8], eax */ W32((u32)(0xaafdc8u), r_eax);
    /* 0080cc1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cc1c: je 0x80cc2a */ if (fZ) goto L_0080cc2a;
L_0080cc1e:; BB(0x0080cc1e);
    /* 0080cc1e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0080cc20: mov dword ptr [0xaafdcc], eax */ W32((u32)(0xaafdccu), r_eax);
    /* 0080cc25: mov dword ptr [0xaafdd0], eax */ W32((u32)(0xaafdd0u), r_eax);
L_0080cc2a:; BB(0x0080cc2a);
    /* 0080cc2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080cc2b: ret  */ FN_RET(0x0080cbc4); r_esp += 4; return;
}

void f_0080cc2c(void) /* sub_80CC2C */
{
    FN_ENTER(0x0080cc2c);
    /* 0080cc2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080cc30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080cc32: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0080cc35: mov dword ptr [0xaafdd4], eax */ W32((u32)(0xaafdd4u), r_eax);
    /* 0080cc3a: mov dword ptr [0xaafdd8], ecx */ W32((u32)(0xaafdd8u), r_ecx);
    /* 0080cc40: ret  */ FN_RET(0x0080cc2c); r_esp += 4; return;
}

void f_0080cc44(void) /* sub_80CC44 */
{
    FN_ENTER(0x0080cc44);
    /* 0080cc44: mov dword ptr [0xaafde4], 1 */ W32((u32)(0xaafde4u), 0x1u);
    /* 0080cc4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080cc50: mov dword ptr [0xaafddc], eax */ W32((u32)(0xaafddcu), r_eax);
    /* 0080cc55: mov dword ptr [0xaafde0], eax */ W32((u32)(0xaafde0u), r_eax);
L_0080cc5a:; BB(0x0080cc5a);
    /* 0080cc5a: mov edx, dword ptr [0xaafdd8] */ r_edx = R32((u32)(0xaafdd8u));
    /* 0080cc60: mov ecx, dword ptr [0xaafdd4] */ r_ecx = R32((u32)(0xaafdd4u));
    /* 0080cc66: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0080cc69: mov dword ptr [0xaafdd8], eax */ W32((u32)(0xaafdd8u), r_eax);
    /* 0080cc6e: movzx eax, byte ptr [edx + ecx] */ r_eax = (u32)R8((u32)(r_edx+r_ecx));
    /* 0080cc72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cc73: call dword ptr [eax*8 + 0xa11da0] */ { u32 t = R32((u32)(r_eax*8+0xa11da0u)); r_esp -= 4; W32(r_esp, 0x80cc7au); call_ind(t); }
    /* 0080cc7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cc7b: mov eax, dword ptr [0xaafddc] */ r_eax = R32((u32)(0xaafddcu));
    /* 0080cc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cc82: je 0x80cc5a */ if (fZ) goto L_0080cc5a;
L_0080cc84:; BB(0x0080cc84);
    /* 0080cc84: mov eax, dword ptr [0xaafde0] */ r_eax = R32((u32)(0xaafde0u));
    /* 0080cc89: ret  */ FN_RET(0x0080cc44); r_esp += 4; return;
}

void f_0080cc8c(void) /* sub_80CC8C */
{
    FN_ENTER(0x0080cc8c);
    /* 0080cc8c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0080cc91: call dword ptr [eax*8 + 0xa11da4] */ { u32 t = R32((u32)(r_eax*8+0xa11da4u)); r_esp -= 4; W32(r_esp, 0x80cc98u); call_ind(t); }
    /* 0080cc98: ret  */ FN_RET(0x0080cc8c); r_esp += 4; return;
}

void f_0080cc9c(void)
{
    FN_ENTER(0x0080cc9c);
    /* 0080cc9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080cc9d: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0080cca2: mov ebp, dword ptr [eax*8 + 0xa11da4] */ r_ebp = R32((u32)(r_eax*8+0xa11da4u));
    /* 0080cca9: call 0x80ccd8 */ r_esp -= 4; W32(r_esp, 0x80ccaeu); f_0080ccd8();
    /* 0080ccae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ccaf: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x80ccb1u); call_ind(t); }
    /* 0080ccb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ccb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ccb3: ret  */ FN_RET(0x0080cc9c); r_esp += 4; return;
}

void f_0080ccb4(void)
{
    FN_ENTER(0x0080ccb4);
    /* 0080ccb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ccb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ccb6: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0080ccbb: mov ebp, dword ptr [eax*8 + 0xa11da4] */ r_ebp = R32((u32)(r_eax*8+0xa11da4u));
    /* 0080ccc2: call 0x80ccd8 */ r_esp -= 4; W32(r_esp, 0x80ccc7u); f_0080ccd8();
    /* 0080ccc7: mov ebx, eax */ r_ebx = r_eax;
    /* 0080ccc9: call 0x80ccd8 */ r_esp -= 4; W32(r_esp, 0x80ccceu); f_0080ccd8();
    /* 0080ccce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cccf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ccd0: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x80ccd2u); call_ind(t); }
    /* 0080ccd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ccd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080ccd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ccd7: ret  */ FN_RET(0x0080ccb4); r_esp += 4; return;
}

void f_0080ccd8(void) /* sub_80CCD8 */
{
    FN_ENTER(0x0080ccd8);
    /* 0080ccd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ccd9: mov eax, dword ptr [0xaafdd4] */ r_eax = R32((u32)(0xaafdd4u));
    /* 0080ccde: add eax, dword ptr [0xaafdd8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafdd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080cce4: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080cce7: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0080cceb: mov edx, dword ptr [0xaafdd8] */ r_edx = R32((u32)(0xaafdd8u));
    /* 0080ccf1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0080ccf5: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ccf8: mov dword ptr [0xaafdd8], edx */ W32((u32)(0xaafdd8u), r_edx);
    /* 0080ccfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ccff: ret  */ FN_RET(0x0080ccd8); r_esp += 4; return;
}

void f_0080cd00(void)
{
    FN_ENTER(0x0080cd00);
    /* 0080cd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd01: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0080cd06: mov ebp, dword ptr [eax*8 + 0xa11da4] */ r_ebp = R32((u32)(r_eax*8+0xa11da4u));
    /* 0080cd0d: call 0x80cd18 */ r_esp -= 4; W32(r_esp, 0x80cd12u); f_0080cd18();
    /* 0080cd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd13: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x80cd15u); call_ind(t); }
    /* 0080cd15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cd16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080cd17: ret  */ FN_RET(0x0080cd00); r_esp += 4; return;
}

void f_0080cd18(void) /* sub_80CD18 */
{
    FN_ENTER(0x0080cd18);
    /* 0080cd18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd19: mov eax, dword ptr [0xaafdd4] */ r_eax = R32((u32)(0xaafdd4u));
    /* 0080cd1e: add eax, dword ptr [0xaafdd8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafdd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080cd24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080cd26: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080cd29: mov edx, dword ptr [0xaafdd8] */ r_edx = R32((u32)(0xaafdd8u));
    /* 0080cd2f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0080cd32: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080cd35: mov dword ptr [0xaafdd8], edx */ W32((u32)(0xaafdd8u), r_edx);
    /* 0080cd3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cd3c: ret  */ FN_RET(0x0080cd18); r_esp += 4; return;
}

void f_0080cd40(void) /* sub_80CD40 */
{
    FN_ENTER(0x0080cd40);
    /* 0080cd40: mov dword ptr [0xaafddc], 1 */ W32((u32)(0xaafddcu), 0x1u);
    /* 0080cd4a: ret  */ FN_RET(0x0080cd40); r_esp += 4; return;
}

void f_0080cd4c(void)
{
    FN_ENTER(0x0080cd4c);
    /* 0080cd4c: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0080cd51: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0080cd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd58: call 0x810ae8 */ r_esp -= 4; W32(r_esp, 0x80cd5du); f_00810ae8();
    /* 0080cd5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080cd60: ret  */ FN_RET(0x0080cd4c); r_esp += 4; return;
}

void f_0080cd64(void)
{
    FN_ENTER(0x0080cd64);
    /* 0080cd64: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0080cd69: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0080cd6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cd70: call 0x810e54 */ r_esp -= 4; W32(r_esp, 0x80cd75u); f_00810e54();
    /* 0080cd75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080cd78: ret  */ FN_RET(0x0080cd64); r_esp += 4; return;
}

void f_0080cd7c(void) /* sub_80CD7C */
{
    FN_ENTER(0x0080cd7c);
    /* 0080cd7c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080cd7f: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0080cd84: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 0080cd88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080cd8a: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0080cd8f: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0080cd94: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0080cd99: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0080cd9e: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0080cda3: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0080cda8: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 0080cdad: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 0080cdb1: mov eax, dword ptr [0xaafde4] */ r_eax = R32((u32)(0xaafde4u));
    /* 0080cdb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cdb8: je 0x80cdcb */ if (fZ) goto L_0080cdcb;
L_0080cdba:; BB(0x0080cdba);
    /* 0080cdba: mov byte ptr [esp + 0xb], 3 */ W8((u32)(r_esp+0xbu), 0x3u);
    /* 0080cdbf: mov dword ptr [0xaafde4], 0 */ W32((u32)(0xaafde4u), 0x0u);
    /* 0080cdc9: jmp 0x80cdd0 */ goto L_0080cdd0;
L_0080cdcb:; BB(0x0080cdcb);
    /* 0080cdcb: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
L_0080cdd0:; BB(0x0080cdd0);
    /* 0080cdd0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080cdd3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x80cdd8u); f_008003e0();
    /* 0080cdd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080cddb: ret  */ FN_RET(0x0080cd7c); r_esp += 4; return;
}

void f_0080cddc(void) /* sub_80CDDC */
{
    FN_ENTER(0x0080cddc);
    /* 0080cddc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080cddf: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0080cde4: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 0080cde8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080cdea: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0080cdef: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0080cdf4: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0080cdf9: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0080cdfe: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0080ce04: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0080ce09: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 0080ce0e: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 0080ce12: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 0080ce16: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080ce19: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x80ce1eu); f_008003e0();
    /* 0080ce1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ce21: ret  */ FN_RET(0x0080cddc); r_esp += 4; return;
}

void f_0080ce24(void) /* sub_80CE24 */
{
    FN_ENTER(0x0080ce24);
    /* 0080ce24: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ce27: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0080ce2b: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0080ce31: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0080ce36: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0080ce3b: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0080ce40: add dword ptr [0xaafde0], 1 */ { u32 ad = (u32)(0xaafde0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ce47: mov dword ptr [0xaafe5c], 1 */ W32((u32)(0xaafe5cu), 0x1u);
    /* 0080ce51: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0080ce55: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0080ce59: mov byte ptr [esp], 0x67 */ W8((u32)(r_esp), 0x67u);
    /* 0080ce5d: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0080ce62: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0080ce66: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080ce69: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x80ce6eu); f_008003e0();
    /* 0080ce6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ce71: ret  */ FN_RET(0x0080ce24); r_esp += 4; return;
}

void f_0080ce74(void)
{
    FN_ENTER(0x0080ce74);
    /* 0080ce74: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0080ce79: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0080ce7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ce7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ce80: call 0x810e54 */ r_esp -= 4; W32(r_esp, 0x80ce85u); f_00810e54();
    /* 0080ce85: mov dword ptr [0xaafddc], 1 */ W32((u32)(0xaafddcu), 0x1u);
    /* 0080ce8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ce92: ret  */ FN_RET(0x0080ce74); r_esp += 4; return;
}

void f_0080ce94(void) /* sub_80CE94 */
{
    FN_ENTER(0x0080ce94);
    /* 0080ce94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ce95: mov ebp, esp */ r_ebp = r_esp;
    /* 0080ce97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ce99: push 0x8f731c */ { u32 v = 0x8f731cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ce9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080cea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cea5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080ceac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ceaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080ceb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080ceb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080ceb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080cebb: mov eax, dword ptr [0xaafe5c] */ r_eax = R32((u32)(0xaafe5cu));
    /* 0080cec0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cec3: je 0x80ced3 */ if (fZ) goto L_0080ced3;
L_0080cec5:; BB(0x0080cec5);
    /* 0080cec5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0080cec8: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080cecc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cecd: call 0x7b4344 */ r_esp -= 4; W32(r_esp, 0x80ced2u); f_007b4344();
    /* 0080ced2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0080ced3:; BB(0x0080ced3);
    /* 0080ced3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0080ceda: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0080cedc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80cee1u); f_005caba4();
    /* 0080cee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080cee2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0080cee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cee7: je 0x80cf0f */ if (fZ) goto L_0080cf0f;
L_0080cee9:; BB(0x0080cee9);
    /* 0080cee9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0080cef0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080cef7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0080cefa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cefb: mov ecx, eax */ r_ecx = r_eax;
    /* 0080cefd: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cf03: call 0x80dbb4 */ r_esp -= 4; W32(r_esp, 0x80cf08u); f_0080dbb4();
    /* 0080cf08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0080cf0f:; BB(0x0080cf0f);
    /* 0080cf0f: mov dword ptr [0xaafe5c], 0xffffffff */ W32((u32)(0xaafe5cu), 0xffffffffu);
    /* 0080cf19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080cf1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080cf23: mov esp, ebp */ r_esp = r_ebp;
    /* 0080cf25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080cf26: ret  */ FN_RET(0x0080ce94); r_esp += 4; return;
}

void f_0080cf28(void) /* sub_80CF28 */
{
    FN_ENTER(0x0080cf28);
    /* 0080cf28: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080cf2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cf30: je 0x80cf39 */ if (fZ) goto L_0080cf39;
L_0080cf32:; BB(0x0080cf32);
    /* 0080cf32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080cf34: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x80cf39u); f_00508320();
L_0080cf39:; BB(0x0080cf39);
    /* 0080cf39: mov dword ptr [0xaafe58], 0 */ W32((u32)(0xaafe58u), 0x0u);
    /* 0080cf43: ret  */ FN_RET(0x0080cf28); r_esp += 4; return;
}

void f_0080cf44(void) /* sub_80CF44 */
{
    FN_ENTER(0x0080cf44);
    /* 0080cf44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cf45: mov eax, 0x44 */ r_eax = 0x44u;
    /* 0080cf4a: mov ebx, eax */ r_ebx = r_eax;
L_0080cf4c:; BB(0x0080cf4c);
    /* 0080cf4c: mov edx, dword ptr [ebx + 0xaafe00] */ r_edx = R32((u32)(r_ebx+0xaafe00u));
    /* 0080cf52: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080cf55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cf57: je 0x80cf6f */ if (fZ) goto L_0080cf6f;
L_0080cf59:; BB(0x0080cf59);
    /* 0080cf59: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080cf5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cf60: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x80cf65u); f_007a8b04();
    /* 0080cf65: mov dword ptr [ebx + 0xaafe04], 0 */ W32((u32)(r_ebx+0xaafe04u), 0x0u);
L_0080cf6f:; BB(0x0080cf6f);
    /* 0080cf6f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080cf71: jge 0x80cf4c */ if ((fS==fO)) goto L_0080cf4c;
L_0080cf73:; BB(0x0080cf73);
    /* 0080cf73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080cf74: ret  */ FN_RET(0x0080cf44); r_esp += 4; return;
}

void f_0080cf78(void) /* sub_80CF78 */
{
    FN_ENTER(0x0080cf78);
    /* 0080cf78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cf79: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080cf7c: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0080cf80: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0080cf84: mov eax, dword ptr [0xaafdd0] */ r_eax = R32((u32)(0xaafdd0u));
    /* 0080cf89: mov ecx, dword ptr [eax + ebx*8] */ r_ecx = R32((u32)(r_eax+r_ebx*8));
    /* 0080cf8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cf8e: je 0x80cfb1 */ if (fZ) goto L_0080cfb1;
L_0080cf90:; BB(0x0080cf90);
    /* 0080cf90: mov eax, dword ptr [eax + ebx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x4u));
    /* 0080cf94: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080cf97: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080cf99: jl 0x80cfb1 */ if ((fS!=fO)) goto L_0080cfb1;
L_0080cf9b:; BB(0x0080cf9b);
    /* 0080cf9b: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 0080cf9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cfa0: je 0x80cfb1 */ if (fZ) goto L_0080cfb1;
L_0080cfa2:; BB(0x0080cfa2);
    /* 0080cfa2: mov edx, dword ptr [ecx + edx*8 + 4] */ r_edx = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 0080cfa6: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0080cfaa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080cfad: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080cfaf: jge 0x80cfb8 */ if ((fS==fO)) goto L_0080cfb8;
L_0080cfb1:; BB(0x0080cfb1);
    /* 0080cfb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080cfb3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080cfb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080cfb7: ret  */ FN_RET(0x0080cf78); r_esp += 4; return;
L_0080cfb8:; BB(0x0080cfb8);
    /* 0080cfb8: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0080cfbc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0080cfbf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080cfc2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080cfc4: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0080cfc7: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080cfc9: push 0x9806f0 */ { u32 v = 0x9806f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080cfce: push dword ptr [eax + ebx + 4] */ { u32 v = R32((u32)(r_eax+r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080cfd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cfd3: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80cfd8u); f_0078e574();
    /* 0080cfd8: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080cfdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cfdd: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80cfe2u); f_005b9328();
    /* 0080cfe2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080cfe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080cfe7: jle 0x80cfb1 */ if ((fZ||fS!=fO)) goto L_0080cfb1;
L_0080cfe9:; BB(0x0080cfe9);
    /* 0080cfe9: mov ecx, dword ptr [0xaafe58] */ r_ecx = R32((u32)(0xaafe58u));
    /* 0080cfef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080cff0: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x80cff5u); f_007a8a38();
    /* 0080cff5: mov ebx, eax */ r_ebx = r_eax;
    /* 0080cff7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080cff9: je 0x80cfb1 */ if (fZ) goto L_0080cfb1;
L_0080cffb:; BB(0x0080cffb);
    /* 0080cffb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080cffe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080cfff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d000: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80d005u); f_005b9910();
    /* 0080d005: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0080d009: mov dword ptr [edx*4 + 0xaafe00], ebx */ W32((u32)(r_edx*4+0xaafe00u), r_ebx);
    /* 0080d010: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d015: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d018: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d019: ret  */ FN_RET(0x0080cf78); r_esp += 4; return;
}

void f_0080cfff(void)
{
    FN_ENTER(0x0080cfff);
    /* 0080cfff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080d000: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80d005u); f_005b9910();
    /* 0080d005: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0080d009: mov dword ptr [edx*4 + 0xaafe00], ebx */ W32((u32)(r_edx*4+0xaafe00u), r_ebx);
    /* 0080d010: mov eax, 1 */ r_eax = 0x1u;
    /* 0080d015: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080d018: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080d019: ret  */ FN_RET(0x0080cfff); r_esp += 4; return;
}

