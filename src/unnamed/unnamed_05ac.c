#include "protos.h"

void f_005ac058(void) /* sub_5AC058 */
{
    FN_ENTER(0x005ac058);
    /* 005ac058: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ac05c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ac060: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005ac062: fld dword ptr [0x92a5a4] */ FPUSH(R_F32((u32)(0x92a5a4u)));
    /* 005ac068: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ac06a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac06c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac06d: jae 0x5ac07d */ if (!fC) goto L_005ac07d;
L_005ac06f:; BB(0x005ac06f);
    /* 005ac06f: fld dword ptr [0x92a59c] */ FPUSH(R_F32((u32)(0x92a59cu)));
    /* 005ac075: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ac079: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005ac07b: jmp 0x5ac090 */ goto L_005ac090;
L_005ac07d:; BB(0x005ac07d);
    /* 005ac07d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ac07f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac081: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac082: jbe 0x5ac0a8 */ if ((fC||fZ)) goto L_005ac0a8;
L_005ac084:; BB(0x005ac084);
    /* 005ac084: fld dword ptr [0x92a5a0] */ FPUSH(R_F32((u32)(0x92a5a0u)));
    /* 005ac08a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ac08e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_005ac090:; BB(0x005ac090);
    /* 005ac090: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005ac092: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 005ac094: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005ac096: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005ac098: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005ac09a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac09c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac09d: jae 0x5ac0a3 */ if (!fC) goto L_005ac0a3;
L_005ac09f:; BB(0x005ac09f);
    /* 005ac09f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac0a1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_005ac0a3:; BB(0x005ac0a3);
    /* 005ac0a3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ac0a5: ret 8 */ FN_RET(0x005ac058); r_esp += 12; return;
L_005ac0a8:; BB(0x005ac0a8);
    /* 005ac0a8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ac0aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac0ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac0ae: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ac0b2: ret 8 */ FN_RET(0x005ac058); r_esp += 12; return;
}

void f_005ac0b8(void) /* sub_5AC0B8 */
{
    FN_ENTER(0x005ac0b8);
    /* 005ac0b8: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 005ac0be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ac0c0: je 0x5ac0dd */ if (fZ) goto L_005ac0dd;
L_005ac0c2:; BB(0x005ac0c2);
    /* 005ac0c2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005ac0c5: mov dword ptr [ecx + 0x2a4], edx */ W32((u32)(r_ecx+0x2a4u), r_edx);
    /* 005ac0cb: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005ac0ce: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 005ac0d4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005ac0d7: mov dword ptr [ecx + 0x2ac], eax */ W32((u32)(r_ecx+0x2acu), r_eax);
L_005ac0dd:; BB(0x005ac0dd);
    /* 005ac0dd: ret  */ FN_RET(0x005ac0b8); r_esp += 4; return;
}

void f_005ac0e0(void) /* sub_5AC0E0 */
{
    FN_ENTER(0x005ac0e0);
    /* 005ac0e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac0e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac0e2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac0e5: mov edi, ecx */ r_edi = r_ecx;
    /* 005ac0e7: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac0e9: call 0x5ac1c4 */ r_esp -= 4; W32(r_esp, 0x5ac0eeu); f_005ac1c4();
    /* 005ac0ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac0f0: je 0x5ac1b6 */ if (fZ) goto L_005ac1b6;
L_005ac0f6:; BB(0x005ac0f6);
    /* 005ac0f6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ac0fbu); f_00807ac0();
    /* 005ac0fb: push dword ptr [eax*4 + 0x9c0eb0] */ { u32 v = R32((u32)(r_eax*4+0x9c0eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac102: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac104: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ac109u); f_007879b8();
    /* 005ac109: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005ac10c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ac10e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac10f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ac117u); f_00814298();
    /* 005ac117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac11a: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac11c: call 0x5ac258 */ r_esp -= 4; W32(r_esp, 0x5ac121u); f_005ac258();
    /* 005ac121: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005ac127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac129: je 0x5ac1b0 */ if (fZ) goto L_005ac1b0;
L_005ac12f:; BB(0x005ac12f);
    /* 005ac12f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005ac133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac134: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5ac139u); f_0068d5a8();
    /* 005ac139: mov ebx, eax */ r_ebx = r_eax;
    /* 005ac13b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac13e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac140: je 0x5ac1b0 */ if (fZ) goto L_005ac1b0;
L_005ac142:; BB(0x005ac142);
    /* 005ac142: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac144: call 0x68c414 */ r_esp -= 4; W32(r_esp, 0x5ac149u); f_0068c414();
    /* 005ac149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac14b: jne 0x5ac153 */ if (!fZ) goto L_005ac153;
L_005ac14d:; BB(0x005ac14d);
    /* 005ac14d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac151: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac152: ret  */ FN_RET(0x005ac0e0); r_esp += 4; return;
L_005ac153:; BB(0x005ac153);
    /* 005ac153: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005ac159: fcomp dword ptr [edi + 0x470] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x470u))); FPOP();
    /* 005ac15f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac161: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac162: jae 0x5ac1b0 */ if (!fC) goto L_005ac1b0;
L_005ac164:; BB(0x005ac164);
    /* 005ac164: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ac167: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005ac16a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005ac16d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005ac170: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005ac174: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005ac177: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005ac17b: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005ac17e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5ac183u); f_0082f9c4();
    /* 005ac183: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005ac186: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5ac18bu); f_0082df08();
    /* 005ac18b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac18d: fld dword ptr [edi + 0x474] */ FPUSH(R_F32((u32)(r_edi+0x474u)));
    /* 005ac193: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac196: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ac19a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005ac19c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005ac1a0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005ac1a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ac1a5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005ac1a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac1ab: call 0x77a0f8 */ r_esp -= 4; W32(r_esp, 0x5ac1b0u); f_0077a0f8();
L_005ac1b0:; BB(0x005ac1b0);
    /* 005ac1b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac1b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac1b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac1b5: ret  */ FN_RET(0x005ac0e0); r_esp += 4; return;
L_005ac1b6:; BB(0x005ac1b6);
    /* 005ac1b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac1b8: call 0x5ac90c */ r_esp -= 4; W32(r_esp, 0x5ac1bdu); f_005ac90c();
    /* 005ac1bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac1c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac1c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac1c2: ret  */ FN_RET(0x005ac0e0); r_esp += 4; return;
}

void f_005ac1c4(void) /* sub_5AC1C4 */
{
    FN_ENTER(0x005ac1c4);
    /* 005ac1c4: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 005ac1ca: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac1cd: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 005ac1d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ac1d5: jle 0x5ac24d */ if ((fZ||fS!=fO)) goto L_005ac24d;
L_005ac1d7:; BB(0x005ac1d7);
    /* 005ac1d7: fld dword ptr [ecx + 0x3b4] */ FPUSH(R_F32((u32)(r_ecx+0x3b4u)));
    /* 005ac1dd: fcomp dword ptr [0x92a5e8] */ fx_compare(ST(0), R_F32((u32)(0x92a5e8u))); FPOP();
    /* 005ac1e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac1e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac1e6: jb 0x5ac24d */ if (fC) goto L_005ac24d;
L_005ac1e8:; BB(0x005ac1e8);
    /* 005ac1e8: fld dword ptr [ecx + 0x46c] */ FPUSH(R_F32((u32)(r_ecx+0x46cu)));
    /* 005ac1ee: fadd dword ptr [ecx + 0x470] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x470u));
    /* 005ac1f4: fld dword ptr [ecx + 0x460] */ FPUSH(R_F32((u32)(r_ecx+0x460u)));
    /* 005ac1fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005ac1fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac1fe: fld dword ptr [ecx + 0x460] */ FPUSH(R_F32((u32)(r_ecx+0x460u)));
    /* 005ac204: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac205: fcom dword ptr [0x92a598] */ fx_compare(ST(0), R_F32((u32)(0x92a598u))); 
    /* 005ac20b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac20d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ac20f: ja 0x5ac213 */ if ((!fC&&!fZ)) goto L_005ac213;
L_005ac211:; BB(0x005ac211);
    /* 005ac211: fst st(2) */ ST(2) = ST(0);
L_005ac213:; BB(0x005ac213);
    /* 005ac213: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac215: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ac217: fst dword ptr [ecx + 0x470] */ W_F32((u32)(r_ecx+0x470u), ST(0));
    /* 005ac21d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac21e: je 0x5ac250 */ if (fZ) goto L_005ac250;
L_005ac220:; BB(0x005ac220);
    /* 005ac220: fld dword ptr [ecx + 0x464] */ FPUSH(R_F32((u32)(r_ecx+0x464u)));
    /* 005ac226: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ac228: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005ac22a: fcom dword ptr [ecx + 0x464] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x464u))); 
    /* 005ac230: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ac232: mov edx, dword ptr [ecx + 0x464] */ r_edx = R32((u32)(r_ecx+0x464u));
    /* 005ac238: fstp dword ptr [ecx + 0x474] */ W_F32((u32)(r_ecx+0x474u), ST(0)); FPOP();
    /* 005ac23e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ac23f: jb 0x5ac247 */ if (fC) goto L_005ac247;
L_005ac241:; BB(0x005ac241);
    /* 005ac241: mov dword ptr [ecx + 0x474], edx */ W32((u32)(r_ecx+0x474u), r_edx);
L_005ac247:; BB(0x005ac247);
    /* 005ac247: mov eax, 1 */ r_eax = 0x1u;
    /* 005ac24c: ret  */ FN_RET(0x005ac1c4); r_esp += 4; return;
L_005ac24d:; BB(0x005ac24d);
    /* 005ac24d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ac24f: ret  */ FN_RET(0x005ac1c4); r_esp += 4; return;
L_005ac250:; BB(0x005ac250);
    /* 005ac250: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005ac252: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ac254: jmp 0x5ac247 */ goto L_005ac247;
}

void f_005ac258(void) /* sub_5AC258 */
{
    FN_ENTER(0x005ac258);
    /* 005ac258: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac259: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac25a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac25d: mov esi, ecx */ r_esi = r_ecx;
    /* 005ac25f: mov edx, dword ptr [0x92a4bc] */ r_edx = R32((u32)(0x92a4bcu));
    /* 005ac265: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005ac26c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005ac26f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005ac277: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005ac27f: mov eax, dword ptr [esi + 0x470] */ r_eax = R32((u32)(r_esi+0x470u));
    /* 005ac285: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005ac289: mov eax, dword ptr [0x92a4c0] */ r_eax = R32((u32)(0x92a4c0u));
    /* 005ac28e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005ac292: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005ac296: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005ac299: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac29e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005ac2a1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005ac2a5: fld dword ptr [esi + 0x470] */ FPUSH(R_F32((u32)(r_esi+0x470u)));
    /* 005ac2ab: fdiv dword ptr [0x92a594] */ ST(0) = ST(0) / R_F32((u32)(0x92a594u));
    /* 005ac2b1: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 005ac2b7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005ac2bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac2bd: je 0x5ac336 */ if (fZ) goto L_005ac336;
L_005ac2bf:; BB(0x005ac2bf);
    /* 005ac2bf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ac2c4u); f_0082d7b0();
    /* 005ac2c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac2c6: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5ac2cbu); f_00830cd8();
    /* 005ac2cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ac2cd: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ac2d2u); f_0082d838();
    /* 005ac2d2: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005ac2d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac2d7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ac2dcu); f_0082d8bc();
    /* 005ac2dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ac2df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac2e0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005ac2e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac2e6: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5ac2ebu); f_00830aa0();
    /* 005ac2eb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ac2f0u); f_0082da80();
    /* 005ac2f0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ac2f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac2f4: mov ecx, dword ptr [esi + 0x47c] */ r_ecx = R32((u32)(r_esi+0x47cu));
    /* 005ac2fa: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5ac2ffu); f_00508db8();
    /* 005ac2ff: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005ac303: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 005ac309: fst dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0));
    /* 005ac30c: fst dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0));
    /* 005ac30f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ac313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac314: mov ebp, dword ptr [esi + 0x47c] */ r_ebp = R32((u32)(r_esi+0x47cu));
    /* 005ac31a: movzx edx, word ptr [ebp + 0x2e] */ r_edx = (u32)R16((u32)(r_ebp+0x2eu));
    /* 005ac31e: fstp dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0)); FPOP();
    /* 005ac321: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ac327: mov word ptr [ebp + 0x2e], dx */ W16((u32)(r_ebp+0x2eu), (u16)r_edx);
    /* 005ac32b: mov ecx, dword ptr [esi + 0x47c] */ r_ecx = R32((u32)(r_esi+0x47cu));
    /* 005ac331: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x5ac336u); f_00508dd0();
L_005ac336:; BB(0x005ac336);
    /* 005ac336: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac339: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac33a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ac33b: ret  */ FN_RET(0x005ac258); r_esp += 4; return;
}

void f_005ac33c(void) /* sub_5AC33C */
{
    FN_ENTER(0x005ac33c);
    /* 005ac33c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac33d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac33e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac33f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac340: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac343: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ac345: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 005ac34a: cmp eax, dword ptr [0xa74888] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa74888u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac350: je 0x5ac36b */ if (fZ) goto L_005ac36b;
L_005ac352:; BB(0x005ac352);
    /* 005ac352: mov dword ptr [0xa74888], eax */ W32((u32)(0xa74888u), r_eax);
    /* 005ac357: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac359: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac35b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac35d: push dword ptr [0xa7488c] */ { u32 v = R32((u32)(0xa7488cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac363: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x5ac368u); f_0081a2b0();
    /* 005ac368: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ac36b:; BB(0x005ac36b);
    /* 005ac36b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5ac370u); f_004f7c84();
    /* 005ac370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac372: je 0x5ac386 */ if (fZ) goto L_005ac386;
L_005ac374:; BB(0x005ac374);
    /* 005ac374: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ac376: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac378: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5ac37eu); call_ind(t); }
    /* 005ac37e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac381: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac382: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac383: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ac384: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac385: ret  */ FN_RET(0x005ac33c); r_esp += 4; return;
L_005ac386:; BB(0x005ac386);
    /* 005ac386: lea edi, [ebx + 0x3dc] */ r_edi = (u32)(r_ebx+0x3dcu);
    /* 005ac38c: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac38e: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5ac393u); f_005771a4();
    /* 005ac393: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005ac399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac39a: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac39c: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5ac3a1u); f_0057725c();
    /* 005ac3a1: mov esi, eax */ r_esi = r_eax;
    /* 005ac3a3: movsx ebp, word ptr [ebx + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005ac3aa: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac3ad: je 0x5ac50c */ if (fZ) goto L_005ac50c;
L_005ac3b3:; BB(0x005ac3b3);
    /* 005ac3b3: mov edx, dword ptr [0xa16380] */ r_edx = R32((u32)(0xa16380u));
    /* 005ac3b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac3bb: jne 0x5ac3e6 */ if (!fZ) goto L_005ac3e6;
L_005ac3bd:; BB(0x005ac3bd);
    /* 005ac3bd: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac3c0: je 0x5ac3e6 */ if (fZ) goto L_005ac3e6;
L_005ac3c2:; BB(0x005ac3c2);
    /* 005ac3c2: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 005ac3c9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ac3cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac3ce: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005ac3d6: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 005ac3de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3e1: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5ac3e6u); f_00520cf8();
L_005ac3e6:; BB(0x005ac3e6);
    /* 005ac3e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac3e8: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5ac3edu); f_00520608();
    /* 005ac3ed: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005ac3f3: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005ac3f6: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005ac3fc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5ac401u); f_00829cc8();
    /* 005ac401: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ac406u); f_0082d7b0();
    /* 005ac406: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005ac409: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ac40eu); f_0082d838();
    /* 005ac40e: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005ac411: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac413: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ac418u); f_0082d8bc();
    /* 005ac418: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5ac41du); f_00520d08();
    /* 005ac41d: push 0x5aa184 */ { u32 v = 0x5aa184u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac422: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 005ac428: mov ebp, dword ptr [ebx + 0x3d0] */ r_ebp = R32((u32)(r_ebx+0x3d0u));
    /* 005ac42e: mov dword ptr [0xa74874], edx */ W32((u32)(0xa74874u), r_edx);
    /* 005ac434: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 005ac43a: mov dword ptr [0xa74878], ebp */ W32((u32)(0xa74878u), r_ebp);
    /* 005ac440: mov dword ptr [0xa7487c], edx */ W32((u32)(0xa7487cu), r_edx);
    /* 005ac446: mov edx, dword ptr [ebx + 0x3d8] */ r_edx = R32((u32)(r_ebx+0x3d8u));
    /* 005ac44c: mov dword ptr [0xa74880], edx */ W32((u32)(0xa74880u), r_edx);
    /* 005ac452: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x5ac457u); f_0082e8e4();
    /* 005ac457: mov ebp, eax */ r_ebp = r_eax;
    /* 005ac459: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac45c: mov dword ptr [0xa74884], 0 */ W32((u32)(0xa74884u), 0x0u);
    /* 005ac466: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5ac46bu); f_00578b38();
    /* 005ac46b: mov edx, dword ptr [ebx + 0x44c] */ r_edx = R32((u32)(r_ebx+0x44cu));
    /* 005ac471: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ac474: jne 0x5ac4ad */ if (!fZ) goto L_005ac4ad;
L_005ac476:; BB(0x005ac476);
    /* 005ac476: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac478: jne 0x5ac483 */ if (!fZ) goto L_005ac483;
L_005ac47a:; BB(0x005ac47a);
    /* 005ac47a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac47c: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x5ac481u); f_007aa850();
    /* 005ac481: jmp 0x5ac4ea */ goto L_005ac4ea;
L_005ac483:; BB(0x005ac483);
    /* 005ac483: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 005ac489: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac48b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5ac48eu); call_ind(t); }
    /* 005ac48e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac490: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5ac495u); f_008173d0();
    /* 005ac495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac497: jne 0x5ac4a0 */ if (!fZ) goto L_005ac4a0;
L_005ac499:; BB(0x005ac499);
    /* 005ac499: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac49b: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x5ac4a0u); f_007aa850();
L_005ac4a0:; BB(0x005ac4a0);
    /* 005ac4a0: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 005ac4a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac4a8: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ac4abu); call_ind(t); }
    /* 005ac4ab: jmp 0x5ac4ea */ goto L_005ac4ea;
L_005ac4ad:; BB(0x005ac4ad);
    /* 005ac4ad: mov edx, dword ptr [ebx + 0x490] */ r_edx = R32((u32)(r_ebx+0x490u));
    /* 005ac4b3: lea esi, [ebx + 0x490] */ r_esi = (u32)(r_ebx+0x490u);
    /* 005ac4b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005ac4bb: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x5ac4beu); call_ind(t); }
    /* 005ac4be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac4c0: je 0x5ac4ea */ if (fZ) goto L_005ac4ea;
L_005ac4c2:; BB(0x005ac4c2);
    /* 005ac4c2: mov edx, dword ptr [ebx + 0x490] */ r_edx = R32((u32)(r_ebx+0x490u));
    /* 005ac4c8: mov ecx, esi */ r_ecx = r_esi;
    /* 005ac4ca: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5ac4cdu); call_ind(t); }
    /* 005ac4cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac4cf: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5ac4d4u); f_008173d0();
    /* 005ac4d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac4d6: jne 0x5ac4df */ if (!fZ) goto L_005ac4df;
L_005ac4d8:; BB(0x005ac4d8);
    /* 005ac4d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac4da: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x5ac4dfu); f_007aa850();
L_005ac4df:; BB(0x005ac4df);
    /* 005ac4df: mov edx, dword ptr [ebx + 0x490] */ r_edx = R32((u32)(r_ebx+0x490u));
    /* 005ac4e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005ac4e7: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ac4eau); call_ind(t); }
L_005ac4ea:; BB(0x005ac4ea);
    /* 005ac4ea: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5ac4efu); f_0082dab0();
    /* 005ac4ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac4f0: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x5ac4f5u); f_0082e8e4();
    /* 005ac4f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ac4f6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ac4fbu); f_0082da80();
    /* 005ac4fb: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005ac500: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005ac505: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac507: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x5ac50cu); f_00520610();
L_005ac50c:; BB(0x005ac50c);
    /* 005ac50c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac50f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac510: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac511: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ac512: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac513: ret  */ FN_RET(0x005ac33c); r_esp += 4; return;
}

void f_005ac514(void) /* sub_5AC514 */
{
    FN_ENTER(0x005ac514);
    /* 005ac514: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac515: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac518: mov edi, ecx */ r_edi = r_ecx;
    /* 005ac51a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005ac51c: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac51e: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac523: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac528: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5ac52bu); call_ind(t); }
    /* 005ac52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac52d: je 0x5ac59d */ if (fZ) goto L_005ac59d;
L_005ac52f:; BB(0x005ac52f);
    /* 005ac52f: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 005ac536: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ac539: mov ecx, edi */ r_ecx = r_edi;
    /* 005ac53b: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005ac543: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 005ac54b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac54d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac54e: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5ac553u); f_00520cf8();
    /* 005ac553: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005ac556: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5ac55bu); f_00829cc8();
    /* 005ac55b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ac560u); f_0082d7b0();
    /* 005ac560: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005ac563: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ac568u); f_0082d838();
    /* 005ac568: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005ac56b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac56d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ac572u); f_0082d8bc();
    /* 005ac572: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5ac577u); f_00520d08();
    /* 005ac577: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5ac57cu); f_00578b38();
    /* 005ac57c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac57e: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x5ac583u); f_007a9404();
    /* 005ac583: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac586: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5ac58bu); f_0082e1e8();
    /* 005ac58b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac58e: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x5ac593u); f_007a9424();
    /* 005ac593: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5ac598u); f_0082dab0();
    /* 005ac598: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ac59du); f_0082da80();
L_005ac59d:; BB(0x005ac59d);
    /* 005ac59d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac5a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac5a1: ret  */ FN_RET(0x005ac514); r_esp += 4; return;
}

void f_005ac5a4(void) /* sub_5AC5A4 */
{
    FN_ENTER(0x005ac5a4);
    /* 005ac5a4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005ac5ab: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ac5ae: je 0x5ac5bc */ if (fZ) goto L_005ac5bc;
L_005ac5b0:; BB(0x005ac5b0);
    /* 005ac5b0: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ac5b3: je 0x5ac5bc */ if (fZ) goto L_005ac5bc;
L_005ac5b5:; BB(0x005ac5b5);
    /* 005ac5b5: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5b7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ac5bcu); f_0051f62c();
L_005ac5bc:; BB(0x005ac5bc);
    /* 005ac5bc: ret  */ FN_RET(0x005ac5a4); r_esp += 4; return;
}

void f_005ac5c0(void) /* sub_5AC5C0 */
{
    FN_ENTER(0x005ac5c0);
    /* 005ac5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ac5c3: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005ac5ca: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ac5cd: je 0x5ac68e */ if (fZ) goto L_005ac68e;
L_005ac5d3:; BB(0x005ac5d3);
    /* 005ac5d3: mov edx, dword ptr [ebp + 0x44c] */ r_edx = R32((u32)(r_ebp+0x44cu));
    /* 005ac5d9: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ac5dc: je 0x5ac5e7 */ if (fZ) goto L_005ac5e7;
L_005ac5de:; BB(0x005ac5de);
    /* 005ac5de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ac5e0: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5ac5e5u); f_0051f81c();
    /* 005ac5e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac5e6: ret  */ FN_RET(0x005ac5c0); r_esp += 4; return;
L_005ac5e7:; BB(0x005ac5e7);
    /* 005ac5e7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ac5ea: je 0x5ac5f3 */ if (fZ) goto L_005ac5f3;
L_005ac5ec:; BB(0x005ac5ec);
    /* 005ac5ec: mov eax, 1 */ r_eax = 0x1u;
    /* 005ac5f1: jmp 0x5ac5f5 */ goto L_005ac5f5;
L_005ac5f3:; BB(0x005ac5f3);
    /* 005ac5f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ac5f5:; BB(0x005ac5f5);
    /* 005ac5f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac5f7: je 0x5ac654 */ if (fZ) goto L_005ac654;
L_005ac5f9:; BB(0x005ac5f9);
    /* 005ac5f9: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ac5fc: je 0x5ac605 */ if (fZ) goto L_005ac605;
L_005ac5fe:; BB(0x005ac5fe);
    /* 005ac5fe: mov eax, 1 */ r_eax = 0x1u;
    /* 005ac603: jmp 0x5ac607 */ goto L_005ac607;
L_005ac605:; BB(0x005ac605);
    /* 005ac605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ac607:; BB(0x005ac607);
    /* 005ac607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ac609: jne 0x5ac68e */ if (!fZ) goto L_005ac68e;
L_005ac60f:; BB(0x005ac60f);
    /* 005ac60f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005ac611: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ac614: mov dword ptr [ebp + 0x44c], edx */ W32((u32)(r_ebp+0x44cu), r_edx);
    /* 005ac61a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ac61c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ac621u); f_0051f62c();
    /* 005ac621: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005ac627: mov dword ptr [ebp + 0x3c8], 4 */ W32((u32)(r_ebp+0x3c8u), 0x4u);
    /* 005ac631: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac635: mov word ptr [ebp + 0x2f6], ax */ W16((u32)(r_ebp+0x2f6u), (u16)r_eax);
    /* 005ac63c: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac640: mov word ptr [ebp + 0x2fa], dx */ W16((u32)(r_ebp+0x2fau), (u16)r_edx);
    /* 005ac647: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac64b: mov word ptr [ebp + 0x2f8], ax */ W16((u32)(r_ebp+0x2f8u), (u16)r_eax);
    /* 005ac652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac653: ret  */ FN_RET(0x005ac5c0); r_esp += 4; return;
L_005ac654:; BB(0x005ac654);
    /* 005ac654: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac656: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ac658: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ac65du); f_0051f62c();
    /* 005ac65d: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005ac663: mov dword ptr [ebp + 0x3c8], 4 */ W32((u32)(r_ebp+0x3c8u), 0x4u);
    /* 005ac66d: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac671: mov word ptr [ebp + 0x2f6], ax */ W16((u32)(r_ebp+0x2f6u), (u16)r_eax);
    /* 005ac678: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac67c: mov word ptr [ebp + 0x2fa], dx */ W16((u32)(r_ebp+0x2fau), (u16)r_edx);
    /* 005ac683: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ac687: mov word ptr [ebp + 0x2f8], ax */ W16((u32)(r_ebp+0x2f8u), (u16)r_eax);
L_005ac68e:; BB(0x005ac68e);
    /* 005ac68e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac68f: ret  */ FN_RET(0x005ac5c0); r_esp += 4; return;
}

void f_005ac6e4(void) /* sub_5AC6E4 */
{
    FN_ENTER(0x005ac6e4);
    /* 005ac6e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac6e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6e9: push 0x8d8dd2 */ { u32 v = 0x8d8dd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ac6f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ac6fc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac6ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ac702: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ac705: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ac708: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ac70b: push 0x9c0f94 */ { u32 v = 0x9c0f94u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac710: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x5ac715u); f_0051f6b0();
    /* 005ac715: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ac716: mov dword ptr [0xa74858], eax */ W32((u32)(0xa74858u), r_eax);
    /* 005ac71b: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5ac720u); f_0052d360();
    /* 005ac720: mov eax, dword ptr [0xa74858] */ r_eax = R32((u32)(0xa74858u));
    /* 005ac725: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005ac72b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ac72e: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 005ac731: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005ac734: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005ac737: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005ac73a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005ac73d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005ac740: mov dword ptr [0xa7488c], eax */ W32((u32)(0xa7488cu), r_eax);
    /* 005ac745: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac747: mov dword ptr [0xa74888], 0 */ W32((u32)(0xa74888u), 0x0u);
    /* 005ac751: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5ac756u); f_0077a684();
    /* 005ac756: mov dword ptr [0xa74868], eax */ W32((u32)(0xa74868u), r_eax);
    /* 005ac75b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac75d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ac762u); f_0077a698();
    /* 005ac762: mov dword ptr [0xa74864], eax */ W32((u32)(0xa74864u), r_eax);
    /* 005ac767: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac769: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5ac76eu); f_0077a6b4();
    /* 005ac76e: mov dword ptr [0xa74860], eax */ W32((u32)(0xa74860u), r_eax);
    /* 005ac773: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac775: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5ac77au); f_0077a6cc();
    /* 005ac77a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005ac781: mov dword ptr [0xa7485c], eax */ W32((u32)(0xa7485cu), r_eax);
    /* 005ac786: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac788: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ac78du); f_008581c5();
    /* 005ac78d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac790: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ac793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac795: je 0x5ac905 */ if (fZ) goto L_005ac905;
L_005ac79b:; BB(0x005ac79b);
    /* 005ac79b: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005ac7a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac7a9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac7ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7ae: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7b3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7ba: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5ac7bfu); f_005795a0();
    /* 005ac7bf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac7c2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005ac7c9:; BB(0x005ac7c9);
    /* 005ac7c9: mov dword ptr [0xa7486c], eax */ W32((u32)(0xa7486cu), r_eax);
    /* 005ac7ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac7d5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ac7dc: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7de: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ac7e3u); f_008581c5();
    /* 005ac7e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ac7e4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ac7e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac7e9: je 0x5ac8fe */ if (fZ) goto L_005ac8fe;
L_005ac7ef:; BB(0x005ac7ef);
    /* 005ac7ef: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005ac7f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ac7fd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac800: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac802: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac807: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac80c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac80e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5ac813u); f_005795a0();
    /* 005ac813: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac816: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005ac81d:; BB(0x005ac81d);
    /* 005ac81d: mov dword ptr [0xa74870], eax */ W32((u32)(0xa74870u), r_eax);
    /* 005ac822: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac829: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5ac82eu); f_0082fa9c();
    /* 005ac82e: mov eax, dword ptr [0xa74858] */ r_eax = R32((u32)(0xa74858u));
    /* 005ac833: mov ebx, dword ptr [0x9c0de4] */ r_ebx = R32((u32)(0x9c0de4u));
    /* 005ac839: mov ecx, dword ptr [0xa7486c] */ r_ecx = R32((u32)(0xa7486cu));
    /* 005ac83f: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac841: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005ac847: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac849: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005ac84f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac853: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac856: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5ac85bu); f_00579a28();
    /* 005ac85b: mov eax, dword ptr [0xa74858] */ r_eax = R32((u32)(0xa74858u));
    /* 005ac860: mov ebx, dword ptr [0x9c0de4] */ r_ebx = R32((u32)(0x9c0de4u));
    /* 005ac866: mov ecx, dword ptr [0xa74870] */ r_ecx = R32((u32)(0xa74870u));
    /* 005ac86c: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac86e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005ac874: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 005ac876: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005ac87c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac880: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac883: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5ac888u); f_00579a28();
    /* 005ac888: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5ac88du); f_0082faac();
    /* 005ac88d: mov eax, dword ptr [0x92a4ec] */ r_eax = R32((u32)(0x92a4ecu));
    /* 005ac892: movzx edx, word ptr [0x92a4f0] */ r_edx = (u32)R16((u32)(0x92a4f0u));
    /* 005ac899: movzx ecx, word ptr [0x92a4f2] */ r_ecx = (u32)R16((u32)(0x92a4f2u));
    /* 005ac8a0: movzx ebx, word ptr [0x92a4f4] */ r_ebx = (u32)R16((u32)(0x92a4f4u));
    /* 005ac8a7: mov edi, dword ptr [0xa74858] */ r_edi = R32((u32)(0xa74858u));
    /* 005ac8ad: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005ac8b3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ac8b6: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005ac8ba: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005ac8c0: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005ac8c4: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005ac8c8: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005ac8cb: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005ac8ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8d1: push dword ptr [0x9c0cac] */ { u32 v = R32((u32)(0x9c0cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac8d7: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac8da: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac8dd: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8df: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5ac8e4u); f_00608470();
    /* 005ac8e4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ac8e7: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac8ea: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac8ed: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac8f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac8f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ac8fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac8fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac8fd: ret  */ FN_RET(0x005ac6e4); r_esp += 4; return;
L_005ac8fe:; BB(0x005ac8fe);
    /* 005ac8fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ac900: jmp 0x5ac81d */ goto L_005ac81d;
L_005ac905:; BB(0x005ac905);
    /* 005ac905: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ac907: jmp 0x5ac7c9 */ goto L_005ac7c9;
}

void f_005ac90c(void) /* sub_5AC90C */
{
    FN_ENTER(0x005ac90c);
    /* 005ac90c: mov edx, dword ptr [ecx + 0x47c] */ r_edx = R32((u32)(r_ecx+0x47cu));
    /* 005ac912: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac914: je 0x5ac92d */ if (fZ) goto L_005ac92d;
L_005ac916:; BB(0x005ac916);
    /* 005ac916: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005ac91a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ac91f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005ac923: mov dword ptr [ecx + 0x47c], 0 */ W32((u32)(r_ecx+0x47cu), 0x0u);
L_005ac92d:; BB(0x005ac92d);
    /* 005ac92d: mov eax, dword ptr [ecx + 0x44c] */ r_eax = R32((u32)(r_ecx+0x44cu));
    /* 005ac933: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ac936: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 005ac93c: ret  */ FN_RET(0x005ac90c); r_esp += 4; return;
}

void f_005ac940(void) /* sub_5AC940 */
{
    FN_ENTER(0x005ac940);
    /* 005ac940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac941: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac945: push 0x8d8e34 */ { u32 v = 0x8d8e34u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac94a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ac950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ac958: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac95b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ac95e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ac961: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ac964: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ac967: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ac96a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ac96d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ac974: mov eax, ecx */ r_eax = r_ecx;
    /* 005ac976: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 005ac97c: mov dword ptr [eax], 0xb0af40 */ W32((u32)(r_eax), 0xb0af40u);
    /* 005ac982: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac984: je 0x5ac99f */ if (fZ) goto L_005ac99f;
L_005ac986:; BB(0x005ac986);
    /* 005ac986: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005ac98a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ac98f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005ac993: mov edx, ecx */ r_edx = r_ecx;
    /* 005ac995: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_005ac99f:; BB(0x005ac99f);
    /* 005ac99f: mov eax, ecx */ r_eax = r_ecx;
    /* 005ac9a1: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 005ac9a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac9a9: je 0x5ac9c4 */ if (fZ) goto L_005ac9c4;
L_005ac9ab:; BB(0x005ac9ab);
    /* 005ac9ab: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005ac9af: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ac9b4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005ac9b8: mov edx, ecx */ r_edx = r_ecx;
    /* 005ac9ba: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
L_005ac9c4:; BB(0x005ac9c4);
    /* 005ac9c4: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x5ac9c9u); f_00786f64();
    /* 005ac9c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac9cc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5ac9d1u); f_007b9c8c();
    /* 005ac9d1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005ac9d8: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac9e0: lea edx, [eax + 0x3d4] */ r_edx = (u32)(r_eax+0x3d4u);
    /* 005ac9e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9e8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9eb: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5ac9f0u); f_008586d6();
    /* 005ac9f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac9f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac9fa: lea ecx, [eax + 0x3b0] */ r_ecx = (u32)(r_eax+0x3b0u);
    /* 005aca00: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x5aca05u); f_005122a8();
    /* 005aca05: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca08: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x5aca0du); f_0052a684();
    /* 005aca0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aca10: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aca12: jne 0x5aca24 */ if (!fZ) goto L_005aca24;
L_005aca14:; BB(0x005aca14);
    /* 005aca14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aca17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aca1e: mov esp, ebp */ r_esp = r_ebp;
    /* 005aca20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aca21: ret 4 */ FN_RET(0x005ac940); r_esp += 8; return;
L_005aca24:; BB(0x005aca24);
    /* 005aca24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aca28: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5aca2du); f_005c2f74();
    /* 005aca2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aca2e: jmp 0x5aca14 */ goto L_005aca14;
}

void f_005aca30(void) /* sub_5ACA30 */
{
    FN_ENTER(0x005aca30);
    /* 005aca30: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005aca34: mov eax, dword ptr [0xa748e0] */ r_eax = R32((u32)(0xa748e0u));
    /* 005aca39: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aca3c: jl 0x5acadb */ if ((fS!=fO)) goto L_005acadb;
L_005aca42:; BB(0x005aca42);
    /* 005aca42: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aca45: jg 0x5acadb */ if ((!fZ&&fS==fO)) goto L_005acadb;
L_005aca4b:; BB(0x005aca4b);
    /* 005aca4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aca4d: je 0x5aca8d */ if (fZ) goto L_005aca8d;
L_005aca4f:; BB(0x005aca4f);
    /* 005aca4f: mov edx, dword ptr [0xa74894] */ r_edx = R32((u32)(0xa74894u));
    /* 005aca55: mov ecx, dword ptr [0xa74898] */ r_ecx = R32((u32)(0xa74898u));
    /* 005aca5b: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 005aca61: mov edx, dword ptr [0xa7489c] */ r_edx = R32((u32)(0xa7489cu));
    /* 005aca67: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 005aca6d: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005aca73: mov edx, dword ptr [0xa748a0] */ r_edx = R32((u32)(0xa748a0u));
    /* 005aca79: mov dword ptr [0xaf037c], edx */ W32((u32)(0xaf037cu), r_edx);
    /* 005aca7f: mov edx, dword ptr [0xa748a4] */ r_edx = R32((u32)(0xa748a4u));
    /* 005aca85: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005aca8b: jmp 0x5acadf */ goto L_005acadf;
L_005aca8d:; BB(0x005aca8d);
    /* 005aca8d: push 0xa748e4 */ { u32 v = 0xa748e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aca92: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005aca97: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005aca9d: mov ecx, dword ptr [0xaf0374] */ r_ecx = R32((u32)(0xaf0374u));
    /* 005acaa3: mov dword ptr [0xa748a4], eax */ W32((u32)(0xa748a4u), r_eax);
    /* 005acaa8: mov dword ptr [0xa74894], edx */ W32((u32)(0xa74894u), r_edx);
    /* 005acaae: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005acab4: mov dword ptr [0xa74898], ecx */ W32((u32)(0xa74898u), r_ecx);
    /* 005acaba: mov dword ptr [0xa7489c], edx */ W32((u32)(0xa7489cu), r_edx);
    /* 005acac0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005acac3: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005acac9: mov dword ptr [0xa748a0], edx */ W32((u32)(0xa748a0u), r_edx);
    /* 005acacf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005acad4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5acad9u); f_0082d710();
    /* 005acad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005acada: ret  */ FN_RET(0x005aca30); r_esp += 4; return;
L_005acadb:; BB(0x005acadb);
    /* 005acadb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005acadd: je 0x5acae7 */ if (fZ) goto L_005acae7;
L_005acadf:; BB(0x005acadf);
    /* 005acadf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005acae2: mov dword ptr [0xa748e0], eax */ W32((u32)(0xa748e0u), r_eax);
L_005acae7:; BB(0x005acae7);
    /* 005acae7: ret  */ FN_RET(0x005aca30); r_esp += 4; return;
}

void f_005acae8(void) /* sub_5ACAE8 */
{
    FN_ENTER(0x005acae8);
    /* 005acae8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005acaeb: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005acaed: jne 0x5acb0a */ if (!fZ) goto L_005acb0a;
L_005acaef:; BB(0x005acaef);
    /* 005acaef: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005acaf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acaf8: je 0x5acb0a */ if (fZ) goto L_005acb0a;
L_005acafa:; BB(0x005acafa);
    /* 005acafa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acafd: je 0x5acb0a */ if (fZ) goto L_005acb0a;
L_005acaff:; BB(0x005acaff);
    /* 005acaff: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005acb02: je 0x5acb0a */ if (fZ) goto L_005acb0a;
L_005acb04:; BB(0x005acb04);
    /* 005acb04: mov eax, 1 */ r_eax = 0x1u;
    /* 005acb09: ret  */ FN_RET(0x005acae8); r_esp += 4; return;
L_005acb0a:; BB(0x005acb0a);
    /* 005acb0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005acb0c: ret  */ FN_RET(0x005acae8); r_esp += 4; return;
}

void f_005acb10(void) /* sub_5ACB10 */
{
    FN_ENTER(0x005acb10);
    /* 005acb10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acb11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005acb12: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005acb14: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005acb18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acb1a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005acb1d: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005acb22: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005acb25: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005acb2a: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb2d: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb2f: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5acb34u); f_00771c8c();
    /* 005acb34: mov eax, dword ptr [0xa748b4] */ r_eax = R32((u32)(0xa748b4u));
    /* 005acb39: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb3c: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb3f: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 005acb45: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb47: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb4a: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005acb4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005acb4f: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb52: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb55: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acb58: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5acb5du); f_00771f5c();
    /* 005acb5d: mov eax, 0xa */ r_eax = 0xau;
    /* 005acb62: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005acb69: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005acb6b: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 005acb72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005acb73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005acb74: ret 4 */ FN_RET(0x005acb10); r_esp += 8; return;
}

void f_005acb78(void) /* sub_5ACB78 */
{
    FN_ENTER(0x005acb78);
    /* 005acb78: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005acb7f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005acb82: jne 0x5acb89 */ if (!fZ) goto L_005acb89;
L_005acb84:; BB(0x005acb84);
    /* 005acb84: call 0x5acb8c */ r_esp -= 4; W32(r_esp, 0x5acb89u); f_005acb8c();
L_005acb89:; BB(0x005acb89);
    /* 005acb89: ret  */ FN_RET(0x005acb78); r_esp += 4; return;
}

void f_005acb8c(void) /* sub_5ACB8C */
{
    FN_ENTER(0x005acb8c);
    /* 005acb8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acb8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acb8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acb8f: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005acb92: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005acb94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acb96: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5acb9bu); f_00770738();
    /* 005acb9b: mov edi, eax */ r_edi = r_eax;
    /* 005acb9d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005acba0: and edx, 0xfffff9ff */ {  u32 a = r_edx; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005acba6: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005acba9: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 005acbb0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acbb3: jne 0x5acc82 */ if (!fZ) goto L_005acc82;
L_005acbb9:; BB(0x005acbb9);
    /* 005acbb9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005acbbc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acbbe: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5acbc1u); call_ind(t); }
    /* 005acbc1: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005acbc4: mov eax, esi */ r_eax = r_esi;
    /* 005acbc6: call 0x5acd80 */ r_esp -= 4; W32(r_esp, 0x5acbcbu); f_005acd80();
    /* 005acbcb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005acbcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005acbd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acbd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acbd3: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5acbd8u); f_00771458();
    /* 005acbd8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005acbdc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acbde: je 0x5acc13 */ if (fZ) goto L_005acc13;
L_005acbe0:; BB(0x005acbe0);
    /* 005acbe0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005acbe4: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005acbe8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005acbea: fmul qword ptr [0x92a708] */ ST(0) = ST(0) * R_F64((u32)(0x92a708u));
    /* 005acbf0: fdiv qword ptr [0x92a700] */ ST(0) = ST(0) / R_F64((u32)(0x92a700u));
    /* 005acbf6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005acbfa: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005acbff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005acc04: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005acc08: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005acc0c: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005acc0f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
L_005acc13:; BB(0x005acc13);
    /* 005acc13: mov edx, dword ptr [0xa748b4] */ r_edx = R32((u32)(0xa748b4u));
    /* 005acc19: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005acc1d: mov edi, dword ptr [ebp + 0x33c] */ r_edi = R32((u32)(r_ebp+0x33cu));
    /* 005acc23: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 005acc26: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 005acc29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005acc2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005acc2c: jae 0x5acc65 */ if (!fC) goto L_005acc65;
L_005acc2e:; BB(0x005acc2e);
    /* 005acc2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005acc30: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 005acc37: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 005acc3d: mov edi, 2 */ r_edi = 0x2u;
    /* 005acc42: mov word ptr [ebp + 0x330], di */ W16((u32)(r_ebp+0x330u), (u16)r_edi);
    /* 005acc49: lea ecx, [ebp + 0x3b0] */ r_ecx = (u32)(r_ebp+0x3b0u);
    /* 005acc4f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5acc52u); call_ind(t); }
    /* 005acc52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acc54: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5acc59u); f_007b6880();
    /* 005acc59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acc5a: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x5acc5fu); f_00578a68();
    /* 005acc5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005acc60: jmp 0x5acd5d */ goto L_005acd5d;
L_005acc65:; BB(0x005acc65);
    /* 005acc65: movsx edi, word ptr [ebp + 0x344] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 005acc6c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005acc6f: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 005acc72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005acc74: jl 0x5acc2e */ if ((fS!=fO)) goto L_005acc2e;
L_005acc76:; BB(0x005acc76);
    /* 005acc76: mov word ptr [ebp + 0x344], di */ W16((u32)(r_ebp+0x344u), (u16)r_edi);
    /* 005acc7d: jmp 0x5acd5d */ goto L_005acd5d;
L_005acc82:; BB(0x005acc82);
    /* 005acc82: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acc85: jne 0x5accf1 */ if (!fZ) goto L_005accf1;
L_005acc87:; BB(0x005acc87);
    /* 005acc87: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005acc8a: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 005acc8d: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 005acc90: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 005acc93: mov dword ptr [ebp + 0x48], esi */ W32((u32)(r_ebp+0x48u), r_esi);
    /* 005acc96: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 005acc99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acc9b: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5acca0u); f_007b6880();
    /* 005acca0: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 005acca6: lea ecx, [ebp + 0x3b0] */ r_ecx = (u32)(r_ebp+0x3b0u);
    /* 005accac: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5accafu); call_ind(t); }
    /* 005accaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005accb1: jne 0x5accbb */ if (!fZ) goto L_005accbb;
L_005accb3:; BB(0x005accb3);
    /* 005accb3: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005accb6: jmp 0x5acd5d */ goto L_005acd5d;
L_005accbb:; BB(0x005accbb);
    /* 005accbb: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005accbe: mov dword ptr [ebp + 0x398], 0 */ W32((u32)(r_ebp+0x398u), 0x0u);
    /* 005accc8: and edx, 0xfbdbffff */ {  u32 a = r_edx; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005accce: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005accd1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005accd3: je 0x5accec */ if (fZ) goto L_005accec;
L_005accd5:; BB(0x005accd5);
    /* 005accd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005accd7: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005accda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005accdc: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005accdf: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acce2: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5acce7u); f_00771c8c();
    /* 005acce7: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005accea: jmp 0x5acd5d */ goto L_005acd5d;
L_005accec:; BB(0x005accec);
    /* 005accec: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005accef: jmp 0x5acd5d */ goto L_005acd5d;
L_005accf1:; BB(0x005accf1);
    /* 005accf1: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005accf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005accf9: je 0x5acd03 */ if (fZ) goto L_005acd03;
L_005accfb:; BB(0x005accfb);
    /* 005accfb: lea esi, [ebp + 0x3b0] */ r_esi = (u32)(r_ebp+0x3b0u);
    /* 005acd01: jmp 0x5acd3c */ goto L_005acd3c;
L_005acd03:; BB(0x005acd03);
    /* 005acd03: mov esi, dword ptr [0xa748b4] */ r_esi = R32((u32)(0xa748b4u));
    /* 005acd09: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005acd0f: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 005acd12: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 005acd15: mov word ptr [ebp + 0x344], di */ W16((u32)(r_ebp+0x344u), (u16)r_edi);
    /* 005acd1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005acd1e: mov dword ptr [ebp + 0x398], 1 */ W32((u32)(r_ebp+0x398u), 0x1u);
    /* 005acd28: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005acd2f: lea esi, [ebp + 0x3b0] */ r_esi = (u32)(r_ebp+0x3b0u);
    /* 005acd35: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005acd37: mov ecx, esi */ r_ecx = r_esi;
    /* 005acd39: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5acd3cu); call_ind(t); }
L_005acd3c:; BB(0x005acd3c);
    /* 005acd3c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005acd3e: mov ecx, esi */ r_ecx = r_esi;
    /* 005acd40: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5acd43u); call_ind(t); }
    /* 005acd43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acd45: je 0x5acd53 */ if (fZ) goto L_005acd53;
L_005acd47:; BB(0x005acd47);
    /* 005acd47: mov eax, 1 */ r_eax = 0x1u;
    /* 005acd4c: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
L_005acd53:; BB(0x005acd53);
    /* 005acd53: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005acd56: mov eax, esi */ r_eax = r_esi;
    /* 005acd58: call 0x5acd80 */ r_esp -= 4; W32(r_esp, 0x5acd5du); f_005acd80();
L_005acd5d:; BB(0x005acd5d);
    /* 005acd5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005acd5f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5acd64u); f_007aa094();
    /* 005acd64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd68: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005acd6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acd6e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5acd73u); f_00805608();
    /* 005acd73: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005acd76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acd77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005acd78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005acd79: ret  */ FN_RET(0x005acb8c); r_esp += 4; return;
}

void f_005acd80(void) /* sub_5ACD80 */
{
    FN_ENTER(0x005acd80);
    /* 005acd80: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005acd83: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005acd85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005acd88: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005acd8b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005acd8e: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005acd92: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005acd96: fadd dword ptr [0x92a7d0] */ ST(0) = ST(0) + R_F32((u32)(0x92a7d0u));
    /* 005acd9c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005acda0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005acda4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005acda7: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005acdac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acdad: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5acdb2u); f_0050b510();
    /* 005acdb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005acdb5: ret  */ FN_RET(0x005acd80); r_esp += 4; return;
}

void f_005acdb8(void) /* sub_5ACDB8 */
{
    FN_ENTER(0x005acdb8);
    /* 005acdb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acdb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acdba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005acdbb: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005acdbe: mov esi, ecx */ r_esi = r_ecx;
    /* 005acdc0: mov edx, dword ptr [0xa748b4] */ r_edx = R32((u32)(0xa748b4u));
    /* 005acdc6: fld dword ptr [0x92a7cc] */ FPUSH(R_F32((u32)(0x92a7ccu)));
    /* 005acdcc: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 005acdd2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005acdd5: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 005acdd8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005acdda: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005acdde: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005acde3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005acde8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005acdec: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005acdf0: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005acdf4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005acdf8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005acdfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acdfd: mov ecx, esi */ r_ecx = r_esi;
    /* 005acdff: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5ace02u); call_ind(t); }
    /* 005ace02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ace04: je 0x5ad019 */ if (fZ) goto L_005ad019;
L_005ace0a:; BB(0x005ace0a);
    /* 005ace0a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ace0c: call 0x5acae8 */ r_esp -= 4; W32(r_esp, 0x5ace11u); f_005acae8();
    /* 005ace11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ace13: je 0x5ad019 */ if (fZ) goto L_005ad019;
L_005ace19:; BB(0x005ace19);
    /* 005ace19: mov ecx, esi */ r_ecx = r_esi;
    /* 005ace1b: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ace20u); f_00770738();
    /* 005ace20: mov ebx, eax */ r_ebx = r_eax;
    /* 005ace22: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ace24: je 0x5ad019 */ if (fZ) goto L_005ad019;
L_005ace2a:; BB(0x005ace2a);
    /* 005ace2a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ace2c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5ace31u); f_007751b0();
    /* 005ace31: fld dword ptr [0x92a7d8] */ FPUSH(R_F32((u32)(0x92a7d8u)));
    /* 005ace37: fadd dword ptr [esi + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x364u));
    /* 005ace3d: fmul dword ptr [0x92a7c8] */ ST(0) = ST(0) * R_F32((u32)(0x92a7c8u));
    /* 005ace43: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005ace45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ace47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ace48: jbe 0x5ad019 */ if ((fC||fZ)) goto L_005ad019;
L_005ace4e:; BB(0x005ace4e);
    /* 005ace4e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ace51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ace53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ace55: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5ace5au); f_00771458();
    /* 005ace5a: mov edi, dword ptr [0xa748bc] */ r_edi = R32((u32)(0xa748bcu));
    /* 005ace60: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 005ace66: mov edi, dword ptr [edi + edx*4] */ r_edi = R32((u32)(r_edi+r_edx*4));
    /* 005ace69: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005ace6c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005ace6e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005ace70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ace72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ace73: jbe 0x5ace7c */ if ((fC||fZ)) goto L_005ace7c;
L_005ace75:; BB(0x005ace75);
    /* 005ace75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ace77: jmp 0x5ad019 */ goto L_005ad019;
L_005ace7c:; BB(0x005ace7c);
    /* 005ace7c: fcomp dword ptr [0x92a7c4] */ fx_compare(ST(0), R_F32((u32)(0x92a7c4u))); FPOP();
    /* 005ace82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ace84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ace85: ja 0x5ad019 */ if ((!fC&&!fZ)) goto L_005ad019;
L_005ace8b:; BB(0x005ace8b);
    /* 005ace8b: mov edi, dword ptr [0xa748b4] */ r_edi = R32((u32)(0xa748b4u));
    /* 005ace91: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ace95: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 005ace98: fild dword ptr [edx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x18u)));
    /* 005ace9b: fmul dword ptr [0x92a7c0] */ ST(0) = ST(0) * R_F32((u32)(0x92a7c0u));
    /* 005acea1: fdiv dword ptr [0x92a7bc] */ ST(0) = ST(0) / R_F32((u32)(0x92a7bcu));
    /* 005acea7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005aceab: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005aceb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aceb5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005aceb9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005acebd: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005acec1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005acec5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005acec8: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 005acecc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005acece: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005aced0: fmul qword ptr [0x92a6f8] */ ST(0) = ST(0) * R_F64((u32)(0x92a6f8u));
    /* 005aced6: fdiv qword ptr [0x92a6f0] */ ST(0) = ST(0) / R_F64((u32)(0x92a6f0u));
    /* 005acedc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005acee0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005acee5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aceea: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005aceee: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005acef2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005acef6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005acefa: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005acefe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aceff: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acf02: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5acf07u); f_007a9018();
    /* 005acf07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005acf0a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005acf0c: jl 0x5ad019 */ if ((fS!=fO)) goto L_005ad019;
L_005acf12:; BB(0x005acf12);
    /* 005acf12: mov ecx, esi */ r_ecx = r_esi;
    /* 005acf14: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5acf19u); f_00770738();
    /* 005acf19: mov ebx, eax */ r_ebx = r_eax;
    /* 005acf1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acf1d: je 0x5ad012 */ if (fZ) goto L_005ad012;
L_005acf23:; BB(0x005acf23);
    /* 005acf23: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005acf27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acf28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005acf29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005acf2b: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5acf30u); f_00771458();
    /* 005acf30: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005acf34: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005acf38: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005acf3c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005acf3e: fmul qword ptr [0x92a6f8] */ ST(0) = ST(0) * R_F64((u32)(0x92a6f8u));
    /* 005acf44: fdiv qword ptr [0x92a6f0] */ ST(0) = ST(0) / R_F64((u32)(0x92a6f0u));
    /* 005acf4a: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005acf4e: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005acf53: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005acf58: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005acf5c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005acf60: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005acf64: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005acf68: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 005acf6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acf6d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005acf70: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5acf75u); f_007a900c();
    /* 005acf75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005acf78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005acf7a: jl 0x5ad027 */ if ((fS!=fO)) goto L_005ad027;
L_005acf80:; BB(0x005acf80);
    /* 005acf80: mov edi, 0x4000 */ r_edi = 0x4000u;
L_005acf85:; BB(0x005acf85);
    /* 005acf85: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005acf8a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5acf8fu); f_0082d990();
    /* 005acf8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005acf91: mov edx, edi */ r_edx = r_edi;
    /* 005acf93: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5acf98u); f_0082d8bc();
    /* 005acf98: mov edi, dword ptr [0xa748bc] */ r_edi = R32((u32)(0xa748bcu));
    /* 005acf9e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005acfa2: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 005acfa8: mov edi, dword ptr [edi + eax*4 + 0xc] */ r_edi = R32((u32)(r_edi+r_eax*4+0xcu));
    /* 005acfac: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005acfaf: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005acfb2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005acfb4: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005acfb6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005acfb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005acfba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005acfbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005acfbd: ja 0x5acfc3 */ if ((!fC&&!fZ)) goto L_005acfc3;
L_005acfbf:; BB(0x005acfbf);
    /* 005acfbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005acfc1: jmp 0x5acfde */ goto L_005acfde;
L_005acfc3:; BB(0x005acfc3);
    /* 005acfc3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005acfc5: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 005acfc9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005acfcc: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005acfcf: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005acfd3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005acfd7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005acfd9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5acfdeu); f_0082fa0c();
L_005acfde:; BB(0x005acfde);
    /* 005acfde: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005acfe2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005acfe3: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005acfe7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005acfe9: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5acfeeu); f_0082eab8();
    /* 005acfee: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005acff3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5acff8u); f_0082eb80();
    /* 005acff8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005acffc: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005acfff: mov edx, ebx */ r_edx = r_ebx;
    /* 005ad001: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5ad006u); f_0082ebac();
    /* 005ad006: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ad00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad00b: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad00d: call 0x5acb10 */ r_esp -= 4; W32(r_esp, 0x5ad012u); f_005acb10();
L_005ad012:; BB(0x005ad012);
    /* 005ad012: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad015: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad016: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad017: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad018: ret  */ FN_RET(0x005acdb8); r_esp += 4; return;
L_005ad019:; BB(0x005ad019);
    /* 005ad019: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad01b: call 0x52afe4 */ r_esp -= 4; W32(r_esp, 0x5ad020u); f_0052afe4();
    /* 005ad020: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad024: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad025: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad026: ret  */ FN_RET(0x005acdb8); r_esp += 4; return;
L_005ad027:; BB(0x005ad027);
    /* 005ad027: mov edi, 0xc000 */ r_edi = 0xc000u;
    /* 005ad02c: jmp 0x5acf85 */ goto L_005acf85;
}

