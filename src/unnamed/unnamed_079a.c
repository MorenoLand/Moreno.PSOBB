#include "protos.h"

void f_0079a004(void) /* sub_79A004 */
{
    FN_ENTER(0x0079a004);
    /* 0079a004: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079a00a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a00c: je 0x79a047 */ if (fZ) goto L_0079a047;
L_0079a00e:; BB(0x0079a00e);
    /* 0079a00e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x79a013u); f_0073ce50();
    /* 0079a013: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a015: je 0x79a032 */ if (fZ) goto L_0079a032;
L_0079a017:; BB(0x0079a017);
    /* 0079a017: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079a01d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x79a022u); f_0073d134();
    /* 0079a022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a024: jne 0x79a02c */ if (!fZ) goto L_0079a02c;
L_0079a026:; BB(0x0079a026);
    /* 0079a026: call 0x79a288 */ r_esp -= 4; W32(r_esp, 0x79a02bu); f_0079a288();
    /* 0079a02b: ret  */ FN_RET(0x0079a004); r_esp += 4; return;
L_0079a02c:; BB(0x0079a02c);
    /* 0079a02c: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a031u); f_0079a050();
    /* 0079a031: ret  */ FN_RET(0x0079a004); r_esp += 4; return;
L_0079a032:; BB(0x0079a032);
    /* 0079a032: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079a038: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x79a03du); f_0073d114();
    /* 0079a03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a03f: je 0x79a046 */ if (fZ) goto L_0079a046;
L_0079a041:; BB(0x0079a041);
    /* 0079a041: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a046u); f_0079a050();
L_0079a046:; BB(0x0079a046);
    /* 0079a046: ret  */ FN_RET(0x0079a004); r_esp += 4; return;
L_0079a047:; BB(0x0079a047);
    /* 0079a047: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a04cu); f_0079a050();
    /* 0079a04c: ret  */ FN_RET(0x0079a004); r_esp += 4; return;
}

void f_0079a050(void) /* sub_79A050 */
{
    FN_ENTER(0x0079a050);
    /* 0079a050: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079a056: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a058: je 0x79a069 */ if (fZ) goto L_0079a069;
L_0079a05a:; BB(0x0079a05a);
    /* 0079a05a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a05fu); f_007127b0();
    /* 0079a05f: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079a069:; BB(0x0079a069);
    /* 0079a069: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079a06f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a071: je 0x79a082 */ if (fZ) goto L_0079a082;
L_0079a073:; BB(0x0079a073);
    /* 0079a073: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a078u); f_007127b0();
    /* 0079a078: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079a082:; BB(0x0079a082);
    /* 0079a082: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079a088: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a08a: je 0x79a09b */ if (fZ) goto L_0079a09b;
L_0079a08c:; BB(0x0079a08c);
    /* 0079a08c: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79a091u); f_0073d160();
    /* 0079a091: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079a09b:; BB(0x0079a09b);
    /* 0079a09b: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079a0a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a0a3: je 0x79a0b4 */ if (fZ) goto L_0079a0b4;
L_0079a0a5:; BB(0x0079a0a5);
    /* 0079a0a5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a0aau); f_007127b0();
    /* 0079a0aa: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079a0b4:; BB(0x0079a0b4);
    /* 0079a0b4: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079a0ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a0bc: je 0x79a0cd */ if (fZ) goto L_0079a0cd;
L_0079a0be:; BB(0x0079a0be);
    /* 0079a0be: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a0c3u); f_007127b0();
    /* 0079a0c3: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_0079a0cd:; BB(0x0079a0cd);
    /* 0079a0cd: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 0079a0d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a0d5: je 0x79a0e6 */ if (fZ) goto L_0079a0e6;
L_0079a0d7:; BB(0x0079a0d7);
    /* 0079a0d7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a0dcu); f_007127b0();
    /* 0079a0dc: mov dword ptr [0xaab260], 0 */ W32((u32)(0xaab260u), 0x0u);
L_0079a0e6:; BB(0x0079a0e6);
    /* 0079a0e6: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079a0ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a0ee: je 0x79a0ff */ if (fZ) goto L_0079a0ff;
L_0079a0f0:; BB(0x0079a0f0);
    /* 0079a0f0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a0f5u); f_007127b0();
    /* 0079a0f5: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
L_0079a0ff:; BB(0x0079a0ff);
    /* 0079a0ff: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a105: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a107: je 0x79a118 */ if (fZ) goto L_0079a118;
L_0079a109:; BB(0x0079a109);
    /* 0079a109: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a10eu); f_007127b0();
    /* 0079a10e: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
L_0079a118:; BB(0x0079a118);
    /* 0079a118: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079a11e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a120: je 0x79a131 */ if (fZ) goto L_0079a131;
L_0079a122:; BB(0x0079a122);
    /* 0079a122: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a127u); f_007127b0();
    /* 0079a127: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
L_0079a131:; BB(0x0079a131);
    /* 0079a131: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079a137: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a139: je 0x79a14a */ if (fZ) goto L_0079a14a;
L_0079a13b:; BB(0x0079a13b);
    /* 0079a13b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a140u); f_007127b0();
    /* 0079a140: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_0079a14a:; BB(0x0079a14a);
    /* 0079a14a: mov edx, dword ptr [0xaab24c] */ r_edx = R32((u32)(0xaab24cu));
    /* 0079a150: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a152: je 0x79a16b */ if (fZ) goto L_0079a16b;
L_0079a154:; BB(0x0079a154);
    /* 0079a154: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a158: mov dword ptr [0xaab24c], 0 */ W32((u32)(0xaab24cu), 0x0u);
    /* 0079a162: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a167: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a16b:; BB(0x0079a16b);
    /* 0079a16b: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 0079a171: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a173: je 0x79a18c */ if (fZ) goto L_0079a18c;
L_0079a175:; BB(0x0079a175);
    /* 0079a175: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a179: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 0079a183: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a188: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a18c:; BB(0x0079a18c);
    /* 0079a18c: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 0079a192: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a194: je 0x79a1ad */ if (fZ) goto L_0079a1ad;
L_0079a196:; BB(0x0079a196);
    /* 0079a196: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a19a: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 0079a1a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a1a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a1ad:; BB(0x0079a1ad);
    /* 0079a1ad: mov edx, dword ptr [0xaab22c] */ r_edx = R32((u32)(0xaab22cu));
    /* 0079a1b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a1b5: je 0x79a1ce */ if (fZ) goto L_0079a1ce;
L_0079a1b7:; BB(0x0079a1b7);
    /* 0079a1b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a1bb: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079a1c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a1ca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a1ce:; BB(0x0079a1ce);
    /* 0079a1ce: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 0079a1d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a1d6: je 0x79a1ef */ if (fZ) goto L_0079a1ef;
L_0079a1d8:; BB(0x0079a1d8);
    /* 0079a1d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a1dc: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 0079a1e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a1eb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a1ef:; BB(0x0079a1ef);
    /* 0079a1ef: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 0079a1f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a1f7: je 0x79a208 */ if (fZ) goto L_0079a208;
L_0079a1f9:; BB(0x0079a1f9);
    /* 0079a1f9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a1feu); f_007127b0();
    /* 0079a1fe: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_0079a208:; BB(0x0079a208);
    /* 0079a208: mov edx, dword ptr [0xaab234] */ r_edx = R32((u32)(0xaab234u));
    /* 0079a20e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a210: je 0x79a229 */ if (fZ) goto L_0079a229;
L_0079a212:; BB(0x0079a212);
    /* 0079a212: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a216: mov dword ptr [0xaab234], 0 */ W32((u32)(0xaab234u), 0x0u);
    /* 0079a220: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a225: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a229:; BB(0x0079a229);
    /* 0079a229: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 0079a22f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a231: je 0x79a24a */ if (fZ) goto L_0079a24a;
L_0079a233:; BB(0x0079a233);
    /* 0079a233: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a237: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 0079a241: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a246: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a24a:; BB(0x0079a24a);
    /* 0079a24a: call 0x79a264 */ r_esp -= 4; W32(r_esp, 0x79a24fu); f_0079a264();
    /* 0079a24f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a251: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a256u); f_00791748();
    /* 0079a256: mov dword ptr [0xaab218], 0 */ W32((u32)(0xaab218u), 0x0u);
    /* 0079a260: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a261: ret  */ FN_RET(0x0079a050); r_esp += 4; return;
}

void f_0079a264(void) /* sub_79A264 */
{
    FN_ENTER(0x0079a264);
    /* 0079a264: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079a26a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79a26fu); f_0068d5a8();
    /* 0079a26f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a272: je 0x79a27b */ if (fZ) goto L_0079a27b;
L_0079a274:; BB(0x0079a274);
    /* 0079a274: mov ecx, eax */ r_ecx = r_eax;
    /* 0079a276: call 0x694308 */ r_esp -= 4; W32(r_esp, 0x79a27bu); f_00694308();
L_0079a27b:; BB(0x0079a27b);
    /* 0079a27b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079a281: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x79a286u); f_00717ed8();
    /* 0079a286: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a287: ret  */ FN_RET(0x0079a264); r_esp += 4; return;
}

void f_0079a288(void) /* sub_79A288 */
{
    FN_ENTER(0x0079a288);
    /* 0079a288: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079a289: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079a28f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a291: je 0x79a2a2 */ if (fZ) goto L_0079a2a2;
L_0079a293:; BB(0x0079a293);
    /* 0079a293: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79a298u); f_0073d160();
    /* 0079a298: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079a2a2:; BB(0x0079a2a2);
    /* 0079a2a2: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079a2a8: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79a2adu); f_0073600c();
    /* 0079a2ad: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079a2b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a2b5: je 0x79a30b */ if (fZ) goto L_0079a30b;
L_0079a2b7:; BB(0x0079a2b7);
    /* 0079a2b7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079a2be: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079a2c3: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0079a2c6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079a2cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a2cf: je 0x79a2de */ if (fZ) goto L_0079a2de;
L_0079a2d1:; BB(0x0079a2d1);
    /* 0079a2d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a2d3: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x79a2d8u); f_00760acc();
    /* 0079a2d8: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
L_0079a2de:; BB(0x0079a2de);
    /* 0079a2de: mov ecx, edx */ r_ecx = r_edx;
    /* 0079a2e0: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x79a2e5u); f_0073605c();
L_0079a2e5:; BB(0x0079a2e5);
    /* 0079a2e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a2e7: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a2ecu); f_00791748();
    /* 0079a2ec: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0079a2f3: mov dword ptr [0xaab218], 0x1c */ W32((u32)(0xaab218u), 0x1cu);
    /* 0079a2fd: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a302: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0079a308: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a309: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079a30a: ret  */ FN_RET(0x0079a288); r_esp += 4; return;
L_0079a30b:; BB(0x0079a30b);
    /* 0079a30b: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a310: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79a315u); f_0073ec50();
    /* 0079a315: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a318: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x79a31du); f_00735708();
    /* 0079a31d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079a320: mov dword ptr [0xaab258], eax */ W32((u32)(0xaab258u), r_eax);
    /* 0079a325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a327: je 0x79a2e5 */ if (fZ) goto L_0079a2e5;
L_0079a329:; BB(0x0079a329);
    /* 0079a329: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a32b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a330u); f_00793168();
    /* 0079a330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a331: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a339: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a33c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79a341u); f_00735c90();
    /* 0079a341: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a343: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a348u); f_00793168();
    /* 0079a348: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a349: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a34f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a351: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a354: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79a359u); f_00735c90();
    /* 0079a359: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079a35b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a360u); f_00793168();
    /* 0079a360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a361: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a367: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a369: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a36b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a36c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79a371u); f_00735c90();
    /* 0079a371: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079a373: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a378u); f_00793168();
    /* 0079a378: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a379: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a37f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a381: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a384: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79a389u); f_00735c90();
    /* 0079a389: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a38f: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x79a394u); f_0073608c();
    /* 0079a394: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a39a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79a39fu); f_00736458();
    /* 0079a39f: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a3a5: movzx edi, word ptr [ecx + 0x84] */ r_edi = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079a3ac: or edi, 0xffff0001 */ {  u32 a = r_edi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0079a3b2: mov word ptr [ecx + 0x84], di */ W16((u32)(r_ecx+0x84u), (u16)r_edi);
    /* 0079a3b9: mov edi, dword ptr [0xa95df0] */ r_edi = R32((u32)(0xa95df0u));
    /* 0079a3bf: mov eax, dword ptr [edi + 0x2b8] */ r_eax = R32((u32)(r_edi+0x2b8u));
    /* 0079a3c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a3c7: jne 0x79a3eb */ if (!fZ) goto L_0079a3eb;
L_0079a3c9:; BB(0x0079a3c9);
    /* 0079a3c9: mov eax, dword ptr [edi + 0x2bc] */ r_eax = R32((u32)(r_edi+0x2bcu));
    /* 0079a3cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a3d1: jne 0x79a3eb */ if (!fZ) goto L_0079a3eb;
L_0079a3d3:; BB(0x0079a3d3);
    /* 0079a3d3: mov eax, dword ptr [edi + 0x2c0] */ r_eax = R32((u32)(r_edi+0x2c0u));
    /* 0079a3d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a3db: jne 0x79a3eb */ if (!fZ) goto L_0079a3eb;
L_0079a3dd:; BB(0x0079a3dd);
    /* 0079a3dd: mov eax, dword ptr [edi + 0x2c4] */ r_eax = R32((u32)(r_edi+0x2c4u));
    /* 0079a3e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a3e5: jne 0x79a3eb */ if (!fZ) goto L_0079a3eb;
L_0079a3e7:; BB(0x0079a3e7);
    /* 0079a3e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079a3e9: jmp 0x79a3f0 */ goto L_0079a3f0;
L_0079a3eb:; BB(0x0079a3eb);
    /* 0079a3eb: mov eax, 1 */ r_eax = 0x1u;
L_0079a3f0:; BB(0x0079a3f0);
    /* 0079a3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a3f2: je 0x79a3fd */ if (fZ) goto L_0079a3fd;
L_0079a3f4:; BB(0x0079a3f4);
    /* 0079a3f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a3f6: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a3fbu); f_0073662c();
    /* 0079a3fb: jmp 0x79a411 */ goto L_0079a411;
L_0079a3fd:; BB(0x0079a3fd);
    /* 0079a3fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a3ff: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a404u); f_0073662c();
    /* 0079a404: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a40a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a40c: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a411u); f_0073662c();
L_0079a411:; BB(0x0079a411);
    /* 0079a411: movzx eax, byte ptr [edi + 0x2c8] */ r_eax = (u32)R8((u32)(r_edi+0x2c8u));
    /* 0079a418: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a41b: je 0x79a449 */ if (fZ) goto L_0079a449;
L_0079a41d:; BB(0x0079a41d);
    /* 0079a41d: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a423: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a425: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a42au); f_0073662c();
L_0079a42a:; BB(0x0079a42a);
    /* 0079a42a: mov eax, dword ptr [0xa46c44] */ r_eax = R32((u32)(0xa46c44u));
    /* 0079a42f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a431: jne 0x79a2e5 */ if (!fZ) goto L_0079a2e5;
L_0079a437:; BB(0x0079a437);
    /* 0079a437: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a43d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a43f: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a444u); f_0073662c();
    /* 0079a444: jmp 0x79a2e5 */ goto L_0079a2e5;
L_0079a449:; BB(0x0079a449);
    /* 0079a449: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a44f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a451: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x79a456u); f_0073662c();
    /* 0079a456: jmp 0x79a42a */ goto L_0079a42a;
}

void f_0079a458(void) /* sub_79A458 */
{
    FN_ENTER(0x0079a458);
    /* 0079a458: mov eax, dword ptr [0xaab22c] */ r_eax = R32((u32)(0xaab22cu));
    /* 0079a45d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a45f: je 0x79a4b7 */ if (fZ) goto L_0079a4b7;
L_0079a461:; BB(0x0079a461);
    /* 0079a461: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x79a466u); f_00694c6c();
    /* 0079a466: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0079a46c: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0079a472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079a473: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0079a476: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079a478: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079a47a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079a47c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079a483: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79a488u); f_007c1160();
    /* 0079a488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a48a: je 0x79a4b6 */ if (fZ) goto L_0079a4b6;
L_0079a48c:; BB(0x0079a48c);
    /* 0079a48c: mov ecx, dword ptr [0xaab22c] */ r_ecx = R32((u32)(0xaab22cu));
    /* 0079a492: call 0x411b0c */ r_esp -= 4; W32(r_esp, 0x79a497u); f_00411b0c();
    /* 0079a497: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079a4a1: call 0x79a4c0 */ r_esp -= 4; W32(r_esp, 0x79a4a6u); f_0079a4c0();
    /* 0079a4a6: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x79a4abu); f_007bebe8();
    /* 0079a4ab: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079a4b1: call 0x7ebab4 */ r_esp -= 4; W32(r_esp, 0x79a4b6u); f_007ebab4();
L_0079a4b6:; BB(0x0079a4b6);
    /* 0079a4b6: ret  */ FN_RET(0x0079a458); r_esp += 4; return;
L_0079a4b7:; BB(0x0079a4b7);
    /* 0079a4b7: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a4bcu); f_0079a050();
    /* 0079a4bc: ret  */ FN_RET(0x0079a458); r_esp += 4; return;
}

void f_0079a4c0(void) /* sub_79A4C0 */
{
    FN_ENTER(0x0079a4c0);
    /* 0079a4c0: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079a4c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a4c8: je 0x79a4d9 */ if (fZ) goto L_0079a4d9;
L_0079a4ca:; BB(0x0079a4ca);
    /* 0079a4ca: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a4cfu); f_007127b0();
    /* 0079a4cf: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079a4d9:; BB(0x0079a4d9);
    /* 0079a4d9: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079a4df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a4e1: je 0x79a4f2 */ if (fZ) goto L_0079a4f2;
L_0079a4e3:; BB(0x0079a4e3);
    /* 0079a4e3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a4e8u); f_007127b0();
    /* 0079a4e8: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079a4f2:; BB(0x0079a4f2);
    /* 0079a4f2: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079a4f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a4fa: je 0x79a50b */ if (fZ) goto L_0079a50b;
L_0079a4fc:; BB(0x0079a4fc);
    /* 0079a4fc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a501u); f_007127b0();
    /* 0079a501: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079a50b:; BB(0x0079a50b);
    /* 0079a50b: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079a511: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a513: je 0x79a524 */ if (fZ) goto L_0079a524;
L_0079a515:; BB(0x0079a515);
    /* 0079a515: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a51au); f_007127b0();
    /* 0079a51a: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_0079a524:; BB(0x0079a524);
    /* 0079a524: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 0079a52a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a52c: je 0x79a53d */ if (fZ) goto L_0079a53d;
L_0079a52e:; BB(0x0079a52e);
    /* 0079a52e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a533u); f_007127b0();
    /* 0079a533: mov dword ptr [0xaab260], 0 */ W32((u32)(0xaab260u), 0x0u);
L_0079a53d:; BB(0x0079a53d);
    /* 0079a53d: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079a543: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a545: je 0x79a556 */ if (fZ) goto L_0079a556;
L_0079a547:; BB(0x0079a547);
    /* 0079a547: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a54cu); f_007127b0();
    /* 0079a54c: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
L_0079a556:; BB(0x0079a556);
    /* 0079a556: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a55c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a55e: je 0x79a56f */ if (fZ) goto L_0079a56f;
L_0079a560:; BB(0x0079a560);
    /* 0079a560: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a565u); f_007127b0();
    /* 0079a565: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
L_0079a56f:; BB(0x0079a56f);
    /* 0079a56f: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079a575: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a577: je 0x79a588 */ if (fZ) goto L_0079a588;
L_0079a579:; BB(0x0079a579);
    /* 0079a579: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a57eu); f_007127b0();
    /* 0079a57e: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
L_0079a588:; BB(0x0079a588);
    /* 0079a588: mov edx, dword ptr [0xaab24c] */ r_edx = R32((u32)(0xaab24cu));
    /* 0079a58e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a590: je 0x79a5a9 */ if (fZ) goto L_0079a5a9;
L_0079a592:; BB(0x0079a592);
    /* 0079a592: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a596: mov dword ptr [0xaab24c], 0 */ W32((u32)(0xaab24cu), 0x0u);
    /* 0079a5a0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a5a5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a5a9:; BB(0x0079a5a9);
    /* 0079a5a9: mov edx, dword ptr [0xaab248] */ r_edx = R32((u32)(0xaab248u));
    /* 0079a5af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a5b1: je 0x79a5ca */ if (fZ) goto L_0079a5ca;
L_0079a5b3:; BB(0x0079a5b3);
    /* 0079a5b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a5b7: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 0079a5c1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a5c6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a5ca:; BB(0x0079a5ca);
    /* 0079a5ca: mov edx, dword ptr [0xaab22c] */ r_edx = R32((u32)(0xaab22cu));
    /* 0079a5d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a5d2: je 0x79a5eb */ if (fZ) goto L_0079a5eb;
L_0079a5d4:; BB(0x0079a5d4);
    /* 0079a5d4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079a5d8: mov dword ptr [0xaab22c], 0 */ W32((u32)(0xaab22cu), 0x0u);
    /* 0079a5e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079a5e7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079a5eb:; BB(0x0079a5eb);
    /* 0079a5eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a5ed: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a5f2u); f_00791748();
    /* 0079a5f2: mov dword ptr [0xaab218], 0xe */ W32((u32)(0xaab218u), 0xeu);
    /* 0079a5fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a5fd: ret  */ FN_RET(0x0079a4c0); r_esp += 4; return;
}

void f_0079a600(void) /* sub_79A600 */
{
    FN_ENTER(0x0079a600);
    /* 0079a600: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a606: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a608: je 0x79a63e */ if (fZ) goto L_0079a63e;
L_0079a60a:; BB(0x0079a60a);
    /* 0079a60a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79a60fu); f_007365f4();
    /* 0079a60f: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 0079a615: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 0079a61c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079a61f: je 0x79a633 */ if (fZ) goto L_0079a633;
L_0079a621:; BB(0x0079a621);
    /* 0079a621: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079a627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a628: call 0x7d7b20 */ r_esp -= 4; W32(r_esp, 0x79a62du); f_007d7b20();
    /* 0079a62d: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a632u); f_0079a050();
    /* 0079a632: ret  */ FN_RET(0x0079a600); r_esp += 4; return;
L_0079a633:; BB(0x0079a633);
    /* 0079a633: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a636: je 0x79a63d */ if (fZ) goto L_0079a63d;
L_0079a638:; BB(0x0079a638);
    /* 0079a638: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a63du); f_0079a050();
L_0079a63d:; BB(0x0079a63d);
    /* 0079a63d: ret  */ FN_RET(0x0079a600); r_esp += 4; return;
L_0079a63e:; BB(0x0079a63e);
    /* 0079a63e: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a643u); f_0079a050();
    /* 0079a643: ret  */ FN_RET(0x0079a600); r_esp += 4; return;
}

void f_0079a644(void) /* sub_79A644 */
{
    FN_ENTER(0x0079a644);
    /* 0079a644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a645: mov ebp, esp */ r_ebp = r_esp;
    /* 0079a647: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079a649: push 0x8f5452 */ { u32 v = 0x8f5452u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a64e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079a654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a655: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079a65c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079a65f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079a662: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079a665: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079a668: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079a66b: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079a671: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a673: je 0x79a891 */ if (fZ) goto L_0079a891;
L_0079a679:; BB(0x0079a679);
    /* 0079a679: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79a67eu); f_007365f4();
    /* 0079a67e: mov ebx, eax */ r_ebx = r_eax;
    /* 0079a680: cmp ebx, dword ptr [0xa9d540] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9d540u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a686: je 0x79a6d7 */ if (fZ) goto L_0079a6d7;
L_0079a688:; BB(0x0079a688);
    /* 0079a688: mov dword ptr [0xa9d540], ebx */ W32((u32)(0xa9d540u), r_ebx);
    /* 0079a68e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a690: je 0x79a6c8 */ if (fZ) goto L_0079a6c8;
L_0079a692:; BB(0x0079a692);
    /* 0079a692: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a695: jne 0x79a6a8 */ if (!fZ) goto L_0079a6a8;
L_0079a697:; BB(0x0079a697);
    /* 0079a697: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a699: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a69eu); f_00793168();
    /* 0079a69e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a69f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079a6a0: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79a6a5u); f_0079a8c4();
    /* 0079a6a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a6a6: jmp 0x79a6d7 */ goto L_0079a6d7;
L_0079a6a8:; BB(0x0079a6a8);
    /* 0079a6a8: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a6ab: jne 0x79a6d7 */ if (!fZ) goto L_0079a6d7;
L_0079a6ad:; BB(0x0079a6ad);
    /* 0079a6ad: mov edx, dword ptr [0xa46c40] */ r_edx = R32((u32)(0xa46c40u));
    /* 0079a6b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a6b5: je 0x79a6d7 */ if (fZ) goto L_0079a6d7;
L_0079a6b7:; BB(0x0079a6b7);
    /* 0079a6b7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a6b9: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a6beu); f_00793168();
    /* 0079a6be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a6bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079a6c0: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79a6c5u); f_0079a8c4();
    /* 0079a6c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a6c6: jmp 0x79a6d7 */ goto L_0079a6d7;
L_0079a6c8:; BB(0x0079a6c8);
    /* 0079a6c8: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a6ca: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79a6cfu); f_00793168();
    /* 0079a6cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a6d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079a6d1: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79a6d6u); f_0079a8c4();
    /* 0079a6d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079a6d7:; BB(0x0079a6d7);
    /* 0079a6d7: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079a6dd: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079a6e4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079a6e7: je 0x79a887 */ if (fZ) goto L_0079a887;
L_0079a6ed:; BB(0x0079a6ed);
    /* 0079a6ed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a6f2u); f_007127b0();
    /* 0079a6f2: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
    /* 0079a6fc: call 0x79a92c */ r_esp -= 4; W32(r_esp, 0x79a701u); f_0079a92c();
    /* 0079a701: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079a707: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a709: je 0x79a71a */ if (fZ) goto L_0079a71a;
L_0079a70b:; BB(0x0079a70b);
    /* 0079a70b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a710u); f_007127b0();
    /* 0079a710: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
L_0079a71a:; BB(0x0079a71a);
    /* 0079a71a: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079a720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a722: je 0x79a733 */ if (fZ) goto L_0079a733;
L_0079a724:; BB(0x0079a724);
    /* 0079a724: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a729u); f_007127b0();
    /* 0079a729: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
L_0079a733:; BB(0x0079a733);
    /* 0079a733: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a735: je 0x79a825 */ if (fZ) goto L_0079a825;
L_0079a73b:; BB(0x0079a73b);
    /* 0079a73b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a73e: jne 0x79a7a9 */ if (!fZ) goto L_0079a7a9;
L_0079a740:; BB(0x0079a740);
    /* 0079a740: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0079a747: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a749: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79a74eu); f_005caba4();
    /* 0079a74e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a751: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079a754: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0079a757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a759: je 0x79a8a2 */ if (fZ) goto L_0079a8a2;
L_0079a75f:; BB(0x0079a75f);
    /* 0079a75f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0079a766: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0079a76d: mov ecx, eax */ r_ecx = r_eax;
    /* 0079a76f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a771: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079a777: call 0x733f20 */ r_esp -= 4; W32(r_esp, 0x79a77cu); f_00733f20();
    /* 0079a77c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0079a783:; BB(0x0079a783);
    /* 0079a783: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079a786: mov dword ptr [0xaab24c], eax */ W32((u32)(0xaab24cu), r_eax);
    /* 0079a78b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079a792: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a794: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a799u); f_00791748();
    /* 0079a799: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a79a: mov dword ptr [0xaab218], 0xa */ W32((u32)(0xaab218u), 0xau);
    /* 0079a7a4: jmp 0x79a891 */ goto L_0079a891;
L_0079a7a9:; BB(0x0079a7a9);
    /* 0079a7a9: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079a7ac: jne 0x79a891 */ if (!fZ) goto L_0079a891;
L_0079a7b2:; BB(0x0079a7b2);
    /* 0079a7b2: mov eax, dword ptr [0xa46c40] */ r_eax = R32((u32)(0xa46c40u));
    /* 0079a7b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a7b9: je 0x79a891 */ if (fZ) goto L_0079a891;
L_0079a7bf:; BB(0x0079a7bf);
    /* 0079a7bf: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0079a7c6: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a7c8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79a7cdu); f_005caba4();
    /* 0079a7cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a7d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079a7d3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0079a7d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a7d8: je 0x79a8ac */ if (fZ) goto L_0079a8ac;
L_0079a7de:; BB(0x0079a7de);
    /* 0079a7de: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0079a7e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079a7ec: mov ecx, eax */ r_ecx = r_eax;
    /* 0079a7ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a7f0: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079a7f6: call 0x733f20 */ r_esp -= 4; W32(r_esp, 0x79a7fbu); f_00733f20();
    /* 0079a7fb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0079a802:; BB(0x0079a802);
    /* 0079a802: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079a805: mov dword ptr [0xaab24c], eax */ W32((u32)(0xaab24cu), r_eax);
    /* 0079a80a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079a811: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a813: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a818u); f_00791748();
    /* 0079a818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a819: mov dword ptr [0xaab218], 0xa */ W32((u32)(0xaab218u), 0xau);
    /* 0079a823: jmp 0x79a891 */ goto L_0079a891;
L_0079a825:; BB(0x0079a825);
    /* 0079a825: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0079a82c: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a82e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79a833u); f_005caba4();
    /* 0079a833: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079a839: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079a83c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a83e: je 0x79a8b6 */ if (fZ) goto L_0079a8b6;
L_0079a840:; BB(0x0079a840);
    /* 0079a840: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0079a847: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0079a84e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079a850: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a852: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079a858: call 0x733f20 */ r_esp -= 4; W32(r_esp, 0x79a85du); f_00733f20();
    /* 0079a85d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0079a864:; BB(0x0079a864);
    /* 0079a864: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079a867: mov dword ptr [0xaab24c], eax */ W32((u32)(0xaab24cu), r_eax);
    /* 0079a86c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079a873: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a875: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x79a87au); f_00791748();
    /* 0079a87a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079a87b: mov dword ptr [0xaab218], 0xa */ W32((u32)(0xaab218u), 0xau);
    /* 0079a885: jmp 0x79a891 */ goto L_0079a891;
L_0079a887:; BB(0x0079a887);
    /* 0079a887: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a88a: je 0x79a891 */ if (fZ) goto L_0079a891;
L_0079a88c:; BB(0x0079a88c);
    /* 0079a88c: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a891u); f_0079a050();
L_0079a891:; BB(0x0079a891);
    /* 0079a891: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079a894: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079a897: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079a89e: mov esp, ebp */ r_esp = r_ebp;
    /* 0079a8a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079a8a1: ret  */ FN_RET(0x0079a644); r_esp += 4; return;
L_0079a8a2:; BB(0x0079a8a2);
    /* 0079a8a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079a8a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a8a7: jmp 0x79a783 */ goto L_0079a783;
L_0079a8ac:; BB(0x0079a8ac);
    /* 0079a8ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079a8ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a8b1: jmp 0x79a802 */ goto L_0079a802;
L_0079a8b6:; BB(0x0079a8b6);
    /* 0079a8b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079a8b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079a8bb: jmp 0x79a864 */ goto L_0079a864;
}

void f_0079a8c4(void) /* sub_79A8C4 */
{
    FN_ENTER(0x0079a8c4);
    /* 0079a8c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a8c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079a8c8: mov ebp, eax */ r_ebp = r_eax;
    /* 0079a8ca: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079a8d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a8d2: je 0x79a8e5 */ if (fZ) goto L_0079a8e5;
L_0079a8d4:; BB(0x0079a8d4);
    /* 0079a8d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a8d6: je 0x79a8e0 */ if (fZ) goto L_0079a8e0;
L_0079a8d8:; BB(0x0079a8d8);
    /* 0079a8d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a8da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a8db: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79a8e0u); f_0073ae38();
L_0079a8e0:; BB(0x0079a8e0);
    /* 0079a8e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079a8e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079a8e4: ret  */ FN_RET(0x0079a8c4); r_esp += 4; return;
L_0079a8e5:; BB(0x0079a8e5);
    /* 0079a8e5: mov dword ptr [esp], 0x43ab0000 */ W32((u32)(r_esp), 0x43ab0000u);
    /* 0079a8ec: mov dword ptr [esp + 4], 0x43100000 */ W32((u32)(r_esp+0x4u), 0x43100000u);
    /* 0079a8f4: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a8f9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79a8feu); f_0073ec50();
    /* 0079a8fe: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079a902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079a903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a904: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x79a909u); f_0073a888();
    /* 0079a909: mov ecx, eax */ r_ecx = r_eax;
    /* 0079a90b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079a90e: mov dword ptr [0xaab264], ecx */ W32((u32)(0xaab264u), r_ecx);
    /* 0079a914: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079a916: je 0x79a8d4 */ if (fZ) goto L_0079a8d4;
L_0079a918:; BB(0x0079a918);
    /* 0079a918: push 0x46ea6200 */ { u32 v = 0x46ea6200u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a91d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79a922u); f_00712624();
    /* 0079a922: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079a928: jmp 0x79a8d4 */ goto L_0079a8d4;
}

void f_0079a92c(void) /* sub_79A92C */
{
    FN_ENTER(0x0079a92c);
    /* 0079a92c: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079a932: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a934: je 0x79a945 */ if (fZ) goto L_0079a945;
L_0079a936:; BB(0x0079a936);
    /* 0079a936: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a93bu); f_007127b0();
    /* 0079a93b: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_0079a945:; BB(0x0079a945);
    /* 0079a945: ret  */ FN_RET(0x0079a92c); r_esp += 4; return;
}

void f_0079a948(void) /* sub_79A948 */
{
    FN_ENTER(0x0079a948);
    /* 0079a948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a949: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079a94f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a951: je 0x79a9c5 */ if (fZ) goto L_0079a9c5;
L_0079a953:; BB(0x0079a953);
    /* 0079a953: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079a95a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079a95c: je 0x79a9ad */ if (fZ) goto L_0079a9ad;
L_0079a95e:; BB(0x0079a95e);
    /* 0079a95e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79a963u); f_00737d90();
    /* 0079a963: mov ebp, eax */ r_ebp = r_eax;
    /* 0079a965: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079a96b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a970u); f_007127b0();
    /* 0079a970: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079a976: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079a980: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0079a984: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079a986: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079a988: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079a98a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079a98c: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079a98e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079a990: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079a992: lea ebp, [ecx + edx + 0x126b8] */ r_ebp = (u32)(r_ecx+r_edx+0x126b8u);
    /* 0079a999: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 0079a99e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a99f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9a1: call 0x7d3b28 */ r_esp -= 4; W32(r_esp, 0x79a9a6u); f_007d3b28();
    /* 0079a9a6: call 0x798450 */ r_esp -= 4; W32(r_esp, 0x79a9abu); f_00798450();
    /* 0079a9ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079a9ac: ret  */ FN_RET(0x0079a948); r_esp += 4; return;
L_0079a9ad:; BB(0x0079a9ad);
    /* 0079a9ad: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a9af: je 0x79a9c5 */ if (fZ) goto L_0079a9c5;
L_0079a9b1:; BB(0x0079a9b1);
    /* 0079a9b1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79a9b6u); f_007127b0();
    /* 0079a9b6: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079a9c0: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79a9c5u); f_0079a050();
L_0079a9c5:; BB(0x0079a9c5);
    /* 0079a9c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079a9c6: ret  */ FN_RET(0x0079a948); r_esp += 4; return;
}

void f_0079a9c8(void) /* sub_79A9C8 */
{
    FN_ENTER(0x0079a9c8);
    /* 0079a9c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0079a9cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9cd: push 0x8f5478 */ { u32 v = 0x8f5478u; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079a9d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079a9d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079a9e0: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079a9e6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079a9e9: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0079a9ec: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0079a9ef: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0079a9f2: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079a9f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079a9fa: je 0x79ac7b */ if (fZ) goto L_0079ac7b;
L_0079aa00:; BB(0x0079aa00);
    /* 0079aa00: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079aa07: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079aa09: je 0x79aaa0 */ if (fZ) goto L_0079aaa0;
L_0079aa0f:; BB(0x0079aa0f);
    /* 0079aa0f: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79aa14u); f_00737d90();
    /* 0079aa14: mov ebx, eax */ r_ebx = r_eax;
    /* 0079aa16: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079aa1c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79aa21u); f_007127b0();
    /* 0079aa21: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079aa27: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079aa31: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 0079aa34: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079aa36: lea edi, [ebp - 0x88] */ r_edi = (u32)(r_ebp+0xffffff78u);
    /* 0079aa3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079aa3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079aa40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079aa42: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079aa44: mov esi, 0x8f8818 */ r_esi = 0x8f8818u;
    /* 0079aa49: mov ebx, dword ptr [ecx + edx*4 + 0x13d78] */ r_ebx = R32((u32)(r_ecx+r_edx*4+0x13d78u));
    /* 0079aa50: mov dword ptr [ebp - 0x88], ebx */ W32((u32)(r_ebp+0xffffff78u), r_ebx);
    /* 0079aa56: mov eax, dword ptr [ecx + edx*4 + 0x13d7c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x13d7cu));
    /* 0079aa5d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0079aa63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079aa64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079aa65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079aa66: call 0x7d3b28 */ r_esp -= 4; W32(r_esp, 0x79aa6bu); f_007d3b28();
    /* 0079aa6b: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079aa71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079aa73: je 0x79aa84 */ if (fZ) goto L_0079aa84;
L_0079aa75:; BB(0x0079aa75);
    /* 0079aa75: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79aa7au); f_007127b0();
    /* 0079aa7a: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079aa84:; BB(0x0079aa84);
    /* 0079aa84: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79aa89u); f_0079a050();
    /* 0079aa89: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079aa8c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079aa8f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079aa92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079aa95: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079aa9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0079aa9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079aa9f: ret  */ FN_RET(0x0079a9c8); r_esp += 4; return;
L_0079aaa0:; BB(0x0079aaa0);
    /* 0079aaa0: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 0079aaa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079aaa7: je 0x79abcb */ if (fZ) goto L_0079abcb;
L_0079aaad:; BB(0x0079aaad);
    /* 0079aaad: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79aab2u); f_00737d90();
    /* 0079aab2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079aab5: cmp eax, dword ptr [0xaab278] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaab278u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079aabb: je 0x79abcb */ if (fZ) goto L_0079abcb;
L_0079aac1:; BB(0x0079aac1);
    /* 0079aac1: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 0079aac7: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0079aaca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aacc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aace: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aad0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aad2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aad4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aad6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079aad8: lea ebx, [edx + ecx + 0x13d78] */ r_ebx = (u32)(r_edx+r_ecx+0x13d78u);
    /* 0079aadf: mov ecx, dword ptr [ebx + 0x128] */ r_ecx = R32((u32)(r_ebx+0x128u));
    /* 0079aae5: mov edx, dword ptr [ebx + 0x12c] */ r_edx = R32((u32)(r_ebx+0x12cu));
    /* 0079aaeb: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0079aaee: lea edi, [ebx + 0x130] */ r_edi = (u32)(r_ebx+0x130u);
    /* 0079aaf4: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0079aaf6: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0079aaf9: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 0079aaff: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0079ab05: push dword ptr [ebp - 0x8c] */ { u32 v = R32((u32)(r_ebp+0xffffff74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ab0b: push dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ab11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab13: call 0x6c0114 */ r_esp -= 4; W32(r_esp, 0x79ab18u); f_006c0114();
    /* 0079ab18: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0079ab1f: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab24: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ab29u); f_008581c5();
    /* 0079ab29: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079ab2c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ab2f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0079ab32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ab34: je 0x79ac89 */ if (fZ) goto L_0079ac89;
L_0079ab3a:; BB(0x0079ab3a);
    /* 0079ab3a: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0079ab41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079ab48: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ab4a: call 0x6daefc */ r_esp -= 4; W32(r_esp, 0x79ab4fu); f_006daefc();
    /* 0079ab4f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0079ab56:; BB(0x0079ab56);
    /* 0079ab56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079ab5d: mov eax, ebx */ r_eax = r_ebx;
    /* 0079ab5f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ab62: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ab65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab66: call 0x6db7d0 */ r_esp -= 4; W32(r_esp, 0x79ab6bu); f_006db7d0();
    /* 0079ab6b: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079ab71: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab74: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79ab79u); f_0073ae38();
    /* 0079ab79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ab7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ab7e: je 0x79ab88 */ if (fZ) goto L_0079ab88;
L_0079ab80:; BB(0x0079ab80);
    /* 0079ab80: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ab82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ab84: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0079ab86: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79ab88u); call_ind(t); }
L_0079ab88:; BB(0x0079ab88);
    /* 0079ab88: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079ab8e: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x79ab93u); f_0073b0f0();
    /* 0079ab93: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079ab99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ab9b: je 0x79abac */ if (fZ) goto L_0079abac;
L_0079ab9d:; BB(0x0079ab9d);
    /* 0079ab9d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79aba2u); f_007127b0();
    /* 0079aba2: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079abac:; BB(0x0079abac);
    /* 0079abac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079abaf: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079abb2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079abb5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079abb8: mov dword ptr [0xaab278], eax */ W32((u32)(0xaab278u), r_eax);
    /* 0079abbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079abc0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079abc7: mov esp, ebp */ r_esp = r_ebp;
    /* 0079abc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079abca: ret  */ FN_RET(0x0079a9c8); r_esp += 4; return;
L_0079abcb:; BB(0x0079abcb);
    /* 0079abcb: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x79abd0u); f_00694c6c();
    /* 0079abd0: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079abd6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0079abd9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079abdb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079abdd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079abdf: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079abe6: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79abebu); f_007c1160();
    /* 0079abeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079abed: je 0x79ac3e */ if (fZ) goto L_0079ac3e;
L_0079abef:; BB(0x0079abef);
    /* 0079abef: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079abf5: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79abfau); f_00737d90();
    /* 0079abfa: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ac00: lea esi, [ebp - 0x54] */ r_esi = (u32)(r_ebp+0xffffffacu);
    /* 0079ac03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ac04: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0079ac07: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ac09: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ac0b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ac0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ac0f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079ac11: mov eax, dword ptr [ecx + edx*4 + 0x13d78] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x13d78u));
    /* 0079ac18: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0079ac1b: mov ebx, dword ptr [ecx + edx*4 + 0x13d7c] */ r_ebx = R32((u32)(r_ecx+r_edx*4+0x13d7cu));
    /* 0079ac22: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0079ac25: call 0x7d3eec */ r_esp -= 4; W32(r_esp, 0x79ac2au); f_007d3eec();
    /* 0079ac2a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079ac2d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079ac30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079ac33: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079ac3a: mov esp, ebp */ r_esp = r_ebp;
    /* 0079ac3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ac3d: ret  */ FN_RET(0x0079a9c8); r_esp += 4; return;
L_0079ac3e:; BB(0x0079ac3e);
    /* 0079ac3e: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x79ac43u); f_00694c6c();
    /* 0079ac43: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ac49: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0079ac4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ac4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ac50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ac52: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079ac59: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79ac5eu); f_007c1160();
    /* 0079ac5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ac60: je 0x79ac7b */ if (fZ) goto L_0079ac7b;
L_0079ac62:; BB(0x0079ac62);
    /* 0079ac62: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079ac68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ac6a: je 0x79ac93 */ if (fZ) goto L_0079ac93;
L_0079ac6c:; BB(0x0079ac6c);
    /* 0079ac6c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79ac71u); f_007127b0();
    /* 0079ac71: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079ac7b:; BB(0x0079ac7b);
    /* 0079ac7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079ac7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079ac85: mov esp, ebp */ r_esp = r_ebp;
    /* 0079ac87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ac88: ret  */ FN_RET(0x0079a9c8); r_esp += 4; return;
L_0079ac89:; BB(0x0079ac89);
    /* 0079ac89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079ac8b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079ac8e: jmp 0x79ab56 */ goto L_0079ab56;
L_0079ac93:; BB(0x0079ac93);
    /* 0079ac93: call 0x79ac9c */ r_esp -= 4; W32(r_esp, 0x79ac98u); f_0079ac9c();
    /* 0079ac98: jmp 0x79ac7b */ goto L_0079ac7b;
}

void f_0079a9cc(void)
{
    FN_ENTER(0x0079a9cc);
    /* 0079a9cc: jmp ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); jmp_ind(t); return; }
}

void f_0079ac9c(void) /* sub_79AC9C */
{
    FN_ENTER(0x0079ac9c);
    /* 0079ac9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ac9d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ac9f: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79aca4u); f_00793168();
    /* 0079aca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079aca5: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79acaau); f_0079a8c4();
    /* 0079acaa: mov ecx, dword ptr [0xaab25c] */ r_ecx = R32((u32)(0xaab25cu));
    /* 0079acb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079acb2: je 0x79acc3 */ if (fZ) goto L_0079acc3;
L_0079acb4:; BB(0x0079acb4);
    /* 0079acb4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79acb9u); f_007127b0();
    /* 0079acb9: mov dword ptr [0xaab25c], 0 */ W32((u32)(0xaab25cu), 0x0u);
L_0079acc3:; BB(0x0079acc3);
    /* 0079acc3: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 0079acc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079accb: je 0x79acdc */ if (fZ) goto L_0079acdc;
L_0079accd:; BB(0x0079accd);
    /* 0079accd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79acd2u); f_007127b0();
    /* 0079acd2: mov dword ptr [0xaab258], 0 */ W32((u32)(0xaab258u), 0x0u);
L_0079acdc:; BB(0x0079acdc);
    /* 0079acdc: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079ace2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ace4: je 0x79acf5 */ if (fZ) goto L_0079acf5;
L_0079ace6:; BB(0x0079ace6);
    /* 0079ace6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79acebu); f_007127b0();
    /* 0079aceb: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079acf5:; BB(0x0079acf5);
    /* 0079acf5: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079acfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079acfd: je 0x79ad0e */ if (fZ) goto L_0079ad0e;
L_0079acff:; BB(0x0079acff);
    /* 0079acff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79ad04u); f_007127b0();
    /* 0079ad04: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079ad0e:; BB(0x0079ad0e);
    /* 0079ad0e: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079ad14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ad16: je 0x79ad27 */ if (fZ) goto L_0079ad27;
L_0079ad18:; BB(0x0079ad18);
    /* 0079ad18: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79ad1du); f_007127b0();
    /* 0079ad1d: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079ad27:; BB(0x0079ad27);
    /* 0079ad27: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ad2d: mov dword ptr [ecx + 0x1e084], 0x79ba38 */ W32((u32)(r_ecx+0x1e084u), 0x79ba38u);
    /* 0079ad37: call 0x7d35a4 */ r_esp -= 4; W32(r_esp, 0x79ad3cu); f_007d35a4();
    /* 0079ad3c: mov dword ptr [0xaab218], 7 */ W32((u32)(0xaab218u), 0x7u);
    /* 0079ad46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ad47: ret  */ FN_RET(0x0079ac9c); r_esp += 4; return;
}

void f_0079ad48(void) /* sub_79AD48 */
{
    FN_ENTER(0x0079ad48);
    /* 0079ad48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ad49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0079ad4b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x79ad50u); f_00694c6c();
    /* 0079ad50: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0079ad56: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0079ad59: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ad5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ad5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ad5f: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0079ad61: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079ad68: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0079ad6d: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079ad73: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079ad75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ad76: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79ad7bu); f_007c1160();
    /* 0079ad7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ad7d: jne 0x79ad95 */ if (!fZ) goto L_0079ad95;
L_0079ad7f:; BB(0x0079ad7f);
    /* 0079ad7f: mov edx, dword ptr [0xaab200] */ r_edx = R32((u32)(0xaab200u));
    /* 0079ad85: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0079ad88: mov dword ptr [0xaab200], eax */ W32((u32)(0xaab200u), r_eax);
    /* 0079ad8d: cmp edx, 0xe10 */ {  u32 a = r_edx; u32 b = 0xe10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079ad93: jle 0x79adb3 */ if ((fZ||fS!=fO)) goto L_0079adb3;
L_0079ad95:; BB(0x0079ad95);
    /* 0079ad95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ad97: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x79ad9cu); f_007a618c();
    /* 0079ad9c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ad9e: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x79ada3u); f_007a60dc();
    /* 0079ada3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ada6: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0079adaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079adaf: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0079adb3:; BB(0x0079adb3);
    /* 0079adb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079adb4: ret  */ FN_RET(0x0079ad48); r_esp += 4; return;
}

void f_0079adb8(void) /* sub_79ADB8 */
{
    FN_ENTER(0x0079adb8);
    /* 0079adb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079adb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079adba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079adbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079adbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079adbd: mov ecx, dword ptr [0xaab24c] */ r_ecx = R32((u32)(0xaab24cu));
    /* 0079adc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079adc5: je 0x79ae65 */ if (fZ) goto L_0079ae65;
L_0079adcb:; BB(0x0079adcb);
    /* 0079adcb: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 0079adcf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079add1: je 0x79ae5c */ if (fZ) goto L_0079ae5c;
L_0079add7:; BB(0x0079add7);
    /* 0079add7: call 0x7346cc */ r_esp -= 4; W32(r_esp, 0x79addcu); f_007346cc();
    /* 0079addc: mov ebp, eax */ r_ebp = r_eax;
    /* 0079adde: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ade0: je 0x79ae6b */ if (fZ) goto L_0079ae6b;
L_0079ade6:; BB(0x0079ade6);
    /* 0079ade6: mov ecx, dword ptr [0xaab24c] */ r_ecx = R32((u32)(0xaab24cu));
    /* 0079adec: call 0x7346dc */ r_esp -= 4; W32(r_esp, 0x79adf1u); f_007346dc();
    /* 0079adf1: mov ebx, eax */ r_ebx = r_eax;
    /* 0079adf3: mov ecx, dword ptr [0xaab24c] */ r_ecx = R32((u32)(0xaab24cu));
    /* 0079adf9: movsx esi, byte ptr [ecx + 0x1e] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx+0x1eu));
    /* 0079adfd: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ae00: mov edx, 0 */ r_edx = 0x0u;
    /* 0079ae05: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0079ae08: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0079ae0b: call 0x7346ec */ r_esp -= 4; W32(r_esp, 0x79ae10u); f_007346ec();
    /* 0079ae10: mov edi, dword ptr [0xaab24c] */ r_edi = R32((u32)(0xaab24cu));
    /* 0079ae16: movsx esi, byte ptr [edi + 0x1e] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x1eu));
    /* 0079ae1a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0079ae1d: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ae20: mov edx, 0 */ r_edx = 0x0u;
    /* 0079ae25: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0079ae28: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ae2b: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0079ae30: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0079ae33: mov dword ptr [0xaab1cc], ecx */ W32((u32)(0xaab1ccu), r_ecx);
    /* 0079ae39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae3a: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ae3d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ae43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae44: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0079ae48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae4c: call 0x7d4128 */ r_esp -= 4; W32(r_esp, 0x79ae51u); f_007d4128();
    /* 0079ae51: call 0x79a4c0 */ r_esp -= 4; W32(r_esp, 0x79ae56u); f_0079a4c0();
    /* 0079ae56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ae57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ae58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ae59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079ae5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079ae5b: ret  */ FN_RET(0x0079adb8); r_esp += 4; return;
L_0079ae5c:; BB(0x0079ae5c);
    /* 0079ae5c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ae5e: je 0x79ae65 */ if (fZ) goto L_0079ae65;
L_0079ae60:; BB(0x0079ae60);
    /* 0079ae60: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79ae65u); f_0079a050();
L_0079ae65:; BB(0x0079ae65);
    /* 0079ae65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ae66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ae67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ae68: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079ae69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079ae6a: ret  */ FN_RET(0x0079adb8); r_esp += 4; return;
L_0079ae6b:; BB(0x0079ae6b);
    /* 0079ae6b: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79ae70u); f_0079a050();
    /* 0079ae70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ae71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ae72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ae73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079ae74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079ae75: ret  */ FN_RET(0x0079adb8); r_esp += 4; return;
}

void f_0079ae78(void) /* sub_79AE78 */
{
    FN_ENTER(0x0079ae78);
    /* 0079ae78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ae79: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079ae7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079ae81: je 0x79af3e */ if (fZ) goto L_0079af3e;
L_0079ae87:; BB(0x0079ae87);
    /* 0079ae87: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x79ae8cu); f_0078ed20();
    /* 0079ae8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ae8e: je 0x79aeb4 */ if (fZ) goto L_0079aeb4;
L_0079ae90:; BB(0x0079ae90);
    /* 0079ae90: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 0079ae96: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079ae9a: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 0079aea4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079aea9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0079aead: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79aeb2u); f_0079a050();
    /* 0079aeb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079aeb3: ret  */ FN_RET(0x0079ae78); r_esp += 4; return;
L_0079aeb4:; BB(0x0079aeb4);
    /* 0079aeb4: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079aeba: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x79aebfu); f_0078ed14();
    /* 0079aebf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079aec1: je 0x79af3e */ if (fZ) goto L_0079af3e;
L_0079aec3:; BB(0x0079aec3);
    /* 0079aec3: mov ecx, dword ptr [0xaab230] */ r_ecx = R32((u32)(0xaab230u));
    /* 0079aec9: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x79aeceu); f_0078ed4c();
    /* 0079aece: mov ebx, eax */ r_ebx = r_eax;
    /* 0079aed0: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079aed6: mov edx, dword ptr [0xaab29c] */ r_edx = R32((u32)(0xaab29cu));
    /* 0079aedc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079aedd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079aee0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aee2: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0079aee7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079aee9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aeeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aeed: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079aeef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aef1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aef3: lea edx, [ecx + eax + 0x126b8] */ r_edx = (u32)(r_ecx+r_eax+0x126b8u);
    /* 0079aefa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079aefb: call 0x7d3b28 */ r_esp -= 4; W32(r_esp, 0x79af00u); f_007d3b28();
    /* 0079af00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079af01: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79af06u); f_00857e98();
    /* 0079af06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079af07: mov edx, dword ptr [0xaab230] */ r_edx = R32((u32)(0xaab230u));
    /* 0079af0d: mov ecx, dword ptr [0xaab248] */ r_ecx = R32((u32)(0xaab248u));
    /* 0079af13: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079af17: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079af1c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0079af20: mov dword ptr [0xaab230], 0 */ W32((u32)(0xaab230u), 0x0u);
    /* 0079af2a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79af2fu); f_007127b0();
    /* 0079af2f: mov dword ptr [0xaab248], 0 */ W32((u32)(0xaab248u), 0x0u);
    /* 0079af39: call 0x79a4c0 */ r_esp -= 4; W32(r_esp, 0x79af3eu); f_0079a4c0();
L_0079af3e:; BB(0x0079af3e);
    /* 0079af3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079af3f: ret  */ FN_RET(0x0079ae78); r_esp += 4; return;
}

void f_0079af40(void) /* sub_79AF40 */
{
    FN_ENTER(0x0079af40);
    /* 0079af40: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079af46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079af48: je 0x79b03d */ if (fZ) goto L_0079b03d;
L_0079af4e:; BB(0x0079af4e);
    /* 0079af4e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079af55: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079af57: je 0x79afc4 */ if (fZ) goto L_0079afc4;
L_0079af59:; BB(0x0079af59);
    /* 0079af59: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79af5eu); f_00737d90();
    /* 0079af5e: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079af64: mov dword ptr [0xaab29c], eax */ W32((u32)(0xaab29cu), r_eax);
    /* 0079af69: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79af6eu); f_007127b0();
    /* 0079af6e: mov ecx, dword ptr [0xaab29c] */ r_ecx = R32((u32)(0xaab29cu));
    /* 0079af74: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079af7e: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0079af81: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079af83: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079af85: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079af87: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079af89: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079af8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079af8d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079af8f: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079af95: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 0079af98: movzx edx, byte ptr [edx + 0x126e3] */ r_edx = (u32)R8((u32)(r_edx+0x126e3u));
    /* 0079af9f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079afa2: je 0x79afaa */ if (fZ) goto L_0079afaa;
L_0079afa4:; BB(0x0079afa4);
    /* 0079afa4: call 0x79b040 */ r_esp -= 4; W32(r_esp, 0x79afa9u); f_0079b040();
    /* 0079afa9: ret  */ FN_RET(0x0079af40); r_esp += 4; return;
L_0079afaa:; BB(0x0079afaa);
    /* 0079afaa: lea edx, [ecx + eax + 0x126b8] */ r_edx = (u32)(r_ecx+r_eax+0x126b8u);
    /* 0079afb1: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 0079afb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079afb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079afb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079afb9: call 0x7d3b28 */ r_esp -= 4; W32(r_esp, 0x79afbeu); f_007d3b28();
    /* 0079afbe: call 0x79a4c0 */ r_esp -= 4; W32(r_esp, 0x79afc3u); f_0079a4c0();
    /* 0079afc3: ret  */ FN_RET(0x0079af40); r_esp += 4; return;
L_0079afc4:; BB(0x0079afc4);
    /* 0079afc4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079afc6: je 0x79afdd */ if (fZ) goto L_0079afdd;
L_0079afc8:; BB(0x0079afc8);
    /* 0079afc8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79afcdu); f_007127b0();
    /* 0079afcd: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079afd7: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79afdcu); f_0079a050();
    /* 0079afdc: ret  */ FN_RET(0x0079af40); r_esp += 4; return;
L_0079afdd:; BB(0x0079afdd);
    /* 0079afdd: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x79afe2u); f_00694c6c();
    /* 0079afe2: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079afe8: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0079afeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079afed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079afef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079aff1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079aff8: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79affdu); f_007c1160();
    /* 0079affd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079afff: je 0x79b03d */ if (fZ) goto L_0079b03d;
L_0079b001:; BB(0x0079b001);
    /* 0079b001: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079b007: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79b00cu); f_00737d90();
    /* 0079b00c: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079b012: cmp eax, dword ptr [ecx + 0x12140] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x12140u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079b018: mov dword ptr [0xaab29c], eax */ W32((u32)(0xaab29cu), r_eax);
    /* 0079b01d: jge 0x79b03d */ if ((fS==fO)) goto L_0079b03d;
L_0079b01f:; BB(0x0079b01f);
    /* 0079b01f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079b022: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079b024: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079b026: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079b028: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079b02a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079b02c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079b02e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079b030: lea eax, [ecx + edx + 0x126b8] */ r_eax = (u32)(r_ecx+r_edx+0x126b8u);
    /* 0079b037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079b038: call 0x7d3eec */ r_esp -= 4; W32(r_esp, 0x79b03du); f_007d3eec();
L_0079b03d:; BB(0x0079b03d);
    /* 0079b03d: ret  */ FN_RET(0x0079af40); r_esp += 4; return;
}

