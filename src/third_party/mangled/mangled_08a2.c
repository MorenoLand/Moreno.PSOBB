#include "protos.h"

void f_008a2106(void) /* ?default_decompress_parms@D3DX@@YAXPAUjpeg_decompress_struct@1@@Z */
{
    FN_ENTER(0x008a2106);
    /* 008a2106: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008a2109: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a210a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a210b: je 0x8a2229 */ if (fZ) goto L_008a2229;
L_008a2111:; BB(0x008a2111);
    /* 008a2111: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2113: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a2114: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a2116: je 0x8a2175 */ if (fZ) goto L_008a2175;
L_008a2118:; BB(0x008a2118);
    /* 008a2118: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a2119: je 0x8a2128 */ if (fZ) goto L_008a2128;
L_008a211b:; BB(0x008a211b);
    /* 008a211b: and dword ptr [esi + 0x24], 0 */ { u32 ad = (u32)(r_esi+0x24u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a211f: and dword ptr [esi + 0x28], 0 */ { u32 ad = (u32)(r_esi+0x28u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2123: jmp 0x8a2232 */ goto L_008a2232;
L_008a2128:; BB(0x008a2128);
    /* 008a2128: cmp byte ptr [esi + 0x106], 0 */ {  u32 a = R8((u32)(r_esi+0x106u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a212f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2131: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2132: je 0x8a216a */ if (fZ) goto L_008a216a;
L_008a2134:; BB(0x008a2134);
    /* 008a2134: lea eax, [esi + 0x107] */ r_eax = (u32)(r_esi+0x107u);
    /* 008a213a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a213d: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a2140: je 0x8a216a */ if (fZ) goto L_008a216a;
L_008a2142:; BB(0x008a2142);
    /* 008a2142: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a2144: je 0x8a2161 */ if (fZ) goto L_008a2161;
L_008a2146:; BB(0x008a2146);
    /* 008a2146: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2148: mov dword ptr [ecx + 0x14], 0x6e */ W32((u32)(r_ecx+0x14u), 0x6eu);
    /* 008a214f: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008a2152: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a2154: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a2157: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2159: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a215b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a215c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a215fu); call_ind(t); }
    /* 008a215f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2161:; BB(0x008a2161);
    /* 008a2161: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
    /* 008a2168: jmp 0x8a216d */ goto L_008a216d;
L_008a216a:; BB(0x008a216a);
    /* 008a216a: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
L_008a216d:; BB(0x008a216d);
    /* 008a216d: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
    /* 008a2170: jmp 0x8a2232 */ goto L_008a2232;
L_008a2175:; BB(0x008a2175);
    /* 008a2175: cmp byte ptr [esi + 0x100], 0 */ {  u32 a = R8((u32)(r_esi+0x100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a217c: jne 0x8a21b3 */ if (!fZ) goto L_008a21b3;
L_008a217e:; BB(0x008a217e);
    /* 008a217e: cmp byte ptr [esi + 0x106], 0 */ {  u32 a = R8((u32)(r_esi+0x106u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a2185: je 0x8a21c1 */ if (fZ) goto L_008a21c1;
L_008a2187:; BB(0x008a2187);
    /* 008a2187: lea eax, [esi + 0x107] */ r_eax = (u32)(r_esi+0x107u);
    /* 008a218d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a2190: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a2193: je 0x8a21bc */ if (fZ) goto L_008a21bc;
L_008a2195:; BB(0x008a2195);
    /* 008a2195: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a2196: je 0x8a21b3 */ if (fZ) goto L_008a21b3;
L_008a2198:; BB(0x008a2198);
    /* 008a2198: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a219a: mov dword ptr [ecx + 0x14], 0x6e */ W32((u32)(r_ecx+0x14u), 0x6eu);
    /* 008a21a1: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008a21a4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a21a6: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a21a9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a21ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a21ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a21ae: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a21b1u); call_ind(t); }
    /* 008a21b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a21b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a21b3:; BB(0x008a21b3);
    /* 008a21b3: mov dword ptr [esi + 0x24], 3 */ W32((u32)(r_esi+0x24u), 0x3u);
    /* 008a21ba: jmp 0x8a2208 */ goto L_008a2208;
L_008a21bc:; BB(0x008a21bc);
    /* 008a21bc: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 008a21bf: jmp 0x8a2208 */ goto L_008a2208;
L_008a21c1:; BB(0x008a21c1);
    /* 008a21c1: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008a21c7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a21c9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a21cc: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 008a21cf: mov edi, dword ptr [eax + 0xa8] */ r_edi = R32((u32)(r_eax+0xa8u));
    /* 008a21d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a21d6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a21d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a21d9: jne 0x8a2211 */ if (!fZ) goto L_008a2211;
L_008a21db:; BB(0x008a21db);
    /* 008a21db: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a21de: jne 0x8a21e4 */ if (!fZ) goto L_008a21e4;
L_008a21e0:; BB(0x008a21e0);
    /* 008a21e0: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a21e2: je 0x8a2204 */ if (fZ) goto L_008a2204;
L_008a21e4:; BB(0x008a21e4);
    /* 008a21e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a21e6: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a21e9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a21eb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 008a21ee: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 008a21f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a21f3: mov dword ptr [eax + 0x14], 0x6b */ W32((u32)(r_eax+0x14u), 0x6bu);
    /* 008a21fa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a21fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a21fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a21ff: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a2202u); call_ind(t); }
    /* 008a2202: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2204:; BB(0x008a2204);
    /* 008a2204: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
L_008a2207:; BB(0x008a2207);
    /* 008a2207: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a2208:; BB(0x008a2208);
    /* 008a2208: mov dword ptr [esi + 0x28], 2 */ W32((u32)(r_esi+0x28u), 0x2u);
    /* 008a220f: jmp 0x8a2232 */ goto L_008a2232;
L_008a2211:; BB(0x008a2211);
    /* 008a2211: cmp ecx, 0x52 */ {  u32 a = r_ecx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2214: jne 0x8a21e4 */ if (!fZ) goto L_008a21e4;
L_008a2216:; BB(0x008a2216);
    /* 008a2216: cmp edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2219: jne 0x8a21e4 */ if (!fZ) goto L_008a21e4;
L_008a221b:; BB(0x008a221b);
    /* 008a221b: cmp edi, 0x42 */ {  u32 a = r_edi; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a221e: jne 0x8a21e4 */ if (!fZ) goto L_008a21e4;
L_008a2220:; BB(0x008a2220);
    /* 008a2220: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
    /* 008a2227: jmp 0x8a2207 */ goto L_008a2207;
L_008a2229:; BB(0x008a2229);
    /* 008a2229: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a222b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a222c: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 008a222f: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
L_008a2232:; BB(0x008a2232);
    /* 008a2232: and byte ptr [esi + 0x40], 0 */ { u32 ad = (u32)(r_esi+0x40u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a2236: fld1  */ FPUSH(1.0);
    /* 008a2238: and byte ptr [esi + 0x41], 0 */ { u32 ad = (u32)(r_esi+0x41u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a223c: fstp qword ptr [esi + 0x38] */ W_F64((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 008a223f: and dword ptr [esi + 0x44], 0 */ { u32 ad = (u32)(r_esi+0x44u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a2243: and byte ptr [esi + 0x4a], 0 */ { u32 ad = (u32)(r_esi+0x4au);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a2247: and dword ptr [esi + 0x74], 0 */ { u32 ad = (u32)(r_esi+0x74u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a224b: and byte ptr [esi + 0x58], 0 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a224f: and byte ptr [esi + 0x59], 0 */ { u32 ad = (u32)(r_esi+0x59u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a2253: and byte ptr [esi + 0x5a], 0 */ { u32 ad = (u32)(r_esi+0x5au);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a2257: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a2259: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a225a: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 008a225d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 008a2260: mov byte ptr [esi + 0x48], al */ W8((u32)(r_esi+0x48u), (u8)r_eax);
    /* 008a2263: mov byte ptr [esi + 0x49], al */ W8((u32)(r_esi+0x49u), (u8)r_eax);
    /* 008a2266: mov dword ptr [esi + 0x4c], 2 */ W32((u32)(r_esi+0x4cu), 0x2u);
    /* 008a226d: mov byte ptr [esi + 0x50], al */ W8((u32)(r_esi+0x50u), (u8)r_eax);
    /* 008a2270: mov dword ptr [esi + 0x54], 0x100 */ W32((u32)(r_esi+0x54u), 0x100u);
    /* 008a2277: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2278: ret  */ FN_RET(0x008a2106); r_esp += 4; return;
}

void f_008a260b(void) /* ?get_soi@D3DX@@YAEPAUjpeg_decompress_struct@1@@Z */
{
    FN_ENTER(0x008a260b);
    /* 008a260b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a260d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a260e: mov dword ptr [eax + 0x14], 0x65 */ W32((u32)(r_eax+0x14u), 0x65u);
    /* 008a2615: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2617: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a2619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a261a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a261du); call_ind(t); }
    /* 008a261d: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a2623: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a2625: cmp byte ptr [eax + 0x50], bl */ {  u32 a = R8((u32)(r_eax+0x50u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a2628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a2629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a262a: je 0x8a263b */ if (fZ) goto L_008a263b;
L_008a262c:; BB(0x008a262c);
    /* 008a262c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a262e: mov dword ptr [eax + 0x14], 0x3c */ W32((u32)(r_eax+0x14u), 0x3cu);
    /* 008a2635: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a2637: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a2638: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a263au); call_ind(t); }
    /* 008a263a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a263b:; BB(0x008a263b);
    /* 008a263b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a263d: lea eax, [esi + 0xda] */ r_eax = (u32)(r_esi+0xdau);
    /* 008a2643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a2644:; BB(0x008a2644);
    /* 008a2644: mov byte ptr [eax - 0x10], bl */ W8((u32)(r_eax+0xfffffff0u), (u8)r_ebx);
    /* 008a2647: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 008a264a: mov byte ptr [eax + 0x10], 5 */ W8((u32)(r_eax+0x10u), 0x5u);
    /* 008a264e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a264f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a2650: jne 0x8a2644 */ if (!fZ) goto L_008a2644;
L_008a2652:; BB(0x008a2652);
    /* 008a2652: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a2658: mov dword ptr [esi + 0xfc], ebx */ W32((u32)(r_esi+0xfcu), r_ebx);
    /* 008a265e: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 008a2661: mov byte ptr [esi + 0x108], bl */ W8((u32)(r_esi+0x108u), (u8)r_ebx);
    /* 008a2667: mov byte ptr [esi + 0x100], bl */ W8((u32)(r_esi+0x100u), (u8)r_ebx);
    /* 008a266d: mov byte ptr [esi + 0x101], bl */ W8((u32)(r_esi+0x101u), (u8)r_ebx);
    /* 008a2673: mov byte ptr [esi + 0x106], bl */ W8((u32)(r_esi+0x106u), (u8)r_ebx);
    /* 008a2679: mov byte ptr [esi + 0x107], bl */ W8((u32)(r_esi+0x107u), (u8)r_ebx);
    /* 008a267f: mov word ptr [esi + 0x102], 1 */ W16((u32)(r_esi+0x102u), 0x1u);
    /* 008a2688: mov word ptr [esi + 0x104], 1 */ W16((u32)(r_esi+0x104u), 0x1u);
    /* 008a2691: mov byte ptr [eax + 0x50], 1 */ W8((u32)(r_eax+0x50u), 0x1u);
    /* 008a2695: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008a2697: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2698: ret  */ FN_RET(0x008a260b); r_esp += 4; return;
}

