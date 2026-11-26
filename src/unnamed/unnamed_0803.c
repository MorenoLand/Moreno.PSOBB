#include "protos.h"

void f_00803180(void) /* sub_803180 */
{
    FN_ENTER(0x00803180);
    /* 00803180: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x803185u); f_006dc358();
    /* 00803185: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803188: je 0x803190 */ if (fZ) goto L_00803190;
L_0080318a:; BB(0x0080318a);
    /* 0080318a: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x80318fu); f_00687c48();
    /* 0080318f: ret  */ FN_RET(0x00803180); r_esp += 4; return;
L_00803190:; BB(0x00803190);
    /* 00803190: call 0x78b1e8 */ r_esp -= 4; W32(r_esp, 0x803195u); f_0078b1e8();
    /* 00803195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803197: jne 0x80318a */ if (!fZ) goto L_0080318a;
L_00803199:; BB(0x00803199);
    /* 00803199: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080319b: ret  */ FN_RET(0x00803180); r_esp += 4; return;
}

void f_0080319c(void) /* sub_80319C */
{
    FN_ENTER(0x0080319c);
    /* 0080319c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080319d: mov edi, ecx */ r_edi = r_ecx;
    /* 0080319f: mov eax, dword ptr [edi + 0x134] */ r_eax = R32((u32)(r_edi+0x134u));
    /* 008031a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008031a7: jl 0x8031ce */ if ((fS!=fO)) goto L_008031ce;
L_008031a9:; BB(0x008031a9);
    /* 008031a9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008031ac: mov edx, dword ptr [edi + eax*8 + 0x94] */ r_edx = R32((u32)(r_edi+r_eax*8+0x94u));
    /* 008031b3: mov dword ptr [0xaafb00], edx */ W32((u32)(0xaafb00u), r_edx);
    /* 008031b9: mov eax, dword ptr [edi + 0x134] */ r_eax = R32((u32)(r_edi+0x134u));
    /* 008031bf: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008031c2: mov eax, dword ptr [edi + eax*8 + 0x9c] */ r_eax = R32((u32)(r_edi+r_eax*8+0x9cu));
    /* 008031c9: mov dword ptr [0xaafb08], eax */ W32((u32)(0xaafb08u), r_eax);
L_008031ce:; BB(0x008031ce);
    /* 008031ce: mov eax, dword ptr [edi + 0x168] */ r_eax = R32((u32)(r_edi+0x168u));
    /* 008031d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008031d6: je 0x80321e */ if (fZ) goto L_0080321e;
L_008031d8:; BB(0x008031d8);
    /* 008031d8: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 008031dd: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 008031e3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008031e5: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008031eb: mov dword ptr [0xaafb18], edx */ W32((u32)(0xaafb18u), r_edx);
    /* 008031f1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8031f6u); f_00807ac0();
    /* 008031f6: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008031f9: je 0x8033c7 */ if (fZ) goto L_008033c7;
L_008031ff:; BB(0x008031ff);
    /* 008031ff: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00803204: mov dword ptr [0xaafb58], 0x8000 */ W32((u32)(0xaafb58u), 0x8000u);
    /* 0080320e: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00803214: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00803216: mov dword ptr [edi + 0x174], edx */ W32((u32)(r_edi+0x174u), r_edx);
    /* 0080321c: jmp 0x803245 */ goto L_00803245;
L_0080321e:; BB(0x0080321e);
    /* 0080321e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x803223u); f_00807ac0();
    /* 00803223: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803226: je 0x803499 */ if (fZ) goto L_00803499;
L_0080322c:; BB(0x0080322c);
    /* 0080322c: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 00803231: mov dword ptr [0xaafb18], eax */ W32((u32)(0xaafb18u), r_eax);
    /* 00803236: mov dword ptr [0xaafb58], eax */ W32((u32)(0xaafb58u), r_eax);
    /* 0080323b: mov dword ptr [edi + 0x174], 0 */ W32((u32)(r_edi+0x174u), 0x0u);
L_00803245:; BB(0x00803245);
    /* 00803245: mov eax, dword ptr [edi + 0x168] */ r_eax = R32((u32)(r_edi+0x168u));
    /* 0080324b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080324d: je 0x803306 */ if (fZ) goto L_00803306;
L_00803253:; BB(0x00803253);
    /* 00803253: mov eax, dword ptr [edi + 0x16c] */ r_eax = R32((u32)(r_edi+0x16cu));
    /* 00803259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080325b: je 0x8032d1 */ if (fZ) goto L_008032d1;
L_0080325d:; BB(0x0080325d);
    /* 0080325d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803260: jne 0x803297 */ if (!fZ) goto L_00803297;
L_00803262:; BB(0x00803262);
    /* 00803262: fld dword ptr [0xa11464] */ FPUSH(R_F32((u32)(0xa11464u)));
    /* 00803268: fld dword ptr [edi + 0x170] */ FPUSH(R_F32((u32)(r_edi+0x170u)));
    /* 0080326e: fmul dword ptr [0x97ecc8] */ ST(0) = ST(0) * R_F32((u32)(0x97ecc8u));
    /* 00803274: fst dword ptr [edi + 0x170] */ W_F32((u32)(r_edi+0x170u), ST(0));
    /* 0080327a: fld dword ptr [0xaafb04] */ FPUSH(R_F32((u32)(0xaafb04u)));
    /* 00803280: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00803282: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00803284: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00803286: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00803287: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00803289: jb 0x80328d */ if (fC) goto L_0080328d;
L_0080328b:; BB(0x0080328b);
    /* 0080328b: fst st(1) */ ST(1) = ST(0);
L_0080328d:; BB(0x0080328d);
    /* 0080328d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080328f: fstp dword ptr [0xaafb04] */ W_F32((u32)(0xaafb04u), ST(0)); FPOP();
    /* 00803295: jmp 0x803310 */ goto L_00803310;
L_00803297:; BB(0x00803297);
    /* 00803297: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080329a: jne 0x803310 */ if (!fZ) goto L_00803310;
L_0080329c:; BB(0x0080329c);
    /* 0080329c: fld dword ptr [0xa11468] */ FPUSH(R_F32((u32)(0xa11468u)));
    /* 008032a2: fld dword ptr [edi + 0x170] */ FPUSH(R_F32((u32)(r_edi+0x170u)));
    /* 008032a8: fmul dword ptr [0x97ecc8] */ ST(0) = ST(0) * R_F32((u32)(0x97ecc8u));
    /* 008032ae: fst dword ptr [edi + 0x170] */ W_F32((u32)(r_edi+0x170u), ST(0));
    /* 008032b4: fld dword ptr [0xaafb04] */ FPUSH(R_F32((u32)(0xaafb04u)));
    /* 008032ba: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008032bc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008032be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008032c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008032c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008032c3: ja 0x8032c7 */ if ((!fC&&!fZ)) goto L_008032c7;
L_008032c5:; BB(0x008032c5);
    /* 008032c5: fst st(1) */ ST(1) = ST(0);
L_008032c7:; BB(0x008032c7);
    /* 008032c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008032c9: fstp dword ptr [0xaafb04] */ W_F32((u32)(0xaafb04u), ST(0)); FPOP();
    /* 008032cf: jmp 0x803310 */ goto L_00803310;
L_008032d1:; BB(0x008032d1);
    /* 008032d1: fld dword ptr [0xa11460] */ FPUSH(R_F32((u32)(0xa11460u)));
    /* 008032d7: fld dword ptr [edi + 0x170] */ FPUSH(R_F32((u32)(r_edi+0x170u)));
    /* 008032dd: fmul dword ptr [0x97ecc8] */ ST(0) = ST(0) * R_F32((u32)(0x97ecc8u));
    /* 008032e3: fst dword ptr [edi + 0x170] */ W_F32((u32)(r_edi+0x170u), ST(0));
    /* 008032e9: fld dword ptr [0xaafb04] */ FPUSH(R_F32((u32)(0xaafb04u)));
    /* 008032ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008032f1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008032f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008032f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008032f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008032f8: jb 0x8032fc */ if (fC) goto L_008032fc;
L_008032fa:; BB(0x008032fa);
    /* 008032fa: fst st(1) */ ST(1) = ST(0);
L_008032fc:; BB(0x008032fc);
    /* 008032fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008032fe: fstp dword ptr [0xaafb04] */ W_F32((u32)(0xaafb04u), ST(0)); FPOP();
    /* 00803304: jmp 0x803310 */ goto L_00803310;
L_00803306:; BB(0x00803306);
    /* 00803306: mov eax, dword ptr [0xa11460] */ r_eax = R32((u32)(0xa11460u));
    /* 0080330b: mov dword ptr [0xaafb04], eax */ W32((u32)(0xaafb04u), r_eax);
L_00803310:; BB(0x00803310);
    /* 00803310: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00803314: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00803317: je 0x8033ef */ if (fZ) goto L_008033ef;
L_0080331d:; BB(0x0080331d);
    /* 0080331d: mov eax, dword ptr [0xaafb00] */ r_eax = R32((u32)(0xaafb00u));
    /* 00803322: mov edx, dword ptr [0xaafb04] */ r_edx = R32((u32)(0xaafb04u));
    /* 00803328: mov ecx, dword ptr [0xaafb08] */ r_ecx = R32((u32)(0xaafb08u));
    /* 0080332e: mov edi, dword ptr [0xaafb0c] */ r_edi = R32((u32)(0xaafb0cu));
    /* 00803334: mov dword ptr [0xaafb80], eax */ W32((u32)(0xaafb80u), r_eax);
    /* 00803339: mov eax, dword ptr [0xaafb10] */ r_eax = R32((u32)(0xaafb10u));
    /* 0080333e: mov dword ptr [0xaafb84], edx */ W32((u32)(0xaafb84u), r_edx);
    /* 00803344: mov dword ptr [0xaafb88], ecx */ W32((u32)(0xaafb88u), r_ecx);
    /* 0080334a: mov dword ptr [0xaafb8c], edi */ W32((u32)(0xaafb8cu), r_edi);
    /* 00803350: mov dword ptr [0xaafb90], eax */ W32((u32)(0xaafb90u), r_eax);
    /* 00803355: mov eax, dword ptr [0xaafb14] */ r_eax = R32((u32)(0xaafb14u));
    /* 0080335a: mov dword ptr [0xaafb94], eax */ W32((u32)(0xaafb94u), r_eax);
    /* 0080335f: mov eax, dword ptr [0xaafb18] */ r_eax = R32((u32)(0xaafb18u));
    /* 00803364: mov dword ptr [0xaafb98], eax */ W32((u32)(0xaafb98u), r_eax);
    /* 00803369: mov eax, dword ptr [0xaafb1c] */ r_eax = R32((u32)(0xaafb1cu));
    /* 0080336e: mov dword ptr [0xaafb9c], eax */ W32((u32)(0xaafb9cu), r_eax);
    /* 00803373: mov eax, dword ptr [0xaafb20] */ r_eax = R32((u32)(0xaafb20u));
    /* 00803378: mov dword ptr [0xaafba0], eax */ W32((u32)(0xaafba0u), r_eax);
    /* 0080337d: mov eax, dword ptr [0xaafb24] */ r_eax = R32((u32)(0xaafb24u));
    /* 00803382: mov dword ptr [0xaafba4], eax */ W32((u32)(0xaafba4u), r_eax);
    /* 00803387: mov eax, dword ptr [0xaafb28] */ r_eax = R32((u32)(0xaafb28u));
    /* 0080338c: mov dword ptr [0xaafba8], eax */ W32((u32)(0xaafba8u), r_eax);
    /* 00803391: mov eax, dword ptr [0xaafb2c] */ r_eax = R32((u32)(0xaafb2cu));
    /* 00803396: mov dword ptr [0xaafbac], eax */ W32((u32)(0xaafbacu), r_eax);
    /* 0080339b: mov eax, dword ptr [0xaafb30] */ r_eax = R32((u32)(0xaafb30u));
    /* 008033a0: mov dword ptr [0xaafbb0], eax */ W32((u32)(0xaafbb0u), r_eax);
    /* 008033a5: mov eax, dword ptr [0xaafb34] */ r_eax = R32((u32)(0xaafb34u));
    /* 008033aa: mov dword ptr [0xaafbb4], eax */ W32((u32)(0xaafbb4u), r_eax);
    /* 008033af: mov eax, dword ptr [0xaafb38] */ r_eax = R32((u32)(0xaafb38u));
    /* 008033b4: mov dword ptr [0xaafbb8], eax */ W32((u32)(0xaafbb8u), r_eax);
    /* 008033b9: mov eax, dword ptr [0xaafb3c] */ r_eax = R32((u32)(0xaafb3cu));
    /* 008033be: mov dword ptr [0xaafbbc], eax */ W32((u32)(0xaafbbcu), r_eax);
    /* 008033c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008033c4: ret 4 */ FN_RET(0x0080319c); r_esp += 8; return;
L_008033c7:; BB(0x008033c7);
    /* 008033c7: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 008033cc: mov dword ptr [0xaafb58], 0 */ W32((u32)(0xaafb58u), 0x0u);
    /* 008033d6: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 008033dc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008033de: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008033e4: mov dword ptr [edi + 0x174], edx */ W32((u32)(r_edi+0x174u), r_edx);
    /* 008033ea: jmp 0x803245 */ goto L_00803245;
L_008033ef:; BB(0x008033ef);
    /* 008033ef: mov eax, dword ptr [0xaafb40] */ r_eax = R32((u32)(0xaafb40u));
    /* 008033f4: mov edx, dword ptr [0xaafb44] */ r_edx = R32((u32)(0xaafb44u));
    /* 008033fa: mov ecx, dword ptr [0xaafb48] */ r_ecx = R32((u32)(0xaafb48u));
    /* 00803400: mov edi, dword ptr [0xaafb4c] */ r_edi = R32((u32)(0xaafb4cu));
    /* 00803406: mov dword ptr [0xaafb80], eax */ W32((u32)(0xaafb80u), r_eax);
    /* 0080340b: mov eax, dword ptr [0xaafb50] */ r_eax = R32((u32)(0xaafb50u));
    /* 00803410: mov dword ptr [0xaafb84], edx */ W32((u32)(0xaafb84u), r_edx);
    /* 00803416: mov dword ptr [0xaafb88], ecx */ W32((u32)(0xaafb88u), r_ecx);
    /* 0080341c: mov dword ptr [0xaafb8c], edi */ W32((u32)(0xaafb8cu), r_edi);
    /* 00803422: mov dword ptr [0xaafb90], eax */ W32((u32)(0xaafb90u), r_eax);
    /* 00803427: mov eax, dword ptr [0xaafb54] */ r_eax = R32((u32)(0xaafb54u));
    /* 0080342c: mov dword ptr [0xaafb94], eax */ W32((u32)(0xaafb94u), r_eax);
    /* 00803431: mov eax, dword ptr [0xaafb58] */ r_eax = R32((u32)(0xaafb58u));
    /* 00803436: mov dword ptr [0xaafb98], eax */ W32((u32)(0xaafb98u), r_eax);
    /* 0080343b: mov eax, dword ptr [0xaafb5c] */ r_eax = R32((u32)(0xaafb5cu));
    /* 00803440: mov dword ptr [0xaafb9c], eax */ W32((u32)(0xaafb9cu), r_eax);
    /* 00803445: mov eax, dword ptr [0xaafb60] */ r_eax = R32((u32)(0xaafb60u));
    /* 0080344a: mov dword ptr [0xaafba0], eax */ W32((u32)(0xaafba0u), r_eax);
    /* 0080344f: mov eax, dword ptr [0xaafb64] */ r_eax = R32((u32)(0xaafb64u));
    /* 00803454: mov dword ptr [0xaafba4], eax */ W32((u32)(0xaafba4u), r_eax);
    /* 00803459: mov eax, dword ptr [0xaafb68] */ r_eax = R32((u32)(0xaafb68u));
    /* 0080345e: mov dword ptr [0xaafba8], eax */ W32((u32)(0xaafba8u), r_eax);
    /* 00803463: mov eax, dword ptr [0xaafb6c] */ r_eax = R32((u32)(0xaafb6cu));
    /* 00803468: mov dword ptr [0xaafbac], eax */ W32((u32)(0xaafbacu), r_eax);
    /* 0080346d: mov eax, dword ptr [0xaafb70] */ r_eax = R32((u32)(0xaafb70u));
    /* 00803472: mov dword ptr [0xaafbb0], eax */ W32((u32)(0xaafbb0u), r_eax);
    /* 00803477: mov eax, dword ptr [0xaafb74] */ r_eax = R32((u32)(0xaafb74u));
    /* 0080347c: mov dword ptr [0xaafbb4], eax */ W32((u32)(0xaafbb4u), r_eax);
    /* 00803481: mov eax, dword ptr [0xaafb78] */ r_eax = R32((u32)(0xaafb78u));
    /* 00803486: mov dword ptr [0xaafbb8], eax */ W32((u32)(0xaafbb8u), r_eax);
    /* 0080348b: mov eax, dword ptr [0xaafb7c] */ r_eax = R32((u32)(0xaafb7cu));
    /* 00803490: mov dword ptr [0xaafbbc], eax */ W32((u32)(0xaafbbcu), r_eax);
    /* 00803495: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00803496: ret 4 */ FN_RET(0x0080319c); r_esp += 8; return;
L_00803499:; BB(0x00803499);
    /* 00803499: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080349b: mov dword ptr [0xaafb18], eax */ W32((u32)(0xaafb18u), r_eax);
    /* 008034a0: mov dword ptr [0xaafb58], eax */ W32((u32)(0xaafb58u), r_eax);
    /* 008034a5: mov dword ptr [edi + 0x174], eax */ W32((u32)(r_edi+0x174u), r_eax);
    /* 008034ab: jmp 0x803245 */ goto L_00803245;
}

void f_008034b0(void) /* sub_8034B0 */
{
    FN_ENTER(0x008034b0);
    /* 008034b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008034b1: mov edi, ecx */ r_edi = r_ecx;
    /* 008034b3: mov ecx, dword ptr [edi + 0x198] */ r_ecx = R32((u32)(r_edi+0x198u));
    /* 008034b9: add ecx, 0x888 */ {  u32 a = r_ecx; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008034bf: mov dword ptr [edi + 0x198], ecx */ W32((u32)(r_edi+0x198u), r_ecx);
    /* 008034c5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x8034cau); f_0082dcbc();
    /* 008034ca: fadd dword ptr [0x97ecc0] */ ST(0) = ST(0) + R_F32((u32)(0x97ecc0u));
    /* 008034d0: fmul dword ptr [0x97ecbc] */ ST(0) = ST(0) * R_F32((u32)(0x97ecbcu));
    /* 008034d6: fadd dword ptr [0x97ecc4] */ ST(0) = ST(0) + R_F32((u32)(0x97ecc4u));
    /* 008034dc: fstp dword ptr [edi + 0x19c] */ W_F32((u32)(r_edi+0x19cu), ST(0)); FPOP();
    /* 008034e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008034e3: ret  */ FN_RET(0x008034b0); r_esp += 4; return;
}

void f_008034e4(void) /* sub_8034E4 */
{
    FN_ENTER(0x008034e4);
    /* 008034e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008034e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008034e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008034e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008034e8: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008034eb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008034ed: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 008034f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008034f4: je 0x8046a8 */ if (fZ) goto L_008046a8;
L_008034fa:; BB(0x008034fa);
    /* 008034fa: mov esi, dword ptr [0xaafbe4] */ r_esi = R32((u32)(0xaafbe4u));
    /* 00803500: mov eax, dword ptr [0xaafbd0] */ r_eax = R32((u32)(0xaafbd0u));
    /* 00803505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803507: je 0x804076 */ if (fZ) goto L_00804076;
L_0080350d:; BB(0x0080350d);
    /* 0080350d: mov ecx, dword ptr [ebx + 0x184] */ r_ecx = R32((u32)(r_ebx+0x184u));
    /* 00803513: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803515: je 0x804076 */ if (fZ) goto L_00804076;
L_0080351b:; BB(0x0080351b);
    /* 0080351b: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x803520u); f_00689b44();
    /* 00803520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803522: jne 0x804076 */ if (!fZ) goto L_00804076;
L_00803528:; BB(0x00803528);
    /* 00803528: mov ecx, dword ptr [ebx + 0x184] */ r_ecx = R32((u32)(r_ebx+0x184u));
    /* 0080352e: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x803533u); f_00689410();
    /* 00803533: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803535: je 0x803545 */ if (fZ) goto L_00803545;
L_00803537:; BB(0x00803537);
    /* 00803537: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 0080353c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080353f: jne 0x804076 */ if (!fZ) goto L_00804076;
L_00803545:; BB(0x00803545);
    /* 00803545: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080354b: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x803550u); f_00716ba0();
    /* 00803550: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803553: je 0x80356e */ if (fZ) goto L_0080356e;
L_00803555:; BB(0x00803555);
    /* 00803555: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0080355a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080355c: je 0x804076 */ if (fZ) goto L_00804076;
L_00803562:; BB(0x00803562);
    /* 00803562: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00803566: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00803568: je 0x804076 */ if (fZ) goto L_00804076;
L_0080356e:; BB(0x0080356e);
    /* 0080356e: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 00803575: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803578: je 0x804670 */ if (fZ) goto L_00804670;
L_0080357e:; BB(0x0080357e);
    /* 0080357e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803581: je 0x804670 */ if (fZ) goto L_00804670;
L_00803587:; BB(0x00803587);
    /* 00803587: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 0080358d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080358f: jg 0x804076 */ if ((!fZ&&fS==fO)) goto L_00804076;
L_00803595:; BB(0x00803595);
    /* 00803595: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00803597:; BB(0x00803597);
    /* 00803597: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00803598: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x80359du); f_0068d5a8();
    /* 0080359d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080359e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035a0: je 0x8035b6 */ if (fZ) goto L_008035b6;
L_008035a2:; BB(0x008035a2);
    /* 008035a2: mov ecx, eax */ r_ecx = r_eax;
    /* 008035a4: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x8035a9u); f_00689410();
    /* 008035a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035ab: je 0x8035b6 */ if (fZ) goto L_008035b6;
L_008035ad:; BB(0x008035ad);
    /* 008035ad: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035b0: je 0x804076 */ if (fZ) goto L_00804076;
L_008035b6:; BB(0x008035b6);
    /* 008035b6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008035b9: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008035bc: jl 0x803597 */ if ((fS!=fO)) goto L_00803597;
L_008035be:; BB(0x008035be);
    /* 008035be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008035c0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x8035c5u); f_008173b4();
    /* 008035c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035c7: je 0x804076 */ if (fZ) goto L_00804076;
L_008035cd:; BB(0x008035cd);
    /* 008035cd: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 008035d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035d4: je 0x803cf9 */ if (fZ) goto L_00803cf9;
L_008035da:; BB(0x008035da);
    /* 008035da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008035dd: jne 0x803960 */ if (!fZ) goto L_00803960;
L_008035e3:; BB(0x008035e3);
    /* 008035e3: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x8035e8u); f_004d28a4();
    /* 008035e8: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008035ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008035f0: call 0x8046b0 */ r_esp -= 4; W32(r_esp, 0x8035f5u); f_008046b0();
    /* 008035f5: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x8035fau); f_004d2968();
    /* 008035fa: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803600: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00803602: call 0x8047b4 */ r_esp -= 4; W32(r_esp, 0x803607u); f_008047b4();
    /* 00803607: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0080360c: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00803612: mov ebp, dword ptr [0xaf0374] */ r_ebp = R32((u32)(0xaf0374u));
    /* 00803618: mov esi, dword ptr [0xaf0378] */ r_esi = R32((u32)(0xaf0378u));
    /* 0080361e: mov edi, dword ptr [0xaf037c] */ r_edi = R32((u32)(0xaf037cu));
    /* 00803624: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00803629: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 0080362f: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00803635: mov dword ptr [0xaab50c], ebp */ W32((u32)(0xaab50cu), r_ebp);
    /* 0080363b: mov dword ptr [0xaab510], esi */ W32((u32)(0xaab510u), r_esi);
    /* 00803641: mov dword ptr [0xaab514], edi */ W32((u32)(0xaab514u), r_edi);
    /* 00803647: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0080364d: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00803653: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00803659: push 0x900 */ { u32 v = 0x900u; r_esp -= 4; W32(r_esp, v); }
    /* 0080365e: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00803663: mov edx, dword ptr [ebx + 0x194] */ r_edx = R32((u32)(r_ebx+0x194u));
    /* 00803669: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080366b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00803670: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x803675u); f_0082d6fc();
    /* 00803675: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00803678: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 0080367d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00803680: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803682: je 0x80368e */ if (fZ) goto L_0080368e;
L_00803684:; BB(0x00803684);
    /* 00803684: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x803689u); f_00829cc8();
    /* 00803689: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
L_0080368e:; BB(0x0080368e);
    /* 0080368e: mov edx, dword ptr [0xa11450] */ r_edx = R32((u32)(0xa11450u));
    /* 00803694: mov ebp, dword ptr [0xa11454] */ r_ebp = R32((u32)(0xa11454u));
    /* 0080369a: mov esi, dword ptr [0xa11458] */ r_esi = R32((u32)(0xa11458u));
    /* 008036a0: mov edi, dword ptr [0xa1145c] */ r_edi = R32((u32)(0xa1145cu));
    /* 008036a6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008036aa: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 008036ae: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008036b2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008036b4: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 008036b8: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008036ba: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008036bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008036bf: jle 0x803756 */ if ((fZ||fS!=fO)) goto L_00803756;
L_008036c5:; BB(0x008036c5);
    /* 008036c5: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 008036c9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008036cc: jne 0x803748 */ if (!fZ) goto L_00803748;
L_008036ce:; BB(0x008036ce);
    /* 008036ce: fld dword ptr [0x97ec9c] */ FPUSH(R_F32((u32)(0x97ec9cu)));
    /* 008036d4: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 008036d7: fst dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0));
    /* 008036da: fld dword ptr [ebx + 0x1a0] */ FPUSH(R_F32((u32)(r_ebx+0x1a0u)));
    /* 008036e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008036e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008036e4: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 008036e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008036e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008036eb: jb 0x8036ef */ if (fC) goto L_008036ef;
L_008036ed:; BB(0x008036ed);
    /* 008036ed: fst st(1) */ ST(1) = ST(0);
L_008036ef:; BB(0x008036ef);
    /* 008036ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008036f1: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 008036f5: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 008036f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008036f9: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8036feu); f_0082d710();
    /* 008036fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008036ff: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803704u); f_0082d7b0();
    /* 00803704: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00803707: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080370a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080370c: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080370f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x803714u); f_00830b74();
    /* 00803714: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803717: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080371a: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0080371d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080371f: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x803724u); f_0082df5c();
    /* 00803724: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00803727: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080372a: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x80372fu); f_0082e6b0();
    /* 0080372f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803730: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x803735u); f_0082da80();
    /* 00803735: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080373a: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x80373fu); f_0082d710();
    /* 0080373f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803740: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00803745: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_00803748:; BB(0x00803748);
    /* 00803748: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080374b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080374e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803750: jl 0x8036c5 */ if ((fS!=fO)) goto L_008036c5;
L_00803756:; BB(0x00803756);
    /* 00803756: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 0080375c: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00803762: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 00803768: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 0080376e: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00803774: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00803779: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 0080377d: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00803783: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 00803789: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 0080378f: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 00803795: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 0080379b: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 008037a1: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 008037a7: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 008037ac: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 008037b2: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 008037b8: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 008037be: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 008037c2: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008037c8: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 008037ce: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 008037d4: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 008037da: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 008037df: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 008037e4: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008037e9: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x8037eeu); f_0082d6fc();
    /* 008037ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008037f1: mov esi, 0xaaf060 */ r_esi = 0xaaf060u;
    /* 008037f6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_008037f8:; BB(0x008037f8);
    /* 008037f8: cmp ebp, dword ptr [0xaafbd4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaafbd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008037fe: jge 0x8040f0 */ if ((fS==fO)) goto L_008040f0;
L_00803804:; BB(0x00803804);
    /* 00803804: fld dword ptr [0x97ecb8] */ FPUSH(R_F32((u32)(0x97ecb8u)));
    /* 0080380a: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0080380d: mov edx, eax */ r_edx = r_eax;
    /* 0080380f: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00803812: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00803816: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 0080381a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080381d: fadd dword ptr [edx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97eb18u));
    /* 00803824: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803826: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0080382a: mov ecx, eax */ r_ecx = r_eax;
    /* 0080382c: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080382f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00803832: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00803836: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 0080383a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080383d: fadd dword ptr [ecx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x97eb18u));
    /* 00803844: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803846: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0080384a: mov edi, eax */ r_edi = r_eax;
    /* 0080384c: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080384f: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00803855: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00803859: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 0080385d: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00803860: fadd dword ptr [edi*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x97eb18u));
    /* 00803867: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803869: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0080386d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00803870: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00803874: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803878: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080387b: fadd dword ptr [eax*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97eb18u));
    /* 00803882: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00803884: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00803888: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0080388c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080388d: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803892u); f_0082d710();
    /* 00803892: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803893: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803898u); f_0082d7b0();
    /* 00803898: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080389b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080389d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080389f: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008038a1: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x8038a6u); f_00830b74();
    /* 008038a6: movzx edx, word ptr [esi + 0xc] */ r_edx = (u32)R16((u32)(r_esi+0xcu));
    /* 008038aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008038ac: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8038b1u); f_0082d8bc();
    /* 008038b1: movsx eax, word ptr [esi + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 008038b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008038b7: je 0x8040b7 */ if (fZ) goto L_008040b7;
L_008038bd:; BB(0x008038bd);
    /* 008038bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008038c0: je 0x80408a */ if (fZ) goto L_0080408a;
L_008038c6:; BB(0x008038c6);
    /* 008038c6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008038c9: je 0x803905 */ if (fZ) goto L_00803905;
L_008038cb:; BB(0x008038cb);
    /* 008038cb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008038ce: jne 0x803950 */ if (!fZ) goto L_00803950;
L_008038d4:; BB(0x008038d4);
    /* 008038d4: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008038d7: fcomp dword ptr [0x97ecb4] */ fx_compare(ST(0), R_F32((u32)(0x97ecb4u))); FPOP();
    /* 008038dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008038df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008038e0: je 0x80469e */ if (fZ) goto L_0080469e;
L_008038e6:; BB(0x008038e6);
    /* 008038e6: mov eax, 0x418c0000 */ r_eax = 0x418c0000u;
L_008038eb:; BB(0x008038eb);
    /* 008038eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008038ec: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008038f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008038f3: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 008038f8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8038fdu); f_0082fa0c();
    /* 008038fd: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 00803903: jmp 0x803945 */ goto L_00803945;
L_00803905:; BB(0x00803905);
    /* 00803905: mov eax, dword ptr [ebx + 0x16c] */ r_eax = R32((u32)(r_ebx+0x16cu));
    /* 0080390b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080390d: jl 0x803927 */ if ((fS!=fO)) goto L_00803927;
L_0080390f:; BB(0x0080390f);
    /* 0080390f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803912: jg 0x80467f */ if ((!fZ&&fS==fO)) goto L_0080467f;
L_00803918:; BB(0x00803918);
    /* 00803918: fld dword ptr [0x97eccc] */ FPUSH(R_F32((u32)(0x97ecccu)));
    /* 0080391e: mov dword ptr [esi + 8], 0x41b00000 */ W32((u32)(r_esi+0x8u), 0x41b00000u);
    /* 00803925: jmp 0x80392a */ goto L_0080392a;
L_00803927:; BB(0x00803927);
    /* 00803927: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
L_0080392a:; BB(0x0080392a);
    /* 0080392a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080392d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00803930: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00803934: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00803938: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080393a: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x80393fu); f_0082fa0c();
    /* 0080393f: mov eax, dword ptr [ebx + 0x178] */ r_eax = R32((u32)(r_ebx+0x178u));
L_00803945:; BB(0x00803945);
    /* 00803945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803947: je 0x803950 */ if (fZ) goto L_00803950;
L_00803949:; BB(0x00803949);
    /* 00803949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080394a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x80394fu); f_0082e1e8();
    /* 0080394f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00803950:; BB(0x00803950);
    /* 00803950: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x803955u); f_0082da80();
    /* 00803955: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00803958: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080395b: jmp 0x8037f8 */ goto L_008037f8;
L_00803960:; BB(0x00803960);
    /* 00803960: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803963: je 0x803979 */ if (fZ) goto L_00803979;
L_00803965:; BB(0x00803965);
    /* 00803965: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00803967: mov dword ptr [0xaafbd8], eax */ W32((u32)(0xaafbd8u), r_eax);
    /* 0080396c: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 00803971: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00803974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00803975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00803976: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00803977: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00803978: ret  */ FN_RET(0x008034e4); r_esp += 4; return;
L_00803979:; BB(0x00803979);
    /* 00803979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080397a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080397c: call 0x8046b0 */ r_esp -= 4; W32(r_esp, 0x803981u); f_008046b0();
    /* 00803981: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00803989: call 0x8047b4 */ r_esp -= 4; W32(r_esp, 0x80398eu); f_008047b4();
    /* 0080398e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00803993: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00803999: mov ebp, dword ptr [0xaf0374] */ r_ebp = R32((u32)(0xaf0374u));
    /* 0080399f: mov esi, dword ptr [0xaf0378] */ r_esi = R32((u32)(0xaf0378u));
    /* 008039a5: mov edi, dword ptr [0xaf037c] */ r_edi = R32((u32)(0xaf037cu));
    /* 008039ab: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 008039b0: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 008039b6: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 008039bc: mov dword ptr [0xaab50c], ebp */ W32((u32)(0xaab50cu), r_ebp);
    /* 008039c2: mov dword ptr [0xaab510], esi */ W32((u32)(0xaab510u), r_esi);
    /* 008039c8: mov dword ptr [0xaab514], edi */ W32((u32)(0xaab514u), r_edi);
    /* 008039ce: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 008039d4: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 008039da: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 008039e0: push 0x900 */ { u32 v = 0x900u; r_esp -= 4; W32(r_esp, v); }
    /* 008039e5: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008039ea: mov edx, dword ptr [ebx + 0x194] */ r_edx = R32((u32)(r_ebx+0x194u));
    /* 008039f0: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008039f2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 008039f7: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x8039fcu); f_0082d6fc();
    /* 008039fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008039ff: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00803a04: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00803a07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803a09: je 0x803a15 */ if (fZ) goto L_00803a15;
L_00803a0b:; BB(0x00803a0b);
    /* 00803a0b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x803a10u); f_00829cc8();
    /* 00803a10: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
L_00803a15:; BB(0x00803a15);
    /* 00803a15: mov edx, dword ptr [0xa11450] */ r_edx = R32((u32)(0xa11450u));
    /* 00803a1b: mov ebp, dword ptr [0xa11454] */ r_ebp = R32((u32)(0xa11454u));
    /* 00803a21: mov esi, dword ptr [0xa11458] */ r_esi = R32((u32)(0xa11458u));
    /* 00803a27: mov edi, dword ptr [0xa1145c] */ r_edi = R32((u32)(0xa1145cu));
    /* 00803a2d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00803a30: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00803a34: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00803a38: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00803a3a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00803a3e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00803a40: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00803a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00803a45: jle 0x803ada */ if ((fZ||fS!=fO)) goto L_00803ada;
L_00803a4b:; BB(0x00803a4b);
    /* 00803a4b: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 00803a4f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00803a52: jne 0x803acc */ if (!fZ) goto L_00803acc;
L_00803a54:; BB(0x00803a54);
    /* 00803a54: fld dword ptr [0x97ec9c] */ FPUSH(R_F32((u32)(0x97ec9cu)));
    /* 00803a5a: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 00803a5d: fst dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0));
    /* 00803a60: fld dword ptr [ebx + 0x1a0] */ FPUSH(R_F32((u32)(r_ebx+0x1a0u)));
    /* 00803a66: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00803a68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00803a6a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00803a6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00803a6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00803a70: jb 0x803a74 */ if (fC) goto L_00803a74;
L_00803a72:; BB(0x00803a72);
    /* 00803a72: fst st(1) */ ST(1) = ST(0);
L_00803a74:; BB(0x00803a74);
    /* 00803a74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00803a76: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00803a79: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 00803a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00803a7d: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803a82u); f_0082d710();
    /* 00803a82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803a83: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803a88u); f_0082d7b0();
    /* 00803a88: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00803a8b: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803a8e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803a90: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803a93: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x803a98u); f_00830b74();
    /* 00803a98: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803a9b: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803a9e: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00803aa1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803aa3: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x803aa8u); f_0082df5c();
    /* 00803aa8: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00803aab: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803aae: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x803ab3u); f_0082e6b0();
    /* 00803ab3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803ab4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x803ab9u); f_0082da80();
    /* 00803ab9: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00803abe: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803ac3u); f_0082d710();
    /* 00803ac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803ac4: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00803ac9: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_00803acc:; BB(0x00803acc);
    /* 00803acc: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00803acf: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00803ad2: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803ad4: jl 0x803a4b */ if ((fS!=fO)) goto L_00803a4b;
L_00803ada:; BB(0x00803ada);
    /* 00803ada: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00803ae0: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00803ae6: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 00803aec: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00803af2: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00803af8: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00803afd: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 00803b01: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00803b07: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 00803b0d: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 00803b13: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 00803b19: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 00803b1f: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00803b25: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 00803b2b: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00803b30: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00803b36: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 00803b3c: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00803b42: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 00803b46: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00803b4c: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 00803b52: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 00803b58: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 00803b5e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00803b63: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00803b68: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00803b6d: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x803b72u); f_0082d6fc();
    /* 00803b72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00803b75: mov esi, 0xaaf060 */ r_esi = 0xaaf060u;
    /* 00803b7a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00803b7c:; BB(0x00803b7c);
    /* 00803b7c: cmp ebp, dword ptr [0xaafbd4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaafbd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803b82: jge 0x8042f2 */ if ((fS==fO)) goto L_008042f2;
L_00803b88:; BB(0x00803b88);
    /* 00803b88: fld dword ptr [0x97ecb8] */ FPUSH(R_F32((u32)(0x97ecb8u)));
    /* 00803b8e: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00803b91: mov edx, eax */ r_edx = r_eax;
    /* 00803b93: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00803b96: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00803b9a: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803b9e: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00803ba1: fadd dword ptr [edx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97eb18u));
    /* 00803ba8: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803baa: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00803bae: mov ecx, eax */ r_ecx = r_eax;
    /* 00803bb0: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00803bb3: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00803bb6: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00803bba: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803bbe: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00803bc1: fadd dword ptr [ecx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x97eb18u));
    /* 00803bc8: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803bca: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00803bce: mov edi, eax */ r_edi = r_eax;
    /* 00803bd0: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00803bd3: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00803bd9: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00803bdd: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803be1: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00803be4: fadd dword ptr [edi*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x97eb18u));
    /* 00803beb: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803bed: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00803bf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00803bf4: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00803bf8: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803bfc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00803bff: fadd dword ptr [eax*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97eb18u));
    /* 00803c06: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00803c08: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00803c0c: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00803c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00803c11: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803c16u); f_0082d710();
    /* 00803c16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803c17: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803c1cu); f_0082d7b0();
    /* 00803c1c: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803c1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00803c21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803c23: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00803c25: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x803c2au); f_00830b74();
    /* 00803c2a: movzx edx, word ptr [esi + 0xc] */ r_edx = (u32)R16((u32)(r_esi+0xcu));
    /* 00803c2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803c30: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x803c35u); f_0082d8bc();
    /* 00803c35: movsx eax, word ptr [esi + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 00803c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803c3b: je 0x8042b9 */ if (fZ) goto L_008042b9;
L_00803c41:; BB(0x00803c41);
    /* 00803c41: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803c44: je 0x80428c */ if (fZ) goto L_0080428c;
L_00803c4a:; BB(0x00803c4a);
    /* 00803c4a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803c4d: je 0x803c89 */ if (fZ) goto L_00803c89;
L_00803c4f:; BB(0x00803c4f);
    /* 00803c4f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803c52: jne 0x803ce9 */ if (!fZ) goto L_00803ce9;
L_00803c58:; BB(0x00803c58);
    /* 00803c58: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00803c5b: fcomp dword ptr [0x97ecb4] */ fx_compare(ST(0), R_F32((u32)(0x97ecb4u))); FPOP();
    /* 00803c61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00803c63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00803c64: je 0x804282 */ if (fZ) goto L_00804282;
L_00803c6a:; BB(0x00803c6a);
    /* 00803c6a: mov eax, 0x418c0000 */ r_eax = 0x418c0000u;
L_00803c6f:; BB(0x00803c6f);
    /* 00803c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00803c70: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00803c75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803c77: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00803c7c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x803c81u); f_0082fa0c();
    /* 00803c81: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 00803c87: jmp 0x803cde */ goto L_00803cde;
L_00803c89:; BB(0x00803c89);
    /* 00803c89: mov eax, dword ptr [ebx + 0x16c] */ r_eax = R32((u32)(r_ebx+0x16cu));
    /* 00803c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00803c91: jl 0x803cc0 */ if ((fS!=fO)) goto L_00803cc0;
L_00803c93:; BB(0x00803c93);
    /* 00803c93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803c96: jg 0x803ca7 */ if ((!fZ&&fS==fO)) goto L_00803ca7;
L_00803c98:; BB(0x00803c98);
    /* 00803c98: fld dword ptr [0x97eccc] */ FPUSH(R_F32((u32)(0x97ecccu)));
    /* 00803c9e: mov dword ptr [esi + 8], 0x41b00000 */ W32((u32)(r_esi+0x8u), 0x41b00000u);
    /* 00803ca5: jmp 0x803cc3 */ goto L_00803cc3;
L_00803ca7:; BB(0x00803ca7);
    /* 00803ca7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803caa: jne 0x803cbb */ if (!fZ) goto L_00803cbb;
L_00803cac:; BB(0x00803cac);
    /* 00803cac: fld dword ptr [0x97eca0] */ FPUSH(R_F32((u32)(0x97eca0u)));
    /* 00803cb2: mov dword ptr [esi + 8], 0x41766666 */ W32((u32)(r_esi+0x8u), 0x41766666u);
    /* 00803cb9: jmp 0x803cc3 */ goto L_00803cc3;
L_00803cbb:; BB(0x00803cbb);
    /* 00803cbb: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00803cbe: jmp 0x803cc3 */ goto L_00803cc3;
L_00803cc0:; BB(0x00803cc0);
    /* 00803cc0: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
L_00803cc3:; BB(0x00803cc3);
    /* 00803cc3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00803cc6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00803cc9: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00803ccd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00803cd1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803cd3: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x803cd8u); f_0082fa0c();
    /* 00803cd8: mov eax, dword ptr [ebx + 0x178] */ r_eax = R32((u32)(r_ebx+0x178u));
L_00803cde:; BB(0x00803cde);
    /* 00803cde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803ce0: je 0x803ce9 */ if (fZ) goto L_00803ce9;
L_00803ce2:; BB(0x00803ce2);
    /* 00803ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00803ce3: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x803ce8u); f_0082e1e8();
    /* 00803ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00803ce9:; BB(0x00803ce9);
    /* 00803ce9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x803ceeu); f_0082da80();
    /* 00803cee: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00803cf1: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00803cf4: jmp 0x803b7c */ goto L_00803b7c;
L_00803cf9:; BB(0x00803cf9);
    /* 00803cf9: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x803cfeu); f_004d28a4();
    /* 00803cfe: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803d04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00803d06: call 0x8046b0 */ r_esp -= 4; W32(r_esp, 0x803d0bu); f_008046b0();
    /* 00803d0b: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x803d10u); f_004d2968();
    /* 00803d10: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803d16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00803d18: call 0x8047b4 */ r_esp -= 4; W32(r_esp, 0x803d1du); f_008047b4();
    /* 00803d1d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00803d22: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00803d28: mov ebp, dword ptr [0xaf0374] */ r_ebp = R32((u32)(0xaf0374u));
    /* 00803d2e: mov esi, dword ptr [0xaf0378] */ r_esi = R32((u32)(0xaf0378u));
    /* 00803d34: mov edi, dword ptr [0xaf037c] */ r_edi = R32((u32)(0xaf037cu));
    /* 00803d3a: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00803d3f: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00803d45: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00803d4b: mov dword ptr [0xaab50c], ebp */ W32((u32)(0xaab50cu), r_ebp);
    /* 00803d51: mov dword ptr [0xaab510], esi */ W32((u32)(0xaab510u), r_esi);
    /* 00803d57: mov dword ptr [0xaab514], edi */ W32((u32)(0xaab514u), r_edi);
    /* 00803d5d: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00803d63: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00803d69: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00803d6f: push 0x900 */ { u32 v = 0x900u; r_esp -= 4; W32(r_esp, v); }
    /* 00803d74: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00803d79: mov edx, dword ptr [ebx + 0x194] */ r_edx = R32((u32)(r_ebx+0x194u));
    /* 00803d7f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00803d81: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00803d86: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x803d8bu); f_0082d6fc();
    /* 00803d8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00803d8e: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00803d93: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00803d96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803d98: je 0x803da4 */ if (fZ) goto L_00803da4;
L_00803d9a:; BB(0x00803d9a);
    /* 00803d9a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x803d9fu); f_00829cc8();
    /* 00803d9f: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
L_00803da4:; BB(0x00803da4);
    /* 00803da4: mov edx, dword ptr [0xa11450] */ r_edx = R32((u32)(0xa11450u));
    /* 00803daa: mov ebp, dword ptr [0xa11454] */ r_ebp = R32((u32)(0xa11454u));
    /* 00803db0: mov esi, dword ptr [0xa11458] */ r_esi = R32((u32)(0xa11458u));
    /* 00803db6: mov edi, dword ptr [0xa1145c] */ r_edi = R32((u32)(0xa1145cu));
    /* 00803dbc: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00803dc0: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00803dc4: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00803dc8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00803dca: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00803dce: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00803dd0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00803dd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00803dd5: jle 0x803e6c */ if ((fZ||fS!=fO)) goto L_00803e6c;
L_00803ddb:; BB(0x00803ddb);
    /* 00803ddb: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 00803ddf: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00803de2: jne 0x803e5e */ if (!fZ) goto L_00803e5e;
L_00803de4:; BB(0x00803de4);
    /* 00803de4: fld dword ptr [0x97ec9c] */ FPUSH(R_F32((u32)(0x97ec9cu)));
    /* 00803dea: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 00803ded: fst dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0));
    /* 00803df0: fld dword ptr [ebx + 0x1a0] */ FPUSH(R_F32((u32)(r_ebx+0x1a0u)));
    /* 00803df6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00803df8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00803dfa: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00803dfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00803dff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00803e01: jb 0x803e05 */ if (fC) goto L_00803e05;
L_00803e03:; BB(0x00803e03);
    /* 00803e03: fst st(1) */ ST(1) = ST(0);
L_00803e05:; BB(0x00803e05);
    /* 00803e05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00803e07: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00803e0b: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 00803e0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00803e0f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803e14u); f_0082d710();
    /* 00803e14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803e15: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803e1au); f_0082d7b0();
    /* 00803e1a: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e1d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803e22: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e25: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x803e2au); f_00830b74();
    /* 00803e2a: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e2d: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e30: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00803e33: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803e35: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x803e3au); f_0082df5c();
    /* 00803e3a: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00803e3d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803e40: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x803e45u); f_0082e6b0();
    /* 00803e45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803e46: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x803e4bu); f_0082da80();
    /* 00803e4b: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00803e50: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803e55u); f_0082d710();
    /* 00803e55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803e56: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00803e5b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_00803e5e:; BB(0x00803e5e);
    /* 00803e5e: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00803e61: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00803e64: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803e66: jl 0x803ddb */ if ((fS!=fO)) goto L_00803ddb;
L_00803e6c:; BB(0x00803e6c);
    /* 00803e6c: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00803e72: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00803e78: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 00803e7e: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00803e84: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00803e8a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00803e8f: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 00803e93: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00803e99: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 00803e9f: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 00803ea5: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 00803eab: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 00803eb1: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00803eb7: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 00803ebd: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00803ec2: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00803ec8: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 00803ece: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00803ed4: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 00803ed8: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00803ede: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 00803ee4: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 00803eea: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 00803ef0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00803ef5: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00803efa: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00803eff: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x803f04u); f_0082d6fc();
    /* 00803f04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00803f07: mov esi, 0xaaf060 */ r_esi = 0xaaf060u;
    /* 00803f0c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00803f0e:; BB(0x00803f0e);
    /* 00803f0e: cmp ebp, dword ptr [0xaafbd4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaafbd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00803f14: jge 0x8044f2 */ if ((fS==fO)) goto L_008044f2;
L_00803f1a:; BB(0x00803f1a);
    /* 00803f1a: fld dword ptr [0x97ecb8] */ FPUSH(R_F32((u32)(0x97ecb8u)));
    /* 00803f20: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00803f23: mov edx, eax */ r_edx = r_eax;
    /* 00803f25: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00803f28: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00803f2c: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803f30: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00803f33: fadd dword ptr [edx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97eb18u));
    /* 00803f3a: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803f3c: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00803f40: mov ecx, eax */ r_ecx = r_eax;
    /* 00803f42: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00803f45: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00803f48: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00803f4c: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803f50: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00803f53: fadd dword ptr [ecx*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x97eb18u));
    /* 00803f5a: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803f5c: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00803f60: mov edi, eax */ r_edi = r_eax;
    /* 00803f62: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00803f65: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00803f6b: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00803f6f: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803f73: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00803f76: fadd dword ptr [edi*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x97eb18u));
    /* 00803f7d: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00803f7f: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00803f83: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00803f86: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00803f8a: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00803f8e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00803f91: fadd dword ptr [eax*4 + 0x97eb18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97eb18u));
    /* 00803f98: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00803f9a: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00803f9e: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00803fa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00803fa3: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x803fa8u); f_0082d710();
    /* 00803fa8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00803fa9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x803faeu); f_0082d7b0();
    /* 00803fae: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00803fb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00803fb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803fb5: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00803fb7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x803fbcu); f_00830b74();
    /* 00803fbc: movzx edx, word ptr [esi + 0xc] */ r_edx = (u32)R16((u32)(r_esi+0xcu));
    /* 00803fc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00803fc2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x803fc7u); f_0082d8bc();
    /* 00803fc7: movsx eax, word ptr [esi + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xeu));
    /* 00803fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803fcd: je 0x8044b9 */ if (fZ) goto L_008044b9;
L_00803fd3:; BB(0x00803fd3);
    /* 00803fd3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803fd6: je 0x80448c */ if (fZ) goto L_0080448c;
L_00803fdc:; BB(0x00803fdc);
    /* 00803fdc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803fdf: je 0x80401b */ if (fZ) goto L_0080401b;
L_00803fe1:; BB(0x00803fe1);
    /* 00803fe1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803fe4: jne 0x804066 */ if (!fZ) goto L_00804066;
L_00803fea:; BB(0x00803fea);
    /* 00803fea: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00803fed: fcomp dword ptr [0x97ecb4] */ fx_compare(ST(0), R_F32((u32)(0x97ecb4u))); FPOP();
    /* 00803ff3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00803ff5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00803ff6: je 0x804463 */ if (fZ) goto L_00804463;
L_00803ffc:; BB(0x00803ffc);
    /* 00803ffc: mov eax, 0x418c0000 */ r_eax = 0x418c0000u;
L_00804001:; BB(0x00804001);
    /* 00804001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804002: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00804007: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804009: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080400e: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x804013u); f_0082fa0c();
    /* 00804013: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 00804019: jmp 0x80405b */ goto L_0080405b;
L_0080401b:; BB(0x0080401b);
    /* 0080401b: mov eax, dword ptr [ebx + 0x16c] */ r_eax = R32((u32)(r_ebx+0x16cu));
    /* 00804021: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00804023: jl 0x80403d */ if ((fS!=fO)) goto L_0080403d;
L_00804025:; BB(0x00804025);
    /* 00804025: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00804028: jg 0x80446d */ if ((!fZ&&fS==fO)) goto L_0080446d;
L_0080402e:; BB(0x0080402e);
    /* 0080402e: fld dword ptr [0x97eccc] */ FPUSH(R_F32((u32)(0x97ecccu)));
    /* 00804034: mov dword ptr [esi + 8], 0x41b00000 */ W32((u32)(r_esi+0x8u), 0x41b00000u);
    /* 0080403b: jmp 0x804040 */ goto L_00804040;
L_0080403d:; BB(0x0080403d);
    /* 0080403d: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
L_00804040:; BB(0x00804040);
    /* 00804040: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804043: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00804046: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0080404a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0080404e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00804050: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x804055u); f_0082fa0c();
    /* 00804055: mov eax, dword ptr [ebx + 0x178] */ r_eax = R32((u32)(r_ebx+0x178u));
L_0080405b:; BB(0x0080405b);
    /* 0080405b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080405d: je 0x804066 */ if (fZ) goto L_00804066;
L_0080405f:; BB(0x0080405f);
    /* 0080405f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00804060: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x804065u); f_0082e1e8();
    /* 00804065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00804066:; BB(0x00804066);
    /* 00804066: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x80406bu); f_0082da80();
    /* 0080406b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080406e: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00804071: jmp 0x803f0e */ goto L_00803f0e;
L_00804076:; BB(0x00804076);
    /* 00804076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00804078: mov dword ptr [0xaafbd8], eax */ W32((u32)(0xaafbd8u), r_eax);
    /* 0080407d: mov dword ptr [0xaafbd4], eax */ W32((u32)(0xaafbd4u), r_eax);
    /* 00804082: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00804085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00804086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00804087: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00804088: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00804089: ret  */ FN_RET(0x008034e4); r_esp += 4; return;
L_0080408a:; BB(0x0080408a);
    /* 0080408a: fld dword ptr [0x97ec98] */ FPUSH(R_F32((u32)(0x97ec98u)));
    /* 00804090: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00804093: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804096: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00804099: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0080409d: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008040a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008040a7: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8040acu); f_0082fa0c();
    /* 008040ac: mov eax, dword ptr [ebx + 0x17c] */ r_eax = R32((u32)(r_ebx+0x17cu));
    /* 008040b2: jmp 0x803945 */ goto L_00803945;
L_008040b7:; BB(0x008040b7);
    /* 008040b7: fld dword ptr [0x97ec90] */ FPUSH(R_F32((u32)(0x97ec90u)));
    /* 008040bd: fld dword ptr [0x97ec94] */ FPUSH(R_F32((u32)(0x97ec94u)));
    /* 008040c3: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008040c6: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008040c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008040ca: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008040cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008040cf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008040d2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008040d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008040d8: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008040e0: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8040e5u); f_0082fa0c();
    /* 008040e5: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 008040eb: jmp 0x803945 */ goto L_00803945;
L_008040f0:; BB(0x008040f0);
    /* 008040f0: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008040f5: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8040fau); f_0082d710();
    /* 008040fa: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00804100: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00804106: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 0080410c: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00804112: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00804118: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0080411d: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 00804121: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00804127: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 0080412d: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 00804133: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 00804139: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 0080413f: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00804145: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 0080414b: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00804150: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00804156: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 0080415c: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00804162: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00804166: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080416c: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 00804172: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 00804178: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 0080417e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804183: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00804188: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080418d: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x804192u); f_0082d6fc();
    /* 00804192: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804195: lea esi, [ebx + 0x94] */ r_esi = (u32)(r_ebx+0x94u);
    /* 0080419b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0080419d:; BB(0x0080419d);
    /* 0080419d: movsx eax, word ptr [esi + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 008041a1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008041a4: je 0x8041f6 */ if (fZ) goto L_008041f6;
L_008041a6:; BB(0x008041a6);
    /* 008041a6: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008041a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008041aa: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8041afu); f_0082d710();
    /* 008041af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008041b0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8041b5u); f_0082d7b0();
    /* 008041b5: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008041b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008041ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008041bc: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008041be: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x8041c3u); f_00830b74();
    /* 008041c3: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008041c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008041c8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8041cdu); f_0082d8bc();
    /* 008041cd: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008041d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008041d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008041d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008041d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008041d5: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8041dau); f_0082fa0c();
    /* 008041da: push dword ptr [ebx + 0x178] */ { u32 v = R32((u32)(r_ebx+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 008041e0: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x8041e5u); f_0082e1e8();
    /* 008041e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008041e6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8041ebu); f_0082da80();
    /* 008041eb: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008041f0: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8041f5u); f_0082d710();
    /* 008041f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008041f6:; BB(0x008041f6);
    /* 008041f6: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008041f9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008041fc: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008041ff: jl 0x80419d */ if ((fS!=fO)) goto L_0080419d;
L_00804201:; BB(0x00804201);
    /* 00804201: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804207: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0080420c: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00804212: mov ebp, dword ptr [0xaab508] */ r_ebp = R32((u32)(0xaab508u));
    /* 00804218: mov esi, dword ptr [0xaab50c] */ r_esi = R32((u32)(0xaab50cu));
    /* 0080421e: mov edi, dword ptr [0xaab510] */ r_edi = R32((u32)(0xaab510u));
    /* 00804224: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00804229: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 0080422e: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00804234: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00804236: mov dword ptr [0xaf0370], ebp */ W32((u32)(0xaf0370u), r_ebp);
    /* 0080423c: mov dword ptr [0xaf0374], esi */ W32((u32)(0xaf0374u), r_esi);
    /* 00804242: mov dword ptr [0xaf0378], edi */ W32((u32)(0xaf0378u), r_edi);
    /* 00804248: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0080424d: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00804252: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804257: call 0x804a84 */ r_esp -= 4; W32(r_esp, 0x80425cu); f_00804a84();
    /* 0080425c: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x804261u); f_004d28a4();
    /* 00804261: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804267: mov dword ptr [ebx + 0x174], 0 */ W32((u32)(r_ebx+0x174u), 0x0u);
    /* 00804271: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00804273: call 0x804b24 */ r_esp -= 4; W32(r_esp, 0x804278u); f_00804b24();
    /* 00804278: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x80427du); f_004d2968();
    /* 0080427d: jmp 0x803965 */ goto L_00803965;
L_00804282:; BB(0x00804282);
    /* 00804282: mov eax, 0x41600000 */ r_eax = 0x41600000u;
    /* 00804287: jmp 0x803c6f */ goto L_00803c6f;
L_0080428c:; BB(0x0080428c);
    /* 0080428c: fld dword ptr [0x97ec98] */ FPUSH(R_F32((u32)(0x97ec98u)));
    /* 00804292: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00804295: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804298: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0080429b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0080429f: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008042a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008042a9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8042aeu); f_0082fa0c();
    /* 008042ae: mov eax, dword ptr [ebx + 0x17c] */ r_eax = R32((u32)(r_ebx+0x17cu));
    /* 008042b4: jmp 0x803cde */ goto L_00803cde;
L_008042b9:; BB(0x008042b9);
    /* 008042b9: fld dword ptr [0x97ec90] */ FPUSH(R_F32((u32)(0x97ec90u)));
    /* 008042bf: fld dword ptr [0x97ec94] */ FPUSH(R_F32((u32)(0x97ec94u)));
    /* 008042c5: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008042c8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008042ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008042cc: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008042cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008042d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008042d4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008042d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008042da: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008042e2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8042e7u); f_0082fa0c();
    /* 008042e7: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 008042ed: jmp 0x803cde */ goto L_00803cde;
L_008042f2:; BB(0x008042f2);
    /* 008042f2: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008042f7: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8042fcu); f_0082d710();
    /* 008042fc: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00804302: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00804308: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 0080430e: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00804314: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 0080431a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0080431f: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 00804323: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00804329: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 0080432f: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 00804335: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 0080433b: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 00804341: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00804347: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 0080434d: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00804352: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00804358: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 0080435e: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00804364: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00804368: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080436e: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 00804374: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 0080437a: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 00804380: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804385: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080438a: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080438f: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x804394u); f_0082d6fc();
    /* 00804394: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804397: lea esi, [ebx + 0x94] */ r_esi = (u32)(r_ebx+0x94u);
    /* 0080439d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0080439f:; BB(0x0080439f);
    /* 0080439f: movsx eax, word ptr [esi + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 008043a3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008043a6: je 0x8043f8 */ if (fZ) goto L_008043f8;
L_008043a8:; BB(0x008043a8);
    /* 008043a8: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008043ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008043ac: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8043b1u); f_0082d710();
    /* 008043b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008043b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8043b7u); f_0082d7b0();
    /* 008043b7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008043ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008043bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008043be: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008043c0: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x8043c5u); f_00830b74();
    /* 008043c5: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008043c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008043ca: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8043cfu); f_0082d8bc();
    /* 008043cf: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008043d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008043d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008043d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008043d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008043d7: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8043dcu); f_0082fa0c();
    /* 008043dc: push dword ptr [ebx + 0x178] */ { u32 v = R32((u32)(r_ebx+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 008043e2: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x8043e7u); f_0082e1e8();
    /* 008043e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008043e8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8043edu); f_0082da80();
    /* 008043ed: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008043f2: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8043f7u); f_0082d710();
    /* 008043f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008043f8:; BB(0x008043f8);
    /* 008043f8: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008043fb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008043fe: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00804401: jl 0x80439f */ if ((fS!=fO)) goto L_0080439f;
L_00804403:; BB(0x00804403);
    /* 00804403: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804409: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0080440e: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00804414: mov ebp, dword ptr [0xaab508] */ r_ebp = R32((u32)(0xaab508u));
    /* 0080441a: mov esi, dword ptr [0xaab50c] */ r_esi = R32((u32)(0xaab50cu));
    /* 00804420: mov edi, dword ptr [0xaab510] */ r_edi = R32((u32)(0xaab510u));
    /* 00804426: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0080442b: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00804430: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00804436: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00804438: mov dword ptr [0xaf0370], ebp */ W32((u32)(0xaf0370u), r_ebp);
    /* 0080443e: mov dword ptr [0xaf0374], esi */ W32((u32)(0xaf0374u), r_esi);
    /* 00804444: mov dword ptr [0xaf0378], edi */ W32((u32)(0xaf0378u), r_edi);
    /* 0080444a: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0080444f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00804454: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804459: call 0x804a84 */ r_esp -= 4; W32(r_esp, 0x80445eu); f_00804a84();
    /* 0080445e: jmp 0x803965 */ goto L_00803965;
L_00804463:; BB(0x00804463);
    /* 00804463: mov eax, 0x41600000 */ r_eax = 0x41600000u;
    /* 00804468: jmp 0x804001 */ goto L_00804001;
L_0080446d:; BB(0x0080446d);
    /* 0080446d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804470: jne 0x804484 */ if (!fZ) goto L_00804484;
L_00804472:; BB(0x00804472);
    /* 00804472: fld dword ptr [0x97eca0] */ FPUSH(R_F32((u32)(0x97eca0u)));
    /* 00804478: mov dword ptr [esi + 8], 0x41766666 */ W32((u32)(r_esi+0x8u), 0x41766666u);
    /* 0080447f: jmp 0x804040 */ goto L_00804040;
L_00804484:; BB(0x00804484);
    /* 00804484: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00804487: jmp 0x804040 */ goto L_00804040;
L_0080448c:; BB(0x0080448c);
    /* 0080448c: fld dword ptr [0x97ec98] */ FPUSH(R_F32((u32)(0x97ec98u)));
    /* 00804492: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00804495: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804498: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0080449b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0080449f: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008044a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008044a9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8044aeu); f_0082fa0c();
    /* 008044ae: mov eax, dword ptr [ebx + 0x17c] */ r_eax = R32((u32)(r_ebx+0x17cu));
    /* 008044b4: jmp 0x80405b */ goto L_0080405b;
L_008044b9:; BB(0x008044b9);
    /* 008044b9: fld dword ptr [0x97ec90] */ FPUSH(R_F32((u32)(0x97ec90u)));
    /* 008044bf: fld dword ptr [0x97ec94] */ FPUSH(R_F32((u32)(0x97ec94u)));
    /* 008044c5: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008044c8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008044ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008044cc: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008044cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008044d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008044d4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008044d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008044da: mov dword ptr [esp + 4], 0x41000000 */ W32((u32)(r_esp+0x4u), 0x41000000u);
    /* 008044e2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8044e7u); f_0082fa0c();
    /* 008044e7: mov eax, dword ptr [ebx + 0x180] */ r_eax = R32((u32)(r_ebx+0x180u));
    /* 008044ed: jmp 0x80405b */ goto L_0080405b;
L_008044f2:; BB(0x008044f2);
    /* 008044f2: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008044f7: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8044fcu); f_0082d710();
    /* 008044fc: mov esi, dword ptr [0xaab504] */ r_esi = R32((u32)(0xaab504u));
    /* 00804502: mov edi, dword ptr [0xaab500] */ r_edi = R32((u32)(0xaab500u));
    /* 00804508: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 0080450e: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 00804514: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 0080451a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0080451f: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 00804523: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 00804529: mov dword ptr [0xaf0360], esi */ W32((u32)(0xaf0360u), r_esi);
    /* 0080452f: mov dword ptr [0xaf0364], edi */ W32((u32)(0xaf0364u), r_edi);
    /* 00804535: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 0080453b: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 00804541: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 00804547: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 0080454d: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00804552: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00804558: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 0080455e: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00804564: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00804568: or eax, dword ptr [ebx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x194u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080456e: mov dword ptr [0xaab514], ebp */ W32((u32)(0xaab514u), r_ebp);
    /* 00804574: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 0080457a: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 00804580: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804585: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080458a: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080458f: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x804594u); f_0082d6fc();
    /* 00804594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00804597: lea esi, [ebx + 0x94] */ r_esi = (u32)(r_ebx+0x94u);
    /* 0080459d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0080459f:; BB(0x0080459f);
    /* 0080459f: movsx eax, word ptr [esi + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x16u));
    /* 008045a3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008045a6: je 0x8045f8 */ if (fZ) goto L_008045f8;
L_008045a8:; BB(0x008045a8);
    /* 008045a8: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008045ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008045ac: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8045b1u); f_0082d710();
    /* 008045b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008045b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8045b7u); f_0082d7b0();
    /* 008045b7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008045ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008045bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008045be: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008045c0: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x8045c5u); f_00830b74();
    /* 008045c5: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008045c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008045ca: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8045cfu); f_0082d8bc();
    /* 008045cf: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008045d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008045d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008045d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008045d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008045d7: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x8045dcu); f_0082fa0c();
    /* 008045dc: push dword ptr [ebx + 0x178] */ { u32 v = R32((u32)(r_ebx+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 008045e2: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x8045e7u); f_0082e1e8();
    /* 008045e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008045e8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8045edu); f_0082da80();
    /* 008045ed: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008045f2: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x8045f7u); f_0082d710();
    /* 008045f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008045f8:; BB(0x008045f8);
    /* 008045f8: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008045fb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008045fe: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00804601: jl 0x80459f */ if ((fS!=fO)) goto L_0080459f;
L_00804603:; BB(0x00804603);
    /* 00804603: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804609: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0080460e: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00804614: mov ebp, dword ptr [0xaab508] */ r_ebp = R32((u32)(0xaab508u));
    /* 0080461a: mov esi, dword ptr [0xaab50c] */ r_esi = R32((u32)(0xaab50cu));
    /* 00804620: mov edi, dword ptr [0xaab510] */ r_edi = R32((u32)(0xaab510u));
    /* 00804626: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0080462b: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00804630: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00804636: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00804638: mov dword ptr [0xaf0370], ebp */ W32((u32)(0xaf0370u), r_ebp);
    /* 0080463e: mov dword ptr [0xaf0374], esi */ W32((u32)(0xaf0374u), r_esi);
    /* 00804644: mov dword ptr [0xaf0378], edi */ W32((u32)(0xaf0378u), r_edi);
    /* 0080464a: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0080464f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00804654: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00804659: call 0x804a84 */ r_esp -= 4; W32(r_esp, 0x80465eu); f_00804a84();
    /* 0080465e: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00804664: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00804666: call 0x804b24 */ r_esp -= 4; W32(r_esp, 0x80466bu); f_00804b24();
    /* 0080466b: jmp 0x803965 */ goto L_00803965;
L_00804670:; BB(0x00804670);
    /* 00804670: mov dword ptr [ebx + 0x184], 0 */ W32((u32)(r_ebx+0x184u), 0x0u);
    /* 0080467a: jmp 0x804076 */ goto L_00804076;
L_0080467f:; BB(0x0080467f);
    /* 0080467f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00804682: jne 0x804696 */ if (!fZ) goto L_00804696;
L_00804684:; BB(0x00804684);
    /* 00804684: fld dword ptr [0x97eca0] */ FPUSH(R_F32((u32)(0x97eca0u)));
    /* 0080468a: mov dword ptr [esi + 8], 0x41766666 */ W32((u32)(r_esi+0x8u), 0x41766666u);
    /* 00804691: jmp 0x80392a */ goto L_0080392a;
L_00804696:; BB(0x00804696);
    /* 00804696: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00804699: jmp 0x80392a */ goto L_0080392a;
L_0080469e:; BB(0x0080469e);
    /* 0080469e: mov eax, 0x41600000 */ r_eax = 0x41600000u;
    /* 008046a3: jmp 0x8038eb */ goto L_008038eb;
L_008046a8:; BB(0x008046a8);
    /* 008046a8: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008046ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008046ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008046ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008046ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008046af: ret  */ FN_RET(0x008034e4); r_esp += 4; return;
}

