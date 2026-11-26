#include "protos.h"

void f_0042c080(void) /* sub_42C080 */
{
    FN_ENTER(0x0042c080);
    /* 0042c080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c081: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042c083: lea ecx, [ebp + 0x66c] */ r_ecx = (u32)(r_ebp+0x66cu);
    /* 0042c089: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c08eu); f_0042cdc0();
    /* 0042c08e: mov edx, dword ptr [ebp + 0x668] */ r_edx = R32((u32)(r_ebp+0x668u));
    /* 0042c094: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c097: jne 0x42c0f6 */ if (!fZ) goto L_0042c0f6;
L_0042c099:; BB(0x0042c099);
    /* 0042c099: fld dword ptr [0x8fd0fc] */ FPUSH(R_F32((u32)(0x8fd0fcu)));
    /* 0042c09f: fld dword ptr [ebp + 0x69c] */ FPUSH(R_F32((u32)(r_ebp+0x69cu)));
    /* 0042c0a5: fsub dword ptr [0x8fd100] */ ST(0) = ST(0) - R_F32((u32)(0x8fd100u));
    /* 0042c0ab: fld dword ptr [ebp + 0x6a4] */ FPUSH(R_F32((u32)(r_ebp+0x6a4u)));
    /* 0042c0b1: fld dword ptr [ebp + 0x684] */ FPUSH(R_F32((u32)(r_ebp+0x684u)));
    /* 0042c0b7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042c0b9: fchs  */ ST(0) = -ST(0);
    /* 0042c0bb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0042c0bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c0bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c0c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042c0c2: fcomp dword ptr [0x8fd0f8] */ fx_compare(ST(0), R_F32((u32)(0x8fd0f8u))); FPOP();
    /* 0042c0c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c0ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c0cc: ja 0x42c0d0 */ if ((!fC&&!fZ)) goto L_0042c0d0;
L_0042c0ce:; BB(0x0042c0ce);
    /* 0042c0ce: fst st(2) */ ST(2) = ST(0);
L_0042c0d0:; BB(0x0042c0d0);
    /* 0042c0d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c0d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c0d4: fst dword ptr [ebp + 0x69c] */ W_F32((u32)(r_ebp+0x69cu), ST(0));
    /* 0042c0da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042c0dc: fstp dword ptr [ebp + 0x6a4] */ W_F32((u32)(r_ebp+0x6a4u), ST(0)); FPOP();
    /* 0042c0e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c0e3: jbe 0x42c111 */ if ((fC||fZ)) goto L_0042c111;
L_0042c0e5:; BB(0x0042c0e5);
    /* 0042c0e5: mov dword ptr [ebp + 0x668], 3 */ W32((u32)(r_ebp+0x668u), 0x3u);
    /* 0042c0ef: mov edx, 3 */ r_edx = 0x3u;
    /* 0042c0f4: jmp 0x42c111 */ goto L_0042c111;
L_0042c0f6:; BB(0x0042c0f6);
    /* 0042c0f6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c0f9: jne 0x42c111 */ if (!fZ) goto L_0042c111;
L_0042c0fb:; BB(0x0042c0fb);
    /* 0042c0fb: lea ecx, [ebp + 0x68c] */ r_ecx = (u32)(r_ebp+0x68cu);
    /* 0042c101: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c106u); f_0042cdc0();
    /* 0042c106: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c109: je 0x42c141 */ if (fZ) goto L_0042c141;
L_0042c10b:; BB(0x0042c10b);
    /* 0042c10b: mov edx, dword ptr [ebp + 0x668] */ r_edx = R32((u32)(r_ebp+0x668u));
L_0042c111:; BB(0x0042c111);
    /* 0042c111: fld dword ptr [0x8fd10c] */ FPUSH(R_F32((u32)(0x8fd10cu)));
    /* 0042c117: fadd dword ptr [ebp + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc8u));
    /* 0042c11d: fld dword ptr [0x8fd114] */ FPUSH(R_F32((u32)(0x8fd114u)));
    /* 0042c123: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042c125: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c127: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c128: ja 0x42c12c */ if ((!fC&&!fZ)) goto L_0042c12c;
L_0042c12a:; BB(0x0042c12a);
    /* 0042c12a: fst st(1) */ ST(1) = ST(0);
L_0042c12c:; BB(0x0042c12c);
    /* 0042c12c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c12e: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0042c134: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042c137: mov eax, 0 */ r_eax = 0x0u;
    /* 0042c13c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042c13f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c140: ret  */ FN_RET(0x0042c080); r_esp += 4; return;
L_0042c141:; BB(0x0042c141);
    /* 0042c141: mov dword ptr [ebp + 0x668], 4 */ W32((u32)(r_ebp+0x668u), 0x4u);
    /* 0042c14b: mov edx, 4 */ r_edx = 0x4u;
    /* 0042c150: jmp 0x42c111 */ goto L_0042c111;
}

void f_0042c154(void) /* sub_42C154 */
{
    FN_ENTER(0x0042c154);
    /* 0042c154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c155: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0042c159: mov dword ptr [ecx + 0x6ac], 0 */ W32((u32)(r_ecx+0x6acu), 0x0u);
    /* 0042c163: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0042c166: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c168: mov edi, dword ptr [eax + edx*8 + 0xa43ba8] */ r_edi = R32((u32)(r_eax+r_edx*8+0xa43ba8u));
    /* 0042c16f: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 0042c176: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 0042c179: mov edi, dword ptr [eax + edx*8 + 0xa43bac] */ r_edi = R32((u32)(r_eax+r_edx*8+0xa43bacu));
    /* 0042c180: mov eax, dword ptr [eax + edx*8 + 0xa43bb0] */ r_eax = R32((u32)(r_eax+r_edx*8+0xa43bb0u));
    /* 0042c187: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 0042c18a: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0042c18d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c18e: ret 4 */ FN_RET(0x0042c154); r_esp += 8; return;
}

void f_0042c194(void) /* sub_42C194 */
{
    FN_ENTER(0x0042c194);
    /* 0042c194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c196: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c197: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c19a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042c19c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0042c1a0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1a3: je 0x42cc94 */ if (fZ) goto L_0042cc94;
L_0042c1a9:; BB(0x0042c1a9);
    /* 0042c1a9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1ac: je 0x42cc3e */ if (fZ) goto L_0042cc3e;
L_0042c1b2:; BB(0x0042c1b2);
    /* 0042c1b2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1b5: je 0x42cab4 */ if (fZ) goto L_0042cab4;
L_0042c1bb:; BB(0x0042c1bb);
    /* 0042c1bb: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1be: je 0x42c7ce */ if (fZ) goto L_0042c7ce;
L_0042c1c4:; BB(0x0042c1c4);
    /* 0042c1c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1c6: je 0x42c1fe */ if (fZ) goto L_0042c1fe;
L_0042c1c8:; BB(0x0042c1c8);
    /* 0042c1c8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1cb: je 0x42c7ce */ if (fZ) goto L_0042c7ce;
L_0042c1d1:; BB(0x0042c1d1);
    /* 0042c1d1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c1d4: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c1da:; BB(0x0042c1da);
    /* 0042c1da: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042c1e0: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0042c1e6: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 0042c1ec: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0042c1ef: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0042c1f5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c1f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c1f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c1fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c1fb: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c1fe:; BB(0x0042c1fe);
    /* 0042c1fe: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042c204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c206: jne 0x42c230 */ if (!fZ) goto L_0042c230;
L_0042c208:; BB(0x0042c208);
    /* 0042c208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c20a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42c20fu); f_007aa094();
    /* 0042c20f: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0042c215: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042c217: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c21d:; BB(0x0042c21d);
    /* 0042c21d: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 0042c227: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c22a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c22b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c22c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c22d: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c230:; BB(0x0042c230);
    /* 0042c230: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c233: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c239:; BB(0x0042c239);
    /* 0042c239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c23b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42c240u); f_007aa094();
    /* 0042c240: mov eax, dword ptr [ebx + 0x6f0] */ r_eax = R32((u32)(r_ebx+0x6f0u));
    /* 0042c246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c248: je 0x42ca3a */ if (fZ) goto L_0042ca3a;
L_0042c24e:; BB(0x0042c24e);
    /* 0042c24e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c251: je 0x42c9bd */ if (fZ) goto L_0042c9bd;
L_0042c257:; BB(0x0042c257);
    /* 0042c257: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c25a: je 0x42c946 */ if (fZ) goto L_0042c946;
L_0042c260:; BB(0x0042c260);
    /* 0042c260: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c263: je 0x42c2da */ if (fZ) goto L_0042c2da;
L_0042c265:; BB(0x0042c265);
    /* 0042c265: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c268: jne 0x42c2ad */ if (!fZ) goto L_0042c2ad;
L_0042c26a:; BB(0x0042c26a);
    /* 0042c26a: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c270: fcomp dword ptr [0x8fd0a8] */ fx_compare(ST(0), R_F32((u32)(0x8fd0a8u))); FPOP();
    /* 0042c276: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c278: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c279: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042c27f:; BB(0x0042c27f);
    /* 0042c27f: fld dword ptr [ebx + 0x704] */ FPUSH(R_F32((u32)(r_ebx+0x704u)));
    /* 0042c285: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0042c288: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042c28a: fsubr dword ptr [0x8fd0a4] */ ST(0) = R_F32((u32)(0x8fd0a4u)) - ST(0);
    /* 0042c290: mov dword ptr [ebx + 0x6f0], 5 */ W32((u32)(r_ebx+0x6f0u), 0x5u);
    /* 0042c29a: fdiv dword ptr [0xa43c34] */ ST(0) = ST(0) / R_F32((u32)(0xa43c34u));
    /* 0042c2a0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042c2a2: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042c2a8: jmp 0x42c363 */ goto L_0042c363;
L_0042c2ad:; BB(0x0042c2ad);
    /* 0042c2ad: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c2b0: jne 0x42c363 */ if (!fZ) goto L_0042c363;
L_0042c2b6:; BB(0x0042c2b6);
    /* 0042c2b6: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c2bc: fcomp dword ptr [0x8fd0ac] */ fx_compare(ST(0), R_F32((u32)(0x8fd0acu))); FPOP();
    /* 0042c2c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c2c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c2c5: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042c2cb:; BB(0x0042c2cb);
    /* 0042c2cb: mov dword ptr [ebx + 0x6f0], 6 */ W32((u32)(r_ebx+0x6f0u), 0x6u);
    /* 0042c2d5: jmp 0x42c363 */ goto L_0042c363;
L_0042c2da:; BB(0x0042c2da);
    /* 0042c2da: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c2e0: fcomp dword ptr [0x8fd0a0] */ fx_compare(ST(0), R_F32((u32)(0x8fd0a0u))); FPOP();
    /* 0042c2e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c2e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c2e9: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042c2eb:; BB(0x0042c2eb);
    /* 0042c2eb: fld dword ptr [0x8fd0f0] */ FPUSH(R_F32((u32)(0x8fd0f0u)));
    /* 0042c2f1: fld dword ptr [0x8fd09c] */ FPUSH(R_F32((u32)(0x8fd09cu)));
    /* 0042c2f7: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 0042c2fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042c2fe: mov dword ptr [ebx + 0x6f0], 4 */ W32((u32)(r_ebx+0x6f0u), 0x4u);
    /* 0042c308: fdiv dword ptr [0xa43c38] */ ST(0) = ST(0) / R_F32((u32)(0xa43c38u));
    /* 0042c30e: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042c314: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042c31a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x42c31fu); f_0082e900();
    /* 0042c31f: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c322: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0042c326: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 0042c32c: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 0042c333: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 0042c33b: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 0042c343: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x42c348u); f_00434ac4();
    /* 0042c348: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c34e: fmul dword ptr [0x8fd0e0] */ ST(0) = ST(0) * R_F32((u32)(0x8fd0e0u));
    /* 0042c354: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0042c357: fstp dword ptr [ebx + 0x69c] */ W_F32((u32)(r_ebx+0x69cu), ST(0)); FPOP();
    /* 0042c35d: mov dword ptr [ebx + 0x710], eax */ W32((u32)(r_ebx+0x710u), r_eax);
L_0042c363:; BB(0x0042c363);
    /* 0042c363: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042c36a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c36d: je 0x42c3d1 */ if (fZ) goto L_0042c3d1;
L_0042c36f:; BB(0x0042c36f);
    /* 0042c36f: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c374: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c376: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42c37bu); f_007aaa30();
    /* 0042c37b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c37d: jne 0x42c3b9 */ if (!fZ) goto L_0042c3b9;
L_0042c37f:; BB(0x0042c37f);
    /* 0042c37f: push 0x42240000 */ { u32 v = 0x42240000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c384: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c386: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42c38bu); f_007aaa30();
    /* 0042c38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c38d: jne 0x42c3b9 */ if (!fZ) goto L_0042c3b9;
L_0042c38f:; BB(0x0042c38f);
    /* 0042c38f: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c394: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c396: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42c39bu); f_007aaa30();
    /* 0042c39b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c39d: je 0x42c3d1 */ if (fZ) goto L_0042c3d1;
L_0042c39f:; BB(0x0042c39f);
    /* 0042c39f: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 0042c3a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042c3a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3aa: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3af: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42c3b4u); f_00814298();
    /* 0042c3b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c3b7: jmp 0x42c3d1 */ goto L_0042c3d1;
L_0042c3b9:; BB(0x0042c3b9);
    /* 0042c3b9: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 0042c3bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042c3c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3c4: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3c9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42c3ceu); f_00814298();
    /* 0042c3ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042c3d1:; BB(0x0042c3d1);
    /* 0042c3d1: mov edx, dword ptr [ebx + 0x6f4] */ r_edx = R32((u32)(r_ebx+0x6f4u));
    /* 0042c3d7: mov esi, dword ptr [ebx + 0x6f0] */ r_esi = R32((u32)(r_ebx+0x6f0u));
    /* 0042c3dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042c3e0: mov dword ptr [ebx + 0x6f4], edx */ W32((u32)(r_ebx+0x6f4u), r_edx);
    /* 0042c3e6: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c3e9: je 0x42c6db */ if (fZ) goto L_0042c6db;
L_0042c3ef:; BB(0x0042c3ef);
    /* 0042c3ef: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c3f5: fcom dword ptr [0x8fd088] */ fx_compare(ST(0), R_F32((u32)(0x8fd088u))); 
    /* 0042c3fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c3fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c3fe: jb 0x42c62f */ if (fC) goto L_0042c62f;
L_0042c404:; BB(0x0042c404);
    /* 0042c404: fcom dword ptr [0x8fd084] */ fx_compare(ST(0), R_F32((u32)(0x8fd084u))); 
    /* 0042c40a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c40c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c40d: ja 0x42c62f */ if ((!fC&&!fZ)) goto L_0042c62f;
L_0042c413:; BB(0x0042c413);
    /* 0042c413: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c415: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c418: jl 0x42c6db */ if ((fS!=fO)) goto L_0042c6db;
L_0042c41e:; BB(0x0042c41e);
    /* 0042c41e: fld dword ptr [0x8fd0b8] */ FPUSH(R_F32((u32)(0x8fd0b8u)));
    /* 0042c424: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0042c427: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0042c42a: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0042c42d: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0042c430: fld dword ptr [ebx + 0x54c] */ FPUSH(R_F32((u32)(r_ebx+0x54cu)));
    /* 0042c436: mov edx, dword ptr [ebx + 0x54c] */ r_edx = R32((u32)(r_ebx+0x54cu));
    /* 0042c43c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c43e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c440: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c442: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c444: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c445: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 0042c44f: jb 0x42c887 */ if (fC) goto L_0042c887;
L_0042c455:; BB(0x0042c455);
    /* 0042c455: mov ecx, dword ptr [ebx + 0x548] */ r_ecx = R32((u32)(r_ebx+0x548u));
    /* 0042c45b: mov edi, dword ptr [ebx + 0x550] */ r_edi = R32((u32)(r_ebx+0x550u));
    /* 0042c461: fld dword ptr [ebx + 0x558] */ FPUSH(R_F32((u32)(r_ebx+0x558u)));
    /* 0042c467: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c469: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c46b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c46d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c46f: mov esi, dword ptr [ebx + 0x558] */ r_esi = R32((u32)(r_ebx+0x558u));
    /* 0042c475: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c476: jb 0x42c873 */ if (fC) goto L_0042c873;
L_0042c47c:; BB(0x0042c47c);
    /* 0042c47c: mov ecx, dword ptr [ebx + 0x554] */ r_ecx = R32((u32)(r_ebx+0x554u));
    /* 0042c482: mov edi, dword ptr [ebx + 0x55c] */ r_edi = R32((u32)(r_ebx+0x55cu));
    /* 0042c488: fld dword ptr [ebx + 0x564] */ FPUSH(R_F32((u32)(r_ebx+0x564u)));
    /* 0042c48e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c490: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c492: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c494: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c496: mov edx, dword ptr [ebx + 0x564] */ r_edx = R32((u32)(r_ebx+0x564u));
    /* 0042c49c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c49d: jb 0x42c85f */ if (fC) goto L_0042c85f;
L_0042c4a3:; BB(0x0042c4a3);
    /* 0042c4a3: mov ecx, dword ptr [ebx + 0x560] */ r_ecx = R32((u32)(r_ebx+0x560u));
    /* 0042c4a9: mov edi, dword ptr [ebx + 0x568] */ r_edi = R32((u32)(r_ebx+0x568u));
    /* 0042c4af: fld dword ptr [ebx + 0x570] */ FPUSH(R_F32((u32)(r_ebx+0x570u)));
    /* 0042c4b5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c4b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c4b9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c4bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c4bd: mov esi, dword ptr [ebx + 0x570] */ r_esi = R32((u32)(r_ebx+0x570u));
    /* 0042c4c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c4c4: jb 0x42c84b */ if (fC) goto L_0042c84b;
L_0042c4ca:; BB(0x0042c4ca);
    /* 0042c4ca: mov ecx, dword ptr [ebx + 0x56c] */ r_ecx = R32((u32)(r_ebx+0x56cu));
    /* 0042c4d0: mov edi, dword ptr [ebx + 0x574] */ r_edi = R32((u32)(r_ebx+0x574u));
    /* 0042c4d6: fld dword ptr [ebx + 0x57c] */ FPUSH(R_F32((u32)(r_ebx+0x57cu)));
    /* 0042c4dc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c4de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c4e0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c4e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c4e4: mov edx, dword ptr [ebx + 0x57c] */ r_edx = R32((u32)(r_ebx+0x57cu));
    /* 0042c4ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c4eb: jb 0x42c837 */ if (fC) goto L_0042c837;
L_0042c4f1:; BB(0x0042c4f1);
    /* 0042c4f1: mov ecx, dword ptr [ebx + 0x578] */ r_ecx = R32((u32)(r_ebx+0x578u));
    /* 0042c4f7: mov edi, dword ptr [ebx + 0x580] */ r_edi = R32((u32)(r_ebx+0x580u));
    /* 0042c4fd: fld dword ptr [ebx + 0x588] */ FPUSH(R_F32((u32)(r_ebx+0x588u)));
    /* 0042c503: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c507: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c509: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c50b: mov esi, dword ptr [ebx + 0x588] */ r_esi = R32((u32)(r_ebx+0x588u));
    /* 0042c511: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c512: jb 0x42c823 */ if (fC) goto L_0042c823;
L_0042c518:; BB(0x0042c518);
    /* 0042c518: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 0042c51e: mov edi, dword ptr [ebx + 0x58c] */ r_edi = R32((u32)(r_ebx+0x58cu));
    /* 0042c524: fld dword ptr [ebx + 0x594] */ FPUSH(R_F32((u32)(r_ebx+0x594u)));
    /* 0042c52a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c52c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c52e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c530: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c532: mov edx, dword ptr [ebx + 0x594] */ r_edx = R32((u32)(r_ebx+0x594u));
    /* 0042c538: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c539: jb 0x42c80f */ if (fC) goto L_0042c80f;
L_0042c53f:; BB(0x0042c53f);
    /* 0042c53f: mov ecx, dword ptr [ebx + 0x590] */ r_ecx = R32((u32)(r_ebx+0x590u));
    /* 0042c545: mov edi, dword ptr [ebx + 0x598] */ r_edi = R32((u32)(r_ebx+0x598u));
    /* 0042c54b: fld dword ptr [ebx + 0x5a0] */ FPUSH(R_F32((u32)(r_ebx+0x5a0u)));
    /* 0042c551: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c553: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c555: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c557: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c559: mov esi, dword ptr [ebx + 0x5a0] */ r_esi = R32((u32)(r_ebx+0x5a0u));
    /* 0042c55f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c560: jb 0x42c7fb */ if (fC) goto L_0042c7fb;
L_0042c566:; BB(0x0042c566);
    /* 0042c566: mov ecx, dword ptr [ebx + 0x59c] */ r_ecx = R32((u32)(r_ebx+0x59cu));
    /* 0042c56c: mov edi, dword ptr [ebx + 0x5a4] */ r_edi = R32((u32)(r_ebx+0x5a4u));
    /* 0042c572: fld dword ptr [ebx + 0x5ac] */ FPUSH(R_F32((u32)(r_ebx+0x5acu)));
    /* 0042c578: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042c57a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c57c: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042c57e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c580: mov edx, dword ptr [ebx + 0x5ac] */ r_edx = R32((u32)(r_ebx+0x5acu));
    /* 0042c586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c587: jb 0x42c7e7 */ if (fC) goto L_0042c7e7;
L_0042c58d:; BB(0x0042c58d);
    /* 0042c58d: mov ecx, dword ptr [ebx + 0x5a8] */ r_ecx = R32((u32)(r_ebx+0x5a8u));
    /* 0042c593: mov edi, dword ptr [ebx + 0x5b0] */ r_edi = R32((u32)(r_ebx+0x5b0u));
    /* 0042c599: fld dword ptr [ebx + 0x5b8] */ FPUSH(R_F32((u32)(r_ebx+0x5b8u)));
    /* 0042c59f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042c5a1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0042c5a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c5a5: mov esi, dword ptr [ebx + 0x5b8] */ r_esi = R32((u32)(r_ebx+0x5b8u));
    /* 0042c5ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c5ac: jb 0x42c7d7 */ if (fC) goto L_0042c7d7;
L_0042c5b2:; BB(0x0042c5b2);
    /* 0042c5b2: mov eax, dword ptr [ebx + 0x5b4] */ r_eax = R32((u32)(r_ebx+0x5b4u));
    /* 0042c5b8: mov edx, dword ptr [ebx + 0x5bc] */ r_edx = R32((u32)(r_ebx+0x5bcu));
    /* 0042c5be: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042c5c1: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042c5c5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_0042c5c9:; BB(0x0042c5c9);
    /* 0042c5c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c5cb: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42c5d0u); f_007751b0();
    /* 0042c5d0: fld dword ptr [0x8fd07c] */ FPUSH(R_F32((u32)(0x8fd07cu)));
    /* 0042c5d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042c5d8: fadd dword ptr [0x8fd080] */ ST(0) = ST(0) + R_F32((u32)(0x8fd080u));
    /* 0042c5de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c5e0: fchs  */ ST(0) = -ST(0);
    /* 0042c5e2: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042c5e8: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0042c5eb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042c5ee: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 0042c5f6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42c5fbu); f_00520bf4();
    /* 0042c5fb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0042c5ff: fadd dword ptr [0x8fd078] */ ST(0) = ST(0) + R_F32((u32)(0x8fd078u));
    /* 0042c605: fld dword ptr [0x8fd074] */ FPUSH(R_F32((u32)(0x8fd074u)));
    /* 0042c60b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042c60d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042c60f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0042c613: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042c616: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c61b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c61c: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42c621u); f_0043aaec();
    /* 0042c621: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c624: mov esi, dword ptr [ebx + 0x6f0] */ r_esi = R32((u32)(r_ebx+0x6f0u));
    /* 0042c62a: jmp 0x42c6db */ goto L_0042c6db;
L_0042c62f:; BB(0x0042c62f);
    /* 0042c62f: fcom dword ptr [0x8fd070] */ fx_compare(ST(0), R_F32((u32)(0x8fd070u))); 
    /* 0042c635: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c637: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c638: jb 0x42c6d9 */ if (fC) goto L_0042c6d9;
L_0042c63e:; BB(0x0042c63e);
    /* 0042c63e: fcomp dword ptr [0x8fd06c] */ fx_compare(ST(0), R_F32((u32)(0x8fd06cu))); FPOP();
    /* 0042c644: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c646: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c647: ja 0x42c6db */ if ((!fC&&!fZ)) goto L_0042c6db;
L_0042c64d:; BB(0x0042c64d);
    /* 0042c64d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c650: jl 0x42c6db */ if ((fS!=fO)) goto L_0042c6db;
L_0042c656:; BB(0x0042c656);
    /* 0042c656: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0042c659: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0042c65c: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0042c65f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c661: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 0042c66b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042c66f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0042c673: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0042c677: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42c67cu); f_007751b0();
    /* 0042c67c: fld dword ptr [0x8fd064] */ FPUSH(R_F32((u32)(0x8fd064u)));
    /* 0042c682: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042c684: fadd dword ptr [0x8fd068] */ ST(0) = ST(0) + R_F32((u32)(0x8fd068u));
    /* 0042c68a: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042c690: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0042c694: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 0042c69c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0042c6a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c6a2: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42c6a7u); f_00520bf4();
    /* 0042c6a7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0042c6ab: fadd dword ptr [0x8fd060] */ ST(0) = ST(0) + R_F32((u32)(0x8fd060u));
    /* 0042c6b1: fld dword ptr [0x8fd05c] */ FPUSH(R_F32((u32)(0x8fd05cu)));
    /* 0042c6b7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042c6b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042c6bb: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0042c6bf: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0042c6c3: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c6c9: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42c6ceu); f_0043aaec();
    /* 0042c6ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c6d1: mov esi, dword ptr [ebx + 0x6f0] */ r_esi = R32((u32)(r_ebx+0x6f0u));
    /* 0042c6d7: jmp 0x42c6db */ goto L_0042c6db;
L_0042c6d9:; BB(0x0042c6d9);
    /* 0042c6d9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0042c6db:; BB(0x0042c6db);
    /* 0042c6db: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c6dd: je 0x42c921 */ if (fZ) goto L_0042c921;
L_0042c6e3:; BB(0x0042c6e3);
    /* 0042c6e3: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c6e6: je 0x42c8fe */ if (fZ) goto L_0042c8fe;
L_0042c6ec:; BB(0x0042c6ec);
    /* 0042c6ec: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c6ef: je 0x42ca76 */ if (fZ) goto L_0042ca76;
L_0042c6f5:; BB(0x0042c6f5);
    /* 0042c6f5: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c6f8: je 0x42c89b */ if (fZ) goto L_0042c89b;
L_0042c6fe:; BB(0x0042c6fe);
    /* 0042c6fe: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c701: je 0x42c7a1 */ if (fZ) goto L_0042c7a1;
L_0042c707:; BB(0x0042c707);
    /* 0042c707: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c70a: jne 0x42c742 */ if (!fZ) goto L_0042c742;
L_0042c70c:; BB(0x0042c70c);
    /* 0042c70c: fld dword ptr [ebx + 0x714] */ FPUSH(R_F32((u32)(r_ebx+0x714u)));
    /* 0042c712: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042c715: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042c718: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c71a: call 0x42cd78 */ r_esp -= 4; W32(r_esp, 0x42c71fu); f_0042cd78();
    /* 0042c71f: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 0042c725: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c72au); f_0042cdc0();
    /* 0042c72a: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c730: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042c736: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c739: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c73c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c73d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c73e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c73f: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c742:; BB(0x0042c742);
    /* 0042c742: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c745: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c74b:; BB(0x0042c74b);
    /* 0042c74b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c74d: call 0x42cd78 */ r_esp -= 4; W32(r_esp, 0x42c752u); f_0042cd78();
    /* 0042c752: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 0042c758: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c75du); f_0042cdc0();
    /* 0042c75d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c760: jne 0x42c76c */ if (!fZ) goto L_0042c76c;
L_0042c762:; BB(0x0042c762);
    /* 0042c762: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
L_0042c76c:; BB(0x0042c76c);
    /* 0042c76c: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c772: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042c778: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042c77f: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c782: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c785: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c787:; BB(0x0042c787);
    /* 0042c787: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042c78d: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042c792: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042c798: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c79b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c79c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c79d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c79e: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c7a1:; BB(0x0042c7a1);
    /* 0042c7a1: fld dword ptr [ebx + 0x714] */ FPUSH(R_F32((u32)(r_ebx+0x714u)));
    /* 0042c7a7: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042c7aa: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042c7ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c7af: call 0x42cd78 */ r_esp -= 4; W32(r_esp, 0x42c7b4u); f_0042cd78();
    /* 0042c7b4: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 0042c7ba: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c7bfu); f_0042cdc0();
    /* 0042c7bf: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c7c5: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042c7cb: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c7d7:; BB(0x0042c7d7);
    /* 0042c7d7: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c7db: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042c7df: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c7e2: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c7e7:; BB(0x0042c7e7);
    /* 0042c7e7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c7e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c7eb: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c7ef: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042c7f3: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c7f6: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c7fb:; BB(0x0042c7fb);
    /* 0042c7fb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c7fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c7ff: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c803: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042c807: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c80a: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c80f:; BB(0x0042c80f);
    /* 0042c80f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c811: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c813: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c817: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042c81b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c81e: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c823:; BB(0x0042c823);
    /* 0042c823: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c825: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c827: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c82b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042c82f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c832: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c837:; BB(0x0042c837);
    /* 0042c837: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c839: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c83b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c83f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042c843: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c846: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c84b:; BB(0x0042c84b);
    /* 0042c84b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c84d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c84f: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c853: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042c857: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c85a: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c85f:; BB(0x0042c85f);
    /* 0042c85f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c861: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c863: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c867: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042c86b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c86e: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c873:; BB(0x0042c873);
    /* 0042c873: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c875: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c877: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0042c87b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042c87f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c882: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c887:; BB(0x0042c887);
    /* 0042c887: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042c889: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042c88b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042c88f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0042c893: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0042c896: jmp 0x42c5c9 */ goto L_0042c5c9;
L_0042c89b:; BB(0x0042c89b);
    /* 0042c89b: fld dword ptr [0x8fd058] */ FPUSH(R_F32((u32)(0x8fd058u)));
    /* 0042c8a1: fsub dword ptr [0xa43c48] */ ST(0) = ST(0) - R_F32((u32)(0xa43c48u));
    /* 0042c8a7: fsubr dword ptr [ebx + 0xc0] */ ST(0) = R_F32((u32)(r_ebx+0xc0u)) - ST(0);
    /* 0042c8ad: fld dword ptr [ebx + 0x714] */ FPUSH(R_F32((u32)(r_ebx+0x714u)));
    /* 0042c8b3: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042c8b6: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042c8bc: fadd dword ptr [ebx + 0x6ac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6acu));
    /* 0042c8c2: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042c8c8: fsub dword ptr [ebx + 0x70c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x70cu));
    /* 0042c8ce: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c8d4: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0042c8d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042c8d9: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042c8dc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042c8de: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0042c8e4: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 0042c8ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c8ec: fstp dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0)); FPOP();
    /* 0042c8f2: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c8f5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c8f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c8f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c8fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c8fb: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c8fe:; BB(0x0042c8fe);
    /* 0042c8fe: fld dword ptr [ebx + 0x714] */ FPUSH(R_F32((u32)(r_ebx+0x714u)));
    /* 0042c904: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042c907: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c90d: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0042c910: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c912: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042c915: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c918: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c91b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c91c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c91d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c91e: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c921:; BB(0x0042c921);
    /* 0042c921: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c927: fsub dword ptr [0x8fd054] */ ST(0) = ST(0) - R_F32((u32)(0x8fd054u));
    /* 0042c92d: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0042c930: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c932: fst dword ptr [ebx + 0x710] */ W_F32((u32)(r_ebx+0x710u), ST(0));
    /* 0042c938: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042c93a: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c93d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c940: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c941: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c942: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c943: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042c946:; BB(0x0042c946);
    /* 0042c946: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c94c: fcomp dword ptr [0x8fd098] */ fx_compare(ST(0), R_F32((u32)(0x8fd098u))); FPOP();
    /* 0042c952: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c954: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c955: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042c95b:; BB(0x0042c95b);
    /* 0042c95b: mov dword ptr [ebx + 0x6f0], 3 */ W32((u32)(r_ebx+0x6f0u), 0x3u);
    /* 0042c965: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c967: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x42c96cu); f_00422768();
    /* 0042c96c: fld dword ptr [0x8fd0d8] */ FPUSH(R_F32((u32)(0x8fd0d8u)));
    /* 0042c972: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042c978: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0042c97a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042c97c: fdiv dword ptr [0x8fd0dc] */ ST(0) = ST(0) / R_F32((u32)(0x8fd0dcu));
    /* 0042c982: fst dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0));
    /* 0042c988: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042c98a: fdiv dword ptr [0xa43c3c] */ ST(0) = ST(0) / R_F32((u32)(0xa43c3cu));
    /* 0042c990: fstp dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0)); FPOP();
    /* 0042c996: fld dword ptr [0x8fd0d4] */ FPUSH(R_F32((u32)(0x8fd0d4u)));
    /* 0042c99c: fdiv dword ptr [0xa43c3c] */ ST(0) = ST(0) / R_F32((u32)(0xa43c3cu));
    /* 0042c9a2: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042c9a8: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042c9ae: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 0042c9b8: jmp 0x42c363 */ goto L_0042c363;
L_0042c9bd:; BB(0x0042c9bd);
    /* 0042c9bd: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042c9c3: fcomp dword ptr [0x8fd094] */ fx_compare(ST(0), R_F32((u32)(0x8fd094u))); FPOP();
    /* 0042c9c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042c9cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042c9cc: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042c9d2:; BB(0x0042c9d2);
    /* 0042c9d2: fld dword ptr [0x8fd0d0] */ FPUSH(R_F32((u32)(0x8fd0d0u)));
    /* 0042c9d8: fld dword ptr [0x8fd0cc] */ FPUSH(R_F32((u32)(0x8fd0ccu)));
    /* 0042c9de: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c9e4: fchs  */ ST(0) = -ST(0);
    /* 0042c9e6: mov dword ptr [ebx + 0x6f0], 2 */ W32((u32)(r_ebx+0x6f0u), 0x2u);
    /* 0042c9f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042c9f2: fdiv dword ptr [0xa43c40] */ ST(0) = ST(0) / R_F32((u32)(0xa43c40u));
    /* 0042c9f8: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042c9fe: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042ca04: fld dword ptr [0xa43c3c] */ FPUSH(R_F32((u32)(0xa43c3cu)));
    /* 0042ca0a: fld dword ptr [0xa43c40] */ FPUSH(R_F32((u32)(0xa43c40u)));
    /* 0042ca10: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0042ca12: fld dword ptr [0xa43c40] */ FPUSH(R_F32((u32)(0xa43c40u)));
    /* 0042ca18: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0042ca1a: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0042ca1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042ca1e: fadd dword ptr [0x8fd090] */ ST(0) = ST(0) + R_F32((u32)(0x8fd090u));
    /* 0042ca24: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042ca26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042ca28: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042ca2a: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 0042ca2d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0042ca2f: fstp dword ptr [ebx + 0x718] */ W_F32((u32)(r_ebx+0x718u), ST(0)); FPOP();
    /* 0042ca35: jmp 0x42c363 */ goto L_0042c363;
L_0042ca3a:; BB(0x0042ca3a);
    /* 0042ca3a: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042ca40: fcomp dword ptr [0x8fd08c] */ fx_compare(ST(0), R_F32((u32)(0x8fd08cu))); FPOP();
    /* 0042ca46: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ca48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ca49: jb 0x42c363 */ if (fC) goto L_0042c363;
L_0042ca4f:; BB(0x0042ca4f);
    /* 0042ca4f: fld dword ptr [0x8fd0c8] */ FPUSH(R_F32((u32)(0x8fd0c8u)));
    /* 0042ca55: mov dword ptr [ebx + 0x6f0], 1 */ W32((u32)(r_ebx+0x6f0u), 0x1u);
    /* 0042ca5f: fdiv dword ptr [0xa43c44] */ ST(0) = ST(0) / R_F32((u32)(0xa43c44u));
    /* 0042ca65: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042ca6b: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042ca71: jmp 0x42c363 */ goto L_0042c363;
L_0042ca76:; BB(0x0042ca76);
    /* 0042ca76: fld dword ptr [ebx + 0x714] */ FPUSH(R_F32((u32)(r_ebx+0x714u)));
    /* 0042ca7c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042ca7f: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042ca85: fadd dword ptr [ebx + 0x718] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x718u));
    /* 0042ca8b: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0042ca8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042ca90: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042ca93: fst dword ptr [ebx + 0x710] */ W_F32((u32)(r_ebx+0x710u), ST(0));
    /* 0042ca99: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042ca9b: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042ca9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042caa0: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x42caa5u); f_00422768();
    /* 0042caa5: fstp dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0)); FPOP();
    /* 0042caab: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042caae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042caaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042cab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042cab1: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042cab4:; BB(0x0042cab4);
    /* 0042cab4: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042caba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cabd: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042cac3:; BB(0x0042cac3);
    /* 0042cac3: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042cac9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cacc: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042cad2: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42cad7u); f_00520e6c();
    /* 0042cad7: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042cadd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cadf: je 0x42caea */ if (fZ) goto L_0042caea;
L_0042cae1:; BB(0x0042cae1);
    /* 0042cae1: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042cae8: jmp 0x42caf1 */ goto L_0042caf1;
L_0042caea:; BB(0x0042caea);
    /* 0042caea: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042caf1:; BB(0x0042caf1);
    /* 0042caf1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042caf4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042caf7: ja 0x42cc31 */ if ((!fC&&!fZ)) goto L_0042cc31;
L_0042cafd:; BB(0x0042cafd);
    /* 0042cafd: mov edx, dword ptr [edx*4 + 0x8fc7c0] */ r_edx = R32((u32)(r_edx*4+0x8fc7c0u));
    /* 0042cb04: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
L_0042cc3e:; BB(0x0042cc3e);
    /* 0042cc3e: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042cc44: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cc47: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042cc4d:; BB(0x0042cc4d);
    /* 0042cc4d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc4f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc51: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042cc53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc55: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42cc5bu); call_ind(t); }
    /* 0042cc5b: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042cc5f: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042cc65: mov byte ptr [esp + 0x18], 0x13 */ W8((u32)(r_esp+0x18u), 0x13u);
    /* 0042cc6a: mov eax, 2 */ r_eax = 0x2u;
    /* 0042cc6f: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 0042cc73: mov word ptr [esp + 0x1a], si */ W16((u32)(r_esp+0x1au), (u16)r_esi);
    /* 0042cc78: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 0042cc7d: mov word ptr [esp + 0x1e], dx */ W16((u32)(r_esp+0x1eu), (u16)r_edx);
    /* 0042cc82: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0042cc86: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42cc8bu); f_008003e0();
    /* 0042cc8b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cc8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042cc8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042cc90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042cc91: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
L_0042cc94:; BB(0x0042cc94);
    /* 0042cc94: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042cc96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc98: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42cc9eu); call_ind(t); }
    /* 0042cc9e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0042cca0:; BB(0x0042cca0);
    /* 0042cca0: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042cca7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042cca9: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42ccafu); call_ind(t); }
    /* 0042ccaf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042ccb2: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ccb5: jl 0x42cca0 */ if ((fS!=fO)) goto L_0042cca0;
L_0042ccb7:; BB(0x0042ccb7);
    /* 0042ccb7: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0042ccbb: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0042ccbf: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0042ccc3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042ccc9: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042cccc: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042ccd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042ccd2: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042ccd8: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042ccde: mov dword ptr [ebx + 0x660], esi */ W32((u32)(r_ebx+0x660u), r_esi);
    /* 0042cce4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cce6: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42ccebu); f_0042c154();
    /* 0042cceb: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042ccf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ccf3: jne 0x42cd0d */ if (!fZ) goto L_0042cd0d;
L_0042ccf5:; BB(0x0042ccf5);
    /* 0042ccf5: mov dword ptr [ebx + 0x704], 0xbf800000 */ W32((u32)(r_ebx+0x704u), 0xbf800000u);
    /* 0042ccff: mov eax, 5 */ r_eax = 0x5u;
    /* 0042cd04: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042cd0b: jmp 0x42cd23 */ goto L_0042cd23;
L_0042cd0d:; BB(0x0042cd0d);
    /* 0042cd0d: mov dword ptr [ebx + 0x704], 0x3f800000 */ W32((u32)(r_ebx+0x704u), 0x3f800000u);
    /* 0042cd17: mov eax, 6 */ r_eax = 0x6u;
    /* 0042cd1c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_0042cd23:; BB(0x0042cd23);
    /* 0042cd23: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
    /* 0042cd2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042cd2f: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 0042cd35: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042cd3b: mov dword ptr [ebx + 0x70c], 0 */ W32((u32)(r_ebx+0x70cu), 0x0u);
    /* 0042cd45: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
    /* 0042cd4b: mov dword ptr [ebx + 0x6f4], eax */ W32((u32)(r_ebx+0x6f4u), r_eax);
    /* 0042cd51: mov dword ptr [ebx + 0x714], 0 */ W32((u32)(r_ebx+0x714u), 0x0u);
    /* 0042cd5b: mov dword ptr [ebx + 0x718], 0 */ W32((u32)(r_ebx+0x718u), 0x0u);
    /* 0042cd65: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042cd6f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cd72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042cd73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042cd74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042cd75: ret 0xc */ FN_RET(0x0042c194); r_esp += 16; return;
}

void f_0042c700(void)
{
    FN_ENTER(0x0042c700);
    /* 0042c700: add al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042c702: test byte ptr [edx - 0x7d000000], bl */ {  u32 a = R8((u32)(r_edx+0x83000000u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fC = 0; }
    /* 0042c708: inc byte ptr [0x83d93675] */ { u32 ad = (u32)(0x83d93675u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042c70e: adc al, 7 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042c710: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042c712: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042c715: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042c718: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042c71a: call 0x42cd78 */ r_esp -= 4; W32(r_esp, 0x42c71fu); f_0042cd78();
    /* 0042c71f: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 0042c725: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x42c72au); f_0042cdc0();
    /* 0042c72a: fld dword ptr [ebx + 0x710] */ FPUSH(R_F32((u32)(r_ebx+0x710u)));
    /* 0042c730: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 0042c736: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042c739: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c73c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c73d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c73e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c73f: ret 0xc */ FN_RET(0x0042c700); r_esp += 16; return;
}

void f_0042c780(void)
{
    FN_ENTER(0x0042c780);
    /* 0042c780: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c781: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042c782: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c785: jne 0x42c7ce */ if (!fZ) goto L_0042c7ce;
L_0042c787:; BB(0x0042c787);
    /* 0042c787: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042c78d: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042c792: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042c798: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c79b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c79c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c79d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c79e: ret 0xc */ FN_RET(0x0042c780); r_esp += 16; return;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042c780); r_esp += 16; return;
}

void f_0042cb06(void)
{
    FN_ENTER(0x0042cb06);
    goto L_0042cb06;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb06); r_esp += 16; return;
L_0042cac9:; BB(0x0042cac9);
    /* 0042cac9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cacc: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042cad2: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42cad7u); f_00520e6c();
    /* 0042cad7: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042cadd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cadf: je 0x42caea */ if (fZ) goto L_0042caea;
L_0042cae1:; BB(0x0042cae1);
    /* 0042cae1: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042cae8: jmp 0x42caf1 */ goto L_0042caf1;
L_0042caea:; BB(0x0042caea);
    /* 0042caea: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042caf1:; BB(0x0042caf1);
    /* 0042caf1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042caf4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042caf7: ja 0x42cc31 */ if ((!fC&&!fZ)) goto L_0042cc31;
L_0042cafd:; BB(0x0042cafd);
    /* 0042cafd: mov edx, dword ptr [edx*4 + 0x8fc7c0] */ r_edx = R32((u32)(r_edx*4+0x8fc7c0u));
    /* 0042cb04: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042cb06:; BB(0x0042cb06);
    /* 0042cb06: mov eax, 5 */ r_eax = 0x5u;
    /* 0042cb0b: jmp 0x42cac9 */ goto L_0042cac9;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cb0d(void)
{
    FN_ENTER(0x0042cb0d);
    goto L_0042cb0d;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb0d); r_esp += 16; return;
L_0042cb0d:; BB(0x0042cb0d);
    /* 0042cb0d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cb13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb15: jne 0x42cb21 */ if (!fZ) goto L_0042cb21;
L_0042cb17:; BB(0x0042cb17);
    /* 0042cb17: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042cb1c: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cb21:; BB(0x0042cb21);
    /* 0042cb21: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042cb26: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cb2b(void)
{
    FN_ENTER(0x0042cb2b);
    goto L_0042cb2b;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb2b); r_esp += 16; return;
L_0042cb2b:; BB(0x0042cb2b);
    /* 0042cb2b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb33: jne 0x42cb3f */ if (!fZ) goto L_0042cb3f;
L_0042cb35:; BB(0x0042cb35);
    /* 0042cb35: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042cb3a: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cb3f:; BB(0x0042cb3f);
    /* 0042cb3f: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042cb44: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cb49(void)
{
    FN_ENTER(0x0042cb49);
    goto L_0042cb49;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb49); r_esp += 16; return;
L_0042cb49:; BB(0x0042cb49);
    /* 0042cb49: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cb4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb51: jne 0x42cb5d */ if (!fZ) goto L_0042cb5d;
L_0042cb53:; BB(0x0042cb53);
    /* 0042cb53: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042cb58: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cb5d:; BB(0x0042cb5d);
    /* 0042cb5d: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042cb62: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cb67(void)
{
    FN_ENTER(0x0042cb67);
    goto L_0042cb67;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb67); r_esp += 16; return;
L_0042cb67:; BB(0x0042cb67);
    /* 0042cb67: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cb6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb6f: jne 0x42cb7b */ if (!fZ) goto L_0042cb7b;
L_0042cb71:; BB(0x0042cb71);
    /* 0042cb71: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042cb76: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cb7b:; BB(0x0042cb7b);
    /* 0042cb7b: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042cb80: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cb85(void)
{
    FN_ENTER(0x0042cb85);
    goto L_0042cb85;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cb85); r_esp += 16; return;
L_0042cb85:; BB(0x0042cb85);
    /* 0042cb85: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb8d: jne 0x42cb99 */ if (!fZ) goto L_0042cb99;
L_0042cb8f:; BB(0x0042cb8f);
    /* 0042cb8f: mov eax, 4 */ r_eax = 0x4u;
    /* 0042cb94: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cb99:; BB(0x0042cb99);
    /* 0042cb99: mov eax, 0xa */ r_eax = 0xau;
    /* 0042cb9e: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cba3(void)
{
    FN_ENTER(0x0042cba3);
    goto L_0042cba3;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cba3); r_esp += 16; return;
L_0042cba3:; BB(0x0042cba3);
    /* 0042cba3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cba5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42cbaau); f_00520bf4();
    /* 0042cbaa: fcomp dword ptr [0x8fd0b8] */ fx_compare(ST(0), R_F32((u32)(0x8fd0b8u))); FPOP();
    /* 0042cbb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cbb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cbb3: jbe 0x42cbbc */ if ((fC||fZ)) goto L_0042cbbc;
L_0042cbb5:; BB(0x0042cbb5);
    /* 0042cbb5: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042cbba: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cbbc:; BB(0x0042cbbc);
    /* 0042cbbc: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042cbc1: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cbc3(void)
{
    FN_ENTER(0x0042cbc3);
    goto L_0042cbc3;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cbc3); r_esp += 16; return;
L_0042cbc3:; BB(0x0042cbc3);
    /* 0042cbc3: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cbc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cbcb: jne 0x42cbd4 */ if (!fZ) goto L_0042cbd4;
L_0042cbcd:; BB(0x0042cbcd);
    /* 0042cbcd: mov eax, 3 */ r_eax = 0x3u;
    /* 0042cbd2: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cbd4:; BB(0x0042cbd4);
    /* 0042cbd4: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042cbd9: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cbdb(void)
{
    FN_ENTER(0x0042cbdb);
    goto L_0042cbdb;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cbdb); r_esp += 16; return;
L_0042cbdb:; BB(0x0042cbdb);
    /* 0042cbdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cbdd: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42cbe2u); f_00520bf4();
    /* 0042cbe2: fcomp dword ptr [0x8fd0b8] */ fx_compare(ST(0), R_F32((u32)(0x8fd0b8u))); FPOP();
    /* 0042cbe8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cbea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cbeb: jbe 0x42cbf4 */ if ((fC||fZ)) goto L_0042cbf4;
L_0042cbed:; BB(0x0042cbed);
    /* 0042cbed: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042cbf2: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cbf4:; BB(0x0042cbf4);
    /* 0042cbf4: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042cbf9: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cbfb(void)
{
    FN_ENTER(0x0042cbfb);
    goto L_0042cbfb;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cbfb); r_esp += 16; return;
L_0042cbfb:; BB(0x0042cbfb);
    /* 0042cbfb: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042cc01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cc03: jne 0x42cc0c */ if (!fZ) goto L_0042cc0c;
L_0042cc05:; BB(0x0042cc05);
    /* 0042cc05: mov eax, 5 */ r_eax = 0x5u;
    /* 0042cc0a: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc0c:; BB(0x0042cc0c);
    /* 0042cc0c: mov eax, 9 */ r_eax = 0x9u;
    /* 0042cc11: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cc13(void)
{
    FN_ENTER(0x0042cc13);
    goto L_0042cc13;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cc13); r_esp += 16; return;
L_0042cc13:; BB(0x0042cc13);
    /* 0042cc13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc15: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42cc1au); f_00520bf4();
    /* 0042cc1a: fcomp dword ptr [0x8fd0b8] */ fx_compare(ST(0), R_F32((u32)(0x8fd0b8u))); FPOP();
    /* 0042cc20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cc22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cc23: jbe 0x42cc2c */ if ((fC||fZ)) goto L_0042cc2c;
L_0042cc25:; BB(0x0042cc25);
    /* 0042cc25: mov eax, 8 */ r_eax = 0x8u;
    /* 0042cc2a: jmp 0x42cc31 */ goto L_0042cc31;
L_0042cc2c:; BB(0x0042cc2c);
    /* 0042cc2c: mov eax, 6 */ r_eax = 0x6u;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cc31(void)
{
    FN_ENTER(0x0042cc31);
    goto L_0042cc31;
L_0042c7ce:; BB(0x0042c7ce);
    /* 0042c7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042c7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042c7d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c7d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042c7d4: ret 0xc */ FN_RET(0x0042cc31); r_esp += 16; return;
L_0042cc31:; BB(0x0042cc31);
    /* 0042cc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042cc34: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42cc39u); f_0042abf8();
    /* 0042cc39: jmp 0x42c7ce */ goto L_0042c7ce;
}

void f_0042cd78(void) /* sub_42CD78 */
{
    FN_ENTER(0x0042cd78);
    /* 0042cd78: fld dword ptr [0x8fd050] */ FPUSH(R_F32((u32)(0x8fd050u)));
    /* 0042cd7e: fld dword ptr [ecx + 0x6ac] */ FPUSH(R_F32((u32)(r_ecx+0x6acu)));
    /* 0042cd84: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042cd86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cd88: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cd89: jbe 0x42cd9c */ if ((fC||fZ)) goto L_0042cd9c;
L_0042cd8b:; BB(0x0042cd8b);
    /* 0042cd8b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042cd8d: fld dword ptr [0x8fd04c] */ FPUSH(R_F32((u32)(0x8fd04cu)));
    /* 0042cd93: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042cd95: fstp dword ptr [ecx + 0x6ac] */ W_F32((u32)(r_ecx+0x6acu), ST(0)); FPOP();
    /* 0042cd9b: ret  */ FN_RET(0x0042cd78); r_esp += 4; return;
L_0042cd9c:; BB(0x0042cd9c);
    /* 0042cd9c: fcom dword ptr [0x8fd04c] */ fx_compare(ST(0), R_F32((u32)(0x8fd04cu))); 
    /* 0042cda2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cda4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cda5: jae 0x42cdb0 */ if (!fC) goto L_0042cdb0;
L_0042cda7:; BB(0x0042cda7);
    /* 0042cda7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042cda9: fstp dword ptr [ecx + 0x6ac] */ W_F32((u32)(r_ecx+0x6acu), ST(0)); FPOP();
    /* 0042cdaf: ret  */ FN_RET(0x0042cd78); r_esp += 4; return;
L_0042cdb0:; BB(0x0042cdb0);
    /* 0042cdb0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042cdb2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042cdb4: mov dword ptr [ecx + 0x6ac], 0 */ W32((u32)(r_ecx+0x6acu), 0x0u);
    /* 0042cdbe: ret  */ FN_RET(0x0042cd78); r_esp += 4; return;
}

void f_0042cdc0(void) /* sub_42CDC0 */
{
    FN_ENTER(0x0042cdc0);
    /* 0042cdc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042cdc1: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0042cdc3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0042cdc5: je 0x42ce3e */ if (fZ) goto L_0042ce3e;
L_0042cdc7:; BB(0x0042cdc7);
    /* 0042cdc7: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cdca: jne 0x42cdf5 */ if (!fZ) goto L_0042cdf5;
L_0042cdcc:; BB(0x0042cdcc);
    /* 0042cdcc: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042cdcf: fcom dword ptr [ecx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x1cu))); 
    /* 0042cdd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cdd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cdd5: jbe 0x42cdf0 */ if ((fC||fZ)) goto L_0042cdf0;
L_0042cdd7:; BB(0x0042cdd7);
    /* 0042cdd7: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0042cdda: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0042cddd: fst dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0));
    /* 0042cde0: mov edi, 2 */ r_edi = 0x2u;
    /* 0042cde5: mov dword ptr [ecx], 2 */ W32((u32)(r_ecx), 0x2u);
    /* 0042cdeb: jmp 0x42ce72 */ goto L_0042ce72;
L_0042cdf0:; BB(0x0042cdf0);
    /* 0042cdf0: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0042cdf3: jmp 0x42ce72 */ goto L_0042ce72;
L_0042cdf5:; BB(0x0042cdf5);
    /* 0042cdf5: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cdf8: jne 0x42ce34 */ if (!fZ) goto L_0042ce34;
L_0042cdfa:; BB(0x0042cdfa);
    /* 0042cdfa: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0042cdfd: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 0042ce00: fcom dword ptr [0x8fd044] */ fx_compare(ST(0), R_F32((u32)(0x8fd044u))); 
    /* 0042ce06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ce08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ce09: jae 0x42ce2a */ if (!fC) goto L_0042ce2a;
L_0042ce0b:; BB(0x0042ce0b);
    /* 0042ce0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042ce0d: fld dword ptr [0x8fd044] */ FPUSH(R_F32((u32)(0x8fd044u)));
    /* 0042ce13: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042ce16: mov dword ptr [ecx], 3 */ W32((u32)(r_ecx), 0x3u);
    /* 0042ce1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0042ce1e: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0042ce21: mov edi, 3 */ r_edi = 0x3u;
    /* 0042ce26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce28: jmp 0x42ce72 */ goto L_0042ce72;
L_0042ce2a:; BB(0x0042ce2a);
    /* 0042ce2a: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042ce2d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce2f: fst dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0));
    /* 0042ce32: jmp 0x42ce72 */ goto L_0042ce72;
L_0042ce34:; BB(0x0042ce34);
    /* 0042ce34: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0042ce37: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042ce3a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce3c: jmp 0x42ce72 */ goto L_0042ce72;
L_0042ce3e:; BB(0x0042ce3e);
    /* 0042ce3e: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0042ce41: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0042ce44: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0042ce47: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042ce49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ce4b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0042ce4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ce4f: jae 0x42ce68 */ if (!fC) goto L_0042ce68;
L_0042ce51:; BB(0x0042ce51);
    /* 0042ce51: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042ce53: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042ce56: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 0042ce5c: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0042ce5f: mov edi, 1 */ r_edi = 0x1u;
    /* 0042ce64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce66: jmp 0x42ce72 */ goto L_0042ce72;
L_0042ce68:; BB(0x0042ce68);
    /* 0042ce68: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042ce6a: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0042ce6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce6f: fst dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0));
L_0042ce72:; BB(0x0042ce72);
    /* 0042ce72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042ce74: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0042ce77: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042ce79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ce7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ce7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042ce7e: jb 0x42ce82 */ if (fC) goto L_0042ce82;
L_0042ce80:; BB(0x0042ce80);
    /* 0042ce80: fst st(1) */ ST(1) = ST(0);
L_0042ce82:; BB(0x0042ce82);
    /* 0042ce82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042ce84: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0042ce87: mov eax, edi */ r_eax = r_edi;
    /* 0042ce89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042ce8a: ret  */ FN_RET(0x0042cdc0); r_esp += 4; return;
}

void f_0042ce8c(void) /* sub_42CE8C */
{
    FN_ENTER(0x0042ce8c);
    /* 0042ce8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce8d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ce90: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042ce92: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0042ce96: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ce99: je 0x42d13e */ if (fZ) goto L_0042d13e;
L_0042ce9f:; BB(0x0042ce9f);
    /* 0042ce9f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cea2: je 0x42d0ee */ if (fZ) goto L_0042d0ee;
L_0042cea8:; BB(0x0042cea8);
    /* 0042cea8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ceab: je 0x42cf69 */ if (fZ) goto L_0042cf69;
L_0042ceb1:; BB(0x0042ceb1);
    /* 0042ceb1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ceb4: je 0x42cf62 */ if (fZ) goto L_0042cf62;
L_0042ceba:; BB(0x0042ceba);
    /* 0042ceba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cebc: jne 0x42cf62 */ if (!fZ) goto L_0042cf62;
L_0042cec2:; BB(0x0042cec2);
    /* 0042cec2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042cec4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42cec9u); f_007aa094();
    /* 0042cec9: mov eax, dword ptr [ebp + 0x6ec] */ r_eax = R32((u32)(r_ebp+0x6ecu));
    /* 0042cecf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ced1: jne 0x42cf00 */ if (!fZ) goto L_0042cf00;
L_0042ced3:; BB(0x0042ced3);
    /* 0042ced3: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0042ced9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042cedb: jne 0x42cf62 */ if (!fZ) goto L_0042cf62;
L_0042cee1:; BB(0x0042cee1);
    /* 0042cee1: push dword ptr [ebp + 0x6bc] */ { u32 v = R32((u32)(r_ebp+0x6bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042cee7: push dword ptr [ebp + 0x6e8] */ { u32 v = R32((u32)(r_ebp+0x6e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042ceed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042ceef: call 0x42d1e0 */ r_esp -= 4; W32(r_esp, 0x42cef4u); f_0042d1e0();
    /* 0042cef4: mov dword ptr [ebp + 0x6ec], 1 */ W32((u32)(r_ebp+0x6ecu), 0x1u);
    /* 0042cefe: jmp 0x42cf62 */ goto L_0042cf62;
L_0042cf00:; BB(0x0042cf00);
    /* 0042cf00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cf03: jne 0x42cf62 */ if (!fZ) goto L_0042cf62;
L_0042cf05:; BB(0x0042cf05);
    /* 0042cf05: mov edx, dword ptr [ebp + 0x6e8] */ r_edx = R32((u32)(r_ebp+0x6e8u));
    /* 0042cf0b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0042cf0e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cf10: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0042cf13: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cf15: fld dword ptr [ecx + ebp + 0x54c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp+0x54cu)));
    /* 0042cf1c: fcomp dword ptr [ecx + ebp + 0x558] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_ebp+0x558u))); FPOP();
    /* 0042cf23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cf25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cf26: jae 0x42cf62 */ if (!fC) goto L_0042cf62;
L_0042cf28:; BB(0x0042cf28);
    /* 0042cf28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042cf2b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0042cf2f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0042cf33: fcomp dword ptr [0x8fd038] */ fx_compare(ST(0), R_F32((u32)(0x8fd038u))); FPOP();
    /* 0042cf39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042cf3b: mov dword ptr [ebp + 0x6e8], edx */ W32((u32)(r_ebp+0x6e8u), r_edx);
    /* 0042cf41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042cf42: jb 0x42cf54 */ if (fC) goto L_0042cf54;
L_0042cf44:; BB(0x0042cf44);
    /* 0042cf44: mov edx, dword ptr [ebp + 0x6e8] */ r_edx = R32((u32)(r_ebp+0x6e8u));
    /* 0042cf4a: mov dword ptr [ebp + 0x6ec], 2 */ W32((u32)(r_ebp+0x6ecu), 0x2u);
L_0042cf54:; BB(0x0042cf54);
    /* 0042cf54: push dword ptr [ebp + 0x6bc] */ { u32 v = R32((u32)(r_ebp+0x6bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042cf5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042cf5d: call 0x42d1e0 */ r_esp -= 4; W32(r_esp, 0x42cf62u); f_0042d1e0();
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042ce8c); r_esp += 12; return;
L_0042cf69:; BB(0x0042cf69);
    /* 0042cf69: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0042cf6f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042cf71: je 0x42cf62 */ if (fZ) goto L_0042cf62;
L_0042cf73:; BB(0x0042cf73);
    /* 0042cf73: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 0042cf79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cf7c: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 0042cf82: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42cf87u); f_00520e6c();
    /* 0042cf87: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 0042cf8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cf8f: je 0x42cf9a */ if (fZ) goto L_0042cf9a;
L_0042cf91:; BB(0x0042cf91);
    /* 0042cf91: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042cf98: jmp 0x42cfa1 */ goto L_0042cfa1;
L_0042cf9a:; BB(0x0042cf9a);
    /* 0042cf9a: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042cfa1:; BB(0x0042cfa1);
    /* 0042cfa1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042cfa4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042cfa7: ja 0x42d0e1 */ if ((!fC&&!fZ)) goto L_0042d0e1;
L_0042cfad:; BB(0x0042cfad);
    /* 0042cfad: mov edx, dword ptr [edx*4 + 0x8fc7f0] */ r_edx = R32((u32)(r_edx*4+0x8fc7f0u));
    /* 0042cfb4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
L_0042d0ee:; BB(0x0042d0ee);
    /* 0042d0ee: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0042d0f4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042d0f6: je 0x42cf62 */ if (fZ) goto L_0042cf62;
L_0042d0fc:; BB(0x0042d0fc);
    /* 0042d0fc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d100: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0042d103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d105: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42d10bu); call_ind(t); }
    /* 0042d10b: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0042d10f: mov ebp, dword ptr [ebp + 0x3dc] */ r_ebp = R32((u32)(r_ebp+0x3dcu));
    /* 0042d115: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042d119: mov edx, 2 */ r_edx = 0x2u;
    /* 0042d11e: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0042d122: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042d127: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042d12c: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 0042d131: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042d134: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42d139u); f_008003e0();
    /* 0042d139: jmp 0x42cf62 */ goto L_0042cf62;
L_0042d13e:; BB(0x0042d13e);
    /* 0042d13e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0042d141: mov eax, 3 */ r_eax = 0x3u;
    /* 0042d146: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0042d14d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d14f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42d155u); call_ind(t); }
    /* 0042d155: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0042d159: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d15b: mov ebx, eax */ r_ebx = r_eax;
L_0042d15d:; BB(0x0042d15d);
    /* 0042d15d: mov ecx, dword ptr [ebp + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0x5e8u));
    /* 0042d164: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d166: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42d16cu); call_ind(t); }
    /* 0042d16c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042d16f: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d172: jl 0x42d15d */ if ((fS!=fO)) goto L_0042d15d;
L_0042d174:; BB(0x0042d174);
    /* 0042d174: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0042d178: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0042d17c: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0042d182: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042d187: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0042d18d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0042d191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d192: mov dword ptr [ebp + 0x65c], edx */ W32((u32)(r_ebp+0x65cu), r_edx);
    /* 0042d198: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d19a: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42d19fu); f_0042c154();
    /* 0042d19f: mov dword ptr [ebp + 0x704], 0xc47a0000 */ W32((u32)(r_ebp+0x704u), 0xc47a0000u);
    /* 0042d1a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d1ab: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
    /* 0042d1b1: mov dword ptr [ebp + 0x6ec], eax */ W32((u32)(r_ebp+0x6ecu), r_eax);
    /* 0042d1b7: mov eax, dword ptr [ebp + 0x6bc] */ r_eax = R32((u32)(r_ebp+0x6bcu));
    /* 0042d1bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d1c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d1c3: jge 0x42d1d0 */ if ((fS==fO)) goto L_0042d1d0;
L_0042d1c5:; BB(0x0042d1c5);
    /* 0042d1c5: mov dword ptr [ebp + 0x6bc], eax */ W32((u32)(r_ebp+0x6bcu), r_eax);
    /* 0042d1cb: jmp 0x42cf62 */ goto L_0042cf62;
L_0042d1d0:; BB(0x0042d1d0);
    /* 0042d1d0: mov dword ptr [ebp + 0x6bc], 0 */ W32((u32)(r_ebp+0x6bcu), 0x0u);
    /* 0042d1da: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042cfb6(void)
{
    FN_ENTER(0x0042cfb6);
    goto L_0042cfb6;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042cfb6); r_esp += 12; return;
L_0042cf79:; BB(0x0042cf79);
    /* 0042cf79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cf7c: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 0042cf82: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42cf87u); f_00520e6c();
    /* 0042cf87: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 0042cf8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cf8f: je 0x42cf9a */ if (fZ) goto L_0042cf9a;
L_0042cf91:; BB(0x0042cf91);
    /* 0042cf91: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042cf98: jmp 0x42cfa1 */ goto L_0042cfa1;
L_0042cf9a:; BB(0x0042cf9a);
    /* 0042cf9a: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042cfa1:; BB(0x0042cfa1);
    /* 0042cfa1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042cfa4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042cfa7: ja 0x42d0e1 */ if ((!fC&&!fZ)) goto L_0042d0e1;
L_0042cfad:; BB(0x0042cfad);
    /* 0042cfad: mov edx, dword ptr [edx*4 + 0x8fc7f0] */ r_edx = R32((u32)(r_edx*4+0x8fc7f0u));
    /* 0042cfb4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042cfb6:; BB(0x0042cfb6);
    /* 0042cfb6: mov eax, 5 */ r_eax = 0x5u;
    /* 0042cfbb: jmp 0x42cf79 */ goto L_0042cf79;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042cfbd(void)
{
    FN_ENTER(0x0042cfbd);
    goto L_0042cfbd;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042cfbd); r_esp += 12; return;
L_0042cfbd:; BB(0x0042cfbd);
    /* 0042cfbd: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042cfc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cfc5: jne 0x42cfd1 */ if (!fZ) goto L_0042cfd1;
L_0042cfc7:; BB(0x0042cfc7);
    /* 0042cfc7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042cfcc: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042cfd1:; BB(0x0042cfd1);
    /* 0042cfd1: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042cfd6: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042cfdb(void)
{
    FN_ENTER(0x0042cfdb);
    goto L_0042cfdb;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042cfdb); r_esp += 12; return;
L_0042cfdb:; BB(0x0042cfdb);
    /* 0042cfdb: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042cfe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cfe3: jne 0x42cfef */ if (!fZ) goto L_0042cfef;
L_0042cfe5:; BB(0x0042cfe5);
    /* 0042cfe5: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042cfea: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042cfef:; BB(0x0042cfef);
    /* 0042cfef: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042cff4: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042cff9(void)
{
    FN_ENTER(0x0042cff9);
    goto L_0042cff9;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042cff9); r_esp += 12; return;
L_0042cff9:; BB(0x0042cff9);
    /* 0042cff9: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042cfff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d001: jne 0x42d00d */ if (!fZ) goto L_0042d00d;
L_0042d003:; BB(0x0042d003);
    /* 0042d003: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042d008: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d00d:; BB(0x0042d00d);
    /* 0042d00d: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042d012: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

