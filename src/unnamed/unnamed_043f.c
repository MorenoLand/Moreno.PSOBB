#include "protos.h"

void f_0043f010(void) /* sub_43F010 */
{
    FN_ENTER(0x0043f010);
    /* 0043f010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f011: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043f013: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f015: call 0x43fd3c */ r_esp -= 4; W32(r_esp, 0x43f01au); f_0043fd3c();
    /* 0043f01a: mov dword ptr [0xa447ac], eax */ W32((u32)(0xa447acu), r_eax);
    /* 0043f01f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x43f024u); f_004f7c84();
    /* 0043f024: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f027: je 0x43f12e */ if (fZ) goto L_0043f12e;
L_0043f02d:; BB(0x0043f02d);
    /* 0043f02d: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0043f030: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0043f033: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0043f036: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0043f039: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0043f03c: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0043f03f: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0043f045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043f047: jle 0x43f052 */ if ((fZ||fS!=fO)) goto L_0043f052;
L_0043f049:; BB(0x0043f049);
    /* 0043f049: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f04c: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
L_0043f052:; BB(0x0043f052);
    /* 0043f052: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f055: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f057: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x43f05du); call_ind(t); }
    /* 0043f05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f05f: je 0x43f071 */ if (fZ) goto L_0043f071;
L_0043f061:; BB(0x0043f061);
    /* 0043f061: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f064: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f066: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x43f06cu); call_ind(t); }
    /* 0043f06c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0043f06f: jmp 0x43f09f */ goto L_0043f09f;
L_0043f071:; BB(0x0043f071);
    /* 0043f071: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f074: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f076: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x43f07cu); call_ind(t); }
    /* 0043f07c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f07e: je 0x43f09c */ if (fZ) goto L_0043f09c;
L_0043f080:; BB(0x0043f080);
    /* 0043f080: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0043f086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043f088: jle 0x43f145 */ if ((fZ||fS!=fO)) goto L_0043f145;
L_0043f08e:; BB(0x0043f08e);
    /* 0043f08e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0043f091: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043f097: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0043f09a: jmp 0x43f09f */ goto L_0043f09f;
L_0043f09c:; BB(0x0043f09c);
    /* 0043f09c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_0043f09f:; BB(0x0043f09f);
    /* 0043f09f: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0a5: jne 0x43f130 */ if (!fZ) goto L_0043f130;
L_0043f0ab:; BB(0x0043f0ab);
    /* 0043f0ab: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0043f0b2: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0043f0b8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0ba: je 0x43f0ef */ if (fZ) goto L_0043f0ef;
L_0043f0bc:; BB(0x0043f0bc);
    /* 0043f0bc: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0043f0c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f0c5: je 0x43f0de */ if (fZ) goto L_0043f0de;
L_0043f0c7:; BB(0x0043f0c7);
    /* 0043f0c7: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 0043f0d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f0d3: call 0x43f17c */ r_esp -= 4; W32(r_esp, 0x43f0d8u); f_0043f17c();
    /* 0043f0d8: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_0043f0de:; BB(0x0043f0de);
    /* 0043f0de: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 0043f0e8: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_0043f0ef:; BB(0x0043f0ef);
    /* 0043f0ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f0f1: call 0x43f17c */ r_esp -= 4; W32(r_esp, 0x43f0f6u); f_0043f17c();
    /* 0043f0f6: fld dword ptr [0x8fe14c] */ FPUSH(R_F32((u32)(0x8fe14cu)));
    /* 0043f0fc: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0043f0ff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043f101: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043f103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f105: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043f106: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043f108: ja 0x43f10c */ if ((!fC&&!fZ)) goto L_0043f10c;
L_0043f10a:; BB(0x0043f10a);
    /* 0043f10a: fst st(1) */ ST(1) = ST(0);
L_0043f10c:; BB(0x0043f10c);
    /* 0043f10c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043f10e: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0043f111: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x43f116u); f_0078730c();
    /* 0043f116: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0043f11c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f11d: call 0x43e4ec */ r_esp -= 4; W32(r_esp, 0x43f122u); f_0043e4ec();
    /* 0043f122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f123: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f126: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f128: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x43f12eu); call_ind(t); }
L_0043f12e:; BB(0x0043f12e);
    /* 0043f12e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f12f: ret  */ FN_RET(0x0043f010); r_esp += 4; return;
L_0043f130:; BB(0x0043f130);
    /* 0043f130: mov eax, dword ptr [ebp + 0x294] */ r_eax = R32((u32)(r_ebp+0x294u));
    /* 0043f136: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f139: mov dword ptr [ebp + 0x294], eax */ W32((u32)(r_ebp+0x294u), r_eax);
    /* 0043f13f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f141: jle 0x43f158 */ if ((fZ||fS!=fO)) goto L_0043f158;
L_0043f143:; BB(0x0043f143);
    /* 0043f143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f144: ret  */ FN_RET(0x0043f010); r_esp += 4; return;
L_0043f145:; BB(0x0043f145);
    /* 0043f145: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f148: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f14a: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x43f150u); call_ind(t); }
    /* 0043f150: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0043f153: jmp 0x43f09f */ goto L_0043f09f;
L_0043f158:; BB(0x0043f158);
    /* 0043f158: mov dword ptr [ebp + 0x290], 0 */ W32((u32)(r_ebp+0x290u), 0x0u);
    /* 0043f162: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f164: mov dword ptr [ebp + 0x28c], eax */ W32((u32)(r_ebp+0x28cu), r_eax);
    /* 0043f16a: mov dword ptr [ebp + 0x294], eax */ W32((u32)(r_ebp+0x294u), r_eax);
    /* 0043f170: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f176: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0043f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f17a: ret  */ FN_RET(0x0043f010); r_esp += 4; return;
}

void f_0043f17c(void) /* sub_43F17C */
{
    FN_ENTER(0x0043f17c);
    /* 0043f17c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0043f183: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f186: ja 0x43f1c7 */ if ((!fC&&!fZ)) goto L_0043f1c7;
L_0043f188:; BB(0x0043f188);
    /* 0043f188: mov eax, dword ptr [eax*4 + 0x8fe0bc] */ r_eax = R32((u32)(r_eax*4+0x8fe0bcu));
    /* 0043f18f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f17c); r_esp += 4; return;
}

void f_0043f191(void)
{
    FN_ENTER(0x0043f191);
    /* 0043f191: call 0x43f1c8 */ r_esp -= 4; W32(r_esp, 0x43f196u); f_0043f1c8();
    /* 0043f196: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f191); r_esp += 4; return;
}

void f_0043f198(void)
{
    FN_ENTER(0x0043f198);
    /* 0043f198: call 0x440298 */ r_esp -= 4; W32(r_esp, 0x43f19du); f_00440298();
    /* 0043f19d: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f198); r_esp += 4; return;
}

void f_0043f19f(void)
{
    FN_ENTER(0x0043f19f);
    /* 0043f19f: call 0x43f458 */ r_esp -= 4; W32(r_esp, 0x43f1a4u); f_0043f458();
    /* 0043f1a4: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f19f); r_esp += 4; return;
}

void f_0043f1a6(void)
{
    FN_ENTER(0x0043f1a6);
    /* 0043f1a6: call 0x43f52c */ r_esp -= 4; W32(r_esp, 0x43f1abu); f_0043f52c();
    /* 0043f1ab: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f1a6); r_esp += 4; return;
}

void f_0043f1ad(void)
{
    FN_ENTER(0x0043f1ad);
    /* 0043f1ad: call 0x43f560 */ r_esp -= 4; W32(r_esp, 0x43f1b2u); f_0043f560();
    /* 0043f1b2: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f1ad); r_esp += 4; return;
}

void f_0043f1b4(void)
{
    FN_ENTER(0x0043f1b4);
    /* 0043f1b4: call 0x43f6c8 */ r_esp -= 4; W32(r_esp, 0x43f1b9u); f_0043f6c8();
    /* 0043f1b9: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f1b4); r_esp += 4; return;
}

void f_0043f1bb(void)
{
    FN_ENTER(0x0043f1bb);
    /* 0043f1bb: call 0x43fb90 */ r_esp -= 4; W32(r_esp, 0x43f1c0u); f_0043fb90();
    /* 0043f1c0: jmp 0x43f1c7 */ goto L_0043f1c7;
L_0043f1c7:; BB(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f1bb); r_esp += 4; return;
}

void f_0043f1c2(void)
{
    FN_ENTER(0x0043f1c2);
    /* 0043f1c2: call 0x43fcfc */ r_esp -= 4; W32(r_esp, 0x43f1c7u); f_0043fcfc();
    /* 0043f1c7: ret  */ FN_RET(0x0043f1c2); r_esp += 4; return;
}

void f_0043f1c7(void)
{
    FN_ENTER(0x0043f1c7);
    /* 0043f1c7: ret  */ FN_RET(0x0043f1c7); r_esp += 4; return;
}

void f_0043f1c8(void) /* sub_43F1C8 */
{
    FN_ENTER(0x0043f1c8);
    /* 0043f1c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043f1cb: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0043f1d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1d3: je 0x43f2eb */ if (fZ) goto L_0043f2eb;
L_0043f1d9:; BB(0x0043f1d9);
    /* 0043f1d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1dc: je 0x43f2cc */ if (fZ) goto L_0043f2cc;
L_0043f1e2:; BB(0x0043f1e2);
    /* 0043f1e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1e5: je 0x43f260 */ if (fZ) goto L_0043f260;
L_0043f1e7:; BB(0x0043f1e7);
    /* 0043f1e7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1ea: jne 0x43f2a5 */ if (!fZ) goto L_0043f2a5;
L_0043f1f0:; BB(0x0043f1f0);
    /* 0043f1f0: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0043f1f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f1f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1f9: push 0x33f */ { u32 v = 0x33fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1fe: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43f203u); f_008144b0();
    /* 0043f203: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f206: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f208: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f20du); f_007aa094();
    /* 0043f20d: mov edx, dword ptr [0xa447ec] */ r_edx = R32((u32)(0xa447ecu));
    /* 0043f213: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0043f219: sub eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043f21c: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 0043f222: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 0043f228: sub eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043f22b: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 0043f231: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f233: call 0x43f344 */ r_esp -= 4; W32(r_esp, 0x43f238u); f_0043f344();
    /* 0043f238: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f23a: call 0x43f3f0 */ r_esp -= 4; W32(r_esp, 0x43f23fu); f_0043f3f0();
    /* 0043f23f: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 0043f245: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0043f24b: cmp edx, 0xffffdc72 */ {  u32 a = r_edx; u32 b = 0xffffdc72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f251: jg 0x43f2a5 */ if ((!fZ&&fS==fO)) goto L_0043f2a5;
L_0043f253:; BB(0x0043f253);
    /* 0043f253: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043f256: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f258: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x43f25eu); call_ind(t); }
    /* 0043f25e: jmp 0x43f2a5 */ goto L_0043f2a5;
L_0043f260:; BB(0x0043f260);
    /* 0043f260: push dword ptr [0xa447d8] */ { u32 v = R32((u32)(0xa447d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043f266: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0043f26c: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f272: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043f275: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x43f27au); f_007a8c74();
    /* 0043f27a: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 0043f280: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0043f283: add edx, 0xffffc000 */ {  u32 a = r_edx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f28a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f28b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x43f290u); f_007a9018();
    /* 0043f290: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f293: cmp eax, dword ptr [0xa447d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa447d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f299: jg 0x43f2a5 */ if ((!fZ&&fS==fO)) goto L_0043f2a5;
L_0043f29b:; BB(0x0043f29b);
    /* 0043f29b: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
L_0043f2a5:; BB(0x0043f2a5);
    /* 0043f2a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f2a7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f2acu); f_007aa094();
    /* 0043f2ac: mov eax, dword ptr [0xa447ac] */ r_eax = R32((u32)(0xa447acu));
    /* 0043f2b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f2b3: jl 0x43f2ca */ if ((fS!=fO)) goto L_0043f2ca;
L_0043f2b5:; BB(0x0043f2b5);
    /* 0043f2b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2b9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043f2bc: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f2c2: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x43f2c7u); f_00805608();
    /* 0043f2c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043f2ca:; BB(0x0043f2ca);
    /* 0043f2ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f2cb: ret  */ FN_RET(0x0043f1c8); r_esp += 4; return;
L_0043f2cc:; BB(0x0043f2cc);
    /* 0043f2cc: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0043f2d2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f2d5: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0043f2db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043f2dd: jg 0x43f2a5 */ if ((!fZ&&fS==fO)) goto L_0043f2a5;
L_0043f2df:; BB(0x0043f2df);
    /* 0043f2df: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 0043f2e9: jmp 0x43f2a5 */ goto L_0043f2a5;
L_0043f2eb:; BB(0x0043f2eb);
    /* 0043f2eb: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0043f2f1: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043f2f6: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0043f2fc: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0043f302: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043f304: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0043f30b: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f311: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043f314: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x43f319u); f_007a9018();
    /* 0043f319: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f31c: cmp eax, dword ptr [0xa447d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa447d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f322: jg 0x43f333 */ if ((!fZ&&fS==fO)) goto L_0043f333;
L_0043f324:; BB(0x0043f324);
    /* 0043f324: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
    /* 0043f32e: jmp 0x43f2a5 */ goto L_0043f2a5;
L_0043f333:; BB(0x0043f333);
    /* 0043f333: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 0043f33d: jmp 0x43f2a5 */ goto L_0043f2a5;
}

void f_0043f344(void) /* sub_43F344 */
{
    FN_ENTER(0x0043f344);
    /* 0043f344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f345: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043f347: movzx ecx, word ptr [ebp + 0x398] */ r_ecx = (u32)R16((u32)(r_ebp+0x398u));
    /* 0043f34e: mov eax, 0xc003000d */ r_eax = 0xc003000du;
    /* 0043f353: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f355: mov eax, ecx */ r_eax = r_ecx;
    /* 0043f357: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0043f35a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f35c: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0043f35f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043f361: imul eax, edx, 0x2aaa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2aaau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f367: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f369: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0043f36f: add ecx, 0xffffeaab */ {  u32 a = r_ecx; u32 b = 0xffffeaabu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f375: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f37a: je 0x43f398 */ if (fZ) goto L_0043f398;
L_0043f37c:; BB(0x0043f37c);
    /* 0043f37c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x43f381u); f_0082ddd8();
    /* 0043f381: fld dword ptr [0x8fe138] */ FPUSH(R_F32((u32)(0x8fe138u)));
    /* 0043f387: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0043f389: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 0043f38f: mov dword ptr [ebp + 0x3c], 0x42480000 */ W32((u32)(r_ebp+0x3cu), 0x42480000u);
    /* 0043f396: jmp 0x43f3b2 */ goto L_0043f3b2;
L_0043f398:; BB(0x0043f398);
    /* 0043f398: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x43f39du); f_0082ddd8();
    /* 0043f39d: fld dword ptr [0x8fe140] */ FPUSH(R_F32((u32)(0x8fe140u)));
    /* 0043f3a3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0043f3a5: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 0043f3ab: mov dword ptr [ebp + 0x3c], 0x41700000 */ W32((u32)(r_ebp+0x3cu), 0x41700000u);
L_0043f3b2:; BB(0x0043f3b2);
    /* 0043f3b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43f3b7u); f_0082d7b0();
    /* 0043f3b7: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0043f3bd: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 0043f3c4: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0043f3c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f3c9: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x43f3ceu); f_00830cd8();
    /* 0043f3ce: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 0043f3d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f3d6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43f3dbu); f_0082d8bc();
    /* 0043f3db: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043f3de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f3df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f3e1: mov edx, ebp */ r_edx = r_ebp;
    /* 0043f3e3: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x43f3e8u); f_0082eab8();
    /* 0043f3e8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43f3edu); f_0082da80();
    /* 0043f3ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f3ee: ret  */ FN_RET(0x0043f344); r_esp += 4; return;
}

void f_0043f3f0(void) /* sub_43F3F0 */
{
    FN_ENTER(0x0043f3f0);
    /* 0043f3f0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f3f3: movzx ecx, word ptr [ecx + 0x398] */ r_ecx = (u32)R16((u32)(r_ecx+0x398u));
    /* 0043f3fa: mov eax, 0xc003000d */ r_eax = 0xc003000du;
    /* 0043f3ff: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043f401: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f403: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0043f406: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0043f409: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043f40b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f40d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f40f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0043f412: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f414: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f416: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f418: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043f41a: add eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f41d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043f420: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043f423: fmul dword ptr [0x8fe130] */ ST(0) = ST(0) * R_F32((u32)(0x8fe130u));
    /* 0043f429: fdiv dword ptr [0x8fe12c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe12cu));
    /* 0043f42f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043f433: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043f438: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043f43d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043f441: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043f445: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043f449: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043f44d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0043f451: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043f454: ret  */ FN_RET(0x0043f3f0); r_esp += 4; return;
}

void f_0043f458(void) /* sub_43F458 */
{
    FN_ENTER(0x0043f458);
    /* 0043f458: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f459: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043f45b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0043f461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f463: je 0x43f470 */ if (fZ) goto L_0043f470;
L_0043f465:; BB(0x0043f465);
    /* 0043f465: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f468: jne 0x43f528 */ if (!fZ) goto L_0043f528;
L_0043f46e:; BB(0x0043f46e);
    /* 0043f46e: jmp 0x43f4e5 */ goto L_0043f4e5;
L_0043f470:; BB(0x0043f470);
    /* 0043f470: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0043f473: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043f478: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f47a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0043f47f: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0043f482: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0043f488: mov dword ptr [ebx + 0x398], 0x4000 */ W32((u32)(r_ebx+0x398u), 0x4000u);
    /* 0043f492: or eax, 0x30000 */ {  u32 a = r_eax; u32 b = 0x30000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043f497: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 0043f49e: mov dword ptr [ebx + 0x39c], 0xffffeaab */ W32((u32)(r_ebx+0x39cu), 0xffffeaabu);
    /* 0043f4a8: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0043f4ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f4b0: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0043f4b7: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0043f4ba: call 0x43f344 */ r_esp -= 4; W32(r_esp, 0x43f4bfu); f_0043f344();
    /* 0043f4bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f4c1: call 0x43f3f0 */ r_esp -= 4; W32(r_esp, 0x43f4c6u); f_0043f3f0();
    /* 0043f4c6: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0043f4d0: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0043f4d6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0043f4d9: mov edx, 0x5a */ r_edx = 0x5au;
    /* 0043f4de: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
L_0043f4e5:; BB(0x0043f4e5);
    /* 0043f4e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f4e7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f4ecu); f_007aa094();
    /* 0043f4ec: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 0043f4f3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f4f6: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 0043f4fd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0043f500: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f502: jg 0x43f528 */ if ((!fZ&&fS==fO)) goto L_0043f528;
L_0043f504:; BB(0x0043f504);
    /* 0043f504: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0043f507: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0043f50d: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f512: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0043f515: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0043f517: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043f51a: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 0043f520: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f522: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x43f528u); call_ind(t); }
L_0043f528:; BB(0x0043f528);
    /* 0043f528: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043f529: ret  */ FN_RET(0x0043f458); r_esp += 4; return;
}

void f_0043f52c(void) /* sub_43F52C */
{
    FN_ENTER(0x0043f52c);
    /* 0043f52c: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0043f532: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f534: je 0x43f541 */ if (fZ) goto L_0043f541;
L_0043f536:; BB(0x0043f536);
    /* 0043f536: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f539: je 0x43f557 */ if (fZ) goto L_0043f557;
L_0043f53b:; BB(0x0043f53b);
    /* 0043f53b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f53e: jne 0x43f55c */ if (!fZ) goto L_0043f55c;
L_0043f540:; BB(0x0043f540);
    /* 0043f540: ret  */ FN_RET(0x0043f52c); r_esp += 4; return;
L_0043f541:; BB(0x0043f541);
    /* 0043f541: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 0043f54b: mov eax, 4 */ r_eax = 0x4u;
    /* 0043f550: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_0043f557:; BB(0x0043f557);
    /* 0043f557: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f55cu); f_007aa094();
L_0043f55c:; BB(0x0043f55c);
    /* 0043f55c: ret  */ FN_RET(0x0043f52c); r_esp += 4; return;
}

void f_0043f560(void) /* sub_43F560 */
{
    FN_ENTER(0x0043f560);
    /* 0043f560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f561: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043f563: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0043f569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f56b: je 0x43f592 */ if (fZ) goto L_0043f592;
L_0043f56d:; BB(0x0043f56d);
    /* 0043f56d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f570: je 0x43f62e */ if (fZ) goto L_0043f62e;
L_0043f576:; BB(0x0043f576);
    /* 0043f576: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f579: jne 0x43f6c5 */ if (!fZ) goto L_0043f6c5;
L_0043f57f:; BB(0x0043f57f);
    /* 0043f57f: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0043f585: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f58a: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0043f590: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f591: ret  */ FN_RET(0x0043f560); r_esp += 4; return;
L_0043f592:; BB(0x0043f592);
    /* 0043f592: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0043f595: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f59b: je 0x43f5ae */ if (fZ) goto L_0043f5ae;
L_0043f59d:; BB(0x0043f59d);
    /* 0043f59d: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0043f5a3: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043f5a8: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
L_0043f5ae:; BB(0x0043f5ae);
    /* 0043f5ae: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 0043f5b5: and edx, 0xfddffdff */ {  u32 a = r_edx; u32 b = 0xfddffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043f5bb: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0043f5be: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 0043f5c5: mov edx, 3 */ r_edx = 0x3u;
    /* 0043f5ca: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0043f5d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f5d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5d6: push 0x359 */ { u32 v = 0x359u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43f5e0u); f_00814298();
    /* 0043f5e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f5e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5e5: push 0x35a */ { u32 v = 0x35au; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5ea: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43f5efu); f_00814298();
    /* 0043f5ef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f5f2: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x43f5f7u); f_007a61a4();
    /* 0043f5f7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f5fa: je 0x43f60b */ if (fZ) goto L_0043f60b;
L_0043f5fc:; BB(0x0043f5fc);
    /* 0043f5fc: movzx eax, word ptr [ebp + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 0043f603: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f609: jne 0x43f61a */ if (!fZ) goto L_0043f61a;
L_0043f60b:; BB(0x0043f60b);
    /* 0043f60b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f60d: push 0x3da3d70a */ { u32 v = 0x3da3d70au; r_esp -= 4; W32(r_esp, v); }
    /* 0043f612: call 0x4d430c */ r_esp -= 4; W32(r_esp, 0x43f617u); f_004d430c();
    /* 0043f617: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f61a:; BB(0x0043f61a);
    /* 0043f61a: mov dword ptr [ebp + 0x3d0], 0x14 */ W32((u32)(r_ebp+0x3d0u), 0x14u);
    /* 0043f624: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
L_0043f62e:; BB(0x0043f62e);
    /* 0043f62e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043f630: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f635u); f_007aa094();
    /* 0043f635: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0043f63b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f63e: je 0x43f6c5 */ if (fZ) goto L_0043f6c5;
L_0043f644:; BB(0x0043f644);
    /* 0043f644: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0043f64a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043f64d: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f652: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0043f658: je 0x43f6a4 */ if (fZ) goto L_0043f6a4;
L_0043f65a:; BB(0x0043f65a);
    /* 0043f65a: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043f661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f662: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43f667u); f_007b4d18();
    /* 0043f667: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f66a: je 0x43f6c5 */ if (fZ) goto L_0043f6c5;
L_0043f66c:; BB(0x0043f66c);
    /* 0043f66c: movsx ecx, word ptr [eax + 0x32e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043f673: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f676: je 0x43f6c5 */ if (fZ) goto L_0043f6c5;
L_0043f678:; BB(0x0043f678);
    /* 0043f678: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0043f67e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f681: jne 0x43f698 */ if (!fZ) goto L_0043f698;
L_0043f683:; BB(0x0043f683);
    /* 0043f683: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f686: je 0x43f698 */ if (fZ) goto L_0043f698;
L_0043f688:; BB(0x0043f688);
    /* 0043f688: mov dword ptr [eax + 0x37c], 0xa */ W32((u32)(r_eax+0x37cu), 0xau);
    /* 0043f692: mov dword ptr [eax + 0x388], ecx */ W32((u32)(r_eax+0x388u), r_ecx);
L_0043f698:; BB(0x0043f698);
    /* 0043f698: mov dword ptr [eax + 0x3cc], 0xf */ W32((u32)(r_eax+0x3ccu), 0xfu);
    /* 0043f6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f6a3: ret  */ FN_RET(0x0043f560); r_esp += 4; return;
L_0043f6a4:; BB(0x0043f6a4);
    /* 0043f6a4: mov edx, dword ptr [ebp + 0x388] */ r_edx = R32((u32)(r_ebp+0x388u));
    /* 0043f6aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f6ac: jne 0x43f6c5 */ if (!fZ) goto L_0043f6c5;
L_0043f6ae:; BB(0x0043f6ae);
    /* 0043f6ae: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0043f6b5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043f6b7: je 0x43f6c5 */ if (fZ) goto L_0043f6c5;
L_0043f6b9:; BB(0x0043f6b9);
    /* 0043f6b9: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0043f6bf: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
L_0043f6c5:; BB(0x0043f6c5);
    /* 0043f6c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f6c6: ret  */ FN_RET(0x0043f560); r_esp += 4; return;
}

void f_0043f6c8(void) /* sub_43F6C8 */
{
    FN_ENTER(0x0043f6c8);
    /* 0043f6c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f6cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6cd: push 0x8ce424 */ { u32 v = 0x8ce424u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043f6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043f6e0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f6e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043f6e6: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0043f6e9: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0043f6ec: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0043f6ef: movzx eax, word ptr [ecx + 0x340] */ r_eax = (u32)R16((u32)(r_ecx+0x340u));
    /* 0043f6f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043f6f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x43f6ffu); f_0068d5a8();
    /* 0043f6ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f700: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f704: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x43f709u); f_007706b0();
    /* 0043f709: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f70c: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x43f711u); f_00770738();
    /* 0043f711: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f714: mov edx, dword ptr [edx + 0x384] */ r_edx = R32((u32)(r_edx+0x384u));
    /* 0043f71a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f71c: je 0x43fae6 */ if (fZ) goto L_0043fae6;
L_0043f722:; BB(0x0043f722);
    /* 0043f722: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f725: je 0x43f9f7 */ if (fZ) goto L_0043f9f7;
L_0043f72b:; BB(0x0043f72b);
    /* 0043f72b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f72e: je 0x43f86d */ if (fZ) goto L_0043f86d;
L_0043f734:; BB(0x0043f734);
    /* 0043f734: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f737: jne 0x43f85f */ if (!fZ) goto L_0043f85f;
L_0043f73d:; BB(0x0043f73d);
    /* 0043f73d: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f740: mov ebx, dword ptr [edi + 0x3a4] */ r_ebx = R32((u32)(r_edi+0x3a4u));
    /* 0043f746: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 0043f74c: mov esi, dword ptr [edi + 0x3ac] */ r_esi = R32((u32)(r_edi+0x3acu));
    /* 0043f752: mov dword ptr [edi + 0x30c], ebx */ W32((u32)(r_edi+0x30cu), r_ebx);
    /* 0043f758: mov dword ptr [edi + 0x310], eax */ W32((u32)(r_edi+0x310u), r_eax);
    /* 0043f75e: mov dword ptr [edi + 0x314], esi */ W32((u32)(r_edi+0x314u), r_esi);
    /* 0043f764: lea ebx, [edi + 0x30c] */ r_ebx = (u32)(r_edi+0x30cu);
    /* 0043f76a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0043f76d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043f770: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f772: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x43f777u); f_0082f9c4();
    /* 0043f777: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f77c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f77d: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x43f782u); f_0078ea90();
    /* 0043f782: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0043f785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f788: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f78a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f78b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f790: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x43f795u); f_00771858();
    /* 0043f795: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043f798: mov edx, ebx */ r_edx = r_ebx;
    /* 0043f79a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x43f79fu); f_0082ebac();
    /* 0043f79f: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f7a1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x43f7a6u); f_00770738();
    /* 0043f7a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7a8: je 0x43f831 */ if (fZ) goto L_0043f831;
L_0043f7ae:; BB(0x0043f7ae);
    /* 0043f7ae: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x43f7b3u); f_007b51c4();
    /* 0043f7b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f7b5: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x43f7bau); f_007b6894();
    /* 0043f7ba: mov eax, edi */ r_eax = r_edi;
    /* 0043f7bc: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0043f7c2: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0043f7c5: test ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7cb: je 0x43f831 */ if (fZ) goto L_0043f831;
L_0043f7cd:; BB(0x0043f7cd);
    /* 0043f7cd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0043f7cf:; BB(0x0043f7cf);
    /* 0043f7cf: mov ebx, dword ptr [esi*4 + 0xaad6e0] */ r_ebx = R32((u32)(r_esi*4+0xaad6e0u));
    /* 0043f7d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7d8: je 0x43f831 */ if (fZ) goto L_0043f831;
L_0043f7da:; BB(0x0043f7da);
    /* 0043f7da: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 0043f7e1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7e4: jne 0x43f7ed */ if (!fZ) goto L_0043f7ed;
L_0043f7e6:; BB(0x0043f7e6);
    /* 0043f7e6: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f7eb: jmp 0x43f7ef */ goto L_0043f7ef;
L_0043f7ed:; BB(0x0043f7ed);
    /* 0043f7ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f7ef:; BB(0x0043f7ef);
    /* 0043f7ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7f1: je 0x43f829 */ if (fZ) goto L_0043f829;
L_0043f7f3:; BB(0x0043f7f3);
    /* 0043f7f3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f7f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f7fb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0043f7fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f800: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x43f803u); call_ind(t); }
    /* 0043f803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f805: je 0x43f829 */ if (fZ) goto L_0043f829;
L_0043f807:; BB(0x0043f807);
    /* 0043f807: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f80c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f80f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0043f811: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f814: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x43f817u); call_ind(t); }
    /* 0043f817: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f81c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f81f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0043f821: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f824: call dword ptr [edi + 0x5c] */ { u32 t = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, 0x43f827u); call_ind(t); }
    /* 0043f827: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0043f829:; BB(0x0043f829);
    /* 0043f829: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043f82c: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f82f: jl 0x43f7cf */ if ((fS!=fO)) goto L_0043f7cf;
L_0043f831:; BB(0x0043f831);
    /* 0043f831: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0043f834: fcomp dword ptr [0x8fe118] */ fx_compare(ST(0), R_F32((u32)(0x8fe118u))); FPOP();
    /* 0043f83a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043f83c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043f83d: jae 0x43f9c3 */ if (!fC) goto L_0043f9c3;
L_0043f843:; BB(0x0043f843);
    /* 0043f843: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f846: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0043f84b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f84d: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 0043f854: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x43f85au); call_ind(t); }
    /* 0043f85a: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043f85f:; BB(0x0043f85f);
    /* 0043f85f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f862: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0043f865: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043f868: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043f86d:; BB(0x0043f86d);
    /* 0043f86d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043f86f: je 0x43fb6d */ if (fZ) goto L_0043fb6d;
L_0043f875:; BB(0x0043f875);
    /* 0043f875: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f878: mov ebx, dword ptr [eax + 0x300] */ r_ebx = R32((u32)(r_eax+0x300u));
    /* 0043f87e: mov dword ptr [edi + 0x30c], ebx */ W32((u32)(r_edi+0x30cu), r_ebx);
    /* 0043f884: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 0043f88a: mov dword ptr [edi + 0x310], esi */ W32((u32)(r_edi+0x310u), r_esi);
    /* 0043f890: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0043f896: mov dword ptr [edi + 0x314], eax */ W32((u32)(r_edi+0x314u), r_eax);
    /* 0043f89c: lea ebx, [edi + 0x30c] */ r_ebx = (u32)(r_edi+0x30cu);
    /* 0043f8a2: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0043f8a5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043f8a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f8aa: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x43f8afu); f_0082f9c4();
    /* 0043f8af: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f8b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f8b5: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x43f8bau); f_0078ea90();
    /* 0043f8ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043f8bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043f8bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f8c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f8c2: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f8c7: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x43f8ccu); f_00771858();
    /* 0043f8cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043f8cf: mov edx, ebx */ r_edx = r_ebx;
    /* 0043f8d1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x43f8d6u); f_0082ebac();
    /* 0043f8d6: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f8d8: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x43f8ddu); f_00770738();
    /* 0043f8dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043f8e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f8e2: je 0x43f99a */ if (fZ) goto L_0043f99a;
L_0043f8e8:; BB(0x0043f8e8);
    /* 0043f8e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f8ea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043f8ed: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x43f8f2u); f_007b51c4();
    /* 0043f8f2: mov ecx, edi */ r_ecx = r_edi;
    /* 0043f8f4: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x43f8f9u); f_007b6894();
    /* 0043f8f9: mov eax, edi */ r_eax = r_edi;
    /* 0043f8fb: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0043f901: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0043f904: test ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f90a: je 0x43f97f */ if (fZ) goto L_0043f97f;
L_0043f90c:; BB(0x0043f90c);
    /* 0043f90c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0043f90e:; BB(0x0043f90e);
    /* 0043f90e: mov ebx, dword ptr [esi*4 + 0xaad6e0] */ r_ebx = R32((u32)(r_esi*4+0xaad6e0u));
    /* 0043f915: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f917: je 0x43f97f */ if (fZ) goto L_0043f97f;
L_0043f919:; BB(0x0043f919);
    /* 0043f919: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 0043f920: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f923: jne 0x43f92c */ if (!fZ) goto L_0043f92c;
L_0043f925:; BB(0x0043f925);
    /* 0043f925: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f92a: jmp 0x43f92e */ goto L_0043f92e;
L_0043f92c:; BB(0x0043f92c);
    /* 0043f92c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043f92e:; BB(0x0043f92e);
    /* 0043f92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f930: je 0x43f977 */ if (fZ) goto L_0043f977;
L_0043f932:; BB(0x0043f932);
    /* 0043f932: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f937: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f93a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0043f93c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f93e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f93f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x43f942u); call_ind(t); }
    /* 0043f942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f944: je 0x43f968 */ if (fZ) goto L_0043f968;
L_0043f946:; BB(0x0043f946);
    /* 0043f946: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f94b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f94e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0043f950: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f953: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x43f956u); call_ind(t); }
    /* 0043f956: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f95b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f95e: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0043f960: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043f962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f963: call dword ptr [edi + 0x5c] */ { u32 t = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, 0x43f966u); call_ind(t); }
    /* 0043f966: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0043f968:; BB(0x0043f968);
    /* 0043f968: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043f96b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f96d: jne 0x43f977 */ if (!fZ) goto L_0043f977;
L_0043f96f:; BB(0x0043f96f);
    /* 0043f96f: mov eax, 1 */ r_eax = 0x1u;
    /* 0043f974: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0043f977:; BB(0x0043f977);
    /* 0043f977: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043f97a: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f97d: jl 0x43f90e */ if ((fS!=fO)) goto L_0043f90e;
L_0043f97f:; BB(0x0043f97f);
    /* 0043f97f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043f982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f984: je 0x43f99a */ if (fZ) goto L_0043f99a;
L_0043f986:; BB(0x0043f986);
    /* 0043f986: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f989: mov eax, 4 */ r_eax = 0x4u;
    /* 0043f98e: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 0043f994: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
L_0043f99a:; BB(0x0043f99a);
    /* 0043f99a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f99d: mov edx, dword ptr [eax + 0x3c0] */ r_edx = R32((u32)(r_eax+0x3c0u));
    /* 0043f9a3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f9a6: mov dword ptr [eax + 0x3c0], edx */ W32((u32)(r_eax+0x3c0u), r_edx);
    /* 0043f9ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043f9ae: jg 0x43f9c3 */ if ((!fZ&&fS==fO)) goto L_0043f9c3;
L_0043f9b0:; BB(0x0043f9b0);
    /* 0043f9b0: mov edx, eax */ r_edx = r_eax;
    /* 0043f9b2: mov eax, 4 */ r_eax = 0x4u;
    /* 0043f9b7: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 0043f9bd: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
L_0043f9c3:; BB(0x0043f9c3);
    /* 0043f9c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f9c6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43f9cbu); f_007aa094();
    /* 0043f9cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043f9ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f9d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f9d2: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f9d8: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x43f9ddu); f_00805608();
    /* 0043f9dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043f9e0: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f9e3: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043f9e6: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043f9e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043f9ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043f9f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f9f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f9f6: ret  */ FN_RET(0x0043f6c8); r_esp += 4; return;
L_0043f9f7:; BB(0x0043f9f7);
    /* 0043f9f7: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f9fa: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 0043f9fd: mov dword ptr [edi + 0x30c], ebx */ W32((u32)(r_edi+0x30cu), r_ebx);
    /* 0043fa03: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0043fa06: mov dword ptr [edi + 0x310], esi */ W32((u32)(r_edi+0x310u), r_esi);
    /* 0043fa0c: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0043fa0f: mov dword ptr [edi + 0x314], eax */ W32((u32)(r_edi+0x314u), r_eax);
    /* 0043fa15: lea ebx, [edi + 0x30c] */ r_ebx = (u32)(r_edi+0x30cu);
    /* 0043fa1b: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0043fa1e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043fa21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043fa23: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x43fa28u); f_0082f9c4();
    /* 0043fa28: mov ecx, edi */ r_ecx = r_edi;
    /* 0043fa2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa2b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa30: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x43fa35u); f_00771858();
    /* 0043fa35: mov eax, edi */ r_eax = r_edi;
    /* 0043fa37: mov eax, dword ptr [eax + 0x3c0] */ r_eax = R32((u32)(r_eax+0x3c0u));
    /* 0043fa3d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043fa40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043fa42: jle 0x43fa51 */ if ((fZ||fS!=fO)) goto L_0043fa51;
L_0043fa44:; BB(0x0043fa44);
    /* 0043fa44: mov edx, edi */ r_edx = r_edi;
    /* 0043fa46: mov dword ptr [edx + 0x3c0], eax */ W32((u32)(r_edx+0x3c0u), r_eax);
    /* 0043fa4c: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043fa51:; BB(0x0043fa51);
    /* 0043fa51: mov edx, edi */ r_edx = r_edi;
    /* 0043fa53: mov ecx, dword ptr [edx + 0x3a0] */ r_ecx = R32((u32)(r_edx+0x3a0u));
    /* 0043fa59: mov dword ptr [edx + 0x3c0], 0x96 */ W32((u32)(r_edx+0x3c0u), 0x96u);
    /* 0043fa63: mov eax, 2 */ r_eax = 0x2u;
    /* 0043fa68: mov dword ptr [ebp - 0x3c], 0x4000 */ W32((u32)(r_ebp+0xffffffc4u), 0x4000u);
    /* 0043fa6f: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0043fa72: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 0043fa78: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa7a: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
    /* 0043fa80: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043fa82: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 0043fa85: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 0043fa88: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43fa8du); f_005caba4();
    /* 0043fa8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043fa8e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0043fa91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fa93: je 0x43fada */ if (fZ) goto L_0043fada;
L_0043fa95:; BB(0x0043fa95);
    /* 0043fa95: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0043fa9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043faa3: mov edx, edi */ r_edx = r_edi;
    /* 0043faa5: lea edi, [ebp - 0x44] */ r_edi = (u32)(r_ebp+0xffffffbcu);
    /* 0043faa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043faaa: mov ebx, dword ptr [edx + 0x3b0] */ r_ebx = R32((u32)(r_edx+0x3b0u));
    /* 0043fab0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043fab2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fab3: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fab8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043faba: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043fabd: lea ecx, [ebx + esi + 0xa44860] */ r_ecx = (u32)(r_ebx+r_esi+0xa44860u);
    /* 0043fac4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fac6: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043facb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043facc: mov ecx, eax */ r_ecx = r_eax;
    /* 0043face: call 0x4497e4 */ r_esp -= 4; W32(r_esp, 0x43fad3u); f_004497e4();
    /* 0043fad3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0043fada:; BB(0x0043fada);
    /* 0043fada: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043fae1: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043fae6:; BB(0x0043fae6);
    /* 0043fae6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fae9: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0043faef: mov ebx, dword ptr [ecx + 0x388] */ r_ebx = R32((u32)(r_ecx+0x388u));
    /* 0043faf5: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043fafa: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0043fb00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043fb02: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0043fb09: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0043fb0c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fb0f: je 0x43fb54 */ if (fZ) goto L_0043fb54;
L_0043fb11:; BB(0x0043fb11);
    /* 0043fb11: mov esi, ecx */ r_esi = r_ecx;
    /* 0043fb13: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0043fb16: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0043fb19: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0043fb1c: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 0043fb22: mov dword ptr [esi + 0x3a8], edx */ W32((u32)(r_esi+0x3a8u), r_edx);
    /* 0043fb28: mov dword ptr [esi + 0x3c0], 0x1e */ W32((u32)(r_esi+0x3c0u), 0x1eu);
    /* 0043fb32: mov dword ptr [esi + 0x3ac], ecx */ W32((u32)(r_esi+0x3acu), r_ecx);
    /* 0043fb38: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0043fb3d: mov dword ptr [esi + 0x3bc], ebx */ W32((u32)(r_esi+0x3bcu), r_ebx);
    /* 0043fb43: mov dword ptr [esi + 0x384], ebx */ W32((u32)(r_esi+0x384u), r_ebx);
    /* 0043fb49: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0043fb4c: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0043fb4f: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043fb54:; BB(0x0043fb54);
    /* 0043fb54: mov edx, ecx */ r_edx = r_ecx;
    /* 0043fb56: mov eax, dword ptr [edx + 0x3bc] */ r_eax = R32((u32)(r_edx+0x3bcu));
    /* 0043fb5c: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
    /* 0043fb62: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0043fb65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043fb68: jmp 0x43f9c3 */ goto L_0043f9c3;
L_0043fb6d:; BB(0x0043fb6d);
    /* 0043fb6d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fb70: mov eax, 4 */ r_eax = 0x4u;
    /* 0043fb75: mov dword ptr [edx + 0x3bc], eax */ W32((u32)(r_edx+0x3bcu), r_eax);
    /* 0043fb7b: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
    /* 0043fb81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fb84: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043fb8b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fb8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fb8e: ret  */ FN_RET(0x0043f6c8); r_esp += 4; return;
}

void f_0043fb90(void) /* sub_43FB90 */
{
    FN_ENTER(0x0043fb90);
    /* 0043fb90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb91: mov edi, ecx */ r_edi = r_ecx;
    /* 0043fb93: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0043fb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fb9b: je 0x43fca4 */ if (fZ) goto L_0043fca4;
L_0043fba1:; BB(0x0043fba1);
    /* 0043fba1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fba4: jne 0x43fccb */ if (!fZ) goto L_0043fccb;
L_0043fbaa:; BB(0x0043fbaa);
    /* 0043fbaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0043fbac: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43fbb1u); f_007aa094();
    /* 0043fbb1: mov edx, dword ptr [0xa447ec] */ r_edx = R32((u32)(0xa447ecu));
    /* 0043fbb7: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0043fbbd: sub eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043fbc0: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 0043fbc6: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 0043fbcc: sub eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043fbcf: mov dword ptr [edi + 0x39c], eax */ W32((u32)(r_edi+0x39cu), r_eax);
    /* 0043fbd5: mov ecx, edi */ r_ecx = r_edi;
    /* 0043fbd7: call 0x43f344 */ r_esp -= 4; W32(r_esp, 0x43fbdcu); f_0043f344();
    /* 0043fbdc: mov ecx, edi */ r_ecx = r_edi;
    /* 0043fbde: call 0x43f3f0 */ r_esp -= 4; W32(r_esp, 0x43fbe3u); f_0043f3f0();
    /* 0043fbe3: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0043fbe9: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0043fbef: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043fbf4: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0043fbf7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fbfa: jle 0x43fc4c */ if ((fZ||fS!=fO)) goto L_0043fc4c;
L_0043fbfc:; BB(0x0043fbfc);
    /* 0043fbfc: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 0043fc02: cmp eax, 0xffffdc72 */ {  u32 a = r_eax; u32 b = 0xffffdc72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fc07: jg 0x43fc8c */ if ((!fZ&&fS==fO)) goto L_0043fc8c;
L_0043fc0d:; BB(0x0043fc0d);
    /* 0043fc0d: mov eax, dword ptr [edi + 0x3c4] */ r_eax = R32((u32)(r_edi+0x3c4u));
    /* 0043fc13: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fc16: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 0043fc1c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043fc1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043fc21: jl 0x43fceb */ if ((fS!=fO)) goto L_0043fceb;
L_0043fc27:; BB(0x0043fc27);
    /* 0043fc27: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
L_0043fc2d:; BB(0x0043fc2d);
    /* 0043fc2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0043fc2f: call 0x4401bc */ r_esp -= 4; W32(r_esp, 0x43fc34u); f_004401bc();
    /* 0043fc34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fc37: jne 0x43fccb */ if (!fZ) goto L_0043fccb;
L_0043fc3d:; BB(0x0043fc3d);
    /* 0043fc3d: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 0043fc47: jmp 0x43fccb */ goto L_0043fccb;
L_0043fc4c:; BB(0x0043fc4c);
    /* 0043fc4c: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 0043fc52: cmp eax, 0xffffeaab */ {  u32 a = r_eax; u32 b = 0xffffeaabu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fc57: jge 0x43fc8c */ if ((fS==fO)) goto L_0043fc8c;
L_0043fc59:; BB(0x0043fc59);
    /* 0043fc59: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0043fc5f: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0043fc65: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 0043fc6b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043fc6e: jne 0x43fc8c */ if (!fZ) goto L_0043fc8c;
L_0043fc70:; BB(0x0043fc70);
    /* 0043fc70: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0043fc77: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fc7a: je 0x43fc8c */ if (fZ) goto L_0043fc8c;
L_0043fc7c:; BB(0x0043fc7c);
    /* 0043fc7c: mov dword ptr [edi + 0x37c], 9 */ W32((u32)(r_edi+0x37cu), 0x9u);
    /* 0043fc86: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_0043fc8c:; BB(0x0043fc8c);
    /* 0043fc8c: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0043fc8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fc91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc95: push 0x33f */ { u32 v = 0x33fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc9a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43fc9fu); f_008144b0();
    /* 0043fc9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fca2: jmp 0x43fccb */ goto L_0043fccb;
L_0043fca4:; BB(0x0043fca4);
    /* 0043fca4: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0043fcaa: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0043fcb4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043fcb6: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0043fcbd: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043fcc2: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0043fcc8: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
L_0043fccb:; BB(0x0043fccb);
    /* 0043fccb: mov eax, dword ptr [0xa447ac] */ r_eax = R32((u32)(0xa447acu));
    /* 0043fcd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fcd2: jl 0x43fce9 */ if ((fS!=fO)) goto L_0043fce9;
L_0043fcd4:; BB(0x0043fcd4);
    /* 0043fcd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fcd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fcd8: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043fcdb: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fce0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fce1: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x43fce6u); f_00805608();
    /* 0043fce6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043fce9:; BB(0x0043fce9);
    /* 0043fce9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043fcea: ret  */ FN_RET(0x0043fb90); r_esp += 4; return;
L_0043fceb:; BB(0x0043fceb);
    /* 0043fceb: mov dword ptr [edi + 0x3c4], 5 */ W32((u32)(r_edi+0x3c4u), 0x5u);
    /* 0043fcf5: jmp 0x43fc2d */ goto L_0043fc2d;
}

void f_0043fcfc(void) /* sub_43FCFC */
{
    FN_ENTER(0x0043fcfc);
    /* 0043fcfc: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0043fd02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd04: je 0x43fd1c */ if (fZ) goto L_0043fd1c;
L_0043fd06:; BB(0x0043fd06);
    /* 0043fd06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043fd09: je 0x43fd38 */ if (fZ) goto L_0043fd38;
L_0043fd0b:; BB(0x0043fd0b);
    /* 0043fd0b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043fd0e: jne 0x43fd38 */ if (!fZ) goto L_0043fd38;
L_0043fd10:; BB(0x0043fd10);
    /* 0043fd10: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0043fd13: and eax, 0xfdfbffff */ {  u32 a = r_eax; u32 b = 0xfdfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fd18: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0043fd1b: ret  */ FN_RET(0x0043fcfc); r_esp += 4; return;
L_0043fd1c:; BB(0x0043fd1c);
    /* 0043fd1c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0043fd1f: or eax, 0x2040000 */ {  u32 a = r_eax; u32 b = 0x2040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fd24: mov edx, 1 */ r_edx = 0x1u;
    /* 0043fd29: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0043fd2c: mov dword ptr [ecx + 0x384], edx */ W32((u32)(r_ecx+0x384u), r_edx);
    /* 0043fd32: mov dword ptr [0xa447e8], edx */ W32((u32)(0xa447e8u), r_edx);
L_0043fd38:; BB(0x0043fd38);
    /* 0043fd38: ret  */ FN_RET(0x0043fcfc); r_esp += 4; return;
}

void f_0043fd3c(void) /* sub_43FD3C */
{
    FN_ENTER(0x0043fd3c);
    /* 0043fd3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd3f: mov edi, ecx */ r_edi = r_ecx;
    /* 0043fd41: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0043fd48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fd4a: je 0x43fe24 */ if (fZ) goto L_0043fe24;
L_0043fd50:; BB(0x0043fd50);
    /* 0043fd50: mov ebp, dword ptr [edi + 0x398] */ r_ebp = R32((u32)(r_edi+0x398u));
    /* 0043fd56: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0043fd59: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0043fd5e: movzx ecx, bp */ r_ecx = (u32)(u16)r_ebp;
    /* 0043fd61: mov eax, 0xc003000d */ r_eax = 0xc003000du;
    /* 0043fd66: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fd68: mov eax, ecx */ r_eax = r_ecx;
    /* 0043fd6a: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0043fd6d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fd6f: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0043fd72: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043fd74: imul edx, edx, 0x2aaa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2aaau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fd7a: fcomp dword ptr [0x8fe10c] */ fx_compare(ST(0), R_F32((u32)(0x8fe10cu))); FPOP();
    /* 0043fd80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043fd82: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043fd84: add ecx, 0xffffeaab */ {  u32 a = r_ecx; u32 b = 0xffffeaabu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043fd8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043fd8b: jb 0x43fda4 */ if (fC) goto L_0043fda4;
L_0043fd8d:; BB(0x0043fd8d);
    /* 0043fd8d: mov eax, ecx */ r_eax = r_ecx;
    /* 0043fd8f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043fd90: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043fd92: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043fd94: cmp ecx, 0x8dc */ {  u32 a = r_ecx; u32 b = 0x8dcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043fd9a: jg 0x43fe1e */ if ((!fZ&&fS==fO)) goto L_0043fe1e;
L_0043fda0:; BB(0x0043fda0);
    /* 0043fda0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043fda2: jmp 0x43fdd7 */ goto L_0043fdd7;
L_0043fda4:; BB(0x0043fda4);
    /* 0043fda4: cmp ecx, 0xdb2 */ {  u32 a = r_ecx; u32 b = 0xdb2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043fdaa: jg 0x43fe1e */ if ((!fZ&&fS==fO)) goto L_0043fe1e;
L_0043fdac:; BB(0x0043fdac);
    /* 0043fdac: cmp ecx, 0x510 */ {  u32 a = r_ecx; u32 b = 0x510u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fdb2: jl 0x43fdbb */ if ((fS!=fO)) goto L_0043fdbb;
L_0043fdb4:; BB(0x0043fdb4);
    /* 0043fdb4: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0043fdb9: jmp 0x43fdd7 */ goto L_0043fdd7;
L_0043fdbb:; BB(0x0043fdbb);
    /* 0043fdbb: cmp ecx, 0xfffffaf0 */ {  u32 a = r_ecx; u32 b = 0xfffffaf0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fdc1: jl 0x43fdca */ if ((fS!=fO)) goto L_0043fdca;
L_0043fdc3:; BB(0x0043fdc3);
    /* 0043fdc3: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0043fdc8: jmp 0x43fdd7 */ goto L_0043fdd7;
L_0043fdca:; BB(0x0043fdca);
    /* 0043fdca: cmp ecx, 0xfffff24e */ {  u32 a = r_ecx; u32 b = 0xfffff24eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043fdd0: jl 0x43fe1e */ if ((fS!=fO)) goto L_0043fe1e;
L_0043fdd2:; BB(0x0043fdd2);
    /* 0043fdd2: mov ebx, 3 */ r_ebx = 0x3u;
L_0043fdd7:; BB(0x0043fdd7);
    /* 0043fdd7: add ebp, 0xffffd556 */ {  u32 a = r_ebp; u32 b = 0xffffd556u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043fddd: movzx ecx, bp */ r_ecx = (u32)(u16)r_ebp;
    /* 0043fde0: movzx ebp, word ptr [0xa447a4] */ r_ebp = (u32)R16((u32)(0xa447a4u));
    /* 0043fde7: mov eax, 0xc003000d */ r_eax = 0xc003000du;
    /* 0043fdec: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fdee: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fdf0: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0043fdf3: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0043fdf6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043fdf8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fdfa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fdfc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043fdfe: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043fe00: movzx edi, bp */ r_edi = (u32)(u16)r_ebp;
    /* 0043fe03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe04: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43fe09u); f_007b4d18();
    /* 0043fe09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043fe0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fe0c: je 0x43fe19 */ if (fZ) goto L_0043fe19;
L_0043fe0e:; BB(0x0043fe0e);
    /* 0043fe0e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0043fe11: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fe17: je 0x43fe1e */ if (fZ) goto L_0043fe1e;
L_0043fe19:; BB(0x0043fe19);
    /* 0043fe19: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_0043fe1e:; BB(0x0043fe1e);
    /* 0043fe1e: mov eax, ebx */ r_eax = r_ebx;
    /* 0043fe20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043fe21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043fe23: ret  */ FN_RET(0x0043fd3c); r_esp += 4; return;
L_0043fe24:; BB(0x0043fe24);
    /* 0043fe24: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0043fe29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043fe2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043fe2c: ret  */ FN_RET(0x0043fd3c); r_esp += 4; return;
}

void f_0043fe30(void)
{
    FN_ENTER(0x0043fe30);
    /* 0043fe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe31: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fe33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe35: push 0x8ce44c */ { u32 v = 0x8ce44cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043fe40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043fe48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fe4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043fe4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043fe51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043fe54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043fe57: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe5c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0043fe63: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43fe68u); f_005caba4();
    /* 0043fe68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043fe69: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043fe6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fe6e: je 0x43fea7 */ if (fZ) goto L_0043fea7;
L_0043fe70:; BB(0x0043fe70);
    /* 0043fe70: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0043fe77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fe7e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043fe81: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043fe87: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043fe8a: call 0x43feac */ r_esp -= 4; W32(r_esp, 0x43fe8fu); f_0043feac();
    /* 0043fe8f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043fe92: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043fe99:; BB(0x0043fe99);
    /* 0043fe99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fe9c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043fea3: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fea6: ret  */ FN_RET(0x0043fe30); r_esp += 4; return;
L_0043fea7:; BB(0x0043fea7);
    /* 0043fea7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fea9: jmp 0x43fe99 */ goto L_0043fe99;
}

void f_0043feac(void) /* sub_43FEAC */
{
    FN_ENTER(0x0043feac);
    /* 0043feac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fead: mov ebp, esp */ r_ebp = r_esp;
    /* 0043feaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043feb1: push 0x8ce468 */ { u32 v = 0x8ce468u; r_esp -= 4; W32(r_esp, v); }
    /* 0043feb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043febc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043febd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043fec4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043feca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043fecd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043fed0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043fed3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043fed6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043fed9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043fedc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043fedf: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x43fee4u); f_0052c3fc();
    /* 0043fee4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043feeb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043feee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fef1: mov dword ptr [ecx], 0xaf57a0 */ W32((u32)(r_ecx), 0xaf57a0u);
    /* 0043fef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fef8: call dword ptr [0xaf58ec] */ { u32 t = R32((u32)(0xaf58ecu)); r_esp -= 4; W32(r_esp, 0x43fefeu); call_ind(t); }
    /* 0043fefe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ff01: call 0x440458 */ r_esp -= 4; W32(r_esp, 0x43ff06u); f_00440458();
    /* 0043ff06: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ff09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ff0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043ff13: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ff15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ff16: ret 8 */ FN_RET(0x0043feac); r_esp += 12; return;
}

void f_0043ff1c(void) /* sub_43FF1C */
{
    FN_ENTER(0x0043ff1c);
    /* 0043ff1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043ff1f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0043ff22: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ff27: je 0x43ff2d */ if (fZ) goto L_0043ff2d;
L_0043ff29:; BB(0x0043ff29);
    /* 0043ff29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ff2a: ret 0xc */ FN_RET(0x0043ff1c); r_esp += 16; return;
L_0043ff2d:; BB(0x0043ff2d);
    /* 0043ff2d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0043ff31: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0043ff37: mov dword ptr [0xa447e8], 0 */ W32((u32)(0xa447e8u), 0x0u);
    /* 0043ff41: mov dword ptr [ebx + 0x3c4], edx */ W32((u32)(r_ebx+0x3c4u), r_edx);
    /* 0043ff47: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ff4c: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0043ff52: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0043ff56: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0043ff5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043ff5e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0043ff62: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0043ff68: call 0x4401bc */ r_esp -= 4; W32(r_esp, 0x43ff6du); f_004401bc();
    /* 0043ff6d: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0043ff73: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0043ff75: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043ff78: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0043ff7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043ff80: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x43ff86u); call_ind(t); }
    /* 0043ff86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ff87: ret 0xc */ FN_RET(0x0043ff1c); r_esp += 16; return;
}

void f_0043ff8c(void) /* sub_43FF8C */
{
    FN_ENTER(0x0043ff8c);
    /* 0043ff8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff8d: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043ff94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff95: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43ff9au); f_007b4d18();
    /* 0043ff9a: mov esi, eax */ r_esi = r_eax;
    /* 0043ff9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ff9f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ffa1: je 0x43ffe0 */ if (fZ) goto L_0043ffe0;
L_0043ffa3:; BB(0x0043ffa3);
    /* 0043ffa3: mov edx, dword ptr [esi + 0x3d0] */ r_edx = R32((u32)(r_esi+0x3d0u));
    /* 0043ffa9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ffab: jle 0x43ffaf */ if ((fZ||fS!=fO)) goto L_0043ffaf;
L_0043ffad:; BB(0x0043ffad);
    /* 0043ffad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ffae: ret  */ FN_RET(0x0043ff8c); r_esp += 4; return;
L_0043ffaf:; BB(0x0043ffaf);
    /* 0043ffaf: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0043ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffb5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43ffbau); f_007b4d18();
    /* 0043ffba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ffbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ffbd: je 0x43ffe0 */ if (fZ) goto L_0043ffe0;
L_0043ffbf:; BB(0x0043ffbf);
    /* 0043ffbf: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffc5: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 0043ffcb: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0043ffce: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043ffd4: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0043ffd7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0043ffd9: mov ecx, esi */ r_ecx = r_esi;
    /* 0043ffdb: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x43ffdeu); call_ind(t); }
    /* 0043ffde: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0043ffe0:; BB(0x0043ffe0);
    /* 0043ffe0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ffe1: ret  */ FN_RET(0x0043ff8c); r_esp += 4; return;
}

void f_0043ffe4(void) /* sub_43FFE4 */
{
    FN_ENTER(0x0043ffe4);
    /* 0043ffe4: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043ffeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffec: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43fff1u); f_007b4d18();
    /* 0043fff1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043fff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043fff4: je 0x44002c */ if (fZ) goto L_0044002c;
L_0043fff6:; BB(0x0043fff6);
    /* 0043fff6: movsx ecx, word ptr [eax + 0x32e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043fffd: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440000: je 0x44002c */ if (fZ) goto L_0044002c;
L_00440002:; BB(0x00440002);
    /* 00440002: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00440008: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044000b: jne 0x440022 */ if (!fZ) goto L_00440022;
L_0044000d:; BB(0x0044000d);
    /* 0044000d: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440010: je 0x440022 */ if (fZ) goto L_00440022;
L_00440012:; BB(0x00440012);
    /* 00440012: mov dword ptr [eax + 0x37c], 0xa */ W32((u32)(r_eax+0x37cu), 0xau);
    /* 0044001c: mov dword ptr [eax + 0x388], ecx */ W32((u32)(r_eax+0x388u), r_ecx);
L_00440022:; BB(0x00440022);
    /* 00440022: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00440026: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
L_0044002c:; BB(0x0044002c);
    /* 0044002c: ret  */ FN_RET(0x0043ffe4); r_esp += 4; return;
}

