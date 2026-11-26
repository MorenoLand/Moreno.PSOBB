#include "protos.h"

void f_0043a190(void) /* sub_43A190 */
{
    FN_ENTER(0x0043a190);
    /* 0043a190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a191: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a194: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043a196: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 0043a19c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a19f: je 0x43a28b */ if (fZ) goto L_0043a28b;
L_0043a1a5:; BB(0x0043a1a5);
    /* 0043a1a5: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0043a1ab: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 0043a1b1: fcom dword ptr [0x8fd7e8] */ fx_compare(ST(0), R_F32((u32)(0x8fd7e8u))); 
    /* 0043a1b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043a1b9: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0043a1bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043a1c0: jb 0x43a1c6 */ if (fC) goto L_0043a1c6;
L_0043a1c2:; BB(0x0043a1c2);
    /* 0043a1c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043a1c4: jmp 0x43a21c */ goto L_0043a21c;
L_0043a1c6:; BB(0x0043a1c6);
    /* 0043a1c6: fld dword ptr [0x8fd7e4] */ FPUSH(R_F32((u32)(0x8fd7e4u)));
    /* 0043a1cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043a1ce: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0043a1d2: or edx, 0x8820 */ {  u32 a = r_edx; u32 b = 0x8820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043a1d8: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0043a1e0: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0043a1e6: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0043a1ee: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0043a1f6: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0043a1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a1fb: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x43a200u); f_0082d710();
    /* 0043a200: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a205: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a20a: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x43a20fu); f_0082d6fc();
    /* 0043a20f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a212: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0043a217: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x43a21cu); f_0082e1c4();
L_0043a21c:; BB(0x0043a21c);
    /* 0043a21c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43a221u); f_0082d7b0();
    /* 0043a221: mov ecx, dword ptr [0xa4426c] */ r_ecx = R32((u32)(0xa4426cu));
    /* 0043a227: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x43a22cu); f_00829cc8();
    /* 0043a22c: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0043a22f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43a234u); f_0082d838();
    /* 0043a234: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0043a237: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a239: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43a23eu); f_0082d8bc();
    /* 0043a23e: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 0043a241: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a243: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43a248u); f_0082e9e4();
    /* 0043a248: mov eax, dword ptr [0xa44270] */ r_eax = R32((u32)(0xa44270u));
    /* 0043a24d: mov ebp, dword ptr [ebp + 0xac] */ r_ebp = R32((u32)(r_ebp+0xacu));
    /* 0043a253: mov ecx, dword ptr [ebp*4 + 0x8fd7cc] */ r_ecx = R32((u32)(r_ebp*4+0x8fd7ccu));
    /* 0043a25a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0043a260: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a262: mov ecx, dword ptr [edx + ecx*8 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 0043a266: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x43a26bu); f_00831758();
    /* 0043a26b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43a270u); f_0082da80();
    /* 0043a270: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0043a275: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0043a27a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a27c: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a281: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x43a286u); f_0082d6fc();
    /* 0043a286: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a28a: ret  */ FN_RET(0x0043a190); r_esp += 4; return;
L_0043a28b:; BB(0x0043a28b);
    /* 0043a28b: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 0043a291: fld dword ptr [eax*4 + 0xa44240] */ FPUSH(R_F32((u32)(r_eax*4+0xa44240u)));
    /* 0043a298: fmul dword ptr [0x8fd7ec] */ ST(0) = ST(0) * R_F32((u32)(0x8fd7ecu));
    /* 0043a29e: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0043a2a2: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0043a2aa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043a2ad: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0043a2b0: lea ecx, [ebp + 0x44] */ r_ecx = (u32)(r_ebp+0x44u);
    /* 0043a2b3: lea eax, [ebp + 0x9c] */ r_eax = (u32)(r_ebp+0x9cu);
    /* 0043a2b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a2ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a2bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a2be: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x43a2c3u); f_00520d18();
    /* 0043a2c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a2c6: jmp 0x43a1a5 */ goto L_0043a1a5;
}

void f_0043a2cc(void) /* sub_43A2CC */
{
    FN_ENTER(0x0043a2cc);
    /* 0043a2cc: mov eax, dword ptr [0x8fcc10] */ r_eax = R32((u32)(0x8fcc10u));
    /* 0043a2d1: mov dword ptr [0xa4425c], 0x3f800000 */ W32((u32)(0xa4425cu), 0x3f800000u);
    /* 0043a2db: mov dword ptr [0xa44260], 0x41000000 */ W32((u32)(0xa44260u), 0x41000000u);
    /* 0043a2e5: mov dword ptr [0xa44258], eax */ W32((u32)(0xa44258u), r_eax);
    /* 0043a2ea: mov dword ptr [0xa44264], 0x3fc00000 */ W32((u32)(0xa44264u), 0x3fc00000u);
    /* 0043a2f4: mov dword ptr [0xa44240], 0x41700000 */ W32((u32)(0xa44240u), 0x41700000u);
    /* 0043a2fe: mov dword ptr [0xa44244], 0x41700000 */ W32((u32)(0xa44244u), 0x41700000u);
    /* 0043a308: mov dword ptr [0xa44248], 0x41280000 */ W32((u32)(0xa44248u), 0x41280000u);
    /* 0043a312: mov dword ptr [0xa4424c], 0x41700000 */ W32((u32)(0xa4424cu), 0x41700000u);
    /* 0043a31c: mov dword ptr [0xa44250], 0x3ee66667 */ W32((u32)(0xa44250u), 0x3ee66667u);
    /* 0043a326: mov dword ptr [0xa44254], 0x3f99999a */ W32((u32)(0xa44254u), 0x3f99999au);
    /* 0043a330: ret  */ FN_RET(0x0043a2cc); r_esp += 4; return;
}

void f_0043a334(void) /* sub_43A334 */
{
    FN_ENTER(0x0043a334);
    /* 0043a334: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a335: mov ecx, dword ptr [0xa44270] */ r_ecx = R32((u32)(0xa44270u));
    /* 0043a33b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a33d: je 0x43a36b */ if (fZ) goto L_0043a36b;
L_0043a33f:; BB(0x0043a33f);
    /* 0043a33f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0043a342: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a344: mov ebx, eax */ r_ebx = r_eax;
    /* 0043a346: jmp 0x43a34e */ goto L_0043a34e;
L_0043a348:; BB(0x0043a348);
    /* 0043a348: mov ecx, dword ptr [0xa44270] */ r_ecx = R32((u32)(0xa44270u));
L_0043a34e:; BB(0x0043a34e);
    /* 0043a34e: push dword ptr [ebx + 0x9a4940] */ { u32 v = R32((u32)(r_ebx+0x9a4940u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a354: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x43a359u); f_005b8610();
    /* 0043a359: mov ecx, eax */ r_ecx = r_eax;
    /* 0043a35b: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x43a360u); f_00834f64();
    /* 0043a360: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a363: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0043a366: jb 0x43a348 */ if (fC) goto L_0043a348;
L_0043a368:; BB(0x0043a368);
    /* 0043a368: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0043a36b:; BB(0x0043a36b);
    /* 0043a36b: mov ecx, dword ptr [0xa4426c] */ r_ecx = R32((u32)(0xa4426cu));
    /* 0043a371: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x43a376u); f_00829de0();
    /* 0043a376: mov ecx, dword ptr [0xa44270] */ r_ecx = R32((u32)(0xa44270u));
    /* 0043a37c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a37e: je 0x43a387 */ if (fZ) goto L_0043a387;
L_0043a380:; BB(0x0043a380);
    /* 0043a380: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a382: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x43a387u); f_004066a8();
L_0043a387:; BB(0x0043a387);
    /* 0043a387: mov dword ptr [0xa44270], 0 */ W32((u32)(0xa44270u), 0x0u);
    /* 0043a391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a392: ret  */ FN_RET(0x0043a334); r_esp += 4; return;
}

void f_0043a394(void) /* sub_43A394 */
{
    FN_ENTER(0x0043a394);
    /* 0043a394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a395: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a399: push 0x8ce0ac */ { u32 v = 0x8ce0acu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a39e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043a3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043a3ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a3af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043a3b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043a3b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043a3b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043a3bb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0043a3c7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x43a3ccu); f_008581c5();
    /* 0043a3cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a3cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043a3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3d2: je 0x43a496 */ if (fZ) goto L_0043a496;
L_0043a3d8:; BB(0x0043a3d8);
    /* 0043a3d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0043a3df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a3e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a3e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3ee: push 0x9a4980 */ { u32 v = 0x9a4980u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a3f5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x43a3fau); f_005b7a84();
    /* 0043a3fa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a3fd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043a404:; BB(0x0043a404);
    /* 0043a404: mov dword ptr [0xa44270], eax */ W32((u32)(0xa44270u), r_eax);
    /* 0043a409: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043a410: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0043a416: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0043a419: mov dword ptr [0xa4426c], edx */ W32((u32)(0xa4426cu), r_edx);
    /* 0043a41f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x43a424u); f_00520e6c();
    /* 0043a424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a426: je 0x43a43d */ if (fZ) goto L_0043a43d;
L_0043a428:; BB(0x0043a428);
    /* 0043a428: push dword ptr [0xa4426c] */ { u32 v = R32((u32)(0xa4426cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a42e: push 0x8fda28 */ { u32 v = 0x8fda28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a433: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x43a438u); f_00800bc0();
    /* 0043a438: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a43b: jmp 0x43a450 */ goto L_0043a450;
L_0043a43d:; BB(0x0043a43d);
    /* 0043a43d: push dword ptr [0xa4426c] */ { u32 v = R32((u32)(0xa4426cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a443: push 0x8fda40 */ { u32 v = 0x8fda40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a448: call 0x800bc0 */ r_esp -= 4; W32(r_esp, 0x43a44du); f_00800bc0();
    /* 0043a44d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043a450:; BB(0x0043a450);
    /* 0043a450: mov ecx, dword ptr [0xa44270] */ r_ecx = R32((u32)(0xa44270u));
    /* 0043a456: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a458: je 0x43a47f */ if (fZ) goto L_0043a47f;
L_0043a45a:; BB(0x0043a45a);
    /* 0043a45a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043a45c:; BB(0x0043a45c);
    /* 0043a45c: push dword ptr [ebx*4 + 0x9a4940] */ { u32 v = R32((u32)(r_ebx*4+0x9a4940u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a463: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x43a468u); f_005b8610();
    /* 0043a468: mov ecx, eax */ r_ecx = r_eax;
    /* 0043a46a: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x43a46fu); f_00834c58();
    /* 0043a46f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a472: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043a475: jae 0x43a47f */ if (!fC) goto L_0043a47f;
L_0043a477:; BB(0x0043a477);
    /* 0043a477: mov ecx, dword ptr [0xa44270] */ r_ecx = R32((u32)(0xa44270u));
    /* 0043a47d: jmp 0x43a45c */ goto L_0043a45c;
L_0043a47f:; BB(0x0043a47f);
    /* 0043a47f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043a482: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043a485: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043a488: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a48b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043a492: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a495: ret  */ FN_RET(0x0043a394); r_esp += 4; return;
L_0043a496:; BB(0x0043a496);
    /* 0043a496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a498: jmp 0x43a404 */ goto L_0043a404;
}

void f_0043a4a0(void) /* sub_43A4A0 */
{
    FN_ENTER(0x0043a4a0);
    /* 0043a4a0: call 0x43aeac */ r_esp -= 4; W32(r_esp, 0x43a4a5u); f_0043aeac();
    /* 0043a4a5: call 0x43aa08 */ r_esp -= 4; W32(r_esp, 0x43a4aau); f_0043aa08();
    /* 0043a4aa: call 0x43a5b8 */ r_esp -= 4; W32(r_esp, 0x43a4afu); f_0043a5b8();
    /* 0043a4af: ret  */ FN_RET(0x0043a4a0); r_esp += 4; return;
}

void f_0043a4b0(void) /* sub_43A4B0 */
{
    FN_ENTER(0x0043a4b0);
    /* 0043a4b0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x43a4b5u); f_0061cdb0();
    /* 0043a4b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x43a4bau); f_0061cdb0();
    /* 0043a4ba: call 0x43a334 */ r_esp -= 4; W32(r_esp, 0x43a4bfu); f_0043a334();
    /* 0043a4bf: ret  */ FN_RET(0x0043a4b0); r_esp += 4; return;
}

void f_0043a4c0(void) /* sub_43A4C0 */
{
    FN_ENTER(0x0043a4c0);
    /* 0043a4c0: call 0x43a394 */ r_esp -= 4; W32(r_esp, 0x43a4c5u); f_0043a394();
    /* 0043a4c5: call 0x43c4d0 */ r_esp -= 4; W32(r_esp, 0x43a4cau); f_0043c4d0();
    /* 0043a4ca: call 0x43a80c */ r_esp -= 4; W32(r_esp, 0x43a4cfu); f_0043a80c();
    /* 0043a4cf: ret  */ FN_RET(0x0043a4c0); r_esp += 4; return;
}

void f_0043a4d0(void) /* sub_43A4D0 */
{
    FN_ENTER(0x0043a4d0);
    /* 0043a4d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043a4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043a4d5: call 0x43a4f4 */ r_esp -= 4; W32(r_esp, 0x43a4dau); f_0043a4f4();
    /* 0043a4da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043a4de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a4e0: jne 0x43a4e6 */ if (!fZ) goto L_0043a4e6;
L_0043a4e2:; BB(0x0043a4e2);
    /* 0043a4e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a4e3: ret 4 */ FN_RET(0x0043a4d0); r_esp += 8; return;
L_0043a4e6:; BB(0x0043a4e6);
    /* 0043a4e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43a4ecu); f_005c2f74();
    /* 0043a4ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a4ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a4ee: ret 4 */ FN_RET(0x0043a4d0); r_esp += 8; return;
}

void f_0043a4f4(void) /* sub_43A4F4 */
{
    FN_ENTER(0x0043a4f4);
    /* 0043a4f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a4f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4f9: push 0x8ce0c8 */ { u32 v = 0x8ce0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a4fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043a504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a505: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043a50c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a50f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043a512: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043a515: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043a518: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043a51b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043a51e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a521: mov dword ptr [ecx], 0xaf5240 */ W32((u32)(r_ecx), 0xaf5240u);
    /* 0043a527: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043a52e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43a533u); f_008171e8();
    /* 0043a533: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a536: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043a53d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a53f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a540: ret  */ FN_RET(0x0043a4f4); r_esp += 4; return;
}

void f_0043a544(void) /* sub_43A544 */
{
    FN_ENTER(0x0043a544);
    /* 0043a544: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a545: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043a547: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043a549: call 0x43a568 */ r_esp -= 4; W32(r_esp, 0x43a54eu); f_0043a568();
    /* 0043a54e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043a552: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a554: jne 0x43a55a */ if (!fZ) goto L_0043a55a;
L_0043a556:; BB(0x0043a556);
    /* 0043a556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a557: ret 4 */ FN_RET(0x0043a544); r_esp += 8; return;
L_0043a55a:; BB(0x0043a55a);
    /* 0043a55a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a55b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43a560u); f_005c2f74();
    /* 0043a560: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a561: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a562: ret 4 */ FN_RET(0x0043a544); r_esp += 8; return;
}

void f_0043a568(void) /* sub_43A568 */
{
    FN_ENTER(0x0043a568);
    /* 0043a568: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a569: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a56b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a56d: push 0x8ce0e4 */ { u32 v = 0x8ce0e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a572: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043a578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a579: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043a580: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a583: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043a586: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043a589: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043a58c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043a58f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043a592: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a595: mov dword ptr [ecx], 0xaf5250 */ W32((u32)(r_ecx), 0xaf5250u);
    /* 0043a59b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043a5a2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43a5a7u); f_008171e8();
    /* 0043a5a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a5aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043a5b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a5b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a5b4: ret  */ FN_RET(0x0043a568); r_esp += 4; return;
}

void f_0043a5b8(void) /* sub_43A5B8 */
{
    FN_ENTER(0x0043a5b8);
    /* 0043a5b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a5bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5bd: push 0x8ce10c */ { u32 v = 0x8ce10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043a5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043a5d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a5d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043a5d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043a5d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043a5dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043a5df: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a5e1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0043a5e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43a5edu); f_005caba4();
    /* 0043a5ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a5ee: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043a5f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a5f3: je 0x43a618 */ if (fZ) goto L_0043a618;
L_0043a5f5:; BB(0x0043a5f5);
    /* 0043a5f5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0043a5fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043a603: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a609: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a60c: call 0x43a628 */ r_esp -= 4; W32(r_esp, 0x43a611u); f_0043a628();
    /* 0043a611: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043a618:; BB(0x0043a618);
    /* 0043a618: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a61b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043a622: mov esp, ebp */ r_esp = r_ebp;
    /* 0043a624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a625: ret  */ FN_RET(0x0043a5b8); r_esp += 4; return;
}

void f_0043a628(void) /* sub_43A628 */
{
    FN_ENTER(0x0043a628);
    /* 0043a628: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a629: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043a62b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a62f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043a631: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43a636u); f_008193cc();
    /* 0043a636: mov dword ptr [ebx], 0xaf5240 */ W32((u32)(r_ebx), 0xaf5240u);
    /* 0043a63c: mov edx, dword ptr [0x9a49a0] */ r_edx = R32((u32)(0x9a49a0u));
    /* 0043a642: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0043a645: mov eax, ebx */ r_eax = r_ebx;
    /* 0043a647: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a648: ret 4 */ FN_RET(0x0043a628); r_esp += 8; return;
}

void f_0043a64c(void) /* sub_43A64C */
{
    FN_ENTER(0x0043a64c);
    /* 0043a64c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a64d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a64e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a64f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a650: mov ebp, 0xa44640 */ r_ebp = 0xa44640u;
    /* 0043a655: mov edi, 0xa44280 */ r_edi = 0xa44280u;
    /* 0043a65a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43a65fu); f_0082d7b0();
    /* 0043a65f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a661: mov ebx, edi */ r_ebx = r_edi;
    /* 0043a663: mov edi, eax */ r_edi = r_eax;
L_0043a665:; BB(0x0043a665);
    /* 0043a665: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a667: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x43a66cu); f_00830cd8();
    /* 0043a66c: mov ecx, dword ptr [edi + 0xa446ec] */ r_ecx = R32((u32)(r_edi+0xa446ecu));
    /* 0043a672: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x43a677u); f_0082dcbc();
    /* 0043a677: fld dword ptr [0x8fda74] */ FPUSH(R_F32((u32)(0x8fda74u)));
    /* 0043a67d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043a67f: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a682: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043a686: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a688: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0043a68f: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0043a697: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43a69cu); f_00830b74();
    /* 0043a69c: mov esi, dword ptr [edi + 0xa446ec] */ r_esi = R32((u32)(r_edi+0xa446ecu));
    /* 0043a6a2: add esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043a6a8: mov dword ptr [edi + 0xa446ec], esi */ W32((u32)(r_edi+0xa446ecu), r_esi);
    /* 0043a6ae: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0043a6b1: add edx, 0x1333 */ {  u32 a = r_edx; u32 b = 0x1333u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a6b7: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0043a6ba: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043a6bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a6bf: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43a6c4u); f_0082e9e4();
    /* 0043a6c4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0043a6c7: add edx, 0x555 */ {  u32 a = r_edx; u32 b = 0x555u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a6cd: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0043a6d0: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043a6d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a6d5: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43a6dau); f_0082e9e4();
    /* 0043a6da: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0043a6dc:; BB(0x0043a6dc);
    /* 0043a6dc: lea edx, [esi + 0xa446a0] */ r_edx = (u32)(r_esi+0xa446a0u);
    /* 0043a6e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043a6e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a6e5: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a6e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a6ea: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x43a6efu); f_00830aa0();
    /* 0043a6ef: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043a6f2: cmp esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a6f5: jl 0x43a6dc */ if ((fS!=fO)) goto L_0043a6dc;
L_0043a6f7:; BB(0x0043a6f7);
    /* 0043a6f7: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043a6fa: cmp edi, 0x28 */ {  u32 a = r_edi; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a6fd: jl 0x43a665 */ if ((fS!=fO)) goto L_0043a665;
L_0043a703:; BB(0x0043a703);
    /* 0043a703: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43a708u); f_0082da80();
    /* 0043a708: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a70a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a70b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043a70c: ret  */ FN_RET(0x0043a64c); r_esp += 4; return;
}

void f_0043a710(void) /* sub_43A710 */
{
    FN_ENTER(0x0043a710);
    /* 0043a710: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a711: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a712: mov esi, ecx */ r_esi = r_ecx;
    /* 0043a714: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0043a718: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043a71c: mov ecx, esi */ r_ecx = r_esi;
    /* 0043a71e: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43a723u); f_008193cc();
    /* 0043a723: mov dword ptr [esi], 0xaf5250 */ W32((u32)(r_esi), 0xaf5250u);
    /* 0043a729: mov eax, dword ptr [0x9a49a4] */ r_eax = R32((u32)(0x9a49a4u));
    /* 0043a72e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0043a731: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0043a734: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0043a737: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0043a73a: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0043a73d: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0043a740: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 0043a743: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0043a74a: call 0x43a75c */ r_esp -= 4; W32(r_esp, 0x43a74fu); f_0043a75c();
    /* 0043a74f: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0043a752: mov eax, esi */ r_eax = r_esi;
    /* 0043a754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a755: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a756: ret 8 */ FN_RET(0x0043a710); r_esp += 12; return;
}

void f_0043a75c(void) /* sub_43A75C */
{
    FN_ENTER(0x0043a75c);
    /* 0043a75c: mov edx, dword ptr [0xa446e8] */ r_edx = R32((u32)(0xa446e8u));
    /* 0043a762: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0043a765: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043a768: jl 0x43a776 */ if ((fS!=fO)) goto L_0043a776;
L_0043a76a:; BB(0x0043a76a);
    /* 0043a76a: mov dword ptr [0xa446e8], 0 */ W32((u32)(0xa446e8u), 0x0u);
    /* 0043a774: jmp 0x43a77b */ goto L_0043a77b;
L_0043a776:; BB(0x0043a776);
    /* 0043a776: mov dword ptr [0xa446e8], eax */ W32((u32)(0xa446e8u), r_eax);
L_0043a77b:; BB(0x0043a77b);
    /* 0043a77b: mov eax, edx */ r_eax = r_edx;
    /* 0043a77d: ret  */ FN_RET(0x0043a75c); r_esp += 4; return;
}

void f_0043a780(void) /* sub_43A780 */
{
    FN_ENTER(0x0043a780);
    /* 0043a780: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0043a783: fsub dword ptr [0x8fda58] */ ST(0) = ST(0) - R_F32((u32)(0x8fda58u));
    /* 0043a789: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0043a78c: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0043a78f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a792: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0043a795: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043a798: jl 0x43a7a8 */ if ((fS!=fO)) goto L_0043a7a8;
L_0043a79a:; BB(0x0043a79a);
    /* 0043a79a: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0043a79e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a7a3: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0043a7a7: ret  */ FN_RET(0x0043a780); r_esp += 4; return;
L_0043a7a8:; BB(0x0043a7a8);
    /* 0043a7a8: ret  */ FN_RET(0x0043a780); r_esp += 4; return;
}

void f_0043a7ac(void) /* sub_43A7AC */
{
    FN_ENTER(0x0043a7ac);
    /* 0043a7ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a7af: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0043a7b2: lea eax, [ecx + 0x24] */ r_eax = (u32)(r_ecx+0x24u);
    /* 0043a7b5: call 0x43a7c8 */ r_esp -= 4; W32(r_esp, 0x43a7bau); f_0043a7c8();
    /* 0043a7ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a7bd: ret  */ FN_RET(0x0043a7ac); r_esp += 4; return;
}

void f_0043a7c8(void) /* sub_43A7C8 */
{
    FN_ENTER(0x0043a7c8);
    /* 0043a7c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7ca: mov ebx, edx */ r_ebx = r_edx;
    /* 0043a7cc: mov edi, eax */ r_edi = r_eax;
    /* 0043a7ce: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x43a7d3u); f_0082dab0();
    /* 0043a7d3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43a7d8u); f_0082d7b0();
    /* 0043a7d8: mov ecx, edi */ r_ecx = r_edi;
    /* 0043a7da: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43a7dfu); f_0082d838();
    /* 0043a7df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7e3: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0043a7e6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7e8: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7ea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7f2: lea edx, [eax + eax + 0xa44280] */ r_edx = (u32)(r_eax+r_eax+0xa44280u);
    /* 0043a7f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a7fa: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x43a7ffu); f_0082b1c8();
    /* 0043a7ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043a802: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43a807u); f_0082da80();
    /* 0043a807: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a808: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043a809: ret  */ FN_RET(0x0043a7c8); r_esp += 4; return;
}

void f_0043a80c(void) /* sub_43A80C */
{
    FN_ENTER(0x0043a80c);
    /* 0043a80c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a80d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043a80e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a80f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a810: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a813: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a815: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a817: mov ebx, eax */ r_ebx = r_eax;
    /* 0043a819: mov esi, edx */ r_esi = r_edx;
L_0043a81b:; BB(0x0043a81b);
    /* 0043a81b: fld dword ptr [0x8fda70] */ FPUSH(R_F32((u32)(0x8fda70u)));
    /* 0043a821: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0043a824: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043a827: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0043a829: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0043a82d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043a831: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043a836: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043a83b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043a83f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043a843: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043a847: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043a84b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0043a84f: mov ecx, edi */ r_ecx = r_edi;
    /* 0043a851: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x43a856u); f_0082dcbc();
    /* 0043a856: fmul dword ptr [0x8fda5c] */ ST(0) = ST(0) * R_F32((u32)(0x8fda5cu));
    /* 0043a85c: fstp dword ptr [ebx + 0xa446a0] */ W_F32((u32)(r_ebx+0xa446a0u), ST(0)); FPOP();
    /* 0043a862: mov ecx, edi */ r_ecx = r_edi;
    /* 0043a864: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0043a868: fmul dword ptr [0x8fda6c] */ ST(0) = ST(0) * R_F32((u32)(0x8fda6cu));
    /* 0043a86e: fstp dword ptr [ebx + 0xa446a4] */ W_F32((u32)(r_ebx+0xa446a4u), ST(0)); FPOP();
    /* 0043a874: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x43a879u); f_0082ddd8();
    /* 0043a879: fld dword ptr [0x8fda5c] */ FPUSH(R_F32((u32)(0x8fda5cu)));
    /* 0043a87f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043a881: fstp dword ptr [ebx + 0xa446a8] */ W_F32((u32)(r_ebx+0xa446a8u), ST(0)); FPOP();
    /* 0043a887: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a88a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043a88d: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a890: jl 0x43a81b */ if ((fS!=fO)) goto L_0043a81b;
L_0043a892:; BB(0x0043a892);
    /* 0043a892: mov edx, 0xa44640 */ r_edx = 0xa44640u;
    /* 0043a897: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a899: mov ebx, eax */ r_ebx = r_eax;
    /* 0043a89b: mov esi, edx */ r_esi = r_edx;
L_0043a89d:; BB(0x0043a89d);
    /* 0043a89d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43a8a2u); f_008587a5();
    /* 0043a8a2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043a8a6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0043a8aa: fdiv dword ptr [0x8fda68] */ ST(0) = ST(0) / R_F32((u32)(0x8fda68u));
    /* 0043a8b0: fmul dword ptr [0x8fda64] */ ST(0) = ST(0) * R_F32((u32)(0x8fda64u));
    /* 0043a8b6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a8b9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043a8bd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043a8c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043a8c7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043a8cb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043a8cf: fistp dword ptr [esi] */ W32((u32)(r_esi), (u32)fx_int32(ST(0))); FPOP();
    /* 0043a8d1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043a8d5: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043a8d8: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a8db: jl 0x43a89d */ if ((fS!=fO)) goto L_0043a89d;
L_0043a8dd:; BB(0x0043a8dd);
    /* 0043a8dd: mov ecx, 0xa44280 */ r_ecx = 0xa44280u;
    /* 0043a8e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a8e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a8e6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0043a8e8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0043a8ea:; BB(0x0043a8ea);
    /* 0043a8ea: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a8ec: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 0043a8ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a8f0: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0043a8f3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a8f5: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 0043a8f8: mov ebx, 0xff709070 */ r_ebx = 0xff709070u;
    /* 0043a8fd: mov dword ptr [ecx + 0xc], ebx */ W32((u32)(r_ecx+0xcu), r_ebx);
    /* 0043a900: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 0043a903: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0043a906: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 0043a909: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 0043a90c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a90e: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 0043a911: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a913: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0043a916: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a918: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 0043a91b: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 0043a91e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a920: mov dword ptr [ecx + 0x30], edi */ W32((u32)(r_ecx+0x30u), r_edi);
    /* 0043a923: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a925: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 0043a928: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0043a92a: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 0043a92d: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 0043a930: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a933: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a936: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a939: jl 0x43a8ea */ if ((fS!=fO)) goto L_0043a8ea;
L_0043a93b:; BB(0x0043a93b);
    /* 0043a93b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a93d: mov ebx, eax */ r_ebx = r_eax;
L_0043a93f:; BB(0x0043a93f);
    /* 0043a93f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43a944u); f_008587a5();
    /* 0043a944: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043a948: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0043a94c: fdiv dword ptr [0x8fda68] */ ST(0) = ST(0) / R_F32((u32)(0x8fda68u));
    /* 0043a952: fmul dword ptr [0x8fda64] */ ST(0) = ST(0) * R_F32((u32)(0x8fda64u));
    /* 0043a958: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043a95c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043a961: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043a966: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043a96a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043a96e: fistp dword ptr [ebx + 0xa446ec] */ W32((u32)(r_ebx+0xa446ecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043a974: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043a978: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043a97b: cmp ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043a97e: jl 0x43a93f */ if ((fS!=fO)) goto L_0043a93f;
L_0043a980:; BB(0x0043a980);
    /* 0043a980: mov dword ptr [0xa446e8], 0 */ W32((u32)(0xa446e8u), 0x0u);
    /* 0043a98a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043a98d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a98e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043a98f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043a990: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043a991: ret  */ FN_RET(0x0043a80c); r_esp += 4; return;
}

void f_0043a994(void) /* sub_43A994 */
{
    FN_ENTER(0x0043a994);
    /* 0043a994: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a995: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043a997: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043a999: call 0x43a9b8 */ r_esp -= 4; W32(r_esp, 0x43a99eu); f_0043a9b8();
    /* 0043a99e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043a9a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043a9a4: jne 0x43a9aa */ if (!fZ) goto L_0043a9aa;
L_0043a9a6:; BB(0x0043a9a6);
    /* 0043a9a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a9a7: ret 4 */ FN_RET(0x0043a994); r_esp += 8; return;
L_0043a9aa:; BB(0x0043a9aa);
    /* 0043a9aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43a9b0u); f_005c2f74();
    /* 0043a9b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043a9b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043a9b2: ret 4 */ FN_RET(0x0043a994); r_esp += 8; return;
}

void f_0043a9b8(void) /* sub_43A9B8 */
{
    FN_ENTER(0x0043a9b8);
    /* 0043a9b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043a9bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9bd: push 0x8ce128 */ { u32 v = 0x8ce128u; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043a9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a9c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043a9d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043a9d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043a9d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043a9d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043a9dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043a9df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043a9e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043a9e5: mov dword ptr [ecx], 0xaf5300 */ W32((u32)(r_ecx), 0xaf5300u);
    /* 0043a9eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043a9f2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43a9f7u); f_008171e8();
    /* 0043a9f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043a9fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043aa01: mov esp, ebp */ r_esp = r_ebp;
    /* 0043aa03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043aa04: ret  */ FN_RET(0x0043a9b8); r_esp += 4; return;
}

void f_0043aa08(void) /* sub_43AA08 */
{
    FN_ENTER(0x0043aa08);
    /* 0043aa08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa09: mov ebp, esp */ r_ebp = r_esp;
    /* 0043aa0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa0d: push 0x8ce150 */ { u32 v = 0x8ce150u; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043aa18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043aa20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043aa23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043aa26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043aa29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043aa2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043aa2f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0043aa38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43aa3du); f_005caba4();
    /* 0043aa3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043aa3e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043aa41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa43: je 0x43aa7e */ if (fZ) goto L_0043aa7e;
L_0043aa45:; BB(0x0043aa45);
    /* 0043aa45: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0043aa4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043aa53: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aa59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043aa5c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43aa61u); f_008193cc();
    /* 0043aa61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043aa64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043aa6b:; BB(0x0043aa6b);
    /* 0043aa6b: mov dword ptr [0xa44720], eax */ W32((u32)(0xa44720u), r_eax);
    /* 0043aa70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043aa73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043aa7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043aa7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043aa7d: ret  */ FN_RET(0x0043aa08); r_esp += 4; return;
L_0043aa7e:; BB(0x0043aa7e);
    /* 0043aa7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aa80: jmp 0x43aa6b */ goto L_0043aa6b;
}

void f_0043aa84(void) /* sub_43AA84 */
{
    FN_ENTER(0x0043aa84);
    /* 0043aa84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043aa85: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043aa89: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043aa8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aa8e: je 0x43aab4 */ if (fZ) goto L_0043aab4;
L_0043aa90:; BB(0x0043aa90);
    /* 0043aa90: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0043aa93: mov ebx, eax */ r_ebx = r_eax;
L_0043aa95:; BB(0x0043aa95);
    /* 0043aa95: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 0043aa98: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0043aa9c: push dword ptr [0xa44720] */ { u32 v = R32((u32)(0xa44720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aaa2: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0043aaa5: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x43aaaau); f_008172d4();
    /* 0043aaaa: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0043aaad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aaaf: jne 0x43aa95 */ if (!fZ) goto L_0043aa95;
L_0043aab1:; BB(0x0043aab1);
    /* 0043aab1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0043aab4:; BB(0x0043aab4);
    /* 0043aab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043aab5: ret  */ FN_RET(0x0043aa84); r_esp += 4; return;
}

void f_0043aab8(void) /* sub_43AAB8 */
{
    FN_ENTER(0x0043aab8);
    /* 0043aab8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043aab9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043aabd: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043aac0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aac2: je 0x43aaea */ if (fZ) goto L_0043aaea;
L_0043aac4:; BB(0x0043aac4);
    /* 0043aac4: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0043aac7: mov ebx, eax */ r_ebx = r_eax;
L_0043aac9:; BB(0x0043aac9);
    /* 0043aac9: push dword ptr [0xa44720] */ { u32 v = R32((u32)(0xa44720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aacf: fld dword ptr [0x8fda90] */ FPUSH(R_F32((u32)(0x8fda90u)));
    /* 0043aad5: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 0043aad8: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0043aadb: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x43aae0u); f_008172d4();
    /* 0043aae0: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0043aae3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aae5: jne 0x43aac9 */ if (!fZ) goto L_0043aac9;
L_0043aae7:; BB(0x0043aae7);
    /* 0043aae7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0043aaea:; BB(0x0043aaea);
    /* 0043aaea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043aaeb: ret  */ FN_RET(0x0043aab8); r_esp += 4; return;
}

void f_0043aaec(void) /* sub_43AAEC */
{
    FN_ENTER(0x0043aaec);
    /* 0043aaec: push 0xc0a00000 */ { u32 v = 0xc0a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043aaf1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aaf5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aaf9: call 0x43ab04 */ r_esp -= 4; W32(r_esp, 0x43aafeu); f_0043ab04();
    /* 0043aafe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ab01: ret  */ FN_RET(0x0043aaec); r_esp += 4; return;
}

void f_0043ab04(void) /* sub_43AB04 */
{
    FN_ENTER(0x0043ab04);
    /* 0043ab04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab05: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ab07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab09: push 0x8ce178 */ { u32 v = 0x8ce178u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ab14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043ab1c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ab1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043ab22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043ab25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043ab28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043ab2b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab30: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043ab37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43ab3cu); f_005caba4();
    /* 0043ab3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043ab3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ab42: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043ab45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab47: je 0x43abd8 */ if (fZ) goto L_0043abd8;
L_0043ab4d:; BB(0x0043ab4d);
    /* 0043ab4d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0043ab54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ab5b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043ab5e: call 0x50cd1c */ r_esp -= 4; W32(r_esp, 0x43ab63u); f_0050cd1c();
    /* 0043ab63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ab64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ab67: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab69: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0043ab6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ab70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ab75: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043ab78: call 0x508c34 */ r_esp -= 4; W32(r_esp, 0x43ab7du); f_00508c34();
    /* 0043ab7d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0043ab84:; BB(0x0043ab84);
    /* 0043ab84: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ab8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ab8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ab90: je 0x43abc1 */ if (fZ) goto L_0043abc1;
L_0043ab92:; BB(0x0043ab92);
    /* 0043ab92: mov ecx, eax */ r_ecx = r_eax;
    /* 0043ab94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043ab96: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x43ab99u); call_ind(t); }
    /* 0043ab99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ab9c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043ab9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043aba1: je 0x43abc1 */ if (fZ) goto L_0043abc1;
L_0043aba3:; BB(0x0043aba3);
    /* 0043aba3: push dword ptr [0xa44720] */ { u32 v = R32((u32)(0xa44720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043aba9: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 0043abac: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0043abaf: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0043abb2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x43abb7u); f_008172d4();
    /* 0043abb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043abba: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0043abbd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043abbf: jne 0x43aba3 */ if (!fZ) goto L_0043aba3;
L_0043abc1:; BB(0x0043abc1);
    /* 0043abc1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043abc4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043abc7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043abca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043abcd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043abd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043abd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043abd7: ret  */ FN_RET(0x0043ab04); r_esp += 4; return;
L_0043abd8:; BB(0x0043abd8);
    /* 0043abd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043abda: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043abdd: jmp 0x43ab84 */ goto L_0043ab84;
}

void f_0043abe0(void) /* sub_43ABE0 */
{
    FN_ENTER(0x0043abe0);
    /* 0043abe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043abe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043abe2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043abe3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043abe6: mov edi, ecx */ r_edi = r_ecx;
    /* 0043abe8: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0043abec: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0043abf0: mov ecx, edi */ r_ecx = r_edi;
    /* 0043abf2: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043abf6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43abfbu); f_008193cc();
    /* 0043abfb: mov dword ptr [edi], 0xaf5300 */ W32((u32)(r_edi), 0xaf5300u);
    /* 0043ac01: mov eax, dword ptr [0x9a49a8] */ r_eax = R32((u32)(0x9a49a8u));
    /* 0043ac06: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0043ac09: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43ac0eu); f_008587a5();
    /* 0043ac0e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043ac11: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043ac14: fdiv dword ptr [0x8fda84] */ ST(0) = ST(0) / R_F32((u32)(0x8fda84u));
    /* 0043ac1a: fadd dword ptr [0x8fda88] */ ST(0) = ST(0) + R_F32((u32)(0x8fda88u));
    /* 0043ac20: fmul dword ptr [0x8fda80] */ ST(0) = ST(0) * R_F32((u32)(0x8fda80u));
    /* 0043ac26: fadd dword ptr [0x8fda7c] */ ST(0) = ST(0) + R_F32((u32)(0x8fda7cu));
    /* 0043ac2c: fmul dword ptr [0x8fda58] */ ST(0) = ST(0) * R_F32((u32)(0x8fda58u));
    /* 0043ac32: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0043ac35: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43ac3au); f_008587a5();
    /* 0043ac3a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043ac3e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0043ac42: fdiv dword ptr [0x8fda84] */ ST(0) = ST(0) / R_F32((u32)(0x8fda84u));
    /* 0043ac48: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 0043ac4b: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 0043ac4e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0043ac50: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0043ac53: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0043ac56: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0043ac59: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0043ac5c: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 0043ac5f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043ac62: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0043ac65: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0043ac68: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0043ac6b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0043ac6f: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0043ac72: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 0043ac75: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0043ac78: mov eax, edi */ r_eax = r_edi;
    /* 0043ac7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ac7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ac7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ac7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ac80: ret 0x10 */ FN_RET(0x0043abe0); r_esp += 20; return;
}

void f_0043ac84(void) /* sub_43AC84 */
{
    FN_ENTER(0x0043ac84);
    /* 0043ac84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ac85: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ac87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ac89: push 0x8ce1a0 */ { u32 v = 0x8ce1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ac8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ac94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ac95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043ac9c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ac9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043aca2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0043aca5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0043aca8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0043acab: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0043acae: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0043acb1: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0043acb3: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0043acb6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043acb8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043acba: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043acbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043acbe: jbe 0x43accc */ if ((fC||fZ)) goto L_0043accc;
L_0043acc0:; BB(0x0043acc0);
    /* 0043acc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043acc2: mov eax, ecx */ r_eax = r_ecx;
    /* 0043acc4: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043acc7: jmp 0x43ad96 */ goto L_0043ad96;
L_0043accc:; BB(0x0043accc);
    /* 0043accc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043acce: mov esi, ecx */ r_esi = r_ecx;
    /* 0043acd0: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0043acd3: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0043acd6: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 0043acd9: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0043acdc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0043acdf: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0043ace2: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0043ace5: fsub dword ptr [0x8fda58] */ ST(0) = ST(0) - R_F32((u32)(0x8fda58u));
    /* 0043aceb: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0043acee: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0043acf0: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043acf3: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043acf8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0043acff: add esi, 0x34 */ {  u32 a = r_esi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043ad02: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043ad05: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43ad0au); f_005caba4();
    /* 0043ad0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043ad0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ad10: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043ad13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ad15: je 0x43adad */ if (fZ) goto L_0043adad;
L_0043ad1b:; BB(0x0043ad1b);
    /* 0043ad1b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0043ad22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ad29: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad2e: call 0x50cd1c */ r_esp -= 4; W32(r_esp, 0x43ad33u); f_0050cd1c();
    /* 0043ad33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ad34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ad37: lea esi, [ebp - 0x38] */ r_esi = (u32)(r_ebp+0xffffffc8u);
    /* 0043ad3a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad3c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0043ad41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ad43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ad49: call 0x508c34 */ r_esp -= 4; W32(r_esp, 0x43ad4eu); f_00508c34();
    /* 0043ad4e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0043ad55:; BB(0x0043ad55);
    /* 0043ad55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ad5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ad5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ad61: je 0x43ad96 */ if (fZ) goto L_0043ad96;
L_0043ad63:; BB(0x0043ad63);
    /* 0043ad63: mov ecx, eax */ r_ecx = r_eax;
    /* 0043ad65: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043ad67: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x43ad6au); call_ind(t); }
    /* 0043ad6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ad6d: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 0043ad70: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ad72: je 0x43ad96 */ if (fZ) goto L_0043ad96;
L_0043ad74:; BB(0x0043ad74);
    /* 0043ad74: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ad77: lea ecx, [ebx + 0x40] */ r_ecx = (u32)(r_ebx+0x40u);
    /* 0043ad7a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x43ad7fu); f_0082ebac();
    /* 0043ad7f: push dword ptr [0xa44720] */ { u32 v = R32((u32)(0xa44720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043ad85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043ad87: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x43ad8cu); f_008172d4();
    /* 0043ad8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ad8f: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 0043ad92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ad94: jne 0x43ad74 */ if (!fZ) goto L_0043ad74;
L_0043ad96:; BB(0x0043ad96);
    /* 0043ad96: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ad99: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ad9c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043ad9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ada2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043ada9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043adab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043adac: ret  */ FN_RET(0x0043ac84); r_esp += 4; return;
L_0043adad:; BB(0x0043adad);
    /* 0043adad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043adaf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043adb2: jmp 0x43ad55 */ goto L_0043ad55;
}

void f_0043adb4(void) /* sub_43ADB4 */
{
    FN_ENTER(0x0043adb4);
    /* 0043adb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043adb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043adb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043adb9: call 0x43add8 */ r_esp -= 4; W32(r_esp, 0x43adbeu); f_0043add8();
    /* 0043adbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043adc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043adc4: jne 0x43adca */ if (!fZ) goto L_0043adca;
L_0043adc6:; BB(0x0043adc6);
    /* 0043adc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043adc7: ret 4 */ FN_RET(0x0043adb4); r_esp += 8; return;
L_0043adca:; BB(0x0043adca);
    /* 0043adca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043adcb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43add0u); f_005c2f74();
    /* 0043add0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043add1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043add2: ret 4 */ FN_RET(0x0043adb4); r_esp += 8; return;
}

void f_0043add8(void) /* sub_43ADD8 */
{
    FN_ENTER(0x0043add8);
    /* 0043add8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043add9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043addb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043addd: push 0x8ce1bc */ { u32 v = 0x8ce1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ade2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ade8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ade9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043adf0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043adf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043adf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043adf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043adfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043adff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043ae02: mov dword ptr [ecx], 0xaf53e0 */ W32((u32)(r_ecx), 0xaf53e0u);
    /* 0043ae08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ae0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae12: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ae15: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x43ae1au); f_0061cdb0();
    /* 0043ae1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ae21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae24: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43ae29u); f_008171e8();
    /* 0043ae29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ae2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043ae33: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ae35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ae36: ret  */ FN_RET(0x0043add8); r_esp += 4; return;
}

void f_0043ae38(void) /* sub_43AE38 */
{
    FN_ENTER(0x0043ae38);
    /* 0043ae38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043ae3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043ae3d: call 0x43ae5c */ r_esp -= 4; W32(r_esp, 0x43ae42u); f_0043ae5c();
    /* 0043ae42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043ae46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ae48: jne 0x43ae4e */ if (!fZ) goto L_0043ae4e;
L_0043ae4a:; BB(0x0043ae4a);
    /* 0043ae4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ae4b: ret 4 */ FN_RET(0x0043ae38); r_esp += 8; return;
L_0043ae4e:; BB(0x0043ae4e);
    /* 0043ae4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43ae54u); f_005c2f74();
    /* 0043ae54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ae55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ae56: ret 4 */ FN_RET(0x0043ae38); r_esp += 8; return;
}

void f_0043ae5c(void) /* sub_43AE5C */
{
    FN_ENTER(0x0043ae5c);
    /* 0043ae5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ae5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae61: push 0x8ce1d8 */ { u32 v = 0x8ce1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ae6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ae6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043ae74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ae77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043ae7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043ae7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043ae80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043ae83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043ae86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae89: mov dword ptr [ecx], 0xaf53d0 */ W32((u32)(r_ecx), 0xaf53d0u);
    /* 0043ae8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ae96: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43ae9bu); f_008171e8();
    /* 0043ae9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ae9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043aea5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043aea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043aea8: ret  */ FN_RET(0x0043ae5c); r_esp += 4; return;
}

void f_0043aeac(void) /* sub_43AEAC */
{
    FN_ENTER(0x0043aeac);
    /* 0043aeac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043aead: mov ebp, esp */ r_ebp = r_esp;
    /* 0043aeaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043aeb1: push 0x8ce23c */ { u32 v = 0x8ce23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043aeb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043aebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043aebd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043aec4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043aec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043aeca: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0043aecd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0043aed0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0043aed3: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043aed8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0043aedf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43aee4u); f_005caba4();
    /* 0043aee4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043aee7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043aeea: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0043aeed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aeef: je 0x43b0ef */ if (fZ) goto L_0043b0ef;
L_0043aef5:; BB(0x0043aef5);
    /* 0043aef5: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0043aefc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043af03: mov ecx, eax */ r_ecx = r_eax;
    /* 0043af05: mov eax, dword ptr [0xaca378] */ r_eax = R32((u32)(0xaca378u));
    /* 0043af0a: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0043af0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043af0e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043af11: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43af16u); f_008193cc();
    /* 0043af16: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043af1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043af20: mov dword ptr [eax], 0xaf53e0 */ W32((u32)(r_eax), 0xaf53e0u);
    /* 0043af26: lea ecx, [eax + 0x68] */ r_ecx = (u32)(r_eax+0x68u);
    /* 0043af29: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043af2c: call 0x78309c */ r_esp -= 4; W32(r_esp, 0x43af31u); f_0078309c();
    /* 0043af31: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043af38: mov ebx, dword ptr [0x9a4abc] */ r_ebx = R32((u32)(0x9a4abcu));
    /* 0043af3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043af41: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0043af48: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0043af4b: mov esi, dword ptr [0x9a4bb4] */ r_esi = R32((u32)(0x9a4bb4u));
    /* 0043af51: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0043af58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043af5a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0043af5d: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 0043af64: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043af69: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0043af6c: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 0043af73: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0043af76: mov edi, dword ptr [0x9a4bb8] */ r_edi = R32((u32)(0x9a4bb8u));
    /* 0043af7c: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 0043af83: mov dword ptr [edx + 0x30], edi */ W32((u32)(r_edx+0x30u), r_edi);
    /* 0043af86: mov ecx, dword ptr [0x9a4bbc] */ r_ecx = R32((u32)(0x9a4bbcu));
    /* 0043af8c: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 0043af93: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0043af96: mov ecx, dword ptr [0x9a4bc0] */ r_ecx = R32((u32)(0x9a4bc0u));
    /* 0043af9c: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0043af9f: mov ecx, dword ptr [0x9a4bc4] */ r_ecx = R32((u32)(0x9a4bc4u));
    /* 0043afa5: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0043afa8: mov ecx, dword ptr [0x9a4bc8] */ r_ecx = R32((u32)(0x9a4bc8u));
    /* 0043afae: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0043afb1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043afb4: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0043afb7: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0043afba: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0043afbd: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0043afc0: call 0x7830ac */ r_esp -= 4; W32(r_esp, 0x43afc5u); f_007830ac();
    /* 0043afc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043afc8: mov dword ptr [edx + 0x94], 0x3f800000 */ W32((u32)(r_edx+0x94u), 0x3f800000u);
    /* 0043afd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043afd4: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0043afda: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
    /* 0043afe4: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0043afea: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0043aff0: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0043aff6: mov dword ptr [edx + 0xb0], 0x21 */ W32((u32)(r_edx+0xb0u), 0x21u);
    /* 0043b000: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 0043b006: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0043b00c: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0043b012: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0043b01c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b01e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0043b021:; BB(0x0043b021);
    /* 0043b021: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0043b028: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b02a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43b02fu); f_005caba4();
    /* 0043b02f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043b032: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b035: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043b038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b03a: je 0x43b0e8 */ if (fZ) goto L_0043b0e8;
L_0043b040:; BB(0x0043b040);
    /* 0043b040: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0043b047: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043b04e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b051: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043b054: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b057: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b059: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0043b05c: lea esi, [eax + 0x20] */ r_esi = (u32)(r_eax+0x20u);
    /* 0043b05f: lea ecx, [edx + ebx + 0x9a4b44] */ r_ecx = (u32)(r_edx+r_ebx+0x9a4b44u);
    /* 0043b066: lea edi, [edx + ebx + 0x8fdb70] */ r_edi = (u32)(r_edx+r_ebx+0x8fdb70u);
    /* 0043b06d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043b06e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043b06f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b070: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b074: call 0x43abe0 */ r_esp -= 4; W32(r_esp, 0x43b079u); f_0043abe0();
    /* 0043b079: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0043b080:; BB(0x0043b080);
    /* 0043b080: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b083: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b086: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b089: mov dword ptr [edx + ecx*4 + 0xc0], eax */ W32((u32)(r_edx+r_ecx*4+0xc0u), r_eax);
    /* 0043b090: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043b097: mov eax, ecx */ r_eax = r_ecx;
    /* 0043b099: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b09c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b09f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b0a2: jl 0x43b021 */ if ((fS!=fO)) goto L_0043b021;
L_0043b0a8:; BB(0x0043b0a8);
    /* 0043b0a8: mov eax, edx */ r_eax = r_edx;
    /* 0043b0aa: mov dword ptr [eax + 0xd8], 0xa */ W32((u32)(r_eax+0xd8u), 0xau);
    /* 0043b0b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043b0b6: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0043b0bc: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0043b0c2: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 0043b0c8: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0043b0ce: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_0043b0d1:; BB(0x0043b0d1);
    /* 0043b0d1: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b0d4: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b0d7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b0da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b0dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043b0e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b0e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b0e7: ret  */ FN_RET(0x0043aeac); r_esp += 4; return;
L_0043b0e8:; BB(0x0043b0e8);
    /* 0043b0e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b0ea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043b0ed: jmp 0x43b080 */ goto L_0043b080;
L_0043b0ef:; BB(0x0043b0ef);
    /* 0043b0ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043b0f1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043b0f4: jmp 0x43b0d1 */ goto L_0043b0d1;
}

