#include "protos.h"

void f_0082e1c4(void) /* sub_82E1C4 */
{
    FN_ENTER(0x0082e1c4);
    /* 0082e1c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e1c6: mov edx, ecx */ r_edx = r_ecx;
    /* 0082e1c8: shr edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082e1cb: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e1ce: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082e1d1: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0082e1d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e1d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082e1d7: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x82e1dcu); f_00836248();
    /* 0082e1dc: ret  */ FN_RET(0x0082e1c4); r_esp += 4; return;
}

void f_0082e1e0(void) /* sub_82E1E0 */
{
    FN_ENTER(0x0082e1e0);
    /* 0082e1e0: mov dword ptr [0xacbf18], ecx */ W32((u32)(0xacbf18u), r_ecx);
    /* 0082e1e6: ret  */ FN_RET(0x0082e1e0); r_esp += 4; return;
}

void f_0082e1e8(void) /* sub_82E1E8 */
{
    FN_ENTER(0x0082e1e8);
    /* 0082e1e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e1e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e1ea: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082e1ee: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x82e1f3u); f_0082e344();
L_0082e1f3:; BB(0x0082e1f3);
    /* 0082e1f3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0082e1f5: mov eax, esi */ r_eax = r_esi;
    /* 0082e1f7: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082e1fa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e1fd: jne 0x82e227 */ if (!fZ) goto L_0082e227;
L_0082e1ff:; BB(0x0082e1ff);
    /* 0082e1ff: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e205: jne 0x82e210 */ if (!fZ) goto L_0082e210;
L_0082e207:; BB(0x0082e207);
    /* 0082e207: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e20a: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x82e20fu); f_0082e6c8();
    /* 0082e20f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e210:; BB(0x0082e210);
    /* 0082e210: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e216: jne 0x82e28c */ if (!fZ) goto L_0082e28c;
L_0082e218:; BB(0x0082e218);
    /* 0082e218: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e21b: mov edx, 0x82e6c8 */ r_edx = 0x82e6c8u;
    /* 0082e220: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e225u); f_0082e2a0();
    /* 0082e225: jmp 0x82e28c */ goto L_0082e28c;
L_0082e227:; BB(0x0082e227);
    /* 0082e227: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x82e22cu); f_0082d7b0();
    /* 0082e22c: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e232: jne 0x82e23c */ if (!fZ) goto L_0082e23c;
L_0082e234:; BB(0x0082e234);
    /* 0082e234: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0082e237: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82e23cu); f_0082d838();
L_0082e23c:; BB(0x0082e23c);
    /* 0082e23c: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e242: jne 0x82e251 */ if (!fZ) goto L_0082e251;
L_0082e244:; BB(0x0082e244);
    /* 0082e244: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0082e247: mov edx, esi */ r_edx = r_esi;
    /* 0082e249: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e24c: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x82e251u); f_00830df8();
L_0082e251:; BB(0x0082e251);
    /* 0082e251: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e257: jne 0x82e261 */ if (!fZ) goto L_0082e261;
L_0082e259:; BB(0x0082e259);
    /* 0082e259: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0082e25c: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82e261u); f_00831290();
L_0082e261:; BB(0x0082e261);
    /* 0082e261: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e267: jne 0x82e272 */ if (!fZ) goto L_0082e272;
L_0082e269:; BB(0x0082e269);
    /* 0082e269: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e26c: call 0x82e6c8 */ r_esp -= 4; W32(r_esp, 0x82e271u); f_0082e6c8();
    /* 0082e271: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e272:; BB(0x0082e272);
    /* 0082e272: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e278: jne 0x82e287 */ if (!fZ) goto L_0082e287;
L_0082e27a:; BB(0x0082e27a);
    /* 0082e27a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e27d: mov edx, 0x82e6c8 */ r_edx = 0x82e6c8u;
    /* 0082e282: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e287u); f_0082e2a0();
L_0082e287:; BB(0x0082e287);
    /* 0082e287: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82e28cu); f_0082da80();
L_0082e28c:; BB(0x0082e28c);
    /* 0082e28c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0082e28f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e291: jne 0x82e1f3 */ if (!fZ) goto L_0082e1f3;
L_0082e297:; BB(0x0082e297);
    /* 0082e297: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x82e29cu); f_0082e4f4();
    /* 0082e29c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e29d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e29e: ret  */ FN_RET(0x0082e1e8); r_esp += 4; return;
}

void f_0082e2a0(void) /* sub_82E2A0 */
{
    FN_ENTER(0x0082e2a0);
    /* 0082e2a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e2a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e2a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e2a3: mov esi, edx */ r_esi = r_edx;
    /* 0082e2a5: mov ebx, ecx */ r_ebx = r_ecx;
L_0082e2a7:; BB(0x0082e2a7);
    /* 0082e2a7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0082e2a9: mov eax, edi */ r_eax = r_edi;
    /* 0082e2ab: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082e2ae: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e2b1: jne 0x82e2d5 */ if (!fZ) goto L_0082e2d5;
L_0082e2b3:; BB(0x0082e2b3);
    /* 0082e2b3: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e2b9: jne 0x82e2c1 */ if (!fZ) goto L_0082e2c1;
L_0082e2bb:; BB(0x0082e2bb);
    /* 0082e2bb: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e2be: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x82e2c0u); call_ind(t); }
    /* 0082e2c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e2c1:; BB(0x0082e2c1);
    /* 0082e2c1: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e2c7: jne 0x82e334 */ if (!fZ) goto L_0082e334;
L_0082e2c9:; BB(0x0082e2c9);
    /* 0082e2c9: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e2cc: mov edx, esi */ r_edx = r_esi;
    /* 0082e2ce: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e2d3u); f_0082e2a0();
    /* 0082e2d3: jmp 0x82e334 */ goto L_0082e334;
L_0082e2d5:; BB(0x0082e2d5);
    /* 0082e2d5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x82e2dau); f_0082d7b0();
    /* 0082e2da: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e2e0: jne 0x82e2ea */ if (!fZ) goto L_0082e2ea;
L_0082e2e2:; BB(0x0082e2e2);
    /* 0082e2e2: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0082e2e5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82e2eau); f_0082d838();
L_0082e2ea:; BB(0x0082e2ea);
    /* 0082e2ea: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e2f0: jne 0x82e2ff */ if (!fZ) goto L_0082e2ff;
L_0082e2f2:; BB(0x0082e2f2);
    /* 0082e2f2: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0082e2f5: mov edx, edi */ r_edx = r_edi;
    /* 0082e2f7: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e2fa: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x82e2ffu); f_00830df8();
L_0082e2ff:; BB(0x0082e2ff);
    /* 0082e2ff: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e305: jne 0x82e30f */ if (!fZ) goto L_0082e30f;
L_0082e307:; BB(0x0082e307);
    /* 0082e307: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0082e30a: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82e30fu); f_00831290();
L_0082e30f:; BB(0x0082e30f);
    /* 0082e30f: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e315: jne 0x82e31d */ if (!fZ) goto L_0082e31d;
L_0082e317:; BB(0x0082e317);
    /* 0082e317: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e31a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x82e31cu); call_ind(t); }
    /* 0082e31c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e31d:; BB(0x0082e31d);
    /* 0082e31d: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e323: jne 0x82e32f */ if (!fZ) goto L_0082e32f;
L_0082e325:; BB(0x0082e325);
    /* 0082e325: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e328: mov edx, esi */ r_edx = r_esi;
    /* 0082e32a: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e32fu); f_0082e2a0();
L_0082e32f:; BB(0x0082e32f);
    /* 0082e32f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82e334u); f_0082da80();
L_0082e334:; BB(0x0082e334);
    /* 0082e334: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0082e337: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e339: jne 0x82e2a7 */ if (!fZ) goto L_0082e2a7;
L_0082e33f:; BB(0x0082e33f);
    /* 0082e33f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e340: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e341: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082e342: ret  */ FN_RET(0x0082e2a0); r_esp += 4; return;
}

void f_0082e344(void) /* sub_82E344 */
{
    FN_ENTER(0x0082e344);
    /* 0082e344: call 0x82f5bc */ r_esp -= 4; W32(r_esp, 0x82e349u); f_0082f5bc();
    /* 0082e349: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0082e34f: call 0x844b14 */ r_esp -= 4; W32(r_esp, 0x82e354u); f_00844b14();
    /* 0082e354: call 0x83dcf8 */ r_esp -= 4; W32(r_esp, 0x82e359u); f_0083dcf8();
    /* 0082e359: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e35e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e360: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e365: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e368: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e36eu); call_ind(t); }
    /* 0082e36e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e373: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e375: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e37a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e37c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e37d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e383u); call_ind(t); }
    /* 0082e383: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e385: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x82e38au); f_00830b08();
    /* 0082e38a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082e38b: mov eax, dword ptr [0xacbf1c] */ r_eax = R32((u32)(0xacbf1cu));
    /* 0082e390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e392: je 0x82e399 */ if (fZ) goto L_0082e399;
L_0082e394:; BB(0x0082e394);
    /* 0082e394: call 0x82e39c */ r_esp -= 4; W32(r_esp, 0x82e399u); f_0082e39c();
L_0082e399:; BB(0x0082e399);
    /* 0082e399: ret  */ FN_RET(0x0082e344); r_esp += 4; return;
}

void f_0082e39c(void) /* sub_82E39C */
{
    FN_ENTER(0x0082e39c);
    /* 0082e39c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082e39f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e3a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e3a8: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3ae: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e3b4u); call_ind(t); }
    /* 0082e3b4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e3b9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3bb: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e3bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3c0: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e3c6u); call_ind(t); }
    /* 0082e3c6: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e3cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3cd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e3d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3d2: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e3d8u); call_ind(t); }
    /* 0082e3d8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e3dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3df: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e3e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3e4: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e3eau); call_ind(t); }
    /* 0082e3ea: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e3ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3f1: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e3f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e3f6: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e3fcu); call_ind(t); }
    /* 0082e3fc: fld dword ptr [0x98a428] */ FPUSH(R_F32((u32)(0x98a428u)));
    /* 0082e402: fld dword ptr [0xacbf24] */ FPUSH(R_F32((u32)(0xacbf24u)));
    /* 0082e408: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082e40a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0082e40d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0082e411: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082e416: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082e41a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082e41e: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082e422: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0082e425: fld dword ptr [0xacbf28] */ FPUSH(R_F32((u32)(0xacbf28u)));
    /* 0082e42b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082e42d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0082e431: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0082e434: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0082e438: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082e43d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082e441: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082e445: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082e449: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0082e44c: fld dword ptr [0xacbf2c] */ FPUSH(R_F32((u32)(0xacbf2cu)));
    /* 0082e452: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082e454: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 0082e459: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0082e45c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0082e460: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082e465: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082e469: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082e46d: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082e471: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0082e474: fld dword ptr [0xacbf30] */ FPUSH(R_F32((u32)(0xacbf30u)));
    /* 0082e47a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082e47c: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0082e47f: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0082e482: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0082e487: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082e489: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082e48c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082e48e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0082e491: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0082e495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082e49a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082e49e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082e4a2: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0082e4a6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0082e4a9: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0082e4ae: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0082e4b0: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e4b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4b6: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4b8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082e4ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4bb: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x82e4c1u); call_ind(t); }
    /* 0082e4c1: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0082e4c7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082e4c9: mov eax, 3 */ r_eax = 0x3u;
    /* 0082e4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4d3: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x82e4d9u); call_ind(t); }
    /* 0082e4d9: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e4de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e4e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e4e7: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x82e4edu); call_ind(t); }
    /* 0082e4ed: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e4f0: ret  */ FN_RET(0x0082e39c); r_esp += 4; return;
}

void f_0082e4f4(void) /* sub_82E4F4 */
{
    FN_ENTER(0x0082e4f4);
    /* 0082e4f4: mov eax, dword ptr [0xacbf1c] */ r_eax = R32((u32)(0xacbf1cu));
    /* 0082e4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e4fb: je 0x82e502 */ if (fZ) goto L_0082e502;
L_0082e4fd:; BB(0x0082e4fd);
    /* 0082e4fd: call 0x82e514 */ r_esp -= 4; W32(r_esp, 0x82e502u); f_0082e514();
L_0082e502:; BB(0x0082e502);
    /* 0082e502: call 0x83dd18 */ r_esp -= 4; W32(r_esp, 0x82e507u); f_0083dd18();
    /* 0082e507: mov eax, dword ptr [0xacbf18] */ r_eax = R32((u32)(0xacbf18u));
    /* 0082e50c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e50e: je 0x82e512 */ if (fZ) goto L_0082e512;
L_0082e510:; BB(0x0082e510);
    /* 0082e510: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x82e512u); call_ind(t); }
L_0082e512:; BB(0x0082e512);
    /* 0082e512: ret  */ FN_RET(0x0082e4f4); r_esp += 4; return;
}

void f_0082e514(void) /* sub_82E514 */
{
    FN_ENTER(0x0082e514);
    /* 0082e514: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e519: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e51b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e51d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e522: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x82e528u); call_ind(t); }
    /* 0082e528: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082e52d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e52f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e531: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e533: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e536: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x82e53cu); call_ind(t); }
    /* 0082e53c: ret  */ FN_RET(0x0082e514); r_esp += 4; return;
}

void f_0082e540(void) /* sub_82E540 */
{
    FN_ENTER(0x0082e540);
    /* 0082e540: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e541: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e542: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082e546: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x82e54bu); f_0082e344();
L_0082e54b:; BB(0x0082e54b);
    /* 0082e54b: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0082e54d: mov eax, esi */ r_eax = r_esi;
    /* 0082e54f: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082e552: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e555: jne 0x82e57f */ if (!fZ) goto L_0082e57f;
L_0082e557:; BB(0x0082e557);
    /* 0082e557: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e55d: jne 0x82e568 */ if (!fZ) goto L_0082e568;
L_0082e55f:; BB(0x0082e55f);
    /* 0082e55f: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e562: call 0x82e86c */ r_esp -= 4; W32(r_esp, 0x82e567u); f_0082e86c();
    /* 0082e567: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e568:; BB(0x0082e568);
    /* 0082e568: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e56e: jne 0x82e5e4 */ if (!fZ) goto L_0082e5e4;
L_0082e570:; BB(0x0082e570);
    /* 0082e570: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e573: mov edx, 0x82e86c */ r_edx = 0x82e86cu;
    /* 0082e578: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e57du); f_0082e2a0();
    /* 0082e57d: jmp 0x82e5e4 */ goto L_0082e5e4;
L_0082e57f:; BB(0x0082e57f);
    /* 0082e57f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x82e584u); f_0082d7b0();
    /* 0082e584: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e58a: jne 0x82e594 */ if (!fZ) goto L_0082e594;
L_0082e58c:; BB(0x0082e58c);
    /* 0082e58c: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0082e58f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82e594u); f_0082d838();
L_0082e594:; BB(0x0082e594);
    /* 0082e594: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e59a: jne 0x82e5a9 */ if (!fZ) goto L_0082e5a9;
L_0082e59c:; BB(0x0082e59c);
    /* 0082e59c: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0082e59f: mov edx, esi */ r_edx = r_esi;
    /* 0082e5a1: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e5a4: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x82e5a9u); f_00830df8();
L_0082e5a9:; BB(0x0082e5a9);
    /* 0082e5a9: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e5af: jne 0x82e5b9 */ if (!fZ) goto L_0082e5b9;
L_0082e5b1:; BB(0x0082e5b1);
    /* 0082e5b1: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0082e5b4: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82e5b9u); f_00831290();
L_0082e5b9:; BB(0x0082e5b9);
    /* 0082e5b9: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e5bf: jne 0x82e5ca */ if (!fZ) goto L_0082e5ca;
L_0082e5c1:; BB(0x0082e5c1);
    /* 0082e5c1: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e5c4: call 0x82e86c */ r_esp -= 4; W32(r_esp, 0x82e5c9u); f_0082e86c();
    /* 0082e5c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e5ca:; BB(0x0082e5ca);
    /* 0082e5ca: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e5d0: jne 0x82e5df */ if (!fZ) goto L_0082e5df;
L_0082e5d2:; BB(0x0082e5d2);
    /* 0082e5d2: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e5d5: mov edx, 0x82e86c */ r_edx = 0x82e86cu;
    /* 0082e5da: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e5dfu); f_0082e2a0();
L_0082e5df:; BB(0x0082e5df);
    /* 0082e5df: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82e5e4u); f_0082da80();
L_0082e5e4:; BB(0x0082e5e4);
    /* 0082e5e4: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0082e5e7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e5e9: jne 0x82e54b */ if (!fZ) goto L_0082e54b;
L_0082e5ef:; BB(0x0082e5ef);
    /* 0082e5ef: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x82e5f4u); f_0082e4f4();
    /* 0082e5f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e5f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e5f6: ret  */ FN_RET(0x0082e540); r_esp += 4; return;
}

void f_0082e5f8(void) /* sub_82E5F8 */
{
    FN_ENTER(0x0082e5f8);
    /* 0082e5f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e5f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e5fa: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082e5fe: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x82e603u); f_0082e344();
L_0082e603:; BB(0x0082e603);
    /* 0082e603: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0082e605: mov eax, esi */ r_eax = r_esi;
    /* 0082e607: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082e60a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e60d: jne 0x82e637 */ if (!fZ) goto L_0082e637;
L_0082e60f:; BB(0x0082e60f);
    /* 0082e60f: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e615: jne 0x82e620 */ if (!fZ) goto L_0082e620;
L_0082e617:; BB(0x0082e617);
    /* 0082e617: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e61a: call 0x82e8a8 */ r_esp -= 4; W32(r_esp, 0x82e61fu); f_0082e8a8();
    /* 0082e61f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e620:; BB(0x0082e620);
    /* 0082e620: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e626: jne 0x82e69c */ if (!fZ) goto L_0082e69c;
L_0082e628:; BB(0x0082e628);
    /* 0082e628: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e62b: mov edx, 0x82e8a8 */ r_edx = 0x82e8a8u;
    /* 0082e630: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e635u); f_0082e2a0();
    /* 0082e635: jmp 0x82e69c */ goto L_0082e69c;
L_0082e637:; BB(0x0082e637);
    /* 0082e637: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x82e63cu); f_0082d7b0();
    /* 0082e63c: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e642: jne 0x82e64c */ if (!fZ) goto L_0082e64c;
L_0082e644:; BB(0x0082e644);
    /* 0082e644: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0082e647: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82e64cu); f_0082d838();
L_0082e64c:; BB(0x0082e64c);
    /* 0082e64c: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e652: jne 0x82e661 */ if (!fZ) goto L_0082e661;
L_0082e654:; BB(0x0082e654);
    /* 0082e654: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0082e657: mov edx, esi */ r_edx = r_esi;
    /* 0082e659: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e65c: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x82e661u); f_00830df8();
L_0082e661:; BB(0x0082e661);
    /* 0082e661: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e667: jne 0x82e671 */ if (!fZ) goto L_0082e671;
L_0082e669:; BB(0x0082e669);
    /* 0082e669: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0082e66c: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82e671u); f_00831290();
L_0082e671:; BB(0x0082e671);
    /* 0082e671: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e677: jne 0x82e682 */ if (!fZ) goto L_0082e682;
L_0082e679:; BB(0x0082e679);
    /* 0082e679: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e67c: call 0x82e8a8 */ r_esp -= 4; W32(r_esp, 0x82e681u); f_0082e8a8();
    /* 0082e681: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e682:; BB(0x0082e682);
    /* 0082e682: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e688: jne 0x82e697 */ if (!fZ) goto L_0082e697;
L_0082e68a:; BB(0x0082e68a);
    /* 0082e68a: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e68d: mov edx, 0x82e8a8 */ r_edx = 0x82e8a8u;
    /* 0082e692: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e697u); f_0082e2a0();
L_0082e697:; BB(0x0082e697);
    /* 0082e697: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82e69cu); f_0082da80();
L_0082e69c:; BB(0x0082e69c);
    /* 0082e69c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0082e69f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e6a1: jne 0x82e603 */ if (!fZ) goto L_0082e603;
L_0082e6a7:; BB(0x0082e6a7);
    /* 0082e6a7: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x82e6acu); f_0082e4f4();
    /* 0082e6ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e6ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e6ae: ret  */ FN_RET(0x0082e5f8); r_esp += 4; return;
}

void f_0082e6b0(void) /* sub_82E6B0 */
{
    FN_ENTER(0x0082e6b0);
    /* 0082e6b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e6b1: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x82e6b6u); f_0082e344();
    /* 0082e6b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082e6ba: call 0x82e6cc */ r_esp -= 4; W32(r_esp, 0x82e6bfu); f_0082e6cc();
    /* 0082e6bf: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x82e6c4u); f_0082e4f4();
    /* 0082e6c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082e6c5: ret  */ FN_RET(0x0082e6b0); r_esp += 4; return;
}

void f_0082e6c8(void) /* sub_82E6C8 */
{
    FN_ENTER(0x0082e6c8);
    /* 0082e6c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e6cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082e6cd: mov ebp, eax */ r_ebp = r_eax;
    /* 0082e6cf: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e6d4u); f_00844ad0();
    /* 0082e6d4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0082e6d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e6d9: je 0x82e6f1 */ if (fZ) goto L_0082e6f1;
L_0082e6db:; BB(0x0082e6db);
    /* 0082e6db: mov edx, dword ptr [0xacbf1c] */ r_edx = R32((u32)(0xacbf1cu));
    /* 0082e6e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e6e3: je 0x82e6ec */ if (fZ) goto L_0082e6ec;
L_0082e6e5:; BB(0x0082e6e5);
    /* 0082e6e5: call 0x8469c8 */ r_esp -= 4; W32(r_esp, 0x82e6eau); f_008469c8();
    /* 0082e6ea: jmp 0x82e6f1 */ goto L_0082e6f1;
L_0082e6ec:; BB(0x0082e6ec);
    /* 0082e6ec: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e6f1u); f_008453fc();
L_0082e6f1:; BB(0x0082e6f1);
    /* 0082e6f1: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0082e6f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e6f6: je 0x82e71e */ if (fZ) goto L_0082e71e;
L_0082e6f8:; BB(0x0082e6f8);
    /* 0082e6f8: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e6fdu); f_0083dc34();
    /* 0082e6fd: mov edx, dword ptr [0xacbf1c] */ r_edx = R32((u32)(0xacbf1cu));
    /* 0082e703: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e705: je 0x82e711 */ if (fZ) goto L_0082e711;
L_0082e707:; BB(0x0082e707);
    /* 0082e707: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0082e70a: call 0x836f90 */ r_esp -= 4; W32(r_esp, 0x82e70fu); f_00836f90();
    /* 0082e70f: jmp 0x82e719 */ goto L_0082e719;
L_0082e711:; BB(0x0082e711);
    /* 0082e711: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0082e714: call 0x83745c */ r_esp -= 4; W32(r_esp, 0x82e719u); f_0083745c();
L_0082e719:; BB(0x0082e719);
    /* 0082e719: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e71eu); f_0083dcd8();
L_0082e71e:; BB(0x0082e71e);
    /* 0082e71e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082e71f: ret  */ FN_RET(0x0082e6c8); r_esp += 4; return;
}

void f_0082e6cc(void)
{
    FN_ENTER(0x0082e6cc);
    /* 0082e6cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082e6cd: mov ebp, eax */ r_ebp = r_eax;
    /* 0082e6cf: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e6d4u); f_00844ad0();
    /* 0082e6d4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0082e6d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e6d9: je 0x82e6f1 */ if (fZ) goto L_0082e6f1;
L_0082e6db:; BB(0x0082e6db);
    /* 0082e6db: mov edx, dword ptr [0xacbf1c] */ r_edx = R32((u32)(0xacbf1cu));
    /* 0082e6e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e6e3: je 0x82e6ec */ if (fZ) goto L_0082e6ec;
L_0082e6e5:; BB(0x0082e6e5);
    /* 0082e6e5: call 0x8469c8 */ r_esp -= 4; W32(r_esp, 0x82e6eau); f_008469c8();
    /* 0082e6ea: jmp 0x82e6f1 */ goto L_0082e6f1;
L_0082e6ec:; BB(0x0082e6ec);
    /* 0082e6ec: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e6f1u); f_008453fc();
L_0082e6f1:; BB(0x0082e6f1);
    /* 0082e6f1: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0082e6f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e6f6: je 0x82e71e */ if (fZ) goto L_0082e71e;
L_0082e6f8:; BB(0x0082e6f8);
    /* 0082e6f8: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e6fdu); f_0083dc34();
    /* 0082e6fd: mov edx, dword ptr [0xacbf1c] */ r_edx = R32((u32)(0xacbf1cu));
    /* 0082e703: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e705: je 0x82e711 */ if (fZ) goto L_0082e711;
L_0082e707:; BB(0x0082e707);
    /* 0082e707: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0082e70a: call 0x836f90 */ r_esp -= 4; W32(r_esp, 0x82e70fu); f_00836f90();
    /* 0082e70f: jmp 0x82e719 */ goto L_0082e719;
L_0082e711:; BB(0x0082e711);
    /* 0082e711: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0082e714: call 0x83745c */ r_esp -= 4; W32(r_esp, 0x82e719u); f_0083745c();
L_0082e719:; BB(0x0082e719);
    /* 0082e719: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e71eu); f_0083dcd8();
L_0082e71e:; BB(0x0082e71e);
    /* 0082e71e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082e71f: ret  */ FN_RET(0x0082e6cc); r_esp += 4; return;
}

void f_0082e720(void) /* sub_82E720 */
{
    FN_ENTER(0x0082e720);
    /* 0082e720: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e724: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082e726: mov dword ptr [0xacbf24], edx */ W32((u32)(0xacbf24u), r_edx);
    /* 0082e72c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0082e72f: mov dword ptr [0xacbf1c], 1 */ W32((u32)(0xacbf1cu), 0x1u);
    /* 0082e739: mov dword ptr [0xacbf28], ecx */ W32((u32)(0xacbf28u), r_ecx);
    /* 0082e73f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0082e742: mov dword ptr [0xacbf2c], edx */ W32((u32)(0xacbf2cu), r_edx);
    /* 0082e748: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0082e74b: mov dword ptr [0xacbf30], eax */ W32((u32)(0xacbf30u), r_eax);
    /* 0082e750: ret  */ FN_RET(0x0082e720); r_esp += 4; return;
}

void f_0082e754(void) /* sub_82E754 */
{
    FN_ENTER(0x0082e754);
    /* 0082e754: mov dword ptr [0xacbf1c], 0 */ W32((u32)(0xacbf1cu), 0x0u);
    /* 0082e75e: ret  */ FN_RET(0x0082e754); r_esp += 4; return;
}

void f_0082e760(void) /* sub_82E760 */
{
    FN_ENTER(0x0082e760);
    /* 0082e760: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e761: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e762: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082e766: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x82e76bu); f_0082e344();
L_0082e76b:; BB(0x0082e76b);
    /* 0082e76b: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0082e76d: mov eax, esi */ r_eax = r_esi;
    /* 0082e76f: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0082e772: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e775: jne 0x82e79f */ if (!fZ) goto L_0082e79f;
L_0082e777:; BB(0x0082e777);
    /* 0082e777: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e77d: jne 0x82e788 */ if (!fZ) goto L_0082e788;
L_0082e77f:; BB(0x0082e77f);
    /* 0082e77f: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e782: call 0x82e818 */ r_esp -= 4; W32(r_esp, 0x82e787u); f_0082e818();
    /* 0082e787: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e788:; BB(0x0082e788);
    /* 0082e788: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e78e: jne 0x82e804 */ if (!fZ) goto L_0082e804;
L_0082e790:; BB(0x0082e790);
    /* 0082e790: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e793: mov edx, 0x82e818 */ r_edx = 0x82e818u;
    /* 0082e798: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e79du); f_0082e2a0();
    /* 0082e79d: jmp 0x82e804 */ goto L_0082e804;
L_0082e79f:; BB(0x0082e79f);
    /* 0082e79f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x82e7a4u); f_0082d7b0();
    /* 0082e7a4: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e7aa: jne 0x82e7b4 */ if (!fZ) goto L_0082e7b4;
L_0082e7ac:; BB(0x0082e7ac);
    /* 0082e7ac: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0082e7af: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x82e7b4u); f_0082d838();
L_0082e7b4:; BB(0x0082e7b4);
    /* 0082e7b4: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e7ba: jne 0x82e7c9 */ if (!fZ) goto L_0082e7c9;
L_0082e7bc:; BB(0x0082e7bc);
    /* 0082e7bc: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0082e7bf: mov edx, esi */ r_edx = r_esi;
    /* 0082e7c1: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0082e7c4: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x82e7c9u); f_00830df8();
L_0082e7c9:; BB(0x0082e7c9);
    /* 0082e7c9: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e7cf: jne 0x82e7d9 */ if (!fZ) goto L_0082e7d9;
L_0082e7d1:; BB(0x0082e7d1);
    /* 0082e7d1: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0082e7d4: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x82e7d9u); f_00831290();
L_0082e7d9:; BB(0x0082e7d9);
    /* 0082e7d9: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e7df: jne 0x82e7ea */ if (!fZ) goto L_0082e7ea;
L_0082e7e1:; BB(0x0082e7e1);
    /* 0082e7e1: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e7e4: call 0x82e818 */ r_esp -= 4; W32(r_esp, 0x82e7e9u); f_0082e818();
    /* 0082e7e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e7ea:; BB(0x0082e7ea);
    /* 0082e7ea: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e7f0: jne 0x82e7ff */ if (!fZ) goto L_0082e7ff;
L_0082e7f2:; BB(0x0082e7f2);
    /* 0082e7f2: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0082e7f5: mov edx, 0x82e818 */ r_edx = 0x82e818u;
    /* 0082e7fa: call 0x82e2a0 */ r_esp -= 4; W32(r_esp, 0x82e7ffu); f_0082e2a0();
L_0082e7ff:; BB(0x0082e7ff);
    /* 0082e7ff: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x82e804u); f_0082da80();
L_0082e804:; BB(0x0082e804);
    /* 0082e804: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0082e807: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e809: jne 0x82e76b */ if (!fZ) goto L_0082e76b;
L_0082e80f:; BB(0x0082e80f);
    /* 0082e80f: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x82e814u); f_0082e4f4();
    /* 0082e814: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082e816: ret  */ FN_RET(0x0082e760); r_esp += 4; return;
}

void f_0082e818(void) /* sub_82E818 */
{
    FN_ENTER(0x0082e818);
    /* 0082e818: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082e819: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e81a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0082e81e: mov eax, dword ptr [0xacbf20] */ r_eax = R32((u32)(0xacbf20u));
    /* 0082e823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e825: je 0x82e82f */ if (fZ) goto L_0082e82f;
L_0082e827:; BB(0x0082e827);
    /* 0082e827: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e829: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082e82a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x82e82cu); call_ind(t); }
    /* 0082e82c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0082e82f:; BB(0x0082e82f);
    /* 0082e82f: mov edx, dword ptr [0xad9804] */ r_edx = R32((u32)(0xad9804u));
    /* 0082e835: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082e838: jne 0x82e85b */ if (!fZ) goto L_0082e85b;
L_0082e83a:; BB(0x0082e83a);
    /* 0082e83a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082e83d: je 0x82e846 */ if (fZ) goto L_0082e846;
L_0082e83f:; BB(0x0082e83f);
    /* 0082e83f: mov eax, ebp */ r_eax = r_ebp;
    /* 0082e841: call 0x82e8ac */ r_esp -= 4; W32(r_esp, 0x82e846u); f_0082e8ac();
L_0082e846:; BB(0x0082e846);
    /* 0082e846: mov edx, dword ptr [0xacbf20] */ r_edx = R32((u32)(0xacbf20u));
    /* 0082e84c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e84e: je 0x82e858 */ if (fZ) goto L_0082e858;
L_0082e850:; BB(0x0082e850);
    /* 0082e850: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e852: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082e853: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x82e855u); call_ind(t); }
    /* 0082e855: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0082e858:; BB(0x0082e858);
    /* 0082e858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082e859: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082e85a: ret  */ FN_RET(0x0082e818); r_esp += 4; return;
L_0082e85b:; BB(0x0082e85b);
    /* 0082e85b: mov eax, ebp */ r_eax = r_ebp;
    /* 0082e85d: call 0x82e870 */ r_esp -= 4; W32(r_esp, 0x82e862u); f_0082e870();
    /* 0082e862: mov edx, dword ptr [0xad9804] */ r_edx = R32((u32)(0xad9804u));
    /* 0082e868: jmp 0x82e83a */ goto L_0082e83a;
}

void f_0082e86c(void) /* sub_82E86C */
{
    FN_ENTER(0x0082e86c);
    /* 0082e86c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e871: mov edi, eax */ r_edi = r_eax;
    /* 0082e873: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e878u); f_00844ad0();
    /* 0082e878: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082e87a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e87c: je 0x82e883 */ if (fZ) goto L_0082e883;
L_0082e87e:; BB(0x0082e87e);
    /* 0082e87e: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e883u); f_008453fc();
L_0082e883:; BB(0x0082e883);
    /* 0082e883: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0082e886: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e888: je 0x82e8a3 */ if (fZ) goto L_0082e8a3;
L_0082e88a:; BB(0x0082e88a);
    /* 0082e88a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082e88c: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x82e891u); f_008362f0();
    /* 0082e891: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e896u); f_0083dc34();
    /* 0082e896: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082e899: call 0x838c4c */ r_esp -= 4; W32(r_esp, 0x82e89eu); f_00838c4c();
    /* 0082e89e: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e8a3u); f_0083dcd8();
L_0082e8a3:; BB(0x0082e8a3);
    /* 0082e8a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082e8a4: ret  */ FN_RET(0x0082e86c); r_esp += 4; return;
}

void f_0082e870(void) /* sub_82E870 */
{
    FN_ENTER(0x0082e870);
    /* 0082e870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e871: mov edi, eax */ r_edi = r_eax;
    /* 0082e873: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e878u); f_00844ad0();
    /* 0082e878: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082e87a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e87c: je 0x82e883 */ if (fZ) goto L_0082e883;
L_0082e87e:; BB(0x0082e87e);
    /* 0082e87e: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e883u); f_008453fc();
L_0082e883:; BB(0x0082e883);
    /* 0082e883: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0082e886: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e888: je 0x82e8a3 */ if (fZ) goto L_0082e8a3;
L_0082e88a:; BB(0x0082e88a);
    /* 0082e88a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082e88c: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x82e891u); f_008362f0();
    /* 0082e891: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e896u); f_0083dc34();
    /* 0082e896: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082e899: call 0x838c4c */ r_esp -= 4; W32(r_esp, 0x82e89eu); f_00838c4c();
    /* 0082e89e: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e8a3u); f_0083dcd8();
L_0082e8a3:; BB(0x0082e8a3);
    /* 0082e8a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082e8a4: ret  */ FN_RET(0x0082e870); r_esp += 4; return;
}

void f_0082e8a8(void) /* sub_82E8A8 */
{
    FN_ENTER(0x0082e8a8);
    /* 0082e8a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e8ad: mov edi, eax */ r_edi = r_eax;
    /* 0082e8af: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e8b4u); f_00844ad0();
    /* 0082e8b4: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082e8b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e8b8: je 0x82e8bf */ if (fZ) goto L_0082e8bf;
L_0082e8ba:; BB(0x0082e8ba);
    /* 0082e8ba: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e8bfu); f_008453fc();
L_0082e8bf:; BB(0x0082e8bf);
    /* 0082e8bf: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0082e8c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e8c4: je 0x82e8e2 */ if (fZ) goto L_0082e8e2;
L_0082e8c6:; BB(0x0082e8c6);
    /* 0082e8c6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082e8cb: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x82e8d0u); f_008362f0();
    /* 0082e8d0: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e8d5u); f_0083dc34();
    /* 0082e8d5: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082e8d8: call 0x8370d8 */ r_esp -= 4; W32(r_esp, 0x82e8ddu); f_008370d8();
    /* 0082e8dd: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e8e2u); f_0083dcd8();
L_0082e8e2:; BB(0x0082e8e2);
    /* 0082e8e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082e8e3: ret  */ FN_RET(0x0082e8a8); r_esp += 4; return;
}

void f_0082e8ac(void) /* sub_82E8AC */
{
    FN_ENTER(0x0082e8ac);
    /* 0082e8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e8ad: mov edi, eax */ r_edi = r_eax;
    /* 0082e8af: call 0x844ad0 */ r_esp -= 4; W32(r_esp, 0x82e8b4u); f_00844ad0();
    /* 0082e8b4: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0082e8b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e8b8: je 0x82e8bf */ if (fZ) goto L_0082e8bf;
L_0082e8ba:; BB(0x0082e8ba);
    /* 0082e8ba: call 0x8453fc */ r_esp -= 4; W32(r_esp, 0x82e8bfu); f_008453fc();
L_0082e8bf:; BB(0x0082e8bf);
    /* 0082e8bf: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0082e8c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e8c4: je 0x82e8e2 */ if (fZ) goto L_0082e8e2;
L_0082e8c6:; BB(0x0082e8c6);
    /* 0082e8c6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082e8cb: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x82e8d0u); f_008362f0();
    /* 0082e8d0: call 0x83dc34 */ r_esp -= 4; W32(r_esp, 0x82e8d5u); f_0083dc34();
    /* 0082e8d5: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0082e8d8: call 0x8370d8 */ r_esp -= 4; W32(r_esp, 0x82e8ddu); f_008370d8();
    /* 0082e8dd: call 0x83dcd8 */ r_esp -= 4; W32(r_esp, 0x82e8e2u); f_0083dcd8();
L_0082e8e2:; BB(0x0082e8e2);
    /* 0082e8e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082e8e3: ret  */ FN_RET(0x0082e8ac); r_esp += 4; return;
}

void f_0082e8e4(void) /* sub_82E8E4 */
{
    FN_ENTER(0x0082e8e4);
    /* 0082e8e4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082e8e8: mov eax, dword ptr [0xacbf20] */ r_eax = R32((u32)(0xacbf20u));
    /* 0082e8ed: mov dword ptr [0xacbf20], edx */ W32((u32)(0xacbf20u), r_edx);
    /* 0082e8f3: ret  */ FN_RET(0x0082e8e4); r_esp += 4; return;
}

void f_0082e8f4(void) /* sub_82E8F4 */
{
    FN_ENTER(0x0082e8f4);
    /* 0082e8f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e8f5: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0082e8fa: call 0x838c58 */ r_esp -= 4; W32(r_esp, 0x82e8ffu); f_00838c58();
    /* 0082e8ff: ret  */ FN_RET(0x0082e8f4); r_esp += 4; return;
}

void f_0082e900(void) /* sub_82E900 */
{
    FN_ENTER(0x0082e900);
    /* 0082e900: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e904: cmp eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0082e909: jbe 0x82e914 */ if ((fC||fZ)) goto L_0082e914;
L_0082e90b:; BB(0x0082e90b);
    /* 0082e90b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e90f: fchs  */ ST(0) = -ST(0);
    /* 0082e911: ret 4 */ FN_RET(0x0082e900); r_esp += 8; return;
L_0082e914:; BB(0x0082e914);
    /* 0082e914: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082e918: ret 4 */ FN_RET(0x0082e900); r_esp += 8; return;
}

void f_0082e91c(void) /* sub_82E91C */
{
    FN_ENTER(0x0082e91c);
    /* 0082e91c: mov eax, dword ptr [0xacbf34] */ r_eax = R32((u32)(0xacbf34u));
    /* 0082e921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e923: je 0x82e92f */ if (fZ) goto L_0082e92f;
L_0082e925:; BB(0x0082e925);
    /* 0082e925: mov dword ptr [0xacbf34], 0 */ W32((u32)(0xacbf34u), 0x0u);
L_0082e92f:; BB(0x0082e92f);
    /* 0082e92f: ret  */ FN_RET(0x0082e91c); r_esp += 4; return;
}

void f_0082e930(void) /* sub_82E930 */
{
    FN_ENTER(0x0082e930);
    /* 0082e930: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e934: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0082e938: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e93a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082e93c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082e93e: ret  */ FN_RET(0x0082e930); r_esp += 4; return;
}

void f_0082e940(void) /* sub_82E940 */
{
    FN_ENTER(0x0082e940);
    /* 0082e940: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e944: call dword ptr [0xa21780] */ { u32 t = R32((u32)(0xa21780u)); r_esp -= 4; W32(r_esp, 0x82e94au); call_ind(t); }
    /* 0082e94a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082e94b: ret  */ FN_RET(0x0082e940); r_esp += 4; return;
}

void f_0082e94c(void) /* sub_82E94C */
{
    FN_ENTER(0x0082e94c);
    /* 0082e94c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e950: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e954: call dword ptr [0xa21788] */ { u32 t = R32((u32)(0xa21788u)); r_esp -= 4; W32(r_esp, 0x82e95au); call_ind(t); }
    /* 0082e95a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e95d: ret  */ FN_RET(0x0082e94c); r_esp += 4; return;
}

void f_0082e960(void) /* sub_82E960 */
{
    FN_ENTER(0x0082e960);
    /* 0082e960: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e964: call dword ptr [0xa21784] */ { u32 t = R32((u32)(0xa21784u)); r_esp -= 4; W32(r_esp, 0x82e96au); call_ind(t); }
    /* 0082e96a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082e96b: ret  */ FN_RET(0x0082e960); r_esp += 4; return;
}

void f_0082e96c(void) /* sub_82E96C */
{
    FN_ENTER(0x0082e96c);
    /* 0082e96c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e970: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e972: lea edx, [eax + 0x2f] */ r_edx = (u32)(r_eax+0x2fu);
    /* 0082e975: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0082e978: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082e97a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082e97c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082e97e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082e980: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082e982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e983: call 0x85b1ae */ r_esp -= 4; W32(r_esp, 0x82e988u); f_0085b1ae();
    /* 0082e988: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e98b: ret  */ FN_RET(0x0082e96c); r_esp += 4; return;
}

void f_0082e98c(void) /* sub_82E98C */
{
    FN_ENTER(0x0082e98c);
    /* 0082e98c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e98e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e992: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082e996: call 0x85b312 */ r_esp -= 4; W32(r_esp, 0x82e99bu); f_0085b312();
    /* 0082e99b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e99e: ret  */ FN_RET(0x0082e98c); r_esp += 4; return;
}

void f_0082e9a0(void) /* sub_82E9A0 */
{
    FN_ENTER(0x0082e9a0);
    /* 0082e9a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9a1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0082e9a5: imul ebx, dword ptr [esp + 0xc] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_esp+0xcu)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0082e9aa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9ad: call 0x85b1ae */ r_esp -= 4; W32(r_esp, 0x82e9b2u); f_0085b1ae();
    /* 0082e9b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9b6: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x82e9bbu); f_0086b688();
    /* 0082e9bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082e9be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082e9bf: ret  */ FN_RET(0x0082e9a0); r_esp += 4; return;
}

void f_0082e9c0(void) /* sub_82E9C0 */
{
    FN_ENTER(0x0082e9c0);
    /* 0082e9c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082e9c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e9c6: je 0x82e9cf */ if (fZ) goto L_0082e9cf;
L_0082e9c8:; BB(0x0082e9c8);
    /* 0082e9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9c9: call 0x85b199 */ r_esp -= 4; W32(r_esp, 0x82e9ceu); f_0085b199();
    /* 0082e9ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082e9cf:; BB(0x0082e9cf);
    /* 0082e9cf: ret  */ FN_RET(0x0082e9c0); r_esp += 4; return;
}

void f_0082e9d0(void) /* sub_82E9D0 */
{
    FN_ENTER(0x0082e9d0);
    /* 0082e9d0: mov eax, dword ptr [0xacbf34] */ r_eax = R32((u32)(0xacbf34u));
    /* 0082e9d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082e9d7: jne 0x82e9e3 */ if (!fZ) goto L_0082e9e3;
L_0082e9d9:; BB(0x0082e9d9);
    /* 0082e9d9: mov dword ptr [0xacbf34], 1 */ W32((u32)(0xacbf34u), 0x1u);
L_0082e9e3:; BB(0x0082e9e3);
    /* 0082e9e3: ret  */ FN_RET(0x0082e9d0); r_esp += 4; return;
}

void f_0082e9e4(void) /* sub_82E9E4 */
{
    FN_ENTER(0x0082e9e4);
    /* 0082e9e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082e9e8: mov edi, ecx */ r_edi = r_ecx;
    /* 0082e9ea: mov ecx, edx */ r_ecx = r_edx;
    /* 0082e9ec: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082e9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082e9f0: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082e9f4: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x82e9f9u); f_008451f8();
    /* 0082e9f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082e9fb: je 0x82eaad */ if (fZ) goto L_0082eaad;
L_0082ea01:; BB(0x0082ea01);
    /* 0082ea01: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea05: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 0082ea08: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082ea0b: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0082ea0e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0082ea10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ea12: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082ea14: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0082ea17: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 0082ea1a: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 0082ea1d: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0082ea20: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 0082ea23: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0082ea25: fstp dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0)); FPOP();
    /* 0082ea28: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea2c: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0082ea2e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082ea31: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0082ea33: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082ea35: fstp dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0)); FPOP();
    /* 0082ea38: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea3c: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 0082ea3f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082ea42: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0082ea44: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082ea46: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 0082ea49: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea4d: fmul dword ptr [edi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x2cu));
    /* 0082ea50: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082ea53: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082ea55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082ea57: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 0082ea5a: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082ea5d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea61: fchs  */ ST(0) = -ST(0);
    /* 0082ea63: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0082ea65: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0082ea67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082ea69: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0082ea6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082ea6e: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082ea71: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea75: fchs  */ ST(0) = -ST(0);
    /* 0082ea77: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082ea79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082ea7b: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0082ea7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ea80: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0082ea83: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082ea86: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea8a: fchs  */ ST(0) = -ST(0);
    /* 0082ea8c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082ea8e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082ea90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ea92: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 0082ea95: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0082ea98: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0082ea9b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082ea9f: fchs  */ ST(0) = -ST(0);
    /* 0082eaa1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082eaa3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eaa5: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 0082eaa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082eaab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082eaac: ret  */ FN_RET(0x0082e9e4); r_esp += 4; return;
L_0082eaad:; BB(0x0082eaad);
    /* 0082eaad: mov edi, dword ptr [0xaf0328] */ r_edi = R32((u32)(0xaf0328u));
    /* 0082eab3: jmp 0x82ea01 */ goto L_0082ea01;
}

void f_0082eab8(void) /* sub_82EAB8 */
{
    FN_ENTER(0x0082eab8);
    /* 0082eab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082eab9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082eabc: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0082eabe: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0082eac2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0082eac5: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0082eac8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082eaca: je 0x82eb75 */ if (fZ) goto L_0082eb75;
L_0082ead0:; BB(0x0082ead0);
    /* 0082ead0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082ead2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082ead4: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0082ead7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082ead9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eadb: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0082eade: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082eae0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eae2: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0082eae6: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0082eae9: mov eax, dword ptr [0xaeb494] */ r_eax = R32((u32)(0xaeb494u));
    /* 0082eaee: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082eaf1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082eaf3: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0082eaf6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082eaf8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eafa: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0082eafd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082eaff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eb01: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0082eb04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082eb06: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082eb09: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082eb0c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0082eb0e: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0082eb11: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082eb13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082eb15: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082eb17: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0082eb1a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082eb1c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eb1e: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0082eb22: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0082eb25: je 0x82eb6e */ if (fZ) goto L_0082eb6e;
L_0082eb27:; BB(0x0082eb27);
    /* 0082eb27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082eb28: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0082eb2c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082eb2e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082eb32: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082eb34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eb36: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0082eb3a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0082eb3c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0082eb3e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0082eb41: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x82eb46u); f_0082dc9c();
    /* 0082eb46: fdivr dword ptr [0x98a42c] */ ST(0) = R_F32((u32)(0x98a42cu)) / ST(0);
    /* 0082eb4c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0082eb50: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0082eb52: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0082eb55: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0082eb59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082eb5b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082eb5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082eb5f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0082eb61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082eb63: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0082eb66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082eb68: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0082eb6b: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
L_0082eb6e:; BB(0x0082eb6e);
    /* 0082eb6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082eb71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082eb72: ret 4 */ FN_RET(0x0082eab8); r_esp += 8; return;
L_0082eb75:; BB(0x0082eb75);
    /* 0082eb75: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0082eb7b: jmp 0x82ead0 */ goto L_0082ead0;
}

void f_0082eb80(void) /* sub_82EB80 */
{
    FN_ENTER(0x0082eb80);
    /* 0082eb80: mov eax, dword ptr [0xaf0384] */ r_eax = R32((u32)(0xaf0384u));
    /* 0082eb85: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0082eb87: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb89: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb8b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb8f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb91: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb93: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb95: add ecx, dword ptr [0xaf0328] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaf0328u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eb9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082eb9d: je 0x82ebaa */ if (fZ) goto L_0082ebaa;
L_0082eb9f:; BB(0x0082eb9f);
    /* 0082eb9f: mov dword ptr [0xaf0328], ecx */ W32((u32)(0xaf0328u), r_ecx);
    /* 0082eba5: mov dword ptr [0xaf0384], eax */ W32((u32)(0xaf0384u), r_eax);
L_0082ebaa:; BB(0x0082ebaa);
    /* 0082ebaa: ret  */ FN_RET(0x0082eb80); r_esp += 4; return;
}

void f_0082ebac(void) /* sub_82EBAC */
{
    FN_ENTER(0x0082ebac);
    /* 0082ebac: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082ebae: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0082ebb0: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0082ebb3: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0082ebb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082ebb8: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0082ebba: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 0082ebbd: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0082ebc0: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0082ebc3: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0082ebc6: ret  */ FN_RET(0x0082ebac); r_esp += 4; return;
}

void f_0082ebc8(void) /* sub_82EBC8 */
{
    FN_ENTER(0x0082ebc8);
    /* 0082ebc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082ebc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082ebca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082ebcb: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082ebce: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0082ebd2: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0082ebd6: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 0082ebd9: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0082ebdc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ebde: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ebe0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ebe2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ebe4: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0082ebe9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0082ebeb: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0082ebee: mov ebp, edx */ r_ebp = r_edx;
    /* 0082ebf0: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0082ebf3: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0082ebf5: mov eax, ebp */ r_eax = r_ebp;
    /* 0082ebf7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082ebfa: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082ebfc: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0082ebfe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082ec00: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x82ec05u); f_0082dcbc();
    /* 0082ec05: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082ec09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082ec0b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x82ec10u); f_0082ddd8();
    /* 0082ec10: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0082ec14: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0082ec16: fdiv dword ptr [esp + 0x3c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x3cu));
    /* 0082ec1a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0082ec1d: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x82ec22u); f_0084d1fc();
    /* 0082ec22: fmul qword ptr [0x98a478] */ ST(0) = ST(0) * R_F64((u32)(0x98a478u));
    /* 0082ec28: fdiv qword ptr [0x98a470] */ ST(0) = ST(0) / R_F64((u32)(0x98a470u));
    /* 0082ec2e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0082ec32: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0082ec37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ec3c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082ec40: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082ec44: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0082ec48: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082ec4c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082ec50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082ec52: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082ec55: mov dword ptr [esp], 0xacbf40 */ W32((u32)(r_esp), 0xacbf40u);
    /* 0082ec5c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0082ec60: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0082ec64: fmul dword ptr [0x98a4fc] */ ST(0) = ST(0) * R_F32((u32)(0x98a4fcu));
    /* 0082ec6a: fdiv dword ptr [0x98a4f8] */ ST(0) = ST(0) / R_F32((u32)(0x98a4f8u));
    /* 0082ec70: mov dword ptr [esp + 8], 0x3faaaaab */ W32((u32)(r_esp+0x8u), 0x3faaaaabu);
    /* 0082ec78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082ec7c: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0082ec80: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0082ec84: call 0x892565 */ r_esp -= 4; W32(r_esp, 0x82ec89u); f_00892565();
    /* 0082ec89: fld dword ptr [0xacbf54] */ FPUSH(R_F32((u32)(0xacbf54u)));
    /* 0082ec8f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082ec93: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082ec98: call 0x82edc8 */ r_esp -= 4; W32(r_esp, 0x82ec9du); f_0082edc8();
    /* 0082ec9d: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 0082eca2: mov eax, 0xacbf40 */ r_eax = 0xacbf40u;
    /* 0082eca7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082eca9: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0082ecac: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082ecae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0082ecb1: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 0082ecb4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082ecb7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0082ecba: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082ecbd: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0082ecc0: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082ecc3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0082ecc6: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0082ecc9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0082eccc: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082eccf: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0082ecd2: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0082ecd5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0082ecd8: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0082ecdb: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0082ecde: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0082ece1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0082ece4: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0082ece7: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0082ecea: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0082eced: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0082ecf0: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0082ecf3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0082ecf6: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0082ecf9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0082ecfc: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0082ecff: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0082ed02: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0082ed05: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0082ed0b: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0082ed0f: fmul dword ptr [0x98a4f4] */ ST(0) = ST(0) * R_F32((u32)(0x98a4f4u));
    /* 0082ed15: fst dword ptr [0xacc090] */ W_F32((u32)(0xacc090u), ST(0));
    /* 0082ed1b: fdivr dword ptr [0x98a4f0] */ ST(0) = R_F32((u32)(0x98a4f0u)) / ST(0);
    /* 0082ed21: fstp dword ptr [0xacc094] */ W_F32((u32)(0xacc094u), ST(0)); FPOP();
    /* 0082ed27: mov dword ptr [0xacc084], edi */ W32((u32)(0xacc084u), r_edi);
    /* 0082ed2d: mov dword ptr [0xacc080], 0 */ W32((u32)(0xacc080u), 0x0u);
    /* 0082ed37: mov dword ptr [0xacc088], esi */ W32((u32)(0xacc088u), r_esi);
    /* 0082ed3d: mov dword ptr [0xacc08c], 0x3faaaaab */ W32((u32)(0xacc08cu), 0x3faaaaabu);
    /* 0082ed47: call 0x836100 */ r_esp -= 4; W32(r_esp, 0x82ed4cu); f_00836100();
    /* 0082ed4c: fld dword ptr [0xacc090] */ FPUSH(R_F32((u32)(0xacc090u)));
    /* 0082ed52: mov eax, dword ptr [0xacc090] */ r_eax = R32((u32)(0xacc090u));
    /* 0082ed57: fld dword ptr [0x98a4f0] */ FPUSH(R_F32((u32)(0x98a4f0u)));
    /* 0082ed5d: mov dword ptr [0xaf02d8], eax */ W32((u32)(0xaf02d8u), r_eax);
    /* 0082ed62: mov dword ptr [0xaf0300], esi */ W32((u32)(0xaf0300u), r_esi);
    /* 0082ed68: mov dword ptr [0xaf02dc], 0x3f800000 */ W32((u32)(0xaf02dcu), 0x3f800000u);
    /* 0082ed72: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 0082ed78: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082ed7a: fst dword ptr [0xaf02c0] */ W_F32((u32)(0xaf02c0u), ST(0));
    /* 0082ed80: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0082ed82: fstp dword ptr [0xaf02d0] */ W_F32((u32)(0xaf02d0u), ST(0)); FPOP();
    /* 0082ed88: mov dword ptr [0xaf02e0], 0x3f800000 */ W32((u32)(0xaf02e0u), 0x3f800000u);
    /* 0082ed92: fld dword ptr [0xaf02e0] */ FPUSH(R_F32((u32)(0xaf02e0u)));
    /* 0082ed98: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082ed9a: mov dword ptr [0xaf0304], edi */ W32((u32)(0xaf0304u), r_edi);
    /* 0082eda0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082eda2: fchs  */ ST(0) = -ST(0);
    /* 0082eda4: fst dword ptr [0xaf02c4] */ W_F32((u32)(0xaf02c4u), ST(0));
    /* 0082edaa: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0082edac: fstp dword ptr [0xaf02d4] */ W_F32((u32)(0xaf02d4u), ST(0)); FPOP();
    /* 0082edb2: mov dword ptr [0xaf02e4], 0x3f400000 */ W32((u32)(0xaf02e4u), 0x3f400000u);
    /* 0082edbc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082edbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082edc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082edc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082edc2: ret 0xc */ FN_RET(0x0082ebc8); r_esp += 16; return;
}

void f_0082edc8(void) /* sub_82EDC8 */
{
    FN_ENTER(0x0082edc8);
    /* 0082edc8: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082edce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082edd0: je 0x82ee59 */ if (fZ) goto L_0082ee59;
L_0082edd6:; BB(0x0082edd6);
    /* 0082edd6: fld dword ptr [0x98a4e0] */ FPUSH(R_F32((u32)(0x98a4e0u)));
    /* 0082eddc: fld dword ptr [0xacc0a0] */ FPUSH(R_F32((u32)(0xacc0a0u)));
    /* 0082ede2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0082ede4: fld dword ptr [0xacc0a4] */ FPUSH(R_F32((u32)(0xacc0a4u)));
    /* 0082edea: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0082edec: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082edef: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082edf3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0082edf7: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0082edfb: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0082ee03: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0082ee06: call 0x891e93 */ r_esp -= 4; W32(r_esp, 0x82ee0bu); f_00891e93();
    /* 0082ee0b: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 0082ee12: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee17: push dword ptr [0xacc0a4] */ { u32 v = R32((u32)(0xacc0a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082ee1d: push dword ptr [0xacc0a0] */ { u32 v = R32((u32)(0xacc0a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082ee23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee24: call 0x891e03 */ r_esp -= 4; W32(r_esp, 0x82ee29u); f_00891e03();
    /* 0082ee29: lea ecx, [esp + 0xc0] */ r_ecx = (u32)(r_esp+0xc0u);
    /* 0082ee30: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0082ee37: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0082ee3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee3e: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x82ee43u); f_00891536();
    /* 0082ee43: lea eax, [esp + 0xc0] */ r_eax = (u32)(r_esp+0xc0u);
    /* 0082ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee4b: mov edx, 0xacbf40 */ r_edx = 0xacbf40u;
    /* 0082ee50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee52: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x82ee57u); f_00891536();
    /* 0082ee57: jmp 0x82ee83 */ goto L_0082ee83;
L_0082ee59:; BB(0x0082ee59);
    /* 0082ee59: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082ee5c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee61: push dword ptr [0xacc0a4] */ { u32 v = R32((u32)(0xacc0a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082ee67: push dword ptr [0xacc0a0] */ { u32 v = R32((u32)(0xacc0a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082ee6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee6e: call 0x891e03 */ r_esp -= 4; W32(r_esp, 0x82ee73u); f_00891e03();
    /* 0082ee73: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0082ee76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee77: mov edx, 0xacbf40 */ r_edx = 0xacbf40u;
    /* 0082ee7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee7e: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x82ee83u); f_00891536();
L_0082ee83:; BB(0x0082ee83);
    /* 0082ee83: push 0xacbf40 */ { u32 v = 0xacbf40u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee88: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0082ee8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082ee8f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ee92: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x82ee98u); call_ind(t); }
    /* 0082ee98: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ee9e: ret  */ FN_RET(0x0082edc8); r_esp += 4; return;
}

void f_0082eea0(void) /* sub_82EEA0 */
{
    FN_ENTER(0x0082eea0);
    /* 0082eea0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082eea1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082eea2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082eea3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082eea6: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0082eeaa: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0082eeae: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 0082eeb1: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0082eeb4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eeb6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eeb8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eeba: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082eebc: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0082eec1: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0082eec3: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0082eec6: mov ebp, edx */ r_ebp = r_edx;
    /* 0082eec8: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0082eecb: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0082eecd: mov eax, ebp */ r_eax = r_ebp;
    /* 0082eecf: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0082eed2: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082eed4: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0082eed6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082eed8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x82eeddu); f_0082dcbc();
    /* 0082eedd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082eee1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082eee3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x82eee8u); f_0082ddd8();
    /* 0082eee8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0082eeec: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0082eeee: fdiv dword ptr [esp + 0x3c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x3cu));
    /* 0082eef2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0082eef5: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x82eefau); f_0084d1fc();
    /* 0082eefa: fmul qword ptr [0x98a468] */ ST(0) = ST(0) * R_F64((u32)(0x98a468u));
    /* 0082ef00: fdiv qword ptr [0x98a460] */ ST(0) = ST(0) / R_F64((u32)(0x98a460u));
    /* 0082ef06: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0082ef0a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0082ef0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0082ef14: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0082ef18: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0082ef1c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0082ef20: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0082ef24: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0082ef28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082ef2a: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082ef2d: mov dword ptr [esp], 0xacbf40 */ W32((u32)(r_esp), 0xacbf40u);
    /* 0082ef34: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0082ef38: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0082ef3c: fmul dword ptr [0x98a4d8] */ ST(0) = ST(0) * R_F32((u32)(0x98a4d8u));
    /* 0082ef42: fdiv dword ptr [0x98a4d4] */ ST(0) = ST(0) / R_F32((u32)(0x98a4d4u));
    /* 0082ef48: mov dword ptr [esp + 8], 0x3faaaaab */ W32((u32)(r_esp+0x8u), 0x3faaaaabu);
    /* 0082ef50: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0082ef54: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0082ef58: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0082ef5c: call 0x892565 */ r_esp -= 4; W32(r_esp, 0x82ef61u); f_00892565();
    /* 0082ef61: fld dword ptr [0xacbf54] */ FPUSH(R_F32((u32)(0xacbf54u)));
    /* 0082ef67: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0082ef6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082ef6d: call 0x82edc8 */ r_esp -= 4; W32(r_esp, 0x82ef72u); f_0082edc8();
    /* 0082ef72: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 0082ef77: mov eax, 0xacbf40 */ r_eax = 0xacbf40u;
    /* 0082ef7c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082ef7e: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0082ef81: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0082ef83: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0082ef86: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 0082ef89: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0082ef8c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0082ef8f: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0082ef92: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0082ef95: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0082ef98: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0082ef9b: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0082ef9e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0082efa1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082efa4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0082efa7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0082efaa: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0082efad: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0082efb0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0082efb3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0082efb6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0082efb9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0082efbc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0082efbf: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0082efc2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0082efc5: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0082efc8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0082efcb: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0082efce: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0082efd1: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0082efd4: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0082efd7: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0082efda: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 0082efe0: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0082efe4: fmul dword ptr [0x98a4d0] */ ST(0) = ST(0) * R_F32((u32)(0x98a4d0u));
    /* 0082efea: fst dword ptr [0xacc090] */ W_F32((u32)(0xacc090u), ST(0));
    /* 0082eff0: fdivr dword ptr [0x98a4cc] */ ST(0) = R_F32((u32)(0x98a4ccu)) / ST(0);
    /* 0082eff6: fstp dword ptr [0xacc094] */ W_F32((u32)(0xacc094u), ST(0)); FPOP();
    /* 0082effc: mov dword ptr [0xacc084], edi */ W32((u32)(0xacc084u), r_edi);
    /* 0082f002: mov dword ptr [0xacc080], 0 */ W32((u32)(0xacc080u), 0x0u);
    /* 0082f00c: mov dword ptr [0xacc088], esi */ W32((u32)(0xacc088u), r_esi);
    /* 0082f012: mov dword ptr [0xacc08c], 0x3faaaaab */ W32((u32)(0xacc08cu), 0x3faaaaabu);
    /* 0082f01c: call 0x836100 */ r_esp -= 4; W32(r_esp, 0x82f021u); f_00836100();
    /* 0082f021: fld dword ptr [0xacc090] */ FPUSH(R_F32((u32)(0xacc090u)));
    /* 0082f027: mov eax, dword ptr [0xacc090] */ r_eax = R32((u32)(0xacc090u));
    /* 0082f02c: fld dword ptr [0x98a4cc] */ FPUSH(R_F32((u32)(0x98a4ccu)));
    /* 0082f032: mov dword ptr [0xaf02d8], eax */ W32((u32)(0xaf02d8u), r_eax);
    /* 0082f037: mov dword ptr [0xaf0300], esi */ W32((u32)(0xaf0300u), r_esi);
    /* 0082f03d: mov dword ptr [0xaf02dc], 0x3f800000 */ W32((u32)(0xaf02dcu), 0x3f800000u);
    /* 0082f047: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 0082f04d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082f04f: fst dword ptr [0xaf02c0] */ W_F32((u32)(0xaf02c0u), ST(0));
    /* 0082f055: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0082f057: fstp dword ptr [0xaf02d0] */ W_F32((u32)(0xaf02d0u), ST(0)); FPOP();
    /* 0082f05d: mov dword ptr [0xaf02e0], 0x3f800000 */ W32((u32)(0xaf02e0u), 0x3f800000u);
    /* 0082f067: fld dword ptr [0xaf02e0] */ FPUSH(R_F32((u32)(0xaf02e0u)));
    /* 0082f06d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0082f06f: mov dword ptr [0xaf0304], edi */ W32((u32)(0xaf0304u), r_edi);
    /* 0082f075: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082f077: fchs  */ ST(0) = -ST(0);
    /* 0082f079: fst dword ptr [0xaf02c4] */ W_F32((u32)(0xaf02c4u), ST(0));
    /* 0082f07f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0082f081: fstp dword ptr [0xaf02d4] */ W_F32((u32)(0xaf02d4u), ST(0)); FPOP();
    /* 0082f087: mov dword ptr [0xaf02e4], 0x3f400000 */ W32((u32)(0xaf02e4u), 0x3f400000u);
    /* 0082f091: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082f094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082f095: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082f096: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082f097: ret 0xc */ FN_RET(0x0082eea0); r_esp += 16; return;
}

