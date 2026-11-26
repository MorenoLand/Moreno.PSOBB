#include "protos.h"

void f_00621140(void) /* sub_621140 */
{
    FN_ENTER(0x00621140);
    /* 00621140: mov ecx, dword ptr [0xa8ec84] */ r_ecx = R32((u32)(0xa8ec84u));
    /* 00621146: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621148: je 0x621165 */ if (fZ) goto L_00621165;
L_0062114a:; BB(0x0062114a);
    /* 0062114a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x62114fu); f_00829de0();
    /* 0062114f: push dword ptr [0xa8ec84] */ { u32 v = R32((u32)(0xa8ec84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621155: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x62115au); f_0082e960();
    /* 0062115a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062115b: mov dword ptr [0xa8ec84], 0 */ W32((u32)(0xa8ec84u), 0x0u);
L_00621165:; BB(0x00621165);
    /* 00621165: mov ecx, dword ptr [0xa8ec88] */ r_ecx = R32((u32)(0xa8ec88u));
    /* 0062116b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062116d: je 0x62118a */ if (fZ) goto L_0062118a;
L_0062116f:; BB(0x0062116f);
    /* 0062116f: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x621174u); f_00829de0();
    /* 00621174: push dword ptr [0xa8ec88] */ { u32 v = R32((u32)(0xa8ec88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062117a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x62117fu); f_0082e960();
    /* 0062117f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621180: mov dword ptr [0xa8ec88], 0 */ W32((u32)(0xa8ec88u), 0x0u);
L_0062118a:; BB(0x0062118a);
    /* 0062118a: mov ecx, dword ptr [0xa8ec8c] */ r_ecx = R32((u32)(0xa8ec8cu));
    /* 00621190: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00621192: je 0x6211a7 */ if (fZ) goto L_006211a7;
L_00621194:; BB(0x00621194);
    /* 00621194: je 0x62119d */ if (fZ) goto L_0062119d;
L_00621196:; BB(0x00621196);
    /* 00621196: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621198: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62119du); f_004066a8();
L_0062119d:; BB(0x0062119d);
    /* 0062119d: mov dword ptr [0xa8ec8c], 0 */ W32((u32)(0xa8ec8cu), 0x0u);
L_006211a7:; BB(0x006211a7);
    /* 006211a7: ret  */ FN_RET(0x00621140); r_esp += 4; return;
}

void f_006211a8(void) /* sub_6211A8 */
{
    FN_ENTER(0x006211a8);
    /* 006211a8: mov eax, dword ptr [0xa8ec84] */ r_eax = R32((u32)(0xa8ec84u));
    /* 006211ad: ret  */ FN_RET(0x006211a8); r_esp += 4; return;
}

void f_006211b0(void) /* sub_6211B0 */
{
    FN_ENTER(0x006211b0);
    /* 006211b0: mov eax, dword ptr [0xa8ec88] */ r_eax = R32((u32)(0xa8ec88u));
    /* 006211b5: ret  */ FN_RET(0x006211b0); r_esp += 4; return;
}

void f_006211b8(void) /* sub_6211B8 */
{
    FN_ENTER(0x006211b8);
    /* 006211b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006211b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006211bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006211bd: push 0x8e227e */ { u32 v = 0x8e227eu; r_esp -= 4; W32(r_esp, v); }
    /* 006211c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006211c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006211c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006211d0: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006211d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006211d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006211d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006211dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006211df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006211e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006211e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006211e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006211eb: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 006211ee: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x6211f3u); f_00619df0();
    /* 006211f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006211fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006211fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00621200: mov dword ptr [ecx], 0xb27d40 */ W32((u32)(r_ecx), 0xb27d40u);
    /* 00621206: mov eax, dword ptr [0x9c5508] */ r_eax = R32((u32)(0x9c5508u));
    /* 0062120b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062120c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062120f: call dword ptr [0xb27d54] */ { u32 t = R32((u32)(0xb27d54u)); r_esp -= 4; W32(r_esp, 0x621215u); call_ind(t); }
    /* 00621215: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621218: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x62121du); f_0061c84c();
    /* 0062121d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621220: mov eax, 0 */ r_eax = 0x0u;
    /* 00621225: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0062122b: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00621231: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 00621237: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 0062123d: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00621243: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00621249: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 0062124f: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00621255: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 0062125b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00621262: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621265: mov dword ptr [ecx], 0xb27e00 */ W32((u32)(r_ecx), 0xb27e00u);
    /* 0062126b: mov eax, dword ptr [0x9c5510] */ r_eax = R32((u32)(0x9c5510u));
    /* 00621270: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621272: push 0x9c551c */ { u32 v = 0x9c551cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621277: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062127a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62127fu); f_007b9a88();
    /* 0062127f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00621282: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x621287u); f_007b999c();
    /* 00621287: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621288: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062128b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x621290u); f_007b4f54();
    /* 00621290: mov ecx, dword ptr [0xa8ec80] */ r_ecx = R32((u32)(0xa8ec80u));
    /* 00621296: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621298: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62129du); f_005b8610();
    /* 0062129d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006212a0: mov ecx, dword ptr [0xa8ec80] */ r_ecx = R32((u32)(0xa8ec80u));
    /* 006212a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006212a8: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 006212ae: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6212b3u); f_005b8638();
    /* 006212b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006212b6: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 006212bc: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006212bf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006212c2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006212c5: fadd dword ptr [edx*4 + 0x931248] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931248u));
    /* 006212cc: fadd dword ptr [0x931268] */ ST(0) = ST(0) + R_F32((u32)(0x931268u));
    /* 006212d2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006212d4: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 006212da: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 006212e4: mov dword ptr [ebp - 0x44], 2 */ W32((u32)(r_ebp+0xffffffbcu), 0x2u);
    /* 006212eb: mov dword ptr [ebp - 0x40], 4 */ W32((u32)(r_ebp+0xffffffc0u), 0x4u);
    /* 006212f2: mov dword ptr [ebp - 0x3c], 7 */ W32((u32)(r_ebp+0xffffffc4u), 0x7u);
    /* 006212f9: mov dword ptr [ebp - 0x38], 9 */ W32((u32)(r_ebp+0xffffffc8u), 0x9u);
    /* 00621300: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00621307: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 0062130e: mov dword ptr [ebp - 0x2c], 8 */ W32((u32)(r_ebp+0xffffffd4u), 0x8u);
    /* 00621315: mov dword ptr [ebp - 0x28], 0xa */ W32((u32)(r_ebp+0xffffffd8u), 0xau);
L_0062131c:; BB(0x0062131c);
    /* 0062131c: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062131f: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00621322: push dword ptr [ebp + eax - 0x44] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00621326: push dword ptr [ecx + 0xd4] */ { u32 v = R32((u32)(r_ecx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062132c: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x621331u); f_0078e9b0();
    /* 00621331: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621334: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621337: mov dword ptr [ecx + ebx*2 + 0xd8], eax */ W32((u32)(r_ecx+r_ebx*2+0xd8u), r_eax);
    /* 0062133e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00621341: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621344: jl 0x62131c */ if ((fS!=fO)) goto L_0062131c;
L_00621346:; BB(0x00621346);
    /* 00621346: call 0x620d70 */ r_esp -= 4; W32(r_esp, 0x62134bu); f_00620d70();
    /* 0062134b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062134e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621351: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00621354: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00621357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062135a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00621361: mov esp, ebp */ r_esp = r_ebp;
    /* 00621363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00621364: ret 8 */ FN_RET(0x006211b8); r_esp += 12; return;
}

void f_00621368(void) /* sub_621368 */
{
    FN_ENTER(0x00621368);
    /* 00621368: mov ecx, dword ptr [0xa8ec78] */ r_ecx = R32((u32)(0xa8ec78u));
    /* 0062136e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621370: je 0x62138d */ if (fZ) goto L_0062138d;
L_00621372:; BB(0x00621372);
    /* 00621372: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x621377u); f_00829de0();
    /* 00621377: push dword ptr [0xa8ec78] */ { u32 v = R32((u32)(0xa8ec78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062137d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x621382u); f_0082e960();
    /* 00621382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621383: mov dword ptr [0xa8ec78], 0 */ W32((u32)(0xa8ec78u), 0x0u);
L_0062138d:; BB(0x0062138d);
    /* 0062138d: mov ecx, dword ptr [0xa8ec7c] */ r_ecx = R32((u32)(0xa8ec7cu));
    /* 00621393: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621395: je 0x6213b2 */ if (fZ) goto L_006213b2;
L_00621397:; BB(0x00621397);
    /* 00621397: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x62139cu); f_00829de0();
    /* 0062139c: push dword ptr [0xa8ec7c] */ { u32 v = R32((u32)(0xa8ec7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006213a2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6213a7u); f_0082e960();
    /* 006213a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006213a8: mov dword ptr [0xa8ec7c], 0 */ W32((u32)(0xa8ec7cu), 0x0u);
L_006213b2:; BB(0x006213b2);
    /* 006213b2: mov ecx, dword ptr [0xa8ec80] */ r_ecx = R32((u32)(0xa8ec80u));
    /* 006213b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006213ba: je 0x6213cf */ if (fZ) goto L_006213cf;
L_006213bc:; BB(0x006213bc);
    /* 006213bc: je 0x6213c5 */ if (fZ) goto L_006213c5;
L_006213be:; BB(0x006213be);
    /* 006213be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006213c0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6213c5u); f_004066a8();
L_006213c5:; BB(0x006213c5);
    /* 006213c5: mov dword ptr [0xa8ec80], 0 */ W32((u32)(0xa8ec80u), 0x0u);
L_006213cf:; BB(0x006213cf);
    /* 006213cf: ret  */ FN_RET(0x00621368); r_esp += 4; return;
}

void f_006213d0(void) /* sub_6213D0 */
{
    FN_ENTER(0x006213d0);
    /* 006213d0: mov eax, dword ptr [0xa8ec78] */ r_eax = R32((u32)(0xa8ec78u));
    /* 006213d5: ret  */ FN_RET(0x006213d0); r_esp += 4; return;
}

void f_006213d8(void) /* sub_6213D8 */
{
    FN_ENTER(0x006213d8);
    /* 006213d8: mov eax, dword ptr [0xa8ec7c] */ r_eax = R32((u32)(0xa8ec7cu));
    /* 006213dd: ret  */ FN_RET(0x006213d8); r_esp += 4; return;
}

void f_006213e0(void) /* sub_6213E0 */
{
    FN_ENTER(0x006213e0);
    /* 006213e0: mov ecx, dword ptr [0xa8ec6c] */ r_ecx = R32((u32)(0xa8ec6cu));
    /* 006213e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006213e8: je 0x621405 */ if (fZ) goto L_00621405;
L_006213ea:; BB(0x006213ea);
    /* 006213ea: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6213efu); f_00829de0();
    /* 006213ef: push dword ptr [0xa8ec6c] */ { u32 v = R32((u32)(0xa8ec6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006213f5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6213fau); f_0082e960();
    /* 006213fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006213fb: mov dword ptr [0xa8ec6c], 0 */ W32((u32)(0xa8ec6cu), 0x0u);
L_00621405:; BB(0x00621405);
    /* 00621405: mov ecx, dword ptr [0xa8ec70] */ r_ecx = R32((u32)(0xa8ec70u));
    /* 0062140b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062140d: je 0x62142a */ if (fZ) goto L_0062142a;
L_0062140f:; BB(0x0062140f);
    /* 0062140f: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x621414u); f_00829de0();
    /* 00621414: push dword ptr [0xa8ec70] */ { u32 v = R32((u32)(0xa8ec70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062141a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x62141fu); f_0082e960();
    /* 0062141f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621420: mov dword ptr [0xa8ec70], 0 */ W32((u32)(0xa8ec70u), 0x0u);
L_0062142a:; BB(0x0062142a);
    /* 0062142a: mov ecx, dword ptr [0xa8ec74] */ r_ecx = R32((u32)(0xa8ec74u));
    /* 00621430: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00621432: je 0x621447 */ if (fZ) goto L_00621447;
L_00621434:; BB(0x00621434);
    /* 00621434: je 0x62143d */ if (fZ) goto L_0062143d;
L_00621436:; BB(0x00621436);
    /* 00621436: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621438: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62143du); f_004066a8();
L_0062143d:; BB(0x0062143d);
    /* 0062143d: mov dword ptr [0xa8ec74], 0 */ W32((u32)(0xa8ec74u), 0x0u);
L_00621447:; BB(0x00621447);
    /* 00621447: ret  */ FN_RET(0x006213e0); r_esp += 4; return;
}

void f_00621448(void) /* sub_621448 */
{
    FN_ENTER(0x00621448);
    /* 00621448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00621449: mov edi, ecx */ r_edi = r_ecx;
    /* 0062144b: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00621451: mov eax, 0xfc */ r_eax = 0xfcu;
    /* 00621456: cmp edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062145c: mov ecx, edi */ r_ecx = r_edi;
    /* 0062145e: jl 0x621462 */ if ((fS!=fO)) goto L_00621462;
L_00621460:; BB(0x00621460);
    /* 00621460: mov edx, eax */ r_edx = r_eax;
L_00621462:; BB(0x00621462);
    /* 00621462: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00621464: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 0062146a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x62146du); call_ind(t); }
    /* 0062146d: mov ecx, edi */ r_ecx = r_edi;
    /* 0062146f: call 0x6214ac */ r_esp -= 4; W32(r_esp, 0x621474u); f_006214ac();
    /* 00621474: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062147a: push 0x9314b8 */ { u32 v = 0x9314b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062147f: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00621484: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x621489u); f_0061cdb0();
    /* 00621489: push 0x9314c8 */ { u32 v = 0x9314c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062148e: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 00621493: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x621498u); f_0061cdb0();
    /* 00621498: push 0x931210 */ { u32 v = 0x931210u; r_esp -= 4; W32(r_esp, v); }
    /* 0062149d: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 006214a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6214a7u); f_0061cdb0();
    /* 006214a7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006214aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006214ab: ret  */ FN_RET(0x00621448); r_esp += 4; return;
}

void f_006214ac(void) /* sub_6214AC */
{
    FN_ENTER(0x006214ac);
    /* 006214ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006214ad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006214b0: mov edi, ecx */ r_edi = r_ecx;
    /* 006214b2: mov ecx, dword ptr [edi + 0x88] */ r_ecx = R32((u32)(r_edi+0x88u));
    /* 006214b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006214ba: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006214c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006214c3: mov edx, 1 */ r_edx = 0x1u;
    /* 006214c8: jg 0x6214cc */ if ((!fZ&&fS==fO)) goto L_006214cc;
L_006214ca:; BB(0x006214ca);
    /* 006214ca: mov ecx, eax */ r_ecx = r_eax;
L_006214cc:; BB(0x006214cc);
    /* 006214cc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006214cf: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 006214d7: jl 0x6214db */ if ((fS!=fO)) goto L_006214db;
L_006214d9:; BB(0x006214d9);
    /* 006214d9: mov ecx, edx */ r_ecx = r_edx;
L_006214db:; BB(0x006214db);
    /* 006214db: push dword ptr [esp + ecx*4] */ { u32 v = R32((u32)(r_esp+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006214de: mov dword ptr [edi + 0x88], ecx */ W32((u32)(r_edi+0x88u), r_ecx);
    /* 006214e4: mov ecx, dword ptr [0xa8ec74] */ r_ecx = R32((u32)(0xa8ec74u));
    /* 006214ea: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6214efu); f_005b8610();
    /* 006214ef: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 006214f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006214f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006214f9: ret  */ FN_RET(0x006214ac); r_esp += 4; return;
}

void f_006214fc(void) /* sub_6214FC */
{
    FN_ENTER(0x006214fc);
    /* 006214fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006214fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006214ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621501: push 0x8e22a6 */ { u32 v = 0x8e22a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00621506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062150c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062150d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00621514: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00621517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062151a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062151d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00621520: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00621523: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00621526: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621529: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062152c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062152f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00621532: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x621537u); f_00619df0();
    /* 00621537: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062153e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621541: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00621544: mov dword ptr [ecx], 0xb27d40 */ W32((u32)(r_ecx), 0xb27d40u);
    /* 0062154a: mov eax, dword ptr [0x9c5508] */ r_eax = R32((u32)(0x9c5508u));
    /* 0062154f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621550: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00621553: call dword ptr [0xb27d54] */ { u32 t = R32((u32)(0xb27d54u)); r_esp -= 4; W32(r_esp, 0x621559u); call_ind(t); }
    /* 00621559: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062155c: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x621561u); f_0061c84c();
    /* 00621561: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621564: mov eax, 0 */ r_eax = 0x0u;
    /* 00621569: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0062156f: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00621575: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 0062157b: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 00621581: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00621587: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 0062158d: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 00621593: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00621599: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 0062159f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006215a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215a9: mov dword ptr [ecx], 0xb27e60 */ W32((u32)(r_ecx), 0xb27e60u);
    /* 006215af: mov eax, dword ptr [0x9c5514] */ r_eax = R32((u32)(0x9c5514u));
    /* 006215b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006215b6: push 0x9c551c */ { u32 v = 0x9c551cu; r_esp -= 4; W32(r_esp, v); }
    /* 006215bb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006215be: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6215c3u); f_007b9a88();
    /* 006215c3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006215c6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6215cbu); f_007b999c();
    /* 006215cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006215cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215cf: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6215d4u); f_007b4f54();
    /* 006215d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215d7: call 0x6214ac */ r_esp -= 4; W32(r_esp, 0x6215dcu); f_006214ac();
    /* 006215dc: mov ecx, dword ptr [0xa8ec74] */ r_ecx = R32((u32)(0xa8ec74u));
    /* 006215e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006215e4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6215e9u); f_005b8638();
    /* 006215e9: mov edx, eax */ r_edx = r_eax;
    /* 006215eb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215ee: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 006215f4: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 006215f7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006215fa: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006215fd: fadd dword ptr [ecx*4 + 0x931240] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x931240u));
    /* 00621604: fadd dword ptr [0x931264] */ ST(0) = ST(0) + R_F32((u32)(0x931264u));
    /* 0062160a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0062160f: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 00621615: mov dword ptr [eax + 0xb8], 0x3f000000 */ W32((u32)(r_eax+0xb8u), 0x3f000000u);
    /* 0062161f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00621621: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00621628: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0062162b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0062162e: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 00621635: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00621638: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0062163b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0062163e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00621641:; BB(0x00621641);
    /* 00621641: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00621644: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00621647: mov edx, dword ptr [ebp + edx - 0x44] */ r_edx = R32((u32)(r_ebp+r_edx+0xffffffbcu));
    /* 0062164b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062164e: je 0x62166b */ if (fZ) goto L_0062166b;
L_00621650:; BB(0x00621650);
    /* 00621650: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621651: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621657: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62165cu); f_0078e9b0();
    /* 0062165c: mov edx, eax */ r_edx = r_eax;
    /* 0062165e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621661: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621664: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
L_0062166b:; BB(0x0062166b);
    /* 0062166b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062166e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00621671: jl 0x621641 */ if ((fS!=fO)) goto L_00621641;
L_00621673:; BB(0x00621673);
    /* 00621673: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621676: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00621679: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062167c: mov dword ptr [eax + 0xf8], 1 */ W32((u32)(r_eax+0xf8u), 0x1u);
    /* 00621686: mov dword ptr [eax + 0xc4], 0x42480000 */ W32((u32)(r_eax+0xc4u), 0x42480000u);
    /* 00621690: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621693: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062169a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062169c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062169d: ret 8 */ FN_RET(0x006214fc); r_esp += 12; return;
}

void f_006216a0(void) /* sub_6216A0 */
{
    FN_ENTER(0x006216a0);
    /* 006216a0: mov eax, dword ptr [0xa8ec6c] */ r_eax = R32((u32)(0xa8ec6cu));
    /* 006216a5: ret  */ FN_RET(0x006216a0); r_esp += 4; return;
}

void f_006216a8(void) /* sub_6216A8 */
{
    FN_ENTER(0x006216a8);
    /* 006216a8: mov eax, dword ptr [0xa8ec70] */ r_eax = R32((u32)(0xa8ec70u));
    /* 006216ad: ret  */ FN_RET(0x006216a8); r_esp += 4; return;
}

void f_006216b0(void) /* sub_6216B0 */
{
    FN_ENTER(0x006216b0);
    /* 006216b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006216b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006216b4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006216b6: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006216bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216bd: jne 0x621889 */ if (!fZ) goto L_00621889;
L_006216c3:; BB(0x006216c3);
    /* 006216c3: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006216c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216cc: jne 0x6216d8 */ if (!fZ) goto L_006216d8;
L_006216ce:; BB(0x006216ce);
    /* 006216ce: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006216d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006216d2: call 0x816dd8 */ r_esp -= 4; W32(r_esp, 0x6216d7u); f_00816dd8();
    /* 006216d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006216d8:; BB(0x006216d8);
    /* 006216d8: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 006216de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216e1: je 0x62186e */ if (fZ) goto L_0062186e;
L_006216e7:; BB(0x006216e7);
    /* 006216e7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006216ea: jne 0x621772 */ if (!fZ) goto L_00621772;
L_006216f0:; BB(0x006216f0);
    /* 006216f0: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 006216f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006216f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006216fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006216fc: jle 0x621757 */ if ((fZ||fS!=fO)) goto L_00621757;
L_006216fe:; BB(0x006216fe);
    /* 006216fe: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00621702: mov esi, ebx */ r_esi = r_ebx;
    /* 00621704: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00621707: mov ebx, eax */ r_ebx = r_eax;
    /* 00621709: mov edi, edx */ r_edi = r_edx;
L_0062170b:; BB(0x0062170b);
    /* 0062170b: mov eax, edi */ r_eax = r_edi;
    /* 0062170d: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00621713: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00621716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621717: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x62171cu); f_00816eec();
    /* 0062171c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062171d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00621720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621722: jne 0x621729 */ if (!fZ) goto L_00621729;
L_00621724:; BB(0x00621724);
    /* 00621724: mov ebx, 1 */ r_ebx = 0x1u;
L_00621729:; BB(0x00621729);
    /* 00621729: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062172c: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621732: jl 0x62170b */ if ((fS!=fO)) goto L_0062170b;
L_00621734:; BB(0x00621734);
    /* 00621734: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00621737: mov eax, ebx */ r_eax = r_ebx;
    /* 00621739: mov ebx, esi */ r_ebx = r_esi;
    /* 0062173b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0062173f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621741: je 0x621757 */ if (fZ) goto L_00621757;
L_00621743:; BB(0x00621743);
    /* 00621743: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621749: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062174c: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621752: jmp 0x621a2a */ goto L_00621a2a;
L_00621757:; BB(0x00621757);
    /* 00621757: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00621759: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x62175eu); f_00619c10();
    /* 0062175e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621764: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00621767: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0062176d: jmp 0x621a2a */ goto L_00621a2a;
L_00621772:; BB(0x00621772);
    /* 00621772: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621775: jne 0x62185a */ if (!fZ) goto L_0062185a;
L_0062177b:; BB(0x0062177b);
    /* 0062177b: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621781: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00621783: jne 0x621a2a */ if (!fZ) goto L_00621a2a;
L_00621789:; BB(0x00621789);
    /* 00621789: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 0062178f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621791: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00621793: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00621795: jle 0x6217f0 */ if ((fZ||fS!=fO)) goto L_006217f0;
L_00621797:; BB(0x00621797);
    /* 00621797: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0062179b: mov esi, ebx */ r_esi = r_ebx;
    /* 0062179d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006217a0: mov ebx, eax */ r_ebx = r_eax;
    /* 006217a2: mov edi, edx */ r_edi = r_edx;
L_006217a4:; BB(0x006217a4);
    /* 006217a4: mov eax, edi */ r_eax = r_edi;
    /* 006217a6: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006217ac: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006217af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006217b0: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6217b5u); f_00816eec();
    /* 006217b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006217b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006217b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006217bb: jne 0x6217c2 */ if (!fZ) goto L_006217c2;
L_006217bd:; BB(0x006217bd);
    /* 006217bd: mov ebx, 1 */ r_ebx = 0x1u;
L_006217c2:; BB(0x006217c2);
    /* 006217c2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006217c5: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006217cb: jl 0x6217a4 */ if ((fS!=fO)) goto L_006217a4;
L_006217cd:; BB(0x006217cd);
    /* 006217cd: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006217d0: mov eax, ebx */ r_eax = r_ebx;
    /* 006217d2: mov ebx, esi */ r_ebx = r_esi;
    /* 006217d4: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006217d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006217da: je 0x6217f0 */ if (fZ) goto L_006217f0;
L_006217dc:; BB(0x006217dc);
    /* 006217dc: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006217e2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006217e5: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 006217eb: jmp 0x621a2a */ goto L_00621a2a;
L_006217f0:; BB(0x006217f0);
    /* 006217f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006217f2: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x6217f7u); f_00619c10();
    /* 006217f7: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006217fd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00621800: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621806: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 0062180c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062180e: je 0x621a2a */ if (fZ) goto L_00621a2a;
L_00621814:; BB(0x00621814);
    /* 00621814: je 0x621a7a */ if (fZ) goto L_00621a7a;
L_0062181a:; BB(0x0062181a);
    /* 0062181a: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0062181e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00621820: jl 0x62184a */ if ((fS!=fO)) goto L_0062184a;
L_00621822:; BB(0x00621822);
    /* 00621822: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621828: jg 0x62184a */ if ((!fZ&&fS==fO)) goto L_0062184a;
L_0062182a:; BB(0x0062182a);
    /* 0062182a: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00621830: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 00621834: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00621839: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0062183e: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00621843: mov eax, 1 */ r_eax = 0x1u;
    /* 00621848: jmp 0x62184c */ goto L_0062184c;
L_0062184a:; BB(0x0062184a);
    /* 0062184a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062184c:; BB(0x0062184c);
    /* 0062184c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062184f: jne 0x621a2a */ if (!fZ) goto L_00621a2a;
L_00621855:; BB(0x00621855);
    /* 00621855: jmp 0x621a2f */ goto L_00621a2f;
L_0062185a:; BB(0x0062185a);
    /* 0062185a: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621860: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00621863: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621869: jmp 0x621a2a */ goto L_00621a2a;
L_0062186e:; BB(0x0062186e);
    /* 0062186e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00621870: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x621875u); f_00619c10();
    /* 00621875: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0062187b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062187e: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621884: jmp 0x621a2a */ goto L_00621a2a;
L_00621889:; BB(0x00621889);
    /* 00621889: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062188f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621892: je 0x621a14 */ if (fZ) goto L_00621a14;
L_00621898:; BB(0x00621898);
    /* 00621898: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062189b: jne 0x621923 */ if (!fZ) goto L_00621923;
L_006218a1:; BB(0x006218a1);
    /* 006218a1: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 006218a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006218a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006218ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006218ad: jle 0x621908 */ if ((fZ||fS!=fO)) goto L_00621908;
L_006218af:; BB(0x006218af);
    /* 006218af: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006218b3: mov esi, ebx */ r_esi = r_ebx;
    /* 006218b5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006218b8: mov ebx, eax */ r_ebx = r_eax;
    /* 006218ba: mov edi, edx */ r_edi = r_edx;
L_006218bc:; BB(0x006218bc);
    /* 006218bc: mov eax, edi */ r_eax = r_edi;
    /* 006218be: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006218c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006218c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006218c8: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6218cdu); f_00816eec();
    /* 006218cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006218ce: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006218d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006218d3: jne 0x6218da */ if (!fZ) goto L_006218da;
L_006218d5:; BB(0x006218d5);
    /* 006218d5: mov ebx, 1 */ r_ebx = 0x1u;
L_006218da:; BB(0x006218da);
    /* 006218da: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006218dd: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006218e3: jl 0x6218bc */ if ((fS!=fO)) goto L_006218bc;
L_006218e5:; BB(0x006218e5);
    /* 006218e5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006218e8: mov eax, ebx */ r_eax = r_ebx;
    /* 006218ea: mov ebx, esi */ r_ebx = r_esi;
    /* 006218ec: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006218f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006218f2: je 0x621908 */ if (fZ) goto L_00621908;
L_006218f4:; BB(0x006218f4);
    /* 006218f4: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006218fa: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006218fd: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621903: jmp 0x621a2a */ goto L_00621a2a;
L_00621908:; BB(0x00621908);
    /* 00621908: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062190a: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x62190fu); f_00619c10();
    /* 0062190f: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621915: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00621918: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0062191e: jmp 0x621a2a */ goto L_00621a2a;
L_00621923:; BB(0x00621923);
    /* 00621923: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621926: jne 0x621a03 */ if (!fZ) goto L_00621a03;
L_0062192c:; BB(0x0062192c);
    /* 0062192c: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621932: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00621934: jne 0x621a2a */ if (!fZ) goto L_00621a2a;
L_0062193a:; BB(0x0062193a);
    /* 0062193a: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 00621940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621942: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00621944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00621946: jle 0x6219a1 */ if ((fZ||fS!=fO)) goto L_006219a1;
L_00621948:; BB(0x00621948);
    /* 00621948: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0062194c: mov esi, ebx */ r_esi = r_ebx;
    /* 0062194e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00621951: mov ebx, eax */ r_ebx = r_eax;
    /* 00621953: mov edi, edx */ r_edi = r_edx;
L_00621955:; BB(0x00621955);
    /* 00621955: mov eax, edi */ r_eax = r_edi;
    /* 00621957: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062195d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00621960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621961: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x621966u); f_00816eec();
    /* 00621966: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621967: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062196a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062196c: jne 0x621973 */ if (!fZ) goto L_00621973;
L_0062196e:; BB(0x0062196e);
    /* 0062196e: mov ebx, 1 */ r_ebx = 0x1u;
L_00621973:; BB(0x00621973);
    /* 00621973: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00621976: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062197c: jl 0x621955 */ if ((fS!=fO)) goto L_00621955;
L_0062197e:; BB(0x0062197e);
    /* 0062197e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00621981: mov eax, ebx */ r_eax = r_ebx;
    /* 00621983: mov ebx, esi */ r_ebx = r_esi;
    /* 00621985: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00621989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062198b: je 0x6219a1 */ if (fZ) goto L_006219a1;
L_0062198d:; BB(0x0062198d);
    /* 0062198d: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621993: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00621996: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0062199c: jmp 0x621a2a */ goto L_00621a2a;
L_006219a1:; BB(0x006219a1);
    /* 006219a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006219a3: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x6219a8u); f_00619c10();
    /* 006219a8: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 006219ae: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006219b1: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 006219b7: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 006219bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006219bf: je 0x621a2a */ if (fZ) goto L_00621a2a;
L_006219c1:; BB(0x006219c1);
    /* 006219c1: je 0x621ad3 */ if (fZ) goto L_00621ad3;
L_006219c7:; BB(0x006219c7);
    /* 006219c7: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006219cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006219cd: jl 0x6219f7 */ if ((fS!=fO)) goto L_006219f7;
L_006219cf:; BB(0x006219cf);
    /* 006219cf: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006219d5: jg 0x6219f7 */ if ((!fZ&&fS==fO)) goto L_006219f7;
L_006219d7:; BB(0x006219d7);
    /* 006219d7: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 006219dd: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 006219e1: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 006219e6: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 006219eb: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 006219f0: mov eax, 1 */ r_eax = 0x1u;
    /* 006219f5: jmp 0x6219f9 */ goto L_006219f9;
L_006219f7:; BB(0x006219f7);
    /* 006219f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006219f9:; BB(0x006219f9);
    /* 006219f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006219fc: jne 0x621a2a */ if (!fZ) goto L_00621a2a;
L_006219fe:; BB(0x006219fe);
    /* 006219fe: jmp 0x621a81 */ goto L_00621a81;
L_00621a03:; BB(0x00621a03);
    /* 00621a03: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621a09: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00621a0c: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00621a12: jmp 0x621a2a */ goto L_00621a2a;
L_00621a14:; BB(0x00621a14);
    /* 00621a14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00621a16: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x621a1bu); f_00619c10();
    /* 00621a1b: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00621a21: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00621a24: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_00621a2a:; BB(0x00621a2a);
    /* 00621a2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00621a2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00621a2e: ret  */ FN_RET(0x006216b0); r_esp += 4; return;
L_00621a2f:; BB(0x00621a2f);
    /* 00621a2f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00621a33: mov eax, 1 */ r_eax = 0x1u;
    /* 00621a38: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00621a3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621a3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00621a40: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x621a45u); f_007b5038();
    /* 00621a45: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00621a4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621a4d: je 0x621a2a */ if (fZ) goto L_00621a2a;
L_00621a4f:; BB(0x00621a4f);
    /* 00621a4f: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00621a53: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00621a55: jl 0x621a2a */ if ((fS!=fO)) goto L_00621a2a;
L_00621a57:; BB(0x00621a57);
    /* 00621a57: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621a5d: jg 0x621a2a */ if ((!fZ&&fS==fO)) goto L_00621a2a;
L_00621a5f:; BB(0x00621a5f);
    /* 00621a5f: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00621a65: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00621a6a: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 00621a6e: movzx edx, word ptr [esp + 0xa] */ r_edx = (u32)R16((u32)(r_esp+0xau));
    /* 00621a73: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
    /* 00621a78: jmp 0x621a2a */ goto L_00621a2a;
L_00621a7a:; BB(0x00621a7a);
    /* 00621a7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621a7c: jmp 0x62184c */ goto L_0062184c;
L_00621a81:; BB(0x00621a81);
    /* 00621a81: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00621a85: mov eax, 1 */ r_eax = 0x1u;
    /* 00621a8a: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00621a8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621a90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00621a92: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x621a97u); f_007b5038();
    /* 00621a97: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00621a9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621a9f: je 0x621a2a */ if (fZ) goto L_00621a2a;
L_00621aa1:; BB(0x00621aa1);
    /* 00621aa1: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00621aa5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00621aa7: jl 0x621a2a */ if ((fS!=fO)) goto L_00621a2a;
L_00621aa9:; BB(0x00621aa9);
    /* 00621aa9: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621aaf: jg 0x621a2a */ if ((!fZ&&fS==fO)) goto L_00621a2a;
L_00621ab5:; BB(0x00621ab5);
    /* 00621ab5: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00621abb: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00621ac0: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 00621ac4: movzx edx, word ptr [esp + 0xe] */ r_edx = (u32)R16((u32)(r_esp+0xeu));
    /* 00621ac9: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
    /* 00621ace: jmp 0x621a2a */ goto L_00621a2a;
L_00621ad3:; BB(0x00621ad3);
    /* 00621ad3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621ad5: jmp 0x6219f9 */ goto L_006219f9;
}

void f_00621adc(void) /* sub_621ADC */
{
    FN_ENTER(0x00621adc);
    /* 00621adc: mov ecx, dword ptr [0xa8ec60] */ r_ecx = R32((u32)(0xa8ec60u));
    /* 00621ae2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ae4: je 0x621b01 */ if (fZ) goto L_00621b01;
L_00621ae6:; BB(0x00621ae6);
    /* 00621ae6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x621aebu); f_00829de0();
    /* 00621aeb: push dword ptr [0xa8ec60] */ { u32 v = R32((u32)(0xa8ec60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621af1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x621af6u); f_0082e960();
    /* 00621af6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621af7: mov dword ptr [0xa8ec60], 0 */ W32((u32)(0xa8ec60u), 0x0u);
L_00621b01:; BB(0x00621b01);
    /* 00621b01: mov ecx, dword ptr [0xa8ec64] */ r_ecx = R32((u32)(0xa8ec64u));
    /* 00621b07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621b09: je 0x621b26 */ if (fZ) goto L_00621b26;
L_00621b0b:; BB(0x00621b0b);
    /* 00621b0b: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x621b10u); f_00829de0();
    /* 00621b10: push dword ptr [0xa8ec64] */ { u32 v = R32((u32)(0xa8ec64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621b16: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x621b1bu); f_0082e960();
    /* 00621b1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621b1c: mov dword ptr [0xa8ec64], 0 */ W32((u32)(0xa8ec64u), 0x0u);
L_00621b26:; BB(0x00621b26);
    /* 00621b26: mov ecx, dword ptr [0xa8ec68] */ r_ecx = R32((u32)(0xa8ec68u));
    /* 00621b2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00621b2e: je 0x621b43 */ if (fZ) goto L_00621b43;
L_00621b30:; BB(0x00621b30);
    /* 00621b30: je 0x621b39 */ if (fZ) goto L_00621b39;
L_00621b32:; BB(0x00621b32);
    /* 00621b32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b34: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x621b39u); f_004066a8();
L_00621b39:; BB(0x00621b39);
    /* 00621b39: mov dword ptr [0xa8ec68], 0 */ W32((u32)(0xa8ec68u), 0x0u);
L_00621b43:; BB(0x00621b43);
    /* 00621b43: ret  */ FN_RET(0x00621adc); r_esp += 4; return;
}

void f_00621b44(void) /* sub_621B44 */
{
    FN_ENTER(0x00621b44);
    /* 00621b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00621b45: mov edi, ecx */ r_edi = r_ecx;
    /* 00621b47: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00621b4d: mov eax, 0xfc */ r_eax = 0xfcu;
    /* 00621b52: cmp edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621b58: mov ecx, edi */ r_ecx = r_edi;
    /* 00621b5a: jl 0x621b5e */ if ((fS!=fO)) goto L_00621b5e;
L_00621b5c:; BB(0x00621b5c);
    /* 00621b5c: mov edx, eax */ r_edx = r_eax;
L_00621b5e:; BB(0x00621b5e);
    /* 00621b5e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00621b60: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 00621b66: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x621b69u); call_ind(t); }
    /* 00621b69: mov ecx, edi */ r_ecx = r_edi;
    /* 00621b6b: call 0x621b9c */ r_esp -= 4; W32(r_esp, 0x621b70u); f_00621b9c();
    /* 00621b70: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621b76: push 0x9314b8 */ { u32 v = 0x9314b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b7b: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b80: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x621b85u); f_0061cdb0();
    /* 00621b85: push 0x931210 */ { u32 v = 0x931210u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b8a: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00621b8f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x621b94u); f_0061cdb0();
    /* 00621b94: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00621b97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00621b98: ret  */ FN_RET(0x00621b44); r_esp += 4; return;
}

void f_00621b9c(void) /* sub_621B9C */
{
    FN_ENTER(0x00621b9c);
    /* 00621b9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00621b9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00621b9f: mov ecx, dword ptr [0xa8ec68] */ r_ecx = R32((u32)(0xa8ec68u));
    /* 00621ba5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621ba7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x621bacu); f_005b8610();
    /* 00621bac: mov dword ptr [ebp + 0xd4], eax */ W32((u32)(r_ebp+0xd4u), r_eax);
    /* 00621bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00621bb3: ret  */ FN_RET(0x00621b9c); r_esp += 4; return;
}

void f_00621bb4(void) /* sub_621BB4 */
{
    FN_ENTER(0x00621bb4);
    /* 00621bb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00621bb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00621bb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621bb9: push 0x8e22ce */ { u32 v = 0x8e22ceu; r_esp -= 4; W32(r_esp, v); }
    /* 00621bbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00621bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621bc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00621bcc: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00621bcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00621bd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00621bd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00621bd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00621bdb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00621bde: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621be1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00621be4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00621be7: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00621bea: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x621befu); f_00619df0();
    /* 00621bef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00621bf6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621bf9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00621bfc: mov dword ptr [ecx], 0xb27d40 */ W32((u32)(r_ecx), 0xb27d40u);
    /* 00621c02: mov eax, dword ptr [0x9c5508] */ r_eax = R32((u32)(0x9c5508u));
    /* 00621c07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621c08: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00621c0b: call dword ptr [0xb27d54] */ { u32 t = R32((u32)(0xb27d54u)); r_esp -= 4; W32(r_esp, 0x621c11u); call_ind(t); }
    /* 00621c11: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621c14: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x621c19u); f_0061c84c();
    /* 00621c19: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621c1c: mov eax, 0 */ r_eax = 0x0u;
    /* 00621c21: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00621c27: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00621c2d: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 00621c33: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 00621c39: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00621c3f: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00621c45: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 00621c4b: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00621c51: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 00621c57: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00621c5e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621c61: mov dword ptr [ecx], 0xb27ec0 */ W32((u32)(r_ecx), 0xb27ec0u);
    /* 00621c67: mov eax, dword ptr [0x9c5518] */ r_eax = R32((u32)(0x9c5518u));
    /* 00621c6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00621c6e: push 0x9c551c */ { u32 v = 0x9c551cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621c73: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00621c76: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x621c7bu); f_007b9a88();
    /* 00621c7b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00621c7e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x621c83u); f_007b999c();
    /* 00621c83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621c84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621c87: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x621c8cu); f_007b4f54();
    /* 00621c8c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621c8f: call 0x621b9c */ r_esp -= 4; W32(r_esp, 0x621c94u); f_00621b9c();
    /* 00621c94: mov ecx, dword ptr [0xa8ec68] */ r_ecx = R32((u32)(0xa8ec68u));
    /* 00621c9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621c9c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x621ca1u); f_005b8638();
    /* 00621ca1: mov edx, eax */ r_edx = r_eax;
    /* 00621ca3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621ca6: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00621cac: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00621caf: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00621cb2: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00621cb5: fadd dword ptr [ecx*4 + 0x931238] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x931238u));
    /* 00621cbc: fadd dword ptr [0x93125c] */ ST(0) = ST(0) + R_F32((u32)(0x93125cu));
    /* 00621cc2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00621cc7: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 00621ccd: mov dword ptr [eax + 0xb8], 0x3f000000 */ W32((u32)(r_eax+0xb8u), 0x3f000000u);
    /* 00621cd7: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00621cde: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00621ce1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00621ce4: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 00621ceb: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00621cee: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00621cf1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00621cf4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00621cf7: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
    /* 00621d01: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00621d04: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d07: je 0x621d13 */ if (fZ) goto L_00621d13;
L_00621d09:; BB(0x00621d09);
    /* 00621d09: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00621d13:; BB(0x00621d13);
    /* 00621d13: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00621d16: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d19: je 0x621d25 */ if (fZ) goto L_00621d25;
L_00621d1b:; BB(0x00621d1b);
    /* 00621d1b: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
L_00621d25:; BB(0x00621d25);
    /* 00621d25: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00621d28: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d2b: je 0x621d37 */ if (fZ) goto L_00621d37;
L_00621d2d:; BB(0x00621d2d);
    /* 00621d2d: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
L_00621d37:; BB(0x00621d37);
    /* 00621d37: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00621d3a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d3d: je 0x621d49 */ if (fZ) goto L_00621d49;
L_00621d3f:; BB(0x00621d3f);
    /* 00621d3f: mov dword ptr [eax + 0xe8], 0 */ W32((u32)(r_eax+0xe8u), 0x0u);
L_00621d49:; BB(0x00621d49);
    /* 00621d49: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00621d4c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d4f: je 0x621d5b */ if (fZ) goto L_00621d5b;
L_00621d51:; BB(0x00621d51);
    /* 00621d51: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_00621d5b:; BB(0x00621d5b);
    /* 00621d5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00621d5e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621d61: je 0x621d6d */ if (fZ) goto L_00621d6d;
L_00621d63:; BB(0x00621d63);
    /* 00621d63: mov dword ptr [eax + 0xf0], 0 */ W32((u32)(r_eax+0xf0u), 0x0u);
L_00621d6d:; BB(0x00621d6d);
    /* 00621d6d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00621d70: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00621d73: je 0x621d7f */ if (fZ) goto L_00621d7f;
L_00621d75:; BB(0x00621d75);
    /* 00621d75: mov dword ptr [eax + 0xf4], 0 */ W32((u32)(r_eax+0xf4u), 0x0u);
L_00621d7f:; BB(0x00621d7f);
    /* 00621d7f: mov dword ptr [eax + 0xf8], 1 */ W32((u32)(r_eax+0xf8u), 0x1u);
    /* 00621d89: mov dword ptr [eax + 0xc4], 0x42480000 */ W32((u32)(r_eax+0xc4u), 0x42480000u);
    /* 00621d93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621d96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00621d9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00621d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00621da0: ret 8 */ FN_RET(0x00621bb4); r_esp += 12; return;
}

void f_00621da4(void) /* sub_621DA4 */
{
    FN_ENTER(0x00621da4);
    /* 00621da4: mov eax, dword ptr [0xa8ec60] */ r_eax = R32((u32)(0xa8ec60u));
    /* 00621da9: ret  */ FN_RET(0x00621da4); r_esp += 4; return;
}

void f_00621dac(void) /* sub_621DAC */
{
    FN_ENTER(0x00621dac);
    /* 00621dac: mov eax, dword ptr [0xa8ec64] */ r_eax = R32((u32)(0xa8ec64u));
    /* 00621db1: ret  */ FN_RET(0x00621dac); r_esp += 4; return;
}

void f_00621db4(void) /* sub_621DB4 */
{
    FN_ENTER(0x00621db4);
    /* 00621db4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00621db5: mov ebp, esp */ r_ebp = r_esp;
    /* 00621db7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621db9: push 0x8e22f4 */ { u32 v = 0x8e22f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621dbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00621dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621dc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00621dcc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00621dcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00621dd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00621dd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00621dd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00621ddb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00621de0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00621de7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x621decu); f_008581c5();
    /* 00621dec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621ded: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00621df0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621df2: je 0x621e6a */ if (fZ) goto L_00621e6a;
L_00621df4:; BB(0x00621df4);
    /* 00621df4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00621dfb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00621e02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621e05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621e0a: push 0x9c54f8 */ { u32 v = 0x9c54f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e0f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e11: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x621e16u); f_005b7a84();
    /* 00621e16: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621e19: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00621e20:; BB(0x00621e20);
    /* 00621e20: mov dword ptr [0xa8ec68], eax */ W32((u32)(0xa8ec68u), r_eax);
    /* 00621e25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00621e2c: push 0x9314d8 */ { u32 v = 0x9314d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e31: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621e36u); f_008009dc();
    /* 00621e36: push 0x9314f4 */ { u32 v = 0x9314f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e3b: mov dword ptr [0xa8ec64], eax */ W32((u32)(0xa8ec64u), r_eax);
    /* 00621e40: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621e45u); f_008009dc();
    /* 00621e45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621e48: mov ecx, dword ptr [0xa8ec68] */ r_ecx = R32((u32)(0xa8ec68u));
    /* 00621e4e: mov dword ptr [0xa8ec60], eax */ W32((u32)(0xa8ec60u), r_eax);
    /* 00621e53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00621e55: je 0x621e5c */ if (fZ) goto L_00621e5c;
L_00621e57:; BB(0x00621e57);
    /* 00621e57: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x621e5cu); f_005b90d0();
L_00621e5c:; BB(0x00621e5c);
    /* 00621e5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621e5f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00621e66: mov esp, ebp */ r_esp = r_ebp;
    /* 00621e68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00621e69: ret  */ FN_RET(0x00621db4); r_esp += 4; return;
L_00621e6a:; BB(0x00621e6a);
    /* 00621e6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621e6c: jmp 0x621e20 */ goto L_00621e20;
}

void f_00621e70(void) /* sub_621E70 */
{
    FN_ENTER(0x00621e70);
    /* 00621e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00621e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00621e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621e75: push 0x8e231c */ { u32 v = 0x8e231cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00621e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00621e88: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00621e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00621e8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00621e91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00621e94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00621e97: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00621e9c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00621ea3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x621ea8u); f_008581c5();
    /* 00621ea8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621ea9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00621eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621eae: je 0x621f26 */ if (fZ) goto L_00621f26;
L_00621eb0:; BB(0x00621eb0);
    /* 00621eb0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00621eb7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00621ebe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621ec1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621ec6: push 0x9c54d8 */ { u32 v = 0x9c54d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00621ecb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00621ecd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x621ed2u); f_005b7a84();
    /* 00621ed2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621ed5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00621edc:; BB(0x00621edc);
    /* 00621edc: mov dword ptr [0xa8ec74], eax */ W32((u32)(0xa8ec74u), r_eax);
    /* 00621ee1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00621ee8: push 0x931480 */ { u32 v = 0x931480u; r_esp -= 4; W32(r_esp, v); }
    /* 00621eed: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621ef2u); f_008009dc();
    /* 00621ef2: push 0x93149c */ { u32 v = 0x93149cu; r_esp -= 4; W32(r_esp, v); }
    /* 00621ef7: mov dword ptr [0xa8ec70], eax */ W32((u32)(0xa8ec70u), r_eax);
    /* 00621efc: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621f01u); f_008009dc();
    /* 00621f01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621f04: mov ecx, dword ptr [0xa8ec74] */ r_ecx = R32((u32)(0xa8ec74u));
    /* 00621f0a: mov dword ptr [0xa8ec6c], eax */ W32((u32)(0xa8ec6cu), r_eax);
    /* 00621f0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00621f11: je 0x621f18 */ if (fZ) goto L_00621f18;
L_00621f13:; BB(0x00621f13);
    /* 00621f13: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x621f18u); f_005b90d0();
L_00621f18:; BB(0x00621f18);
    /* 00621f18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621f1b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00621f22: mov esp, ebp */ r_esp = r_ebp;
    /* 00621f24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00621f25: ret  */ FN_RET(0x00621e70); r_esp += 4; return;
L_00621f26:; BB(0x00621f26);
    /* 00621f26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621f28: jmp 0x621edc */ goto L_00621edc;
}

void f_00621f2c(void) /* sub_621F2C */
{
    FN_ENTER(0x00621f2c);
    /* 00621f2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00621f2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00621f2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00621f31: push 0x8e237a */ { u32 v = 0x8e237au; r_esp -= 4; W32(r_esp, v); }
    /* 00621f36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00621f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621f3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00621f44: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00621f47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00621f4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00621f4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00621f50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00621f53: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x621f58u); f_00807ac0();
    /* 00621f58: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621f5b: jne 0x621fd8 */ if (!fZ) goto L_00621fd8;
L_00621f5d:; BB(0x00621f5d);
    /* 00621f5d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00621f64: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f69: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x621f6eu); f_008581c5();
    /* 00621f6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621f6f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00621f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621f74: je 0x6220e8 */ if (fZ) goto L_006220e8;
L_00621f7a:; BB(0x00621f7a);
    /* 00621f7a: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00621f81: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00621f88: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00621f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00621f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621f90: push 0x9c54b4 */ { u32 v = 0x9c54b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f95: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00621f97: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x621f9cu); f_005b7a84();
    /* 00621f9c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00621f9f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00621fa6:; BB(0x00621fa6);
    /* 00621fa6: mov dword ptr [0xa8ec80], eax */ W32((u32)(0xa8ec80u), r_eax);
    /* 00621fab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00621fb2: push 0x931414 */ { u32 v = 0x931414u; r_esp -= 4; W32(r_esp, v); }
    /* 00621fb7: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621fbcu); f_008009dc();
    /* 00621fbc: push 0x931430 */ { u32 v = 0x931430u; r_esp -= 4; W32(r_esp, v); }
    /* 00621fc1: mov dword ptr [0xa8ec7c], eax */ W32((u32)(0xa8ec7cu), r_eax);
    /* 00621fc6: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x621fcbu); f_008009dc();
    /* 00621fcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621fce: mov dword ptr [0xa8ec78], eax */ W32((u32)(0xa8ec78u), r_eax);
    /* 00621fd3: jmp 0x6220cb */ goto L_006220cb;
L_00621fd8:; BB(0x00621fd8);
    /* 00621fd8: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621fdb: jne 0x622055 */ if (!fZ) goto L_00622055;
L_00621fdd:; BB(0x00621fdd);
    /* 00621fdd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00621fe4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00621fe9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x621feeu); f_008581c5();
    /* 00621fee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621fef: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00621ff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621ff4: je 0x6220ef */ if (fZ) goto L_006220ef;
L_00621ffa:; BB(0x00621ffa);
    /* 00621ffa: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00622001: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00622008: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062200d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062200e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062200f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622010: push 0x9c54b4 */ { u32 v = 0x9c54b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00622015: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00622017: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x62201cu); f_005b7a84();
    /* 0062201c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062201f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00622026:; BB(0x00622026);
    /* 00622026: mov dword ptr [0xa8ec80], eax */ W32((u32)(0xa8ec80u), r_eax);
    /* 0062202b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00622032: push 0x931444 */ { u32 v = 0x931444u; r_esp -= 4; W32(r_esp, v); }
    /* 00622037: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62203cu); f_008009dc();
    /* 0062203c: push 0x931464 */ { u32 v = 0x931464u; r_esp -= 4; W32(r_esp, v); }
    /* 00622041: mov dword ptr [0xa8ec7c], eax */ W32((u32)(0xa8ec7cu), r_eax);
    /* 00622046: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x62204bu); f_008009dc();
    /* 0062204b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062204e: mov dword ptr [0xa8ec78], eax */ W32((u32)(0xa8ec78u), r_eax);
    /* 00622053: jmp 0x6220cb */ goto L_006220cb;
L_00622055:; BB(0x00622055);
    /* 00622055: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062205c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00622061: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x622066u); f_008581c5();
    /* 00622066: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00622067: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062206a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062206c: je 0x6220f6 */ if (fZ) goto L_006220f6;
L_00622072:; BB(0x00622072);
    /* 00622072: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00622079: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622080: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00622083: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622088: push 0x9c54b4 */ { u32 v = 0x9c54b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062208d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062208f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x622094u); f_005b7a84();
    /* 00622094: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00622097: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062209e:; BB(0x0062209e);
    /* 0062209e: mov dword ptr [0xa8ec80], eax */ W32((u32)(0xa8ec80u), r_eax);
    /* 006220a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006220aa: push 0x931414 */ { u32 v = 0x931414u; r_esp -= 4; W32(r_esp, v); }
    /* 006220af: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6220b4u); f_008009dc();
    /* 006220b4: push 0x931430 */ { u32 v = 0x931430u; r_esp -= 4; W32(r_esp, v); }
    /* 006220b9: mov dword ptr [0xa8ec7c], eax */ W32((u32)(0xa8ec7cu), r_eax);
    /* 006220be: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6220c3u); f_008009dc();
    /* 006220c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006220c6: mov dword ptr [0xa8ec78], eax */ W32((u32)(0xa8ec78u), r_eax);
L_006220cb:; BB(0x006220cb);
    /* 006220cb: mov ecx, dword ptr [0xa8ec80] */ r_ecx = R32((u32)(0xa8ec80u));
    /* 006220d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006220d3: je 0x6220da */ if (fZ) goto L_006220da;
L_006220d5:; BB(0x006220d5);
    /* 006220d5: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x6220dau); f_005b90d0();
L_006220da:; BB(0x006220da);
    /* 006220da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006220dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006220e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006220e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006220e7: ret  */ FN_RET(0x00621f2c); r_esp += 4; return;
L_006220e8:; BB(0x006220e8);
    /* 006220e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006220ea: jmp 0x621fa6 */ goto L_00621fa6;
L_006220ef:; BB(0x006220ef);
    /* 006220ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006220f1: jmp 0x622026 */ goto L_00622026;
L_006220f6:; BB(0x006220f6);
    /* 006220f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006220f8: jmp 0x62209e */ goto L_0062209e;
}

