#include "protos.h"

void f_005a211c(void) /* sub_5A211C */
{
    FN_ENTER(0x005a211c);
    /* 005a211c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a211d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a211f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2121: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a2126u); f_007aa094();
    /* 005a2126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2128: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a212a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a212fu); f_007aaa30();
    /* 005a212f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2131: je 0x5a2163 */ if (fZ) goto L_005a2163;
L_005a2133:; BB(0x005a2133);
    /* 005a2133: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a2138u); f_00807ac0();
    /* 005a2138: push dword ptr [eax*4 + 0x9c026c] */ { u32 v = R32((u32)(r_eax*4+0x9c026cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a213f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2141: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a2146u); f_007879b8();
    /* 005a2146: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2148: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005a214b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a214d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a214e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a214f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2151: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a2156u); f_00814298();
    /* 005a2156: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a215b: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a2160u); f_00814680();
    /* 005a2160: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a2163:; BB(0x005a2163);
    /* 005a2163: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 005a216d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a216f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2171: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
    /* 005a217b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a217d: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a2182u); f_00772b44();
    /* 005a2182: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2184: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5a2189u); f_007b6880();
    /* 005a2189: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005a218f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a2192: je 0x5a21c9 */ if (fZ) goto L_005a21c9;
L_005a2194:; BB(0x005a2194);
    /* 005a2194: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005a2197: and eax, 0xfbfff9ff */ {  u32 a = r_eax; u32 b = 0xfbfff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a219c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005a219f: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005a21a5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005a21a8: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a21ae: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005a21b1: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 005a21b8: mov dword ptr [ebp + 0x390], 0 */ W32((u32)(r_ebp+0x390u), 0x0u);
    /* 005a21c2: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
L_005a21c9:; BB(0x005a21c9);
    /* 005a21c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a21ca: ret  */ FN_RET(0x005a211c); r_esp += 4; return;
}

void f_005a21cc(void) /* sub_5A21CC */
{
    FN_ENTER(0x005a21cc);
    /* 005a21cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a21cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a21ce: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a21d1: mov esi, ecx */ r_esi = r_ecx;
    /* 005a21d3: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005a21da: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a21df: jl 0x5a2202 */ if ((fS!=fO)) goto L_005a2202;
L_005a21e1:; BB(0x005a21e1);
    /* 005a21e1: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a21e6: jge 0x5a21f9 */ if ((fS==fO)) goto L_005a21f9;
L_005a21e8:; BB(0x005a21e8);
    /* 005a21e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a21e9: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5a21eeu); f_00786b3c();
    /* 005a21ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a21ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a21f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005a21f2: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a21f7u); f_007706b0();
    /* 005a21f7: jmp 0x5a222e */ goto L_005a222e;
L_005a21f9:; BB(0x005a21f9);
    /* 005a21f9: mov ecx, esi */ r_ecx = r_esi;
    /* 005a21fb: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a2200u); f_007865cc();
    /* 005a2200: jmp 0x5a222e */ goto L_005a222e;
L_005a2202:; BB(0x005a2202);
    /* 005a2202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2203: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a2208u); f_0068d5a8();
    /* 005a2208: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a2209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a220b: je 0x5a2225 */ if (fZ) goto L_005a2225;
L_005a220d:; BB(0x005a220d);
    /* 005a220d: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005a2213: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2219: jne 0x5a2225 */ if (!fZ) goto L_005a2225;
L_005a221b:; BB(0x005a221b);
    /* 005a221b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a221c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a221e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a2223u); f_007706b0();
    /* 005a2223: jmp 0x5a222e */ goto L_005a222e;
L_005a2225:; BB(0x005a2225);
    /* 005a2225: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2227: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2229: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a222eu); f_007706b0();
L_005a222e:; BB(0x005a222e);
    /* 005a222e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a2231: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a2236: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 005a223c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a223f: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a2242: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a2245: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a2248: mov ecx, esi */ r_ecx = r_esi;
    /* 005a224a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a224fu); f_007aa094();
    /* 005a224f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2251: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a2256u); f_00770738();
    /* 005a2256: mov ebx, eax */ r_ebx = r_eax;
    /* 005a2258: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005a225f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2262: jne 0x5a2403 */ if (!fZ) goto L_005a2403;
L_005a2268:; BB(0x005a2268);
    /* 005a2268: push dword ptr [esi + 0x2ac] */ { u32 v = R32((u32)(r_esi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a226e: push dword ptr [esi + 0x2a8] */ { u32 v = R32((u32)(r_esi+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2274: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2276: push dword ptr [esi + 0x2a4] */ { u32 v = R32((u32)(r_esi+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a227c: push dword ptr [esi + 0x2a0] */ { u32 v = R32((u32)(r_esi+0x2a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2282: push dword ptr [esi + 0x29c] */ { u32 v = R32((u32)(r_esi+0x29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2288: push dword ptr [esi + 0x298] */ { u32 v = R32((u32)(r_esi+0x298u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a228e: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2294: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5a2299u); f_00771f5c();
    /* 005a2299: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a229b: mov ecx, esi */ r_ecx = r_esi;
    /* 005a229d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5a22a0u); call_ind(t); }
    /* 005a22a0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a22a5: mov ecx, esi */ r_ecx = r_esi;
    /* 005a22a7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a22acu); f_007aaa30();
    /* 005a22ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a22ae: je 0x5a256d */ if (fZ) goto L_005a256d;
L_005a22b4:; BB(0x005a22b4);
    /* 005a22b4: mov eax, 2 */ r_eax = 0x2u;
    /* 005a22b9: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a22c0: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a22c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a22c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a22c9: jle 0x5a23b7 */ if ((fZ||fS!=fO)) goto L_005a23b7;
L_005a22cf:; BB(0x005a22cf);
    /* 005a22cf: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_005a22d3:; BB(0x005a22d3);
    /* 005a22d3: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005a22da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a22dc: je 0x5a257c */ if (fZ) goto L_005a257c;
L_005a22e2:; BB(0x005a22e2);
    /* 005a22e2: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a22e6: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a22ec: jge 0x5a2573 */ if ((fS==fO)) goto L_005a2573;
L_005a22f2:; BB(0x005a22f2);
    /* 005a22f2: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 005a22f9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a22fc: jne 0x5a23a8 */ if (!fZ) goto L_005a23a8;
L_005a2302:; BB(0x005a2302);
    /* 005a2302: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005a2308: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005a230e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a230f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2310: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a2315u); f_007a9180();
    /* 005a2315: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005a2319: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a231c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a2320: mov ecx, dword ptr [esi + 0x31c] */ r_ecx = R32((u32)(r_esi+0x31cu));
    /* 005a2326: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 005a2329: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a232b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a232d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a232f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2330: jb 0x5a236e */ if (fC) goto L_005a236e;
L_005a2332:; BB(0x005a2332);
    /* 005a2332: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 005a2335: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a2339: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005a233d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a233f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005a2343: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a2345: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005a234a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005a234e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a234f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2350: mov ecx, edi */ r_ecx = r_edi;
    /* 005a2352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2353: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a235a: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5a235du); call_ind(t); }
    /* 005a235d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a235f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2362: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a2366: mov ecx, edi */ r_ecx = r_edi;
    /* 005a2368: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005a236b: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5a236eu); call_ind(t); }
L_005a236e:; BB(0x005a236e);
    /* 005a236e: fld dword ptr [0xa74794] */ FPUSH(R_F32((u32)(0xa74794u)));
    /* 005a2374: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a2376: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a237a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a237c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a237e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a237f: jbe 0x5a2388 */ if ((fC||fZ)) goto L_005a2388;
L_005a2381:; BB(0x005a2381);
    /* 005a2381: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a2386: jmp 0x5a23a8 */ goto L_005a23a8;
L_005a2388:; BB(0x005a2388);
    /* 005a2388: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a238c: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2392: je 0x5a239b */ if (fZ) goto L_005a239b;
L_005a2394:; BB(0x005a2394);
    /* 005a2394: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a2399: jmp 0x5a23a8 */ goto L_005a23a8;
L_005a239b:; BB(0x005a239b);
    /* 005a239b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a239d: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x5a23a2u); f_004d4288();
    /* 005a23a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a23a3: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_005a23a8:; BB(0x005a23a8);
    /* 005a23a8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a23ab: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a23ad: jl 0x5a22d3 */ if ((fS!=fO)) goto L_005a22d3;
L_005a23b3:; BB(0x005a23b3);
    /* 005a23b3: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_005a23b7:; BB(0x005a23b7);
    /* 005a23b7: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a23bc: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005a23bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23c0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a23c5u); f_0050b510();
    /* 005a23c5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a23ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23cb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a23d0u); f_0050b510();
    /* 005a23d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a23d3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a23d8u); f_00807ac0();
    /* 005a23d8: push dword ptr [eax*4 + 0x9c01dc] */ { u32 v = R32((u32)(r_eax*4+0x9c01dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a23df: mov ecx, esi */ r_ecx = r_esi;
    /* 005a23e1: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a23e6u); f_007879b8();
    /* 005a23e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a23e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a23ec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a23f1u); f_00814298();
    /* 005a23f1: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a23f6: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a23fbu); f_00814680();
    /* 005a23fb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a23fe: jmp 0x5a256d */ goto L_005a256d;
L_005a2403:; BB(0x005a2403);
    /* 005a2403: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2406: jne 0x5a2454 */ if (!fZ) goto L_005a2454;
L_005a2408:; BB(0x005a2408);
    /* 005a2408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a240a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a240c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a240e: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a2413u); f_00772b44();
    /* 005a2413: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005a2419: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a241c: je 0x5a256d */ if (fZ) goto L_005a256d;
L_005a2422:; BB(0x005a2422);
    /* 005a2422: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a2425: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 005a242b: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a2430: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a2433: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a2436: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a2439: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a243c: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a2446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2448: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a244f: jmp 0x5a256d */ goto L_005a256d;
L_005a2454:; BB(0x005a2454);
    /* 005a2454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2458: mov ecx, esi */ r_ecx = r_esi;
    /* 005a245a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a245fu); f_00772b44();
    /* 005a245f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2464: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2466: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a246bu); f_007aaa30();
    /* 005a246b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a246d: je 0x5a256d */ if (fZ) goto L_005a256d;
L_005a2473:; BB(0x005a2473);
    /* 005a2473: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2475: je 0x5a252f */ if (fZ) goto L_005a252f;
L_005a247b:; BB(0x005a247b);
    /* 005a247b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a247d: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2483: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2485: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a248b: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2491: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a2496u); f_00771c8c();
    /* 005a2496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2498: jne 0x5a24ab */ if (!fZ) goto L_005a24ab;
L_005a249a:; BB(0x005a249a);
    /* 005a249a: mov eax, 2 */ r_eax = 0x2u;
    /* 005a249f: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a24a6: jmp 0x5a253b */ goto L_005a253b;
L_005a24ab:; BB(0x005a24ab);
    /* 005a24ab: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a24b1: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a24b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005a24b9: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a24bf: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a24c4u); f_00771f1c();
    /* 005a24c4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a24c7: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 005a24cd: mov ebx, dword ptr [esi + 0x2a8] */ r_ebx = R32((u32)(r_esi+0x2a8u));
    /* 005a24d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a24d6: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 005a24dc: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005a24e0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a24e4: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005a24ea: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a24efu); f_0082f9c4();
    /* 005a24ef: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a24f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a24f4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a24f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a24fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a24fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a24fd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a2500: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5a2505u); f_0082dc9c();
    /* 005a2505: fld dword ptr [0x92a05c] */ FPUSH(R_F32((u32)(0x92a05cu)));
    /* 005a250b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a250d: fld dword ptr [0x92a058] */ FPUSH(R_F32((u32)(0x92a058u)));
    /* 005a2513: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 005a2519: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005a251b: fstp dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0)); FPOP();
    /* 005a2521: mov eax, 1 */ r_eax = 0x1u;
    /* 005a2526: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a252d: jmp 0x5a253b */ goto L_005a253b;
L_005a252f:; BB(0x005a252f);
    /* 005a252f: mov eax, 2 */ r_eax = 0x2u;
    /* 005a2534: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_005a253b:; BB(0x005a253b);
    /* 005a253b: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2540: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005a2543: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2544: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a2549u); f_0050b510();
    /* 005a2549: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a254c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a2551u); f_00807ac0();
    /* 005a2551: push dword ptr [eax*4 + 0x9c01b8] */ { u32 v = R32((u32)(r_eax*4+0x9c01b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2558: mov ecx, esi */ r_ecx = r_esi;
    /* 005a255a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a255fu); f_007879b8();
    /* 005a255f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a2561: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2563: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2565: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a256au); f_00814298();
    /* 005a256a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a256d:; BB(0x005a256d);
    /* 005a256d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a2570: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a2571: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a2572: ret  */ FN_RET(0x005a21cc); r_esp += 4; return;
L_005a2573:; BB(0x005a2573);
    /* 005a2573: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 005a2577: jmp 0x5a23b7 */ goto L_005a23b7;
L_005a257c:; BB(0x005a257c);
    /* 005a257c: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 005a2580: jmp 0x5a23b7 */ goto L_005a23b7;
}

void f_005a2588(void) /* sub_5A2588 */
{
    FN_ENTER(0x005a2588);
    /* 005a2588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2589: mov ebx, esp */ r_ebx = r_esp;
    /* 005a258b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005a258e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a258f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2591: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2594: mov esi, ecx */ r_esi = r_ecx;
    /* 005a2596: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005a259d: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a25a2: jl 0x5a25c5 */ if ((fS!=fO)) goto L_005a25c5;
L_005a25a4:; BB(0x005a25a4);
    /* 005a25a4: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a25a9: jge 0x5a25bc */ if ((fS==fO)) goto L_005a25bc;
L_005a25ab:; BB(0x005a25ab);
    /* 005a25ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a25ac: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5a25b1u); f_00786b3c();
    /* 005a25b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a25b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a25b3: mov ecx, esi */ r_ecx = r_esi;
    /* 005a25b5: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a25bau); f_007706b0();
    /* 005a25ba: jmp 0x5a260f */ goto L_005a260f;
L_005a25bc:; BB(0x005a25bc);
    /* 005a25bc: mov ecx, esi */ r_ecx = r_esi;
    /* 005a25be: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a25c3u); f_007865cc();
    /* 005a25c3: jmp 0x5a260f */ goto L_005a260f;
L_005a25c5:; BB(0x005a25c5);
    /* 005a25c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a25c6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a25cbu); f_0068d5a8();
    /* 005a25cb: mov edi, eax */ r_edi = r_eax;
    /* 005a25cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a25d0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25d2: je 0x5a2606 */ if (fZ) goto L_005a2606;
L_005a25d4:; BB(0x005a25d4);
    /* 005a25d4: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 005a25da: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25e0: jne 0x5a2606 */ if (!fZ) goto L_005a2606;
L_005a25e2:; BB(0x005a25e2);
    /* 005a25e2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a25e4: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5a25e9u); f_007ba980();
    /* 005a25e9: mov ebp, eax */ r_ebp = r_eax;
    /* 005a25eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005a25ed: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5a25f2u); f_007ba980();
    /* 005a25f2: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 005a25f5: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005a25f8: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25fa: jne 0x5a2606 */ if (!fZ) goto L_005a2606;
L_005a25fc:; BB(0x005a25fc);
    /* 005a25fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a25fd: mov ecx, esi */ r_ecx = r_esi;
    /* 005a25ff: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a2604u); f_007706b0();
    /* 005a2604: jmp 0x5a260f */ goto L_005a260f;
L_005a2606:; BB(0x005a2606);
    /* 005a2606: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2608: mov ecx, esi */ r_ecx = r_esi;
    /* 005a260a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a260fu); f_007706b0();
L_005a260f:; BB(0x005a260f);
    /* 005a260f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2611: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a2616u); f_007aa094();
    /* 005a2616: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2618: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a261du); f_00770738();
    /* 005a261d: mov ebp, eax */ r_ebp = r_eax;
    /* 005a261f: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005a2626: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2629: jne 0x5a28d4 */ if (!fZ) goto L_005a28d4;
L_005a262f:; BB(0x005a262f);
    /* 005a262f: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005a2635: fcom dword ptr [0x92a030] */ fx_compare(ST(0), R_F32((u32)(0x92a030u))); 
    /* 005a263b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a263d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a263e: jae 0x5a2647 */ if (!fC) goto L_005a2647;
L_005a2640:; BB(0x005a2640);
    /* 005a2640: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a2642: jmp 0x5a2874 */ goto L_005a2874;
L_005a2647:; BB(0x005a2647);
    /* 005a2647: fcomp dword ptr [0x92a02c] */ fx_compare(ST(0), R_F32((u32)(0x92a02cu))); FPOP();
    /* 005a264d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a264f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2650: ja 0x5a2874 */ if ((!fC&&!fZ)) goto L_005a2874;
L_005a2656:; BB(0x005a2656);
    /* 005a2656: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005a265e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a2663: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 005a266b: mov dword ptr [esp + 0x14], 0x41c80000 */ W32((u32)(r_esp+0x14u), 0x41c80000u);
    /* 005a2673: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a2678u); f_0082d990();
    /* 005a2678: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a267b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a267d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a2682u); f_0082d8bc();
    /* 005a2682: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005a2686: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2687: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005a268b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a268d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a2692u); f_0082eab8();
    /* 005a2692: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005a2697: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5a269cu); f_0082eb80();
    /* 005a269c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005a26a0: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005a26a6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a26abu); f_0082ebac();
    /* 005a26ab: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a26b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a26b7: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 005a26bf: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 005a26c7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a26ccu); f_0082d990();
    /* 005a26cc: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a26cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a26d1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a26d6u); f_0082d8bc();
    /* 005a26d6: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005a26d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a26da: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a26de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a26e0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a26e5u); f_0082eab8();
    /* 005a26e5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005a26ea: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5a26efu); f_0082eb80();
    /* 005a26ef: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a26f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a26f4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a26f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a26fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a26fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a26fd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a2700: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5a2705u); f_0082dc9c();
    /* 005a2705: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a2709: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a270b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a270d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a2711: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a2713: fmul qword ptr [0x929f00] */ ST(0) = ST(0) * R_F64((u32)(0x929f00u));
    /* 005a2719: fdiv qword ptr [0x929ef8] */ ST(0) = ST(0) / R_F64((u32)(0x929ef8u));
    /* 005a271f: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 005a2723: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 005a2728: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a272d: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005a2731: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 005a2735: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a2739: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005a273d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a2740: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005a2748: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a274a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a274c: fmul qword ptr [0x929f00] */ ST(0) = ST(0) * R_F64((u32)(0x929f00u));
    /* 005a2752: fdiv qword ptr [0x929ef8] */ ST(0) = ST(0) / R_F64((u32)(0x929ef8u));
    /* 005a2758: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 005a275c: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 005a2761: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a2766: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005a276a: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 005a276e: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a2772: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005a2776: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 005a277a: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005a277e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a2780: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005a2784: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005a2788: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a278a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a278b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a278c: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x5a2791u); f_0050bab4();
    /* 005a2791: mov edi, eax */ r_edi = r_eax;
    /* 005a2793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2796: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a279b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a279d: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x5a27a2u); f_00508dac();
    /* 005a27a2: movzx edx, word ptr [edi + 0x2e] */ r_edx = (u32)R16((u32)(r_edi+0x2eu));
    /* 005a27a6: mov dword ptr [edi + 0x68], 0x3fc00000 */ W32((u32)(r_edi+0x68u), 0x3fc00000u);
    /* 005a27ad: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a27b3: mov word ptr [edi + 0x2e], dx */ W16((u32)(r_edi+0x2eu), (u16)r_edx);
    /* 005a27b7: push 0xff20bf20 */ { u32 v = 0xff20bf20u; r_esp -= 4; W32(r_esp, v); }
    /* 005a27bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005a27be: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5a27c3u); f_00508ee4();
    /* 005a27c3: fld dword ptr [0x92a028] */ FPUSH(R_F32((u32)(0x92a028u)));
    /* 005a27c9: fcomp dword ptr [esi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc0u))); FPOP();
    /* 005a27cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a27d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a27d2: ja 0x5a2874 */ if ((!fC&&!fZ)) goto L_005a2874;
L_005a27d8:; BB(0x005a27d8);
    /* 005a27d8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a27da: je 0x5a2874 */ if (fZ) goto L_005a2874;
L_005a27e0:; BB(0x005a27e0);
    /* 005a27e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a27e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a27e3: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x5a27e8u); f_00772c08();
    /* 005a27e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a27ea: jl 0x5a2874 */ if ((fS!=fO)) goto L_005a2874;
L_005a27f0:; BB(0x005a27f0);
    /* 005a27f0: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005a27f3: mov dword ptr [esp + 0x24], 0xf */ W32((u32)(r_esp+0x24u), 0xfu);
    /* 005a27fb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a2800: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2806: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a280a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a280c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a280d: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x5a2810u); call_ind(t); }
    /* 005a2810: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a2812: mov edi, dword ptr [esi + 0x31c] */ r_edi = R32((u32)(r_esi+0x31cu));
    /* 005a2818: movsx edi, word ptr [edi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 005a281b: movsx edx, word ptr [esi + 0x2ce] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2ceu));
    /* 005a2822: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005a2826: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2828: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005a2830: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a2835u); f_007751b0();
    /* 005a2835: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 005a2839: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 005a283d: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005a2841: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a2844: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005a2846: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 005a284a: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 005a284e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a2850: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005a2854: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005a2859: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a285b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a285c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a285d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a285f: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2863: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2867: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2868: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5a286bu); call_ind(t); }
    /* 005a286b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a286d: mov ecx, esi */ r_ecx = r_esi;
    /* 005a286f: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a2874u); f_007865cc();
L_005a2874:; BB(0x005a2874);
    /* 005a2874: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2879: mov ecx, esi */ r_ecx = r_esi;
    /* 005a287b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2880u); f_007aaa30();
    /* 005a2880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2882: je 0x5a28a8 */ if (fZ) goto L_005a28a8;
L_005a2884:; BB(0x005a2884);
    /* 005a2884: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a2889u); f_00807ac0();
    /* 005a2889: push dword ptr [eax*4 + 0x9c0320] */ { u32 v = R32((u32)(r_eax*4+0x9c0320u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2890: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2892: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a2897u); f_007879b8();
    /* 005a2897: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005a289a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a289c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a289d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a289e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a289f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a28a0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a28a5u); f_00814298();
    /* 005a28a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a28a8:; BB(0x005a28a8);
    /* 005a28a8: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005a28ae: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a28b1: je 0x5a2a1c */ if (fZ) goto L_005a2a1c;
L_005a28b7:; BB(0x005a28b7);
    /* 005a28b7: mov eax, 2 */ r_eax = 0x2u;
    /* 005a28bc: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a28c3: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 005a28c8: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
    /* 005a28cf: jmp 0x5a2a1c */ goto L_005a2a1c;
L_005a28d4:; BB(0x005a28d4);
    /* 005a28d4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a28d7: jne 0x5a291c */ if (!fZ) goto L_005a291c;
L_005a28d9:; BB(0x005a28d9);
    /* 005a28d9: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 005a28df: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a28e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a28e5: jl 0x5a2901 */ if ((fS!=fO)) goto L_005a2901;
L_005a28e7:; BB(0x005a28e7);
    /* 005a28e7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a28ea: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a28f4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a28f9: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a28fc: jmp 0x5a2a1c */ goto L_005a2a1c;
L_005a2901:; BB(0x005a2901);
    /* 005a2901: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 005a2907: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2909: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a2910: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a2917: jmp 0x5a2a1c */ goto L_005a2a1c;
L_005a291c:; BB(0x005a291c);
    /* 005a291c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a291e: jne 0x5a2947 */ if (!fZ) goto L_005a2947;
L_005a2920:; BB(0x005a2920);
    /* 005a2920: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a2923: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a292d: mov eax, 2 */ r_eax = 0x2u;
    /* 005a2932: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a2939: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a293f: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005a2942: jmp 0x5a2a1c */ goto L_005a2a1c;
L_005a2947:; BB(0x005a2947);
    /* 005a2947: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2949: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a294f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2951: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2957: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a295d: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a2962u); f_00771c8c();
    /* 005a2962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2964: je 0x5a29ad */ if (fZ) goto L_005a29ad;
L_005a2966:; BB(0x005a2966);
    /* 005a2966: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a296c: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2972: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2974: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a297a: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a297fu); f_00771f1c();
    /* 005a297f: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005a2985: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2988: mov ecx, esi */ r_ecx = r_esi;
    /* 005a298a: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5a298fu); f_00772358();
    /* 005a298f: mov ebp, eax */ r_ebp = r_eax;
    /* 005a2991: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2994: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 005a2996: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005a299c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a299e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a29a1: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x5a29a4u); call_ind(t); }
    /* 005a29a4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005a29a6: mov ecx, esi */ r_ecx = r_esi;
    /* 005a29a8: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5a29abu); call_ind(t); }
    /* 005a29ab: jmp 0x5a29ee */ goto L_005a29ee;
L_005a29ad:; BB(0x005a29ad);
    /* 005a29ad: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a29b0: mov edi, dword ptr [ebp + 0x300] */ r_edi = R32((u32)(r_ebp+0x300u));
    /* 005a29b6: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 005a29bc: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 005a29c2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005a29c5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a29c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a29cd: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005a29d3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a29d8u); f_0082f9c4();
    /* 005a29d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a29db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a29dc: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005a29e2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a29e4: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a29e7: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5a29ecu); f_00771858();
    /* 005a29ec: mov ebp, eax */ r_ebp = r_eax;
L_005a29ee:; BB(0x005a29ee);
    /* 005a29ee: cmp ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a29f4: jge 0x5a2a10 */ if ((fS==fO)) goto L_005a2a10;
L_005a29f6:; BB(0x005a29f6);
    /* 005a29f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005a29fb: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a2a02: mov edx, 4 */ r_edx = 0x4u;
    /* 005a2a07: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005a2a0e: jmp 0x5a2a1c */ goto L_005a2a1c;
L_005a2a10:; BB(0x005a2a10);
    /* 005a2a10: mov eax, 2 */ r_eax = 0x2u;
    /* 005a2a15: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_005a2a1c:; BB(0x005a2a1c);
    /* 005a2a1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a20: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2a22: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a2a27u); f_00772b44();
    /* 005a2a27: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2a29: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5a2a2eu); f_007b6880();
    /* 005a2a2e: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a2a31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2a32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a2a33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a2a34: mov esp, ebx */ r_esp = r_ebx;
    /* 005a2a36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a2a37: ret  */ FN_RET(0x005a2588); r_esp += 4; return;
}

void f_005a2a38(void) /* sub_5A2A38 */
{
    FN_ENTER(0x005a2a38);
    /* 005a2a38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a39: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2a3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a3d: push 0x8d8864 */ { u32 v = 0x8d8864u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a2a48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a2a50: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2a53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a2a56: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005a2a59: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005a2a5c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005a2a5f: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 005a2a66: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a2a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a6b: je 0x5a2b56 */ if (fZ) goto L_005a2b56;
L_005a2a71:; BB(0x005a2a71);
    /* 005a2a71: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a74: je 0x5a2bba */ if (fZ) goto L_005a2bba;
L_005a2a7a:; BB(0x005a2a7a);
    /* 005a2a7a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a7d: jne 0x5a2b4b */ if (!fZ) goto L_005a2b4b;
L_005a2a83:; BB(0x005a2a83);
    /* 005a2a83: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a2a88u); f_007aa094();
    /* 005a2a88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2a8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a8d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2a92u); f_007aaa30();
    /* 005a2a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a94: je 0x5a2aa8 */ if (fZ) goto L_005a2aa8;
L_005a2a96:; BB(0x005a2a96);
    /* 005a2a96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2a99: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 005a2a9f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2aa2: je 0x5a2f3c */ if (fZ) goto L_005a2f3c;
L_005a2aa8:; BB(0x005a2aa8);
    /* 005a2aa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2aab: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005a2ab1: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ab4: je 0x5a2b40 */ if (fZ) goto L_005a2b40;
L_005a2aba:; BB(0x005a2aba);
    /* 005a2aba: mov edx, eax */ r_edx = r_eax;
    /* 005a2abc: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2ac2: movsx edx, word ptr [edx + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x344u));
    /* 005a2ac9: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a2acc: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 005a2acf: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005a2ad2: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 005a2ad5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005a2ad7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a2ad9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2ada: jb 0x5a2aeb */ if (fC) goto L_005a2aeb;
L_005a2adc:; BB(0x005a2adc);
    /* 005a2adc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2adf: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 005a2ae6: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2aeb:; BB(0x005a2aeb);
    /* 005a2aeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a2aed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2af0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a2af2: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 005a2af9: mov eax, 1 */ r_eax = 0x1u;
    /* 005a2afe: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005a2b05: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 005a2b0b: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a2b10u); f_007865cc();
    /* 005a2b10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2b13: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 005a2b19: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2b1c: jl 0x5a2b28 */ if ((fS!=fO)) goto L_005a2b28;
L_005a2b1e:; BB(0x005a2b1e);
    /* 005a2b1e: mov dword ptr [eax + 0x38c], 0xffffffff */ W32((u32)(r_eax+0x38cu), 0xffffffffu);
L_005a2b28:; BB(0x005a2b28);
    /* 005a2b28: mov edx, eax */ r_edx = r_eax;
    /* 005a2b2a: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2b30: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005a2b33: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a2b38: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005a2b3b: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2b40:; BB(0x005a2b40);
    /* 005a2b40: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2b46: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2b4b:; BB(0x005a2b4b);
    /* 005a2b4b: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2b51: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2b56:; BB(0x005a2b56);
    /* 005a2b56: mov eax, ecx */ r_eax = r_ecx;
    /* 005a2b58: movsx eax, byte ptr [eax + 0x3a0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x3a0u));
    /* 005a2b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a2b61: jle 0x5a2b81 */ if ((fZ||fS!=fO)) goto L_005a2b81;
L_005a2b63:; BB(0x005a2b63);
    /* 005a2b63: mov edx, ecx */ r_edx = r_ecx;
    /* 005a2b65: mov ecx, dword ptr [edx + 0x370] */ r_ecx = R32((u32)(r_edx+0x370u));
    /* 005a2b6b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2b6e: mov byte ptr [edx + 0x3a0], al */ W8((u32)(r_edx+0x3a0u), (u8)r_eax);
    /* 005a2b74: mov eax, dword ptr [0xa747b0] */ r_eax = R32((u32)(0xa747b0u));
    /* 005a2b79: mov ebx, dword ptr [eax + ecx*4] */ r_ebx = R32((u32)(r_eax+r_ecx*4));
    /* 005a2b7c: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 005a2b7f: jmp 0x5a2b94 */ goto L_005a2b94;
L_005a2b81:; BB(0x005a2b81);
    /* 005a2b81: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a2b87: mov eax, ecx */ r_eax = r_ecx;
    /* 005a2b89: mov ecx, dword ptr [eax + 0x370] */ r_ecx = R32((u32)(r_eax+0x370u));
    /* 005a2b8f: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 005a2b92: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_005a2b94:; BB(0x005a2b94);
    /* 005a2b94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2b97: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 005a2b9d: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005a2ba3: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a2ba8: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005a2bae: mov edx, 1 */ r_edx = 0x1u;
    /* 005a2bb3: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
L_005a2bba:; BB(0x005a2bba);
    /* 005a2bba: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a2bbfu); f_007aa094();
    /* 005a2bbf: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2bc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2bc7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2bccu); f_007aaa30();
    /* 005a2bcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2bce: je 0x5a2c57 */ if (fZ) goto L_005a2c57;
L_005a2bd4:; BB(0x005a2bd4);
    /* 005a2bd4: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005a2bdb: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2be0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a2be5u); f_005caba4();
    /* 005a2be5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a2be8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2beb: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005a2bee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2bf0: je 0x5a2f48 */ if (fZ) goto L_005a2f48;
L_005a2bf6:; BB(0x005a2bf6);
    /* 005a2bf6: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 005a2bfd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a2c04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2c07: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c0b: call 0x5a2fb0 */ r_esp -= 4; W32(r_esp, 0x5a2c10u); f_005a2fb0();
    /* 005a2c10: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005a2c17:; BB(0x005a2c17);
    /* 005a2c17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a2c1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2c21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2c24: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 005a2c27: lea edx, [eax + 0x5c] */ r_edx = (u32)(r_eax+0x5cu);
    /* 005a2c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c2c: call 0x5a3004 */ r_esp -= 4; W32(r_esp, 0x5a2c31u); f_005a3004();
    /* 005a2c31: mov ecx, dword ptr [0xa747ac] */ r_ecx = R32((u32)(0xa747acu));
    /* 005a2c37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c39: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5a2c3eu); f_005b8610();
    /* 005a2c3e: mov ebx, eax */ r_ebx = r_eax;
    /* 005a2c40: mov ecx, dword ptr [0xa747ac] */ r_ecx = R32((u32)(0xa747acu));
    /* 005a2c46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c48: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5a2c4du); f_005b8624();
    /* 005a2c4d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c52: call 0x5a30b0 */ r_esp -= 4; W32(r_esp, 0x5a2c57u); f_005a30b0();
L_005a2c57:; BB(0x005a2c57);
    /* 005a2c57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2c5a: movsx edx, byte ptr [eax + 0x3a0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x3a0u));
    /* 005a2c61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a2c63: jle 0x5a2ca7 */ if ((fZ||fS!=fO)) goto L_005a2ca7;
L_005a2c65:; BB(0x005a2c65);
    /* 005a2c65: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c6a: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2c6c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2c71u); f_007aaa30();
    /* 005a2c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2c73: je 0x5a2ca7 */ if (fZ) goto L_005a2ca7;
L_005a2c75:; BB(0x005a2c75);
    /* 005a2c75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2c78: movsx ecx, word ptr [edx + 0xb8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xb8u));
    /* 005a2c7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2c81: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 005a2c88: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2c8b: jne 0x5a2c9b */ if (!fZ) goto L_005a2c9b;
L_005a2c8d:; BB(0x005a2c8d);
    /* 005a2c8d: mov eax, 9 */ r_eax = 0x9u;
    /* 005a2c92: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 005a2c99: jmp 0x5a2ca7 */ goto L_005a2ca7;
L_005a2c9b:; BB(0x005a2c9b);
    /* 005a2c9b: mov eax, 3 */ r_eax = 0x3u;
    /* 005a2ca0: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_005a2ca7:; BB(0x005a2ca7);
    /* 005a2ca7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2caf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2cb4u); f_007aaa30();
    /* 005a2cb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2cb6: je 0x5a2cea */ if (fZ) goto L_005a2cea;
L_005a2cb8:; BB(0x005a2cb8);
    /* 005a2cb8: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a2cbdu); f_00807ac0();
    /* 005a2cbd: push dword ptr [eax*4 + 0x9c0200] */ { u32 v = R32((u32)(r_eax*4+0x9c0200u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2cc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2cc7: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a2cccu); f_007879b8();
    /* 005a2ccc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2ccf: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 005a2cd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2cd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a2cddu); f_00814298();
    /* 005a2cdd: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ce2: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a2ce7u); f_00814680();
    /* 005a2ce7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a2cea:; BB(0x005a2cea);
    /* 005a2cea: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2cf2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a2cf7u); f_007aaa30();
    /* 005a2cf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2cf9: jne 0x5a2e83 */ if (!fZ) goto L_005a2e83;
L_005a2cff:; BB(0x005a2cff);
    /* 005a2cff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2d02: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 005a2d08: fcom dword ptr [0xa74798] */ fx_compare(ST(0), R_F32((u32)(0xa74798u))); 
    /* 005a2d0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a2d10: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 005a2d16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2d17: jb 0x5a2db0 */ if (fC) goto L_005a2db0;
L_005a2d1d:; BB(0x005a2d1d);
    /* 005a2d1d: fcomp dword ptr [0x92a00c] */ fx_compare(ST(0), R_F32((u32)(0x92a00cu))); FPOP();
    /* 005a2d23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a2d25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2d26: ja 0x5a2db2 */ if ((!fC&&!fZ)) goto L_005a2db2;
L_005a2d2c:; BB(0x005a2d2c);
    /* 005a2d2c: mov eax, edx */ r_eax = r_edx;
    /* 005a2d2e: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 005a2d35: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d38: jne 0x5a2d4a */ if (!fZ) goto L_005a2d4a;
L_005a2d3a:; BB(0x005a2d3a);
    /* 005a2d3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d3b: mov ecx, dword ptr [0xa747c4] */ r_ecx = R32((u32)(0xa747c4u));
    /* 005a2d41: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5a2d46u); f_00579de0();
    /* 005a2d46: mov ebx, eax */ r_ebx = r_eax;
    /* 005a2d48: jmp 0x5a2d58 */ goto L_005a2d58;
L_005a2d4a:; BB(0x005a2d4a);
    /* 005a2d4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d4b: mov ecx, dword ptr [0xa747c0] */ r_ecx = R32((u32)(0xa747c0u));
    /* 005a2d51: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5a2d56u); f_00579de0();
    /* 005a2d56: mov ebx, eax */ r_ebx = r_eax;
L_005a2d58:; BB(0x005a2d58);
    /* 005a2d58: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d5a: je 0x5a2db2 */ if (fZ) goto L_005a2db2;
L_005a2d5c:; BB(0x005a2d5c);
    /* 005a2d5c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a2d61u); f_0082d7b0();
    /* 005a2d61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2d63: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5a2d68u); f_00830cd8();
    /* 005a2d68: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2d6b: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005a2d6e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a2d73u); f_0082d838();
    /* 005a2d73: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2d76: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a2d79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2d7b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a2d80u); f_0082d8bc();
    /* 005a2d80: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 005a2d83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2d88: mov edx, ebx */ r_edx = r_ebx;
    /* 005a2d8a: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5a2d8fu); f_0082f940();
    /* 005a2d8f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a2d94u); f_0082da80();
    /* 005a2d94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2d97: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 005a2d9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d9f: je 0x5a2db2 */ if (fZ) goto L_005a2db2;
L_005a2da1:; BB(0x005a2da1);
    /* 005a2da1: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005a2da4: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005a2da7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2da8: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a2daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dab: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x5a2daeu); call_ind(t); }
    /* 005a2dae: jmp 0x5a2db2 */ goto L_005a2db2;
L_005a2db0:; BB(0x005a2db0);
    /* 005a2db0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005a2db2:; BB(0x005a2db2);
    /* 005a2db2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2db5: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005a2dbb: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2dbe: je 0x5a2e48 */ if (fZ) goto L_005a2e48;
L_005a2dc4:; BB(0x005a2dc4);
    /* 005a2dc4: mov edx, eax */ r_edx = r_eax;
    /* 005a2dc6: mov ecx, dword ptr [edx + 0x390] */ r_ecx = R32((u32)(r_edx+0x390u));
    /* 005a2dcc: add dword ptr [edx + 0x38c], 1 */ { u32 ad = (u32)(r_edx+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005a2dd3: mov eax, 2 */ r_eax = 0x2u;
    /* 005a2dd8: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 005a2ddf: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2de2: jne 0x5a2e03 */ if (!fZ) goto L_005a2e03;
L_005a2de4:; BB(0x005a2de4);
    /* 005a2de4: mov ecx, edx */ r_ecx = r_edx;
    /* 005a2de6: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2dec: mov eax, 1 */ r_eax = 0x1u;
    /* 005a2df1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a2df8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a2dfa: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 005a2e01: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2e03:; BB(0x005a2e03);
    /* 005a2e03: mov ebx, dword ptr [0xa747b0] */ r_ebx = R32((u32)(0xa747b0u));
    /* 005a2e09: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
    /* 005a2e0f: mov esi, dword ptr [edx + 0x370] */ r_esi = R32((u32)(r_edx+0x370u));
    /* 005a2e15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2e17: mov word ptr [edx + 0xb8], cx */ W16((u32)(r_edx+0xb8u), (u16)r_ecx);
    /* 005a2e1e: mov edi, dword ptr [ebx + esi*4] */ r_edi = R32((u32)(r_ebx+r_esi*4));
    /* 005a2e21: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 005a2e24: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 005a2e27: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 005a2e2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a2e30: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a2e33: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 005a2e36: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a2e39: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005a2e3c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a2e3f: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 005a2e46: jmp 0x5a2e4e */ goto L_005a2e4e;
L_005a2e48:; BB(0x005a2e48);
    /* 005a2e48: fld dword ptr [0x92a024] */ FPUSH(R_F32((u32)(0x92a024u)));
L_005a2e4e:; BB(0x005a2e4e);
    /* 005a2e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2e51: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2e54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a2e57: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005a2e5f: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a2e64u); f_00772b44();
    /* 005a2e64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2e67: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5a2e6cu); f_007b6880();
    /* 005a2e6c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a2e6f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a2e72: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a2e75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a2e78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a2e7f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2e81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2e82: ret  */ FN_RET(0x005a2a38); r_esp += 4; return;
L_005a2e83:; BB(0x005a2e83);
    /* 005a2e83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2e86: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 005a2e8c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005a2e8f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a2e92: je 0x5a2e9a */ if (fZ) goto L_005a2e9a;
L_005a2e94:; BB(0x005a2e94);
    /* 005a2e94: add edi, dword ptr [0xaae164] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005a2e9a:; BB(0x005a2e9a);
    /* 005a2e9a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005a2e9c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a2e9e: jle 0x5a2cff */ if ((fZ||fS!=fO)) goto L_005a2cff;
L_005a2ea4:; BB(0x005a2ea4);
    /* 005a2ea4: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 005a2eab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ead: je 0x5a2cff */ if (fZ) goto L_005a2cff;
L_005a2eb3:; BB(0x005a2eb3);
    /* 005a2eb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2eb6: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2eb8: je 0x5a2cff */ if (fZ) goto L_005a2cff;
L_005a2ebe:; BB(0x005a2ebe);
    /* 005a2ebe: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 005a2ec5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ec8: jne 0x5a2f2c */ if (!fZ) goto L_005a2f2c;
L_005a2eca:; BB(0x005a2eca);
    /* 005a2eca: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005a2ecd: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ed2: jne 0x5a2f2c */ if (!fZ) goto L_005a2f2c;
L_005a2ed4:; BB(0x005a2ed4);
    /* 005a2ed4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ed9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2edc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a2ede: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a2ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ee1: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5a2ee4u); call_ind(t); }
    /* 005a2ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ee6: je 0x5a2f2c */ if (fZ) goto L_005a2f2c;
L_005a2ee8:; BB(0x005a2ee8);
    /* 005a2ee8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2eed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2ef0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a2ef2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a2ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ef5: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5a2ef8u); call_ind(t); }
    /* 005a2ef8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2efb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a2efd: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2f00: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a2f04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a2f06: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a2f09: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5a2f0cu); call_ind(t); }
    /* 005a2f0c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2f0f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a2f14u); f_007751b0();
    /* 005a2f14: fcomp dword ptr [0x92a010] */ fx_compare(ST(0), R_F32((u32)(0x92a010u))); FPOP();
    /* 005a2f1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a2f1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2f1d: jbe 0x5a2f2c */ if ((fC||fZ)) goto L_005a2f2c;
L_005a2f1f:; BB(0x005a2f1f);
    /* 005a2f1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2f22: mov dword ptr [eax + 0x390], 1 */ W32((u32)(r_eax+0x390u), 0x1u);
L_005a2f2c:; BB(0x005a2f2c);
    /* 005a2f2c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a2f2f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2f31: jl 0x5a2ea4 */ if ((fS!=fO)) goto L_005a2ea4;
L_005a2f37:; BB(0x005a2f37);
    /* 005a2f37: jmp 0x5a2cff */ goto L_005a2cff;
L_005a2f3c:; BB(0x005a2f3c);
    /* 005a2f3c: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2f3e: call 0x5a2f54 */ r_esp -= 4; W32(r_esp, 0x5a2f43u); f_005a2f54();
    /* 005a2f43: jmp 0x5a2aa8 */ goto L_005a2aa8;
L_005a2f48:; BB(0x005a2f48);
    /* 005a2f48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2f4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a2f4d: jmp 0x5a2c17 */ goto L_005a2c17;
}

void f_005a2f54(void) /* sub_5A2F54 */
{
    FN_ENTER(0x005a2f54);
    /* 005a2f54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2f58: mov esi, ecx */ r_esi = r_ecx;
    /* 005a2f5a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a2f5fu); f_00807ac0();
    /* 005a2f5f: push dword ptr [eax*4 + 0x9c02d8] */ { u32 v = R32((u32)(r_eax*4+0x9c02d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2f66: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2f68: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a2f6du); f_007879b8();
    /* 005a2f6d: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2f6f: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005a2f72: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a2f74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a2f7du); f_00814298();
    /* 005a2f7d: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f82: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a2f87u); f_00814680();
    /* 005a2f87: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2f8a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a2f8c: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 005a2f93: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a2f98: mov ecx, esi */ r_ecx = r_esi;
    /* 005a2f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f9e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa5: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5a2fa8u); call_ind(t); }
    /* 005a2fa8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a2faa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a2fad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a2fae: ret  */ FN_RET(0x005a2f54); r_esp += 4; return;
}

void f_005a2fb0(void) /* sub_5A2FB0 */
{
    FN_ENTER(0x005a2fb0);
    /* 005a2fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fb1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a2fb3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2fb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2fb9: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x5a2fbeu); f_007ba278();
    /* 005a2fbe: mov dword ptr [ebp], 0xb0a580 */ W32((u32)(r_ebp), 0xb0a580u);
    /* 005a2fc5: mov eax, ebp */ r_eax = r_ebp;
    /* 005a2fc7: mov dword ptr [ebp + 0x90], 0x41200000 */ W32((u32)(r_ebp+0x90u), 0x41200000u);
    /* 005a2fd1: mov byte ptr [ebp + 0x94], 4 */ W8((u32)(r_ebp+0x94u), 0x4u);
    /* 005a2fd8: mov dword ptr [ebp + 0x98], 0x3f800000 */ W32((u32)(r_ebp+0x98u), 0x3f800000u);
    /* 005a2fe2: mov dword ptr [ebp + 0x9c], 0x3f800000 */ W32((u32)(r_ebp+0x9cu), 0x3f800000u);
    /* 005a2fec: mov dword ptr [ebp + 0xa0], 0x3f800000 */ W32((u32)(r_ebp+0xa0u), 0x3f800000u);
    /* 005a2ff6: mov dword ptr [ebp + 0xa4], 0x3f800000 */ W32((u32)(r_ebp+0xa4u), 0x3f800000u);
    /* 005a3000: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3001: ret 4 */ FN_RET(0x005a2fb0); r_esp += 8; return;
}

