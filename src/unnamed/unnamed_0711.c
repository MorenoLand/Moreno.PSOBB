#include "protos.h"

void f_0071165e(void)
{
    FN_ENTER(0x0071165e);
    goto L_0071165e;
L_007114a7:; BB(0x007114a7);
    /* 007114a7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007114ab: fcomp dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); FPOP();
    /* 007114af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007114b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007114b2: jae 0x7114d3 */ if (!fC) goto L_007114d3;
L_007114b4:; BB(0x007114b4);
    /* 007114b4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007114b8: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 007114be: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007114c0: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 007114c6: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 007114c9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007114cb: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007114cf: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_007114d3:; BB(0x007114d3);
    /* 007114d3: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 007114d7: fld dword ptr [0x96f73c] */ FPUSH(R_F32((u32)(0x96f73cu)));
    /* 007114dd: fdiv dword ptr [esi + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x38u));
    /* 007114e0: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007114e3: fmul dword ptr [0x96f748] */ ST(0) = ST(0) * R_F32((u32)(0x96f748u));
    /* 007114e9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007114ed: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 007114f0: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 007114f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007114f5: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 007114f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007114f9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007114fb: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007114ff: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711501: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00711503: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711505: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00711509: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071150b: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 0071150d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071150f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00711511: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711513: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00711515: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711516: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0071151a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071151c: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0071151e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711522: fld dword ptr [0x96f740] */ FPUSH(R_F32((u32)(0x96f740u)));
    /* 00711528: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071152a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0071152e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711530: jb 0x711534 */ if (fC) goto L_00711534;
L_00711532:; BB(0x00711532);
    /* 00711532: fst st(5) */ ST(5) = ST(0);
L_00711534:; BB(0x00711534);
    /* 00711534: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711536: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711538: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 0071153a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071153c: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00711540: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711542: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00711546: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711548: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0071154a: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0071154c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071154e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00711550: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711552: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711554: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711556: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071155a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071155b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071155e: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711562: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711567u); f_0082b440();
    /* 00711567: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071156b: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071156e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711570: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711572: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711574: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711576: fsubr dword ptr [0x96f738] */ ST(0) = R_F32((u32)(0x96f738u)) - ST(0);
    /* 0071157c: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 00711582: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711585: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00711588: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071158a: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071158e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711590: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00711592: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711594: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711598: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0071159a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071159c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071159e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007115a0: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007115a2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007115a4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007115a6: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007115aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007115ac: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007115b0: mov dword ptr [esp + 0x54], 0x3ec00000 */ W32((u32)(r_esp+0x54u), 0x3ec00000u);
    /* 007115b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007115b9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007115bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007115c0: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 007115c4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7115c9u); f_0082b440();
    /* 007115c9: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 007115cf: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007115d1: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 007115d4: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 007115d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007115d9: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 007115dd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007115df: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007115e2: fsub dword ptr [0x96f750] */ ST(0) = ST(0) - R_F32((u32)(0x96f750u));
    /* 007115e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007115ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007115ec: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007115ee: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007115f0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007115f2: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 007115f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007115fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007115fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007115fe: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711602: mov dword ptr [esp + 0x4c], 0x3e000000 */ W32((u32)(r_esp+0x4cu), 0x3e000000u);
    /* 0071160a: mov dword ptr [esp + 0x54], 0x3e800000 */ W32((u32)(r_esp+0x54u), 0x3e800000u);
    /* 00711612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711613: ja 0x7119c4 */ if ((!fC&&!fZ)) goto L_007119c4;
L_00711619:; BB(0x00711619);
    /* 00711619: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0071161b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071161f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711621: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711625: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00711627:; BB(0x00711627);
    /* 00711627: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071162b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0071162d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071162f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711630: jae 0x711654 */ if (!fC) goto L_00711654;
L_00711632:; BB(0x00711632);
    /* 00711632: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711634: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711638: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071163a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071163c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00711640: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 00711646: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711648: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 0071164e: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00711652: jmp 0x71165a */ goto L_0071165a;
L_00711654:; BB(0x00711654);
    /* 00711654: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711656: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0071165a:; BB(0x0071165a);
    /* 0071165a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071165b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
L_0071165e:; BB(0x0071165e);
    /* 0071165e: xor al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 0071165f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711660: sbb al, 0x24 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00711662: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711666: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71166bu); f_0082b440();
    /* 0071166b: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711671: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00711675: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711677: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071167b: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 00711681: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711683: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711687: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711689: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071168b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071168d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071168f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711693: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711694: jb 0x71169a */ if (fC) goto L_0071169a;
L_00711696:; BB(0x00711696);
    /* 00711696: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711698: jmp 0x711627 */ goto L_00711627;
L_0071169a:; BB(0x0071169a);
    /* 0071169a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071169c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071169e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007116a2:; BB(0x007116a2);
    /* 007116a2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007116a6: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 007116aa: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007116ae: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 007116b2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007116b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007116b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007116b8: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 007116bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007116be: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007116c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007116c3: jae 0x7114a7 */ if (!fC) goto L_007114a7;
L_007116c9:; BB(0x007116c9);
    /* 007116c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007116cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007116cd: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7116d2u); f_004ac444();
    /* 007116d2: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 007116d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007116db: jl 0x7116e6 */ if ((fS!=fO)) goto L_007116e6;
L_007116dd:; BB(0x007116dd);
    /* 007116dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007116e0: jle 0x711990 */ if ((fZ||fS!=fO)) goto L_00711990;
L_007116e6:; BB(0x007116e6);
    /* 007116e6: fld dword ptr [0x96f7bc] */ FPUSH(R_F32((u32)(0x96f7bcu)));
    /* 007116ec: fadd dword ptr [edi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44u));
    /* 007116ef: fdiv dword ptr [0x96f7b8] */ ST(0) = ST(0) / R_F32((u32)(0x96f7b8u));
    /* 007116f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007116f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007116f9: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x7116feu); f_0083c230();
    /* 007116fe: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00711701: fsub dword ptr [0x96f728] */ ST(0) = ST(0) - R_F32((u32)(0x96f728u));
    /* 00711707: fdiv dword ptr [0x96f7b8] */ ST(0) = ST(0) / R_F32((u32)(0x96f7b8u));
    /* 0071170d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071170f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00711712: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00711716: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071171b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071171f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00711723: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00711727: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0071172a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0071172e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071172f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711732: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x711737u); f_0083c230();
    /* 00711737: fld dword ptr [0x96f724] */ FPUSH(R_F32((u32)(0x96f724u)));
    /* 0071173d: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00711740: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 00711747: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711749: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0071174c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00711750: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00711755: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00711759: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071175d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00711761: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00711764: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00711768: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0071176c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00711770: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00711774: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00711778: fmul dword ptr [0x96f720] */ ST(0) = ST(0) * R_F32((u32)(0x96f720u));
    /* 0071177e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711780: fmul dword ptr [0x96f7b4] */ ST(0) = ST(0) * R_F32((u32)(0x96f7b4u));
    /* 00711786: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711788: fcom dword ptr [0x96f744] */ fx_compare(ST(0), R_F32((u32)(0x96f744u))); 
    /* 0071178e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711790: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00711794: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711795: jbe 0x711990 */ if ((fC||fZ)) goto L_00711990;
L_0071179b:; BB(0x0071179b);
    /* 0071179b: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071179e: fsub dword ptr [0x96f728] */ ST(0) = ST(0) - R_F32((u32)(0x96f728u));
    /* 007117a4: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007117a8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007117ac: fmul dword ptr [0x96f73c] */ ST(0) = ST(0) * R_F32((u32)(0x96f73cu));
    /* 007117b2: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 007117b6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007117b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007117ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007117bb: jae 0x711990 */ if (!fC) goto L_00711990;
L_007117c1:; BB(0x007117c1);
    /* 007117c1: fld dword ptr [0x96f71c] */ FPUSH(R_F32((u32)(0x96f71cu)));
    /* 007117c7: fmul dword ptr [esi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x2cu));
    /* 007117ca: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007117cd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007117d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007117d6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007117da: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007117de: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007117e2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007117e5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007117e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007117ea: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7117efu); f_0061cdb0();
    /* 007117ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007117f0: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x7117f5u); f_007a902c();
    /* 007117f5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007117f7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007117f9: jle 0x711986 */ if ((fZ||fS!=fO)) goto L_00711986;
L_007117ff:; BB(0x007117ff);
    /* 007117ff: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_00711803:; BB(0x00711803);
    /* 00711803: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711807: fcomp dword ptr [0x96f744] */ fx_compare(ST(0), R_F32((u32)(0x96f744u))); FPOP();
    /* 0071180d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071180f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711810: jbe 0x71196d */ if ((fC||fZ)) goto L_0071196d;
L_00711816:; BB(0x00711816);
    /* 00711816: fld dword ptr [0x96f728] */ FPUSH(R_F32((u32)(0x96f728u)));
    /* 0071181c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00711820: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711824: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00711827: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711829: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0071182b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071182d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071182e: jbe 0x7119cd */ if ((fC||fZ)) goto L_007119cd;
L_00711834:; BB(0x00711834);
    /* 00711834: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 0071183c: lea edi, [esp + 0x6c] */ r_edi = (u32)(r_esp+0x6cu);
    /* 00711840: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00711844: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00711847: mov dword ptr [esp + 0x68], 3 */ W32((u32)(r_esp+0x68u), 0x3u);
    /* 0071184f: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00711856: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0071185a: mov eax, 0x282828 */ r_eax = 0x282828u;
    /* 0071185f: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00711862: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00711864: fdivr dword ptr [esp + 0x34] */ ST(0) = R_F32((u32)(r_esp+0x34u)) / ST(0);
    /* 00711868: fld dword ptr [0x96f718] */ FPUSH(R_F32((u32)(0x96f718u)));
    /* 0071186e: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00711875: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0071187c: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00711880: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00711883: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711885: fcom dword ptr [0x96f748] */ fx_compare(ST(0), R_F32((u32)(0x96f748u))); 
    /* 0071188b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071188d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071188e: jbe 0x7118c2 */ if ((fC||fZ)) goto L_007118c2;
L_00711890:; BB(0x00711890);
    /* 00711890: fld dword ptr [0x96f714] */ FPUSH(R_F32((u32)(0x96f714u)));
    /* 00711896: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00711898: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071189a: fmul dword ptr [0x96f710] */ ST(0) = ST(0) * R_F32((u32)(0x96f710u));
    /* 007118a0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007118a3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007118a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007118ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007118b0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007118b4: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007118b8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007118bb: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007118c0: jmp 0x7118e6 */ goto L_007118e6;
L_007118c2:; BB(0x007118c2);
    /* 007118c2: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 007118c4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007118c6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007118c9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007118cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007118d2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007118d6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007118da: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007118de: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007118e1: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
L_007118e6:; BB(0x007118e6);
    /* 007118e6: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007118ea: fld dword ptr [0x96f7bc] */ FPUSH(R_F32((u32)(0x96f7bcu)));
    /* 007118f0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 007118f4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007118f8: fmul dword ptr [0x96f7b8] */ ST(0) = ST(0) * R_F32((u32)(0x96f7b8u));
    /* 007118fe: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00711901: mov ecx, esi */ r_ecx = r_esi;
    /* 00711903: or dword ptr [edx + 4], eax */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00711906: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0071190a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071190c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071190e: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00711912: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 00711916: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711918: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071191a: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 0071191d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071191f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00711923: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00711927: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0071192a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071192c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071192e: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00711932: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00711936: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071193d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071193e: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x711943u); f_0071bd34();
    /* 00711943: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00711947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711948: mov ecx, esi */ r_ecx = r_esi;
    /* 0071194a: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x71194fu); f_0071bd34();
    /* 0071194f: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 00711953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711954: mov ecx, esi */ r_ecx = r_esi;
    /* 00711956: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x71195bu); f_0071bd34();
    /* 0071195b: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0071195f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00711961: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711962: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00711964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711965: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x71196au); f_0082b558();
    /* 0071196a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0071196d:; BB(0x0071196d);
    /* 0071196d: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711971: fsub dword ptr [0x96f714] */ ST(0) = ST(0) - R_F32((u32)(0x96f714u));
    /* 00711977: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071197b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071197e: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00711980: jl 0x711803 */ if ((fS!=fO)) goto L_00711803;
L_00711986:; BB(0x00711986);
    /* 00711986: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71198bu); f_007a9044();
    /* 0071198b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x711990u); f_0061cdb0();
L_00711990:; BB(0x00711990);
    /* 00711990: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00711996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00711997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00711998: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00711999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071199a: ret 4 */ FN_RET(0x0071165e); r_esp += 8; return;
L_007119c4:; BB(0x007119c4);
    /* 007119c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119c8: jmp 0x7116a2 */ goto L_007116a2;
L_007119cd:; BB(0x007119cd);
    /* 007119cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119cf: jmp 0x71196d */ goto L_0071196d;
}

void f_007119d4(void) /* sub_7119D4 */
{
    FN_ENTER(0x007119d4);
    /* 007119d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007119d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007119d6: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007119d9: mov edi, ecx */ r_edi = r_ecx;
    /* 007119db: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 007119df: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007119e4: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7119e9u); f_0082bb30();
    /* 007119e9: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 007119ef: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7119f4u); f_00829cc8();
    /* 007119f4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007119f9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007119fe: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x711a03u); f_0082bb60();
    /* 00711a03: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
    /* 00711a09: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00711a0c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00711a0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711a10: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00711a14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711a15: jae 0x711a27 */ if (!fC) goto L_00711a27;
L_00711a17:; BB(0x00711a17);
    /* 00711a17: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00711a1b: fmul dword ptr [0x96f704] */ ST(0) = ST(0) * R_F32((u32)(0x96f704u));
    /* 00711a21: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00711a25: jmp 0x711a31 */ goto L_00711a31;
L_00711a27:; BB(0x00711a27);
    /* 00711a27: fld dword ptr [0x96f708] */ FPUSH(R_F32((u32)(0x96f708u)));
    /* 00711a2d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_00711a31:; BB(0x00711a31);
    /* 00711a31: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00711a35: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00711a38: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00711a3b: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00711a3e: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00711a41: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711a44: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 00711a46: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00711a48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711a4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711a4c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711a4e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711a52: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00711a54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711a56: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00711a58: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711a5a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711a5b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00711a5f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711a61: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 00711a64: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711a66: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00711a6a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00711a6c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711a6e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00711a70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711a72: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00711a76: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00711a7e: mov dword ptr [esp + 0x1c], 0x3e000000 */ W32((u32)(r_esp+0x1cu), 0x3e000000u);
    /* 00711a86: jae 0x711a98 */ if (!fC) goto L_00711a98;
L_00711a88:; BB(0x00711a88);
    /* 00711a88: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711a8c: fmul dword ptr [0x96f704] */ ST(0) = ST(0) * R_F32((u32)(0x96f704u));
    /* 00711a92: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711a96: jmp 0x711aa2 */ goto L_00711aa2;
L_00711a98:; BB(0x00711a98);
    /* 00711a98: fld dword ptr [0x96f708] */ FPUSH(R_F32((u32)(0x96f708u)));
    /* 00711a9e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_00711aa2:; BB(0x00711aa2);
    /* 00711aa2: fld dword ptr [0x96f6f8] */ FPUSH(R_F32((u32)(0x96f6f8u)));
    /* 00711aa8: fdiv dword ptr [ebp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x38u));
    /* 00711aab: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711aaf: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711ab2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00711ab5: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711ab8: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711abb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711abd: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00711ac1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711ac3: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711ac5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711ac7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00711ac9: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00711acb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00711ace: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711ad0: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711ad3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711ad5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711ad8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711ada: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711adc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711ade: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711ae0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711ae2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711ae4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711ae8: mov dword ptr [esp + 0x10], 0x3ec40000 */ W32((u32)(r_esp+0x10u), 0x3ec40000u);
    /* 00711af0: mov dword ptr [esp + 0x18], 0x3f020000 */ W32((u32)(r_esp+0x18u), 0x3f020000u);
    /* 00711af8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711af9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711afc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711b00: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711b05u); f_0082b440();
    /* 00711b05: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711b08: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711b0b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711b0d: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 00711b11: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711b14: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711b17: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711b19: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711b1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711b1e: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711b21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711b23: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00711b25: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711b27: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00711b29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711b2b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711b2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00711b2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711b31: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00711b33: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711b35: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711b38: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711b3a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711b3e: mov dword ptr [esp + 0x10], 0x3f220000 */ W32((u32)(r_esp+0x10u), 0x3f220000u);
    /* 00711b46: mov dword ptr [esp + 0x18], 0x3f420000 */ W32((u32)(r_esp+0x18u), 0x3f420000u);
    /* 00711b4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711b4f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00711b53: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711b56: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711b5a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711b5fu); f_0082b440();
    /* 00711b5f: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711b65: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
    /* 00711b6b: mov edx, 0x3f020000 */ r_edx = 0x3f020000u;
    /* 00711b70: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711b73: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711b76: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711b79: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711b7c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711b7e: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00711b82: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711b84: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00711b86: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711b88: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00711b8a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711b8c: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00711b8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00711b90: fcom dword ptr [0x96f700] */ fx_compare(ST(0), R_F32((u32)(0x96f700u))); 
    /* 00711b96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711b98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711b9a: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00711b9c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711b9e: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711ba1: mov dword ptr [esp + 0x10], 0x3f020000 */ W32((u32)(r_esp+0x10u), 0x3f020000u);
    /* 00711ba9: mov dword ptr [esp + 0x18], 0x3f220000 */ W32((u32)(r_esp+0x18u), 0x3f220000u);
    /* 00711bb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711bb2: jb 0x7120bc */ if (fC) goto L_007120bc;
L_00711bb8:; BB(0x00711bb8);
    /* 00711bb8: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00711bba: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00711bbc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00711bbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711bc0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00711bc4:; BB(0x00711bc4);
    /* 00711bc4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711bc8: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00711bca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711bcc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711bcd: jae 0x711bf1 */ if (!fC) goto L_00711bf1;
L_00711bcf:; BB(0x00711bcf);
    /* 00711bcf: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711bd1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711bd5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00711bd7: fld dword ptr [0x96f6e4] */ FPUSH(R_F32((u32)(0x96f6e4u)));
    /* 00711bdd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711bdf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711be3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711be5: fdiv dword ptr [0x96f6e0] */ ST(0) = ST(0) / R_F32((u32)(0x96f6e0u));
    /* 00711beb: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00711bef: jmp 0x711bf7 */ goto L_00711bf7;
L_00711bf1:; BB(0x00711bf1);
    /* 00711bf1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711bf3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00711bf7:; BB(0x00711bf7);
    /* 00711bf7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711bf8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00711bfc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711bff: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711c03: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711c08u); f_0082b440();
    /* 00711c08: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711c0e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00711c11: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711c13: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711c17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c19: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711c1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c1e: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711c20: fcom dword ptr [0x96f700] */ fx_compare(ST(0), R_F32((u32)(0x96f700u))); 
    /* 00711c26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711c28: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711c2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711c2d: jae 0x711bc4 */ if (!fC) goto L_00711bc4;
L_00711c2f:; BB(0x00711c2f);
    /* 00711c2f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711c31: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711c33: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
    /* 00711c39: mov edx, 0x3f020000 */ r_edx = 0x3f020000u;
    /* 00711c3e: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711c41: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711c44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c46: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711c4a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
L_00711c4d:; BB(0x00711c4d);
    /* 00711c4d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711c51: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00711c53: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711c55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711c57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711c59: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00711c5c: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00711c5f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711c61: fsub dword ptr [esp + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x20u));
    /* 00711c65: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00711c68: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00711c6b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711c6d: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00711c71: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711c73: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 00711c76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c78: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00711c7a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711c7c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00711c7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c80: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711c82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00711c84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711c86: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00711c88: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711c8a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00711c8e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711c90: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00711c94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711c95: mov dword ptr [esp + 0x14], 0x3e800000 */ W32((u32)(r_esp+0x14u), 0x3e800000u);
    /* 00711c9d: mov dword ptr [esp + 0x1c], 0x3ec00000 */ W32((u32)(r_esp+0x1cu), 0x3ec00000u);
    /* 00711ca5: jae 0x711cb7 */ if (!fC) goto L_00711cb7;
L_00711ca7:; BB(0x00711ca7);
    /* 00711ca7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711cab: fmul dword ptr [0x96f704] */ ST(0) = ST(0) * R_F32((u32)(0x96f704u));
    /* 00711cb1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711cb5: jmp 0x711cc1 */ goto L_00711cc1;
L_00711cb7:; BB(0x00711cb7);
    /* 00711cb7: fld dword ptr [0x96f708] */ FPUSH(R_F32((u32)(0x96f708u)));
    /* 00711cbd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_00711cc1:; BB(0x00711cc1);
    /* 00711cc1: fld dword ptr [0x96f6f8] */ FPUSH(R_F32((u32)(0x96f6f8u)));
    /* 00711cc7: fdiv dword ptr [ebp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x38u));
    /* 00711cca: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711cce: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711cd1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00711cd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711cd6: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00711cda: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711cdc: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00711cde: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00711ce0: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00711ce2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00711ce5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711ce7: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711cea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711cec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711cef: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00711cf1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711cf3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711cf5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711cf7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711cfb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00711cff: mov dword ptr [esp + 0x10], 0x3ec40000 */ W32((u32)(r_esp+0x10u), 0x3ec40000u);
    /* 00711d07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711d08: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711d0b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711d0f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711d14u); f_0082b440();
    /* 00711d14: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711d17: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711d1a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711d1c: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 00711d20: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711d23: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711d26: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711d28: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711d2b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711d2d: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711d30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711d32: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00711d34: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711d36: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00711d38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711d3a: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711d3c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00711d3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711d40: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00711d42: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711d44: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711d47: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711d49: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711d4d: mov dword ptr [esp + 0x10], 0x3f220000 */ W32((u32)(r_esp+0x10u), 0x3f220000u);
    /* 00711d55: mov dword ptr [esp + 0x18], 0x3f420000 */ W32((u32)(r_esp+0x18u), 0x3f420000u);
    /* 00711d5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711d5e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00711d62: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711d65: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711d69: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711d6eu); f_0082b440();
    /* 00711d6e: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711d74: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
    /* 00711d7a: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711d7d: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711d80: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711d83: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711d86: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711d88: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00711d8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711d8c: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00711d8e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00711d90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711d92: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00711d94: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711d96: fld dword ptr [0x96f700] */ FPUSH(R_F32((u32)(0x96f700u)));
    /* 00711d9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00711d9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711da0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711da2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711da4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711da6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711da9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711daa: mov dword ptr [esp + 0x10], 0x3f020000 */ W32((u32)(r_esp+0x10u), 0x3f020000u);
    /* 00711db2: mov dword ptr [esp + 0x18], 0x3f220000 */ W32((u32)(r_esp+0x18u), 0x3f220000u);
    /* 00711dba: ja 0x7120cd */ if ((!fC&&!fZ)) goto L_007120cd;
L_00711dc0:; BB(0x00711dc0);
    /* 00711dc0: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00711dc2: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00711dc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711dc6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00711dca:; BB(0x00711dca);
    /* 00711dca: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711dce: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00711dd0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711dd2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711dd3: jae 0x711df7 */ if (!fC) goto L_00711df7;
L_00711dd5:; BB(0x00711dd5);
    /* 00711dd5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711dd7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711ddb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00711ddd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711ddf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711de3: fld dword ptr [0x96f6e4] */ FPUSH(R_F32((u32)(0x96f6e4u)));
    /* 00711de9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711deb: fdiv dword ptr [0x96f6e0] */ ST(0) = ST(0) / R_F32((u32)(0x96f6e0u));
    /* 00711df1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00711df5: jmp 0x711dfd */ goto L_00711dfd;
L_00711df7:; BB(0x00711df7);
    /* 00711df7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711df9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00711dfd:; BB(0x00711dfd);
    /* 00711dfd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711dfe: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00711e02: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711e05: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711e09: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711e0eu); f_0082b440();
    /* 00711e0e: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711e14: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00711e17: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711e19: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711e1d: fld dword ptr [0x96f700] */ FPUSH(R_F32((u32)(0x96f700u)));
    /* 00711e23: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711e25: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711e28: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711e2a: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00711e2c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00711e2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711e30: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711e34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711e35: jb 0x711e3b */ if (fC) goto L_00711e3b;
L_00711e37:; BB(0x00711e37);
    /* 00711e37: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711e39: jmp 0x711dca */ goto L_00711dca;
L_00711e3b:; BB(0x00711e3b);
    /* 00711e3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711e3d: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
L_00711e43:; BB(0x00711e43);
    /* 00711e43: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00711e45: fsubr dword ptr [edi + 0x4c] */ ST(0) = R_F32((u32)(r_edi+0x4cu)) - ST(0);
    /* 00711e48: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00711e4a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711e4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711e4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711e50: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00711e53: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00711e56: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00711e59: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711e5b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00711e5d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00711e5f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00711e61: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711e63: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00711e65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711e67: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711e69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711e6b: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00711e6f: mov dword ptr [esp + 0x14], 0x3e000000 */ W32((u32)(r_esp+0x14u), 0x3e000000u);
    /* 00711e77: mov dword ptr [esp + 0x1c], 0x3e800000 */ W32((u32)(r_esp+0x1cu), 0x3e800000u);
    /* 00711e7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711e80: jb 0x7120d8 */ if (fC) goto L_007120d8;
L_00711e86:; BB(0x00711e86);
    /* 00711e86: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711e88: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00711e8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711e8e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711e92: jmp 0x711e9a */ goto L_00711e9a;
L_00711e94:; BB(0x00711e94);
    /* 00711e94: fld dword ptr [0x96f70c] */ FPUSH(R_F32((u32)(0x96f70cu)));
L_00711e9a:; BB(0x00711e9a);
    /* 00711e9a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711e9e: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00711ea0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711ea2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711ea4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711ea6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711ea7: jae 0x711ec8 */ if (!fC) goto L_00711ec8;
L_00711ea9:; BB(0x00711ea9);
    /* 00711ea9: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711ead: fld dword ptr [0x96f708] */ FPUSH(R_F32((u32)(0x96f708u)));
    /* 00711eb3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711eb5: fdiv dword ptr [0x96f6e0] */ ST(0) = ST(0) / R_F32((u32)(0x96f6e0u));
    /* 00711ebb: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00711ebe: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711ec0: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00711ec4: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_00711ec8:; BB(0x00711ec8);
    /* 00711ec8: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00711ecc: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711ecf: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00711ed1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711ed3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711ed5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711ed7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00711edb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711edf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711ee0: jae 0x711ef2 */ if (!fC) goto L_00711ef2;
L_00711ee2:; BB(0x00711ee2);
    /* 00711ee2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711ee6: fmul dword ptr [0x96f704] */ ST(0) = ST(0) * R_F32((u32)(0x96f704u));
    /* 00711eec: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711ef0: jmp 0x711efc */ goto L_00711efc;
L_00711ef2:; BB(0x00711ef2);
    /* 00711ef2: fld dword ptr [0x96f708] */ FPUSH(R_F32((u32)(0x96f708u)));
    /* 00711ef8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_00711efc:; BB(0x00711efc);
    /* 00711efc: fld dword ptr [0x96f6f8] */ FPUSH(R_F32((u32)(0x96f6f8u)));
    /* 00711f02: fdiv dword ptr [ebp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x38u));
    /* 00711f05: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711f09: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711f0c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00711f0f: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711f12: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711f15: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711f17: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00711f1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711f1d: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711f1f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711f21: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00711f23: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00711f25: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00711f28: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711f2a: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711f2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711f2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711f32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711f34: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711f36: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711f38: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711f3a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711f3c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711f3e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711f42: mov dword ptr [esp + 0x10], 0x3ec40000 */ W32((u32)(r_esp+0x10u), 0x3ec40000u);
    /* 00711f4a: mov dword ptr [esp + 0x18], 0x3f020000 */ W32((u32)(r_esp+0x18u), 0x3f020000u);
    /* 00711f52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711f53: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711f56: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711f5a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711f5fu); f_0082b440();
    /* 00711f5f: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711f62: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711f65: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711f67: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 00711f6b: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711f6e: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711f71: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711f73: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711f76: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711f78: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00711f7b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711f7d: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00711f7f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711f81: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00711f83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711f85: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711f87: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00711f89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711f8b: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00711f8d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711f8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711f92: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711f94: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00711f98: mov dword ptr [esp + 0x10], 0x3f220000 */ W32((u32)(r_esp+0x10u), 0x3f220000u);
    /* 00711fa0: mov dword ptr [esp + 0x18], 0x3f420000 */ W32((u32)(r_esp+0x18u), 0x3f420000u);
    /* 00711fa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711fa9: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00711fad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711fb0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00711fb4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711fb9u); f_0082b440();
    /* 00711fb9: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711fbf: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00711fc2: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00711fc5: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711fc8: fsub dword ptr [0x96f70c] */ ST(0) = ST(0) - R_F32((u32)(0x96f70cu));
    /* 00711fce: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00711fd1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711fd3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00711fd5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711fd7: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00711fd9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00711fdb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00711fdd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711fdf: fld dword ptr [0x96f700] */ FPUSH(R_F32((u32)(0x96f700u)));
    /* 00711fe5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00711fe7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711fe9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711feb: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00711fee: mov dword ptr [esp + 0x10], 0x3f020000 */ W32((u32)(r_esp+0x10u), 0x3f020000u);
    /* 00711ff6: mov dword ptr [esp + 0x18], 0x3f220000 */ W32((u32)(r_esp+0x18u), 0x3f220000u);
    /* 00711ffe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711fff: ja 0x7120e4 */ if ((!fC&&!fZ)) goto L_007120e4;
L_00712005:; BB(0x00712005);
    /* 00712005: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00712007: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712009: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0071200d:; BB(0x0071200d);
    /* 0071200d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00712011: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00712013: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712015: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712016: jae 0x71203a */ if (!fC) goto L_0071203a;
L_00712018:; BB(0x00712018);
    /* 00712018: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071201a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071201e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00712020: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712022: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00712026: fld dword ptr [0x96f6e4] */ FPUSH(R_F32((u32)(0x96f6e4u)));
    /* 0071202c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071202e: fdiv dword ptr [0x96f6e0] */ ST(0) = ST(0) / R_F32((u32)(0x96f6e0u));
    /* 00712034: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00712038: jmp 0x712040 */ goto L_00712040;
L_0071203a:; BB(0x0071203a);
    /* 0071203a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071203c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00712040:; BB(0x00712040);
    /* 00712040: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712041: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00712045: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00712048: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0071204c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x712051u); f_0082b440();
    /* 00712051: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00712057: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071205a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071205c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00712060: fld dword ptr [0x96f700] */ FPUSH(R_F32((u32)(0x96f700u)));
    /* 00712066: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712068: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0071206b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071206d: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071206f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00712071: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712073: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00712077: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712078: jb 0x71207e */ if (fC) goto L_0071207e;
L_0071207a:; BB(0x0071207a);
    /* 0071207a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071207c: jmp 0x71200d */ goto L_0071200d;
L_0071207e:; BB(0x0071207e);
    /* 0071207e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00712080:; BB(0x00712080);
    /* 00712080: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00712084: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00712088: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071208c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071208e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00712092: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712094: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00712096: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00712098: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071209a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071209c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071209e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007120a0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007120a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007120a5: jae 0x711e94 */ if (!fC) goto L_00711e94;
L_007120ab:; BB(0x007120ab);
    /* 007120ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120ad: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007120af:; BB(0x007120af);
    /* 007120af: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7120b4u); f_004ac444();
    /* 007120b4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007120b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007120b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007120b9: ret 4 */ FN_RET(0x007119d4); r_esp += 8; return;
L_007120bc:; BB(0x007120bc);
    /* 007120bc: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 007120be: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 007120c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007120c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007120c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007120c8: jmp 0x711c4d */ goto L_00711c4d;
L_007120cd:; BB(0x007120cd);
    /* 007120cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007120d3: jmp 0x711e43 */ goto L_00711e43;
L_007120d8:; BB(0x007120d8);
    /* 007120d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120da: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007120dc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007120de: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007120e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120e2: jmp 0x7120af */ goto L_007120af;
L_007120e4:; BB(0x007120e4);
    /* 007120e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007120e6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007120e8: jmp 0x712080 */ goto L_00712080;
}

