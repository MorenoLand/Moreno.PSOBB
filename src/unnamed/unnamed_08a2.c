#include "protos.h"

void f_008a2041(void) /* sub_8A2041 */
{
    FN_ENTER(0x008a2041);
    /* 008a2041: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a2045: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2046: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2047: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a204b: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 008a204d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a204f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2050: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2052: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008a2055: je 0x8a2070 */ if (fZ) goto L_008a2070;
L_008a2057:; BB(0x008a2057);
    /* 008a2057: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a2059: mov dword ptr [edx + 0x14], 0xa */ W32((u32)(r_edx+0x14u), 0xau);
    /* 008a2060: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a2062: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008a2065: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2067: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008a206a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a206c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a206d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a206fu); call_ind(t); }
    /* 008a206f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2070:; BB(0x008a2070);
    /* 008a2070: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008a2074: mov eax, 0x1a8 */ r_eax = 0x1a8u;
    /* 008a2079: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a207b: je 0x8a2096 */ if (fZ) goto L_008a2096;
L_008a207d:; BB(0x008a207d);
    /* 008a207d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a207f: mov dword ptr [edx + 0x14], 0x13 */ W32((u32)(r_edx+0x14u), 0x13u);
    /* 008a2086: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a2088: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008a208b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a208d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a2090: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2092: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2093: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2095u); call_ind(t); }
    /* 008a2095: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2096:; BB(0x008a2096);
    /* 008a2096: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a2098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2099: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 008a209b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a209c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a209e: mov edi, esi */ r_edi = r_esi;
    /* 008a20a0: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a20a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a20a3: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008a20a5: mov byte ptr [esi + 0xc], 1 */ W8((u32)(r_esi+0xcu), 0x1u);
    /* 008a20a9: call 0x8a9c4d */ r_esp -= 4; W32(r_esp, 0x8a20aeu); f_008a9c4d();
    /* 008a20ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a20b0: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 008a20b3: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008a20b6: lea edi, [esi + 0x90] */ r_edi = (u32)(r_esi+0x90u);
    /* 008a20bc: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008a20bd: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008a20be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a20bf: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008a20c0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a20c2: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008a20c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a20c4: lea eax, [esi + 0xb0] */ r_eax = (u32)(r_esi+0xb0u);
    /* 008a20ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a20cb:; BB(0x008a20cb);
    /* 008a20cb: mov dword ptr [eax - 0x10], ebx */ W32((u32)(r_eax+0xfffffff0u), r_ebx);
    /* 008a20ce: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 008a20d0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a20d3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a20d4: jne 0x8a20cb */ if (!fZ) goto L_008a20cb;
L_008a20d6:; BB(0x008a20d6);
    /* 008a20d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a20d7: call 0x8a3c75 */ r_esp -= 4; W32(r_esp, 0x8a20dcu); f_008a3c75();
    /* 008a20dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a20dd: call 0x8a9297 */ r_esp -= 4; W32(r_esp, 0x8a20e2u); f_008a9297();
    /* 008a20e2: cmp byte ptr [0xa35fc8], 2 */ {  u32 a = R8((u32)(0xa35fc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a20e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a20ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a20eb: jne 0x8a20f7 */ if (!fZ) goto L_008a20f7;
L_008a20ed:; BB(0x008a20ed);
    /* 008a20ed: call 0x8a8d8d */ r_esp -= 4; W32(r_esp, 0x8a20f2u); f_008a8d8d();
    /* 008a20f2: mov byte ptr [0xa35fc8], al */ W8((u32)(0xa35fc8u), (u8)r_eax);
L_008a20f7:; BB(0x008a20f7);
    /* 008a20f7: mov dword ptr [esi + 0x10], 0xc8 */ W32((u32)(r_esi+0x10u), 0xc8u);
    /* 008a20fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a20ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2100: ret  */ FN_RET(0x008a2041); r_esp += 4; return;
}

void f_008a2279(void) /* sub_8A2279 */
{
    FN_ENTER(0x008a2279);
    /* 008a2279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a227a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a227e: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a2281: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2282: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a2284: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2289: je 0x8a22d7 */ if (fZ) goto L_008a22d7;
L_008a228b:; BB(0x008a228b);
    /* 008a228b: cmp eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2290: je 0x8a22f1 */ if (fZ) goto L_008a22f1;
L_008a2292:; BB(0x008a2292);
    /* 008a2292: mov ecx, 0xca */ r_ecx = 0xcau;
    /* 008a2297: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2299: je 0x8a22d2 */ if (fZ) goto L_008a22d2;
L_008a229b:; BB(0x008a229b);
    /* 008a229b: jle 0x8a22b9 */ if ((fZ||fS!=fO)) goto L_008a22b9;
L_008a229d:; BB(0x008a229d);
    /* 008a229d: cmp eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a22a2: jle 0x8a22ab */ if ((fZ||fS!=fO)) goto L_008a22ab;
L_008a22a4:; BB(0x008a22a4);
    /* 008a22a4: cmp eax, 0xd2 */ {  u32 a = r_eax; u32 b = 0xd2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a22a9: jne 0x8a22b9 */ if (!fZ) goto L_008a22b9;
L_008a22ab:; BB(0x008a22ab);
    /* 008a22ab: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a22b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a22b2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a22b4u); call_ind(t); }
    /* 008a22b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a22b5: mov edi, eax */ r_edi = r_eax;
    /* 008a22b7: jmp 0x8a230e */ goto L_008a230e;
L_008a22b9:; BB(0x008a22b9);
    /* 008a22b9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a22bb: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a22c2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a22c4: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a22c7: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a22ca: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a22cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a22cd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a22cfu); call_ind(t); }
    /* 008a22cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a22d0: jmp 0x8a230e */ goto L_008a230e;
L_008a22d2:; BB(0x008a22d2);
    /* 008a22d2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fC = 0; }
    /* 008a22d4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a22d5: jmp 0x8a230e */ goto L_008a230e;
L_008a22d7:; BB(0x008a22d7);
    /* 008a22d7: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a22dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a22de: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a22e1u); call_ind(t); }
    /* 008a22e1: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008a22e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a22e5: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8a22e8u); call_ind(t); }
    /* 008a22e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a22e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a22ea: mov dword ptr [esi + 0x10], 0xc9 */ W32((u32)(r_esi+0x10u), 0xc9u);
L_008a22f1:; BB(0x008a22f1);
    /* 008a22f1: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a22f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a22f8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a22fau); call_ind(t); }
    /* 008a22fa: mov edi, eax */ r_edi = r_eax;
    /* 008a22fc: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a22ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2300: jne 0x8a230e */ if (!fZ) goto L_008a230e;
L_008a2302:; BB(0x008a2302);
    /* 008a2302: call 0x8a2106 */ r_esp -= 4; W32(r_esp, 0x8a2307u); f_008a2106();
    /* 008a2307: mov dword ptr [esi + 0x10], 0xca */ W32((u32)(r_esi+0x10u), 0xcau);
L_008a230e:; BB(0x008a230e);
    /* 008a230e: mov eax, edi */ r_eax = r_edi;
    /* 008a2310: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2311: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2312: ret  */ FN_RET(0x008a2279); r_esp += 4; return;
}

void f_008a2313(void) /* sub_8A2313 */
{
    FN_ENTER(0x008a2313);
    /* 008a2313: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2314: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a2318: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a231b: cmp eax, 0xcd */ {  u32 a = r_eax; u32 b = 0xcdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2320: je 0x8a2329 */ if (fZ) goto L_008a2329;
L_008a2322:; BB(0x008a2322);
    /* 008a2322: cmp eax, 0xce */ {  u32 a = r_eax; u32 b = 0xceu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2327: jne 0x8a2359 */ if (!fZ) goto L_008a2359;
L_008a2329:; BB(0x008a2329);
    /* 008a2329: cmp byte ptr [esi + 0x40], 0 */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a232d: jne 0x8a2359 */ if (!fZ) goto L_008a2359;
L_008a232f:; BB(0x008a232f);
    /* 008a232f: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 008a2332: cmp eax, dword ptr [esi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a2335: jae 0x8a2346 */ if (!fC) goto L_008a2346;
L_008a2337:; BB(0x008a2337);
    /* 008a2337: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2339: mov dword ptr [eax + 0x14], 0x42 */ W32((u32)(r_eax+0x14u), 0x42u);
    /* 008a2340: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2342: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2343: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2345u); call_ind(t); }
    /* 008a2345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2346:; BB(0x008a2346);
    /* 008a2346: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a234c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a234d: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2350u); call_ind(t); }
    /* 008a2350: mov dword ptr [esi + 0x10], 0xd2 */ W32((u32)(r_esi+0x10u), 0xd2u);
    /* 008a2357: jmp 0x8a2386 */ goto L_008a2386;
L_008a2359:; BB(0x008a2359);
    /* 008a2359: cmp eax, 0xcf */ {  u32 a = r_eax; u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a235e: jne 0x8a2369 */ if (!fZ) goto L_008a2369;
L_008a2360:; BB(0x008a2360);
    /* 008a2360: mov dword ptr [esi + 0x10], 0xd2 */ W32((u32)(r_esi+0x10u), 0xd2u);
    /* 008a2367: jmp 0x8a2397 */ goto L_008a2397;
L_008a2369:; BB(0x008a2369);
    /* 008a2369: cmp eax, 0xd2 */ {  u32 a = r_eax; u32 b = 0xd2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a236e: je 0x8a2397 */ if (fZ) goto L_008a2397;
L_008a2370:; BB(0x008a2370);
    /* 008a2370: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2372: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a2379: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a237b: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a237e: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a2381: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2383: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2384: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2386u); call_ind(t); }
L_008a2386:; BB(0x008a2386);
    /* 008a2386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2387: jmp 0x8a2397 */ goto L_008a2397;
L_008a2389:; BB(0x008a2389);
    /* 008a2389: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2390: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2392u); call_ind(t); }
    /* 008a2392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2394: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2395: je 0x8a23b6 */ if (fZ) goto L_008a23b6;
L_008a2397:; BB(0x008a2397);
    /* 008a2397: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a239d: cmp byte ptr [eax + 0x11], 0 */ {  u32 a = R8((u32)(r_eax+0x11u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a23a1: je 0x8a2389 */ if (fZ) goto L_008a2389;
L_008a23a3:; BB(0x008a23a3);
    /* 008a23a3: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008a23a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a23a7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x8a23aau); call_ind(t); }
    /* 008a23aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a23ab: call 0x8a9d01 */ r_esp -= 4; W32(r_esp, 0x8a23b0u); f_008a9d01();
    /* 008a23b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a23b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a23b2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008a23b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a23b5: ret  */ FN_RET(0x008a2313); r_esp += 4; return;
L_008a23b6:; BB(0x008a23b6);
    /* 008a23b6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a23b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a23b9: ret  */ FN_RET(0x008a2313); r_esp += 4; return;
}

void f_008a23ba(void) /* sub_8A23BA */
{
    FN_ENTER(0x008a23ba);
    /* 008a23ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a23bb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a23bf: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a23c2: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a23c7: je 0x8a23e7 */ if (fZ) goto L_008a23e7;
L_008a23c9:; BB(0x008a23c9);
    /* 008a23c9: cmp eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a23ce: je 0x8a23e7 */ if (fZ) goto L_008a23e7;
L_008a23d0:; BB(0x008a23d0);
    /* 008a23d0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a23d2: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a23d9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a23db: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a23de: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a23e1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a23e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a23e4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a23e6u); call_ind(t); }
    /* 008a23e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a23e7:; BB(0x008a23e7);
    /* 008a23e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a23e8: call 0x8a2279 */ r_esp -= 4; W32(r_esp, 0x8a23edu); f_008a2279();
    /* 008a23ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a23ee: mov ecx, eax */ r_ecx = r_eax;
    /* 008a23f0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a23f1: je 0x8a2418 */ if (fZ) goto L_008a2418;
L_008a23f3:; BB(0x008a23f3);
    /* 008a23f3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a23f4: jne 0x8a241b */ if (!fZ) goto L_008a241b;
L_008a23f6:; BB(0x008a23f6);
    /* 008a23f6: cmp byte ptr [esp + 0xc], 0 */ {  u32 a = R8((u32)(r_esp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a23fb: je 0x8a240c */ if (fZ) goto L_008a240c;
L_008a23fd:; BB(0x008a23fd);
    /* 008a23fd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a23ff: mov dword ptr [eax + 0x14], 0x32 */ W32((u32)(r_eax+0x14u), 0x32u);
    /* 008a2406: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2409: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a240bu); call_ind(t); }
    /* 008a240b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a240c:; BB(0x008a240c);
    /* 008a240c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a240d: call 0x8a9d01 */ r_esp -= 4; W32(r_esp, 0x8a2412u); f_008a9d01();
    /* 008a2412: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2413: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2415: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a2416: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2417: ret  */ FN_RET(0x008a23ba); r_esp += 4; return;
L_008a2418:; BB(0x008a2418);
    /* 008a2418: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a241a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008a241b:; BB(0x008a241b);
    /* 008a241b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a241c: ret  */ FN_RET(0x008a23ba); r_esp += 4; return;
}

void f_008a241d(void) /* sub_8A241D */
{
    FN_ENTER(0x008a241d);
    /* 008a241d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a241e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a241f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2420: mov edi, 0xcc */ r_edi = 0xccu;
    /* 008a2425: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2427: cmp dword ptr [esi + 0x10], edi */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a242a: je 0x8a243c */ if (fZ) goto L_008a243c;
L_008a242c:; BB(0x008a242c);
    /* 008a242c: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a2432: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2433: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2435u); call_ind(t); }
    /* 008a2435: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2436: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 008a2439: mov dword ptr [esi + 0x10], edi */ W32((u32)(r_esi+0x10u), r_edi);
L_008a243c:; BB(0x008a243c);
    /* 008a243c: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a2442: cmp byte ptr [eax + 8], bl */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2445: je 0x8a24ac */ if (fZ) goto L_008a24ac;
L_008a2447:; BB(0x008a2447);
    /* 008a2447: lea edi, [esi + 0x78] */ r_edi = (u32)(r_esi+0x78u);
L_008a244a:; BB(0x008a244a);
    /* 008a244a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a244c: cmp eax, dword ptr [esi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a244f: jae 0x8a248a */ if (!fC) goto L_008a248a;
L_008a2451:; BB(0x008a2451);
    /* 008a2451: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008a2454: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2456: je 0x8a246b */ if (fZ) goto L_008a246b;
L_008a2458:; BB(0x008a2458);
    /* 008a2458: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008a245b: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a245e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 008a2461: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2464: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a2467: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2468: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a246au); call_ind(t); }
    /* 008a246a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a246b:; BB(0x008a246b);
    /* 008a246b: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008a2471: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 008a2473: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2474: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2475: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2477: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a247au); call_ind(t); }
    /* 008a247a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a247c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a247f: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2481: je 0x8a24c2 */ if (fZ) goto L_008a24c2;
L_008a2483:; BB(0x008a2483);
    /* 008a2483: mov ecx, eax */ r_ecx = r_eax;
    /* 008a2485: cmp ecx, dword ptr [esi + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a2488: jb 0x8a2451 */ if (fC) goto L_008a2451;
L_008a248a:; BB(0x008a248a);
    /* 008a248a: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a2490: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2491: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2494u); call_ind(t); }
    /* 008a2494: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a249a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a249b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a249du); call_ind(t); }
    /* 008a249d: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008a249f: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 008a24a5: cmp byte ptr [eax + 8], bl */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a24a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a24a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a24aa: jne 0x8a244a */ if (!fZ) goto L_008a244a;
L_008a24ac:; BB(0x008a24ac);
    /* 008a24ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a24ae: cmp byte ptr [esi + 0x41], bl */ {  u32 a = R8((u32)(r_esi+0x41u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a24b1: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008a24b4: add eax, 0xcd */ {  u32 a = r_eax; u32 b = 0xcdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a24b9: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008a24bc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a24be:; BB(0x008a24be);
    /* 008a24be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a24bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a24c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a24c1: ret  */ FN_RET(0x008a241d); r_esp += 4; return;
L_008a24c2:; BB(0x008a24c2);
    /* 008a24c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a24c4: jmp 0x8a24be */ goto L_008a24be;
}

void f_008a24c6(void) /* sub_8A24C6 */
{
    FN_ENTER(0x008a24c6);
    /* 008a24c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a24c7: mov ebp, esp */ r_ebp = r_esp;
    /* 008a24c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a24ca: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a24cd: cmp dword ptr [esi + 0x10], 0xcd */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0xcdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a24d4: je 0x8a24ed */ if (fZ) goto L_008a24ed;
L_008a24d6:; BB(0x008a24d6);
    /* 008a24d6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a24d8: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a24df: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a24e1: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a24e4: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a24e7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a24e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a24ea: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a24ecu); call_ind(t); }
    /* 008a24ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a24ed:; BB(0x008a24ed);
    /* 008a24ed: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 008a24f0: cmp ecx, dword ptr [esi + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a24f3: jb 0x8a250c */ if (fC) goto L_008a250c;
L_008a24f5:; BB(0x008a24f5);
    /* 008a24f5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a24f7: mov dword ptr [eax + 0x14], 0x77 */ W32((u32)(r_eax+0x14u), 0x77u);
    /* 008a24fe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2500: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a2502: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2503: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2506u); call_ind(t); }
    /* 008a2506: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2507: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a250a: jmp 0x8a2547 */ goto L_008a2547;
L_008a250c:; BB(0x008a250c);
    /* 008a250c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a250f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2511: je 0x8a2526 */ if (fZ) goto L_008a2526;
L_008a2513:; BB(0x008a2513);
    /* 008a2513: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a2516: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a2519: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 008a251c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a251f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a2522: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2523: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2525u); call_ind(t); }
    /* 008a2525: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2526:; BB(0x008a2526);
    /* 008a2526: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a2529: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008a252f: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2533: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 008a2536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2537: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a253a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a253b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a253eu); call_ind(t); }
    /* 008a253e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a2541: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a2544: add dword ptr [esi + 0x78], eax */ { u32 ad = (u32)(r_esi+0x78u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008a2547:; BB(0x008a2547);
    /* 008a2547: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2548: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a2549: ret  */ FN_RET(0x008a24c6); r_esp += 4; return;
}

void f_008a254a(void) /* sub_8A254A */
{
    FN_ENTER(0x008a254a);
    /* 008a254a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a254b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a254f: cmp dword ptr [esi + 0x10], 0xca */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0xcau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2556: jne 0x8a2577 */ if (!fZ) goto L_008a2577;
L_008a2558:; BB(0x008a2558);
    /* 008a2558: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2559: call 0x8aa340 */ r_esp -= 4; W32(r_esp, 0x8a255eu); f_008aa340();
    /* 008a255e: cmp byte ptr [esi + 0x40], 0 */ {  u32 a = R8((u32)(r_esi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a2562: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2563: je 0x8a2570 */ if (fZ) goto L_008a2570;
L_008a2565:; BB(0x008a2565);
    /* 008a2565: mov dword ptr [esi + 0x10], 0xcf */ W32((u32)(r_esi+0x10u), 0xcfu);
    /* 008a256c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008a256e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a256f: ret  */ FN_RET(0x008a254a); r_esp += 4; return;
L_008a2570:; BB(0x008a2570);
    /* 008a2570: mov dword ptr [esi + 0x10], 0xcb */ W32((u32)(r_esi+0x10u), 0xcbu);
L_008a2577:; BB(0x008a2577);
    /* 008a2577: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a257a: cmp eax, 0xcb */ {  u32 a = r_eax; u32 b = 0xcbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a257f: jne 0x8a25e6 */ if (!fZ) goto L_008a25e6;
L_008a2581:; BB(0x008a2581);
    /* 008a2581: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a2587: cmp byte ptr [eax + 0x10], 0 */ {  u32 a = R8((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a258b: je 0x8a25db */ if (fZ) goto L_008a25db;
L_008a258d:; BB(0x008a258d);
    /* 008a258d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a2590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2592: je 0x8a2598 */ if (fZ) goto L_008a2598;
L_008a2594:; BB(0x008a2594);
    /* 008a2594: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2595: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2597u); call_ind(t); }
    /* 008a2597: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2598:; BB(0x008a2598);
    /* 008a2598: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a259e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a259f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a25a1u); call_ind(t); }
    /* 008a25a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a25a4: je 0x8a25d7 */ if (fZ) goto L_008a25d7;
L_008a25a6:; BB(0x008a25a6);
    /* 008a25a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25a9: je 0x8a25db */ if (fZ) goto L_008a25db;
L_008a25ab:; BB(0x008a25ab);
    /* 008a25ab: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008a25ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25b0: je 0x8a258d */ if (fZ) goto L_008a258d;
L_008a25b2:; BB(0x008a25b2);
    /* 008a25b2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25b5: je 0x8a25bc */ if (fZ) goto L_008a25bc;
L_008a25b7:; BB(0x008a25b7);
    /* 008a25b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25ba: jne 0x8a258d */ if (!fZ) goto L_008a258d;
L_008a25bc:; BB(0x008a25bc);
    /* 008a25bc: inc dword ptr [ecx + 4] */ { u32 ad = (u32)(r_ecx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a25bf: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a25c2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008a25c5: cmp dword ptr [eax + 4], ecx */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a25c8: jl 0x8a258d */ if ((fS!=fO)) goto L_008a258d;
L_008a25ca:; BB(0x008a25ca);
    /* 008a25ca: mov edx, dword ptr [esi + 0x118] */ r_edx = R32((u32)(r_esi+0x118u));
    /* 008a25d0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a25d2: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008a25d5: jmp 0x8a258d */ goto L_008a258d;
L_008a25d7:; BB(0x008a25d7);
    /* 008a25d7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a25d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a25da: ret  */ FN_RET(0x008a254a); r_esp += 4; return;
L_008a25db:; BB(0x008a25db);
    /* 008a25db: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 008a25de: mov dword ptr [esi + 0x84], eax */ W32((u32)(r_esi+0x84u), r_eax);
    /* 008a25e4: jmp 0x8a2604 */ goto L_008a2604;
L_008a25e6:; BB(0x008a25e6);
    /* 008a25e6: cmp eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a25eb: je 0x8a2604 */ if (fZ) goto L_008a2604;
L_008a25ed:; BB(0x008a25ed);
    /* 008a25ed: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a25ef: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a25f6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a25f8: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a25fb: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a25fe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2601: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2603u); call_ind(t); }
    /* 008a2603: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2604:; BB(0x008a2604);
    /* 008a2604: call 0x8a241d */ r_esp -= 4; W32(r_esp, 0x8a2609u); f_008a241d();
    /* 008a2609: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a260a: ret  */ FN_RET(0x008a254a); r_esp += 4; return;
}

void f_008a2699(void) /* sub_8A2699 */
{
    FN_ENTER(0x008a2699);
    /* 008a2699: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a269a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a269c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a269d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a269e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a269f: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008a26a2: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a26a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a26a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a26a8: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a26aa: mov byte ptr [esi + 0xc8], cl */ W8((u32)(r_esi+0xc8u), (u8)r_ecx);
    /* 008a26b0: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008a26b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a26b6: mov byte ptr [esi + 0xc9], cl */ W8((u32)(r_esi+0xc9u), (u8)r_ecx);
    /* 008a26bc: jne 0x8a26d3 */ if (!fZ) goto L_008a26d3;
L_008a26be:; BB(0x008a26be);
    /* 008a26be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a26bf: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a26c2u); call_ind(t); }
    /* 008a26c2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a26c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a26c5: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a26cb:; BB(0x008a26cb);
    /* 008a26cb: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a26ce: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a26d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a26d3:; BB(0x008a26d3);
    /* 008a26d3: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a26d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a26d8: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a26da: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a26db: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a26df: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a26e2: jne 0x8a26f9 */ if (!fZ) goto L_008a26f9;
L_008a26e4:; BB(0x008a26e4);
    /* 008a26e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a26e5: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a26e8u); call_ind(t); }
    /* 008a26e8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a26ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a26eb: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a26f1:; BB(0x008a26f1);
    /* 008a26f1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a26f4: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a26f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a26f9:; BB(0x008a26f9);
    /* 008a26f9: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a26fc: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a26ff: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2702: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2703: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2707: jne 0x8a271e */ if (!fZ) goto L_008a271e;
L_008a2709:; BB(0x008a2709);
    /* 008a2709: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a270a: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a270du); call_ind(t); }
    /* 008a270d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a270f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2710: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a2716:; BB(0x008a2716);
    /* 008a2716: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2719: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a271b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a271e:; BB(0x008a271e);
    /* 008a271e: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2721: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2724: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2725: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2729: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 008a272f: jne 0x8a2746 */ if (!fZ) goto L_008a2746;
L_008a2731:; BB(0x008a2731);
    /* 008a2731: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2732: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2735u); call_ind(t); }
    /* 008a2735: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2737: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2738: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a273e:; BB(0x008a273e);
    /* 008a273e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2741: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2743: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2746:; BB(0x008a2746);
    /* 008a2746: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2749: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a274b: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a274d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a274e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2752: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 008a2755: jne 0x8a276c */ if (!fZ) goto L_008a276c;
L_008a2757:; BB(0x008a2757);
    /* 008a2757: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2758: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a275bu); call_ind(t); }
    /* 008a275b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a275d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a275e: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a2764:; BB(0x008a2764);
    /* 008a2764: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2767: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2769: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a276c:; BB(0x008a276c);
    /* 008a276c: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a276f: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2772: add dword ptr [esi + 0x1c], eax */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2775: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2776: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a277a: jne 0x8a2791 */ if (!fZ) goto L_008a2791;
L_008a277c:; BB(0x008a277c);
    /* 008a277c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a277d: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2780u); call_ind(t); }
    /* 008a2780: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2782: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2783: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a2789:; BB(0x008a2789);
    /* 008a2789: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a278c: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a278e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2791:; BB(0x008a2791);
    /* 008a2791: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a2796: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a2798: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2799: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a279d: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008a27a0: jne 0x8a27b7 */ if (!fZ) goto L_008a27b7;
L_008a27a2:; BB(0x008a27a2);
    /* 008a27a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a27a3: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a27a6u); call_ind(t); }
    /* 008a27a6: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a27a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a27a9: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a27af:; BB(0x008a27af);
    /* 008a27af: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a27b2: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a27b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a27b7:; BB(0x008a27b7);
    /* 008a27b7: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a27ba: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a27bd: add dword ptr [esi + 0x18], eax */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a27c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a27c1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a27c5: jne 0x8a27dc */ if (!fZ) goto L_008a27dc;
L_008a27c7:; BB(0x008a27c7);
    /* 008a27c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a27c8: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a27cbu); call_ind(t); }
    /* 008a27cb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a27cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a27ce: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a27d4:; BB(0x008a27d4);
    /* 008a27d4: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a27d7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a27d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a27dc:; BB(0x008a27dc);
    /* 008a27dc: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a27df: mov ecx, dword ptr [esi + 0x178] */ r_ecx = R32((u32)(r_esi+0x178u));
    /* 008a27e5: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a27e8: sub dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a27ec: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 008a27ef: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a27f1: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a27f4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a27f6: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008a27f9: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a27fc: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 008a27ff: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2802: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008a2805: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a2808: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a280a: mov dword ptr [eax + 0x14], 0x63 */ W32((u32)(r_eax+0x14u), 0x63u);
    /* 008a2811: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2813: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2815: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2816: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2817: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a281au); call_ind(t); }
    /* 008a281a: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a2820: cmp byte ptr [eax + 0x51], 0 */ {  u32 a = R8((u32)(r_eax+0x51u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2824: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2826: je 0x8a2837 */ if (fZ) goto L_008a2837;
L_008a2828:; BB(0x008a2828);
    /* 008a2828: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a282a: mov dword ptr [eax + 0x14], 0x39 */ W32((u32)(r_eax+0x14u), 0x39u);
    /* 008a2831: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2833: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2834: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2836u); call_ind(t); }
    /* 008a2836: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2837:; BB(0x008a2837);
    /* 008a2837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a2839: cmp dword ptr [esi + 0x1c], eax */ {  u32 a = R32((u32)(r_esi+0x1cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a283c: jbe 0x8a2848 */ if ((fC||fZ)) goto L_008a2848;
L_008a283e:; BB(0x008a283e);
    /* 008a283e: cmp dword ptr [esi + 0x18], eax */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a2841: jbe 0x8a2848 */ if ((fC||fZ)) goto L_008a2848;
L_008a2843:; BB(0x008a2843);
    /* 008a2843: cmp dword ptr [esi + 0x20], eax */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2846: jg 0x8a2857 */ if ((!fZ&&fS==fO)) goto L_008a2857;
L_008a2848:; BB(0x008a2848);
    /* 008a2848: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a284a: mov dword ptr [eax + 0x14], 0x1f */ W32((u32)(r_eax+0x14u), 0x1fu);
    /* 008a2851: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2853: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2854: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2856u); call_ind(t); }
    /* 008a2856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2857:; BB(0x008a2857);
    /* 008a2857: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008a285a: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008a285d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2860: je 0x8a2871 */ if (fZ) goto L_008a2871;
L_008a2862:; BB(0x008a2862);
    /* 008a2862: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2864: mov dword ptr [eax + 0x14], 9 */ W32((u32)(r_eax+0x14u), 0x9u);
    /* 008a286b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a286d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a286e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2870u); call_ind(t); }
    /* 008a2870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2871:; BB(0x008a2871);
    /* 008a2871: cmp dword ptr [esi + 0xc4], 0 */ {  u32 a = R32((u32)(r_esi+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2878: jne 0x8a2892 */ if (!fZ) goto L_008a2892;
L_008a287a:; BB(0x008a287a);
    /* 008a287a: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008a287d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a2880: imul ecx, ecx, 0x54 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x54u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a2883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2884: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2887: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2889u); call_ind(t); }
    /* 008a2889: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a288c: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
L_008a2892:; BB(0x008a2892);
    /* 008a2892: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2896: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a289a: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008a28a0: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a28a3: jg 0x8a28c0 */ if ((!fZ&&fS==fO)) goto L_008a28c0;
L_008a28a5:; BB(0x008a28a5);
    /* 008a28a5: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a28ab: mov byte ptr [eax + 0x51], 1 */ W8((u32)(r_eax+0x51u), 0x1u);
    /* 008a28af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a28b2: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008a28b5: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 008a28b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a28b9:; BB(0x008a28b9);
    /* 008a28b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a28ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a28bb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a28bc: ret  */ FN_RET(0x008a2699); r_esp += 4; return;
L_008a28bd:; BB(0x008a28bd);
    /* 008a28bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a28c0:; BB(0x008a28c0);
    /* 008a28c0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a28c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a28c7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a28ca: jne 0x8a28e4 */ if (!fZ) goto L_008a28e4;
L_008a28cc:; BB(0x008a28cc);
    /* 008a28cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a28cd: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a28d0u); call_ind(t); }
    /* 008a28d0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a28d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a28d3: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a28d9:; BB(0x008a28d9);
    /* 008a28d9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a28dc: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a28de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a28e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a28e4:; BB(0x008a28e4);
    /* 008a28e4: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a28e7: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a28ea: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a28eb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a28ef: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a28f1: jne 0x8a290b */ if (!fZ) goto L_008a290b;
L_008a28f3:; BB(0x008a28f3);
    /* 008a28f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a28f4: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a28f7u); call_ind(t); }
    /* 008a28f7: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a28f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a28fa: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a2900:; BB(0x008a2900);
    /* 008a2900: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2903: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2905: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a2908: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a290b:; BB(0x008a290b);
    /* 008a290b: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a290e: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2911: mov edx, ecx */ r_edx = r_ecx;
    /* 008a2913: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008a2916: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a2919: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a291c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a291d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2921: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008a2924: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a2927: jne 0x8a293d */ if (!fZ) goto L_008a293d;
L_008a2929:; BB(0x008a2929);
    /* 008a2929: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a292a: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a292du); call_ind(t); }
    /* 008a292d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a292f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2930: je 0x8a298d */ if (fZ) goto L_008a298d;
L_008a2932:; BB(0x008a2932);
    /* 008a2932: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2935: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2937: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a293a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a293d:; BB(0x008a293d);
    /* 008a293d: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a2940: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008a2942: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2945: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008a2948: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a294a: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a294d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008a294f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008a2952: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 008a2955: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008a2958: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 008a295b: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 008a295e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 008a2961: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2963: mov dword ptr [eax + 0x14], 0x64 */ W32((u32)(r_eax+0x14u), 0x64u);
    /* 008a296a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a296c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a296e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a296f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2970: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2973u); call_ind(t); }
    /* 008a2973: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2976: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a2979: add dword ptr [ebp + 8], 0x54 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a297d: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a2980: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2981: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2982: jl 0x8a28bd */ if ((fS!=fO)) goto L_008a28bd;
L_008a2988:; BB(0x008a2988);
    /* 008a2988: jmp 0x8a28a5 */ goto L_008a28a5;
L_008a298d:; BB(0x008a298d);
    /* 008a298d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a298f: jmp 0x8a28b9 */ goto L_008a28b9;
}

void f_008a2994(void) /* sub_8A2994 */
{
    FN_ENTER(0x008a2994);
    /* 008a2994: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a2995: mov ebp, esp */ r_ebp = r_esp;
    /* 008a2997: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a299a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a299b: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008a299e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a29a1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a29a4: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a29aa: cmp byte ptr [eax + 0x51], 0 */ {  u32 a = R8((u32)(r_eax+0x51u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a29ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a29af: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a29b1: jne 0x8a29c2 */ if (!fZ) goto L_008a29c2;
L_008a29b3:; BB(0x008a29b3);
    /* 008a29b3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a29b5: mov dword ptr [eax + 0x14], 0x3d */ W32((u32)(r_eax+0x14u), 0x3du);
    /* 008a29bc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a29be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a29bf: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a29c1u); call_ind(t); }
    /* 008a29c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a29c2:; BB(0x008a29c2);
    /* 008a29c2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a29c6: jne 0x8a29dd */ if (!fZ) goto L_008a29dd;
L_008a29c8:; BB(0x008a29c8);
    /* 008a29c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a29c9: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a29ccu); call_ind(t); }
    /* 008a29cc: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a29ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a29cf: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a29d5:; BB(0x008a29d5);
    /* 008a29d5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a29d8: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a29da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a29dd:; BB(0x008a29dd);
    /* 008a29dd: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a29e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a29e2: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a29e4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a29e5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a29e9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a29ec: jne 0x8a2a03 */ if (!fZ) goto L_008a2a03;
L_008a29ee:; BB(0x008a29ee);
    /* 008a29ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a29ef: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a29f2u); call_ind(t); }
    /* 008a29f2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a29f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a29f5: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a29fb:; BB(0x008a29fb);
    /* 008a29fb: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a29fe: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2a00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2a03:; BB(0x008a2a03);
    /* 008a2a03: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2a06: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2a09: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2a0c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2a0d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2a11: jne 0x8a2a28 */ if (!fZ) goto L_008a2a28;
L_008a2a13:; BB(0x008a2a13);
    /* 008a2a13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2a14: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2a17u); call_ind(t); }
    /* 008a2a17: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2a1a: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a2a20:; BB(0x008a2a20);
    /* 008a2a20: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2a23: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2a25: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2a28:; BB(0x008a2a28);
    /* 008a2a28: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2a2b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2a2e: lea ecx, [eax + eax + 6] */ r_ecx = (u32)(r_eax+r_eax+0x6u);
    /* 008a2a32: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2a33: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2a36: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008a2a39: jne 0x8a2a45 */ if (!fZ) goto L_008a2a45;
L_008a2a3b:; BB(0x008a2a3b);
    /* 008a2a3b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2a3e: jl 0x8a2a45 */ if ((fS!=fO)) goto L_008a2a45;
L_008a2a40:; BB(0x008a2a40);
    /* 008a2a40: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2a43: jle 0x8a2a57 */ if ((fZ||fS!=fO)) goto L_008a2a57;
L_008a2a45:; BB(0x008a2a45);
    /* 008a2a45: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2a47: mov dword ptr [eax + 0x14], 9 */ W32((u32)(r_eax+0x14u), 0x9u);
    /* 008a2a4e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2a50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2a51: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2a53u); call_ind(t); }
    /* 008a2a53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a2a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2a57:; BB(0x008a2a57);
    /* 008a2a57: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2a59: mov dword ptr [ecx + 0x14], 0x66 */ W32((u32)(r_ecx+0x14u), 0x66u);
    /* 008a2a60: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2a62: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2a65: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2a67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2a69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2a6a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2a6du); call_ind(t); }
    /* 008a2a6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a2a70: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2a74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a2a76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2a77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2a78: mov dword ptr [esi + 0x120], eax */ W32((u32)(r_esi+0x120u), r_eax);
    /* 008a2a7e: jle 0x8a2b71 */ if ((fZ||fS!=fO)) goto L_008a2b71;
L_008a2a84:; BB(0x008a2a84);
    /* 008a2a84: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008a2a8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_008a2a8d:; BB(0x008a2a8d);
    /* 008a2a8d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2a91: jne 0x8a2aa8 */ if (!fZ) goto L_008a2aa8;
L_008a2a93:; BB(0x008a2a93);
    /* 008a2a93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2a94: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2a97u); call_ind(t); }
    /* 008a2a97: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2a99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2a9a: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a2aa0:; BB(0x008a2aa0);
    /* 008a2aa0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2aa3: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2aa5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2aa8:; BB(0x008a2aa8);
    /* 008a2aa8: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2aab: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2aae: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2aaf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2ab3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a2ab6: jne 0x8a2acd */ if (!fZ) goto L_008a2acd;
L_008a2ab8:; BB(0x008a2ab8);
    /* 008a2ab8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2ab9: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2abcu); call_ind(t); }
    /* 008a2abc: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2abe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2abf: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a2ac5:; BB(0x008a2ac5);
    /* 008a2ac5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2ac8: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2aca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2acd:; BB(0x008a2acd);
    /* 008a2acd: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2ad0: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ad3: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ad7: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 008a2add: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2ade: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2ae2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008a2ae5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008a2ae8: jle 0x8a2b02 */ if ((fZ||fS!=fO)) goto L_008a2b02;
L_008a2aea:; BB(0x008a2aea);
    /* 008a2aea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a2aed: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2aef: je 0x8a2b1f */ if (fZ) goto L_008a2b1f;
L_008a2af1:; BB(0x008a2af1);
    /* 008a2af1: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2af4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a2af7: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2afa: cmp edx, dword ptr [esi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2afd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008a2b00: jl 0x8a2aea */ if ((fS!=fO)) goto L_008a2aea;
L_008a2b02:; BB(0x008a2b02);
    /* 008a2b02: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a2b07: mov dword ptr [eax + 0x14], 5 */ W32((u32)(r_eax+0x14u), 0x5u);
    /* 008a2b0e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b10: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a2b13: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2b16: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a2b18u); call_ind(t); }
    /* 008a2b18: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008a2b1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2b1c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
L_008a2b1f:; BB(0x008a2b1f);
    /* 008a2b1f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a2b22: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008a2b24: mov edx, eax */ r_edx = r_eax;
    /* 008a2b26: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008a2b29: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a2b2c: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2b2f: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a2b32: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 008a2b35: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b37: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a2b3a: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2b3d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008a2b3f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 008a2b42: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 008a2b45: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 008a2b48: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2b4b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b4d: mov dword ptr [eax + 0x14], 0x67 */ W32((u32)(r_eax+0x14u), 0x67u);
    /* 008a2b54: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2b56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2b58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2b59: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2b5cu); call_ind(t); }
    /* 008a2b5c: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2b5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008a2b62: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2b66: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2b69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2b6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2b6b: jl 0x8a2a8d */ if ((fS!=fO)) goto L_008a2a8d;
L_008a2b71:; BB(0x008a2b71);
    /* 008a2b71: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2b75: jne 0x8a2b88 */ if (!fZ) goto L_008a2b88;
L_008a2b77:; BB(0x008a2b77);
    /* 008a2b77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2b78: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2b7bu); call_ind(t); }
    /* 008a2b7b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2b7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2b7e: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a2b80:; BB(0x008a2b80);
    /* 008a2b80: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2b83: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2b85: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2b88:; BB(0x008a2b88);
    /* 008a2b88: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2b8b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2b8e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2b8f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2b93: mov dword ptr [esi + 0x168], eax */ W32((u32)(r_esi+0x168u), r_eax);
    /* 008a2b99: jne 0x8a2bac */ if (!fZ) goto L_008a2bac;
L_008a2b9b:; BB(0x008a2b9b);
    /* 008a2b9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2b9c: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2b9fu); call_ind(t); }
    /* 008a2b9f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2ba2: je 0x8a2bc8 */ if (fZ) goto L_008a2bc8;
L_008a2ba4:; BB(0x008a2ba4);
    /* 008a2ba4: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2ba7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2ba9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2bac:; BB(0x008a2bac);
    /* 008a2bac: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2baf: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2bb2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2bb3: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2bb7: mov dword ptr [esi + 0x16c], eax */ W32((u32)(r_esi+0x16cu), r_eax);
    /* 008a2bbd: jne 0x8a2bd4 */ if (!fZ) goto L_008a2bd4;
L_008a2bbf:; BB(0x008a2bbf);
    /* 008a2bbf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2bc0: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2bc3u); call_ind(t); }
    /* 008a2bc3: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2bc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2bc6: jne 0x8a2bcc */ if (!fZ) goto L_008a2bcc;
L_008a2bc8:; BB(0x008a2bc8);
    /* 008a2bc8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a2bca: jmp 0x8a2c42 */ goto L_008a2c42;
L_008a2bcc:; BB(0x008a2bcc);
    /* 008a2bcc: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a2bcf: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a2bd1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a2bd4:; BB(0x008a2bd4);
    /* 008a2bd4: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a2bd7: mov ecx, eax */ r_ecx = r_eax;
    /* 008a2bd9: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008a2bdc: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a2bdf: mov dword ptr [esi + 0x174], eax */ W32((u32)(r_esi+0x174u), r_eax);
    /* 008a2be5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2be7: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2bea: mov dword ptr [esi + 0x170], ecx */ W32((u32)(r_esi+0x170u), r_ecx);
    /* 008a2bf0: mov ecx, dword ptr [esi + 0x168] */ r_ecx = R32((u32)(r_esi+0x168u));
    /* 008a2bf6: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2bf9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a2bfb: mov ecx, dword ptr [esi + 0x16c] */ r_ecx = R32((u32)(r_esi+0x16cu));
    /* 008a2c01: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a2c04: mov ecx, dword ptr [esi + 0x170] */ r_ecx = R32((u32)(r_esi+0x170u));
    /* 008a2c0a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2c0d: mov ecx, dword ptr [esi + 0x174] */ r_ecx = R32((u32)(r_esi+0x174u));
    /* 008a2c13: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a2c16: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2c18: mov dword ptr [eax + 0x14], 0x68 */ W32((u32)(r_eax+0x14u), 0x68u);
    /* 008a2c1f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2c21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c24: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2c27u); call_ind(t); }
    /* 008a2c27: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a2c2d: and dword ptr [eax + 0x54], 0 */ { u32 ad = (u32)(r_eax+0x54u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008a2c31: inc dword ptr [esi + 0x7c] */ { u32 ad = (u32)(r_esi+0x7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2c34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2c37: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a2c38: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2c39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2c3a: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008a2c3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2c3e: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 008a2c40: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a2c42:; BB(0x008a2c42);
    /* 008a2c42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2c44: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a2c45: ret  */ FN_RET(0x008a2994); r_esp += 4; return;
}

void f_008a2c46(void) /* sub_8A2C46 */
{
    FN_ENTER(0x008a2c46);
    /* 008a2c46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c47: mov ebp, esp */ r_ebp = r_esp;
    /* 008a2c49: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a2c4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c4e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a2c51: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c52: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 008a2c55: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2c5a: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2c5c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a2c5f: jne 0x8a2c76 */ if (!fZ) goto L_008a2c76;
L_008a2c61:; BB(0x008a2c61);
    /* 008a2c61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c62: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2c65u); call_ind(t); }
    /* 008a2c65: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2c67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2c68: je 0x8a2d46 */ if (fZ) goto L_008a2d46;
L_008a2c6e:; BB(0x008a2c6e);
    /* 008a2c6e: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2c71: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2c73: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2c76:; BB(0x008a2c76);
    /* 008a2c76: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2c79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a2c7b: mov ah, byte ptr [ebx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ebx))) & 0xffu) << 8);
    /* 008a2c7d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2c7e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2c82: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a2c85: jne 0x8a2c9c */ if (!fZ) goto L_008a2c9c;
L_008a2c87:; BB(0x008a2c87);
    /* 008a2c87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2c88: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2c8bu); call_ind(t); }
    /* 008a2c8b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2c8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2c8e: je 0x8a2d46 */ if (fZ) goto L_008a2d46;
L_008a2c94:; BB(0x008a2c94);
    /* 008a2c94: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2c97: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2c99: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2c9c:; BB(0x008a2c9c);
    /* 008a2c9c: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 008a2c9f: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ca2: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ca5: sub dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ca9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2caa: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2cae: jl 0x8a2e46 */ if ((fS!=fO)) goto L_008a2e46;
L_008a2cb4:; BB(0x008a2cb4);
    /* 008a2cb4: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a2cb8:; BB(0x008a2cb8);
    /* 008a2cb8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2cbc: jne 0x8a2ccf */ if (!fZ) goto L_008a2ccf;
L_008a2cbe:; BB(0x008a2cbe);
    /* 008a2cbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2cbf: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2cc2u); call_ind(t); }
    /* 008a2cc2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2cc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2cc5: je 0x8a2d46 */ if (fZ) goto L_008a2d46;
L_008a2cc7:; BB(0x008a2cc7);
    /* 008a2cc7: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2cca: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2ccc: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2ccf:; BB(0x008a2ccf);
    /* 008a2ccf: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2cd2: mov al, byte ptr [ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 008a2cd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a2cd7: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2cd8: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2cdb: cmp dword ptr [ebp - 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2cdf: mov byte ptr [ebp + ecx - 0x18], al */ W8((u32)(r_ebp+r_ecx+0xffffffe8u), (u8)r_eax);
    /* 008a2ce3: jl 0x8a2cb8 */ if ((fS!=fO)) goto L_008a2cb8;
L_008a2ce5:; BB(0x008a2ce5);
    /* 008a2ce5: sub dword ptr [ebp - 4], 0xe */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ce9: cmp byte ptr [ebp - 0x18], 0x4a */ {  u32 a = R8((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2ced: jne 0x8a2e30 */ if (!fZ) goto L_008a2e30;
L_008a2cf3:; BB(0x008a2cf3);
    /* 008a2cf3: cmp byte ptr [ebp - 0x17], 0x46 */ {  u32 a = R8((u32)(r_ebp+0xffffffe9u)); u32 b = 0x46u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2cf7: jne 0x8a2e30 */ if (!fZ) goto L_008a2e30;
L_008a2cfd:; BB(0x008a2cfd);
    /* 008a2cfd: cmp byte ptr [ebp - 0x16], 0x49 */ {  u32 a = R8((u32)(r_ebp+0xffffffeau)); u32 b = 0x49u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2d01: jne 0x8a2e30 */ if (!fZ) goto L_008a2e30;
L_008a2d07:; BB(0x008a2d07);
    /* 008a2d07: cmp byte ptr [ebp - 0x15], 0x46 */ {  u32 a = R8((u32)(r_ebp+0xffffffebu)); u32 b = 0x46u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2d0b: jne 0x8a2e30 */ if (!fZ) goto L_008a2e30;
L_008a2d11:; BB(0x008a2d11);
    /* 008a2d11: cmp byte ptr [ebp - 0x14], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2d15: jne 0x8a2e30 */ if (!fZ) goto L_008a2e30;
L_008a2d1b:; BB(0x008a2d1b);
    /* 008a2d1b: cmp byte ptr [ebp - 0x13], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffedu)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2d1f: je 0x8a2d4d */ if (fZ) goto L_008a2d4d;
L_008a2d21:; BB(0x008a2d21);
    /* 008a2d21: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2d23: mov dword ptr [eax + 0x14], 0x73 */ W32((u32)(r_eax+0x14u), 0x73u);
    /* 008a2d2a: movzx eax, byte ptr [ebp - 0x13] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffedu));
    /* 008a2d2e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2d30: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2d33: movzx eax, byte ptr [ebp - 0x12] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 008a2d37: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2d39: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008a2d3c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2d3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d41: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2d44u); call_ind(t); }
    /* 008a2d44: jmp 0x8a2d74 */ goto L_008a2d74;
L_008a2d46:; BB(0x008a2d46);
    /* 008a2d46: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a2d48: jmp 0x8a2e7d */ goto L_008a2e7d;
L_008a2d4d:; BB(0x008a2d4d);
    /* 008a2d4d: cmp byte ptr [ebp - 0x12], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffeeu)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a2d51: jbe 0x8a2d76 */ if ((fC||fZ)) goto L_008a2d76;
L_008a2d53:; BB(0x008a2d53);
    /* 008a2d53: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2d55: mov dword ptr [eax + 0x14], 0x58 */ W32((u32)(r_eax+0x14u), 0x58u);
    /* 008a2d5c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2d5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a2d60: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2d61: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2d64: movzx ecx, byte ptr [ebp - 0x12] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 008a2d68: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008a2d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d6b: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 008a2d6e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2d70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d71: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2d74u); call_ind(t); }
L_008a2d74:; BB(0x008a2d74);
    /* 008a2d74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2d75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2d76:; BB(0x008a2d76);
    /* 008a2d76: mov al, byte ptr [ebp - 0x11] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 008a2d79: movzx cx, byte ptr [ebp - 0xf] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff1u))) & 0xffffu);
    /* 008a2d7e: movzx dx, byte ptr [ebp - 0xd] */ r_edx = (r_edx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff3u))) & 0xffffu);
    /* 008a2d83: mov byte ptr [esi + 0x101], al */ W8((u32)(r_esi+0x101u), (u8)r_eax);
    /* 008a2d89: movzx ax, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 008a2d8e: mov byte ptr [esi + 0x100], 1 */ W8((u32)(r_esi+0x100u), 0x1u);
    /* 008a2d95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2d98: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a2d9b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2d9d: movzx ax, byte ptr [ebp - 0xe] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff2u))) & 0xffffu);
    /* 008a2da2: mov word ptr [esi + 0x102], cx */ W16((u32)(r_esi+0x102u), (u16)r_ecx);
    /* 008a2da9: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 008a2dac: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a2daf: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2db1: mov word ptr [esi + 0x104], ax */ W16((u32)(r_esi+0x104u), (u16)r_eax);
    /* 008a2db8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2dba: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2dbd: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a2dbf: movzx ecx, word ptr [esi + 0x104] */ r_ecx = (u32)R16((u32)(r_esi+0x104u));
    /* 008a2dc6: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a2dc9: movzx ecx, byte ptr [esi + 0x101] */ r_ecx = (u32)R8((u32)(r_esi+0x101u));
    /* 008a2dd0: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2dd3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2dd5: mov dword ptr [eax + 0x14], 0x56 */ W32((u32)(r_eax+0x14u), 0x56u);
    /* 008a2ddc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2dde: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2de1u); call_ind(t); }
    /* 008a2de1: mov al, byte ptr [ebp - 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff5u))) & 0xffu);
    /* 008a2de4: or al, byte ptr [ebp - 0xc] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0xfffffff4u)); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008a2de7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2de9: je 0x8a2e10 */ if (fZ) goto L_008a2e10;
L_008a2deb:; BB(0x008a2deb);
    /* 008a2deb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2ded: mov dword ptr [eax + 0x14], 0x59 */ W32((u32)(r_eax+0x14u), 0x59u);
    /* 008a2df4: movzx eax, byte ptr [ebp - 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 008a2df8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2dfa: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2dfd: movzx eax, byte ptr [ebp - 0xb] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 008a2e01: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2e03: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008a2e06: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2e08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e0b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2e0eu); call_ind(t); }
    /* 008a2e0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2e0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2e10:; BB(0x008a2e10);
    /* 008a2e10: movzx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 008a2e14: movzx eax, byte ptr [ebp - 0xb] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 008a2e18: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a2e1b: lea ecx, [eax + eax*2] */ r_ecx = (u32)(r_eax+r_eax*2);
    /* 008a2e1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2e21: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2e23: je 0x8a2e61 */ if (fZ) goto L_008a2e61;
L_008a2e25:; BB(0x008a2e25);
    /* 008a2e25: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2e27: mov dword ptr [ecx + 0x14], 0x57 */ W32((u32)(r_ecx+0x14u), 0x57u);
    /* 008a2e2e: jmp 0x8a2e3f */ goto L_008a2e3f;
L_008a2e30:; BB(0x008a2e30);
    /* 008a2e30: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2e32: mov dword ptr [eax + 0x14], 0x4c */ W32((u32)(r_eax+0x14u), 0x4cu);
    /* 008a2e39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2e3c: add eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a2e3f:; BB(0x008a2e3f);
    /* 008a2e3f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2e41: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2e44: jmp 0x8a2e57 */ goto L_008a2e57;
L_008a2e46:; BB(0x008a2e46);
    /* 008a2e46: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2e48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2e4b: mov dword ptr [eax + 0x14], 0x4c */ W32((u32)(r_eax+0x14u), 0x4cu);
    /* 008a2e52: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2e54: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
L_008a2e57:; BB(0x008a2e57);
    /* 008a2e57: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2e59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e5c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2e5fu); call_ind(t); }
    /* 008a2e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2e61:; BB(0x008a2e61);
    /* 008a2e61: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a2e65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a2e68: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008a2e6a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008a2e6d: jle 0x8a2e7b */ if ((fZ||fS!=fO)) goto L_008a2e7b;
L_008a2e6f:; BB(0x008a2e6f);
    /* 008a2e6f: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a2e72: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008a2e75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e76: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x8a2e79u); call_ind(t); }
    /* 008a2e79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2e7b:; BB(0x008a2e7b);
    /* 008a2e7b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a2e7d:; BB(0x008a2e7d);
    /* 008a2e7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2e7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2e7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2e80: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a2e81: ret  */ FN_RET(0x008a2c46); r_esp += 4; return;
}

void f_008a2e82(void) /* sub_8A2E82 */
{
    FN_ENTER(0x008a2e82);
    /* 008a2e82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e83: mov ebp, esp */ r_ebp = r_esp;
    /* 008a2e85: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a2e88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e8a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a2e8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e8e: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 008a2e91: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2e96: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2e98: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a2e9b: jne 0x8a2eb2 */ if (!fZ) goto L_008a2eb2;
L_008a2e9d:; BB(0x008a2e9d);
    /* 008a2e9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2e9e: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2ea1u); call_ind(t); }
    /* 008a2ea1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2ea3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2ea4: je 0x8a2fa6 */ if (fZ) goto L_008a2fa6;
L_008a2eaa:; BB(0x008a2eaa);
    /* 008a2eaa: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2ead: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2eaf: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2eb2:; BB(0x008a2eb2);
    /* 008a2eb2: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2eb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a2eb7: mov ah, byte ptr [ebx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ebx))) & 0xffu) << 8);
    /* 008a2eb9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2eba: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2ebe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a2ec1: jne 0x8a2ed8 */ if (!fZ) goto L_008a2ed8;
L_008a2ec3:; BB(0x008a2ec3);
    /* 008a2ec3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2ec4: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2ec7u); call_ind(t); }
    /* 008a2ec7: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2ec9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2eca: je 0x8a2fa6 */ if (fZ) goto L_008a2fa6;
L_008a2ed0:; BB(0x008a2ed0);
    /* 008a2ed0: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2ed3: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2ed5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2ed8:; BB(0x008a2ed8);
    /* 008a2ed8: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 008a2edb: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ede: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ee1: sub dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2ee5: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2ee6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2eea: jl 0x8a2fc0 */ if ((fS!=fO)) goto L_008a2fc0;
L_008a2ef0:; BB(0x008a2ef0);
    /* 008a2ef0: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a2ef4:; BB(0x008a2ef4);
    /* 008a2ef4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2ef8: jne 0x8a2f0f */ if (!fZ) goto L_008a2f0f;
L_008a2efa:; BB(0x008a2efa);
    /* 008a2efa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2efb: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a2efeu); call_ind(t); }
    /* 008a2efe: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2f01: je 0x8a2fa6 */ if (fZ) goto L_008a2fa6;
L_008a2f07:; BB(0x008a2f07);
    /* 008a2f07: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a2f0a: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a2f0c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a2f0f:; BB(0x008a2f0f);
    /* 008a2f0f: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2f12: mov al, byte ptr [ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 008a2f14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a2f17: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2f18: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2f1b: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2f1f: mov byte ptr [ebp + ecx - 0x14], al */ W8((u32)(r_ebp+r_ecx+0xffffffecu), (u8)r_eax);
    /* 008a2f23: jl 0x8a2ef4 */ if ((fS!=fO)) goto L_008a2ef4;
L_008a2f25:; BB(0x008a2f25);
    /* 008a2f25: sub dword ptr [ebp - 4], 0xc */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2f29: cmp byte ptr [ebp - 0x14], 0x41 */ {  u32 a = R8((u32)(r_ebp+0xffffffecu)); u32 b = 0x41u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f2d: jne 0x8a2faa */ if (!fZ) goto L_008a2faa;
L_008a2f2f:; BB(0x008a2f2f);
    /* 008a2f2f: cmp byte ptr [ebp - 0x13], 0x64 */ {  u32 a = R8((u32)(r_ebp+0xffffffedu)); u32 b = 0x64u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f33: jne 0x8a2faa */ if (!fZ) goto L_008a2faa;
L_008a2f35:; BB(0x008a2f35);
    /* 008a2f35: cmp byte ptr [ebp - 0x12], 0x6f */ {  u32 a = R8((u32)(r_ebp+0xffffffeeu)); u32 b = 0x6fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f39: jne 0x8a2faa */ if (!fZ) goto L_008a2faa;
L_008a2f3b:; BB(0x008a2f3b);
    /* 008a2f3b: cmp byte ptr [ebp - 0x11], 0x62 */ {  u32 a = R8((u32)(r_ebp+0xffffffefu)); u32 b = 0x62u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f3f: jne 0x8a2faa */ if (!fZ) goto L_008a2faa;
L_008a2f41:; BB(0x008a2f41);
    /* 008a2f41: cmp byte ptr [ebp - 0x10], 0x65 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2f45: jne 0x8a2faa */ if (!fZ) goto L_008a2faa;
L_008a2f47:; BB(0x008a2f47);
    /* 008a2f47: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2f49: movzx ecx, byte ptr [ebp - 0xf] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff1u));
    /* 008a2f4d: movzx edx, byte ptr [ebp - 0xe] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 008a2f51: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a2f54: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2f56: movzx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 008a2f5a: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2f5d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a2f5f: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 008a2f63: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a2f66: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2f68: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 008a2f6c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a2f6f: movzx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 008a2f73: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a2f76: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a2f78: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a2f7b: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 008a2f7f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a2f82: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2f84: mov dword ptr [eax + 0x14], 0x4b */ W32((u32)(r_eax+0x14u), 0x4bu);
    /* 008a2f8b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2f8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2f8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2f90: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2f93u); call_ind(t); }
    /* 008a2f93: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 008a2f97: mov byte ptr [esi + 0x106], 1 */ W8((u32)(r_esi+0x106u), 0x1u);
    /* 008a2f9e: mov byte ptr [esi + 0x107], al */ W8((u32)(r_esi+0x107u), (u8)r_eax);
    /* 008a2fa4: jmp 0x8a2fd9 */ goto L_008a2fd9;
L_008a2fa6:; BB(0x008a2fa6);
    /* 008a2fa6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a2fa8: jmp 0x8a2ff7 */ goto L_008a2ff7;
L_008a2faa:; BB(0x008a2faa);
    /* 008a2faa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2fac: mov dword ptr [eax + 0x14], 0x4d */ W32((u32)(r_eax+0x14u), 0x4du);
    /* 008a2fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2fb6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2fb8: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a2fbb: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2fbe: jmp 0x8a2fd1 */ goto L_008a2fd1;
L_008a2fc0:; BB(0x008a2fc0);
    /* 008a2fc0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2fc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a2fc5: mov dword ptr [eax + 0x14], 0x4d */ W32((u32)(r_eax+0x14u), 0x4du);
    /* 008a2fcc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2fce: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
L_008a2fd1:; BB(0x008a2fd1);
    /* 008a2fd1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2fd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2fd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2fd6: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2fd9u); call_ind(t); }
L_008a2fd9:; BB(0x008a2fd9);
    /* 008a2fd9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a2fdd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a2fe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2fe1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2fe2: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008a2fe4: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008a2fe7: jle 0x8a2ff5 */ if ((fZ||fS!=fO)) goto L_008a2ff5;
L_008a2fe9:; BB(0x008a2fe9);
    /* 008a2fe9: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a2fec: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008a2fef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2ff0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x8a2ff3u); call_ind(t); }
    /* 008a2ff3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2ff4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2ff5:; BB(0x008a2ff5);
    /* 008a2ff5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a2ff7:; BB(0x008a2ff7);
    /* 008a2ff7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2ff8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2ff9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2ffa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a2ffb: ret  */ FN_RET(0x008a2e82); r_esp += 4; return;
}

void f_008a2ffc(void) /* sub_8A2FFC */
{
    FN_ENTER(0x008a2ffc);
    /* 008a2ffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a2ffd: mov ebp, esp */ r_ebp = r_esp;
    /* 008a2fff: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a3002: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3003: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008a3006: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a3009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a300b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a300c: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a300e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a3011: jne 0x8a3028 */ if (!fZ) goto L_008a3028;
L_008a3013:; BB(0x008a3013);
    /* 008a3013: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3014: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3017u); call_ind(t); }
    /* 008a3017: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a301a: je 0x8a314f */ if (fZ) goto L_008a314f;
L_008a3020:; BB(0x008a3020);
    /* 008a3020: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a3023: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a3025: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3028:; BB(0x008a3028);
    /* 008a3028: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a302b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a302d: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a302f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3030: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3034: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a3037: jne 0x8a304e */ if (!fZ) goto L_008a304e;
L_008a3039:; BB(0x008a3039);
    /* 008a3039: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a303a: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a303du); call_ind(t); }
    /* 008a303d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a303f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3040: je 0x8a314f */ if (fZ) goto L_008a314f;
L_008a3046:; BB(0x008a3046);
    /* 008a3046: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a3049: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a304b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a304e:; BB(0x008a304e);
    /* 008a304e: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a3051: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3054: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3057: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3058: sub dword ptr [ebp - 8], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a305c: jmp 0x8a3137 */ goto L_008a3137;
L_008a3061:; BB(0x008a3061);
    /* 008a3061: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3065: jne 0x8a307c */ if (!fZ) goto L_008a307c;
L_008a3067:; BB(0x008a3067);
    /* 008a3067: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3068: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a306bu); call_ind(t); }
    /* 008a306b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a306d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a306e: je 0x8a314f */ if (fZ) goto L_008a314f;
L_008a3074:; BB(0x008a3074);
    /* 008a3074: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a3077: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a3079: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a307c:; BB(0x008a307c);
    /* 008a307c: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a307f: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3082: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3083: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3087: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a308a: jne 0x8a30a1 */ if (!fZ) goto L_008a30a1;
L_008a308c:; BB(0x008a308c);
    /* 008a308c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a308d: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3090u); call_ind(t); }
    /* 008a3090: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3092: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3093: je 0x8a314f */ if (fZ) goto L_008a314f;
L_008a3099:; BB(0x008a3099);
    /* 008a3099: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a309c: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008a309e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a30a1:; BB(0x008a30a1);
    /* 008a30a1: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a30a4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a30a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a30a9: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a30ac: sub dword ptr [ebp - 8], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a30b0: mov dword ptr [ecx + 0x14], 0x4e */ W32((u32)(r_ecx+0x14u), 0x4eu);
    /* 008a30b7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a30b9: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 008a30bc: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a30be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008a30c1: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008a30c4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a30c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a30c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a30c9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a30ca: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a30cdu); call_ind(t); }
    /* 008a30cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a30d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a30d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a30d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a30d4: jl 0x8a30db */ if ((fS!=fO)) goto L_008a30db;
L_008a30d6:; BB(0x008a30d6);
    /* 008a30d6: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a30d9: jl 0x8a30f2 */ if ((fS!=fO)) goto L_008a30f2;
L_008a30db:; BB(0x008a30db);
    /* 008a30db: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a30dd: mov dword ptr [ecx + 0x14], 0x1a */ W32((u32)(r_ecx+0x14u), 0x1au);
    /* 008a30e4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a30e6: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a30e9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a30eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a30ec: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a30eeu); call_ind(t); }
    /* 008a30ee: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a30f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a30f2:; BB(0x008a30f2);
    /* 008a30f2: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a30f5: jl 0x8a3103 */ if ((fS!=fO)) goto L_008a3103;
L_008a30f7:; BB(0x008a30f7);
    /* 008a30f7: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 008a30fa: mov byte ptr [eax + esi + 0xda], cl */ W8((u32)(r_eax+r_esi+0xdau), (u8)r_ecx);
    /* 008a3101: jmp 0x8a3137 */ goto L_008a3137;
L_008a3103:; BB(0x008a3103);
    /* 008a3103: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a3106: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008a3108: and cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a310b: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008a310e: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a3110: mov byte ptr [eax + esi + 0xca], cl */ W8((u32)(r_eax+r_esi+0xcau), (u8)r_ecx);
    /* 008a3117: mov byte ptr [eax + esi + 0xda], dl */ W8((u32)(r_eax+r_esi+0xdau), (u8)r_edx);
    /* 008a311e: jbe 0x8a3137 */ if ((fC||fZ)) goto L_008a3137;
L_008a3120:; BB(0x008a3120);
    /* 008a3120: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3122: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a3125: mov dword ptr [eax + 0x14], 0x1b */ W32((u32)(r_eax+0x14u), 0x1bu);
    /* 008a312c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a312e: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a3131: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3133: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3134: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a3136u); call_ind(t); }
    /* 008a3136: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3137:; BB(0x008a3137);
    /* 008a3137: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a313b: jg 0x8a3061 */ if ((!fZ&&fS==fO)) goto L_008a3061;
L_008a3141:; BB(0x008a3141);
    /* 008a3141: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3144: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008a3147: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 008a3149: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a314b:; BB(0x008a314b);
    /* 008a314b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a314c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a314d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a314e: ret  */ FN_RET(0x008a2ffc); r_esp += 4; return;
L_008a314f:; BB(0x008a314f);
    /* 008a314f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3151: jmp 0x8a314b */ goto L_008a314b;
}

