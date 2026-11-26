#include "protos.h"

void f_0053f047(void)
{
    FN_ENTER(0x0053f047);
    /* 0053f047: lahf  */ r_eax = (r_eax & 0xffff00ffu) | ((u32)((fS << 7) | (fZ << 6) | (fA << 4) | (fP << 2) | 2 | fC) << 8);
    /* 0053f048: add byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053f04b: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053f04d: shl byte ptr [esi - 0x77], 0x87 */ { u32 ad = (u32)(r_esi+0xffffff89u); u32 c = (7u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0053f051: mov eax, 0xe8000000 */ r_eax = 0xe8000000u;
    UNSUP(0x0053f056, "falls out of decoded code");
}

void f_0053f074(void) /* sub_53F074 */
{
    FN_ENTER(0x0053f074);
    /* 0053f074: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f075: mov edi, ecx */ r_edi = r_ecx;
    /* 0053f077: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053f07b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f07e: je 0x53f0e1 */ if (fZ) goto L_0053f0e1;
L_0053f080:; BB(0x0053f080);
    /* 0053f080: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f083: je 0x53f0dd */ if (fZ) goto L_0053f0dd;
L_0053f085:; BB(0x0053f085);
    /* 0053f085: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f088: je 0x53f0dd */ if (fZ) goto L_0053f0dd;
L_0053f08a:; BB(0x0053f08a);
    /* 0053f08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f08c: jne 0x53f0dd */ if (!fZ) goto L_0053f0dd;
L_0053f08e:; BB(0x0053f08e);
    /* 0053f08e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f090: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f095u); f_007aa094();
    /* 0053f095: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0053f09b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f09e: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f0a1: jg 0x53f0ad */ if ((!fZ&&fS==fO)) goto L_0053f0ad;
L_0053f0a3:; BB(0x0053f0a3);
    /* 0053f0a3: mov dword ptr [edi + 0x478], eax */ W32((u32)(r_edi+0x478u), r_eax);
    /* 0053f0a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f0aa: ret 4 */ FN_RET(0x0053f074); r_esp += 8; return;
L_0053f0ad:; BB(0x0053f0ad);
    /* 0053f0ad: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0053f0b4: mov dword ptr [edi + 0x478], 0 */ W32((u32)(r_edi+0x478u), 0x0u);
    /* 0053f0be: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053f0c1: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0053f0c4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f0c7: jge 0x53f0d4 */ if ((fS==fO)) goto L_0053f0d4;
L_0053f0c9:; BB(0x0053f0c9);
    /* 0053f0c9: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0053f0d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f0d1: ret 4 */ FN_RET(0x0053f074); r_esp += 8; return;
L_0053f0d4:; BB(0x0053f0d4);
    /* 0053f0d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f0d6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0053f0dd:; BB(0x0053f0dd);
    /* 0053f0dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f0de: ret 4 */ FN_RET(0x0053f074); r_esp += 8; return;
L_0053f0e1:; BB(0x0053f0e1);
    /* 0053f0e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f0e3: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053f0ea: mov dword ptr [edi + 0x478], eax */ W32((u32)(r_edi+0x478u), r_eax);
    /* 0053f0f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f0f1: ret 4 */ FN_RET(0x0053f074); r_esp += 8; return;
}

void f_0053f0f4(void) /* sub_53F0F4 */
{
    FN_ENTER(0x0053f0f4);
    /* 0053f0f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f0f5: mov edi, ecx */ r_edi = r_ecx;
    /* 0053f0f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053f0fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f0fe: je 0x53f1f7 */ if (fZ) goto L_0053f1f7;
L_0053f104:; BB(0x0053f104);
    /* 0053f104: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f107: je 0x53f1de */ if (fZ) goto L_0053f1de;
L_0053f10d:; BB(0x0053f10d);
    /* 0053f10d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f10f: jne 0x53f1f3 */ if (!fZ) goto L_0053f1f3;
L_0053f115:; BB(0x0053f115);
    /* 0053f115: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f117: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f11cu); f_007aa094();
    /* 0053f11c: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f121: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f123: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53f128u); f_00520ea0();
    /* 0053f128: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f12a: je 0x53f13d */ if (fZ) goto L_0053f13d;
L_0053f12c:; BB(0x0053f12c);
    /* 0053f12c: mov dword ptr [edi + 0x478], 2 */ W32((u32)(r_edi+0x478u), 0x2u);
    /* 0053f136: mov eax, 2 */ r_eax = 0x2u;
    /* 0053f13b: jmp 0x53f143 */ goto L_0053f143;
L_0053f13d:; BB(0x0053f13d);
    /* 0053f13d: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
L_0053f143:; BB(0x0053f143);
    /* 0053f143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f145: jne 0x53f182 */ if (!fZ) goto L_0053f182;
L_0053f147:; BB(0x0053f147);
    /* 0053f147: mov eax, dword ptr [edi + 0x47c] */ r_eax = R32((u32)(r_edi+0x47cu));
    /* 0053f14d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f150: mov dword ptr [edi + 0x47c], eax */ W32((u32)(r_edi+0x47cu), r_eax);
    /* 0053f156: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f159: jl 0x53f16c */ if ((fS!=fO)) goto L_0053f16c;
L_0053f15b:; BB(0x0053f15b);
    /* 0053f15b: mov dword ptr [edi + 0x478], 1 */ W32((u32)(r_edi+0x478u), 0x1u);
    /* 0053f165: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f167: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x53f16cu); f_0053e548();
L_0053f16c:; BB(0x0053f16c);
    /* 0053f16c: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0053f16f: fadd dword ptr [edi + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3fcu));
    /* 0053f175: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f176: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053f179: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f17b: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x53f180u); f_00542498();
    /* 0053f180: jmp 0x53f1d0 */ goto L_0053f1d0;
L_0053f182:; BB(0x0053f182);
    /* 0053f182: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f185: jne 0x53f1d0 */ if (!fZ) goto L_0053f1d0;
L_0053f187:; BB(0x0053f187);
    /* 0053f187: lea eax, [edi + 0x50] */ r_eax = (u32)(r_edi+0x50u);
    /* 0053f18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f18b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f18d: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x53f192u); f_005213ec();
    /* 0053f192: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f194: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53f199u); f_00521410();
    /* 0053f199: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f19b: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x53f1a0u); f_0054051c();
    /* 0053f1a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f1a2: call 0x53f22c */ r_esp -= 4; W32(r_esp, 0x53f1a7u); f_0053f22c();
    /* 0053f1a7: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0053f1ad: fcomp dword ptr [0x9236c0] */ fx_compare(ST(0), R_F32((u32)(0x9236c0u))); FPOP();
    /* 0053f1b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f1b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f1b6: jbe 0x53f1d0 */ if ((fC||fZ)) goto L_0053f1d0;
L_0053f1b8:; BB(0x0053f1b8);
    /* 0053f1b8: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f1bd: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f1c3: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f1c5: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f1cb: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x53f1d0u); f_00520adc();
L_0053f1d0:; BB(0x0053f1d0);
    /* 0053f1d0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053f1d2: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f1d4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53f1dau); call_ind(t); }
    /* 0053f1da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f1db: ret 4 */ FN_RET(0x0053f0f4); r_esp += 8; return;
L_0053f1de:; BB(0x0053f1de);
    /* 0053f1de: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0053f1e4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f1e7: jne 0x53f1f3 */ if (!fZ) goto L_0053f1f3;
L_0053f1e9:; BB(0x0053f1e9);
    /* 0053f1e9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053f1eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f1ed: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x53f1f3u); call_ind(t); }
L_0053f1f3:; BB(0x0053f1f3);
    /* 0053f1f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f1f4: ret 4 */ FN_RET(0x0053f0f4); r_esp += 8; return;
L_0053f1f7:; BB(0x0053f1f7);
    /* 0053f1f7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f1f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f1fb: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53f200u); f_0051f664();
    /* 0053f200: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053f206: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053f208: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053f20d: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053f213: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f215: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53f21bu); call_ind(t); }
    /* 0053f21b: mov dword ptr [edi + 0x478], 0 */ W32((u32)(r_edi+0x478u), 0x0u);
    /* 0053f225: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f226: ret 4 */ FN_RET(0x0053f0f4); r_esp += 8; return;
}

void f_0053f22c(void) /* sub_53F22C */
{
    FN_ENTER(0x0053f22c);
    /* 0053f22c: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0053f22f: fadd dword ptr [ecx + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3f0u));
    /* 0053f235: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f236: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053f239: call 0x53f240 */ r_esp -= 4; W32(r_esp, 0x53f23eu); f_0053f240();
    /* 0053f23e: ret  */ FN_RET(0x0053f22c); r_esp += 4; return;
}

void f_0053f240(void) /* sub_53F240 */
{
    FN_ENTER(0x0053f240);
    /* 0053f240: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0053f244: fld dword ptr [0x9236b4] */ FPUSH(R_F32((u32)(0x9236b4u)));
    /* 0053f24a: fld dword ptr [ecx + 0x400] */ FPUSH(R_F32((u32)(r_ecx+0x400u)));
    /* 0053f250: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0053f252: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053f254: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053f256: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f258: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 0053f25e: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0053f264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f265: jb 0x53f27a */ if (fC) goto L_0053f27a;
L_0053f267:; BB(0x0053f267);
    /* 0053f267: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f269: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053f26b: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0053f271: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0053f277: ret 4 */ FN_RET(0x0053f240); r_esp += 8; return;
L_0053f27a:; BB(0x0053f27a);
    /* 0053f27a: fcomp dword ptr [0x9236b8] */ fx_compare(ST(0), R_F32((u32)(0x9236b8u))); FPOP();
    /* 0053f280: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f282: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f283: ja 0x53f296 */ if ((!fC&&!fZ)) goto L_0053f296;
L_0053f285:; BB(0x0053f285);
    /* 0053f285: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0053f287: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0053f28d: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0053f293: ret 4 */ FN_RET(0x0053f240); r_esp += 8; return;
L_0053f296:; BB(0x0053f296);
    /* 0053f296: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f298: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f29a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0053f29e: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f2a4: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 0053f2aa: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0053f2b0: ret 4 */ FN_RET(0x0053f240); r_esp += 8; return;
}

void f_0053f2b4(void) /* sub_53F2B4 */
{
    FN_ENTER(0x0053f2b4);
    /* 0053f2b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f2b5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f2b8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053f2ba: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0053f2be: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f2c1: je 0x53f4f1 */ if (fZ) goto L_0053f4f1;
L_0053f2c7:; BB(0x0053f2c7);
    /* 0053f2c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f2ca: je 0x53f4bf */ if (fZ) goto L_0053f4bf;
L_0053f2d0:; BB(0x0053f2d0);
    /* 0053f2d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f2d2: jne 0x53f498 */ if (!fZ) goto L_0053f498;
L_0053f2d8:; BB(0x0053f2d8);
    /* 0053f2d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f2da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f2dfu); f_007aa094();
    /* 0053f2df: mov eax, dword ptr [ebx + 0x30c] */ r_eax = R32((u32)(r_ebx+0x30cu));
    /* 0053f2e5: mov edx, dword ptr [ebx + 0x310] */ r_edx = R32((u32)(r_ebx+0x310u));
    /* 0053f2eb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053f2ee: mov eax, dword ptr [ebx + 0x314] */ r_eax = R32((u32)(r_ebx+0x314u));
    /* 0053f2f4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053f2f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053f2fc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053f2ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f300: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x53f305u); f_007828e4();
    /* 0053f305: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0053f309: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f30c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f30f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0053f313: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0053f317: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0053f31b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053f31f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053f322: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053f326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f328: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x53f32du); f_005207c4();
    /* 0053f32d: fld dword ptr [0x9236b0] */ FPUSH(R_F32((u32)(0x9236b0u)));
    /* 0053f333: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0053f337: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053f339: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0053f33c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053f33e: mov eax, dword ptr [ebx + 0x47c] */ r_eax = R32((u32)(r_ebx+0x47cu));
    /* 0053f344: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0053f348: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053f34a: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 0053f350: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 0053f356: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f358: je 0x53f401 */ if (fZ) goto L_0053f401;
L_0053f35e:; BB(0x0053f35e);
    /* 0053f35e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f360: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f363: jne 0x53f3cb */ if (!fZ) goto L_0053f3cb;
L_0053f365:; BB(0x0053f365);
    /* 0053f365: fld dword ptr [ebx + 0x48c] */ FPUSH(R_F32((u32)(r_ebx+0x48cu)));
    /* 0053f36b: fadd dword ptr [ebx + 0x490] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x490u));
    /* 0053f371: fcom dword ptr [0x9236ac] */ fx_compare(ST(0), R_F32((u32)(0x9236acu))); 
    /* 0053f377: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f379: fld dword ptr [ebx + 0x400] */ FPUSH(R_F32((u32)(r_ebx+0x400u)));
    /* 0053f37f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f381: fst dword ptr [ebx + 0x48c] */ W_F32((u32)(r_ebx+0x48cu), ST(0));
    /* 0053f387: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053f389: fst dword ptr [ebx + 0x400] */ W_F32((u32)(r_ebx+0x400u), ST(0));
    /* 0053f38f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f390: jb 0x53f588 */ if (fC) goto L_0053f588;
L_0053f396:; BB(0x0053f396);
    /* 0053f396: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0053f399: fadd dword ptr [ebx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f4u));
    /* 0053f39f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f3a1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0053f3a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f3a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f3a6: jbe 0x53f58f */ if ((fC||fZ)) goto L_0053f58f;
L_0053f3ac:; BB(0x0053f3ac);
    /* 0053f3ac: fstp dword ptr [ebx + 0x400] */ W_F32((u32)(r_ebx+0x400u), ST(0)); FPOP();
    /* 0053f3b2: mov dword ptr [ebx + 0x478], 0 */ W32((u32)(r_ebx+0x478u), 0x0u);
    /* 0053f3bc: mov dword ptr [ebx + 0x47c], 2 */ W32((u32)(r_ebx+0x47cu), 0x2u);
    /* 0053f3c6: jmp 0x53f487 */ goto L_0053f487;
L_0053f3cb:; BB(0x0053f3cb);
    /* 0053f3cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f3ce: jne 0x53f487 */ if (!fZ) goto L_0053f487;
L_0053f3d4:; BB(0x0053f3d4);
    /* 0053f3d4: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 0053f3da: mov edx, dword ptr [ebx + 0x470] */ r_edx = R32((u32)(r_ebx+0x470u));
    /* 0053f3e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f3e3: mov dword ptr [ebx + 0x478], eax */ W32((u32)(r_ebx+0x478u), r_eax);
    /* 0053f3e9: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f3ec: jl 0x53f487 */ if ((fS!=fO)) goto L_0053f487;
L_0053f3f2:; BB(0x0053f3f2);
    /* 0053f3f2: mov dword ptr [ebx + 0x47c], 3 */ W32((u32)(r_ebx+0x47cu), 0x3u);
    /* 0053f3fc: jmp 0x53f487 */ goto L_0053f487;
L_0053f401:; BB(0x0053f401);
    /* 0053f401: fld dword ptr [0x923698] */ FPUSH(R_F32((u32)(0x923698u)));
    /* 0053f407: fld dword ptr [0x9236a0] */ FPUSH(R_F32((u32)(0x9236a0u)));
    /* 0053f40d: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0053f410: fadd dword ptr [ebx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f4u));
    /* 0053f416: fld dword ptr [ebx + 0x48c] */ FPUSH(R_F32((u32)(r_ebx+0x48cu)));
    /* 0053f41c: fsub dword ptr [0x9236a4] */ ST(0) = ST(0) - R_F32((u32)(0x9236a4u));
    /* 0053f422: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0053f424: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f426: fld dword ptr [ebx + 0x400] */ FPUSH(R_F32((u32)(r_ebx+0x400u)));
    /* 0053f42c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f42d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0053f42f: ja 0x53f433 */ if ((!fC&&!fZ)) goto L_0053f433;
L_0053f431:; BB(0x0053f431);
    /* 0053f431: fst st(1) */ ST(1) = ST(0);
L_0053f433:; BB(0x0053f433);
    /* 0053f433: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f435: fst dword ptr [ebx + 0x48c] */ W_F32((u32)(r_ebx+0x48cu), ST(0));
    /* 0053f43b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0053f43d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f43f: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0053f441: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f443: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f445: fstp dword ptr [ebx + 0x400] */ W_F32((u32)(r_ebx+0x400u), ST(0)); FPOP();
    /* 0053f44b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f44c: jbe 0x53f596 */ if ((fC||fZ)) goto L_0053f596;
L_0053f452:; BB(0x0053f452);
    /* 0053f452: fld dword ptr [ebx + 0x48c] */ FPUSH(R_F32((u32)(r_ebx+0x48cu)));
    /* 0053f458: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053f45a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053f45c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053f45e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f460: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f461: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053f463: jb 0x53f467 */ if (fC) goto L_0053f467;
L_0053f465:; BB(0x0053f465);
    /* 0053f465: fst st(1) */ ST(1) = ST(0);
L_0053f467:; BB(0x0053f467);
    /* 0053f467: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f469: fst dword ptr [ebx + 0x48c] */ W_F32((u32)(r_ebx+0x48cu), ST(0));
    /* 0053f46f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0053f471: fdiv dword ptr [0x9236a8] */ ST(0) = ST(0) / R_F32((u32)(0x9236a8u));
    /* 0053f477: fstp dword ptr [ebx + 0x490] */ W_F32((u32)(r_ebx+0x490u), ST(0)); FPOP();
    /* 0053f47d: mov dword ptr [ebx + 0x47c], 1 */ W32((u32)(r_ebx+0x47cu), 0x1u);
L_0053f487:; BB(0x0053f487);
    /* 0053f487: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053f489: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f48b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53f491u); call_ind(t); }
    /* 0053f491: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f494: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f495: ret 4 */ FN_RET(0x0053f2b4); r_esp += 8; return;
L_0053f498:; BB(0x0053f498);
    /* 0053f498: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f49b: jne 0x53f4d7 */ if (!fZ) goto L_0053f4d7;
L_0053f49d:; BB(0x0053f49d);
    /* 0053f49d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f49f: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x53f4a4u); f_0051f81c();
    /* 0053f4a4: mov eax, dword ptr [ebx + 0x404] */ r_eax = R32((u32)(r_ebx+0x404u));
    /* 0053f4aa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f4ad: je 0x53f4de */ if (fZ) goto L_0053f4de;
L_0053f4af:; BB(0x0053f4af);
    /* 0053f4af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f4b1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053f4b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f4bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f4bc: ret 4 */ FN_RET(0x0053f2b4); r_esp += 8; return;
L_0053f4bf:; BB(0x0053f4bf);
    /* 0053f4bf: mov eax, dword ptr [ebx + 0x47c] */ r_eax = R32((u32)(r_ebx+0x47cu));
    /* 0053f4c5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f4c8: jne 0x53f4d7 */ if (!fZ) goto L_0053f4d7;
L_0053f4ca:; BB(0x0053f4ca);
    /* 0053f4ca: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f4d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f4d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53f4d7u); f_0051f62c();
L_0053f4d7:; BB(0x0053f4d7);
    /* 0053f4d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f4da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f4db: ret 4 */ FN_RET(0x0053f2b4); r_esp += 8; return;
L_0053f4de:; BB(0x0053f4de);
    /* 0053f4de: mov eax, 1 */ r_eax = 0x1u;
    /* 0053f4e3: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053f4ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f4ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f4ee: ret 4 */ FN_RET(0x0053f2b4); r_esp += 8; return;
L_0053f4f1:; BB(0x0053f4f1);
    /* 0053f4f1: mov eax, dword ptr [ebx + 0x404] */ r_eax = R32((u32)(r_ebx+0x404u));
    /* 0053f4f7: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053f4fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f500: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f505u); f_007aa094();
    /* 0053f505: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f507: call 0x53f5a0 */ r_esp -= 4; W32(r_esp, 0x53f50cu); f_0053f5a0();
    /* 0053f50c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0053f512: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0053f514: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053f519: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0053f51f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f521: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53f527u); call_ind(t); }
    /* 0053f527: fld dword ptr [0x92369c] */ FPUSH(R_F32((u32)(0x92369cu)));
    /* 0053f52d: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0053f530: fadd dword ptr [ebx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f4u));
    /* 0053f536: fcomp dword ptr [ebx + 0x400] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x400u))); FPOP();
    /* 0053f53c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f53e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0053f541: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053f547: mov dword ptr [ebx + 0x478], 0 */ W32((u32)(r_ebx+0x478u), 0x0u);
    /* 0053f551: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0053f554: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f555: jae 0x53f563 */ if (!fC) goto L_0053f563;
L_0053f557:; BB(0x0053f557);
    /* 0053f557: mov dword ptr [ebx + 0x47c], 0 */ W32((u32)(r_ebx+0x47cu), 0x0u);
    /* 0053f561: jmp 0x53f56d */ goto L_0053f56d;
L_0053f563:; BB(0x0053f563);
    /* 0053f563: mov dword ptr [ebx + 0x47c], 2 */ W32((u32)(r_ebx+0x47cu), 0x2u);
L_0053f56d:; BB(0x0053f56d);
    /* 0053f56d: mov dword ptr [ebx + 0x48c], 0 */ W32((u32)(r_ebx+0x48cu), 0x0u);
    /* 0053f577: mov dword ptr [ebx + 0x490], 0 */ W32((u32)(r_ebx+0x490u), 0x0u);
    /* 0053f581: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f584: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f585: ret 4 */ FN_RET(0x0053f2b4); r_esp += 8; return;
L_0053f588:; BB(0x0053f588);
    /* 0053f588: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f58a: jmp 0x53f487 */ goto L_0053f487;
L_0053f58f:; BB(0x0053f58f);
    /* 0053f58f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f591: jmp 0x53f487 */ goto L_0053f487;
L_0053f596:; BB(0x0053f596);
    /* 0053f596: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0053f598: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053f59a: jmp 0x53f487 */ goto L_0053f487;
}

void f_0053f5a0(void) /* sub_53F5A0 */
{
    FN_ENTER(0x0053f5a0);
    /* 0053f5a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5a1: mov edi, ecx */ r_edi = r_ecx;
    /* 0053f5a3: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0053f5aa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f5ad: je 0x53f5b1 */ if (fZ) goto L_0053f5b1;
L_0053f5af:; BB(0x0053f5af);
    /* 0053f5af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f5b0: ret  */ FN_RET(0x0053f5a0); r_esp += 4; return;
L_0053f5b1:; BB(0x0053f5b1);
    /* 0053f5b1: movzx eax, word ptr [edi + 0x4d0] */ r_eax = (u32)R16((u32)(r_edi+0x4d0u));
    /* 0053f5b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5b9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53f5beu); f_007b4d18();
    /* 0053f5be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053f5bf: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0053f5c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f5c7: call 0x53f5d0 */ r_esp -= 4; W32(r_esp, 0x53f5ccu); f_0053f5d0();
    /* 0053f5cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f5cd: ret  */ FN_RET(0x0053f5a0); r_esp += 4; return;
}

void f_0053f5d0(void) /* sub_53F5D0 */
{
    FN_ENTER(0x0053f5d0);
    /* 0053f5d0: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0053f5d6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f5d9: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0053f5df: mov dword ptr [ecx + 0x408], 0 */ W32((u32)(r_ecx+0x408u), 0x0u);
    /* 0053f5e9: ret  */ FN_RET(0x0053f5d0); r_esp += 4; return;
}

void f_0053f5ec(void) /* sub_53F5EC */
{
    FN_ENTER(0x0053f5ec);
    /* 0053f5ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5ef: mov edi, ecx */ r_edi = r_ecx;
    /* 0053f5f1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0053f5f5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f5f8: je 0x53f633 */ if (fZ) goto L_0053f633;
L_0053f5fa:; BB(0x0053f5fa);
    /* 0053f5fa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f5fd: jne 0x53f62d */ if (!fZ) goto L_0053f62d;
L_0053f5ff:; BB(0x0053f5ff);
    /* 0053f5ff: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0053f605: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0053f60b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x53f60eu); call_ind(t); }
    /* 0053f60e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f610: je 0x53f62d */ if (fZ) goto L_0053f62d;
L_0053f612:; BB(0x0053f612);
    /* 0053f612: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053f614: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f616: call dword ptr [eax + 0x1bc] */ { u32 t = R32((u32)(r_eax+0x1bcu)); r_esp -= 4; W32(r_esp, 0x53f61cu); call_ind(t); }
    /* 0053f61c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f61e: je 0x53f62d */ if (fZ) goto L_0053f62d;
L_0053f620:; BB(0x0053f620);
    /* 0053f620: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0053f624: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f629: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0053f62d:; BB(0x0053f62d);
    /* 0053f62d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f62e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f62f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f630: ret 4 */ FN_RET(0x0053f5ec); r_esp += 8; return;
L_0053f633:; BB(0x0053f633);
    /* 0053f633: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f637: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053f63e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f640: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53f645u); f_0051f664();
    /* 0053f645: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053f647: mov ecx, edi */ r_ecx = r_edi;
    /* 0053f649: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x53f64fu); call_ind(t); }
    /* 0053f64f: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053f655: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0053f658: mov ebx, dword ptr [edi + 0x3cc] */ r_ebx = R32((u32)(r_edi+0x3ccu));
    /* 0053f65e: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053f663: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053f669: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053f66f: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0053f672: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f675: je 0x53f6db */ if (fZ) goto L_0053f6db;
L_0053f677:; BB(0x0053f677);
    /* 0053f677: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f678: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x53f67du); f_008113e4();
    /* 0053f67d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0053f67e:; BB(0x0053f67e);
    /* 0053f67e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f680: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f682: lea ebp, [edi + 0x300] */ r_ebp = (u32)(r_edi+0x300u);
    /* 0053f688: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f68d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f68e: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x53f693u); f_0050a984();
    /* 0053f693: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f695: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f697: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f69c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f69d: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x53f6a2u); f_0050a984();
    /* 0053f6a2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f6a5: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6a7: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0053f6ad: lea ebx, [edi + 0x3d4] */ r_ebx = (u32)(r_edi+0x3d4u);
    /* 0053f6b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f6b5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x53f6b8u); call_ind(t); }
    /* 0053f6b8: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0053f6be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053f6c0: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x53f6c3u); call_ind(t); }
    /* 0053f6c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f6c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6c8: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6cd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53f6d2u); f_00814298();
    /* 0053f6d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f6d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053f6d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f6d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f6d8: ret 4 */ FN_RET(0x0053f5ec); r_esp += 8; return;
L_0053f6db:; BB(0x0053f6db);
    /* 0053f6db: movzx eax, word ptr [edi + 0x4d0] */ r_eax = (u32)R16((u32)(r_edi+0x4d0u));
    /* 0053f6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6e3: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53f6e8u); f_007b4d18();
    /* 0053f6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053f6e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6ea: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0053f6f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053f6f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f6f4: call dword ptr [edx + 0x1dc] */ { u32 t = R32((u32)(r_edx+0x1dcu)); r_esp -= 4; W32(r_esp, 0x53f6fau); call_ind(t); }
    /* 0053f6fa: jmp 0x53f67e */ goto L_0053f67e;
}

void f_0053f6fc(void) /* sub_53F6FC */
{
    FN_ENTER(0x0053f6fc);
    /* 0053f6fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6fd: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f700: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053f702: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0053f706: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f709: je 0x53f8b3 */ if (fZ) goto L_0053f8b3;
L_0053f70f:; BB(0x0053f70f);
    /* 0053f70f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f712: je 0x53f8ac */ if (fZ) goto L_0053f8ac;
L_0053f718:; BB(0x0053f718);
    /* 0053f718: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f71b: je 0x53f86c */ if (fZ) goto L_0053f86c;
L_0053f721:; BB(0x0053f721);
    /* 0053f721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f723: jne 0x53f859 */ if (!fZ) goto L_0053f859;
L_0053f729:; BB(0x0053f729);
    /* 0053f729: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f72b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f730u); f_007aa094();
    /* 0053f730: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f735: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f737: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53f73cu); f_00520ea0();
    /* 0053f73c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f73e: je 0x53f747 */ if (fZ) goto L_0053f747;
L_0053f740:; BB(0x0053f740);
    /* 0053f740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f742: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53f747u); f_005213d8();
L_0053f747:; BB(0x0053f747);
    /* 0053f747: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f749: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53f74eu); f_00521410();
    /* 0053f74e: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0053f751: fadd dword ptr [ebp + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f4u));
    /* 0053f757: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f758: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053f75b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f75d: call 0x53f240 */ r_esp -= 4; W32(r_esp, 0x53f762u); f_0053f240();
    /* 0053f762: push 0x3f2e147b */ { u32 v = 0x3f2e147bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f767: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f76c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f76e: call 0x52161c */ r_esp -= 4; W32(r_esp, 0x53f773u); f_0052161c();
    /* 0053f773: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0053f776: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0053f77c: add eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f781: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 0053f784: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f787: mov dword ptr [ebp + 0x478], ecx */ W32((u32)(r_ebp+0x478u), r_ecx);
    /* 0053f78d: cmp ecx, 0x96 */ {  u32 a = r_ecx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f793: jl 0x53f7f7 */ if ((fS!=fO)) goto L_0053f7f7;
L_0053f795:; BB(0x0053f795);
    /* 0053f795: mov eax, dword ptr [0x9bcf0c] */ r_eax = R32((u32)(0x9bcf0cu));
    /* 0053f79a: mov edx, dword ptr [0x9bcf10] */ r_edx = R32((u32)(0x9bcf10u));
    /* 0053f7a0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053f7a3: mov eax, dword ptr [0x9bcf14] */ r_eax = R32((u32)(0x9bcf14u));
    /* 0053f7a8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053f7ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f7ae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053f7b2: mov eax, dword ptr [0x9bcf18] */ r_eax = R32((u32)(0x9bcf18u));
    /* 0053f7b7: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0053f7ba: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0053f7be: mov eax, dword ptr [0x9bcf1c] */ r_eax = R32((u32)(0x9bcf1cu));
    /* 0053f7c3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0053f7c7: mov eax, dword ptr [ebp + 0x470] */ r_eax = R32((u32)(r_ebp+0x470u));
    /* 0053f7cd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0053f7d0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0053f7d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053f7d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7db: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x53f7e0u); f_0051fc9c();
    /* 0053f7e0: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0053f7e6: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053f7eb: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0053f7f1: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
L_0053f7f7:; BB(0x0053f7f7);
    /* 0053f7f7: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0053f7fc: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f7fe: mov eax, ecx */ r_eax = r_ecx;
    /* 0053f800: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053f803: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0053f806: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053f808: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0053f80b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f80d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f80f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f811: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f813: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f816: jge 0x53f824 */ if ((fS==fO)) goto L_0053f824;
L_0053f818:; BB(0x0053f818);
    /* 0053f818: mov dword ptr [ebp + 0x418], 0xffff0000 */ W32((u32)(r_ebp+0x418u), 0xffff0000u);
    /* 0053f822: jmp 0x53f82e */ goto L_0053f82e;
L_0053f824:; BB(0x0053f824);
    /* 0053f824: mov dword ptr [ebp + 0x418], 0xff000000 */ W32((u32)(r_ebp+0x418u), 0xff000000u);
L_0053f82e:; BB(0x0053f82e);
    /* 0053f82e: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0053f834: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f839: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f83a: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f83f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53f844u); f_008144b0();
    /* 0053f844: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f847: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053f84a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f84c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53f852u); call_ind(t); }
    /* 0053f852: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f856: ret 4 */ FN_RET(0x0053f6fc); r_esp += 8; return;
L_0053f859:; BB(0x0053f859);
    /* 0053f859: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f85c: jne 0x53f8ac */ if (!fZ) goto L_0053f8ac;
L_0053f85e:; BB(0x0053f85e);
    /* 0053f85e: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
    /* 0053f865: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f869: ret 4 */ FN_RET(0x0053f6fc); r_esp += 8; return;
L_0053f86c:; BB(0x0053f86c);
    /* 0053f86c: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0053f872: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f877: jl 0x53f8ac */ if ((fS!=fO)) goto L_0053f8ac;
L_0053f879:; BB(0x0053f879);
    /* 0053f879: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f87b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f87d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53f882u); f_0051f62c();
    /* 0053f882: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0053f885: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053f887: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f888: mov word ptr [ebp + 0x334], dx */ W16((u32)(r_ebp+0x334u), (u16)r_edx);
    /* 0053f88f: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053f894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f895: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0053f898: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0053f89e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f89f: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f8a4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53f8a9u); f_00814298();
    /* 0053f8a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053f8ac:; BB(0x0053f8ac);
    /* 0053f8ac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f8af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f8b0: ret 4 */ FN_RET(0x0053f6fc); r_esp += 8; return;
L_0053f8b3:; BB(0x0053f8b3);
    /* 0053f8b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f8b5: call 0x53f904 */ r_esp -= 4; W32(r_esp, 0x53f8bau); f_0053f904();
    /* 0053f8ba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053f8bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f8be: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53f8c3u); f_0051f664();
    /* 0053f8c3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053f8c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f8c8: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x53f8ceu); call_ind(t); }
    /* 0053f8ce: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0053f8d4: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0053f8d7: mov dword ptr [ebp + 0x418], 0xffff8080 */ W32((u32)(r_ebp+0x418u), 0xffff8080u);
    /* 0053f8e1: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053f8e6: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053f8eb: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053f8f1: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0053f8f7: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0053f8fa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053f8fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f8fe: ret 4 */ FN_RET(0x0053f6fc); r_esp += 8; return;
}

void f_0053f904(void) /* sub_53F904 */
{
    FN_ENTER(0x0053f904);
    /* 0053f904: mov eax, dword ptr [ecx + 0x404] */ r_eax = R32((u32)(r_ecx+0x404u));
    /* 0053f90a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f90d: jne 0x53f925 */ if (!fZ) goto L_0053f925;
L_0053f90f:; BB(0x0053f90f);
    /* 0053f90f: mov dword ptr [ecx + 0x404], 5 */ W32((u32)(r_ecx+0x404u), 0x5u);
    /* 0053f919: mov eax, 2 */ r_eax = 0x2u;
    /* 0053f91e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_0053f925:; BB(0x0053f925);
    /* 0053f925: ret  */ FN_RET(0x0053f904); r_esp += 4; return;
}

void f_0053f928(void) /* sub_53F928 */
{
    FN_ENTER(0x0053f928);
    /* 0053f928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f929: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053f92b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053f92f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f932: je 0x53f9bc */ if (fZ) goto L_0053f9bc;
L_0053f938:; BB(0x0053f938);
    /* 0053f938: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f93b: je 0x53f98f */ if (fZ) goto L_0053f98f;
L_0053f93d:; BB(0x0053f93d);
    /* 0053f93d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f93f: jne 0x53f9b8 */ if (!fZ) goto L_0053f9b8;
L_0053f941:; BB(0x0053f941);
    /* 0053f941: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f943: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53f948u); f_007aa094();
    /* 0053f948: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0053f94b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f94c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f94e: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x53f953u); f_005213ec();
    /* 0053f953: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f955: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53f95au); f_00521410();
    /* 0053f95a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f95c: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x53f961u); f_0054051c();
    /* 0053f961: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f963: call 0x53f22c */ r_esp -= 4; W32(r_esp, 0x53f968u); f_0053f22c();
    /* 0053f968: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f96d: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f973: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f975: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053f97b: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x53f980u); f_00520adc();
    /* 0053f980: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053f983: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f985: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x53f98bu); call_ind(t); }
    /* 0053f98b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f98c: ret 4 */ FN_RET(0x0053f928); r_esp += 8; return;
L_0053f98f:; BB(0x0053f98f);
    /* 0053f98f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053f992: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f994: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x53f99au); call_ind(t); }
    /* 0053f99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053f99c: jne 0x53f9b8 */ if (!fZ) goto L_0053f9b8;
L_0053f99e:; BB(0x0053f99e);
    /* 0053f99e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0053f9a4: fcomp dword ptr [0x923688] */ fx_compare(ST(0), R_F32((u32)(0x923688u))); FPOP();
    /* 0053f9aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053f9ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053f9ad: jae 0x53f9b8 */ if (!fC) goto L_0053f9b8;
L_0053f9af:; BB(0x0053f9af);
    /* 0053f9af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f9b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f9b3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53f9b8u); f_0051f62c();
L_0053f9b8:; BB(0x0053f9b8);
    /* 0053f9b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f9b9: ret 4 */ FN_RET(0x0053f928); r_esp += 8; return;
L_0053f9bc:; BB(0x0053f9bc);
    /* 0053f9bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f9be: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x53f9c3u); f_0053e548();
    /* 0053f9c3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f9c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f9c7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53f9ccu); f_0051f664();
    /* 0053f9cc: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0053f9d2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0053f9d5: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053f9da: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0053f9e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053f9e2: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x53f9e8u); call_ind(t); }
    /* 0053f9e8: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0053f9eb: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053f9f0: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 0053f9f6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0053f9f9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053f9fc: je 0x53fa0c */ if (fZ) goto L_0053fa0c;
L_0053f9fe:; BB(0x0053f9fe);
    /* 0053f9fe: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 0053fa08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fa09: ret 4 */ FN_RET(0x0053f928); r_esp += 8; return;
L_0053fa0c:; BB(0x0053fa0c);
    /* 0053fa0c: movzx eax, word ptr [ebp + 0x4d0] */ r_eax = (u32)R16((u32)(r_ebp+0x4d0u));
    /* 0053fa13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa14: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x53fa19u); f_007b4d18();
    /* 0053fa19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053fa1a: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0053fa20: mov ecx, eax */ r_ecx = r_eax;
    /* 0053fa22: call 0x53fa2c */ r_esp -= 4; W32(r_esp, 0x53fa27u); f_0053fa2c();
    /* 0053fa27: jmp 0x53f9fe */ goto L_0053f9fe;
}

void f_0053fa2c(void) /* sub_53FA2C */
{
    FN_ENTER(0x0053fa2c);
    /* 0053fa2c: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0053fa32: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053fa35: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0053fa3b: ret  */ FN_RET(0x0053fa2c); r_esp += 4; return;
}

void f_0053fa3c(void) /* sub_53FA3C */
{
    FN_ENTER(0x0053fa3c);
    /* 0053fa3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa3e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fa41: mov edi, ecx */ r_edi = r_ecx;
    /* 0053fa43: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0053fa47: lea ebx, [edi + 0x498] */ r_ebx = (u32)(r_edi+0x498u);
    /* 0053fa4d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa50: je 0x53fd25 */ if (fZ) goto L_0053fd25;
L_0053fa56:; BB(0x0053fa56);
    /* 0053fa56: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa59: je 0x53fcef */ if (fZ) goto L_0053fcef;
L_0053fa5f:; BB(0x0053fa5f);
    /* 0053fa5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa61: jne 0x53fcdb */ if (!fZ) goto L_0053fcdb;
L_0053fa67:; BB(0x0053fa67);
    /* 0053fa67: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fa69: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53fa6eu); f_007aa094();
    /* 0053fa6e: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa73: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fa75: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53fa7au); f_00520ea0();
    /* 0053fa7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa7c: je 0x53fd1d */ if (fZ) goto L_0053fd1d;
L_0053fa82:; BB(0x0053fa82);
    /* 0053fa82: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0053fa88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa8b: jne 0x53fc7f */ if (!fZ) goto L_0053fc7f;
L_0053fa91:; BB(0x0053fa91);
    /* 0053fa91: mov eax, dword ptr [edi + 0x47c] */ r_eax = R32((u32)(r_edi+0x47cu));
    /* 0053fa97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fa99: jne 0x53fb61 */ if (!fZ) goto L_0053fb61;
L_0053fa9f:; BB(0x0053fa9f);
    /* 0053fa9f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053faa1: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53faa6u); f_005213d8();
    /* 0053faa6: mov ecx, edi */ r_ecx = r_edi;
    /* 0053faa8: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53faadu); f_00521410();
    /* 0053faad: mov ecx, edi */ r_ecx = r_edi;
    /* 0053faaf: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x53fab4u); f_00520bf4();
    /* 0053fab4: fld dword ptr [0x923680] */ FPUSH(R_F32((u32)(0x923680u)));
    /* 0053faba: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053fabc: fcom dword ptr [0x92367c] */ fx_compare(ST(0), R_F32((u32)(0x92367cu))); 
    /* 0053fac2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053fac4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053fac5: jb 0x53fad1 */ if (fC) goto L_0053fad1;
L_0053fac7:; BB(0x0053fac7);
    /* 0053fac7: fld dword ptr [0x923674] */ FPUSH(R_F32((u32)(0x923674u)));
    /* 0053facd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053facf: jmp 0x53fad9 */ goto L_0053fad9;
L_0053fad1:; BB(0x0053fad1);
    /* 0053fad1: fld dword ptr [0x923678] */ FPUSH(R_F32((u32)(0x923678u)));
    /* 0053fad7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0053fad9:; BB(0x0053fad9);
    /* 0053fad9: fld dword ptr [0x92366c] */ FPUSH(R_F32((u32)(0x92366cu)));
    /* 0053fadf: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0053fae1: fld dword ptr [0x923668] */ FPUSH(R_F32((u32)(0x923668u)));
    /* 0053fae7: fsub dword ptr [edi + 0x3b4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3b4u));
    /* 0053faed: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0053faf3: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0053faf9: fld dword ptr [edi + 0x3f0] */ FPUSH(R_F32((u32)(r_edi+0x3f0u)));
    /* 0053faff: fsub dword ptr [edi + 0x3fc] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3fcu));
    /* 0053fb05: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0053fb07: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0053fb0b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0053fb10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053fb15: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0053fb19: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0053fb1d: fistp dword ptr [edi + 0x488] */ W32((u32)(r_edi+0x488u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053fb23: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0053fb27: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053fb29: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053fb2b: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 0053fb31: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0053fb33: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0053fb35: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053fb37: fstp dword ptr [edi + 0x494] */ W_F32((u32)(r_edi+0x494u), ST(0)); FPOP();
    /* 0053fb3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053fb3f: fstp dword ptr [edi + 0x48c] */ W_F32((u32)(r_edi+0x48cu), ST(0)); FPOP();
    /* 0053fb45: fchs  */ ST(0) = -ST(0);
    /* 0053fb47: fstp dword ptr [edi + 0x498] */ W_F32((u32)(r_edi+0x498u), ST(0)); FPOP();
    /* 0053fb4d: fchs  */ ST(0) = -ST(0);
    /* 0053fb4f: fstp dword ptr [edi + 0x4a0] */ W_F32((u32)(r_edi+0x4a0u), ST(0)); FPOP();
    /* 0053fb55: mov dword ptr [edi + 0x490], eax */ W32((u32)(r_edi+0x490u), r_eax);
    /* 0053fb5b: mov eax, dword ptr [edi + 0x47c] */ r_eax = R32((u32)(r_edi+0x47cu));
L_0053fb61:; BB(0x0053fb61);
    /* 0053fb61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053fb64: mov dword ptr [edi + 0x47c], eax */ W32((u32)(r_edi+0x47cu), r_eax);
    /* 0053fb6a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053fb6d: jl 0x53fb87 */ if ((fS!=fO)) goto L_0053fb87;
L_0053fb6f:; BB(0x0053fb6f);
    /* 0053fb6f: add dword ptr [edi + 0x480], 1 */ { u32 ad = (u32)(r_edi+0x480u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053fb76: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fb78: mov dword ptr [edi + 0x478], 0 */ W32((u32)(r_edi+0x478u), 0x0u);
    /* 0053fb82: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x53fb87u); f_0053fdc4();
L_0053fb87:; BB(0x0053fb87);
    /* 0053fb87: push dword ptr [edi + 0x488] */ { u32 v = R32((u32)(r_edi+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053fb8d: fld dword ptr [edi + 0x400] */ FPUSH(R_F32((u32)(r_edi+0x400u)));
    /* 0053fb93: fadd dword ptr [edi + 0x48c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x48cu));
    /* 0053fb99: fstp dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0)); FPOP();
    /* 0053fb9f: lea eax, [edi + 0x4a0] */ r_eax = (u32)(r_edi+0x4a0u);
    /* 0053fba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fba6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fba7: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x53fbacu); f_00782b64();
    /* 0053fbac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fbaf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0053fbb2: fld dword ptr [edi + 0x490] */ FPUSH(R_F32((u32)(r_edi+0x490u)));
    /* 0053fbb8: fadd dword ptr [edi + 0x494] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x494u));
    /* 0053fbbe: fld dword ptr [edi + 0x498] */ FPUSH(R_F32((u32)(r_edi+0x498u)));
    /* 0053fbc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053fbc6: fadd dword ptr [edi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x39cu));
    /* 0053fbcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053fbce: fstp dword ptr [edi + 0x490] */ W_F32((u32)(r_edi+0x490u), ST(0)); FPOP();
    /* 0053fbd4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053fbd7: fld dword ptr [edi + 0x4a0] */ FPUSH(R_F32((u32)(r_edi+0x4a0u)));
    /* 0053fbdd: fmul dword ptr [edi + 0x490] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x490u));
    /* 0053fbe3: fadd dword ptr [edi + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3a4u));
    /* 0053fbe9: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0053fbec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053fbf0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53fbf5u); f_0082f9c4();
    /* 0053fbf5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053fbf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053fbf9: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x53fbfeu); f_007828e4();
    /* 0053fbfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053fbff: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053fc02: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0053fc06: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0053fc0a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053fc0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fc10: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053fc13: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053fc17: call 0x520b10 */ r_esp -= 4; W32(r_esp, 0x53fc1cu); f_00520b10();
    /* 0053fc1c: fld dword ptr [edi + 0x498] */ FPUSH(R_F32((u32)(r_edi+0x498u)));
    /* 0053fc22: fld dword ptr [edi + 0x4a0] */ FPUSH(R_F32((u32)(r_edi+0x4a0u)));
    /* 0053fc28: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053fc2a: fmul qword ptr [0x923538] */ ST(0) = ST(0) * R_F64((u32)(0x923538u));
    /* 0053fc30: fdiv qword ptr [0x923530] */ ST(0) = ST(0) / R_F64((u32)(0x923530u));
    /* 0053fc36: mov ecx, dword ptr [edi + 0x410] */ r_ecx = R32((u32)(r_edi+0x410u));
    /* 0053fc3c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0053fc40: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0053fc45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053fc4a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0053fc4e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0053fc52: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0053fc56: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0053fc5a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0053fc5e: lea edx, [edi + 0x41c] */ r_edx = (u32)(r_edi+0x41cu);
    /* 0053fc64: push dword ptr [edi + 0x4bc] */ { u32 v = R32((u32)(r_edi+0x4bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053fc6a: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc70: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053fc75: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0053fc78: call 0x543094 */ r_esp -= 4; W32(r_esp, 0x53fc7du); f_00543094();
    /* 0053fc7d: jmp 0x53fcc9 */ goto L_0053fcc9;
L_0053fc7f:; BB(0x0053fc7f);
    /* 0053fc7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fc81: jne 0x53fcc9 */ if (!fZ) goto L_0053fcc9;
L_0053fc83:; BB(0x0053fc83);
    /* 0053fc83: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fc85: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53fc8au); f_005213d8();
    /* 0053fc8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fc8c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53fc91u); f_00521410();
    /* 0053fc91: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fc93: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x53fc98u); f_0054051c();
    /* 0053fc98: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fc9a: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x53fc9fu); f_00542470();
    /* 0053fc9f: mov eax, dword ptr [edi + 0x47c] */ r_eax = R32((u32)(r_edi+0x47cu));
    /* 0053fca5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053fca8: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053fcab: jle 0x53fcc3 */ if ((fZ||fS!=fO)) goto L_0053fcc3;
L_0053fcad:; BB(0x0053fcad);
    /* 0053fcad: mov dword ptr [edi + 0x47c], 0 */ W32((u32)(r_edi+0x47cu), 0x0u);
    /* 0053fcb7: mov dword ptr [edi + 0x478], 1 */ W32((u32)(r_edi+0x478u), 0x1u);
    /* 0053fcc1: jmp 0x53fcc9 */ goto L_0053fcc9;
L_0053fcc3:; BB(0x0053fcc3);
    /* 0053fcc3: mov dword ptr [edi + 0x47c], eax */ W32((u32)(r_edi+0x47cu), r_eax);
L_0053fcc9:; BB(0x0053fcc9);
    /* 0053fcc9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053fccb: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fccd: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fcd3u); call_ind(t); }
    /* 0053fcd3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053fcd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053fcd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053fcd8: ret 4 */ FN_RET(0x0053fa3c); r_esp += 8; return;
L_0053fcdb:; BB(0x0053fcdb);
    /* 0053fcdb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fcde: jne 0x53fd1d */ if (!fZ) goto L_0053fd1d;
L_0053fce0:; BB(0x0053fce0);
    /* 0053fce0: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fce2: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x53fce7u); f_0053fdc4();
    /* 0053fce7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053fcea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053fceb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053fcec: ret 4 */ FN_RET(0x0053fa3c); r_esp += 8; return;
L_0053fcef:; BB(0x0053fcef);
    /* 0053fcef: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053fcf1: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fcf3: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x53fcf9u); call_ind(t); }
    /* 0053fcf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fcfb: jne 0x53fd1d */ if (!fZ) goto L_0053fd1d;
L_0053fcfd:; BB(0x0053fcfd);
    /* 0053fcfd: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fcff: call 0x53fdd4 */ r_esp -= 4; W32(r_esp, 0x53fd04u); f_0053fdd4();
    /* 0053fd04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fd06: jne 0x53fd1d */ if (!fZ) goto L_0053fd1d;
L_0053fd08:; BB(0x0053fd08);
    /* 0053fd08: mov eax, dword ptr [edi + 0x480] */ r_eax = R32((u32)(r_edi+0x480u));
    /* 0053fd0e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053fd11: jl 0x53fd1d */ if ((fS!=fO)) goto L_0053fd1d;
L_0053fd13:; BB(0x0053fd13);
    /* 0053fd13: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053fd15: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fd17: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x53fd1du); call_ind(t); }
L_0053fd1d:; BB(0x0053fd1d);
    /* 0053fd1d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053fd20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053fd21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053fd22: ret 4 */ FN_RET(0x0053fa3c); r_esp += 8; return;
L_0053fd25:; BB(0x0053fd25);
    /* 0053fd25: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fd27: call 0x53f904 */ r_esp -= 4; W32(r_esp, 0x53fd2cu); f_0053f904();
    /* 0053fd2c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fd2e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fd30: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53fd35u); f_0051f664();
    /* 0053fd35: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0053fd3b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053fd3d: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053fd42: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0053fd48: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fd4a: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53fd50u); call_ind(t); }
    /* 0053fd50: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 0053fd5a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053fd5c: mov dword ptr [edi + 0x478], 1 */ W32((u32)(r_edi+0x478u), 0x1u);
    /* 0053fd66: call 0x53fdf0 */ r_esp -= 4; W32(r_esp, 0x53fd6bu); f_0053fdf0();
    /* 0053fd6b: mov dword ptr [edi + 0x48c], 0 */ W32((u32)(r_edi+0x48cu), 0x0u);
    /* 0053fd75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053fd77: mov dword ptr [edi + 0x47c], eax */ W32((u32)(r_edi+0x47cu), r_eax);
    /* 0053fd7d: mov dword ptr [edi + 0x480], eax */ W32((u32)(r_edi+0x480u), r_eax);
    /* 0053fd83: mov dword ptr [edi + 0x490], 0 */ W32((u32)(r_edi+0x490u), 0x0u);
    /* 0053fd8d: mov dword ptr [edi + 0x488], eax */ W32((u32)(r_edi+0x488u), r_eax);
    /* 0053fd93: mov dword ptr [edi + 0x494], 0 */ W32((u32)(r_edi+0x494u), 0x0u);
    /* 0053fd9d: mov dword ptr [edi + 0x498], 0 */ W32((u32)(r_edi+0x498u), 0x0u);
    /* 0053fda7: mov dword ptr [edi + 0x49c], 0 */ W32((u32)(r_edi+0x49cu), 0x0u);
    /* 0053fdb1: mov dword ptr [edi + 0x4a0], 0 */ W32((u32)(r_edi+0x4a0u), 0x0u);
    /* 0053fdbb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053fdbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053fdbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053fdc0: ret 4 */ FN_RET(0x0053fa3c); r_esp += 8; return;
}

void f_0053fdc4(void) /* sub_53FDC4 */
{
    FN_ENTER(0x0053fdc4);
    /* 0053fdc4: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0053fdca: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053fdcd: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053fdd0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0053fdd3: ret  */ FN_RET(0x0053fdc4); r_esp += 4; return;
}

void f_0053fdd4(void) /* sub_53FDD4 */
{
    FN_ENTER(0x0053fdd4);
    /* 0053fdd4: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 0053fdda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fddc: je 0x53fde1 */ if (fZ) goto L_0053fde1;
L_0053fdde:; BB(0x0053fdde);
    /* 0053fdde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053fde0: ret  */ FN_RET(0x0053fdd4); r_esp += 4; return;
L_0053fde1:; BB(0x0053fde1);
    /* 0053fde1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0053fde3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53fde8u); f_0051f62c();
    /* 0053fde8: mov eax, 1 */ r_eax = 0x1u;
    /* 0053fded: ret  */ FN_RET(0x0053fdd4); r_esp += 4; return;
}

void f_0053fdf0(void) /* sub_53FDF0 */
{
    FN_ENTER(0x0053fdf0);
    /* 0053fdf0: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0053fdf6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053fdf9: or eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053fdfc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0053fdff: ret  */ FN_RET(0x0053fdf0); r_esp += 4; return;
}

void f_0053fe00(void) /* sub_53FE00 */
{
    FN_ENTER(0x0053fe00);
    /* 0053fe00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe03: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fe06: mov esi, ecx */ r_esi = r_ecx;
    /* 0053fe08: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0053fe0c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe0f: je 0x5404a1 */ if (fZ) goto L_005404a1;
L_0053fe15:; BB(0x0053fe15);
    /* 0053fe15: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe18: je 0x540022 */ if (fZ) goto L_00540022;
L_0053fe1e:; BB(0x0053fe1e);
    /* 0053fe1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe20: jne 0x53fff7 */ if (!fZ) goto L_0053fff7;
L_0053fe26:; BB(0x0053fe26);
    /* 0053fe26: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53fe2du); f_007aa094();
    /* 0053fe2d: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0053fe33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe35: jne 0x53fe4d */ if (!fZ) goto L_0053fe4d;
L_0053fe37:; BB(0x0053fe37);
    /* 0053fe37: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fe3c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe3e: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53fe43u); f_00520ea0();
    /* 0053fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe45: je 0x54004f */ if (fZ) goto L_0054004f;
L_0053fe4b:; BB(0x0053fe4b);
    /* 0053fe4b: jmp 0x53fe5c */ goto L_0053fe5c;
L_0053fe4d:; BB(0x0053fe4d);
    /* 0053fe4d: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe4f: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x53fe54u); f_00521238();
    /* 0053fe54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe56: je 0x54004f */ if (fZ) goto L_0054004f;
L_0053fe5c:; BB(0x0053fe5c);
    /* 0053fe5c: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0053fe62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe64: je 0x5402e5 */ if (fZ) goto L_005402e5;
L_0053fe6a:; BB(0x0053fe6a);
    /* 0053fe6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe6d: je 0x54018e */ if (fZ) goto L_0054018e;
L_0053fe73:; BB(0x0053fe73);
    /* 0053fe73: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe76: je 0x53ff5f */ if (fZ) goto L_0053ff5f;
L_0053fe7c:; BB(0x0053fe7c);
    /* 0053fe7c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fe7f: jne 0x53ffeb */ if (!fZ) goto L_0053ffeb;
L_0053fe85:; BB(0x0053fe85);
    /* 0053fe85: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe87: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53fe8cu); f_005213d8();
    /* 0053fe8c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe8e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53fe93u); f_00521410();
    /* 0053fe93: mov ecx, esi */ r_ecx = r_esi;
    /* 0053fe95: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x53fe9au); f_0054051c();
    /* 0053fe9a: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 0053fea0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053fea3: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
    /* 0053fea9: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053feac: je 0x54011f */ if (fZ) goto L_0054011f;
L_0053feb2:; BB(0x0053feb2);
    /* 0053feb2: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053feb5: je 0x540058 */ if (fZ) goto L_00540058;
L_0053febb:; BB(0x0053febb);
    /* 0053febb: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053febe: jle 0x53ff53 */ if ((fZ||fS!=fO)) goto L_0053ff53;
L_0053fec4:; BB(0x0053fec4);
    /* 0053fec4: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0053feca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053fecd: jl 0x53fedb */ if ((fS!=fO)) goto L_0053fedb;
L_0053fecf:; BB(0x0053fecf);
    /* 0053fecf: mov dword ptr [esi + 0x478], 4 */ W32((u32)(r_esi+0x478u), 0x4u);
    /* 0053fed9: jmp 0x53ff53 */ goto L_0053ff53;
L_0053fedb:; BB(0x0053fedb);
    /* 0053fedb: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0053fee1: fcom dword ptr [0x92363c] */ fx_compare(ST(0), R_F32((u32)(0x92363cu))); 
    /* 0053fee7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053fee9: mov dword ptr [esi + 0x47c], 0 */ W32((u32)(r_esi+0x47cu), 0x0u);
    /* 0053fef3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053fef4: jae 0x53ff04 */ if (!fC) goto L_0053ff04;
L_0053fef6:; BB(0x0053fef6);
    /* 0053fef6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053fef8: mov dword ptr [esi + 0x478], 3 */ W32((u32)(r_esi+0x478u), 0x3u);
    /* 0053ff02: jmp 0x53ff53 */ goto L_0053ff53;
L_0053ff04:; BB(0x0053ff04);
    /* 0053ff04: fcomp dword ptr [0x923638] */ fx_compare(ST(0), R_F32((u32)(0x923638u))); FPOP();
    /* 0053ff0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ff0c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ff0d: jae 0x53ff1b */ if (!fC) goto L_0053ff1b;
L_0053ff0f:; BB(0x0053ff0f);
    /* 0053ff0f: mov dword ptr [esi + 0x478], 2 */ W32((u32)(r_esi+0x478u), 0x2u);
    /* 0053ff19: jmp 0x53ff53 */ goto L_0053ff53;
L_0053ff1b:; BB(0x0053ff1b);
    /* 0053ff1b: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff20: mov dword ptr [esi + 0x478], 1 */ W32((u32)(r_esi+0x478u), 0x1u);
    /* 0053ff2a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff2c: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x53ff31u); f_00540c80();
    /* 0053ff31: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0053ff37: fcomp dword ptr [0x923634] */ fx_compare(ST(0), R_F32((u32)(0x923634u))); FPOP();
    /* 0053ff3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ff3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ff40: jbe 0x53ff53 */ if ((fC||fZ)) goto L_0053ff53;
L_0053ff42:; BB(0x0053ff42);
    /* 0053ff42: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 0053ff48: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053ff4d: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
L_0053ff53:; BB(0x0053ff53);
    /* 0053ff53: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff55: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53ff5au); f_00542484();
    /* 0053ff5a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ff5f:; BB(0x0053ff5f);
    /* 0053ff5f: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff61: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53ff66u); f_005213d8();
    /* 0053ff66: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff68: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53ff6du); f_00521410();
    /* 0053ff6d: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff6f: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x53ff74u); f_0054051c();
    /* 0053ff74: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0053ff77: fadd dword ptr [esi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f4u));
    /* 0053ff7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053ff7e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053ff81: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff83: call 0x53f240 */ r_esp -= 4; W32(r_esp, 0x53ff88u); f_0053f240();
    /* 0053ff88: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0053ff8e: fcom dword ptr [0x923650] */ fx_compare(ST(0), R_F32((u32)(0x923650u))); 
    /* 0053ff94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ff96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ff97: jb 0x53ffc4 */ if (fC) goto L_0053ffc4;
L_0053ff99:; BB(0x0053ff99);
    /* 0053ff99: fcomp dword ptr [0x923638] */ fx_compare(ST(0), R_F32((u32)(0x923638u))); FPOP();
    /* 0053ff9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ffa1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ffa2: jbe 0x53ffae */ if ((fC||fZ)) goto L_0053ffae;
L_0053ffa4:; BB(0x0053ffa4);
    /* 0053ffa4: mov dword ptr [esi + 0x478], 1 */ W32((u32)(r_esi+0x478u), 0x1u);
L_0053ffae:; BB(0x0053ffae);
    /* 0053ffae: mov eax, dword ptr [esi + 0x470] */ r_eax = R32((u32)(r_esi+0x470u));
    /* 0053ffb4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ffb6: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ffbb: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffbd: call 0x52161c */ r_esp -= 4; W32(r_esp, 0x53ffc2u); f_0052161c();
    /* 0053ffc2: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ffc4:; BB(0x0053ffc4);
    /* 0053ffc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053ffc6: fld dword ptr [esi + 0x3fc] */ FPUSH(R_F32((u32)(r_esi+0x3fcu)));
    /* 0053ffcc: fcomp dword ptr [0x923740] */ fx_compare(ST(0), R_F32((u32)(0x923740u))); FPOP();
    /* 0053ffd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ffd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ffd5: jae 0x53ffeb */ if (!fC) goto L_0053ffeb;
L_0053ffd7:; BB(0x0053ffd7);
    /* 0053ffd7: mov dword ptr [esi + 0x47c], 0 */ W32((u32)(r_esi+0x47cu), 0x0u);
    /* 0053ffe1: mov dword ptr [esi + 0x478], 3 */ W32((u32)(r_esi+0x478u), 0x3u);
L_0053ffeb:; BB(0x0053ffeb);
    /* 0053ffeb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053ffed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fff5u); call_ind(t); }
    /* 0053fff5: jmp 0x54004f */ goto L_0054004f;
L_0053fff7:; BB(0x0053fff7);
    /* 0053fff7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fffa: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_0053fffc:; BB(0x0053fffc);
    /* 0053fffc: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 00540001: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00540007: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054000c: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00540012: mov ecx, esi */ r_ecx = r_esi;
    /* 00540014: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540019u); f_00540c80();
    /* 00540019: mov ecx, esi */ r_ecx = r_esi;
    /* 0054001b: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x540020u); f_0053fdc4();
    /* 00540020: jmp 0x54004f */ goto L_0054004f;
L_00540022:; BB(0x00540022);
    /* 00540022: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00540024: mov ecx, esi */ r_ecx = r_esi;
    /* 00540026: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x54002cu); call_ind(t); }
    /* 0054002c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054002e: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_00540030:; BB(0x00540030);
    /* 00540030: mov ecx, esi */ r_ecx = r_esi;
    /* 00540032: call 0x53fdd4 */ r_esp -= 4; W32(r_esp, 0x540037u); f_0053fdd4();
    /* 00540037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540039: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_0054003b:; BB(0x0054003b);
    /* 0054003b: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 00540041: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540044: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_00540046:; BB(0x00540046);
    /* 00540046: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00540048: mov ecx, esi */ r_ecx = r_esi;
    /* 0054004a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54004fu); f_0051f62c();
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x0053fe00); r_esp += 8; return;
L_00540058:; BB(0x00540058);
    /* 00540058: fld dword ptr [esi + 0x3fc] */ FPUSH(R_F32((u32)(r_esi+0x3fcu)));
    /* 0054005e: fcomp dword ptr [0x923740] */ fx_compare(ST(0), R_F32((u32)(0x923740u))); FPOP();
    /* 00540064: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00540066: add dword ptr [esi + 0x40c], 1 */ { u32 ad = (u32)(r_esi+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0054006d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054006e: jae 0x540102 */ if (!fC) goto L_00540102;
L_00540074:; BB(0x00540074);
    /* 00540074: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054007a: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540082: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x540085u); call_ind(t); }
    /* 00540085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540087: je 0x540102 */ if (fZ) goto L_00540102;
L_00540089:; BB(0x00540089);
    /* 00540089: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054008e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054008f: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540097: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54009au); call_ind(t); }
    /* 0054009a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054009c: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005400a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005400a2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400aa: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5400adu); call_ind(t); }
    /* 005400ad: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005400b3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005400b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0051f8d8();
    /* 005400bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400c0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400c2:; BB(0x005400c2);
    /* 005400c2: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005400c8: call 0x51f900 */ r_esp -= 4; W32(r_esp, 0x5400cdu); f_0051f900();
    /* 005400cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400d0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400d2:; BB(0x005400d2);
    /* 005400d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005400d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5400d9u); f_007751b0();
    /* 005400d9: fcomp dword ptr [0x923658] */ fx_compare(ST(0), R_F32((u32)(0x923658u))); FPOP();
    /* 005400df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005400e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005400e2: jae 0x540102 */ if (!fC) goto L_00540102;
L_005400e4:; BB(0x005400e4);
    /* 005400e4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400ec: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5400f2u); call_ind(t); }
    /* 005400f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400f4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400fc: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x540102u); call_ind(t); }
L_00540102:; BB(0x00540102);
    /* 00540102: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00540108: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054010d: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540117u); f_00814298();
    /* 00540117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054011a: jmp 0x53ff53 */ goto L_0053ff53;
L_0054011f:; BB(0x0054011f);
    /* 0054011f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00540122: mov eax, dword ptr [esi + 0x458] */ r_eax = R32((u32)(r_esi+0x458u));
    /* 00540128: mov ebp, dword ptr [esi + 0x45c] */ r_ebp = R32((u32)(r_esi+0x45cu));
    /* 0054012e: mov edi, dword ptr [esi + 0x460] */ r_edi = R32((u32)(r_esi+0x460u));
    /* 00540134: lea edx, [esi + 0x464] */ r_edx = (u32)(r_esi+0x464u);
    /* 0054013a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054013d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00540141: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00540145: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x54014au); f_0082ebac();
    /* 0054014a: fld dword ptr [0x923654] */ FPUSH(R_F32((u32)(0x923654u)));
    /* 00540150: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00540153: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00540155: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00540159: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054015d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054015f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00540161: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00540163: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00540165: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00540167: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054016a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054016c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00540170: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00540174: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00540177: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00540179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054017b: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00540180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540181: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x540186u); f_0050a984();
    /* 00540186: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540189: jmp 0x53ff53 */ goto L_0053ff53;
L_0054018e:; BB(0x0054018e);
    /* 0054018e: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 00540194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540196: jne 0x540251 */ if (!fZ) goto L_00540251;
L_0054019c:; BB(0x0054019c);
    /* 0054019c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054019e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5401a3u); f_005213d8();
    /* 005401a3: mov ecx, esi */ r_ecx = r_esi;
    /* 005401a5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5401aau); f_00521410();
    /* 005401aa: push 0x44e10000 */ { u32 v = 0x44e10000u; r_esp -= 4; W32(r_esp, v); }
    /* 005401af: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x5401b4u); f_0082f9f8();
    /* 005401b4: fld dword ptr [0x92364c] */ FPUSH(R_F32((u32)(0x92364cu)));
    /* 005401ba: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005401bc: fld dword ptr [0x923630] */ FPUSH(R_F32((u32)(0x923630u)));
    /* 005401c2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005401c4: mov eax, dword ptr [esi + 0x480] */ r_eax = R32((u32)(r_esi+0x480u));
    /* 005401ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005401cd: fld dword ptr [0x92362c] */ FPUSH(R_F32((u32)(0x92362cu)));
    /* 005401d3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005401d5: je 0x5402d0 */ if (fZ) goto L_005402d0;
L_005401db:; BB(0x005401db);
    /* 005401db: mov dword ptr [esi + 0x480], 1 */ W32((u32)(r_esi+0x480u), 0x1u);
L_005401e5:; BB(0x005401e5);
    /* 005401e5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005401e7: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 005401e9: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 005401ef: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005401f1: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 005401f7: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005401f9: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005401fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005401fd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005401ff: fld dword ptr [0x923628] */ FPUSH(R_F32((u32)(0x923628u)));
    /* 00540205: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00540207: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00540209: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 0054020f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00540211: fstp dword ptr [esi + 0x48c] */ W_F32((u32)(r_esi+0x48cu), ST(0)); FPOP();
    /* 00540217: fld dword ptr [esi + 0x3f4] */ FPUSH(R_F32((u32)(r_esi+0x3f4u)));
    /* 0054021d: fsub dword ptr [esi + 0x3fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3fcu));
    /* 00540223: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00540225: fstp dword ptr [esi + 0x490] */ W_F32((u32)(r_esi+0x490u), ST(0)); FPOP();
    /* 0054022b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054022d: fchs  */ ST(0) = -ST(0);
    /* 0054022f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00540231: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00540233: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 00540239: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0054023f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540244: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 00540249: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54024eu); f_00814298();
    /* 0054024e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00540251:; BB(0x00540251);
    /* 00540251: mov ecx, esi */ r_ecx = r_esi;
    /* 00540253: call 0x53fdf0 */ r_esp -= 4; W32(r_esp, 0x540258u); f_0053fdf0();
    /* 00540258: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 0054025e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540261: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540264: jge 0x54026e */ if ((fS==fO)) goto L_0054026e;
L_00540266:; BB(0x00540266);
    /* 00540266: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
    /* 0054026c: jmp 0x540283 */ goto L_00540283;
L_0054026e:; BB(0x0054026e);
    /* 0054026e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540270: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
    /* 00540276: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0054027c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054027e: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x540283u); f_0053fdc4();
L_00540283:; BB(0x00540283);
    /* 00540283: push dword ptr [esi + 0x48c] */ { u32 v = R32((u32)(r_esi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00540289: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054028f: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 00540295: fadd dword ptr [esi + 0x490] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x490u));
    /* 0054029b: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005402a1: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 005402a7: mov ecx, esi */ r_ecx = r_esi;
    /* 005402a9: call 0x520b10 */ r_esp -= 4; W32(r_esp, 0x5402aeu); f_00520b10();
    /* 005402ae: push dword ptr [esi + 0x4bc] */ { u32 v = R32((u32)(r_esi+0x4bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005402b4: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005402b9: mov ecx, dword ptr [esi + 0x410] */ r_ecx = R32((u32)(r_esi+0x410u));
    /* 005402bf: lea eax, [esi + 0x41c] */ r_eax = (u32)(r_esi+0x41cu);
    /* 005402c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005402c6: call 0x543094 */ r_esp -= 4; W32(r_esp, 0x5402cbu); f_00543094();
    /* 005402cb: jmp 0x53ffeb */ goto L_0053ffeb;
L_005402d0:; BB(0x005402d0);
    /* 005402d0: mov dword ptr [esi + 0x480], 0 */ W32((u32)(r_esi+0x480u), 0x0u);
    /* 005402da: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005402dc: fchs  */ ST(0) = -ST(0);
    /* 005402de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005402e0: jmp 0x5401e5 */ goto L_005401e5;
L_005402e5:; BB(0x005402e5);
    /* 005402e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005402e7: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5402ecu); f_005213d8();
    /* 005402ec: mov ecx, esi */ r_ecx = r_esi;
    /* 005402ee: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5402f3u); f_00521410();
    /* 005402f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005402f5: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x5402fau); f_0054051c();
    /* 005402fa: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 00540300: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540303: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540306: jle 0x540460 */ if ((fZ||fS!=fO)) goto L_00540460;
L_0054030c:; BB(0x0054030c);
    /* 0054030c: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00540312: mov dword ptr [esi + 0x47c], 0 */ W32((u32)(r_esi+0x47cu), 0x0u);
    /* 0054031c: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540321: mov dword ptr [esi + 0x478], 1 */ W32((u32)(r_esi+0x478u), 0x1u);
    /* 0054032b: je 0x54035d */ if (fZ) goto L_0054035d;
L_0054032d:; BB(0x0054032d);
    /* 0054032d: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00540333: fcomp dword ptr [0x923638] */ fx_compare(ST(0), R_F32((u32)(0x923638u))); FPOP();
    /* 00540339: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054033b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054033c: jae 0x540466 */ if (!fC) goto L_00540466;
L_00540342:; BB(0x00540342);
    /* 00540342: push 0x923618 */ { u32 v = 0x923618u; r_esp -= 4; W32(r_esp, v); }
    /* 00540347: mov dword ptr [esi + 0x478], 2 */ W32((u32)(r_esi+0x478u), 0x2u);
    /* 00540351: mov ecx, esi */ r_ecx = r_esi;
    /* 00540353: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540358u); f_00540c80();
    /* 00540358: jmp 0x540466 */ goto L_00540466;
L_0054035d:; BB(0x0054035d);
    /* 0054035d: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00540363: fcomp dword ptr [0x923634] */ fx_compare(ST(0), R_F32((u32)(0x923634u))); FPOP();
    /* 00540369: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054036b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054036c: jae 0x540466 */ if (!fC) goto L_00540466;
L_00540372:; BB(0x00540372);
    /* 00540372: movzx eax, word ptr [esi + 0x4d0] */ r_eax = (u32)R16((u32)(r_esi+0x4d0u));
    /* 00540379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054037a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x54037fu); f_007b4d18();
    /* 0054037f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00540380: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540386: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0054038c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054038e: mov ecx, eax */ r_ecx = r_eax;
    /* 00540390: call dword ptr [edx + 0x1d8] */ { u32 t = R32((u32)(r_edx+0x1d8u)); r_esp -= 4; W32(r_esp, 0x540396u); call_ind(t); }
    /* 00540396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540398: je 0x5403b0 */ if (fZ) goto L_005403b0;
L_0054039a:; BB(0x0054039a);
    /* 0054039a: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005403a0: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005403a5: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 005403ab: jmp 0x540466 */ goto L_00540466;
L_005403b0:; BB(0x005403b0);
    /* 005403b0: fld dword ptr [0x923644] */ FPUSH(R_F32((u32)(0x923644u)));
    /* 005403b6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005403ba: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005403be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005403bf: push dword ptr [0xa7370c] */ { u32 v = R32((u32)(0xa7370cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005403c5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005403c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005403c9: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x5403ceu); f_0051f918();
    /* 005403ce: mov edx, eax */ r_edx = r_eax;
    /* 005403d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005403d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005403d4: jle 0x54042e */ if ((fZ||fS!=fO)) goto L_0054042e;
L_005403d6:; BB(0x005403d6);
    /* 005403d6: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 005403da: mov edi, eax */ r_edi = r_eax;
    /* 005403dc: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 005403e0: mov ebx, edx */ r_ebx = r_edx;
L_005403e2:; BB(0x005403e2);
    /* 005403e2: movzx ebp, word ptr [esp + edi*8 + 0xc] */ r_ebp = (u32)R16((u32)(r_esp+r_edi*8+0xcu));
    /* 005403e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005403e8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5403edu); f_0068d5a8();
    /* 005403ed: mov ebp, eax */ r_ebp = r_eax;
    /* 005403ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005403f2: cmp ebp, dword ptr [esi + 0x398] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005403f8: je 0x54041f */ if (fZ) goto L_0054041f;
L_005403fa:; BB(0x005403fa);
    /* 005403fa: movzx eax, word ptr [esi + 0x4d0] */ r_eax = (u32)R16((u32)(r_esi+0x4d0u));
    /* 00540401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540402: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x540407u); f_007b4d18();
    /* 00540407: mov ecx, eax */ r_ecx = r_eax;
    /* 00540409: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054040c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054040d: mov dword ptr [esi + 0x3c8], ecx */ W32((u32)(r_esi+0x3c8u), r_ecx);
    /* 00540413: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540415: call dword ptr [eax + 0x1d8] */ { u32 t = R32((u32)(r_eax+0x1d8u)); r_esp -= 4; W32(r_esp, 0x54041bu); call_ind(t); }
    /* 0054041b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054041d: jne 0x54047f */ if (!fZ) goto L_0054047f;
L_0054041f:; BB(0x0054041f);
    /* 0054041f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00540422: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540424: jl 0x5403e2 */ if ((fS!=fO)) goto L_005403e2;
L_00540426:; BB(0x00540426);
    /* 00540426: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0054042a: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0054042e:; BB(0x0054042e);
    /* 0054042e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540430: je 0x540454 */ if (fZ) goto L_00540454;
L_00540432:; BB(0x00540432);
    /* 00540432: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00540436: fcomp dword ptr [0x923634] */ fx_compare(ST(0), R_F32((u32)(0x923634u))); FPOP();
    /* 0054043c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054043e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054043f: jae 0x540466 */ if (!fC) goto L_00540466;
L_00540441:; BB(0x00540441);
    /* 00540441: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00540447: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054044c: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00540452: jmp 0x540466 */ goto L_00540466;
L_00540454:; BB(0x00540454);
    /* 00540454: mov dword ptr [esi + 0x478], 4 */ W32((u32)(r_esi+0x478u), 0x4u);
    /* 0054045e: jmp 0x540466 */ goto L_00540466;
L_00540460:; BB(0x00540460);
    /* 00540460: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
L_00540466:; BB(0x00540466);
    /* 00540466: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00540469: fadd dword ptr [esi + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3fcu));
    /* 0054046f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00540470: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00540473: mov ecx, esi */ r_ecx = r_esi;
    /* 00540475: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x54047au); f_00542498();
    /* 0054047a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0054047f:; BB(0x0054047f);
    /* 0054047f: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00540483: mov eax, edi */ r_eax = r_edi;
    /* 00540485: push dword ptr [esp + eax*8 + 0x10] */ { u32 v = R32((u32)(r_esp+r_eax*8+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540489: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x54048eu); f_0082dc9c();
    /* 0054048e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00540492: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540493: mov edi, 1 */ r_edi = 0x1u;
    /* 00540498: mov ecx, esi */ r_ecx = r_esi;
    /* 0054049a: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x54049fu); f_00521388();
    /* 0054049f: jmp 0x54042e */ goto L_0054042e;
L_005404a1:; BB(0x005404a1);
    /* 005404a1: mov ecx, esi */ r_ecx = r_esi;
    /* 005404a3: call 0x53f904 */ r_esp -= 4; W32(r_esp, 0x5404a8u); f_0053f904();
    /* 005404a8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005404aa: mov ecx, esi */ r_ecx = r_esi;
    /* 005404ac: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5404b1u); f_0051f664();
    /* 005404b1: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005404b7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005404b9: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005404be: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 005404c4: mov ecx, esi */ r_ecx = r_esi;
    /* 005404c6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5404ccu); call_ind(t); }
    /* 005404cc: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005404cf: mov edx, dword ptr [esi + 0x3d0] */ r_edx = R32((u32)(r_esi+0x3d0u));
    /* 005404d5: mov dword ptr [esi + 0x47c], 0x28 */ W32((u32)(r_esi+0x47cu), 0x28u);
    /* 005404df: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005404e4: mov dword ptr [esi + 0x48c], 0 */ W32((u32)(r_esi+0x48cu), 0x0u);
    /* 005404ee: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005404f1: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005404f7: mov dword ptr [esi + 0x3d0], edx */ W32((u32)(r_esi+0x3d0u), r_edx);
    /* 005404fd: mov dword ptr [esi + 0x490], 0 */ W32((u32)(r_esi+0x490u), 0x0u);
    /* 00540507: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00540509: mov dword ptr [esi + 0x478], ebp */ W32((u32)(r_esi+0x478u), r_ebp);
    /* 0054050f: mov dword ptr [esi + 0x480], ebp */ W32((u32)(r_esi+0x480u), r_ebp);
    /* 00540515: jmp 0x54004f */ goto L_0054004f;
}

