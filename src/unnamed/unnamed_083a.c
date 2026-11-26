#include "protos.h"

void f_0083a0dc(void) /* sub_83A0DC */
{
    FN_ENTER(0x0083a0dc);
    /* 0083a0dc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083a0df: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0083a0e3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083a0e7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0083a0eb: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a0ee: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083a0f0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083a0f2: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a0f4: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0083a0f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a0f8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a0fa: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a0fd: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0083a100: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a103: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a106: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a108: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0083a10c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a10e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0083a112: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a114: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0083a117: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a119: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0083a11d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a11f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083a121: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083a123: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a125: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a129: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083a12b: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083a12e: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083a131: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0083a133: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a136: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083a138: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a13a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083a13c: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a13f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a141: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a143: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a146: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a148: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a14a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a14c: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0083a14e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a150: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a152: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083a154: je 0x83a1bc */ if (fZ) goto L_0083a1bc;
L_0083a156:; BB(0x0083a156);
    /* 0083a156: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0083a158: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0083a15a: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0083a15c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a15e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a160: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 0083a162: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a165: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083a167: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0083a16a: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0083a16d: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a170: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083a172: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a174: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0083a177: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0083a17a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083a17c: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083a17e: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0083a181: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a183: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a185: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a187: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0083a189: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a18b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a18d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a18f: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083a192: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083a194: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a196: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0083a198:; BB(0x0083a198);
    /* 0083a198: fcom dword ptr [0x98aadc] */ fx_compare(ST(0), R_F32((u32)(0x98aadcu))); 
    /* 0083a19e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a1a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a1a1: jae 0x83a1af */ if (!fC) goto L_0083a1af;
L_0083a1a3:; BB(0x0083a1a3);
    /* 0083a1a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083a1a5: fld dword ptr [0x98aad8] */ FPUSH(R_F32((u32)(0x98aad8u)));
    /* 0083a1ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a1ae: ret  */ FN_RET(0x0083a0dc); r_esp += 4; return;
L_0083a1af:; BB(0x0083a1af);
    /* 0083a1af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083a1b0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083a1b3: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83a1b8u); f_0082dc9c();
    /* 0083a1b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a1bb: ret  */ FN_RET(0x0083a0dc); r_esp += 4; return;
L_0083a1bc:; BB(0x0083a1bc);
    /* 0083a1bc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a1be: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083a1c0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083a1c2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a1c4: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0083a1c6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a1c8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a1ca: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0083a1ce: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083a1d0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a1d3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083a1d5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a1d9: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 0083a1db: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a1dd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a1df: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083a1e1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0083a1e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a1e7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083a1e9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a1eb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a1ed: jmp 0x83a198 */ goto L_0083a198;
}

void f_0083a1f0(void) /* sub_83A1F0 */
{
    FN_ENTER(0x0083a1f0);
    /* 0083a1f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083a1f4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0083a1f7: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0083a1fa: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083a1fd: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a1ff: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083a202: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083a205: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083a208: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a20a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a20c: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0083a20e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083a210: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a212: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083a214: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083a216: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083a218: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a21a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a21c: fst dword ptr [eax] */ W_F32((u32)(r_eax), ST(0));
    /* 0083a21e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a220: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a222: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0083a224: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a226: fst dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0));
    /* 0083a229: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a22b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a22d: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0083a22f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a231: fst dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0));
    /* 0083a234: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083a236: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a238: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a23a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a23c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083a23d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083a240: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83a245u); f_0082dc9c();
    /* 0083a245: ret 4 */ FN_RET(0x0083a1f0); r_esp += 8; return;
}

void f_0083a248(void) /* sub_83A248 */
{
    FN_ENTER(0x0083a248);
    /* 0083a248: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083a24b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083a24f: fcomp qword ptr [0x98aae0] */ fx_compare(ST(0), R_F64((u32)(0x98aae0u))); FPOP();
    /* 0083a255: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a257: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a258: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0083a25c: jae 0x83a2b3 */ if (!fC) goto L_0083a2b3;
L_0083a25e:; BB(0x0083a25e);
    /* 0083a25e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083a25f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83a264u); f_0082e900();
    /* 0083a264: fldz  */ FPUSH(0.0);
    /* 0083a266: fld dword ptr [0x98aae8] */ FPUSH(R_F32((u32)(0x98aae8u)));
    /* 0083a26c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a26e: fchs  */ ST(0) = -ST(0);
    /* 0083a270: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083a272: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083a275: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083a279: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083a27e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083a282: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083a286: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0083a288: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0083a28b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a28d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083a28f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a291: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a293: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0083a295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a296: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a298: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083a29a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a29c: jae 0x83a2a0 */ if (!fC) goto L_0083a2a0;
L_0083a29e:; BB(0x0083a29e);
    /* 0083a29e: fst st(1) */ ST(1) = ST(0);
L_0083a2a0:; BB(0x0083a2a0);
    /* 0083a2a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a2a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a2a3: je 0x83a2a7 */ if (fZ) goto L_0083a2a7;
L_0083a2a5:; BB(0x0083a2a5);
    /* 0083a2a5: fst st(1) */ ST(1) = ST(0);
L_0083a2a7:; BB(0x0083a2a7);
    /* 0083a2a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083a2a9: fchs  */ ST(0) = -ST(0);
    /* 0083a2ab: fchs  */ ST(0) = -ST(0);
    /* 0083a2ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a2b0: ret 4 */ FN_RET(0x0083a248); r_esp += 8; return;
L_0083a2b3:; BB(0x0083a2b3);
    /* 0083a2b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083a2b4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83a2b9u); f_0082e900();
    /* 0083a2b9: fldz  */ FPUSH(0.0);
    /* 0083a2bb: fld dword ptr [0x98aae8] */ FPUSH(R_F32((u32)(0x98aae8u)));
    /* 0083a2c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a2c3: fchs  */ ST(0) = -ST(0);
    /* 0083a2c5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083a2c7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083a2ca: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083a2ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083a2d3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083a2d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083a2db: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0083a2dd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0083a2e0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a2e2: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083a2e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a2e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a2e8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0083a2ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a2eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a2ed: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083a2ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083a2f1: jae 0x83a2f5 */ if (!fC) goto L_0083a2f5;
L_0083a2f3:; BB(0x0083a2f3);
    /* 0083a2f3: fst st(1) */ ST(1) = ST(0);
L_0083a2f5:; BB(0x0083a2f5);
    /* 0083a2f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083a2f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a2f8: je 0x83a2fc */ if (fZ) goto L_0083a2fc;
L_0083a2fa:; BB(0x0083a2fa);
    /* 0083a2fa: fst st(1) */ ST(1) = ST(0);
L_0083a2fc:; BB(0x0083a2fc);
    /* 0083a2fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083a2fe: fchs  */ ST(0) = -ST(0);
    /* 0083a300: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a303: ret 4 */ FN_RET(0x0083a248); r_esp += 8; return;
}

void f_0083a308(void) /* sub_83A308 */
{
    FN_ENTER(0x0083a308);
    /* 0083a308: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083a30c: mov dword ptr [0xad93e0], eax */ W32((u32)(0xad93e0u), r_eax);
    /* 0083a311: ret  */ FN_RET(0x0083a308); r_esp += 4; return;
}

void f_0083a314(void) /* sub_83A314 */
{
    FN_ENTER(0x0083a314);
    /* 0083a314: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083a315: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083a316: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083a317: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083a31a: mov esi, edx */ r_esi = r_edx;
    /* 0083a31c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0083a31e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0083a322: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a324: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0083a328: je 0x83a56e */ if (fZ) goto L_0083a56e;
L_0083a32e:; BB(0x0083a32e);
    /* 0083a32e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a330: je 0x83a3e9 */ if (fZ) goto L_0083a3e9;
L_0083a336:; BB(0x0083a336);
    /* 0083a336: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083a339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083a33a: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083a33e: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x83a343u); f_008451f8();
    /* 0083a343: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a347: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a34a: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0083a34d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a34f: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0083a352: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0083a355: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0083a358: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0083a35b: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0083a35e: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0083a360: fchs  */ ST(0) = -ST(0);
    /* 0083a362: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083a364: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083a366: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083a368: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083a36b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a36f: fchs  */ ST(0) = -ST(0);
    /* 0083a371: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083a373: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a376: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083a378: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a37a: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083a37d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a381: fchs  */ ST(0) = -ST(0);
    /* 0083a383: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a386: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a389: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a38b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a38d: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0083a390: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a394: fchs  */ ST(0) = -ST(0);
    /* 0083a396: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a399: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a39c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083a39e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a3a0: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0083a3a3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083a3a5: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a3a8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a3aa: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083a3ae: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083a3b0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a3b2: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0083a3b5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a3b7: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a3ba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a3bc: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083a3c0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083a3c2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083a3c4: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0083a3c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a3c9: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083a3cd: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0083a3d0: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a3d3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a3d5: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0083a3d8: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0083a3db: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a3de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a3e0: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083a3e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a3e6: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_0083a3e9:; BB(0x0083a3e9);
    /* 0083a3e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a3eb: je 0x83a4a7 */ if (fZ) goto L_0083a4a7;
L_0083a3f1:; BB(0x0083a3f1);
    /* 0083a3f1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083a3f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083a3f5: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083a3f9: mov ecx, esi */ r_ecx = r_esi;
    /* 0083a3fb: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x83a400u); f_008451f8();
    /* 0083a400: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a404: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0083a407: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a40a: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0083a40d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a40f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a411: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a413: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0083a416: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0083a419: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0083a41c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0083a41f: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0083a422: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083a424: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0083a427: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a42b: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083a42d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a430: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083a432: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a434: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0083a437: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a43b: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a43e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a441: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083a443: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a445: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0083a448: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a44c: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a44f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a452: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a454: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a456: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0083a459: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a45c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a460: fchs  */ ST(0) = -ST(0);
    /* 0083a462: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083a464: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083a466: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a468: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0083a46b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a46d: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a470: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a474: fchs  */ ST(0) = -ST(0);
    /* 0083a476: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a478: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a47a: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0083a47d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a47f: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0083a482: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a485: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a489: fchs  */ ST(0) = -ST(0);
    /* 0083a48b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083a48d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a48f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a491: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0083a494: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0083a497: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a49a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a49e: fchs  */ ST(0) = -ST(0);
    /* 0083a4a0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a4a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a4a4: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_0083a4a7:; BB(0x0083a4a7);
    /* 0083a4a7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a4a9: je 0x83a565 */ if (fZ) goto L_0083a565;
L_0083a4af:; BB(0x0083a4af);
    /* 0083a4af: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083a4b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083a4b3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083a4b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083a4b9: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x83a4beu); f_008451f8();
    /* 0083a4be: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a4c2: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083a4c5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a4c8: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0083a4cb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083a4cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a4cf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a4d1: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0083a4d4: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0083a4d7: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0083a4da: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0083a4dd: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0083a4e0: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083a4e2: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083a4e5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a4e9: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083a4eb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a4ee: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083a4f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a4f2: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083a4f5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a4f9: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0083a4fc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a4ff: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083a501: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a503: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0083a506: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a50a: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0083a50d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083a510: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a512: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a514: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0083a517: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a51a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a51e: fchs  */ ST(0) = -ST(0);
    /* 0083a520: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083a522: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083a524: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a526: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0083a529: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083a52b: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a52e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a532: fchs  */ ST(0) = -ST(0);
    /* 0083a534: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a536: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a538: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0083a53b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a53d: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0083a540: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a543: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a547: fchs  */ ST(0) = -ST(0);
    /* 0083a549: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083a54b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a54d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a54f: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0083a552: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0083a555: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083a558: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083a55c: fchs  */ ST(0) = -ST(0);
    /* 0083a55e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a560: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a562: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0083a565:; BB(0x0083a565);
    /* 0083a565: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a568: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083a569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083a56a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083a56b: ret 8 */ FN_RET(0x0083a314); r_esp += 12; return;
L_0083a56e:; BB(0x0083a56e);
    /* 0083a56e: mov ebp, dword ptr [0xaf0328] */ r_ebp = R32((u32)(0xaf0328u));
    /* 0083a574: jmp 0x83a32e */ goto L_0083a32e;
}

void f_0083a5d3(void)
{
    FN_ENTER(0x0083a5d3);
    /* 0083a5d3: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0083a5da: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0083a5e1: mov dword ptr [eax + 0x38], 0x3f800000 */ W32((u32)(r_eax+0x38u), 0x3f800000u);
    /* 0083a5e8: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0083a5ef: ret  */ FN_RET(0x0083a5d3); r_esp += 4; return;
}

void f_0083a5f0(void) /* sub_83A5F0 */
{
    FN_ENTER(0x0083a5f0);
    /* 0083a5f0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083a5f4: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0083a5f7: mov dword ptr [0xaf02d8], eax */ W32((u32)(0xaf02d8u), r_eax);
    /* 0083a5fc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0083a5ff: mov dword ptr [0xaf02c8], edx */ W32((u32)(0xaf02c8u), r_edx);
    /* 0083a605: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0083a608: mov dword ptr [0xaf02cc], eax */ W32((u32)(0xaf02ccu), r_eax);
    /* 0083a60d: ret  */ FN_RET(0x0083a5f0); r_esp += 4; return;
}

void f_0083a610(void) /* sub_83A610 */
{
    FN_ENTER(0x0083a610);
    /* 0083a610: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083a614: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0083a618: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0083a61d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083a61f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083a622: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083a625: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a627: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a629: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a62c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a62e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a630: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0083a633: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083a635: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a637: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0083a639: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a63c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a63e: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a641: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083a643: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a645: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0083a648: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083a64a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a64c: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0083a64f: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a652: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083a654: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0083a657: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083a659: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083a65b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083a65d: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0083a660: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083a662: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a664: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0083a667: ret  */ FN_RET(0x0083a610); r_esp += 4; return;
}

void f_0083a668(void) /* sub_83A668 */
{
    FN_ENTER(0x0083a668);
    /* 0083a668: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083a669: mov ebx, esp */ r_ebx = r_esp;
    /* 0083a66b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083a66e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083a66f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083a670: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083a676: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0083a679: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a67b: je 0x83a938 */ if (fZ) goto L_0083a938;
L_0083a681:; BB(0x0083a681);
    /* 0083a681: mov ebp, edi */ r_ebp = r_edi;
L_0083a683:; BB(0x0083a683);
    /* 0083a683: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0083a686: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a688: fmul dword ptr [ebp] */ ST(0) = ST(0) * R_F32((u32)(r_ebp));
    /* 0083a68b: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a68e: fmul dword ptr [ebp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4u));
    /* 0083a691: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a693: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0083a696: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 0083a699: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a69b: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0083a69e: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0083a6a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6a3: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0083a6a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a6a9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a6ab: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083a6ae: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a6b1: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 0083a6b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6b6: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0083a6b9: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0083a6bc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6be: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0083a6c1: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0083a6c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6c6: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0083a6ca: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a6cc: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0083a6cf: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a6d2: fmul dword ptr [ebp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x24u));
    /* 0083a6d5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6d7: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0083a6da: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a6dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6df: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0083a6e2: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a6e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6e7: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0083a6eb: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083a6ed: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 0083a6f0: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0083a6f3: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 0083a6f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a6f8: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0083a6fb: fmul dword ptr [ebp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x38u));
    /* 0083a6fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a700: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 0083a703: fmul dword ptr [ebp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3cu));
    /* 0083a706: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a708: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0083a70c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a70f: fmul dword ptr [ebp] */ ST(0) = ST(0) * R_F32((u32)(r_ebp));
    /* 0083a712: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a715: fmul dword ptr [ebp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4u));
    /* 0083a718: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a71a: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0083a71d: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 0083a720: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a722: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0083a725: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0083a728: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a72a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0083a72e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a731: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083a734: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a737: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 0083a73a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a73c: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0083a73f: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0083a742: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a744: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0083a747: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0083a74a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a74c: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0083a750: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a753: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0083a756: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a759: fmul dword ptr [ebp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x24u));
    /* 0083a75c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a75e: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0083a761: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a764: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a766: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0083a769: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a76c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a76e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0083a772: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083a775: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 0083a778: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0083a77b: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 0083a77e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a780: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 0083a783: fmul dword ptr [ebp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x38u));
    /* 0083a786: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a788: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0083a78b: fmul dword ptr [ebp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3cu));
    /* 0083a78e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a790: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0083a794: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a797: fmul dword ptr [ebp] */ ST(0) = ST(0) * R_F32((u32)(r_ebp));
    /* 0083a79a: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0083a79d: fmul dword ptr [ebp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4u));
    /* 0083a7a0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7a2: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0083a7a5: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 0083a7a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7aa: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0083a7ad: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0083a7b0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7b2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0083a7b6: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a7b9: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083a7bc: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0083a7bf: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 0083a7c2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7c4: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0083a7c7: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0083a7ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7cc: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0083a7cf: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0083a7d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7d4: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0083a7d8: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a7db: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0083a7de: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0083a7e1: fmul dword ptr [ebp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x24u));
    /* 0083a7e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7e6: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0083a7e9: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a7ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7ee: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0083a7f1: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a7f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a7f6: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0083a7fa: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083a7fd: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 0083a800: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0083a803: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 0083a806: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a808: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 0083a80b: fmul dword ptr [ebp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x38u));
    /* 0083a80e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a810: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0083a813: fmul dword ptr [ebp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3cu));
    /* 0083a816: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a818: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0083a81c: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a81f: fmul dword ptr [ebp] */ ST(0) = ST(0) * R_F32((u32)(r_ebp));
    /* 0083a822: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0083a825: fmul dword ptr [ebp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x4u));
    /* 0083a828: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a82a: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0083a82d: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 0083a830: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a832: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0083a835: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0083a838: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a83a: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0083a83e: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a841: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083a844: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0083a847: fmul dword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x14u));
    /* 0083a84a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a84c: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0083a84f: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0083a852: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a854: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0083a857: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 0083a85a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a85c: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0083a860: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a863: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 0083a866: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0083a869: fmul dword ptr [ebp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x24u));
    /* 0083a86c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a86e: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0083a871: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0083a874: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a876: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0083a879: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083a87c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a87e: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0083a882: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0083a885: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 0083a888: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0083a88b: fmul dword ptr [ebp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x34u));
    /* 0083a88e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a890: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0083a893: fmul dword ptr [ebp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x38u));
    /* 0083a896: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a898: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0083a89b: fmul dword ptr [ebp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3cu));
    /* 0083a89e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083a8a0: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0083a8a4: je 0x83a921 */ if (fZ) goto L_0083a921;
L_0083a8a6:; BB(0x0083a8a6);
    /* 0083a8a6: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0083a8aa: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0083a8ae: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0083a8b2: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 0083a8b6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0083a8b8: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0083a8bc: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0083a8bf: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 0083a8c2: mov dword ptr [edi + 0xc], ebp */ W32((u32)(r_edi+0xcu), r_ebp);
    /* 0083a8c5: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0083a8c8: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0083a8cc: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0083a8cf: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0083a8d3: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0083a8d6: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0083a8da: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0083a8dd: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0083a8e1: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0083a8e4: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0083a8e8: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0083a8eb: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0083a8ef: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0083a8f2: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0083a8f6: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0083a8f9: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0083a8fd: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0083a900: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0083a904: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0083a907: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 0083a90b: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0083a90e: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0083a912: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0083a915: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083a91c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083a91d: mov esp, ebx */ r_esp = r_ebx;
    /* 0083a91f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083a920: ret  */ FN_RET(0x0083a668); r_esp += 4; return;
L_0083a921:; BB(0x0083a921);
    /* 0083a921: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 0083a925: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083a927: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x83a92cu); f_0083b410();
    /* 0083a92c: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a932: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083a933: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083a934: mov esp, ebx */ r_esp = r_ebx;
    /* 0083a936: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083a937: ret  */ FN_RET(0x0083a668); r_esp += 4; return;
L_0083a938:; BB(0x0083a938);
    /* 0083a938: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 0083a93b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083a93d: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x83a942u); f_00831650();
    /* 0083a942: jmp 0x83a683 */ goto L_0083a683;
}

void f_0083a948(void) /* sub_83A948 */
{
    FN_ENTER(0x0083a948);
    /* 0083a948: call 0x841bf0 */ r_esp -= 4; W32(r_esp, 0x83a94du); f_00841bf0();
    /* 0083a94d: mov eax, dword ptr [0xad95e8] */ r_eax = R32((u32)(0xad95e8u));
    /* 0083a952: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083a957: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a95c: jne 0x83a967 */ if (!fZ) goto L_0083a967;
L_0083a95e:; BB(0x0083a95e);
    /* 0083a95e: add dword ptr [0xad96b0], 1 */ { u32 ad = (u32)(0xad96b0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083a965: jmp 0x83a971 */ goto L_0083a971;
L_0083a967:; BB(0x0083a967);
    /* 0083a967: mov dword ptr [0xad96b0], 0 */ W32((u32)(0xad96b0u), 0x0u);
L_0083a971:; BB(0x0083a971);
    /* 0083a971: mov eax, dword ptr [0xad961c] */ r_eax = R32((u32)(0xad961cu));
    /* 0083a976: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083a97b: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a980: jne 0x83a98b */ if (!fZ) goto L_0083a98b;
L_0083a982:; BB(0x0083a982);
    /* 0083a982: add dword ptr [0xad96b4], 1 */ { u32 ad = (u32)(0xad96b4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083a989: jmp 0x83a995 */ goto L_0083a995;
L_0083a98b:; BB(0x0083a98b);
    /* 0083a98b: mov dword ptr [0xad96b4], 0 */ W32((u32)(0xad96b4u), 0x0u);
L_0083a995:; BB(0x0083a995);
    /* 0083a995: mov eax, dword ptr [0xad9650] */ r_eax = R32((u32)(0xad9650u));
    /* 0083a99a: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083a99f: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a9a4: jne 0x83a9af */ if (!fZ) goto L_0083a9af;
L_0083a9a6:; BB(0x0083a9a6);
    /* 0083a9a6: add dword ptr [0xad96b8], 1 */ { u32 ad = (u32)(0xad96b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083a9ad: jmp 0x83a9b9 */ goto L_0083a9b9;
L_0083a9af:; BB(0x0083a9af);
    /* 0083a9af: mov dword ptr [0xad96b8], 0 */ W32((u32)(0xad96b8u), 0x0u);
L_0083a9b9:; BB(0x0083a9b9);
    /* 0083a9b9: mov eax, dword ptr [0xad9684] */ r_eax = R32((u32)(0xad9684u));
    /* 0083a9be: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083a9c3: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083a9c8: jne 0x83a9d2 */ if (!fZ) goto L_0083a9d2;
L_0083a9ca:; BB(0x0083a9ca);
    /* 0083a9ca: add dword ptr [0xad96bc], 1 */ { u32 ad = (u32)(0xad96bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083a9d1: ret  */ FN_RET(0x0083a948); r_esp += 4; return;
L_0083a9d2:; BB(0x0083a9d2);
    /* 0083a9d2: mov dword ptr [0xad96bc], 0 */ W32((u32)(0xad96bcu), 0x0u);
    /* 0083a9dc: ret  */ FN_RET(0x0083a948); r_esp += 4; return;
}

void f_0083a9e0(void) /* sub_83A9E0 */
{
    FN_ENTER(0x0083a9e0);
    /* 0083a9e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083a9e4: cmp eax, dword ptr [0xa21ba0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a9ea: mov edx, 0 */ r_edx = 0x0u;
    /* 0083a9ef: je 0x83aa1b */ if (fZ) goto L_0083aa1b;
L_0083a9f1:; BB(0x0083a9f1);
    /* 0083a9f1: cmp eax, dword ptr [0xa21ba4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083a9f7: mov edx, 1 */ r_edx = 0x1u;
    /* 0083a9fc: je 0x83aa1b */ if (fZ) goto L_0083aa1b;
L_0083a9fe:; BB(0x0083a9fe);
    /* 0083a9fe: cmp eax, dword ptr [0xa21ba8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083aa04: mov edx, 2 */ r_edx = 0x2u;
    /* 0083aa09: je 0x83aa1b */ if (fZ) goto L_0083aa1b;
L_0083aa0b:; BB(0x0083aa0b);
    /* 0083aa0b: cmp eax, dword ptr [0xa21bac] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21bacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083aa11: mov edx, 3 */ r_edx = 0x3u;
    /* 0083aa16: je 0x83aa1b */ if (fZ) goto L_0083aa1b;
L_0083aa18:; BB(0x0083aa18);
    /* 0083aa18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083aa1a: ret  */ FN_RET(0x0083a9e0); r_esp += 4; return;
L_0083aa1b:; BB(0x0083aa1b);
    /* 0083aa1b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083aa1e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa20: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa22: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 0083aa25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083aa27: lea eax, [edx + edx + 0xad95e0] */ r_eax = (u32)(r_edx+r_edx+0xad95e0u);
    /* 0083aa2e: ret  */ FN_RET(0x0083a9e0); r_esp += 4; return;
}

void f_0083aa30(void) /* sub_83AA30 */
{
    FN_ENTER(0x0083aa30);
    /* 0083aa30: call 0x83de74 */ r_esp -= 4; W32(r_esp, 0x83aa35u); f_0083de74();
    /* 0083aa35: call 0x841b50 */ r_esp -= 4; W32(r_esp, 0x83aa3au); f_00841b50();
    /* 0083aa3a: push 0x83a948 */ { u32 v = 0x83a948u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aa3f: call 0x82d758 */ r_esp -= 4; W32(r_esp, 0x83aa44u); f_0082d758();
    /* 0083aa44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083aa45: ret  */ FN_RET(0x0083aa30); r_esp += 4; return;
}

void f_0083aa48(void) /* sub_83AA48 */
{
    FN_ENTER(0x0083aa48);
    /* 0083aa48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aa49: mov edx, 0xad9400 */ r_edx = 0xad9400u;
    /* 0083aa4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083aa50:; BB(0x0083aa50);
    /* 0083aa50: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0083aa56: lea ebx, [edx + 4] */ r_ebx = (u32)(r_edx+0x4u);
    /* 0083aa59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa5b: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0083aa5d: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0083aa60: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0083aa63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa65: mov byte ptr [edx + 0x10], cl */ W8((u32)(r_edx+0x10u), (u8)r_ecx);
    /* 0083aa68: mov byte ptr [edx + 0x11], cl */ W8((u32)(r_edx+0x11u), (u8)r_ecx);
    /* 0083aa6b: lea ecx, [edx + 0x12] */ r_ecx = (u32)(r_edx+0x12u);
    /* 0083aa6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083aa70: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 0083aa73: lea ebx, [edx + 0x14] */ r_ebx = (u32)(r_edx+0x14u);
    /* 0083aa76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa78: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0083aa7a: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0083aa7d: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0083aa80: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0083aa83: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 0083aa86: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 0083aa89: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 0083aa8c: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0083aa8f: lea ebx, [edx + 0x34] */ r_ebx = (u32)(r_edx+0x34u);
    /* 0083aa92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aa94: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0083aa96: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0083aa99: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0083aa9c: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0083aa9f: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 0083aaa2: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 0083aaa5: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 0083aaa8: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0083aaab: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0083aaae: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 0083aab1: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 0083aab4: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 0083aab7: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 0083aaba: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 0083aabd: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 0083aac0: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0083aac3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083aac5: mov word ptr [edx + 0x74], cx */ W16((u32)(r_edx+0x74u), (u16)r_ecx);
    /* 0083aac9: mov word ptr [edx + 0x76], cx */ W16((u32)(r_edx+0x76u), (u16)r_ecx);
    /* 0083aacd: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083aad0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083aad3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083aad6: jl 0x83aa50 */ if ((fS!=fO)) goto L_0083aa50;
L_0083aadc:; BB(0x0083aadc);
    /* 0083aadc: mov dword ptr [0xad9610], 0xad9400 */ W32((u32)(0xad9610u), 0xad9400u);
    /* 0083aae6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083aaea: mov dword ptr [0xad9644], 0xad9478 */ W32((u32)(0xad9644u), 0xad9478u);
    /* 0083aaf4: mov dword ptr [0xad95e0], eax */ W32((u32)(0xad95e0u), r_eax);
    /* 0083aaf9: mov dword ptr [0xad95e4], eax */ W32((u32)(0xad95e4u), r_eax);
    /* 0083aafe: mov dword ptr [0xad9678], 0xad94f0 */ W32((u32)(0xad9678u), 0xad94f0u);
    /* 0083ab08: mov dword ptr [0xad95e8], eax */ W32((u32)(0xad95e8u), r_eax);
    /* 0083ab0d: mov dword ptr [0xad96ac], 0xad9568 */ W32((u32)(0xad96acu), 0xad9568u);
    /* 0083ab17: mov dword ptr [0xad95ec], eax */ W32((u32)(0xad95ecu), r_eax);
    /* 0083ab1c: push 0xad95e0 */ { u32 v = 0xad95e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ab21: mov dword ptr [0xad95f0], eax */ W32((u32)(0xad95f0u), r_eax);
    /* 0083ab26: mov dword ptr [0xad95f4], eax */ W32((u32)(0xad95f4u), r_eax);
    /* 0083ab2b: mov word ptr [0xad95f8], ax */ W16((u32)(0xad95f8u), (u16)r_eax);
    /* 0083ab31: mov word ptr [0xad95fa], ax */ W16((u32)(0xad95fau), (u16)r_eax);
    /* 0083ab37: mov word ptr [0xad95fc], ax */ W16((u32)(0xad95fcu), (u16)r_eax);
    /* 0083ab3d: mov word ptr [0xad95fe], ax */ W16((u32)(0xad95feu), (u16)r_eax);
    /* 0083ab43: mov word ptr [0xad9600], ax */ W16((u32)(0xad9600u), (u16)r_eax);
    /* 0083ab49: mov word ptr [0xad9602], ax */ W16((u32)(0xad9602u), (u16)r_eax);
    /* 0083ab4f: mov dword ptr [0xad9604], eax */ W32((u32)(0xad9604u), r_eax);
    /* 0083ab54: mov dword ptr [0xad9608], eax */ W32((u32)(0xad9608u), r_eax);
    /* 0083ab59: mov dword ptr [0xad960c], eax */ W32((u32)(0xad960cu), r_eax);
    /* 0083ab5e: mov dword ptr [0xad9614], eax */ W32((u32)(0xad9614u), r_eax);
    /* 0083ab63: mov dword ptr [0xad9618], eax */ W32((u32)(0xad9618u), r_eax);
    /* 0083ab68: mov dword ptr [0xad961c], eax */ W32((u32)(0xad961cu), r_eax);
    /* 0083ab6d: mov dword ptr [0xad9620], eax */ W32((u32)(0xad9620u), r_eax);
    /* 0083ab72: mov dword ptr [0xad9624], eax */ W32((u32)(0xad9624u), r_eax);
    /* 0083ab77: mov dword ptr [0xad9628], eax */ W32((u32)(0xad9628u), r_eax);
    /* 0083ab7c: mov word ptr [0xad962c], ax */ W16((u32)(0xad962cu), (u16)r_eax);
    /* 0083ab82: mov word ptr [0xad962e], ax */ W16((u32)(0xad962eu), (u16)r_eax);
    /* 0083ab88: mov word ptr [0xad9630], ax */ W16((u32)(0xad9630u), (u16)r_eax);
    /* 0083ab8e: mov word ptr [0xad9632], ax */ W16((u32)(0xad9632u), (u16)r_eax);
    /* 0083ab94: mov word ptr [0xad9634], ax */ W16((u32)(0xad9634u), (u16)r_eax);
    /* 0083ab9a: mov word ptr [0xad9636], ax */ W16((u32)(0xad9636u), (u16)r_eax);
    /* 0083aba0: mov dword ptr [0xad9638], eax */ W32((u32)(0xad9638u), r_eax);
    /* 0083aba5: mov dword ptr [0xad963c], eax */ W32((u32)(0xad963cu), r_eax);
    /* 0083abaa: mov dword ptr [0xad9640], eax */ W32((u32)(0xad9640u), r_eax);
    /* 0083abaf: mov dword ptr [0xad9648], eax */ W32((u32)(0xad9648u), r_eax);
    /* 0083abb4: mov dword ptr [0xad964c], eax */ W32((u32)(0xad964cu), r_eax);
    /* 0083abb9: mov dword ptr [0xad9650], eax */ W32((u32)(0xad9650u), r_eax);
    /* 0083abbe: mov dword ptr [0xad9654], eax */ W32((u32)(0xad9654u), r_eax);
    /* 0083abc3: mov dword ptr [0xad9658], eax */ W32((u32)(0xad9658u), r_eax);
    /* 0083abc8: mov dword ptr [0xad965c], eax */ W32((u32)(0xad965cu), r_eax);
    /* 0083abcd: mov word ptr [0xad9660], ax */ W16((u32)(0xad9660u), (u16)r_eax);
    /* 0083abd3: mov word ptr [0xad9662], ax */ W16((u32)(0xad9662u), (u16)r_eax);
    /* 0083abd9: mov word ptr [0xad9664], ax */ W16((u32)(0xad9664u), (u16)r_eax);
    /* 0083abdf: mov word ptr [0xad9666], ax */ W16((u32)(0xad9666u), (u16)r_eax);
    /* 0083abe5: mov word ptr [0xad9668], ax */ W16((u32)(0xad9668u), (u16)r_eax);
    /* 0083abeb: mov word ptr [0xad966a], ax */ W16((u32)(0xad966au), (u16)r_eax);
    /* 0083abf1: mov dword ptr [0xad966c], eax */ W32((u32)(0xad966cu), r_eax);
    /* 0083abf6: mov dword ptr [0xad9670], eax */ W32((u32)(0xad9670u), r_eax);
    /* 0083abfb: mov dword ptr [0xad9674], eax */ W32((u32)(0xad9674u), r_eax);
    /* 0083ac00: mov dword ptr [0xad967c], eax */ W32((u32)(0xad967cu), r_eax);
    /* 0083ac05: mov dword ptr [0xad9680], eax */ W32((u32)(0xad9680u), r_eax);
    /* 0083ac0a: mov dword ptr [0xad9684], eax */ W32((u32)(0xad9684u), r_eax);
    /* 0083ac0f: mov dword ptr [0xad9688], eax */ W32((u32)(0xad9688u), r_eax);
    /* 0083ac14: mov dword ptr [0xad968c], eax */ W32((u32)(0xad968cu), r_eax);
    /* 0083ac19: mov dword ptr [0xad9690], eax */ W32((u32)(0xad9690u), r_eax);
    /* 0083ac1e: mov word ptr [0xad9694], ax */ W16((u32)(0xad9694u), (u16)r_eax);
    /* 0083ac24: mov word ptr [0xad9696], ax */ W16((u32)(0xad9696u), (u16)r_eax);
    /* 0083ac2a: mov word ptr [0xad9698], ax */ W16((u32)(0xad9698u), (u16)r_eax);
    /* 0083ac30: mov word ptr [0xad969a], ax */ W16((u32)(0xad969au), (u16)r_eax);
    /* 0083ac36: mov word ptr [0xad969c], ax */ W16((u32)(0xad969cu), (u16)r_eax);
    /* 0083ac3c: mov word ptr [0xad969e], ax */ W16((u32)(0xad969eu), (u16)r_eax);
    /* 0083ac42: mov dword ptr [0xad96a0], eax */ W32((u32)(0xad96a0u), r_eax);
    /* 0083ac47: mov dword ptr [0xad96a4], eax */ W32((u32)(0xad96a4u), r_eax);
    /* 0083ac4c: mov dword ptr [0xad96a8], eax */ W32((u32)(0xad96a8u), r_eax);
    /* 0083ac51: mov dword ptr [0xad96b0], eax */ W32((u32)(0xad96b0u), r_eax);
    /* 0083ac56: mov dword ptr [0xad96b4], eax */ W32((u32)(0xad96b4u), r_eax);
    /* 0083ac5b: mov dword ptr [0xad96b8], eax */ W32((u32)(0xad96b8u), r_eax);
    /* 0083ac60: mov dword ptr [0xad96bc], eax */ W32((u32)(0xad96bcu), r_eax);
    /* 0083ac65: call 0x842bbc */ r_esp -= 4; W32(r_esp, 0x83ac6au); f_00842bbc();
    /* 0083ac6a: push 0x83a948 */ { u32 v = 0x83a948u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ac6f: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83ac74u); f_0082d73c();
    /* 0083ac74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083ac77: call 0x83e094 */ r_esp -= 4; W32(r_esp, 0x83ac7cu); f_0083e094();
    /* 0083ac7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ac7d: ret  */ FN_RET(0x0083aa48); r_esp += 4; return;
}

void f_0083ac00(void)
{
    FN_ENTER(0x0083ac00);
    /* 0083ac00: mov dword ptr [0xad967c], eax */ W32((u32)(0xad967cu), r_eax);
    /* 0083ac05: mov dword ptr [0xad9680], eax */ W32((u32)(0xad9680u), r_eax);
    /* 0083ac0a: mov dword ptr [0xad9684], eax */ W32((u32)(0xad9684u), r_eax);
    /* 0083ac0f: mov dword ptr [0xad9688], eax */ W32((u32)(0xad9688u), r_eax);
    /* 0083ac14: mov dword ptr [0xad968c], eax */ W32((u32)(0xad968cu), r_eax);
    /* 0083ac19: mov dword ptr [0xad9690], eax */ W32((u32)(0xad9690u), r_eax);
    /* 0083ac1e: mov word ptr [0xad9694], ax */ W16((u32)(0xad9694u), (u16)r_eax);
    /* 0083ac24: mov word ptr [0xad9696], ax */ W16((u32)(0xad9696u), (u16)r_eax);
    /* 0083ac2a: mov word ptr [0xad9698], ax */ W16((u32)(0xad9698u), (u16)r_eax);
    /* 0083ac30: mov word ptr [0xad969a], ax */ W16((u32)(0xad969au), (u16)r_eax);
    /* 0083ac36: mov word ptr [0xad969c], ax */ W16((u32)(0xad969cu), (u16)r_eax);
    /* 0083ac3c: mov word ptr [0xad969e], ax */ W16((u32)(0xad969eu), (u16)r_eax);
    /* 0083ac42: mov dword ptr [0xad96a0], eax */ W32((u32)(0xad96a0u), r_eax);
    /* 0083ac47: mov dword ptr [0xad96a4], eax */ W32((u32)(0xad96a4u), r_eax);
    /* 0083ac4c: mov dword ptr [0xad96a8], eax */ W32((u32)(0xad96a8u), r_eax);
    /* 0083ac51: mov dword ptr [0xad96b0], eax */ W32((u32)(0xad96b0u), r_eax);
    /* 0083ac56: mov dword ptr [0xad96b4], eax */ W32((u32)(0xad96b4u), r_eax);
    /* 0083ac5b: mov dword ptr [0xad96b8], eax */ W32((u32)(0xad96b8u), r_eax);
    /* 0083ac60: mov dword ptr [0xad96bc], eax */ W32((u32)(0xad96bcu), r_eax);
    /* 0083ac65: call 0x842bbc */ r_esp -= 4; W32(r_esp, 0x83ac6au); f_00842bbc();
    /* 0083ac6a: push 0x83a948 */ { u32 v = 0x83a948u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ac6f: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83ac74u); f_0082d73c();
    /* 0083ac74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083ac77: call 0x83e094 */ r_esp -= 4; W32(r_esp, 0x83ac7cu); f_0083e094();
    /* 0083ac7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ac7d: ret  */ FN_RET(0x0083ac00); r_esp += 4; return;
}

void f_0083ac80(void) /* sub_83AC80 */
{
    FN_ENTER(0x0083ac80);
    /* 0083ac80: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083ac84: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0083ac88: fld dword ptr [0x98ab04] */ FPUSH(R_F32((u32)(0x98ab04u)));
    /* 0083ac8e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0083ac90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ac92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ac93: fld dword ptr [0x98ab00] */ FPUSH(R_F32((u32)(0x98ab00u)));
    /* 0083ac99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083ac9b: jae 0x83ac9f */ if (!fC) goto L_0083ac9f;
L_0083ac9d:; BB(0x0083ac9d);
    /* 0083ac9d: fst st(3) */ ST(3) = ST(0);
L_0083ac9f:; BB(0x0083ac9f);
    /* 0083ac9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083aca1: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0083aca3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083aca5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083aca6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083aca8: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0083acaa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083acac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083acae: jbe 0x83acb2 */ if ((fC||fZ)) goto L_0083acb2;
L_0083acb0:; BB(0x0083acb0);
    /* 0083acb0: fst st(3) */ ST(3) = ST(0);
L_0083acb2:; BB(0x0083acb2);
    /* 0083acb2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083acb4: fchs  */ ST(0) = -ST(0);
    /* 0083acb6: fstp dword ptr [0xaf0304] */ W_F32((u32)(0xaf0304u), ST(0)); FPOP();
    /* 0083acbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083acbd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083acbf: jb 0x83acc3 */ if (fC) goto L_0083acc3;
L_0083acc1:; BB(0x0083acc1);
    /* 0083acc1: fst st(1) */ ST(1) = ST(0);
L_0083acc3:; BB(0x0083acc3);
    /* 0083acc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083acc5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0083acc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083acc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083acca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083accc: jae 0x83acd0 */ if (!fC) goto L_0083acd0;
L_0083acce:; BB(0x0083acce);
    /* 0083acce: fst st(1) */ ST(1) = ST(0);
L_0083acd0:; BB(0x0083acd0);
    /* 0083acd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083acd2: fchs  */ ST(0) = -ST(0);
    /* 0083acd4: fstp dword ptr [0xaf0300] */ W_F32((u32)(0xaf0300u), ST(0)); FPOP();
    /* 0083acda: ret  */ FN_RET(0x0083ac80); r_esp += 4; return;
}

void f_0083acdc(void) /* sub_83ACDC */
{
    FN_ENTER(0x0083acdc);
    /* 0083acdc: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ace1: call 0x82d758 */ r_esp -= 4; W32(r_esp, 0x83ace6u); f_0082d758();
    /* 0083ace6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083ace7: ret  */ FN_RET(0x0083acdc); r_esp += 4; return;
}

void f_0083ace8(void) /* sub_83ACE8 */
{
    FN_ENTER(0x0083ace8);
    /* 0083ace8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ace9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083acec: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0083acf0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083acf2: je 0x83ad39 */ if (fZ) goto L_0083ad39;
L_0083acf4:; BB(0x0083acf4);
    /* 0083acf4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083acf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083acf8: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x83acfeu); call_ind(t); }
    /* 0083acfe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083ad02: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 0083ad05: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0083ad0a: mov byte ptr [ebx + 2], dl */ W8((u32)(r_ebx+0x2u), (u8)r_edx);
    /* 0083ad0d: movzx ecx, word ptr [esp + 6] */ r_ecx = (u32)R16((u32)(r_esp+0x6u));
    /* 0083ad12: mov byte ptr [ebx + 3], cl */ W8((u32)(r_ebx+0x3u), (u8)r_ecx);
    /* 0083ad15: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0083ad1a: mov byte ptr [ebx + 4], al */ W8((u32)(r_ebx+0x4u), (u8)r_eax);
    /* 0083ad1d: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 0083ad22: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 0083ad25: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0083ad2a: mov byte ptr [ebx + 6], al */ W8((u32)(r_ebx+0x6u), (u8)r_eax);
    /* 0083ad2d: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0083ad32: mov byte ptr [ebx + 7], al */ W8((u32)(r_ebx+0x7u), (u8)r_eax);
    /* 0083ad35: mov byte ptr [ebx + 8], 0 */ W8((u32)(r_ebx+0x8u), 0x0u);
L_0083ad39:; BB(0x0083ad39);
    /* 0083ad39: mov eax, 1 */ r_eax = 0x1u;
    /* 0083ad3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ad41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ad42: ret  */ FN_RET(0x0083ace8); r_esp += 4; return;
}

void f_0083ad44(void) /* sub_83AD44 */
{
    FN_ENTER(0x0083ad44);
    /* 0083ad44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083ad48: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0083ad4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083ad4d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083ad50: mov edi, edx */ r_edi = r_edx;
    /* 0083ad52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ad54: je 0x83ada5 */ if (fZ) goto L_0083ada5;
L_0083ad56:; BB(0x0083ad56);
    /* 0083ad56: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ad58: je 0x83ada5 */ if (fZ) goto L_0083ada5;
L_0083ad5a:; BB(0x0083ad5a);
    /* 0083ad5a: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0083ad5d: add ecx, 0xfffff894 */ {  u32 a = r_ecx; u32 b = 0xfffff894u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ad63: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0083ad67: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 0083ad6b: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083ad6e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0083ad72: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 0083ad76: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0083ad7a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0083ad7e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0083ad82: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 0083ad86: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0083ad8a: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 0083ad8e: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0083ad91: movzx eax, byte ptr [eax + 7] */ r_eax = (u32)R8((u32)(r_eax+0x7u));
    /* 0083ad95: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083ad99: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083ad9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ad9d: call 0x85b4e9 */ r_esp -= 4; W32(r_esp, 0x83ada2u); f_0085b4e9();
    /* 0083ada2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083ada3: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_0083ada5:; BB(0x0083ada5);
    /* 0083ada5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ada8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083ada9: ret  */ FN_RET(0x0083ad44); r_esp += 4; return;
}

void f_0083adac(void) /* sub_83ADAC */
{
    FN_ENTER(0x0083adac);
    /* 0083adac: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083adb1: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83adb6u); f_0082d73c();
    /* 0083adb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083adb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083adb9: ret  */ FN_RET(0x0083adac); r_esp += 4; return;
}

void f_0083adbc(void) /* sub_83ADBC */
{
    FN_ENTER(0x0083adbc);
    /* 0083adbc: mov eax, dword ptr [0xad96c0] */ r_eax = R32((u32)(0xad96c0u));
    /* 0083adc1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083adc3: jne 0x83addb */ if (!fZ) goto L_0083addb;
L_0083adc5:; BB(0x0083adc5);
    /* 0083adc5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083adc8: mov dword ptr [0xad96c0], eax */ W32((u32)(0xad96c0u), r_eax);
    /* 0083adcd: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083add2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083add4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083add5: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x83addbu); call_ind(t); }
L_0083addb:; BB(0x0083addb);
    /* 0083addb: ret  */ FN_RET(0x0083adbc); r_esp += 4; return;
}

void f_0083addc(void) /* sub_83ADDC */
{
    FN_ENTER(0x0083addc);
    /* 0083addc: mov eax, dword ptr [0xad96c0] */ r_eax = R32((u32)(0xad96c0u));
    /* 0083ade1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083ade3: je 0x83ae00 */ if (fZ) goto L_0083ae00;
L_0083ade5:; BB(0x0083ade5);
    /* 0083ade5: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083ade8: mov dword ptr [0xad96c0], eax */ W32((u32)(0xad96c0u), r_eax);
    /* 0083aded: call 0x837534 */ r_esp -= 4; W32(r_esp, 0x83adf2u); f_00837534();
    /* 0083adf2: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083adf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083adf8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083adfa: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x83ae00u); call_ind(t); }
L_0083ae00:; BB(0x0083ae00);
    /* 0083ae00: ret  */ FN_RET(0x0083addc); r_esp += 4; return;
}

void f_0083ae04(void) /* sub_83AE04 */
{
    FN_ENTER(0x0083ae04);
    /* 0083ae04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083ae07: call 0x843f6c */ r_esp -= 4; W32(r_esp, 0x83ae0cu); f_00843f6c();
    /* 0083ae0c: call 0x84a634 */ r_esp -= 4; W32(r_esp, 0x83ae11u); f_0084a634();
    /* 0083ae11: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x83ae16u); f_0061cdb0();
    /* 0083ae16: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ae18: je 0x83ae47 */ if (fZ) goto L_0083ae47;
L_0083ae1a:; BB(0x0083ae1a);
    /* 0083ae1a: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083ae20: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083ae22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ae24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae29: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x83ae2cu); call_ind(t); }
    /* 0083ae2c: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 0083ae32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ae34: je 0x83ae47 */ if (fZ) goto L_0083ae47;
L_0083ae36:; BB(0x0083ae36);
    /* 0083ae36: mov edx, dword ptr [0xad96c4] */ r_edx = R32((u32)(0xad96c4u));
    /* 0083ae3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ae3e: jne 0x83ae47 */ if (!fZ) goto L_0083ae47;
L_0083ae40:; BB(0x0083ae40);
    /* 0083ae40: cmp eax, 0x88760868 */ {  u32 a = r_eax; u32 b = 0x88760868u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ae45: je 0x83ae6e */ if (fZ) goto L_0083ae6e;
L_0083ae47:; BB(0x0083ae47);
    /* 0083ae47: call 0x82c43c */ r_esp -= 4; W32(r_esp, 0x83ae4cu); f_0082c43c();
    /* 0083ae4c: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083ae52: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083ae54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083ae56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae57: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae5d: push dword ptr [0xad96c8] */ { u32 v = R32((u32)(0xad96c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ae63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae66: call dword ptr [ecx + 0x90] */ { u32 t = R32((u32)(r_ecx+0x90u)); r_esp -= 4; W32(r_esp, 0x83ae6cu); call_ind(t); }
    /* 0083ae6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ae6d: ret  */ FN_RET(0x0083ae04); r_esp += 4; return;
L_0083ae6e:; BB(0x0083ae6e);
    /* 0083ae6e: mov dword ptr [0xad96c4], 1 */ W32((u32)(0xad96c4u), 0x1u);
    /* 0083ae78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae7a: push 0x98ac00 */ { u32 v = 0x98ac00u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae7f: push 0x98ab80 */ { u32 v = 0x98ab80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083ae84: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083ae8a: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x83ae90u); call_ind(t); }
    /* 0083ae90: call 0x7a62dc */ r_esp -= 4; W32(r_esp, 0x83ae95u); f_007a62dc();
    /* 0083ae95: jmp 0x83ae47 */ goto L_0083ae47;
}

void f_0083ae98(void) /* sub_83AE98 */
{
    FN_ENTER(0x0083ae98);
    /* 0083ae98: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083ae9e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083aea0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083aea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aea3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aea9: push dword ptr [0xad96c8] */ { u32 v = R32((u32)(0xad96c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083aeaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeb2: call dword ptr [ecx + 0x90] */ { u32 t = R32((u32)(r_ecx+0x90u)); r_esp -= 4; W32(r_esp, 0x83aeb8u); call_ind(t); }
    /* 0083aeb8: ret  */ FN_RET(0x0083ae98); r_esp += 4; return;
}

void f_0083aebc(void) /* sub_83AEBC */
{
    FN_ENTER(0x0083aebc);
    /* 0083aebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083aebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083aebf: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083aec2: je 0x83aec9 */ if (fZ) goto L_0083aec9;
L_0083aec4:; BB(0x0083aec4);
    /* 0083aec4: mov eax, 1 */ r_eax = 0x1u;
L_0083aec9:; BB(0x0083aec9);
    /* 0083aec9: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083aecc: je 0x83aed1 */ if (fZ) goto L_0083aed1;
L_0083aece:; BB(0x0083aece);
    /* 0083aece: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0083aed1:; BB(0x0083aed1);
    /* 0083aed1: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083aed4: je 0x83aed9 */ if (fZ) goto L_0083aed9;
L_0083aed6:; BB(0x0083aed6);
    /* 0083aed6: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0083aed9:; BB(0x0083aed9);
    /* 0083aed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083aedb: je 0x83aef8 */ if (fZ) goto L_0083aef8;
L_0083aedd:; BB(0x0083aedd);
    /* 0083aedd: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083aee3: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0083aee5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083aee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aee8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aeef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083aef2: call dword ptr [ebp + 0x90] */ { u32 t = R32((u32)(r_ebp+0x90u)); r_esp -= 4; W32(r_esp, 0x83aef8u); call_ind(t); }
L_0083aef8:; BB(0x0083aef8);
    /* 0083aef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083aef9: ret  */ FN_RET(0x0083aebc); r_esp += 4; return;
}

void f_0083aefc(void) /* sub_83AEFC */
{
    FN_ENTER(0x0083aefc);
    /* 0083aefc: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083af01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083af05: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af0b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83af11u); call_ind(t); }
    /* 0083af11: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083af16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af18: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083af1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af20: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83af26u); call_ind(t); }
    /* 0083af26: ret  */ FN_RET(0x0083aefc); r_esp += 4; return;
}

void f_0083af28(void) /* sub_83AF28 */
{
    FN_ENTER(0x0083af28);
    /* 0083af28: push dword ptr [ecx*4 + 0xa21bb0] */ { u32 v = R32((u32)(r_ecx*4+0xa21bb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083af2f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083af34: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083af3c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83af42u); call_ind(t); }
    /* 0083af42: ret  */ FN_RET(0x0083af28); r_esp += 4; return;
}

void f_0083af44(void) /* sub_83AF44 */
{
    FN_ENTER(0x0083af44);
    /* 0083af44: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083af47: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 0083af4c: mov dword ptr [0xad96c0], 0 */ W32((u32)(0xad96c0u), 0x0u);
    /* 0083af56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083af58: je 0x83af66 */ if (fZ) goto L_0083af66;
L_0083af5a:; BB(0x0083af5a);
    /* 0083af5a: mov dword ptr [0xad96c8], 7 */ W32((u32)(0xad96c8u), 0x7u);
    /* 0083af64: jmp 0x83af70 */ goto L_0083af70;
L_0083af66:; BB(0x0083af66);
    /* 0083af66: mov dword ptr [0xad96c8], 3 */ W32((u32)(0xad96c8u), 0x3u);
L_0083af70:; BB(0x0083af70);
    /* 0083af70: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083af76: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083af78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083af7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af7b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af81: push dword ptr [0xad96c8] */ { u32 v = R32((u32)(0xad96c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083af87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083af8a: call dword ptr [ecx + 0x90] */ { u32 t = R32((u32)(r_ecx+0x90u)); r_esp -= 4; W32(r_esp, 0x83af90u); call_ind(t); }
    /* 0083af90: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083af95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af97: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0083af99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083af9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083af9c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afa2u); call_ind(t); }
    /* 0083afa2: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083afa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afa9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0083afab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083afad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083afae: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afb4u); call_ind(t); }
    /* 0083afb4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083afb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afbb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0083afbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083afbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083afc0: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afc6u); call_ind(t); }
    /* 0083afc6: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083afcb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afcd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083afd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083afd2: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afd8u); call_ind(t); }
    /* 0083afd8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083afdd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afdf: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0083afe1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083afe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083afe4: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afeau); call_ind(t); }
    /* 0083afea: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083afef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aff1: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0083aff6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083aff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083aff9: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83afffu); call_ind(t); }
    /* 0083afff: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b004: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b006: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b00b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b00d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b00e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b014u); call_ind(t); }
    /* 0083b014: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b019: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b01b: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b020: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b023: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b029u); call_ind(t); }
    /* 0083b029: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b02e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b030: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b035: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b038: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b03eu); call_ind(t); }
    /* 0083b03e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b045: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0083b047: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b04a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b050u); call_ind(t); }
    /* 0083b050: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b055: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b057: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b05c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b062u); call_ind(t); }
    /* 0083b062: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b067: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b069: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b06b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b06e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b074u); call_ind(t); }
    /* 0083b074: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b079: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b07b: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0083b07d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b07f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b080: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83b086u); call_ind(t); }
    /* 0083b086: mov eax, 0x98ab20 */ r_eax = 0x98ab20u;
    /* 0083b08b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b08d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0083b090: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0083b093: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0083b096: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0083b09a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0083b09e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0083b0a1: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0083b0a5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083b0a8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0083b0ac: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0083b0af: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0083b0b3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083b0b6: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0083b0ba: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0083b0bd: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0083b0c1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0083b0c4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0083b0c8: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083b0cb: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0083b0cf: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0083b0d2: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0083b0d6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0083b0d9: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0083b0dd: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0083b0e0: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0083b0e4: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0083b0e7: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0083b0eb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0083b0ee: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0083b0f2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0083b0f5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0083b0f8: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0083b0fc: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0083b100: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083b106: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083b109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b10a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083b10c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b10d: call dword ptr [ecx + 0xa8] */ { u32 t = R32((u32)(r_ecx+0xa8u)); r_esp -= 4; W32(r_esp, 0x83b113u); call_ind(t); }
    /* 0083b113: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b116: ret  */ FN_RET(0x0083af44); r_esp += 4; return;
}

