#include "protos.h"

void f_0078a19c(void) /* sub_78A19C */
{
    FN_ENTER(0x0078a19c);
    /* 0078a19c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a19d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a19e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a1a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078a1a3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0078a1a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a1a9: je 0x78a1e0 */ if (fZ) goto L_0078a1e0;
L_0078a1ab:; BB(0x0078a1ab);
    /* 0078a1ab: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1ae: lea esi, [ebp + 0x40] */ r_esi = (u32)(r_ebp+0x40u);
    /* 0078a1b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1b2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78a1b7u); f_00857dec();
    /* 0078a1b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a1ba: mov word ptr [ebp + 0x7e], ax */ W16((u32)(r_ebp+0x7eu), (u16)r_eax);
    /* 0078a1be: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x78a1c3u); f_007ac264();
    /* 0078a1c3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078a1c7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0078a1cb: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078a1ce: fadd dword ptr [eax*4 + 0x97a830] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a830u));
    /* 0078a1d5: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0078a1d8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a1db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a1dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a1dd: ret 4 */ FN_RET(0x0078a19c); r_esp += 8; return;
L_0078a1e0:; BB(0x0078a1e0);
    /* 0078a1e0: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 0078a1e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a1e9: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
    /* 0078a1ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a1f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a1f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a1f2: ret 4 */ FN_RET(0x0078a19c); r_esp += 8; return;
}

void f_0078a1f8(void) /* sub_78A1F8 */
{
    FN_ENTER(0x0078a1f8);
    /* 0078a1f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a1fa: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a1fd: mov edi, ecx */ r_edi = r_ecx;
    /* 0078a1ff: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0078a203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a204: mov ecx, edi */ r_ecx = r_edi;
    /* 0078a206: call 0x789a24 */ r_esp -= 4; W32(r_esp, 0x78a20bu); f_00789a24();
    /* 0078a20b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a20d: je 0x78a30a */ if (fZ) goto L_0078a30a;
L_0078a213:; BB(0x0078a213);
    /* 0078a213: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0078a219: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a21c: je 0x78a30a */ if (fZ) goto L_0078a30a;
L_0078a222:; BB(0x0078a222);
    /* 0078a222: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a225: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078a227: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x78a22cu); f_0068d5a8();
    /* 0078a22c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a22d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a22f: je 0x78a244 */ if (fZ) goto L_0078a244;
L_0078a231:; BB(0x0078a231);
    /* 0078a231: mov eax, dword ptr [eax + 0xeb8] */ r_eax = R32((u32)(r_eax+0xeb8u));
    /* 0078a237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a239: jne 0x78a242 */ if (!fZ) goto L_0078a242;
L_0078a23b:; BB(0x0078a23b);
    /* 0078a23b: mov esi, 1 */ r_esi = 0x1u;
    /* 0078a240: jmp 0x78a244 */ goto L_0078a244;
L_0078a242:; BB(0x0078a242);
    /* 0078a242: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0078a244:; BB(0x0078a244);
    /* 0078a244: mov eax, dword ptr [0x9fd1ac] */ r_eax = R32((u32)(0x9fd1acu));
    /* 0078a249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a24b: je 0x78a29a */ if (fZ) goto L_0078a29a;
L_0078a24d:; BB(0x0078a24d);
    /* 0078a24d: fld dword ptr [0x97a854] */ FPUSH(R_F32((u32)(0x97a854u)));
    /* 0078a253: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0078a257: fld dword ptr [0x97a850] */ FPUSH(R_F32((u32)(0x97a850u)));
    /* 0078a25d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078a25f: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0078a263: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078a265: fld dword ptr [0x97a84c] */ FPUSH(R_F32((u32)(0x97a84cu)));
    /* 0078a26b: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0078a26f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a271: jne 0x78a28c */ if (!fZ) goto L_0078a28c;
L_0078a273:; BB(0x0078a273);
    /* 0078a273: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0078a276: mov eax, dword ptr [edx*4 + 0xa9c870] */ r_eax = R32((u32)(r_edx*4+0xa9c870u));
    /* 0078a27d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a280: je 0x78a310 */ if (fZ) goto L_0078a310;
L_0078a286:; BB(0x0078a286);
    /* 0078a286: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078a288: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078a28a: jmp 0x78a29a */ goto L_0078a29a;
L_0078a28c:; BB(0x0078a28c);
    /* 0078a28c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078a28e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078a291: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078a295: call 0x78b4b4 */ r_esp -= 4; W32(r_esp, 0x78a29au); f_0078b4b4();
L_0078a29a:; BB(0x0078a29a);
    /* 0078a29a: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x78a29fu); f_007bb6d0();
    /* 0078a29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a2a0: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x78a2a5u); f_007199e0();
    /* 0078a2a5: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0078a2a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a2ac: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0078a2b0: fadd dword ptr [0x97a844] */ ST(0) = ST(0) + R_F32((u32)(0x97a844u));
    /* 0078a2b6: fdivr dword ptr [0x97a848] */ ST(0) = R_F32((u32)(0x97a848u)) / ST(0);
    /* 0078a2bc: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0078a2c0: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x78a2c5u); f_007a93d8();
    /* 0078a2c5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0078a2c9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0078a2cd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0078a2d1: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0078a2d4: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0078a2d8: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 0078a2e0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078a2e3: lea esi, [edi + 0x40] */ r_esi = (u32)(r_edi+0x40u);
    /* 0078a2e6: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0078a2ee: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078a2f2: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0078a2f8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0078a2fc: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0078a300: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x78a305u); f_007ab554();
    /* 0078a305: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x78a30au); f_007a9318();
L_0078a30a:; BB(0x0078a30a);
    /* 0078a30a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a30d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a30e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a30f: ret  */ FN_RET(0x0078a1f8); r_esp += 4; return;
L_0078a310:; BB(0x0078a310);
    /* 0078a310: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078a312: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078a315: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078a319: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0078a31d: call 0x78b408 */ r_esp -= 4; W32(r_esp, 0x78a322u); f_0078b408();
    /* 0078a322: jmp 0x78a29a */ goto L_0078a29a;
}

void f_0078a328(void) /* sub_78A328 */
{
    FN_ENTER(0x0078a328);
    /* 0078a328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a329: mov eax, dword ptr [0xa9c4ac] */ r_eax = R32((u32)(0xa9c4acu));
    /* 0078a32e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a330: je 0x78a34c */ if (fZ) goto L_0078a34c;
L_0078a332:; BB(0x0078a332);
    /* 0078a332: mov eax, dword ptr [0x9fd1a8] */ r_eax = R32((u32)(0x9fd1a8u));
    /* 0078a337: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078a33a: je 0x78a3c5 */ if (fZ) goto L_0078a3c5;
L_0078a340:; BB(0x0078a340);
    /* 0078a340: mov dword ptr [0x9fd1a8], 5 */ W32((u32)(0x9fd1a8u), 0x5u);
    /* 0078a34a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a34b: ret  */ FN_RET(0x0078a328); r_esp += 4; return;
L_0078a34c:; BB(0x0078a34c);
    /* 0078a34c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078a350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a351: call 0x7be230 */ r_esp -= 4; W32(r_esp, 0x78a356u); f_007be230();
    /* 0078a356: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a357: mov edx, dword ptr [0xa9c498] */ r_edx = R32((u32)(0xa9c498u));
    /* 0078a35d: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0078a360: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a362: jne 0x78a36c */ if (!fZ) goto L_0078a36c;
L_0078a364:; BB(0x0078a364);
    /* 0078a364: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a367: jne 0x78a36c */ if (!fZ) goto L_0078a36c;
L_0078a369:; BB(0x0078a369);
    /* 0078a369: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
L_0078a36c:; BB(0x0078a36c);
    /* 0078a36c: mov eax, dword ptr [0xa9c49c] */ r_eax = R32((u32)(0xa9c49cu));
    /* 0078a371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a373: jne 0x78a37d */ if (!fZ) goto L_0078a37d;
L_0078a375:; BB(0x0078a375);
    /* 0078a375: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a378: jne 0x78a37d */ if (!fZ) goto L_0078a37d;
L_0078a37a:; BB(0x0078a37a);
    /* 0078a37a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078a37d:; BB(0x0078a37d);
    /* 0078a37d: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078a380: jl 0x78a39d */ if ((fS!=fO)) goto L_0078a39d;
L_0078a382:; BB(0x0078a382);
    /* 0078a382: mov eax, dword ptr [0x9fd1ac] */ r_eax = R32((u32)(0x9fd1acu));
    /* 0078a387: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0078a389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a38b: je 0x78a391 */ if (fZ) goto L_0078a391;
L_0078a38d:; BB(0x0078a38d);
    /* 0078a38d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a38f: jmp 0x78a396 */ goto L_0078a396;
L_0078a391:; BB(0x0078a391);
    /* 0078a391: mov eax, 1 */ r_eax = 0x1u;
L_0078a396:; BB(0x0078a396);
    /* 0078a396: mov dword ptr [0x9fd1ac], eax */ W32((u32)(0x9fd1acu), r_eax);
    /* 0078a39b: jmp 0x78a3ad */ goto L_0078a3ad;
L_0078a39d:; BB(0x0078a39d);
    /* 0078a39d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a3a0: jne 0x78a3ad */ if (!fZ) goto L_0078a3ad;
L_0078a3a2:; BB(0x0078a3a2);
    /* 0078a3a2: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078a3a8: call 0x7f67b0 */ r_esp -= 4; W32(r_esp, 0x78a3adu); f_007f67b0();
L_0078a3ad:; BB(0x0078a3ad);
    /* 0078a3ad: push 0xffff1fff */ { u32 v = 0xffff1fffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a3b2: shl edi, 0xd */ { u32 c = (13u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0078a3b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078a3b6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078a3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a3bb: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x78a3c0u); f_007be17c();
    /* 0078a3c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a3c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a3c4: ret  */ FN_RET(0x0078a328); r_esp += 4; return;
L_0078a3c5:; BB(0x0078a3c5);
    /* 0078a3c5: mov dword ptr [0x9fd1a8], 6 */ W32((u32)(0x9fd1a8u), 0x6u);
    /* 0078a3cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a3d0: ret  */ FN_RET(0x0078a328); r_esp += 4; return;
}

void f_0078a3d4(void) /* sub_78A3D4 */
{
    FN_ENTER(0x0078a3d4);
    /* 0078a3d4: mov dword ptr [0xa9c4a0], 0x3f800000 */ W32((u32)(0xa9c4a0u), 0x3f800000u);
    /* 0078a3de: mov dword ptr [0xa9c4a4], 0x41000000 */ W32((u32)(0xa9c4a4u), 0x41000000u);
    /* 0078a3e8: mov dword ptr [0xa9c4a8], 0x3fc00000 */ W32((u32)(0xa9c4a8u), 0x3fc00000u);
    /* 0078a3f2: ret  */ FN_RET(0x0078a3d4); r_esp += 4; return;
}

void f_0078a3f4(void) /* sub_78A3F4 */
{
    FN_ENTER(0x0078a3f4);
    /* 0078a3f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a3f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078a3f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078a3f9: call 0x78a418 */ r_esp -= 4; W32(r_esp, 0x78a3feu); f_0078a418();
    /* 0078a3fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078a402: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078a404: jne 0x78a40a */ if (!fZ) goto L_0078a40a;
L_0078a406:; BB(0x0078a406);
    /* 0078a406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a407: ret 4 */ FN_RET(0x0078a3f4); r_esp += 8; return;
L_0078a40a:; BB(0x0078a40a);
    /* 0078a40a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a40b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78a410u); f_005c2f74();
    /* 0078a410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a411: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a412: ret 4 */ FN_RET(0x0078a3f4); r_esp += 8; return;
}

void f_0078a418(void) /* sub_78A418 */
{
    FN_ENTER(0x0078a418);
    /* 0078a418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a419: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a41b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a41d: push 0x8f4b34 */ { u32 v = 0x8f4b34u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a422: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a429: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a430: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a433: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a436: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078a439: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078a43c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078a43f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078a442: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078a445: mov dword ptr [ecx], 0xb450f0 */ W32((u32)(r_ecx), 0xb450f0u);
    /* 0078a44b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078a452: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78a457u); f_008171e8();
    /* 0078a457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078a45a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078a461: mov esp, ebp */ r_esp = r_ebp;
    /* 0078a463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a464: ret  */ FN_RET(0x0078a418); r_esp += 4; return;
}

void f_0078a468(void) /* sub_78A468 */
{
    FN_ENTER(0x0078a468);
    /* 0078a468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a469: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a46b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a46d: push 0x8f4b6a */ { u32 v = 0x8f4b6au; r_esp -= 4; W32(r_esp, v); }
    /* 0078a472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a480: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078a489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078a48c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078a48f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78a494u); f_00816d30();
    /* 0078a494: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a497: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a49cu); f_00816cb8();
    /* 0078a49c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078a4a3: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a4a5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78a4aau); f_005caba4();
    /* 0078a4aa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a4ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a4b0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0078a4b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a4b5: je 0x78a5bc */ if (fZ) goto L_0078a5bc;
L_0078a4bb:; BB(0x0078a4bb);
    /* 0078a4bb: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0078a4c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078a4c9: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a4cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0078a4d1: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0078a4d4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78a4d9u); f_008193cc();
    /* 0078a4d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078a4e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a4e3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0078a4e6: mov dword ptr [eax], 0xb450f0 */ W32((u32)(r_eax), 0xb450f0u);
    /* 0078a4ec: mov edx, dword ptr [0x9fd1b0] */ r_edx = R32((u32)(0x9fd1b0u));
    /* 0078a4f2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a4f4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078a4f7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078a4f9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078a4fc: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a501: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078a507: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0078a50a: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0078a50d: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0078a510: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0078a513: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 0078a516: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0078a51d: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0078a520: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0078a523: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0078a52a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078a52c: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0078a52f: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0078a532: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0078a537: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 0078a53a: mov word ptr [eax + 0x64], cx */ W16((u32)(r_eax+0x64u), (u16)r_ecx);
    /* 0078a53e: mov word ptr [eax + 0x66], dx */ W16((u32)(r_eax+0x66u), (u16)r_edx);
    /* 0078a542: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0078a546: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078a54c: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0078a550: lea ebx, [eax + 0x34] */ r_ebx = (u32)(r_eax+0x34u);
    /* 0078a553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a554: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78a559u); f_00857dec();
    /* 0078a559: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a55c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a55d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a55f: mov word ptr [edx + 0x52], ax */ W16((u32)(r_edx+0x52u), (u16)r_eax);
    /* 0078a563: call 0x789080 */ r_esp -= 4; W32(r_esp, 0x78a568u); f_00789080();
    /* 0078a568: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a56b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a56e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0078a571: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0078a574: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078a577: fadd dword ptr [eax*4 + 0x97a8c0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a8c0u));
    /* 0078a57e: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0078a581: call 0x78a5c4 */ r_esp -= 4; W32(r_esp, 0x78a586u); f_0078a5c4();
    /* 0078a586: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a589: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0078a58c: fmul dword ptr [0x97a918] */ ST(0) = ST(0) * R_F32((u32)(0x97a918u));
    /* 0078a592: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078a594: fchs  */ ST(0) = -ST(0);
    /* 0078a596: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078a598: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 0078a59b: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0078a59e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0078a5a5:; BB(0x0078a5a5);
    /* 0078a5a5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078a5a8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078a5ab: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078a5ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078a5b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078a5b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0078a5ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a5bb: ret  */ FN_RET(0x0078a468); r_esp += 4; return;
L_0078a5bc:; BB(0x0078a5bc);
    /* 0078a5bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078a5be: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a5c1: jmp 0x78a5a5 */ goto L_0078a5a5;
}

void f_0078a5c4(void) /* sub_78A5C4 */
{
    FN_ENTER(0x0078a5c4);
    /* 0078a5c4: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x78a5c9u); f_004d2764();
    /* 0078a5c9: fcom qword ptr [0x97a8b8] */ fx_compare(ST(0), R_F64((u32)(0x97a8b8u))); 
    /* 0078a5cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078a5d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078a5d2: jb 0x78a5dd */ if (fC) goto L_0078a5dd;
L_0078a5d4:; BB(0x0078a5d4);
    /* 0078a5d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078a5d6: fld dword ptr [0x97a910] */ FPUSH(R_F32((u32)(0x97a910u)));
    /* 0078a5dc: ret  */ FN_RET(0x0078a5c4); r_esp += 4; return;
L_0078a5dd:; BB(0x0078a5dd);
    /* 0078a5dd: fld dword ptr [0x97a914] */ FPUSH(R_F32((u32)(0x97a914u)));
    /* 0078a5e3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0078a5e5: ret  */ FN_RET(0x0078a5c4); r_esp += 4; return;
}

void f_0078a5e8(void) /* sub_78A5E8 */
{
    FN_ENTER(0x0078a5e8);
    /* 0078a5e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a5e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a5eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a5ed: push 0x8f4b9e */ { u32 v = 0x8f4b9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a5f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a5f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a600: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a606: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078a609: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078a60c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078a60f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78a614u); f_00816d30();
    /* 0078a614: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a617: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a61cu); f_00815f24();
    /* 0078a61c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078a623: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a625: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78a62au); f_005caba4();
    /* 0078a62a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a62d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a630: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0078a633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a635: je 0x78a73c */ if (fZ) goto L_0078a73c;
L_0078a63b:; BB(0x0078a63b);
    /* 0078a63b: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0078a642: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078a649: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a64f: mov ecx, eax */ r_ecx = r_eax;
    /* 0078a651: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0078a654: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78a659u); f_008193cc();
    /* 0078a659: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078a660: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a663: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0078a666: mov dword ptr [eax], 0xb450f0 */ W32((u32)(r_eax), 0xb450f0u);
    /* 0078a66c: mov edx, dword ptr [0x9fd1b0] */ r_edx = R32((u32)(0x9fd1b0u));
    /* 0078a672: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a674: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078a677: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078a679: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078a67c: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a681: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078a687: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0078a68a: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0078a68d: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0078a690: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0078a693: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 0078a696: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0078a69d: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0078a6a0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0078a6a3: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0078a6aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078a6ac: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0078a6af: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0078a6b2: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0078a6b7: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 0078a6ba: mov word ptr [eax + 0x64], cx */ W16((u32)(r_eax+0x64u), (u16)r_ecx);
    /* 0078a6be: mov word ptr [eax + 0x66], dx */ W16((u32)(r_eax+0x66u), (u16)r_edx);
    /* 0078a6c2: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0078a6c6: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078a6cc: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0078a6d0: lea ebx, [eax + 0x34] */ r_ebx = (u32)(r_eax+0x34u);
    /* 0078a6d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a6d4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78a6d9u); f_00857dec();
    /* 0078a6d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a6dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a6dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a6df: mov word ptr [edx + 0x52], ax */ W16((u32)(r_edx+0x52u), (u16)r_eax);
    /* 0078a6e3: call 0x789080 */ r_esp -= 4; W32(r_esp, 0x78a6e8u); f_00789080();
    /* 0078a6e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a6eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a6ee: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0078a6f1: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0078a6f4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078a6f7: fadd dword ptr [eax*4 + 0x97a8b0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a8b0u));
    /* 0078a6fe: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0078a701: call 0x78a5c4 */ r_esp -= 4; W32(r_esp, 0x78a706u); f_0078a5c4();
    /* 0078a706: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a709: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0078a70c: fmul dword ptr [0x97a908] */ ST(0) = ST(0) * R_F32((u32)(0x97a908u));
    /* 0078a712: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078a714: fchs  */ ST(0) = -ST(0);
    /* 0078a716: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078a718: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 0078a71b: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0078a71e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0078a725:; BB(0x0078a725);
    /* 0078a725: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078a728: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078a72b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078a72e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078a731: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078a738: mov esp, ebp */ r_esp = r_ebp;
    /* 0078a73a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a73b: ret  */ FN_RET(0x0078a5e8); r_esp += 4; return;
L_0078a73c:; BB(0x0078a73c);
    /* 0078a73c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078a73e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a741: jmp 0x78a725 */ goto L_0078a725;
}

void f_0078a744(void) /* sub_78A744 */
{
    FN_ENTER(0x0078a744);
    /* 0078a744: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a745: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a747: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a749: push 0x8f4bc4 */ { u32 v = 0x8f4bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a74e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a755: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a75c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a75f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a762: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078a765: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078a768: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078a76b: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0078a76e: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78a773u); f_00816d30();
    /* 0078a773: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a776: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a77bu); f_00816cb8();
    /* 0078a77b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a77c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078a77e: jl 0x78a78b */ if ((fS!=fO)) goto L_0078a78b;
L_0078a780:; BB(0x0078a780);
    /* 0078a780: push 0x97a920 */ { u32 v = 0x97a920u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a785: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a78au); f_00816cb8();
    /* 0078a78a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078a78b:; BB(0x0078a78b);
    /* 0078a78b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a78c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a791u); f_00815f24();
    /* 0078a791: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0078a798: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a79a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78a79fu); f_005caba4();
    /* 0078a79f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a7a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a7a5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0078a7a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a7aa: je 0x78a7f1 */ if (fZ) goto L_0078a7f1;
L_0078a7ac:; BB(0x0078a7ac);
    /* 0078a7ac: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0078a7b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078a7ba: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a7bf: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a7c4: mov ecx, eax */ r_ecx = r_eax;
    /* 0078a7c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a7c8: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a7cb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a7ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a7d1: call 0x78a7f8 */ r_esp -= 4; W32(r_esp, 0x78a7d6u); f_0078a7f8();
    /* 0078a7d6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0078a7dd:; BB(0x0078a7dd);
    /* 0078a7dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a7e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078a7e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078a7e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078a7ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0078a7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a7f0: ret  */ FN_RET(0x0078a744); r_esp += 4; return;
L_0078a7f1:; BB(0x0078a7f1);
    /* 0078a7f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078a7f3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a7f6: jmp 0x78a7dd */ goto L_0078a7dd;
}

void f_0078a7f8(void) /* sub_78A7F8 */
{
    FN_ENTER(0x0078a7f8);
    /* 0078a7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a7f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a7fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a7fd: push 0x8f4be0 */ { u32 v = 0x8f4be0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a810: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a816: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0078a819: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0078a81c: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0078a81f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078a822: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a828: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078a82b: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0078a82e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a831: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0078a834: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0078a837: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0078a83a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0078a83d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0078a840: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0078a843: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078a846: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0078a84a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0078a84d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78a852u); f_008193cc();
    /* 0078a852: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078a859: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0078a85c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a85f: mov dword ptr [eax], 0xb450f0 */ W32((u32)(r_eax), 0xb450f0u);
    /* 0078a865: mov edx, dword ptr [0x9fd1b0] */ r_edx = R32((u32)(0x9fd1b0u));
    /* 0078a86b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078a86e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078a871: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078a877: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078a879: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0078a87c: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0078a87f: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0078a882: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0078a885: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 0078a888: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0078a88b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078a88e: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0078a895: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078a897: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0078a89a: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0078a8a1: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0078a8a4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0078a8a7: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0078a8aa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078a8ad: mov word ptr [eax + 0x64], cx */ W16((u32)(r_eax+0x64u), (u16)r_ecx);
    /* 0078a8b1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078a8b4: jl 0x78a8c1 */ if ((fS!=fO)) goto L_0078a8c1;
L_0078a8b6:; BB(0x0078a8b6);
    /* 0078a8b6: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0078a8bb: mov word ptr [eax + 0x66], dx */ W16((u32)(r_eax+0x66u), (u16)r_edx);
    /* 0078a8bf: jmp 0x78a8c5 */ goto L_0078a8c5;
L_0078a8c1:; BB(0x0078a8c1);
    /* 0078a8c1: mov word ptr [eax + 0x66], dx */ W16((u32)(r_eax+0x66u), (u16)r_edx);
L_0078a8c5:; BB(0x0078a8c5);
    /* 0078a8c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078a8c8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a8ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a8cb: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0078a8cf: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078a8d5: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0078a8d9: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078a8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a8dd: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78a8e2u); f_00857dec();
    /* 0078a8e2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0078a8e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a8e7: mov word ptr [edx + 0x52], ax */ W16((u32)(r_edx+0x52u), (u16)r_eax);
    /* 0078a8eb: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a8ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a8ef: call 0x789080 */ r_esp -= 4; W32(r_esp, 0x78a8f4u); f_00789080();
    /* 0078a8f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a8f7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0078a8fa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0078a8fd: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0078a900: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078a903: fadd dword ptr [eax*4 + 0x97a8a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a8a8u));
    /* 0078a90a: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0078a90d: call 0x78a5c4 */ r_esp -= 4; W32(r_esp, 0x78a912u); f_0078a5c4();
    /* 0078a912: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0078a915: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0078a918: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078a91b: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0078a91e: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0078a921: fmul dword ptr [0x97a900] */ ST(0) = ST(0) * R_F32((u32)(0x97a900u));
    /* 0078a927: fchs  */ ST(0) = -ST(0);
    /* 0078a929: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078a92b: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 0078a92e: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0078a931: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078a934: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078a93b: mov esp, ebp */ r_esp = r_ebp;
    /* 0078a93d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a93e: ret 0x18 */ FN_RET(0x0078a7f8); r_esp += 28; return;
}

void f_0078a944(void) /* sub_78A944 */
{
    FN_ENTER(0x0078a944);
    /* 0078a944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078a945: mov ebp, esp */ r_ebp = r_esp;
    /* 0078a947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a949: push 0x8f4c16 */ { u32 v = 0x8f4c16u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a94e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078a954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078a95c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078a95f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078a962: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078a965: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078a968: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078a96b: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 0078a96e: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78a973u); f_00816d30();
    /* 0078a973: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a976: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a97bu); f_00816cb8();
    /* 0078a97b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a97c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078a97e: jl 0x78a98b */ if ((fS!=fO)) goto L_0078a98b;
L_0078a980:; BB(0x0078a980);
    /* 0078a980: push 0x97a920 */ { u32 v = 0x97a920u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a985: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a98au); f_00816cb8();
    /* 0078a98a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078a98b:; BB(0x0078a98b);
    /* 0078a98b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a98c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a991u); f_00815f24();
    /* 0078a991: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078a998: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a99a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78a99fu); f_005caba4();
    /* 0078a99f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078a9a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a9a5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0078a9a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a9aa: je 0x78aab4 */ if (fZ) goto L_0078aab4;
L_0078a9b0:; BB(0x0078a9b0);
    /* 0078a9b0: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0078a9b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078a9be: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a9c4: mov ecx, eax */ r_ecx = r_eax;
    /* 0078a9c6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0078a9c9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78a9ceu); f_008193cc();
    /* 0078a9ce: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078a9d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078a9d8: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0078a9db: mov dword ptr [eax], 0xb450f0 */ W32((u32)(r_eax), 0xb450f0u);
    /* 0078a9e1: mov edx, dword ptr [0x9fd1b0] */ r_edx = R32((u32)(0x9fd1b0u));
    /* 0078a9e7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0078a9e9: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078a9ec: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078a9ee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078a9f1: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a9f6: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078a9fc: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0078a9ff: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0078aa02: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0078aa05: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0078aa08: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 0078aa0b: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0078aa12: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0078aa15: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0078aa18: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0078aa1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078aa21: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0078aa24: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0078aa27: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0078aa2a: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0078aa2d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0078aa32: mov word ptr [eax + 0x64], cx */ W16((u32)(r_eax+0x64u), (u16)r_ecx);
    /* 0078aa36: mov word ptr [eax + 0x66], dx */ W16((u32)(r_eax+0x66u), (u16)r_edx);
    /* 0078aa3a: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0078aa3e: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078aa44: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0078aa48: lea ebx, [eax + 0x34] */ r_ebx = (u32)(r_eax+0x34u);
    /* 0078aa4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078aa4c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x78aa51u); f_00857dec();
    /* 0078aa51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078aa54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078aa55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078aa57: mov word ptr [edx + 0x52], ax */ W16((u32)(r_edx+0x52u), (u16)r_eax);
    /* 0078aa5b: call 0x789080 */ r_esp -= 4; W32(r_esp, 0x78aa60u); f_00789080();
    /* 0078aa60: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078aa63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078aa66: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0078aa69: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0078aa6c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078aa6f: fadd dword ptr [eax*4 + 0x97a8a0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a8a0u));
    /* 0078aa76: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0078aa79: call 0x78a5c4 */ r_esp -= 4; W32(r_esp, 0x78aa7eu); f_0078a5c4();
    /* 0078aa7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078aa81: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0078aa84: fmul dword ptr [0x97a8f8] */ ST(0) = ST(0) * R_F32((u32)(0x97a8f8u));
    /* 0078aa8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078aa8c: fchs  */ ST(0) = -ST(0);
    /* 0078aa8e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078aa90: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 0078aa93: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0078aa96: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0078aa9d:; BB(0x0078aa9d);
    /* 0078aa9d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078aaa0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078aaa3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078aaa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078aaa9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078aab0: mov esp, ebp */ r_esp = r_ebp;
    /* 0078aab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078aab3: ret  */ FN_RET(0x0078a944); r_esp += 4; return;
L_0078aab4:; BB(0x0078aab4);
    /* 0078aab4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078aab6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078aab9: jmp 0x78aa9d */ goto L_0078aa9d;
}

void f_0078a9c7(void)
{
    FN_ENTER(0x0078a9c7);
    /* 0078a9c7: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0078a9c8: mov ah, 0xe8 */ r_eax = (r_eax & 0xffff00ffu) | (((0xe8u) & 0xffu) << 8);
    UNSUP(0x0078a9ca, "falls out of decoded code");
}

void f_0078aabc(void) /* sub_78AABC */
{
    FN_ENTER(0x0078aabc);
    /* 0078aabc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078aabd: mov ebp, esp */ r_ebp = r_esp;
    /* 0078aabf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078aac1: push 0x8f4c3c */ { u32 v = 0x8f4c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078aac6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078aacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078aacd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078aad4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078aad7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078aada: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078aadd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078aae0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078aae3: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 0078aae6: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78aaebu); f_00816d30();
    /* 0078aaeb: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078aaee: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78aaf3u); f_00816cb8();
    /* 0078aaf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078aaf4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078aaf6: jl 0x78ab03 */ if ((fS!=fO)) goto L_0078ab03;
L_0078aaf8:; BB(0x0078aaf8);
    /* 0078aaf8: push 0x97a920 */ { u32 v = 0x97a920u; r_esp -= 4; W32(r_esp, v); }
    /* 0078aafd: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78ab02u); f_00816cb8();
    /* 0078ab02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078ab03:; BB(0x0078ab03);
    /* 0078ab03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ab04: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78ab09u); f_00815f24();
    /* 0078ab09: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0078ab10: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ab12: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78ab17u); f_005caba4();
    /* 0078ab17: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078ab1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ab1d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0078ab20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ab22: je 0x78ab6b */ if (fZ) goto L_0078ab6b;
L_0078ab24:; BB(0x0078ab24);
    /* 0078ab24: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0078ab2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078ab32: movzx eax, word ptr [ebp + 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0x20u));
    /* 0078ab36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078ab39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ab3a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ab3f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ab42: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ab45: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ab48: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ab4b: call 0x78a7f8 */ r_esp -= 4; W32(r_esp, 0x78ab50u); f_0078a7f8();
    /* 0078ab50: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0078ab57:; BB(0x0078ab57);
    /* 0078ab57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078ab5a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078ab5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078ab60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078ab67: mov esp, ebp */ r_esp = r_ebp;
    /* 0078ab69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078ab6a: ret  */ FN_RET(0x0078aabc); r_esp += 4; return;
L_0078ab6b:; BB(0x0078ab6b);
    /* 0078ab6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ab6d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078ab70: jmp 0x78ab57 */ goto L_0078ab57;
}

void f_0078ab74(void) /* sub_78AB74 */
{
    FN_ENTER(0x0078ab74);
    /* 0078ab74: movsx eax, word ptr [ecx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 0078ab78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ab7a: jne 0x78aba1 */ if (!fZ) goto L_0078aba1;
L_0078ab7c:; BB(0x0078ab7c);
    /* 0078ab7c: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0078ab7f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078ab82: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0078ab85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ab87: jge 0x78abce */ if ((fS==fO)) goto L_0078abce;
L_0078ab89:; BB(0x0078ab89);
    /* 0078ab89: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0078ab8d: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ab93: mov eax, 1 */ r_eax = 0x1u;
    /* 0078ab98: mov word ptr [ecx + 0x64], ax */ W16((u32)(r_ecx+0x64u), (u16)r_eax);
    /* 0078ab9c: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0078aba0: ret  */ FN_RET(0x0078ab74); r_esp += 4; return;
L_0078aba1:; BB(0x0078aba1);
    /* 0078aba1: fld dword ptr [0x97a8f4] */ FPUSH(R_F32((u32)(0x97a8f4u)));
    /* 0078aba7: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0078abaa: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0078abad: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0078abb0: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0078abb3: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0078abb6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078abb9: cmp edx, dword ptr [ecx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078abbc: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 0078abbf: jl 0x78abce */ if ((fS!=fO)) goto L_0078abce;
L_0078abc1:; BB(0x0078abc1);
    /* 0078abc1: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0078abc5: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078abca: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_0078abce:; BB(0x0078abce);
    /* 0078abce: ret  */ FN_RET(0x0078ab74); r_esp += 4; return;
}

void f_0078abd0(void) /* sub_78ABD0 */
{
    FN_ENTER(0x0078abd0);
    /* 0078abd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078abd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078abd2: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078abd5: mov esi, ecx */ r_esi = r_ecx;
    /* 0078abd7: movsx eax, word ptr [esi + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x64u));
    /* 0078abdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078abdd: je 0x78af24 */ if (fZ) goto L_0078af24;
L_0078abe3:; BB(0x0078abe3);
    /* 0078abe3: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 0078abe8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078abec: movzx eax, word ptr [esi + 0x66] */ r_eax = (u32)R16((u32)(r_esi+0x66u));
    /* 0078abf0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078abf2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078abf4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078abf8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078abfb: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ac00: je 0x78ac1f */ if (fZ) goto L_0078ac1f;
L_0078ac02:; BB(0x0078ac02);
    /* 0078ac02: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x78ac07u); f_007bb6d0();
    /* 0078ac07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ac08: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x78ac0du); f_004d30cc();
    /* 0078ac0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078ac0e: movzx edx, word ptr [esi + 0x66] */ r_edx = (u32)R16((u32)(r_esi+0x66u));
    /* 0078ac12: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0078ac15: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ac17: je 0x78ac1f */ if (fZ) goto L_0078ac1f;
L_0078ac19:; BB(0x0078ac19);
    /* 0078ac19: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078ac1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ac1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ac1e: ret  */ FN_RET(0x0078abd0); r_esp += 4; return;
L_0078ac1f:; BB(0x0078ac1f);
    /* 0078ac1f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0078ac24: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x78ac29u); f_0082d990();
    /* 0078ac29: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0078ac2e: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 0078ac34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ac36: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x78ac3bu); f_0082d8bc();
    /* 0078ac3b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0078ac40: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0078ac46: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ac48: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x78ac4du); f_0082e9e4();
    /* 0078ac4d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0078ac52: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 0078ac58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ac5a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x78ac5fu); f_00830c04();
    /* 0078ac5f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078ac62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ac63: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0078ac67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ac69: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x78ac6eu); f_0082eab8();
    /* 0078ac6e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78ac73u); f_0082da80();
    /* 0078ac73: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0078ac78: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0078ac7b: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 0078ac81: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 0078ac84: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 0078ac8a: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0078ac8d: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 0078ac93: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078ac95: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0078ac99: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0078ac9d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0078aca1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x78aca6u); f_00807db8();
    /* 0078aca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078aca8: jne 0x78acd1 */ if (!fZ) goto L_0078acd1;
L_0078acaa:; BB(0x0078acaa);
    /* 0078acaa: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0078acae: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078acb0: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0078acb4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078acb6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078acb8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0078acbc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078acbe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078acc0: fcomp dword ptr [0x97a8f0] */ fx_compare(ST(0), R_F32((u32)(0x97a8f0u))); FPOP();
    /* 0078acc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078acc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078acc9: jbe 0x78acd1 */ if ((fC||fZ)) goto L_0078acd1;
L_0078accb:; BB(0x0078accb);
    /* 0078accb: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078acce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078accf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078acd0: ret  */ FN_RET(0x0078abd0); r_esp += 4; return;
L_0078acd1:; BB(0x0078acd1);
    /* 0078acd1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078acd4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0078acd8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x78acddu); f_0082f9e0();
    /* 0078acdd: fcomp dword ptr [0x97a8ec] */ fx_compare(ST(0), R_F32((u32)(0x97a8ecu))); FPOP();
    /* 0078ace3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078ace5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078ace6: ja 0x78acee */ if ((!fC&&!fZ)) goto L_0078acee;
L_0078ace8:; BB(0x0078ace8);
    /* 0078ace8: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078aceb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078acec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078aced: ret  */ FN_RET(0x0078abd0); r_esp += 4; return;
L_0078acee:; BB(0x0078acee);
    /* 0078acee: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78acf3u); f_0082d7b0();
    /* 0078acf3: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0078acf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078acf8: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 0078acfb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078acfd: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x78ad02u); f_0082f09c();
    /* 0078ad02: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78ad07u); f_0082da80();
    /* 0078ad07: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0078ad0b: fadd dword ptr [esi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x28u));
    /* 0078ad0e: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0078ad12: fadd dword ptr [esi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2cu));
    /* 0078ad15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078ad17: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 0078ad1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0078ad1f: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0078ad23: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0078ad27: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x78ad2cu); f_007bb6d0();
    /* 0078ad2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ad2d: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x78ad32u); f_007199e0();
    /* 0078ad32: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0078ad36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ad39: fild dword ptr [esi + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x58u)));
    /* 0078ad3c: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 0078ad3f: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 0078ad43: fadd dword ptr [0x97a8e4] */ ST(0) = ST(0) + R_F32((u32)(0x97a8e4u));
    /* 0078ad49: fdivr dword ptr [0x97a8e8] */ ST(0) = R_F32((u32)(0x97a8e8u)) / ST(0);
    /* 0078ad4f: fld dword ptr [0x97a8e0] */ FPUSH(R_F32((u32)(0x97a8e0u)));
    /* 0078ad55: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078ad57: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0078ad5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078ad5d: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0078ad61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078ad63: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0078ad67: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078ad69: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078ad6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078ad6d: lea ebx, [esi + 0x34] */ r_ebx = (u32)(r_esi+0x34u);
    /* 0078ad70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078ad71: jbe 0x78ad87 */ if ((fC||fZ)) goto L_0078ad87;
L_0078ad73:; BB(0x0078ad73);
    /* 0078ad73: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0078ad77: fsub dword ptr [esp + 0x70] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x70u));
    /* 0078ad7b: fmul dword ptr [0x97a8d8] */ ST(0) = ST(0) * R_F32((u32)(0x97a8d8u));
    /* 0078ad81: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0078ad85: jmp 0x78ad91 */ goto L_0078ad91;
L_0078ad87:; BB(0x0078ad87);
    /* 0078ad87: fld dword ptr [0x97a8dc] */ FPUSH(R_F32((u32)(0x97a8dcu)));
    /* 0078ad8d: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
L_0078ad91:; BB(0x0078ad91);
    /* 0078ad91: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x78ad96u); f_007a93d8();
    /* 0078ad96: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78ad9bu); f_0082dbac();
    /* 0078ad9b: mov ecx, esi */ r_ecx = r_esi;
    /* 0078ad9d: call 0x78a5c4 */ r_esp -= 4; W32(r_esp, 0x78ada2u); f_0078a5c4();
    /* 0078ada2: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0078ada6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078adab: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x78adb0u); f_0082bb30();
    /* 0078adb0: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0078adb6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78adbbu); f_00829cc8();
    /* 0078adbb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0078adbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078adc0: je 0x78af15 */ if (fZ) goto L_0078af15;
L_0078adc6:; BB(0x0078adc6);
    /* 0078adc6: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
L_0078adca:; BB(0x0078adca);
    /* 0078adca: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0078adce: movzx edi, al */ r_edi = (u32)(u8)r_eax;
    /* 0078add1: fcomp dword ptr [0x97a8ec] */ fx_compare(ST(0), R_F32((u32)(0x97a8ecu))); FPOP();
    /* 0078add7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078add9: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078addc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078addd: jbe 0x78af06 */ if ((fC||fZ)) goto L_0078af06;
L_0078ade3:; BB(0x0078ade3);
    /* 0078ade3: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0078ade7: fcomp dword ptr [0x97a8d4] */ fx_compare(ST(0), R_F32((u32)(0x97a8d4u))); FPOP();
    /* 0078aded: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078adef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078adf0: jae 0x78ae26 */ if (!fC) goto L_0078ae26;
L_0078adf2:; BB(0x0078adf2);
    /* 0078adf2: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0078adf6: fmul dword ptr [0x97a8d0] */ ST(0) = ST(0) * R_F32((u32)(0x97a8d0u));
    /* 0078adfc: fmul dword ptr [0x97a8cc] */ ST(0) = ST(0) * R_F32((u32)(0x97a8ccu));
    /* 0078ae02: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0078ae06: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0078ae0b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ae10: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0078ae14: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0078ae18: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078ae1c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0078ae20: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0078ae24: jmp 0x78ae2b */ goto L_0078ae2b;
L_0078ae26:; BB(0x0078ae26);
    /* 0078ae26: mov edx, 0xff */ r_edx = 0xffu;
L_0078ae2b:; BB(0x0078ae2b);
    /* 0078ae2b: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0078ae2f: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 0078ae33: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0078ae36: fadd dword ptr [edx*4 + 0x97a898] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97a898u));
    /* 0078ae3d: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 0078ae41: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0078ae45: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0078ae4a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ae4f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0078ae53: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0078ae57: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078ae5b: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0078ae5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ae61: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0078ae65: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0078ae68: or edx, dword ptr [esi + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078ae6b: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78ae70u); f_0082bb60();
    /* 0078ae70: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0078ae74: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0078ae78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078ae7a: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0078ae7e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0078ae82: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0078ae86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ae87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ae88: call 0x7893a4 */ r_esp -= 4; W32(r_esp, 0x78ae8du); f_007893a4();
    /* 0078ae8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ae90: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0078ae94: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0078ae98: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0078ae9a: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0078ae9e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0078aea0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078aea2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078aea4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0078aea8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0078aeac: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078aeae: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0078aeb2: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0078aeb4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078aeb6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078aeb8: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0078aebc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078aebd: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0078aec1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078aec4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0078aec8: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78aecdu); f_0082b440();
    /* 0078aecd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078aece: call 0x789044 */ r_esp -= 4; W32(r_esp, 0x78aed3u); f_00789044();
    /* 0078aed3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078aed4: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0078aed8: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0078aedc: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0078aee0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0078aee3: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0078aee7: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 0078aeeb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0078aeed: fdiv dword ptr [esi + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x30u));
    /* 0078aef0: fmul dword ptr [0x97a8c8] */ ST(0) = ST(0) * R_F32((u32)(0x97a8c8u));
    /* 0078aef6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078aef8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078aefa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078aefc: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0078af00: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078af02: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_0078af06:; BB(0x0078af06);
    /* 0078af06: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0078af09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078af0b: jne 0x78adca */ if (!fZ) goto L_0078adca;
L_0078af11:; BB(0x0078af11);
    /* 0078af11: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_0078af15:; BB(0x0078af15);
    /* 0078af15: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78af1au); f_004ac444();
    /* 0078af1a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x78af1fu); f_0082dab0();
    /* 0078af1f: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x78af24u); f_007a9318();
L_0078af24:; BB(0x0078af24);
    /* 0078af24: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078af27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078af28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078af29: ret  */ FN_RET(0x0078abd0); r_esp += 4; return;
}

void f_0078af2c(void) /* sub_78AF2C */
{
    FN_ENTER(0x0078af2c);
    /* 0078af2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078af2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078af2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078af31: push 0x8f4c58 */ { u32 v = 0x8f4c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0078af36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078af3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078af3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078af44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078af47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078af4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078af4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078af50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078af53: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0078af56: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0078af59: mov eax, ecx */ r_eax = r_ecx;
    /* 0078af5b: mov dword ptr [eax], 0xb45150 */ W32((u32)(r_eax), 0xb45150u);
    /* 0078af61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078af68: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x78af6du); f_004f7078();
    /* 0078af6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078af70: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078af72: jne 0x78af84 */ if (!fZ) goto L_0078af84;
L_0078af74:; BB(0x0078af74);
    /* 0078af74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078af77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078af7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0078af80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078af81: ret 4 */ FN_RET(0x0078af2c); r_esp += 8; return;
L_0078af84:; BB(0x0078af84);
    /* 0078af84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078af87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078af88: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78af8du); f_005c2f74();
    /* 0078af8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078af8e: jmp 0x78af74 */ goto L_0078af74;
}

void f_0078af90(void) /* sub_78AF90 */
{
    FN_ENTER(0x0078af90);
    /* 0078af90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078af91: mov edi, ecx */ r_edi = r_ecx;
    /* 0078af93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0078af95: mov ecx, edi */ r_ecx = r_edi;
    /* 0078af97: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x78af9au); call_ind(t); }
    /* 0078af9a: mov ecx, edi */ r_ecx = r_edi;
    /* 0078af9c: call 0x4f7100 */ r_esp -= 4; W32(r_esp, 0x78afa1u); f_004f7100();
    /* 0078afa1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078afa2: ret  */ FN_RET(0x0078af90); r_esp += 4; return;
}

void f_0078afa4(void) /* sub_78AFA4 */
{
    FN_ENTER(0x0078afa4);
    /* 0078afa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078afa5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078afa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078afa9: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x78afaeu); f_004f70d0();
    /* 0078afae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078afb0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x78afb5u); f_0068d5a8();
    /* 0078afb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078afb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078afb8: je 0x78afe2 */ if (fZ) goto L_0078afe2;
L_0078afba:; BB(0x0078afba);
    /* 0078afba: fld dword ptr [0x97a930] */ FPUSH(R_F32((u32)(0x97a930u)));
    /* 0078afc0: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0078afc3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078afc5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0078afc8: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0078afcb: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0078afce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078afd0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0078afd3: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0078afd6: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0078afd9: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 0078afdc: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0078afdf: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_0078afe2:; BB(0x0078afe2);
    /* 0078afe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078afe3: ret  */ FN_RET(0x0078afa4); r_esp += 4; return;
}

void f_0078afe4(void)
{
    FN_ENTER(0x0078afe4);
    /* 0078afe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078afe5: mov ebp, esp */ r_ebp = r_esp;
    /* 0078afe7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078afe9: push 0x8f4c80 */ { u32 v = 0x8f4c80u; r_esp -= 4; W32(r_esp, v); }
    /* 0078afee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078aff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078aff5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078affc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078afff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078b002: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078b005: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078b008: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078b00b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b00d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078b014: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78b019u); f_005caba4();
    /* 0078b019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b01a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078b01d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b01f: je 0x78b044 */ if (fZ) goto L_0078b044;
L_0078b021:; BB(0x0078b021);
    /* 0078b021: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078b028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078b02f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b035: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b038: call 0x78b054 */ r_esp -= 4; W32(r_esp, 0x78b03du); f_0078b054();
    /* 0078b03d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0078b044:; BB(0x0078b044);
    /* 0078b044: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078b047: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078b04e: mov esp, ebp */ r_esp = r_ebp;
    /* 0078b050: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b051: ret  */ FN_RET(0x0078afe4); r_esp += 4; return;
}

