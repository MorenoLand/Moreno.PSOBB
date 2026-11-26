#include "protos.h"

void f_00847074(void) /* sub_847074 */
{
    FN_ENTER(0x00847074);
    /* 00847074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847075: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847078: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0084707c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0084707e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00847080: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00847083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847084: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00847088: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x84708du); f_008451f8();
    /* 0084708d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00847091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847092: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00847096: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00847099: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084709b: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x8470a0u); f_008451f8();
    /* 008470a0: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008470a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008470a5: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 008470a9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008470ac: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008470ae: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x8470b3u); f_008451f8();
    /* 008470b3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008470b6: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 008470ba: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 008470be: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008470c2: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 008470c6: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 008470ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008470cc: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008470d0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008470d2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008470d5: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 008470d9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008470dd: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 008470e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008470e3: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 008470e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008470e9: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 008470ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008470ef: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008470f2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 008470f6: fchs  */ ST(0) = -ST(0);
    /* 008470f8: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 008470fc: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00847100: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00847104: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847106: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0084710a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084710c: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0084710f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847111: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00847114: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00847118: fchs  */ ST(0) = -ST(0);
    /* 0084711a: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0084711e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00847122: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00847125: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847127: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0084712b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084712d: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00847131: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847133: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00847136: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847139: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084713a: ret  */ FN_RET(0x00847074); r_esp += 4; return;
}

void f_0084713c(void) /* sub_84713C */
{
    FN_ENTER(0x0084713c);
    /* 0084713c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084713f: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00847143: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00847147: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084714b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0084714d: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00847150: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00847153: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00847156: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00847158: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084715b: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0084715e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00847160: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00847164: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00847167: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00847169: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0084716d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084716f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00847173: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847175: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00847177: fld dword ptr [0x98c5bc] */ FPUSH(R_F32((u32)(0x98c5bcu)));
    /* 0084717d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084717f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00847183: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00847185: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00847187: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00847189: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0084718d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084718f: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00847191: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00847193: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00847196: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00847199: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084719b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0084719f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008471a2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008471a4: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 008471a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008471a8: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008471aa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008471ae: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008471b1: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008471b3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008471b7: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008471ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008471bc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008471be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008471c0: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008471c2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008471c6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008471c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008471ca: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 008471ce: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008471d0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008471d2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008471d6: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 008471da: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008471dc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008471de: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008471e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008471e2: fcomp dword ptr [0x98c5b8] */ fx_compare(ST(0), R_F32((u32)(0x98c5b8u))); FPOP();
    /* 008471e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008471ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008471eb: jbe 0x847220 */ if ((fC||fZ)) goto L_00847220;
L_008471ed:; BB(0x008471ed);
    /* 008471ed: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 008471f1: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 008471f4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 008471f8: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 008471fc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00847200: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00847204: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00847208: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084720a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0084720e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847210: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00847214: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00847218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084721a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0084721e: jmp 0x847251 */ goto L_00847251;
L_00847220:; BB(0x00847220);
    /* 00847220: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00847224: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 00847227: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0084722b: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 0084722f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00847233: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00847237: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084723b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084723d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00847241: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847243: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00847247: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0084724b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084724d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_00847251:; BB(0x00847251);
    /* 00847251: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00847252: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00847256: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00847258: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084725c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084725e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847260: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00847264: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00847266: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847268: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0084726c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084726e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847270: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00847273: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x847278u); f_0082f9f8();
    /* 00847278: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084727c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084727e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00847282: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00847286: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0084728a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084728e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00847290: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00847292: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00847294: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00847296: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00847298: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084729a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084729c: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084729e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008472a0: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008472a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008472a5: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008472a8: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008472ab: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008472ae: ret  */ FN_RET(0x0084713c); r_esp += 4; return;
}

void f_008472b0(void) /* sub_8472B0 */
{
    FN_ENTER(0x008472b0);
    /* 008472b0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008472b4: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 008472ba: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 008472bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008472bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008472c2: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 008472c9: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008472cc: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 008472cf: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008472d1: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008472d4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008472d6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 008472d9: ret  */ FN_RET(0x008472b0); r_esp += 4; return;
}

void f_008472dc(void) /* sub_8472DC */
{
    FN_ENTER(0x008472dc);
    /* 008472dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008472dd: mov eax, ecx */ r_eax = r_ecx;
    /* 008472df: mov ebx, eax */ r_ebx = r_eax;
L_008472e1:; BB(0x008472e1);
    /* 008472e1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8472e6u); f_0082d7b0();
    /* 008472e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008472e8: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x8472edu); f_008305ec();
    /* 008472ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008472ee: call dword ptr [0xae6dc0] */ { u32 t = R32((u32)(0xae6dc0u)); r_esp -= 4; W32(r_esp, 0x8472f4u); call_ind(t); }
    /* 008472f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008472f5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008472f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008472fa: je 0x84730a */ if (fZ) goto L_0084730a;
L_008472fc:; BB(0x008472fc);
    /* 008472fc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008472fe: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847301: jne 0x84730a */ if (!fZ) goto L_0084730a;
L_00847303:; BB(0x00847303);
    /* 00847303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847304: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x847309u); f_0082e6c8();
    /* 00847309: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0084730a:; BB(0x0084730a);
    /* 0084730a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0084730d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084730f: je 0x847316 */ if (fZ) goto L_00847316;
L_00847311:; BB(0x00847311);
    /* 00847311: call 0x8472dc */ r_esp -= 4; W32(r_esp, 0x847316u); f_008472dc();
L_00847316:; BB(0x00847316);
    /* 00847316: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x84731bu); f_0082da80();
    /* 0084731b: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0084731e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847320: jne 0x8472e1 */ if (!fZ) goto L_008472e1;
L_00847322:; BB(0x00847322);
    /* 00847322: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847323: ret  */ FN_RET(0x008472dc); r_esp += 4; return;
}

void f_00847324(void) /* sub_847324 */
{
    FN_ENTER(0x00847324);
    /* 00847324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847325: mov eax, ecx */ r_eax = r_ecx;
    /* 00847327: mov ebx, eax */ r_ebx = r_eax;
L_00847329:; BB(0x00847329);
    /* 00847329: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x84732eu); f_0082d7b0();
    /* 0084732e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00847330: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x847335u); f_008305ec();
    /* 00847335: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847338: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084733a: je 0x84734a */ if (fZ) goto L_0084734a;
L_0084733c:; BB(0x0084733c);
    /* 0084733c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0084733e: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847341: jne 0x84734a */ if (!fZ) goto L_0084734a;
L_00847343:; BB(0x00847343);
    /* 00847343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847344: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x847349u); f_0082e6c8();
    /* 00847349: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0084734a:; BB(0x0084734a);
    /* 0084734a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0084734d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084734f: je 0x847356 */ if (fZ) goto L_00847356;
L_00847351:; BB(0x00847351);
    /* 00847351: call 0x847324 */ r_esp -= 4; W32(r_esp, 0x847356u); f_00847324();
L_00847356:; BB(0x00847356);
    /* 00847356: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x84735bu); f_0082da80();
    /* 0084735b: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0084735e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847360: jne 0x847329 */ if (!fZ) goto L_00847329;
L_00847362:; BB(0x00847362);
    /* 00847362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847363: ret  */ FN_RET(0x00847324); r_esp += 4; return;
}

void f_00847364(void) /* sub_847364 */
{
    FN_ENTER(0x00847364);
    /* 00847364: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847365: mov eax, ecx */ r_eax = r_ecx;
    /* 00847367: mov ebx, eax */ r_ebx = r_eax;
L_00847369:; BB(0x00847369);
    /* 00847369: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x84736eu); f_0082d7b0();
    /* 0084736e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00847370: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x847375u); f_0082fcbc();
    /* 00847375: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847376: call dword ptr [0xae6dc0] */ { u32 t = R32((u32)(0xae6dc0u)); r_esp -= 4; W32(r_esp, 0x84737cu); call_ind(t); }
    /* 0084737c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084737d: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847382: je 0x847392 */ if (fZ) goto L_00847392;
L_00847384:; BB(0x00847384);
    /* 00847384: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00847386: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847389: jne 0x847392 */ if (!fZ) goto L_00847392;
L_0084738b:; BB(0x0084738b);
    /* 0084738b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084738c: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x847391u); f_0082e6c8();
    /* 00847391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847392:; BB(0x00847392);
    /* 00847392: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00847395: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847397: je 0x84739e */ if (fZ) goto L_0084739e;
L_00847399:; BB(0x00847399);
    /* 00847399: call 0x847364 */ r_esp -= 4; W32(r_esp, 0x84739eu); f_00847364();
L_0084739e:; BB(0x0084739e);
    /* 0084739e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8473a3u); f_0082da80();
    /* 008473a3: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 008473a6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008473a8: jne 0x847369 */ if (!fZ) goto L_00847369;
L_008473aa:; BB(0x008473aa);
    /* 008473aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008473ab: ret  */ FN_RET(0x00847364); r_esp += 4; return;
}

void f_008473ac(void) /* sub_8473AC */
{
    FN_ENTER(0x008473ac);
    /* 008473ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008473ad: mov eax, ecx */ r_eax = r_ecx;
    /* 008473af: mov ebx, eax */ r_ebx = r_eax;
L_008473b1:; BB(0x008473b1);
    /* 008473b1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8473b6u); f_0082d7b0();
    /* 008473b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008473b8: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x8473bdu); f_0082fcbc();
    /* 008473bd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008473c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008473c2: je 0x8473d2 */ if (fZ) goto L_008473d2;
L_008473c4:; BB(0x008473c4);
    /* 008473c4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008473c6: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008473c9: jne 0x8473d2 */ if (!fZ) goto L_008473d2;
L_008473cb:; BB(0x008473cb);
    /* 008473cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008473cc: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x8473d1u); f_0082e6c8();
    /* 008473d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008473d2:; BB(0x008473d2);
    /* 008473d2: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008473d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008473d7: je 0x8473de */ if (fZ) goto L_008473de;
L_008473d9:; BB(0x008473d9);
    /* 008473d9: call 0x8473ac */ r_esp -= 4; W32(r_esp, 0x8473deu); f_008473ac();
L_008473de:; BB(0x008473de);
    /* 008473de: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8473e3u); f_0082da80();
    /* 008473e3: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 008473e6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008473e8: jne 0x8473b1 */ if (!fZ) goto L_008473b1;
L_008473ea:; BB(0x008473ea);
    /* 008473ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008473eb: ret  */ FN_RET(0x008473ac); r_esp += 4; return;
}

void f_008473ec(void) /* sub_8473EC */
{
    FN_ENTER(0x008473ec);
    /* 008473ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008473ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008473ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008473ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008473f0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008473f3: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008473f7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008473fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008473fc: je 0x847495 */ if (fZ) goto L_00847495;
L_00847402:; BB(0x00847402);
    /* 00847402: mov ebx, dword ptr [0xaeb5a0] */ r_ebx = R32((u32)(0xaeb5a0u));
    /* 00847408: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 0084740b: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847411: je 0x84742e */ if (fZ) goto L_0084742e;
L_00847413:; BB(0x00847413);
    /* 00847413: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00847416: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00847419: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0084741c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084741e: je 0x847426 */ if (fZ) goto L_00847426;
L_00847420:; BB(0x00847420);
    /* 00847420: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00847423: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
L_00847426:; BB(0x00847426);
    /* 00847426: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847429: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0084742c: jmp 0x847430 */ goto L_00847430;
L_0084742e:; BB(0x0084742e);
    /* 0084742e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00847430:; BB(0x00847430);
    /* 00847430: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847436: je 0x847453 */ if (fZ) goto L_00847453;
L_00847438:; BB(0x00847438);
    /* 00847438: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0084743b: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0084743e: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00847441: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847443: je 0x84747c */ if (fZ) goto L_0084747c;
L_00847445:; BB(0x00847445);
    /* 00847445: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00847448: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
L_0084744b:; BB(0x0084744b);
    /* 0084744b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084744e: mov dword ptr [ebx + 0x1c], esi */ W32((u32)(r_ebx+0x1cu), r_esi);
    /* 00847451: jmp 0x847455 */ goto L_00847455;
L_00847453:; BB(0x00847453);
    /* 00847453: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00847455:; BB(0x00847455);
    /* 00847455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847457: je 0x847480 */ if (fZ) goto L_00847480;
L_00847459:; BB(0x00847459);
    /* 00847459: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0084745d: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 00847460: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 00847463: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00847467: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0084746b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0084746f: call 0x8474b8 */ r_esp -= 4; W32(r_esp, 0x847474u); f_008474b8();
    /* 00847474: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847477: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00847479: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084747a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084747b: ret  */ FN_RET(0x008473ec); r_esp += 4; return;
L_0084747c:; BB(0x0084747c);
    /* 0084747c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084747e: jmp 0x84744b */ goto L_0084744b;
L_00847480:; BB(0x00847480);
    /* 00847480: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847482: jne 0x847459 */ if (!fZ) goto L_00847459;
L_00847484:; BB(0x00847484);
    /* 00847484: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00847488: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0084748b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084748d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00847492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00847493: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00847494: ret  */ FN_RET(0x008473ec); r_esp += 4; return;
L_00847495:; BB(0x00847495);
    /* 00847495: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00847499: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0084749f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008474a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008474a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008474a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008474a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008474a6: ret  */ FN_RET(0x008473ec); r_esp += 4; return;
}

void f_008474b8(void) /* sub_8474B8 */
{
    FN_ENTER(0x008474b8);
    /* 008474b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008474b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008474ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008474bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008474bc: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008474bf: mov ebx, dword ptr [esp + 0x7c] */ r_ebx = R32((u32)(r_esp+0x7cu));
    /* 008474c3: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 008474c7: fldz  */ FPUSH(0.0);
    /* 008474c9: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008474cd: mov edi, ecx */ r_edi = r_ecx;
    /* 008474cf: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 008474d3: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 008474da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008474dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008474de: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 008474e2: je 0x847531 */ if (fZ) goto L_00847531;
L_008474e4:; BB(0x008474e4);
    /* 008474e4: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008474e7: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 008474eb: mov ecx, eax */ r_ecx = r_eax;
    /* 008474ed: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008474f1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008474f4: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008474f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008474fc: mov edx, 8 */ r_edx = 0x8u;
    /* 00847501: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 00847505: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00847509: lea esi, [esp + 0x14] */ r_esi = (u32)(r_esp+0x14u);
    /* 0084750d: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00847511: call 0x84ae50 */ r_esp -= 4; W32(r_esp, 0x847516u); f_0084ae50();
    /* 00847516: fld dword ptr [0x98c5c0] */ FPUSH(R_F32((u32)(0x98c5c0u)));
    /* 0084751c: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0084751f: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00847523: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00847526: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084752a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0084752d: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
L_00847531:; BB(0x00847531);
    /* 00847531: fldz  */ FPUSH(0.0);
    /* 00847533: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847535: je 0x84758a */ if (fZ) goto L_0084758a;
L_00847537:; BB(0x00847537);
    /* 00847537: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00847539: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084753c: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 00847543: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00847547: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084754b: mov ecx, edi */ r_ecx = r_edi;
    /* 0084754d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00847550: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00847554: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00847558: mov edx, 8 */ r_edx = 0x8u;
    /* 0084755d: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00847561: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00847565: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00847569: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084756d: call 0x84ae50 */ r_esp -= 4; W32(r_esp, 0x847572u); f_0084ae50();
    /* 00847572: fld dword ptr [0x98c5c0] */ FPUSH(R_F32((u32)(0x98c5c0u)));
    /* 00847578: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 0084757c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00847580: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00847583: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00847587: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
L_0084758a:; BB(0x0084758a);
    /* 0084758a: mov eax, dword ptr [0xaeb5a4] */ r_eax = R32((u32)(0xaeb5a4u));
    /* 0084758f: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00847593: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00847597: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00847599: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0084759d: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 008475a1: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 008475a5: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008475a9: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_008475ad:; BB(0x008475ad);
    /* 008475ad: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008475af: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 008475b2: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475b8: je 0x847822 */ if (fZ) goto L_00847822;
L_008475be:; BB(0x008475be);
    /* 008475be: movzx ebp, word ptr [ebx + 6] */ r_ebp = (u32)R16((u32)(r_ebx+0x6u));
    /* 008475c2: mov ecx, edx */ r_ecx = r_edx;
    /* 008475c4: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008475c7: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008475cb: cmp esi, 0x22 */ {  u32 a = r_esi; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475ce: je 0x84780a */ if (fZ) goto L_0084780a;
L_008475d4:; BB(0x008475d4);
    /* 008475d4: cmp esi, 0x23 */ {  u32 a = r_esi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475d7: je 0x8477ef */ if (fZ) goto L_008477ef;
L_008475dd:; BB(0x008475dd);
    /* 008475dd: cmp esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475e0: je 0x8477d4 */ if (fZ) goto L_008477d4;
L_008475e6:; BB(0x008475e6);
    /* 008475e6: cmp esi, 0x29 */ {  u32 a = r_esi; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475e9: je 0x8477b9 */ if (fZ) goto L_008477b9;
L_008475ef:; BB(0x008475ef);
    /* 008475ef: cmp esi, 0x2a */ {  u32 a = r_esi; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475f2: je 0x847640 */ if (fZ) goto L_00847640;
L_008475f4:; BB(0x008475f4);
    /* 008475f4: cmp esi, 0x2b */ {  u32 a = r_esi; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008475f7: jne 0x847614 */ if (!fZ) goto L_00847614;
L_008475f9:; BB(0x008475f9);
    /* 008475f9: mov esi, 1 */ r_esi = 0x1u;
    /* 008475fe: mov edi, 1 */ r_edi = 0x1u;
    /* 00847603: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847605: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00847609: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0084760e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00847612: jmp 0x847659 */ goto L_00847659;
L_00847614:; BB(0x00847614);
    /* 00847614: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847616: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0084761a: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084761d: jne 0x847634 */ if (!fZ) goto L_00847634;
L_0084761f:; BB(0x0084761f);
    /* 0084761f: mov esi, 1 */ r_esi = 0x1u;
    /* 00847624: mov edi, 1 */ r_edi = 0x1u;
    /* 00847629: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0084762e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00847632: jmp 0x847659 */ goto L_00847659;
L_00847634:; BB(0x00847634);
    /* 00847634: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00847636: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00847638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084763a: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0084763e: jmp 0x847659 */ goto L_00847659;
L_00847640:; BB(0x00847640);
    /* 00847640: mov esi, 1 */ r_esi = 0x1u;
    /* 00847645: mov edi, 1 */ r_edi = 0x1u;
    /* 0084764a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0084764f: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00847653: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847655: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
L_00847659:; BB(0x00847659);
    /* 00847659: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0084765b: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0084765e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00847661: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00847664: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847667: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00847669: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084766b: jle 0x84777e */ if ((fZ||fS!=fO)) goto L_0084777e;
L_00847671:; BB(0x00847671);
    /* 00847671: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00847675: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00847679: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0084767d: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00847681: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00847685: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
L_00847689:; BB(0x00847689);
    /* 00847689: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0084768d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847690: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847692: je 0x8476e2 */ if (fZ) goto L_008476e2;
L_00847694:; BB(0x00847694);
    /* 00847694: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00847698: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084769a: je 0x84778f */ if (fZ) goto L_0084778f;
L_008476a0:; BB(0x008476a0);
    /* 008476a0: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 008476a4: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 008476a7: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008476aa: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 008476ac: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008476ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008476b0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008476b2: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 008476b5: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008476b8: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008476bb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008476bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008476bf: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008476c2: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008476c5: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008476c8: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008476cb: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008476ce: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008476d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008476d2: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008476d5: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008476d8: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
L_008476dc:; BB(0x008476dc);
    /* 008476dc: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008476df: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008476e2:; BB(0x008476e2);
    /* 008476e2: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 008476e6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008476e8: je 0x84773a */ if (fZ) goto L_0084773a;
L_008476ea:; BB(0x008476ea);
    /* 008476ea: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 008476ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008476f0: je 0x8477a4 */ if (fZ) goto L_008477a4;
L_008476f6:; BB(0x008476f6);
    /* 008476f6: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 008476fa: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 008476fc: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00847700: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00847702: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00847704: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847706: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00847708: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0084770b: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0084770f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00847712: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00847714: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00847716: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00847719: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0084771c: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0084771f: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00847723: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00847726: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00847728: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084772a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0084772d: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847730: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_00847734:; BB(0x00847734);
    /* 00847734: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847737: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0084773a:; BB(0x0084773a);
    /* 0084773a: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0084773e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847740: je 0x847750 */ if (fZ) goto L_00847750;
L_00847742:; BB(0x00847742);
    /* 00847742: mov esi, ecx */ r_esi = r_ecx;
    /* 00847744: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00847746: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847749: mov esi, eax */ r_esi = r_eax;
    /* 0084774b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084774e: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_00847750:; BB(0x00847750);
    /* 00847750: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00847754: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847756: je 0x847766 */ if (fZ) goto L_00847766;
L_00847758:; BB(0x00847758);
    /* 00847758: mov esi, ecx */ r_esi = r_ecx;
    /* 0084775a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0084775c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084775f: mov esi, eax */ r_esi = r_eax;
    /* 00847761: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847764: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_00847766:; BB(0x00847766);
    /* 00847766: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0084776a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084776c: jl 0x847689 */ if ((fS!=fO)) goto L_00847689;
L_00847772:; BB(0x00847772);
    /* 00847772: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00847776: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0084777a: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_0084777e:; BB(0x0084777e);
    /* 0084777e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00847782: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847784: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847786: lea ebx, [ebx + edx + 4] */ r_ebx = (u32)(r_ebx+r_edx+0x4u);
    /* 0084778a: jmp 0x8475ad */ goto L_008475ad;
L_0084778f:; BB(0x0084778f);
    /* 0084778f: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00847791: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00847793: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 00847796: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00847799: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0084779c: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0084779f: jmp 0x8476dc */ goto L_008476dc;
L_008477a4:; BB(0x008477a4);
    /* 008477a4: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008477a6: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008477a8: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 008477ab: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 008477ae: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 008477b1: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008477b4: jmp 0x847734 */ goto L_00847734;
L_008477b9:; BB(0x008477b9);
    /* 008477b9: mov esi, 1 */ r_esi = 0x1u;
    /* 008477be: mov edi, 1 */ r_edi = 0x1u;
    /* 008477c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008477c5: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 008477c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008477cb: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 008477cf: jmp 0x847659 */ goto L_00847659;
L_008477d4:; BB(0x008477d4);
    /* 008477d4: mov esi, 1 */ r_esi = 0x1u;
    /* 008477d9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008477db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008477dd: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 008477e1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008477e6: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 008477ea: jmp 0x847659 */ goto L_00847659;
L_008477ef:; BB(0x008477ef);
    /* 008477ef: mov esi, 1 */ r_esi = 0x1u;
    /* 008477f4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008477f6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008477fb: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 008477ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847801: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00847805: jmp 0x847659 */ goto L_00847659;
L_0084780a:; BB(0x0084780a);
    /* 0084780a: mov esi, 1 */ r_esi = 0x1u;
    /* 0084780f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00847811: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847813: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00847817: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847819: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0084781d: jmp 0x847659 */ goto L_00847659;
L_00847822:; BB(0x00847822);
    /* 00847822: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00847824: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00847826: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00847828: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084782b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084782c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084782d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084782e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084782f: ret  */ FN_RET(0x008474b8); r_esp += 4; return;
}

void f_00847830(void) /* sub_847830 */
{
    FN_ENTER(0x00847830);
    /* 00847830: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00847834: mov edx, dword ptr [0xaeb5a0] */ r_edx = R32((u32)(0xaeb5a0u));
    /* 0084783a: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0084783d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084783f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00847842: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00847849: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0084784c: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0084784f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00847851: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00847854: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847856: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00847859: ret  */ FN_RET(0x00847830); r_esp += 4; return;
}

void f_0084785c(void) /* sub_84785C */
{
    FN_ENTER(0x0084785c);
    /* 0084785c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084785d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084785e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084785f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847860: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847863: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00847867: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0084786b: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0084786f: mov ebp, dword ptr [0xa22b60] */ r_ebp = R32((u32)(0xa22b60u));
    /* 00847875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847876: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0084787a: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x84787fu); f_008304c8();
    /* 0084787f: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00847883: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00847886: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847888: je 0x847919 */ if (fZ) goto L_00847919;
L_0084788e:; BB(0x0084788e);
    /* 0084788e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00847890: call 0x830544 */ r_esp -= 4; W32(r_esp, 0x847895u); f_00830544();
    /* 00847895: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847896: mov ecx, edi */ r_ecx = r_edi;
    /* 00847898: call 0x830508 */ r_esp -= 4; W32(r_esp, 0x84789du); f_00830508();
    /* 0084789d: mov edi, dword ptr [0xa22b60] */ r_edi = R32((u32)(0xa22b60u));
L_008478a3:; BB(0x008478a3);
    /* 008478a3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8478a8u); f_0082d7b0();
    /* 008478a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008478aa: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x8478afu); f_008305ec();
    /* 008478af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008478b1: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008478b7: jne 0x8478e8 */ if (!fZ) goto L_008478e8;
L_008478b9:; BB(0x008478b9);
    /* 008478b9: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 008478bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008478be: je 0x8478e1 */ if (fZ) goto L_008478e1;
L_008478c0:; BB(0x008478c0);
    /* 008478c0: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008478c3: jne 0x8478e1 */ if (!fZ) goto L_008478e1;
L_008478c5:; BB(0x008478c5);
    /* 008478c5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008478c9: mov ecx, esi */ r_ecx = r_esi;
    /* 008478cb: call 0x830558 */ r_esp -= 4; W32(r_esp, 0x8478d0u); f_00830558();
    /* 008478d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008478d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008478d5: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 008478d7: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008478d9: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8478dcu); call_ind(t); }
    /* 008478dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008478dd: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 008478df: jmp 0x8478f9 */ goto L_008478f9;
L_008478e1:; BB(0x008478e1);
    /* 008478e1: call 0x830568 */ r_esp -= 4; W32(r_esp, 0x8478e6u); f_00830568();
    /* 008478e6: jmp 0x8478f9 */ goto L_008478f9;
L_008478e8:; BB(0x008478e8);
    /* 008478e8: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008478eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008478ed: je 0x8478f9 */ if (fZ) goto L_008478f9;
L_008478ef:; BB(0x008478ef);
    /* 008478ef: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008478f2: jne 0x8478f9 */ if (!fZ) goto L_008478f9;
L_008478f4:; BB(0x008478f4);
    /* 008478f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008478f5: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8478f8u); call_ind(t); }
    /* 008478f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008478f9:; BB(0x008478f9);
    /* 008478f9: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008478fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008478fe: je 0x847905 */ if (fZ) goto L_00847905;
L_00847900:; BB(0x00847900);
    /* 00847900: call 0x847964 */ r_esp -= 4; W32(r_esp, 0x847905u); f_00847964();
L_00847905:; BB(0x00847905);
    /* 00847905: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x84790au); f_0082da80();
    /* 0084790a: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0084790d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084790f: jne 0x8478a3 */ if (!fZ) goto L_008478a3;
L_00847911:; BB(0x00847911);
    /* 00847911: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847914: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00847916: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00847917: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00847918: ret  */ FN_RET(0x0084785c); r_esp += 4; return;
L_00847919:; BB(0x00847919);
    /* 00847919: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x84791eu); f_0082d7b0();
    /* 0084791e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00847920: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x847925u); f_008305ec();
    /* 00847925: mov eax, dword ptr [0xae6dc4] */ r_eax = R32((u32)(0xae6dc4u));
    /* 0084792a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084792c: je 0x847932 */ if (fZ) goto L_00847932;
L_0084792e:; BB(0x0084792e);
    /* 0084792e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084792f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x847931u); call_ind(t); }
    /* 00847931: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847932:; BB(0x00847932);
    /* 00847932: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00847935: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847937: je 0x847949 */ if (fZ) goto L_00847949;
L_00847939:; BB(0x00847939);
    /* 00847939: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084793b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084793d: jne 0x847949 */ if (!fZ) goto L_00847949;
L_0084793f:; BB(0x0084793f);
    /* 0084793f: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 00847944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00847945: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x847948u); call_ind(t); }
    /* 00847948: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847949:; BB(0x00847949);
    /* 00847949: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0084794c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084794e: je 0x847955 */ if (fZ) goto L_00847955;
L_00847950:; BB(0x00847950);
    /* 00847950: call 0x8479ec */ r_esp -= 4; W32(r_esp, 0x847955u); f_008479ec();
L_00847955:; BB(0x00847955);
    /* 00847955: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x84795au); f_0082da80();
    /* 0084795a: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0084795d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084795f: jne 0x847919 */ if (!fZ) goto L_00847919;
L_00847961:; BB(0x00847961);
    /* 00847961: jmp 0x847911 */ goto L_00847911;
}

void f_00847964(void) /* sub_847964 */
{
    FN_ENTER(0x00847964);
    /* 00847964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00847965: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847966: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00847967: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847968: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847969: mov edi, ecx */ r_edi = r_ecx;
    /* 0084796b: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 00847970: mov esi, eax */ r_esi = r_eax;
L_00847972:; BB(0x00847972);
    /* 00847972: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x847977u); f_0082d7b0();
    /* 00847977: mov ecx, edi */ r_ecx = r_edi;
    /* 00847979: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x84797eu); f_008305ec();
    /* 0084797e: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00847980: test ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847986: jne 0x8479b8 */ if (!fZ) goto L_008479b8;
L_00847988:; BB(0x00847988);
    /* 00847988: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0084798b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084798d: je 0x8479b1 */ if (fZ) goto L_008479b1;
L_0084798f:; BB(0x0084798f);
    /* 0084798f: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847992: jne 0x8479b1 */ if (!fZ) goto L_008479b1;
L_00847994:; BB(0x00847994);
    /* 00847994: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00847997: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00847999: call 0x830558 */ r_esp -= 4; W32(r_esp, 0x84799eu); f_00830558();
    /* 0084799e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008479a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008479a2: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 008479a5: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 008479a8: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8479abu); call_ind(t); }
    /* 008479ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008479ac: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 008479af: jmp 0x8479c9 */ goto L_008479c9;
L_008479b1:; BB(0x008479b1);
    /* 008479b1: call 0x830568 */ r_esp -= 4; W32(r_esp, 0x8479b6u); f_00830568();
    /* 008479b6: jmp 0x8479c9 */ goto L_008479c9;
L_008479b8:; BB(0x008479b8);
    /* 008479b8: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008479bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008479bd: je 0x8479c9 */ if (fZ) goto L_008479c9;
L_008479bf:; BB(0x008479bf);
    /* 008479bf: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008479c2: jne 0x8479c9 */ if (!fZ) goto L_008479c9;
L_008479c4:; BB(0x008479c4);
    /* 008479c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008479c5: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8479c8u); call_ind(t); }
    /* 008479c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008479c9:; BB(0x008479c9);
    /* 008479c9: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 008479cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008479ce: je 0x8479d5 */ if (fZ) goto L_008479d5;
L_008479d0:; BB(0x008479d0);
    /* 008479d0: call 0x847964 */ r_esp -= 4; W32(r_esp, 0x8479d5u); f_00847964();
L_008479d5:; BB(0x008479d5);
    /* 008479d5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8479dau); f_0082da80();
    /* 008479da: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 008479dd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008479df: jne 0x847972 */ if (!fZ) goto L_00847972;
L_008479e1:; BB(0x008479e1);
    /* 008479e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008479e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008479e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008479e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008479e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008479e6: ret  */ FN_RET(0x00847964); r_esp += 4; return;
}

void f_008479e8(void) /* sub_8479E8 */
{
    FN_ENTER(0x008479e8);
    /* 008479e8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008479ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008479ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008479ee: mov ebx, eax */ r_ebx = r_eax;
L_008479f0:; BB(0x008479f0);
    /* 008479f0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8479f5u); f_0082d7b0();
    /* 008479f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008479f7: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x8479fcu); f_008305ec();
    /* 008479fc: mov edx, dword ptr [0xae6dc4] */ r_edx = R32((u32)(0xae6dc4u));
    /* 00847a02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a04: je 0x847a0a */ if (fZ) goto L_00847a0a;
L_00847a06:; BB(0x00847a06);
    /* 00847a06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x847a09u); call_ind(t); }
    /* 00847a09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a0a:; BB(0x00847a0a);
    /* 00847a0a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a0f: je 0x847a23 */ if (fZ) goto L_00847a23;
L_00847a11:; BB(0x00847a11);
    /* 00847a11: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00847a13: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847a16: jne 0x847a23 */ if (!fZ) goto L_00847a23;
L_00847a18:; BB(0x00847a18);
    /* 00847a18: mov edx, dword ptr [0xa22b60] */ r_edx = R32((u32)(0xa22b60u));
    /* 00847a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847a1f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x847a22u); call_ind(t); }
    /* 00847a22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a23:; BB(0x00847a23);
    /* 00847a23: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00847a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a28: je 0x847a2f */ if (fZ) goto L_00847a2f;
L_00847a2a:; BB(0x00847a2a);
    /* 00847a2a: call 0x8479ec */ r_esp -= 4; W32(r_esp, 0x847a2fu); f_008479ec();
L_00847a2f:; BB(0x00847a2f);
    /* 00847a2f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x847a34u); f_0082da80();
    /* 00847a34: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00847a37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847a39: jne 0x8479f0 */ if (!fZ) goto L_008479f0;
L_00847a3b:; BB(0x00847a3b);
    /* 00847a3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00847a3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847a3d: ret  */ FN_RET(0x008479e8); r_esp += 4; return;
}

void f_008479ec(void) /* sub_8479EC */
{
    FN_ENTER(0x008479ec);
    /* 008479ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008479ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008479ee: mov ebx, eax */ r_ebx = r_eax;
L_008479f0:; BB(0x008479f0);
    /* 008479f0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8479f5u); f_0082d7b0();
    /* 008479f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008479f7: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x8479fcu); f_008305ec();
    /* 008479fc: mov edx, dword ptr [0xae6dc4] */ r_edx = R32((u32)(0xae6dc4u));
    /* 00847a02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a04: je 0x847a0a */ if (fZ) goto L_00847a0a;
L_00847a06:; BB(0x00847a06);
    /* 00847a06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x847a09u); call_ind(t); }
    /* 00847a09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a0a:; BB(0x00847a0a);
    /* 00847a0a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a0f: je 0x847a23 */ if (fZ) goto L_00847a23;
L_00847a11:; BB(0x00847a11);
    /* 00847a11: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00847a13: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847a16: jne 0x847a23 */ if (!fZ) goto L_00847a23;
L_00847a18:; BB(0x00847a18);
    /* 00847a18: mov edx, dword ptr [0xa22b60] */ r_edx = R32((u32)(0xa22b60u));
    /* 00847a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847a1f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x847a22u); call_ind(t); }
    /* 00847a22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a23:; BB(0x00847a23);
    /* 00847a23: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00847a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a28: je 0x847a2f */ if (fZ) goto L_00847a2f;
L_00847a2a:; BB(0x00847a2a);
    /* 00847a2a: call 0x8479ec */ r_esp -= 4; W32(r_esp, 0x847a2fu); f_008479ec();
L_00847a2f:; BB(0x00847a2f);
    /* 00847a2f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x847a34u); f_0082da80();
    /* 00847a34: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00847a37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847a39: jne 0x8479f0 */ if (!fZ) goto L_008479f0;
L_00847a3b:; BB(0x00847a3b);
    /* 00847a3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00847a3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847a3d: ret  */ FN_RET(0x008479ec); r_esp += 4; return;
}

void f_00847a40(void) /* sub_847A40 */
{
    FN_ENTER(0x00847a40);
    /* 00847a40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00847a44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847a46: mov ebx, eax */ r_ebx = r_eax;
L_00847a48:; BB(0x00847a48);
    /* 00847a48: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x847a4du); f_0082d7b0();
    /* 00847a4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00847a4f: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x847a54u); f_0082fcbc();
    /* 00847a54: mov edx, dword ptr [0xae6dc4] */ r_edx = R32((u32)(0xae6dc4u));
    /* 00847a5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a5c: je 0x847a62 */ if (fZ) goto L_00847a62;
L_00847a5e:; BB(0x00847a5e);
    /* 00847a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a5f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x847a61u); call_ind(t); }
    /* 00847a61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a62:; BB(0x00847a62);
    /* 00847a62: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a67: je 0x847a7b */ if (fZ) goto L_00847a7b;
L_00847a69:; BB(0x00847a69);
    /* 00847a69: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00847a6b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847a6e: jne 0x847a7b */ if (!fZ) goto L_00847a7b;
L_00847a70:; BB(0x00847a70);
    /* 00847a70: mov edx, dword ptr [0xa22b60] */ r_edx = R32((u32)(0xa22b60u));
    /* 00847a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847a77: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x847a7au); call_ind(t); }
    /* 00847a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a7b:; BB(0x00847a7b);
    /* 00847a7b: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00847a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a80: je 0x847a87 */ if (fZ) goto L_00847a87;
L_00847a82:; BB(0x00847a82);
    /* 00847a82: call 0x847a44 */ r_esp -= 4; W32(r_esp, 0x847a87u); f_00847a44();
L_00847a87:; BB(0x00847a87);
    /* 00847a87: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x847a8cu); f_0082da80();
    /* 00847a8c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00847a8f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847a91: jne 0x847a48 */ if (!fZ) goto L_00847a48;
L_00847a93:; BB(0x00847a93);
    /* 00847a93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00847a94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847a95: ret  */ FN_RET(0x00847a40); r_esp += 4; return;
}

void f_00847a44(void) /* sub_847A44 */
{
    FN_ENTER(0x00847a44);
    /* 00847a44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847a46: mov ebx, eax */ r_ebx = r_eax;
L_00847a48:; BB(0x00847a48);
    /* 00847a48: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x847a4du); f_0082d7b0();
    /* 00847a4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00847a4f: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x847a54u); f_0082fcbc();
    /* 00847a54: mov edx, dword ptr [0xae6dc4] */ r_edx = R32((u32)(0xae6dc4u));
    /* 00847a5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a5c: je 0x847a62 */ if (fZ) goto L_00847a62;
L_00847a5e:; BB(0x00847a5e);
    /* 00847a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a5f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x847a61u); call_ind(t); }
    /* 00847a61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a62:; BB(0x00847a62);
    /* 00847a62: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00847a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a67: je 0x847a7b */ if (fZ) goto L_00847a7b;
L_00847a69:; BB(0x00847a69);
    /* 00847a69: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00847a6b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00847a6e: jne 0x847a7b */ if (!fZ) goto L_00847a7b;
L_00847a70:; BB(0x00847a70);
    /* 00847a70: mov edx, dword ptr [0xa22b60] */ r_edx = R32((u32)(0xa22b60u));
    /* 00847a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00847a77: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x847a7au); call_ind(t); }
    /* 00847a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00847a7b:; BB(0x00847a7b);
    /* 00847a7b: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00847a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847a80: je 0x847a87 */ if (fZ) goto L_00847a87;
L_00847a82:; BB(0x00847a82);
    /* 00847a82: call 0x847a44 */ r_esp -= 4; W32(r_esp, 0x847a87u); f_00847a44();
L_00847a87:; BB(0x00847a87);
    /* 00847a87: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x847a8cu); f_0082da80();
    /* 00847a8c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00847a8f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847a91: jne 0x847a48 */ if (!fZ) goto L_00847a48;
L_00847a93:; BB(0x00847a93);
    /* 00847a93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00847a94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847a95: ret  */ FN_RET(0x00847a44); r_esp += 4; return;
}

void f_00847a98(void) /* sub_847A98 */
{
    FN_ENTER(0x00847a98);
    /* 00847a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847a99: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847a9f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00847aa2: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00847aa5: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 00847aa8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847aaa: je 0x847ad1 */ if (fZ) goto L_00847ad1;
L_00847aac:; BB(0x00847aac);
    /* 00847aac: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847ab0: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847ab3: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00847ab6: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00847ab9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847aba: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x847abdu); call_ind(t); }
    /* 00847abd: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847ac3: add dword ptr [edx + 0x1c], 1 */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00847ac7: mov eax, 1 */ r_eax = 0x1u;
    /* 00847acc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847acf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847ad0: ret  */ FN_RET(0x00847a98); r_esp += 4; return;
L_00847ad1:; BB(0x00847ad1);
    /* 00847ad1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847ad4: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00847ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847ad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847ada: ret  */ FN_RET(0x00847a98); r_esp += 4; return;
}

void f_00847adc(void) /* sub_847ADC */
{
    FN_ENTER(0x00847adc);
    /* 00847adc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847add: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847ae3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00847ae6: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00847ae9: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 00847aec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847aee: je 0x847b15 */ if (fZ) goto L_00847b15;
L_00847af0:; BB(0x00847af0);
    /* 00847af0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847af4: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847af7: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00847afa: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00847afd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847afe: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x847b01u); call_ind(t); }
    /* 00847b01: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847b07: add dword ptr [edx + 0x1c], 1 */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00847b0b: mov eax, 1 */ r_eax = 0x1u;
    /* 00847b10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847b13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847b14: ret  */ FN_RET(0x00847adc); r_esp += 4; return;
L_00847b15:; BB(0x00847b15);
    /* 00847b15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847b18: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00847b1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847b1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847b1e: ret  */ FN_RET(0x00847adc); r_esp += 4; return;
}

void f_00847b20(void) /* sub_847B20 */
{
    FN_ENTER(0x00847b20);
    /* 00847b20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847b21: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847b27: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00847b2a: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00847b2d: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 00847b30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847b32: je 0x847b59 */ if (fZ) goto L_00847b59;
L_00847b34:; BB(0x00847b34);
    /* 00847b34: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b38: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b3b: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00847b3e: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847b42: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x847b45u); call_ind(t); }
    /* 00847b45: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847b4b: add dword ptr [edx + 0x1c], 1 */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00847b4f: mov eax, 1 */ r_eax = 0x1u;
    /* 00847b54: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847b57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847b58: ret  */ FN_RET(0x00847b20); r_esp += 4; return;
L_00847b59:; BB(0x00847b59);
    /* 00847b59: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847b5c: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00847b5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847b61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847b62: ret  */ FN_RET(0x00847b20); r_esp += 4; return;
}

void f_00847b64(void) /* sub_847B64 */
{
    FN_ENTER(0x00847b64);
    /* 00847b64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847b65: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847b6b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00847b6e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00847b71: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 00847b74: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00847b76: je 0x847b9f */ if (fZ) goto L_00847b9f;
L_00847b78:; BB(0x00847b78);
    /* 00847b78: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b7c: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b7f: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00847b82: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00847b85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847b86: call 0x842cbc */ r_esp -= 4; W32(r_esp, 0x847b8bu); f_00842cbc();
    /* 00847b8b: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00847b91: add dword ptr [edx + 0x1c], 1 */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00847b95: mov eax, 1 */ r_eax = 0x1u;
    /* 00847b9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847b9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847b9e: ret  */ FN_RET(0x00847b64); r_esp += 4; return;
L_00847b9f:; BB(0x00847b9f);
    /* 00847b9f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847ba2: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00847ba5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00847ba7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847ba8: ret  */ FN_RET(0x00847b64); r_esp += 4; return;
}

void f_00847bac(void) /* sub_847BAC */
{
    FN_ENTER(0x00847bac);
    /* 00847bac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847baf: fld dword ptr [0x98c610] */ FPUSH(R_F32((u32)(0x98c610u)));
    /* 00847bb5: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00847bbb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847bbd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00847bc0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00847bc4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00847bc9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00847bcd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00847bd1: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00847bd5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00847bd8: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 00847bde: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00847be2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847be4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00847be7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00847beb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00847bf0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00847bf4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00847bf8: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00847bfc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00847bff: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00847c05: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 00847c0a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847c0c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00847c0f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00847c13: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00847c18: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00847c1c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00847c20: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00847c24: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00847c27: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00847c2d: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00847c32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00847c34: mov dword ptr [0xa23080], 0xa23020 */ W32((u32)(0xa23080u), 0xa23020u);
    /* 00847c3e: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00847c41: mov dword ptr [0xa23084], 0xa22fc0 */ W32((u32)(0xa23084u), 0xa22fc0u);
    /* 00847c4b: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00847c4e: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00847c50: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00847c53: mov dword ptr [0xa23088], 0xa22f60 */ W32((u32)(0xa23088u), 0xa22f60u);
    /* 00847c5d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00847c5f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00847c62: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00847c66: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00847c6b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00847c6f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00847c73: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00847c77: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00847c7a: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00847c7f: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00847c81: mov dword ptr [0xa2308c], 0xa22f00 */ W32((u32)(0xa2308cu), 0xa22f00u);
    /* 00847c8b: mov dword ptr [0xae7780], edx */ W32((u32)(0xae7780u), r_edx);
    /* 00847c91: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847c94: ret  */ FN_RET(0x00847bac); r_esp += 4; return;
}

void f_00847cc4(void) /* sub_847CC4 */
{
    FN_ENTER(0x00847cc4);
    /* 00847cc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00847cc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847cc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00847cc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847cc8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847ccb: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00847ccf: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00847cd3: mov edx, ecx */ r_edx = r_ecx;
    /* 00847cd5: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00847cda: mov edi, dword ptr [0xae7788] */ r_edi = R32((u32)(0xae7788u));
    /* 00847ce0: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00847ce6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00847ce9: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00847cec: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00847cef: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00847cf2: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00847cf6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00847cfa: mov ebx, eax */ r_ebx = r_eax;
L_00847cfc:; BB(0x00847cfc);
    /* 00847cfc: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00847d00: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00847d04: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00847d05: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847d07: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847d09: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00847d0c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00847d0e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00847d10: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00847d13: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00847d17: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00847d1c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00847d1e: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00847d22: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00847d25: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00847d29: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00847d2c: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00847d30: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00847d33: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 00847d37: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00847d3a: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00847d3e: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00847d41: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00847d44: movsx ecx, word ptr [edx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00847d48: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00847d4b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847d4d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847d4f: mov edx, dword ptr [ebx + ecx*8] */ r_edx = R32((u32)(r_ebx+r_ecx*8));
    /* 00847d52: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00847d55: mov edx, dword ptr [ebx + ecx*8 + 4] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00847d59: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00847d5c: mov edx, dword ptr [ebx + ecx*8 + 8] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00847d60: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00847d63: mov edx, dword ptr [ebx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 00847d67: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00847d6a: mov edx, dword ptr [ebx + ecx*8 + 0x10] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00847d6e: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00847d71: mov edx, dword ptr [ebx + ecx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00847d75: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00847d78: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00847d7c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00847d80: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 00847d83: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847d86: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
L_00847d89:; BB(0x00847d89);
    /* 00847d89: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00847d8d: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00847d91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847d93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847d95: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00847d98: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00847d9a: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00847d9e: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00847da1: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00847da5: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00847da8: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00847dac: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00847daf: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00847db3: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00847db6: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00847dba: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00847dbd: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00847dc0: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847dc3: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00847dc6: jne 0x847d89 */ if (!fZ) goto L_00847d89;
L_00847dc8:; BB(0x00847dc8);
    /* 00847dc8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00847dcc: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00847dd2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00847dd4: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00847dd6: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847dd9: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00847ddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00847de0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00847de2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00847de3: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x847de9u); call_ind(t); }
    /* 00847de9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00847dec: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00847def: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00847df2: jne 0x847cfc */ if (!fZ) goto L_00847cfc;
L_00847df8:; BB(0x00847df8);
    /* 00847df8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847dfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847dfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00847dfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00847dfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00847dff: ret  */ FN_RET(0x00847cc4); r_esp += 4; return;
}

void f_00847e00(void) /* sub_847E00 */
{
    FN_ENTER(0x00847e00);
    /* 00847e00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00847e01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847e02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00847e03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847e04: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847e07: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00847e0b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00847e0f: mov edx, ecx */ r_edx = r_ecx;
    /* 00847e11: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00847e16: mov edi, dword ptr [0xae7788] */ r_edi = R32((u32)(0xae7788u));
    /* 00847e1c: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00847e22: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00847e26: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00847e29: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00847e2c: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00847e2f: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00847e33: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00847e37: mov ebx, eax */ r_ebx = r_eax;
L_00847e39:; BB(0x00847e39);
    /* 00847e39: fld dword ptr [0x98c60c] */ FPUSH(R_F32((u32)(0x98c60cu)));
    /* 00847e3f: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00847e43: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00847e47: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00847e48: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847e4a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847e4c: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00847e4f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00847e51: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00847e53: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00847e57: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00847e5c: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00847e5f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00847e61: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00847e65: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00847e68: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00847e6c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00847e6f: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00847e73: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00847e76: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 00847e7a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00847e7d: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00847e81: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00847e84: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00847e87: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00847e8b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00847e8e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00847e91: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847e93: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00847e96: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00847e9a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00847e9e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00847ea2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847ea4: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00847ea7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00847eab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847ead: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00847eaf: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00847eb2: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00847eb5: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00847eb9: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00847ebc: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00847ec0: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00847ec3: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 00847ec7: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00847eca: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00847ece: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00847ed1: mov ecx, dword ptr [ebx + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00847ed5: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00847ed8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00847edb: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00847edf: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00847ee3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00847ee7: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00847eea: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847eec: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00847eef: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00847ef3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00847ef7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00847efb: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00847eff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847f01: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00847f04: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847f07: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 00847f0a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00847f0e: jmp 0x847f13 */ goto L_00847f13;
L_00847f10:; BB(0x00847f10);
    /* 00847f10: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00847f13:; BB(0x00847f13);
    /* 00847f13: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00847f17: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847f19: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847f1b: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00847f1e: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00847f20: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00847f24: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00847f27: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00847f2b: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00847f2e: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00847f32: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00847f35: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00847f39: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00847f3c: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00847f40: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00847f43: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00847f46: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00847f4a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00847f4e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00847f52: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847f54: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00847f57: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00847f5b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00847f5f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00847f63: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00847f67: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00847f69: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00847f6d: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00847f70: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00847f73: jne 0x847f10 */ if (!fZ) goto L_00847f10;
L_00847f75:; BB(0x00847f75);
    /* 00847f75: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00847f78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00847f7a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00847f7e: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00847f84: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00847f86: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00847f88: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00847f8b: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00847f91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00847f92: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00847f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00847f95: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x847f9bu); call_ind(t); }
    /* 00847f9b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00847f9f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00847fa2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00847fa6: jne 0x847e39 */ if (!fZ) goto L_00847e39;
L_00847fac:; BB(0x00847fac);
    /* 00847fac: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00847faf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00847fb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00847fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00847fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00847fb3: ret  */ FN_RET(0x00847e00); r_esp += 4; return;
}

void f_00847fb4(void) /* sub_847FB4 */
{
    FN_ENTER(0x00847fb4);
    /* 00847fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00847fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00847fb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00847fb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00847fb8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00847fbb: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00847fbf: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00847fc3: mov edx, ecx */ r_edx = r_ecx;
    /* 00847fc5: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00847fca: mov edi, dword ptr [0xae7788] */ r_edi = R32((u32)(0xae7788u));
    /* 00847fd0: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00847fd6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00847fda: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00847fdd: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00847fe0: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00847fe3: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00847fe7: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00847feb: mov ebx, eax */ r_ebx = r_eax;
L_00847fed:; BB(0x00847fed);
    /* 00847fed: fld dword ptr [0x98c608] */ FPUSH(R_F32((u32)(0x98c608u)));
    /* 00847ff3: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00847ff7: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00847ffb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00847ffc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00847ffe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848000: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848003: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848005: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848007: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084800b: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00848010: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00848013: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00848015: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848019: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0084801c: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848020: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00848023: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00848027: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0084802a: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 0084802e: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00848031: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00848035: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00848038: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0084803b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084803f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848042: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00848045: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848047: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084804a: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0084804e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848052: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848056: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848058: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0084805b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0084805f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848061: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848063: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848066: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00848069: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084806d: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00848070: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848074: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00848077: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 0084807b: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 0084807e: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848082: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00848085: mov ecx, dword ptr [ebx + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00848089: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0084808c: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0084808f: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00848093: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848097: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084809b: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084809e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008480a0: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 008480a3: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008480a7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008480ab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008480af: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008480b3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008480b5: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 008480b8: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008480bb: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008480be: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008480c2: jmp 0x8480c7 */ goto L_008480c7;
L_008480c4:; BB(0x008480c4);
    /* 008480c4: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008480c7:; BB(0x008480c7);
    /* 008480c7: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008480cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008480cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008480cf: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 008480d2: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008480d4: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 008480d8: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008480db: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 008480df: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008480e2: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 008480e6: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 008480e9: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 008480ed: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 008480f0: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 008480f4: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008480f7: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 008480fa: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008480fe: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848102: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848106: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848108: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084810b: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084810f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848113: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848117: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084811b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084811d: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00848121: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848124: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00848127: jne 0x8480c4 */ if (!fZ) goto L_008480c4;
L_00848129:; BB(0x00848129);
    /* 00848129: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0084812c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084812e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00848132: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00848138: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0084813a: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0084813c: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084813f: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848145: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848146: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848148: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00848149: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x84814fu); call_ind(t); }
    /* 0084814f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00848153: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848156: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084815a: jne 0x847fed */ if (!fZ) goto L_00847fed;
L_00848160:; BB(0x00848160);
    /* 00848160: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848163: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848164: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848165: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848166: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848167: ret  */ FN_RET(0x00847fb4); r_esp += 4; return;
}

