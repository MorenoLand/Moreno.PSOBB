#include "protos.h"

void f_0062a0a8(void) /* sub_62A0A8 */
{
    FN_ENTER(0x0062a0a8);
    /* 0062a0a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a0ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0ad: push 0x8e2fac */ { u32 v = 0x8e2facu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a0c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a0c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a0c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a0c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a0cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a0cf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a0d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062a0db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62a0e0u); f_008581c5();
    /* 0062a0e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a0e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062a0e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a0e6: je 0x62a18e */ if (fZ) goto L_0062a18e;
L_0062a0ec:; BB(0x0062a0ec);
    /* 0062a0ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062a0f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a0fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a0fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a0ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a102: push 0x9c5dd4 */ { u32 v = 0x9c5dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a107: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a109: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62a10eu); f_005b7a84();
    /* 0062a10e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a111: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062a118:; BB(0x0062a118);
    /* 0062a118: mov dword ptr [0xa8edf4], eax */ W32((u32)(0xa8edf4u), r_eax);
    /* 0062a11d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a124: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a126: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62a12bu); f_008581c5();
    /* 0062a12b: mov edx, dword ptr [0xa8edf4] */ r_edx = R32((u32)(0xa8edf4u));
    /* 0062a131: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062a137: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062a13a: mov dword ptr [0xa8edf0], eax */ W32((u32)(0xa8edf0u), r_eax);
    /* 0062a13f: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0062a141: push 0x9322c0 */ { u32 v = 0x9322c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a146: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62a14bu); f_008009dc();
    /* 0062a14b: push 0x9322d8 */ { u32 v = 0x9322d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a150: mov edx, dword ptr [0xa8edf0] */ r_edx = R32((u32)(0xa8edf0u));
    /* 0062a156: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062a159: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62a15eu); f_008009dc();
    /* 0062a15e: push 0x9322f0 */ { u32 v = 0x9322f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a163: mov edx, dword ptr [0xa8edf0] */ r_edx = R32((u32)(0xa8edf0u));
    /* 0062a169: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0062a16c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62a171u); f_008009dc();
    /* 0062a171: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062a174: mov edx, dword ptr [0xa8edf0] */ r_edx = R32((u32)(0xa8edf0u));
    /* 0062a17a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a17d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0062a180: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a183: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a18a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a18c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a18d: ret  */ FN_RET(0x0062a0a8); r_esp += 4; return;
L_0062a18e:; BB(0x0062a18e);
    /* 0062a18e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a190: jmp 0x62a118 */ goto L_0062a118;
}

void f_0062a194(void) /* sub_62A194 */
{
    FN_ENTER(0x0062a194);
    /* 0062a194: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a195: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062a197: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062a199: call 0x62a1b8 */ r_esp -= 4; W32(r_esp, 0x62a19eu); f_0062a1b8();
    /* 0062a19e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062a1a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a1a4: jne 0x62a1aa */ if (!fZ) goto L_0062a1aa;
L_0062a1a6:; BB(0x0062a1a6);
    /* 0062a1a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a1a7: ret 4 */ FN_RET(0x0062a194); r_esp += 8; return;
L_0062a1aa:; BB(0x0062a1aa);
    /* 0062a1aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62a1b0u); f_005c2f74();
    /* 0062a1b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a1b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a1b2: ret 4 */ FN_RET(0x0062a194); r_esp += 8; return;
}

void f_0062a1b8(void) /* sub_62A1B8 */
{
    FN_ENTER(0x0062a1b8);
    /* 0062a1b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a1bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1bd: push 0x8e2fc8 */ { u32 v = 0x8e2fc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a1d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a1d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a1d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a1d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a1dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a1df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062a1e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a1e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a1ec: mov dword ptr [eax], 0xb29860 */ W32((u32)(r_eax), 0xb29860u);
    /* 0062a1f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a1f3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x62a1f8u); f_007b4e84();
    /* 0062a1f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a1f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a1fc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x62a201u); f_007b9c8c();
    /* 0062a201: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a208: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a20b: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62a210u); f_006296c8();
    /* 0062a210: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a213: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a21a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a21c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a21d: ret  */ FN_RET(0x0062a1b8); r_esp += 4; return;
}

void f_0062a220(void) /* sub_62A220 */
{
    FN_ENTER(0x0062a220);
    /* 0062a220: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0062a226: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a229: je 0x62a25e */ if (fZ) goto L_0062a25e;
L_0062a22b:; BB(0x0062a22b);
    /* 0062a22b: fld dword ptr [0x932334] */ FPUSH(R_F32((u32)(0x932334u)));
    /* 0062a231: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 0062a234: fcom dword ptr [0x93232c] */ fx_compare(ST(0), R_F32((u32)(0x93232cu))); 
    /* 0062a23a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a23c: fld dword ptr [0x932330] */ FPUSH(R_F32((u32)(0x932330u)));
    /* 0062a242: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062a245: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062a247: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0062a24a: fst dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0));
    /* 0062a24d: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 0062a250: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a251: jb 0x62a28f */ if (fC) goto L_0062a28f;
L_0062a253:; BB(0x0062a253);
    /* 0062a253: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062a256: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 0062a25c: jmp 0x62a28f */ goto L_0062a28f;
L_0062a25e:; BB(0x0062a25e);
    /* 0062a25e: fld dword ptr [0x932340] */ FPUSH(R_F32((u32)(0x932340u)));
    /* 0062a264: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 0062a267: fcom dword ptr [0x932338] */ fx_compare(ST(0), R_F32((u32)(0x932338u))); 
    /* 0062a26d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a26f: fld dword ptr [0x93233c] */ FPUSH(R_F32((u32)(0x93233cu)));
    /* 0062a275: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062a278: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062a27a: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0062a27d: fst dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0));
    /* 0062a280: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 0062a283: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a284: ja 0x62a28f */ if ((!fC&&!fZ)) goto L_0062a28f;
L_0062a286:; BB(0x0062a286);
    /* 0062a286: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062a289: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
L_0062a28f:; BB(0x0062a28f);
    /* 0062a28f: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 0062a295: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a297: add eax, 0x444 */ {  u32 a = r_eax; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a29c: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 0062a2a2: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x62a2a5u); call_ind(t); }
    /* 0062a2a5: ret  */ FN_RET(0x0062a220); r_esp += 4; return;
}

void f_0062a2a8(void) /* sub_62A2A8 */
{
    FN_ENTER(0x0062a2a8);
    /* 0062a2a8: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0062a2ae: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062a2b1: je 0x62a2e6 */ if (fZ) goto L_0062a2e6;
L_0062a2b3:; BB(0x0062a2b3);
    /* 0062a2b3: fld dword ptr [0x93231c] */ FPUSH(R_F32((u32)(0x93231cu)));
    /* 0062a2b9: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 0062a2bc: fcom dword ptr [0x932314] */ fx_compare(ST(0), R_F32((u32)(0x932314u))); 
    /* 0062a2c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a2c4: fld dword ptr [0x932318] */ FPUSH(R_F32((u32)(0x932318u)));
    /* 0062a2ca: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062a2cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062a2cf: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0062a2d2: fst dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0));
    /* 0062a2d5: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 0062a2d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a2d9: jb 0x62a317 */ if (fC) goto L_0062a317;
L_0062a2db:; BB(0x0062a2db);
    /* 0062a2db: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062a2de: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 0062a2e4: jmp 0x62a317 */ goto L_0062a317;
L_0062a2e6:; BB(0x0062a2e6);
    /* 0062a2e6: fld dword ptr [0x932328] */ FPUSH(R_F32((u32)(0x932328u)));
    /* 0062a2ec: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 0062a2ef: fcom dword ptr [0x932320] */ fx_compare(ST(0), R_F32((u32)(0x932320u))); 
    /* 0062a2f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a2f7: fld dword ptr [0x932324] */ FPUSH(R_F32((u32)(0x932324u)));
    /* 0062a2fd: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0062a300: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062a302: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0062a305: fst dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0));
    /* 0062a308: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 0062a30b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a30c: ja 0x62a317 */ if ((!fC&&!fZ)) goto L_0062a317;
L_0062a30e:; BB(0x0062a30e);
    /* 0062a30e: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062a311: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
L_0062a317:; BB(0x0062a317);
    /* 0062a317: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 0062a31d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062a31f: add eax, 0x222 */ {  u32 a = r_eax; u32 b = 0x222u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062a324: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 0062a32a: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x62a32du); call_ind(t); }
    /* 0062a32d: ret  */ FN_RET(0x0062a2a8); r_esp += 4; return;
}

void f_0062a330(void) /* sub_62A330 */
{
    FN_ENTER(0x0062a330);
    /* 0062a330: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a331: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a332: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062a334: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a33a: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a340: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062a343: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062a345: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62a348u); call_ind(t); }
    /* 0062a348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a34a: je 0x62a44b */ if (fZ) goto L_0062a44b;
L_0062a350:; BB(0x0062a350);
    /* 0062a350: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a355u); f_0082d7b0();
    /* 0062a355: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062a358: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a35du); f_0082d838();
    /* 0062a35d: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0062a360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a362: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62a367u); f_0082d8bc();
    /* 0062a367: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0062a36a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62a36fu); f_00829cc8();
    /* 0062a36f: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 0062a372: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a377u); f_0082d7b0();
    /* 0062a377: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a37a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a37fu); f_0082d838();
    /* 0062a37f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a382: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a387u); f_008321d8();
    /* 0062a387: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a388: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062a38b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a390u); f_0082d7b0();
    /* 0062a390: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a393: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a398u); f_0082d838();
    /* 0062a398: lea edx, [ebp + 0x68] */ r_edx = (u32)(r_ebp+0x68u);
    /* 0062a39b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a39d: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x62a3a2u); f_0083c0a0();
    /* 0062a3a2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62a3a7u); f_0082dbac();
    /* 0062a3a7: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a3aa: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a3afu); f_008321d8();
    /* 0062a3af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a3b0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62a3b5u); f_0082dab0();
    /* 0062a3b5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a3bau); f_0082da80();
    /* 0062a3ba: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0062a3bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a3c2u); f_0082d7b0();
    /* 0062a3c2: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a3c5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a3cau); f_0082d838();
    /* 0062a3ca: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a3cd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a3d2u); f_008321d8();
    /* 0062a3d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a3d3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a3d8u); f_0082da80();
    /* 0062a3d8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a3ddu); f_0082da80();
    /* 0062a3dd: mov eax, dword ptr [0xa8edfc] */ r_eax = R32((u32)(0xa8edfcu));
    /* 0062a3e2: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0062a3e8: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0062a3eb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62a3f0u); f_00829cc8();
    /* 0062a3f0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62a3f5u); f_0082dbac();
    /* 0062a3f5: mov esi, dword ptr [0xa8ee00] */ r_esi = R32((u32)(0xa8ee00u));
    /* 0062a3fb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a400u); f_0082d7b0();
    /* 0062a400: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a403: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a408u); f_0082d838();
    /* 0062a408: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a40b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a410u); f_008321d8();
    /* 0062a410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a411: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062a414: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a419u); f_0082d7b0();
    /* 0062a419: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a41c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a421u); f_0082d838();
    /* 0062a421: mov edx, dword ptr [ebp + 0xec] */ r_edx = R32((u32)(r_ebp+0xecu));
    /* 0062a427: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a429: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62a42eu); f_0082d8bc();
    /* 0062a42e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a431: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a436u); f_008321d8();
    /* 0062a436: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a437: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a43cu); f_0082da80();
    /* 0062a43c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a441u); f_0082da80();
    /* 0062a441: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62a446u); f_0082dab0();
    /* 0062a446: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a44bu); f_0082da80();
L_0062a44b:; BB(0x0062a44b);
    /* 0062a44b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a44c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a44d: ret  */ FN_RET(0x0062a330); r_esp += 4; return;
}

void f_0062a450(void) /* sub_62A450 */
{
    FN_ENTER(0x0062a450);
    /* 0062a450: mov eax, dword ptr [0xa8edfc] */ r_eax = R32((u32)(0xa8edfcu));
    /* 0062a455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a457: je 0x62a47c */ if (fZ) goto L_0062a47c;
L_0062a459:; BB(0x0062a459);
    /* 0062a459: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a45c: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62a461u); f_00800b5c();
    /* 0062a461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a462: mov eax, dword ptr [0xa8edfc] */ r_eax = R32((u32)(0xa8edfcu));
    /* 0062a467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a469: je 0x62a47c */ if (fZ) goto L_0062a47c;
L_0062a46b:; BB(0x0062a46b);
    /* 0062a46b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a46c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x62a471u); f_00857e98();
    /* 0062a471: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a472: mov dword ptr [0xa8edfc], 0 */ W32((u32)(0xa8edfcu), 0x0u);
L_0062a47c:; BB(0x0062a47c);
    /* 0062a47c: mov ecx, dword ptr [0xa8ee04] */ r_ecx = R32((u32)(0xa8ee04u));
    /* 0062a482: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a484: je 0x62a499 */ if (fZ) goto L_0062a499;
L_0062a486:; BB(0x0062a486);
    /* 0062a486: je 0x62a48f */ if (fZ) goto L_0062a48f;
L_0062a488:; BB(0x0062a488);
    /* 0062a488: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a48a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62a48fu); f_004066a8();
L_0062a48f:; BB(0x0062a48f);
    /* 0062a48f: mov dword ptr [0xa8ee04], 0 */ W32((u32)(0xa8ee04u), 0x0u);
L_0062a499:; BB(0x0062a499);
    /* 0062a499: mov dword ptr [0xa8ee00], 0 */ W32((u32)(0xa8ee00u), 0x0u);
    /* 0062a4a3: ret  */ FN_RET(0x0062a450); r_esp += 4; return;
}

void f_0062a4a4(void)
{
    FN_ENTER(0x0062a4a4);
    /* 0062a4a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a4a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4a9: push 0x8e2ff0 */ { u32 v = 0x8e2ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a4bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a4bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a4c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a4c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a4c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a4cb: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a4d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062a4d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62a4dcu); f_005caba4();
    /* 0062a4dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a4dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062a4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a4e2: je 0x62a51b */ if (fZ) goto L_0062a51b;
L_0062a4e4:; BB(0x0062a4e4);
    /* 0062a4e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062a4eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a4f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a4f5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a4fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a4fe: call 0x62a520 */ r_esp -= 4; W32(r_esp, 0x62a503u); f_0062a520();
    /* 0062a503: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a506: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062a50d:; BB(0x0062a50d);
    /* 0062a50d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a510: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a517: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a51a: ret  */ FN_RET(0x0062a4a4); r_esp += 4; return;
L_0062a51b:; BB(0x0062a51b);
    /* 0062a51b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a51d: jmp 0x62a50d */ goto L_0062a50d;
}

void f_0062a520(void) /* sub_62A520 */
{
    FN_ENTER(0x0062a520);
    /* 0062a520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a521: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a525: push 0x8e300c */ { u32 v = 0x8e300cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a53b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a53e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062a541: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062a544: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062a547: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062a54a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a54d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062a550: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062a553: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62a558u); f_0062998c();
    /* 0062a558: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a55f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a562: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a565: mov dword ptr [ecx], 0xb29860 */ W32((u32)(r_ecx), 0xb29860u);
    /* 0062a56b: mov eax, dword ptr [0x9c5e30] */ r_eax = R32((u32)(0x9c5e30u));
    /* 0062a570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a571: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062a574: call dword ptr [0xb29874] */ { u32 t = R32((u32)(0xb29874u)); r_esp -= 4; W32(r_esp, 0x62a57au); call_ind(t); }
    /* 0062a57a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a57d: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62a582u); f_0062974c();
    /* 0062a582: mov ecx, dword ptr [0xa8ee04] */ r_ecx = R32((u32)(0xa8ee04u));
    /* 0062a588: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a58a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62a58fu); f_005b8610();
    /* 0062a58f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a592: mov ecx, dword ptr [0xa8ee04] */ r_ecx = R32((u32)(0xa8ee04u));
    /* 0062a598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a59a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062a59d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62a5a2u); f_005b8624();
    /* 0062a5a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a5a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5a7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0062a5aa: push 0x9c5e34 */ { u32 v = 0x9c5e34u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a5af: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62a5b4u); f_007b9a88();
    /* 0062a5b4: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a5b7: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62a5bcu); f_007b999c();
    /* 0062a5bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a5bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a5c0: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62a5c5u); f_007b4f54();
    /* 0062a5c5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a5c8: fld dword ptr [0x932310] */ FPUSH(R_F32((u32)(0x932310u)));
    /* 0062a5ce: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0062a5d1: mov ebx, dword ptr [esi + 0xd0] */ r_ebx = R32((u32)(r_esi+0xd0u));
    /* 0062a5d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a5d9: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062a5dc: mov dword ptr [esi + 0xc0], 0x43c80000 */ W32((u32)(r_esi+0xc0u), 0x43c80000u);
    /* 0062a5e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062a5e9: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 0062a5ec: fstp dword ptr [esi + 0xc4] */ W_F32((u32)(r_esi+0xc4u), ST(0)); FPOP();
    /* 0062a5f2: mov dword ptr [esi + 0xe8], ecx */ W32((u32)(r_esi+0xe8u), r_ecx);
    /* 0062a5f8: mov dword ptr [esi + 0xec], ecx */ W32((u32)(r_esi+0xecu), r_ecx);
    /* 0062a5fe: je 0x62a60a */ if (fZ) goto L_0062a60a;
L_0062a600:; BB(0x0062a600);
    /* 0062a600: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0062a606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a608: jl 0x62a641 */ if ((fS!=fO)) goto L_0062a641;
L_0062a60a:; BB(0x0062a60a);
    /* 0062a60a: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
L_0062a614:; BB(0x0062a614);
    /* 0062a614: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a617: mov dword ptr [esi + 0x70], 0x3f800000 */ W32((u32)(r_esi+0x70u), 0x3f800000u);
    /* 0062a61e: mov eax, esi */ r_eax = r_esi;
    /* 0062a620: mov dword ptr [esi + 0x6c], 0x3f800000 */ W32((u32)(r_esi+0x6cu), 0x3f800000u);
    /* 0062a627: mov dword ptr [esi + 0x68], 0x3f800000 */ W32((u32)(r_esi+0x68u), 0x3f800000u);
    /* 0062a62e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062a631: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a634: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a63b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a63d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a63e: ret 8 */ FN_RET(0x0062a520); r_esp += 12; return;
L_0062a641:; BB(0x0062a641);
    /* 0062a641: mov dword ptr [esi + 0xd0], 1 */ W32((u32)(r_esi+0xd0u), 0x1u);
    /* 0062a64b: jmp 0x62a614 */ goto L_0062a614;
}

void f_0062a650(void) /* sub_62A650 */
{
    FN_ENTER(0x0062a650);
    /* 0062a650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a651: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a655: push 0x8e3034 */ { u32 v = 0x8e3034u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a65a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a661: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a668: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a66b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a66e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a671: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a674: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a677: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a67c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062a683: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62a688u); f_008581c5();
    /* 0062a688: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a689: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062a68c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a68e: je 0x62a722 */ if (fZ) goto L_0062a722;
L_0062a694:; BB(0x0062a694);
    /* 0062a694: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062a69b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a6a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a6a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6aa: push 0x9c5e20 */ { u32 v = 0x9c5e20u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6b1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62a6b6u); f_005b7a84();
    /* 0062a6b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a6b9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062a6c0:; BB(0x0062a6c0);
    /* 0062a6c0: mov dword ptr [0xa8ee04], eax */ W32((u32)(0xa8ee04u), r_eax);
    /* 0062a6c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a6cc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62a6d3u); f_008581c5();
    /* 0062a6d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a6d4: mov ecx, dword ptr [0xa8ee04] */ r_ecx = R32((u32)(0xa8ee04u));
    /* 0062a6da: mov dword ptr [0xa8edfc], eax */ W32((u32)(0xa8edfcu), r_eax);
    /* 0062a6df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6e1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62a6e6u); f_005b8624();
    /* 0062a6e6: push 0x9323a0 */ { u32 v = 0x9323a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a6eb: mov edx, dword ptr [0xa8edfc] */ r_edx = R32((u32)(0xa8edfcu));
    /* 0062a6f1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062a6f3: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62a6f8u); f_008009dc();
    /* 0062a6f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a6f9: mov edx, dword ptr [0xa8edfc] */ r_edx = R32((u32)(0xa8edfcu));
    /* 0062a6ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a701: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062a704: mov ecx, dword ptr [0xa8ee04] */ r_ecx = R32((u32)(0xa8ee04u));
    /* 0062a70a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62a70fu); f_005b8610();
    /* 0062a70f: mov dword ptr [0xa8ee00], eax */ W32((u32)(0xa8ee00u), r_eax);
    /* 0062a714: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a717: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a71e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a721: ret  */ FN_RET(0x0062a650); r_esp += 4; return;
L_0062a722:; BB(0x0062a722);
    /* 0062a722: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a724: jmp 0x62a6c0 */ goto L_0062a6c0;
}

void f_0062a728(void) /* sub_62A728 */
{
    FN_ENTER(0x0062a728);
    /* 0062a728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a729: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062a72b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062a72d: call 0x62a74c */ r_esp -= 4; W32(r_esp, 0x62a732u); f_0062a74c();
    /* 0062a732: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062a736: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a738: jne 0x62a73e */ if (!fZ) goto L_0062a73e;
L_0062a73a:; BB(0x0062a73a);
    /* 0062a73a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a73b: ret 4 */ FN_RET(0x0062a728); r_esp += 8; return;
L_0062a73e:; BB(0x0062a73e);
    /* 0062a73e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a73f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62a744u); f_005c2f74();
    /* 0062a744: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a745: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062a746: ret 4 */ FN_RET(0x0062a728); r_esp += 8; return;
}

void f_0062a74c(void) /* sub_62A74C */
{
    FN_ENTER(0x0062a74c);
    /* 0062a74c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a74d: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a74f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a751: push 0x8e3050 */ { u32 v = 0x8e3050u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a756: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a75d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a764: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a767: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a76a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a76d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a770: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a773: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062a776: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a779: mov dword ptr [ecx], 0xb29980 */ W32((u32)(r_ecx), 0xb29980u);
    /* 0062a77f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a786: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62a78bu); f_006296c8();
    /* 0062a78b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a78e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a795: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a798: ret  */ FN_RET(0x0062a74c); r_esp += 4; return;
}

void f_0062a79c(void) /* sub_62A79C */
{
    FN_ENTER(0x0062a79c);
    /* 0062a79c: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062a79f: fcom dword ptr [0x9323d4] */ fx_compare(ST(0), R_F32((u32)(0x9323d4u))); 
    /* 0062a7a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a7a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a7a8: jbe 0x62a7b5 */ if ((fC||fZ)) goto L_0062a7b5;
L_0062a7aa:; BB(0x0062a7aa);
    /* 0062a7aa: fld dword ptr [0xa8ee10] */ FPUSH(R_F32((u32)(0xa8ee10u)));
    /* 0062a7b0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0062a7b2: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
L_0062a7b5:; BB(0x0062a7b5);
    /* 0062a7b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062a7b7: ret  */ FN_RET(0x0062a79c); r_esp += 4; return;
}

void f_0062a7b8(void) /* sub_62A7B8 */
{
    FN_ENTER(0x0062a7b8);
    /* 0062a7b8: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 0062a7be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062a7c1: je 0x62a808 */ if (fZ) goto L_0062a808;
L_0062a7c3:; BB(0x0062a7c3);
    /* 0062a7c3: fld dword ptr [0x9323d0] */ FPUSH(R_F32((u32)(0x9323d0u)));
    /* 0062a7c9: fld dword ptr [ecx + 0xec] */ FPUSH(R_F32((u32)(r_ecx+0xecu)));
    /* 0062a7cf: fsub dword ptr [0x9323c8] */ ST(0) = ST(0) - R_F32((u32)(0x9323c8u));
    /* 0062a7d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062a7d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a7d9: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062a7df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a7e0: ja 0x62a7ec */ if ((!fC&&!fZ)) goto L_0062a7ec;
L_0062a7e2:; BB(0x0062a7e2);
    /* 0062a7e2: mov dword ptr [ecx + 0xf8], 1 */ W32((u32)(r_ecx+0xf8u), 0x1u);
L_0062a7ec:; BB(0x0062a7ec);
    /* 0062a7ec: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062a7ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062a7f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062a7f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062a7f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a7f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a7f8: jae 0x62a805 */ if (!fC) goto L_0062a805;
L_0062a7fa:; BB(0x0062a7fa);
    /* 0062a7fa: fld dword ptr [0xa8ee10] */ FPUSH(R_F32((u32)(0xa8ee10u)));
    /* 0062a800: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0062a802: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
L_0062a805:; BB(0x0062a805);
    /* 0062a805: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062a807: ret  */ FN_RET(0x0062a7b8); r_esp += 4; return;
L_0062a808:; BB(0x0062a808);
    /* 0062a808: fld dword ptr [0x9323c8] */ FPUSH(R_F32((u32)(0x9323c8u)));
    /* 0062a80e: fadd dword ptr [ecx + 0xec] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xecu));
    /* 0062a814: fcom dword ptr [0x9323cc] */ fx_compare(ST(0), R_F32((u32)(0x9323ccu))); 
    /* 0062a81a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a81c: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062a822: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a823: jb 0x62a837 */ if (fC) goto L_0062a837;
L_0062a825:; BB(0x0062a825);
    /* 0062a825: fld dword ptr [0x9323d0] */ FPUSH(R_F32((u32)(0x9323d0u)));
    /* 0062a82b: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 0062a835: jmp 0x62a7ec */ goto L_0062a7ec;
L_0062a837:; BB(0x0062a837);
    /* 0062a837: fld dword ptr [0x9323d0] */ FPUSH(R_F32((u32)(0x9323d0u)));
    /* 0062a83d: jmp 0x62a7ec */ goto L_0062a7ec;
}

void f_0062a840(void) /* sub_62A840 */
{
    FN_ENTER(0x0062a840);
    /* 0062a840: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a843: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a847: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a848: push 0x47e */ { u32 v = 0x47eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a84d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62a852u); f_00814298();
    /* 0062a852: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062a855: ret  */ FN_RET(0x0062a840); r_esp += 4; return;
}

void f_0062a858(void) /* sub_62A858 */
{
    FN_ENTER(0x0062a858);
    /* 0062a858: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062a859: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a85a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062a85c: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a862: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a868: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062a86b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062a86d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62a870u); call_ind(t); }
    /* 0062a870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a872: je 0x62a953 */ if (fZ) goto L_0062a953;
L_0062a878:; BB(0x0062a878);
    /* 0062a878: mov eax, dword ptr [0xa8ee14] */ r_eax = R32((u32)(0xa8ee14u));
    /* 0062a87d: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0062a883: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0062a886: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62a88bu); f_00829cc8();
    /* 0062a88b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a890u); f_0082d7b0();
    /* 0062a890: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062a893: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a898u); f_0082d838();
    /* 0062a898: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0062a89b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062a89d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62a8a2u); f_0082d8bc();
    /* 0062a8a2: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 0062a8a5: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a8a8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a8adu); f_0082d838();
    /* 0062a8ad: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a8b0: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a8b5u); f_008321d8();
    /* 0062a8b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a8b6: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062a8bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a8bf: je 0x62a8e0 */ if (fZ) goto L_0062a8e0;
L_0062a8c1:; BB(0x0062a8c1);
    /* 0062a8c1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062a8c6: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062a8cb: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062a8ce: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 0062a8d4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062a8d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a8da: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62a8dfu); f_0082d710();
    /* 0062a8df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0062a8e0:; BB(0x0062a8e0);
    /* 0062a8e0: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062a8e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a8e8u); f_0082d7b0();
    /* 0062a8e8: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 0062a8eb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a8f0u); f_0082d838();
    /* 0062a8f0: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a8f3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a8f8u); f_0082d838();
    /* 0062a8f8: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a8fb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a900u); f_008321d8();
    /* 0062a900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a901: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062a904: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a909u); f_0082d7b0();
    /* 0062a909: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a90c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a911u); f_0082d838();
    /* 0062a911: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62a916u); f_0082dbac();
    /* 0062a916: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a919: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a91eu); f_008321d8();
    /* 0062a91e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a91f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62a924u); f_0082dab0();
    /* 0062a924: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a929u); f_0082da80();
    /* 0062a929: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a92eu); f_0082da80();
    /* 0062a92e: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062a934: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a937: je 0x62a94e */ if (fZ) goto L_0062a94e;
L_0062a939:; BB(0x0062a939);
    /* 0062a939: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a93e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62a943u); f_0082d710();
    /* 0062a943: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a944: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062a949: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062a94e:; BB(0x0062a94e);
    /* 0062a94e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a953u); f_0082da80();
L_0062a953:; BB(0x0062a953);
    /* 0062a953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a954: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a955: ret  */ FN_RET(0x0062a858); r_esp += 4; return;
}

void f_0062a8de(void)
{
    FN_ENTER(0x0062a8de);
    /* 0062a8de: add byte ptr [ecx - 0x75], bl */ { u32 ad = (u32)(r_ecx+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fC = (r < a); }
    /* 0062a8e1: jbe 0x62a90f */ if ((fC||fZ)) goto L_0062a90f;
L_0062a8e3:; BB(0x0062a8e3);
    /* 0062a8e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a8e8u); f_0082d7b0();
    /* 0062a8e8: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 0062a8eb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a8f0u); f_0082d838();
    /* 0062a8f0: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a8f3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a8f8u); f_0082d838();
    /* 0062a8f8: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a8fb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a900u); f_008321d8();
    /* 0062a900: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a901: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062a904: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62a909u); f_0082d7b0();
    /* 0062a909: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062a90c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62a911u); f_0082d838();
L_0062a90f:; BB(0x0062a90f);
    /* 0062a90f: and byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0062a911: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62a916u); f_0082dbac();
    /* 0062a916: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a919: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62a91eu); f_008321d8();
    /* 0062a91e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a91f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62a924u); f_0082dab0();
    /* 0062a924: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a929u); f_0082da80();
    /* 0062a929: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a92eu); f_0082da80();
    /* 0062a92e: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062a934: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a937: je 0x62a94e */ if (fZ) goto L_0062a94e;
L_0062a939:; BB(0x0062a939);
    /* 0062a939: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a93e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62a943u); f_0082d710();
    /* 0062a943: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a944: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062a949: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062a94e:; BB(0x0062a94e);
    /* 0062a94e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62a953u); f_0082da80();
    /* 0062a953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a954: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062a955: ret  */ FN_RET(0x0062a8de); r_esp += 4; return;
}

void f_0062a958(void) /* sub_62A958 */
{
    FN_ENTER(0x0062a958);
    /* 0062a958: mov eax, dword ptr [0xa8ee14] */ r_eax = R32((u32)(0xa8ee14u));
    /* 0062a95d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a95f: je 0x62a984 */ if (fZ) goto L_0062a984;
L_0062a961:; BB(0x0062a961);
    /* 0062a961: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a964: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62a969u); f_00800b5c();
    /* 0062a969: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a96a: mov eax, dword ptr [0xa8ee14] */ r_eax = R32((u32)(0xa8ee14u));
    /* 0062a96f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a971: je 0x62a984 */ if (fZ) goto L_0062a984;
L_0062a973:; BB(0x0062a973);
    /* 0062a973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a974: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x62a979u); f_00857e98();
    /* 0062a979: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a97a: mov dword ptr [0xa8ee14], 0 */ W32((u32)(0xa8ee14u), 0x0u);
L_0062a984:; BB(0x0062a984);
    /* 0062a984: mov ecx, dword ptr [0xa8ee18] */ r_ecx = R32((u32)(0xa8ee18u));
    /* 0062a98a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062a98c: je 0x62a9a1 */ if (fZ) goto L_0062a9a1;
L_0062a98e:; BB(0x0062a98e);
    /* 0062a98e: je 0x62a997 */ if (fZ) goto L_0062a997;
L_0062a990:; BB(0x0062a990);
    /* 0062a990: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a992: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62a997u); f_004066a8();
L_0062a997:; BB(0x0062a997);
    /* 0062a997: mov dword ptr [0xa8ee18], 0 */ W32((u32)(0xa8ee18u), 0x0u);
L_0062a9a1:; BB(0x0062a9a1);
    /* 0062a9a1: ret  */ FN_RET(0x0062a958); r_esp += 4; return;
}

void f_0062a9a4(void)
{
    FN_ENTER(0x0062a9a4);
    /* 0062a9a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a9a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9a9: push 0x8e3078 */ { u32 v = 0x8e3078u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a9b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062a9bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a9bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062a9c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062a9c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062a9c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062a9cb: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a9d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062a9d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62a9dcu); f_005caba4();
    /* 0062a9dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a9dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062a9e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a9e2: je 0x62aa1b */ if (fZ) goto L_0062aa1b;
L_0062a9e4:; BB(0x0062a9e4);
    /* 0062a9e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062a9eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a9f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a9f5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a9fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a9fe: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x62aa03u); f_0062aa20();
    /* 0062aa03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062aa06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062aa0d:; BB(0x0062aa0d);
    /* 0062aa0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062aa10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062aa17: mov esp, ebp */ r_esp = r_ebp;
    /* 0062aa19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aa1a: ret  */ FN_RET(0x0062a9a4); r_esp += 4; return;
L_0062aa1b:; BB(0x0062aa1b);
    /* 0062aa1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aa1d: jmp 0x62aa0d */ goto L_0062aa0d;
}

void f_0062aa20(void) /* sub_62AA20 */
{
    FN_ENTER(0x0062aa20);
    /* 0062aa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa21: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aa23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa25: push 0x8e3094 */ { u32 v = 0x8e3094u; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062aa30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062aa38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062aa3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062aa3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062aa41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062aa44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062aa47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062aa4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062aa4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062aa50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062aa53: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62aa58u); f_0062998c();
    /* 0062aa58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062aa5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062aa62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062aa65: mov dword ptr [ecx], 0xb29980 */ W32((u32)(r_ecx), 0xb29980u);
    /* 0062aa6b: mov eax, dword ptr [0x9c5e78] */ r_eax = R32((u32)(0x9c5e78u));
    /* 0062aa70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aa71: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062aa74: call dword ptr [0xb29994] */ { u32 t = R32((u32)(0xb29994u)); r_esp -= 4; W32(r_esp, 0x62aa7au); call_ind(t); }
    /* 0062aa7a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062aa7d: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62aa82u); f_0062974c();
    /* 0062aa82: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062aa85: mov edx, dword ptr [0xa8ee14] */ r_edx = R32((u32)(0xa8ee14u));
    /* 0062aa8b: mov ebx, dword ptr [0xa8ee18] */ r_ebx = R32((u32)(0xa8ee18u));
    /* 0062aa91: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062aa93: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0062aa96: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0062aa9c: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0062aa9f: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 0062aaa9: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 0062aaac: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0062aaaf: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0062aab2: mov dword ptr [eax + 0xcc], 0x41200000 */ W32((u32)(r_eax+0xccu), 0x41200000u);
    /* 0062aabc: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0062aac2: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0062aac8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aaca: jne 0x62aaeb */ if (!fZ) goto L_0062aaeb;
L_0062aacc:; BB(0x0062aacc);
    /* 0062aacc: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0062aad2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062aad5: je 0x62aae1 */ if (fZ) goto L_0062aae1;
L_0062aad7:; BB(0x0062aad7);
    /* 0062aad7: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0062aadd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aadf: jl 0x62ab4b */ if ((fS!=fO)) goto L_0062ab4b;
L_0062aae1:; BB(0x0062aae1);
    /* 0062aae1: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_0062aaeb:; BB(0x0062aaeb);
    /* 0062aaeb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062aaee: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062aaf1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062aaf4: mov dword ptr [eax + 0xe8], 0x3f800000 */ W32((u32)(r_eax+0xe8u), 0x3f800000u);
    /* 0062aafe: mov dword ptr [eax + 0xec], 0x3f800000 */ W32((u32)(r_eax+0xecu), 0x3f800000u);
    /* 0062ab08: mov dword ptr [eax + 0xf0], 0x3f800000 */ W32((u32)(r_eax+0xf0u), 0x3f800000u);
    /* 0062ab12: mov dword ptr [eax + 0xf4], 0x3f800000 */ W32((u32)(r_eax+0xf4u), 0x3f800000u);
    /* 0062ab1c: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0062ab26: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0062ab2d: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0062ab34: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0062ab3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ab45: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ab47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ab48: ret 8 */ FN_RET(0x0062aa20); r_esp += 12; return;
L_0062ab4b:; BB(0x0062ab4b);
    /* 0062ab4b: mov dword ptr [eax + 0xd0], 1 */ W32((u32)(r_eax+0xd0u), 0x1u);
    /* 0062ab55: jmp 0x62aaeb */ goto L_0062aaeb;
}

void f_0062aa7d(void)
{
    FN_ENTER(0x0062aa7d);
    /* 0062aa7d: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62aa82u); f_0062974c();
    /* 0062aa82: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062aa85: mov edx, dword ptr [0xa8ee14] */ r_edx = R32((u32)(0xa8ee14u));
    /* 0062aa8b: mov ebx, dword ptr [0xa8ee18] */ r_ebx = R32((u32)(0xa8ee18u));
    /* 0062aa91: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062aa93: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0062aa96: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0062aa9c: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0062aa9f: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 0062aaa9: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 0062aaac: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0062aaaf: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0062aab2: mov dword ptr [eax + 0xcc], 0x41200000 */ W32((u32)(r_eax+0xccu), 0x41200000u);
    /* 0062aabc: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0062aac2: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0062aac8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aaca: jne 0x62aaeb */ if (!fZ) goto L_0062aaeb;
L_0062aacc:; BB(0x0062aacc);
    /* 0062aacc: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0062aad2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062aad5: je 0x62aae1 */ if (fZ) goto L_0062aae1;
L_0062aad7:; BB(0x0062aad7);
    /* 0062aad7: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0062aadd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aadf: jl 0x62ab4b */ if ((fS!=fO)) goto L_0062ab4b;
L_0062aae1:; BB(0x0062aae1);
    /* 0062aae1: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_0062aaeb:; BB(0x0062aaeb);
    /* 0062aaeb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062aaee: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062aaf1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062aaf4: mov dword ptr [eax + 0xe8], 0x3f800000 */ W32((u32)(r_eax+0xe8u), 0x3f800000u);
    /* 0062aafe: mov dword ptr [eax + 0xec], 0x3f800000 */ W32((u32)(r_eax+0xecu), 0x3f800000u);
    /* 0062ab08: mov dword ptr [eax + 0xf0], 0x3f800000 */ W32((u32)(r_eax+0xf0u), 0x3f800000u);
    /* 0062ab12: mov dword ptr [eax + 0xf4], 0x3f800000 */ W32((u32)(r_eax+0xf4u), 0x3f800000u);
    /* 0062ab1c: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0062ab26: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0062ab2d: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0062ab34: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0062ab3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ab3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ab45: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ab47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ab48: ret 8 */ FN_RET(0x0062aa7d); r_esp += 12; return;
L_0062ab4b:; BB(0x0062ab4b);
    /* 0062ab4b: mov dword ptr [eax + 0xd0], 1 */ W32((u32)(r_eax+0xd0u), 0x1u);
    /* 0062ab55: jmp 0x62aaeb */ goto L_0062aaeb;
}

void f_0062ab58(void) /* sub_62AB58 */
{
    FN_ENTER(0x0062ab58);
    /* 0062ab58: mov dword ptr [0xa8ee10], 0xbcbf258c */ W32((u32)(0xa8ee10u), 0xbcbf258cu);
    /* 0062ab62: ret  */ FN_RET(0x0062ab58); r_esp += 4; return;
}

void f_0062ab64(void) /* sub_62AB64 */
{
    FN_ENTER(0x0062ab64);
    /* 0062ab64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab65: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ab67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab69: push 0x8e30bc */ { u32 v = 0x8e30bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062ab74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062ab7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ab7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062ab82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062ab85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062ab88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062ab8b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ab90: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062ab97: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62ab9cu); f_008581c5();
    /* 0062ab9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ab9d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062aba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aba2: je 0x62ac20 */ if (fZ) goto L_0062ac20;
L_0062aba4:; BB(0x0062aba4);
    /* 0062aba4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062abab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062abb2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062abb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062abb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062abb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062abb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062abba: push 0x9c5e68 */ { u32 v = 0x9c5e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0062abbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062abc1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62abc6u); f_005b7a84();
    /* 0062abc6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062abc9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062abd0:; BB(0x0062abd0);
    /* 0062abd0: mov dword ptr [0xa8ee18], eax */ W32((u32)(0xa8ee18u), r_eax);
    /* 0062abd5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062abdc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062abde: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62abe3u); f_008581c5();
    /* 0062abe3: mov edx, dword ptr [0xa8ee18] */ r_edx = R32((u32)(0xa8ee18u));
    /* 0062abe9: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062abef: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0062abf2: mov dword ptr [0xa8ee14], eax */ W32((u32)(0xa8ee14u), r_eax);
    /* 0062abf7: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0062abf9: push 0x93240c */ { u32 v = 0x93240cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062abfe: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62ac03u); f_008009dc();
    /* 0062ac03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ac06: mov edx, dword ptr [0xa8ee14] */ r_edx = R32((u32)(0xa8ee14u));
    /* 0062ac0c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062ac0f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062ac12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ac15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ac1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ac1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ac1f: ret  */ FN_RET(0x0062ab64); r_esp += 4; return;
L_0062ac20:; BB(0x0062ac20);
    /* 0062ac20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ac22: jmp 0x62abd0 */ goto L_0062abd0;
}

void f_0062ac24(void) /* sub_62AC24 */
{
    FN_ENTER(0x0062ac24);
    /* 0062ac24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062ac27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062ac29: call 0x62ac48 */ r_esp -= 4; W32(r_esp, 0x62ac2eu); f_0062ac48();
    /* 0062ac2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062ac32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ac34: jne 0x62ac3a */ if (!fZ) goto L_0062ac3a;
L_0062ac36:; BB(0x0062ac36);
    /* 0062ac36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ac37: ret 4 */ FN_RET(0x0062ac24); r_esp += 8; return;
L_0062ac3a:; BB(0x0062ac3a);
    /* 0062ac3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62ac40u); f_005c2f74();
    /* 0062ac40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ac41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ac42: ret 4 */ FN_RET(0x0062ac24); r_esp += 8; return;
}

void f_0062ac48(void) /* sub_62AC48 */
{
    FN_ENTER(0x0062ac48);
    /* 0062ac48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac49: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ac4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac4d: push 0x8e30d8 */ { u32 v = 0x8e30d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062ac58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ac59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062ac60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ac63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062ac66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062ac69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062ac6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062ac6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062ac72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062ac75: mov dword ptr [ecx], 0xb29ac0 */ W32((u32)(r_ecx), 0xb29ac0u);
    /* 0062ac7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062ac82: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x62ac87u); f_006296c8();
    /* 0062ac87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ac8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ac91: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ac93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ac94: ret  */ FN_RET(0x0062ac48); r_esp += 4; return;
}

void f_0062ac98(void) /* sub_62AC98 */
{
    FN_ENTER(0x0062ac98);
    /* 0062ac98: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062ac9b: fcom dword ptr [0x9324a8] */ fx_compare(ST(0), R_F32((u32)(0x9324a8u))); 
    /* 0062aca1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062aca3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062aca4: jbe 0x62acb1 */ if ((fC||fZ)) goto L_0062acb1;
L_0062aca6:; BB(0x0062aca6);
    /* 0062aca6: fld dword ptr [0xa8ee24] */ FPUSH(R_F32((u32)(0xa8ee24u)));
    /* 0062acac: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0062acae: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
L_0062acb1:; BB(0x0062acb1);
    /* 0062acb1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062acb3: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 0062acb9: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062acbe: jge 0x62accb */ if ((fS==fO)) goto L_0062accb;
L_0062acc0:; BB(0x0062acc0);
    /* 0062acc0: add eax, 0x333 */ {  u32 a = r_eax; u32 b = 0x333u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062acc5: mov dword ptr [ecx + 0xfc], eax */ W32((u32)(r_ecx+0xfcu), r_eax);
L_0062accb:; BB(0x0062accb);
    /* 0062accb: ret  */ FN_RET(0x0062ac98); r_esp += 4; return;
}

void f_0062accc(void) /* sub_62ACCC */
{
    FN_ENTER(0x0062accc);
    /* 0062accc: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 0062acd2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062acd5: je 0x62ad31 */ if (fZ) goto L_0062ad31;
L_0062acd7:; BB(0x0062acd7);
    /* 0062acd7: fld dword ptr [0x9324a4] */ FPUSH(R_F32((u32)(0x9324a4u)));
    /* 0062acdd: fld dword ptr [ecx + 0xec] */ FPUSH(R_F32((u32)(r_ecx+0xecu)));
    /* 0062ace3: fsub dword ptr [0x93249c] */ ST(0) = ST(0) - R_F32((u32)(0x93249cu));
    /* 0062ace9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062aceb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062aced: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062acf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062acf4: ja 0x62ad00 */ if ((!fC&&!fZ)) goto L_0062ad00;
L_0062acf6:; BB(0x0062acf6);
    /* 0062acf6: mov dword ptr [ecx + 0xf8], 1 */ W32((u32)(r_ecx+0xf8u), 0x1u);
L_0062ad00:; BB(0x0062ad00);
    /* 0062ad00: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0062ad03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062ad05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062ad07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062ad09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062ad0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062ad0c: jae 0x62ad19 */ if (!fC) goto L_0062ad19;
L_0062ad0e:; BB(0x0062ad0e);
    /* 0062ad0e: fld dword ptr [0xa8ee24] */ FPUSH(R_F32((u32)(0xa8ee24u)));
    /* 0062ad14: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0062ad16: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
L_0062ad19:; BB(0x0062ad19);
    /* 0062ad19: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062ad1b: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 0062ad21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ad23: jle 0x62ad30 */ if ((fZ||fS!=fO)) goto L_0062ad30;
L_0062ad25:; BB(0x0062ad25);
    /* 0062ad25: add eax, 0xfffffccd */ {  u32 a = r_eax; u32 b = 0xfffffccdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ad2a: mov dword ptr [ecx + 0xfc], eax */ W32((u32)(r_ecx+0xfcu), r_eax);
L_0062ad30:; BB(0x0062ad30);
    /* 0062ad30: ret  */ FN_RET(0x0062accc); r_esp += 4; return;
L_0062ad31:; BB(0x0062ad31);
    /* 0062ad31: fld dword ptr [0x93249c] */ FPUSH(R_F32((u32)(0x93249cu)));
    /* 0062ad37: fadd dword ptr [ecx + 0xec] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xecu));
    /* 0062ad3d: fcom dword ptr [0x9324a0] */ fx_compare(ST(0), R_F32((u32)(0x9324a0u))); 
    /* 0062ad43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062ad45: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0062ad4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062ad4c: jb 0x62ad60 */ if (fC) goto L_0062ad60;
L_0062ad4e:; BB(0x0062ad4e);
    /* 0062ad4e: fld dword ptr [0x9324a4] */ FPUSH(R_F32((u32)(0x9324a4u)));
    /* 0062ad54: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 0062ad5e: jmp 0x62ad00 */ goto L_0062ad00;
L_0062ad60:; BB(0x0062ad60);
    /* 0062ad60: fld dword ptr [0x9324a4] */ FPUSH(R_F32((u32)(0x9324a4u)));
    /* 0062ad66: jmp 0x62ad00 */ goto L_0062ad00;
}

void f_0062ad68(void) /* sub_62AD68 */
{
    FN_ENTER(0x0062ad68);
    /* 0062ad68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062ad6b: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x62ad70u); f_00807e68();
    /* 0062ad70: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ad73: jne 0x62ad81 */ if (!fZ) goto L_0062ad81;
L_0062ad75:; BB(0x0062ad75);
    /* 0062ad75: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0062ad7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062ad7d: jne 0x62ad81 */ if (!fZ) goto L_0062ad81;
L_0062ad7f:; BB(0x0062ad7f);
    /* 0062ad7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ad80: ret  */ FN_RET(0x0062ad68); r_esp += 4; return;
L_0062ad81:; BB(0x0062ad81);
    /* 0062ad81: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062ad84: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062ad86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad89: push dword ptr [eax*4 + 0x932440] */ { u32 v = R32((u32)(r_eax*4+0x932440u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ad90: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x62ad95u); f_00814298();
    /* 0062ad95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ad98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ad99: ret  */ FN_RET(0x0062ad68); r_esp += 4; return;
}

void f_0062ad9c(void) /* sub_62AD9C */
{
    FN_ENTER(0x0062ad9c);
    /* 0062ad9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ad9e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062ada0: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ada6: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062adac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062adaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062adb1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x62adb4u); call_ind(t); }
    /* 0062adb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062adb6: je 0x62aeb4 */ if (fZ) goto L_0062aeb4;
L_0062adbc:; BB(0x0062adbc);
    /* 0062adbc: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 0062adc1: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0062adc7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0062adca: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62adcfu); f_00829cc8();
    /* 0062adcf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62add4u); f_0082d7b0();
    /* 0062add4: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062add7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62addcu); f_0082d838();
    /* 0062addc: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0062addf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ade1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62ade6u); f_0082d8bc();
    /* 0062ade6: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 0062ade9: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062adec: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62adf1u); f_0082d838();
    /* 0062adf1: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062adf4: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62adf9u); f_008321d8();
    /* 0062adf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062adfa: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062ae00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae03: je 0x62ae24 */ if (fZ) goto L_0062ae24;
L_0062ae05:; BB(0x0062ae05);
    /* 0062ae05: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0062ae0a: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0062ae0f: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062ae12: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 0062ae18: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0062ae1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae1e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62ae23u); f_0082d710();
    /* 0062ae23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0062ae24:; BB(0x0062ae24);
    /* 0062ae24: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62ae29u); f_0082dbac();
    /* 0062ae29: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062ae2c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62ae31u); f_0082d7b0();
    /* 0062ae31: mov eax, dword ptr [0xa8ee30] */ r_eax = R32((u32)(0xa8ee30u));
    /* 0062ae36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae38: jne 0x62ae44 */ if (!fZ) goto L_0062ae44;
L_0062ae3a:; BB(0x0062ae3a);
    /* 0062ae3a: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 0062ae3d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62ae42u); f_0082d838();
    /* 0062ae42: jmp 0x62ae56 */ goto L_0062ae56;
L_0062ae44:; BB(0x0062ae44);
    /* 0062ae44: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae47: jne 0x62ae56 */ if (!fZ) goto L_0062ae56;
L_0062ae49:; BB(0x0062ae49);
    /* 0062ae49: mov edx, dword ptr [ebp + 0xfc] */ r_edx = R32((u32)(r_ebp+0xfcu));
    /* 0062ae4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ae51: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62ae56u); f_0082d8bc();
L_0062ae56:; BB(0x0062ae56);
    /* 0062ae56: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062ae59: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62ae5eu); f_0082d838();
    /* 0062ae5e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ae61: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62ae66u); f_008321d8();
    /* 0062ae66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ae67: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0062ae6a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62ae6fu); f_0082d7b0();
    /* 0062ae6f: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 0062ae72: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62ae77u); f_0082d838();
    /* 0062ae77: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062ae7a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x62ae7fu); f_008321d8();
    /* 0062ae7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062ae80: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62ae85u); f_0082da80();
    /* 0062ae85: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62ae8au); f_0082da80();
    /* 0062ae8a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x62ae8fu); f_0082dab0();
    /* 0062ae8f: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0062ae95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ae98: je 0x62aeaf */ if (fZ) goto L_0062aeaf;
L_0062ae9a:; BB(0x0062ae9a);
    /* 0062ae9a: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ae9f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x62aea4u); f_0082d710();
    /* 0062aea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062aea5: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0062aeaa: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0062aeaf:; BB(0x0062aeaf);
    /* 0062aeaf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62aeb4u); f_0082da80();
L_0062aeb4:; BB(0x0062aeb4);
    /* 0062aeb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aeb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062aeb6: ret  */ FN_RET(0x0062ad9c); r_esp += 4; return;
}

void f_0062aeb8(void) /* sub_62AEB8 */
{
    FN_ENTER(0x0062aeb8);
    /* 0062aeb8: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 0062aebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aebf: je 0x62aee3 */ if (fZ) goto L_0062aee3;
L_0062aec1:; BB(0x0062aec1);
    /* 0062aec1: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0062aec3: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62aec8u); f_00800b5c();
    /* 0062aec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062aec9: mov eax, dword ptr [0xa8ee28] */ r_eax = R32((u32)(0xa8ee28u));
    /* 0062aece: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062aed0: je 0x62aee3 */ if (fZ) goto L_0062aee3;
L_0062aed2:; BB(0x0062aed2);
    /* 0062aed2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062aed3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x62aed8u); f_00857e98();
    /* 0062aed8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062aed9: mov dword ptr [0xa8ee28], 0 */ W32((u32)(0xa8ee28u), 0x0u);
L_0062aee3:; BB(0x0062aee3);
    /* 0062aee3: mov ecx, dword ptr [0xa8ee2c] */ r_ecx = R32((u32)(0xa8ee2cu));
    /* 0062aee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062aeeb: je 0x62af00 */ if (fZ) goto L_0062af00;
L_0062aeed:; BB(0x0062aeed);
    /* 0062aeed: je 0x62aef6 */ if (fZ) goto L_0062aef6;
L_0062aeef:; BB(0x0062aeef);
    /* 0062aeef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062aef1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62aef6u); f_004066a8();
L_0062aef6:; BB(0x0062aef6);
    /* 0062aef6: mov dword ptr [0xa8ee2c], 0 */ W32((u32)(0xa8ee2cu), 0x0u);
L_0062af00:; BB(0x0062af00);
    /* 0062af00: ret  */ FN_RET(0x0062aeb8); r_esp += 4; return;
}

void f_0062af04(void)
{
    FN_ENTER(0x0062af04);
    /* 0062af04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062af05: mov ebp, esp */ r_ebp = r_esp;
    /* 0062af07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062af09: push 0x8e3100 */ { u32 v = 0x8e3100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062af0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062af14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062af15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062af1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062af1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062af22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062af25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062af28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062af2b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0062af30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062af37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62af3cu); f_005caba4();
    /* 0062af3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062af3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062af40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062af42: je 0x62af7b */ if (fZ) goto L_0062af7b;
L_0062af44:; BB(0x0062af44);
    /* 0062af44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0062af4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062af52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062af55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062af5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062af5e: call 0x62af80 */ r_esp -= 4; W32(r_esp, 0x62af63u); f_0062af80();
    /* 0062af63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062af66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062af6d:; BB(0x0062af6d);
    /* 0062af6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062af70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062af77: mov esp, ebp */ r_esp = r_ebp;
    /* 0062af79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062af7a: ret  */ FN_RET(0x0062af04); r_esp += 4; return;
L_0062af7b:; BB(0x0062af7b);
    /* 0062af7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062af7d: jmp 0x62af6d */ goto L_0062af6d;
}

void f_0062af80(void) /* sub_62AF80 */
{
    FN_ENTER(0x0062af80);
    /* 0062af80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062af81: mov ebp, esp */ r_ebp = r_esp;
    /* 0062af83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062af85: push 0x8e311c */ { u32 v = 0x8e311cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062af8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062af90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062af91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062af98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062af9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062af9e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062afa1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062afa4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062afa7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062afaa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062afad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062afb0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062afb3: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x62afb8u); f_0062998c();
    /* 0062afb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062afbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062afc2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062afc5: mov dword ptr [ecx], 0xb29ac0 */ W32((u32)(r_ecx), 0xb29ac0u);
    /* 0062afcb: mov eax, dword ptr [0x9c5eac] */ r_eax = R32((u32)(0x9c5eacu));
    /* 0062afd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062afd1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062afd4: call dword ptr [0xb29ad4] */ { u32 t = R32((u32)(0xb29ad4u)); r_esp -= 4; W32(r_esp, 0x62afdau); call_ind(t); }
    /* 0062afda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062afdd: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62afe2u); f_0062974c();
    /* 0062afe2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062afe5: mov edx, dword ptr [0xa8ee28] */ r_edx = R32((u32)(0xa8ee28u));
    /* 0062afeb: mov ebx, dword ptr [0xa8ee2c] */ r_ebx = R32((u32)(0xa8ee2cu));
    /* 0062aff1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062aff3: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0062aff9: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0062affc: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0062b002: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0062b005: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 0062b008: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b00a: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 0062b014: mov dword ptr [eax + 0xc4], 0x41a00000 */ W32((u32)(r_eax+0xc4u), 0x41a00000u);
    /* 0062b01e: mov dword ptr [eax + 0xcc], 0x41200000 */ W32((u32)(r_eax+0xccu), 0x41200000u);
    /* 0062b028: jne 0x62b049 */ if (!fZ) goto L_0062b049;
L_0062b02a:; BB(0x0062b02a);
    /* 0062b02a: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0062b030: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b033: je 0x62b03f */ if (fZ) goto L_0062b03f;
L_0062b035:; BB(0x0062b035);
    /* 0062b035: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0062b03b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062b03d: jl 0x62b0ad */ if ((fS!=fO)) goto L_0062b0ad;
L_0062b03f:; BB(0x0062b03f);
    /* 0062b03f: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_0062b049:; BB(0x0062b049);
    /* 0062b049: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062b04c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062b04f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b052: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062b054: mov dword ptr [eax + 0xf8], edx */ W32((u32)(r_eax+0xf8u), r_edx);
    /* 0062b05a: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 0062b060: mov dword ptr [eax + 0xe8], 0x3f800000 */ W32((u32)(r_eax+0xe8u), 0x3f800000u);
    /* 0062b06a: mov dword ptr [eax + 0xec], 0x3f800000 */ W32((u32)(r_eax+0xecu), 0x3f800000u);
    /* 0062b074: mov dword ptr [eax + 0xf0], 0x3f800000 */ W32((u32)(r_eax+0xf0u), 0x3f800000u);
    /* 0062b07e: mov dword ptr [eax + 0xf4], 0x3f800000 */ W32((u32)(r_eax+0xf4u), 0x3f800000u);
    /* 0062b088: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 0062b08f: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 0062b096: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0062b09d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b0a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062b0a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b0aa: ret 8 */ FN_RET(0x0062af80); r_esp += 12; return;
L_0062b0ad:; BB(0x0062b0ad);
    /* 0062b0ad: mov dword ptr [eax + 0xd0], 1 */ W32((u32)(r_eax+0xd0u), 0x1u);
    /* 0062b0b7: jmp 0x62b049 */ goto L_0062b049;
}

