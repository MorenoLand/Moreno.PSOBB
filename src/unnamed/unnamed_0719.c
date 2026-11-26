#include "protos.h"

void f_007190b0(void) /* sub_7190B0 */
{
    FN_ENTER(0x007190b0);
    /* 007190b0: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 007190b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007190b5: je 0x7190c0 */ if (fZ) goto L_007190c0;
L_007190b7:; BB(0x007190b7);
    /* 007190b7: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007190bb: call 0x721a10 */ r_esp -= 4; W32(r_esp, 0x7190c0u); f_00721a10();
L_007190c0:; BB(0x007190c0);
    /* 007190c0: ret 4 */ FN_RET(0x007190b0); r_esp += 8; return;
}

void f_007190c4(void) /* sub_7190C4 */
{
    FN_ENTER(0x007190c4);
    /* 007190c4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007190c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007190cb: je 0x7190da */ if (fZ) goto L_007190da;
L_007190cd:; BB(0x007190cd);
    /* 007190cd: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 007190d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007190d2: je 0x7190da */ if (fZ) goto L_007190da;
L_007190d4:; BB(0x007190d4);
    /* 007190d4: mov eax, 1 */ r_eax = 0x1u;
    /* 007190d9: ret  */ FN_RET(0x007190c4); r_esp += 4; return;
L_007190da:; BB(0x007190da);
    /* 007190da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007190dc: ret  */ FN_RET(0x007190c4); r_esp += 4; return;
}

void f_007190e0(void) /* sub_7190E0 */
{
    FN_ENTER(0x007190e0);
    /* 007190e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007190e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007190e4: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007190e9: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7190eeu); f_006c1bd4();
    /* 007190ee: mov esi, eax */ r_esi = r_eax;
    /* 007190f0: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007190f5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007190fb: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x719100u); f_007be19c();
    /* 00719100: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00719103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719105: je 0x719110 */ if (fZ) goto L_00719110;
L_00719107:; BB(0x00719107);
    /* 00719107: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0071910e: jmp 0x719117 */ goto L_00719117;
L_00719110:; BB(0x00719110);
    /* 00719110: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_00719117:; BB(0x00719117);
    /* 00719117: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0071911a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071911b: add esi, 0x2944 */ {  u32 a = r_esi; u32 b = 0x2944u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00719121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719122: call 0x77f060 */ r_esp -= 4; W32(r_esp, 0x719127u); f_0077f060();
    /* 00719127: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071912a: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00719130: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00719133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719134: call 0x7d7800 */ r_esp -= 4; W32(r_esp, 0x719139u); f_007d7800();
    /* 00719139: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071913c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071913d: ret  */ FN_RET(0x007190e0); r_esp += 4; return;
}

void f_00719140(void) /* sub_719140 */
{
    FN_ENTER(0x00719140);
    /* 00719140: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719141: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00719145: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00719148: jl 0x71914e */ if ((fS!=fO)) goto L_0071914e;
L_0071914a:; BB(0x0071914a);
    /* 0071914a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071914c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071914d: ret  */ FN_RET(0x00719140); r_esp += 4; return;
L_0071914e:; BB(0x0071914e);
    /* 0071914e: call 0x81e240 */ r_esp -= 4; W32(r_esp, 0x719153u); f_0081e240();
    /* 00719153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719155: je 0x719160 */ if (fZ) goto L_00719160;
L_00719157:; BB(0x00719157);
    /* 00719157: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719158: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x71915du); f_0083ddc4();
    /* 0071915d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071915e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071915f: ret  */ FN_RET(0x00719140); r_esp += 4; return;
L_00719160:; BB(0x00719160);
    /* 00719160: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719161: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x719166u); f_0068d5a8();
    /* 00719166: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719169: je 0x71914a */ if (fZ) goto L_0071914a;
L_0071916b:; BB(0x0071916b);
    /* 0071916b: mov ecx, eax */ r_ecx = r_eax;
    /* 0071916d: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x719172u); f_00694780();
    /* 00719172: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00719173: ret  */ FN_RET(0x00719140); r_esp += 4; return;
}

void f_00719174(void) /* sub_719174 */
{
    FN_ENTER(0x00719174);
    /* 00719174: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0071917a: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071917f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719181: je 0x7191a6 */ if (fZ) goto L_007191a6;
L_00719183:; BB(0x00719183);
    /* 00719183: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00719185: jl 0x7191a2 */ if ((fS!=fO)) goto L_007191a2;
L_00719187:; BB(0x00719187);
    /* 00719187: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071918a: jl 0x719190 */ if ((fS!=fO)) goto L_00719190;
L_0071918c:; BB(0x0071918c);
    /* 0071918c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071918e: jmp 0x719194 */ goto L_00719194;
L_00719190:; BB(0x00719190);
    /* 00719190: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00719194:; BB(0x00719194);
    /* 00719194: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719196: je 0x7191aa */ if (fZ) goto L_007191aa;
L_00719198:; BB(0x00719198);
    /* 00719198: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071919c: call 0x71b568 */ r_esp -= 4; W32(r_esp, 0x7191a1u); f_0071b568();
    /* 007191a1: ret  */ FN_RET(0x00719174); r_esp += 4; return;
L_007191a2:; BB(0x007191a2);
    /* 007191a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007191a4: jmp 0x719194 */ goto L_00719194;
L_007191a6:; BB(0x007191a6);
    /* 007191a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007191a8: jmp 0x719194 */ goto L_00719194;
L_007191aa:; BB(0x007191aa);
    /* 007191aa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007191af: ret  */ FN_RET(0x00719174); r_esp += 4; return;
}

void f_007191b0(void) /* sub_7191B0 */
{
    FN_ENTER(0x007191b0);
    /* 007191b0: mov dword ptr [0xa98468], 0x3f800000 */ W32((u32)(0xa98468u), 0x3f800000u);
    /* 007191ba: mov dword ptr [0xa9846c], 0x41000000 */ W32((u32)(0xa9846cu), 0x41000000u);
    /* 007191c4: mov dword ptr [0xa98470], 0x3fc00000 */ W32((u32)(0xa98470u), 0x3fc00000u);
    /* 007191ce: ret  */ FN_RET(0x007191b0); r_esp += 4; return;
}

void f_007191b2(void)
{
    FN_ENTER(0x007191b2);
    /* 007191b2: push 0xa984 */ { u32 v = 0xa984u; r_esp -= 4; W32(r_esp, v); }
    /* 007191b7: add byte ptr [eax + 0x6c05c73f], al */ { u32 ad = (u32)(r_eax+0x6c05c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007191bd: test byte ptr [ecx], ch */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu;  fC = 0; }
    /* 007191c3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 007191c4: mov dword ptr [0xa98470], 0x3fc00000 */ W32((u32)(0xa98470u), 0x3fc00000u);
    /* 007191ce: ret  */ FN_RET(0x007191b2); r_esp += 4; return;
}

void f_007191d0(void) /* sub_7191D0 */
{
    FN_ENTER(0x007191d0);
    /* 007191d0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007191d4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007191d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007191db: je 0x7191fc */ if (fZ) goto L_007191fc;
L_007191dd:; BB(0x007191dd);
    /* 007191dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007191df: jl 0x7191f8 */ if ((fS!=fO)) goto L_007191f8;
L_007191e1:; BB(0x007191e1);
    /* 007191e1: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007191e4: jl 0x7191ea */ if ((fS!=fO)) goto L_007191ea;
L_007191e6:; BB(0x007191e6);
    /* 007191e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007191e8: jmp 0x7191ee */ goto L_007191ee;
L_007191ea:; BB(0x007191ea);
    /* 007191ea: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007191ee:; BB(0x007191ee);
    /* 007191ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007191f0: je 0x7191f7 */ if (fZ) goto L_007191f7;
L_007191f2:; BB(0x007191f2);
    /* 007191f2: call 0x71b5a4 */ r_esp -= 4; W32(r_esp, 0x7191f7u); f_0071b5a4();
L_007191f7:; BB(0x007191f7);
    /* 007191f7: ret  */ FN_RET(0x007191d0); r_esp += 4; return;
L_007191f8:; BB(0x007191f8);
    /* 007191f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007191fa: jmp 0x7191ee */ goto L_007191ee;
L_007191fc:; BB(0x007191fc);
    /* 007191fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007191fe: jmp 0x7191ee */ goto L_007191ee;
}

void f_00719200(void) /* sub_719200 */
{
    FN_ENTER(0x00719200);
    /* 00719200: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00719204: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00719209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071920b: je 0x71922f */ if (fZ) goto L_0071922f;
L_0071920d:; BB(0x0071920d);
    /* 0071920d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071920f: jl 0x71922b */ if ((fS!=fO)) goto L_0071922b;
L_00719211:; BB(0x00719211);
    /* 00719211: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00719214: jl 0x71921a */ if ((fS!=fO)) goto L_0071921a;
L_00719216:; BB(0x00719216);
    /* 00719216: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719218: jmp 0x71921e */ goto L_0071921e;
L_0071921a:; BB(0x0071921a);
    /* 0071921a: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_0071921e:; BB(0x0071921e);
    /* 0071921e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719220: je 0x719228 */ if (fZ) goto L_00719228;
L_00719222:; BB(0x00719222);
    /* 00719222: call 0x71b5b0 */ r_esp -= 4; W32(r_esp, 0x719227u); f_0071b5b0();
    /* 00719227: ret  */ FN_RET(0x00719200); r_esp += 4; return;
L_00719228:; BB(0x00719228);
    /* 00719228: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071922a: ret  */ FN_RET(0x00719200); r_esp += 4; return;
L_0071922b:; BB(0x0071922b);
    /* 0071922b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071922d: jmp 0x71921e */ goto L_0071921e;
L_0071922f:; BB(0x0071922f);
    /* 0071922f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719231: jmp 0x71921e */ goto L_0071921e;
}

void f_00719234(void) /* sub_719234 */
{
    FN_ENTER(0x00719234);
    /* 00719234: call 0x7162e4 */ r_esp -= 4; W32(r_esp, 0x719239u); f_007162e4();
    /* 00719239: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x71923eu); f_0061cdb0();
    /* 0071923e: call 0x73c588 */ r_esp -= 4; W32(r_esp, 0x719243u); f_0073c588();
    /* 00719243: mov dword ptr [0xa98478], 0 */ W32((u32)(0xa98478u), 0x0u);
    /* 0071924d: ret  */ FN_RET(0x00719234); r_esp += 4; return;
}

void f_00719250(void) /* sub_719250 */
{
    FN_ENTER(0x00719250);
    /* 00719250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719251: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00719253: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00719255: call 0x719274 */ r_esp -= 4; W32(r_esp, 0x71925au); f_00719274();
    /* 0071925a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071925e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719260: jne 0x719266 */ if (!fZ) goto L_00719266;
L_00719262:; BB(0x00719262);
    /* 00719262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00719263: ret 4 */ FN_RET(0x00719250); r_esp += 8; return;
L_00719266:; BB(0x00719266);
    /* 00719266: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719267: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71926cu); f_005c2f74();
    /* 0071926c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071926d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071926e: ret 4 */ FN_RET(0x00719250); r_esp += 8; return;
}

void f_00719274(void) /* sub_719274 */
{
    FN_ENTER(0x00719274);
    /* 00719274: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00719275: mov ebp, esp */ r_ebp = r_esp;
    /* 00719277: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00719279: push 0x8f09f4 */ { u32 v = 0x8f09f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071927e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00719284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719285: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071928c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071928f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00719292: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00719295: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00719298: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071929b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071929e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007192a1: mov dword ptr [ecx], 0xb3f9c8 */ W32((u32)(r_ecx), 0xb3f9c8u);
    /* 007192a7: mov dword ptr [0xa9852c], 0 */ W32((u32)(0xa9852cu), 0x0u);
    /* 007192b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007192b8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7192bdu); f_008171e8();
    /* 007192bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007192c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007192c7: mov esp, ebp */ r_esp = r_ebp;
    /* 007192c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007192ca: ret  */ FN_RET(0x00719274); r_esp += 4; return;
}

void f_007192cc(void) /* sub_7192CC */
{
    FN_ENTER(0x007192cc);
    /* 007192cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007192cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007192cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007192d1: call 0x7192f0 */ r_esp -= 4; W32(r_esp, 0x7192d6u); f_007192f0();
    /* 007192d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007192da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007192dc: jne 0x7192e2 */ if (!fZ) goto L_007192e2;
L_007192de:; BB(0x007192de);
    /* 007192de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007192df: ret 4 */ FN_RET(0x007192cc); r_esp += 8; return;
L_007192e2:; BB(0x007192e2);
    /* 007192e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007192e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7192e8u); f_005c2f74();
    /* 007192e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007192e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007192ea: ret 4 */ FN_RET(0x007192cc); r_esp += 8; return;
}

void f_007192f0(void) /* sub_7192F0 */
{
    FN_ENTER(0x007192f0);
    /* 007192f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007192f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007192f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007192f5: push 0x8f0a10 */ { u32 v = 0x8f0a10u; r_esp -= 4; W32(r_esp, v); }
    /* 007192fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00719300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00719308: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071930b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071930e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00719311: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00719314: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00719317: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071931a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071931d: mov dword ptr [ecx], 0xb3f9d8 */ W32((u32)(r_ecx), 0xb3f9d8u);
    /* 00719323: mov dword ptr [0xa98530], 0 */ W32((u32)(0xa98530u), 0x0u);
    /* 0071932d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00719334: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x719339u); f_008171e8();
    /* 00719339: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071933c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00719343: mov esp, ebp */ r_esp = r_ebp;
    /* 00719345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00719346: ret  */ FN_RET(0x007192f0); r_esp += 4; return;
}

void f_00719348(void) /* sub_719348 */
{
    FN_ENTER(0x00719348);
    /* 00719348: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719349: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071934b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071934d: call 0x71936c */ r_esp -= 4; W32(r_esp, 0x719352u); f_0071936c();
    /* 00719352: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00719356: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719358: jne 0x71935e */ if (!fZ) goto L_0071935e;
L_0071935a:; BB(0x0071935a);
    /* 0071935a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071935b: ret 4 */ FN_RET(0x00719348); r_esp += 8; return;
L_0071935e:; BB(0x0071935e);
    /* 0071935e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071935f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x719364u); f_005c2f74();
    /* 00719364: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719365: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00719366: ret 4 */ FN_RET(0x00719348); r_esp += 8; return;
}

void f_0071936c(void) /* sub_71936C */
{
    FN_ENTER(0x0071936c);
    /* 0071936c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071936d: mov ebp, esp */ r_ebp = r_esp;
    /* 0071936f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00719371: push 0x8f0a2c */ { u32 v = 0x8f0a2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00719376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071937c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071937d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00719384: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00719387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071938a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071938d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00719390: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00719393: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00719396: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00719399: mov dword ptr [ecx], 0xb3f9e8 */ W32((u32)(r_ecx), 0xb3f9e8u);
    /* 0071939f: mov dword ptr [0xa98534], 0 */ W32((u32)(0xa98534u), 0x0u);
    /* 007193a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007193b0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7193b5u); f_008171e8();
    /* 007193b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007193b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007193bf: mov esp, ebp */ r_esp = r_ebp;
    /* 007193c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007193c2: ret  */ FN_RET(0x0071936c); r_esp += 4; return;
}

void f_007193c4(void) /* sub_7193C4 */
{
    FN_ENTER(0x007193c4);
    /* 007193c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007193c5: mov ebp, esp */ r_ebp = r_esp;
    /* 007193c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007193c9: push 0x8f0a48 */ { u32 v = 0x8f0a48u; r_esp -= 4; W32(r_esp, v); }
    /* 007193ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007193d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007193d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007193dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007193df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007193e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007193e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007193e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007193eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007193ee: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007193f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007193f8: mov eax, ecx */ r_eax = r_ecx;
    /* 007193fa: mov dword ptr [eax], 0xb3f9b8 */ W32((u32)(r_eax), 0xb3f9b8u);
    /* 00719400: mov edi, dword ptr [0xa98538] */ r_edi = R32((u32)(0xa98538u));
    /* 00719406: mov ecx, dword ptr [0xa9852c] */ r_ecx = R32((u32)(0xa9852cu));
    /* 0071940c: mov dword ptr [0xa98538], 0 */ W32((u32)(0xa98538u), 0x0u);
    /* 00719416: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719418: je 0x71942c */ if (fZ) goto L_0071942c;
L_0071941a:; BB(0x0071941a);
    /* 0071941a: je 0x719422 */ if (fZ) goto L_00719422;
L_0071941c:; BB(0x0071941c);
    /* 0071941c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071941e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00719420: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x719422u); call_ind(t); }
L_00719422:; BB(0x00719422);
    /* 00719422: mov dword ptr [0xa9852c], 0 */ W32((u32)(0xa9852cu), 0x0u);
L_0071942c:; BB(0x0071942c);
    /* 0071942c: mov ecx, dword ptr [0xa98530] */ r_ecx = R32((u32)(0xa98530u));
    /* 00719432: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719434: je 0x719448 */ if (fZ) goto L_00719448;
L_00719436:; BB(0x00719436);
    /* 00719436: je 0x71943e */ if (fZ) goto L_0071943e;
L_00719438:; BB(0x00719438);
    /* 00719438: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071943a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071943c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x71943eu); call_ind(t); }
L_0071943e:; BB(0x0071943e);
    /* 0071943e: mov dword ptr [0xa98530], 0 */ W32((u32)(0xa98530u), 0x0u);
L_00719448:; BB(0x00719448);
    /* 00719448: mov ecx, dword ptr [0xa98534] */ r_ecx = R32((u32)(0xa98534u));
    /* 0071944e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719450: je 0x719464 */ if (fZ) goto L_00719464;
L_00719452:; BB(0x00719452);
    /* 00719452: je 0x71945a */ if (fZ) goto L_0071945a;
L_00719454:; BB(0x00719454);
    /* 00719454: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00719456: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00719458: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x71945au); call_ind(t); }
L_0071945a:; BB(0x0071945a);
    /* 0071945a: mov dword ptr [0xa98534], 0 */ W32((u32)(0xa98534u), 0x0u);
L_00719464:; BB(0x00719464);
    /* 00719464: mov ebx, 5 */ r_ebx = 0x5u;
L_00719469:; BB(0x00719469);
    /* 00719469: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0071946c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071946e: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00719471: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00719473: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00719475: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00719477: mov ecx, dword ptr [esi + 0xa98480] */ r_ecx = R32((u32)(r_esi+0xa98480u));
    /* 0071947d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071947f: je 0x719493 */ if (fZ) goto L_00719493;
L_00719481:; BB(0x00719481);
    /* 00719481: je 0x719489 */ if (fZ) goto L_00719489;
L_00719483:; BB(0x00719483);
    /* 00719483: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00719485: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00719487: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x719489u); call_ind(t); }
L_00719489:; BB(0x00719489);
    /* 00719489: mov dword ptr [esi + 0xa98480], 0 */ W32((u32)(r_esi+0xa98480u), 0x0u);
L_00719493:; BB(0x00719493);
    /* 00719493: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00719496: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00719498: jge 0x719469 */ if ((fS==fO)) goto L_00719469;
L_0071949a:; BB(0x0071949a);
    /* 0071949a: mov ecx, dword ptr [0xa9853c] */ r_ecx = R32((u32)(0xa9853cu));
    /* 007194a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007194a2: je 0x7194b6 */ if (fZ) goto L_007194b6;
L_007194a4:; BB(0x007194a4);
    /* 007194a4: je 0x7194ac */ if (fZ) goto L_007194ac;
L_007194a6:; BB(0x007194a6);
    /* 007194a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007194a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007194aa: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7194acu); call_ind(t); }
L_007194ac:; BB(0x007194ac);
    /* 007194ac: mov dword ptr [0xa9853c], 0 */ W32((u32)(0xa9853cu), 0x0u);
L_007194b6:; BB(0x007194b6);
    /* 007194b6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007194b8: je 0x7194c4 */ if (fZ) goto L_007194c4;
L_007194ba:; BB(0x007194ba);
    /* 007194ba: je 0x7194c4 */ if (fZ) goto L_007194c4;
L_007194bc:; BB(0x007194bc);
    /* 007194bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007194be: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007194c0: mov ecx, edi */ r_ecx = r_edi;
    /* 007194c2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7194c4u); call_ind(t); }
L_007194c4:; BB(0x007194c4);
    /* 007194c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007194cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007194ce: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7194d3u); f_008171e8();
    /* 007194d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007194d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007194d8: jne 0x7194f3 */ if (!fZ) goto L_007194f3;
L_007194da:; BB(0x007194da);
    /* 007194da: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007194dd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007194e0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007194e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007194e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007194ed: mov esp, ebp */ r_esp = r_ebp;
    /* 007194ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007194f0: ret 4 */ FN_RET(0x007193c4); r_esp += 8; return;
L_007194f3:; BB(0x007194f3);
    /* 007194f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007194f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007194f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7194fcu); f_005c2f74();
    /* 007194fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007194fd: jmp 0x7194da */ goto L_007194da;
}

void f_00719500(void) /* sub_719500 */
{
    FN_ENTER(0x00719500);
    /* 00719500: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00719501: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00719502: mov ebp, dword ptr [0xa98538] */ r_ebp = R32((u32)(0xa98538u));
    /* 00719508: mov ecx, dword ptr [0xa9852c] */ r_ecx = R32((u32)(0xa9852cu));
    /* 0071950e: mov dword ptr [0xa98538], 0 */ W32((u32)(0xa98538u), 0x0u);
    /* 00719518: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071951a: je 0x71952e */ if (fZ) goto L_0071952e;
L_0071951c:; BB(0x0071951c);
    /* 0071951c: je 0x719524 */ if (fZ) goto L_00719524;
L_0071951e:; BB(0x0071951e);
    /* 0071951e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00719520: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00719522: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x719524u); call_ind(t); }
L_00719524:; BB(0x00719524);
    /* 00719524: mov dword ptr [0xa9852c], 0 */ W32((u32)(0xa9852cu), 0x0u);
L_0071952e:; BB(0x0071952e);
    /* 0071952e: mov ecx, dword ptr [0xa98530] */ r_ecx = R32((u32)(0xa98530u));
    /* 00719534: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719536: je 0x71954a */ if (fZ) goto L_0071954a;
L_00719538:; BB(0x00719538);
    /* 00719538: je 0x719540 */ if (fZ) goto L_00719540;
L_0071953a:; BB(0x0071953a);
    /* 0071953a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071953c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071953e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x719540u); call_ind(t); }
L_00719540:; BB(0x00719540);
    /* 00719540: mov dword ptr [0xa98530], 0 */ W32((u32)(0xa98530u), 0x0u);
L_0071954a:; BB(0x0071954a);
    /* 0071954a: mov ecx, dword ptr [0xa98534] */ r_ecx = R32((u32)(0xa98534u));
    /* 00719550: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719552: je 0x719566 */ if (fZ) goto L_00719566;
L_00719554:; BB(0x00719554);
    /* 00719554: je 0x71955c */ if (fZ) goto L_0071955c;
L_00719556:; BB(0x00719556);
    /* 00719556: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00719558: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0071955a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x71955cu); call_ind(t); }
L_0071955c:; BB(0x0071955c);
    /* 0071955c: mov dword ptr [0xa98534], 0 */ W32((u32)(0xa98534u), 0x0u);
L_00719566:; BB(0x00719566);
    /* 00719566: mov eax, 0x8c */ r_eax = 0x8cu;
    /* 0071956b: mov edi, eax */ r_edi = r_eax;
L_0071956d:; BB(0x0071956d);
    /* 0071956d: mov ecx, dword ptr [edi + 0xa98480] */ r_ecx = R32((u32)(r_edi+0xa98480u));
    /* 00719573: add edi, -0x1c */ {  u32 a = r_edi; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00719576: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719578: je 0x71958c */ if (fZ) goto L_0071958c;
L_0071957a:; BB(0x0071957a);
    /* 0071957a: je 0x719582 */ if (fZ) goto L_00719582;
L_0071957c:; BB(0x0071957c);
    /* 0071957c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071957e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00719580: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x719582u); call_ind(t); }
L_00719582:; BB(0x00719582);
    /* 00719582: mov dword ptr [edi + 0xa9849c], 0 */ W32((u32)(r_edi+0xa9849cu), 0x0u);
L_0071958c:; BB(0x0071958c);
    /* 0071958c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071958e: jge 0x71956d */ if ((fS==fO)) goto L_0071956d;
L_00719590:; BB(0x00719590);
    /* 00719590: mov ecx, dword ptr [0xa9853c] */ r_ecx = R32((u32)(0xa9853cu));
    /* 00719596: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719598: je 0x7195ac */ if (fZ) goto L_007195ac;
L_0071959a:; BB(0x0071959a);
    /* 0071959a: je 0x7195a2 */ if (fZ) goto L_007195a2;
L_0071959c:; BB(0x0071959c);
    /* 0071959c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0071959e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007195a0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7195a2u); call_ind(t); }
L_007195a2:; BB(0x007195a2);
    /* 007195a2: mov dword ptr [0xa9853c], 0 */ W32((u32)(0xa9853cu), 0x0u);
L_007195ac:; BB(0x007195ac);
    /* 007195ac: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007195ae: je 0x7195b9 */ if (fZ) goto L_007195b9;
L_007195b0:; BB(0x007195b0);
    /* 007195b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007195b2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007195b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007195b7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7195b9u); call_ind(t); }
L_007195b9:; BB(0x007195b9);
    /* 007195b9: call 0x71b7f8 */ r_esp -= 4; W32(r_esp, 0x7195beu); f_0071b7f8();
    /* 007195be: call 0x710d14 */ r_esp -= 4; W32(r_esp, 0x7195c3u); f_00710d14();
    /* 007195c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007195c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007195c5: ret  */ FN_RET(0x00719500); r_esp += 4; return;
}

void f_007195c8(void) /* sub_7195C8 */
{
    FN_ENTER(0x007195c8);
    /* 007195c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007195c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007195cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007195cd: push 0x8f0b06 */ { u32 v = 0x8f0b06u; r_esp -= 4; W32(r_esp, v); }
    /* 007195d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007195d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007195d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007195e0: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007195e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007195e6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007195e9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007195ec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007195ef: push dword ptr [0xaca320] */ { u32 v = R32((u32)(0xaca320u)); r_esp -= 4; W32(r_esp, v); }
    /* 007195f5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007195f8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7195fdu); f_008193cc();
    /* 007195fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00719604: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00719607: mov dword ptr [edx], 0xb3f9b8 */ W32((u32)(r_edx), 0xb3f9b8u);
    /* 0071960d: mov eax, dword ptr [0x9f1ff8] */ r_eax = R32((u32)(0x9f1ff8u));
    /* 00719612: mov ecx, dword ptr [0xa98538] */ r_ecx = R32((u32)(0xa98538u));
    /* 00719618: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0071961b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071961d: je 0x71982b */ if (fZ) goto L_0071982b;
L_00719623:; BB(0x00719623);
    /* 00719623: mov eax, dword ptr [0xa9853c] */ r_eax = R32((u32)(0xa9853cu));
    /* 00719628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071962a: je 0x7197da */ if (fZ) goto L_007197da;
L_00719630:; BB(0x00719630);
    /* 00719630: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00719632: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00719635:; BB(0x00719635);
    /* 00719635: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00719638: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0071963b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071963d: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00719640: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00719642: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00719644: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00719646: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00719649: lea ecx, [ebx + 0xa98480] */ r_ecx = (u32)(r_ebx+0xa98480u);
    /* 0071964f: call 0x71a200 */ r_esp -= 4; W32(r_esp, 0x719654u); f_0071a200();
    /* 00719654: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0071965b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071965d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x719662u); f_005caba4();
    /* 00719662: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719663: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00719666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719668: je 0x7197d3 */ if (fZ) goto L_007197d3;
L_0071966e:; BB(0x0071966e);
    /* 0071966e: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00719675: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0071967c: push dword ptr [0xa98538] */ { u32 v = R32((u32)(0xa98538u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719682: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00719685: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x71968au); f_008193cc();
    /* 0071968a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0071968d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00719694:; BB(0x00719694);
    /* 00719694: mov eax, ebx */ r_eax = r_ebx;
    /* 00719696: mov dword ptr [eax + 0xa98480], edx */ W32((u32)(r_eax+0xa98480u), r_edx);
    /* 0071969c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007196a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007196a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007196a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007196ac: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007196af: jl 0x719635 */ if ((fS!=fO)) goto L_00719635;
L_007196b1:; BB(0x007196b1);
    /* 007196b1: mov eax, dword ptr [0xa98534] */ r_eax = R32((u32)(0xa98534u));
    /* 007196b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007196b8: je 0x719782 */ if (fZ) goto L_00719782;
L_007196be:; BB(0x007196be);
    /* 007196be: mov eax, dword ptr [0xa98530] */ r_eax = R32((u32)(0xa98530u));
    /* 007196c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007196c5: je 0x719731 */ if (fZ) goto L_00719731;
L_007196c7:; BB(0x007196c7);
    /* 007196c7: mov eax, dword ptr [0xa9852c] */ r_eax = R32((u32)(0xa9852cu));
    /* 007196cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007196ce: je 0x7196ea */ if (fZ) goto L_007196ea;
L_007196d0:; BB(0x007196d0);
    /* 007196d0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007196d3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007196d6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007196d9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007196dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007196df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007196e6: mov esp, ebp */ r_esp = r_ebp;
    /* 007196e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007196e9: ret  */ FN_RET(0x007195c8); r_esp += 4; return;
L_007196ea:; BB(0x007196ea);
    /* 007196ea: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007196f1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007196f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7196f8u); f_005caba4();
    /* 007196f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007196f9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007196fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007196fe: je 0x71972d */ if (fZ) goto L_0071972d;
L_00719700:; BB(0x00719700);
    /* 00719700: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00719707: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0071970e: push dword ptr [0xaca328] */ { u32 v = R32((u32)(0xaca328u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719714: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00719717: call 0x7198c0 */ r_esp -= 4; W32(r_esp, 0x71971cu); f_007198c0();
    /* 0071971c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071971f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00719726:; BB(0x00719726);
    /* 00719726: mov dword ptr [0xa9852c], eax */ W32((u32)(0xa9852cu), r_eax);
    /* 0071972b: jmp 0x7196d0 */ goto L_007196d0;
L_0071972d:; BB(0x0071972d);
    /* 0071972d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071972f: jmp 0x719726 */ goto L_00719726;
L_00719731:; BB(0x00719731);
    /* 00719731: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00719738: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071973a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71973fu); f_005caba4();
    /* 0071973f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719740: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00719743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719745: je 0x71977e */ if (fZ) goto L_0071977e;
L_00719747:; BB(0x00719747);
    /* 00719747: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0071974e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00719755: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071975b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0071975e: call 0x71989c */ r_esp -= 4; W32(r_esp, 0x719763u); f_0071989c();
    /* 00719763: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00719766: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0071976d:; BB(0x0071976d);
    /* 0071976d: mov dword ptr [0xa98530], eax */ W32((u32)(0xa98530u), r_eax);
    /* 00719772: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00719779: jmp 0x7196c7 */ goto L_007196c7;
L_0071977e:; BB(0x0071977e);
    /* 0071977e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00719780: jmp 0x71976d */ goto L_0071976d;
L_00719782:; BB(0x00719782);
    /* 00719782: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00719789: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071978b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x719790u); f_005caba4();
    /* 00719790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719791: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00719794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719796: je 0x7197cf */ if (fZ) goto L_007197cf;
L_00719798:; BB(0x00719798);
    /* 00719798: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0071979f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007197a6: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007197ac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007197af: call 0x719878 */ r_esp -= 4; W32(r_esp, 0x7197b4u); f_00719878();
    /* 007197b4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007197b7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007197be:; BB(0x007197be);
    /* 007197be: mov dword ptr [0xa98534], eax */ W32((u32)(0xa98534u), r_eax);
    /* 007197c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007197ca: jmp 0x7196be */ goto L_007196be;
L_007197cf:; BB(0x007197cf);
    /* 007197cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007197d1: jmp 0x7197be */ goto L_007197be;
L_007197d3:; BB(0x007197d3);
    /* 007197d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007197d5: jmp 0x719694 */ goto L_00719694;
L_007197da:; BB(0x007197da);
    /* 007197da: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 007197e1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007197e3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7197e8u); f_005caba4();
    /* 007197e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007197e9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007197ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007197ee: je 0x719827 */ if (fZ) goto L_00719827;
L_007197f0:; BB(0x007197f0);
    /* 007197f0: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 007197f7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007197fe: push dword ptr [0xa98538] */ { u32 v = R32((u32)(0xa98538u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719804: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00719807: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x71980cu); f_008193cc();
    /* 0071980c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0071980f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00719816:; BB(0x00719816);
    /* 00719816: mov dword ptr [0xa9853c], eax */ W32((u32)(0xa9853cu), r_eax);
    /* 0071981b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00719822: jmp 0x719630 */ goto L_00719630;
L_00719827:; BB(0x00719827);
    /* 00719827: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00719829: jmp 0x719816 */ goto L_00719816;
L_0071982b:; BB(0x0071982b);
    /* 0071982b: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00719832: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00719834: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x719839u); f_005caba4();
    /* 00719839: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071983a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0071983d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071983f: je 0x719874 */ if (fZ) goto L_00719874;
L_00719841:; BB(0x00719841);
    /* 00719841: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00719848: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0071984f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00719852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00719854: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x719859u); f_008193cc();
    /* 00719859: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0071985c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00719863:; BB(0x00719863);
    /* 00719863: mov dword ptr [0xa98538], eax */ W32((u32)(0xa98538u), r_eax);
    /* 00719868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071986f: jmp 0x719623 */ goto L_00719623;
L_00719874:; BB(0x00719874);
    /* 00719874: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00719876: jmp 0x719863 */ goto L_00719863;
}

void f_00719878(void) /* sub_719878 */
{
    FN_ENTER(0x00719878);
    /* 00719878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719879: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071987b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071987f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00719881: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x719886u); f_008193cc();
    /* 00719886: mov dword ptr [ebx], 0xb3f9e8 */ W32((u32)(r_ebx), 0xb3f9e8u);
    /* 0071988c: mov edx, dword ptr [0x9f1ffc] */ r_edx = R32((u32)(0x9f1ffcu));
    /* 00719892: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00719895: mov eax, ebx */ r_eax = r_ebx;
    /* 00719897: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00719898: ret 4 */ FN_RET(0x00719878); r_esp += 8; return;
}

void f_0071989c(void) /* sub_71989C */
{
    FN_ENTER(0x0071989c);
    /* 0071989c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071989d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071989f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007198a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007198a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7198aau); f_008193cc();
    /* 007198aa: mov dword ptr [ebx], 0xb3f9d8 */ W32((u32)(r_ebx), 0xb3f9d8u);
    /* 007198b0: mov edx, dword ptr [0x9f2000] */ r_edx = R32((u32)(0x9f2000u));
    /* 007198b6: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 007198b9: mov eax, ebx */ r_eax = r_ebx;
    /* 007198bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007198bc: ret 4 */ FN_RET(0x0071989c); r_esp += 8; return;
}

void f_007198c0(void) /* sub_7198C0 */
{
    FN_ENTER(0x007198c0);
    /* 007198c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007198c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007198c3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007198c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007198c9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7198ceu); f_008193cc();
    /* 007198ce: mov dword ptr [ebx], 0xb3f9c8 */ W32((u32)(r_ebx), 0xb3f9c8u);
    /* 007198d4: mov edx, dword ptr [0x9f2004] */ r_edx = R32((u32)(0x9f2004u));
    /* 007198da: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 007198dd: mov eax, ebx */ r_eax = r_ebx;
    /* 007198df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007198e0: ret 4 */ FN_RET(0x007198c0); r_esp += 8; return;
}

void f_007198e4(void) /* sub_7198E4 */
{
    FN_ENTER(0x007198e4);
    /* 007198e4: call 0x71282c */ r_esp -= 4; W32(r_esp, 0x7198e9u); f_0071282c();
    /* 007198e9: ret  */ FN_RET(0x007198e4); r_esp += 4; return;
}

void f_007198ec(void) /* sub_7198EC */
{
    FN_ENTER(0x007198ec);
    /* 007198ec: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7198f1u); f_007a9044();
    /* 007198f1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7198f6u); f_0082dbac();
    /* 007198f6: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x7198fbu); f_004d28a4();
    /* 007198fb: mov ecx, dword ptr [0xa9850c] */ r_ecx = R32((u32)(0xa9850cu));
    /* 00719901: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x719906u); f_00818f50();
    /* 00719906: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71990bu); f_004d2968();
    /* 0071990b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x719910u); f_0082dab0();
    /* 00719910: ret  */ FN_RET(0x007198ec); r_esp += 4; return;
}

void f_00719914(void) /* sub_719914 */
{
    FN_ENTER(0x00719914);
    /* 00719914: mov eax, dword ptr [0xa98538] */ r_eax = R32((u32)(0xa98538u));
    /* 00719919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071991b: je 0x719923 */ if (fZ) goto L_00719923;
L_0071991d:; BB(0x0071991d);
    /* 0071991d: mov eax, 1 */ r_eax = 0x1u;
    /* 00719922: ret  */ FN_RET(0x00719914); r_esp += 4; return;
L_00719923:; BB(0x00719923);
    /* 00719923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719925: ret  */ FN_RET(0x00719914); r_esp += 4; return;
}

void f_00719928(void) /* sub_719928 */
{
    FN_ENTER(0x00719928);
    /* 00719928: mov eax, dword ptr [0xa9850c] */ r_eax = R32((u32)(0xa9850cu));
    /* 0071992d: ret  */ FN_RET(0x00719928); r_esp += 4; return;
}

void f_00719930(void) /* sub_719930 */
{
    FN_ENTER(0x00719930);
    /* 00719930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719931: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00719935: call 0x719940 */ r_esp -= 4; W32(r_esp, 0x71993au); f_00719940();
    /* 0071993a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071993b: ret  */ FN_RET(0x00719930); r_esp += 4; return;
}

void f_0071993c(void) /* sub_71993C */
{
    FN_ENTER(0x0071993c);
    /* 0071993c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00719940: mov eax, dword ptr [0xa98480] */ r_eax = R32((u32)(0xa98480u));
    /* 00719945: ret  */ FN_RET(0x0071993c); r_esp += 4; return;
}

void f_00719940(void) /* sub_719940 */
{
    FN_ENTER(0x00719940);
    /* 00719940: mov eax, dword ptr [0xa98480] */ r_eax = R32((u32)(0xa98480u));
    /* 00719945: ret  */ FN_RET(0x00719940); r_esp += 4; return;
}

void f_00719948(void) /* sub_719948 */
{
    FN_ENTER(0x00719948);
    /* 00719948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719949: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071994d: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719952u); f_00719960();
    /* 00719952: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00719956: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00719959: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071995a: ret  */ FN_RET(0x00719948); r_esp += 4; return;
}

void f_00719960(void) /* sub_719960 */
{
    FN_ENTER(0x00719960);
    /* 00719960: mov eax, 0xa98480 */ r_eax = 0xa98480u;
    /* 00719965: ret  */ FN_RET(0x00719960); r_esp += 4; return;
}

void f_00719968(void) /* sub_719968 */
{
    FN_ENTER(0x00719968);
    /* 00719968: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719969: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071996d: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719972u); f_00719960();
    /* 00719972: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00719975: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719976: ret  */ FN_RET(0x00719968); r_esp += 4; return;
}

void f_00719978(void) /* sub_719978 */
{
    FN_ENTER(0x00719978);
    /* 00719978: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00719979: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071997d: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719982u); f_00719960();
    /* 00719982: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00719986: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00719989: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071998a: ret  */ FN_RET(0x00719978); r_esp += 4; return;
}

void f_0071998c(void) /* sub_71998C */
{
    FN_ENTER(0x0071998c);
    /* 0071998c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071998d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00719991: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719996u); f_00719960();
    /* 00719996: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0071999a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0071999d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071999e: ret  */ FN_RET(0x0071998c); r_esp += 4; return;
}

void f_007199a0(void) /* sub_7199A0 */
{
    FN_ENTER(0x007199a0);
    /* 007199a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007199a1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007199a5: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x7199aau); f_00719960();
    /* 007199aa: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007199ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007199ae: ret  */ FN_RET(0x007199a0); r_esp += 4; return;
}

void f_007199b0(void) /* sub_7199B0 */
{
    FN_ENTER(0x007199b0);
    /* 007199b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007199b1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007199b5: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x7199bau); f_00719960();
    /* 007199ba: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007199bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007199be: ret  */ FN_RET(0x007199b0); r_esp += 4; return;
}

void f_007199c0(void) /* sub_7199C0 */
{
    FN_ENTER(0x007199c0);
    /* 007199c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007199c1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007199c5: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x7199cau); f_00719960();
    /* 007199ca: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 007199cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007199ce: ret  */ FN_RET(0x007199c0); r_esp += 4; return;
}

void f_007199d0(void) /* sub_7199D0 */
{
    FN_ENTER(0x007199d0);
    /* 007199d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007199d1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007199d5: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x7199dau); f_00719960();
    /* 007199da: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 007199dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007199de: ret  */ FN_RET(0x007199d0); r_esp += 4; return;
}

void f_007199e0(void) /* sub_7199E0 */
{
    FN_ENTER(0x007199e0);
    /* 007199e0: fld dword ptr [0xa98528] */ FPUSH(R_F32((u32)(0xa98528u)));
    /* 007199e6: ret  */ FN_RET(0x007199e0); r_esp += 4; return;
}

void f_007199e8(void) /* sub_7199E8 */
{
    FN_ENTER(0x007199e8);
    /* 007199e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007199e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007199ea: call 0x719a48 */ r_esp -= 4; W32(r_esp, 0x7199efu); f_00719a48();
    /* 007199ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007199f1: jne 0x7199f6 */ if (!fZ) goto L_007199f6;
L_007199f3:; BB(0x007199f3);
    /* 007199f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007199f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007199f5: ret  */ FN_RET(0x007199e8); r_esp += 4; return;
L_007199f6:; BB(0x007199f6);
    /* 007199f6: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x7199fbu); f_007bb6d0();
    /* 007199fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007199fc: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x719a01u); f_004d30cc();
    /* 00719a01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719a02: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 00719a05: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x719a0au); f_007a9044();
    /* 00719a0a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x719a0fu); f_0082dbac();
    /* 00719a0f: mov ecx, dword ptr [0xa9853c] */ r_ecx = R32((u32)(0xa9853cu));
    /* 00719a15: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x719a1au); f_00818f50();
    /* 00719a1a: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x719a1fu); f_004d28a4();
    /* 00719a1f: mov eax, ebx */ r_eax = r_ebx;
    /* 00719a21: call 0x719a60 */ r_esp -= 4; W32(r_esp, 0x719a26u); f_00719a60();
    /* 00719a26: mov eax, ebx */ r_eax = r_ebx;
    /* 00719a28: call 0x719b1c */ r_esp -= 4; W32(r_esp, 0x719a2du); f_00719b1c();
    /* 00719a2d: mov eax, ebx */ r_eax = r_ebx;
    /* 00719a2f: call 0x719940 */ r_esp -= 4; W32(r_esp, 0x719a34u); f_00719940();
    /* 00719a34: mov ecx, eax */ r_ecx = r_eax;
    /* 00719a36: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x719a3bu); f_00818f50();
    /* 00719a3b: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x719a40u); f_004d2968();
    /* 00719a40: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x719a45u); f_0082dab0();
    /* 00719a45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719a46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00719a47: ret  */ FN_RET(0x007199e8); r_esp += 4; return;
}

void f_00719a48(void) /* sub_719A48 */
{
    FN_ENTER(0x00719a48);
    /* 00719a48: mov eax, dword ptr [0xa98540] */ r_eax = R32((u32)(0xa98540u));
    /* 00719a4d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719a4f: je 0x719a54 */ if (fZ) goto L_00719a54;
L_00719a51:; BB(0x00719a51);
    /* 00719a51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00719a53: ret  */ FN_RET(0x00719a48); r_esp += 4; return;
L_00719a54:; BB(0x00719a54);
    /* 00719a54: mov eax, 1 */ r_eax = 0x1u;
    /* 00719a59: ret  */ FN_RET(0x00719a48); r_esp += 4; return;
}

void f_00719a60(void) /* sub_719A60 */
{
    FN_ENTER(0x00719a60);
    /* 00719a60: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00719a63: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719a68u); f_00719960();
    /* 00719a68: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00719a6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719a6d: jne 0x719a73 */ if (!fZ) goto L_00719a73;
L_00719a6f:; BB(0x00719a6f);
    /* 00719a6f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00719a72: ret  */ FN_RET(0x00719a60); r_esp += 4; return;
L_00719a73:; BB(0x00719a73);
    /* 00719a73: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00719a7b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00719a7f: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00719a83: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00719a8b: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00719a8f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00719a93: mov eax, 4 */ r_eax = 0x4u;
    /* 00719a98: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00719a9c: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00719aa4: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00719aa8: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00719aaa: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719aae: mov dword ptr [ecx + 8], 0x44200000 */ W32((u32)(r_ecx+0x8u), 0x44200000u);
    /* 00719ab5: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719ab9: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00719ac0: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00719ac4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00719ac7: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719acb: mov dword ptr [ecx + 0x10], 0x44200000 */ W32((u32)(r_ecx+0x10u), 0x44200000u);
    /* 00719ad2: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719ad6: mov dword ptr [ecx + 0x14], 0x43f00000 */ W32((u32)(r_ecx+0x14u), 0x43f00000u);
    /* 00719add: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00719ae1: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00719ae4: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719ae8: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00719aef: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00719af3: mov dword ptr [ecx + 0x1c], 0x43f00000 */ W32((u32)(r_ecx+0x1cu), 0x43f00000u);
    /* 00719afa: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00719afe: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00719b01: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00719b05: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00719b07: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719b0e: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x719b13u); f_0082b5d8();
    /* 00719b13: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00719b16: ret  */ FN_RET(0x00719a60); r_esp += 4; return;
}

void f_00719b1c(void) /* sub_719B1C */
{
    FN_ENTER(0x00719b1c);
    /* 00719b1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00719b1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00719b1e: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00719b24: mov ebp, eax */ r_ebp = r_eax;
    /* 00719b26: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719b2c: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x719b31u); f_00718e88();
    /* 00719b31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00719b32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719b34: je 0x719b3f */ if (fZ) goto L_00719b3f;
L_00719b36:; BB(0x00719b36);
    /* 00719b36: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00719b3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00719b3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00719b3e: ret  */ FN_RET(0x00719b1c); r_esp += 4; return;
L_00719b3f:; BB(0x00719b3f);
    /* 00719b3f: mov eax, ebp */ r_eax = r_ebp;
    /* 00719b41: call 0x719960 */ r_esp -= 4; W32(r_esp, 0x719b46u); f_00719960();
    /* 00719b46: mov edi, eax */ r_edi = r_eax;
    /* 00719b48: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00719b4b: fcom dword ptr [0x96ffb4] */ fx_compare(ST(0), R_F32((u32)(0x96ffb4u))); 
    /* 00719b51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00719b53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00719b54: ja 0x719b61 */ if ((!fC&&!fZ)) goto L_00719b61;
L_00719b56:; BB(0x00719b56);
    /* 00719b56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00719b58: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00719b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00719b5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00719b60: ret  */ FN_RET(0x00719b1c); r_esp += 4; return;
L_00719b61:; BB(0x00719b61);
    /* 00719b61: fld dword ptr [0x96ffb0] */ FPUSH(R_F32((u32)(0x96ffb0u)));
    /* 00719b67: fld dword ptr [0x96ffac] */ FPUSH(R_F32((u32)(0x96ffacu)));
    /* 00719b6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719b6f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00719b71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719b73: fnstcw word ptr [esp + 0x8c] */ W16((u32)(r_esp+0x8cu), fcw);
    /* 00719b7a: movzx eax, word ptr [esp + 0x8c] */ r_eax = (u32)R16((u32)(r_esp+0x8cu));
    /* 00719b82: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00719b87: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 00719b8e: fldcw word ptr [esp + 0x94] */ fcw = R16((u32)(r_esp+0x94u));
    /* 00719b95: fistp qword ptr [esp + 0x9c] */ W64((u32)(r_esp+0x9cu), (u64)fx_int64(ST(0))); FPOP();
    /* 00719b9c: fldcw word ptr [esp + 0x8c] */ fcw = R16((u32)(r_esp+0x8cu));
    /* 00719ba3: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
    /* 00719baa: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00719bae: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00719bb6: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00719bba: mov ecx, 0xff000000 */ r_ecx = 0xff000000u;
    /* 00719bbf: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00719bc3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00719bc7: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00719bcb: mov edx, 4 */ r_edx = 0x4u;
    /* 00719bd0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00719bd4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00719bd8: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00719bdc: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00719be0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719be2: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00719be6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719be8: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00719bec: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719bef: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00719bf1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719bf3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00719bf7: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00719bfb: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719bfe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00719c00: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00719c04: mov dword ptr [esp + 0x28], 0x43f00000 */ W32((u32)(r_esp+0x28u), 0x43f00000u);
    /* 00719c0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00719c0e: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00719c12: mov dword ptr [esp + 0x30], 0x43f00000 */ W32((u32)(r_esp+0x30u), 0x43f00000u);
    /* 00719c1a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00719c1e: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00719c20: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719c25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00719c27: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x719c2cu); f_0082b5d8();
    /* 00719c2c: fld dword ptr [0x96ffac] */ FPUSH(R_F32((u32)(0x96ffacu)));
    /* 00719c32: fld dword ptr [0x96ffa8] */ FPUSH(R_F32((u32)(0x96ffa8u)));
    /* 00719c38: fld dword ptr [0x96ffa0] */ FPUSH(R_F32((u32)(0x96ffa0u)));
    /* 00719c3e: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00719c42: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719c45: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00719c47: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00719c4b: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719c4e: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00719c50: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00719c52: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00719c54: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00719c58: mov dword ptr [esp + 0x2c], 0x44200000 */ W32((u32)(r_esp+0x2cu), 0x44200000u);
    /* 00719c60: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719c63: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00719c65: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00719c67: mov dword ptr [esp + 0x34], 0x44200000 */ W32((u32)(r_esp+0x34u), 0x44200000u);
    /* 00719c6f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00719c71: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00719c75: mov dword ptr [esp + 0x38], 0x43f00000 */ W32((u32)(r_esp+0x38u), 0x43f00000u);
    /* 00719c7d: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719c80: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00719c82: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00719c86: mov dword ptr [esp + 0x40], 0x43f00000 */ W32((u32)(r_esp+0x40u), 0x43f00000u);
    /* 00719c8e: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00719c90: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719c95: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00719c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719c98: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x719c9du); f_0082b5d8();
    /* 00719c9d: fld dword ptr [0x96ffac] */ FPUSH(R_F32((u32)(0x96ffacu)));
    /* 00719ca3: fld dword ptr [0x96ffa8] */ FPUSH(R_F32((u32)(0x96ffa8u)));
    /* 00719ca9: fld dword ptr [0x96ffa0] */ FPUSH(R_F32((u32)(0x96ffa0u)));
    /* 00719caf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00719cb1: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00719cb5: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00719cb9: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719cbc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00719cbe: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00719cc2: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00719cca: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719ccd: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00719ccf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00719cd1: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00719cd5: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719cd8: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00719cda: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00719cdc: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00719cde: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00719ce2: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00719ce5: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00719ce9: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719cec: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00719cee: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00719cf0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00719cf2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00719cf6: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00719cf9: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 00719d01: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00719d05: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00719d09: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d0b: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719d13: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x719d18u); f_0082b5d8();
    /* 00719d18: fld dword ptr [0x96ffac] */ FPUSH(R_F32((u32)(0x96ffacu)));
    /* 00719d1e: fld dword ptr [0x96ffa8] */ FPUSH(R_F32((u32)(0x96ffa8u)));
    /* 00719d24: fld dword ptr [0x96ffa0] */ FPUSH(R_F32((u32)(0x96ffa0u)));
    /* 00719d2a: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719d2d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00719d2f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00719d33: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719d36: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00719d38: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00719d3a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00719d3c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00719d40: mov dword ptr [esp + 0x4c], 0x44200000 */ W32((u32)(r_esp+0x4cu), 0x44200000u);
    /* 00719d48: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719d4b: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00719d4d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00719d4f: mov dword ptr [esp + 0x54], 0x44200000 */ W32((u32)(r_esp+0x54u), 0x44200000u);
    /* 00719d57: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00719d59: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00719d5d: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00719d60: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00719d64: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00719d68: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00719d6b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00719d6d: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00719d71: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00719d74: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 00719d78: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d7a: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d7f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00719d81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719d82: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x719d87u); f_0082b5d8();
    /* 00719d87: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00719d8a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00719d8f: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x719d94u); f_0082bb30();
    /* 00719d94: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00719d9a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x719d9fu); f_00829cc8();
    /* 00719d9f: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00719da2: mov edx, ebp */ r_edx = r_ebp;
    /* 00719da4: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00719daa: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00719daf: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x719db4u); f_0082bb60();
    /* 00719db4: fld dword ptr [0x96ffb4] */ FPUSH(R_F32((u32)(0x96ffb4u)));
    /* 00719dba: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719dbd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00719dbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00719dc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00719dc2: jbe 0x719fe2 */ if ((fC||fZ)) goto L_00719fe2;
L_00719dc8:; BB(0x00719dc8);
    /* 00719dc8: fld dword ptr [0x96ff7c] */ FPUSH(R_F32((u32)(0x96ff7cu)));
    /* 00719dce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719dd0: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00719dd7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00719dd9:; BB(0x00719dd9);
    /* 00719dd9: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00719ddd: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00719de4: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 00719de6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719de8: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00719dec: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00719def: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00719df3: mov dword ptr [esp + 0x54], 0x3d980000 */ W32((u32)(r_esp+0x54u), 0x3d980000u);
    /* 00719dfb: mov dword ptr [esp + 0x58], 0x3f6f0000 */ W32((u32)(r_esp+0x58u), 0x3f6f0000u);
    /* 00719e03: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00719e07: mov dword ptr [esp + 0x5c], 0x3e0c0000 */ W32((u32)(r_esp+0x5cu), 0x3e0c0000u);
    /* 00719e0f: mov dword ptr [esp + 0x60], 0x3f7f0000 */ W32((u32)(r_esp+0x60u), 0x3f7f0000u);
    /* 00719e17: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00719e1c: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00719e20: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x719e25u); f_0082b440();
    /* 00719e25: fld dword ptr [0x96ff7c] */ FPUSH(R_F32((u32)(0x96ff7cu)));
    /* 00719e2b: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00719e32: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00719e34: fld dword ptr [0x96ffb4] */ FPUSH(R_F32((u32)(0x96ffb4u)));
    /* 00719e3a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00719e3c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00719e3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719e40: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00719e47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00719e48: jb 0x719dd9 */ if (fC) goto L_00719dd9;
L_00719e4a:; BB(0x00719e4a);
    /* 00719e4a: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
L_00719e4d:; BB(0x00719e4d);
    /* 00719e4d: fcom dword ptr [0x96ffa8] */ fx_compare(ST(0), R_F32((u32)(0x96ffa8u))); 
    /* 00719e53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00719e55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00719e56: jae 0x719ff1 */ if (!fC) goto L_00719ff1;
L_00719e5c:; BB(0x00719e5c);
    /* 00719e5c: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00719e63: jmp 0x719e6b */ goto L_00719e6b;
L_00719e65:; BB(0x00719e65);
    /* 00719e65: fld dword ptr [0x96ffb4] */ FPUSH(R_F32((u32)(0x96ffb4u)));
L_00719e6b:; BB(0x00719e6b);
    /* 00719e6b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00719e6f: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00719e76: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00719e7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00719e7c: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00719e80: mov dword ptr [esp + 0x4c], 0x44200000 */ W32((u32)(r_esp+0x4cu), 0x44200000u);
    /* 00719e88: mov dword ptr [esp + 0x54], 0x3d980000 */ W32((u32)(r_esp+0x54u), 0x3d980000u);
    /* 00719e90: mov dword ptr [esp + 0x58], 0x3f6f0000 */ W32((u32)(r_esp+0x58u), 0x3f6f0000u);
    /* 00719e98: mov dword ptr [esp + 0x5c], 0x3e0c0000 */ W32((u32)(r_esp+0x5cu), 0x3e0c0000u);
    /* 00719ea0: mov dword ptr [esp + 0x60], 0x3f7f0000 */ W32((u32)(r_esp+0x60u), 0x3f7f0000u);
    /* 00719ea8: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00719ead: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00719eb1: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x719eb6u); f_0082b440();
    /* 00719eb6: fld dword ptr [0x96ff7c] */ FPUSH(R_F32((u32)(0x96ff7cu)));
    /* 00719ebc: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00719ec3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00719ec5: fcom dword ptr [0x96ffa8] */ fx_compare(ST(0), R_F32((u32)(0x96ffa8u))); 
    /* 00719ecb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00719ecd: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00719ed4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00719ed5: jb 0x719e65 */ if (fC) goto L_00719e65;
L_00719ed7:; BB(0x00719ed7);
    /* 00719ed7: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00719eda: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00719ede: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719ee1: fsub dword ptr [0x96ff78] */ ST(0) = ST(0) - R_F32((u32)(0x96ff78u));
    /* 00719ee7: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00719eeb: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00719eee: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00719ef2: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00719ef5: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00719ef9: mov dword ptr [esp + 0x54], 0x3b800000 */ W32((u32)(r_esp+0x54u), 0x3b800000u);
    /* 00719f01: mov dword ptr [esp + 0x58], 0x3f6f0000 */ W32((u32)(r_esp+0x58u), 0x3f6f0000u);
    /* 00719f09: mov dword ptr [esp + 0x5c], 0x3d880000 */ W32((u32)(r_esp+0x5cu), 0x3d880000u);
    /* 00719f11: mov dword ptr [esp + 0x60], 0x3f7f0000 */ W32((u32)(r_esp+0x60u), 0x3f7f0000u);
    /* 00719f19: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00719f1e: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00719f22: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x719f27u); f_0082b440();
    /* 00719f27: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x719f2cu); f_004ac444();
    /* 00719f2c: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00719f2f: fsub dword ptr [0x96ff78] */ ST(0) = ST(0) - R_F32((u32)(0x96ff78u));
    /* 00719f35: mov dword ptr [esp + 0x6c], 0 */ W32((u32)(r_esp+0x6cu), 0x0u);
    /* 00719f3d: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 00719f41: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00719f45: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 00719f4c: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00719f4f: mov eax, 2 */ r_eax = 0x2u;
    /* 00719f54: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00719f58: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00719f5c: or ebp, 0xedff */ {  u32 a = r_ebp; u32 b = 0xedffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00719f62: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 00719f69: mov dword ptr [esp + 0x88], ebp */ W32((u32)(r_esp+0x88u), r_ebp);
    /* 00719f70: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 00719f73: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 00719f77: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00719f7b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00719f7e: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 00719f85: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00719f89: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 00719f8d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00719f8f: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719f95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719f96: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x719f9bu); f_0082b558();
    /* 00719f9b: fld dword ptr [0x96ff7c] */ FPUSH(R_F32((u32)(0x96ff7cu)));
    /* 00719fa1: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00719fa4: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00719fa7: mov edi, dword ptr [edi + 0x14] */ r_edi = R32((u32)(r_edi+0x14u));
    /* 00719faa: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00719fb1: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00719fb8: mov dword ptr [esp + 0x8c], edi */ W32((u32)(r_esp+0x8cu), r_edi);
    /* 00719fbf: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 00719fc6: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00719fca: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00719fcc: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00719fd1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00719fd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719fd4: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x719fd9u); f_0082b558();
    /* 00719fd9: add esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00719fdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00719fe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00719fe1: ret  */ FN_RET(0x00719b1c); r_esp += 4; return;
L_00719fe2:; BB(0x00719fe2);
    /* 00719fe2: fld dword ptr [0x96ff7c] */ FPUSH(R_F32((u32)(0x96ff7cu)));
    /* 00719fe8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00719fea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00719fec: jmp 0x719e4d */ goto L_00719e4d;
L_00719ff1:; BB(0x00719ff1);
    /* 00719ff1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00719ff3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00719ff5: jmp 0x719ed7 */ goto L_00719ed7;
}

void f_00719ffc(void) /* sub_719FFC */
{
    FN_ENTER(0x00719ffc);
    /* 00719ffc: call 0x715278 */ r_esp -= 4; W32(r_esp, 0x71a001u); f_00715278();
    /* 0071a001: fld dword ptr [0x96ff74] */ FPUSH(R_F32((u32)(0x96ff74u)));
    /* 0071a007: fcom dword ptr [0xa9848c] */ fx_compare(ST(0), R_F32((u32)(0xa9848cu))); 
    /* 0071a00d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a00f: fld dword ptr [0x96ffc8] */ FPUSH(R_F32((u32)(0x96ffc8u)));
    /* 0071a015: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a016: ja 0x71a028 */ if ((!fC&&!fZ)) goto L_0071a028;
L_0071a018:; BB(0x0071a018);
    /* 0071a018: fld dword ptr [0xa98488] */ FPUSH(R_F32((u32)(0xa98488u)));
    /* 0071a01e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071a020: fstp dword ptr [0xa98488] */ W_F32((u32)(0xa98488u), ST(0)); FPOP();
    /* 0071a026: jmp 0x71a036 */ goto L_0071a036;
L_0071a028:; BB(0x0071a028);
    /* 0071a028: fld dword ptr [0xa98488] */ FPUSH(R_F32((u32)(0xa98488u)));
    /* 0071a02e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071a030: fstp dword ptr [0xa98488] */ W_F32((u32)(0xa98488u), ST(0)); FPOP();
L_0071a036:; BB(0x0071a036);
    /* 0071a036: fld dword ptr [0x96ff70] */ FPUSH(R_F32((u32)(0x96ff70u)));
    /* 0071a03c: fld dword ptr [0xa98488] */ FPUSH(R_F32((u32)(0xa98488u)));
    /* 0071a042: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071a044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a047: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a049: jb 0x71a04d */ if (fC) goto L_0071a04d;
L_0071a04b:; BB(0x0071a04b);
    /* 0071a04b: fst st(1) */ ST(1) = ST(0);
L_0071a04d:; BB(0x0071a04d);
    /* 0071a04d: fld dword ptr [0x96ff6c] */ FPUSH(R_F32((u32)(0x96ff6cu)));
    /* 0071a053: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071a055: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a057: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a058: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071a05a: fcom dword ptr [0xa984a8] */ fx_compare(ST(0), R_F32((u32)(0xa984a8u))); 
    /* 0071a060: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a062: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071a064: jb 0x71a068 */ if (fC) goto L_0071a068;
L_0071a066:; BB(0x0071a066);
    /* 0071a066: fst st(2) */ ST(2) = ST(0);
L_0071a068:; BB(0x0071a068);
    /* 0071a068: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071a06a: fstp dword ptr [0xa98488] */ W_F32((u32)(0xa98488u), ST(0)); FPOP();
    /* 0071a070: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a071: ja 0x71a083 */ if ((!fC&&!fZ)) goto L_0071a083;
L_0071a073:; BB(0x0071a073);
    /* 0071a073: fld dword ptr [0xa984a4] */ FPUSH(R_F32((u32)(0xa984a4u)));
    /* 0071a079: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071a07b: fstp dword ptr [0xa984a4] */ W_F32((u32)(0xa984a4u), ST(0)); FPOP();
    /* 0071a081: jmp 0x71a091 */ goto L_0071a091;
L_0071a083:; BB(0x0071a083);
    /* 0071a083: fld dword ptr [0xa984a4] */ FPUSH(R_F32((u32)(0xa984a4u)));
    /* 0071a089: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071a08b: fstp dword ptr [0xa984a4] */ W_F32((u32)(0xa984a4u), ST(0)); FPOP();
L_0071a091:; BB(0x0071a091);
    /* 0071a091: fld dword ptr [0xa984a4] */ FPUSH(R_F32((u32)(0xa984a4u)));
    /* 0071a097: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071a099: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a09b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a09c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a09e: jb 0x71a0a2 */ if (fC) goto L_0071a0a2;
L_0071a0a0:; BB(0x0071a0a0);
    /* 0071a0a0: fst st(1) */ ST(1) = ST(0);
L_0071a0a2:; BB(0x0071a0a2);
    /* 0071a0a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a0a4: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071a0a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a0a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a0a9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071a0ab: fcom dword ptr [0xa984c4] */ fx_compare(ST(0), R_F32((u32)(0xa984c4u))); 
    /* 0071a0b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a0b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071a0b5: ja 0x71a0b9 */ if ((!fC&&!fZ)) goto L_0071a0b9;
L_0071a0b7:; BB(0x0071a0b7);
    /* 0071a0b7: fst st(4) */ ST(4) = ST(0);
L_0071a0b9:; BB(0x0071a0b9);
    /* 0071a0b9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071a0bb: fstp dword ptr [0xa984a4] */ W_F32((u32)(0xa984a4u), ST(0)); FPOP();
    /* 0071a0c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a0c2: ja 0x71a0d4 */ if ((!fC&&!fZ)) goto L_0071a0d4;
L_0071a0c4:; BB(0x0071a0c4);
    /* 0071a0c4: fld dword ptr [0xa984c0] */ FPUSH(R_F32((u32)(0xa984c0u)));
    /* 0071a0ca: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071a0cc: fstp dword ptr [0xa984c0] */ W_F32((u32)(0xa984c0u), ST(0)); FPOP();
    /* 0071a0d2: jmp 0x71a0e2 */ goto L_0071a0e2;
L_0071a0d4:; BB(0x0071a0d4);
    /* 0071a0d4: fld dword ptr [0xa984c0] */ FPUSH(R_F32((u32)(0xa984c0u)));
    /* 0071a0da: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071a0dc: fstp dword ptr [0xa984c0] */ W_F32((u32)(0xa984c0u), ST(0)); FPOP();
L_0071a0e2:; BB(0x0071a0e2);
    /* 0071a0e2: fld dword ptr [0xa984c0] */ FPUSH(R_F32((u32)(0xa984c0u)));
    /* 0071a0e8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071a0ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a0ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a0ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a0ef: jb 0x71a0f3 */ if (fC) goto L_0071a0f3;
L_0071a0f1:; BB(0x0071a0f1);
    /* 0071a0f1: fst st(1) */ ST(1) = ST(0);
L_0071a0f3:; BB(0x0071a0f3);
    /* 0071a0f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a0f5: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0071a0f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a0f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a0fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071a0fc: fcomp dword ptr [0xa984e0] */ fx_compare(ST(0), R_F32((u32)(0xa984e0u))); FPOP();
    /* 0071a102: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a104: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071a106: ja 0x71a10a */ if ((!fC&&!fZ)) goto L_0071a10a;
L_0071a108:; BB(0x0071a108);
    /* 0071a108: fst st(1) */ ST(1) = ST(0);
L_0071a10a:; BB(0x0071a10a);
    /* 0071a10a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a10c: fstp dword ptr [0xa984c0] */ W_F32((u32)(0xa984c0u), ST(0)); FPOP();
    /* 0071a112: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a113: ja 0x71a127 */ if ((!fC&&!fZ)) goto L_0071a127;
L_0071a115:; BB(0x0071a115);
    /* 0071a115: fld dword ptr [0xa984dc] */ FPUSH(R_F32((u32)(0xa984dcu)));
    /* 0071a11b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071a11d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a11f: fstp dword ptr [0xa984dc] */ W_F32((u32)(0xa984dcu), ST(0)); FPOP();
    /* 0071a125: jmp 0x71a137 */ goto L_0071a137;
L_0071a127:; BB(0x0071a127);
    /* 0071a127: fld dword ptr [0xa984dc] */ FPUSH(R_F32((u32)(0xa984dcu)));
    /* 0071a12d: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0071a12f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071a131: fstp dword ptr [0xa984dc] */ W_F32((u32)(0xa984dcu), ST(0)); FPOP();
L_0071a137:; BB(0x0071a137);
    /* 0071a137: fld dword ptr [0xa984dc] */ FPUSH(R_F32((u32)(0xa984dcu)));
    /* 0071a13d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071a13f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a141: mov ecx, dword ptr [0xa98538] */ r_ecx = R32((u32)(0xa98538u));
    /* 0071a147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a148: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071a14a: jb 0x71a14e */ if (fC) goto L_0071a14e;
L_0071a14c:; BB(0x0071a14c);
    /* 0071a14c: fst st(2) */ ST(2) = ST(0);
L_0071a14e:; BB(0x0071a14e);
    /* 0071a14e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071a150: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071a152: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071a154: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071a155: jb 0x71a159 */ if (fC) goto L_0071a159;
L_0071a157:; BB(0x0071a157);
    /* 0071a157: fst st(1) */ ST(1) = ST(0);
L_0071a159:; BB(0x0071a159);
    /* 0071a159: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071a15b: fstp dword ptr [0xa984dc] */ W_F32((u32)(0xa984dcu), ST(0)); FPOP();
    /* 0071a161: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x71a166u); f_00817574();
    /* 0071a166: ret  */ FN_RET(0x00719ffc); r_esp += 4; return;
}

