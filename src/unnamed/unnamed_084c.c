#include "protos.h"

void f_0084c118(void) /* sub_84C118 */
{
    FN_ENTER(0x0084c118);
    /* 0084c118: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c119: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c11a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084c11d: mov edi, edx */ r_edi = r_edx;
    /* 0084c11f: mov esi, ecx */ r_esi = r_ecx;
    /* 0084c121: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084c123: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 0084c125: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c126: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c129: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84c12eu); f_0082e900();
    /* 0084c12e: fcomp dword ptr [0x98c650] */ fx_compare(ST(0), R_F32((u32)(0x98c650u))); FPOP();
    /* 0084c134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084c136: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084c138: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084c139: jae 0x84c154 */ if (!fC) goto L_0084c154;
L_0084c13b:; BB(0x0084c13b);
    /* 0084c13b: fld dword ptr [0x98c64c] */ FPUSH(R_F32((u32)(0x98c64cu)));
    /* 0084c141: fld dword ptr [0x98c648] */ FPUSH(R_F32((u32)(0x98c648u)));
    /* 0084c147: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c149: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084c14d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c150: fchs  */ ST(0) = -ST(0);
    /* 0084c152: jmp 0x84c17d */ goto L_0084c17d;
L_0084c154:; BB(0x0084c154);
    /* 0084c154: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084c157: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0084c15a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084c15c: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0084c15e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c160: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0084c164: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c166: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084c168: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084c16a: fchs  */ ST(0) = -ST(0);
    /* 0084c16c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084c16e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084c170: fchs  */ ST(0) = -ST(0);
    /* 0084c172: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0084c175: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c177: fchs  */ ST(0) = -ST(0);
    /* 0084c179: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084c17b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084c17d:; BB(0x0084c17d);
    /* 0084c17d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c17e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084c182: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0084c186: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0084c188: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0084c18c: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0084c18f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c191: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c193: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c196: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84c19bu); f_0082e900();
    /* 0084c19b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084c19f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c1a0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084c1a4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c1a6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0084c1aa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c1ac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c1ae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c1b1: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84c1b6u); f_0082dc9c();
    /* 0084c1b6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084c1ba: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0084c1bc: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084c1be: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 0084c1c0: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084c1c3: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 0084c1c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c1c8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c1ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c1cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c1ce: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084c1d0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084c1d4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c1d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c1d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c1da: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84c1dfu); f_0082dc9c();
    /* 0084c1df: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0084c1e3: fmul dword ptr [0x98c644] */ ST(0) = ST(0) * R_F32((u32)(0x98c644u));
    /* 0084c1e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084c1ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084c1ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084c1ee: ret 4 */ FN_RET(0x0084c118); r_esp += 8; return;
}

void f_0084c1f4(void) /* sub_84C1F4 */
{
    FN_ENTER(0x0084c1f4);
    /* 0084c1f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c1f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c1f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084c1f7: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084c1fa: mov edi, edx */ r_edi = r_edx;
    /* 0084c1fc: mov esi, ecx */ r_esi = r_ecx;
    /* 0084c1fe: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0084c201: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0084c203: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c205: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084c208: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0084c20c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0084c20f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084c213: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084c215: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084c219: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084c21c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084c220: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0084c223: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084c227: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0084c22a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0084c22e: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084c231: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084c235: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084c238: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084c23c: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0084c23f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084c243: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0084c246: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084c24a: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084c24d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0084c251: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084c254: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0084c258: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0084c25b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084c25f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0084c262: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0084c266: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084c269: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0084c26d: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084c270: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0084c274: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84c279u); f_0084bcd0();
    /* 0084c279: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084c27b: je 0x84c282 */ if (fZ) goto L_0084c282;
L_0084c27d:; BB(0x0084c27d);
    /* 0084c27d: mov ebx, 4 */ r_ebx = 0x4u;
L_0084c282:; BB(0x0084c282);
    /* 0084c282: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0084c285: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0084c289: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0084c28b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084c28e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0084c291: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084c295: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084c297: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084c29b: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084c29e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084c2a2: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0084c2a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084c2a9: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0084c2ac: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0084c2b0: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084c2b3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084c2b7: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084c2ba: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084c2be: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0084c2c1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084c2c5: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0084c2c8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084c2cc: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084c2cf: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0084c2d3: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084c2d6: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0084c2da: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0084c2dd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084c2e1: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0084c2e4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0084c2e8: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084c2eb: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0084c2ef: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0084c2f2: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0084c2f6: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84c2fbu); f_0084bcd0();
    /* 0084c2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084c2fd: je 0x84c302 */ if (fZ) goto L_0084c302;
L_0084c2ff:; BB(0x0084c2ff);
    /* 0084c2ff: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0084c302:; BB(0x0084c302);
    /* 0084c302: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0084c305: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0084c309: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0084c30c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084c30f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0084c312: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084c316: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084c319: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084c31d: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084c320: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084c324: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0084c327: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084c32b: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0084c32e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0084c332: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084c335: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084c339: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084c33c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084c340: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0084c343: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084c347: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0084c34a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084c34e: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084c351: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0084c355: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084c358: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0084c35c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0084c35f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084c363: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0084c366: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0084c36a: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084c36d: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0084c371: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0084c374: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0084c378: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84c37du); f_0084bcd0();
    /* 0084c37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084c37f: je 0x84c384 */ if (fZ) goto L_0084c384;
L_0084c381:; BB(0x0084c381);
    /* 0084c381: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0084c384:; BB(0x0084c384);
    /* 0084c384: mov eax, ebx */ r_eax = r_ebx;
    /* 0084c386: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084c389: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084c38a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084c38b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084c38c: ret  */ FN_RET(0x0084c1f4); r_esp += 4; return;
}

void f_0084c390(void) /* sub_84C390 */
{
    FN_ENTER(0x0084c390);
    /* 0084c390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c391: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c392: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084c393: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084c394: sub esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084c39a: mov esi, 1 */ r_esi = 0x1u;
    /* 0084c39f: mov ebp, 0x15 */ r_ebp = 0x15u;
    /* 0084c3a4: mov edi, dword ptr [esp + 0xf4] */ r_edi = R32((u32)(r_esp+0xf4u));
    /* 0084c3ab: mov dword ptr [ecx + 0xe4], edi */ W32((u32)(r_ecx+0xe4u), r_edi);
    /* 0084c3b1: mov dword ptr [ecx + 0xe0], edi */ W32((u32)(r_ecx+0xe0u), r_edi);
    /* 0084c3b7: mov ebx, 0x2a */ r_ebx = 0x2au;
L_0084c3bc:; BB(0x0084c3bc);
    /* 0084c3bc: mov eax, 0x94f2095 */ r_eax = 0x94f2095u;
    /* 0084c3c1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084c3c3: mov eax, ebp */ r_eax = r_ebp;
    /* 0084c3c5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0084c3c8: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0084c3ca: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c3cc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0084c3cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3db: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3dd: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3df: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3e1: mov dword ptr [ecx + eax*4 + 4], esi */ W32((u32)(r_ecx+r_eax*4+0x4u), r_esi);
    /* 0084c3e5: mov eax, 0x94f2095 */ r_eax = 0x94f2095u;
    /* 0084c3ea: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084c3ec: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c3ee: mov eax, ebx */ r_eax = r_ebx;
    /* 0084c3f0: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0084c3f2: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0084c3f5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c3f7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0084c3fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c3fe: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c400: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c402: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c404: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c406: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c408: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c40a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084c40c: mov dword ptr [ecx + eax*4 + 4], edi */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edi);
    /* 0084c410: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c412: add ebp, 0x2a */ {  u32 a = r_ebp; u32 b = 0x2au; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c415: add ebx, 0x2a */ {  u32 a = r_ebx; u32 b = 0x2au; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c418: cmp ebx, 0x483 */ {  u32 a = r_ebx; u32 b = 0x483u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084c41e: jle 0x84c3bc */ if ((fZ||fS!=fO)) goto L_0084c3bc;
L_0084c420:; BB(0x0084c420);
    /* 0084c420: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 0084c423: sub ebp, dword ptr [ecx + 0x84] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c429: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 0084c42c: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0084c42f: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0084c432: sub esi, dword ptr [ecx + 0x88] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c438: sub edi, dword ptr [ecx + 0x8c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c43e: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0084c441: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 0084c444: sub eax, dword ptr [ecx + 0x90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c44a: sub edx, dword ptr [ecx + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c450: sub ebx, dword ptr [ecx + 0x98] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c456: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 0084c45d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0084c460: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0084c464: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0084c468: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0084c46c: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0084c470: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0084c474: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 0084c477: sub ebx, dword ptr [ecx + 0x9c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c47d: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0084c481: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 0084c484: sub ebx, dword ptr [ecx + 0xa0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c48a: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0084c48e: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0084c491: sub ebx, dword ptr [ecx + 0xa4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c497: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0084c49b: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 0084c49e: sub ebx, dword ptr [ecx + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4a4: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0084c4a8: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 0084c4ab: sub ebx, dword ptr [ecx + 0xac] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4b1: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0084c4b5: mov ebx, dword ptr [ecx + 0x34] */ r_ebx = R32((u32)(r_ecx+0x34u));
    /* 0084c4b8: sub ebx, dword ptr [ecx + 0xb0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4be: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0084c4c2: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0084c4c5: sub ebx, dword ptr [ecx + 0xb4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4cb: mov dword ptr [esp + 0x60], ebx */ W32((u32)(r_esp+0x60u), r_ebx);
    /* 0084c4cf: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 0084c4d2: sub ebx, dword ptr [ecx + 0xb8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4d8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0084c4dc: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0084c4df: sub ebx, dword ptr [ecx + 0xbc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4e5: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0084c4e9: mov ebx, dword ptr [ecx + 0x44] */ r_ebx = R32((u32)(r_ecx+0x44u));
    /* 0084c4ec: sub ebx, dword ptr [ecx + 0xc0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4f2: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0084c4f6: mov ebx, dword ptr [ecx + 0x48] */ r_ebx = R32((u32)(r_ecx+0x48u));
    /* 0084c4f9: sub ebx, dword ptr [ecx + 0xc4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c4ff: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0084c503: mov ebx, dword ptr [ecx + 0x4c] */ r_ebx = R32((u32)(r_ecx+0x4cu));
    /* 0084c506: sub ebx, dword ptr [ecx + 0xc8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xc8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c50c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0084c510: mov ebx, dword ptr [ecx + 0x50] */ r_ebx = R32((u32)(r_ecx+0x50u));
    /* 0084c513: sub ebx, dword ptr [ecx + 0xcc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c519: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0084c51d: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 0084c520: sub ebx, dword ptr [ecx + 0xd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c526: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0084c52a: mov ebx, dword ptr [ecx + 0x58] */ r_ebx = R32((u32)(r_ecx+0x58u));
    /* 0084c52d: sub ebx, dword ptr [ecx + 0xd4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c533: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0084c537: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 0084c53a: sub ebx, dword ptr [ecx + 0xd8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c540: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0084c544: mov ebx, dword ptr [ecx + 0x60] */ r_ebx = R32((u32)(r_ecx+0x60u));
    /* 0084c547: sub ebx, dword ptr [ecx + 0xdc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c54d: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0084c551: mov ebx, dword ptr [ecx + 0x64] */ r_ebx = R32((u32)(r_ecx+0x64u));
    /* 0084c554: sub ebx, dword ptr [ecx + 0xe0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xe0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c55a: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 0084c55e: mov ebx, dword ptr [ecx + 0x68] */ r_ebx = R32((u32)(r_ecx+0x68u));
    /* 0084c561: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c563: mov ebp, dword ptr [ecx + 0x6c] */ r_ebp = R32((u32)(r_ecx+0x6cu));
    /* 0084c566: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0084c56a: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c56c: mov esi, dword ptr [ecx + 0x70] */ r_esi = R32((u32)(r_ecx+0x70u));
    /* 0084c56f: mov dword ptr [esp + 0xcc], ebp */ W32((u32)(r_esp+0xccu), r_ebp);
    /* 0084c576: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c578: mov edi, dword ptr [ecx + 0x74] */ r_edi = R32((u32)(r_ecx+0x74u));
    /* 0084c57b: mov dword ptr [esp + 0xd0], esi */ W32((u32)(r_esp+0xd0u), r_esi);
    /* 0084c582: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c584: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 0084c587: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c589: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 0084c58f: mov dword ptr [esp + 0xd4], edi */ W32((u32)(r_esp+0xd4u), r_edi);
    /* 0084c596: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 0084c59d: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 0084c5a0: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c5a2: mov ebx, dword ptr [ecx + 0xcc] */ r_ebx = R32((u32)(r_ecx+0xccu));
    /* 0084c5a8: sub eax, dword ptr [esp + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c5ac: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c5ae: mov ebp, dword ptr [ecx + 0xd0] */ r_ebp = R32((u32)(r_ecx+0xd0u));
    /* 0084c5b4: mov dword ptr [esp + 0xdc], eax */ W32((u32)(r_esp+0xdcu), r_eax);
    /* 0084c5bb: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0084c5c1: sub eax, dword ptr [esp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c5c5: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c5c7: mov esi, dword ptr [ecx + 0xd4] */ r_esi = R32((u32)(r_ecx+0xd4u));
    /* 0084c5cd: mov dword ptr [esp + 0xc4], eax */ W32((u32)(r_esp+0xc4u), r_eax);
    /* 0084c5d4: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0084c5da: sub eax, dword ptr [esp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c5de: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c5e0: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0084c5e4: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084c5e8: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0084c5ee: sub eax, dword ptr [esp + 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c5f2: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084c5f6: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0084c5fc: sub eax, dword ptr [esp + 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c600: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084c607: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0084c60d: sub eax, dword ptr [esp + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c611: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084c618: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 0084c61e: sub eax, dword ptr [esp + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c622: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084c629: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 0084c62f: sub eax, dword ptr [esp + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c633: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0084c63a: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 0084c640: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c644: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084c648: mov eax, dword ptr [ecx + 0xa0] */ r_eax = R32((u32)(r_ecx+0xa0u));
    /* 0084c64e: sub eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c652: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084c656: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0084c65c: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c660: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084c664: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 0084c66a: sub eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c66e: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084c675: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0084c67b: sub eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c67f: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084c686: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0084c68c: sub eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c690: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084c694: mov eax, dword ptr [ecx + 0xb4] */ r_eax = R32((u32)(r_ecx+0xb4u));
    /* 0084c69a: sub eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c69e: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0084c6a2: mov eax, dword ptr [ecx + 0xb8] */ r_eax = R32((u32)(r_ecx+0xb8u));
    /* 0084c6a8: sub eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c6ac: mov dword ptr [esp + 0xbc], eax */ W32((u32)(r_esp+0xbcu), r_eax);
    /* 0084c6b3: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 0084c6b9: sub eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c6bd: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 0084c6c4: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0084c6ca: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c6ce: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 0084c6d5: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0084c6db: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c6df: sub edi, dword ptr [esp + 0xb4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c6e6: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 0084c6ed: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0084c6f4: mov dword ptr [esp + 0x9c], ebx */ W32((u32)(r_esp+0x9cu), r_ebx);
    /* 0084c6fb: mov dword ptr [esp + 0xac], ebp */ W32((u32)(r_esp+0xacu), r_ebp);
    /* 0084c702: mov dword ptr [esp + 0xa4], esi */ W32((u32)(r_esp+0xa4u), r_esi);
    /* 0084c709: mov esi, dword ptr [ecx + 0xd8] */ r_esi = R32((u32)(r_ecx+0xd8u));
    /* 0084c70f: sub esi, dword ptr [esp + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c716: mov dword ptr [esp + 0xa8], esi */ W32((u32)(r_esp+0xa8u), r_esi);
    /* 0084c71d: mov esi, dword ptr [ecx + 0xdc] */ r_esi = R32((u32)(r_ecx+0xdcu));
    /* 0084c723: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 0084c729: sub esi, dword ptr [esp + 0xdc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c730: sub ecx, dword ptr [esp + 0xc4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c737: mov dword ptr [esp + 0x98], esi */ W32((u32)(r_esp+0x98u), r_esi);
    /* 0084c73e: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 0084c745: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0084c748: sub ecx, dword ptr [esp + 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c74c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0084c74f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0084c753: sub ecx, dword ptr [esp + 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c757: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0084c75b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0084c75f: sub ecx, dword ptr [esp + 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x80u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c766: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0084c76a: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0084c76e: sub ecx, dword ptr [esp + 0x94] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c775: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 0084c779: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0084c77d: sub ecx, dword ptr [esp + 0x8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c784: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0084c788: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0084c78c: sub ecx, dword ptr [esp + 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x84u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c793: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0084c797: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0084c79b: sub ecx, dword ptr [esp + 0x7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c79f: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0084c7a3: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0084c7a7: sub ecx, dword ptr [esp + 0x74] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7ab: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0084c7af: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0084c7b3: sub ecx, dword ptr [esp + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7b7: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0084c7bb: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0084c7bf: sub ecx, dword ptr [esp + 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x88u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7c6: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0084c7ca: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0084c7ce: sub ecx, dword ptr [esp + 0x90] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7d5: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0084c7d9: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0084c7dd: sub ecx, dword ptr [esp + 0x70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7e1: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0084c7e5: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0084c7e9: sub ecx, dword ptr [esp + 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7ed: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0084c7f1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0084c7f5: sub ecx, dword ptr [esp + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c7fc: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084c800: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0084c804: sub ecx, dword ptr [esp + 0xb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c80b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0084c80f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0084c813: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0084c817: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c819: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0084c81d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0084c821: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c823: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0084c827: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084c82b: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c82d: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0084c831: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0084c835: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c837: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0084c83b: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0084c83f: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0084c843: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c845: sub ebx, dword ptr [esp + 0xa4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c84c: mov esi, dword ptr [esp + 0x84] */ r_esi = R32((u32)(r_esp+0x84u));
    /* 0084c853: sub esi, dword ptr [esp + 0x60] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084c857: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0084c85b: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084c85f: sub ebx, dword ptr [esp + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084c866: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0084c86a: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0084c86e: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0084c872: sub ebp, dword ptr [esp + 0xa0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c879: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0084c87d: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0084c881: sub ebp, dword ptr [esp] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c884: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0084c888: mov ebp, dword ptr [esp + 0xcc] */ r_ebp = R32((u32)(r_esp+0xccu));
    /* 0084c88f: sub ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c893: mov dword ptr [esp + 0xcc], ebp */ W32((u32)(r_esp+0xccu), r_ebp);
    /* 0084c89a: mov ebp, dword ptr [esp + 0xd0] */ r_ebp = R32((u32)(r_esp+0xd0u));
    /* 0084c8a1: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8a5: mov dword ptr [esp + 0xd0], ebp */ W32((u32)(r_esp+0xd0u), r_ebp);
    /* 0084c8ac: mov ebp, dword ptr [esp + 0xd4] */ r_ebp = R32((u32)(r_esp+0xd4u));
    /* 0084c8b3: sub ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8b7: mov dword ptr [esp + 0xd4], ebp */ W32((u32)(r_esp+0xd4u), r_ebp);
    /* 0084c8be: mov ebp, dword ptr [esp + 0xd8] */ r_ebp = R32((u32)(r_esp+0xd8u));
    /* 0084c8c5: sub ebp, dword ptr [esp + 0x40] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8c9: mov dword ptr [esp + 0xd8], ebp */ W32((u32)(r_esp+0xd8u), r_ebp);
    /* 0084c8d0: mov ebp, dword ptr [esp + 0xdc] */ r_ebp = R32((u32)(r_esp+0xdcu));
    /* 0084c8d7: sub ebp, dword ptr [esp + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8db: mov dword ptr [esp + 0xdc], ebp */ W32((u32)(r_esp+0xdcu), r_ebp);
    /* 0084c8e2: mov ebp, dword ptr [esp + 0xc4] */ r_ebp = R32((u32)(r_esp+0xc4u));
    /* 0084c8e9: sub ebp, dword ptr [esp + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8ed: mov dword ptr [esp + 0xc4], ebp */ W32((u32)(r_esp+0xc4u), r_ebp);
    /* 0084c8f4: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0084c8f8: sub ebp, dword ptr [esp + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c8fc: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 0084c900: mov ebp, dword ptr [esp + 0x78] */ r_ebp = R32((u32)(r_esp+0x78u));
    /* 0084c904: sub ebp, dword ptr [esp + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c908: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 0084c90c: mov ebp, dword ptr [esp + 0x80] */ r_ebp = R32((u32)(r_esp+0x80u));
    /* 0084c913: sub ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c917: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 0084c91e: mov ebp, dword ptr [esp + 0x94] */ r_ebp = R32((u32)(r_esp+0x94u));
    /* 0084c925: sub ebp, dword ptr [esp + 0x58] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c929: mov dword ptr [esp + 0x94], ebp */ W32((u32)(r_esp+0x94u), r_ebp);
    /* 0084c930: mov ebp, dword ptr [esp + 0x8c] */ r_ebp = R32((u32)(r_esp+0x8cu));
    /* 0084c937: sub ebp, dword ptr [esp + 0x5c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c93b: mov dword ptr [esp + 0x8c], ebp */ W32((u32)(r_esp+0x8cu), r_ebp);
    /* 0084c942: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 0084c946: sub ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c94a: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 0084c951: mov dword ptr [esp + 0x7c], ebp */ W32((u32)(r_esp+0x7cu), r_ebp);
    /* 0084c955: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 0084c959: sub ebp, dword ptr [esp + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c95d: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 0084c961: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 0084c965: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c967: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 0084c96e: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 0084c972: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c974: mov ecx, dword ptr [esp + 0x90] */ r_ecx = R32((u32)(r_esp+0x90u));
    /* 0084c97b: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0084c982: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c984: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0084c988: mov dword ptr [esp + 0x90], ecx */ W32((u32)(r_esp+0x90u), r_ecx);
    /* 0084c98f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c991: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084c995: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c999: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084c99d: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0084c9a1: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084c9a8: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9ac: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0084c9b3: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084c9ba: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9bc: mov ebx, dword ptr [esp + 0x98] */ r_ebx = R32((u32)(r_esp+0x98u));
    /* 0084c9c3: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0084c9ca: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084c9d1: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9d5: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 0084c9dc: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084c9e3: sub edx, dword ptr [esp + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9e7: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 0084c9ee: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 0084c9f5: sub edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9f9: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0084ca00: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 0084ca07: sub edx, dword ptr [esp + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca0e: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0084ca15: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 0084ca1c: sub edx, dword ptr [esp + 0xd0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca23: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 0084ca2a: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 0084ca31: sub edx, dword ptr [esp + 0xd4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca38: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 0084ca3f: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 0084ca46: sub edx, dword ptr [esp + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca4d: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 0084ca54: mov edx, dword ptr [esp + 0xdc] */ r_edx = R32((u32)(r_esp+0xdcu));
    /* 0084ca5b: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca5d: mov dword ptr [esp + 0x98], ebx */ W32((u32)(r_esp+0x98u), r_ebx);
    /* 0084ca64: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0084ca6b: sub ebx, dword ptr [esp + 0xc4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca72: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 0084ca79: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0084ca7c: sub ebx, dword ptr [esp + 0x68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca80: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0084ca83: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0084ca87: sub ebx, dword ptr [esp + 0x78] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca8b: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0084ca8f: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0084ca93: sub ebx, dword ptr [esp + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x80u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca9a: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0084ca9e: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0084caa2: sub ebx, dword ptr [esp + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084caa9: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0084caad: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0084cab1: sub ebx, dword ptr [esp + 0x8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cab8: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0084cabc: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0084cac0: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cac2: mov esi, dword ptr [esp + 0xd4] */ r_esi = R32((u32)(r_esp+0xd4u));
    /* 0084cac9: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0084cacd: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0084cad1: sub ebx, dword ptr [esp + 0x7c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cad5: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0084cad9: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0084cadd: sub ebx, dword ptr [esp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cae1: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0084cae5: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0084cae9: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084caeb: mov ebp, dword ptr [esp + 0xd0] */ r_ebp = R32((u32)(r_esp+0xd0u));
    /* 0084caf2: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0084caf6: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0084cafa: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cafc: mov edi, dword ptr [esp + 0xcc] */ r_edi = R32((u32)(r_esp+0xccu));
    /* 0084cb03: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0084cb07: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0084cb0b: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cb0d: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0084cb11: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0084cb15: mov ebx, dword ptr [esp + 0xd8] */ r_ebx = R32((u32)(r_esp+0xd8u));
    /* 0084cb1c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cb1e: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0084cb22: sub eax, dword ptr [esp + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb26: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0084cb2a: mov ecx, dword ptr [esp + 0xc8] */ r_ecx = R32((u32)(r_esp+0xc8u));
    /* 0084cb31: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0084cb35: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cb39: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cb3d: sub esi, dword ptr [esp + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084cb41: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0084cb45: sub eax, dword ptr [esp + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb4c: sub ebx, dword ptr [esp + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cb50: sub edx, dword ptr [esp + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cb54: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 0084cb5b: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0084cb62: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084cb66: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084cb6a: sub eax, dword ptr [esp + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb71: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0084cb75: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084cb79: sub eax, dword ptr [esp + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb80: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084cb84: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0084cb88: sub eax, dword ptr [esp + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb8f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084cb93: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0084cb97: sub eax, dword ptr [esp + 0xb0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb9e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084cba2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0084cba6: sub eax, dword ptr [esp + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbad: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0084cbb1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0084cbb5: sub eax, dword ptr [esp + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbbc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084cbc0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0084cbc4: sub eax, dword ptr [esp + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbcb: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084cbcf: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0084cbd3: sub eax, dword ptr [esp + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbda: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084cbde: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084cbe2: sub eax, dword ptr [esp + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbe9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084cbed: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0084cbf1: sub eax, dword ptr [esp + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbf8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0084cbfc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084cc00: sub eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cc03: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cc05: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084cc09: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0084cc10: mov dword ptr [esp + 0xcc], edi */ W32((u32)(r_esp+0xccu), r_edi);
    /* 0084cc17: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cc19: mov edi, dword ptr [esp + 0xac] */ r_edi = R32((u32)(r_esp+0xacu));
    /* 0084cc20: mov dword ptr [esp + 0xd0], ebp */ W32((u32)(r_esp+0xd0u), r_ebp);
    /* 0084cc27: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cc29: mov ebp, dword ptr [esp + 0xa4] */ r_ebp = R32((u32)(r_esp+0xa4u));
    /* 0084cc30: mov dword ptr [esp + 0xd4], esi */ W32((u32)(r_esp+0xd4u), r_esi);
    /* 0084cc37: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cc39: mov esi, dword ptr [esp + 0xc8] */ r_esi = R32((u32)(r_esp+0xc8u));
    /* 0084cc40: mov dword ptr [esi], 0x37 */ W32((u32)(r_esi), 0x37u);
    /* 0084cc46: mov dword ptr [esp + 0xd8], ebx */ W32((u32)(r_esp+0xd8u), r_ebx);
    /* 0084cc4d: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 0084cc54: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 0084cc5b: sub edx, dword ptr [esp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc5f: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 0084cc66: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0084cc6a: sub edx, dword ptr [esp + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc6e: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0084cc72: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0084cc76: sub edx, dword ptr [esp + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc7a: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0084cc7e: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 0084cc85: sub edx, dword ptr [esp + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc89: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0084cc90: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 0084cc97: sub edx, dword ptr [esp + 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc9b: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0084cca2: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 0084cca9: sub edx, dword ptr [esp + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccad: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0084ccb4: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 0084ccbb: sub edx, dword ptr [esp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccbf: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 0084ccc6: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 0084ccca: sub edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccce: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0084ccd2: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0084ccd6: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccda: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0084ccde: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0084cce2: sub edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cce6: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0084ccea: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 0084ccf1: sub edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccf5: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 0084ccfc: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 0084cd03: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd07: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 0084cd0e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0084cd12: sub edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd16: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0084cd1a: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084cd1e: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd22: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0084cd26: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084cd2d: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd31: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0084cd38: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084cd3f: sub edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd43: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0084cd4a: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084cd51: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd55: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 0084cd5c: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084cd63: sub edx, dword ptr [esp + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd67: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 0084cd6e: mov dword ptr [esp + 0xb0], ecx */ W32((u32)(r_esp+0xb0u), r_ecx);
    /* 0084cd75: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084cd7c: mov dword ptr [esp + 0xac], edi */ W32((u32)(r_esp+0xacu), r_edi);
    /* 0084cd83: mov dword ptr [esp + 0xa4], ebp */ W32((u32)(r_esp+0xa4u), r_ebp);
    /* 0084cd8a: mov ebp, dword ptr [esp + 0xa8] */ r_ebp = R32((u32)(r_esp+0xa8u));
    /* 0084cd91: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cd93: mov ebx, dword ptr [esp + 0x98] */ r_ebx = R32((u32)(r_esp+0x98u));
    /* 0084cd9a: sub ebx, dword ptr [esp + 0xdc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cda1: mov dword ptr [esp + 0xa8], ebp */ W32((u32)(r_esp+0xa8u), r_ebp);
    /* 0084cda8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0084cdac: sub ebp, dword ptr [esp + 0xb4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cdb3: mov dword ptr [esp + 0x98], ebx */ W32((u32)(r_esp+0x98u), r_ebx);
    /* 0084cdba: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0084cdc1: sub ebx, dword ptr [esp + 0xc4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdc8: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 0084cdcf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0084cdd2: sub ebx, dword ptr [esp + 0x68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdd6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0084cdd9: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 0084cddc: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0084cde0: sub ebx, dword ptr [esp + 0x78] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cde4: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0084cde8: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 0084cdeb: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0084cdef: sub ebx, dword ptr [esp + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x80u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdf6: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0084cdfa: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 0084cdfd: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0084ce01: sub ebx, dword ptr [esp + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce08: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0084ce0c: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 0084ce0f: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0084ce13: sub ebx, dword ptr [esp + 0x8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce1a: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0084ce1e: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 0084ce21: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0084ce25: sub ebx, dword ptr [esp + 0x84] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x84u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce2c: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0084ce30: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 0084ce33: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0084ce37: sub ebx, dword ptr [esp + 0x7c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce3b: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0084ce3f: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 0084ce42: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0084ce46: sub ebx, dword ptr [esp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce4a: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0084ce4e: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0084ce51: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0084ce55: sub ebx, dword ptr [esp + 0x6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce59: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0084ce5d: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0084ce60: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0084ce64: sub ebx, dword ptr [esp + 0x88] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x88u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce6b: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0084ce6f: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0084ce72: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0084ce76: sub ebx, dword ptr [esp + 0x90] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce7d: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0084ce81: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0084ce84: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0084ce88: sub ebx, dword ptr [esp + 0x70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce8c: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0084ce90: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0084ce93: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 0084ce97: sub ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce9b: mov dword ptr [esp + 0x60], ebx */ W32((u32)(r_esp+0x60u), r_ebx);
    /* 0084ce9f: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0084cea2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0084cea6: sub ebx, dword ptr [esp + 0xbc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cead: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0084ceb1: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0084ceb4: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0084ceb8: sub ebx, dword ptr [esp + 0xb8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cebf: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0084cec3: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0084cec6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0084ceca: mov dword ptr [esi + 0x44], ebp */ W32((u32)(r_esi+0x44u), r_ebp);
    /* 0084cecd: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cecf: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084ced3: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
    /* 0084ced6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ced8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0084cedc: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 0084cedf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cee1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0084cee5: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 0084cee8: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ceea: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0084ceee: sub edi, dword ptr [esp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cef1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084cef5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0084cef9: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0084cefc: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0084cf00: sub eax, dword ptr [esp + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf07: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084cf0b: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0084cf0e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0084cf12: sub eax, dword ptr [esp + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf19: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084cf1d: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0084cf20: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084cf24: sub eax, dword ptr [esp + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf2b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084cf2f: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0084cf32: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0084cf36: sub eax, dword ptr [esp + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf3d: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0084cf40: mov dword ptr [esi + 0x68], edi */ W32((u32)(r_esi+0x68u), r_edi);
    /* 0084cf43: mov edi, dword ptr [esp + 0xcc] */ r_edi = R32((u32)(r_esp+0xccu));
    /* 0084cf4a: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf4e: mov dword ptr [esp + 0xcc], edi */ W32((u32)(r_esp+0xccu), r_edi);
    /* 0084cf55: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0084cf58: mov edi, dword ptr [esp + 0xd0] */ r_edi = R32((u32)(r_esp+0xd0u));
    /* 0084cf5f: sub edi, dword ptr [esp + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf63: mov dword ptr [esp + 0xd0], edi */ W32((u32)(r_esp+0xd0u), r_edi);
    /* 0084cf6a: mov dword ptr [esi + 0x70], edi */ W32((u32)(r_esi+0x70u), r_edi);
    /* 0084cf6d: mov edi, dword ptr [esp + 0xd4] */ r_edi = R32((u32)(r_esp+0xd4u));
    /* 0084cf74: sub edi, dword ptr [esp + 0x3c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf78: mov dword ptr [esp + 0xd4], edi */ W32((u32)(r_esp+0xd4u), r_edi);
    /* 0084cf7f: mov dword ptr [esi + 0x74], edi */ W32((u32)(r_esi+0x74u), r_edi);
    /* 0084cf82: mov edi, dword ptr [esp + 0xd8] */ r_edi = R32((u32)(r_esp+0xd8u));
    /* 0084cf89: sub edi, dword ptr [esp + 0x40] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf8d: mov dword ptr [esp + 0xd8], edi */ W32((u32)(r_esp+0xd8u), r_edi);
    /* 0084cf94: mov dword ptr [esi + 0x78], edi */ W32((u32)(r_esi+0x78u), r_edi);
    /* 0084cf97: mov edi, dword ptr [esp + 0xdc] */ r_edi = R32((u32)(r_esp+0xdcu));
    /* 0084cf9e: sub edi, dword ptr [esp + 0x44] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfa2: mov dword ptr [esp + 0xdc], edi */ W32((u32)(r_esp+0xdcu), r_edi);
    /* 0084cfa9: mov dword ptr [esi + 0x7c], edi */ W32((u32)(r_esi+0x7cu), r_edi);
    /* 0084cfac: mov edi, dword ptr [esp + 0xc4] */ r_edi = R32((u32)(r_esp+0xc4u));
    /* 0084cfb3: sub edi, dword ptr [esp + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfb7: mov dword ptr [esp + 0xc4], edi */ W32((u32)(r_esp+0xc4u), r_edi);
    /* 0084cfbe: mov dword ptr [esi + 0x80], edi */ W32((u32)(r_esi+0x80u), r_edi);
    /* 0084cfc4: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0084cfc8: sub edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfcc: mov dword ptr [esi + 0x84], edi */ W32((u32)(r_esi+0x84u), r_edi);
    /* 0084cfd2: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 0084cfd6: sub edi, dword ptr [esp + 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfda: mov dword ptr [esi + 0x88], edi */ W32((u32)(r_esi+0x88u), r_edi);
    /* 0084cfe0: mov edi, dword ptr [esp + 0x80] */ r_edi = R32((u32)(r_esp+0x80u));
    /* 0084cfe7: sub edi, dword ptr [esp + 0x54] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfeb: mov dword ptr [esi + 0x8c], edi */ W32((u32)(r_esi+0x8cu), r_edi);
    /* 0084cff1: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 0084cff8: sub edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cffc: mov dword ptr [esi + 0x90], edi */ W32((u32)(r_esi+0x90u), r_edi);
    /* 0084d002: mov edi, dword ptr [esp + 0x8c] */ r_edi = R32((u32)(r_esp+0x8cu));
    /* 0084d009: sub edi, dword ptr [esp + 0x5c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d00d: mov dword ptr [esi + 0x94], edi */ W32((u32)(r_esi+0x94u), r_edi);
    /* 0084d013: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
    /* 0084d01a: sub edi, dword ptr [esp + 0x60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d01e: mov dword ptr [esi + 0x98], edi */ W32((u32)(r_esi+0x98u), r_edi);
    /* 0084d024: mov edi, dword ptr [esp + 0x7c] */ r_edi = R32((u32)(r_esp+0x7cu));
    /* 0084d028: sub edi, dword ptr [esp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d02c: mov dword ptr [esi + 0x9c], edi */ W32((u32)(r_esi+0x9cu), r_edi);
    /* 0084d032: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0084d036: sub edi, dword ptr [esp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d03a: mov dword ptr [esi + 0xa0], edi */ W32((u32)(r_esi+0xa0u), r_edi);
    /* 0084d040: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0084d044: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d046: mov ebp, dword ptr [esp + 0x88] */ r_ebp = R32((u32)(r_esp+0x88u));
    /* 0084d04d: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 0084d053: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084d055: mov ebx, dword ptr [esp + 0x90] */ r_ebx = R32((u32)(r_esp+0x90u));
    /* 0084d05c: mov dword ptr [esi + 0xa8], ebp */ W32((u32)(r_esi+0xa8u), r_ebp);
    /* 0084d062: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084d064: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0084d068: mov dword ptr [esi + 0xac], ebx */ W32((u32)(r_esi+0xacu), r_ebx);
    /* 0084d06e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d070: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0084d076: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084d07a: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d07e: mov dword ptr [esi + 0xb4], edx */ W32((u32)(r_esi+0xb4u), r_edx);
    /* 0084d084: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084d08b: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d08f: mov dword ptr [esi + 0xb8], edx */ W32((u32)(r_esi+0xb8u), r_edx);
    /* 0084d095: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084d09c: sub edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0a0: mov dword ptr [esi + 0xbc], edx */ W32((u32)(r_esi+0xbcu), r_edx);
    /* 0084d0a6: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084d0ad: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0b1: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 0084d0b7: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084d0be: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0c0: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 0084d0c7: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0cb: mov dword ptr [esi + 0xc4], edx */ W32((u32)(r_esi+0xc4u), r_edx);
    /* 0084d0d1: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 0084d0d7: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0084d0de: sub eax, dword ptr [esp + 0xcc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0e5: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 0084d0eb: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 0084d0f2: sub eax, dword ptr [esp + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0f9: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 0084d0ff: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 0084d106: sub eax, dword ptr [esp + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d10d: mov dword ptr [esi + 0xd4], eax */ W32((u32)(r_esi+0xd4u), r_eax);
    /* 0084d113: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 0084d11a: sub eax, dword ptr [esp + 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d121: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 0084d127: mov eax, dword ptr [esp + 0x98] */ r_eax = R32((u32)(r_esp+0x98u));
    /* 0084d12e: sub eax, dword ptr [esp + 0xdc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d135: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 0084d13b: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 0084d142: sub eax, dword ptr [esp + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d149: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 0084d14f: add esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084d156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084d157: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084d158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084d159: ret 4 */ FN_RET(0x0084c390); r_esp += 8; return;
}

void f_0084c963(void)
{
    FN_ENTER(0x0084c963);
    /* 0084c963: and al, 0x6c */ {  u32 a = (u8)r_eax; u32 b = 0x6cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0084c965: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c967: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 0084c96e: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 0084c972: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084c974: mov ecx, dword ptr [esp + 0x90] */ r_ecx = R32((u32)(r_esp+0x90u));
    /* 0084c97b: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0084c982: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084c984: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0084c988: mov dword ptr [esp + 0x90], ecx */ W32((u32)(r_esp+0x90u), r_ecx);
    /* 0084c98f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084c991: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084c995: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c999: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084c99d: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0084c9a1: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084c9a8: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9ac: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0084c9b3: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084c9ba: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9bc: mov ebx, dword ptr [esp + 0x98] */ r_ebx = R32((u32)(r_esp+0x98u));
    /* 0084c9c3: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0084c9ca: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084c9d1: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9d5: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 0084c9dc: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084c9e3: sub edx, dword ptr [esp + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9e7: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 0084c9ee: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 0084c9f5: sub edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084c9f9: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0084ca00: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 0084ca07: sub edx, dword ptr [esp + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca0e: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0084ca15: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 0084ca1c: sub edx, dword ptr [esp + 0xd0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca23: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 0084ca2a: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 0084ca31: sub edx, dword ptr [esp + 0xd4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca38: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 0084ca3f: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 0084ca46: sub edx, dword ptr [esp + 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ca4d: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 0084ca54: mov edx, dword ptr [esp + 0xdc] */ r_edx = R32((u32)(r_esp+0xdcu));
    /* 0084ca5b: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca5d: mov dword ptr [esp + 0x98], ebx */ W32((u32)(r_esp+0x98u), r_ebx);
    /* 0084ca64: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0084ca6b: sub ebx, dword ptr [esp + 0xc4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca72: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 0084ca79: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0084ca7c: sub ebx, dword ptr [esp + 0x68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca80: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0084ca83: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0084ca87: sub ebx, dword ptr [esp + 0x78] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca8b: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0084ca8f: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0084ca93: sub ebx, dword ptr [esp + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x80u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ca9a: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0084ca9e: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0084caa2: sub ebx, dword ptr [esp + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084caa9: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0084caad: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0084cab1: sub ebx, dword ptr [esp + 0x8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cab8: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0084cabc: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0084cac0: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cac2: mov esi, dword ptr [esp + 0xd4] */ r_esi = R32((u32)(r_esp+0xd4u));
    /* 0084cac9: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0084cacd: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0084cad1: sub ebx, dword ptr [esp + 0x7c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cad5: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0084cad9: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0084cadd: sub ebx, dword ptr [esp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cae1: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0084cae5: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0084cae9: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084caeb: mov ebp, dword ptr [esp + 0xd0] */ r_ebp = R32((u32)(r_esp+0xd0u));
    /* 0084caf2: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0084caf6: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0084cafa: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cafc: mov edi, dword ptr [esp + 0xcc] */ r_edi = R32((u32)(r_esp+0xccu));
    /* 0084cb03: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0084cb07: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0084cb0b: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cb0d: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0084cb11: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0084cb15: mov ebx, dword ptr [esp + 0xd8] */ r_ebx = R32((u32)(r_esp+0xd8u));
    /* 0084cb1c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cb1e: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0084cb22: sub eax, dword ptr [esp + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb26: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0084cb2a: mov ecx, dword ptr [esp + 0xc8] */ r_ecx = R32((u32)(r_esp+0xc8u));
    /* 0084cb31: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0084cb35: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cb39: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cb3d: sub esi, dword ptr [esp + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084cb41: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0084cb45: sub eax, dword ptr [esp + 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb4c: sub ebx, dword ptr [esp + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cb50: sub edx, dword ptr [esp + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cb54: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 0084cb5b: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0084cb62: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084cb66: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084cb6a: sub eax, dword ptr [esp + 0xb8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb71: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0084cb75: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084cb79: sub eax, dword ptr [esp + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb80: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0084cb84: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0084cb88: sub eax, dword ptr [esp + 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb8f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084cb93: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0084cb97: sub eax, dword ptr [esp + 0xb0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cb9e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084cba2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0084cba6: sub eax, dword ptr [esp + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbad: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0084cbb1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0084cbb5: sub eax, dword ptr [esp + 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xacu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbbc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084cbc0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0084cbc4: sub eax, dword ptr [esp + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbcb: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084cbcf: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0084cbd3: sub eax, dword ptr [esp + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbda: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084cbde: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084cbe2: sub eax, dword ptr [esp + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbe9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084cbed: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0084cbf1: sub eax, dword ptr [esp + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cbf8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0084cbfc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084cc00: sub eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cc03: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cc05: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084cc09: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0084cc10: mov dword ptr [esp + 0xcc], edi */ W32((u32)(r_esp+0xccu), r_edi);
    /* 0084cc17: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cc19: mov edi, dword ptr [esp + 0xac] */ r_edi = R32((u32)(r_esp+0xacu));
    /* 0084cc20: mov dword ptr [esp + 0xd0], ebp */ W32((u32)(r_esp+0xd0u), r_ebp);
    /* 0084cc27: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cc29: mov ebp, dword ptr [esp + 0xa4] */ r_ebp = R32((u32)(r_esp+0xa4u));
    /* 0084cc30: mov dword ptr [esp + 0xd4], esi */ W32((u32)(r_esp+0xd4u), r_esi);
    /* 0084cc37: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cc39: mov esi, dword ptr [esp + 0xc8] */ r_esi = R32((u32)(r_esp+0xc8u));
    /* 0084cc40: mov dword ptr [esi], 0x37 */ W32((u32)(r_esi), 0x37u);
    /* 0084cc46: mov dword ptr [esp + 0xd8], ebx */ W32((u32)(r_esp+0xd8u), r_ebx);
    /* 0084cc4d: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 0084cc54: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 0084cc5b: sub edx, dword ptr [esp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc5f: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 0084cc66: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0084cc6a: sub edx, dword ptr [esp + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc6e: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0084cc72: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0084cc76: sub edx, dword ptr [esp + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc7a: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0084cc7e: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 0084cc85: sub edx, dword ptr [esp + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc89: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0084cc90: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 0084cc97: sub edx, dword ptr [esp + 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cc9b: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0084cca2: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 0084cca9: sub edx, dword ptr [esp + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccad: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0084ccb4: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 0084ccbb: sub edx, dword ptr [esp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccbf: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 0084ccc6: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 0084ccca: sub edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccce: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0084ccd2: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 0084ccd6: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccda: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0084ccde: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0084cce2: sub edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cce6: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0084ccea: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 0084ccf1: sub edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ccf5: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 0084ccfc: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 0084cd03: sub edx, dword ptr [esp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd07: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 0084cd0e: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0084cd12: sub edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd16: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0084cd1a: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084cd1e: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd22: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0084cd26: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084cd2d: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd31: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0084cd38: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084cd3f: sub edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd43: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0084cd4a: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084cd51: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd55: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 0084cd5c: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084cd63: sub edx, dword ptr [esp + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084cd67: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 0084cd6e: mov dword ptr [esp + 0xb0], ecx */ W32((u32)(r_esp+0xb0u), r_ecx);
    /* 0084cd75: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084cd7c: mov dword ptr [esp + 0xac], edi */ W32((u32)(r_esp+0xacu), r_edi);
    /* 0084cd83: mov dword ptr [esp + 0xa4], ebp */ W32((u32)(r_esp+0xa4u), r_ebp);
    /* 0084cd8a: mov ebp, dword ptr [esp + 0xa8] */ r_ebp = R32((u32)(r_esp+0xa8u));
    /* 0084cd91: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cd93: mov ebx, dword ptr [esp + 0x98] */ r_ebx = R32((u32)(r_esp+0x98u));
    /* 0084cd9a: sub ebx, dword ptr [esp + 0xdc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cda1: mov dword ptr [esp + 0xa8], ebp */ W32((u32)(r_esp+0xa8u), r_ebp);
    /* 0084cda8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0084cdac: sub ebp, dword ptr [esp + 0xb4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084cdb3: mov dword ptr [esp + 0x98], ebx */ W32((u32)(r_esp+0x98u), r_ebx);
    /* 0084cdba: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0084cdc1: sub ebx, dword ptr [esp + 0xc4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdc8: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 0084cdcf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0084cdd2: sub ebx, dword ptr [esp + 0x68] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdd6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0084cdd9: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 0084cddc: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0084cde0: sub ebx, dword ptr [esp + 0x78] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x78u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cde4: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0084cde8: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 0084cdeb: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0084cdef: sub ebx, dword ptr [esp + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x80u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cdf6: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0084cdfa: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 0084cdfd: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0084ce01: sub ebx, dword ptr [esp + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce08: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0084ce0c: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 0084ce0f: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0084ce13: sub ebx, dword ptr [esp + 0x8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce1a: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0084ce1e: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 0084ce21: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0084ce25: sub ebx, dword ptr [esp + 0x84] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x84u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce2c: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0084ce30: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 0084ce33: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0084ce37: sub ebx, dword ptr [esp + 0x7c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce3b: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0084ce3f: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 0084ce42: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0084ce46: sub ebx, dword ptr [esp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce4a: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0084ce4e: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0084ce51: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0084ce55: sub ebx, dword ptr [esp + 0x6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce59: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0084ce5d: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0084ce60: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0084ce64: sub ebx, dword ptr [esp + 0x88] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x88u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce6b: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0084ce6f: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0084ce72: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 0084ce76: sub ebx, dword ptr [esp + 0x90] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce7d: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 0084ce81: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0084ce84: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0084ce88: sub ebx, dword ptr [esp + 0x70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce8c: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 0084ce90: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 0084ce93: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 0084ce97: sub ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ce9b: mov dword ptr [esp + 0x60], ebx */ W32((u32)(r_esp+0x60u), r_ebx);
    /* 0084ce9f: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0084cea2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0084cea6: sub ebx, dword ptr [esp + 0xbc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cead: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0084ceb1: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0084ceb4: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0084ceb8: sub ebx, dword ptr [esp + 0xb8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cebf: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0084cec3: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0084cec6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0084ceca: mov dword ptr [esi + 0x44], ebp */ W32((u32)(r_esi+0x44u), r_ebp);
    /* 0084cecd: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084cecf: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084ced3: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
    /* 0084ced6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ced8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0084cedc: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 0084cedf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084cee1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0084cee5: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 0084cee8: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ceea: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0084ceee: sub edi, dword ptr [esp] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cef1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0084cef5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0084cef9: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0084cefc: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0084cf00: sub eax, dword ptr [esp + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf07: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0084cf0b: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0084cf0e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0084cf12: sub eax, dword ptr [esp + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf19: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0084cf1d: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0084cf20: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084cf24: sub eax, dword ptr [esp + 0x98] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x98u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf2b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084cf2f: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0084cf32: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0084cf36: sub eax, dword ptr [esp + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084cf3d: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0084cf40: mov dword ptr [esi + 0x68], edi */ W32((u32)(r_esi+0x68u), r_edi);
    /* 0084cf43: mov edi, dword ptr [esp + 0xcc] */ r_edi = R32((u32)(r_esp+0xccu));
    /* 0084cf4a: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf4e: mov dword ptr [esp + 0xcc], edi */ W32((u32)(r_esp+0xccu), r_edi);
    /* 0084cf55: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0084cf58: mov edi, dword ptr [esp + 0xd0] */ r_edi = R32((u32)(r_esp+0xd0u));
    /* 0084cf5f: sub edi, dword ptr [esp + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf63: mov dword ptr [esp + 0xd0], edi */ W32((u32)(r_esp+0xd0u), r_edi);
    /* 0084cf6a: mov dword ptr [esi + 0x70], edi */ W32((u32)(r_esi+0x70u), r_edi);
    /* 0084cf6d: mov edi, dword ptr [esp + 0xd4] */ r_edi = R32((u32)(r_esp+0xd4u));
    /* 0084cf74: sub edi, dword ptr [esp + 0x3c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf78: mov dword ptr [esp + 0xd4], edi */ W32((u32)(r_esp+0xd4u), r_edi);
    /* 0084cf7f: mov dword ptr [esi + 0x74], edi */ W32((u32)(r_esi+0x74u), r_edi);
    /* 0084cf82: mov edi, dword ptr [esp + 0xd8] */ r_edi = R32((u32)(r_esp+0xd8u));
    /* 0084cf89: sub edi, dword ptr [esp + 0x40] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cf8d: mov dword ptr [esp + 0xd8], edi */ W32((u32)(r_esp+0xd8u), r_edi);
    /* 0084cf94: mov dword ptr [esi + 0x78], edi */ W32((u32)(r_esi+0x78u), r_edi);
    /* 0084cf97: mov edi, dword ptr [esp + 0xdc] */ r_edi = R32((u32)(r_esp+0xdcu));
    /* 0084cf9e: sub edi, dword ptr [esp + 0x44] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfa2: mov dword ptr [esp + 0xdc], edi */ W32((u32)(r_esp+0xdcu), r_edi);
    /* 0084cfa9: mov dword ptr [esi + 0x7c], edi */ W32((u32)(r_esi+0x7cu), r_edi);
    /* 0084cfac: mov edi, dword ptr [esp + 0xc4] */ r_edi = R32((u32)(r_esp+0xc4u));
    /* 0084cfb3: sub edi, dword ptr [esp + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfb7: mov dword ptr [esp + 0xc4], edi */ W32((u32)(r_esp+0xc4u), r_edi);
    /* 0084cfbe: mov dword ptr [esi + 0x80], edi */ W32((u32)(r_esi+0x80u), r_edi);
    /* 0084cfc4: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0084cfc8: sub edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfcc: mov dword ptr [esi + 0x84], edi */ W32((u32)(r_esi+0x84u), r_edi);
    /* 0084cfd2: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 0084cfd6: sub edi, dword ptr [esp + 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfda: mov dword ptr [esi + 0x88], edi */ W32((u32)(r_esi+0x88u), r_edi);
    /* 0084cfe0: mov edi, dword ptr [esp + 0x80] */ r_edi = R32((u32)(r_esp+0x80u));
    /* 0084cfe7: sub edi, dword ptr [esp + 0x54] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cfeb: mov dword ptr [esi + 0x8c], edi */ W32((u32)(r_esi+0x8cu), r_edi);
    /* 0084cff1: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 0084cff8: sub edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084cffc: mov dword ptr [esi + 0x90], edi */ W32((u32)(r_esi+0x90u), r_edi);
    /* 0084d002: mov edi, dword ptr [esp + 0x8c] */ r_edi = R32((u32)(r_esp+0x8cu));
    /* 0084d009: sub edi, dword ptr [esp + 0x5c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d00d: mov dword ptr [esi + 0x94], edi */ W32((u32)(r_esi+0x94u), r_edi);
    /* 0084d013: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
    /* 0084d01a: sub edi, dword ptr [esp + 0x60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d01e: mov dword ptr [esi + 0x98], edi */ W32((u32)(r_esi+0x98u), r_edi);
    /* 0084d024: mov edi, dword ptr [esp + 0x7c] */ r_edi = R32((u32)(r_esp+0x7cu));
    /* 0084d028: sub edi, dword ptr [esp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d02c: mov dword ptr [esi + 0x9c], edi */ W32((u32)(r_esi+0x9cu), r_edi);
    /* 0084d032: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0084d036: sub edi, dword ptr [esp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d03a: mov dword ptr [esi + 0xa0], edi */ W32((u32)(r_esi+0xa0u), r_edi);
    /* 0084d040: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0084d044: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0084d046: mov ebp, dword ptr [esp + 0x88] */ r_ebp = R32((u32)(r_esp+0x88u));
    /* 0084d04d: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 0084d053: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084d055: mov ebx, dword ptr [esp + 0x90] */ r_ebx = R32((u32)(r_esp+0x90u));
    /* 0084d05c: mov dword ptr [esi + 0xa8], ebp */ W32((u32)(r_esi+0xa8u), r_ebp);
    /* 0084d062: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084d064: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0084d068: mov dword ptr [esi + 0xac], ebx */ W32((u32)(r_esi+0xacu), r_ebx);
    /* 0084d06e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d070: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0084d076: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0084d07a: sub edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d07e: mov dword ptr [esi + 0xb4], edx */ W32((u32)(r_esi+0xb4u), r_edx);
    /* 0084d084: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0084d08b: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d08f: mov dword ptr [esi + 0xb8], edx */ W32((u32)(r_esi+0xb8u), r_edx);
    /* 0084d095: mov edx, dword ptr [esp + 0xb8] */ r_edx = R32((u32)(r_esp+0xb8u));
    /* 0084d09c: sub edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0a0: mov dword ptr [esi + 0xbc], edx */ W32((u32)(r_esi+0xbcu), r_edx);
    /* 0084d0a6: mov edx, dword ptr [esp + 0xb4] */ r_edx = R32((u32)(r_esp+0xb4u));
    /* 0084d0ad: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0b1: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 0084d0b7: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 0084d0be: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d0c0: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 0084d0c7: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0cb: mov dword ptr [esi + 0xc4], edx */ W32((u32)(r_esi+0xc4u), r_edx);
    /* 0084d0d1: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 0084d0d7: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0084d0de: sub eax, dword ptr [esp + 0xcc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0e5: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 0084d0eb: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 0084d0f2: sub eax, dword ptr [esp + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d0f9: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 0084d0ff: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 0084d106: sub eax, dword ptr [esp + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d10d: mov dword ptr [esi + 0xd4], eax */ W32((u32)(r_esi+0xd4u), r_eax);
    /* 0084d113: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 0084d11a: sub eax, dword ptr [esp + 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d121: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 0084d127: mov eax, dword ptr [esp + 0x98] */ r_eax = R32((u32)(r_esp+0x98u));
    /* 0084d12e: sub eax, dword ptr [esp + 0xdc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d135: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 0084d13b: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 0084d142: sub eax, dword ptr [esp + 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d149: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 0084d14f: add esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084d156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084d157: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084d158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084d159: ret 4 */ FN_RET(0x0084c963); r_esp += 8; return;
}

