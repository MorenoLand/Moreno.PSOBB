#include "protos.h"

void f_005f205c(void) /* sub_5F205C */
{
    FN_ENTER(0x005f205c);
    /* 005f205c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f205d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2060: mov edi, ecx */ r_edi = r_ecx;
    /* 005f2062: mov ecx, edi */ r_ecx = r_edi;
    /* 005f2064: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2067: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2068: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f206du); f_005e7534();
    /* 005f206d: mov dword ptr [edi + 0x244], 0 */ W32((u32)(r_edi+0x244u), 0x0u);
    /* 005f2077: mov ecx, edi */ r_ecx = r_edi;
    /* 005f2079: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f207eu); f_005e90b0();
    /* 005f207e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2080: je 0x5f209a */ if (fZ) goto L_005f209a;
L_005f2082:; BB(0x005f2082);
    /* 005f2082: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2085: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2087: push dword ptr [edi + 0x1ac] */ { u32 v = R32((u32)(r_edi+0x1acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f208d: mov ecx, edi */ r_ecx = r_edi;
    /* 005f208f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2090: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f2095u); f_005e6df8();
    /* 005f2095: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2098: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f2099: ret  */ FN_RET(0x005f205c); r_esp += 4; return;
L_005f209a:; BB(0x005f209a);
    /* 005f209a: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005f20a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f20a4: je 0x5f20bf */ if (fZ) goto L_005f20bf;
L_005f20a6:; BB(0x005f20a6);
    /* 005f20a6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f20a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f20ab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005f20ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f20af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f20b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f20b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f20b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005f20b4: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f20bau); call_ind(t); }
    /* 005f20ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f20bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f20be: ret  */ FN_RET(0x005f205c); r_esp += 4; return;
L_005f20bf:; BB(0x005f20bf);
    /* 005f20bf: mov dword ptr [edi + 0x244], 1 */ W32((u32)(r_edi+0x244u), 0x1u);
    /* 005f20c9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f20cc: mov ecx, edi */ r_ecx = r_edi;
    /* 005f20ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f20d0: push dword ptr [edi + 0x1ac] */ { u32 v = R32((u32)(r_edi+0x1acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f20d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f20d7: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f20dcu); f_005e6df8();
    /* 005f20dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f20df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f20e0: ret  */ FN_RET(0x005f205c); r_esp += 4; return;
}

void f_005f20e4(void) /* sub_5F20E4 */
{
    FN_ENTER(0x005f20e4);
    /* 005f20e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005f20e8: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 005f20ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f20f0: jne 0x5f20f9 */ if (!fZ) goto L_005f20f9;
L_005f20f2:; BB(0x005f20f2);
    /* 005f20f2: mov dword ptr [eax + 0x74], 0x5f2220 */ W32((u32)(r_eax+0x74u), 0x5f2220u);
L_005f20f9:; BB(0x005f20f9);
    /* 005f20f9: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 005f20ff: mov dword ptr [eax + 0x50], 0x4000 */ W32((u32)(r_eax+0x50u), 0x4000u);
    /* 005f2106: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005f2109: mov dword ptr [eax + 0x4c], 0x40000000 */ W32((u32)(r_eax+0x4cu), 0x40000000u);
    /* 005f2110: mov ecx, dword ptr [ecx + 0x248] */ r_ecx = R32((u32)(r_ecx+0x248u));
    /* 005f2116: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 005f2119: ret 4 */ FN_RET(0x005f20e4); r_esp += 8; return;
}

void f_005f211c(void) /* sub_5F211C */
{
    FN_ENTER(0x005f211c);
    /* 005f211c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f211d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f211f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2121: push 0x8dcdc8 */ { u32 v = 0x8dcdc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2126: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f212c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f212d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2134: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2137: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f213a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f213d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2140: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f2143: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2146: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2148: je 0x5f219f */ if (fZ) goto L_005f219f;
L_005f214a:; BB(0x005f214a);
    /* 005f214a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f2151: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2156: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f215bu); f_005caba4();
    /* 005f215b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f215c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f215f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2161: je 0x5f219b */ if (fZ) goto L_005f219b;
L_005f2163:; BB(0x005f2163);
    /* 005f2163: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f216a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2171: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2174: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2177: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2178: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f217e: call 0x5f21b0 */ r_esp -= 4; W32(r_esp, 0x5f2183u); f_005f21b0();
    /* 005f2183: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2186: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f218d:; BB(0x005f218d);
    /* 005f218d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2190: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2197: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f219a: ret  */ FN_RET(0x005f211c); r_esp += 4; return;
L_005f219b:; BB(0x005f219b);
    /* 005f219b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f219d: jmp 0x5f218d */ goto L_005f218d;
L_005f219f:; BB(0x005f219f);
    /* 005f219f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f21a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f21a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f21ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005f21ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f21ae: ret  */ FN_RET(0x005f211c); r_esp += 4; return;
}

void f_005f21b0(void) /* sub_5F21B0 */
{
    FN_ENTER(0x005f21b0);
    /* 005f21b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f21b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f21b3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f21b7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f21bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f21bd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f21c2u); f_005e959c();
    /* 005f21c2: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005f21c8: movzx edx, byte ptr [ebx + 0xf4] */ r_edx = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005f21cf: mov dword ptr [ebx], 0xb14d80 */ W32((u32)(r_ebx), 0xb14d80u);
    /* 005f21d5: or eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f21d8: mov dword ptr [ebx + 0x1dc], eax */ W32((u32)(r_ebx+0x1dcu), r_eax);
    /* 005f21de: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f21e1: je 0x5f2207 */ if (fZ) goto L_005f2207;
L_005f21e3:; BB(0x005f21e3);
    /* 005f21e3: mov dword ptr [ebx + 0x240], 1 */ W32((u32)(r_ebx+0x240u), 0x1u);
    /* 005f21ed: mov dword ptr [ebx + 0x248], 0x95 */ W32((u32)(r_ebx+0x248u), 0x95u);
L_005f21f7:; BB(0x005f21f7);
    /* 005f21f7: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 005f2201: mov eax, ebx */ r_eax = r_ebx;
    /* 005f2203: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2204: ret 8 */ FN_RET(0x005f21b0); r_esp += 12; return;
L_005f2207:; BB(0x005f2207);
    /* 005f2207: mov dword ptr [ebx + 0x240], 0xa */ W32((u32)(r_ebx+0x240u), 0xau);
    /* 005f2211: mov dword ptr [ebx + 0x248], 0x1f5 */ W32((u32)(r_ebx+0x248u), 0x1f5u);
    /* 005f221b: jmp 0x5f21f7 */ goto L_005f21f7;
}

void f_005f2220(void) /* sub_5F2220 */
{
    FN_ENTER(0x005f2220);
    /* 005f2220: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2221: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005f2225: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2227: je 0x5f2268 */ if (fZ) goto L_005f2268;
L_005f2229:; BB(0x005f2229);
    /* 005f2229: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 005f222b: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 005f2232: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f2235: jne 0x5f2268 */ if (!fZ) goto L_005f2268;
L_005f2237:; BB(0x005f2237);
    /* 005f2237: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f2239: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005f223c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005f223f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2241: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2243: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2245: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2247: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2249: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f224b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f224d: add ecx, dword ptr [ebx + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2254: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2256: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f225cu); call_ind(t); }
    /* 005f225c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f225e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f2260: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2262: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x5f2268u); call_ind(t); }
L_005f2268:; BB(0x005f2268);
    /* 005f2268: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2269: ret  */ FN_RET(0x005f2220); r_esp += 4; return;
}

void f_005f226c(void) /* sub_5F226C */
{
    FN_ENTER(0x005f226c);
    /* 005f226c: mov dword ptr [0xa8df54], 0x3f800000 */ W32((u32)(0xa8df54u), 0x3f800000u);
    /* 005f2276: mov dword ptr [0xa8df58], 0x41000000 */ W32((u32)(0xa8df58u), 0x41000000u);
    /* 005f2280: mov dword ptr [0xa8df5c], 0x3fc00000 */ W32((u32)(0xa8df5cu), 0x3fc00000u);
    /* 005f228a: ret  */ FN_RET(0x005f226c); r_esp += 4; return;
}

void f_005f228c(void) /* sub_5F228C */
{
    FN_ENTER(0x005f228c);
    /* 005f228c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f228d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f228f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2291: call 0x5f22b0 */ r_esp -= 4; W32(r_esp, 0x5f2296u); f_005f22b0();
    /* 005f2296: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f229a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f229c: jne 0x5f22a2 */ if (!fZ) goto L_005f22a2;
L_005f229e:; BB(0x005f229e);
    /* 005f229e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f229f: ret 4 */ FN_RET(0x005f228c); r_esp += 8; return;
L_005f22a2:; BB(0x005f22a2);
    /* 005f22a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f22a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f22a8u); f_005c2f74();
    /* 005f22a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f22a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f22aa: ret 4 */ FN_RET(0x005f228c); r_esp += 8; return;
}

void f_005f22b0(void) /* sub_5F22B0 */
{
    FN_ENTER(0x005f22b0);
    /* 005f22b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f22b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f22b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f22b5: push 0x8dcde4 */ { u32 v = 0x8dcde4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f22ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f22c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f22c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f22c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f22cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f22ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f22d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f22d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f22d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f22da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f22dd: mov dword ptr [ecx], 0xb14f00 */ W32((u32)(r_ecx), 0xb14f00u);
    /* 005f22e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f22ea: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f22efu); f_005e61c8();
    /* 005f22ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f22f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f22f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f22fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f22fc: ret  */ FN_RET(0x005f22b0); r_esp += 4; return;
}

void f_005f2300(void) /* sub_5F2300 */
{
    FN_ENTER(0x005f2300);
    /* 005f2300: mov edx, ecx */ r_edx = r_ecx;
    /* 005f2302: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f2307: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f230a: je 0x5f2347 */ if (fZ) goto L_005f2347;
L_005f230c:; BB(0x005f230c);
    /* 005f230c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f230f: je 0x5f2339 */ if (fZ) goto L_005f2339;
L_005f2311:; BB(0x005f2311);
    /* 005f2311: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2314: jne 0x5f2324 */ if (!fZ) goto L_005f2324;
L_005f2316:; BB(0x005f2316);
    /* 005f2316: mov edx, dword ptr [edx + 0x248] */ r_edx = R32((u32)(r_edx+0x248u));
    /* 005f231c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f231e: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f2323u); f_00830c04();
    /* 005f2323: ret  */ FN_RET(0x005f2300); r_esp += 4; return;
L_005f2324:; BB(0x005f2324);
    /* 005f2324: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f2327: jne 0x5f2346 */ if (!fZ) goto L_005f2346;
L_005f2329:; BB(0x005f2329);
    /* 005f2329: mov edx, dword ptr [edx + 0x248] */ r_edx = R32((u32)(r_edx+0x248u));
    /* 005f232f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f2331: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2333: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f2338u); f_00830c04();
    /* 005f2338: ret  */ FN_RET(0x005f2300); r_esp += 4; return;
L_005f2339:; BB(0x005f2339);
    /* 005f2339: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005f233f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2341: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f2346u); f_0082e9e4();
L_005f2346:; BB(0x005f2346);
    /* 005f2346: ret  */ FN_RET(0x005f2300); r_esp += 4; return;
L_005f2347:; BB(0x005f2347);
    /* 005f2347: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f234d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f234f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f2354u); f_0082e9e4();
    /* 005f2354: ret  */ FN_RET(0x005f2300); r_esp += 4; return;
}

void f_005f2358(void) /* sub_5F2358 */
{
    FN_ENTER(0x005f2358);
    /* 005f2358: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2359: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f235b: lea eax, [ebx + 0x240] */ r_eax = (u32)(r_ebx+0x240u);
    /* 005f2361: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2363: push 0xfffff1c8 */ { u32 v = 0xfffff1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2369: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f236eu); f_005dd6f8();
    /* 005f236e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2370: push 0xaaa */ { u32 v = 0xaaau; r_esp -= 4; W32(r_esp, v); }
    /* 005f2375: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 005f237b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f237c: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f2381u); f_005dd6f8();
    /* 005f2381: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2383: push 0xfffff8e4 */ { u32 v = 0xfffff8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2388: add ebx, 0x248 */ {  u32 a = r_ebx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f238e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f238f: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f2394u); f_005dd6f8();
    /* 005f2394: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2397: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2398: ret  */ FN_RET(0x005f2358); r_esp += 4; return;
}

void f_005f239c(void) /* sub_5F239C */
{
    FN_ENTER(0x005f239c);
    /* 005f239c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f239d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f239f: lea eax, [ebx + 0x240] */ r_eax = (u32)(r_ebx+0x240u);
    /* 005f23a5: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 005f23aa: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f23af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f23b0: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f23b5u); f_005dd6f8();
    /* 005f23b5: push 0xffffeaab */ { u32 v = 0xffffeaabu; r_esp -= 4; W32(r_esp, v); }
    /* 005f23ba: push 0xfffff8e4 */ { u32 v = 0xfffff8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f23bf: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 005f23c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f23c6: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f23cbu); f_005dd6f8();
    /* 005f23cb: push 0x238e */ { u32 v = 0x238eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f23d0: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f23d5: add ebx, 0x248 */ {  u32 a = r_ebx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f23db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f23dc: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f23e1u); f_005dd6f8();
    /* 005f23e1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f23e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f23e5: ret  */ FN_RET(0x005f239c); r_esp += 4; return;
}

void f_005f23e8(void) /* sub_5F23E8 */
{
    FN_ENTER(0x005f23e8);
    /* 005f23e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f23ec: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005f23ef: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f23f4: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005f23f7: mov dword ptr [edx + 0x74], 0x5f24ec */ W32((u32)(r_edx+0x74u), 0x5f24ecu);
    /* 005f23fe: mov dword ptr [edx + 0x70], 0x5f2640 */ W32((u32)(r_edx+0x70u), 0x5f2640u);
    /* 005f2405: ret 4 */ FN_RET(0x005f23e8); r_esp += 8; return;
}

void f_005f2408(void) /* sub_5F2408 */
{
    FN_ENTER(0x005f2408);
    /* 005f2408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2409: mov ebp, esp */ r_ebp = r_esp;
    /* 005f240b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f240d: push 0x8dce0c */ { u32 v = 0x8dce0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2420: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f242c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f242f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2434: je 0x5f248b */ if (fZ) goto L_005f248b;
L_005f2436:; BB(0x005f2436);
    /* 005f2436: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f243d: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2442: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f2447u); f_005caba4();
    /* 005f2447: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2448: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f244b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f244d: je 0x5f2487 */ if (fZ) goto L_005f2487;
L_005f244f:; BB(0x005f244f);
    /* 005f244f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f2456: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f245d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2460: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2464: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f246a: call 0x5f249c */ r_esp -= 4; W32(r_esp, 0x5f246fu); f_005f249c();
    /* 005f246f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2472: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f2479:; BB(0x005f2479);
    /* 005f2479: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f247c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2483: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2485: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2486: ret  */ FN_RET(0x005f2408); r_esp += 4; return;
L_005f2487:; BB(0x005f2487);
    /* 005f2487: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2489: jmp 0x5f2479 */ goto L_005f2479;
L_005f248b:; BB(0x005f248b);
    /* 005f248b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f248d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2490: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2497: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f249a: ret  */ FN_RET(0x005f2408); r_esp += 4; return;
}

void f_005f249c(void) /* sub_5F249C */
{
    FN_ENTER(0x005f249c);
    /* 005f249c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f249d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f249f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f24a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f24a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f24a9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f24aeu); f_005e959c();
    /* 005f24ae: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f24b4: mov dword ptr [ebx], 0xb14f00 */ W32((u32)(r_ebx), 0xb14f00u);
    /* 005f24ba: mov eax, ebx */ r_eax = r_ebx;
    /* 005f24bc: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f24c2: mov dword ptr [ebx + 0x240], 0xffffe38f */ W32((u32)(r_ebx+0x240u), 0xffffe38fu);
    /* 005f24cc: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f24d2: mov dword ptr [ebx + 0x244], 0xffffeaab */ W32((u32)(r_ebx+0x244u), 0xffffeaabu);
    /* 005f24dc: mov dword ptr [ebx + 0x248], 0x238e */ W32((u32)(r_ebx+0x248u), 0x238eu);
    /* 005f24e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f24e7: ret 8 */ FN_RET(0x005f249c); r_esp += 12; return;
}

void f_005f24ec(void)
{
    FN_ENTER(0x005f24ec);
    /* 005f24ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f24ed: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f24f1: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f24f6u); f_005c5528();
    /* 005f24f6: mov ecx, eax */ r_ecx = r_eax;
    /* 005f24f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f24fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f24fd: je 0x5f2529 */ if (fZ) goto L_005f2529;
L_005f24ff:; BB(0x005f24ff);
    /* 005f24ff: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005f2503: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f2505: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 005f2508: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005f250e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005f2511: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2513: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f2515: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2517: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2519: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f251b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f251d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f251f: lea edx, [edx + eax + 0x1c] */ r_edx = (u32)(r_edx+r_eax+0x1cu);
    /* 005f2523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2524: call 0x5f252c */ r_esp -= 4; W32(r_esp, 0x5f2529u); f_005f252c();
L_005f2529:; BB(0x005f2529);
    /* 005f2529: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f252a: ret  */ FN_RET(0x005f24ec); r_esp += 4; return;
}

void f_005f252c(void) /* sub_5F252C */
{
    FN_ENTER(0x005f252c);
    /* 005f252c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f252d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f252f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2531: push 0x8dce4e */ { u32 v = 0x8dce4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2536: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f253c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f253d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2544: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f254a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f254d: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2550: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2553: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f2556: mov esi, ecx */ r_esi = r_ecx;
    /* 005f2558: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005f255b: lea ecx, [ebp - 0xac] */ r_ecx = (u32)(r_ebp+0xffffff54u);
    /* 005f2561: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5f2566u); f_005c5ae4();
    /* 005f2566: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005f256c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f256d: mov ecx, esi */ r_ecx = r_esi;
    /* 005f256f: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5f2574u); f_005e8f04();
    /* 005f2574: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2579: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f257b: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005f2581: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005f2584: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f258b: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005f2591: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 005f2594: mov dword ptr [ebp - 0x9c], 0xa */ W32((u32)(r_ebp+0xffffff64u), 0xau);
    /* 005f259e: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 005f25a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f25a9u); f_005caba4();
    /* 005f25a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f25aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f25ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f25af: je 0x5f25db */ if (fZ) goto L_005f25db;
L_005f25b1:; BB(0x005f25b1);
    /* 005f25b1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f25b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f25bf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f25c2: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005f25c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f25c9: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f25cf: call 0x5f1604 */ r_esp -= 4; W32(r_esp, 0x5f25d4u); f_005f1604();
    /* 005f25d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f25db:; BB(0x005f25db);
    /* 005f25db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f25e2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f25e9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f25eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f25f0u); f_005caba4();
    /* 005f25f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f25f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f25f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f25f6: je 0x5f2629 */ if (fZ) goto L_005f2629;
L_005f25f8:; BB(0x005f25f8);
    /* 005f25f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f25ff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f2606: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f260c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2611: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2614: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 005f261a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f261c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f261d: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x5f2622u); f_006ee0d0();
    /* 005f2622: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f2629:; BB(0x005f2629);
    /* 005f2629: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f262c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f262f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2632: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2639: mov esp, ebp */ r_esp = r_ebp;
    /* 005f263b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f263c: ret 4 */ FN_RET(0x005f252c); r_esp += 8; return;
}

void f_005f2640(void)
{
    FN_ENTER(0x005f2640);
    /* 005f2640: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2644: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f2649u); f_005c5528();
    /* 005f2649: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f264a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f264c: je 0x5f2659 */ if (fZ) goto L_005f2659;
L_005f264e:; BB(0x005f264e);
    /* 005f264e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2652: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2654: call 0x5f252c */ r_esp -= 4; W32(r_esp, 0x5f2659u); f_005f252c();
L_005f2659:; BB(0x005f2659);
    /* 005f2659: ret  */ FN_RET(0x005f2640); r_esp += 4; return;
}

void f_005f265c(void) /* sub_5F265C */
{
    FN_ENTER(0x005f265c);
    /* 005f265c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f265d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f265f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2661: call 0x5f2680 */ r_esp -= 4; W32(r_esp, 0x5f2666u); f_005f2680();
    /* 005f2666: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f266a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f266c: jne 0x5f2672 */ if (!fZ) goto L_005f2672;
L_005f266e:; BB(0x005f266e);
    /* 005f266e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f266f: ret 4 */ FN_RET(0x005f265c); r_esp += 8; return;
L_005f2672:; BB(0x005f2672);
    /* 005f2672: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2673: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f2678u); f_005c2f74();
    /* 005f2678: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2679: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f267a: ret 4 */ FN_RET(0x005f265c); r_esp += 8; return;
}

void f_005f2680(void) /* sub_5F2680 */
{
    FN_ENTER(0x005f2680);
    /* 005f2680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2681: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2685: push 0x8dce68 */ { u32 v = 0x8dce68u; r_esp -= 4; W32(r_esp, v); }
    /* 005f268a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2691: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2698: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f269b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f269e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f26a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f26a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f26a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f26aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f26b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f26b4: mov eax, dword ptr [ecx + 0x1a4] */ r_eax = R32((u32)(r_ecx+0x1a4u));
    /* 005f26ba: mov dword ptr [ecx], 0xb15080 */ W32((u32)(r_ecx), 0xb15080u);
    /* 005f26c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f26c2: je 0x5f26d8 */ if (fZ) goto L_005f26d8;
L_005f26c4:; BB(0x005f26c4);
    /* 005f26c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f26c5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5f26cau); f_00857e98();
    /* 005f26ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f26cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f26ce: mov dword ptr [ecx + 0x1a4], 0 */ W32((u32)(r_ecx+0x1a4u), 0x0u);
L_005f26d8:; BB(0x005f26d8);
    /* 005f26d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f26df: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f26e4u); f_005e61c8();
    /* 005f26e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f26e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f26ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005f26f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f26f1: ret  */ FN_RET(0x005f2680); r_esp += 4; return;
}

void f_005f26f4(void) /* sub_5F26F4 */
{
    FN_ENTER(0x005f26f4);
    /* 005f26f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f26f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f26f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f26f9: push 0x8dce90 */ { u32 v = 0x8dce90u; r_esp -= 4; W32(r_esp, v); }
    /* 005f26fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2705: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f270c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f270f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2712: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2715: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2718: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f271b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f271e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2720: je 0x5f2777 */ if (fZ) goto L_005f2777;
L_005f2722:; BB(0x005f2722);
    /* 005f2722: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f2729: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f272e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f2733u); f_005caba4();
    /* 005f2733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2734: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f2737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2739: je 0x5f2773 */ if (fZ) goto L_005f2773;
L_005f273b:; BB(0x005f273b);
    /* 005f273b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f2742: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f274c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f274f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2750: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2756: call 0x5f2788 */ r_esp -= 4; W32(r_esp, 0x5f275bu); f_005f2788();
    /* 005f275b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f275e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f2765:; BB(0x005f2765);
    /* 005f2765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f276f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2772: ret  */ FN_RET(0x005f26f4); r_esp += 4; return;
L_005f2773:; BB(0x005f2773);
    /* 005f2773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2775: jmp 0x5f2765 */ goto L_005f2765;
L_005f2777:; BB(0x005f2777);
    /* 005f2777: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f277c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2783: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2786: ret  */ FN_RET(0x005f26f4); r_esp += 4; return;
}

void f_005f2788(void) /* sub_5F2788 */
{
    FN_ENTER(0x005f2788);
    /* 005f2788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2789: mov ebp, esp */ r_ebp = r_esp;
    /* 005f278b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f278d: push 0x8dceac */ { u32 v = 0x8dceacu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f27a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f27a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f27a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f27a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f27ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f27af: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f27b2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f27b5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f27b8: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f27bdu); f_005e959c();
    /* 005f27bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f27c4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f27c7: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005f27cd: mov dword ptr [edx], 0xb15080 */ W32((u32)(r_edx), 0xb15080u);
    /* 005f27d3: or eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f27d6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f27d8: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
    /* 005f27de: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5f27e3u); f_008581c5();
    /* 005f27e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f27e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f27e6: je 0x5f283d */ if (fZ) goto L_005f283d;
L_005f27e8:; BB(0x005f27e8);
    /* 005f27e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f27ea: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005f27ec: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005f27ef:; BB(0x005f27ef);
    /* 005f27ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f27f2: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 005f27f8: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 005f27fd: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005f27ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2802: mov ebx, 0x4650 */ r_ebx = 0x4650u;
    /* 005f2807: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005f280a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f280d: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 005f2810: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005f2816: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f281b: je 0x5f2828 */ if (fZ) goto L_005f2828;
L_005f281d:; BB(0x005f281d);
    /* 005f281d: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2822: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
L_005f2828:; BB(0x005f2828);
    /* 005f2828: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f282b: mov eax, edx */ r_eax = r_edx;
    /* 005f282d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2830: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2837: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f283a: ret 8 */ FN_RET(0x005f2788); r_esp += 12; return;
L_005f283d:; BB(0x005f283d);
    /* 005f283d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f283f: jmp 0x5f27ef */ goto L_005f27ef;
}

void f_005f27c5(void)
{
    FN_ENTER(0x005f27c5);
    goto L_005f27c5;
L_005f2753:; BB(0x005f2753);
    /* 005f2753: mov dword ptr [0x2de800ac], eax */ W32((u32)(0x2de800acu), r_eax);
    /* 005f2758: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f275a: add byte ptr [ebx + 0x45c7e045], cl */ { u32 ad = (u32)(r_ebx+0x45c7e045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f2760: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 005f2762: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f2764: add byte ptr [ebx - 0x769b0bb3], cl */ { u32 ad = (u32)(r_ebx+0x8964f44du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f276a: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f276f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2772: ret  */ FN_RET(0x005f27c5); r_esp += 4; return;
L_005f27c5:; BB(0x005f27c5);
    /* 005f27c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f27c6: loopne 0x5f2753 */ r_ecx--; if (r_ecx && !fZ) goto L_005f2753;
    /* 005f27c8: sbb ah, 1 */ { u32 c = fC; u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005f27cb: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f27cd: mov dword ptr [edx], 0xb15080 */ W32((u32)(r_edx), 0xb15080u);
    /* 005f27d3: or eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f27d6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f27d8: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
    /* 005f27de: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5f27e3u); f_008581c5();
    /* 005f27e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f27e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f27e6: je 0x5f283d */ if (fZ) goto L_005f283d;
L_005f27e8:; BB(0x005f27e8);
    /* 005f27e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f27ea: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005f27ec: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005f27ef:; BB(0x005f27ef);
    /* 005f27ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f27f2: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 005f27f8: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 005f27fd: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005f27ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2802: mov ebx, 0x4650 */ r_ebx = 0x4650u;
    /* 005f2807: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005f280a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f280d: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 005f2810: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 005f2816: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f281b: je 0x5f2828 */ if (fZ) goto L_005f2828;
L_005f281d:; BB(0x005f281d);
    /* 005f281d: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2822: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
L_005f2828:; BB(0x005f2828);
    /* 005f2828: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f282b: mov eax, edx */ r_eax = r_edx;
    /* 005f282d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2830: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2837: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f283a: ret 8 */ FN_RET(0x005f27c5); r_esp += 12; return;
L_005f283d:; BB(0x005f283d);
    /* 005f283d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f283f: jmp 0x5f27ef */ goto L_005f27ef;
}

void f_005f2844(void) /* sub_5F2844 */
{
    FN_ENTER(0x005f2844);
    /* 005f2844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2845: mov edi, ecx */ r_edi = r_ecx;
    /* 005f2847: mov ecx, edi */ r_ecx = r_edi;
    /* 005f2849: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x5f284eu); f_005c443c();
    /* 005f284e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2850: jne 0x5f28eb */ if (!fZ) goto L_005f28eb;
L_005f2856:; BB(0x005f2856);
    /* 005f2856: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005f285c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f285e: je 0x5f28f2 */ if (fZ) goto L_005f28f2;
L_005f2864:; BB(0x005f2864);
    /* 005f2864: mov eax, dword ptr [edi + 0x1a4] */ r_eax = R32((u32)(r_edi+0x1a4u));
    /* 005f286a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f286c: je 0x5f28f2 */ if (fZ) goto L_005f28f2;
L_005f2872:; BB(0x005f2872);
    /* 005f2872: movsx ecx, word ptr [edx + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 005f2879: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f287c: je 0x5f288c */ if (fZ) goto L_005f288c;
L_005f287e:; BB(0x005f287e);
    /* 005f287e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f2881: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2883: jne 0x5f28f2 */ if (!fZ) goto L_005f28f2;
L_005f2885:; BB(0x005f2885);
    /* 005f2885: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005f2888: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f288a: jne 0x5f28f2 */ if (!fZ) goto L_005f28f2;
L_005f288c:; BB(0x005f288c);
    /* 005f288c: movsx ecx, word ptr [edx + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 005f2893: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f2895: jle 0x5f28cd */ if ((fZ||fS!=fO)) goto L_005f28cd;
L_005f2897:; BB(0x005f2897);
    /* 005f2897: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2899: movzx eax, word ptr [edx + 0x2be] */ r_eax = (u32)R16((u32)(r_edx+0x2beu));
    /* 005f28a0: mov word ptr [edx + 0x336], ax */ W16((u32)(r_edx+0x336u), (u16)r_eax);
    /* 005f28a7: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005f28ad: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x5f28b2u); f_00770b58();
    /* 005f28b2: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f28b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005f28b9: call 0x5c3724 */ r_esp -= 4; W32(r_esp, 0x5f28beu); f_005c3724();
    /* 005f28be: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 005f28c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005f28c2: call 0x5c376c */ r_esp -= 4; W32(r_esp, 0x5f28c7u); f_005c376c();
    /* 005f28c7: mov eax, dword ptr [edi + 0x1a4] */ r_eax = R32((u32)(r_edi+0x1a4u));
L_005f28cd:; BB(0x005f28cd);
    /* 005f28cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f28cf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f28d2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f28d5: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005f28d8: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005f28de: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f28e3: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 005f28e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f28ea: ret  */ FN_RET(0x005f2844); r_esp += 4; return;
L_005f28eb:; BB(0x005f28eb);
    /* 005f28eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005f28ed: call 0x5c4860 */ r_esp -= 4; W32(r_esp, 0x5f28f2u); f_005c4860();
L_005f28f2:; BB(0x005f28f2);
    /* 005f28f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f28f3: ret  */ FN_RET(0x005f2844); r_esp += 4; return;
}

void f_005f28f4(void) /* sub_5F28F4 */
{
    FN_ENTER(0x005f28f4);
    /* 005f28f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f28f5: mov esi, ecx */ r_esi = r_ecx;
    /* 005f28f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005f28f9: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f28feu); f_005e90b0();
    /* 005f28fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2900: je 0x5f2919 */ if (fZ) goto L_005f2919;
L_005f2902:; BB(0x005f2902);
    /* 005f2902: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2904: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005f290a: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 005f290d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f290e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f290f: call 0x6dce48 */ r_esp -= 4; W32(r_esp, 0x5f2914u); f_006dce48();
    /* 005f2914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2917: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f2918: ret  */ FN_RET(0x005f28f4); r_esp += 4; return;
L_005f2919:; BB(0x005f2919);
    /* 005f2919: mov ecx, esi */ r_ecx = r_esi;
    /* 005f291b: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f2920u); f_005e90e8();
    /* 005f2920: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f2921: ret  */ FN_RET(0x005f28f4); r_esp += 4; return;
}

void f_005f2924(void) /* sub_5F2924 */
{
    FN_ENTER(0x005f2924);
    /* 005f2924: mov eax, dword ptr [ecx + 0x1a4] */ r_eax = R32((u32)(r_ecx+0x1a4u));
    /* 005f292a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f292c: je 0x5f2939 */ if (fZ) goto L_005f2939;
L_005f292e:; BB(0x005f292e);
    /* 005f292e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2930: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f2933: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f2936: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005f2939:; BB(0x005f2939);
    /* 005f2939: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005f293f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2944: je 0x5f2951 */ if (fZ) goto L_005f2951;
L_005f2946:; BB(0x005f2946);
    /* 005f2946: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f294b: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
L_005f2951:; BB(0x005f2951);
    /* 005f2951: ret  */ FN_RET(0x005f2924); r_esp += 4; return;
}

void f_005f2954(void) /* sub_5F2954 */
{
    FN_ENTER(0x005f2954);
    /* 005f2954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2955: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 005f295b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f295d: je 0x5f29a5 */ if (fZ) goto L_005f29a5;
L_005f295f:; BB(0x005f295f);
    /* 005f295f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f2962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2964: je 0x5f296c */ if (fZ) goto L_005f296c;
L_005f2966:; BB(0x005f2966);
    /* 005f2966: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2969: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005f296c:; BB(0x005f296c);
    /* 005f296c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f296f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2971: je 0x5f2979 */ if (fZ) goto L_005f2979;
L_005f2973:; BB(0x005f2973);
    /* 005f2973: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2976: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_005f2979:; BB(0x005f2979);
    /* 005f2979: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005f297f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2984: jne 0x5f29a5 */ if (!fZ) goto L_005f29a5;
L_005f2986:; BB(0x005f2986);
    /* 005f2986: mov edi, dword ptr [ecx + 0x1a4] */ r_edi = R32((u32)(r_ecx+0x1a4u));
    /* 005f298c: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 005f298f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2991: jne 0x5f29a5 */ if (!fZ) goto L_005f29a5;
L_005f2993:; BB(0x005f2993);
    /* 005f2993: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 005f2996: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2998: jne 0x5f29a5 */ if (!fZ) goto L_005f29a5;
L_005f299a:; BB(0x005f299a);
    /* 005f299a: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f299f: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
L_005f29a5:; BB(0x005f29a5);
    /* 005f29a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f29a6: ret  */ FN_RET(0x005f2954); r_esp += 4; return;
}

void f_005f29a8(void) /* sub_5F29A8 */
{
    FN_ENTER(0x005f29a8);
    /* 005f29a8: mov dword ptr [0xa8df60], 0x3f800000 */ W32((u32)(0xa8df60u), 0x3f800000u);
    /* 005f29b2: mov dword ptr [0xa8df64], 0x41000000 */ W32((u32)(0xa8df64u), 0x41000000u);
    /* 005f29bc: mov dword ptr [0xa8df68], 0x3fc00000 */ W32((u32)(0xa8df68u), 0x3fc00000u);
    /* 005f29c6: ret  */ FN_RET(0x005f29a8); r_esp += 4; return;
}

void f_005f29c8(void) /* sub_5F29C8 */
{
    FN_ENTER(0x005f29c8);
    /* 005f29c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f29c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f29cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f29cd: push 0x8dcec8 */ { u32 v = 0x8dcec8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f29d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f29d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f29d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f29e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f29e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f29e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f29e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f29ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f29ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f29f2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f29f5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f29f7: mov dword ptr [eax], 0xb151e0 */ W32((u32)(r_eax), 0xb151e0u);
    /* 005f29fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2a04: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f2a09u); f_005e61c8();
    /* 005f2a09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2a0c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2a0e: jne 0x5f2a20 */ if (!fZ) goto L_005f2a20;
L_005f2a10:; BB(0x005f2a10);
    /* 005f2a10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2a13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2a1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2a1d: ret 4 */ FN_RET(0x005f29c8); r_esp += 8; return;
L_005f2a20:; BB(0x005f2a20);
    /* 005f2a20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a24: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f2a29u); f_005c2f74();
    /* 005f2a29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2a2a: jmp 0x5f2a10 */ goto L_005f2a10;
}

void f_005f2a2c(void) /* sub_5F2A2C */
{
    FN_ENTER(0x005f2a2c);
    /* 005f2a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a2d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2a30: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f2a32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2a34: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a38: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a3a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f2a3fu); f_005e83c8();
    /* 005f2a3f: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005f2a45: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2a4b: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f2a50u); f_006a3250();
    /* 005f2a50: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005f2a53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2a56: je 0x5f2a8c */ if (fZ) goto L_005f2a8c;
L_005f2a58:; BB(0x005f2a58);
    /* 005f2a58: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2a5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a5d: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2a63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a66: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f2a6bu); f_005e6df8();
L_005f2a6b:; BB(0x005f2a6b);
    /* 005f2a6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2a6d: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f2a72u); f_005e7f6c();
    /* 005f2a72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2a74: jne 0x5f2a87 */ if (!fZ) goto L_005f2a87;
L_005f2a76:; BB(0x005f2a76);
    /* 005f2a76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a79: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2a7f: call 0x5cc554 */ r_esp -= 4; W32(r_esp, 0x5f2a84u); f_005cc554();
    /* 005f2a84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f2a87:; BB(0x005f2a87);
    /* 005f2a87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2a8b: ret  */ FN_RET(0x005f2a2c); r_esp += 4; return;
L_005f2a8c:; BB(0x005f2a8c);
    /* 005f2a8c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2a8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a91: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2a97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a9a: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f2a9fu); f_005e6df8();
    /* 005f2a9f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2aa2: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2aa7: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2aad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2aaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ab0: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f2ab5u); f_005e6df8();
    /* 005f2ab5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2ab8: push 0xffffeaab */ { u32 v = 0xffffeaabu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2abd: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2ac3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ac6: call 0x5e6df8 */ r_esp -= 4; W32(r_esp, 0x5f2acbu); f_005e6df8();
    /* 005f2acb: jmp 0x5f2a6b */ goto L_005f2a6b;
}

void f_005f2ad0(void) /* sub_5F2AD0 */
{
    FN_ENTER(0x005f2ad0);
    /* 005f2ad0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005f2ad4: mov dword ptr [eax + 0x78], 0x176 */ W32((u32)(r_eax+0x78u), 0x176u);
    /* 005f2adb: mov dword ptr [eax + 0x74], 0x5ccf44 */ W32((u32)(r_eax+0x74u), 0x5ccf44u);
    /* 005f2ae2: mov dword ptr [eax + 0x70], 0x5cd08c */ W32((u32)(r_eax+0x70u), 0x5cd08cu);
    /* 005f2ae9: ret 4 */ FN_RET(0x005f2ad0); r_esp += 8; return;
}

void f_005f2aec(void) /* sub_5F2AEC */
{
    FN_ENTER(0x005f2aec);
    /* 005f2aec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2aed: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2aef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2af1: push 0x8dcef0 */ { u32 v = 0x8dcef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2af6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2afd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2b04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2b07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2b0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2b0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2b10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f2b13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2b16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2b18: je 0x5f2b6f */ if (fZ) goto L_005f2b6f;
L_005f2b1a:; BB(0x005f2b1a);
    /* 005f2b1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f2b21: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b26: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f2b2bu); f_005caba4();
    /* 005f2b2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2b2c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f2b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2b31: je 0x5f2b6b */ if (fZ) goto L_005f2b6b;
L_005f2b33:; BB(0x005f2b33);
    /* 005f2b33: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f2b3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2b41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2b44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b48: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2b4e: call 0x5f2b80 */ r_esp -= 4; W32(r_esp, 0x5f2b53u); f_005f2b80();
    /* 005f2b53: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2b56: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f2b5d:; BB(0x005f2b5d);
    /* 005f2b5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2b60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2b67: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2b69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2b6a: ret  */ FN_RET(0x005f2aec); r_esp += 4; return;
L_005f2b6b:; BB(0x005f2b6b);
    /* 005f2b6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2b6d: jmp 0x5f2b5d */ goto L_005f2b5d;
L_005f2b6f:; BB(0x005f2b6f);
    /* 005f2b6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2b71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2b74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2b7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2b7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2b7e: ret  */ FN_RET(0x005f2aec); r_esp += 4; return;
}

void f_005f2b80(void) /* sub_5F2B80 */
{
    FN_ENTER(0x005f2b80);
    /* 005f2b80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f2b83: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2b87: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2b8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2b8d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f2b92u); f_005e959c();
    /* 005f2b92: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f2b98: mov dword ptr [ebx], 0xb151e0 */ W32((u32)(r_ebx), 0xb151e0u);
    /* 005f2b9e: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2ba1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f2ba7: mov eax, ebx */ r_eax = r_ebx;
    /* 005f2ba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2baa: ret 8 */ FN_RET(0x005f2b80); r_esp += 12; return;
}

void f_005f2bb0(void) /* sub_5F2BB0 */
{
    FN_ENTER(0x005f2bb0);
    /* 005f2bb0: mov dword ptr [0xa8df6c], 0x3f800000 */ W32((u32)(0xa8df6cu), 0x3f800000u);
    /* 005f2bba: mov dword ptr [0xa8df70], 0x41000000 */ W32((u32)(0xa8df70u), 0x41000000u);
    /* 005f2bc4: mov dword ptr [0xa8df74], 0x3fc00000 */ W32((u32)(0xa8df74u), 0x3fc00000u);
    /* 005f2bce: ret  */ FN_RET(0x005f2bb0); r_esp += 4; return;
}

void f_005f2bd0(void) /* sub_5F2BD0 */
{
    FN_ENTER(0x005f2bd0);
    /* 005f2bd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f2bd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f2bd5: call 0x5f2bf4 */ r_esp -= 4; W32(r_esp, 0x5f2bdau); f_005f2bf4();
    /* 005f2bda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f2bde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2be0: jne 0x5f2be6 */ if (!fZ) goto L_005f2be6;
L_005f2be2:; BB(0x005f2be2);
    /* 005f2be2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2be3: ret 4 */ FN_RET(0x005f2bd0); r_esp += 8; return;
L_005f2be6:; BB(0x005f2be6);
    /* 005f2be6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2be7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f2becu); f_005c2f74();
    /* 005f2bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2bed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2bee: ret 4 */ FN_RET(0x005f2bd0); r_esp += 8; return;
}

void f_005f2bf4(void) /* sub_5F2BF4 */
{
    FN_ENTER(0x005f2bf4);
    /* 005f2bf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bf5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2bf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bf9: push 0x8dcf0c */ { u32 v = 0x8dcf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2c0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2c0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2c12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2c15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2c18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f2c1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f2c1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2c21: mov dword ptr [ecx], 0xb15340 */ W32((u32)(r_ecx), 0xb15340u);
    /* 005f2c27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2c2e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f2c33u); f_005e61c8();
    /* 005f2c33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2c36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2c3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2c3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2c40: ret  */ FN_RET(0x005f2bf4); r_esp += 4; return;
}

void f_005f2c44(void) /* sub_5F2C44 */
{
    FN_ENTER(0x005f2c44);
    /* 005f2c44: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f2c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2c4c: jle 0x5f2c6a */ if ((fZ||fS!=fO)) goto L_005f2c6a;
L_005f2c4e:; BB(0x005f2c4e);
    /* 005f2c4e: add eax, 0xfffff778 */ {  u32 a = r_eax; u32 b = 0xfffff778u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2c53: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005f2c59: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005f2c5f: add eax, 0xfffff778 */ {  u32 a = r_eax; u32 b = 0xfffff778u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2c64: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
L_005f2c6a:; BB(0x005f2c6a);
    /* 005f2c6a: ret  */ FN_RET(0x005f2c44); r_esp += 4; return;
}

void f_005f2c6c(void) /* sub_5F2C6C */
{
    FN_ENTER(0x005f2c6c);
    /* 005f2c6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c6d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2c70: mov esi, ecx */ r_esi = r_ecx;
    /* 005f2c72: mov eax, dword ptr [esi + 0x244] */ r_eax = R32((u32)(r_esi+0x244u));
    /* 005f2c78: add eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2c7d: mov dword ptr [esi + 0x244], eax */ W32((u32)(r_esi+0x244u), r_eax);
    /* 005f2c83: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2c85: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5f2c8au); f_005c5160();
    /* 005f2c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2c8c: je 0x5f2d25 */ if (fZ) goto L_005f2d25;
L_005f2c92:; BB(0x005f2c92);
    /* 005f2c92: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c98: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2c9a: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f2c9fu); f_005e83c8();
    /* 005f2c9f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2ca2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ca4: push 0x4fa */ { u32 v = 0x4fau; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ca9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f2cab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cae: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2cb0: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f2cb6u); call_ind(t); }
    /* 005f2cb6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cbc: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2cbe: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f2cc3u); f_005e83c8();
    /* 005f2cc3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f2cc6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005f2cc8: mov edx, 1 */ r_edx = 0x1u;
    /* 005f2ccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cce: push 0xe38 */ { u32 v = 0xe38u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cd5: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2cd7: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f2cddu); call_ind(t); }
    /* 005f2cdd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ce1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ce3: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2ce5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f2ceau); f_005e83c8();
    /* 005f2cea: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2ced: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cef: push 0xfffffb06 */ { u32 v = 0xfffffb06u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cf4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f2cf6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cf9: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2cfb: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f2d01u); call_ind(t); }
    /* 005f2d01: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d05: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d07: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2d09: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f2d0eu); f_005e83c8();
    /* 005f2d0e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2d11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d13: push 0xfffff1c8 */ { u32 v = 0xfffff1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d18: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f2d1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d1d: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2d1f: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f2d25u); call_ind(t); }
L_005f2d25:; BB(0x005f2d25);
    /* 005f2d25: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f2d28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f2d29: ret  */ FN_RET(0x005f2c6c); r_esp += 4; return;
}

void f_005f2d2c(void) /* sub_5F2D2C */
{
    FN_ENTER(0x005f2d2c);
    /* 005f2d2c: mov edx, ecx */ r_edx = r_ecx;
    /* 005f2d2e: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f2d33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f2d36: je 0x5f2d39 */ if (fZ) goto L_005f2d39;
L_005f2d38:; BB(0x005f2d38);
    /* 005f2d38: ret  */ FN_RET(0x005f2d2c); r_esp += 4; return;
L_005f2d39:; BB(0x005f2d39);
    /* 005f2d39: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f2d3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2d41: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f2d46u); f_0082d8bc();
    /* 005f2d46: ret  */ FN_RET(0x005f2d2c); r_esp += 4; return;
}

void f_005f2d48(void) /* sub_5F2D48 */
{
    FN_ENTER(0x005f2d48);
    /* 005f2d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d49: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2d4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d4d: push 0x8dcf34 */ { u32 v = 0x8dcf34u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2d60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2d63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2d66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f2d69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f2d6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f2d6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2d72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2d74: je 0x5f2dcb */ if (fZ) goto L_005f2dcb;
L_005f2d76:; BB(0x005f2d76);
    /* 005f2d76: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f2d7d: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d82: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f2d87u); f_005caba4();
    /* 005f2d87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2d88: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f2d8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2d8d: je 0x5f2dc7 */ if (fZ) goto L_005f2dc7;
L_005f2d8f:; BB(0x005f2d8f);
    /* 005f2d8f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f2d96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2d9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2da0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2da4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2daa: call 0x5f2ddc */ r_esp -= 4; W32(r_esp, 0x5f2dafu); f_005f2ddc();
    /* 005f2daf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2db2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f2db9:; BB(0x005f2db9);
    /* 005f2db9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2dbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2dc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2dc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2dc6: ret  */ FN_RET(0x005f2d48); r_esp += 4; return;
L_005f2dc7:; BB(0x005f2dc7);
    /* 005f2dc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2dc9: jmp 0x5f2db9 */ goto L_005f2db9;
L_005f2dcb:; BB(0x005f2dcb);
    /* 005f2dcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2dcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2dd0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2dd7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2dda: ret  */ FN_RET(0x005f2d48); r_esp += 4; return;
}

void f_005f2ddc(void) /* sub_5F2DDC */
{
    FN_ENTER(0x005f2ddc);
    /* 005f2ddc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ddd: mov edi, ecx */ r_edi = r_ecx;
    /* 005f2ddf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2de3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2de7: mov ecx, edi */ r_ecx = r_edi;
    /* 005f2de9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f2deeu); f_005e959c();
    /* 005f2dee: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005f2df4: mov dword ptr [edi], 0xb15340 */ W32((u32)(r_edi), 0xb15340u);
    /* 005f2dfa: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f2dfd: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005f2e03: mov dword ptr [edi + 0x238], 0x5f2e2c */ W32((u32)(r_edi+0x238u), 0x5f2e2cu);
    /* 005f2e0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2e0f: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 005f2e15: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 005f2e1b: mov dword ptr [edi + 0x208], 0x40e00000 */ W32((u32)(r_edi+0x208u), 0x40e00000u);
    /* 005f2e25: mov eax, edi */ r_eax = r_edi;
    /* 005f2e27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f2e28: ret 8 */ FN_RET(0x005f2ddc); r_esp += 12; return;
}

void f_005f2e2c(void) /* sub_5F2E2C */
{
    FN_ENTER(0x005f2e2c);
    /* 005f2e2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e30: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005f2e34: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005f2e38: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005f2e3c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005f2e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e44: call 0x5e4350 */ r_esp -= 4; W32(r_esp, 0x5f2e49u); f_005e4350();
    /* 005f2e49: mov ebx, eax */ r_ebx = r_eax;
    /* 005f2e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005f2e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e53: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5f2e58u); f_005e407c();
    /* 005f2e58: mov ebp, eax */ r_ebp = r_eax;
    /* 005f2e5a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f2e5d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2e5f: je 0x5f2e8f */ if (fZ) goto L_005f2e8f;
L_005f2e61:; BB(0x005f2e61);
    /* 005f2e61: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2e63: je 0x5f2e8f */ if (fZ) goto L_005f2e8f;
L_005f2e65:; BB(0x005f2e65);
    /* 005f2e65: mov edx, dword ptr [edi + 0x1ac] */ r_edx = R32((u32)(r_edi+0x1acu));
    /* 005f2e6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2e6d: je 0x5f2e79 */ if (fZ) goto L_005f2e79;
L_005f2e6f:; BB(0x005f2e6f);
    /* 005f2e6f: and dword ptr [edx], 0xfffffffd */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f2e72: mov dword ptr [edx + 0x14], 0x4000 */ W32((u32)(r_edx+0x14u), 0x4000u);
L_005f2e79:; BB(0x005f2e79);
    /* 005f2e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e7b: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2e82: call 0x5e4624 */ r_esp -= 4; W32(r_esp, 0x5f2e87u); f_005e4624();
    /* 005f2e87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2e8a: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5f2e8fu); f_008172d4();
L_005f2e8f:; BB(0x005f2e8f);
    /* 005f2e8f: mov eax, ebx */ r_eax = r_ebx;
    /* 005f2e91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f2e92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2e93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f2e94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f2e95: ret  */ FN_RET(0x005f2e2c); r_esp += 4; return;
}

void f_005f2e98(void) /* sub_5F2E98 */
{
    FN_ENTER(0x005f2e98);
    /* 005f2e98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e99: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2e9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2e9d: push 0x8dcf50 */ { u32 v = 0x8dcf50u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ea2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ea9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f2eb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2eb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f2eb6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f2eb9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f2ebc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f2ebf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f2ec2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f2ec5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f2ec7: mov dword ptr [eax], 0xb154a0 */ W32((u32)(r_eax), 0xb154a0u);
    /* 005f2ecd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2ed4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f2ed9u); f_005e61c8();
    /* 005f2ed9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2edc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2ede: jne 0x5f2ef0 */ if (!fZ) goto L_005f2ef0;
L_005f2ee0:; BB(0x005f2ee0);
    /* 005f2ee0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2ee3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2eea: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2eed: ret 4 */ FN_RET(0x005f2e98); r_esp += 8; return;
L_005f2ef0:; BB(0x005f2ef0);
    /* 005f2ef0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2ef3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ef4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f2ef9u); f_005c2f74();
    /* 005f2ef9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2efa: jmp 0x5f2ee0 */ goto L_005f2ee0;
}

void f_005f2efc(void) /* sub_5F2EFC */
{
    FN_ENTER(0x005f2efc);
    /* 005f2efc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2efd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f2eff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2f01: mov dword ptr [0xa8df84], 0 */ W32((u32)(0xa8df84u), 0x0u);
    /* 005f2f0b: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5f2f10u); f_005e84a8();
    /* 005f2f10: mov eax, dword ptr [ebp + 0x240] */ r_eax = R32((u32)(r_ebp+0x240u));
    /* 005f2f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2f18: je 0x5f2f39 */ if (fZ) goto L_005f2f39;
L_005f2f1a:; BB(0x005f2f1a);
    /* 005f2f1a: mov dword ptr [0xa8df84], 1 */ W32((u32)(0xa8df84u), 0x1u);
    /* 005f2f24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2f26: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5f2f2bu); f_005d2450();
    /* 005f2f2b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005f2f2e: add eax, -0xd */ {  u32 a = r_eax; u32 b = 0xfffffff3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f2f34: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f2f39u); f_005e6334();
L_005f2f39:; BB(0x005f2f39);
    /* 005f2f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2f3a: ret  */ FN_RET(0x005f2efc); r_esp += 4; return;
}

void f_005f2f3c(void) /* sub_5F2F3C */
{
    FN_ENTER(0x005f2f3c);
    /* 005f2f3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f3e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2f41: mov esi, ecx */ r_esi = r_ecx;
    /* 005f2f43: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005f2f4a: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f4d: jne 0x5f2fb0 */ if (!fZ) goto L_005f2fb0;
L_005f2f4f:; BB(0x005f2f4f);
    /* 005f2f4f: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005f2f56: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f59: jne 0x5f2f7b */ if (!fZ) goto L_005f2f7b;
L_005f2f5b:; BB(0x005f2f5b);
    /* 005f2f5b: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2f5d: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f2f62u); f_005e7f6c();
    /* 005f2f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f64: jne 0x5f2fb0 */ if (!fZ) goto L_005f2fb0;
L_005f2f66:; BB(0x005f2f66);
    /* 005f2f66: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f68: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f6b: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2f71: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5f2f76u); f_005cc3b0();
    /* 005f2f76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f2f79: jmp 0x5f2fb0 */ goto L_005f2fb0;
L_005f2f7b:; BB(0x005f2f7b);
    /* 005f2f7b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f7e: jne 0x5f2fb0 */ if (!fZ) goto L_005f2fb0;
L_005f2f80:; BB(0x005f2f80);
    /* 005f2f80: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2f82: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f2f87u); f_005e90b0();
    /* 005f2f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f89: je 0x5f2fa9 */ if (fZ) goto L_005f2fa9;
L_005f2f8b:; BB(0x005f2f8b);
    /* 005f2f8b: push 0x3c23d70a */ { u32 v = 0x3c23d70au; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f90: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2f92: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f2f97u); f_005e75bc();
    /* 005f2f97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f9b: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2f9d: push 0x3fa00000 */ { u32 v = 0x3fa00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fa2: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f2fa7u); f_005e6a88();
    /* 005f2fa7: jmp 0x5f2fb0 */ goto L_005f2fb0;
L_005f2fa9:; BB(0x005f2fa9);
    /* 005f2fa9: mov ecx, esi */ r_ecx = r_esi;
    /* 005f2fab: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f2fb0u); f_005e90e8();
L_005f2fb0:; BB(0x005f2fb0);
    /* 005f2fb0: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f2fb6: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x5f2fbbu); f_00687660();
    /* 005f2fbb: mov ebp, eax */ r_ebp = r_eax;
    /* 005f2fbd: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f2fc3: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2fc9: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f2fceu); f_006a3250();
    /* 005f2fce: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f2fd4: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005f2fd6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f2fd8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f2fda: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 005f2fde: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f2fe0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005f2fe3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2fe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fe7: push dword ptr [edx + ebp*4 + 0x9c2880] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9c2880u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2fee: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5f2ff4u); call_ind(t); }
    /* 005f2ff4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f2ff7: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ffd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f3002u); f_0050b510();
    /* 005f3002: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3005: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3006: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f3007: ret  */ FN_RET(0x005f2f3c); r_esp += 4; return;
}

