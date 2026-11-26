#include "protos.h"

void f_006e2174(void) /* sub_6E2174 */
{
    FN_ENTER(0x006e2174);
    /* 006e2174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2176: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2177: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2178: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2179: mov ecx, 0xa96520 */ r_ecx = 0xa96520u;
    /* 006e217e: mov edx, 4 */ r_edx = 0x4u;
    /* 006e2183: mov dword ptr [0xa96640], 0x47742400 */ W32((u32)(0xa96640u), 0x47742400u);
    /* 006e218d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e218f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e2191: mov dword ptr [0xa96644], 0x3f800000 */ W32((u32)(0xa96644u), 0x3f800000u);
    /* 006e219b: mov dword ptr [0xa96648], 0x41000000 */ W32((u32)(0xa96648u), 0x41000000u);
    /* 006e21a5: mov dword ptr [0xa9664c], 0x3fc00000 */ W32((u32)(0xa9664cu), 0x3fc00000u);
L_006e21af:; BB(0x006e21af);
    /* 006e21af: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e21b2: mov esi, ecx */ r_esi = r_ecx;
    /* 006e21b4: mov ebp, 9 */ r_ebp = 0x9u;
    /* 006e21b9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e21bb:; BB(0x006e21bb);
    /* 006e21bb: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 006e21c0: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 006e21c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e21c5: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 006e21c9: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 006e21cc: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e21cf: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 006e21d2: jne 0x6e21bb */ if (!fZ) goto L_006e21bb;
L_006e21d4:; BB(0x006e21d4);
    /* 006e21d4: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006e21d7: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 006e21dc: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 006e21df: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e21e1: mov word ptr [ecx + 2], si */ W16((u32)(r_ecx+0x2u), (u16)r_esi);
    /* 006e21e5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e21e7: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 006e21ea: mov word ptr [ecx + 8], bp */ W16((u32)(r_ecx+0x8u), (u16)r_ebp);
    /* 006e21ee: mov word ptr [ecx + 0xa], si */ W16((u32)(r_ecx+0xau), (u16)r_esi);
    /* 006e21f2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e21f4: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 006e21f7: mov word ptr [ecx + 0x10], bp */ W16((u32)(r_ecx+0x10u), (u16)r_ebp);
    /* 006e21fb: mov word ptr [ecx + 0x12], si */ W16((u32)(r_ecx+0x12u), (u16)r_esi);
    /* 006e21ff: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e2201: mov dword ptr [ecx + 0x14], edi */ W32((u32)(r_ecx+0x14u), r_edi);
    /* 006e2204: mov word ptr [ecx + 0x18], bp */ W16((u32)(r_ecx+0x18u), (u16)r_ebp);
    /* 006e2208: mov word ptr [ecx + 0x1a], si */ W16((u32)(r_ecx+0x1au), (u16)r_esi);
    /* 006e220c: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006e220f: mov word ptr [ecx + 0x20], bp */ W16((u32)(r_ecx+0x20u), (u16)r_ebp);
    /* 006e2213: mov word ptr [ecx + 0x22], si */ W16((u32)(r_ecx+0x22u), (u16)r_esi);
    /* 006e2217: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 006e221a: mov word ptr [ecx + 0x28], bp */ W16((u32)(r_ecx+0x28u), (u16)r_ebp);
    /* 006e221e: mov word ptr [ecx + 0x2a], si */ W16((u32)(r_ecx+0x2au), (u16)r_esi);
    /* 006e2222: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e2224: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 006e2227: mov word ptr [ecx + 0x30], bp */ W16((u32)(r_ecx+0x30u), (u16)r_ebp);
    /* 006e222b: mov word ptr [ecx + 0x32], si */ W16((u32)(r_ecx+0x32u), (u16)r_esi);
    /* 006e222f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e2231: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 006e2234: mov word ptr [ecx + 0x38], bp */ W16((u32)(r_ecx+0x38u), (u16)r_ebp);
    /* 006e2238: mov word ptr [ecx + 0x3a], si */ W16((u32)(r_ecx+0x3au), (u16)r_esi);
    /* 006e223c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e223e: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 006e2241: mov word ptr [ecx + 0x40], bp */ W16((u32)(r_ecx+0x40u), (u16)r_ebp);
    /* 006e2245: mov word ptr [ecx + 0x42], si */ W16((u32)(r_ecx+0x42u), (u16)r_esi);
    /* 006e2249: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006e224b: mov dword ptr [ecx + 0x44], ebp */ W32((u32)(r_ecx+0x44u), r_ebp);
    /* 006e224e: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2251: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006e2254: jne 0x6e21af */ if (!fZ) goto L_006e21af;
L_006e225a:; BB(0x006e225a);
    /* 006e225a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e225c: mov ecx, 0xa96400 */ r_ecx = 0xa96400u;
    /* 006e2261: mov edx, 4 */ r_edx = 0x4u;
    /* 006e2266: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006e2268:; BB(0x006e2268);
    /* 006e2268: mov esi, ecx */ r_esi = r_ecx;
    /* 006e226a: mov ebp, 9 */ r_ebp = 0x9u;
    /* 006e226f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006e2271:; BB(0x006e2271);
    /* 006e2271: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 006e2276: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 006e2279: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e227b: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 006e227f: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006e2282: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e2285: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 006e2288: jne 0x6e2271 */ if (!fZ) goto L_006e2271;
L_006e228a:; BB(0x006e228a);
    /* 006e228a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e228c: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 006e2291: mov word ptr [ecx], bp */ W16((u32)(r_ecx), (u16)r_ebp);
    /* 006e2294: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e2296: mov word ptr [ecx + 2], si */ W16((u32)(r_ecx+0x2u), (u16)r_esi);
    /* 006e229a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e229c: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 006e229f: mov word ptr [ecx + 8], bp */ W16((u32)(r_ecx+0x8u), (u16)r_ebp);
    /* 006e22a3: mov word ptr [ecx + 0xa], si */ W16((u32)(r_ecx+0xau), (u16)r_esi);
    /* 006e22a7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e22a9: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 006e22ac: mov word ptr [ecx + 0x10], bp */ W16((u32)(r_ecx+0x10u), (u16)r_ebp);
    /* 006e22b0: mov word ptr [ecx + 0x12], si */ W16((u32)(r_ecx+0x12u), (u16)r_esi);
    /* 006e22b4: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006e22b7: mov word ptr [ecx + 0x18], bp */ W16((u32)(r_ecx+0x18u), (u16)r_ebp);
    /* 006e22bb: mov word ptr [ecx + 0x1a], si */ W16((u32)(r_ecx+0x1au), (u16)r_esi);
    /* 006e22bf: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 006e22c2: mov word ptr [ecx + 0x20], bp */ W16((u32)(r_ecx+0x20u), (u16)r_ebp);
    /* 006e22c6: mov word ptr [ecx + 0x22], si */ W16((u32)(r_ecx+0x22u), (u16)r_esi);
    /* 006e22ca: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e22cc: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 006e22cf: mov word ptr [ecx + 0x28], bp */ W16((u32)(r_ecx+0x28u), (u16)r_ebp);
    /* 006e22d3: mov word ptr [ecx + 0x2a], si */ W16((u32)(r_ecx+0x2au), (u16)r_esi);
    /* 006e22d7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e22d9: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 006e22dc: mov word ptr [ecx + 0x30], bp */ W16((u32)(r_ecx+0x30u), (u16)r_ebp);
    /* 006e22e0: mov word ptr [ecx + 0x32], si */ W16((u32)(r_ecx+0x32u), (u16)r_esi);
    /* 006e22e4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e22e6: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 006e22e9: mov word ptr [ecx + 0x38], bp */ W16((u32)(r_ecx+0x38u), (u16)r_ebp);
    /* 006e22ed: mov word ptr [ecx + 0x3a], si */ W16((u32)(r_ecx+0x3au), (u16)r_esi);
    /* 006e22f1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e22f3: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 006e22f6: mov word ptr [ecx + 0x40], bp */ W16((u32)(r_ecx+0x40u), (u16)r_ebp);
    /* 006e22fa: mov word ptr [ecx + 0x42], si */ W16((u32)(r_ecx+0x42u), (u16)r_esi);
    /* 006e22fe: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006e2300: mov dword ptr [ecx + 0x44], ebp */ W32((u32)(r_ecx+0x44u), r_ebp);
    /* 006e2303: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2306: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2309: jne 0x6e2268 */ if (!fZ) goto L_006e2268;
L_006e230f:; BB(0x006e230f);
    /* 006e230f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2310: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2312: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e2313: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e2314: ret  */ FN_RET(0x006e2174); r_esp += 4; return;
}

void f_006e2318(void) /* sub_6E2318 */
{
    FN_ENTER(0x006e2318);
    /* 006e2318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2319: mov ebp, esp */ r_ebp = r_esp;
    /* 006e231b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e231d: push 0x8ee930 */ { u32 v = 0x8ee930u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2330: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2336: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2339: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e233c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e233f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2344: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e234b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e2350u); f_008581c5();
    /* 006e2350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2351: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e2354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2356: je 0x6e23c4 */ if (fZ) goto L_006e23c4;
L_006e2358:; BB(0x006e2358);
    /* 006e2358: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e235f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2366: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2369: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e236b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e236c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e236d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e236e: push 0x9cf864 */ { u32 v = 0x9cf864u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2373: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2375: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6e237au); f_005b7a84();
    /* 006e237a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e237d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e2384:; BB(0x006e2384);
    /* 006e2384: mov dword ptr [0xa96684], eax */ W32((u32)(0xa96684u), r_eax);
    /* 006e2389: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e2390: push 0x96d044 */ { u32 v = 0x96d044u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2395: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6e239au); f_008009dc();
    /* 006e239a: push 0x9cf92c */ { u32 v = 0x9cf92cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e239f: push 0x96d050 */ { u32 v = 0x96d050u; r_esp -= 4; W32(r_esp, v); }
    /* 006e23a4: mov dword ptr [0xa96680], eax */ W32((u32)(0xa96680u), r_eax);
    /* 006e23a9: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x6e23aeu); f_0081a7d8();
    /* 006e23ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e23b1: call 0x6f4624 */ r_esp -= 4; W32(r_esp, 0x6e23b6u); f_006f4624();
    /* 006e23b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e23b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e23c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006e23c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e23c3: ret  */ FN_RET(0x006e2318); r_esp += 4; return;
L_006e23c4:; BB(0x006e23c4);
    /* 006e23c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e23c6: jmp 0x6e2384 */ goto L_006e2384;
}

void f_006e23c8(void) /* sub_6E23C8 */
{
    FN_ENTER(0x006e23c8);
    /* 006e23c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e23c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e23cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e23cd: call 0x6e23ec */ r_esp -= 4; W32(r_esp, 0x6e23d2u); f_006e23ec();
    /* 006e23d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e23d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e23d8: jne 0x6e23de */ if (!fZ) goto L_006e23de;
L_006e23da:; BB(0x006e23da);
    /* 006e23da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e23db: ret 4 */ FN_RET(0x006e23c8); r_esp += 8; return;
L_006e23de:; BB(0x006e23de);
    /* 006e23de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e23df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e23e4u); f_005c2f74();
    /* 006e23e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e23e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e23e6: ret 4 */ FN_RET(0x006e23c8); r_esp += 8; return;
}

void f_006e23ec(void) /* sub_6E23EC */
{
    FN_ENTER(0x006e23ec);
    /* 006e23ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e23ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006e23ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e23f1: push 0x8ee94c */ { u32 v = 0x8ee94cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e23f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e23fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e23fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2404: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2407: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e240a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e240d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2410: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e2413: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e2416: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e241d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2420: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2423: mov dword ptr [eax], 0xb3d068 */ W32((u32)(r_eax), 0xb3d068u);
    /* 006e2429: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e242eu); f_008148d4();
    /* 006e242e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e242f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e2436: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2439: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e243eu); f_008171e8();
    /* 006e243e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2441: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2448: mov esp, ebp */ r_esp = r_ebp;
    /* 006e244a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e244b: ret  */ FN_RET(0x006e23ec); r_esp += 4; return;
}

void f_006e244c(void) /* sub_6E244C */
{
    FN_ENTER(0x006e244c);
    /* 006e244c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e244d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e244f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2451: push 0x8ee968 */ { u32 v = 0x8ee968u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e245c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e245d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e246a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e246d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e2470: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e2473: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e2476: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2479: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e247c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e247f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e2484u); f_008193cc();
    /* 006e2484: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e248b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e248e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2491: mov dword ptr [edi], 0xb3d068 */ W32((u32)(r_edi), 0xb3d068u);
    /* 006e2497: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006e249a: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006e24a0: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006e24a3: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006e24a9: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e24ac: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006e24b2: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006e24b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e24b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24b9: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006e24bc: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e24bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24c0: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 006e24c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e24cau); f_00814298();
    /* 006e24ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e24cd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e24d0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e24d3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e24d6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e24d9: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006e24dc: mov eax, edx */ r_eax = r_edx;
    /* 006e24de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e24e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e24e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e24ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e24eb: ret 8 */ FN_RET(0x006e244c); r_esp += 12; return;
}

void f_006e2480(void)
{
    FN_ENTER(0x006e2480);
    /* 006e2480: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e2481: outsd dx, dword ptr [esi] */ UNSUP(0x006e2481, "outsd dx, dword ptr [esi]");
    /* 006e2482: adc eax, dword ptr [eax] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006e2484: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e248b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e248e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2491: mov dword ptr [edi], 0xb3d068 */ W32((u32)(r_edi), 0xb3d068u);
    /* 006e2497: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006e249a: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006e24a0: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006e24a3: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006e24a9: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e24ac: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006e24b2: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006e24b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e24b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24b9: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006e24bc: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e24bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e24c0: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 006e24c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e24cau); f_00814298();
    /* 006e24ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e24cd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e24d0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e24d3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e24d6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e24d9: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006e24dc: mov eax, edx */ r_eax = r_edx;
    /* 006e24de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e24e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e24e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e24ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e24eb: ret 8 */ FN_RET(0x006e2480); r_esp += 12; return;
}

void f_006e24f0(void) /* sub_6E24F0 */
{
    FN_ENTER(0x006e24f0);
    /* 006e24f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e24f1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e24f4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006e24f6: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006e24f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e24fc: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e2501: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e2503: mov dword ptr [ebp + 0x2c], ecx */ W32((u32)(r_ebp+0x2cu), r_ecx);
    /* 006e2506: mov eax, ecx */ r_eax = r_ecx;
    /* 006e2508: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e250b: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006e250e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e2510: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e2513: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2515: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2517: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2519: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e251b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e251d: jne 0x6e254d */ if (!fZ) goto L_006e254d;
L_006e251f:; BB(0x006e251f);
    /* 006e251f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e2522: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006e2526: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 006e2529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e252b: mov esi, eax */ r_esi = r_eax;
    /* 006e252d: mov edi, edx */ r_edi = r_edx;
L_006e252f:; BB(0x006e252f);
    /* 006e252f: push dword ptr [esi + 0x9cf880] */ { u32 v = R32((u32)(r_esi+0x9cf880u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2535: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2536: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e253bu); f_0050b510();
    /* 006e253b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e253e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e2541: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2544: jl 0x6e252f */ if ((fS!=fO)) goto L_006e252f;
L_006e2546:; BB(0x006e2546);
    /* 006e2546: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006e2549: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_006e254d:; BB(0x006e254d);
    /* 006e254d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006e2550: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006e2556: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e255c: je 0x6e2565 */ if (fZ) goto L_006e2565;
L_006e255e:; BB(0x006e255e);
    /* 006e255e: mov eax, 1 */ r_eax = 0x1u;
    /* 006e2563: jmp 0x6e2567 */ goto L_006e2567;
L_006e2565:; BB(0x006e2565);
    /* 006e2565: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e2567:; BB(0x006e2567);
    /* 006e2567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2569: je 0x6e258c */ if (fZ) goto L_006e258c;
L_006e256b:; BB(0x006e256b);
    /* 006e256b: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006e256e: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2573: jl 0x6e2587 */ if ((fS!=fO)) goto L_006e2587;
L_006e2575:; BB(0x006e2575);
    /* 006e2575: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e2579: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e257e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006e2582: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2586: ret  */ FN_RET(0x006e24f0); r_esp += 4; return;
L_006e2587:; BB(0x006e2587);
    /* 006e2587: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e258a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e258b: ret  */ FN_RET(0x006e24f0); r_esp += 4; return;
L_006e258c:; BB(0x006e258c);
    /* 006e258c: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e2590: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2595: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006e2599: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e259c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e259d: ret  */ FN_RET(0x006e24f0); r_esp += 4; return;
}

void f_006e25a0(void) /* sub_6E25A0 */
{
    FN_ENTER(0x006e25a0);
    /* 006e25a0: mov dword ptr [0xa966a0], 0x3f800000 */ W32((u32)(0xa966a0u), 0x3f800000u);
    /* 006e25aa: mov dword ptr [0xa966a4], 0x41000000 */ W32((u32)(0xa966a4u), 0x41000000u);
    /* 006e25b4: mov dword ptr [0xa966a8], 0x3fc00000 */ W32((u32)(0xa966a8u), 0x3fc00000u);
    /* 006e25be: ret  */ FN_RET(0x006e25a0); r_esp += 4; return;
}

void f_006e25c0(void) /* sub_6E25C0 */
{
    FN_ENTER(0x006e25c0);
    /* 006e25c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e25c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e25c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e25c5: call 0x6e25e4 */ r_esp -= 4; W32(r_esp, 0x6e25cau); f_006e25e4();
    /* 006e25ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e25ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e25d0: jne 0x6e25d6 */ if (!fZ) goto L_006e25d6;
L_006e25d2:; BB(0x006e25d2);
    /* 006e25d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e25d3: ret 4 */ FN_RET(0x006e25c0); r_esp += 8; return;
L_006e25d6:; BB(0x006e25d6);
    /* 006e25d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e25d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e25dcu); f_005c2f74();
    /* 006e25dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e25dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e25de: ret 4 */ FN_RET(0x006e25c0); r_esp += 8; return;
}

void f_006e25e4(void) /* sub_6E25E4 */
{
    FN_ENTER(0x006e25e4);
    /* 006e25e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e25e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e25e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e25e9: push 0x8ee984 */ { u32 v = 0x8ee984u; r_esp -= 4; W32(r_esp, v); }
    /* 006e25ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e25f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e25f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e25fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e25ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2602: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2605: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2608: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e260b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e260e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2611: mov dword ptr [ecx], 0xb3d140 */ W32((u32)(r_ecx), 0xb3d140u);
    /* 006e2617: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e261e: call 0x6ebcf0 */ r_esp -= 4; W32(r_esp, 0x6e2623u); f_006ebcf0();
    /* 006e2623: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2626: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e262d: mov esp, ebp */ r_esp = r_ebp;
    /* 006e262f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2630: ret  */ FN_RET(0x006e25e4); r_esp += 4; return;
}

void f_006e2634(void) /* sub_6E2634 */
{
    FN_ENTER(0x006e2634);
    /* 006e2634: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2635: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2637: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2639: push 0x8ee9ac */ { u32 v = 0x8ee9acu; r_esp -= 4; W32(r_esp, v); }
    /* 006e263e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2645: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e264c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e264f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2652: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2655: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2658: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e265b: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2660: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e2667: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e266cu); f_005caba4();
    /* 006e266c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e266d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e2670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2672: je 0x6e269a */ if (fZ) goto L_006e269a;
L_006e2674:; BB(0x006e2674);
    /* 006e2674: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e267b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2682: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2685: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2688: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e268b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e268e: call 0x6e26a8 */ r_esp -= 4; W32(r_esp, 0x6e2693u); f_006e26a8();
    /* 006e2693: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e269a:; BB(0x006e269a);
    /* 006e269a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e269d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e26a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006e26a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e26a7: ret  */ FN_RET(0x006e2634); r_esp += 4; return;
}

void f_006e26a8(void) /* sub_6E26A8 */
{
    FN_ENTER(0x006e26a8);
    /* 006e26a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e26a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006e26ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e26ad: push 0x8ee9c8 */ { u32 v = 0x8ee9c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e26b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e26b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e26b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e26c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e26c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e26c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e26c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e26cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e26cf: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e26d2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e26d5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e26d8: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e26db: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6e26e0u); f_006ebd58();
    /* 006e26e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e26e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e26ea: mov dword ptr [eax], 0xb3d140 */ W32((u32)(r_eax), 0xb3d140u);
    /* 006e26f0: lea esi, [eax + 0xe4] */ r_esi = (u32)(r_eax+0xe4u);
    /* 006e26f6: mov edi, 0xb */ r_edi = 0xbu;
    /* 006e26fb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006e26fd:; BB(0x006e26fd);
    /* 006e26fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006e2702: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006e2705: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2707: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006e270b: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006e270e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e2711: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006e2714: jne 0x6e26fd */ if (!fZ) goto L_006e26fd;
L_006e2716:; BB(0x006e2716);
    /* 006e2716: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e2718: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 006e271e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2721: mov eax, dword ptr [0x9cf88c] */ r_eax = R32((u32)(0x9cf88cu));
    /* 006e2726: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e2729: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 006e272f: call 0x6e2794 */ r_esp -= 4; W32(r_esp, 0x6e2734u); f_006e2794();
    /* 006e2734: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2737: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006e273d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e273f: je 0x6e2756 */ if (fZ) goto L_006e2756;
L_006e2741:; BB(0x006e2741);
    /* 006e2741: fld dword ptr [0x96d118] */ FPUSH(R_F32((u32)(0x96d118u)));
    /* 006e2747: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006e274a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e274d: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e2753: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006e2756:; BB(0x006e2756);
    /* 006e2756: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e2759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e275b: je 0x6e2768 */ if (fZ) goto L_006e2768;
L_006e275d:; BB(0x006e275d);
    /* 006e275d: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e2761: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006e2768:; BB(0x006e2768);
    /* 006e2768: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6e276du); f_006ec06c();
    /* 006e276d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2770: call 0x6e2824 */ r_esp -= 4; W32(r_esp, 0x6e2775u); f_006e2824();
    /* 006e2775: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2778: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e277b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e277e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2781: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2784: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e278b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e278d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e278e: ret 0xc */ FN_RET(0x006e26a8); r_esp += 16; return;
}

void f_006e2794(void) /* sub_6E2794 */
{
    FN_ENTER(0x006e2794);
    /* 006e2794: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2795: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2798: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e279a: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006e27a1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e27a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e27a7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e27a9: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e27aeu); f_006ded14();
    /* 006e27ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e27b0: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 006e27b3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e27b6: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 006e27b9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e27bc: mov dword ptr [ebx + 0x7c], edx */ W32((u32)(r_ebx+0x7cu), r_edx);
    /* 006e27bf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e27c2: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 006e27c8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e27cb: mov dword ptr [ebx + 0x84], edx */ W32((u32)(r_ebx+0x84u), r_edx);
    /* 006e27d1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e27d4: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 006e27da: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e27dd: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 006e27e3: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e27e6: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 006e27ec: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e27ef: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 006e27f5: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e27f8: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006e27fe: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e2801: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006e2804: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 006e280a: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006e2811: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e2814: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006e2818: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e281c: fstp dword ptr [ebx + 0x74] */ W_F32((u32)(r_ebx+0x74u), ST(0)); FPOP();
    /* 006e281f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2822: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2823: ret  */ FN_RET(0x006e2794); r_esp += 4; return;
}

void f_006e2824(void) /* sub_6E2824 */
{
    FN_ENTER(0x006e2824);
    /* 006e2824: movsx eax, word ptr [ecx + 0xa6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xa6u));
    /* 006e282b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e282d: jl 0x6e289b */ if ((fS!=fO)) goto L_006e289b;
L_006e282f:; BB(0x006e282f);
    /* 006e282f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2832: jle 0x6e2872 */ if ((fZ||fS!=fO)) goto L_006e2872;
L_006e2834:; BB(0x006e2834);
    /* 006e2834: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e2837: jl 0x6e289b */ if ((fS!=fO)) goto L_006e289b;
L_006e2839:; BB(0x006e2839);
    /* 006e2839: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e283c: jle 0x6e289c */ if ((fZ||fS!=fO)) goto L_006e289c;
L_006e283e:; BB(0x006e283e);
    /* 006e283e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e2841: jl 0x6e289b */ if ((fS!=fO)) goto L_006e289b;
L_006e2843:; BB(0x006e2843);
    /* 006e2843: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e2846: jg 0x6e289b */ if ((!fZ&&fS==fO)) goto L_006e289b;
L_006e2848:; BB(0x006e2848);
    /* 006e2848: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e284b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e284d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e284e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e284f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2850: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 006e2855: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e285au); f_00814298();
    /* 006e285a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e285d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e285f: jl 0x6e289b */ if ((fS!=fO)) goto L_006e289b;
L_006e2861:; BB(0x006e2861);
    /* 006e2861: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2863: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2869: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e286eu); f_00814664();
    /* 006e286e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2871: ret  */ FN_RET(0x006e2824); r_esp += 4; return;
L_006e2872:; BB(0x006e2872);
    /* 006e2872: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2875: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e2877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e287a: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 006e287f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e2884u); f_00814298();
    /* 006e2884: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e2887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2889: jl 0x6e289b */ if ((fS!=fO)) goto L_006e289b;
L_006e288b:; BB(0x006e288b);
    /* 006e288b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e288d: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2893: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e2898u); f_00814664();
    /* 006e2898: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006e289b:; BB(0x006e289b);
    /* 006e289b: ret  */ FN_RET(0x006e2824); r_esp += 4; return;
L_006e289c:; BB(0x006e289c);
    /* 006e289c: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e289f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e28a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e28a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e28a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e28a4: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 006e28a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e28aeu); f_00814298();
    /* 006e28ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e28b1: ret  */ FN_RET(0x006e2824); r_esp += 4; return;
}

void f_006e28b4(void) /* sub_6E28B4 */
{
    FN_ENTER(0x006e28b4);
    /* 006e28b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e28b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e28b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e28b9: push 0x8ee9f0 */ { u32 v = 0x8ee9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e28be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e28c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e28c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e28cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e28cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e28d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e28d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e28d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e28db: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006e28e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e28e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e28ecu); f_005caba4();
    /* 006e28ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e28ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e28f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e28f2: je 0x6e291d */ if (fZ) goto L_006e291d;
L_006e28f4:; BB(0x006e28f4);
    /* 006e28f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e28fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2902: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2905: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2908: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e290b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e290e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2911: call 0x6e292c */ r_esp -= 4; W32(r_esp, 0x6e2916u); f_006e292c();
    /* 006e2916: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e291d:; BB(0x006e291d);
    /* 006e291d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2920: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2927: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e292a: ret  */ FN_RET(0x006e28b4); r_esp += 4; return;
}

void f_006e292c(void) /* sub_6E292C */
{
    FN_ENTER(0x006e292c);
    /* 006e292c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e292d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e292f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2931: push 0x8eea0c */ { u32 v = 0x8eea0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e293c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e293d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2944: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e294a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e294d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e2950: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e2953: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006e2956: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2959: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e295c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e295f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e2962: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e2965: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6e296au); f_006ebd58();
    /* 006e296a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2971: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2974: mov dword ptr [edi], 0xb3d140 */ W32((u32)(r_edi), 0xb3d140u);
    /* 006e297a: lea ebx, [edi + 0xe4] */ r_ebx = (u32)(r_edi+0xe4u);
    /* 006e2980: mov esi, 0xb */ r_esi = 0xbu;
    /* 006e2985: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e2987:; BB(0x006e2987);
    /* 006e2987: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e298c: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006e298f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e2991: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006e2995: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006e2998: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e299b: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006e299e: jne 0x6e2987 */ if (!fZ) goto L_006e2987;
L_006e29a0:; BB(0x006e29a0);
    /* 006e29a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e29a3: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 006e29ad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e29b0: mov ecx, dword ptr [0x9cf88c] */ r_ecx = R32((u32)(0x9cf88cu));
    /* 006e29b6: mov dword ptr [edx + 0x13c], 1 */ W32((u32)(r_edx+0x13cu), 0x1u);
    /* 006e29c0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006e29c3: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006e29c5: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006e29c8: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006e29cb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006e29ce: add edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e29d4: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006e29d6: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006e29d9: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006e29dc: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006e29df: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006e29e2: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006e29e5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006e29e8: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006e29eb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006e29ee: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006e29f1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e29f4: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006e29f7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006e29fa: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006e29fd: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006e2a00: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006e2a03: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006e2a06: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006e2a09: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006e2a0c: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006e2a0f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006e2a12: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006e2a15: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006e2a18: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006e2a1b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006e2a1e: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006e2a21: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006e2a24: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e2a27: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006e2a2a: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006e2a2d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006e2a30: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006e2a33: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006e2a36: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006e2a39: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006e2a3c: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006e2a3f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006e2a42: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006e2a45: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006e2a48: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006e2a4b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e2a4e: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006e2a51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2a54: call 0x6e2794 */ r_esp -= 4; W32(r_esp, 0x6e2a59u); f_006e2794();
    /* 006e2a59: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2a5c: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006e2a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2a64: je 0x6e2a7b */ if (fZ) goto L_006e2a7b;
L_006e2a66:; BB(0x006e2a66);
    /* 006e2a66: fld dword ptr [0x96d110] */ FPUSH(R_F32((u32)(0x96d110u)));
    /* 006e2a6c: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006e2a6f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2a72: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e2a78: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006e2a7b:; BB(0x006e2a7b);
    /* 006e2a7b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e2a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2a80: je 0x6e2a8d */ if (fZ) goto L_006e2a8d;
L_006e2a82:; BB(0x006e2a82);
    /* 006e2a82: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e2a86: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006e2a8d:; BB(0x006e2a8d);
    /* 006e2a8d: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 006e2a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2a95: je 0x6e2aa7 */ if (fZ) goto L_006e2aa7;
L_006e2a97:; BB(0x006e2a97);
    /* 006e2a97: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6e2a9cu); f_006ec06c();
    /* 006e2a9c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2a9f: call 0x6e2824 */ r_esp -= 4; W32(r_esp, 0x6e2aa4u); f_006e2824();
    /* 006e2aa4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006e2aa7:; BB(0x006e2aa7);
    /* 006e2aa7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2aaa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e2aad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e2ab0: mov eax, ecx */ r_eax = r_ecx;
    /* 006e2ab2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2ab5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2abc: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2abf: ret 0x10 */ FN_RET(0x006e292c); r_esp += 20; return;
}

void f_006e2ac4(void) /* sub_6E2AC4 */
{
    FN_ENTER(0x006e2ac4);
    /* 006e2ac4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2ac5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2ac8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e2aca: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 006e2ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2ad2: je 0x6e2bbf */ if (fZ) goto L_006e2bbf;
L_006e2ad8:; BB(0x006e2ad8);
    /* 006e2ad8: movzx eax, word ptr [ebx + 0xa8] */ r_eax = (u32)R16((u32)(r_ebx+0xa8u));
    /* 006e2adf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2ae0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e2ae5u); f_007b4d18();
    /* 006e2ae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2ae6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006e2ae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2aeb: je 0x6e2bad */ if (fZ) goto L_006e2bad;
L_006e2af1:; BB(0x006e2af1);
    /* 006e2af1: mov edx, dword ptr [ebx + 0x13c] */ r_edx = R32((u32)(r_ebx+0x13cu));
    /* 006e2af7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2af9: je 0x6e2b7e */ if (fZ) goto L_006e2b7e;
L_006e2aff:; BB(0x006e2aff);
    /* 006e2aff: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006e2b06: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2b09: jg 0x6e2b18 */ if ((!fZ&&fS==fO)) goto L_006e2b18;
L_006e2b0b:; BB(0x006e2b0b);
    /* 006e2b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b0c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e2b0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2b10: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6e2b13u); call_ind(t); }
    /* 006e2b13: jmp 0x6e2b9b */ goto L_006e2b9b;
L_006e2b18:; BB(0x006e2b18);
    /* 006e2b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b19: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e2b1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2b1d: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6e2b20u); call_ind(t); }
    /* 006e2b20: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 006e2b26: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e2b28: je 0x6e2b9b */ if (fZ) goto L_006e2b9b;
L_006e2b2a:; BB(0x006e2b2a);
    /* 006e2b2a: mov eax, 0 */ r_eax = 0x0u;
    /* 006e2b2f: jle 0x6e2b9b */ if ((fZ||fS!=fO)) goto L_006e2b9b;
L_006e2b31:; BB(0x006e2b31);
    /* 006e2b31: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006e2b35: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e2b38: mov edi, eax */ r_edi = r_eax;
L_006e2b3a:; BB(0x006e2b3a);
    /* 006e2b3a: movzx edx, word ptr [ebx + edi*8 + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+r_edi*8+0xe4u));
    /* 006e2b42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b43: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e2b48u); f_007b4d18();
    /* 006e2b48: mov esi, eax */ r_esi = r_eax;
    /* 006e2b4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b4b: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e2b50u); f_006ea700();
    /* 006e2b50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e2b53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2b55: je 0x6e2b6a */ if (fZ) goto L_006e2b6a;
L_006e2b57:; BB(0x006e2b57);
    /* 006e2b57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b58: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e2b5du); f_006ea71c();
    /* 006e2b5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2b60: je 0x6e2b6a */ if (fZ) goto L_006e2b6a;
L_006e2b62:; BB(0x006e2b62);
    /* 006e2b62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b63: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e2b65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2b67: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6e2b6au); call_ind(t); }
L_006e2b6a:; BB(0x006e2b6a);
    /* 006e2b6a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e2b6d: cmp edi, dword ptr [ebx + 0xe0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2b73: jl 0x6e2b3a */ if ((fS!=fO)) goto L_006e2b3a;
L_006e2b75:; BB(0x006e2b75);
    /* 006e2b75: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006e2b79: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006e2b7c: jmp 0x6e2b9b */ goto L_006e2b9b;
L_006e2b7e:; BB(0x006e2b7e);
    /* 006e2b7e: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006e2b85: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2b88: jg 0x6e2b94 */ if ((!fZ&&fS==fO)) goto L_006e2b94;
L_006e2b8a:; BB(0x006e2b8a);
    /* 006e2b8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2b8b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e2b8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2b8f: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6e2b92u); call_ind(t); }
    /* 006e2b92: jmp 0x6e2b9b */ goto L_006e2b9b;
L_006e2b94:; BB(0x006e2b94);
    /* 006e2b94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2b96: call 0x6ebfdc */ r_esp -= 4; W32(r_esp, 0x6e2b9bu); f_006ebfdc();
L_006e2b9b:; BB(0x006e2b9b);
    /* 006e2b9b: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e2b9f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2ba4: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e2ba8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2bab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2bac: ret  */ FN_RET(0x006e2ac4); r_esp += 4; return;
L_006e2bad:; BB(0x006e2bad);
    /* 006e2bad: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e2bb1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2bb6: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e2bba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2bbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2bbe: ret  */ FN_RET(0x006e2ac4); r_esp += 4; return;
L_006e2bbf:; BB(0x006e2bbf);
    /* 006e2bbf: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e2bc3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2bc8: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e2bcc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2bcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2bd0: ret  */ FN_RET(0x006e2ac4); r_esp += 4; return;
}

void f_006e2bd4(void) /* sub_6E2BD4 */
{
    FN_ENTER(0x006e2bd4);
    /* 006e2bd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2bd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2bd6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2bd9: mov esi, ecx */ r_esi = r_ecx;
    /* 006e2bdb: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006e2bdf: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 006e2be2: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006e2be9: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2bec: jne 0x6e2bf6 */ if (!fZ) goto L_006e2bf6;
L_006e2bee:; BB(0x006e2bee);
    /* 006e2bee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2bf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e2bf3: ret 4 */ FN_RET(0x006e2bd4); r_esp += 8; return;
L_006e2bf6:; BB(0x006e2bf6);
    /* 006e2bf6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006e2bf9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e2bfd: mov ecx, 0xa */ r_ecx = 0xau;
    /* 006e2c02: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e2c05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e2c0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c0f: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2c12: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e2c15u); call_ind(t); }
    /* 006e2c15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e2c17: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c19: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006e2c1c: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e2c20: movzx ebp, word ptr [ebp + 0x1c] */ r_ebp = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006e2c24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c26: call 0x71829c */ r_esp -= 4; W32(r_esp, 0x6e2c2bu); f_0071829c();
    /* 006e2c2b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2c2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e2c30: ret 4 */ FN_RET(0x006e2bd4); r_esp += 8; return;
}

void f_006e2c34(void) /* sub_6E2C34 */
{
    FN_ENTER(0x006e2c34);
    /* 006e2c34: mov dword ptr [0xa966ac], 0x3f800000 */ W32((u32)(0xa966acu), 0x3f800000u);
    /* 006e2c3e: mov dword ptr [0xa966b0], 0x41000000 */ W32((u32)(0xa966b0u), 0x41000000u);
    /* 006e2c48: mov dword ptr [0xa966b4], 0x3fc00000 */ W32((u32)(0xa966b4u), 0x3fc00000u);
    /* 006e2c52: ret  */ FN_RET(0x006e2c34); r_esp += 4; return;
}

void f_006e2c54(void) /* sub_6E2C54 */
{
    FN_ENTER(0x006e2c54);
    /* 006e2c54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e2c57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e2c59: call 0x6e2c78 */ r_esp -= 4; W32(r_esp, 0x6e2c5eu); f_006e2c78();
    /* 006e2c5e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e2c62: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2c64: jne 0x6e2c6a */ if (!fZ) goto L_006e2c6a;
L_006e2c66:; BB(0x006e2c66);
    /* 006e2c66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2c67: ret 4 */ FN_RET(0x006e2c54); r_esp += 8; return;
L_006e2c6a:; BB(0x006e2c6a);
    /* 006e2c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c6b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e2c70u); f_005c2f74();
    /* 006e2c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2c71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2c72: ret 4 */ FN_RET(0x006e2c54); r_esp += 8; return;
}

void f_006e2c78(void) /* sub_6E2C78 */
{
    FN_ENTER(0x006e2c78);
    /* 006e2c78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c79: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2c7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c7d: push 0x8eea28 */ { u32 v = 0x8eea28u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2c88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2c89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2c90: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2c93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2c96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2c99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2c9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e2c9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e2ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2ca9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2cac: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2caf: mov dword ptr [eax], 0xb3d1a8 */ W32((u32)(r_eax), 0xb3d1a8u);
    /* 006e2cb5: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e2cbau); f_008148d4();
    /* 006e2cba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2cbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e2cc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2cc5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e2ccau); f_008171e8();
    /* 006e2cca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2ccd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2cd4: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2cd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2cd7: ret  */ FN_RET(0x006e2c78); r_esp += 4; return;
}

void f_006e2cd8(void) /* sub_6E2CD8 */
{
    FN_ENTER(0x006e2cd8);
    /* 006e2cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2cdd: push 0x8eea44 */ { u32 v = 0x8eea44u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2cf0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2cf6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e2cf9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e2cfc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e2cff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e2d02: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2d05: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e2d08: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e2d0b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e2d10u); f_008193cc();
    /* 006e2d10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2d17: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2d1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2d1d: mov dword ptr [edi], 0xb3d1a8 */ W32((u32)(r_edi), 0xb3d1a8u);
    /* 006e2d23: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006e2d26: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006e2d2c: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006e2d2f: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006e2d35: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e2d38: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006e2d3e: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006e2d41: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e2d43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2d44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2d45: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006e2d48: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e2d4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2d4c: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2d51: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e2d56u); f_00814298();
    /* 006e2d56: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2d59: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e2d5c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2d5f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e2d62: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e2d65: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006e2d68: mov eax, edx */ r_eax = r_edx;
    /* 006e2d6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2d6d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2d74: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2d76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2d77: ret 8 */ FN_RET(0x006e2cd8); r_esp += 12; return;
}

void f_006e2d7c(void) /* sub_6E2D7C */
{
    FN_ENTER(0x006e2d7c);
    /* 006e2d7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2d7d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2d80: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006e2d82: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006e2d85: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2d88: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e2d8d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e2d8f: mov dword ptr [ebp + 0x2c], ecx */ W32((u32)(r_ebp+0x2cu), r_ecx);
    /* 006e2d92: mov eax, ecx */ r_eax = r_ecx;
    /* 006e2d94: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e2d97: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006e2d9a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e2d9c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e2d9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2da1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2da3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2da5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2da7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2da9: jne 0x6e2dd9 */ if (!fZ) goto L_006e2dd9;
L_006e2dab:; BB(0x006e2dab);
    /* 006e2dab: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e2dae: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006e2db2: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 006e2db5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e2db7: mov esi, eax */ r_esi = r_eax;
    /* 006e2db9: mov edi, edx */ r_edi = r_edx;
L_006e2dbb:; BB(0x006e2dbb);
    /* 006e2dbb: push dword ptr [esi + 0x9cf890] */ { u32 v = R32((u32)(r_esi+0x9cf890u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2dc1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e2dc2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e2dc7u); f_0050b510();
    /* 006e2dc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e2dca: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e2dcd: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2dd0: jl 0x6e2dbb */ if ((fS!=fO)) goto L_006e2dbb;
L_006e2dd2:; BB(0x006e2dd2);
    /* 006e2dd2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006e2dd5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_006e2dd9:; BB(0x006e2dd9);
    /* 006e2dd9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006e2ddc: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006e2de2: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2de8: je 0x6e2df1 */ if (fZ) goto L_006e2df1;
L_006e2dea:; BB(0x006e2dea);
    /* 006e2dea: mov eax, 1 */ r_eax = 0x1u;
    /* 006e2def: jmp 0x6e2df3 */ goto L_006e2df3;
L_006e2df1:; BB(0x006e2df1);
    /* 006e2df1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e2df3:; BB(0x006e2df3);
    /* 006e2df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2df5: je 0x6e2e18 */ if (fZ) goto L_006e2e18;
L_006e2df7:; BB(0x006e2df7);
    /* 006e2df7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006e2dfa: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2dff: jl 0x6e2e13 */ if ((fS!=fO)) goto L_006e2e13;
L_006e2e01:; BB(0x006e2e01);
    /* 006e2e01: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e2e05: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2e0a: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006e2e0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2e12: ret  */ FN_RET(0x006e2d7c); r_esp += 4; return;
L_006e2e13:; BB(0x006e2e13);
    /* 006e2e13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2e16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2e17: ret  */ FN_RET(0x006e2d7c); r_esp += 4; return;
L_006e2e18:; BB(0x006e2e18);
    /* 006e2e18: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e2e1c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e2e21: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006e2e25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2e29: ret  */ FN_RET(0x006e2d7c); r_esp += 4; return;
}

void f_006e2e2c(void) /* sub_6E2E2C */
{
    FN_ENTER(0x006e2e2c);
    /* 006e2e2c: mov dword ptr [0xa966bc], 0x3f800000 */ W32((u32)(0xa966bcu), 0x3f800000u);
    /* 006e2e36: mov dword ptr [0xa966c0], 0x41000000 */ W32((u32)(0xa966c0u), 0x41000000u);
    /* 006e2e40: mov dword ptr [0xa966c4], 0x3fc00000 */ W32((u32)(0xa966c4u), 0x3fc00000u);
    /* 006e2e4a: ret  */ FN_RET(0x006e2e2c); r_esp += 4; return;
}

void f_006e2e4c(void) /* sub_6E2E4C */
{
    FN_ENTER(0x006e2e4c);
    /* 006e2e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2e4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2e51: push 0x8eea60 */ { u32 v = 0x8eea60u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2e56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2e5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2e64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2e67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2e6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e2e6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e2e70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e2e73: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e2e76: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e2e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2e80: mov edx, ecx */ r_edx = r_ecx;
    /* 006e2e82: movzx ecx, word ptr [edx + 0xc6] */ r_ecx = (u32)R16((u32)(r_edx+0xc6u));
    /* 006e2e89: mov ebx, dword ptr [ecx*8 + 0x96d1cc] */ r_ebx = R32((u32)(r_ecx*8+0x96d1ccu));
    /* 006e2e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e2e92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e2e94: mov dword ptr [edx], 0xb3d280 */ W32((u32)(r_edx), 0xb3d280u);
    /* 006e2e9a: jbe 0x6e2ed6 */ if ((fC||fZ)) goto L_006e2ed6;
L_006e2e9c:; BB(0x006e2e9c);
    /* 006e2e9c: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2e9f: mov edx, dword ptr [edi + 0x130] */ r_edx = R32((u32)(r_edi+0x130u));
    /* 006e2ea5: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 006e2ea8: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e2eac: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e2eb2: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 006e2eb6: mov esi, dword ptr [edi + 0x130] */ r_esi = R32((u32)(r_edi+0x130u));
    /* 006e2ebc: mov dword ptr [esi + eax*4], 0 */ W32((u32)(r_esi+r_eax*4), 0x0u);
    /* 006e2ec3: movzx edx, word ptr [edi + 0xc6] */ r_edx = (u32)R16((u32)(r_edi+0xc6u));
    /* 006e2eca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e2ecd: cmp eax, dword ptr [edx*8 + 0x96d1cc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*8+0x96d1ccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e2ed4: jb 0x6e2e9c */ if (fC) goto L_006e2e9c;
L_006e2ed6:; BB(0x006e2ed6);
    /* 006e2ed6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2ed9: push dword ptr [eax + 0x130] */ { u32 v = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2edf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6e2ee4u); f_00857e98();
    /* 006e2ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2ee5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e2eec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2eef: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6e2ef4u); f_006efddc();
    /* 006e2ef4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e2ef7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2ef9: jne 0x6e2f14 */ if (!fZ) goto L_006e2f14;
L_006e2efb:; BB(0x006e2efb);
    /* 006e2efb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2efe: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e2f01: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e2f04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2f07: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2f0e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2f11: ret 4 */ FN_RET(0x006e2e4c); r_esp += 8; return;
L_006e2f14:; BB(0x006e2f14);
    /* 006e2f14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e2f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f18: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e2f1du); f_005c2f74();
    /* 006e2f1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2f1e: jmp 0x6e2efb */ goto L_006e2efb;
}

void f_006e2f20(void) /* sub_6E2F20 */
{
    FN_ENTER(0x006e2f20);
    /* 006e2f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f21: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f25: push 0x8eea88 */ { u32 v = 0x8eea88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2f38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2f3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2f3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2f41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2f44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e2f47: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f4c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e2f53: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e2f58u); f_005caba4();
    /* 006e2f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e2f59: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e2f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e2f5e: je 0x6e2f89 */ if (fZ) goto L_006e2f89;
L_006e2f60:; BB(0x006e2f60);
    /* 006e2f60: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e2f67: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2f6e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2f71: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2f74: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2f77: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2f7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2f7d: call 0x6e2f98 */ r_esp -= 4; W32(r_esp, 0x6e2f82u); f_006e2f98();
    /* 006e2f82: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e2f89:; BB(0x006e2f89);
    /* 006e2f89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e2f8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e2f93: mov esp, ebp */ r_esp = r_ebp;
    /* 006e2f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2f96: ret  */ FN_RET(0x006e2f20); r_esp += 4; return;
}

void f_006e2f98(void) /* sub_6E2F98 */
{
    FN_ENTER(0x006e2f98);
    /* 006e2f98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f99: mov ebp, esp */ r_ebp = r_esp;
    /* 006e2f9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e2f9d: push 0x8eeaa4 */ { u32 v = 0x8eeaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e2fa2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e2fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e2fa9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e2fb0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e2fb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e2fb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e2fb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e2fbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e2fbf: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2fc2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2fc5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2fc8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e2fcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e2fce: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6e2fd3u); f_006efe50();
    /* 006e2fd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e2fda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e2fdd: mov dword ptr [ecx], 0xb3d280 */ W32((u32)(r_ecx), 0xb3d280u);
    /* 006e2fe3: mov eax, dword ptr [0x9cf89c] */ r_eax = R32((u32)(0x9cf89cu));
    /* 006e2fe8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e2feb: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e2fee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2ff0: je 0x6e2ffd */ if (fZ) goto L_006e2ffd;
L_006e2ff2:; BB(0x006e2ff2);
    /* 006e2ff2: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e2ff6: mov word ptr [ecx + 0xc8], ax */ W16((u32)(r_ecx+0xc8u), (u16)r_eax);
L_006e2ffd:; BB(0x006e2ffd);
    /* 006e2ffd: call 0x6e31e8 */ r_esp -= 4; W32(r_esp, 0x6e3002u); f_006e31e8();
    /* 006e3002: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3005: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 006e3008: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 006e300b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006e300e: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e3011: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e3018: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006e301b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 006e301e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3021: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3022: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x6e3027u); f_0050bab4();
    /* 006e3027: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e302a: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006e3031: mov ecx, dword ptr [edx*8 + 0x96d1cc] */ r_ecx = R32((u32)(r_edx*8+0x96d1ccu));
    /* 006e3038: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e303a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e303c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e303d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e3042u); f_008581c5();
    /* 006e3042: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3045: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3048: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e304f: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006e3055: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e3057: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3059: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e305b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e305d: mov eax, dword ptr [edx + 0x96d1cc] */ r_eax = R32((u32)(r_edx+0x96d1ccu));
    /* 006e3063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e3065: jbe 0x6e31c7 */ if ((fC||fZ)) goto L_006e31c7;
L_006e306b:; BB(0x006e306b);
    /* 006e306b: mov edx, dword ptr [edx + 0x96d1c8] */ r_edx = R32((u32)(r_edx+0x96d1c8u));
    /* 006e3071: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006e3074: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3076: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006e3079: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e307b: mov ebx, dword ptr [esi + edx + 4] */ r_ebx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006e307f: test ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3085: je 0x6e308e */ if (fZ) goto L_006e308e;
L_006e3087:; BB(0x006e3087);
    /* 006e3087: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 006e308c: jmp 0x6e3090 */ goto L_006e3090;
L_006e308e:; BB(0x006e308e);
    /* 006e308e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e3090:; BB(0x006e3090);
    /* 006e3090: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3093: jne 0x6e30e4 */ if (!fZ) goto L_006e30e4;
L_006e3095:; BB(0x006e3095);
    /* 006e3095: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3098: je 0x6e30c1 */ if (fZ) goto L_006e30c1;
L_006e309a:; BB(0x006e309a);
    /* 006e309a: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 006e309d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e309e: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e30a1: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e30a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e30a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e30a6: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e30abu); f_00509dc4();
    /* 006e30ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e30ae: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e30b1: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e30b7: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e30ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e30bc: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006e30bf: jmp 0x6e3122 */ goto L_006e3122;
L_006e30c1:; BB(0x006e30c1);
    /* 006e30c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e30c2: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e30c5: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e30c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e30c9: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e30ceu); f_0050981c();
    /* 006e30ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e30d1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e30d4: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e30da: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e30dd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e30df: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006e30e2: jmp 0x6e3122 */ goto L_006e3122;
L_006e30e4:; BB(0x006e30e4);
    /* 006e30e4: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 006e30e7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e30ee: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e30f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e30f5: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006e30f8: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 006e30fb: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e30fe: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006e3101: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3104: lea ebx, [ebp - 0x2c] */ r_ebx = (u32)(r_ebp+0xffffffd4u);
    /* 006e3107: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3108: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3109: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e310eu); f_00509dc4();
    /* 006e310e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3111: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3114: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e311a: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e311d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e311f: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006e3122:; BB(0x006e3122);
    /* 006e3122: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3125: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006e312b: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
    /* 006e312e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3130: je 0x6e31ab */ if (fZ) goto L_006e31ab;
L_006e3132:; BB(0x006e3132);
    /* 006e3132: movzx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)R16((u32)(r_ecx+0xc6u));
    /* 006e3139: mov edx, dword ptr [edx*8 + 0x96d1c8] */ r_edx = R32((u32)(r_edx*8+0x96d1c8u));
    /* 006e3140: mov ecx, dword ptr [esi + edx + 4] */ r_ecx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006e3144: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3147: je 0x6e319e */ if (fZ) goto L_006e319e;
L_006e3149:; BB(0x006e3149);
    /* 006e3149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e314b: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6e3150u); f_0050c094();
    /* 006e3150: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3151: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3154: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 006e315a: mov ecx, dword ptr [0xa96680] */ r_ecx = R32((u32)(0xa96680u));
    /* 006e3160: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 006e3163: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006e3166: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006e316a: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 006e3171: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e3174: or eax, 0xffff0600 */ {  u32 a = r_eax; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e3179: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006e317d: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006e3184: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3187: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 006e318d: movzx edx, word ptr [edx + 0xc6] */ r_edx = (u32)R16((u32)(r_edx+0xc6u));
    /* 006e3194: mov edx, dword ptr [edx*8 + 0x96d1c8] */ r_edx = R32((u32)(r_edx*8+0x96d1c8u));
    /* 006e319b: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
L_006e319e:; BB(0x006e319e);
    /* 006e319e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e31a1: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 006e31a5: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006e31a8: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
L_006e31ab:; BB(0x006e31ab);
    /* 006e31ab: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e31b2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e31b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e31b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e31b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e31bb: cmp edi, dword ptr [edx + 0x96d1cc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x96d1ccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e31c1: jb 0x6e306b */ if (fC) goto L_006e306b;
L_006e31c7:; BB(0x006e31c7);
    /* 006e31c7: call 0x6e331c */ r_esp -= 4; W32(r_esp, 0x6e31ccu); f_006e331c();
    /* 006e31cc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e31cf: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e31d2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e31d5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e31d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e31db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e31e2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e31e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e31e5: ret 0x10 */ FN_RET(0x006e2f98); r_esp += 20; return;
}

