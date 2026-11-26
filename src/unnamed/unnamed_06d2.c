#include "protos.h"

void f_006d2148(void) /* sub_6D2148 */
{
    FN_ENTER(0x006d2148);
    /* 006d2148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2149: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d214b: mov ecx, dword ptr [ebx + 0x1475c] */ r_ecx = R32((u32)(r_ebx+0x1475cu));
    /* 006d2151: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2153: je 0x6d2249 */ if (fZ) goto L_006d2249;
L_006d2159:; BB(0x006d2159);
    /* 006d2159: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d2160: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d2162: je 0x6d2249 */ if (fZ) goto L_006d2249;
L_006d2168:; BB(0x006d2168);
    /* 006d2168: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d216du); f_007365f4();
    /* 006d216d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d216f: jne 0x6d21cb */ if (!fZ) goto L_006d21cb;
L_006d2171:; BB(0x006d2171);
    /* 006d2171: push dword ptr [ebx + 0x603c] */ { u32 v = R32((u32)(r_ebx+0x603cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2177: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d217cu); f_006dc358();
    /* 006d217c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d217d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d217f: je 0x6d2183 */ if (fZ) goto L_006d2183;
L_006d2181:; BB(0x006d2181);
    /* 006d2181: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2182: ret  */ FN_RET(0x006d2148); r_esp += 4; return;
L_006d2183:; BB(0x006d2183);
    /* 006d2183: mov edx, dword ptr [ebx + 0x14754] */ r_edx = R32((u32)(r_ebx+0x14754u));
    /* 006d2189: push dword ptr [ebx + 0x6040] */ { u32 v = R32((u32)(r_ebx+0x6040u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d218f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d2192: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2194: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d2196: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2198: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d219a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d219d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d219f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d21a1: lea edx, [ebx + edx + 0x3c] */ r_edx = (u32)(r_ebx+r_edx+0x3cu);
    /* 006d21a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d21a6: push dword ptr [ebx + eax*8 + 0x98] */ { u32 v = R32((u32)(r_ebx+r_eax*8+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d21ad: push dword ptr [ebx + eax*8 + 0x94] */ { u32 v = R32((u32)(r_ebx+r_eax*8+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d21b4: call 0x782844 */ r_esp -= 4; W32(r_esp, 0x6d21b9u); f_00782844();
    /* 006d21b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d21bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d21be: je 0x6d21c2 */ if (fZ) goto L_006d21c2;
L_006d21c0:; BB(0x006d21c0);
    /* 006d21c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d21c1: ret  */ FN_RET(0x006d2148); r_esp += 4; return;
L_006d21c2:; BB(0x006d21c2);
    /* 006d21c2: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 006d21c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d21ca: ret  */ FN_RET(0x006d2148); r_esp += 4; return;
L_006d21cb:; BB(0x006d21cb);
    /* 006d21cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d21ce: jne 0x6d2243 */ if (!fZ) goto L_006d2243;
L_006d21d0:; BB(0x006d21d0);
    /* 006d21d0: mov ecx, dword ptr [ebx + 0x1475c] */ r_ecx = R32((u32)(r_ebx+0x1475cu));
    /* 006d21d6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d21dbu); f_007127b0();
    /* 006d21db: mov ecx, dword ptr [ebx + 0x14764] */ r_ecx = R32((u32)(r_ebx+0x14764u));
    /* 006d21e1: mov dword ptr [ebx + 0x1475c], 0 */ W32((u32)(r_ebx+0x1475cu), 0x0u);
    /* 006d21eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d21ed: je 0x6d21fe */ if (fZ) goto L_006d21fe;
L_006d21ef:; BB(0x006d21ef);
    /* 006d21ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d21f4u); f_007127b0();
    /* 006d21f4: mov dword ptr [ebx + 0x14764], 0 */ W32((u32)(r_ebx+0x14764u), 0x0u);
L_006d21fe:; BB(0x006d21fe);
    /* 006d21fe: mov edx, dword ptr [ebx + 0x14758] */ r_edx = R32((u32)(r_ebx+0x14758u));
    /* 006d2204: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2206: je 0x6d2229 */ if (fZ) goto L_006d2229;
L_006d2208:; BB(0x006d2208);
    /* 006d2208: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d220f: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d2214: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d2217: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d221e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2220: je 0x6d2229 */ if (fZ) goto L_006d2229;
L_006d2222:; BB(0x006d2222);
    /* 006d2222: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2224: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d2229u); f_00760acc();
L_006d2229:; BB(0x006d2229);
    /* 006d2229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d222b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d222d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d222f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d2231: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d2234u); call_ind(t); }
    /* 006d2234: mov ecx, dword ptr [ebx + 0x1475c] */ r_ecx = R32((u32)(r_ebx+0x1475cu));
    /* 006d223a: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d2241: jmp 0x6d2249 */ goto L_006d2249;
L_006d2243:; BB(0x006d2243);
    /* 006d2243: mov ecx, dword ptr [ebx + 0x1475c] */ r_ecx = R32((u32)(r_ebx+0x1475cu));
L_006d2249:; BB(0x006d2249);
    /* 006d2249: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d224b: je 0x6d21c0 */ if (fZ) goto L_006d21c0;
L_006d2251:; BB(0x006d2251);
    /* 006d2251: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d2258: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d225a: je 0x6d21c0 */ if (fZ) goto L_006d21c0;
L_006d2260:; BB(0x006d2260);
    /* 006d2260: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d2265u); f_007127b0();
    /* 006d2265: mov ecx, dword ptr [ebx + 0x14764] */ r_ecx = R32((u32)(r_ebx+0x14764u));
    /* 006d226b: mov dword ptr [ebx + 0x1475c], 0 */ W32((u32)(r_ebx+0x1475cu), 0x0u);
    /* 006d2275: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2277: je 0x6d2288 */ if (fZ) goto L_006d2288;
L_006d2279:; BB(0x006d2279);
    /* 006d2279: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d227eu); f_007127b0();
    /* 006d227e: mov dword ptr [ebx + 0x14764], 0 */ W32((u32)(r_ebx+0x14764u), 0x0u);
L_006d2288:; BB(0x006d2288);
    /* 006d2288: mov edx, dword ptr [ebx + 0x14758] */ r_edx = R32((u32)(r_ebx+0x14758u));
    /* 006d228e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2290: je 0x6d22b3 */ if (fZ) goto L_006d22b3;
L_006d2292:; BB(0x006d2292);
    /* 006d2292: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d2299: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d229e: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d22a1: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d22a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d22aa: je 0x6d22b3 */ if (fZ) goto L_006d22b3;
L_006d22ac:; BB(0x006d22ac);
    /* 006d22ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d22ae: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d22b3u); f_00760acc();
L_006d22b3:; BB(0x006d22b3);
    /* 006d22b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d22b5: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d22b7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d22b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d22bb: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d22beu); call_ind(t); }
    /* 006d22be: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d22c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d22c6: ret  */ FN_RET(0x006d2148); r_esp += 4; return;
}

void f_006d22c8(void) /* sub_6D22C8 */
{
    FN_ENTER(0x006d22c8);
    /* 006d22c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d22c9: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d22cc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d22ce: push dword ptr [ebp + 0x603c] */ { u32 v = R32((u32)(r_ebp+0x603cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d22d4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d22d9u); f_006dc358();
    /* 006d22d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d22da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d22dc: je 0x6d22e3 */ if (fZ) goto L_006d22e3;
L_006d22de:; BB(0x006d22de);
    /* 006d22de: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d22e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d22e2: ret  */ FN_RET(0x006d22c8); r_esp += 4; return;
L_006d22e3:; BB(0x006d22e3);
    /* 006d22e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d22e6: push dword ptr [ebp + 0x6040] */ { u32 v = R32((u32)(r_ebp+0x6040u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d22ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d22ed: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d22f2u); f_0082c21c();
    /* 006d22f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d22f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d22f7: je 0x6d2345 */ if (fZ) goto L_006d2345;
L_006d22f9:; BB(0x006d22f9);
    /* 006d22f9: cmp eax, 0xffffff21 */ {  u32 a = r_eax; u32 b = 0xffffff21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d22fe: jne 0x6d231f */ if (!fZ) goto L_006d231f;
L_006d2300:; BB(0x006d2300);
    /* 006d2300: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2302: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d2307u); f_007930dc();
    /* 006d2307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2308: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d230a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d230b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d230e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2310: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2313u); call_ind(t); }
    /* 006d2313: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006d231a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d231d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d231e: ret  */ FN_RET(0x006d22c8); r_esp += 4; return;
L_006d231f:; BB(0x006d231f);
    /* 006d231f: cmp eax, 0xffffff20 */ {  u32 a = r_eax; u32 b = 0xffffff20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2324: jne 0x6d237a */ if (!fZ) goto L_006d237a;
L_006d2326:; BB(0x006d2326);
    /* 006d2326: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2328: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d232du); f_007930dc();
    /* 006d232d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d232e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2331: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d2334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2336: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2339u); call_ind(t); }
    /* 006d2339: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006d2340: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2343: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d2344: ret  */ FN_RET(0x006d22c8); r_esp += 4; return;
L_006d2345:; BB(0x006d2345);
    /* 006d2345: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d2348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2349: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d234b: call 0x6d2380 */ r_esp -= 4; W32(r_esp, 0x6d2350u); f_006d2380();
    /* 006d2350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2352: je 0x6d2360 */ if (fZ) goto L_006d2360;
L_006d2354:; BB(0x006d2354);
    /* 006d2354: mov dword ptr [ebp + 0x20], 6 */ W32((u32)(r_ebp+0x20u), 0x6u);
    /* 006d235b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d235e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d235f: ret  */ FN_RET(0x006d22c8); r_esp += 4; return;
L_006d2360:; BB(0x006d2360);
    /* 006d2360: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2362: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d2367u); f_007930dc();
    /* 006d2367: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2368: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d236a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d236b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d236e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2370: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2373u); call_ind(t); }
    /* 006d2373: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
L_006d237a:; BB(0x006d237a);
    /* 006d237a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d237d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d237e: ret  */ FN_RET(0x006d22c8); r_esp += 4; return;
}

void f_006d2380(void) /* sub_6D2380 */
{
    FN_ENTER(0x006d2380);
    /* 006d2380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2381: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006d2385: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d238au); f_006dc358();
    /* 006d238a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d238c: jne 0x6d2393 */ if (!fZ) goto L_006d2393;
L_006d238e:; BB(0x006d238e);
    /* 006d238e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d2393u); f_006dc358();
L_006d2393:; BB(0x006d2393);
    /* 006d2393: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2396: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2399: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006d239e: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006d23a3: call 0x6be204 */ r_esp -= 4; W32(r_esp, 0x6d23a8u); f_006be204();
    /* 006d23a8: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d23ab: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d23ae: call 0x6be2bc */ r_esp -= 4; W32(r_esp, 0x6d23b3u); f_006be2bc();
    /* 006d23b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d23b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d23b8: jne 0x6d23be */ if (!fZ) goto L_006d23be;
L_006d23ba:; BB(0x006d23ba);
    /* 006d23ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d23bb: ret 4 */ FN_RET(0x006d2380); r_esp += 8; return;
L_006d23be:; BB(0x006d23be);
    /* 006d23be: push dword ptr [0xa9619c] */ { u32 v = R32((u32)(0xa9619cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d23c4: push dword ptr [0xa961a4] */ { u32 v = R32((u32)(0xa961a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d23ca: mov ebx, dword ptr [ebx + 0x58] */ r_ebx = R32((u32)(r_ebx+0x58u));
    /* 006d23cd: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d23d0: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 006d23d3: lea edx, [eax + ebx + 0x18] */ r_edx = (u32)(r_eax+r_ebx+0x18u);
    /* 006d23d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d23d8: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d23ddu); f_005b9b3c();
    /* 006d23dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d23e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006d23e2: jbe 0x6d2423 */ if ((fC||fZ)) goto L_006d2423;
L_006d23e4:; BB(0x006d23e4);
    /* 006d23e4: mov ecx, dword ptr [0xa961a4] */ r_ecx = R32((u32)(0xa961a4u));
    /* 006d23ea: mov edx, dword ptr [0xa9619c] */ r_edx = R32((u32)(0xa9619cu));
    /* 006d23f0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d23f2: mov dword ptr [0xa961a0], ecx */ W32((u32)(0xa961a0u), r_ecx);
    /* 006d23f8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d23fa: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 006d23fd: mov dword ptr [0xa96198], edx */ W32((u32)(0xa96198u), r_edx);
    /* 006d2403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2404: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2405: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2409: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6d240eu); f_005b9b3c();
    /* 006d240e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2413: jbe 0x6d2423 */ if ((fC||fZ)) goto L_006d2423;
L_006d2415:; BB(0x006d2415);
    /* 006d2415: mov dword ptr [0xa96198], eax */ W32((u32)(0xa96198u), r_eax);
    /* 006d241a: mov eax, 1 */ r_eax = 0x1u;
    /* 006d241f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2420: ret 4 */ FN_RET(0x006d2380); r_esp += 8; return;
L_006d2423:; BB(0x006d2423);
    /* 006d2423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2426: ret 4 */ FN_RET(0x006d2380); r_esp += 8; return;
}

void f_006d242c(void) /* sub_6D242C */
{
    FN_ENTER(0x006d242c);
    /* 006d242c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d242d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d242f: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 006d2432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2434: je 0x6d2438 */ if (fZ) goto L_006d2438;
L_006d2436:; BB(0x006d2436);
    /* 006d2436: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d2438u); call_ind(t); }
L_006d2438:; BB(0x006d2438);
    /* 006d2438: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d243du); f_005b7a28();
    /* 006d243d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d243f: je 0x6d2450 */ if (fZ) goto L_006d2450;
L_006d2441:; BB(0x006d2441);
    /* 006d2441: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d2445: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d244a: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d244e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d244f: ret  */ FN_RET(0x006d242c); r_esp += 4; return;
L_006d2450:; BB(0x006d2450);
    /* 006d2450: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2456: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x6d245bu); f_005b9008();
    /* 006d245b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d245c: jmp 0x6d2441 */ goto L_006d2441;
}

void f_006d2460(void) /* sub_6D2460 */
{
    FN_ENTER(0x006d2460);
    /* 006d2460: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2461: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2462: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2463: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006d2467: mov esi, dword ptr [0xa9cd44] */ r_esi = R32((u32)(0xa9cd44u));
    /* 006d246d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d246f: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 006d2471: mov ecx, edi */ r_ecx = r_edi;
    /* 006d2473: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d2475: je 0x6d2483 */ if (fZ) goto L_006d2483;
L_006d2477:; BB(0x006d2477);
    /* 006d2477: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d247a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d247d: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006d247f: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d2481: jne 0x6d2477 */ if (!fZ) goto L_006d2477;
L_006d2483:; BB(0x006d2483);
    /* 006d2483: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2486: jle 0x6d24d9 */ if ((fZ||fS!=fO)) goto L_006d24d9;
L_006d2488:; BB(0x006d2488);
    /* 006d2488: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d248a: push dword ptr [esi*4 + 0x9cf0bc] */ { u32 v = R32((u32)(r_esi*4+0x9cf0bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2491: lea eax, [edi + eax - 6] */ r_eax = (u32)(r_edi+r_eax+0xfffffffau);
    /* 006d2495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2496: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6d249bu); f_008598c0();
    /* 006d249b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d249e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d24a0: jne 0x6d24d9 */ if (!fZ) goto L_006d24d9;
L_006d24a2:; BB(0x006d24a2);
    /* 006d24a2: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006d24a9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d24ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d24ad: push 0x96c050 */ { u32 v = 0x96c050u; r_esp -= 4; W32(r_esp, v); }
    /* 006d24b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d24b3: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x6d24b8u); f_00859b7a();
    /* 006d24b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d24bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d24be: jne 0x6d24d9 */ if (!fZ) goto L_006d24d9;
L_006d24c0:; BB(0x006d24c0);
    /* 006d24c0: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006d24c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d24c5: jl 0x6d24d9 */ if ((fS!=fO)) goto L_006d24d9;
L_006d24c7:; BB(0x006d24c7);
    /* 006d24c7: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d24cc: jg 0x6d24d9 */ if ((!fZ&&fS==fO)) goto L_006d24d9;
L_006d24ce:; BB(0x006d24ce);
    /* 006d24ce: mov eax, 1 */ r_eax = 0x1u;
    /* 006d24d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d24d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d24d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d24d6: ret 4 */ FN_RET(0x006d2460); r_esp += 8; return;
L_006d24d9:; BB(0x006d24d9);
    /* 006d24d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d24db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d24dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d24dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d24de: ret 4 */ FN_RET(0x006d2460); r_esp += 8; return;
}

void f_006d24e4(void) /* sub_6D24E4 */
{
    FN_ENTER(0x006d24e4);
    /* 006d24e4: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 006d24e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d24e9: je 0x6d24f8 */ if (fZ) goto L_006d24f8;
L_006d24eb:; BB(0x006d24eb);
    /* 006d24eb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d24ef: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d24f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d24f5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d24f8u); call_ind(t); }
L_006d24f8:; BB(0x006d24f8);
    /* 006d24f8: ret 8 */ FN_RET(0x006d24e4); r_esp += 12; return;
}

void f_006d24fc(void) /* sub_6D24FC */
{
    FN_ENTER(0x006d24fc);
    /* 006d24fc: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 006d24ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2501: je 0x6d2510 */ if (fZ) goto L_006d2510;
L_006d2503:; BB(0x006d2503);
    /* 006d2503: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2507: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d250b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d250d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2510u); call_ind(t); }
L_006d2510:; BB(0x006d2510);
    /* 006d2510: ret 8 */ FN_RET(0x006d24fc); r_esp += 12; return;
}

void f_006d2514(void) /* sub_6D2514 */
{
    FN_ENTER(0x006d2514);
    /* 006d2514: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 006d2517: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2519: je 0x6d2528 */ if (fZ) goto L_006d2528;
L_006d251b:; BB(0x006d251b);
    /* 006d251b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d251f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2523: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d2525: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d2528u); call_ind(t); }
L_006d2528:; BB(0x006d2528);
    /* 006d2528: ret 8 */ FN_RET(0x006d2514); r_esp += 12; return;
}

void f_006d252c(void) /* sub_6D252C */
{
    FN_ENTER(0x006d252c);
    /* 006d252c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d252d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d252f: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006d2532: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2534: je 0x6d254e */ if (fZ) goto L_006d254e;
L_006d2536:; BB(0x006d2536);
    /* 006d2536: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d2538: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d253bu); call_ind(t); }
    /* 006d253b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d253d: jne 0x6d2543 */ if (!fZ) goto L_006d2543;
L_006d253f:; BB(0x006d253f);
    /* 006d253f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2541: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2542: ret  */ FN_RET(0x006d252c); r_esp += 4; return;
L_006d2543:; BB(0x006d2543);
    /* 006d2543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d2545: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d254au); f_006dc988();
    /* 006d254a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d254c: je 0x6d253f */ if (fZ) goto L_006d253f;
L_006d254e:; BB(0x006d254e);
    /* 006d254e: mov eax, 1 */ r_eax = 0x1u;
    /* 006d2553: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2554: ret  */ FN_RET(0x006d252c); r_esp += 4; return;
}

void f_006d2558(void) /* sub_6D2558 */
{
    FN_ENTER(0x006d2558);
    /* 006d2558: mov dword ptr [0xa96188], 0x3f800000 */ W32((u32)(0xa96188u), 0x3f800000u);
    /* 006d2562: mov dword ptr [0xa9618c], 0x41000000 */ W32((u32)(0xa9618cu), 0x41000000u);
    /* 006d256c: mov dword ptr [0xa96190], 0x3fc00000 */ W32((u32)(0xa96190u), 0x3fc00000u);
    /* 006d2576: ret  */ FN_RET(0x006d2558); r_esp += 4; return;
}

void f_006d2578(void) /* sub_6D2578 */
{
    FN_ENTER(0x006d2578);
    /* 006d2578: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2579: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d257b: mov eax, dword ptr [ebx + 0x6044] */ r_eax = R32((u32)(r_ebx+0x6044u));
    /* 006d2581: cmp eax, dword ptr [ebx + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d2584: jl 0x6d2592 */ if ((fS!=fO)) goto L_006d2592;
L_006d2586:; BB(0x006d2586);
    /* 006d2586: mov dword ptr [ebx + 0x604c], 2 */ W32((u32)(r_ebx+0x604cu), 0x2u);
    /* 006d2590: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2591: ret  */ FN_RET(0x006d2578); r_esp += 4; return;
L_006d2592:; BB(0x006d2592);
    /* 006d2592: push dword ptr [ebx + 0x603c] */ { u32 v = R32((u32)(r_ebx+0x603cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2598: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6d259du); f_006dc358();
    /* 006d259d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d259e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d25a0: je 0x6d25a4 */ if (fZ) goto L_006d25a4;
L_006d25a2:; BB(0x006d25a2);
    /* 006d25a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d25a3: ret  */ FN_RET(0x006d2578); r_esp += 4; return;
L_006d25a4:; BB(0x006d25a4);
    /* 006d25a4: push dword ptr [ebx + 0x6040] */ { u32 v = R32((u32)(r_ebx+0x6040u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d25aa: mov edx, dword ptr [ebx + 0x6044] */ r_edx = R32((u32)(r_ebx+0x6044u));
    /* 006d25b0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006d25b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d25b5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d25b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d25b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d25bb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d25be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d25c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d25c2: lea edx, [ebx + edx + 0x3c] */ r_edx = (u32)(r_ebx+r_edx+0x3cu);
    /* 006d25c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d25c7: push dword ptr [ebx + eax*8 + 0x98] */ { u32 v = R32((u32)(r_ebx+r_eax*8+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d25ce: push dword ptr [ebx + eax*8 + 0x94] */ { u32 v = R32((u32)(r_ebx+r_eax*8+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d25d5: call 0x782844 */ r_esp -= 4; W32(r_esp, 0x6d25dau); f_00782844();
    /* 006d25da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d25dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d25df: jne 0x6d25f4 */ if (!fZ) goto L_006d25f4;
L_006d25e1:; BB(0x006d25e1);
    /* 006d25e1: add dword ptr [ebx + 0x6044], 1 */ { u32 ad = (u32)(r_ebx+0x6044u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d25e8: mov dword ptr [ebx + 0x604c], 1 */ W32((u32)(r_ebx+0x604cu), 0x1u);
    /* 006d25f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d25f3: ret  */ FN_RET(0x006d2578); r_esp += 4; return;
L_006d25f4:; BB(0x006d25f4);
    /* 006d25f4: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006d25f9: mov eax, dword ptr [ebx + 0x6044] */ r_eax = R32((u32)(r_ebx+0x6044u));
    /* 006d25ff: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d2602: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2604: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2606: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2608: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d260a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d260c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d260e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2610: lea eax, [ebx + edx + 0x4c] */ r_eax = (u32)(r_ebx+r_edx+0x4cu);
    /* 006d2614: mov dword ptr [0xa96194], eax */ W32((u32)(0xa96194u), r_eax);
    /* 006d2619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d261a: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6d261fu); f_00858c4d();
    /* 006d261f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2624: jne 0x6d263a */ if (!fZ) goto L_006d263a;
L_006d2626:; BB(0x006d2626);
    /* 006d2626: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2628: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d262du); f_007930dc();
    /* 006d262d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d262e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2631: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d2633: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d2635: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2638u); call_ind(t); }
    /* 006d2638: jmp 0x6d264c */ goto L_006d264c;
L_006d263a:; BB(0x006d263a);
    /* 006d263a: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 006d263c: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d2641u); f_007930dc();
    /* 006d2641: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2642: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2645: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d2647: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d2649: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d264cu); call_ind(t); }
L_006d264c:; BB(0x006d264c);
    /* 006d264c: add dword ptr [ebx + 0x6044], 1 */ { u32 ad = (u32)(r_ebx+0x6044u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2653: mov dword ptr [ebx + 0x20], 0xa */ W32((u32)(r_ebx+0x20u), 0xau);
    /* 006d265a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d265b: ret  */ FN_RET(0x006d2578); r_esp += 4; return;
}

void f_006d265c(void) /* sub_6D265C */
{
    FN_ENTER(0x006d265c);
    /* 006d265c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d265d: mov edi, ecx */ r_edi = r_ecx;
    /* 006d265f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d2661: mov ecx, edi */ r_ecx = r_edi;
    /* 006d2663: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d2666u); call_ind(t); }
    /* 006d2666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2668: jne 0x6d266c */ if (!fZ) goto L_006d266c;
L_006d266a:; BB(0x006d266a);
    /* 006d266a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d266b: ret  */ FN_RET(0x006d265c); r_esp += 4; return;
L_006d266c:; BB(0x006d266c);
    /* 006d266c: mov dword ptr [edi + 0x604c], 0 */ W32((u32)(r_edi+0x604cu), 0x0u);
    /* 006d2676: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d267d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d267e: ret  */ FN_RET(0x006d265c); r_esp += 4; return;
}

void f_006d2680(void) /* sub_6D2680 */
{
    FN_ENTER(0x006d2680);
    /* 006d2680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d2681: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d2683: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006d2686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2688: je 0x6d268c */ if (fZ) goto L_006d268c;
L_006d268a:; BB(0x006d268a);
    /* 006d268a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d268cu); call_ind(t); }
L_006d268c:; BB(0x006d268c);
    /* 006d268c: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d2691u); f_005b7a28();
    /* 006d2691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2693: je 0x6d26a4 */ if (fZ) goto L_006d26a4;
L_006d2695:; BB(0x006d2695);
    /* 006d2695: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d2699: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d269e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d26a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d26a3: ret  */ FN_RET(0x006d2680); r_esp += 4; return;
L_006d26a4:; BB(0x006d26a4);
    /* 006d26a4: push dword ptr [0x9cf0d0] */ { u32 v = R32((u32)(0x9cf0d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d26aa: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x6d26afu); f_005b9008();
    /* 006d26af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d26b0: jmp 0x6d2695 */ goto L_006d2695;
}

void f_006d26b4(void) /* sub_6D26B4 */
{
    FN_ENTER(0x006d26b4);
    /* 006d26b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d26b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d26b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d26b7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d26ba: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d26bc: mov ecx, dword ptr [ebx + 0x14758] */ r_ecx = R32((u32)(r_ebx+0x14758u));
    /* 006d26c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d26c4: je 0x6d26d5 */ if (fZ) goto L_006d26d5;
L_006d26c6:; BB(0x006d26c6);
    /* 006d26c6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d26cbu); f_007127b0();
    /* 006d26cb: mov dword ptr [ebx + 0x14758], 0 */ W32((u32)(r_ebx+0x14758u), 0x0u);
L_006d26d5:; BB(0x006d26d5);
    /* 006d26d5: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006d26da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d26dc: jne 0x6d26fd */ if (!fZ) goto L_006d26fd;
L_006d26de:; BB(0x006d26de);
    /* 006d26de: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006d26e1: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006d26e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d26e6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006d26e8: push 0x96bfc4 */ { u32 v = 0x96bfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d26ed: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d26f2u); f_0073ff34();
    /* 006d26f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d26f5: mov dword ptr [ebx + 0x14758], eax */ W32((u32)(r_ebx+0x14758u), r_eax);
    /* 006d26fb: jmp 0x6d271a */ goto L_006d271a;
L_006d26fd:; BB(0x006d26fd);
    /* 006d26fd: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006d2700: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006d2704: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2705: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2707: push 0x96bfd4 */ { u32 v = 0x96bfd4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d270c: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d2711u); f_0073ff34();
    /* 006d2711: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2714: mov dword ptr [ebx + 0x14758], eax */ W32((u32)(r_ebx+0x14758u), r_eax);
L_006d271a:; BB(0x006d271a);
    /* 006d271a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d271c: je 0x6d2789 */ if (fZ) goto L_006d2789;
L_006d271e:; BB(0x006d271e);
    /* 006d271e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2720: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d2722: mov esi, edx */ r_esi = r_edx;
    /* 006d2724: mov edi, ecx */ r_edi = r_ecx;
L_006d2726:; BB(0x006d2726);
    /* 006d2726: cmp edi, dword ptr [ebx + 0x6050] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x6050u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d272c: jge 0x6d2782 */ if ((fS==fO)) goto L_006d2782;
L_006d272e:; BB(0x006d272e);
    /* 006d272e: lea ecx, [ebx + esi] */ r_ecx = (u32)(r_ebx+r_esi);
    /* 006d2731: mov edx, dword ptr [ecx + 0x63ec] */ r_edx = R32((u32)(r_ecx+0x63ecu));
    /* 006d2737: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2739: jne 0x6d274e */ if (!fZ) goto L_006d274e;
L_006d273b:; BB(0x006d273b);
    /* 006d273b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d273c: add ecx, 0x6064 */ {  u32 a = r_ecx; u32 b = 0x6064u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2742: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2743: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2745: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2747: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d274cu); f_00740084();
    /* 006d274c: jmp 0x6d2771 */ goto L_006d2771;
L_006d274e:; BB(0x006d274e);
    /* 006d274e: add ecx, 0x6064 */ {  u32 a = r_ecx; u32 b = 0x6064u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2754: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2757: jne 0x6d2766 */ if (!fZ) goto L_006d2766;
L_006d2759:; BB(0x006d2759);
    /* 006d2759: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d275a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d275b: mov ecx, eax */ r_ecx = r_eax;
    /* 006d275d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d275f: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d2764u); f_00740084();
    /* 006d2764: jmp 0x6d2771 */ goto L_006d2771;
L_006d2766:; BB(0x006d2766);
    /* 006d2766: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2767: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2768: mov ecx, eax */ r_ecx = r_eax;
    /* 006d276a: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d276c: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d2771u); f_00740084();
L_006d2771:; BB(0x006d2771);
    /* 006d2771: mov eax, dword ptr [ebx + 0x14758] */ r_eax = R32((u32)(r_ebx+0x14758u));
    /* 006d2777: add esi, 0x39c */ {  u32 a = r_esi; u32 b = 0x39cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d277d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2780: jmp 0x6d2726 */ goto L_006d2726;
L_006d2782:; BB(0x006d2782);
    /* 006d2782: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2784: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d2789u); f_00737cdc();
L_006d2789:; BB(0x006d2789);
    /* 006d2789: mov ecx, dword ptr [ebx + 0x14760] */ r_ecx = R32((u32)(r_ebx+0x14760u));
    /* 006d278f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2791: je 0x6d27a2 */ if (fZ) goto L_006d27a2;
L_006d2793:; BB(0x006d2793);
    /* 006d2793: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d2798u); f_007127b0();
    /* 006d2798: mov dword ptr [ebx + 0x14760], 0 */ W32((u32)(r_ebx+0x14760u), 0x0u);
L_006d27a2:; BB(0x006d27a2);
    /* 006d27a2: mov dword ptr [esp], 0x43640000 */ W32((u32)(r_esp), 0x43640000u);
    /* 006d27a9: mov dword ptr [esp + 4], 0x43380000 */ W32((u32)(r_esp+0x4u), 0x43380000u);
    /* 006d27b1: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d27b3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d27b8u); f_0073ec50();
    /* 006d27b8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006d27bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d27be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d27bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d27c0: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6d27c5u); f_0073a8dc();
    /* 006d27c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d27c8: mov dword ptr [ebx + 0x14760], eax */ W32((u32)(r_ebx+0x14760u), r_eax);
    /* 006d27ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d27d0: je 0x6d27e5 */ if (fZ) goto L_006d27e5;
L_006d27d2:; BB(0x006d27d2);
    /* 006d27d2: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d27d7: lea edx, [ebx + 0x60a4] */ r_edx = (u32)(r_ebx+0x60a4u);
    /* 006d27dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d27de: mov ecx, eax */ r_ecx = r_eax;
    /* 006d27e0: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d27e5u); f_0073ae38();
L_006d27e5:; BB(0x006d27e5);
    /* 006d27e5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d27e7: mov dword ptr [ebx + 0x6048], 0 */ W32((u32)(r_ebx+0x6048u), 0x0u);
    /* 006d27f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d27f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d27f5: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d27f7: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d27fau); call_ind(t); }
    /* 006d27fa: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006d2801: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2804: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d2806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2807: ret  */ FN_RET(0x006d26b4); r_esp += 4; return;
}

void f_006d2808(void) /* sub_6D2808 */
{
    FN_ENTER(0x006d2808);
    /* 006d2808: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2809: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d280a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d280b: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d280e: mov esi, ecx */ r_esi = r_ecx;
    /* 006d2810: mov dword ptr [esi + 0x603c], 1 */ W32((u32)(r_esi+0x603cu), 0x1u);
    /* 006d281a: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 006d2821: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d2824: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006d2828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d282a: call 0x82c15c */ r_esp -= 4; W32(r_esp, 0x6d282fu); f_0082c15c();
    /* 006d282f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2834: jne 0x6d29c3 */ if (!fZ) goto L_006d29c3;
L_006d283a:; BB(0x006d283a);
    /* 006d283a: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006d283e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d283f: mov ecx, esi */ r_ecx = r_esi;
    /* 006d2841: call 0x6d2460 */ r_esp -= 4; W32(r_esp, 0x6d2846u); f_006d2460();
    /* 006d2846: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2849: je 0x6d2a11 */ if (fZ) goto L_006d2a11;
L_006d284f:; BB(0x006d284f);
    /* 006d284f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d2852: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006d2856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2858: call 0x82c15c */ r_esp -= 4; W32(r_esp, 0x6d285du); f_0082c15c();
    /* 006d285d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2862: jne 0x6d29be */ if (!fZ) goto L_006d29be;
L_006d2868:; BB(0x006d2868);
    /* 006d2868: mov ebx, dword ptr [0xa9cd44] */ r_ebx = R32((u32)(0xa9cd44u));
    /* 006d286e: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 006d2872: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2874: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 006d2876: mov ecx, edi */ r_ecx = r_edi;
    /* 006d2878: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d287a: je 0x6d2888 */ if (fZ) goto L_006d2888;
L_006d287c:; BB(0x006d287c);
    /* 006d287c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d287f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2882: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006d2884: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d2886: jne 0x6d287c */ if (!fZ) goto L_006d287c;
L_006d2888:; BB(0x006d2888);
    /* 006d2888: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d288b: jle 0x6d29b0 */ if ((fZ||fS!=fO)) goto L_006d29b0;
L_006d2891:; BB(0x006d2891);
    /* 006d2891: lea eax, [esp + eax + 2] */ r_eax = (u32)(r_esp+r_eax+0x2u);
    /* 006d2895: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2897: push dword ptr [ebx*4 + 0x9cf0bc] */ { u32 v = R32((u32)(r_ebx*4+0x9cf0bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d289e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d289f: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6d28a4u); f_008598c0();
    /* 006d28a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d28a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d28a9: jne 0x6d29ab */ if (!fZ) goto L_006d29ab;
L_006d28af:; BB(0x006d28af);
    /* 006d28af: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 006d28b7: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006d28bb: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 006d28bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c0: push 0x96c050 */ { u32 v = 0x96c050u; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c6: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x6d28cbu); f_00859b7a();
    /* 006d28cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d28ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d28d1: jne 0x6d29a6 */ if (!fZ) goto L_006d29a6;
L_006d28d7:; BB(0x006d28d7);
    /* 006d28d7: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006d28db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d28dd: jl 0x6d29ec */ if ((fS!=fO)) goto L_006d29ec;
L_006d28e3:; BB(0x006d28e3);
    /* 006d28e3: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d28e8: jg 0x6d29a1 */ if ((!fZ&&fS==fO)) goto L_006d29a1;
L_006d28ee:; BB(0x006d28ee);
    /* 006d28ee: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 006d28f2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006d28f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d28f5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d28f8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d28fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d28fd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d28ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2901: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2903: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2905: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2907: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2909: lea edi, [esi + edx + 0x3c] */ r_edi = (u32)(r_esi+r_edx+0x3cu);
    /* 006d290d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d290e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6d2913u); f_00858900();
    /* 006d2913: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006d2917: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d291a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d291d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d291f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2921: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2923: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 006d2927: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2929: mov byte ptr [esi + edx*8 + 0x4b], 0 */ W8((u32)(r_esi+r_edx*8+0x4bu), 0x0u);
    /* 006d292e: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 006d2931: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006d2935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2937: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006d293a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d293b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d293d: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006d293f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2941: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2943: mov dword ptr [esi + edi*8 + 0x94], ecx */ W32((u32)(r_esi+r_edi*8+0x94u), r_ecx);
    /* 006d294a: mov dword ptr [esi + edi*8 + 0x98], edx */ W32((u32)(r_esi+r_edi*8+0x98u), r_edx);
    /* 006d2951: call 0x82c140 */ r_esp -= 4; W32(r_esp, 0x6d2956u); f_0082c140();
    /* 006d2956: lea ebx, [esp + 0x30] */ r_ebx = (u32)(r_esp+0x30u);
    /* 006d295a: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006d295c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d295d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2960: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d2963: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2965: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2967: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2969: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2971: lea edi, [esi + edx + 0x4c] */ r_edi = (u32)(r_esi+r_edx+0x4cu);
    /* 006d2975: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2976: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6d297bu); f_00857dec();
    /* 006d297b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d297e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2981: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006d2984: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2986: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2988: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d298a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d298c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d298e: mov word ptr [esi + ebx*8 + 0x8e], dx */ W16((u32)(r_esi+r_ebx*8+0x8eu), (u16)r_edx);
    /* 006d2996: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2999: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d299c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006d299f: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29a1:; BB(0x006d29a1);
    /* 006d29a1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29a4: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29a6:; BB(0x006d29a6);
    /* 006d29a6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29a9: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29ab:; BB(0x006d29ab);
    /* 006d29ab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29ae: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29b0:; BB(0x006d29b0);
    /* 006d29b0: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
L_006d29b3:; BB(0x006d29b3);
    /* 006d29b3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d29b8: jl 0x6d284f */ if ((fS!=fO)) goto L_006d284f;
L_006d29be:; BB(0x006d29be);
    /* 006d29be: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d29c3u); f_0082c21c();
L_006d29c3:; BB(0x006d29c3);
    /* 006d29c3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d29c8: jle 0x6d29f1 */ if ((fZ||fS!=fO)) goto L_006d29f1;
L_006d29ca:; BB(0x006d29ca);
    /* 006d29ca: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006d29d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d29d3: mov dword ptr [esi + 0x6044], eax */ W32((u32)(r_esi+0x6044u), r_eax);
    /* 006d29d9: mov dword ptr [esi + 0x6050], eax */ W32((u32)(r_esi+0x6050u), r_eax);
    /* 006d29df: mov dword ptr [esi + 0x604c], eax */ W32((u32)(r_esi+0x604cu), r_eax);
    /* 006d29e5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d29e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d29e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d29ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d29eb: ret  */ FN_RET(0x006d2808); r_esp += 4; return;
L_006d29ec:; BB(0x006d29ec);
    /* 006d29ec: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29ef: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29f1:; BB(0x006d29f1);
    /* 006d29f1: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d29f3: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d29f8u); f_007930dc();
    /* 006d29f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d29f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d29fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d29fc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006d29fe: mov ecx, esi */ r_ecx = r_esi;
    /* 006d2a00: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2a03u); call_ind(t); }
    /* 006d2a03: mov dword ptr [esi + 0x20], 8 */ W32((u32)(r_esi+0x20u), 0x8u);
    /* 006d2a0a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2a0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2a0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d2a0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2a10: ret  */ FN_RET(0x006d2808); r_esp += 4; return;
L_006d2a11:; BB(0x006d2a11);
    /* 006d2a11: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 006d2a15: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a18: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2a1b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d2a1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a20: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a22: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a2a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a2c: lea eax, [esi + edx + 0x3c] */ r_eax = (u32)(r_esi+r_edx+0x3cu);
    /* 006d2a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a31: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6d2a36u); f_00858900();
    /* 006d2a36: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006d2a3a: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 006d2a3d: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006d2a40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2a42: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006d2a44: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2a46: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2a48: mov byte ptr [esi + eax*8 + 0x4b], 0 */ W8((u32)(r_esi+r_eax*8+0x4bu), 0x0u);
    /* 006d2a4d: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 006d2a50: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 006d2a53: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006d2a57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2a59: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2a5b: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 006d2a5f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2a61: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2a63: mov dword ptr [esi + ecx*8 + 0x94], edx */ W32((u32)(r_esi+r_ecx*8+0x94u), r_edx);
    /* 006d2a6a: mov dword ptr [esi + ecx*8 + 0x98], eax */ W32((u32)(r_esi+r_ecx*8+0x98u), r_eax);
    /* 006d2a71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a74: call 0x82c140 */ r_esp -= 4; W32(r_esp, 0x6d2a79u); f_0082c140();
    /* 006d2a79: lea edi, [esp + 0x30] */ r_edi = (u32)(r_esp+0x30u);
    /* 006d2a7d: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a80: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2a83: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d2a86: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a88: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a92: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2a94: lea eax, [esi + edx + 0x4c] */ r_eax = (u32)(r_esi+r_edx+0x4cu);
    /* 006d2a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2a99: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6d2a9eu); f_00857dec();
    /* 006d2a9e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2aa1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2aa4: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 006d2aa7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2aa9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006d2aab: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2aad: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2aaf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d2ab1: mov word ptr [esi + edi*8 + 0x8e], dx */ W16((u32)(r_esi+r_edi*8+0x8eu), (u16)r_edx);
    /* 006d2ab9: add dword ptr [esi + 0x38], 1 */ { u32 ad = (u32)(r_esi+0x38u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006d2abd: jmp 0x6d284f */ goto L_006d284f;
}

void f_006d2900(void)
{
    FN_ENTER(0x006d2900);
    goto L_006d2900;
L_006d284f:; BB(0x006d284f);
    /* 006d284f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d2852: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006d2856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2858: call 0x82c15c */ r_esp -= 4; W32(r_esp, 0x6d285du); f_0082c15c();
    /* 006d285d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2862: jne 0x6d29be */ if (!fZ) goto L_006d29be;
L_006d2868:; BB(0x006d2868);
    /* 006d2868: mov ebx, dword ptr [0xa9cd44] */ r_ebx = R32((u32)(0xa9cd44u));
    /* 006d286e: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 006d2872: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2874: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 006d2876: mov ecx, edi */ r_ecx = r_edi;
    /* 006d2878: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d287a: je 0x6d2888 */ if (fZ) goto L_006d2888;
L_006d287c:; BB(0x006d287c);
    /* 006d287c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d287f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d2882: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006d2884: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d2886: jne 0x6d287c */ if (!fZ) goto L_006d287c;
L_006d2888:; BB(0x006d2888);
    /* 006d2888: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d288b: jle 0x6d29b0 */ if ((fZ||fS!=fO)) goto L_006d29b0;
L_006d2891:; BB(0x006d2891);
    /* 006d2891: lea eax, [esp + eax + 2] */ r_eax = (u32)(r_esp+r_eax+0x2u);
    /* 006d2895: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2897: push dword ptr [ebx*4 + 0x9cf0bc] */ { u32 v = R32((u32)(r_ebx*4+0x9cf0bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d289e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d289f: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6d28a4u); f_008598c0();
    /* 006d28a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d28a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d28a9: jne 0x6d29ab */ if (!fZ) goto L_006d29ab;
L_006d28af:; BB(0x006d28af);
    /* 006d28af: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 006d28b7: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006d28bb: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 006d28bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c0: push 0x96c050 */ { u32 v = 0x96c050u; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d28c6: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x6d28cbu); f_00859b7a();
    /* 006d28cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d28ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d28d1: jne 0x6d29a6 */ if (!fZ) goto L_006d29a6;
L_006d28d7:; BB(0x006d28d7);
    /* 006d28d7: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006d28db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d28dd: jl 0x6d29ec */ if ((fS!=fO)) goto L_006d29ec;
L_006d28e3:; BB(0x006d28e3);
    /* 006d28e3: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d28e8: jg 0x6d29a1 */ if ((!fZ&&fS==fO)) goto L_006d29a1;
L_006d28ee:; BB(0x006d28ee);
    /* 006d28ee: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 006d28f2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006d28f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d28f5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d28f8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d28fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d28fd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d28ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006d2900:; BB(0x006d2900);
    /* 006d2900: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 006d2901: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2902: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 006d2903: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2904: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 006d2905: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2906: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 006d2907: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2908: ror byte ptr [ebp + 0x573c167c], cl */ { u32 ad = (u32)(r_ebp+0x573c167cu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 006d2909: lea edi, [esi + edx + 0x3c] */ r_edi = (u32)(r_esi+r_edx+0x3cu);
    /* 006d290d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d290e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6d2913u); f_00858900();
    /* 006d2913: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006d2917: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d291a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d291d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d291f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2921: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2923: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 006d2927: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2929: mov byte ptr [esi + edx*8 + 0x4b], 0 */ W8((u32)(r_esi+r_edx*8+0x4bu), 0x0u);
    /* 006d292e: mov ebx, dword ptr [esi + 0x38] */ r_ebx = R32((u32)(r_esi+0x38u));
    /* 006d2931: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006d2935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2937: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006d293a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d293b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d293d: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006d293f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2941: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2943: mov dword ptr [esi + edi*8 + 0x94], ecx */ W32((u32)(r_esi+r_edi*8+0x94u), r_ecx);
    /* 006d294a: mov dword ptr [esi + edi*8 + 0x98], edx */ W32((u32)(r_esi+r_edi*8+0x98u), r_edx);
    /* 006d2951: call 0x82c140 */ r_esp -= 4; W32(r_esp, 0x6d2956u); f_0082c140();
    /* 006d2956: lea ebx, [esp + 0x30] */ r_ebx = (u32)(r_esp+0x30u);
    /* 006d295a: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006d295c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d295d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2960: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d2963: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2965: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d2967: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2969: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d296f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2971: lea edi, [esi + edx + 0x4c] */ r_edi = (u32)(r_esi+r_edx+0x4cu);
    /* 006d2975: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2976: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6d297bu); f_00857dec();
    /* 006d297b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d297e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2981: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006d2984: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2986: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2988: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d298a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d298c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d298e: mov word ptr [esi + ebx*8 + 0x8e], dx */ W16((u32)(r_esi+r_ebx*8+0x8eu), (u16)r_edx);
    /* 006d2996: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d2999: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d299c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006d299f: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29a1:; BB(0x006d29a1);
    /* 006d29a1: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29a4: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29a6:; BB(0x006d29a6);
    /* 006d29a6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29a9: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29ab:; BB(0x006d29ab);
    /* 006d29ab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29ae: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29b0:; BB(0x006d29b0);
    /* 006d29b0: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
L_006d29b3:; BB(0x006d29b3);
    /* 006d29b3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d29b8: jl 0x6d284f */ if ((fS!=fO)) goto L_006d284f;
L_006d29be:; BB(0x006d29be);
    /* 006d29be: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6d29c3u); f_0082c21c();
    /* 006d29c3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d29c8: jle 0x6d29f1 */ if ((fZ||fS!=fO)) goto L_006d29f1;
L_006d29ca:; BB(0x006d29ca);
    /* 006d29ca: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006d29d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d29d3: mov dword ptr [esi + 0x6044], eax */ W32((u32)(r_esi+0x6044u), r_eax);
    /* 006d29d9: mov dword ptr [esi + 0x6050], eax */ W32((u32)(r_esi+0x6050u), r_eax);
    /* 006d29df: mov dword ptr [esi + 0x604c], eax */ W32((u32)(r_esi+0x604cu), r_eax);
    /* 006d29e5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d29e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d29e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d29ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d29eb: ret  */ FN_RET(0x006d2900); r_esp += 4; return;
L_006d29ec:; BB(0x006d29ec);
    /* 006d29ec: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006d29ef: jmp 0x6d29b3 */ goto L_006d29b3;
L_006d29f1:; BB(0x006d29f1);
    /* 006d29f1: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006d29f3: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6d29f8u); f_007930dc();
    /* 006d29f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d29f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d29fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d29fc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006d29fe: mov ecx, esi */ r_ecx = r_esi;
    /* 006d2a00: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6d2a03u); call_ind(t); }
    /* 006d2a03: mov dword ptr [esi + 0x20], 8 */ W32((u32)(r_esi+0x20u), 0x8u);
    /* 006d2a0a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2a0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2a0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d2a0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2a10: ret  */ FN_RET(0x006d2900); r_esp += 4; return;
}

void f_006d2ac4(void) /* sub_6D2AC4 */
{
    FN_ENTER(0x006d2ac4);
    /* 006d2ac4: mov eax, dword ptr [0xa96194] */ r_eax = R32((u32)(0xa96194u));
    /* 006d2ac9: ret  */ FN_RET(0x006d2ac4); r_esp += 4; return;
}

void f_006d2acc(void) /* sub_6D2ACC */
{
    FN_ENTER(0x006d2acc);
    /* 006d2acc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d2acd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d2acf: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006d2ad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2ad4: je 0x6d2ad8 */ if (fZ) goto L_006d2ad8;
L_006d2ad6:; BB(0x006d2ad6);
    /* 006d2ad6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d2ad8u); call_ind(t); }
L_006d2ad8:; BB(0x006d2ad8);
    /* 006d2ad8: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x6d2addu); f_005b7a28();
    /* 006d2add: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2adf: je 0x6d2af0 */ if (fZ) goto L_006d2af0;
L_006d2ae1:; BB(0x006d2ae1);
    /* 006d2ae1: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006d2ae5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2aea: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006d2aee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d2aef: ret  */ FN_RET(0x006d2acc); r_esp += 4; return;
L_006d2af0:; BB(0x006d2af0);
    /* 006d2af0: push 0x96bffc */ { u32 v = 0x96bffcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2af5: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x6d2afau); f_005b9008();
    /* 006d2afa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2afb: jmp 0x6d2ae1 */ goto L_006d2ae1;
}

void f_006d2b00(void) /* sub_6D2B00 */
{
    FN_ENTER(0x006d2b00);
    /* 006d2b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b01: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d2b04: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d2b06: mov eax, dword ptr [ebp + 0xe74c] */ r_eax = R32((u32)(r_ebp+0xe74cu));
    /* 006d2b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2b0e: je 0x6d2b8a */ if (fZ) goto L_006d2b8a;
L_006d2b10:; BB(0x006d2b10);
    /* 006d2b10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2b12: je 0x6d2b22 */ if (fZ) goto L_006d2b22;
L_006d2b14:; BB(0x006d2b14);
    /* 006d2b14: mov eax, dword ptr [ebp + 0xe73c] */ r_eax = R32((u32)(r_ebp+0xe73cu));
    /* 006d2b1a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2b1d: je 0x6d2b27 */ if (fZ) goto L_006d2b27;
L_006d2b1f:; BB(0x006d2b1f);
    /* 006d2b1f: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_006d2b22:; BB(0x006d2b22);
    /* 006d2b22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2b25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d2b26: ret  */ FN_RET(0x006d2b00); r_esp += 4; return;
L_006d2b27:; BB(0x006d2b27);
    /* 006d2b27: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b29: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d2b2eu); f_0073ec50();
    /* 006d2b2e: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d2b31: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d2b35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b37: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d2b3cu); f_00735884();
    /* 006d2b3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2b3f: mov dword ptr [ebp + 0xe744], eax */ W32((u32)(r_ebp+0xe744u), r_eax);
    /* 006d2b45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2b47: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d2b4cu); f_006dc8d8();
    /* 006d2b4c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006d2b50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2b52: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d2b57u); f_006dc8d8();
    /* 006d2b57: mov ecx, dword ptr [ebp + 0xe744] */ r_ecx = R32((u32)(r_ebp+0xe744u));
    /* 006d2b5d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2b60: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006d2b64: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d2b67: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d2b6b: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d2b70u); f_0070f5a4();
    /* 006d2b70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b72: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b74: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d2b77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d2b79: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6d2b7cu); call_ind(t); }
    /* 006d2b7c: mov eax, dword ptr [ebp + 0xe73c] */ r_eax = R32((u32)(r_ebp+0xe73cu));
    /* 006d2b82: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 006d2b85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2b88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d2b89: ret  */ FN_RET(0x006d2b00); r_esp += 4; return;
L_006d2b8a:; BB(0x006d2b8a);
    /* 006d2b8a: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006d2b91: mov dword ptr [esp + 4], 0x43520000 */ W32((u32)(r_esp+0x4u), 0x43520000u);
    /* 006d2b99: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2b9b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d2ba0u); f_0073ec50();
    /* 006d2ba0: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d2ba4: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d2ba7: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d2bab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bb0: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6d2bb5u); f_0073aa40();
    /* 006d2bb5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2bb8: mov edx, dword ptr [0xa961bc] */ r_edx = R32((u32)(0xa961bcu));
    /* 006d2bbe: mov dword ptr [ebp + 0xe74c], eax */ W32((u32)(r_ebp+0xe74cu), r_eax);
    /* 006d2bc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bc6: add edx, 0x158 */ {  u32 a = r_edx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d2bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bcd: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2bcf: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d2bd4u); f_0073ae38();
    /* 006d2bd4: mov ecx, dword ptr [ebp + 0xe74c] */ r_ecx = R32((u32)(r_ebp+0xe74cu));
    /* 006d2bda: push 0xc64b2000 */ { u32 v = 0xc64b2000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bdf: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6d2be4u); f_00712624();
    /* 006d2be4: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 006d2be9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2bec: jge 0x6d2bf9 */ if ((fS==fO)) goto L_006d2bf9;
L_006d2bee:; BB(0x006d2bee);
    /* 006d2bee: mov eax, dword ptr [ebp + 0xe74c] */ r_eax = R32((u32)(r_ebp+0xe74cu));
    /* 006d2bf4: jmp 0x6d2b10 */ goto L_006d2b10;
L_006d2bf9:; BB(0x006d2bf9);
    /* 006d2bf9: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2bfe: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c03: mov ecx, dword ptr [ebp + 0xe74c] */ r_ecx = R32((u32)(r_ebp+0xe74cu));
    /* 006d2c09: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d2c0eu); f_0070f5a4();
    /* 006d2c0e: mov eax, dword ptr [ebp + 0xe74c] */ r_eax = R32((u32)(r_ebp+0xe74cu));
    /* 006d2c14: jmp 0x6d2b10 */ goto L_006d2b10;
}

void f_006d2c1c(void) /* sub_6D2C1C */
{
    FN_ENTER(0x006d2c1c);
    /* 006d2c1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c1f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d2c22: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d2c24: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006d2c26: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d2c28: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d2c2bu); call_ind(t); }
    /* 006d2c2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2c2d: je 0x6d2d09 */ if (fZ) goto L_006d2d09;
L_006d2c33:; BB(0x006d2c33);
    /* 006d2c33: mov ecx, dword ptr [ebx + 0xe740] */ r_ecx = R32((u32)(r_ebx+0xe740u));
    /* 006d2c39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2c3b: je 0x6d2c4a */ if (fZ) goto L_006d2c4a;
L_006d2c3d:; BB(0x006d2c3d);
    /* 006d2c3d: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d2c42u); f_00737d1c();
    /* 006d2c42: mov eax, dword ptr [ebx + 0xe740] */ r_eax = R32((u32)(r_ebx+0xe740u));
    /* 006d2c48: jmp 0x6d2c8f */ goto L_006d2c8f;
L_006d2c4a:; BB(0x006d2c4a);
    /* 006d2c4a: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006d2c4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2c51: jne 0x6d2c72 */ if (!fZ) goto L_006d2c72;
L_006d2c53:; BB(0x006d2c53);
    /* 006d2c53: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006d2c56: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006d2c5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c5b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c5d: push 0x96bfc4 */ { u32 v = 0x96bfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c62: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d2c67u); f_0073ff34();
    /* 006d2c67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2c6a: mov dword ptr [ebx + 0xe740], eax */ W32((u32)(r_ebx+0xe740u), r_eax);
    /* 006d2c70: jmp 0x6d2c8f */ goto L_006d2c8f;
L_006d2c72:; BB(0x006d2c72);
    /* 006d2c72: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 006d2c75: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006d2c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c7a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c7c: push 0x96bfd4 */ { u32 v = 0x96bfd4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2c81: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d2c86u); f_0073ff34();
    /* 006d2c86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2c89: mov dword ptr [ebx + 0xe740], eax */ W32((u32)(r_ebx+0xe740u), r_eax);
L_006d2c8f:; BB(0x006d2c8f);
    /* 006d2c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2c91: je 0x6d2cff */ if (fZ) goto L_006d2cff;
L_006d2c93:; BB(0x006d2c93);
    /* 006d2c93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2c95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d2c97: mov esi, edx */ r_esi = r_edx;
    /* 006d2c99: mov edi, ecx */ r_edi = r_ecx;
L_006d2c9b:; BB(0x006d2c9b);
    /* 006d2c9b: cmp edi, dword ptr [ebx + 0xe734] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xe734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2ca1: jge 0x6d2cf1 */ if ((fS==fO)) goto L_006d2cf1;
L_006d2ca3:; BB(0x006d2ca3);
    /* 006d2ca3: lea ecx, [ebx + esi] */ r_ecx = (u32)(r_ebx+r_esi);
    /* 006d2ca6: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 006d2cac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2cae: jne 0x6d2cc0 */ if (!fZ) goto L_006d2cc0;
L_006d2cb0:; BB(0x006d2cb0);
    /* 006d2cb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cb1: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2cb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cb5: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2cb7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cb9: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d2cbeu); f_00740084();
    /* 006d2cbe: jmp 0x6d2ce0 */ goto L_006d2ce0;
L_006d2cc0:; BB(0x006d2cc0);
    /* 006d2cc0: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d2cc3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2cc6: jne 0x6d2cd5 */ if (!fZ) goto L_006d2cd5;
L_006d2cc8:; BB(0x006d2cc8);
    /* 006d2cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cca: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2ccc: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cce: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d2cd3u); f_00740084();
    /* 006d2cd3: jmp 0x6d2ce0 */ goto L_006d2ce0;
L_006d2cd5:; BB(0x006d2cd5);
    /* 006d2cd5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cd7: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2cd9: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2cdb: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x6d2ce0u); f_00740084();
L_006d2ce0:; BB(0x006d2ce0);
    /* 006d2ce0: mov eax, dword ptr [ebx + 0xe740] */ r_eax = R32((u32)(r_ebx+0xe740u));
    /* 006d2ce6: add esi, 0x39c */ {  u32 a = r_esi; u32 b = 0x39cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d2cec: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d2cef: jmp 0x6d2c9b */ goto L_006d2c9b;
L_006d2cf1:; BB(0x006d2cf1);
    /* 006d2cf1: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2cf3: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d2cf8u); f_00737cdc();
    /* 006d2cf8: mov dword ptr [ebx + 0x20], 6 */ W32((u32)(r_ebx+0x20u), 0x6u);
L_006d2cff:; BB(0x006d2cff);
    /* 006d2cff: mov eax, dword ptr [ebx + 0xe748] */ r_eax = R32((u32)(r_ebx+0xe748u));
    /* 006d2d05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2d07: je 0x6d2d10 */ if (fZ) goto L_006d2d10;
L_006d2d09:; BB(0x006d2d09);
    /* 006d2d09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2d0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2d0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d2d0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2d0f: ret  */ FN_RET(0x006d2c1c); r_esp += 4; return;
L_006d2d10:; BB(0x006d2d10);
    /* 006d2d10: mov dword ptr [esp], 0x43640000 */ W32((u32)(r_esp), 0x43640000u);
    /* 006d2d17: mov dword ptr [esp + 4], 0x43380000 */ W32((u32)(r_esp+0x4u), 0x43380000u);
    /* 006d2d1f: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d21: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d2d26u); f_0073ec50();
    /* 006d2d26: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006d2d2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d2e: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6d2d33u); f_0073a8dc();
    /* 006d2d33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2d36: mov dword ptr [ebx + 0xe748], eax */ W32((u32)(r_ebx+0xe748u), r_eax);
    /* 006d2d3c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d41: lea edx, [ebx + 0x84] */ r_edx = (u32)(r_ebx+0x84u);
    /* 006d2d47: mov ecx, eax */ r_ecx = r_eax;
    /* 006d2d49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d4a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6d2d4fu); f_0073ae38();
    /* 006d2d4f: mov dword ptr [ebx + 0xe738], 0 */ W32((u32)(r_ebx+0xe738u), 0x0u);
    /* 006d2d59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2d5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2d5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d2d5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2d5f: ret  */ FN_RET(0x006d2c1c); r_esp += 4; return;
}

void f_006d2d60(void) /* sub_6D2D60 */
{
    FN_ENTER(0x006d2d60);
    /* 006d2d60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d61: mov edi, ecx */ r_edi = r_ecx;
    /* 006d2d63: lea eax, [edi + 0x34] */ r_eax = (u32)(r_edi+0x34u);
    /* 006d2d66: push 0xe700 */ { u32 v = 0xe700u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d2d6e: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6d2d73u); f_0086b5cc();
    /* 006d2d73: mov dword ptr [edi + 0xe764], 4 */ W32((u32)(r_edi+0xe764u), 0x4u);
    /* 006d2d7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2d7f: mov edx, 1 */ r_edx = 0x1u;
    /* 006d2d84: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006d2d87: mov dword ptr [edi + 0xe734], eax */ W32((u32)(r_edi+0xe734u), r_eax);
    /* 006d2d8d: mov dword ptr [edi + 0xe768], edx */ W32((u32)(r_edi+0xe768u), r_edx);
    /* 006d2d93: mov dword ptr [edi + 0xe738], eax */ W32((u32)(r_edi+0xe738u), r_eax);
    /* 006d2d99: mov dword ptr [edi + 0xe778], eax */ W32((u32)(r_edi+0xe778u), r_eax);
    /* 006d2d9f: mov dword ptr [edi + 0xe77c], eax */ W32((u32)(r_edi+0xe77cu), r_eax);
    /* 006d2da5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2da8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d2da9: ret  */ FN_RET(0x006d2d60); r_esp += 4; return;
}

void f_006d2dac(void) /* sub_6D2DAC */
{
    FN_ENTER(0x006d2dac);
    /* 006d2dac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006d2db0: mov dword ptr [ecx + 0xe780], eax */ W32((u32)(r_ecx+0xe780u), r_eax);
    /* 006d2db6: mov dword ptr [ecx + 0x20], 0x14 */ W32((u32)(r_ecx+0x20u), 0x14u);
    /* 006d2dbd: ret 4 */ FN_RET(0x006d2dac); r_esp += 8; return;
}

void f_006d2dc0(void) /* sub_6D2DC0 */
{
    FN_ENTER(0x006d2dc0);
    /* 006d2dc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2dc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2dc3: mov ebx, eax */ r_ebx = r_eax;
L_006d2dc5:; BB(0x006d2dc5);
    /* 006d2dc5: push dword ptr [ebx + 0x96c064] */ { u32 v = R32((u32)(r_ebx+0x96c064u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2dcb: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2dd0u); f_006bb254();
    /* 006d2dd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2dd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2dd3: je 0x6d2de7 */ if (fZ) goto L_006d2de7;
L_006d2dd5:; BB(0x006d2dd5);
    /* 006d2dd5: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2dd8: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d2dde: jl 0x6d2dc5 */ if ((fS!=fO)) goto L_006d2dc5;
L_006d2de0:; BB(0x006d2de0);
    /* 006d2de0: mov eax, 1 */ r_eax = 0x1u;
    /* 006d2de5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2de6: ret  */ FN_RET(0x006d2dc0); r_esp += 4; return;
L_006d2de7:; BB(0x006d2de7);
    /* 006d2de7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d2de9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2dea: ret  */ FN_RET(0x006d2dc0); r_esp += 4; return;
}

void f_006d2dec(void) /* sub_6D2DEC */
{
    FN_ENTER(0x006d2dec);
    /* 006d2dec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d2def: push 0x3fe */ { u32 v = 0x3feu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2df4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2df9u); f_006bb254();
    /* 006d2df9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2dfa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2dfd: je 0x6d2e3b */ if (fZ) goto L_006d2e3b;
L_006d2dff:; BB(0x006d2dff);
    /* 006d2dff: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006d2e03: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006d2e06: mov eax, 1 */ r_eax = 0x1u;
    /* 006d2e0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d2e0d: mov ebx, eax */ r_ebx = r_eax;
    /* 006d2e0f: mov esi, edx */ r_esi = r_edx;
L_006d2e11:; BB(0x006d2e11);
    /* 006d2e11: push dword ptr [esi + 0x96c064] */ { u32 v = R32((u32)(r_esi+0x96c064u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2e17: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2e1cu); f_006bb254();
    /* 006d2e1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2e1f: jne 0x6d2e23 */ if (!fZ) goto L_006d2e23;
L_006d2e21:; BB(0x006d2e21);
    /* 006d2e21: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006d2e23:; BB(0x006d2e23);
    /* 006d2e23: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d2e26: cmp esi, 0xc8 */ {  u32 a = r_esi; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2e2c: jl 0x6d2e11 */ if ((fS!=fO)) goto L_006d2e11;
L_006d2e2e:; BB(0x006d2e2e);
    /* 006d2e2e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006d2e31: mov eax, ebx */ r_eax = r_ebx;
    /* 006d2e33: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006d2e37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2e3a: ret  */ FN_RET(0x006d2dec); r_esp += 4; return;
L_006d2e3b:; BB(0x006d2e3b);
    /* 006d2e3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2e3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d2e40: ret  */ FN_RET(0x006d2dec); r_esp += 4; return;
}

void f_006d2e44(void) /* sub_6D2E44 */
{
    FN_ENTER(0x006d2e44);
    /* 006d2e44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d2e47: mov ebx, eax */ r_ebx = r_eax;
L_006d2e49:; BB(0x006d2e49);
    /* 006d2e49: push dword ptr [ebx + 0x96c060] */ { u32 v = R32((u32)(r_ebx+0x96c060u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2e4f: call 0x6bb1a8 */ r_esp -= 4; W32(r_esp, 0x6d2e54u); f_006bb1a8();
    /* 006d2e54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2e55: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d2e58: cmp ebx, 0xc8 */ {  u32 a = r_ebx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d2e5e: jl 0x6d2e49 */ if ((fS!=fO)) goto L_006d2e49;
L_006d2e60:; BB(0x006d2e60);
    /* 006d2e60: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d2e64: call 0x6d2e6c */ r_esp -= 4; W32(r_esp, 0x6d2e69u); f_006d2e6c();
    /* 006d2e69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2e6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d2e6b: ret  */ FN_RET(0x006d2e44); r_esp += 4; return;
}

void f_006d2e6c(void) /* sub_6D2E6C */
{
    FN_ENTER(0x006d2e6c);
    /* 006d2e6c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e6e: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2e73u); f_006bb100();
    /* 006d2e73: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e75: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2e7au); f_006bb100();
    /* 006d2e7a: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e7c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2e81u); f_006bb100();
    /* 006d2e81: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e83: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2e88u); f_006bb254();
    /* 006d2e88: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d2e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2e8d: je 0x6d2ec6 */ if (fZ) goto L_006d2ec6;
L_006d2e8f:; BB(0x006d2e8f);
    /* 006d2e8f: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e91: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2e96u); f_006bb254();
    /* 006d2e96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2e97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2e99: je 0x6d2ec6 */ if (fZ) goto L_006d2ec6;
L_006d2e9b:; BB(0x006d2e9b);
    /* 006d2e9b: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2e9d: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2ea2u); f_006bb254();
    /* 006d2ea2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2ea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2ea5: je 0x6d2ec6 */ if (fZ) goto L_006d2ec6;
L_006d2ea7:; BB(0x006d2ea7);
    /* 006d2ea7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ea9: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2eaeu); f_006bb100();
    /* 006d2eae: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2eb0: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2eb5u); f_006bb100();
    /* 006d2eb5: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2eb7: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2ebcu); f_006bb100();
    /* 006d2ebc: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ebe: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2ec3u); f_006bb100();
    /* 006d2ec3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d2ec6:; BB(0x006d2ec6);
    /* 006d2ec6: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ec8: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2ecdu); f_006bb254();
    /* 006d2ecd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2ece: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2ed0: je 0x6d2f1f */ if (fZ) goto L_006d2f1f;
L_006d2ed2:; BB(0x006d2ed2);
    /* 006d2ed2: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ed4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2ed9u); f_006bb254();
    /* 006d2ed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2eda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2edc: je 0x6d2f1f */ if (fZ) goto L_006d2f1f;
L_006d2ede:; BB(0x006d2ede);
    /* 006d2ede: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ee0: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2ee5u); f_006bb254();
    /* 006d2ee5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2ee6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2ee8: je 0x6d2f1f */ if (fZ) goto L_006d2f1f;
L_006d2eea:; BB(0x006d2eea);
    /* 006d2eea: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2eec: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2ef1u); f_006bb254();
    /* 006d2ef1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2ef4: je 0x6d2f1f */ if (fZ) goto L_006d2f1f;
L_006d2ef6:; BB(0x006d2ef6);
    /* 006d2ef6: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ef8: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2efdu); f_006bb100();
    /* 006d2efd: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2eff: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f04u); f_006bb100();
    /* 006d2f04: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f06: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f0bu); f_006bb100();
    /* 006d2f0b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f0d: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f12u); f_006bb100();
    /* 006d2f12: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f17: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f1cu); f_006bb100();
    /* 006d2f1c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d2f1f:; BB(0x006d2f1f);
    /* 006d2f1f: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f21: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f26u); f_006bb254();
    /* 006d2f26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f29: je 0x6d2f66 */ if (fZ) goto L_006d2f66;
L_006d2f2b:; BB(0x006d2f2b);
    /* 006d2f2b: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f2d: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f32u); f_006bb254();
    /* 006d2f32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f35: je 0x6d2f66 */ if (fZ) goto L_006d2f66;
L_006d2f37:; BB(0x006d2f37);
    /* 006d2f37: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f39: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f3eu); f_006bb254();
    /* 006d2f3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f41: je 0x6d2f66 */ if (fZ) goto L_006d2f66;
L_006d2f43:; BB(0x006d2f43);
    /* 006d2f43: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f48: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f4du); f_006bb254();
    /* 006d2f4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f50: je 0x6d2f66 */ if (fZ) goto L_006d2f66;
L_006d2f52:; BB(0x006d2f52);
    /* 006d2f52: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f54: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f59u); f_006bb100();
    /* 006d2f59: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f5e: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2f63u); f_006bb100();
    /* 006d2f63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d2f66:; BB(0x006d2f66);
    /* 006d2f66: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f68: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f6du); f_006bb254();
    /* 006d2f6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f70: je 0x6d2fb7 */ if (fZ) goto L_006d2fb7;
L_006d2f72:; BB(0x006d2f72);
    /* 006d2f72: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f74: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f79u); f_006bb254();
    /* 006d2f79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f7c: je 0x6d2fb7 */ if (fZ) goto L_006d2fb7;
L_006d2f7e:; BB(0x006d2f7e);
    /* 006d2f7e: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f80: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f85u); f_006bb254();
    /* 006d2f85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f88: je 0x6d2fb7 */ if (fZ) goto L_006d2fb7;
L_006d2f8a:; BB(0x006d2f8a);
    /* 006d2f8a: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f8c: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2f91u); f_006bb254();
    /* 006d2f91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2f94: je 0x6d2fb7 */ if (fZ) goto L_006d2fb7;
L_006d2f96:; BB(0x006d2f96);
    /* 006d2f96: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2f9b: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2fa0u); f_006bb100();
    /* 006d2fa0: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fa5: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2faau); f_006bb100();
    /* 006d2faa: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 006d2faf: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2fb4u); f_006bb100();
    /* 006d2fb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d2fb7:; BB(0x006d2fb7);
    /* 006d2fb7: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fb9: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2fbeu); f_006bb254();
    /* 006d2fbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2fbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2fc1: je 0x6d2ffe */ if (fZ) goto L_006d2ffe;
L_006d2fc3:; BB(0x006d2fc3);
    /* 006d2fc3: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fc5: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2fcau); f_006bb254();
    /* 006d2fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2fcd: je 0x6d2ffe */ if (fZ) goto L_006d2ffe;
L_006d2fcf:; BB(0x006d2fcf);
    /* 006d2fcf: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fd1: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2fd6u); f_006bb254();
    /* 006d2fd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2fd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2fd9: je 0x6d2ffe */ if (fZ) goto L_006d2ffe;
L_006d2fdb:; BB(0x006d2fdb);
    /* 006d2fdb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fdd: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d2fe2u); f_006bb254();
    /* 006d2fe2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d2fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d2fe5: je 0x6d2ffe */ if (fZ) goto L_006d2ffe;
L_006d2fe7:; BB(0x006d2fe7);
    /* 006d2fe7: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2fec: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2ff1u); f_006bb100();
    /* 006d2ff1: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006d2ff6: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d2ffbu); f_006bb100();
    /* 006d2ffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006d2ffe:; BB(0x006d2ffe);
    /* 006d2ffe: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3000: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3005u); f_006bb254();
    /* 006d3005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3008: je 0x6d3012 */ if (fZ) goto L_006d3012;
L_006d300a:; BB(0x006d300a);
    /* 006d300a: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 006d300c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d3011u); f_006bb100();
    /* 006d3011: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d3012:; BB(0x006d3012);
    /* 006d3012: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3014: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3019u); f_006bb254();
    /* 006d3019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d301a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d301c: je 0x6d3026 */ if (fZ) goto L_006d3026;
L_006d301e:; BB(0x006d301e);
    /* 006d301e: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3020: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d3025u); f_006bb100();
    /* 006d3025: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d3026:; BB(0x006d3026);
    /* 006d3026: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006d302b: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3030u); f_006bb254();
    /* 006d3030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3033: je 0x6d3058 */ if (fZ) goto L_006d3058;
L_006d3035:; BB(0x006d3035);
    /* 006d3035: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3037: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d303cu); f_006bb254();
    /* 006d303c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d303d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d303f: je 0x6d3058 */ if (fZ) goto L_006d3058;
L_006d3041:; BB(0x006d3041);
    /* 006d3041: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3043: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3048u); f_006bb254();
    /* 006d3048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d304b: je 0x6d3058 */ if (fZ) goto L_006d3058;
L_006d304d:; BB(0x006d304d);
    /* 006d304d: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d3052: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d3057u); f_006bb100();
    /* 006d3057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d3058:; BB(0x006d3058);
    /* 006d3058: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 006d305a: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d305fu); f_006bb254();
    /* 006d305f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d3062: je 0x6d307b */ if (fZ) goto L_006d307b;
L_006d3064:; BB(0x006d3064);
    /* 006d3064: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3066: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d306bu); f_006bb254();
    /* 006d306b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d306c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d306e: je 0x6d307b */ if (fZ) goto L_006d307b;
L_006d3070:; BB(0x006d3070);
    /* 006d3070: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006d3075: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d307au); f_006bb100();
    /* 006d307a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d307b:; BB(0x006d307b);
    /* 006d307b: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006d3080: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3085u); f_006bb254();
    /* 006d3085: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3088: je 0x6d30bc */ if (fZ) goto L_006d30bc;
L_006d308a:; BB(0x006d308a);
    /* 006d308a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006d308c: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d3091u); f_006bb254();
    /* 006d3091: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d3092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d3094: je 0x6d30bc */ if (fZ) goto L_006d30bc;
L_006d3096:; BB(0x006d3096);
    /* 006d3096: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006d309b: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6d30a0u); f_006bb254();
    /* 006d30a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d30a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d30a3: je 0x6d30bc */ if (fZ) goto L_006d30bc;
L_006d30a5:; BB(0x006d30a5);
    /* 006d30a5: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 006d30aa: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d30afu); f_006bb100();
    /* 006d30af: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006d30b4: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6d30b9u); f_006bb100();
    /* 006d30b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006d30bc:; BB(0x006d30bc);
    /* 006d30bc: ret  */ FN_RET(0x006d2e6c); r_esp += 4; return;
}

