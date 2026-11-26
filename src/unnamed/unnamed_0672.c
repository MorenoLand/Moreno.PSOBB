#include "protos.h"

void f_00672008(void) /* sub_672008 */
{
    FN_ENTER(0x00672008);
    /* 00672008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672009: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067200b: movzx eax, word ptr [ebp + 0xd0] */ r_eax = (u32)R16((u32)(r_ebp+0xd0u));
    /* 00672012: mov eax, dword ptr [eax*4 + 0x93a4c0] */ r_eax = R32((u32)(r_eax*4+0x93a4c0u));
    /* 00672019: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067201c: je 0x672067 */ if (fZ) goto L_00672067;
L_0067201e:; BB(0x0067201e);
    /* 0067201e: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 00672024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672025: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67202au); f_005b8638();
    /* 0067202a: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0067202d: fld dword ptr [0x93a520] */ FPUSH(R_F32((u32)(0x93a520u)));
    /* 00672033: fadd dword ptr [ebp + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb0u));
    /* 00672039: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0067203c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fO = (a >> 31) & 1; } }
    /* 0067203f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00672041: fadd dword ptr [edx*4 + 0x93a508] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93a508u));
    /* 00672048: fadd dword ptr [0x93a524] */ ST(0) = ST(0) + R_F32((u32)(0x93a524u));
    /* 0067204e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00672050: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00672052: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00672053: jae 0x67205f */ if (!fC) goto L_0067205f;
L_00672055:; BB(0x00672055);
    /* 00672055: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00672057: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 0067205d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067205e: ret  */ FN_RET(0x00672008); r_esp += 4; return;
L_0067205f:; BB(0x0067205f);
    /* 0067205f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672061: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
L_00672067:; BB(0x00672067);
    /* 00672067: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672068: ret  */ FN_RET(0x00672008); r_esp += 4; return;
}

void f_0067206c(void) /* sub_67206C */
{
    FN_ENTER(0x0067206c);
    /* 0067206c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067206d: mov edi, ecx */ r_edi = r_ecx;
    /* 0067206f: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00672075: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672078: je 0x67209a */ if (fZ) goto L_0067209a;
L_0067207a:; BB(0x0067207a);
    /* 0067207a: mov ecx, dword ptr [edi + 0xd8] */ r_ecx = R32((u32)(r_edi+0xd8u));
    /* 00672080: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672082: je 0x672089 */ if (fZ) goto L_00672089;
L_00672084:; BB(0x00672084);
    /* 00672084: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x672089u); f_00508f48();
L_00672089:; BB(0x00672089);
    /* 00672089: mov ecx, dword ptr [edi + 0xdc] */ r_ecx = R32((u32)(r_edi+0xdcu));
    /* 0067208f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672091: je 0x672098 */ if (fZ) goto L_00672098;
L_00672093:; BB(0x00672093);
    /* 00672093: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x672098u); f_00508f48();
L_00672098:; BB(0x00672098);
    /* 00672098: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00672099: ret  */ FN_RET(0x0067206c); r_esp += 4; return;
L_0067209a:; BB(0x0067209a);
    /* 0067209a: movsx eax, word ptr [edi + 0xd0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xd0u));
    /* 006720a1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006720a4: jne 0x6720c6 */ if (!fZ) goto L_006720c6;
L_006720a6:; BB(0x006720a6);
    /* 006720a6: mov ecx, dword ptr [edi + 0xd8] */ r_ecx = R32((u32)(r_edi+0xd8u));
    /* 006720ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006720ae: je 0x6720b5 */ if (fZ) goto L_006720b5;
L_006720b0:; BB(0x006720b0);
    /* 006720b0: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x6720b5u); f_00509580();
L_006720b5:; BB(0x006720b5);
    /* 006720b5: mov ecx, dword ptr [edi + 0xdc] */ r_ecx = R32((u32)(r_edi+0xdcu));
    /* 006720bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006720bd: je 0x672098 */ if (fZ) goto L_00672098;
L_006720bf:; BB(0x006720bf);
    /* 006720bf: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x6720c4u); f_00509580();
    /* 006720c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006720c5: ret  */ FN_RET(0x0067206c); r_esp += 4; return;
L_006720c6:; BB(0x006720c6);
    /* 006720c6: mov ecx, dword ptr [edi + 0xd8] */ r_ecx = R32((u32)(r_edi+0xd8u));
    /* 006720cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006720ce: je 0x6720d5 */ if (fZ) goto L_006720d5;
L_006720d0:; BB(0x006720d0);
    /* 006720d0: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x6720d5u); f_00508f48();
L_006720d5:; BB(0x006720d5);
    /* 006720d5: mov ecx, dword ptr [edi + 0xdc] */ r_ecx = R32((u32)(r_edi+0xdcu));
    /* 006720db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006720dd: je 0x672098 */ if (fZ) goto L_00672098;
L_006720df:; BB(0x006720df);
    /* 006720df: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x6720e4u); f_00508f48();
    /* 006720e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006720e5: ret  */ FN_RET(0x0067206c); r_esp += 4; return;
}

void f_006720e8(void) /* sub_6720E8 */
{
    FN_ENTER(0x006720e8);
    /* 006720e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006720e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006720ea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006720ec: mov eax, dword ptr [0xa8fe04] */ r_eax = R32((u32)(0xa8fe04u));
    /* 006720f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006720f3: je 0x6721f0 */ if (fZ) goto L_006721f0;
L_006720f9:; BB(0x006720f9);
    /* 006720f9: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006720ff: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672105: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00672108: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067210a: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67210du); call_ind(t); }
    /* 0067210d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067210f: je 0x6721f0 */ if (fZ) goto L_006721f0;
L_00672115:; BB(0x00672115);
    /* 00672115: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672117: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x67211cu); f_00835f78();
    /* 0067211c: mov ecx, dword ptr [0xa8fdf0] */ r_ecx = R32((u32)(0xa8fdf0u));
    /* 00672122: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672124: je 0x67212d */ if (fZ) goto L_0067212d;
L_00672126:; BB(0x00672126);
    /* 00672126: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00672128: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067212a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x67212du); call_ind(t); }
L_0067212d:; BB(0x0067212d);
    /* 0067212d: mov ecx, dword ptr [0xa8fdf4] */ r_ecx = R32((u32)(0xa8fdf4u));
    /* 00672133: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672135: je 0x67213e */ if (fZ) goto L_0067213e;
L_00672137:; BB(0x00672137);
    /* 00672137: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00672139: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067213b: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x67213eu); call_ind(t); }
L_0067213e:; BB(0x0067213e);
    /* 0067213e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x672143u); f_0082d7b0();
    /* 00672143: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00672146: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67214bu); f_0082d838();
    /* 0067214b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0067214e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672150: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x672155u); f_0082d8bc();
    /* 00672155: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 0067215b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067215e: je 0x672174 */ if (fZ) goto L_00672174;
L_00672160:; BB(0x00672160);
    /* 00672160: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 00672166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672167: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672169: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067216e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067216f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x672174u); f_0082fa0c();
L_00672174:; BB(0x00672174);
    /* 00672174: mov ecx, dword ptr [0xa8fe04] */ r_ecx = R32((u32)(0xa8fe04u));
    /* 0067217a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x67217fu); f_00829cc8();
    /* 0067217f: movsx edx, word ptr [ebp + 0xd0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xd0u));
    /* 00672186: mov eax, dword ptr [edx*4 + 0x93a4c0] */ r_eax = R32((u32)(r_edx*4+0x93a4c0u));
    /* 0067218d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672190: je 0x6721f3 */ if (fZ) goto L_006721f3;
L_00672192:; BB(0x00672192);
    /* 00672192: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 00672198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00672199: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67219eu); f_005b8610();
    /* 0067219e: mov ebx, eax */ r_ebx = r_eax;
    /* 006721a0: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 006721a6: movzx edx, word ptr [ebp + 0xd0] */ r_edx = (u32)R16((u32)(r_ebp+0xd0u));
    /* 006721ad: push dword ptr [edx*4 + 0x93a4c0] */ { u32 v = R32((u32)(r_edx*4+0x93a4c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006721b4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6721b9u); f_005b8638();
    /* 006721b9: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006721bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006721c1: mov edx, eax */ r_edx = r_eax;
    /* 006721c3: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x6721c8u); f_0083bd00();
L_006721c8:; BB(0x006721c8);
    /* 006721c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6721cdu); f_0082da80();
    /* 006721cd: mov ecx, dword ptr [0xa8fdf4] */ r_ecx = R32((u32)(0xa8fdf4u));
    /* 006721d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006721d5: je 0x6721dc */ if (fZ) goto L_006721dc;
L_006721d7:; BB(0x006721d7);
    /* 006721d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006721d9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6721dcu); call_ind(t); }
L_006721dc:; BB(0x006721dc);
    /* 006721dc: mov ecx, dword ptr [0xa8fdf0] */ r_ecx = R32((u32)(0xa8fdf0u));
    /* 006721e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006721e4: je 0x6721eb */ if (fZ) goto L_006721eb;
L_006721e6:; BB(0x006721e6);
    /* 006721e6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006721e8: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6721ebu); call_ind(t); }
L_006721eb:; BB(0x006721eb);
    /* 006721eb: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x6721f0u); f_0083603c();
L_006721f0:; BB(0x006721f0);
    /* 006721f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006721f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006721f2: ret  */ FN_RET(0x006720e8); r_esp += 4; return;
L_006721f3:; BB(0x006721f3);
    /* 006721f3: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 006721f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006721fa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6721ffu); f_005b8610();
    /* 006721ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00672201: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x672206u); f_00831758();
    /* 00672206: jmp 0x6721c8 */ goto L_006721c8;
}

void f_00672208(void) /* sub_672208 */
{
    FN_ENTER(0x00672208);
    /* 00672208: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672209: mov eax, 4 */ r_eax = 0x4u;
    /* 0067220e: mov ebx, eax */ r_ebx = r_eax;
L_00672210:; BB(0x00672210);
    /* 00672210: mov ecx, dword ptr [ebx + 0xa8fdf0] */ r_ecx = R32((u32)(r_ebx+0xa8fdf0u));
    /* 00672216: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672219: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067221b: je 0x67222f */ if (fZ) goto L_0067222f;
L_0067221d:; BB(0x0067221d);
    /* 0067221d: je 0x672225 */ if (fZ) goto L_00672225;
L_0067221f:; BB(0x0067221f);
    /* 0067221f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672221: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672223: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x672225u); call_ind(t); }
L_00672225:; BB(0x00672225);
    /* 00672225: mov dword ptr [ebx + 0xa8fdf4], 0 */ W32((u32)(r_ebx+0xa8fdf4u), 0x0u);
L_0067222f:; BB(0x0067222f);
    /* 0067222f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00672231: jge 0x672210 */ if ((fS==fO)) goto L_00672210;
L_00672233:; BB(0x00672233);
    /* 00672233: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 00672239: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067223b: je 0x672250 */ if (fZ) goto L_00672250;
L_0067223d:; BB(0x0067223d);
    /* 0067223d: je 0x672246 */ if (fZ) goto L_00672246;
L_0067223f:; BB(0x0067223f);
    /* 0067223f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672241: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x672246u); f_004066a8();
L_00672246:; BB(0x00672246);
    /* 00672246: mov dword ptr [0xa8fe08], 0 */ W32((u32)(0xa8fe08u), 0x0u);
L_00672250:; BB(0x00672250);
    /* 00672250: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672251: ret  */ FN_RET(0x00672208); r_esp += 4; return;
}

void f_00672254(void)
{
    FN_ENTER(0x00672254);
    /* 00672254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672255: mov ebp, esp */ r_ebp = r_esp;
    /* 00672257: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672259: push 0x8e9278 */ { u32 v = 0x8e9278u; r_esp -= 4; W32(r_esp, v); }
    /* 0067225e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672265: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067226c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067226f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672272: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672275: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672278: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067227b: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672280: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00672287: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67228cu); f_005caba4();
    /* 0067228c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067228d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672292: je 0x6722cb */ if (fZ) goto L_006722cb;
L_00672294:; BB(0x00672294);
    /* 00672294: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067229b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006722a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006722a5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006722ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006722ae: call 0x6722d0 */ r_esp -= 4; W32(r_esp, 0x6722b3u); f_006722d0();
    /* 006722b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006722b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006722bd:; BB(0x006722bd);
    /* 006722bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006722c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006722c7: mov esp, ebp */ r_esp = r_ebp;
    /* 006722c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006722ca: ret  */ FN_RET(0x00672254); r_esp += 4; return;
L_006722cb:; BB(0x006722cb);
    /* 006722cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006722cd: jmp 0x6722bd */ goto L_006722bd;
}

void f_006722d0(void) /* sub_6722D0 */
{
    FN_ENTER(0x006722d0);
    /* 006722d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006722d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006722d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006722d5: push 0x8e9294 */ { u32 v = 0x8e9294u; r_esp -= 4; W32(r_esp, v); }
    /* 006722da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006722e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006722e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006722e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006722eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006722ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006722f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006722f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006722f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006722fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006722fd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00672300: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672303: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x672308u); f_006132e4();
    /* 00672308: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067230f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672312: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672315: mov dword ptr [ecx], 0xb35ea8 */ W32((u32)(r_ecx), 0xb35ea8u);
    /* 0067231b: mov eax, dword ptr [0x9c9774] */ r_eax = R32((u32)(0x9c9774u));
    /* 00672320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00672321: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00672324: call dword ptr [0xb35ebc] */ { u32 t = R32((u32)(0xb35ebcu)); r_esp -= 4; W32(r_esp, 0x67232au); call_ind(t); }
    /* 0067232a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067232d: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00672332: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00672335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672336: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x67233bu); f_00509590();
    /* 0067233b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067233e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672341: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00672347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672349: je 0x672365 */ if (fZ) goto L_00672365;
L_0067234b:; BB(0x0067234b);
    /* 0067234b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0067234d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067234f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672354u); f_00508efc();
    /* 00672354: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672357: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 0067235d: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x672362u); f_00508f48();
    /* 00672362: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_00672365:; BB(0x00672365);
    /* 00672365: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0067236a: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067236d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067236e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x672373u); f_00509590();
    /* 00672373: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672376: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672379: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 0067237f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672381: je 0x67239d */ if (fZ) goto L_0067239d;
L_00672383:; BB(0x00672383);
    /* 00672383: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00672385: mov ecx, eax */ r_ecx = r_eax;
    /* 00672387: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x67238cu); f_00508efc();
    /* 0067238c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067238f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00672395: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x67239au); f_00508f48();
    /* 0067239a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_0067239d:; BB(0x0067239d);
    /* 0067239d: mov ecx, edx */ r_ecx = r_edx;
    /* 0067239f: call 0x672410 */ r_esp -= 4; W32(r_esp, 0x6723a4u); f_00672410();
    /* 006723a4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006723a7: call 0x671e1c */ r_esp -= 4; W32(r_esp, 0x6723acu); f_00671e1c();
    /* 006723ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006723af: call 0x671ed4 */ r_esp -= 4; W32(r_esp, 0x6723b4u); f_00671ed4();
    /* 006723b4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006723b7: mov dword ptr [ecx + 0xd4], 0x3f800000 */ W32((u32)(r_ecx+0xd4u), 0x3f800000u);
    /* 006723c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006723c3: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 006723cd: mov dword ptr [ecx + 0xc4], 0x42f00000 */ W32((u32)(r_ecx+0xc4u), 0x42f00000u);
    /* 006723d7: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 006723e1: push 0x9c9778 */ { u32 v = 0x9c9778u; r_esp -= 4; W32(r_esp, v); }
    /* 006723e6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6723ebu); f_007b9a88();
    /* 006723eb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006723ee: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6723f3u); f_007b999c();
    /* 006723f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006723f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006723f7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6723fcu); f_007b4f54();
    /* 006723fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006723ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672402: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672409: mov esp, ebp */ r_esp = r_ebp;
    /* 0067240b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067240c: ret 8 */ FN_RET(0x006722d0); r_esp += 12; return;
}

void f_00672410(void) /* sub_672410 */
{
    FN_ENTER(0x00672410);
    /* 00672410: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00672416: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00672419: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067241c: ja 0x6724a9 */ if ((!fC&&!fZ)) goto L_006724a9;
L_00672422:; BB(0x00672422);
    /* 00672422: mov eax, dword ptr [edx*4 + 0x93a480] */ r_eax = R32((u32)(r_edx*4+0x93a480u));
    /* 00672429: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006724a9:; BB(0x006724a9);
    /* 006724a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006724ab: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 006724b2: ret  */ FN_RET(0x00672410); r_esp += 4; return;
}

void f_0067242b(void)
{
    FN_ENTER(0x0067242b);
    /* 0067242b: mov eax, 9 */ r_eax = 0x9u;
    /* 00672430: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00672437: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x0067242b); r_esp += 4; return;
}

void f_00672439(void)
{
    FN_ENTER(0x00672439);
    /* 00672439: mov eax, 8 */ r_eax = 0x8u;
    /* 0067243e: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00672445: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x00672439); r_esp += 4; return;
}

void f_00672447(void)
{
    FN_ENTER(0x00672447);
    /* 00672447: mov eax, 7 */ r_eax = 0x7u;
    /* 0067244c: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00672453: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x00672447); r_esp += 4; return;
}

void f_00672455(void)
{
    FN_ENTER(0x00672455);
    /* 00672455: mov eax, 6 */ r_eax = 0x6u;
    /* 0067245a: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00672461: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x00672455); r_esp += 4; return;
}

void f_00672463(void)
{
    FN_ENTER(0x00672463);
    /* 00672463: mov eax, 5 */ r_eax = 0x5u;
    /* 00672468: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 0067246f: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x00672463); r_esp += 4; return;
}

void f_00672471(void)
{
    FN_ENTER(0x00672471);
    /* 00672471: mov eax, 4 */ r_eax = 0x4u;
    /* 00672476: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 0067247d: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x00672471); r_esp += 4; return;
}

void f_0067247f(void)
{
    FN_ENTER(0x0067247f);
    /* 0067247f: mov eax, 3 */ r_eax = 0x3u;
    /* 00672484: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 0067248b: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x0067247f); r_esp += 4; return;
}

void f_0067248d(void)
{
    FN_ENTER(0x0067248d);
    /* 0067248d: mov eax, 2 */ r_eax = 0x2u;
    /* 00672492: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 00672499: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x0067248d); r_esp += 4; return;
}

void f_0067249b(void)
{
    FN_ENTER(0x0067249b);
    /* 0067249b: mov eax, 1 */ r_eax = 0x1u;
    /* 006724a0: mov word ptr [ecx + 0xd2], ax */ W16((u32)(r_ecx+0xd2u), (u16)r_eax);
    /* 006724a7: jmp 0x6724b2 */ goto L_006724b2;
L_006724b2:; BB(0x006724b2);
    /* 006724b2: ret  */ FN_RET(0x0067249b); r_esp += 4; return;
}

void f_006724b4(void) /* sub_6724B4 */
{
    FN_ENTER(0x006724b4);
    /* 006724b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006724b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006724b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006724b9: push 0x8e92bc */ { u32 v = 0x8e92bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006724be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006724c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006724c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006724cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006724cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006724d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006724d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006724d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006724db: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006724e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006724e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6724ecu); f_008581c5();
    /* 006724ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006724ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006724f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006724f2: je 0x67260e */ if (fZ) goto L_0067260e;
L_006724f8:; BB(0x006724f8);
    /* 006724f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006724ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672506: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672509: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067250b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067250c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067250d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067250e: push 0x9c9764 */ { u32 v = 0x9c9764u; r_esp -= 4; W32(r_esp, v); }
    /* 00672513: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00672515: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67251au); f_005b7a84();
    /* 0067251a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067251d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00672524:; BB(0x00672524);
    /* 00672524: mov dword ptr [0xa8fe08], eax */ W32((u32)(0xa8fe08u), r_eax);
    /* 00672529: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00672530: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x672535u); f_00671000();
    /* 00672535: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 0067253b: mov dword ptr [0xa8fe04], eax */ W32((u32)(0xa8fe04u), r_eax);
    /* 00672540: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00672542: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x672547u); f_005b8610();
    /* 00672547: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672549: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0067254c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0067254f: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00672552: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 00672555: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00672558: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0067255b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0067255e: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 00672564: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00672567: mov dword ptr [0xa8fdfc], eax */ W32((u32)(0xa8fdfcu), r_eax);
    /* 0067256c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x672571u); f_005b8610();
    /* 00672571: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00672573: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00672576: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00672579: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 0067257c: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 0067257f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00672582: mov dword ptr [0xa8fdf8], edi */ W32((u32)(0xa8fdf8u), r_edi);
    /* 00672588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067258a: mov dword ptr [0xa8fe00], ecx */ W32((u32)(0xa8fe00u), r_ecx);
    /* 00672590: mov dword ptr [0xa8fdf0], ecx */ W32((u32)(0xa8fdf0u), r_ecx);
    /* 00672596: mov dword ptr [0xa8fdf4], ecx */ W32((u32)(0xa8fdf4u), r_ecx);
    /* 0067259c: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 006725a2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6725a7u); f_005b8610();
    /* 006725a7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006725a9: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006725ac: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006725af: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006725b2: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 006725b5: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 006725b8: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 006725bb: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006725be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006725c0: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x6725c5u); f_0066f3d4();
    /* 006725c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006725c8: mov ecx, dword ptr [0xa8fe08] */ r_ecx = R32((u32)(0xa8fe08u));
    /* 006725ce: mov dword ptr [0xa8fdf0], eax */ W32((u32)(0xa8fdf0u), r_eax);
    /* 006725d3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006725d5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6725dau); f_005b8610();
    /* 006725da: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 006725dc: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006725df: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006725e2: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006725e5: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006725e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006725ea: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x6725efu); f_0066f3d4();
    /* 006725ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006725f2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006725f5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006725f8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006725fb: mov dword ptr [0xa8fdf4], eax */ W32((u32)(0xa8fdf4u), r_eax);
    /* 00672600: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672603: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067260a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067260c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067260d: ret  */ FN_RET(0x006724b4); r_esp += 4; return;
L_0067260e:; BB(0x0067260e);
    /* 0067260e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00672610: jmp 0x672524 */ goto L_00672524;
}

void f_00672618(void) /* sub_672618 */
{
    FN_ENTER(0x00672618);
    /* 00672618: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672619: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067261b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067261d: call 0x67263c */ r_esp -= 4; W32(r_esp, 0x672622u); f_0067263c();
    /* 00672622: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00672626: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672628: jne 0x67262e */ if (!fZ) goto L_0067262e;
L_0067262a:; BB(0x0067262a);
    /* 0067262a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067262b: ret 4 */ FN_RET(0x00672618); r_esp += 8; return;
L_0067262e:; BB(0x0067262e);
    /* 0067262e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067262f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x672634u); f_005c2f74();
    /* 00672634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672635: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672636: ret 4 */ FN_RET(0x00672618); r_esp += 8; return;
}

void f_0067263c(void) /* sub_67263C */
{
    FN_ENTER(0x0067263c);
    /* 0067263c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067263d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067263f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672641: push 0x8e92d8 */ { u32 v = 0x8e92d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067264c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067264d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672654: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067265a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067265d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672663: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00672666: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672669: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 0067266f: mov dword ptr [ecx], 0xb35f50 */ W32((u32)(r_ecx), 0xb35f50u);
    /* 00672675: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672677: je 0x672693 */ if (fZ) goto L_00672693;
L_00672679:; BB(0x00672679);
    /* 00672679: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067267c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00672680: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00672685: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00672689: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_00672693:; BB(0x00672693);
    /* 00672693: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067269a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67269fu); f_006131f4();
    /* 0067269f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006726a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006726a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006726ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006726ac: ret  */ FN_RET(0x0067263c); r_esp += 4; return;
}

void f_006726b0(void)
{
    FN_ENTER(0x006726b0);
    /* 006726b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006726b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006726b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006726b5: push 0x8e9300 */ { u32 v = 0x8e9300u; r_esp -= 4; W32(r_esp, v); }
    /* 006726ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006726c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006726c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006726c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006726cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006726ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006726d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006726d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006726d7: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006726dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006726e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6726e8u); f_005caba4();
    /* 006726e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006726e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006726ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006726ee: je 0x672727 */ if (fZ) goto L_00672727;
L_006726f0:; BB(0x006726f0);
    /* 006726f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006726f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006726fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672701: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672707: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067270a: call 0x67272c */ r_esp -= 4; W32(r_esp, 0x67270fu); f_0067272c();
    /* 0067270f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672712: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00672719:; BB(0x00672719);
    /* 00672719: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067271c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672723: mov esp, ebp */ r_esp = r_ebp;
    /* 00672725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672726: ret  */ FN_RET(0x006726b0); r_esp += 4; return;
L_00672727:; BB(0x00672727);
    /* 00672727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672729: jmp 0x672719 */ goto L_00672719;
}

void f_0067272c(void) /* sub_67272C */
{
    FN_ENTER(0x0067272c);
    /* 0067272c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067272d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067272f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672731: push 0x8e931c */ { u32 v = 0x8e931cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067273c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067273d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672744: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067274a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067274d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00672750: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00672753: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00672756: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672759: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067275c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067275f: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x672764u); f_006132e4();
    /* 00672764: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067276b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067276e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672771: mov dword ptr [ecx], 0xb35f50 */ W32((u32)(r_ecx), 0xb35f50u);
    /* 00672777: mov eax, dword ptr [0x9c97c0] */ r_eax = R32((u32)(0x9c97c0u));
    /* 0067277c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067277d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00672780: call dword ptr [0xb35f64] */ { u32 t = R32((u32)(0xb35f64u)); r_esp -= 4; W32(r_esp, 0x672786u); call_ind(t); }
    /* 00672786: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672789: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067278b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067278e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067278f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x672794u); f_00509590();
    /* 00672794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672797: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067279a: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 006727a0: call 0x6727c4 */ r_esp -= 4; W32(r_esp, 0x6727a5u); f_006727c4();
    /* 006727a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006727a8: mov dword ptr [eax + 0xcc], 0x3f800000 */ W32((u32)(r_eax+0xccu), 0x3f800000u);
    /* 006727b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006727b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006727bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006727be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006727bf: ret 8 */ FN_RET(0x0067272c); r_esp += 12; return;
}

void f_006727c4(void) /* sub_6727C4 */
{
    FN_ENTER(0x006727c4);
    /* 006727c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006727c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006727c6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006727c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006727cb: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 006727d1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006727d3: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006727d6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006727d9: ja 0x672850 */ if ((!fC&&!fZ)) goto L_00672850;
L_006727db:; BB(0x006727db);
    /* 006727db: mov eax, dword ptr [edx*4 + 0x93a79c] */ r_eax = R32((u32)(r_edx*4+0x93a79cu));
    /* 006727e2: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00672850:; BB(0x00672850);
    /* 00672850: mov dword ptr [ebx + 0xd0], 0 */ W32((u32)(r_ebx+0xd0u), 0x0u);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x006727c4); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_006727e4(void)
{
    FN_ENTER(0x006727e4);
    /* 006727e4: mov dword ptr [ebx + 0xd0], 0xb */ W32((u32)(r_ebx+0xd0u), 0xbu);
    /* 006727ee: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x006727e4); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_006727f0(void)
{
    FN_ENTER(0x006727f0);
    /* 006727f0: mov dword ptr [ebx + 0xd0], 0xa */ W32((u32)(r_ebx+0xd0u), 0xau);
    /* 006727fa: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x006727f0); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_006727fc(void)
{
    FN_ENTER(0x006727fc);
    /* 006727fc: mov dword ptr [ebx + 0xd0], 4 */ W32((u32)(r_ebx+0xd0u), 0x4u);
    /* 00672806: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x006727fc); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_00672808(void)
{
    FN_ENTER(0x00672808);
    /* 00672808: mov dword ptr [ebx + 0xd0], 8 */ W32((u32)(r_ebx+0xd0u), 0x8u);
    /* 00672812: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x00672808); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_00672814(void)
{
    FN_ENTER(0x00672814);
    /* 00672814: mov dword ptr [ebx + 0xd0], 9 */ W32((u32)(r_ebx+0xd0u), 0x9u);
    /* 0067281e: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x00672814); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_00672820(void)
{
    FN_ENTER(0x00672820);
    /* 00672820: mov dword ptr [ebx + 0xd0], 3 */ W32((u32)(r_ebx+0xd0u), 0x3u);
    /* 0067282a: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x00672820); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_0067282c(void)
{
    FN_ENTER(0x0067282c);
    /* 0067282c: mov dword ptr [ebx + 0xd0], 7 */ W32((u32)(r_ebx+0xd0u), 0x7u);
    /* 00672836: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x0067282c); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_00672838(void)
{
    FN_ENTER(0x00672838);
    /* 00672838: mov dword ptr [ebx + 0xd0], 5 */ W32((u32)(r_ebx+0xd0u), 0x5u);
    /* 00672842: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x00672838); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_00672844(void)
{
    FN_ENTER(0x00672844);
    /* 00672844: mov dword ptr [ebx + 0xd0], 1 */ W32((u32)(r_ebx+0xd0u), 0x1u);
    /* 0067284e: jmp 0x67285a */ goto L_0067285a;
L_0067285a:; BB(0x0067285a);
    /* 0067285a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067285c: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672861u); f_00671d78();
    /* 00672861: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672867: jne 0x672875 */ if (!fZ) goto L_00672875;
L_00672869:; BB(0x00672869);
    /* 00672869: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672873: jmp 0x67287f */ goto L_0067287f;
L_00672875:; BB(0x00672875);
    /* 00672875: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
L_0067287f:; BB(0x0067287f);
    /* 0067287f: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00672882: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672885: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00672889: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067288e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672892: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672896: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067289a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067289d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006728a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006728a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006728a5: jge 0x6728a9 */ if ((fS==fO)) goto L_006728a9;
L_006728a7:; BB(0x006728a7);
    /* 006728a7: mov edx, eax */ r_edx = r_eax;
L_006728a9:; BB(0x006728a9);
    /* 006728a9: cmp edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006728af: jl 0x6728b6 */ if ((fS!=fO)) goto L_006728b6;
L_006728b1:; BB(0x006728b1);
    /* 006728b1: mov edx, 0x23f */ r_edx = 0x23fu;
L_006728b6:; BB(0x006728b6);
    /* 006728b6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006728bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728be: je 0x6728cc */ if (fZ) goto L_006728cc;
L_006728c0:; BB(0x006728c0);
    /* 006728c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006728c1: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x6728c6u); f_00508d4c();
    /* 006728c6: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_006728cc:; BB(0x006728cc);
    /* 006728cc: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 006728cf: fcom dword ptr [0x93a7d4] */ fx_compare(ST(0), R_F32((u32)(0x93a7d4u))); 
    /* 006728d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006728d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006728d8: jae 0x672903 */ if (!fC) goto L_00672903;
L_006728da:; BB(0x006728da);
    /* 006728da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006728dc: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006728e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728e5: je 0x672970 */ if (fZ) goto L_00672970;
L_006728eb:; BB(0x006728eb);
    /* 006728eb: mov ebp, 2 */ r_ebp = 0x2u;
L_006728f0:; BB(0x006728f0);
    /* 006728f0: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006728f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006728f9: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006728fb:; BB(0x006728fb);
    /* 006728fb: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00672901: jmp 0x67294d */ goto L_0067294d;
L_00672903:; BB(0x00672903);
    /* 00672903: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00672906: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067290a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067290f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00672913: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00672917: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067291b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067291e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00672922: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672925: je 0x6729a4 */ if (fZ) goto L_006729a4;
L_00672927:; BB(0x00672927);
    /* 00672927: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067292a: je 0x67297a */ if (fZ) goto L_0067297a;
L_0067292c:; BB(0x0067292c);
    /* 0067292c: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672932: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672935: jne 0x67293c */ if (!fZ) goto L_0067293c;
L_00672937:; BB(0x00672937);
    /* 00672937: mov ebp, 0x40 */ r_ebp = 0x40u;
L_0067293c:; BB(0x0067293c);
    /* 0067293c: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672942: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672945: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672947:; BB(0x00672947);
    /* 00672947: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0067294d:; BB(0x0067294d);
    /* 0067294d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067294f: je 0x67295d */ if (fZ) goto L_0067295d;
L_00672951:; BB(0x00672951);
    /* 00672951: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672952: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x672957u); f_00508efc();
    /* 00672957: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
L_0067295d:; BB(0x0067295d);
    /* 0067295d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067295f: je 0x67296a */ if (fZ) goto L_0067296a;
L_00672961:; BB(0x00672961);
    /* 00672961: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00672964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672965: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67296au); f_00508db8();
L_0067296a:; BB(0x0067296a);
    /* 0067296a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067296d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067296f: ret  */ FN_RET(0x00672844); r_esp += 4; return;
L_00672970:; BB(0x00672970);
    /* 00672970: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00672975: jmp 0x6728f0 */ goto L_006728f0;
L_0067297a:; BB(0x0067297a);
    /* 0067297a: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00672980: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672983: je 0x67299d */ if (fZ) goto L_0067299d;
L_00672985:; BB(0x00672985);
    /* 00672985: mov ebp, 4 */ r_ebp = 0x4u;
L_0067298a:; BB(0x0067298a);
    /* 0067298a: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00672990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672993: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_00672995:; BB(0x00672995);
    /* 00672995: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0067299b: jmp 0x67294d */ goto L_0067294d;
L_0067299d:; BB(0x0067299d);
    /* 0067299d: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 006729a2: jmp 0x67298a */ goto L_0067298a;
L_006729a4:; BB(0x006729a4);
    /* 006729a4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006729aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729ad: je 0x6729c7 */ if (fZ) goto L_006729c7;
L_006729af:; BB(0x006729af);
    /* 006729af: mov ebp, 8 */ r_ebp = 0x8u;
L_006729b4:; BB(0x006729b4);
    /* 006729b4: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006729ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729bd: jne 0x67294d */ if (!fZ) goto L_0067294d;
L_006729bf:; BB(0x006729bf);
    /* 006729bf: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006729c5: jmp 0x67294d */ goto L_0067294d;
L_006729c7:; BB(0x006729c7);
    /* 006729c7: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 006729cc: jmp 0x6729b4 */ goto L_006729b4;
}

void f_006729d0(void) /* sub_6729D0 */
{
    FN_ENTER(0x006729d0);
    /* 006729d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006729d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006729d3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6729d8u); f_004f7c84();
    /* 006729d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006729db: je 0x672adc */ if (fZ) goto L_00672adc;
L_006729e1:; BB(0x006729e1);
    /* 006729e1: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006729e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729e9: je 0x672ab4 */ if (fZ) goto L_00672ab4;
L_006729ef:; BB(0x006729ef);
    /* 006729ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006729f2: jne 0x672a4b */ if (!fZ) goto L_00672a4b;
L_006729f4:; BB(0x006729f4);
    /* 006729f4: fld dword ptr [0x93a7c4] */ FPUSH(R_F32((u32)(0x93a7c4u)));
    /* 006729fa: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 00672a00: fcom dword ptr [0x93a7c8] */ fx_compare(ST(0), R_F32((u32)(0x93a7c8u))); 
    /* 00672a06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00672a08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00672a09: jb 0x672a2a */ if (fC) goto L_00672a2a;
L_00672a0b:; BB(0x00672a0b);
    /* 00672a0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672a0d: fld dword ptr [0x93a7c8] */ FPUSH(R_F32((u32)(0x93a7c8u)));
    /* 00672a13: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00672a1d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00672a22: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00672a28: jmp 0x672a30 */ goto L_00672a30;
L_00672a2a:; BB(0x00672a2a);
    /* 00672a2a: fst dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0));
L_00672a30:; BB(0x00672a30);
    /* 00672a30: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 00672a36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672a38: je 0x672ade */ if (fZ) goto L_00672ade;
L_00672a3e:; BB(0x00672a3e);
    /* 00672a3e: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 00672a41: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00672a46: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00672a49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672a4a: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672a4b:; BB(0x00672a4b);
    /* 00672a4b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672a4e: jne 0x672a99 */ if (!fZ) goto L_00672a99;
L_00672a50:; BB(0x00672a50);
    /* 00672a50: fld dword ptr [0x93a7d0] */ FPUSH(R_F32((u32)(0x93a7d0u)));
    /* 00672a56: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 00672a5c: fcom dword ptr [0x93a7cc] */ fx_compare(ST(0), R_F32((u32)(0x93a7ccu))); 
    /* 00672a62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00672a64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00672a65: ja 0x672a7d */ if ((!fC&&!fZ)) goto L_00672a7d;
L_00672a67:; BB(0x00672a67);
    /* 00672a67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672a69: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00672a73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672a75: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 00672a7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672a7c: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672a7d:; BB(0x00672a7d);
    /* 00672a7d: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 00672a83: fst dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0));
    /* 00672a89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672a8b: je 0x672ae2 */ if (fZ) goto L_00672ae2;
L_00672a8d:; BB(0x00672a8d);
    /* 00672a8d: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00672a90: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
    /* 00672a97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672a98: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672a99:; BB(0x00672a99);
    /* 00672a99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00672a9b: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672aa0u); f_00671d78();
    /* 00672aa0: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00672aa6: je 0x672adc */ if (fZ) goto L_00672adc;
L_00672aa8:; BB(0x00672aa8);
    /* 00672aa8: mov dword ptr [ebx + 0xc8], 1 */ W32((u32)(r_ebx+0xc8u), 0x1u);
    /* 00672ab2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672ab3: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672ab4:; BB(0x00672ab4);
    /* 00672ab4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00672ab6: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x672abbu); f_00671d78();
    /* 00672abb: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672ac1: jne 0x672acd */ if (!fZ) goto L_00672acd;
L_00672ac3:; BB(0x00672ac3);
    /* 00672ac3: mov dword ptr [ebx + 0xc8], 2 */ W32((u32)(r_ebx+0xc8u), 0x2u);
L_00672acd:; BB(0x00672acd);
    /* 00672acd: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 00672ad3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672ad5: je 0x672adc */ if (fZ) goto L_00672adc;
L_00672ad7:; BB(0x00672ad7);
    /* 00672ad7: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x672adcu); f_00508f48();
L_00672adc:; BB(0x00672adc);
    /* 00672adc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672add: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672ade:; BB(0x00672ade);
    /* 00672ade: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672ae0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672ae1: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
L_00672ae2:; BB(0x00672ae2);
    /* 00672ae2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672ae4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672ae5: ret  */ FN_RET(0x006729d0); r_esp += 4; return;
}

void f_00672ae8(void) /* sub_672AE8 */
{
    FN_ENTER(0x00672ae8);
    /* 00672ae8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672ae9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00672aeb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00672aed: call 0x672b0c */ r_esp -= 4; W32(r_esp, 0x672af2u); f_00672b0c();
    /* 00672af2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00672af6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672af8: jne 0x672afe */ if (!fZ) goto L_00672afe;
L_00672afa:; BB(0x00672afa);
    /* 00672afa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672afb: ret 4 */ FN_RET(0x00672ae8); r_esp += 8; return;
L_00672afe:; BB(0x00672afe);
    /* 00672afe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672aff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x672b04u); f_005c2f74();
    /* 00672b04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672b05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672b06: ret 4 */ FN_RET(0x00672ae8); r_esp += 8; return;
}

void f_00672b0c(void) /* sub_672B0C */
{
    FN_ENTER(0x00672b0c);
    /* 00672b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00672b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b11: push 0x8e9338 */ { u32 v = 0x8e9338u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672b24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672b2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672b2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672b30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672b33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00672b36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672b39: mov dword ptr [ecx], 0xb36020 */ W32((u32)(r_ecx), 0xb36020u);
    /* 00672b3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00672b46: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x672b4bu); f_006131f4();
    /* 00672b4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672b4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672b55: mov esp, ebp */ r_esp = r_ebp;
    /* 00672b57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672b58: ret  */ FN_RET(0x00672b0c); r_esp += 4; return;
}

void f_00672b5c(void) /* sub_672B5C */
{
    FN_ENTER(0x00672b5c);
    /* 00672b5c: mov ecx, dword ptr [0xa8fe14] */ r_ecx = R32((u32)(0xa8fe14u));
    /* 00672b62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672b64: je 0x672b79 */ if (fZ) goto L_00672b79;
L_00672b66:; BB(0x00672b66);
    /* 00672b66: je 0x672b6f */ if (fZ) goto L_00672b6f;
L_00672b68:; BB(0x00672b68);
    /* 00672b68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b6a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x672b6fu); f_004066a8();
L_00672b6f:; BB(0x00672b6f);
    /* 00672b6f: mov dword ptr [0xa8fe14], 0 */ W32((u32)(0xa8fe14u), 0x0u);
L_00672b79:; BB(0x00672b79);
    /* 00672b79: ret  */ FN_RET(0x00672b5c); r_esp += 4; return;
}

void f_00672b7c(void)
{
    FN_ENTER(0x00672b7c);
    /* 00672b7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672b7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00672b7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b81: push 0x8e9360 */ { u32 v = 0x8e9360u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672b8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672b94: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672b97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672b9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672b9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672ba0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672ba3: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ba8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00672baf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x672bb4u); f_005caba4();
    /* 00672bb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672bb5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672bba: je 0x672bf3 */ if (fZ) goto L_00672bf3;
L_00672bbc:; BB(0x00672bbc);
    /* 00672bbc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00672bc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672bca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672bcd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672bd3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672bd6: call 0x672bf8 */ r_esp -= 4; W32(r_esp, 0x672bdbu); f_00672bf8();
    /* 00672bdb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672bde: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00672be5:; BB(0x00672be5);
    /* 00672be5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672be8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672bef: mov esp, ebp */ r_esp = r_ebp;
    /* 00672bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672bf2: ret  */ FN_RET(0x00672b7c); r_esp += 4; return;
L_00672bf3:; BB(0x00672bf3);
    /* 00672bf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672bf5: jmp 0x672be5 */ goto L_00672be5;
}

void f_00672bf8(void) /* sub_672BF8 */
{
    FN_ENTER(0x00672bf8);
    /* 00672bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672bf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00672bfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672bfd: push 0x8e937c */ { u32 v = 0x8e937cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672c02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672c09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672c10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672c13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672c16: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00672c19: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00672c1c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00672c1f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00672c22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672c25: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00672c28: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672c2b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x672c30u); f_006132e4();
    /* 00672c30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672c37: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672c3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672c3d: mov dword ptr [ecx], 0xb36020 */ W32((u32)(r_ecx), 0xb36020u);
    /* 00672c43: mov eax, dword ptr [0x9c97dc] */ r_eax = R32((u32)(0x9c97dcu));
    /* 00672c48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00672c49: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00672c4c: call dword ptr [0xb36034] */ { u32 t = R32((u32)(0xb36034u)); r_esp -= 4; W32(r_esp, 0x672c52u); call_ind(t); }
    /* 00672c52: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x672c57u); f_00671040();
    /* 00672c57: mov edx, eax */ r_edx = r_eax;
    /* 00672c59: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672c5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672c5e: je 0x672c6c */ if (fZ) goto L_00672c6c;
L_00672c60:; BB(0x00672c60);
    /* 00672c60: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 00672c6a: jmp 0x672c76 */ goto L_00672c76;
L_00672c6c:; BB(0x00672c6c);
    /* 00672c6c: mov dword ptr [eax + 0xc8], 3 */ W32((u32)(r_eax+0xc8u), 0x3u);
L_00672c76:; BB(0x00672c76);
    /* 00672c76: mov edi, dword ptr [0xa8fe14] */ r_edi = R32((u32)(0xa8fe14u));
    /* 00672c7c: mov dword ptr [eax + 0xcc], 0x3f800000 */ W32((u32)(r_eax+0xccu), 0x3f800000u);
    /* 00672c86: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00672c8c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00672c8f: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 00672c92: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 00672c98: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672c9b: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00672c9e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00672ca1: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00672ca4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672ca7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672caa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672cb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00672cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672cb4: ret 8 */ FN_RET(0x00672bf8); r_esp += 12; return;
}

void f_00672cb8(void) /* sub_672CB8 */
{
    FN_ENTER(0x00672cb8);
    /* 00672cb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672cb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00672cbb: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00672cc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672cc3: je 0x672d55 */ if (fZ) goto L_00672d55;
L_00672cc9:; BB(0x00672cc9);
    /* 00672cc9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672ccc: jne 0x672d06 */ if (!fZ) goto L_00672d06;
L_00672cce:; BB(0x00672cce);
    /* 00672cce: fld dword ptr [0x93a7e4] */ FPUSH(R_F32((u32)(0x93a7e4u)));
    /* 00672cd4: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 00672cda: fcom dword ptr [0x93a7e0] */ fx_compare(ST(0), R_F32((u32)(0x93a7e0u))); 
    /* 00672ce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00672ce2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00672ce3: jb 0x672cfe */ if (fC) goto L_00672cfe;
L_00672ce5:; BB(0x00672ce5);
    /* 00672ce5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672ce7: mov dword ptr [ebp + 0xc8], 3 */ W32((u32)(r_ebp+0xc8u), 0x3u);
    /* 00672cf1: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00672cf6: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00672cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672cfd: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
L_00672cfe:; BB(0x00672cfe);
    /* 00672cfe: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 00672d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d05: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
L_00672d06:; BB(0x00672d06);
    /* 00672d06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672d09: jne 0x672d40 */ if (!fZ) goto L_00672d40;
L_00672d0b:; BB(0x00672d0b);
    /* 00672d0b: fld dword ptr [0x93a7ec] */ FPUSH(R_F32((u32)(0x93a7ecu)));
    /* 00672d11: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 00672d17: fcom dword ptr [0x93a7e8] */ fx_compare(ST(0), R_F32((u32)(0x93a7e8u))); 
    /* 00672d1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00672d1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00672d20: ja 0x672d38 */ if ((!fC&&!fZ)) goto L_00672d38;
L_00672d22:; BB(0x00672d22);
    /* 00672d22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00672d24: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 00672d2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672d30: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00672d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d37: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
L_00672d38:; BB(0x00672d38);
    /* 00672d38: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 00672d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d3f: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
L_00672d40:; BB(0x00672d40);
    /* 00672d40: call 0x671008 */ r_esp -= 4; W32(r_esp, 0x672d45u); f_00671008();
    /* 00672d45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672d47: je 0x672d68 */ if (fZ) goto L_00672d68;
L_00672d49:; BB(0x00672d49);
    /* 00672d49: mov dword ptr [ebp + 0xc8], 1 */ W32((u32)(r_ebp+0xc8u), 0x1u);
    /* 00672d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d54: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
L_00672d55:; BB(0x00672d55);
    /* 00672d55: call 0x671024 */ r_esp -= 4; W32(r_esp, 0x672d5au); f_00671024();
    /* 00672d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672d5c: je 0x672d68 */ if (fZ) goto L_00672d68;
L_00672d5e:; BB(0x00672d5e);
    /* 00672d5e: mov dword ptr [ebp + 0xc8], 2 */ W32((u32)(r_ebp+0xc8u), 0x2u);
L_00672d68:; BB(0x00672d68);
    /* 00672d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d69: ret  */ FN_RET(0x00672cb8); r_esp += 4; return;
}

void f_00672d6c(void) /* sub_672D6C */
{
    FN_ENTER(0x00672d6c);
    /* 00672d6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00672d6d: mov esi, ecx */ r_esi = r_ecx;
    /* 00672d6f: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00672d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672d77: jne 0x672d7b */ if (!fZ) goto L_00672d7b;
L_00672d79:; BB(0x00672d79);
    /* 00672d79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00672d7a: ret  */ FN_RET(0x00672d6c); r_esp += 4; return;
L_00672d7b:; BB(0x00672d7b);
    /* 00672d7b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x672d80u); f_0082dbac();
    /* 00672d80: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00672d83: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x672d88u); f_00829cc8();
    /* 00672d88: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x672d8du); f_0082d7b0();
    /* 00672d8d: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00672d90: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x672d95u); f_0082d838();
    /* 00672d95: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00672d98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672d9a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x672d9fu); f_0082d8bc();
    /* 00672d9f: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00672da5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672da8: je 0x672dbe */ if (fZ) goto L_00672dbe;
L_00672daa:; BB(0x00672daa);
    /* 00672daa: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00672db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672db1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672db3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00672db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672db9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x672dbeu); f_0082fa0c();
L_00672dbe:; BB(0x00672dbe);
    /* 00672dbe: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00672dc1: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x672dc6u); f_00831758();
    /* 00672dc6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x672dcbu); f_0082da80();
    /* 00672dcb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x672dd0u); f_0082dab0();
    /* 00672dd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00672dd1: ret  */ FN_RET(0x00672d6c); r_esp += 4; return;
}

void f_00672dd4(void) /* sub_672DD4 */
{
    FN_ENTER(0x00672dd4);
    /* 00672dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672dd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00672dd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672dd9: push 0x8e93a4 */ { u32 v = 0x8e93a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672dde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672de5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672dec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672def: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672df2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672df5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672df8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672dfb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00672e07: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x672e0cu); f_008581c5();
    /* 00672e0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672e0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672e10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672e12: je 0x672e53 */ if (fZ) goto L_00672e53;
L_00672e14:; BB(0x00672e14);
    /* 00672e14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00672e1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672e22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672e25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00672e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672e28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672e29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672e2a: push 0x9c97cc */ { u32 v = 0x9c97ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00672e2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e31: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x672e36u); f_005b7a84();
    /* 00672e36: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672e39: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00672e40:; BB(0x00672e40);
    /* 00672e40: mov dword ptr [0xa8fe14], eax */ W32((u32)(0xa8fe14u), r_eax);
    /* 00672e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672e4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00672e51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672e52: ret  */ FN_RET(0x00672dd4); r_esp += 4; return;
L_00672e53:; BB(0x00672e53);
    /* 00672e53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672e55: jmp 0x672e40 */ goto L_00672e40;
}

void f_00672e58(void) /* sub_672E58 */
{
    FN_ENTER(0x00672e58);
    /* 00672e58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672e59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00672e5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00672e5d: call 0x672e7c */ r_esp -= 4; W32(r_esp, 0x672e62u); f_00672e7c();
    /* 00672e62: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00672e66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672e68: jne 0x672e6e */ if (!fZ) goto L_00672e6e;
L_00672e6a:; BB(0x00672e6a);
    /* 00672e6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672e6b: ret 4 */ FN_RET(0x00672e58); r_esp += 8; return;
L_00672e6e:; BB(0x00672e6e);
    /* 00672e6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00672e6f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x672e74u); f_005c2f74();
    /* 00672e74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672e75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00672e76: ret 4 */ FN_RET(0x00672e58); r_esp += 8; return;
}

void f_00672e7c(void) /* sub_672E7C */
{
    FN_ENTER(0x00672e7c);
    /* 00672e7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672e7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00672e7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672e81: push 0x8e93c0 */ { u32 v = 0x8e93c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672e86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672e8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672e94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672e97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672e9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672e9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672ea0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672ea3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00672ea6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672ea9: mov dword ptr [ecx], 0xb360f0 */ W32((u32)(r_ecx), 0xb360f0u);
    /* 00672eaf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00672eb6: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x672ebbu); f_006131f4();
    /* 00672ebb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672ebe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672ec5: mov esp, ebp */ r_esp = r_ebp;
    /* 00672ec7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672ec8: ret  */ FN_RET(0x00672e7c); r_esp += 4; return;
}

void f_00672ecc(void) /* sub_672ECC */
{
    FN_ENTER(0x00672ecc);
    /* 00672ecc: mov ecx, dword ptr [0xa8fe24] */ r_ecx = R32((u32)(0xa8fe24u));
    /* 00672ed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672ed4: je 0x672ee9 */ if (fZ) goto L_00672ee9;
L_00672ed6:; BB(0x00672ed6);
    /* 00672ed6: je 0x672edf */ if (fZ) goto L_00672edf;
L_00672ed8:; BB(0x00672ed8);
    /* 00672ed8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672eda: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x672edfu); f_004066a8();
L_00672edf:; BB(0x00672edf);
    /* 00672edf: mov dword ptr [0xa8fe24], 0 */ W32((u32)(0xa8fe24u), 0x0u);
L_00672ee9:; BB(0x00672ee9);
    /* 00672ee9: ret  */ FN_RET(0x00672ecc); r_esp += 4; return;
}

void f_00672eec(void)
{
    FN_ENTER(0x00672eec);
    /* 00672eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672eed: mov ebp, esp */ r_ebp = r_esp;
    /* 00672eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672ef1: push 0x8e93e8 */ { u32 v = 0x8e93e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672f04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672f0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00672f0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00672f10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00672f13: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672f18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00672f1f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x672f24u); f_005caba4();
    /* 00672f24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672f25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672f28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672f2a: je 0x672f63 */ if (fZ) goto L_00672f63;
L_00672f2c:; BB(0x00672f2c);
    /* 00672f2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00672f33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672f3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672f3d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672f43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672f46: call 0x672f68 */ r_esp -= 4; W32(r_esp, 0x672f4bu); f_00672f68();
    /* 00672f4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672f4e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00672f55:; BB(0x00672f55);
    /* 00672f55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672f58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672f5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00672f61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672f62: ret  */ FN_RET(0x00672eec); r_esp += 4; return;
L_00672f63:; BB(0x00672f63);
    /* 00672f63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672f65: jmp 0x672f55 */ goto L_00672f55;
}

void f_00672f68(void) /* sub_672F68 */
{
    FN_ENTER(0x00672f68);
    /* 00672f68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672f69: mov ebp, esp */ r_ebp = r_esp;
    /* 00672f6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672f6d: push 0x8e9404 */ { u32 v = 0x8e9404u; r_esp -= 4; W32(r_esp, v); }
    /* 00672f72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672f79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00672f80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672f83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00672f86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00672f89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00672f8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00672f8f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00672f92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00672f95: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00672f98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672f9b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x672fa0u); f_006132e4();
    /* 00672fa0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00672fa7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672faa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672fad: mov dword ptr [ecx], 0xb360f0 */ W32((u32)(r_ecx), 0xb360f0u);
    /* 00672fb3: mov eax, dword ptr [0x9c97f8] */ r_eax = R32((u32)(0x9c97f8u));
    /* 00672fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00672fb9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00672fbc: call dword ptr [0xb36104] */ { u32 t = R32((u32)(0xb36104u)); r_esp -= 4; W32(r_esp, 0x672fc2u); call_ind(t); }
    /* 00672fc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672fc5: call 0x67300c */ r_esp -= 4; W32(r_esp, 0x672fcau); f_0067300c();
    /* 00672fca: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672fcd: mov edx, dword ptr [0xa8fe24] */ r_edx = R32((u32)(0xa8fe24u));
    /* 00672fd3: mov edi, dword ptr [0xa8fe20] */ r_edi = R32((u32)(0xa8fe20u));
    /* 00672fd9: mov dword ptr [ebx + 0xcc], 0x3f800000 */ W32((u32)(r_ebx+0xccu), 0x3f800000u);
    /* 00672fe3: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00672fe9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00672fec: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00672fef: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 00672ff2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672ff5: mov eax, ebx */ r_eax = r_ebx;
    /* 00672ff7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672ffa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672ffd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673004: mov esp, ebp */ r_esp = r_ebp;
    /* 00673006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673007: ret 8 */ FN_RET(0x00672f68); r_esp += 12; return;
}

void f_00672fe8(void)
{
    FN_ENTER(0x00672fe8);
    /* 00672fe8: add byte ptr [ebx + 0x43890841], cl */ { u32 ad = (u32)(r_ebx+0x43890841u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00672fee: xor al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00672ff0: jnp 0x673016 */ if (!fP) goto L_00673016;
L_00672ff2:; BB(0x00672ff2);
    /* 00672ff2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672ff5: mov eax, ebx */ r_eax = r_ebx;
    /* 00672ff7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672ffa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672ffd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673004: mov esp, ebp */ r_esp = r_ebp;
    /* 00673006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673007: ret 8 */ FN_RET(0x00672fe8); r_esp += 12; return;
L_00673016:; BB(0x00673016);
    /* 00673016: sar byte ptr [edi + 0xc], 0xc7 */ { u32 ad = (u32)(r_edi+0xcu); u32 c = (7u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r); fC = ((i8)a >> ((c > 7 ? 7 : c - 1))) & 1; } }
    /* 0067301a: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0067301d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067301f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00673021: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00673023: jmp 0x67302f */ goto L_0067302f;
L_0067302f:; BB(0x0067302f);
    /* 0067302f: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x673034u); f_00670fb8();
    /* 00673034: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067303a: jne 0x673048 */ if (!fZ) goto L_00673048;
L_0067303c:; BB(0x0067303c);
    /* 0067303c: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00673046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673047: ret  */ FN_RET(0x00672fe8); r_esp += 4; return;
L_00673048:; BB(0x00673048);
    /* 00673048: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00673052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673053: ret  */ FN_RET(0x00672fe8); r_esp += 4; return;
}

