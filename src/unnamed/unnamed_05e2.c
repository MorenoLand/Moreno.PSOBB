#include "protos.h"

void f_005e20c0(void) /* sub_5E20C0 */
{
    FN_ENTER(0x005e20c0);
    /* 005e20c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e20c1: mov edi, ecx */ r_edi = r_ecx;
    /* 005e20c3: movzx eax, byte ptr [edi + 0x1e4] */ r_eax = (u32)R8((u32)(r_edi+0x1e4u));
    /* 005e20ca: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005e20ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e20cf: call 0x5d24c4 */ r_esp -= 4; W32(r_esp, 0x5e20d4u); f_005d24c4();
    /* 005e20d4: movzx eax, byte ptr [edi + 0x1e5] */ r_eax = (u32)R8((u32)(r_edi+0x1e5u));
    /* 005e20db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e20dc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005e20e0: call 0x5d24d0 */ r_esp -= 4; W32(r_esp, 0x5e20e5u); f_005d24d0();
    /* 005e20e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e20e6: ret 4 */ FN_RET(0x005e20c0); r_esp += 8; return;
}

void f_005e20ec(void) /* sub_5E20EC */
{
    FN_ENTER(0x005e20ec);
    /* 005e20ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e20ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e20ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e20ef: mov edi, ecx */ r_edi = r_ecx;
    /* 005e20f1: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e20f6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e20f8: je 0x5e210f */ if (fZ) goto L_005e210f;
L_005e20fa:; BB(0x005e20fa);
    /* 005e20fa: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e2100: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 005e2106: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2109: je 0x5e2423 */ if (fZ) goto L_005e2423;
L_005e210f:; BB(0x005e210f);
    /* 005e210f: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e2115: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e2117: je 0x5e2411 */ if (fZ) goto L_005e2411;
L_005e211d:; BB(0x005e211d);
    /* 005e211d: mov ecx, edi */ r_ecx = r_edi;
    /* 005e211f: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e2124u); f_005c5198();
    /* 005e2124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2126: jne 0x5e228f */ if (!fZ) goto L_005e228f;
L_005e212c:; BB(0x005e212c);
    /* 005e212c: mov esi, dword ptr [edi + 0xfc] */ r_esi = R32((u32)(r_edi+0xfcu));
    /* 005e2132: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2134: je 0x5e2295 */ if (fZ) goto L_005e2295;
L_005e213a:; BB(0x005e213a);
    /* 005e213a: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e2140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2142: je 0x5e2295 */ if (fZ) goto L_005e2295;
L_005e2148:; BB(0x005e2148);
    /* 005e2148: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005e214b: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2150: jne 0x5e2295 */ if (!fZ) goto L_005e2295;
L_005e2156:; BB(0x005e2156);
    /* 005e2156: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005e215c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e215e: jne 0x5e2295 */ if (!fZ) goto L_005e2295;
L_005e2164:; BB(0x005e2164);
    /* 005e2164: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2167: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e216cu); f_0081a9b8();
    /* 005e216c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e216d: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e2173: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 005e2179: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e2183: add ecx, 0x4c0 */ {  u32 a = r_ecx; u32 b = 0x4c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2189: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e218eu); f_0082d990();
    /* 005e218e: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e2194: mov dword ptr [0xa8dbf0], edi */ W32((u32)(0xa8dbf0u), r_edi);
    /* 005e219a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e219c: je 0x5e21aa */ if (fZ) goto L_005e21aa;
L_005e219e:; BB(0x005e219e);
    /* 005e219e: mov dword ptr [0xa8dbf4], 1 */ W32((u32)(0xa8dbf4u), 0x1u);
    /* 005e21a8: jmp 0x5e21b4 */ goto L_005e21b4;
L_005e21aa:; BB(0x005e21aa);
    /* 005e21aa: mov dword ptr [0xa8dbf4], 0 */ W32((u32)(0xa8dbf4u), 0x0u);
L_005e21b4:; BB(0x005e21b4);
    /* 005e21b4: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e21ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e21bc: je 0x5e244e */ if (fZ) goto L_005e244e;
L_005e21c2:; BB(0x005e21c2);
    /* 005e21c2: mov ecx, 0x5e263c */ r_ecx = 0x5e263cu;
    /* 005e21c7: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e21ccu); f_0082fac4();
L_005e21cc:; BB(0x005e21cc);
    /* 005e21cc: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5e21d1u); f_005cb0c8();
    /* 005e21d1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e21d6: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e21d9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e21de: mov ecx, edi */ r_ecx = r_edi;
    /* 005e21e0: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e21e5u); f_005c3538();
    /* 005e21e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e21e8: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5e21edu); f_005cb158();
    /* 005e21ed: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e21f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e21f5: je 0x5e2436 */ if (fZ) goto L_005e2436;
L_005e21fb:; BB(0x005e21fb);
    /* 005e21fb: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e2200: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2205: je 0x5e2213 */ if (fZ) goto L_005e2213;
L_005e2207:; BB(0x005e2207);
    /* 005e2207: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e220d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e220f: jne 0x5e2241 */ if (!fZ) goto L_005e2241;
L_005e2211:; BB(0x005e2211);
    /* 005e2211: jmp 0x5e221d */ goto L_005e221d;
L_005e2213:; BB(0x005e2213);
    /* 005e2213: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e2219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e221b: je 0x5e2241 */ if (fZ) goto L_005e2241;
L_005e221d:; BB(0x005e221d);
    /* 005e221d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e2222u); f_0082fa9c();
    /* 005e2222: push dword ptr [edi + 0x1ec] */ { u32 v = R32((u32)(r_edi+0x1ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2228: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e222e: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2234: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e2239u); f_0083046c();
    /* 005e2239: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e223c: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e2241u); f_0082faac();
L_005e2241:; BB(0x005e2241);
    /* 005e2241: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5e2246u); f_005cb228();
    /* 005e2246: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e224bu); f_005c3400();
    /* 005e224b: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e2250u); f_005c3450();
    /* 005e2250: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2252: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e2257u); f_005c34bc();
    /* 005e2257: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2259: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e225eu); f_005c3504();
    /* 005e225e: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5e2263u); f_005cb114();
    /* 005e2263: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e2269: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e226b: je 0x5e2427 */ if (fZ) goto L_005e2427;
L_005e2271:; BB(0x005e2271);
    /* 005e2271: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2273: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e2278u); f_0082fac4();
L_005e2278:; BB(0x005e2278);
    /* 005e2278: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e227du); f_0082da80();
    /* 005e227d: mov esi, dword ptr [edi + 0xfc] */ r_esi = R32((u32)(r_edi+0xfcu));
    /* 005e2283: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e228d: jmp 0x5e2295 */ goto L_005e2295;
L_005e228f:; BB(0x005e228f);
    /* 005e228f: mov esi, dword ptr [edi + 0xfc] */ r_esi = R32((u32)(r_edi+0xfcu));
L_005e2295:; BB(0x005e2295);
    /* 005e2295: mov eax, dword ptr [edi + 0x1ac] */ r_eax = R32((u32)(r_edi+0x1acu));
    /* 005e229b: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
    /* 005e22a1: mov ecx, edi */ r_ecx = r_edi;
    /* 005e22a3: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e22a8u); f_005c5198();
    /* 005e22a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e22aa: jne 0x5e2407 */ if (!fZ) goto L_005e2407;
L_005e22b0:; BB(0x005e22b0);
    /* 005e22b0: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 005e22b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e22b8: je 0x5e2407 */ if (fZ) goto L_005e2407;
L_005e22be:; BB(0x005e22be);
    /* 005e22be: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e22c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e22c6: je 0x5e2407 */ if (fZ) goto L_005e2407;
L_005e22cc:; BB(0x005e22cc);
    /* 005e22cc: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005e22cf: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e22d4: jne 0x5e2407 */ if (!fZ) goto L_005e2407;
L_005e22da:; BB(0x005e22da);
    /* 005e22da: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005e22e0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e22e2: jne 0x5e2407 */ if (!fZ) goto L_005e2407;
L_005e22e8:; BB(0x005e22e8);
    /* 005e22e8: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e22eb: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e22f0u); f_0081a9b8();
    /* 005e22f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e22f1: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e22f7: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 005e22fd: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e2307: add ecx, 0x280 */ {  u32 a = r_ecx; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e230d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e2312u); f_0082d990();
    /* 005e2312: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e2318: mov dword ptr [0xa8dbf0], edi */ W32((u32)(0xa8dbf0u), r_edi);
    /* 005e231e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e2320: je 0x5e232e */ if (fZ) goto L_005e232e;
L_005e2322:; BB(0x005e2322);
    /* 005e2322: mov dword ptr [0xa8dbf4], 1 */ W32((u32)(0xa8dbf4u), 0x1u);
    /* 005e232c: jmp 0x5e2338 */ goto L_005e2338;
L_005e232e:; BB(0x005e232e);
    /* 005e232e: mov dword ptr [0xa8dbf4], 0 */ W32((u32)(0xa8dbf4u), 0x0u);
L_005e2338:; BB(0x005e2338);
    /* 005e2338: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e233e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2340: je 0x5e2481 */ if (fZ) goto L_005e2481;
L_005e2346:; BB(0x005e2346);
    /* 005e2346: mov ecx, 0x5e263c */ r_ecx = 0x5e263cu;
    /* 005e234b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e2350u); f_0082fac4();
L_005e2350:; BB(0x005e2350);
    /* 005e2350: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5e2355u); f_005cb0c8();
    /* 005e2355: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e235a: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e235d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e2362: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2364: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e2369u); f_005c3538();
    /* 005e2369: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e236c: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5e2371u); f_005cb158();
    /* 005e2371: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e2377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2379: je 0x5e2469 */ if (fZ) goto L_005e2469;
L_005e237f:; BB(0x005e237f);
    /* 005e237f: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e2384: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2389: je 0x5e2397 */ if (fZ) goto L_005e2397;
L_005e238b:; BB(0x005e238b);
    /* 005e238b: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e2391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2393: jne 0x5e23c5 */ if (!fZ) goto L_005e23c5;
L_005e2395:; BB(0x005e2395);
    /* 005e2395: jmp 0x5e23a1 */ goto L_005e23a1;
L_005e2397:; BB(0x005e2397);
    /* 005e2397: mov eax, dword ptr [edi + 0x1a8] */ r_eax = R32((u32)(r_edi+0x1a8u));
    /* 005e239d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e239f: je 0x5e23c5 */ if (fZ) goto L_005e23c5;
L_005e23a1:; BB(0x005e23a1);
    /* 005e23a1: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e23a6u); f_0082fa9c();
    /* 005e23a6: push dword ptr [edi + 0x1ec] */ { u32 v = R32((u32)(r_edi+0x1ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e23ac: push dword ptr [edi + 0x194] */ { u32 v = R32((u32)(r_edi+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e23b2: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e23b8: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e23bdu); f_0083046c();
    /* 005e23bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e23c0: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e23c5u); f_0082faac();
L_005e23c5:; BB(0x005e23c5);
    /* 005e23c5: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5e23cau); f_005cb228();
    /* 005e23ca: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e23cfu); f_005c3400();
    /* 005e23cf: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e23d4u); f_005c3450();
    /* 005e23d4: mov ecx, edi */ r_ecx = r_edi;
    /* 005e23d6: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e23dbu); f_005c34bc();
    /* 005e23db: mov ecx, edi */ r_ecx = r_edi;
    /* 005e23dd: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e23e2u); f_005c3504();
    /* 005e23e2: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5e23e7u); f_005cb114();
    /* 005e23e7: mov eax, dword ptr [edi + 0x194] */ r_eax = R32((u32)(r_edi+0x194u));
    /* 005e23ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e23ef: je 0x5e245d */ if (fZ) goto L_005e245d;
L_005e23f1:; BB(0x005e23f1);
    /* 005e23f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e23f3: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e23f8u); f_0082fac4();
L_005e23f8:; BB(0x005e23f8);
    /* 005e23f8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e23fdu); f_0082da80();
    /* 005e23fd: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
L_005e2407:; BB(0x005e2407);
    /* 005e2407: mov dword ptr [edi + 0xfc], esi */ W32((u32)(r_edi+0xfcu), r_esi);
    /* 005e240d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e240e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e240f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2410: ret  */ FN_RET(0x005e20ec); r_esp += 4; return;
L_005e2411:; BB(0x005e2411);
    /* 005e2411: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2413: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e2418u); f_005d2450();
    /* 005e2418: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005e241b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e241c: mov ecx, edi */ r_ecx = r_edi;
    /* 005e241e: call 0x5e2490 */ r_esp -= 4; W32(r_esp, 0x5e2423u); f_005e2490();
L_005e2423:; BB(0x005e2423);
    /* 005e2423: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2425: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2426: ret  */ FN_RET(0x005e20ec); r_esp += 4; return;
L_005e2427:; BB(0x005e2427);
    /* 005e2427: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 005e2431: jmp 0x5e2278 */ goto L_005e2278;
L_005e2436:; BB(0x005e2436);
    /* 005e2436: push 0x5e263c */ { u32 v = 0x5e263cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e243b: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2441: call 0x5c53c0 */ r_esp -= 4; W32(r_esp, 0x5e2446u); f_005c53c0();
    /* 005e2446: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2449: jmp 0x5e2241 */ goto L_005e2241;
L_005e244e:; BB(0x005e244e);
    /* 005e244e: mov dword ptr [edi + 0xe0], 0x5e263c */ W32((u32)(r_edi+0xe0u), 0x5e263cu);
    /* 005e2458: jmp 0x5e21cc */ goto L_005e21cc;
L_005e245d:; BB(0x005e245d);
    /* 005e245d: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 005e2467: jmp 0x5e23f8 */ goto L_005e23f8;
L_005e2469:; BB(0x005e2469);
    /* 005e2469: push 0x5e263c */ { u32 v = 0x5e263cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e246e: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2474: call 0x5c53c0 */ r_esp -= 4; W32(r_esp, 0x5e2479u); f_005c53c0();
    /* 005e2479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e247c: jmp 0x5e23c5 */ goto L_005e23c5;
L_005e2481:; BB(0x005e2481);
    /* 005e2481: mov dword ptr [edi + 0xe0], 0x5e263c */ W32((u32)(r_edi+0xe0u), 0x5e263cu);
    /* 005e248b: jmp 0x5e2350 */ goto L_005e2350;
}

void f_005e2490(void) /* sub_5E2490 */
{
    FN_ENTER(0x005e2490);
    /* 005e2490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2491: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2492: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e2494: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e2496: call 0x5c5198 */ r_esp -= 4; W32(r_esp, 0x5e249bu); f_005c5198();
    /* 005e249b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e249d: jne 0x5e2605 */ if (!fZ) goto L_005e2605;
L_005e24a3:; BB(0x005e24a3);
    /* 005e24a3: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 005e24a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e24ab: je 0x5e2605 */ if (fZ) goto L_005e2605;
L_005e24b1:; BB(0x005e24b1);
    /* 005e24b1: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e24b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e24b9: je 0x5e2605 */ if (fZ) goto L_005e2605;
L_005e24bf:; BB(0x005e24bf);
    /* 005e24bf: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005e24c2: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e24c7: jne 0x5e2605 */ if (!fZ) goto L_005e2605;
L_005e24cd:; BB(0x005e24cd);
    /* 005e24cd: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005e24d3: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e24d5: jne 0x5e2605 */ if (!fZ) goto L_005e2605;
L_005e24db:; BB(0x005e24db);
    /* 005e24db: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e24de: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e24e3u); f_0081a9b8();
    /* 005e24e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e24e4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005e24e8: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005e24ee: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
    /* 005e24f8: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e24fb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e24fd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e24ff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2501: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2503: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2505: add ecx, dword ptr [edx + 0xe0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e250b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e2510u); f_0082d990();
    /* 005e2510: mov eax, dword ptr [ebp + 0x1f0] */ r_eax = R32((u32)(r_ebp+0x1f0u));
    /* 005e2516: mov dword ptr [0xa8dbf0], ebp */ W32((u32)(0xa8dbf0u), r_ebp);
    /* 005e251c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e251e: je 0x5e252c */ if (fZ) goto L_005e252c;
L_005e2520:; BB(0x005e2520);
    /* 005e2520: mov dword ptr [0xa8dbf4], 1 */ W32((u32)(0xa8dbf4u), 0x1u);
    /* 005e252a: jmp 0x5e2536 */ goto L_005e2536;
L_005e252c:; BB(0x005e252c);
    /* 005e252c: mov dword ptr [0xa8dbf4], 0 */ W32((u32)(0xa8dbf4u), 0x0u);
L_005e2536:; BB(0x005e2536);
    /* 005e2536: mov eax, dword ptr [ebp + 0x194] */ r_eax = R32((u32)(r_ebp+0x194u));
    /* 005e253c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e253e: je 0x5e262b */ if (fZ) goto L_005e262b;
L_005e2544:; BB(0x005e2544);
    /* 005e2544: mov ecx, 0x5e263c */ r_ecx = 0x5e263cu;
    /* 005e2549: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e254eu); f_0082fac4();
L_005e254e:; BB(0x005e254e);
    /* 005e254e: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5e2553u); f_005cb0c8();
    /* 005e2553: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e2558: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e255b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e2560: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e2562: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e2567u); f_005c3538();
    /* 005e2567: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e256a: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5e256fu); f_005cb158();
    /* 005e256f: mov eax, dword ptr [ebp + 0x194] */ r_eax = R32((u32)(r_ebp+0x194u));
    /* 005e2575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2577: je 0x5e2616 */ if (fZ) goto L_005e2616;
L_005e257d:; BB(0x005e257d);
    /* 005e257d: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e2582: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2587: je 0x5e2595 */ if (fZ) goto L_005e2595;
L_005e2589:; BB(0x005e2589);
    /* 005e2589: mov eax, dword ptr [ebp + 0x1a8] */ r_eax = R32((u32)(r_ebp+0x1a8u));
    /* 005e258f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2591: jne 0x5e25c3 */ if (!fZ) goto L_005e25c3;
L_005e2593:; BB(0x005e2593);
    /* 005e2593: jmp 0x5e259f */ goto L_005e259f;
L_005e2595:; BB(0x005e2595);
    /* 005e2595: mov eax, dword ptr [ebp + 0x1a8] */ r_eax = R32((u32)(r_ebp+0x1a8u));
    /* 005e259b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e259d: je 0x5e25c3 */ if (fZ) goto L_005e25c3;
L_005e259f:; BB(0x005e259f);
    /* 005e259f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5e25a4u); f_0082fa9c();
    /* 005e25a4: push dword ptr [ebp + 0x1ec] */ { u32 v = R32((u32)(r_ebp+0x1ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e25aa: push dword ptr [ebp + 0x194] */ { u32 v = R32((u32)(r_ebp+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e25b0: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e25b6: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5e25bbu); f_0083046c();
    /* 005e25bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e25be: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5e25c3u); f_0082faac();
L_005e25c3:; BB(0x005e25c3);
    /* 005e25c3: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5e25c8u); f_005cb228();
    /* 005e25c8: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e25cdu); f_005c3400();
    /* 005e25cd: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e25d2u); f_005c3450();
    /* 005e25d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e25d4: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e25d9u); f_005c34bc();
    /* 005e25d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e25db: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e25e0u); f_005c3504();
    /* 005e25e0: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5e25e5u); f_005cb114();
    /* 005e25e5: mov eax, dword ptr [ebp + 0x194] */ r_eax = R32((u32)(r_ebp+0x194u));
    /* 005e25eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e25ed: je 0x5e260a */ if (fZ) goto L_005e260a;
L_005e25ef:; BB(0x005e25ef);
    /* 005e25ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e25f1: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5e25f6u); f_0082fac4();
L_005e25f6:; BB(0x005e25f6);
    /* 005e25f6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e25fbu); f_0082da80();
    /* 005e25fb: mov dword ptr [0xa8d84c], 0 */ W32((u32)(0xa8d84cu), 0x0u);
L_005e2605:; BB(0x005e2605);
    /* 005e2605: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2606: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2607: ret 4 */ FN_RET(0x005e2490); r_esp += 8; return;
L_005e260a:; BB(0x005e260a);
    /* 005e260a: mov dword ptr [ebp + 0xe0], 0 */ W32((u32)(r_ebp+0xe0u), 0x0u);
    /* 005e2614: jmp 0x5e25f6 */ goto L_005e25f6;
L_005e2616:; BB(0x005e2616);
    /* 005e2616: push 0x5e263c */ { u32 v = 0x5e263cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e261b: push dword ptr [ebp + 0xfc] */ { u32 v = R32((u32)(r_ebp+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2621: call 0x5c53c0 */ r_esp -= 4; W32(r_esp, 0x5e2626u); f_005c53c0();
    /* 005e2626: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2629: jmp 0x5e25c3 */ goto L_005e25c3;
L_005e262b:; BB(0x005e262b);
    /* 005e262b: mov dword ptr [ebp + 0xe0], 0x5e263c */ W32((u32)(r_ebp+0xe0u), 0x5e263cu);
    /* 005e2635: jmp 0x5e254e */ goto L_005e254e;
}

void f_005e263c(void) /* sub_5E263C */
{
    FN_ENTER(0x005e263c);
    /* 005e263c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e263d: mov edi, dword ptr [0xa8d84c] */ r_edi = R32((u32)(0xa8d84cu));
    /* 005e2643: call 0x5c3400 */ r_esp -= 4; W32(r_esp, 0x5e2648u); f_005c3400();
    /* 005e2648: call 0x5c3450 */ r_esp -= 4; W32(r_esp, 0x5e264du); f_005c3450();
    /* 005e264d: mov ecx, dword ptr [0xa8dbf0] */ r_ecx = R32((u32)(0xa8dbf0u));
    /* 005e2653: call 0x5c34bc */ r_esp -= 4; W32(r_esp, 0x5e2658u); f_005c34bc();
    /* 005e2658: mov ecx, dword ptr [0xa8dbf0] */ r_ecx = R32((u32)(0xa8dbf0u));
    /* 005e265e: call 0x5c3504 */ r_esp -= 4; W32(r_esp, 0x5e2663u); f_005c3504();
    /* 005e2663: mov eax, dword ptr [0xa8dbf4] */ r_eax = R32((u32)(0xa8dbf4u));
    /* 005e2668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e266a: je 0x5e2671 */ if (fZ) goto L_005e2671;
L_005e266c:; BB(0x005e266c);
    /* 005e266c: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5e2671u); f_005c34a0();
L_005e2671:; BB(0x005e2671);
    /* 005e2671: mov edx, dword ptr [0xa8dbf0] */ r_edx = R32((u32)(0xa8dbf0u));
    /* 005e2677: movzx eax, byte ptr [edx + 0xf4] */ r_eax = (u32)R8((u32)(r_edx+0xf4u));
    /* 005e267e: cmp eax, 0x93 */ {  u32 a = r_eax; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2683: jne 0x5e26a6 */ if (!fZ) goto L_005e26a6;
L_005e2685:; BB(0x005e2685);
    /* 005e2685: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e2687: jle 0x5e26a6 */ if ((fZ||fS!=fO)) goto L_005e26a6;
L_005e2689:; BB(0x005e2689);
    /* 005e2689: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e268c: jg 0x5e26a6 */ if ((!fZ&&fS==fO)) goto L_005e26a6;
L_005e268e:; BB(0x005e268e);
    /* 005e268e: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e2691: cmp edi, dword ptr [edx + 0x1f8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x1f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2697: je 0x5e26a6 */ if (fZ) goto L_005e26a6;
L_005e2699:; BB(0x005e2699);
    /* 005e2699: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e269b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e269d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e269f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e26a1: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5e26a6u); f_0082fa0c();
L_005e26a6:; BB(0x005e26a6);
    /* 005e26a6: add dword ptr [0xa8d84c], 1 */ { u32 ad = (u32)(0xa8d84cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e26ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e26ae: ret  */ FN_RET(0x005e263c); r_esp += 4; return;
}

void f_005e26b0(void) /* sub_5E26B0 */
{
    FN_ENTER(0x005e26b0);
    /* 005e26b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e26b1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005e26b5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005e26b9: movzx eax, byte ptr [edi + 0x1e4] */ r_eax = (u32)R8((u32)(r_edi+0x1e4u));
    /* 005e26c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e26c1: call 0x5d24c4 */ r_esp -= 4; W32(r_esp, 0x5e26c6u); f_005d24c4();
    /* 005e26c6: movzx eax, byte ptr [edi + 0x1e5] */ r_eax = (u32)R8((u32)(r_edi+0x1e5u));
    /* 005e26cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e26ce: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005e26d2: call 0x5d24d0 */ r_esp -= 4; W32(r_esp, 0x5e26d7u); f_005d24d0();
    /* 005e26d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e26d8: ret  */ FN_RET(0x005e26b0); r_esp += 4; return;
}

void f_005e26dc(void) /* sub_5E26DC */
{
    FN_ENTER(0x005e26dc);
    /* 005e26dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e26dd: mov ebx, esp */ r_ebx = r_esp;
    /* 005e26df: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005e26e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e26e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e26e4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e26e7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005e26e9: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005e26ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e26ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e26f3u); f_0068d5a8();
    /* 005e26f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e26f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e26f6: je 0x5e279d */ if (fZ) goto L_005e279d;
L_005e26fc:; BB(0x005e26fc);
    /* 005e26fc: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 005e26ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2701: je 0x5e279d */ if (fZ) goto L_005e279d;
L_005e2707:; BB(0x005e2707);
    /* 005e2707: mov ecx, dword ptr [eax + 0x3f0] */ r_ecx = R32((u32)(r_eax+0x3f0u));
    /* 005e270d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005e2711: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e2715: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005e2717: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e271b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e271e: movzx ebp, word ptr [ebx + 8] */ r_ebp = (u32)R16((u32)(r_ebx+0x8u));
    /* 005e2722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e2724:; BB(0x005e2724);
    /* 005e2724: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2726: je 0x5e278c */ if (fZ) goto L_005e278c;
L_005e2728:; BB(0x005e2728);
    /* 005e2728: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2729: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e272eu); f_0068d5a8();
    /* 005e272e: mov edi, eax */ r_edi = r_eax;
    /* 005e2730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2733: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2735: je 0x5e278c */ if (fZ) goto L_005e278c;
L_005e2737:; BB(0x005e2737);
    /* 005e2737: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005e273b: cmp edx, dword ptr [edi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2741: jne 0x5e278c */ if (!fZ) goto L_005e278c;
L_005e2743:; BB(0x005e2743);
    /* 005e2743: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e2747: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 005e274a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005e274d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e274e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e274f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5e2754u); f_007a9180();
    /* 005e2754: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2757: fcomp qword ptr [0x92d420] */ fx_compare(ST(0), R_F64((u32)(0x92d420u))); FPOP();
    /* 005e275d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e275f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e2760: jae 0x5e278c */ if (!fC) goto L_005e278c;
L_005e2762:; BB(0x005e2762);
    /* 005e2762: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2764: add edi, 0xdf8 */ {  u32 a = r_edi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e276a: mov ecx, edi */ r_ecx = r_edi;
    /* 005e276c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5e2771u); f_0069792c();
    /* 005e2771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2773: je 0x5e278c */ if (fZ) goto L_005e278c;
L_005e2775:; BB(0x005e2775);
    /* 005e2775: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005e277c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 005e277f: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 005e2783: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2785: jne 0x5e278c */ if (!fZ) goto L_005e278c;
L_005e2787:; BB(0x005e2787);
    /* 005e2787: add dword ptr [esp + 4], 1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005e278c:; BB(0x005e278c);
    /* 005e278c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e278f: mov edx, esi */ r_edx = r_esi;
    /* 005e2791: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2794: jl 0x5e2724 */ if ((fS!=fO)) goto L_005e2724;
L_005e2796:; BB(0x005e2796);
    /* 005e2796: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e279a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e279d:; BB(0x005e279d);
    /* 005e279d: mov eax, edi */ r_eax = r_edi;
    /* 005e279f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e27a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e27a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e27a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005e27a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e27a7: ret  */ FN_RET(0x005e26dc); r_esp += 4; return;
}

void f_005e27a8(void) /* sub_5E27A8 */
{
    FN_ENTER(0x005e27a8);
    /* 005e27a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e27a9: mov ebx, esp */ r_ebx = r_esp;
    /* 005e27ab: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005e27ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e27af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e27b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e27b1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e27b4: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005e27b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e27b9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005e27bb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e27c0u); f_0068d5a8();
    /* 005e27c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e27c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e27c3: je 0x5e284d */ if (fZ) goto L_005e284d;
L_005e27c9:; BB(0x005e27c9);
    /* 005e27c9: mov edx, dword ptr [eax + 0x964] */ r_edx = R32((u32)(r_eax+0x964u));
    /* 005e27cf: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e27d2: je 0x5e27db */ if (fZ) goto L_005e27db;
L_005e27d4:; BB(0x005e27d4);
    /* 005e27d4: mov esi, 2 */ r_esi = 0x2u;
    /* 005e27d9: jmp 0x5e27e0 */ goto L_005e27e0;
L_005e27db:; BB(0x005e27db);
    /* 005e27db: mov esi, 1 */ r_esi = 0x1u;
L_005e27e0:; BB(0x005e27e0);
    /* 005e27e0: mov ecx, dword ptr [eax + 0x3f0] */ r_ecx = R32((u32)(r_eax+0x3f0u));
    /* 005e27e6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005e27ea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e27ed: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005e27ef: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e27f3: movzx edi, word ptr [ebx + 8] */ r_edi = (u32)R16((u32)(r_ebx+0x8u));
    /* 005e27f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e27f9:; BB(0x005e27f9);
    /* 005e27f9: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e27fb: je 0x5e283f */ if (fZ) goto L_005e283f;
L_005e27fd:; BB(0x005e27fd);
    /* 005e27fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e27fe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e2803u); f_0068d5a8();
    /* 005e2803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2806: je 0x5e283f */ if (fZ) goto L_005e283f;
L_005e2808:; BB(0x005e2808);
    /* 005e2808: test dword ptr [eax + 0x964], esi */ {  u32 a = R32((u32)(r_eax+0x964u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e280e: je 0x5e283f */ if (fZ) goto L_005e283f;
L_005e2810:; BB(0x005e2810);
    /* 005e2810: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e2814: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e281a: jne 0x5e283f */ if (!fZ) goto L_005e283f;
L_005e281c:; BB(0x005e281c);
    /* 005e281c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005e281f: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 005e2822: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2826: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2827: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5e282cu); f_007a9180();
    /* 005e282c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e282f: fcomp qword ptr [0x92d418] */ fx_compare(ST(0), R_F64((u32)(0x92d418u))); FPOP();
    /* 005e2835: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e2837: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e2838: jae 0x5e283f */ if (!fC) goto L_005e283f;
L_005e283a:; BB(0x005e283a);
    /* 005e283a: add dword ptr [esp + 4], 1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005e283f:; BB(0x005e283f);
    /* 005e283f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e2842: mov edx, ebp */ r_edx = r_ebp;
    /* 005e2844: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2847: jl 0x5e27f9 */ if ((fS!=fO)) goto L_005e27f9;
L_005e2849:; BB(0x005e2849);
    /* 005e2849: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_005e284d:; BB(0x005e284d);
    /* 005e284d: mov eax, edi */ r_eax = r_edi;
    /* 005e284f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e2852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2853: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2854: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2855: mov esp, ebx */ r_esp = r_ebx;
    /* 005e2857: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e2858: ret  */ FN_RET(0x005e27a8); r_esp += 4; return;
}

void f_005e285c(void) /* sub_5E285C */
{
    FN_ENTER(0x005e285c);
    /* 005e285c: mov dword ptr [0xa8dbf8], 0x3f800000 */ W32((u32)(0xa8dbf8u), 0x3f800000u);
    /* 005e2866: mov dword ptr [0xa8dbfc], 0x41000000 */ W32((u32)(0xa8dbfcu), 0x41000000u);
    /* 005e2870: mov dword ptr [0xa8dc00], 0x3fc00000 */ W32((u32)(0xa8dc00u), 0x3fc00000u);
    /* 005e287a: ret  */ FN_RET(0x005e285c); r_esp += 4; return;
}

void f_005e287c(void) /* sub_5E287C */
{
    FN_ENTER(0x005e287c);
    /* 005e287c: push dword ptr [0x9c2824] */ { u32 v = R32((u32)(0x9c2824u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2882: call 0x5b9be8 */ r_esp -= 4; W32(r_esp, 0x5e2887u); f_005b9be8();
    /* 005e2887: mov dword ptr [0xa8dc04], eax */ W32((u32)(0xa8dc04u), r_eax);
    /* 005e288c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e288d: ret  */ FN_RET(0x005e287c); r_esp += 4; return;
}

void f_005e2890(void) /* sub_5E2890 */
{
    FN_ENTER(0x005e2890);
    /* 005e2890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2891: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2895: push 0x8db6cc */ { u32 v = 0x8db6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005e289a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e28a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e28a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e28a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e28ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e28ae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e28b1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e28b4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e28b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e28ba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e28bd: mov eax, ecx */ r_eax = r_ecx;
    /* 005e28bf: mov dword ptr [eax], 0xb0fa20 */ W32((u32)(r_eax), 0xb0fa20u);
    /* 005e28c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e28cc: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e28d1u); f_005d1654();
    /* 005e28d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e28d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e28d6: jne 0x5e28e8 */ if (!fZ) goto L_005e28e8;
L_005e28d8:; BB(0x005e28d8);
    /* 005e28d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e28db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e28e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e28e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e28e5: ret 4 */ FN_RET(0x005e2890); r_esp += 8; return;
L_005e28e8:; BB(0x005e28e8);
    /* 005e28e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e28eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e28ec: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e28f1u); f_005c2f74();
    /* 005e28f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e28f2: jmp 0x5e28d8 */ goto L_005e28d8;
}

void f_005e28f4(void) /* sub_5E28F4 */
{
    FN_ENTER(0x005e28f4);
    /* 005e28f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e28f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e28f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e28f9: push 0x8db72a */ { u32 v = 0x8db72au; r_esp -= 4; W32(r_esp, v); }
    /* 005e28fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e2904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e290c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e290f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e2912: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005e2915: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005e2918: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005e291b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e2920: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e2923: mov word ptr [ecx + 0x1e0], ax */ W16((u32)(r_ecx+0x1e0u), (u16)r_eax);
    /* 005e292a: movsx eax, word ptr [ecx + 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1b0u));
    /* 005e2931: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2934: je 0x5e2a4b */ if (fZ) goto L_005e2a4b;
L_005e293a:; BB(0x005e293a);
    /* 005e293a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e293d: jne 0x5e29c4 */ if (!fZ) goto L_005e29c4;
L_005e2943:; BB(0x005e2943);
    /* 005e2943: mov eax, ecx */ r_eax = r_ecx;
    /* 005e2945: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e294b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e294d: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e2953:; BB(0x005e2953);
    /* 005e2953: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e295a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e295c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e2961u); f_005caba4();
    /* 005e2961: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e2964: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2967: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e296a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e296c: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e2972:; BB(0x005e2972);
    /* 005e2972: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005e2979: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e2980: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2983: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2985: movzx ebx, word ptr [esi + 0xe4] */ r_ebx = (u32)R16((u32)(r_esi+0xe4u));
    /* 005e298c: movsx eax, word ptr [esi + 0x1b2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1b2u));
    /* 005e2993: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005e2996: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2998: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e299a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e299c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e299e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e29a0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e29a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e29a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e29a4: push dword ptr [esi + 0x18c] */ { u32 v = R32((u32)(r_esi+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e29aa: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e29afu); f_005e5cac();
    /* 005e29af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e29b2: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 005e29b8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e29bf: jmp 0x5e2abf */ goto L_005e2abf;
L_005e29c4:; BB(0x005e29c4);
    /* 005e29c4: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e29c7: jne 0x5e2abf */ if (!fZ) goto L_005e2abf;
L_005e29cd:; BB(0x005e29cd);
    /* 005e29cd: mov eax, ecx */ r_eax = r_ecx;
    /* 005e29cf: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e29d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e29d7: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e29dd:; BB(0x005e29dd);
    /* 005e29dd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e29e4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e29e6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e29ebu); f_005caba4();
    /* 005e29eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e29ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e29f1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e29f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e29f6: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e29fc:; BB(0x005e29fc);
    /* 005e29fc: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005e2a03: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2a0a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2a0d: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2a0f: movzx ebx, word ptr [esi + 0xe4] */ r_ebx = (u32)R16((u32)(r_esi+0xe4u));
    /* 005e2a16: movsx eax, word ptr [esi + 0x1b2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1b2u));
    /* 005e2a1d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005e2a20: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a22: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a28: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a2a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a2e: push dword ptr [esi + 0x18c] */ { u32 v = R32((u32)(r_esi+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2a34: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e2a39u); f_005e5cac();
    /* 005e2a39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2a3c: mov dword ptr [eax], 0xb0f7f0 */ W32((u32)(r_eax), 0xb0f7f0u);
    /* 005e2a42: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e2a49: jmp 0x5e2abf */ goto L_005e2abf;
L_005e2a4b:; BB(0x005e2a4b);
    /* 005e2a4b: mov eax, ecx */ r_eax = r_ecx;
    /* 005e2a4d: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e2a53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2a55: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e2a57:; BB(0x005e2a57);
    /* 005e2a57: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e2a5e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2a60: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e2a65u); f_005caba4();
    /* 005e2a65: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e2a68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2a6b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e2a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2a70: je 0x5e2abf */ if (fZ) goto L_005e2abf;
L_005e2a72:; BB(0x005e2a72);
    /* 005e2a72: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e2a79: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e2a80: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2a83: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2a85: movzx ebx, word ptr [esi + 0xe4] */ r_ebx = (u32)R16((u32)(r_esi+0xe4u));
    /* 005e2a8c: movsx eax, word ptr [esi + 0x1b2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1b2u));
    /* 005e2a93: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005e2a96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2a9e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2aa0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2aa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2aa3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2aa4: push dword ptr [esi + 0x18c] */ { u32 v = R32((u32)(r_esi+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2aaa: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e2aafu); f_005e5cac();
    /* 005e2aaf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2ab2: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005e2ab8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e2abf:; BB(0x005e2abf);
    /* 005e2abf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2ac2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e2ac5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ac8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2acf: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2ad2: ret  */ FN_RET(0x005e28f4); r_esp += 4; return;
}

void f_005e2ad4(void) /* sub_5E2AD4 */
{
    FN_ENTER(0x005e2ad4);
    /* 005e2ad4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ad6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e2ad8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e2add: mov word ptr [ecx + 0x1e0], ax */ W16((u32)(r_ecx+0x1e0u), (u16)r_eax);
    /* 005e2ae4: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x5e2ae7u); call_ind(t); }
    /* 005e2ae7: ret  */ FN_RET(0x005e2ad4); r_esp += 4; return;
}

void f_005e2ae8(void) /* sub_5E2AE8 */
{
    FN_ENTER(0x005e2ae8);
    /* 005e2ae8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2aeb: mov eax, ecx */ r_eax = r_ecx;
    /* 005e2aed: movsx edx, word ptr [eax + 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1b4u));
    /* 005e2af4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2af6: je 0x5e2bbb */ if (fZ) goto L_005e2bbb;
L_005e2afc:; BB(0x005e2afc);
    /* 005e2afc: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005e2b00: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005e2b04: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e2b08: mov edi, eax */ r_edi = r_eax;
    /* 005e2b0a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e2b0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2b0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e2b11: mov ebp, edx */ r_ebp = r_edx;
    /* 005e2b13: mov esi, ecx */ r_esi = r_ecx;
L_005e2b15:; BB(0x005e2b15);
    /* 005e2b15: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b18: je 0x5e2b9e */ if (fZ) goto L_005e2b9e;
L_005e2b1e:; BB(0x005e2b1e);
    /* 005e2b1e: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b21: je 0x5e2b9e */ if (fZ) goto L_005e2b9e;
L_005e2b23:; BB(0x005e2b23);
    /* 005e2b23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b24: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e2b2a: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2b30: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x5e2b35u); f_006ad17c();
    /* 005e2b35: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 005e2b38: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2b3e: je 0x5e2b9e */ if (fZ) goto L_005e2b9e;
L_005e2b40:; BB(0x005e2b40);
    /* 005e2b40: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e2b46: movsx edx, byte ptr [eax + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x961u));
    /* 005e2b4d: mov eax, esi */ r_eax = r_esi;
    /* 005e2b4f: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e2b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b56: call 0x5e5260 */ r_esp -= 4; W32(r_esp, 0x5e2b5bu); f_005e5260();
    /* 005e2b5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2b5e: movsx edx, word ptr [edi + 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x1b4u));
    /* 005e2b65: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e2b67: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 005e2b6a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e2b6d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e2b6f: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2b71: jge 0x5e2b83 */ if ((fS==fO)) goto L_005e2b83;
L_005e2b73:; BB(0x005e2b73);
    /* 005e2b73: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2b75: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2b77: mov word ptr [edi + ebp + 0x1b6], dx */ W16((u32)(r_edi+r_ebp+0x1b6u), (u16)r_edx);
    /* 005e2b7f: mov ebx, eax */ r_ebx = r_eax;
    /* 005e2b81: jmp 0x5e2b8b */ goto L_005e2b8b;
L_005e2b83:; BB(0x005e2b83);
    /* 005e2b83: mov word ptr [edi + ebp + 0x1b6], dx */ W16((u32)(r_edi+r_ebp+0x1b6u), (u16)r_edx);
L_005e2b8b:; BB(0x005e2b8b);
    /* 005e2b8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b8d: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e2b93: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2b99: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x5e2b9eu); f_006acf64();
L_005e2b9e:; BB(0x005e2b9e);
    /* 005e2b9e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e2ba1: mov ebp, esi */ r_ebp = r_esi;
    /* 005e2ba3: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2ba6: jl 0x5e2b15 */ if ((fS!=fO)) goto L_005e2b15;
L_005e2bac:; BB(0x005e2bac);
    /* 005e2bac: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e2bb0: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005e2bb4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e2bb8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e2bbb:; BB(0x005e2bbb);
    /* 005e2bbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e2bbe: ret  */ FN_RET(0x005e2ae8); r_esp += 4; return;
}

void f_005e2bc0(void) /* sub_5E2BC0 */
{
    FN_ENTER(0x005e2bc0);
    /* 005e2bc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bc2: mov edx, ecx */ r_edx = r_ecx;
    /* 005e2bc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2bc6: mov ebx, eax */ r_ebx = r_eax;
    /* 005e2bc8: mov esi, edx */ r_esi = r_edx;
L_005e2bca:; BB(0x005e2bca);
    /* 005e2bca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bcb: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e2bd1: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2bd7: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x5e2bdcu); f_006ad17c();
    /* 005e2bdc: mov edx, eax */ r_edx = r_eax;
    /* 005e2bde: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e2be4: movzx eax, word ptr [esi + ebx*2 + 0x1b6] */ r_eax = (u32)R16((u32)(r_esi+r_ebx*2+0x1b6u));
    /* 005e2bec: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2bf2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2bf4: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005e2bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bf9: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x5e2bfeu); f_006acf64();
    /* 005e2bfe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e2c01: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2c04: jl 0x5e2bca */ if ((fS!=fO)) goto L_005e2bca;
L_005e2c06:; BB(0x005e2c06);
    /* 005e2c06: mov edx, esi */ r_edx = r_esi;
    /* 005e2c08: add edx, 0x1b6 */ {  u32 a = r_edx; u32 b = 0x1b6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2c0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2c10: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e2c12: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e2c15: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e2c18: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e2c1b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005e2c1e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005e2c21: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005e2c24: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005e2c27: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005e2c2a: mov word ptr [edx + 0x24], ax */ W16((u32)(r_edx+0x24u), (u16)r_eax);
    /* 005e2c2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e2c2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2c30: ret  */ FN_RET(0x005e2bc0); r_esp += 4; return;
}

void f_005e2c34(void) /* sub_5E2C34 */
{
    FN_ENTER(0x005e2c34);
    /* 005e2c34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2c35: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2c38: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e2c3a: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005e2c41: cmp eax, 0x4e */ {  u32 a = r_eax; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2c44: je 0x5e2c52 */ if (fZ) goto L_005e2c52;
L_005e2c46:; BB(0x005e2c46);
    /* 005e2c46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e2c48: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e2c4du); f_005c42f4();
    /* 005e2c4d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e2c50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2c51: ret  */ FN_RET(0x005e2c34); r_esp += 4; return;
L_005e2c52:; BB(0x005e2c52);
    /* 005e2c52: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e2c58: movsx eax, word ptr [ecx + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005e2c5f: movzx edx, word ptr [ebp + 0x1e0] */ r_edx = (u32)R16((u32)(r_ebp+0x1e0u));
    /* 005e2c66: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2c68: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005e2c6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e2c6d: jl 0x5e2cbc */ if ((fS!=fO)) goto L_005e2cbc;
L_005e2c6f:; BB(0x005e2c6f);
    /* 005e2c6f: jle 0x5e2c46 */ if ((fZ||fS!=fO)) goto L_005e2c46;
L_005e2c71:; BB(0x005e2c71);
    /* 005e2c71: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e2c74: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e2c77: fmul dword ptr [0x92d4b0] */ ST(0) = ST(0) * R_F32((u32)(0x92d4b0u));
    /* 005e2c7d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005e2c81: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005e2c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2c8b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e2c8f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e2c93: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e2c97: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005e2c9b: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 005e2ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ca1: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e2ca6u); f_00777368();
    /* 005e2ca6: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e2cac: movzx edx, word ptr [eax + 0x336] */ r_edx = (u32)R16((u32)(r_eax+0x336u));
    /* 005e2cb3: mov word ptr [ebp + 0x1e0], dx */ W16((u32)(r_ebp+0x1e0u), (u16)r_edx);
    /* 005e2cba: jmp 0x5e2c46 */ goto L_005e2c46;
L_005e2cbc:; BB(0x005e2cbc);
    /* 005e2cbc: mov word ptr [ebp + 0x1e0], ax */ W16((u32)(r_ebp+0x1e0u), (u16)r_eax);
    /* 005e2cc3: jmp 0x5e2c46 */ goto L_005e2c46;
}

void f_005e2cc8(void) /* sub_5E2CC8 */
{
    FN_ENTER(0x005e2cc8);
    /* 005e2cc8: movsx edx, word ptr [ecx + 0x1de] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1deu));
    /* 005e2ccf: movsx eax, word ptr [ecx + 0x1dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1dcu));
    /* 005e2cd6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2cd8: jl 0x5e2ce0 */ if ((fS!=fO)) goto L_005e2ce0;
L_005e2cda:; BB(0x005e2cda);
    /* 005e2cda: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2cdc: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e2cde: jge 0x5e2ce9 */ if ((fS==fO)) goto L_005e2ce9;
L_005e2ce0:; BB(0x005e2ce0);
    /* 005e2ce0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2ce2: mov word ptr [ecx + 0x1dc], ax */ W16((u32)(r_ecx+0x1dcu), (u16)r_eax);
L_005e2ce9:; BB(0x005e2ce9);
    /* 005e2ce9: ret  */ FN_RET(0x005e2cc8); r_esp += 4; return;
}

void f_005e2cec(void) /* sub_5E2CEC */
{
    FN_ENTER(0x005e2cec);
    /* 005e2cec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ced: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2cef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2cf1: push 0x8db786 */ { u32 v = 0x8db786u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2cf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e2cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2cfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e2d04: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2d07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e2d0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e2d0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e2d10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e2d13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2d16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d18: je 0x5e2e39 */ if (fZ) goto L_005e2e39;
L_005e2d1e:; BB(0x005e2d1e);
    /* 005e2d1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2d21: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 005e2d25: cmp eax, 0x4d */ {  u32 a = r_eax; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d28: jne 0x5e2d7f */ if (!fZ) goto L_005e2d7f;
L_005e2d2a:; BB(0x005e2d2a);
    /* 005e2d2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e2d31: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d36: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e2d3bu); f_005caba4();
    /* 005e2d3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2d3c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e2d3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d41: je 0x5e2e2a */ if (fZ) goto L_005e2e2a;
L_005e2d47:; BB(0x005e2d47);
    /* 005e2d47: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e2d4e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e2d55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2d58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d5c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2d62: call 0x5e3374 */ r_esp -= 4; W32(r_esp, 0x5e2d67u); f_005e3374();
    /* 005e2d67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2d6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e2d71:; BB(0x005e2d71);
    /* 005e2d71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2d74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2d7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2d7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2d7e: ret  */ FN_RET(0x005e2cec); r_esp += 4; return;
L_005e2d7f:; BB(0x005e2d7f);
    /* 005e2d7f: cmp eax, 0x4f */ {  u32 a = r_eax; u32 b = 0x4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d82: jne 0x5e2dd9 */ if (!fZ) goto L_005e2dd9;
L_005e2d84:; BB(0x005e2d84);
    /* 005e2d84: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e2d8b: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2d90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e2d95u); f_005caba4();
    /* 005e2d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2d96: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e2d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2d9b: je 0x5e2e31 */ if (fZ) goto L_005e2e31;
L_005e2da1:; BB(0x005e2da1);
    /* 005e2da1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005e2da8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e2daf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2db2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e2db5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2db6: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2dbc: call 0x5e3200 */ r_esp -= 4; W32(r_esp, 0x5e2dc1u); f_005e3200();
    /* 005e2dc1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e2dc4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e2dcb:; BB(0x005e2dcb);
    /* 005e2dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2dd8: ret  */ FN_RET(0x005e2cec); r_esp += 4; return;
L_005e2dd9:; BB(0x005e2dd9);
    /* 005e2dd9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e2de0: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2de5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e2deau); f_005caba4();
    /* 005e2dea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e2deb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e2dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2df0: je 0x5e2e35 */ if (fZ) goto L_005e2e35;
L_005e2df2:; BB(0x005e2df2);
    /* 005e2df2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005e2df9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2e00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2e03: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e07: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2e0d: call 0x5e2e4c */ r_esp -= 4; W32(r_esp, 0x5e2e12u); f_005e2e4c();
    /* 005e2e12: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e2e15: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005e2e1c:; BB(0x005e2e1c);
    /* 005e2e1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e1f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2e26: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2e29: ret  */ FN_RET(0x005e2cec); r_esp += 4; return;
L_005e2e2a:; BB(0x005e2e2a);
    /* 005e2e2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2e2c: jmp 0x5e2d71 */ goto L_005e2d71;
L_005e2e31:; BB(0x005e2e31);
    /* 005e2e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2e33: jmp 0x5e2dcb */ goto L_005e2dcb;
L_005e2e35:; BB(0x005e2e35);
    /* 005e2e35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2e37: jmp 0x5e2e1c */ goto L_005e2e1c;
L_005e2e39:; BB(0x005e2e39);
    /* 005e2e39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e2e3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2e45: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2e47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2e48: ret  */ FN_RET(0x005e2cec); r_esp += 4; return;
}

void f_005e2e4c(void) /* sub_5E2E4C */
{
    FN_ENTER(0x005e2e4c);
    /* 005e2e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2e4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e51: push 0x8db7a0 */ { u32 v = 0x8db7a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e2e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e2e64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2e67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e2e6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e2e6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e2e70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e2e73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e2e76: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e2e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e2e7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e2e80: call 0x5d1b50 */ r_esp -= 4; W32(r_esp, 0x5e2e85u); f_005d1b50();
    /* 005e2e85: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2e8c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2e8f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005e2e92: mov dword ptr [ecx], 0xb0fa20 */ W32((u32)(r_ecx), 0xb0fa20u);
    /* 005e2e98: mov esi, dword ptr [0x9c2828] */ r_esi = R32((u32)(0x9c2828u));
    /* 005e2e9e: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 005e2ea1: movzx eax, byte ptr [edi + 4] */ r_eax = (u32)R8((u32)(r_edi+0x4u));
    /* 005e2ea5: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2ea8: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005e2eab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2eac: call dword ptr [0xb0fa64] */ { u32 t = R32((u32)(0xb0fa64u)); r_esp -= 4; W32(r_esp, 0x5e2eb2u); call_ind(t); }
    /* 005e2eb2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2eb5: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2eb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2eb9: mov word ptr [ebx + 0x1b4], ax */ W16((u32)(r_ebx+0x1b4u), (u16)r_eax);
    /* 005e2ec0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e2ec5: mov word ptr [ebx + 0x1e0], dx */ W16((u32)(r_ebx+0x1e0u), (u16)r_edx);
    /* 005e2ecc: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e2ed1u); f_005d2890();
    /* 005e2ed1: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2ed6: je 0x5e2f72 */ if (fZ) goto L_005e2f72;
L_005e2edc:; BB(0x005e2edc);
    /* 005e2edc: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 005e2ee0: mov word ptr [ebx + 0x1b0], dx */ W16((u32)(r_ebx+0x1b0u), (u16)r_edx);
    /* 005e2ee7: movzx ecx, word ptr [eax + 0xe] */ r_ecx = (u32)R16((u32)(r_eax+0xeu));
    /* 005e2eeb: mov word ptr [ebx + 0x1b2], cx */ W16((u32)(r_ebx+0x1b2u), (u16)r_ecx);
    /* 005e2ef2: movzx eax, word ptr [eax + 0x10] */ r_eax = (u32)R16((u32)(r_eax+0x10u));
    /* 005e2ef6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2ef8: mov word ptr [ebx + 0x1de], ax */ W16((u32)(r_ebx+0x1deu), (u16)r_eax);
L_005e2eff:; BB(0x005e2eff);
    /* 005e2eff: mov ecx, edi */ r_ecx = r_edi;
    /* 005e2f01: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5e2f06u); f_005d2880();
    /* 005e2f06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2f09: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005e2f0c: cmp edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2f0f: jle 0x5e2f16 */ if ((fZ||fS!=fO)) goto L_005e2f16;
L_005e2f11:; BB(0x005e2f11);
    /* 005e2f11: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2f14: jl 0x5e2f21 */ if ((fS!=fO)) goto L_005e2f21;
L_005e2f16:; BB(0x005e2f16);
    /* 005e2f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2f18: mov word ptr [ecx + 0x1dc], ax */ W16((u32)(r_ecx+0x1dcu), (u16)r_eax);
    /* 005e2f1f: jmp 0x5e2f28 */ goto L_005e2f28;
L_005e2f21:; BB(0x005e2f21);
    /* 005e2f21: mov word ptr [ecx + 0x1dc], ax */ W16((u32)(r_ecx+0x1dcu), (u16)r_eax);
L_005e2f28:; BB(0x005e2f28);
    /* 005e2f28: add ecx, 0x1b6 */ {  u32 a = r_ecx; u32 b = 0x1b6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2f2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2f30: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005e2f32: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005e2f35: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005e2f38: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005e2f3b: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005e2f3e: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005e2f41: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005e2f44: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005e2f47: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e2f4a: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 005e2f4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2f51: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5e2f56u); f_005e2f90();
    /* 005e2f56: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e2f59: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e2f5c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e2f5f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e2f62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2f65: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e2f6c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2f6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2f6f: ret 8 */ FN_RET(0x005e2e4c); r_esp += 12; return;
L_005e2f72:; BB(0x005e2f72);
    /* 005e2f72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2f74: mov word ptr [ebx + 0x1b0], ax */ W16((u32)(r_ebx+0x1b0u), (u16)r_eax);
    /* 005e2f7b: mov word ptr [ebx + 0x1b2], ax */ W16((u32)(r_ebx+0x1b2u), (u16)r_eax);
    /* 005e2f82: mov word ptr [ebx + 0x1de], ax */ W16((u32)(r_ebx+0x1deu), (u16)r_eax);
    /* 005e2f89: jmp 0x5e2eff */ goto L_005e2eff;
}

void f_005e2f90(void) /* sub_5E2F90 */
{
    FN_ENTER(0x005e2f90);
    /* 005e2f90: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2f93: movsx edx, word ptr [ecx + 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1b0u));
    /* 005e2f9a: lea eax, [edx - 0x12] */ r_eax = (u32)(r_edx+0xffffffeeu);
    /* 005e2f9d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e2fa0: ja 0x5e3075 */ if ((!fC&&!fZ)) goto L_005e3075;
L_005e2fa6:; BB(0x005e2fa6);
    /* 005e2fa6: mov eax, dword ptr [edx*4 + 0x92d42c] */ r_eax = R32((u32)(r_edx*4+0x92d42cu));
    /* 005e2fad: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e2f90); r_esp += 4; return;
}

void f_005e2faf(void)
{
    FN_ENTER(0x005e2faf);
    /* 005e2faf: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e2fb5: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2fba: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e2fc0: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e2faf); r_esp += 4; return;
}

void f_005e2fc5(void)
{
    FN_ENTER(0x005e2fc5);
    /* 005e2fc5: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e2fcb: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2fd0: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e2fd6: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e2fc5); r_esp += 4; return;
}

void f_005e2fdb(void)
{
    FN_ENTER(0x005e2fdb);
    /* 005e2fdb: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e2fe1: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2fe6: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e2fec: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e2fdb); r_esp += 4; return;
}

void f_005e2ff1(void)
{
    FN_ENTER(0x005e2ff1);
    /* 005e2ff1: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e2ff7: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2ffc: mov dword ptr [ecx + 0x190], eax */ W32((u32)(r_ecx+0x190u), r_eax);
    /* 005e3002: jmp 0x5e3075 */ goto L_005e3075;
L_005e3075:; BB(0x005e3075);
    /* 005e3075: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e307c: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e307f: jne 0x5e308b */ if (!fZ) goto L_005e308b;
L_005e3081:; BB(0x005e3081);
    /* 005e3081: mov dword ptr [ecx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ecx+0x1a0u), 0x3ecccccdu);
L_005e308b:; BB(0x005e308b);
    /* 005e308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e308e: ret  */ FN_RET(0x005e2ff1); r_esp += 4; return;
}

