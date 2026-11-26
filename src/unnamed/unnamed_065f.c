#include "protos.h"

void f_0065f170(void) /* sub_65F170 */
{
    FN_ENTER(0x0065f170);
    /* 0065f170: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f171: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065f173: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065f175: call 0x65f194 */ r_esp -= 4; W32(r_esp, 0x65f17au); f_0065f194();
    /* 0065f17a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065f17e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065f180: jne 0x65f186 */ if (!fZ) goto L_0065f186;
L_0065f182:; BB(0x0065f182);
    /* 0065f182: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f183: ret 4 */ FN_RET(0x0065f170); r_esp += 8; return;
L_0065f186:; BB(0x0065f186);
    /* 0065f186: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f187: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65f18cu); f_005c2f74();
    /* 0065f18c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f18d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f18e: ret 4 */ FN_RET(0x0065f170); r_esp += 8; return;
}

void f_0065f194(void) /* sub_65F194 */
{
    FN_ENTER(0x0065f194);
    /* 0065f194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f195: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f197: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f199: push 0x8e7b28 */ { u32 v = 0x8e7b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f19e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f1a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f1ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f1af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065f1b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065f1b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065f1b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065f1bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065f1be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f1c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f1c8: mov dword ptr [eax], 0xb334d8 */ W32((u32)(r_eax), 0xb334d8u);
    /* 0065f1ce: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1d1: call 0x81139c */ r_esp -= 4; W32(r_esp, 0x65f1d6u); f_0081139c();
    /* 0065f1d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f1d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065f1e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f1e3: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x65f1e8u); f_007ba1f0();
    /* 0065f1e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f1eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f1f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f1f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f1f5: ret  */ FN_RET(0x0065f194); r_esp += 4; return;
}

void f_0065f1f8(void) /* sub_65F1F8 */
{
    FN_ENTER(0x0065f1f8);
    /* 0065f1f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1fc: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f1ff: mov esi, ecx */ r_esi = r_ecx;
    /* 0065f201: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0065f204: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0065f209: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f20f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f210: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x65f215u); f_0078ea2c();
    /* 0065f215: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f218: fcomp dword ptr [0x938e34] */ fx_compare(ST(0), R_F32((u32)(0x938e34u))); FPOP();
    /* 0065f21e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f220: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f221: ja 0x65f6de */ if ((!fC&&!fZ)) goto L_0065f6de;
L_0065f227:; BB(0x0065f227);
    /* 0065f227: mov edx, dword ptr [0xa9d46c] */ r_edx = R32((u32)(0xa9d46cu));
    /* 0065f22d: mov edi, dword ptr [0xa9d470] */ r_edi = R32((u32)(0xa9d470u));
    /* 0065f233: mov eax, dword ptr [0xa9d474] */ r_eax = R32((u32)(0xa9d474u));
    /* 0065f238: fld dword ptr [0x938e30] */ FPUSH(R_F32((u32)(0x938e30u)));
    /* 0065f23e: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0065f241: mov dword ptr [esi + 0xd8], edx */ W32((u32)(r_esi+0xd8u), r_edx);
    /* 0065f247: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0065f24e: mov dword ptr [esi + 0xdc], edi */ W32((u32)(r_esi+0xdcu), r_edi);
    /* 0065f254: mov edi, dword ptr [esi + 0x68] */ r_edi = R32((u32)(r_esi+0x68u));
    /* 0065f257: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 0065f25d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f25f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f261: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f263: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0065f26b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065f26d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f26e: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 0065f276: jb 0x65f292 */ if (fC) goto L_0065f292;
L_0065f278:; BB(0x0065f278);
    /* 0065f278: fld dword ptr [0x938e2c] */ FPUSH(R_F32((u32)(0x938e2cu)));
    /* 0065f27e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f280: fstp dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0)); FPOP();
    /* 0065f286: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065f28b: mov edx, 1 */ r_edx = 0x1u;
    /* 0065f290: jmp 0x65f29a */ goto L_0065f29a;
L_0065f292:; BB(0x0065f292);
    /* 0065f292: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f294: mov dword ptr [esi + 0xb0], edi */ W32((u32)(r_esi+0xb0u), r_edi);
L_0065f29a:; BB(0x0065f29a);
    /* 0065f29a: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0065f29d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f29f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f2a1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f2a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f2a5: mov edi, dword ptr [esi + 0x6c] */ r_edi = R32((u32)(r_esi+0x6cu));
    /* 0065f2a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f2a9: jb 0x65f2c4 */ if (fC) goto L_0065f2c4;
L_0065f2ab:; BB(0x0065f2ab);
    /* 0065f2ab: fld dword ptr [0x938e2c] */ FPUSH(R_F32((u32)(0x938e2cu)));
    /* 0065f2b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f2b3: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 0065f2b9: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f2bc: mov dword ptr [esi + 0xa0], ecx */ W32((u32)(r_esi+0xa0u), r_ecx);
    /* 0065f2c2: jmp 0x65f2d2 */ goto L_0065f2d2;
L_0065f2c4:; BB(0x0065f2c4);
    /* 0065f2c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f2c6: mov dword ptr [esi + 0xa0], edx */ W32((u32)(r_esi+0xa0u), r_edx);
    /* 0065f2cc: mov dword ptr [esi + 0xb4], edi */ W32((u32)(r_esi+0xb4u), r_edi);
L_0065f2d2:; BB(0x0065f2d2);
    /* 0065f2d2: mov eax, dword ptr [esi + 0x70] */ r_eax = R32((u32)(r_esi+0x70u));
    /* 0065f2d5: mov edi, dword ptr [esi + 0x84] */ r_edi = R32((u32)(r_esi+0x84u));
    /* 0065f2db: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 0065f2e1: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0065f2e8: mov edx, edi */ r_edx = r_edi;
    /* 0065f2ea: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0065f2ed: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0065f2f1: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0065f2f5: fmul dword ptr [0x938e28] */ ST(0) = ST(0) * R_F32((u32)(0x938e28u));
    /* 0065f2fb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0065f2ff: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0065f303: fmul qword ptr [0x938df0] */ ST(0) = ST(0) * R_F64((u32)(0x938df0u));
    /* 0065f309: fadd qword ptr [0x938df8] */ ST(0) = ST(0) + R_F64((u32)(0x938df8u));
    /* 0065f30f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f311: fstp dword ptr [esi + 0x98] */ W_F32((u32)(r_esi+0x98u), ST(0)); FPOP();
    /* 0065f317: fstp dword ptr [esi + 0xa8] */ W_F32((u32)(r_esi+0xa8u), ST(0)); FPOP();
    /* 0065f31d: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 0065f320: mov dword ptr [esi + 0xa4], edx */ W32((u32)(r_esi+0xa4u), r_edx);
    /* 0065f326: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0065f329: je 0x65f33d */ if (fZ) goto L_0065f33d;
L_0065f32b:; BB(0x0065f32b);
    /* 0065f32b: add dword ptr [esi + 0x8c], edx */ { u32 ad = (u32)(r_esi+0x8cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065f331: mov dword ptr [esi + 0x94], 0 */ W32((u32)(r_esi+0x94u), 0x0u);
    /* 0065f33b: jmp 0x65f37d */ goto L_0065f37d;
L_0065f33d:; BB(0x0065f33d);
    /* 0065f33d: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0065f340: je 0x65f37d */ if (fZ) goto L_0065f37d;
L_0065f342:; BB(0x0065f342);
    /* 0065f342: mov ecx, dword ptr [esi + 0x9c] */ r_ecx = R32((u32)(r_esi+0x9cu));
    /* 0065f348: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f34a: mov dword ptr [esi + 0x9c], ecx */ W32((u32)(r_esi+0x9cu), r_ecx);
    /* 0065f350: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x65f355u); f_0082dcbc();
    /* 0065f355: fld dword ptr [0x938e24] */ FPUSH(R_F32((u32)(0x938e24u)));
    /* 0065f35b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065f35d: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0065f361: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0065f366: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065f36b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0065f36f: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0065f373: fistp dword ptr [esi + 0x94] */ W32((u32)(r_esi+0x94u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065f379: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
L_0065f37d:; BB(0x0065f37d);
    /* 0065f37d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0065f382: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x65f387u); f_0082d990();
    /* 0065f387: fild dword ptr [esi + 0x94] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x94u)));
    /* 0065f38d: fmul dword ptr [0x938e20] */ ST(0) = ST(0) * R_F32((u32)(0x938e20u));
    /* 0065f393: fdiv dword ptr [0x938e1c] */ ST(0) = ST(0) / R_F32((u32)(0x938e1cu));
    /* 0065f399: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0065f39d: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0065f3a2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065f3a7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0065f3ab: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0065f3af: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0065f3b3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0065f3b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f3b9: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0065f3bd: add edx, dword ptr [esi + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065f3c3: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x65f3c8u); f_00830c04();
    /* 0065f3c8: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 0065f3ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f3d0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65f3d5u); f_0082d8bc();
    /* 0065f3d5: lea edi, [esi + 0xcc] */ r_edi = (u32)(r_esi+0xccu);
    /* 0065f3db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3dc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0065f3e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f3e2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x65f3e7u); f_00830aa0();
    /* 0065f3e7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065f3ec: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x65f3f1u); f_0082eb80();
    /* 0065f3f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0065f3f3: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x65f3f8u); f_0083173c();
    /* 0065f3f8: fld dword ptr [0x938e18] */ FPUSH(R_F32((u32)(0x938e18u)));
    /* 0065f3fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f400: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0065f402: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f404: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f405: je 0x65f456 */ if (fZ) goto L_0065f456;
L_0065f407:; BB(0x0065f407);
    /* 0065f407: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f409: mov ecx, edi */ r_ecx = r_edi;
    /* 0065f40b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x65f410u); f_0082df08();
    /* 0065f410: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f412: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0065f417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f419: jne 0x65f431 */ if (!fZ) goto L_0065f431;
L_0065f41b:; BB(0x0065f41b);
    /* 0065f41b: fld dword ptr [0x938e18] */ FPUSH(R_F32((u32)(0x938e18u)));
    /* 0065f421: fld dword ptr [esi + 0xd4] */ FPUSH(R_F32((u32)(r_esi+0xd4u)));
    /* 0065f427: fchs  */ ST(0) = -ST(0);
    /* 0065f429: fstp dword ptr [esi + 0xd4] */ W_F32((u32)(r_esi+0xd4u), ST(0)); FPOP();
    /* 0065f42f: jmp 0x65f456 */ goto L_0065f456;
L_0065f431:; BB(0x0065f431);
    /* 0065f431: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x65f436u); f_00807d60();
    /* 0065f436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f438: jne 0x65f450 */ if (!fZ) goto L_0065f450;
L_0065f43a:; BB(0x0065f43a);
    /* 0065f43a: fld dword ptr [0x938e18] */ FPUSH(R_F32((u32)(0x938e18u)));
    /* 0065f440: fld dword ptr [esi + 0xd4] */ FPUSH(R_F32((u32)(r_esi+0xd4u)));
    /* 0065f446: fchs  */ ST(0) = -ST(0);
    /* 0065f448: fstp dword ptr [esi + 0xd4] */ W_F32((u32)(r_esi+0xd4u), ST(0)); FPOP();
    /* 0065f44e: jmp 0x65f456 */ goto L_0065f456;
L_0065f450:; BB(0x0065f450);
    /* 0065f450: fld dword ptr [0x938e18] */ FPUSH(R_F32((u32)(0x938e18u)));
L_0065f456:; BB(0x0065f456);
    /* 0065f456: fcomp dword ptr [esi + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x98u))); FPOP();
    /* 0065f45c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f45e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f45f: je 0x65f6f3 */ if (fZ) goto L_0065f6f3;
L_0065f465:; BB(0x0065f465);
    /* 0065f465: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0065f46b: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 0065f470: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f472: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f474: jge 0x65f5b1 */ if ((fS==fO)) goto L_0065f5b1;
L_0065f47a:; BB(0x0065f47a);
    /* 0065f47a: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 0065f481: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f483: je 0x65f5a6 */ if (fZ) goto L_0065f5a6;
L_0065f489:; BB(0x0065f489);
    /* 0065f489: movsx edx, word ptr [esi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 0065f48d: cmp dx, word ptr [ebp + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0065f491: jne 0x65f5a6 */ if (!fZ) goto L_0065f5a6;
L_0065f497:; BB(0x0065f497);
    /* 0065f497: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f498: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0065f49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f49c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x65f4a1u); f_007a9180();
    /* 0065f4a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f4a4: fld dword ptr [esi + 0x98] */ FPUSH(R_F32((u32)(r_esi+0x98u)));
    /* 0065f4aa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065f4ac: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f4ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f4b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f4b1: jb 0x65f597 */ if (fC) goto L_0065f597;
L_0065f4b7:; BB(0x0065f4b7);
    /* 0065f4b7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0065f4b9: fld dword ptr [0x938e14] */ FPUSH(R_F32((u32)(0x938e14u)));
    /* 0065f4bf: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0065f4c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f4c3: fmul dword ptr [esi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xa8u));
    /* 0065f4c9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f4cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f4cd: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0065f4d3: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0065f4d9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f4db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f4dc: fld dword ptr [esi + 0xc4] */ FPUSH(R_F32((u32)(r_esi+0xc4u)));
    /* 0065f4e2: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0065f4e8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f4ea: fld dword ptr [esi + 0xc8] */ FPUSH(R_F32((u32)(r_esi+0xc8u)));
    /* 0065f4f0: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0065f4f6: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f4f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f4f9: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0065f4fb: jbe 0x65f4ff */ if ((fC||fZ)) goto L_0065f4ff;
L_0065f4fd:; BB(0x0065f4fd);
    /* 0065f4fd: fst st(6) */ ST(6) = ST(0);
L_0065f4ff:; BB(0x0065f4ff);
    /* 0065f4ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f501: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065f503: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0065f505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f507: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0065f509: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0065f50b: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0065f50d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065f50f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f511: fstp dword ptr [esi + 0xf4] */ W_F32((u32)(r_esi+0xf4u), ST(0)); FPOP();
    /* 0065f517: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0065f519: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f51b: fstp dword ptr [esi + 0xf8] */ W_F32((u32)(r_esi+0xf8u), ST(0)); FPOP();
    /* 0065f521: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f523: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065f525: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 0065f52b: fld dword ptr [esi + 0xcc] */ FPUSH(R_F32((u32)(r_esi+0xccu)));
    /* 0065f531: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065f533: fstp dword ptr [esi + 0xfc] */ W_F32((u32)(r_esi+0xfcu), ST(0)); FPOP();
    /* 0065f539: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0065f53b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f53d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0065f53f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f541: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065f543: fld dword ptr [esi + 0xdc] */ FPUSH(R_F32((u32)(r_esi+0xdcu)));
    /* 0065f549: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f54b: fstp dword ptr [esi + 0xe4] */ W_F32((u32)(r_esi+0xe4u), ST(0)); FPOP();
    /* 0065f551: fld dword ptr [esi + 0xd0] */ FPUSH(R_F32((u32)(r_esi+0xd0u)));
    /* 0065f557: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0065f559: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065f55b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065f55d: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 0065f563: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f565: fstp dword ptr [esi + 0xe8] */ W_F32((u32)(r_esi+0xe8u), ST(0)); FPOP();
    /* 0065f56b: fld dword ptr [esi + 0xd4] */ FPUSH(R_F32((u32)(r_esi+0xd4u)));
    /* 0065f571: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0065f573: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065f575: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f577: fstp dword ptr [esi + 0xec] */ W_F32((u32)(r_esi+0xecu), ST(0)); FPOP();
    /* 0065f57d: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0065f581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f582: call 0x794388 */ r_esp -= 4; W32(r_esp, 0x65f587u); f_00794388();
    /* 0065f587: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f58a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0065f58f: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f595: jmp 0x65f5a6 */ goto L_0065f5a6;
L_0065f597:; BB(0x0065f597);
    /* 0065f597: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0065f599: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f59b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0065f5a0: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0065f5a6:; BB(0x0065f5a6);
    /* 0065f5a6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065f5a9: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f5ab: jl 0x65f47a */ if ((fS!=fO)) goto L_0065f47a;
L_0065f5b1:; BB(0x0065f5b1);
    /* 0065f5b1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0065f5b3:; BB(0x0065f5b3);
    /* 0065f5b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f5b4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65f5b9u); f_0068d5a8();
    /* 0065f5b9: mov ebp, eax */ r_ebp = r_eax;
    /* 0065f5bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f5be: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f5c0: je 0x65f6ca */ if (fZ) goto L_0065f6ca;
L_0065f5c6:; BB(0x0065f5c6);
    /* 0065f5c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f5c7: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0065f5ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f5cb: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x65f5d0u); f_007a9180();
    /* 0065f5d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f5d3: fld dword ptr [esi + 0x98] */ FPUSH(R_F32((u32)(r_esi+0x98u)));
    /* 0065f5d9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065f5db: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f5dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f5df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f5e0: jb 0x65f6c6 */ if (fC) goto L_0065f6c6;
L_0065f5e6:; BB(0x0065f5e6);
    /* 0065f5e6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0065f5e8: fld dword ptr [0x938e14] */ FPUSH(R_F32((u32)(0x938e14u)));
    /* 0065f5ee: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0065f5f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f5f2: fmul dword ptr [esi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xa8u));
    /* 0065f5f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065f5fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065f5fc: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0065f602: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0065f608: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f60a: fld dword ptr [esi + 0xc4] */ FPUSH(R_F32((u32)(r_esi+0xc4u)));
    /* 0065f610: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0065f616: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f618: fld dword ptr [esi + 0xc8] */ FPUSH(R_F32((u32)(r_esi+0xc8u)));
    /* 0065f61e: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0065f624: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065f626: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065f627: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0065f629: jbe 0x65f62d */ if ((fC||fZ)) goto L_0065f62d;
L_0065f62b:; BB(0x0065f62b);
    /* 0065f62b: fst st(6) */ ST(6) = ST(0);
L_0065f62d:; BB(0x0065f62d);
    /* 0065f62d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065f62f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065f631: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0065f633: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f635: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0065f637: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0065f639: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0065f63b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065f63d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f63f: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 0065f645: fld dword ptr [esi + 0xcc] */ FPUSH(R_F32((u32)(r_esi+0xccu)));
    /* 0065f64b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f64d: fstp dword ptr [esi + 0xf4] */ W_F32((u32)(r_esi+0xf4u), ST(0)); FPOP();
    /* 0065f653: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f655: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0065f657: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065f659: fstp dword ptr [esi + 0xf8] */ W_F32((u32)(r_esi+0xf8u), ST(0)); FPOP();
    /* 0065f65f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f661: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0065f663: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065f665: fstp dword ptr [esi + 0xfc] */ W_F32((u32)(r_esi+0xfcu), ST(0)); FPOP();
    /* 0065f66b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065f66d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0065f66f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065f671: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065f673: fld dword ptr [esi + 0xdc] */ FPUSH(R_F32((u32)(r_esi+0xdcu)));
    /* 0065f679: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f67b: fstp dword ptr [esi + 0xe4] */ W_F32((u32)(r_esi+0xe4u), ST(0)); FPOP();
    /* 0065f681: fld dword ptr [esi + 0xd0] */ FPUSH(R_F32((u32)(r_esi+0xd0u)));
    /* 0065f687: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0065f689: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065f68b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065f68d: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 0065f693: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065f695: fstp dword ptr [esi + 0xe8] */ W_F32((u32)(r_esi+0xe8u), ST(0)); FPOP();
    /* 0065f69b: fld dword ptr [esi + 0xd4] */ FPUSH(R_F32((u32)(r_esi+0xd4u)));
    /* 0065f6a1: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0065f6a3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065f6a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065f6a7: fstp dword ptr [esi + 0xec] */ W_F32((u32)(r_esi+0xecu), ST(0)); FPOP();
    /* 0065f6ad: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x65f6b2u); f_0080a640();
    /* 0065f6b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f6b4: jne 0x65f6ca */ if (!fZ) goto L_0065f6ca;
L_0065f6b6:; BB(0x0065f6b6);
    /* 0065f6b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065f6b7: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0065f6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f6bc: call 0x794388 */ r_esp -= 4; W32(r_esp, 0x65f6c1u); f_00794388();
    /* 0065f6c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f6c4: jmp 0x65f6ca */ goto L_0065f6ca;
L_0065f6c6:; BB(0x0065f6c6);
    /* 0065f6c6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0065f6c8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0065f6ca:; BB(0x0065f6ca);
    /* 0065f6ca: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065f6cd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f6d0: jl 0x65f5b3 */ if ((fS!=fO)) goto L_0065f5b3;
L_0065f6d6:; BB(0x0065f6d6);
    /* 0065f6d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065f6d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f6da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f6db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065f6dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065f6dd: ret  */ FN_RET(0x0065f1f8); r_esp += 4; return;
L_0065f6de:; BB(0x0065f6de);
    /* 0065f6de: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0065f6e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065f6e7: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0065f6eb: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065f6ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f6ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f6f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065f6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065f6f2: ret  */ FN_RET(0x0065f1f8); r_esp += 4; return;
L_0065f6f3:; BB(0x0065f6f3);
    /* 0065f6f3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065f6f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f6f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f6f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065f6f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065f6fa: ret  */ FN_RET(0x0065f1f8); r_esp += 4; return;
}

void f_0065f6fc(void)
{
    FN_ENTER(0x0065f6fc);
    /* 0065f6fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f6fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f6ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f701: push 0x8e7b50 */ { u32 v = 0x8e7b50u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f706: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f70d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f714: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f717: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065f71a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065f71d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065f720: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065f723: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f728: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065f72f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65f734u); f_005caba4();
    /* 0065f734: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f735: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065f738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f73a: je 0x65f773 */ if (fZ) goto L_0065f773;
L_0065f73c:; BB(0x0065f73c);
    /* 0065f73c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065f743: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f74a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f74d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f753: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f756: call 0x65f778 */ r_esp -= 4; W32(r_esp, 0x65f75bu); f_0065f778();
    /* 0065f75b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f75e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065f765:; BB(0x0065f765);
    /* 0065f765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f76f: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f772: ret  */ FN_RET(0x0065f6fc); r_esp += 4; return;
L_0065f773:; BB(0x0065f773);
    /* 0065f773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065f775: jmp 0x65f765 */ goto L_0065f765;
}

void f_0065f778(void) /* sub_65F778 */
{
    FN_ENTER(0x0065f778);
    /* 0065f778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f779: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f77b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f77d: push 0x8e7b6c */ { u32 v = 0x8e7b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f790: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065f796: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065f799: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065f79c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065f79f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065f7a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f7a5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065f7a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065f7ab: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x65f7b0u); f_007ba278();
    /* 0065f7b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f7b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065f7ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f7bd: mov dword ptr [ecx], 0xb334d8 */ W32((u32)(r_ecx), 0xb334d8u);
    /* 0065f7c3: mov eax, dword ptr [0x9c8728] */ r_eax = R32((u32)(0x9c8728u));
    /* 0065f7c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f7c9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065f7cc: call dword ptr [0xb334ec] */ { u32 t = R32((u32)(0xb334ecu)); r_esp -= 4; W32(r_esp, 0x65f7d2u); call_ind(t); }
    /* 0065f7d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065f7d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f7d8: mov edi, dword ptr [0xa9d484] */ r_edi = R32((u32)(0xa9d484u));
    /* 0065f7de: mov esi, dword ptr [0xa9d488] */ r_esi = R32((u32)(0xa9d488u));
    /* 0065f7e4: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0065f7e8: mov ebx, dword ptr [0xa9d48c] */ r_ebx = R32((u32)(0xa9d48cu));
    /* 0065f7ee: mov edx, dword ptr [0xa9d490] */ r_edx = R32((u32)(0xa9d490u));
    /* 0065f7f4: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0065f7fe: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
    /* 0065f804: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
    /* 0065f80e: mov dword ptr [eax + 0xbc], edi */ W32((u32)(r_eax+0xbcu), r_edi);
    /* 0065f814: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f817: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 0065f821: mov dword ptr [eax + 0xc0], esi */ W32((u32)(r_eax+0xc0u), r_esi);
    /* 0065f827: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065f82a: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 0065f834: mov dword ptr [eax + 0xc4], ebx */ W32((u32)(r_eax+0xc4u), r_ebx);
    /* 0065f83a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f83d: mov dword ptr [eax + 0xf0], 0x3f000000 */ W32((u32)(r_eax+0xf0u), 0x3f000000u);
    /* 0065f847: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0065f84d: mov edx, dword ptr [0xa9d46c] */ r_edx = R32((u32)(0xa9d46cu));
    /* 0065f853: mov dword ptr [eax + 0xf4], 0 */ W32((u32)(r_eax+0xf4u), 0x0u);
    /* 0065f85d: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0065f863: mov edx, dword ptr [0xa9d470] */ r_edx = R32((u32)(0xa9d470u));
    /* 0065f869: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0065f873: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 0065f879: mov edx, dword ptr [0xa9d474] */ r_edx = R32((u32)(0xa9d474u));
    /* 0065f87f: mov dword ptr [eax + 0xfc], 0 */ W32((u32)(r_eax+0xfcu), 0x0u);
    /* 0065f889: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0065f88f: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0065f893: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065f899: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0065f89d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f8a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f8a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f8a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f8aa: ret 8 */ FN_RET(0x0065f778); r_esp += 12; return;
}

void f_0065f8b0(void) /* sub_65F8B0 */
{
    FN_ENTER(0x0065f8b0);
    /* 0065f8b0: mov dword ptr [0xa8fa0c], 0x3f800000 */ W32((u32)(0xa8fa0cu), 0x3f800000u);
    /* 0065f8ba: mov dword ptr [0xa8fa10], 0x41000000 */ W32((u32)(0xa8fa10u), 0x41000000u);
    /* 0065f8c4: mov dword ptr [0xa8fa14], 0x3fc00000 */ W32((u32)(0xa8fa14u), 0x3fc00000u);
    /* 0065f8ce: ret  */ FN_RET(0x0065f8b0); r_esp += 4; return;
}

void f_0065f8d0(void) /* sub_65F8D0 */
{
    FN_ENTER(0x0065f8d0);
    /* 0065f8d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065f8d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065f8d5: call 0x65f8f4 */ r_esp -= 4; W32(r_esp, 0x65f8dau); f_0065f8f4();
    /* 0065f8da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065f8de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065f8e0: jne 0x65f8e6 */ if (!fZ) goto L_0065f8e6;
L_0065f8e2:; BB(0x0065f8e2);
    /* 0065f8e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f8e3: ret 4 */ FN_RET(0x0065f8d0); r_esp += 8; return;
L_0065f8e6:; BB(0x0065f8e6);
    /* 0065f8e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65f8ecu); f_005c2f74();
    /* 0065f8ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f8ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065f8ee: ret 4 */ FN_RET(0x0065f8d0); r_esp += 8; return;
}

void f_0065f8f4(void) /* sub_65F8F4 */
{
    FN_ENTER(0x0065f8f4);
    /* 0065f8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8f9: push 0x8e7b88 */ { u32 v = 0x8e7b88u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f90c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065f912: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065f915: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065f918: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065f91b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065f91e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f925: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f928: mov dword ptr [eax], 0xb33580 */ W32((u32)(r_eax), 0xb33580u);
    /* 0065f92e: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 0065f934: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f936: je 0x65f941 */ if (fZ) goto L_0065f941;
L_0065f938:; BB(0x0065f938);
    /* 0065f938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f939: call 0x7a7bc8 */ r_esp -= 4; W32(r_esp, 0x65f93eu); f_007a7bc8();
    /* 0065f93e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0065f941:; BB(0x0065f941);
    /* 0065f941: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065f948: mov ecx, eax */ r_ecx = r_eax;
    /* 0065f94a: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65f94fu); f_007b4aec();
    /* 0065f94f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f952: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f959: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f95b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f95c: ret  */ FN_RET(0x0065f8f4); r_esp += 4; return;
}

void f_0065f960(void) /* sub_65F960 */
{
    FN_ENTER(0x0065f960);
    /* 0065f960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f961: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f965: push 0x8e7bb0 */ { u32 v = 0x8e7bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f96a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f971: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f978: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f97b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065f97e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065f981: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065f984: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065f987: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f98c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0065f993: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65f998u); f_005caba4();
    /* 0065f998: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065f99b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f99e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065f9a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f9a3: je 0x65f9db */ if (fZ) goto L_0065f9db;
L_0065f9a5:; BB(0x0065f9a5);
    /* 0065f9a5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0065f9ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f9b3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f9b6: push dword ptr [0xaab3f0] */ { u32 v = R32((u32)(0xaab3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f9bc: mov ecx, eax */ r_ecx = r_eax;
    /* 0065f9be: call 0x65f9e4 */ r_esp -= 4; W32(r_esp, 0x65f9c3u); f_0065f9e4();
    /* 0065f9c3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065f9ca:; BB(0x0065f9ca);
    /* 0065f9ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f9d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f9d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f9d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f9da: ret  */ FN_RET(0x0065f960); r_esp += 4; return;
L_0065f9db:; BB(0x0065f9db);
    /* 0065f9db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065f9dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065f9e0: jmp 0x65f9ca */ goto L_0065f9ca;
}

void f_0065f9e4(void) /* sub_65F9E4 */
{
    FN_ENTER(0x0065f9e4);
    /* 0065f9e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f9e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9e9: push 0x8e7bcc */ { u32 v = 0x8e7bccu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065f9f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065f9fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f9ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065fa02: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065fa05: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065fa08: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065fa0b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065fa0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065fa11: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065fa14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065fa17: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65fa1cu); f_007b4b48();
    /* 0065fa1c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065fa23: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fa26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa29: mov dword ptr [ecx], 0xb33580 */ W32((u32)(r_ecx), 0xb33580u);
    /* 0065fa2f: mov eax, dword ptr [0x9ff9a8] */ r_eax = R32((u32)(0x9ff9a8u));
    /* 0065fa34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa35: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065fa38: call dword ptr [0xb33594] */ { u32 t = R32((u32)(0xb33594u)); r_esp -= 4; W32(r_esp, 0x65fa3eu); call_ind(t); }
    /* 0065fa3e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fa41: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065fa44: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065fa49: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065fa4c: call 0x65fb08 */ r_esp -= 4; W32(r_esp, 0x65fa51u); f_0065fb08();
    /* 0065fa51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fa54: call 0x65fb4c */ r_esp -= 4; W32(r_esp, 0x65fa59u); f_0065fb4c();
    /* 0065fa59: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fa5c: fld dword ptr [0x938e48] */ FPUSH(R_F32((u32)(0x938e48u)));
    /* 0065fa62: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0065fa65: fld dword ptr [eax + 0x68] */ FPUSH(R_F32((u32)(r_eax+0x68u)));
    /* 0065fa68: fld dword ptr [eax + 0x70] */ FPUSH(R_F32((u32)(r_eax+0x70u)));
    /* 0065fa6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fa6d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0065fa6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065fa71: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065fa73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fa75: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065fa77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fa79: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065fa7b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065fa7d: fstp dword ptr [eax + 0xbc] */ W_F32((u32)(r_eax+0xbcu), ST(0)); FPOP();
    /* 0065fa83: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0065fa88: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 0065fa8e: lea edx, [eax + 0x1f4] */ r_edx = (u32)(r_eax+0x1f4u);
    /* 0065fa94: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0065fa9a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0065fa9d: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0065faa3: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 0065faa9: lea ebx, [eax + 0xd4] */ r_ebx = (u32)(r_eax+0xd4u);
    /* 0065faaf: mov dword ptr [eax + 0xd0], ebx */ W32((u32)(r_eax+0xd0u), r_ebx);
    /* 0065fab5: lea esi, [eax + 0xc4] */ r_esi = (u32)(r_eax+0xc4u);
    /* 0065fabb: mov dword ptr [eax + 0xac], esi */ W32((u32)(r_eax+0xacu), r_esi);
    /* 0065fac1: mov dword ptr [eax + 0xb0], edi */ W32((u32)(r_eax+0xb0u), r_edi);
    /* 0065fac7: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 0065facd: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0065fad0: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 0065fad6: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0065fadc: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 0065fae2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fae4: je 0x65faef */ if (fZ) goto L_0065faef;
L_0065fae6:; BB(0x0065fae6);
    /* 0065fae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fae7: call 0x7a7b30 */ r_esp -= 4; W32(r_esp, 0x65faecu); f_007a7b30();
    /* 0065faec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0065faef:; BB(0x0065faef);
    /* 0065faef: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065faf2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065faf5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065faf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065fafb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065fb02: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fb04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fb05: ret 8 */ FN_RET(0x0065f9e4); r_esp += 12; return;
}

void f_0065fb08(void) /* sub_65FB08 */
{
    FN_ENTER(0x0065fb08);
    /* 0065fb08: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0065fb0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fb10: jne 0x65fb23 */ if (!fZ) goto L_0065fb23;
L_0065fb12:; BB(0x0065fb12);
    /* 0065fb12: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0065fb18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fb1a: jne 0x65fb3e */ if (!fZ) goto L_0065fb3e;
L_0065fb1c:; BB(0x0065fb1c);
    /* 0065fb1c: mov eax, 1 */ r_eax = 0x1u;
    /* 0065fb21: jmp 0x65fb3e */ goto L_0065fb3e;
L_0065fb23:; BB(0x0065fb23);
    /* 0065fb23: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065fb26: jbe 0x65fb37 */ if ((fC||fZ)) goto L_0065fb37;
L_0065fb28:; BB(0x0065fb28);
    /* 0065fb28: mov dword ptr [ecx + 0x84], 1 */ W32((u32)(r_ecx+0x84u), 0x1u);
    /* 0065fb32: mov eax, 1 */ r_eax = 0x1u;
L_0065fb37:; BB(0x0065fb37);
    /* 0065fb37: mov eax, dword ptr [eax*4 + 0x9c87bc] */ r_eax = R32((u32)(r_eax*4+0x9c87bcu));
L_0065fb3e:; BB(0x0065fb3e);
    /* 0065fb3e: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fb43: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 0065fb49: ret  */ FN_RET(0x0065fb08); r_esp += 4; return;
}

void f_0065fb4c(void) /* sub_65FB4C */
{
    FN_ENTER(0x0065fb4c);
    /* 0065fb4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb50: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fb53: mov edi, ecx */ r_edi = r_ecx;
    /* 0065fb55: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0065fb58: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 0065fb5b: fld dword ptr [0x938e44] */ FPUSH(R_F32((u32)(0x938e44u)));
    /* 0065fb61: fld dword ptr [0x938e3c] */ FPUSH(R_F32((u32)(0x938e3cu)));
    /* 0065fb67: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 0065fb6a: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0065fb6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb6f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0065fb71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb73: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0065fb75: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0065fb78: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 0065fb7b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065fb7d: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0065fb7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb81: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0065fb83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb85: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0065fb89: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0065fb91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb93: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0065fb97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fb99: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0065fb9d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065fb9f: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0065fba3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065fba5: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0065fba9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065fbab: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0065fbaf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065fbb1: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0065fbb5: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065fbb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fbbb: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065fbbf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fbc1: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0065fbc5: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0065fbc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fbcb: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0065fbcf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fbd1: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 0065fbd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fbd7: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0065fbdb: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0065fbdf: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0065fbe7: lea esi, [edi + 0xd4] */ r_esi = (u32)(r_edi+0xd4u);
    /* 0065fbed: mov ebp, 0x9c87a4 */ r_ebp = 0x9c87a4u;
    /* 0065fbf2: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0065fbfa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0065fbfe: mov ebx, 0x9c8740 */ r_ebx = 0x9c8740u;
    /* 0065fc03: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0065fc0b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0065fc0f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0065fc14: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0065fc18: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0065fc1c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x65fc21u); f_0082d990();
    /* 0065fc21: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0065fc24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fc26: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x65fc2bu); f_008316b4();
    /* 0065fc2b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065fc2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fc30: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65fc35u); f_0082d8bc();
    /* 0065fc35: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 0065fc39: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0065fc3d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065fc3f: lea eax, [edi + 0x1f4] */ r_eax = (u32)(r_edi+0x1f4u);
    /* 0065fc45: mov esi, eax */ r_esi = r_eax;
    /* 0065fc47: mov edi, edx */ r_edi = r_edx;
L_0065fc49:; BB(0x0065fc49);
    /* 0065fc49: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0065fc4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065fc4d: lea edx, [ecx + edi] */ r_edx = (u32)(r_ecx+r_edi);
    /* 0065fc50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fc52: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x65fc57u); f_00830aa0();
    /* 0065fc57: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065fc5a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065fc5d: cmp edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065fc60: jl 0x65fc49 */ if ((fS!=fO)) goto L_0065fc49;
L_0065fc62:; BB(0x0065fc62);
    /* 0065fc62: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0065fc66: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 0065fc6a: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 0065fc6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065fc70: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
L_0065fc74:; BB(0x0065fc74);
    /* 0065fc74: movsx eax, byte ptr [ebp] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 0065fc78: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0065fc7b: movsx ebx, byte ptr [ebp + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 0065fc7f: mov word ptr [esi + 2], bx */ W16((u32)(r_esi+0x2u), (u16)r_ebx);
    /* 0065fc83: movsx eax, byte ptr [ebp + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x2u));
    /* 0065fc87: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 0065fc8b: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065fc8e: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 0065fc91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fc92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fc94: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0065fc98: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x65fc9du); f_0082eab8();
    /* 0065fc9d: fld dword ptr [0x938e38] */ FPUSH(R_F32((u32)(0x938e38u)));
    /* 0065fca3: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0065fca6: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0065fcaa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fcac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fcae: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0065fcb1: add dword ptr [esp + 0x68], 0xc */ { u32 ad = (u32)(r_esp+0x68u);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065fcb6: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065fcb8: fld dword ptr [edx + edi + 0x1f8] */ FPUSH(R_F32((u32)(r_edx+r_edi+0x1f8u)));
    /* 0065fcbf: fld dword ptr [edx + edi + 0x1fc] */ FPUSH(R_F32((u32)(r_edx+r_edi+0x1fcu)));
    /* 0065fcc6: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 0065fcca: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065fccc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065fcce: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0065fcd1: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065fcd3: fld dword ptr [eax + edi + 0x1f8] */ FPUSH(R_F32((u32)(r_eax+r_edi+0x1f8u)));
    /* 0065fcda: fld dword ptr [eax + edi + 0x1fc] */ FPUSH(R_F32((u32)(r_eax+r_edi+0x1fcu)));
    /* 0065fce1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fce3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fce5: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0065fce8: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065fcea: fld dword ptr [ebx + edi + 0x1f4] */ FPUSH(R_F32((u32)(r_ebx+r_edi+0x1f4u)));
    /* 0065fcf1: fadd dword ptr [eax + edi + 0x1f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edi+0x1f4u));
    /* 0065fcf8: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0065fcfc: fadd dword ptr [edx + edi + 0x1f4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_edi+0x1f4u));
    /* 0065fd03: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0065fd05: fld dword ptr [ebx + edi + 0x1f8] */ FPUSH(R_F32((u32)(r_ebx+r_edi+0x1f8u)));
    /* 0065fd0c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0065fd0e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065fd10: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065fd12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fd14: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0065fd16: fld dword ptr [ebx + edi + 0x1fc] */ FPUSH(R_F32((u32)(r_ebx+r_edi+0x1fcu)));
    /* 0065fd1d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065fd1f: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 0065fd22: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0065fd25: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065fd27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065fd29: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0065fd2b: fld dword ptr [0x938e3c] */ FPUSH(R_F32((u32)(0x938e3cu)));
    /* 0065fd31: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065fd33: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0065fd36: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0065fd38: jne 0x65fd46 */ if (!fZ) goto L_0065fd46;
L_0065fd3a:; BB(0x0065fd3a);
    /* 0065fd3a: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0065fd3d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065fd3f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065fd41: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0065fd44: jmp 0x65fd50 */ goto L_0065fd50;
L_0065fd46:; BB(0x0065fd46);
    /* 0065fd46: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 0065fd49: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065fd4b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065fd4d: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
L_0065fd50:; BB(0x0065fd50);
    /* 0065fd50: mov edx, eax */ r_edx = r_eax;
    /* 0065fd52: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0065fd58: mov word ptr [esi + 6], ax */ W16((u32)(r_esi+0x6u), (u16)r_eax);
    /* 0065fd5c: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065fd5f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065fd62: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065fd65: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0065fd69: jl 0x65fc74 */ if ((fS!=fO)) goto L_0065fc74;
L_0065fd6f:; BB(0x0065fd6f);
    /* 0065fd6f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65fd74u); f_0082da80();
    /* 0065fd74: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065fd77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065fd78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fd79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065fd7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065fd7b: ret  */ FN_RET(0x0065fb4c); r_esp += 4; return;
}

void f_0065fd7c(void) /* sub_65FD7C */
{
    FN_ENTER(0x0065fd7c);
    /* 0065fd7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065fd7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065fd81: call 0x65fda0 */ r_esp -= 4; W32(r_esp, 0x65fd86u); f_0065fda0();
    /* 0065fd86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065fd8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fd8c: jne 0x65fd92 */ if (!fZ) goto L_0065fd92;
L_0065fd8e:; BB(0x0065fd8e);
    /* 0065fd8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065fd8f: ret 4 */ FN_RET(0x0065fd7c); r_esp += 8; return;
L_0065fd92:; BB(0x0065fd92);
    /* 0065fd92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65fd98u); f_005c2f74();
    /* 0065fd98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065fd99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065fd9a: ret 4 */ FN_RET(0x0065fd7c); r_esp += 8; return;
}

void f_0065fda0(void) /* sub_65FDA0 */
{
    FN_ENTER(0x0065fda0);
    /* 0065fda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fda3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065fda5: push 0x8e7be8 */ { u32 v = 0x8e7be8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fdaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065fdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fdb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065fdb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fdbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065fdbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065fdc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065fdc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065fdc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065fdca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065fdcd: mov dword ptr [ecx], 0xb33628 */ W32((u32)(r_ecx), 0xb33628u);
    /* 0065fdd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065fdda: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65fddfu); f_007b4aec();
    /* 0065fddf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065fde2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065fde9: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fdeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fdec: ret  */ FN_RET(0x0065fda0); r_esp += 4; return;
}

void f_0065fdf0(void) /* sub_65FDF0 */
{
    FN_ENTER(0x0065fdf0);
    /* 0065fdf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065fdf1: mov edi, ecx */ r_edi = r_ecx;
    /* 0065fdf3: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 0065fdf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fdfb: je 0x65fe14 */ if (fZ) goto L_0065fe14;
L_0065fdfd:; BB(0x0065fdfd);
    /* 0065fdfd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x65fe02u); f_008173b4();
    /* 0065fe02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fe04: jne 0x65fe14 */ if (!fZ) goto L_0065fe14;
L_0065fe06:; BB(0x0065fe06);
    /* 0065fe06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065fe08: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 0065fe0e: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_0065fe14:; BB(0x0065fe14);
    /* 0065fe14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065fe15: ret  */ FN_RET(0x0065fdf0); r_esp += 4; return;
}

void f_0065fe18(void) /* sub_65FE18 */
{
    FN_ENTER(0x0065fe18);
    /* 0065fe18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe19: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fe1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe1d: push 0x8e7c04 */ { u32 v = 0x8e7c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065fe28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065fe30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065fe36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065fe39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065fe3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065fe3f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065fe42: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065fe45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065fe48: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065fe4b: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65fe50u); f_007b4b48();
    /* 0065fe50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065fe57: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fe5a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fe5d: mov dword ptr [ecx], 0xb33628 */ W32((u32)(r_ecx), 0xb33628u);
    /* 0065fe63: mov eax, dword ptr [0x9c87e0] */ r_eax = R32((u32)(0x9c87e0u));
    /* 0065fe68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe69: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065fe6c: call dword ptr [0xb3363c] */ { u32 t = R32((u32)(0xb3363cu)); r_esp -= 4; W32(r_esp, 0x65fe72u); call_ind(t); }
    /* 0065fe72: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065fe75: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 0065fe7b: mov edi, dword ptr [ebx + 0x8c] */ r_edi = R32((u32)(r_ebx+0x8cu));
    /* 0065fe81: mov dword ptr [ebx + 0xb4], edx */ W32((u32)(r_ebx+0xb4u), r_edx);
    /* 0065fe87: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fe89: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065fe8b: mov eax, 1 */ r_eax = 0x1u;
    /* 0065fe90: mov esi, 0 */ r_esi = 0x0u;
    /* 0065fe95: mov dword ptr [ebx + 0xac], esi */ W32((u32)(r_ebx+0xacu), r_esi);
    /* 0065fe9b: mov dword ptr [ebx + 0xb0], esi */ W32((u32)(r_ebx+0xb0u), r_esi);
    /* 0065fea1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fea4: jg 0x65fea8 */ if ((!fZ&&fS==fO)) goto L_0065fea8;
L_0065fea6:; BB(0x0065fea6);
    /* 0065fea6: mov edi, ecx */ r_edi = r_ecx;
L_0065fea8:; BB(0x0065fea8);
    /* 0065fea8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065feab: jl 0x65feaf */ if ((fS!=fO)) goto L_0065feaf;
L_0065fead:; BB(0x0065fead);
    /* 0065fead: mov edi, eax */ r_edi = r_eax;
L_0065feaf:; BB(0x0065feaf);
    /* 0065feaf: mov dword ptr [ebx + 0xb8], edi */ W32((u32)(r_ebx+0xb8u), r_edi);
    /* 0065feb5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065feb8: mov eax, ebx */ r_eax = r_ebx;
    /* 0065feba: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065febd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065fec0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065fec7: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065feca: ret 8 */ FN_RET(0x0065fe18); r_esp += 12; return;
}

void f_0065fed0(void) /* sub_65FED0 */
{
    FN_ENTER(0x0065fed0);
    /* 0065fed0: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0065fed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fed8: jne 0x65fee0 */ if (!fZ) goto L_0065fee0;
L_0065feda:; BB(0x0065feda);
    /* 0065feda: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065fedc: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x65fedfu); call_ind(t); }
    /* 0065fedf: ret  */ FN_RET(0x0065fed0); r_esp += 4; return;
L_0065fee0:; BB(0x0065fee0);
    /* 0065fee0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065fee3: jne 0x65feea */ if (!fZ) goto L_0065feea;
L_0065fee5:; BB(0x0065fee5);
    /* 0065fee5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065fee7: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x65feeau); call_ind(t); }
L_0065feea:; BB(0x0065feea);
    /* 0065feea: ret  */ FN_RET(0x0065fed0); r_esp += 4; return;
}

void f_0065feec(void) /* sub_65FEEC */
{
    FN_ENTER(0x0065feec);
    /* 0065feec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065feed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fef0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065fef2: mov edx, dword ptr [ebp + 0x84] */ r_edx = R32((u32)(r_ebp+0x84u));
    /* 0065fef8: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0065fefe: mov dword ptr [esp], 0x938e4c */ W32((u32)(r_esp), 0x938e4cu);
    /* 0065ff05: mov dword ptr [ebp + 0xb4], edx */ W32((u32)(r_ebp+0xb4u), r_edx);
    /* 0065ff0b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ff0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065ff0f: mov dword ptr [esp + 4], 0x938e54 */ W32((u32)(r_esp+0x4u), 0x938e54u);
    /* 0065ff17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff18: jg 0x65ff1c */ if ((!fZ&&fS==fO)) goto L_0065ff1c;
L_0065ff1a:; BB(0x0065ff1a);
    /* 0065ff1a: mov eax, ecx */ r_eax = r_ecx;
L_0065ff1c:; BB(0x0065ff1c);
    /* 0065ff1c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065ff21: push 0x938e5c */ { u32 v = 0x938e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff26: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065ff2e: jl 0x65ff32 */ if ((fS!=fO)) goto L_0065ff32;
L_0065ff30:; BB(0x0065ff30);
    /* 0065ff30: mov eax, ecx */ r_eax = r_ecx;
L_0065ff32:; BB(0x0065ff32);
    /* 0065ff32: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 0065ff38: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65ff3du); f_0061cdb0();
    /* 0065ff3d: mov eax, dword ptr [ebp + 0xb8] */ r_eax = R32((u32)(r_ebp+0xb8u));
    /* 0065ff43: push dword ptr [esp + eax*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_eax*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ff47: push 0x938e6c */ { u32 v = 0x938e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff4c: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff51: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65ff56u); f_0061cdb0();
    /* 0065ff56: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ff59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ff5a: ret  */ FN_RET(0x0065feec); r_esp += 4; return;
}

void f_0065ff5c(void) /* sub_65FF5C */
{
    FN_ENTER(0x0065ff5c);
    /* 0065ff5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ff5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff61: push 0x8e7c2c */ { u32 v = 0x8e7c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ff6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ff74: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ff77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ff7a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0065ff7d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0065ff80: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0065ff83: mov eax, dword ptr [ecx + 0xb4] */ r_eax = R32((u32)(r_ecx+0xb4u));
    /* 0065ff89: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065ff8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ff8e: je 0x65ffce */ if (fZ) goto L_0065ffce;
L_0065ff90:; BB(0x0065ff90);
    /* 0065ff90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065ff92: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065ff95: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0065ff9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ff9d: jne 0x65ffaa */ if (!fZ) goto L_0065ffaa;
L_0065ff9f:; BB(0x0065ff9f);
    /* 0065ff9f: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 0065ffa5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065ffa8: jmp 0x65ffb8 */ goto L_0065ffb8;
L_0065ffaa:; BB(0x0065ffaa);
    /* 0065ffaa: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ffad: jne 0x65ffb8 */ if (!fZ) goto L_0065ffb8;
L_0065ffaf:; BB(0x0065ffaf);
    /* 0065ffaf: mov edx, dword ptr [0xa95aa4] */ r_edx = R32((u32)(0xa95aa4u));
    /* 0065ffb5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0065ffb8:; BB(0x0065ffb8);
    /* 0065ffb8: mov edx, ecx */ r_edx = r_ecx;
    /* 0065ffba: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0065ffc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ffc2: jne 0x65ffce */ if (!fZ) goto L_0065ffce;
L_0065ffc4:; BB(0x0065ffc4);
    /* 0065ffc4: mov ecx, dword ptr [edx + 0xac] */ r_ecx = R32((u32)(r_edx+0xacu));
    /* 0065ffca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ffcc: je 0x65ffde */ if (fZ) goto L_0065ffde;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x0065ff5c); r_esp += 8; return;
L_0065ffde:; BB(0x0065ffde);
    /* 0065ffde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ffe0: je 0x65ffce */ if (fZ) goto L_0065ffce;
L_0065ffe2:; BB(0x0065ffe2);
    /* 0065ffe2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065ffe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ffe7: je 0x65ffce */ if (fZ) goto L_0065ffce;
L_0065ffe9:; BB(0x0065ffe9);
    /* 0065ffe9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0065fff0: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fff5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65fffau); f_005caba4();
    /* 0065fffa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065fffb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660000: je 0x660060 */ if (fZ) goto L_00660060;
L_00660002:; BB(0x00660002);
    /* 00660002: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00660009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660010: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660013: push dword ptr [eax + 0xb4] */ { u32 v = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660019: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066001c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066001f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660020: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x660025u); f_006bc800();
    /* 00660025: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660028: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066002f:; BB(0x0066002f);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
L_00660060:; BB(0x00660060);
    /* 00660060: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00660062: jmp 0x66002f */ goto L_0066002f;
}

