#include "protos.h"

void f_0044f188(void) /* sub_44F188 */
{
    FN_ENTER(0x0044f188);
    /* 0044f188: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f189: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f18a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f18b: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f18e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044f190: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f196: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f19c: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 0044f1a2: mov edi, dword ptr [0xa44f58] */ r_edi = R32((u32)(0xa44f58u));
    /* 0044f1a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044f1aa: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0044f1ae: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0044f1b2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f1b4: jge 0x44f2a7 */ if ((fS==fO)) goto L_0044f2a7;
L_0044f1ba:; BB(0x0044f1ba);
    /* 0044f1ba: mov edx, dword ptr [0xa44f50] */ r_edx = R32((u32)(0xa44f50u));
    /* 0044f1c0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f1c2: jle 0x44f1f5 */ if ((fZ||fS!=fO)) goto L_0044f1f5;
L_0044f1c4:; BB(0x0044f1c4);
    /* 0044f1c4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044f1c6: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f1c8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0044f1cc: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044f1d0: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044f1d2: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0044f1d6: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f1da: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044f1dc: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 0044f1e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f1e2: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0044f1e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f1e7: jae 0x44f1f5 */ if (!fC) goto L_0044f1f5;
L_0044f1e9:; BB(0x0044f1e9);
    /* 0044f1e9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0044f1ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044f1f0: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x44f1f5u); f_00453af4();
L_0044f1f5:; BB(0x0044f1f5);
    /* 0044f1f5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44f1fau); f_0082d7b0();
    /* 0044f1fa: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x44f1ffu); f_0082fa9c();
    /* 0044f1ff: lea ecx, [ebp + 0x100] */ r_ecx = (u32)(r_ebp+0x100u);
    /* 0044f205: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44f20au); f_0082d838();
    /* 0044f20a: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 0044f210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f212: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44f217u); f_0082d8bc();
    /* 0044f217: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044f219: lea eax, [ebp + 0xa4] */ r_eax = (u32)(r_ebp+0xa4u);
    /* 0044f21f: mov esi, eax */ r_esi = r_eax;
L_0044f221:; BB(0x0044f221);
    /* 0044f221: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0044f223: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44f228u); f_00829cc8();
    /* 0044f228: fld dword ptr [ebp + 0x114] */ FPUSH(R_F32((u32)(r_ebp+0x114u)));
    /* 0044f22e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044f230: jl 0x44f24a */ if ((fS!=fO)) goto L_0044f24a;
L_0044f232:; BB(0x0044f232);
    /* 0044f232: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f235: jg 0x44f24a */ if ((!fZ&&fS==fO)) goto L_0044f24a;
L_0044f237:; BB(0x0044f237);
    /* 0044f237: fcom dword ptr [0x8ff748] */ fx_compare(ST(0), R_F32((u32)(0x8ff748u))); 
    /* 0044f23d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f23f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f240: jbe 0x44f24a */ if ((fC||fZ)) goto L_0044f24a;
L_0044f242:; BB(0x0044f242);
    /* 0044f242: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f244: fld dword ptr [0x8ff84c] */ FPUSH(R_F32((u32)(0x8ff84cu)));
L_0044f24a:; BB(0x0044f24a);
    /* 0044f24a: mov edx, dword ptr [esi - 4] */ r_edx = R32((u32)(r_esi+0xfffffffcu));
    /* 0044f24d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044f251: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0044f254: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0044f257: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0044f25b: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44f260u); f_0083046c();
    /* 0044f260: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044f263: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044f266: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f269: jl 0x44f221 */ if ((fS!=fO)) goto L_0044f221;
L_0044f26b:; BB(0x0044f26b);
    /* 0044f26b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x44f270u); f_0082faac();
    /* 0044f270: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44f275u); f_0082da80();
    /* 0044f275: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f27b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0044f27f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0044f281: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f283: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0044f287: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f288: jb 0x44f292 */ if (fC) goto L_0044f292;
L_0044f28a:; BB(0x0044f28a);
    /* 0044f28a: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 0044f290: jmp 0x44f2a7 */ goto L_0044f2a7;
L_0044f292:; BB(0x0044f292);
    /* 0044f292: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x44f297u); f_005963d0();
    /* 0044f297: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f29d: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 0044f2a3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0044f2a7:; BB(0x0044f2a7);
    /* 0044f2a7: mov edx, dword ptr [0xa44f50] */ r_edx = R32((u32)(0xa44f50u));
    /* 0044f2ad: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f2af: jle 0x44f4e4 */ if ((fZ||fS!=fO)) goto L_0044f4e4;
L_0044f2b5:; BB(0x0044f2b5);
    /* 0044f2b5: mov edi, dword ptr [0xa44f58] */ r_edi = R32((u32)(0xa44f58u));
    /* 0044f2bb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f2bd: jge 0x44f2d9 */ if ((fS==fO)) goto L_0044f2d9;
L_0044f2bf:; BB(0x0044f2bf);
    /* 0044f2bf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044f2c1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044f2c5: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f2c9: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044f2cb: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0044f2cf: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f2d3: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044f2d5: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0044f2d9:; BB(0x0044f2d9);
    /* 0044f2d9: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0044f2db: push dword ptr [ebp + 0xf4] */ { u32 v = R32((u32)(r_ebp+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f2e1: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44f2e6u); f_0078e934();
    /* 0044f2e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f2e9: fld dword ptr [0x8ff848] */ FPUSH(R_F32((u32)(0x8ff848u)));
    /* 0044f2ef: fld dword ptr [0x8ff848] */ FPUSH(R_F32((u32)(0x8ff848u)));
    /* 0044f2f5: mov ecx, dword ptr [0xa44f5c] */ r_ecx = R32((u32)(0xa44f5cu));
    /* 0044f2fb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0044f2fe: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044f301: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 0044f307: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f309: jl 0x44f315 */ if ((fS!=fO)) goto L_0044f315;
L_0044f30b:; BB(0x0044f30b);
    /* 0044f30b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f30d: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f313: jmp 0x44f337 */ goto L_0044f337;
L_0044f315:; BB(0x0044f315);
    /* 0044f315: mov edi, dword ptr [0xa44f60] */ r_edi = R32((u32)(0xa44f60u));
    /* 0044f31b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f31d: jle 0x44f337 */ if ((fZ||fS!=fO)) goto L_0044f337;
L_0044f31f:; BB(0x0044f31f);
    /* 0044f31f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f321: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044f323: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044f327: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f32b: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f32d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0044f331: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f335: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_0044f337:; BB(0x0044f337);
    /* 0044f337: fmul dword ptr [0x8ff844] */ ST(0) = ST(0) * R_F32((u32)(0x8ff844u));
    /* 0044f33d: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0044f341: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0044f345: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0044f34a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044f34f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044f353: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0044f357: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0044f35b: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0044f35f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0044f363: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0044f369: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044f36c: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0044f36e: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0044f372: mov edi, dword ptr [0xa44f64] */ r_edi = R32((u32)(0xa44f64u));
    /* 0044f378: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 0044f37e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f380: jl 0x44f38c */ if ((fS!=fO)) goto L_0044f38c;
L_0044f382:; BB(0x0044f382);
    /* 0044f382: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f384: fld dword ptr [0x8ff850] */ FPUSH(R_F32((u32)(0x8ff850u)));
    /* 0044f38a: jmp 0x44f3ae */ goto L_0044f3ae;
L_0044f38c:; BB(0x0044f38c);
    /* 0044f38c: mov edx, dword ptr [0xa44f5c] */ r_edx = R32((u32)(0xa44f5cu));
    /* 0044f392: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f394: jle 0x44f3ae */ if ((fZ||fS!=fO)) goto L_0044f3ae;
L_0044f396:; BB(0x0044f396);
    /* 0044f396: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f398: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044f39a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044f39e: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f3a2: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044f3a4: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0044f3a8: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0044f3ac: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_0044f3ae:; BB(0x0044f3ae);
    /* 0044f3ae: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0044f3b2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0044f3b4:; BB(0x0044f3b4);
    /* 0044f3b4: push dword ptr [edi + 0x9a5bb4] */ { u32 v = R32((u32)(r_edi+0x9a5bb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f3ba: mov eax, dword ptr [edi + 0x9a5bb0] */ r_eax = R32((u32)(r_edi+0x9a5bb0u));
    /* 0044f3c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f3c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f3c4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0044f3c7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f3c9: push dword ptr [edx + ebp + 0xe8] */ { u32 v = R32((u32)(r_edx+r_ebp+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f3d0: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44f3d5u); f_0078e934();
    /* 0044f3d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f3d8: mov esi, dword ptr [edi + 0x9a5bb8] */ r_esi = R32((u32)(r_edi+0x9a5bb8u));
    /* 0044f3de: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0044f3e2: fmul dword ptr [0x8ff844] */ ST(0) = ST(0) * R_F32((u32)(0x8ff844u));
    /* 0044f3e8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0044f3eb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044f3ee: movzx edx, word ptr [ecx + esi*2] */ r_edx = (u32)R16((u32)(r_ecx+r_esi*2));
    /* 0044f3f2: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0044f3f6: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0044f3fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044f400: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044f404: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0044f408: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0044f40c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0044f410: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0044f414: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0044f417: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044f41a: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044f41c: mov word ptr [ecx + esi*2], dx */ W16((u32)(r_ecx+r_esi*2), (u16)r_edx);
    /* 0044f420: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044f423: cmp edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f426: jl 0x44f3b4 */ if ((fS!=fO)) goto L_0044f3b4;
L_0044f428:; BB(0x0044f428);
    /* 0044f428: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0044f42c: fcomp dword ptr [0x8ff850] */ fx_compare(ST(0), R_F32((u32)(0x8ff850u))); FPOP();
    /* 0044f432: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f434: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f435: jae 0x44f443 */ if (!fC) goto L_0044f443;
L_0044f437:; BB(0x0044f437);
    /* 0044f437: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0044f43b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044f43e: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x44f443u); f_00453af4();
L_0044f443:; BB(0x0044f443);
    /* 0044f443: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044f448: push dword ptr [ebp + 0x118] */ { u32 v = R32((u32)(r_ebp+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f44e: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044f453: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0044f458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f45a: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x44f45fu); f_00618a44();
    /* 0044f45f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44f464u); f_0082d7b0();
    /* 0044f464: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x44f469u); f_0082fa9c();
    /* 0044f469: lea ecx, [ebp + 0x100] */ r_ecx = (u32)(r_ebp+0x100u);
    /* 0044f46f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44f474u); f_0082d838();
    /* 0044f474: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 0044f47a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f47c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44f481u); f_0082d8bc();
    /* 0044f481: lea eax, [ebp + 0xe8] */ r_eax = (u32)(r_ebp+0xe8u);
    /* 0044f487: lea edi, [ebp + 0x100] */ r_edi = (u32)(r_ebp+0x100u);
    /* 0044f48d: mov esi, ebp */ r_esi = r_ebp;
    /* 0044f48f: mov ebp, eax */ r_ebp = r_eax;
L_0044f491:; BB(0x0044f491);
    /* 0044f491: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0044f494: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44f499u); f_00829cc8();
    /* 0044f499: push dword ptr [esi + 0x114] */ { u32 v = R32((u32)(r_esi+0x114u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f49f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f4a2: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f4a5: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44f4aau); f_0083046c();
    /* 0044f4aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f4ad: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044f4b0: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044f4b2: ja 0x44f491 */ if ((!fC&&!fZ)) goto L_0044f491;
L_0044f4b4:; BB(0x0044f4b4);
    /* 0044f4b4: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x44f4b9u); f_0082faac();
    /* 0044f4b9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44f4beu); f_0082da80();
    /* 0044f4be: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0044f4c4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0044f4c8: fcomp dword ptr [0x8ff850] */ fx_compare(ST(0), R_F32((u32)(0x8ff850u))); FPOP();
    /* 0044f4ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f4d0: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0044f4d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f4d7: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0044f4dd: jae 0x44f4e4 */ if (!fC) goto L_0044f4e4;
L_0044f4df:; BB(0x0044f4df);
    /* 0044f4df: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x44f4e4u); f_005963d0();
L_0044f4e4:; BB(0x0044f4e4);
    /* 0044f4e4: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044f4e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f4e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044f4e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044f4ea: ret  */ FN_RET(0x0044f188); r_esp += 4; return;
}

void f_0044f4ec(void) /* sub_44F4EC */
{
    FN_ENTER(0x0044f4ec);
    /* 0044f4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f4ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f4ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f4f1: push 0x8cedea */ { u32 v = 0x8cedeau; r_esp -= 4; W32(r_esp, v); }
    /* 0044f4f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044f4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f4fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044f504: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044f50a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0044f50d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0044f510: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0044f513: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f518: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0044f51f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44f524u); f_005caba4();
    /* 0044f524: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044f527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f52a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044f52d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f52f: je 0x44f70f */ if (fZ) goto L_0044f70f;
L_0044f535:; BB(0x0044f535);
    /* 0044f535: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0044f53c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044f543: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f546: mov ecx, eax */ r_ecx = r_eax;
    /* 0044f548: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0044f54b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x44f550u); f_007ba278();
    /* 0044f550: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044f557: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f55a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0044f55d: mov dword ptr [eax], 0xaf6c60 */ W32((u32)(r_eax), 0xaf6c60u);
    /* 0044f563: mov edx, dword ptr [0x9a5b80] */ r_edx = R32((u32)(0x9a5b80u));
    /* 0044f569: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044f56c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044f56f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0044f571: mov dword ptr [eax + 0x100], ecx */ W32((u32)(r_eax+0x100u), r_ecx);
    /* 0044f577: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0044f57a: mov dword ptr [eax + 0x104], ebx */ W32((u32)(r_eax+0x104u), r_ebx);
    /* 0044f580: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0044f583: mov dword ptr [eax + 0x108], edi */ W32((u32)(r_eax+0x108u), r_edi);
    /* 0044f589: mov dword ptr [eax + 0x10c], edx */ W32((u32)(r_eax+0x10cu), r_edx);
    /* 0044f58f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044f591: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0044f596: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0044f599:; BB(0x0044f599);
    /* 0044f599: mov esi, dword ptr [edi*4 + 0x9a6140] */ r_esi = R32((u32)(r_edi*4+0x9a6140u));
    /* 0044f5a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f5a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5a4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44f5a9u); f_005b8610();
    /* 0044f5a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f5ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f5ad: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0044f5b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f5b2: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0044f5b5: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044f5b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f5ba: mov dword ptr [ebx + edx + 0xa0], eax */ W32((u32)(r_ebx+r_edx+0xa0u), r_eax);
    /* 0044f5c1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x44f5c6u); f_005b8624();
    /* 0044f5c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f5c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f5cc: mov dword ptr [ebx + edx + 0xa4], eax */ W32((u32)(r_ebx+r_edx+0xa4u), r_eax);
    /* 0044f5d3: push dword ptr [edi*4 + 0x9a5b84] */ { u32 v = R32((u32)(r_edi*4+0x9a5b84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f5da: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x44f5dfu); f_005b8638();
    /* 0044f5df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f5e2: mov dword ptr [ebx + edx + 0xa8], eax */ W32((u32)(r_ebx+r_edx+0xa8u), r_eax);
    /* 0044f5e9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044f5ec: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f5ef: jl 0x44f599 */ if ((fS!=fO)) goto L_0044f599;
L_0044f5f1:; BB(0x0044f5f1);
    /* 0044f5f1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0044f5f3:; BB(0x0044f5f3);
    /* 0044f5f3: mov eax, dword ptr [esi*4 + 0x9a6414] */ r_eax = R32((u32)(r_esi*4+0x9a6414u));
    /* 0044f5fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f5fd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044f600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f601: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44f606u); f_005b8610();
    /* 0044f606: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0044f609: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f60c: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0044f60f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f611: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0044f614: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044f616: mov dword ptr [ebx + edi + 0xe8], eax */ W32((u32)(r_ebx+r_edi+0xe8u), r_eax);
    /* 0044f61d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044f620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f621: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x44f626u); f_005b8624();
    /* 0044f626: mov edx, edi */ r_edx = r_edi;
    /* 0044f628: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044f62b: mov dword ptr [ebx + edx + 0xec], eax */ W32((u32)(r_ebx+r_edx+0xecu), r_eax);
    /* 0044f632: push dword ptr [esi*4 + 0x9a5b9c] */ { u32 v = R32((u32)(r_esi*4+0x9a5b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f639: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x44f63eu); f_005b8638();
    /* 0044f63e: mov edx, edi */ r_edx = r_edi;
    /* 0044f640: mov dword ptr [ebx + edx + 0xf0], eax */ W32((u32)(r_ebx+r_edx+0xf0u), r_eax);
    /* 0044f647: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044f64a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f64d: jl 0x44f5f3 */ if ((fS!=fO)) goto L_0044f5f3;
L_0044f64f:; BB(0x0044f64f);
    /* 0044f64f: mov dword ptr [edx + 0x114], 0xbf000000 */ W32((u32)(r_edx+0x114u), 0xbf000000u);
    /* 0044f659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044f65b: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 0044f661: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f663: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0044f669: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 0044f66f: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0044f675: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x44f67au); f_004d31f4();
    /* 0044f67a: mov eax, dword ptr [0x8ff808] */ r_eax = R32((u32)(0x8ff808u));
    /* 0044f67f: mov edx, dword ptr [0x8ff810] */ r_edx = R32((u32)(0x8ff810u));
    /* 0044f685: mov ebx, edi */ r_ebx = r_edi;
    /* 0044f687: mov ecx, dword ptr [ebx + 0x10c] */ r_ecx = R32((u32)(r_ebx+0x10cu));
    /* 0044f68d: lea edi, [ebx + 0x100] */ r_edi = (u32)(r_ebx+0x100u);
    /* 0044f693: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044f696: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0044f699: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044f69c: lea esi, [ebp - 0x34] */ r_esi = (u32)(r_ebp+0xffffffccu);
    /* 0044f69f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6a2: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x44f6a7u); f_004d681c();
    /* 0044f6a7: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6ac: push 0x9a5ba4 */ { u32 v = 0x9a5ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6b1: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x44f6b6u); f_004d6770();
    /* 0044f6b6: mov eax, ebx */ r_eax = r_ebx;
    /* 0044f6b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6bc: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044f6bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6c0: push 0x381 */ { u32 v = 0x381u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44f6cau); f_00814298();
    /* 0044f6ca: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f6cd: mov eax, ebx */ r_eax = r_ebx;
    /* 0044f6cf: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 0044f6d9: lea ecx, [eax + 0x11c] */ r_ecx = (u32)(r_eax+0x11cu);
    /* 0044f6df: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6e1: push 0x8ff7c0 */ { u32 v = 0x8ff7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f6e6: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x44f6ebu); f_0044d268();
    /* 0044f6eb: mov eax, ebx */ r_eax = r_ebx;
    /* 0044f6ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044f6ef: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0044f6f2: mov dword ptr [eax + 0x110], edx */ W32((u32)(r_eax+0x110u), r_edx);
L_0044f6f8:; BB(0x0044f6f8);
    /* 0044f6f8: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044f6fb: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044f6fe: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044f701: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f704: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044f70b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f70d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f70e: ret  */ FN_RET(0x0044f4ec); r_esp += 4; return;
L_0044f70f:; BB(0x0044f70f);
    /* 0044f70f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044f711: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044f714: jmp 0x44f6f8 */ goto L_0044f6f8;
}

void f_0044f718(void)
{
    FN_ENTER(0x0044f718);
    /* 0044f718: mov dword ptr [0xa44f68], 0 */ W32((u32)(0xa44f68u), 0x0u);
    /* 0044f722: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 0044f727: mov edx, 0x7c */ r_edx = 0x7cu;
    /* 0044f72c: mov dword ptr [0xa44f44], 0x46 */ W32((u32)(0xa44f44u), 0x46u);
    /* 0044f736: mov dword ptr [0xa44f4c], eax */ W32((u32)(0xa44f4cu), r_eax);
    /* 0044f73b: mov dword ptr [0xa44f6c], edx */ W32((u32)(0xa44f6cu), r_edx);
    /* 0044f741: mov dword ptr [0xa44f48], 0x82 */ W32((u32)(0xa44f48u), 0x82u);
    /* 0044f74b: mov dword ptr [0xa44f50], edx */ W32((u32)(0xa44f50u), r_edx);
    /* 0044f751: mov dword ptr [0xa44f58], 0x88 */ W32((u32)(0xa44f58u), 0x88u);
    /* 0044f75b: mov dword ptr [0xa44f70], 0x90 */ W32((u32)(0xa44f70u), 0x90u);
    /* 0044f765: mov dword ptr [0x9a5b24], eax */ W32((u32)(0x9a5b24u), r_eax);
    /* 0044f76a: mov dword ptr [0x9a5b28], edx */ W32((u32)(0x9a5b28u), r_edx);
    /* 0044f770: mov dword ptr [0xa44f74], 0xaa */ W32((u32)(0xa44f74u), 0xaau);
    /* 0044f77a: mov dword ptr [0xa44f78], 0xb4 */ W32((u32)(0xa44f78u), 0xb4u);
    /* 0044f784: mov dword ptr [0x9a5b3c], eax */ W32((u32)(0x9a5b3cu), r_eax);
    /* 0044f789: mov dword ptr [0x9a5b40], edx */ W32((u32)(0x9a5b40u), r_edx);
    /* 0044f78f: mov dword ptr [0xa44f60], 0xe6 */ W32((u32)(0xa44f60u), 0xe6u);
    /* 0044f799: mov dword ptr [0xa44f5c], 0xf0 */ W32((u32)(0xa44f5cu), 0xf0u);
    /* 0044f7a3: mov dword ptr [0x9a5b54], eax */ W32((u32)(0x9a5b54u), r_eax);
    /* 0044f7a8: mov dword ptr [0x9a5b58], edx */ W32((u32)(0x9a5b58u), r_edx);
    /* 0044f7ae: mov dword ptr [0xa44f64], 0x104 */ W32((u32)(0xa44f64u), 0x104u);
    /* 0044f7b8: mov dword ptr [0xa44f54], 0x12c */ W32((u32)(0xa44f54u), 0x12cu);
    /* 0044f7c2: mov dword ptr [0x9a5b2c], 0x43020000 */ W32((u32)(0x9a5b2cu), 0x43020000u);
    /* 0044f7cc: mov dword ptr [0x9a5b30], 0x41200000 */ W32((u32)(0x9a5b30u), 0x41200000u);
    /* 0044f7d6: mov dword ptr [0x9a5b48], 0x41200000 */ W32((u32)(0x9a5b48u), 0x41200000u);
    /* 0044f7e0: mov dword ptr [0x9a5b4c], 0x43020000 */ W32((u32)(0x9a5b4cu), 0x43020000u);
    /* 0044f7ea: mov dword ptr [0x9a5b5c], 0xc3020000 */ W32((u32)(0x9a5b5cu), 0xc3020000u);
    /* 0044f7f4: mov dword ptr [0x9a5b60], 0x41200000 */ W32((u32)(0x9a5b60u), 0x41200000u);
    /* 0044f7fe: mov dword ptr [0x9a5b6c], 0x90 */ W32((u32)(0x9a5b6cu), 0x90u);
    /* 0044f808: mov dword ptr [0x9a5b70], 0xaa */ W32((u32)(0x9a5b70u), 0xaau);
    /* 0044f812: mov dword ptr [0x9a5b78], 0x42200000 */ W32((u32)(0x9a5b78u), 0x42200000u);
    /* 0044f81c: ret  */ FN_RET(0x0044f718); r_esp += 4; return;
}

void f_0044f820(void) /* sub_44F820 */
{
    FN_ENTER(0x0044f820);
    /* 0044f820: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f821: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044f823: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044f825: call 0x44f844 */ r_esp -= 4; W32(r_esp, 0x44f82au); f_0044f844();
    /* 0044f82a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044f82e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044f830: jne 0x44f836 */ if (!fZ) goto L_0044f836;
L_0044f832:; BB(0x0044f832);
    /* 0044f832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f833: ret 4 */ FN_RET(0x0044f820); r_esp += 8; return;
L_0044f836:; BB(0x0044f836);
    /* 0044f836: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f837: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44f83cu); f_005c2f74();
    /* 0044f83c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044f83d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f83e: ret 4 */ FN_RET(0x0044f820); r_esp += 8; return;
}

void f_0044f844(void) /* sub_44F844 */
{
    FN_ENTER(0x0044f844);
    /* 0044f844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f845: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f847: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f849: push 0x8cee04 */ { u32 v = 0x8cee04u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f84e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044f854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f855: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044f85c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f85f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044f862: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044f865: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044f868: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044f86b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044f86e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044f871: mov dword ptr [ecx], 0xaf6ce8 */ W32((u32)(r_ecx), 0xaf6ce8u);
    /* 0044f877: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044f87e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x44f883u); f_007ba1f0();
    /* 0044f883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f886: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044f88d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f890: ret  */ FN_RET(0x0044f844); r_esp += 4; return;
}

void f_0044f894(void) /* sub_44F894 */
{
    FN_ENTER(0x0044f894);
    /* 0044f894: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f895: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f896: mov edi, ecx */ r_edi = r_ecx;
    /* 0044f898: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0044f89e: cmp edx, dword ptr [0xa44f80] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44f80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f8a4: jne 0x44f8eb */ if (!fZ) goto L_0044f8eb;
L_0044f8a6:; BB(0x0044f8a6);
    /* 0044f8a6: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8ab: lea ebx, [edi + 0xac] */ r_ebx = (u32)(r_edi+0xacu);
    /* 0044f8b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8b2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44f8b7u); f_0050b510();
    /* 0044f8b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f8ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f8bc: je 0x44f8c7 */ if (fZ) goto L_0044f8c7;
L_0044f8be:; BB(0x0044f8be);
    /* 0044f8be: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8c0: mov ecx, eax */ r_ecx = r_eax;
    /* 0044f8c2: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44f8c7u); f_00508efc();
L_0044f8c7:; BB(0x0044f8c7);
    /* 0044f8c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8cc: push 0x372 */ { u32 v = 0x372u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8d1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44f8d6u); f_00814298();
    /* 0044f8d6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8d8: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8dd: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44f8e2u); f_006ff5f8();
    /* 0044f8e2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f8e5: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
L_0044f8eb:; BB(0x0044f8eb);
    /* 0044f8eb: cmp edx, dword ptr [0xa44f84] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44f84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f8f1: jl 0x44f934 */ if ((fS!=fO)) goto L_0044f934;
L_0044f8f3:; BB(0x0044f8f3);
    /* 0044f8f3: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 0044f8f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f8fb: jne 0x44f905 */ if (!fZ) goto L_0044f905;
L_0044f8fd:; BB(0x0044f8fd);
    /* 0044f8fd: cmp edx, dword ptr [0xa44f88] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44f88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f903: jg 0x44f934 */ if ((!fZ&&fS==fO)) goto L_0044f934;
L_0044f905:; BB(0x0044f905);
    /* 0044f905: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f90a: lea eax, [edi + 0xac] */ r_eax = (u32)(r_edi+0xacu);
    /* 0044f910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f911: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44f916u); f_0050b510();
    /* 0044f916: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f91b: je 0x44f92e */ if (fZ) goto L_0044f92e;
L_0044f91d:; BB(0x0044f91d);
    /* 0044f91d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f91f: mov ecx, eax */ r_ecx = r_eax;
    /* 0044f921: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44f926u); f_00508efc();
    /* 0044f926: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0044f92c: jmp 0x44f934 */ goto L_0044f934;
L_0044f92e:; BB(0x0044f92e);
    /* 0044f92e: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
L_0044f934:; BB(0x0044f934);
    /* 0044f934: fld dword ptr [0x8ff88c] */ FPUSH(R_F32((u32)(0x8ff88cu)));
    /* 0044f93a: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 0044f940: fcom dword ptr [0x8ff860] */ fx_compare(ST(0), R_F32((u32)(0x8ff860u))); 
    /* 0044f946: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f948: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f949: jbe 0x44f95a */ if ((fC||fZ)) goto L_0044f95a;
L_0044f94b:; BB(0x0044f94b);
    /* 0044f94b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f94d: mov eax, 0x42ee0000 */ r_eax = 0x42ee0000u;
    /* 0044f952: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0044f958: jmp 0x44f960 */ goto L_0044f960;
L_0044f95a:; BB(0x0044f95a);
    /* 0044f95a: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
L_0044f960:; BB(0x0044f960);
    /* 0044f960: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f963: cmp edx, dword ptr [0xa44f8c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44f8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044f969: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 0044f96f: jl 0x44f981 */ if ((fS!=fO)) goto L_0044f981;
L_0044f971:; BB(0x0044f971);
    /* 0044f971: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0044f975: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044f97a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0044f97e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f97f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044f980: ret  */ FN_RET(0x0044f894); r_esp += 4; return;
L_0044f981:; BB(0x0044f981);
    /* 0044f981: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f982: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044f983: ret  */ FN_RET(0x0044f894); r_esp += 4; return;
}

void f_0044f984(void) /* sub_44F984 */
{
    FN_ENTER(0x0044f984);
    /* 0044f984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f985: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044f988: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044f98a: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 0044f990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f992: fld dword ptr [0x8ff888] */ FPUSH(R_F32((u32)(0x8ff888u)));
    /* 0044f998: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044f99c: jne 0x44fa03 */ if (!fZ) goto L_0044fa03;
L_0044f99e:; BB(0x0044f99e);
    /* 0044f99e: mov ecx, dword ptr [0xa44f90] */ r_ecx = R32((u32)(0xa44f90u));
    /* 0044f9a4: mov eax, dword ptr [ebp + 0xbc] */ r_eax = R32((u32)(r_ebp+0xbcu));
    /* 0044f9aa: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f9ac: jge 0x44fa87 */ if ((fS==fO)) goto L_0044fa87;
L_0044f9b2:; BB(0x0044f9b2);
    /* 0044f9b2: mov edx, dword ptr [0xa44f94] */ r_edx = R32((u32)(0xa44f94u));
    /* 0044f9b8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f9ba: jle 0x44fa03 */ if ((fZ||fS!=fO)) goto L_0044fa03;
L_0044f9bc:; BB(0x0044f9bc);
    /* 0044f9bc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044f9be: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f9c0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044f9c4: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0044f9c8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f9ca: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0044f9ce: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044f9d2: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044f9d4: fcom dword ptr [0x8ff884] */ fx_compare(ST(0), R_F32((u32)(0x8ff884u))); 
    /* 0044f9da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f9dc: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044f9e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f9e1: ja 0x44f9e8 */ if ((!fC&&!fZ)) goto L_0044f9e8;
L_0044f9e3:; BB(0x0044f9e3);
    /* 0044f9e3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044f9e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f9e7: ret  */ FN_RET(0x0044f984); r_esp += 4; return;
L_0044f9e8:; BB(0x0044f9e8);
    /* 0044f9e8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044f9ec: fcomp dword ptr [0x8ff888] */ fx_compare(ST(0), R_F32((u32)(0x8ff888u))); FPOP();
    /* 0044f9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f9f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f9f5: jae 0x44fa03 */ if (!fC) goto L_0044fa03;
L_0044f9f7:; BB(0x0044f9f7);
    /* 0044f9f7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044f9fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044f9fe: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x44fa03u); f_00453af4();
L_0044fa03:; BB(0x0044fa03);
    /* 0044fa03: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44fa08u); f_0082d7b0();
    /* 0044fa08: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x44fa0du); f_0082fa9c();
    /* 0044fa0d: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 0044fa13: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44fa18u); f_0082d838();
    /* 0044fa18: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 0044fa1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fa20: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44fa25u); f_0082d8bc();
    /* 0044fa25: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0044fa29: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0044fa2d: lea edx, [ebp + 0x90] */ r_edx = (u32)(r_ebp+0x90u);
    /* 0044fa33: lea eax, [ebp + 0xa8] */ r_eax = (u32)(r_ebp+0xa8u);
    /* 0044fa39: mov edi, ebp */ r_edi = r_ebp;
    /* 0044fa3b: mov ebp, eax */ r_ebp = r_eax;
    /* 0044fa3d: mov esi, edx */ r_esi = r_edx;
L_0044fa3f:; BB(0x0044fa3f);
    /* 0044fa3f: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0044fa42: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44fa47u); f_00829cc8();
    /* 0044fa47: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044fa4d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044fa50: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0044fa52: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44fa57u); f_0083046c();
    /* 0044fa57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044fa5a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044fa5d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044fa5f: ja 0x44fa3f */ if ((!fC&&!fZ)) goto L_0044fa3f;
L_0044fa61:; BB(0x0044fa61);
    /* 0044fa61: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0044fa65: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0044fa69: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x44fa6eu); f_0082faac();
    /* 0044fa6e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44fa73u); f_0082da80();
    /* 0044fa73: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044fa77: fcomp dword ptr [0x8ff888] */ fx_compare(ST(0), R_F32((u32)(0x8ff888u))); FPOP();
    /* 0044fa7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044fa7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044fa80: jae 0x44fa87 */ if (!fC) goto L_0044fa87;
L_0044fa82:; BB(0x0044fa82);
    /* 0044fa82: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x44fa87u); f_005963d0();
L_0044fa87:; BB(0x0044fa87);
    /* 0044fa87: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044fa8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fa8b: ret  */ FN_RET(0x0044f984); r_esp += 4; return;
}

void f_0044fa8c(void) /* sub_44FA8C */
{
    FN_ENTER(0x0044fa8c);
    /* 0044fa8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fa8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa91: push 0x8cee3a */ { u32 v = 0x8cee3au; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044fa9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fa9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044faa4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044faa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044faaa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0044faad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0044fab0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0044fab3: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fab8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0044fabf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44fac4u); f_005caba4();
    /* 0044fac4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044fac7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044faca: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044facd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044facf: je 0x44fc41 */ if (fZ) goto L_0044fc41;
L_0044fad5:; BB(0x0044fad5);
    /* 0044fad5: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0044fadc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044fae3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044fae6: mov ecx, eax */ r_ecx = r_eax;
    /* 0044fae8: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0044faeb: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x44faf0u); f_007ba278();
    /* 0044faf0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044faf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fafa: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0044fafd: mov dword ptr [eax], 0xaf6ce8 */ W32((u32)(r_eax), 0xaf6ce8u);
    /* 0044fb03: mov edx, dword ptr [0x9a5be0] */ r_edx = R32((u32)(0x9a5be0u));
    /* 0044fb09: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044fb0c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044fb0f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0044fb11: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 0044fb17: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0044fb1a: mov dword ptr [eax + 0xb0], ebx */ W32((u32)(r_eax+0xb0u), r_ebx);
    /* 0044fb20: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0044fb23: mov dword ptr [eax + 0xb4], edi */ W32((u32)(r_eax+0xb4u), r_edi);
    /* 0044fb29: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 0044fb2f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044fb31: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0044fb34: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 0044fb3a: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0044fb3f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0044fb42:; BB(0x0044fb42);
    /* 0044fb42: mov esi, dword ptr [edi*4 + 0x9a6414] */ r_esi = R32((u32)(r_edi*4+0x9a6414u));
    /* 0044fb49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044fb4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb4d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44fb52u); f_005b8610();
    /* 0044fb52: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044fb55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fb56: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0044fb59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fb5b: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0044fb5e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044fb60: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fb63: mov dword ptr [ebx + edx + 0x90], eax */ W32((u32)(r_ebx+r_edx+0x90u), r_eax);
    /* 0044fb6a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x44fb6fu); f_005b8624();
    /* 0044fb6f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fb72: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044fb75: mov dword ptr [ebx + edx + 0x94], eax */ W32((u32)(r_ebx+r_edx+0x94u), r_eax);
    /* 0044fb7c: push dword ptr [edi*4 + 0x9a5be4] */ { u32 v = R32((u32)(r_edi*4+0x9a5be4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044fb83: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x44fb88u); f_005b8638();
    /* 0044fb88: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fb8b: mov dword ptr [ebx + edx + 0x98], eax */ W32((u32)(r_ebx+r_edx+0x98u), r_eax);
    /* 0044fb92: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044fb95: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fb98: jl 0x44fb42 */ if ((fS!=fO)) goto L_0044fb42;
L_0044fb9a:; BB(0x0044fb9a);
    /* 0044fb9a: mov eax, edx */ r_eax = r_edx;
    /* 0044fb9c: mov dword ptr [eax + 0xc0], 0xbf000000 */ W32((u32)(r_eax+0xc0u), 0xbf000000u);
    /* 0044fba6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fba8: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x44fbadu); f_004d31f4();
    /* 0044fbad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044fbae: movzx eax, byte ptr [0xa44f98] */ r_eax = (u32)R8((u32)(0xa44f98u));
    /* 0044fbb5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044fbb7: jne 0x44fbcd */ if (!fZ) goto L_0044fbcd;
L_0044fbb9:; BB(0x0044fbb9);
    /* 0044fbb9: mov dword ptr [0xa44fa4], 0x3f000000 */ W32((u32)(0xa44fa4u), 0x3f000000u);
    /* 0044fbc3: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044fbc8: mov byte ptr [0xa44f98], al */ W8((u32)(0xa44f98u), (u8)r_eax);
L_0044fbcd:; BB(0x0044fbcd);
    /* 0044fbcd: mov eax, dword ptr [0x8ff870] */ r_eax = R32((u32)(0x8ff870u));
    /* 0044fbd2: mov edx, dword ptr [0x8ff878] */ r_edx = R32((u32)(0x8ff878u));
    /* 0044fbd8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fbdb: mov ecx, dword ptr [ebx + 0xb8] */ r_ecx = R32((u32)(r_ebx+0xb8u));
    /* 0044fbe1: lea ebx, [ebx + 0xac] */ r_ebx = (u32)(r_ebx+0xacu);
    /* 0044fbe7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044fbea: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0044fbed: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044fbf0: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 0044fbf3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fbf4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fbf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fbf6: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x44fbfbu); f_004d681c();
    /* 0044fbfb: push 0x4444 */ { u32 v = 0x4444u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc00: push 0xa44f9c */ { u32 v = 0xa44f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc05: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x44fc0au); f_004d6770();
    /* 0044fc0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc0f: push 0x382 */ { u32 v = 0x382u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc14: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44fc19u); f_00814298();
    /* 0044fc19: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044fc1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fc1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044fc21: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0044fc24: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
L_0044fc2a:; BB(0x0044fc2a);
    /* 0044fc2a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044fc2d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044fc30: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044fc33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044fc36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044fc3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fc3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fc40: ret  */ FN_RET(0x0044fa8c); r_esp += 4; return;
L_0044fc41:; BB(0x0044fc41);
    /* 0044fc41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044fc43: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044fc46: jmp 0x44fc2a */ goto L_0044fc2a;
}

void f_0044fc90(void) /* sub_44FC90 */
{
    FN_ENTER(0x0044fc90);
    /* 0044fc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044fc93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc95: push 0x8cee54 */ { u32 v = 0x8cee54u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fc9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044fca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fca1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044fca8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fcab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044fcae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044fcb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0044fcb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0044fcb7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044fcba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044fcbd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044fcc4: mov eax, ecx */ r_eax = r_ecx;
    /* 0044fcc6: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0044fccc: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0044fcd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fcd4: je 0x44fce8 */ if (fZ) goto L_0044fce8;
L_0044fcd6:; BB(0x0044fcd6);
    /* 0044fcd6: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x44fcdbu); f_005883f0();
    /* 0044fcdb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fcde: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_0044fce8:; BB(0x0044fce8);
    /* 0044fce8: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 0044fcee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fcf0: je 0x44fd06 */ if (fZ) goto L_0044fd06;
L_0044fcf2:; BB(0x0044fcf2);
    /* 0044fcf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fcf3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44fcf8u); f_005cdcc0();
    /* 0044fcf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044fcf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fcfc: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
L_0044fd06:; BB(0x0044fd06);
    /* 0044fd06: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44fd0bu); f_0044bd78();
    /* 0044fd0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd0d: jne 0x44fd14 */ if (!fZ) goto L_0044fd14;
L_0044fd0f:; BB(0x0044fd0f);
    /* 0044fd0f: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x44fd14u); f_004d3250();
L_0044fd14:; BB(0x0044fd14);
    /* 0044fd14: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044fd1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fd1e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x44fd23u); f_007ba1f0();
    /* 0044fd23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044fd26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044fd28: jne 0x44fd3a */ if (!fZ) goto L_0044fd3a;
L_0044fd2a:; BB(0x0044fd2a);
    /* 0044fd2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044fd2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044fd34: mov esp, ebp */ r_esp = r_ebp;
    /* 0044fd36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044fd37: ret 4 */ FN_RET(0x0044fc90); r_esp += 8; return;
L_0044fd3a:; BB(0x0044fd3a);
    /* 0044fd3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044fd3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd3e: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44fd43u); f_005c2f74();
    /* 0044fd43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044fd44: jmp 0x44fd2a */ goto L_0044fd2a;
}

void f_0044fd48(void) /* sub_44FD48 */
{
    FN_ENTER(0x0044fd48);
    /* 0044fd48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044fd4b: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0044fd51: cmp edx, dword ptr [0xa44fb0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44fb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fd57: jl 0x44fd7c */ if ((fS!=fO)) goto L_0044fd7c;
L_0044fd59:; BB(0x0044fd59);
    /* 0044fd59: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 0044fd5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd61: je 0x44fd9e */ if (fZ) goto L_0044fd9e;
L_0044fd63:; BB(0x0044fd63);
    /* 0044fd63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd64: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44fd69u); f_005cdcc0();
    /* 0044fd69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044fd6a: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0044fd70: mov dword ptr [ebx + 0x90], 0 */ W32((u32)(r_ebx+0x90u), 0x0u);
    /* 0044fd7a: jmp 0x44fd9e */ goto L_0044fd9e;
L_0044fd7c:; BB(0x0044fd7c);
    /* 0044fd7c: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 0044fd82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fd84: je 0x44fe51 */ if (fZ) goto L_0044fe51;
L_0044fd8a:; BB(0x0044fd8a);
    /* 0044fd8a: je 0x44fd9e */ if (fZ) goto L_0044fd9e;
L_0044fd8c:; BB(0x0044fd8c);
    /* 0044fd8c: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 0044fd92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fd93: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x44fd98u); f_00508db8();
    /* 0044fd98: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
L_0044fd9e:; BB(0x0044fd9e);
    /* 0044fd9e: cmp edx, dword ptr [0xa44fb4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44fb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fda4: jne 0x44fdd5 */ if (!fZ) goto L_0044fdd5;
L_0044fda6:; BB(0x0044fda6);
    /* 0044fda6: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdab: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 0044fdb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdb2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44fdb7u); f_0050b510();
    /* 0044fdb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044fdba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fdbc: je 0x44fdcf */ if (fZ) goto L_0044fdcf;
L_0044fdbe:; BB(0x0044fdbe);
    /* 0044fdbe: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdc0: mov ecx, eax */ r_ecx = r_eax;
    /* 0044fdc2: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44fdc7u); f_00508efc();
    /* 0044fdc7: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0044fdcd: jmp 0x44fdd5 */ goto L_0044fdd5;
L_0044fdcf:; BB(0x0044fdcf);
    /* 0044fdcf: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
L_0044fdd5:; BB(0x0044fdd5);
    /* 0044fdd5: cmp edx, dword ptr [0xa44fb8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44fb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fddb: je 0x44fde5 */ if (fZ) goto L_0044fde5;
L_0044fddd:; BB(0x0044fddd);
    /* 0044fddd: cmp edx, dword ptr [0xa44fbc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44fbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fde3: jne 0x44fe03 */ if (!fZ) goto L_0044fe03;
L_0044fde5:; BB(0x0044fde5);
    /* 0044fde5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fde7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fde9: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 0044fdef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdf0: push 0x397 */ { u32 v = 0x397u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44fdfau); f_00814298();
    /* 0044fdfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044fdfd: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
L_0044fe03:; BB(0x0044fe03);
    /* 0044fe03: fld dword ptr [0x8ff8d8] */ FPUSH(R_F32((u32)(0x8ff8d8u)));
    /* 0044fe09: fadd dword ptr [ebx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb4u));
    /* 0044fe0f: fcom dword ptr [0x8ff890] */ fx_compare(ST(0), R_F32((u32)(0x8ff890u))); 
    /* 0044fe15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044fe17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044fe18: jbe 0x44fe29 */ if ((fC||fZ)) goto L_0044fe29;
L_0044fe1a:; BB(0x0044fe1a);
    /* 0044fe1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044fe1c: mov eax, 0x42ee0000 */ r_eax = 0x42ee0000u;
    /* 0044fe21: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 0044fe27: jmp 0x44fe2f */ goto L_0044fe2f;
L_0044fe29:; BB(0x0044fe29);
    /* 0044fe29: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
L_0044fe2f:; BB(0x0044fe2f);
    /* 0044fe2f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044fe32: cmp edx, dword ptr [0xa44fc0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa44fc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044fe38: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0044fe3e: jl 0x44fe4f */ if ((fS!=fO)) goto L_0044fe4f;
L_0044fe40:; BB(0x0044fe40);
    /* 0044fe40: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0044fe44: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044fe49: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0044fe4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044fe4e: ret  */ FN_RET(0x0044fd48); r_esp += 4; return;
L_0044fe4f:; BB(0x0044fe4f);
    /* 0044fe4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044fe50: ret  */ FN_RET(0x0044fd48); r_esp += 4; return;
L_0044fe51:; BB(0x0044fe51);
    /* 0044fe51: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe56: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 0044fe5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe5d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44fe62u); f_00509590();
    /* 0044fe62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044fe65: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 0044fe6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044fe6d: je 0x44fe83 */ if (fZ) goto L_0044fe83;
L_0044fe6f:; BB(0x0044fe6f);
    /* 0044fe6f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe71: mov ecx, eax */ r_ecx = r_eax;
    /* 0044fe73: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44fe78u); f_00508efc();
    /* 0044fe78: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0044fe7e: jmp 0x44fd9e */ goto L_0044fd9e;
L_0044fe83:; BB(0x0044fe83);
    /* 0044fe83: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0044fe89: jmp 0x44fd9e */ goto L_0044fd9e;
}

void f_0044fe90(void) /* sub_44FE90 */
{
    FN_ENTER(0x0044fe90);
    /* 0044fe90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044fe91: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fe94: mov edi, ecx */ r_edi = r_ecx;
    /* 0044fe96: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0044fe9c: fld dword ptr [0x8ff8d4] */ FPUSH(R_F32((u32)(0x8ff8d4u)));
    /* 0044fea2: mov edx, dword ptr [0xa44fc4] */ r_edx = R32((u32)(0xa44fc4u));
    /* 0044fea8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044feac: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044feae: jge 0x44fec8 */ if ((fS==fO)) goto L_0044fec8;
L_0044feb0:; BB(0x0044feb0);
    /* 0044feb0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044feb4: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0044feb8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0044febc: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044fec0: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044fec2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044fec6: jmp 0x44fef4 */ goto L_0044fef4;
L_0044fec8:; BB(0x0044fec8);
    /* 0044fec8: mov edx, dword ptr [0xa44fb4] */ r_edx = R32((u32)(0xa44fb4u));
    /* 0044fece: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044fed0: jle 0x44ff23 */ if ((fZ||fS!=fO)) goto L_0044ff23;
L_0044fed2:; BB(0x0044fed2);
    /* 0044fed2: mov ecx, dword ptr [0xa44fc8] */ r_ecx = R32((u32)(0xa44fc8u));
    /* 0044fed8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044feda: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044fedc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0044fee0: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044fee4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044fee6: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0044feea: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0044feee: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044fef0: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_0044fef4:; BB(0x0044fef4);
    /* 0044fef4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044fef8: fcomp dword ptr [0x8ff8d0] */ fx_compare(ST(0), R_F32((u32)(0x8ff8d0u))); FPOP();
    /* 0044fefe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ff00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ff01: ja 0x44ff08 */ if ((!fC&&!fZ)) goto L_0044ff08;
L_0044ff03:; BB(0x0044ff03);
    /* 0044ff03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044ff06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ff07: ret  */ FN_RET(0x0044fe90); r_esp += 4; return;
L_0044ff08:; BB(0x0044ff08);
    /* 0044ff08: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044ff0c: fcomp dword ptr [0x8ff8d4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8d4u))); FPOP();
    /* 0044ff12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ff14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ff15: jae 0x44ff23 */ if (!fC) goto L_0044ff23;
L_0044ff17:; BB(0x0044ff17);
    /* 0044ff17: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044ff1b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044ff1e: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x44ff23u); f_00453af4();
L_0044ff23:; BB(0x0044ff23);
    /* 0044ff23: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44ff28u); f_0082d7b0();
    /* 0044ff28: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x44ff2du); f_0082fa9c();
    /* 0044ff2d: lea ecx, [edi + 0xa0] */ r_ecx = (u32)(r_edi+0xa0u);
    /* 0044ff33: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44ff38u); f_0082d838();
    /* 0044ff38: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 0044ff3e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ff40: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44ff45u); f_0082d8bc();
    /* 0044ff45: mov ecx, dword ptr [edi + 0x98] */ r_ecx = R32((u32)(r_edi+0x98u));
    /* 0044ff4b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44ff50u); f_00829cc8();
    /* 0044ff50: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 0044ff56: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x44ff5bu); f_00588428();
    /* 0044ff5b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0044ff60: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x44ff65u); f_0061cdb0();
    /* 0044ff65: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ff6b: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ff71: push dword ptr [edi + 0x94] */ { u32 v = R32((u32)(r_edi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ff77: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44ff7cu); f_0083046c();
    /* 0044ff7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ff7f: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 0044ff85: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x44ff8au); f_00452050();
    /* 0044ff8a: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0044ff8f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x44ff94u); f_0061cdb0();
    /* 0044ff94: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ff9a: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ffa0: push dword ptr [edi + 0x94] */ { u32 v = R32((u32)(r_edi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ffa6: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44ffabu); f_0083046c();
    /* 0044ffab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ffae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x44ffb3u); f_0061cdb0();
    /* 0044ffb3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x44ffb8u); f_0082faac();
    /* 0044ffb8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44ffbdu); f_0082da80();
    /* 0044ffbd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044ffc1: fcomp dword ptr [0x8ff8d4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8d4u))); FPOP();
    /* 0044ffc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ffc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ffca: jae 0x44ffd1 */ if (!fC) goto L_0044ffd1;
L_0044ffcc:; BB(0x0044ffcc);
    /* 0044ffcc: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x44ffd1u); f_005963d0();
L_0044ffd1:; BB(0x0044ffd1);
    /* 0044ffd1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044ffd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ffd5: ret  */ FN_RET(0x0044fe90); r_esp += 4; return;
}

void f_0044ffd8(void) /* sub_44FFD8 */
{
    FN_ENTER(0x0044ffd8);
    /* 0044ffd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ffd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ffdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ffdd: push 0x8cee8a */ { u32 v = 0x8cee8au; r_esp -= 4; W32(r_esp, v); }
    /* 0044ffe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ffe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ffe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044fff0: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044fff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044fff6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044fff9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0044fffc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0044ffff: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00450004: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045000b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450010u); f_005caba4();
    /* 00450010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450016: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00450019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045001b: je 0x4501fb */ if (fZ) goto L_004501fb;
L_00450021:; BB(0x00450021);
    /* 00450021: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_004501d3:; BB(0x004501d3);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0044ffd8); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
L_004501fb:; BB(0x004501fb);
    /* 004501fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450200: jmp 0x4501d3 */ goto L_004501d3;
}

