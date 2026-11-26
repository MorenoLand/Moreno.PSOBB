#include "protos.h"

void f_007b20ac(void) /* sub_7B20AC */
{
    FN_ENTER(0x007b20ac);
    /* 007b20ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b20ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b20ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b20af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b20b0: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b20b6: mov edi, dword ptr [esp + 0x9c] */ r_edi = R32((u32)(r_esp+0x9cu));
    /* 007b20bd: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007b20bf: mov esi, dword ptr [esp + 0xa0] */ r_esi = R32((u32)(r_esp+0xa0u));
    /* 007b20c6: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 007b20c8: mov ebp, dword ptr [esp + 0xa8] */ r_ebp = R32((u32)(r_esp+0xa8u));
    /* 007b20cf: mov ebx, dword ptr [esp + 0xac] */ r_ebx = R32((u32)(r_esp+0xacu));
    /* 007b20d6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007b20da: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007b20de: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007b20e1: fsub dword ptr [esi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4u));
    /* 007b20e4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007b20e8: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007b20eb: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 007b20ee: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007b20f2: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b20f7u); f_0083173c();
    /* 007b20f7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007b20fb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b20ff: fcomp dword ptr [0x97dd5c] */ fx_compare(ST(0), R_F32((u32)(0x97dd5cu))); FPOP();
    /* 007b2105: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2107: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2108: je 0x7b2115 */ if (fZ) goto L_007b2115;
L_007b210a:; BB(0x007b210a);
    /* 007b210a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007b210e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b2113u); f_0082df08();
    /* 007b2113: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b2115:; BB(0x007b2115);
    /* 007b2115: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 007b211c: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 007b2120: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007b2122: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 007b2125: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007b2129: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007b212c: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 007b212f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007b2133: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007b2136: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 007b2139: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b213d: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b2142u); f_0083173c();
    /* 007b2142: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007b2146: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b214a: fcomp dword ptr [0x97dd5c] */ fx_compare(ST(0), R_F32((u32)(0x97dd5cu))); FPOP();
    /* 007b2150: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2152: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2153: je 0x7b2160 */ if (fZ) goto L_007b2160;
L_007b2155:; BB(0x007b2155);
    /* 007b2155: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 007b2159: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b215eu); f_0082df08();
    /* 007b215e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b2160:; BB(0x007b2160);
    /* 007b2160: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007b2162: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007b2166: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b216a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 007b216d: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007b2171: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 007b2175: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 007b2178: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b217c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007b2180: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007b2184: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007b2188: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007b218c: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007b2190: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 007b2194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2196: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2197: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x7b219cu); f_0083a0dc();
    /* 007b219c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007b21a0: fld dword ptr [0x97dd58] */ FPUSH(R_F32((u32)(0x97dd58u)));
    /* 007b21a6: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 007b21aa: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 007b21ae: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007b21b0: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 007b21b2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b21b4: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007b21b8: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007b21bb: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 007b21be: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b21c0: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007b21c4: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007b21c7: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007b21ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b21cc: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b21d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b21d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b21d2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x7b21d7u); f_00836208();
    /* 007b21d7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b21da: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b21de: fmul dword ptr [0x97dd58] */ ST(0) = ST(0) * R_F32((u32)(0x97dd58u));
    /* 007b21e4: fld dword ptr [0x97dd54] */ FPUSH(R_F32((u32)(0x97dd54u)));
    /* 007b21ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b21ec: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007b21f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b21f2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007b21f4: fcom dword ptr [0x97dd5c] */ fx_compare(ST(0), R_F32((u32)(0x97dd5cu))); 
    /* 007b21fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b21fc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b2200: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2201: jae 0x7b220b */ if (!fC) goto L_007b220b;
L_007b2203:; BB(0x007b2203);
    /* 007b2203: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b2207: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_007b220b:; BB(0x007b220b);
    /* 007b220b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007b220e: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b2212: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b2216: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 007b2219: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 007b221d: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 007b2221: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007b2224: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 007b2228: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 007b222c: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 007b2230: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 007b2234: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007b2238: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 007b223c: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 007b2240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2241: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2242: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2243: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x7b2248u); f_0083a0dc();
    /* 007b2248: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007b224c: fld dword ptr [0x97dd58] */ FPUSH(R_F32((u32)(0x97dd58u)));
    /* 007b2252: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 007b2259: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 007b225d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007b225f: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 007b2261: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b2263: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 007b226a: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007b226d: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 007b2270: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b2272: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 007b2279: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007b227c: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007b227f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b2281: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 007b2288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b228a: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x7b228fu); f_00836208();
    /* 007b228f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2292: fld dword ptr [0x97dd58] */ FPUSH(R_F32((u32)(0x97dd58u)));
    /* 007b2298: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b229c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b229e: fld dword ptr [0x97dd54] */ FPUSH(R_F32((u32)(0x97dd54u)));
    /* 007b22a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b22a6: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 007b22aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b22ac: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007b22ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b22b0: fcom dword ptr [0x97dd5c] */ fx_compare(ST(0), R_F32((u32)(0x97dd5cu))); 
    /* 007b22b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b22b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b22b9: jae 0x7b22c1 */ if (!fC) goto L_007b22c1;
L_007b22bb:; BB(0x007b22bb);
    /* 007b22bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b22bd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_007b22c1:; BB(0x007b22c1);
    /* 007b22c1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b22c5: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007b22c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b22ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b22cb: jae 0x7b230d */ if (!fC) goto L_007b230d;
L_007b22cd:; BB(0x007b22cd);
    /* 007b22cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007b22cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b22d1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b22d5: fadd dword ptr [0x97dd54] */ ST(0) = ST(0) + R_F32((u32)(0x97dd54u));
    /* 007b22db: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 007b22e2: mov ebp, dword ptr [esp + 0xb0] */ r_ebp = R32((u32)(r_esp+0xb0u));
    /* 007b22e9: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007b22eb: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007b22ef: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007b22f3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007b22f7: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007b22fa: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007b22fd: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 007b2300: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2306: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2308: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2309: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b230a: ret 0x1c */ FN_RET(0x007b20ac); r_esp += 32; return;
L_007b230d:; BB(0x007b230d);
    /* 007b230d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b2311: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 007b2314: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2316: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2317: je 0x7b2353 */ if (fZ) goto L_007b2353;
L_007b2319:; BB(0x007b2319);
    /* 007b2319: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007b231b: fadd dword ptr [0x97dd54] */ ST(0) = ST(0) + R_F32((u32)(0x97dd54u));
    /* 007b2321: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 007b2328: mov ebp, dword ptr [esp + 0xb0] */ r_ebp = R32((u32)(r_esp+0xb0u));
    /* 007b232f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007b2331: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b2335: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007b2339: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 007b233d: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007b2340: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007b2343: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 007b2346: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b234c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b234d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b234e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b234f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2350: ret 0x1c */ FN_RET(0x007b20ac); r_esp += 32; return;
L_007b2353:; BB(0x007b2353);
    /* 007b2353: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b2355: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 007b235c: mov edx, dword ptr [esp + 0xb0] */ r_edx = R32((u32)(r_esp+0xb0u));
    /* 007b2363: mov dword ptr [eax], 0x40e00000 */ W32((u32)(r_eax), 0x40e00000u);
    /* 007b2369: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007b236d: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007b2371: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b2373: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007b2377: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 007b237b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007b237f: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 007b2383: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2385: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007b2387: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b2389: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b238b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b238d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 007b238f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2391: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 007b2394: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007b2397: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b239d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b239e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b239f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b23a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b23a1: ret 0x1c */ FN_RET(0x007b20ac); r_esp += 32; return;
}

void f_007b23a4(void) /* sub_7B23A4 */
{
    FN_ENTER(0x007b23a4);
    /* 007b23a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b23a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b23a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b23a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b23a8: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b23ab: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b23ad: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 007b23b1: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007b23b5: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 007b23b9: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 007b23bd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b23c0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007b23c2: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 007b23c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b23c7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b23cf: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007b23d2: fsub dword ptr [ebx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x8u));
    /* 007b23d5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b23d9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b23deu); f_0083173c();
    /* 007b23de: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007b23e2: fld dword ptr [0x97dd4c] */ FPUSH(R_F32((u32)(0x97dd4cu)));
    /* 007b23e8: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007b23ec: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b23ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b23f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b23f1: je 0x7b2405 */ if (fZ) goto L_007b2405;
L_007b23f3:; BB(0x007b23f3);
    /* 007b23f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b23f5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b23f8: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b23fdu); f_0082df08();
    /* 007b23fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b23ff: fld dword ptr [0x97dd4c] */ FPUSH(R_F32((u32)(0x97dd4cu)));
L_007b2405:; BB(0x007b2405);
    /* 007b2405: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b2408: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007b240c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 007b240f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007b2413: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007b2417: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007b2419: fchs  */ ST(0) = -ST(0);
    /* 007b241b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007b241f: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7b2424u); f_0082f9e0();
    /* 007b2424: fcomp dword ptr [0x97dd4c] */ fx_compare(ST(0), R_F32((u32)(0x97dd4cu))); FPOP();
    /* 007b242a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b242c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b242d: jae 0x7b2449 */ if (!fC) goto L_007b2449;
L_007b242f:; BB(0x007b242f);
    /* 007b242f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b2433: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007b2437: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2439: fchs  */ ST(0) = -ST(0);
    /* 007b243b: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 007b243f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2441: fchs  */ ST(0) = -ST(0);
    /* 007b2443: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 007b2447: jmp 0x7b2451 */ goto L_007b2451;
L_007b2449:; BB(0x007b2449);
    /* 007b2449: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b244d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
L_007b2451:; BB(0x007b2451);
    /* 007b2451: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b2454: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b245a: mov esi, dword ptr [edx + 0x300] */ r_esi = R32((u32)(r_edx+0x300u));
    /* 007b2460: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007b2466: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2468: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b246c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007b2470: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007b2474: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007b2478: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 007b247e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b2482: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007b2486: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2488: lea esi, [ebp + 0xdc] */ r_esi = (u32)(r_ebp+0xdcu);
    /* 007b248e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007b2492: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007b2496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2499: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x7b249eu); f_0083a0dc();
    /* 007b249e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b24a0: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007b24a4: fmul dword ptr [0x97dd48] */ ST(0) = ST(0) * R_F32((u32)(0x97dd48u));
    /* 007b24aa: fld dword ptr [0x97dd44] */ FPUSH(R_F32((u32)(0x97dd44u)));
    /* 007b24b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007b24b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b24b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b24b5: jb 0x7b24b9 */ if (fC) goto L_007b24b9;
L_007b24b7:; BB(0x007b24b7);
    /* 007b24b7: fst st(1) */ ST(1) = ST(0);
L_007b24b9:; BB(0x007b24b9);
    /* 007b24b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b24bb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007b24bf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b24c1: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 007b24c3: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 007b24c5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 007b24c8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 007b24cb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007b24cf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b24d1: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 007b24d5: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 007b24d8: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 007b24db: mov ebx, dword ptr [ebp + 0x74] */ r_ebx = R32((u32)(r_ebp+0x74u));
    /* 007b24de: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 007b24e4: mov esi, dword ptr [eax + 0x300] */ r_esi = R32((u32)(r_eax+0x300u));
    /* 007b24ea: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007b24f0: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 007b24f6: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 007b24fa: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 007b24fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b2502: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 007b2506: push 0x2100 */ { u32 v = 0x2100u; r_esp -= 4; W32(r_esp, v); }
    /* 007b250b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b250c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b250d: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7b2512u); f_0077fffc();
    /* 007b2512: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2517: je 0x7b2525 */ if (fZ) goto L_007b2525;
L_007b2519:; BB(0x007b2519);
    /* 007b2519: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b251b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b251e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b251f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2520: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2521: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2522: ret 0x14 */ FN_RET(0x007b23a4); r_esp += 24; return;
L_007b2525:; BB(0x007b2525);
    /* 007b2525: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007b2528: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b252e: fld dword ptr [edx + 0x300] */ FPUSH(R_F32((u32)(r_edx+0x300u)));
    /* 007b2534: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 007b2538: fld dword ptr [edx + 0x308] */ FPUSH(R_F32((u32)(r_edx+0x308u)));
    /* 007b253e: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 007b2542: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2544: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007b2548: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007b254c: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 007b2554: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 007b2558: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b255du); f_0083173c();
    /* 007b255d: fld dword ptr [0x97dd4c] */ FPUSH(R_F32((u32)(0x97dd4cu)));
    /* 007b2563: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2565: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b2567: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2569: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b256a: je 0x7b257f */ if (fZ) goto L_007b257f;
L_007b256c:; BB(0x007b256c);
    /* 007b256c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b256e: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 007b2572: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b2577u); f_0082df08();
    /* 007b2577: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b2579: fld dword ptr [0x97dd4c] */ FPUSH(R_F32((u32)(0x97dd4cu)));
L_007b257f:; BB(0x007b257f);
    /* 007b257f: fld dword ptr [0x97dd40] */ FPUSH(R_F32((u32)(0x97dd40u)));
    /* 007b2585: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b2589: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b258b: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 007b258f: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 007b2593: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
    /* 007b2597: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 007b259b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 007b259d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007b25a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b25a3: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 007b25a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b25a9: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 007b25ac: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007b25af: mov eax, 1 */ r_eax = 0x1u;
    /* 007b25b4: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b25b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b25b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b25b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b25ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b25bb: ret 0x14 */ FN_RET(0x007b23a4); r_esp += 24; return;
}

void f_007b25c0(void) /* sub_7B25C0 */
{
    FN_ENTER(0x007b25c0);
    /* 007b25c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b25c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b25c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b25c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b25c4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b25c7: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007b25cb: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 007b25cf: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007b25d3: push 0x2100 */ { u32 v = 0x2100u; r_esp -= 4; W32(r_esp, v); }
    /* 007b25d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b25d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b25da: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7b25dfu); f_0077fffc();
    /* 007b25df: mov edi, eax */ r_edi = r_eax;
    /* 007b25e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b25e4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b25e6: je 0x7b266e */ if (fZ) goto L_007b266e;
L_007b25ec:; BB(0x007b25ec);
    /* 007b25ec: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b25ef: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 007b25f2: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 007b25f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b25f7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b25ff: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007b2602: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 007b2605: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b2609: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b260eu); f_0083173c();
    /* 007b260e: fcomp dword ptr [0x97dd3c] */ fx_compare(ST(0), R_F32((u32)(0x97dd3cu))); FPOP();
    /* 007b2614: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2616: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2617: je 0x7b2623 */ if (fZ) goto L_007b2623;
L_007b2619:; BB(0x007b2619);
    /* 007b2619: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b261c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b2621u); f_0082df08();
    /* 007b2621: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b2623:; BB(0x007b2623);
    /* 007b2623: fld dword ptr [0x97dd38] */ FPUSH(R_F32((u32)(0x97dd38u)));
    /* 007b2629: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b262c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b262e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b2632: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b2634: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 007b2637: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b263b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007b263d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007b263f: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007b2641: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b2643: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 007b2645: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 007b2648: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007b264a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007b264d: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007b2650: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007b2653: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b2655: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 007b2657: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 007b265a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007b265c: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 007b265f: mov eax, 1 */ r_eax = 0x1u;
    /* 007b2664: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2667: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2668: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2669: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b266a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b266b: ret 0xc */ FN_RET(0x007b25c0); r_esp += 16; return;
L_007b266e:; BB(0x007b266e);
    /* 007b266e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2670: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2673: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2675: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2676: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2677: ret 0xc */ FN_RET(0x007b25c0); r_esp += 16; return;
}

void f_007b267c(void) /* sub_7B267C */
{
    FN_ENTER(0x007b267c);
    /* 007b267c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b267d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b267f: lea edx, [ebx + 0xac] */ r_edx = (u32)(r_ebx+0xacu);
    /* 007b2685: lea eax, [ebx + 0xd0] */ r_eax = (u32)(r_ebx+0xd0u);
    /* 007b268b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b268c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b268d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b2692u); f_007a9180();
    /* 007b2692: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2695: fcomp dword ptr [0x97dd34] */ fx_compare(ST(0), R_F32((u32)(0x97dd34u))); FPOP();
    /* 007b269b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b269d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b269e: jbe 0x7b275f */ if ((fC||fZ)) goto L_007b275f;
L_007b26a4:; BB(0x007b26a4);
    /* 007b26a4: movsx eax, byte ptr [ebx + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8cu));
    /* 007b26ab: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b26ae: jg 0x7b26fd */ if ((!fZ&&fS==fO)) goto L_007b26fd;
L_007b26b0:; BB(0x007b26b0);
    /* 007b26b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b26b2: jne 0x7b26f6 */ if (!fZ) goto L_007b26f6;
L_007b26b4:; BB(0x007b26b4);
    /* 007b26b4: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b26ba: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b26bf: je 0x7b26f6 */ if (fZ) goto L_007b26f6;
L_007b26c1:; BB(0x007b26c1);
    /* 007b26c1: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 007b26c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b26c6: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 007b26ca: mov word ptr [ebx + 0x5c], ax */ W16((u32)(r_ebx+0x5cu), (u16)r_eax);
    /* 007b26ce: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b26d1: jne 0x7b26db */ if (!fZ) goto L_007b26db;
L_007b26d3:; BB(0x007b26d3);
    /* 007b26d3: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b26d9: jmp 0x7b26eb */ goto L_007b26eb;
L_007b26db:; BB(0x007b26db);
    /* 007b26db: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b26e1: mov dword ptr [ebx + 0x24], 0x18 */ W32((u32)(r_ebx+0x24u), 0x18u);
    /* 007b26e8: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007b26eb:; BB(0x007b26eb);
    /* 007b26eb: and eax, 0xffffbfff */ {  u32 a = r_eax; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b26f0: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
L_007b26f6:; BB(0x007b26f6);
    /* 007b26f6: mov eax, 1 */ r_eax = 0x1u;
    /* 007b26fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b26fc: ret  */ FN_RET(0x007b267c); r_esp += 4; return;
L_007b26fd:; BB(0x007b26fd);
    /* 007b26fd: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b2703: mov byte ptr [ebx + 0x8c], 0x1e */ W8((u32)(r_ebx+0x8cu), 0x1eu);
    /* 007b270a: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b270f: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 007b2715: movsx eax, word ptr [ebx + 0x6a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
    /* 007b2719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b271b: jne 0x7b2745 */ if (!fZ) goto L_007b2745;
L_007b271d:; BB(0x007b271d);
    /* 007b271d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b271f: mov word ptr [ebx + 0x5c], dx */ W16((u32)(r_ebx+0x5cu), (u16)r_edx);
    /* 007b2723: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 007b2726: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2729: je 0x7b2745 */ if (fZ) goto L_007b2745;
L_007b272b:; BB(0x007b272b);
    /* 007b272b: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b2731: mov dword ptr [ebx + 0x24], 7 */ W32((u32)(r_ebx+0x24u), 0x7u);
    /* 007b2738: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b273b: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 007b2741: movsx eax, word ptr [ebx + 0x6a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x6au));
L_007b2745:; BB(0x007b2745);
    /* 007b2745: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b2748: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b274b: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b2751: jl 0x7b275b */ if ((fS!=fO)) goto L_007b275b;
L_007b2753:; BB(0x007b2753);
    /* 007b2753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2755: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 007b2759: jmp 0x7b275f */ goto L_007b275f;
L_007b275b:; BB(0x007b275b);
    /* 007b275b: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
L_007b275f:; BB(0x007b275f);
    /* 007b275f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2762: ret  */ FN_RET(0x007b267c); r_esp += 4; return;
}

void f_007b2764(void) /* sub_7B2764 */
{
    FN_ENTER(0x007b2764);
    /* 007b2764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2765: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b2768: mov edi, ecx */ r_edi = r_ecx;
    /* 007b276a: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2770: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2772: je 0x7b2784 */ if (fZ) goto L_007b2784;
L_007b2774:; BB(0x007b2774);
    /* 007b2774: mov eax, dword ptr [0xaad64c] */ r_eax = R32((u32)(0xaad64cu));
    /* 007b2779: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b277b: jne 0x7b2784 */ if (!fZ) goto L_007b2784;
L_007b277d:; BB(0x007b277d);
    /* 007b277d: mov ecx, edi */ r_ecx = r_edi;
    /* 007b277f: call 0x7b2a30 */ r_esp -= 4; W32(r_esp, 0x7b2784u); f_007b2a30();
L_007b2784:; BB(0x007b2784);
    /* 007b2784: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b2787: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b278d: mov edx, dword ptr [eax + 0x328] */ r_edx = R32((u32)(r_eax+0x328u));
    /* 007b2793: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2796: je 0x7b281b */ if (fZ) goto L_007b281b;
L_007b279c:; BB(0x007b279c);
    /* 007b279c: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b279f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27a1: je 0x7b28cc */ if (fZ) goto L_007b28cc;
L_007b27a7:; BB(0x007b27a7);
    /* 007b27a7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27aa: je 0x7b2820 */ if (fZ) goto L_007b2820;
L_007b27ac:; BB(0x007b27ac);
    /* 007b27ac: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27af: je 0x7b27cf */ if (fZ) goto L_007b27cf;
L_007b27b1:; BB(0x007b27b1);
    /* 007b27b1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27b4: je 0x7b27d9 */ if (fZ) goto L_007b27d9;
L_007b27b6:; BB(0x007b27b6);
    /* 007b27b6: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27b9: jne 0x7b27d9 */ if (!fZ) goto L_007b27d9;
L_007b27bb:; BB(0x007b27bb);
    /* 007b27bb: movsx eax, word ptr [edi + 0x92] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x92u));
    /* 007b27c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b27c3: mov ecx, edi */ r_ecx = r_edi;
    /* 007b27c5: call 0x7b2ae8 */ r_esp -= 4; W32(r_esp, 0x7b27cau); f_007b2ae8();
    /* 007b27ca: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b27cd: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b27cf:; BB(0x007b27cf);
    /* 007b27cf: mov ecx, edi */ r_ecx = r_edi;
    /* 007b27d1: call 0x7b2e20 */ r_esp -= 4; W32(r_esp, 0x7b27d6u); f_007b2e20();
    /* 007b27d6: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
L_007b27d9:; BB(0x007b27d9);
    /* 007b27d9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b27dc: je 0x7b27fd */ if (fZ) goto L_007b27fd;
L_007b27de:; BB(0x007b27de);
    /* 007b27de: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 007b27e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b27e6: mov word ptr [edi + 0x5e], ax */ W16((u32)(r_edi+0x5eu), (u16)r_eax);
    /* 007b27ea: mov word ptr [edi + 0x66], ax */ W16((u32)(r_edi+0x66u), (u16)r_eax);
    /* 007b27ee: and edx, 0xffff7fff */ {  u32 a = r_edx; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b27f4: mov dword ptr [edi + 0x80], edx */ W32((u32)(r_edi+0x80u), r_edx);
    /* 007b27fa: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
L_007b27fd:; BB(0x007b27fd);
    /* 007b27fd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2800: je 0x7b2811 */ if (fZ) goto L_007b2811;
L_007b2802:; BB(0x007b2802);
    /* 007b2802: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2808: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b280b: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
L_007b2811:; BB(0x007b2811);
    /* 007b2811: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2813: je 0x7b281b */ if (fZ) goto L_007b281b;
L_007b2815:; BB(0x007b2815);
    /* 007b2815: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2817: mov word ptr [edi + 0x64], ax */ W16((u32)(r_edi+0x64u), (u16)r_eax);
L_007b281b:; BB(0x007b281b);
    /* 007b281b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b281e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b281f: ret  */ FN_RET(0x007b2764); r_esp += 4; return;
L_007b2820:; BB(0x007b2820);
    /* 007b2820: fld dword ptr [edi + 0xac] */ FPUSH(R_F32((u32)(r_edi+0xacu)));
    /* 007b2826: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 007b2829: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 007b282f: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 007b2832: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2834: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b2837: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b283b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b2843: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b2846: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b284bu); f_0083173c();
    /* 007b284b: fcom dword ptr [0x97dd2c] */ fx_compare(ST(0), R_F32((u32)(0x97dd2cu))); 
    /* 007b2851: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2853: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2854: jbe 0x7b2985 */ if ((fC||fZ)) goto L_007b2985;
L_007b285a:; BB(0x007b285a);
    /* 007b285a: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b285d: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b2863: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007b2866: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b286b: jne 0x7b28bb */ if (!fZ) goto L_007b28bb;
L_007b286d:; BB(0x007b286d);
    /* 007b286d: fcomp dword ptr [edi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x40u))); FPOP();
    /* 007b2870: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2872: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2873: ja 0x7b289d */ if ((!fC&&!fZ)) goto L_007b289d;
L_007b2875:; BB(0x007b2875);
    /* 007b2875: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b287b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b287d: jne 0x7b288e */ if (!fZ) goto L_007b288e;
L_007b287f:; BB(0x007b287f);
    /* 007b287f: mov ecx, edi */ r_ecx = r_edi;
    /* 007b2881: call 0x7b298c */ r_esp -= 4; W32(r_esp, 0x7b2886u); f_007b298c();
    /* 007b2886: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b2889: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b288e:; BB(0x007b288e);
    /* 007b288e: mov ecx, edi */ r_ecx = r_edi;
    /* 007b2890: call 0x7b29f0 */ r_esp -= 4; W32(r_esp, 0x7b2895u); f_007b29f0();
    /* 007b2895: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b2898: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b289d:; BB(0x007b289d);
    /* 007b289d: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b28a3: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b28a6: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b28ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007b28ae: call 0x7b29f0 */ r_esp -= 4; W32(r_esp, 0x7b28b3u); f_007b29f0();
    /* 007b28b3: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b28b6: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b28bb:; BB(0x007b28bb);
    /* 007b28bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b28bd: mov ecx, edi */ r_ecx = r_edi;
    /* 007b28bf: call 0x7b298c */ r_esp -= 4; W32(r_esp, 0x7b28c4u); f_007b298c();
    /* 007b28c4: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b28c7: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b28cc:; BB(0x007b28cc);
    /* 007b28cc: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 007b28d2: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 007b28d8: mov ecx, dword ptr [edi + 0xe4] */ r_ecx = R32((u32)(r_edi+0xe4u));
    /* 007b28de: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 007b28e4: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 007b28ea: mov dword ptr [edi + 0xd8], ecx */ W32((u32)(r_edi+0xd8u), r_ecx);
    /* 007b28f0: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 007b28f6: movsx eax, word ptr [edi + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x64u));
    /* 007b28fa: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 007b2900: mov dword ptr [edi + 0xb4], ecx */ W32((u32)(r_edi+0xb4u), r_ecx);
    /* 007b2906: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b2909: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b290c: cmp edx, 0x1519 */ {  u32 a = r_edx; u32 b = 0x1519u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2912: je 0x7b2965 */ if (fZ) goto L_007b2965;
L_007b2914:; BB(0x007b2914);
    /* 007b2914: cmp edx, 0x1518 */ {  u32 a = r_edx; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b291a: jl 0x7b2959 */ if ((fS!=fO)) goto L_007b2959;
L_007b291c:; BB(0x007b291c);
    /* 007b291c: mov eax, 0x1518 */ r_eax = 0x1518u;
    /* 007b2921: mov word ptr [edi + 0x64], ax */ W16((u32)(r_edi+0x64u), (u16)r_eax);
    /* 007b2925: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 007b2928: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b292a: mov word ptr [edi + 0x5c], dx */ W16((u32)(r_edi+0x5cu), (u16)r_edx);
    /* 007b292e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2931: jne 0x7b293b */ if (!fZ) goto L_007b293b;
L_007b2933:; BB(0x007b2933);
    /* 007b2933: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b2936: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b293b:; BB(0x007b293b);
    /* 007b293b: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2941: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b2944: mov dword ptr [edi + 0x24], 0xb */ W32((u32)(r_edi+0x24u), 0xbu);
    /* 007b294b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b294e: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2954: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b2959:; BB(0x007b2959);
    /* 007b2959: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007b295c: mov word ptr [edi + 0x64], ax */ W16((u32)(r_edi+0x64u), (u16)r_eax);
    /* 007b2960: jmp 0x7b27d9 */ goto L_007b27d9;
L_007b2965:; BB(0x007b2965);
    /* 007b2965: mov dword ptr [edi + 0x24], 0x19 */ W32((u32)(r_edi+0x24u), 0x19u);
    /* 007b296c: mov word ptr [edi + 0x64], ax */ W16((u32)(r_edi+0x64u), (u16)r_eax);
    /* 007b2970: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2976: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b2979: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b297f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2981: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b2983: jmp 0x7b2914 */ goto L_007b2914;
L_007b2985:; BB(0x007b2985);
    /* 007b2985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b2987: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b298a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b298b: ret  */ FN_RET(0x007b2764); r_esp += 4; return;
}

void f_007b298c(void) /* sub_7B298C */
{
    FN_ENTER(0x007b298c);
    /* 007b298c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b298f: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 007b2992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2994: je 0x7b29ea */ if (fZ) goto L_007b29ea;
L_007b2996:; BB(0x007b2996);
    /* 007b2996: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007b299d: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b29a3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007b29a6: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 007b29ab: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 007b29b1: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 007b29b7: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 007b29bc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007b29c0: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 007b29c4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007b29c8: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007b29d0: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b29d5: je 0x7b29e2 */ if (fZ) goto L_007b29e2;
L_007b29d7:; BB(0x007b29d7);
    /* 007b29d7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007b29db: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b29de: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_007b29e2:; BB(0x007b29e2);
    /* 007b29e2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b29e5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b29eau); f_008003e0();
L_007b29ea:; BB(0x007b29ea);
    /* 007b29ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b29ed: ret  */ FN_RET(0x007b298c); r_esp += 4; return;
}

void f_007b29f0(void) /* sub_7B29F0 */
{
    FN_ENTER(0x007b29f0);
    /* 007b29f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b29f3: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 007b29f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b29f8: je 0x7b2a2b */ if (fZ) goto L_007b2a2b;
L_007b29fa:; BB(0x007b29fa);
    /* 007b29fa: movzx eax, word ptr [eax + 0x8a] */ r_eax = (u32)R16((u32)(r_eax+0x8au));
    /* 007b2a01: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 007b2a07: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 007b2a0d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 007b2a12: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007b2a16: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b2a1b: mov byte ptr [esp], 0x42 */ W8((u32)(r_esp), 0x42u);
    /* 007b2a1f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007b2a23: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b2a26: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b2a2bu); f_008003e0();
L_007b2a2b:; BB(0x007b2a2b);
    /* 007b2a2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2a2e: ret  */ FN_RET(0x007b29f0); r_esp += 4; return;
}

void f_007b2a30(void) /* sub_7B2A30 */
{
    FN_ENTER(0x007b2a30);
    /* 007b2a30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a32: mov edi, ecx */ r_edi = r_ecx;
    /* 007b2a34: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 007b2a37: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b2a3a: jl 0x7b2a55 */ if ((fS!=fO)) goto L_007b2a55;
L_007b2a3c:; BB(0x007b2a3c);
    /* 007b2a3c: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2a42: mov dword ptr [edi + 0x24], 0x19 */ W32((u32)(r_edi+0x24u), 0x19u);
    /* 007b2a49: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2a4c: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2a52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2a53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2a54: ret  */ FN_RET(0x007b2a30); r_esp += 4; return;
L_007b2a55:; BB(0x007b2a55);
    /* 007b2a55: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x7b2a5au); f_0067e408();
    /* 007b2a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2a5c: je 0x7b2a61 */ if (fZ) goto L_007b2a61;
L_007b2a5e:; BB(0x007b2a5e);
    /* 007b2a5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2a5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2a60: ret  */ FN_RET(0x007b2a30); r_esp += 4; return;
L_007b2a61:; BB(0x007b2a61);
    /* 007b2a61: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b2a64: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b2a6a: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 007b2a6e: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2a74: je 0x7b2abc */ if (fZ) goto L_007b2abc;
L_007b2a76:; BB(0x007b2a76);
    /* 007b2a76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a77: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b2a7a: call 0x7b4570 */ r_esp -= 4; W32(r_esp, 0x7b2a7fu); f_007b4570();
    /* 007b2a7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2a84: je 0x7b2a94 */ if (fZ) goto L_007b2a94;
L_007b2a86:; BB(0x007b2a86);
    /* 007b2a86: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2a8a: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x7b2a8fu); f_007184f8();
    /* 007b2a8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2a92: jmp 0x7b2abc */ goto L_007b2abc;
L_007b2a94:; BB(0x007b2a94);
    /* 007b2a94: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 007b2a97: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007b2a9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b2a9c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b2a9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b2aa0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b2aa2: lea edx, [edx + edx*8 + 0xaacae0] */ r_edx = (u32)(r_edx+r_edx*8+0xaacae0u);
    /* 007b2aa9: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 007b2aac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2aae: je 0x7b2abc */ if (fZ) goto L_007b2abc;
L_007b2ab0:; BB(0x007b2ab0);
    /* 007b2ab0: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007b2ab2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2ab3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2ab4: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x7b2ab9u); f_007184f8();
    /* 007b2ab9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b2abc:; BB(0x007b2abc);
    /* 007b2abc: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2ac2: movsx edx, word ptr [edi + 0x5c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x5cu));
    /* 007b2ac6: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b2ac9: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2acf: cmp edx, 0x190 */ {  u32 a = r_edx; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2ad5: jl 0x7b2ae4 */ if ((fS!=fO)) goto L_007b2ae4;
L_007b2ad7:; BB(0x007b2ad7);
    /* 007b2ad7: mov dword ptr [edi + 0x24], 0x19 */ W32((u32)(r_edi+0x24u), 0x19u);
    /* 007b2ade: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2ae0: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
L_007b2ae4:; BB(0x007b2ae4);
    /* 007b2ae4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2ae5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2ae6: ret  */ FN_RET(0x007b2a30); r_esp += 4; return;
}

void f_007b2ae8(void) /* sub_7B2AE8 */
{
    FN_ENTER(0x007b2ae8);
    /* 007b2ae8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2ae9: mov esi, ecx */ r_esi = r_ecx;
    /* 007b2aeb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007b2aef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2af1: je 0x7b2b6a */ if (fZ) goto L_007b2b6a;
L_007b2af3:; BB(0x007b2af3);
    /* 007b2af3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2af6: je 0x7b2b50 */ if (fZ) goto L_007b2b50;
L_007b2af8:; BB(0x007b2af8);
    /* 007b2af8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2afb: jne 0x7b2b24 */ if (!fZ) goto L_007b2b24;
L_007b2afd:; BB(0x007b2afd);
    /* 007b2afd: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2b00: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
    /* 007b2b06: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2b09: je 0x7b2b17 */ if (fZ) goto L_007b2b17;
L_007b2b0b:; BB(0x007b2b0b);
    /* 007b2b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b0c: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b0e: call 0x7b2d7c */ r_esp -= 4; W32(r_esp, 0x7b2b13u); f_007b2d7c();
    /* 007b2b13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2b14: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
L_007b2b17:; BB(0x007b2b17);
    /* 007b2b17: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b19: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b1b: call 0x7b2bc0 */ r_esp -= 4; W32(r_esp, 0x7b2b20u); f_007b2bc0();
    /* 007b2b20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2b21: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
L_007b2b24:; BB(0x007b2b24);
    /* 007b2b24: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2b27: jne 0x7b2b66 */ if (!fZ) goto L_007b2b66;
L_007b2b29:; BB(0x007b2b29);
    /* 007b2b29: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2b2c: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
    /* 007b2b32: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2b35: je 0x7b2b43 */ if (fZ) goto L_007b2b43;
L_007b2b37:; BB(0x007b2b37);
    /* 007b2b37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b38: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b3a: call 0x7b2d7c */ r_esp -= 4; W32(r_esp, 0x7b2b3fu); f_007b2d7c();
    /* 007b2b3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2b40: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
L_007b2b43:; BB(0x007b2b43);
    /* 007b2b43: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b45: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b47: call 0x7b2bc0 */ r_esp -= 4; W32(r_esp, 0x7b2b4cu); f_007b2bc0();
    /* 007b2b4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2b4d: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
L_007b2b50:; BB(0x007b2b50);
    /* 007b2b50: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2b53: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
    /* 007b2b59: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2b5c: je 0x7b2b66 */ if (fZ) goto L_007b2b66;
L_007b2b5e:; BB(0x007b2b5e);
    /* 007b2b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b5f: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b61: call 0x7b2d7c */ r_esp -= 4; W32(r_esp, 0x7b2b66u); f_007b2d7c();
L_007b2b66:; BB(0x007b2b66);
    /* 007b2b66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2b67: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
L_007b2b6a:; BB(0x007b2b6a);
    /* 007b2b6a: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2b6d: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
    /* 007b2b73: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2b76: je 0x7b2b82 */ if (fZ) goto L_007b2b82;
L_007b2b78:; BB(0x007b2b78);
    /* 007b2b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b79: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b7b: call 0x7b2d7c */ r_esp -= 4; W32(r_esp, 0x7b2b80u); f_007b2d7c();
    /* 007b2b80: jmp 0x7b2b8b */ goto L_007b2b8b;
L_007b2b82:; BB(0x007b2b82);
    /* 007b2b82: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007b2b84: mov ecx, esi */ r_ecx = r_esi;
    /* 007b2b86: call 0x7b2bc0 */ r_esp -= 4; W32(r_esp, 0x7b2b8bu); f_007b2bc0();
L_007b2b8b:; BB(0x007b2b8b);
    /* 007b2b8b: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b2b91: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2b96: je 0x7b2b66 */ if (fZ) goto L_007b2b66;
L_007b2b98:; BB(0x007b2b98);
    /* 007b2b98: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007b2b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2b9d: mov word ptr [esi + 0x5c], ax */ W16((u32)(r_esi+0x5cu), (u16)r_eax);
    /* 007b2ba1: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2ba4: je 0x7b2b66 */ if (fZ) goto L_007b2b66;
L_007b2ba6:; BB(0x007b2ba6);
    /* 007b2ba6: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b2bac: mov dword ptr [esi + 0x24], 0x13 */ W32((u32)(r_esi+0x24u), 0x13u);
    /* 007b2bb3: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2bb6: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007b2bbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2bbd: ret 4 */ FN_RET(0x007b2ae8); r_esp += 8; return;
}

void f_007b2bc0(void) /* sub_7B2BC0 */
{
    FN_ENTER(0x007b2bc0);
    /* 007b2bc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2bc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b2bc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2bc3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b2bc6: mov edi, ecx */ r_edi = r_ecx;
    /* 007b2bc8: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 007b2bcc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007b2bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2bd2: mov byte ptr [esp + 7], al */ W8((u32)(r_esp+0x7u), (u8)r_eax);
    /* 007b2bd6: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 007b2bda: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 007b2bde: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 007b2be2: mov eax, 0xa */ r_eax = 0xau;
L_007b2be7:; BB(0x007b2be7);
    /* 007b2be7: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 007b2bec: mov word ptr [edx], bp */ W16((u32)(r_edx), (u16)r_ebp);
    /* 007b2bef: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007b2bf1: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 007b2bf5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b2bf8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007b2bfb: jne 0x7b2be7 */ if (!fZ) goto L_007b2be7;
L_007b2bfd:; BB(0x007b2bfd);
    /* 007b2bfd: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b2c00: mov ebp, dword ptr [eax + 0x94] */ r_ebp = R32((u32)(r_eax+0x94u));
    /* 007b2c06: mov byte ptr [esp], 0x47 */ W8((u32)(r_esp), 0x47u);
    /* 007b2c0a: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c0d: mov byte ptr [esp + 1], 0xc */ W8((u32)(r_esp+0x1u), 0xcu);
    /* 007b2c12: je 0x7b2d4c */ if (fZ) goto L_007b2d4c;
L_007b2c18:; BB(0x007b2c18);
    /* 007b2c18: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c1b: je 0x7b2d4c */ if (fZ) goto L_007b2d4c;
L_007b2c21:; BB(0x007b2c21);
    /* 007b2c21: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c23: jne 0x7b2c4b */ if (!fZ) goto L_007b2c4b;
L_007b2c25:; BB(0x007b2c25);
    /* 007b2c25: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b2c28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2c2a: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b2c2e: cmp edx, 0x17 */ {  u32 a = r_edx; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c31: je 0x7b2c79 */ if (fZ) goto L_007b2c79;
L_007b2c33:; BB(0x007b2c33);
    /* 007b2c33: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2c39: mov dword ptr [edi + 0x24], 0x17 */ W32((u32)(r_edi+0x24u), 0x17u);
    /* 007b2c40: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b2c43: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2c49: jmp 0x7b2c79 */ goto L_007b2c79;
L_007b2c4b:; BB(0x007b2c4b);
    /* 007b2c4b: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c4e: je 0x7b2c25 */ if (fZ) goto L_007b2c25;
L_007b2c50:; BB(0x007b2c50);
    /* 007b2c50: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c53: je 0x7b2c25 */ if (fZ) goto L_007b2c25;
L_007b2c55:; BB(0x007b2c55);
    /* 007b2c55: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b2c58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2c5a: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b2c5e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c61: je 0x7b2c79 */ if (fZ) goto L_007b2c79;
L_007b2c63:; BB(0x007b2c63);
    /* 007b2c63: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2c69: mov dword ptr [edi + 0x24], 2 */ W32((u32)(r_edi+0x24u), 0x2u);
    /* 007b2c70: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b2c73: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
L_007b2c79:; BB(0x007b2c79);
    /* 007b2c79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2c7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2c7c: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b2c81u); f_0069a088();
    /* 007b2c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2c83: jne 0x7b2c8e */ if (!fZ) goto L_007b2c8e;
L_007b2c85:; BB(0x007b2c85);
    /* 007b2c85: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2c88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2c89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2c8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2c8b: ret 4 */ FN_RET(0x007b2bc0); r_esp += 8; return;
L_007b2c8e:; BB(0x007b2c8e);
    /* 007b2c8e: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b2c91: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007b2c98: mov byte ptr [esp + 7], 1 */ W8((u32)(r_esp+0x7u), 0x1u);
    /* 007b2c9d: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2ca0: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 007b2ca5: mov byte ptr [esp + 4], bl */ W8((u32)(r_esp+0x4u), (u8)r_ebx);
    /* 007b2ca9: je 0x7b2d39 */ if (fZ) goto L_007b2d39;
L_007b2caf:; BB(0x007b2caf);
    /* 007b2caf: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2cb2: je 0x7b2ce1 */ if (fZ) goto L_007b2ce1;
L_007b2cb4:; BB(0x007b2cb4);
    /* 007b2cb4: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b2cba: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 007b2cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2cbe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2cc0: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x7b2cc5u); f_006ad17c();
    /* 007b2cc5: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b2cc8: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007b2cce: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 007b2cd2: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 007b2cd5: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 007b2cda: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 007b2cdf: jmp 0x7b2d0c */ goto L_007b2d0c;
L_007b2ce1:; BB(0x007b2ce1);
    /* 007b2ce1: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b2ce7: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 007b2cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2ceb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2ced: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x7b2cf2u); f_006ad17c();
    /* 007b2cf2: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 007b2cf6: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 007b2cf9: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007b2d00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b2d02: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b2d07: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
L_007b2d0c:; BB(0x007b2d0c);
    /* 007b2d0c: movsx ebp, byte ptr [esp + 7] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 007b2d11: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b2d14: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007b2d16: lea eax, [ebp + ebp + 0x14] */ r_eax = (u32)(r_ebp+r_ebp+0x14u);
    /* 007b2d1a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d1c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d1e: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d21: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007b2d24: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007b2d27: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 007b2d2b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b2d30u); f_008003e0();
    /* 007b2d30: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2d33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2d34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2d35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2d36: ret 4 */ FN_RET(0x007b2bc0); r_esp += 8; return;
L_007b2d39:; BB(0x007b2d39);
    /* 007b2d39: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2d3f: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d44: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2d4a: jmp 0x7b2ce1 */ goto L_007b2ce1;
L_007b2d4c:; BB(0x007b2d4c);
    /* 007b2d4c: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b2d4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d51: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b2d55: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2d58: je 0x7b2c79 */ if (fZ) goto L_007b2c79;
L_007b2d5e:; BB(0x007b2d5e);
    /* 007b2d5e: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b2d64: mov dword ptr [edi + 0x24], 0x16 */ W32((u32)(r_edi+0x24u), 0x16u);
    /* 007b2d6b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b2d6e: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b2d74: jmp 0x7b2c79 */ goto L_007b2c79;
}

void f_007b2d7c(void) /* sub_7B2D7C */
{
    FN_ENTER(0x007b2d7c);
    /* 007b2d7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2d7d: mov esi, ecx */ r_esi = r_ecx;
    /* 007b2d7f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007b2d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2d85: je 0x7b2de5 */ if (fZ) goto L_007b2de5;
L_007b2d87:; BB(0x007b2d87);
    /* 007b2d87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2d8a: jne 0x7b2db6 */ if (!fZ) goto L_007b2db6;
L_007b2d8c:; BB(0x007b2d8c);
    /* 007b2d8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2d8e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2d90: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b2d93: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b2d99: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b2d9eu); f_0068faa8();
    /* 007b2d9e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2da1: je 0x7b2e1c */ if (fZ) goto L_007b2e1c;
L_007b2da3:; BB(0x007b2da3);
    /* 007b2da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2da4: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2da7: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007b2dad: call 0x68dbbc */ r_esp -= 4; W32(r_esp, 0x7b2db2u); f_0068dbbc();
    /* 007b2db2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2db3: ret 4 */ FN_RET(0x007b2d7c); r_esp += 8; return;
L_007b2db6:; BB(0x007b2db6);
    /* 007b2db6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2db9: jne 0x7b2e1c */ if (!fZ) goto L_007b2e1c;
L_007b2dbb:; BB(0x007b2dbb);
    /* 007b2dbb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2dbd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2dbf: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b2dc2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b2dc8: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b2dcdu); f_0068faa8();
    /* 007b2dcd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2dd0: je 0x7b2e1c */ if (fZ) goto L_007b2e1c;
L_007b2dd2:; BB(0x007b2dd2);
    /* 007b2dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2dd3: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2dd6: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007b2ddc: call 0x68dbbc */ r_esp -= 4; W32(r_esp, 0x7b2de1u); f_0068dbbc();
    /* 007b2de1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2de2: ret 4 */ FN_RET(0x007b2d7c); r_esp += 8; return;
L_007b2de5:; BB(0x007b2de5);
    /* 007b2de5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2de7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007b2de9: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b2dec: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b2df2: call 0x68faa8 */ r_esp -= 4; W32(r_esp, 0x7b2df7u); f_0068faa8();
    /* 007b2df7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b2dfa: je 0x7b2e1c */ if (fZ) goto L_007b2e1c;
L_007b2dfc:; BB(0x007b2dfc);
    /* 007b2dfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2dfd: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007b2e00: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007b2e06: call 0x68dbbc */ r_esp -= 4; W32(r_esp, 0x7b2e0bu); f_0068dbbc();
    /* 007b2e0b: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007b2e11: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b2e16: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
L_007b2e1c:; BB(0x007b2e1c);
    /* 007b2e1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2e1d: ret 4 */ FN_RET(0x007b2d7c); r_esp += 8; return;
}

void f_007b2e20(void) /* sub_7B2E20 */
{
    FN_ENTER(0x007b2e20);
    /* 007b2e20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2e21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b2e22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2e23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b2e26: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b2e28: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b2e2b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 007b2e31: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2e36: jne 0x7b2e3f */ if (!fZ) goto L_007b2e3f;
L_007b2e38:; BB(0x007b2e38);
    /* 007b2e38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2e3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2e3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2e3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2e3e: ret  */ FN_RET(0x007b2e20); r_esp += 4; return;
L_007b2e3f:; BB(0x007b2e3f);
    /* 007b2e3f: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007b2e45: call 0x699510 */ r_esp -= 4; W32(r_esp, 0x7b2e4au); f_00699510();
    /* 007b2e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2e4c: je 0x7b2fc2 */ if (fZ) goto L_007b2fc2;
L_007b2e52:; BB(0x007b2e52);
    /* 007b2e52: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 007b2e55: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2e58: jne 0x7b2fc9 */ if (!fZ) goto L_007b2fc9;
L_007b2e5e:; BB(0x007b2e5e);
    /* 007b2e5e: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007b2e61: mov ebx, dword ptr [eax + 0x90] */ r_ebx = R32((u32)(r_eax+0x90u));
    /* 007b2e67: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2e6a: jne 0x7b2fc9 */ if (!fZ) goto L_007b2fc9;
L_007b2e70:; BB(0x007b2e70);
    /* 007b2e70: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2e73: je 0x7b2e79 */ if (fZ) goto L_007b2e79;
L_007b2e75:; BB(0x007b2e75);
    /* 007b2e75: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007b2e77: jmp 0x7b2e93 */ goto L_007b2e93;
L_007b2e79:; BB(0x007b2e79);
    /* 007b2e79: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2e7c: je 0x7b2e85 */ if (fZ) goto L_007b2e85;
L_007b2e7e:; BB(0x007b2e7e);
    /* 007b2e7e: mov esi, 1 */ r_esi = 0x1u;
    /* 007b2e83: jmp 0x7b2e93 */ goto L_007b2e93;
L_007b2e85:; BB(0x007b2e85);
    /* 007b2e85: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b2e88: je 0x7b2e91 */ if (fZ) goto L_007b2e91;
L_007b2e8a:; BB(0x007b2e8a);
    /* 007b2e8a: mov esi, 2 */ r_esi = 0x2u;
    /* 007b2e8f: jmp 0x7b2e93 */ goto L_007b2e93;
L_007b2e91:; BB(0x007b2e91);
    /* 007b2e91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007b2e93:; BB(0x007b2e93);
    /* 007b2e93: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b2e99: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2e9e: je 0x7b2eaf */ if (fZ) goto L_007b2eaf;
L_007b2ea0:; BB(0x007b2ea0);
    /* 007b2ea0: test ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2ea6: je 0x7b2eaf */ if (fZ) goto L_007b2eaf;
L_007b2ea8:; BB(0x007b2ea8);
    /* 007b2ea8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007b2ead: jmp 0x7b2efa */ goto L_007b2efa;
L_007b2eaf:; BB(0x007b2eaf);
    /* 007b2eaf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b2eb1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7b2eb6u); f_008587a5();
    /* 007b2eb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b2eb7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007b2ebb: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007b2ebf: fdiv dword ptr [0x97dd1c] */ ST(0) = ST(0) / R_F32((u32)(0x97dd1cu));
    /* 007b2ec5: fmul dword ptr [0x97dd20] */ ST(0) = ST(0) * R_F32((u32)(0x97dd20u));
    /* 007b2ecb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b2ece: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7b2ed3u); f_0082e900();
    /* 007b2ed3: movzx edx, byte ptr [ebp + 0x53] */ r_edx = (u32)R8((u32)(r_ebp+0x53u));
    /* 007b2ed7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007b2edb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007b2edf: fmul dword ptr [0x97dd18] */ ST(0) = ST(0) * R_F32((u32)(0x97dd18u));
    /* 007b2ee5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b2ee7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2ee9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2eea: jae 0x7b2efa */ if (!fC) goto L_007b2efa;
L_007b2eec:; BB(0x007b2eec);
    /* 007b2eec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2eee: call 0x7b2fd8 */ r_esp -= 4; W32(r_esp, 0x7b2ef3u); f_007b2fd8();
    /* 007b2ef3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2ef6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2ef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2ef8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2ef9: ret  */ FN_RET(0x007b2e20); r_esp += 4; return;
L_007b2efa:; BB(0x007b2efa);
    /* 007b2efa: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b2eff: movsx eax, byte ptr [ebp + 0x50] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x50u));
    /* 007b2f03: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b2f05: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b2f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b2f08: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b2f0a: mov ebx, dword ptr [esi + ebx*4 + 0x97dcf8] */ r_ebx = R32((u32)(r_esi+r_ebx*4+0x97dcf8u));
    /* 007b2f11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2f12: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x7b2f17u); f_006ded14();
    /* 007b2f17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b2f1a: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 007b2f1d: mov ecx, dword ptr [esi + 0x94] */ r_ecx = R32((u32)(r_esi+0x94u));
    /* 007b2f23: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 007b2f2a: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 007b2f2e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b2f30: movsx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 007b2f37: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007b2f3b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007b2f3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b2f43: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007b2f47: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 007b2f49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2f4b: fcomp dword ptr [0x97dd14] */ fx_compare(ST(0), R_F32((u32)(0x97dd14u))); FPOP();
    /* 007b2f51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2f53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2f54: ja 0x7b2f97 */ if ((!fC&&!fZ)) goto L_007b2f97;
L_007b2f56:; BB(0x007b2f56);
    /* 007b2f56: fcomp dword ptr [0x97dd10] */ fx_compare(ST(0), R_F32((u32)(0x97dd10u))); FPOP();
    /* 007b2f5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b2f5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b2f5f: je 0x7b2f8f */ if (fZ) goto L_007b2f8f;
L_007b2f61:; BB(0x007b2f61);
    /* 007b2f61: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007b2f64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2f66: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007b2f6a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2f6d: jne 0x7b2f7a */ if (!fZ) goto L_007b2f7a;
L_007b2f6f:; BB(0x007b2f6f);
    /* 007b2f6f: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 007b2f72: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b2f78: jmp 0x7b2f9f */ goto L_007b2f9f;
L_007b2f7a:; BB(0x007b2f7a);
    /* 007b2f7a: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b2f80: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 007b2f83: mov dword ptr [ebp + 0x24], 3 */ W32((u32)(r_ebp+0x24u), 0x3u);
    /* 007b2f8a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b2f8d: jmp 0x7b2f9f */ goto L_007b2f9f;
L_007b2f8f:; BB(0x007b2f8f);
    /* 007b2f8f: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b2f95: jmp 0x7b2f9f */ goto L_007b2f9f;
L_007b2f97:; BB(0x007b2f97);
    /* 007b2f97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b2f99: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
L_007b2f9f:; BB(0x007b2f9f);
    /* 007b2f9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2fa0: and eax, 0xffffdfff */ {  u32 a = r_eax; u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b2fa5: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007b2fab: mov ecx, dword ptr [esi + 0x94] */ r_ecx = R32((u32)(r_esi+0x94u));
    /* 007b2fb1: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7b2fb6u); f_0069a088();
    /* 007b2fb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2fb8: je 0x7b2fc9 */ if (fZ) goto L_007b2fc9;
L_007b2fba:; BB(0x007b2fba);
    /* 007b2fba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b2fbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2fbd: call 0x7b2bc0 */ r_esp -= 4; W32(r_esp, 0x7b2fc2u); f_007b2bc0();
L_007b2fc2:; BB(0x007b2fc2);
    /* 007b2fc2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2fc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2fc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2fc8: ret  */ FN_RET(0x007b2e20); r_esp += 4; return;
L_007b2fc9:; BB(0x007b2fc9);
    /* 007b2fc9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b2fcb: call 0x7b2fd8 */ r_esp -= 4; W32(r_esp, 0x7b2fd0u); f_007b2fd8();
    /* 007b2fd0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2fd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b2fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b2fd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2fd6: ret  */ FN_RET(0x007b2e20); r_esp += 4; return;
}

void f_007b2fd8(void) /* sub_7B2FD8 */
{
    FN_ENTER(0x007b2fd8);
    /* 007b2fd8: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 007b2fdb: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 007b2fde: cmp eax, dword ptr [edx + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b2fe4: jne 0x7b2fec */ if (!fZ) goto L_007b2fec;
L_007b2fe6:; BB(0x007b2fe6);
    /* 007b2fe6: movsx edx, word ptr [ecx + 0x5e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x5eu));
    /* 007b2fea: jmp 0x7b2ff4 */ goto L_007b2ff4;
L_007b2fec:; BB(0x007b2fec);
    /* 007b2fec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b2fee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2ff0: mov word ptr [ecx + 0x5e], ax */ W16((u32)(r_ecx+0x5eu), (u16)r_eax);
L_007b2ff4:; BB(0x007b2ff4);
    /* 007b2ff4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b2ff7: jl 0x7b2fff */ if ((fS!=fO)) goto L_007b2fff;
L_007b2ff9:; BB(0x007b2ff9);
    /* 007b2ff9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b2ffb: mov word ptr [ecx + 0x5e], ax */ W16((u32)(r_ecx+0x5eu), (u16)r_eax);
L_007b2fff:; BB(0x007b2fff);
    /* 007b2fff: call 0x7b3008 */ r_esp -= 4; W32(r_esp, 0x7b3004u); f_007b3008();
    /* 007b3004: ret  */ FN_RET(0x007b2fd8); r_esp += 4; return;
}

