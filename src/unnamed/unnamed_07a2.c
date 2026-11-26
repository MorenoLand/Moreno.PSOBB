#include "protos.h"

void f_007a21a4(void) /* sub_7A21A4 */
{
    FN_ENTER(0x007a21a4);
    /* 007a21a4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 007a21a9: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 007a21ac: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a21ae: je 0x7a21b5 */ if (fZ) goto L_007a21b5;
L_007a21b0:; BB(0x007a21b0);
    /* 007a21b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a21b2: ret 8 */ FN_RET(0x007a21a4); r_esp += 12; return;
L_007a21b5:; BB(0x007a21b5);
    /* 007a21b5: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 007a21ba: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 007a21be: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a21c0: jne 0x7a21ca */ if (!fZ) goto L_007a21ca;
L_007a21c2:; BB(0x007a21c2);
    /* 007a21c2: mov eax, 1 */ r_eax = 0x1u;
    /* 007a21c7: ret 8 */ FN_RET(0x007a21a4); r_esp += 12; return;
L_007a21ca:; BB(0x007a21ca);
    /* 007a21ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a21cc: ret 8 */ FN_RET(0x007a21a4); r_esp += 12; return;
}

void f_007a21d0(void) /* sub_7A21D0 */
{
    FN_ENTER(0x007a21d0);
    /* 007a21d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a21d4: mov edx, dword ptr [eax + 0x8fc] */ r_edx = R32((u32)(r_eax+0x8fcu));
    /* 007a21da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a21dc: je 0x7a21f7 */ if (fZ) goto L_007a21f7;
L_007a21de:; BB(0x007a21de);
    /* 007a21de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a21e2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a21e6: mov dword ptr [eax + 8], 0xa000 */ W32((u32)(r_eax+0x8u), 0xa000u);
    /* 007a21ed: mov dword ptr [edx + 0x10], 0x70000000 */ W32((u32)(r_edx+0x10u), 0x70000000u);
    /* 007a21f4: ret 8 */ FN_RET(0x007a21d0); r_esp += 12; return;
L_007a21f7:; BB(0x007a21f7);
    /* 007a21f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a21fb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a21ff: mov dword ptr [eax + 8], 0x8000 */ W32((u32)(r_eax+0x8u), 0x8000u);
    /* 007a2206: mov dword ptr [edx + 0x10], 0x60000000 */ W32((u32)(r_edx+0x10u), 0x60000000u);
    /* 007a220d: ret 8 */ FN_RET(0x007a21d0); r_esp += 12; return;
}

void f_007a2210(void) /* sub_7A2210 */
{
    FN_ENTER(0x007a2210);
    /* 007a2210: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a2214: mov dword ptr [eax + 8], 0x2000 */ W32((u32)(r_eax+0x8u), 0x2000u);
    /* 007a221b: mov dword ptr [eax + 0xc], 0x3c000 */ W32((u32)(r_eax+0xcu), 0x3c000u);
    /* 007a2222: mov dword ptr [eax + 0x10], 0x800 */ W32((u32)(r_eax+0x10u), 0x800u);
    /* 007a2229: mov dword ptr [eax + 0x14], 0xe0000000 */ W32((u32)(r_eax+0x14u), 0xe0000000u);
    /* 007a2230: ret 8 */ FN_RET(0x007a2210); r_esp += 12; return;
}

void f_007a2234(void) /* sub_7A2234 */
{
    FN_ENTER(0x007a2234);
    /* 007a2234: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a2238: mov dword ptr [eax + 8], 0x2000 */ W32((u32)(r_eax+0x8u), 0x2000u);
    /* 007a223f: mov dword ptr [eax + 0x10], 0x10000000 */ W32((u32)(r_eax+0x10u), 0x10000000u);
    /* 007a2246: mov dword ptr [eax + 0x14], 0xe0000800 */ W32((u32)(r_eax+0x14u), 0xe0000800u);
    /* 007a224d: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x7a2252u); f_00687c48();
    /* 007a2252: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a2254: jne 0x7a2264 */ if (!fZ) goto L_007a2264;
L_007a2256:; BB(0x007a2256);
    /* 007a2256: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a225a: mov dword ptr [eax + 0xc], 0x30000 */ W32((u32)(r_eax+0xcu), 0x30000u);
    /* 007a2261: ret 8 */ FN_RET(0x007a2234); r_esp += 12; return;
L_007a2264:; BB(0x007a2264);
    /* 007a2264: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a2268: call 0x691570 */ r_esp -= 4; W32(r_esp, 0x7a226du); f_00691570();
    /* 007a226d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a2270: je 0x7a2280 */ if (fZ) goto L_007a2280;
L_007a2272:; BB(0x007a2272);
    /* 007a2272: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a2276: mov dword ptr [eax + 0xc], 0x40030000 */ W32((u32)(r_eax+0xcu), 0x40030000u);
    /* 007a227d: ret 8 */ FN_RET(0x007a2234); r_esp += 12; return;
L_007a2280:; BB(0x007a2280);
    /* 007a2280: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a2284: mov dword ptr [eax + 0xc], 0x40030000 */ W32((u32)(r_eax+0xcu), 0x40030000u);
    /* 007a228b: ret 8 */ FN_RET(0x007a2234); r_esp += 12; return;
}

void f_007a2290(void) /* sub_7A2290 */
{
    FN_ENTER(0x007a2290);
    /* 007a2290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2291: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a2294: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a2296: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 007a2299: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x7a229eu); f_0069862c();
    /* 007a229e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a22a0: jne 0x7a22a7 */ if (!fZ) goto L_007a22a7;
L_007a22a2:; BB(0x007a22a2);
    /* 007a22a2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a22a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a22a6: ret  */ FN_RET(0x007a2290); r_esp += 4; return;
L_007a22a7:; BB(0x007a22a7);
    /* 007a22a7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a22aa: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 007a22b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a22b2: je 0x7a22a2 */ if (fZ) goto L_007a22a2;
L_007a22b4:; BB(0x007a22b4);
    /* 007a22b4: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 007a22b8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007a22bb: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007a22bf: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a22c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a22c5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007a22c9: jmp 0x7a22d8 */ goto L_007a22d8;
L_007a22cb:; BB(0x007a22cb);
    /* 007a22cb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a22cf: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007a22d2: mov ecx, dword ptr [edx + 0x45c] */ r_ecx = R32((u32)(r_edx+0x45cu));
L_007a22d8:; BB(0x007a22d8);
    /* 007a22d8: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a22dc: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 007a22df: lea ebx, [edx + eax*8] */ r_ebx = (u32)(r_edx+r_eax*8);
    /* 007a22e2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a22e4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a22e6: lea edx, [ecx + ebx] */ r_edx = (u32)(r_ecx+r_ebx);
    /* 007a22e9: lea ebp, [ecx + ebx + 0x84] */ r_ebp = (u32)(r_ecx+r_ebx+0x84u);
    /* 007a22f0: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 007a22f4: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007a22f8: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a22fe: jne 0x7a2307 */ if (!fZ) goto L_007a2307;
L_007a2300:; BB(0x007a2300);
    /* 007a2300: mov eax, 1 */ r_eax = 0x1u;
    /* 007a2305: jmp 0x7a2309 */ goto L_007a2309;
L_007a2307:; BB(0x007a2307);
    /* 007a2307: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a2309:; BB(0x007a2309);
    /* 007a2309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a230b: je 0x7a248e */ if (fZ) goto L_007a248e;
L_007a2311:; BB(0x007a2311);
    /* 007a2311: mov eax, ebp */ r_eax = r_ebp;
    /* 007a2313: mov ebp, dword ptr [edx + 0xc4] */ r_ebp = R32((u32)(r_edx+0xc4u));
    /* 007a2319: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 007a231d: lea ebx, [eax + 0x44] */ r_ebx = (u32)(r_eax+0x44u);
    /* 007a2320: lea esi, [ebp - 1] */ r_esi = (u32)(r_ebp+0xffffffffu);
    /* 007a2323: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007a2327: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a2329: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007a232d: jle 0x7a248e */ if ((fZ||fS!=fO)) goto L_007a248e;
L_007a2333:; BB(0x007a2333);
    /* 007a2333: mov eax, ebp */ r_eax = r_ebp;
    /* 007a2335: fld dword ptr [edx + eax*8 + 0xc4] */ FPUSH(R_F32((u32)(r_edx+r_eax*8+0xc4u)));
    /* 007a233c: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 007a2341: jmp 0x7a239f */ goto L_007a239f;
L_007a2343:; BB(0x007a2343);
    /* 007a2343: movzx eax, word ptr [edx + ebx*8 + 0xc8] */ r_eax = (u32)R16((u32)(r_edx+r_ebx*8+0xc8u));
    /* 007a234b: movzx ecx, word ptr [edx + ebx*8 + 0xca] */ r_ecx = (u32)R16((u32)(r_edx+r_ebx*8+0xcau));
    /* 007a2353: mov ebp, dword ptr [edx + ebx*8 + 0xcc] */ r_ebp = R32((u32)(r_edx+r_ebx*8+0xccu));
    /* 007a235a: movzx edi, word ptr [edx + esi*8 + 0xc8] */ r_edi = (u32)R16((u32)(r_edx+r_esi*8+0xc8u));
    /* 007a2362: mov word ptr [edx + ebx*8 + 0xc8], di */ W16((u32)(r_edx+r_ebx*8+0xc8u), (u16)r_edi);
    /* 007a236a: movzx edi, word ptr [edx + esi*8 + 0xca] */ r_edi = (u32)R16((u32)(r_edx+r_esi*8+0xcau));
    /* 007a2372: mov word ptr [edx + ebx*8 + 0xca], di */ W16((u32)(r_edx+r_ebx*8+0xcau), (u16)r_edi);
    /* 007a237a: mov edi, dword ptr [edx + esi*8 + 0xcc] */ r_edi = R32((u32)(r_edx+r_esi*8+0xccu));
    /* 007a2381: mov dword ptr [edx + ebx*8 + 0xcc], edi */ W32((u32)(r_edx+r_ebx*8+0xccu), r_edi);
    /* 007a2388: mov word ptr [edx + esi*8 + 0xc8], ax */ W16((u32)(r_edx+r_esi*8+0xc8u), (u16)r_eax);
    /* 007a2390: mov word ptr [edx + esi*8 + 0xca], cx */ W16((u32)(r_edx+r_esi*8+0xcau), (u16)r_ecx);
    /* 007a2398: mov dword ptr [edx + esi*8 + 0xcc], ebp */ W32((u32)(r_edx+r_esi*8+0xccu), r_ebp);
L_007a239f:; BB(0x007a239f);
    /* 007a239f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a23a2: fcom dword ptr [edx + ebx*8 + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_ebx*8+0xccu))); 
    /* 007a23a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a23ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a23ac: jbe 0x7a23bf */ if ((fC||fZ)) goto L_007a23bf;
L_007a23ae:; BB(0x007a23ae);
    /* 007a23ae: fld dword ptr [edx + ebx*8 + 0xd4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*8+0xd4u)));
    /* 007a23b5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007a23b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a23b9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a23bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a23bd: jb 0x7a23ae */ if (fC) goto L_007a23ae;
L_007a23bf:; BB(0x007a23bf);
    /* 007a23bf: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a23c2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a23c4: jge 0x7a23ec */ if ((fS==fO)) goto L_007a23ec;
L_007a23c6:; BB(0x007a23c6);
    /* 007a23c6: fcom dword ptr [edx + esi*8 + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_esi*8+0xccu))); 
    /* 007a23cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a23cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a23d0: jae 0x7a23ec */ if (!fC) goto L_007a23ec;
L_007a23d2:; BB(0x007a23d2);
    /* 007a23d2: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a23d5: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a23d7: jge 0x7a23ec */ if ((fS==fO)) goto L_007a23ec;
L_007a23d9:; BB(0x007a23d9);
    /* 007a23d9: fcom dword ptr [edx + esi*8 + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_esi*8+0xccu))); 
    /* 007a23e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a23e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a23e3: jae 0x7a23ec */ if (!fC) goto L_007a23ec;
L_007a23e5:; BB(0x007a23e5);
    /* 007a23e5: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a23e8: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a23ea: jl 0x7a23d9 */ if ((fS!=fO)) goto L_007a23d9;
L_007a23ec:; BB(0x007a23ec);
    /* 007a23ec: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a23ee: jl 0x7a2343 */ if ((fS!=fO)) goto L_007a2343;
L_007a23f4:; BB(0x007a23f4);
    /* 007a23f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a23f6: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 007a23fa: movzx eax, word ptr [edx + ebx*8 + 0xc8] */ r_eax = (u32)R16((u32)(r_edx+r_ebx*8+0xc8u));
    /* 007a2402: movzx ebp, word ptr [edx + ebx*8 + 0xca] */ r_ebp = (u32)R16((u32)(r_edx+r_ebx*8+0xcau));
    /* 007a240a: mov esi, dword ptr [edx + ebx*8 + 0xcc] */ r_esi = R32((u32)(r_edx+r_ebx*8+0xccu));
    /* 007a2411: movzx ecx, word ptr [edx + edi*8 + 0xc0] */ r_ecx = (u32)R16((u32)(r_edx+r_edi*8+0xc0u));
    /* 007a2419: mov word ptr [edx + ebx*8 + 0xc8], cx */ W16((u32)(r_edx+r_ebx*8+0xc8u), (u16)r_ecx);
    /* 007a2421: movzx ecx, word ptr [edx + edi*8 + 0xc2] */ r_ecx = (u32)R16((u32)(r_edx+r_edi*8+0xc2u));
    /* 007a2429: mov word ptr [edx + ebx*8 + 0xca], cx */ W16((u32)(r_edx+r_ebx*8+0xcau), (u16)r_ecx);
    /* 007a2431: mov ecx, dword ptr [edx + edi*8 + 0xc4] */ r_ecx = R32((u32)(r_edx+r_edi*8+0xc4u));
    /* 007a2438: mov dword ptr [edx + ebx*8 + 0xcc], ecx */ W32((u32)(r_edx+r_ebx*8+0xccu), r_ecx);
    /* 007a243f: mov word ptr [edx + edi*8 + 0xc0], ax */ W16((u32)(r_edx+r_edi*8+0xc0u), (u16)r_eax);
    /* 007a2447: mov word ptr [edx + edi*8 + 0xc2], bp */ W16((u32)(r_edx+r_edi*8+0xc2u), (u16)r_ebp);
    /* 007a244f: mov dword ptr [edx + edi*8 + 0xc4], esi */ W32((u32)(r_edx+r_edi*8+0xc4u), r_esi);
    /* 007a2456: lea edx, [ebx - 1] */ r_edx = (u32)(r_ebx+0xffffffffu);
    /* 007a2459: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a245a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a245c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007a2460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a2461: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a2465: call 0x7a2a1c */ r_esp -= 4; W32(r_esp, 0x7a246au); f_007a2a1c();
    /* 007a246a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007a246e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a246f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a2472: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2473: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a2477: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2478: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a247c: call 0x7a2a1c */ r_esp -= 4; W32(r_esp, 0x7a2481u); f_007a2a1c();
    /* 007a2481: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a2485: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007a2488: mov ecx, dword ptr [edx + 0x45c] */ r_ecx = R32((u32)(r_edx+0x45cu));
L_007a248e:; BB(0x007a248e);
    /* 007a248e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a2492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a2493: call 0x7a2548 */ r_esp -= 4; W32(r_esp, 0x7a2498u); f_007a2548();
    /* 007a2498: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a249c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a249f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007a24a3: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a24a6: jl 0x7a22cb */ if ((fS!=fO)) goto L_007a22cb;
L_007a24ac:; BB(0x007a24ac);
    /* 007a24ac: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007a24b0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007a24b3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007a24b7: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007a24bb: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a24be: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 007a24c4: movzx edx, word ptr [ecx + 0x10a6] */ r_edx = (u32)R16((u32)(r_ecx+0x10a6u));
    /* 007a24cb: mov eax, dword ptr [ecx + 0x10ac] */ r_eax = R32((u32)(r_ecx+0x10acu));
    /* 007a24d1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007a24d4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007a24d8: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a24dc: mov word ptr [ecx + 0x10a4], dx */ W16((u32)(r_ecx+0x10a4u), (u16)r_edx);
    /* 007a24e3: mov dword ptr [ecx + 0x10a8], eax */ W32((u32)(r_ecx+0x10a8u), r_eax);
    /* 007a24e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a24eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a24ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a24ef:; BB(0x007a24ef);
    /* 007a24ef: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 007a24f2: mov esi, dword ptr [ebx + 0x45c] */ r_esi = R32((u32)(r_ebx+0x45cu));
    /* 007a24f8: mov dword ptr [eax + esi + 0xc4], 0 */ W32((u32)(r_eax+r_esi+0xc4u), 0x0u);
    /* 007a2503: lea ebx, [esi + eax + 0xc8] */ r_ebx = (u32)(r_esi+r_eax+0xc8u);
    /* 007a250a: mov dword ptr [eax + esi + 0x9c], edx */ W32((u32)(r_eax+r_esi+0x9cu), r_edx);
    /* 007a2511: lea esi, [esi + eax + 0x118] */ r_esi = (u32)(r_esi+r_eax+0x118u);
L_007a2518:; BB(0x007a2518);
    /* 007a2518: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 007a251d: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007a2520: mov word ptr [ebx], di */ W16((u32)(r_ebx), (u16)r_edi);
    /* 007a2523: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a2526: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a2528: ja 0x7a2518 */ if ((!fC&&!fZ)) goto L_007a2518;
L_007a252a:; BB(0x007a252a);
    /* 007a252a: add eax, 0x124 */ {  u32 a = r_eax; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a252f: cmp eax, 0xff8 */ {  u32 a = r_eax; u32 b = 0xff8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2534: jl 0x7a24ef */ if ((fS!=fO)) goto L_007a24ef;
L_007a2536:; BB(0x007a2536);
    /* 007a2536: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007a2539: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007a253d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007a2541: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a2544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2545: ret  */ FN_RET(0x007a2290); r_esp += 4; return;
}

void f_007a2548(void) /* sub_7A2548 */
{
    FN_ENTER(0x007a2548);
    /* 007a2548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2549: mov ebp, esp */ r_ebp = r_esp;
    /* 007a254b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a254d: push 0x8f59c0 */ { u32 v = 0x8f59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2552: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a2558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a2559: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a2560: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a2563: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a2566: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 007a2569: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 007a256c: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 007a256f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007a2572: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a2575: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 007a2578: lea eax, [eax + edx*8] */ r_eax = (u32)(r_eax+r_edx*8);
    /* 007a257b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007a257e: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 007a2581: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a2583: lea edx, [ecx + eax + 0x84] */ r_edx = (u32)(r_ecx+r_eax+0x84u);
    /* 007a258a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a258c: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 007a258f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007a2592: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 007a2595: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 007a2598: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007a259b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a259d: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 007a25a0: mov eax, 0 */ r_eax = 0x0u;
    /* 007a25a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a25a8: jle 0x7a2a09 */ if ((fZ||fS!=fO)) goto L_007a2a09;
L_007a25ae:; BB(0x007a25ae);
    /* 007a25ae: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a25b1: lea edx, [eax + 0x9c] */ r_edx = (u32)(r_eax+0x9cu);
    /* 007a25b7: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_007a25ba:; BB(0x007a25ba);
    /* 007a25ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a25bd: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 007a25c0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a25c5: je 0x7a2966 */ if (fZ) goto L_007a2966;
L_007a25cb:; BB(0x007a25cb);
    /* 007a25cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a25cc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7a25d1u); f_007b4d18();
    /* 007a25d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007a25d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a25d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a25d9: je 0x7a2966 */ if (fZ) goto L_007a2966;
L_007a25df:; BB(0x007a25df);
    /* 007a25df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a25e2: mov ecx, eax */ r_ecx = r_eax;
    /* 007a25e4: movsx edx, word ptr [edx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 007a25e8: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 007a25ee: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a25f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a25f3: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 007a25f6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a25f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a25fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a25fc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a25fe: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007a2601: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007a2604: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a2606: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 007a2608: je 0x7a2966 */ if (fZ) goto L_007a2966;
L_007a260e:; BB(0x007a260e);
    /* 007a260e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 007a2611: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2614: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007a2617: mov eax, dword ptr [eax + ecx*4 + 0x88] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x88u));
    /* 007a261e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2620: jge 0x7a297e */ if ((fS==fO)) goto L_007a297e;
L_007a2626:; BB(0x007a2626);
    /* 007a2626: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2629: movzx ebx, word ptr [ecx + 0x1098] */ r_ebx = (u32)R16((u32)(r_ecx+0x1098u));
    /* 007a2630: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2636: je 0x7a29de */ if (fZ) goto L_007a29de;
L_007a263c:; BB(0x007a263c);
    /* 007a263c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a263f: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 007a2642: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2644: jne 0x7a2671 */ if (!fZ) goto L_007a2671;
L_007a2646:; BB(0x007a2646);
    /* 007a2646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2649: cmp dx, word ptr [ecx + 0x109a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x109au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a2650: jne 0x7a2671 */ if (!fZ) goto L_007a2671;
L_007a2652:; BB(0x007a2652);
    /* 007a2652: mov eax, ecx */ r_eax = r_ecx;
    /* 007a2654: movzx edx, word ptr [eax + 0x108c] */ r_edx = (u32)R16((u32)(r_eax+0x108cu));
    /* 007a265b: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2661: je 0x7a29d1 */ if (fZ) goto L_007a29d1;
L_007a2667:; BB(0x007a2667);
    /* 007a2667: mov eax, 1 */ r_eax = 0x1u;
    /* 007a266c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a266f: jmp 0x7a2682 */ goto L_007a2682;
L_007a2671:; BB(0x007a2671);
    /* 007a2671: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2674: jle 0x7a2966 */ if ((fZ||fS!=fO)) goto L_007a2966;
L_007a267a:; BB(0x007a267a);
    /* 007a267a: mov eax, 1 */ r_eax = 0x1u;
    /* 007a267f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_007a2682:; BB(0x007a2682);
    /* 007a2682: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007a2685: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2688: movzx ecx, byte ptr [eax + edx*4 + 0x84] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x84u));
    /* 007a2690: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2693: jne 0x7a26b6 */ if (!fZ) goto L_007a26b6;
L_007a2695:; BB(0x007a2695);
    /* 007a2695: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 007a2698: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a269b: je 0x7a2966 */ if (fZ) goto L_007a2966;
L_007a26a1:; BB(0x007a26a1);
    /* 007a26a1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a26a4: mov ecx, edx */ r_ecx = r_edx;
    /* 007a26a6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a26a9: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 007a26af: mov byte ptr [edx + ecx*4 + 0x85], al */ W8((u32)(r_edx+r_ecx*4+0x85u), (u8)r_eax);
L_007a26b6:; BB(0x007a26b6);
    /* 007a26b6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007a26b9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 007a26bc: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 007a26bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a26c2: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 007a26c5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a26c7: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007a26ca: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a26cc: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 007a26cf: mov word ptr [ecx + edx + 4], si */ W16((u32)(r_ecx+r_edx+0x4u), (u16)r_esi);
    /* 007a26d4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007a26d7: mov dword ptr [ecx + edx + 8], edi */ W32((u32)(r_ecx+r_edx+0x8u), r_edi);
    /* 007a26db: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 007a26df: mov word ptr [ecx + edx + 6], ax */ W16((u32)(r_ecx+r_edx+0x6u), (u16)r_eax);
    /* 007a26e4: mov eax, dword ptr [ecx + edx + 0xc] */ r_eax = R32((u32)(r_ecx+r_edx+0xcu));
    /* 007a26e8: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a26eb: mov dword ptr [ecx + edx + 0xc], eax */ W32((u32)(r_ecx+r_edx+0xcu), r_eax);
    /* 007a26ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a26f2: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 007a26f5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a26f8: jne 0x7a2753 */ if (!fZ) goto L_007a2753;
L_007a26fa:; BB(0x007a26fa);
    /* 007a26fa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a26fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a2700: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a2703: movzx ebx, word ptr [eax + 0x20] */ r_ebx = (u32)R16((u32)(r_eax+0x20u));
    /* 007a2707: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 007a270b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a270c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a270d: call 0x7b9f70 */ r_esp -= 4; W32(r_esp, 0x7a2712u); f_007b9f70();
    /* 007a2712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2714: je 0x7a2725 */ if (fZ) goto L_007a2725;
L_007a2716:; BB(0x007a2716);
    /* 007a2716: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a2719: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a271c: mov eax, dword ptr [eax + edx + 0xa8] */ r_eax = R32((u32)(r_eax+r_edx+0xa8u));
    /* 007a2723: jmp 0x7a2753 */ goto L_007a2753;
L_007a2725:; BB(0x007a2725);
    /* 007a2725: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007a2728: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a272b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 007a272f: test ecx, 0x8000000 */ {  u32 a = r_ecx; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2735: jne 0x7a2746 */ if (!fZ) goto L_007a2746;
L_007a2737:; BB(0x007a2737);
    /* 007a2737: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a273a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a273d: mov eax, dword ptr [eax + edx + 0xa8] */ r_eax = R32((u32)(r_eax+r_edx+0xa8u));
    /* 007a2744: jmp 0x7a2756 */ goto L_007a2756;
L_007a2746:; BB(0x007a2746);
    /* 007a2746: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a2749: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a274c: mov eax, dword ptr [eax + edx + 0xa8] */ r_eax = R32((u32)(r_eax+r_edx+0xa8u));
L_007a2753:; BB(0x007a2753);
    /* 007a2753: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_007a2756:; BB(0x007a2756);
    /* 007a2756: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007a2759: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a275c: je 0x7a29bc */ if (fZ) goto L_007a29bc;
L_007a2762:; BB(0x007a2762);
    /* 007a2762: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a2765: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a2768: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a276b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a276e: mov dword ptr [edx + ebx + 0xa8], eax */ W32((u32)(r_edx+r_ebx+0xa8u), r_eax);
    /* 007a2775: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2778: movzx edi, word ptr [eax + 0x20] */ r_edi = (u32)R16((u32)(r_eax+0x20u));
    /* 007a277c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a277d: movsx ecx, word ptr [esi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 007a2781: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2782: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a2785: call 0x7b9f70 */ r_esp -= 4; W32(r_esp, 0x7a278au); f_007b9f70();
    /* 007a278a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a278c: jne 0x7a2937 */ if (!fZ) goto L_007a2937;
L_007a2792:; BB(0x007a2792);
    /* 007a2792: mov ebx, esi */ r_ebx = r_esi;
    /* 007a2794: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2797: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 007a279a: movzx edi, word ptr [ebx] */ r_edi = (u32)R16((u32)(r_ebx));
    /* 007a279d: mov word ptr [esi + 0x108c], di */ W16((u32)(r_esi+0x108cu), (u16)r_edi);
    /* 007a27a4: movzx eax, byte ptr [esi + edx*4 + 0x84] */ r_eax = (u32)R8((u32)(r_esi+r_edx*4+0x84u));
    /* 007a27ac: mov byte ptr [esi + 0x1088], al */ W8((u32)(r_esi+0x1088u), (u8)r_eax);
    /* 007a27b2: movzx ecx, byte ptr [esi + edx*4 + 0x85] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0x85u));
    /* 007a27ba: mov byte ptr [esi + 0x1089], cl */ W8((u32)(r_esi+0x1089u), (u8)r_ecx);
    /* 007a27c0: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007a27c4: mov word ptr [esi + 0x108e], ax */ W16((u32)(r_esi+0x108eu), (u16)r_eax);
    /* 007a27cb: movzx eax, word ptr [esi + 0x1094] */ r_eax = (u32)R16((u32)(r_esi+0x1094u));
    /* 007a27d2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a27d4: jne 0x7a2807 */ if (!fZ) goto L_007a2807;
L_007a27d6:; BB(0x007a27d6);
    /* 007a27d6: mov eax, esi */ r_eax = r_esi;
    /* 007a27d8: movzx edx, byte ptr [eax + 0x1088] */ r_edx = (u32)R8((u32)(r_eax+0x1088u));
    /* 007a27df: movzx ecx, byte ptr [eax + 0x1090] */ r_ecx = (u32)R8((u32)(r_eax+0x1090u));
    /* 007a27e6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a27e8: jne 0x7a2807 */ if (!fZ) goto L_007a2807;
L_007a27ea:; BB(0x007a27ea);
    /* 007a27ea: movzx edx, byte ptr [eax + 0x1089] */ r_edx = (u32)R8((u32)(r_eax+0x1089u));
    /* 007a27f1: movzx ecx, byte ptr [eax + 0x1091] */ r_ecx = (u32)R8((u32)(r_eax+0x1091u));
    /* 007a27f8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a27fa: jne 0x7a2803 */ if (!fZ) goto L_007a2803;
L_007a27fc:; BB(0x007a27fc);
    /* 007a27fc: mov eax, 1 */ r_eax = 0x1u;
    /* 007a2801: jmp 0x7a2809 */ goto L_007a2809;
L_007a2803:; BB(0x007a2803);
    /* 007a2803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a2805: jmp 0x7a2809 */ goto L_007a2809;
L_007a2807:; BB(0x007a2807);
    /* 007a2807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a2809:; BB(0x007a2809);
    /* 007a2809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a280b: jne 0x7a2937 */ if (!fZ) goto L_007a2937;
L_007a2811:; BB(0x007a2811);
    /* 007a2811: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a2814: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a2817: mov ecx, dword ptr [eax + edx + 0xa8] */ r_ecx = R32((u32)(r_eax+r_edx+0xa8u));
    /* 007a281e: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a2821: je 0x7a282a */ if (fZ) goto L_007a282a;
L_007a2823:; BB(0x007a2823);
    /* 007a2823: mov eax, 1 */ r_eax = 0x1u;
    /* 007a2828: jmp 0x7a282c */ goto L_007a282c;
L_007a282a:; BB(0x007a282a);
    /* 007a282a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a282c:; BB(0x007a282c);
    /* 007a282c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a282e: jne 0x7a2937 */ if (!fZ) goto L_007a2937;
L_007a2834:; BB(0x007a2834);
    /* 007a2834: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 007a283b: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 007a283d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a2842u); f_005caba4();
    /* 007a2842: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a2845: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2848: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 007a284b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a284d: je 0x7a29b2 */ if (fZ) goto L_007a29b2;
L_007a2853:; BB(0x007a2853);
    /* 007a2853: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 007a285a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a2861: push dword ptr [0xaca33c] */ { u32 v = R32((u32)(0xaca33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a2867: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 007a286a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a286d: mov ecx, eax */ r_ecx = r_eax;
    /* 007a286f: movzx ebx, byte ptr [edx + esi*4 + 0x84] */ r_ebx = (u32)R8((u32)(r_edx+r_esi*4+0x84u));
    /* 007a2877: movzx eax, byte ptr [edx + esi*4 + 0x85] */ r_eax = (u32)R8((u32)(r_edx+r_esi*4+0x85u));
    /* 007a287f: movzx edi, word ptr [edx + 0x20] */ r_edi = (u32)R16((u32)(r_edx+0x20u));
    /* 007a2883: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a2886: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 007a2889: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 007a288d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 007a2890: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 007a2893: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a2896: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 007a2899: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 007a289c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007a289f: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007a28a3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007a28a6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a28abu); f_008193cc();
    /* 007a28ab: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 007a28ae: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a28b1: mov dword ptr [esi], 0xb45f30 */ W32((u32)(r_esi), 0xb45f30u);
    /* 007a28b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a28b9: mov dword ptr [esi + 0x4c], 0xb3a270 */ W32((u32)(r_esi+0x4cu), 0xb3a270u);
    /* 007a28c0: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 007a28c5: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007a28c8: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 007a28cf: mov word ptr [esi + 0x24], di */ W16((u32)(r_esi+0x24u), (u16)r_edi);
    /* 007a28d3: mov byte ptr [esi + 0x60], al */ W8((u32)(r_esi+0x60u), (u8)r_eax);
    /* 007a28d6: mov byte ptr [esi + 0x61], al */ W8((u32)(r_esi+0x61u), (u8)r_eax);
    /* 007a28d9: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 007a28e0: mov word ptr [esi + 0x62], ax */ W16((u32)(r_esi+0x62u), (u16)r_eax);
    /* 007a28e4: mov edx, dword ptr [0x9ff664] */ r_edx = R32((u32)(0x9ff664u));
    /* 007a28ea: mov dword ptr [esi + 0x54], 0 */ W32((u32)(r_esi+0x54u), 0x0u);
    /* 007a28f1: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 007a28f4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007a28f7: mov dword ptr [esi + 0x50], 0 */ W32((u32)(r_esi+0x50u), 0x0u);
    /* 007a28fe: mov word ptr [esi + 0x64], cx */ W16((u32)(r_esi+0x64u), (u16)r_ecx);
    /* 007a2902: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 007a2905: mov word ptr [esi + 0x66], bx */ W16((u32)(r_esi+0x66u), (u16)r_ebx);
    /* 007a2909: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 007a290c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007a290f: mov byte ptr [esi + 0x60], dl */ W8((u32)(r_esi+0x60u), (u8)r_edx);
    /* 007a2912: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 007a2915: mov byte ptr [esi + 0x61], dl */ W8((u32)(r_esi+0x61u), (u8)r_edx);
    /* 007a2918: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007a291b: mov word ptr [esi + 0x24], dx */ W16((u32)(r_esi+0x24u), (u16)r_edx);
    /* 007a291f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_007a2922:; BB(0x007a2922);
    /* 007a2922: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a2929: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 007a292c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a292e: je 0x7a2937 */ if (fZ) goto L_007a2937;
L_007a2930:; BB(0x007a2930);
    /* 007a2930: mov ecx, eax */ r_ecx = r_eax;
    /* 007a2932: call 0x7a42a0 */ r_esp -= 4; W32(r_esp, 0x7a2937u); f_007a42a0();
L_007a2937:; BB(0x007a2937);
    /* 007a2937: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007a293a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a293d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a2940: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007a2943: mov eax, dword ptr [edx + ebx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ebx*4+0x18u));
    /* 007a2947: or eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a294c: mov dword ptr [edx + ebx*4 + 0x18], eax */ W32((u32)(r_edx+r_ebx*4+0x18u), r_eax);
    /* 007a2950: movzx ecx, word ptr [esi + 0x20] */ r_ecx = (u32)R16((u32)(r_esi+0x20u));
    /* 007a2954: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 007a2958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2959: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a295c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a295d: call 0x7b9ec8 */ r_esp -= 4; W32(r_esp, 0x7a2962u); f_007b9ec8();
    /* 007a2962: add dword ptr [ebp - 0x30], 1 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a2966:; BB(0x007a2966);
    /* 007a2966: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a2969: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a296c: add dword ptr [ebp - 0x14], 8 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007a2970: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a2973: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a2976: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2978: jl 0x7a25ba */ if ((fS!=fO)) goto L_007a25ba;
L_007a297e:; BB(0x007a297e);
    /* 007a297e: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 007a2981: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007a2984: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 007a2987: mov ebx, dword ptr [ebp - 0x58] */ r_ebx = R32((u32)(r_ebp+0xffffffa8u));
    /* 007a298a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a298f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 007a2991: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a2993: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a2995: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007a2998: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a299a: mov word ptr [ecx + edi + 4], dx */ W16((u32)(r_ecx+r_edi+0x4u), (u16)r_edx);
    /* 007a299f: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 007a29a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a29a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a29ac: mov esp, ebp */ r_esp = r_ebp;
    /* 007a29ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a29af: ret 4 */ FN_RET(0x007a2548); r_esp += 8; return;
L_007a29b2:; BB(0x007a29b2);
    /* 007a29b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a29b4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a29b7: jmp 0x7a2922 */ goto L_007a2922;
L_007a29bc:; BB(0x007a29bc);
    /* 007a29bc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007a29bf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a29c2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a29c5: mov dword ptr [edx + ecx + 0xa8], eax */ W32((u32)(r_edx+r_ecx+0xa8u), r_eax);
    /* 007a29cc: jmp 0x7a2937 */ goto L_007a2937;
L_007a29d1:; BB(0x007a29d1);
    /* 007a29d1: mov eax, 2 */ r_eax = 0x2u;
    /* 007a29d6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a29d9: jmp 0x7a2682 */ goto L_007a2682;
L_007a29de:; BB(0x007a29de);
    /* 007a29de: mov eax, ecx */ r_eax = r_ecx;
    /* 007a29e0: movzx edx, word ptr [eax + 0x108c] */ r_edx = (u32)R16((u32)(r_eax+0x108cu));
    /* 007a29e7: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a29ed: je 0x7a29fc */ if (fZ) goto L_007a29fc;
L_007a29ef:; BB(0x007a29ef);
    /* 007a29ef: mov eax, 1 */ r_eax = 0x1u;
    /* 007a29f4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a29f7: jmp 0x7a2682 */ goto L_007a2682;
L_007a29fc:; BB(0x007a29fc);
    /* 007a29fc: mov eax, 2 */ r_eax = 0x2u;
    /* 007a2a01: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007a2a04: jmp 0x7a2682 */ goto L_007a2682;
L_007a2a09:; BB(0x007a2a09);
    /* 007a2a09: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007a2a0c: lea edx, [eax + 0x9c] */ r_edx = (u32)(r_eax+0x9cu);
    /* 007a2a12: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 007a2a15: jmp 0x7a297e */ goto L_007a297e;
}

void f_007a2a1c(void) /* sub_7A2A1C */
{
    FN_ENTER(0x007a2a1c);
    /* 007a2a1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2a1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2a1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2a1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2a20: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a2a23: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a2a27: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007a2a2b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007a2a2f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007a2a33: mov ebx, eax */ r_ebx = r_eax;
    /* 007a2a35: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_007a2a38:; BB(0x007a2a38);
    /* 007a2a38: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a2a3c: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2a3e: jl 0x7a2a4a */ if ((fS!=fO)) goto L_007a2a4a;
L_007a2a40:; BB(0x007a2a40);
    /* 007a2a40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a2a43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a2a44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2a45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a2a46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a2a47: ret 0xc */ FN_RET(0x007a2a1c); r_esp += 16; return;
L_007a2a4a:; BB(0x007a2a4a);
    /* 007a2a4a: fld dword ptr [esi + ebx*8 + 4] */ FPUSH(R_F32((u32)(r_esi+r_ebx*8+0x4u)));
    /* 007a2a4e: lea ebp, [edx - 1] */ r_ebp = (u32)(r_edx+0xffffffffu);
    /* 007a2a51: mov edx, ebx */ r_edx = r_ebx;
    /* 007a2a53: jmp 0x7a2a89 */ goto L_007a2a89;
L_007a2a55:; BB(0x007a2a55);
    /* 007a2a55: movzx eax, word ptr [esi + ebp*8] */ r_eax = (u32)R16((u32)(r_esi+r_ebp*8));
    /* 007a2a59: movzx ecx, word ptr [esi + ebp*8 + 2] */ r_ecx = (u32)R16((u32)(r_esi+r_ebp*8+0x2u));
    /* 007a2a5e: mov ebx, dword ptr [esi + ebp*8 + 4] */ r_ebx = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 007a2a62: movzx edi, word ptr [esi + edx*8] */ r_edi = (u32)R16((u32)(r_esi+r_edx*8));
    /* 007a2a66: mov word ptr [esi + ebp*8], di */ W16((u32)(r_esi+r_ebp*8), (u16)r_edi);
    /* 007a2a6a: movzx edi, word ptr [esi + edx*8 + 2] */ r_edi = (u32)R16((u32)(r_esi+r_edx*8+0x2u));
    /* 007a2a6f: mov word ptr [esi + ebp*8 + 2], di */ W16((u32)(r_esi+r_ebp*8+0x2u), (u16)r_edi);
    /* 007a2a74: mov edi, dword ptr [esi + edx*8 + 4] */ r_edi = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 007a2a78: mov dword ptr [esi + ebp*8 + 4], edi */ W32((u32)(r_esi+r_ebp*8+0x4u), r_edi);
    /* 007a2a7c: mov word ptr [esi + edx*8], ax */ W16((u32)(r_esi+r_edx*8), (u16)r_eax);
    /* 007a2a80: mov word ptr [esi + edx*8 + 2], cx */ W16((u32)(r_esi+r_edx*8+0x2u), (u16)r_ecx);
    /* 007a2a85: mov dword ptr [esi + edx*8 + 4], ebx */ W32((u32)(r_esi+r_edx*8+0x4u), r_ebx);
L_007a2a89:; BB(0x007a2a89);
    /* 007a2a89: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a2a8c: fcom dword ptr [esi + ebp*8 + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebp*8+0x4u))); 
    /* 007a2a90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2a92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2a93: jbe 0x7a2aa3 */ if ((fC||fZ)) goto L_007a2aa3;
L_007a2a95:; BB(0x007a2a95);
    /* 007a2a95: fld dword ptr [esi + ebp*8 + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_ebp*8+0xcu)));
    /* 007a2a99: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007a2a9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2a9d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a2aa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2aa1: jb 0x7a2a95 */ if (fC) goto L_007a2a95;
L_007a2aa3:; BB(0x007a2aa3);
    /* 007a2aa3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2aa6: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2aa8: jge 0x7a2aca */ if ((fS==fO)) goto L_007a2aca;
L_007a2aaa:; BB(0x007a2aaa);
    /* 007a2aaa: fcom dword ptr [esi + edx*8 + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*8+0x4u))); 
    /* 007a2aae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ab0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ab1: jae 0x7a2aca */ if (!fC) goto L_007a2aca;
L_007a2ab3:; BB(0x007a2ab3);
    /* 007a2ab3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2ab6: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2ab8: jge 0x7a2aca */ if ((fS==fO)) goto L_007a2aca;
L_007a2aba:; BB(0x007a2aba);
    /* 007a2aba: fcom dword ptr [esi + edx*8 + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*8+0x4u))); 
    /* 007a2abe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ac0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ac1: jae 0x7a2aca */ if (!fC) goto L_007a2aca;
L_007a2ac3:; BB(0x007a2ac3);
    /* 007a2ac3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2ac6: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2ac8: jl 0x7a2aba */ if ((fS!=fO)) goto L_007a2aba;
L_007a2aca:; BB(0x007a2aca);
    /* 007a2aca: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a2acc: jl 0x7a2a55 */ if ((fS!=fO)) goto L_007a2a55;
L_007a2ace:; BB(0x007a2ace);
    /* 007a2ace: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2ad0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 007a2ad4: movzx eax, word ptr [esi + ebp*8] */ r_eax = (u32)R16((u32)(r_esi+r_ebp*8));
    /* 007a2ad8: movzx edx, word ptr [esi + ebp*8 + 2] */ r_edx = (u32)R16((u32)(r_esi+r_ebp*8+0x2u));
    /* 007a2add: mov edi, dword ptr [esi + ebp*8 + 4] */ r_edi = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 007a2ae1: movzx ecx, word ptr [esi + ebx*8] */ r_ecx = (u32)R16((u32)(r_esi+r_ebx*8));
    /* 007a2ae5: mov word ptr [esi + ebp*8], cx */ W16((u32)(r_esi+r_ebp*8), (u16)r_ecx);
    /* 007a2ae9: movzx ecx, word ptr [esi + ebx*8 + 2] */ r_ecx = (u32)R16((u32)(r_esi+r_ebx*8+0x2u));
    /* 007a2aee: mov word ptr [esi + ebp*8 + 2], cx */ W16((u32)(r_esi+r_ebp*8+0x2u), (u16)r_ecx);
    /* 007a2af3: mov ecx, dword ptr [esi + ebx*8 + 4] */ r_ecx = R32((u32)(r_esi+r_ebx*8+0x4u));
    /* 007a2af7: mov dword ptr [esi + ebp*8 + 4], ecx */ W32((u32)(r_esi+r_ebp*8+0x4u), r_ecx);
    /* 007a2afb: mov word ptr [esi + ebx*8], ax */ W16((u32)(r_esi+r_ebx*8), (u16)r_eax);
    /* 007a2aff: mov word ptr [esi + ebx*8 + 2], dx */ W16((u32)(r_esi+r_ebx*8+0x2u), (u16)r_edx);
    /* 007a2b04: mov dword ptr [esi + ebx*8 + 4], edi */ W32((u32)(r_esi+r_ebx*8+0x4u), r_edi);
    /* 007a2b08: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 007a2b0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b0c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a2b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b12: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a2b16: call 0x7a2a1c */ r_esp -= 4; W32(r_esp, 0x7a2b1bu); f_007a2a1c();
    /* 007a2b1b: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 007a2b1e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007a2b22: jmp 0x7a2a38 */ goto L_007a2a38;
}

void f_007a2b28(void) /* sub_7A2B28 */
{
    FN_ENTER(0x007a2b28);
    /* 007a2b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b29: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a2b2b: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 007a2b2e: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x7a2b33u); f_0069862c();
    /* 007a2b33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a2b35: jne 0x7a2b39 */ if (!fZ) goto L_007a2b39;
L_007a2b37:; BB(0x007a2b37);
    /* 007a2b37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2b38: ret  */ FN_RET(0x007a2b28); r_esp += 4; return;
L_007a2b39:; BB(0x007a2b39);
    /* 007a2b39: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a2b3c: mov edx, dword ptr [eax + 0x45c] */ r_edx = R32((u32)(r_eax+0x45cu));
    /* 007a2b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a2b44: je 0x7a2b37 */ if (fZ) goto L_007a2b37;
L_007a2b46:; BB(0x007a2b46);
    /* 007a2b46: movzx eax, word ptr [edx + 0x10b6] */ r_eax = (u32)R16((u32)(r_edx+0x10b6u));
    /* 007a2b4d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a2b52: mov word ptr [edx + 0x10b6], ax */ W16((u32)(r_edx+0x10b6u), (u16)r_eax);
    /* 007a2b59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2b5a: ret  */ FN_RET(0x007a2b28); r_esp += 4; return;
}

void f_007a2b5c(void) /* sub_7A2B5C */
{
    FN_ENTER(0x007a2b5c);
    /* 007a2b5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2b60: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a2b63: mov edi, ecx */ r_edi = r_ecx;
    /* 007a2b65: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a2b67: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007a2b69: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 007a2b6d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2b6f: je 0x7a2bd6 */ if (fZ) goto L_007a2bd6;
L_007a2b71:; BB(0x007a2b71);
    /* 007a2b71: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a2b75: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007a2b79: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 007a2b7d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2b7f: jne 0x7a2b8d */ if (!fZ) goto L_007a2b8d;
L_007a2b81:; BB(0x007a2b81);
    /* 007a2b81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a2b83: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a2b86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a2b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2b88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a2b89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a2b8a: ret 0xc */ FN_RET(0x007a2b5c); r_esp += 16; return;
L_007a2b8d:; BB(0x007a2b8d);
    /* 007a2b8d: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x7a2b92u); f_00687c48();
    /* 007a2b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2b94: jne 0x7a2be2 */ if (!fZ) goto L_007a2be2;
L_007a2b96:; BB(0x007a2b96);
    /* 007a2b96: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2b9a: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7a2b9fu); f_007ba980();
    /* 007a2b9f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007a2ba2: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007a2ba6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a2ba8: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7a2badu); f_007ba980();
    /* 007a2bad: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007a2bb0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007a2bb4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bb6: je 0x7a2be2 */ if (fZ) goto L_007a2be2;
L_007a2bb8:; BB(0x007a2bb8);
    /* 007a2bb8: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a2bbc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007a2bbf: and edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a2bc5: cmp edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bcb: jne 0x7a2be2 */ if (!fZ) goto L_007a2be2;
L_007a2bcd:; BB(0x007a2bcd);
    /* 007a2bcd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007a2bd1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bd4: je 0x7a2be2 */ if (fZ) goto L_007a2be2;
L_007a2bd6:; BB(0x007a2bd6);
    /* 007a2bd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a2bd8: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a2bdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a2bdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a2bdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a2bde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a2bdf: ret 0xc */ FN_RET(0x007a2b5c); r_esp += 16; return;
L_007a2be2:; BB(0x007a2be2);
    /* 007a2be2: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007a2be5: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bea: jne 0x7a2bd6 */ if (!fZ) goto L_007a2bd6;
L_007a2bec:; BB(0x007a2bec);
    /* 007a2bec: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a2bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bf2: je 0x7a2bd6 */ if (fZ) goto L_007a2bd6;
L_007a2bf4:; BB(0x007a2bf4);
    /* 007a2bf4: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2bf8: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7a2bfdu); f_008173b4();
    /* 007a2bfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2bff: je 0x7a2bd6 */ if (fZ) goto L_007a2bd6;
L_007a2c01:; BB(0x007a2c01);
    /* 007a2c01: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a2c05: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007a2c08: test dword ptr [edi + 0x10], eax */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2c0b: je 0x7a2bd6 */ if (fZ) goto L_007a2bd6;
L_007a2c0d:; BB(0x007a2c0d);
    /* 007a2c0d: test dword ptr [edi + 0x14], eax */ {  u32 a = R32((u32)(r_edi+0x14u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2c10: jne 0x7a2bd6 */ if (!fZ) goto L_007a2bd6;
L_007a2c12:; BB(0x007a2c12);
    /* 007a2c12: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007a2c16: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 007a2c19: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 007a2c1f: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007a2c23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a2c25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a2c27: jle 0x7a308c */ if ((fZ||fS!=fO)) goto L_007a308c;
L_007a2c2d:; BB(0x007a2c2d);
    /* 007a2c2d: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007a2c31: mov ebp, eax */ r_ebp = r_eax;
    /* 007a2c33: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 007a2c37: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 007a2c3b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a2c3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c40: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c42: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c44: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c46: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c48: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c4a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a2c4c: mov ebx, edx */ r_ebx = r_edx;
L_007a2c4e:; BB(0x007a2c4e);
    /* 007a2c4e: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 007a2c52: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 007a2c58: mov edi, ebx */ r_edi = r_ebx;
    /* 007a2c5a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 007a2c5c: je 0x7a307a */ if (fZ) goto L_007a307a;
L_007a2c62:; BB(0x007a2c62);
    /* 007a2c62: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2c66: and ecx, 0xefffffff */ {  u32 a = r_ecx; u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a2c6c: mov dword ptr [ebx + esi + 0x18], ecx */ W32((u32)(r_ebx+r_esi+0x18u), r_ecx);
    /* 007a2c70: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2c74: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007a2c78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2c79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2c7a: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2c7e: call 0x7b9f34 */ r_esp -= 4; W32(r_esp, 0x7a2c83u); f_007b9f34();
    /* 007a2c83: mov eax, dword ptr [ebx + esi + 0x18] */ r_eax = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2c87: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a2c89: jne 0x7a2c9a */ if (!fZ) goto L_007a2c9a;
L_007a2c8b:; BB(0x007a2c8b);
    /* 007a2c8b: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2c8f: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2c95: jmp 0x7a307a */ goto L_007a307a;
L_007a2c9a:; BB(0x007a2c9a);
    /* 007a2c9a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2c9e: test dword ptr [ecx + 8], eax */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2ca1: jne 0x7a2cb2 */ if (!fZ) goto L_007a2cb2;
L_007a2ca3:; BB(0x007a2ca3);
    /* 007a2ca3: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2ca7: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2cad: jmp 0x7a307a */ goto L_007a307a;
L_007a2cb2:; BB(0x007a2cb2);
    /* 007a2cb2: test dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2cb5: je 0x7a2cc6 */ if (fZ) goto L_007a2cc6;
L_007a2cb7:; BB(0x007a2cb7);
    /* 007a2cb7: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2cbb: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2cc1: jmp 0x7a307a */ goto L_007a307a;
L_007a2cc6:; BB(0x007a2cc6);
    /* 007a2cc6: lea ecx, [ecx + 0x1c] */ r_ecx = (u32)(r_ecx+0x1cu);
    /* 007a2cc9: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a2ccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2ccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2cce: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7a2cd3u); f_007a9180();
    /* 007a2cd3: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007a2cd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2cda: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2cde: test ecx, 0x22000 */ {  u32 a = r_ecx; u32 b = 0x22000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2ce4: jne 0x7a2d17 */ if (!fZ) goto L_007a2d17;
L_007a2ce6:; BB(0x007a2ce6);
    /* 007a2ce6: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2cea: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2cee: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 007a2cf1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2cf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2cf4: jae 0x7a2d17 */ if (!fC) goto L_007a2d17;
L_007a2cf6:; BB(0x007a2cf6);
    /* 007a2cf6: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2cfa: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2cfe: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007a2d02: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007a2d05: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d09: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007a2d0d: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
    /* 007a2d11: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2d15: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
L_007a2d17:; BB(0x007a2d17);
    /* 007a2d17: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2d1b: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2d1f: fld dword ptr [ebx + esi + 0xc] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0xcu)));
    /* 007a2d23: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 007a2d26: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a2d28: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007a2d2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2d2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2d2d: jae 0x7a2d3e */ if (!fC) goto L_007a2d3e;
L_007a2d2f:; BB(0x007a2d2f);
    /* 007a2d2f: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d33: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2d39: jmp 0x7a307a */ goto L_007a307a;
L_007a2d3e:; BB(0x007a2d3e);
    /* 007a2d3e: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x7a2d43u); f_00687c48();
    /* 007a2d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d45: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d47:; BB(0x007a2d47);
    /* 007a2d47: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2d4b: test ecx, 0xa000 */ {  u32 a = r_ecx; u32 b = 0xa000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d51: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d53:; BB(0x007a2d53);
    /* 007a2d53: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2d57: push 0x28a0 */ { u32 v = 0x28a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d5d: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 007a2d63: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a2d66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d67: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7a2d6cu); f_0077fffc();
    /* 007a2d6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d71: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d73:; BB(0x007a2d73);
    /* 007a2d73: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d77: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2d7d: jmp 0x7a307a */ goto L_007a307a;
L_007a2d82:; BB(0x007a2d82);
    /* 007a2d82: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2d86: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 007a2d89: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d8f: je 0x7a318d */ if (fZ) goto L_007a318d;
L_007a2d95:; BB(0x007a2d95);
    /* 007a2d95: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a2d9b: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 007a2d9e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a2da1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2da3: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007a2da5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2da7: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2dab: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007a2daf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2db0: jbe 0x7a2ef9 */ if ((fC||fZ)) goto L_007a2ef9;
L_007a2db6:; BB(0x007a2db6);
    /* 007a2db6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007a2dba: fcomp dword ptr [0x97d010] */ fx_compare(ST(0), R_F32((u32)(0x97d010u))); FPOP();
    /* 007a2dc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2dc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2dc3: jae 0x7a2ef9 */ if (!fC) goto L_007a2ef9;
L_007a2dc9:; BB(0x007a2dc9);
    /* 007a2dc9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2dcb: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007a2dcf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2dd4u); f_0082dcbc();
    /* 007a2dd4: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007a2dd8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a2ddb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007a2de3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2de8u); f_0082ddd8();
    /* 007a2de8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007a2dec: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2df0: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2df6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2df8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2df9: je 0x7a3098 */ if (fZ) goto L_007a3098;
L_007a2dff:; BB(0x007a2dff);
    /* 007a2dff: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 007a2e03: lea edi, [edi + 0x8000] */ r_edi = (u32)(r_edi+0x8000u);
    /* 007a2e09: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2e0b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2e10u); f_0082dcbc();
    /* 007a2e10: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2e14: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007a2e18: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 007a2e1c: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a2e20: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 007a2e23: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2e27: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2e29: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2e2eu); f_0082ddd8();
    /* 007a2e2e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2e32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007a2e34: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2e38: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 007a2e3b: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2e3f: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 007a2e43: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007a2e47: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007a2e4b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007a2e53: fsubr dword ptr [ebx + esi + 0x24] */ ST(0) = R_F32((u32)(r_ebx+r_esi+0x24u)) - ST(0);
    /* 007a2e57: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007a2e5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2e5c: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2e61u); f_00782868();
    /* 007a2e61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2e63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2e66: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a2e69: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a2e6d: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2e72u); f_0082f9e0();
    /* 007a2e72: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 007a2e76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2e78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2e79: jae 0x7a2e8a */ if (!fC) goto L_007a2e8a;
L_007a2e7b:; BB(0x007a2e7b);
    /* 007a2e7b: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2e7f: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2e85: jmp 0x7a307a */ goto L_007a307a;
L_007a2e8a:; BB(0x007a2e8a);
    /* 007a2e8a: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2e8e: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2e93: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2e97: fsub dword ptr [ecx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x38u));
    /* 007a2e9a: fstp dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0)); FPOP();
    /* 007a2ea0: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 007a2eaa: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a2eae: fsub dword ptr [ecx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x40u));
    /* 007a2eb1: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 007a2eb7: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2ebcu); f_00782868();
    /* 007a2ebc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2ebe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2ec1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a2ec4: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 007a2ec9: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2eceu); f_0082f9e0();
    /* 007a2ece: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2ed4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ed6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ed7: jae 0x7a2ee8 */ if (!fC) goto L_007a2ee8;
L_007a2ed9:; BB(0x007a2ed9);
    /* 007a2ed9: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2edd: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2ee3: jmp 0x7a307a */ goto L_007a307a;
L_007a2ee8:; BB(0x007a2ee8);
    /* 007a2ee8: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2eec: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a2ef2: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a2ef5: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_007a2ef9:; BB(0x007a2ef9);
    /* 007a2ef9: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 007a2efc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007a2efe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2f02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f04: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2f08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f09: jbe 0x7a2fee */ if ((fC||fZ)) goto L_007a2fee;
L_007a2f0f:; BB(0x007a2f0f);
    /* 007a2f0f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007a2f13: fcomp dword ptr [0x97d010] */ fx_compare(ST(0), R_F32((u32)(0x97d010u))); FPOP();
    /* 007a2f19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f1c: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a2f22:; BB(0x007a2f22);
    /* 007a2f22: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2f26: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2f2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f2f: je 0x7a30fc */ if (fZ) goto L_007a30fc;
L_007a2f35:; BB(0x007a2f35);
    /* 007a2f35: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 007a2f39: lea edi, [edi + 0x8000] */ r_edi = (u32)(r_edi+0x8000u);
    /* 007a2f3f: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2f41: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2f46u); f_0082dcbc();
    /* 007a2f46: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2f4a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007a2f4e: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 007a2f52: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a2f56: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 007a2f59: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 007a2f5c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007a2f60: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2f64: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2f66: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2f6bu); f_0082ddd8();
    /* 007a2f6b: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2f6f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007a2f71: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2f75: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 007a2f78: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2f7c: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 007a2f80: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 007a2f84: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 007a2f8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f8e: fsubr dword ptr [ebx + esi + 0x24] */ ST(0) = R_F32((u32)(r_ebx+r_esi+0x24u)) - ST(0);
    /* 007a2f92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f94: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007a2f98: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007a2f9c: fld dword ptr [ebx + esi + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x20u)));
    /* 007a2fa0: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 007a2fa4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2fa6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007a2faa: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007a2fae: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 007a2fb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2fb3: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2fb8u); f_00782868();
    /* 007a2fb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2fba: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007a2fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2fbf: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2fc4u); f_00782868();
    /* 007a2fc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2fc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2fc9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007a2fcd: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007a2fd1: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2fd6u); f_0082f9e0();
    /* 007a2fd6: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007a2fda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2fdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2fdd: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a2fdf:; BB(0x007a2fdf);
    /* 007a2fdf: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2fe3: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2fe9: jmp 0x7a307a */ goto L_007a307a;
L_007a2fee:; BB(0x007a2fee);
    /* 007a2fee: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2ff2: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 007a2ff5: fcom dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); 
    /* 007a2ff9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ffb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ffc: jae 0x7a3007 */ if (!fC) goto L_007a3007;
L_007a2ffe:; BB(0x007a2ffe);
    /* 007a2ffe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3000: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a3004: fst dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0));
L_007a3007:; BB(0x007a3007);
    /* 007a3007: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 007a300a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a300d: jl 0x7a3039 */ if ((fS!=fO)) goto L_007a3039;
L_007a300f:; BB(0x007a300f);
    /* 007a300f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a3011: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a3013: jl 0x7a31b2 */ if ((fS!=fO)) goto L_007a31b2;
L_007a3019:; BB(0x007a3019);
    /* 007a3019: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_007a301d:; BB(0x007a301d);
    /* 007a301d: fcom dword ptr [esi + edx*8 + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*8+0x48u))); 
    /* 007a3021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3024: je 0x7a3175 */ if (fZ) goto L_007a3175;
L_007a302a:; BB(0x007a302a);
    /* 007a302a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a302d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a302f: jle 0x7a301d */ if ((fZ||fS!=fO)) goto L_007a301d;
L_007a3031:; BB(0x007a3031);
    /* 007a3031: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3033: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 007a3037: jmp 0x7a3049 */ goto L_007a3049;
L_007a3039:; BB(0x007a3039);
    /* 007a3039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a303b: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007a303f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007a3043: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3046: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
L_007a3049:; BB(0x007a3049);
    /* 007a3049: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 007a304d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a3051: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007a3055: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a3059: fstp dword ptr [esi + edi*8 + 0x48] */ W_F32((u32)(r_esi+r_edi*8+0x48u), ST(0)); FPOP();
    /* 007a305d: mov word ptr [esi + edi*8 + 0x46], bp */ W16((u32)(r_esi+r_edi*8+0x46u), (u16)r_ebp);
    /* 007a3062: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007a3066: mov word ptr [esi + edi*8 + 0x44], cx */ W16((u32)(r_esi+r_edi*8+0x44u), (u16)r_ecx);
    /* 007a306b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a3070: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007a3074: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
L_007a307a:; BB(0x007a307a);
    /* 007a307a: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a307d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a3080: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a3082: jl 0x7a2c4e */ if ((fS!=fO)) goto L_007a2c4e;
L_007a3088:; BB(0x007a3088);
    /* 007a3088: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
L_007a308c:; BB(0x007a308c);
    /* 007a308c: mov eax, ebx */ r_eax = r_ebx;
    /* 007a308e: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a3091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3093: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3094: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3095: ret 0xc */ FN_RET(0x007a2b5c); r_esp += 16; return;
L_007a3098:; BB(0x007a3098);
    /* 007a3098: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 007a309c: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a30a0: fsub dword ptr [edi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1cu));
    /* 007a30a3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007a30a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a30a9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007a30ad: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007a30b1: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a30b5: fsub dword ptr [edi + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x24u));
    /* 007a30b8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007a30bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a30bd: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a30c2u); f_00782868();
    /* 007a30c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a30c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a30c7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a30ca: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a30ce: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a30d3u); f_0082f9e0();
    /* 007a30d3: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 007a30d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a30d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a30da: jae 0x7a30e8 */ if (!fC) goto L_007a30e8;
L_007a30dc:; BB(0x007a30dc);
    /* 007a30dc: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a30e0: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a30e6: jmp 0x7a307a */ goto L_007a307a;
L_007a30e8:; BB(0x007a30e8);
    /* 007a30e8: mov ecx, edi */ r_ecx = r_edi;
    /* 007a30ea: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a30f0: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a30f3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007a30f7: jmp 0x7a2ef9 */ goto L_007a2ef9;
L_007a30fc:; BB(0x007a30fc);
    /* 007a30fc: mov edi, ecx */ r_edi = r_ecx;
    /* 007a30fe: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a3102: fsub dword ptr [edi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1cu));
    /* 007a3105: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 007a3109: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a310b: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007a310f: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a3113: fsub dword ptr [edi + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x24u));
    /* 007a3116: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a3118: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007a311c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007a3120: fld dword ptr [ebx + esi + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x20u)));
    /* 007a3124: fsub dword ptr [edi + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x20u));
    /* 007a3127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a3129: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007a312d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007a3131: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 007a3135: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3136: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a313bu); f_00782868();
    /* 007a313b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a313d: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007a3141: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3142: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a3147u); f_00782868();
    /* 007a3147: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3149: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a314c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007a3150: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007a3154: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a3159u); f_0082f9e0();
    /* 007a3159: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007a315d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a315f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3160: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a3166:; BB(0x007a3166);
    /* 007a3166: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a316a: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a3170: jmp 0x7a307a */ goto L_007a307a;
L_007a3175:; BB(0x007a3175);
    /* 007a3175: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3177: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a317b: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 007a317f: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3181: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 007a3184: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007a3188: jmp 0x7a3049 */ goto L_007a3049;
L_007a318d:; BB(0x007a318d);
    /* 007a318d: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 007a3190: fcomp dword ptr [ebx + esi + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x1cu))); FPOP();
    /* 007a3194: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3196: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3197: jne 0x7a2d95 */ if (!fZ) goto L_007a2d95;
L_007a319d:; BB(0x007a319d);
    /* 007a319d: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 007a31a0: fcomp dword ptr [ebx + esi + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x24u))); FPOP();
    /* 007a31a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a31a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a31a7: je 0x7a2fee */ if (fZ) goto L_007a2fee;
L_007a31ad:; BB(0x007a31ad);
    /* 007a31ad: jmp 0x7a2d95 */ goto L_007a2d95;
L_007a31b2:; BB(0x007a31b2);
    /* 007a31b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a31b4: jmp 0x7a3049 */ goto L_007a3049;
}

void f_007a2f44(void)
{
    FN_ENTER(0x007a2f44);
    goto L_007a2f44;
L_007a2c4e:; BB(0x007a2c4e);
    /* 007a2c4e: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 007a2c52: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 007a2c58: mov edi, ebx */ r_edi = r_ebx;
    /* 007a2c5a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 007a2c5c: je 0x7a307a */ if (fZ) goto L_007a307a;
L_007a2c62:; BB(0x007a2c62);
    /* 007a2c62: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2c66: and ecx, 0xefffffff */ {  u32 a = r_ecx; u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a2c6c: mov dword ptr [ebx + esi + 0x18], ecx */ W32((u32)(r_ebx+r_esi+0x18u), r_ecx);
    /* 007a2c70: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2c74: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007a2c78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2c79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a2c7a: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2c7e: call 0x7b9f34 */ r_esp -= 4; W32(r_esp, 0x7a2c83u); f_007b9f34();
    /* 007a2c83: mov eax, dword ptr [ebx + esi + 0x18] */ r_eax = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2c87: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a2c89: jne 0x7a2c9a */ if (!fZ) goto L_007a2c9a;
L_007a2c8b:; BB(0x007a2c8b);
    /* 007a2c8b: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2c8f: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2c95: jmp 0x7a307a */ goto L_007a307a;
L_007a2c9a:; BB(0x007a2c9a);
    /* 007a2c9a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2c9e: test dword ptr [ecx + 8], eax */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2ca1: jne 0x7a2cb2 */ if (!fZ) goto L_007a2cb2;
L_007a2ca3:; BB(0x007a2ca3);
    /* 007a2ca3: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2ca7: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2cad: jmp 0x7a307a */ goto L_007a307a;
L_007a2cb2:; BB(0x007a2cb2);
    /* 007a2cb2: test dword ptr [ecx + 0xc], eax */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2cb5: je 0x7a2cc6 */ if (fZ) goto L_007a2cc6;
L_007a2cb7:; BB(0x007a2cb7);
    /* 007a2cb7: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2cbb: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2cc1: jmp 0x7a307a */ goto L_007a307a;
L_007a2cc6:; BB(0x007a2cc6);
    /* 007a2cc6: lea ecx, [ecx + 0x1c] */ r_ecx = (u32)(r_ecx+0x1cu);
    /* 007a2cc9: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a2ccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2ccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2cce: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7a2cd3u); f_007a9180();
    /* 007a2cd3: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007a2cd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2cda: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2cde: test ecx, 0x22000 */ {  u32 a = r_ecx; u32 b = 0x22000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2ce4: jne 0x7a2d17 */ if (!fZ) goto L_007a2d17;
L_007a2ce6:; BB(0x007a2ce6);
    /* 007a2ce6: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2cea: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2cee: fcomp dword ptr [ecx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xcu))); FPOP();
    /* 007a2cf1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2cf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2cf4: jae 0x7a2d17 */ if (!fC) goto L_007a2d17;
L_007a2cf6:; BB(0x007a2cf6);
    /* 007a2cf6: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2cfa: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2cfe: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007a2d02: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007a2d05: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d09: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007a2d0d: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
    /* 007a2d11: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 007a2d15: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
L_007a2d17:; BB(0x007a2d17);
    /* 007a2d17: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2d1b: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a2d1f: fld dword ptr [ebx + esi + 0xc] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0xcu)));
    /* 007a2d23: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 007a2d26: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007a2d28: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007a2d2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2d2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2d2d: jae 0x7a2d3e */ if (!fC) goto L_007a2d3e;
L_007a2d2f:; BB(0x007a2d2f);
    /* 007a2d2f: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d33: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2d39: jmp 0x7a307a */ goto L_007a307a;
L_007a2d3e:; BB(0x007a2d3e);
    /* 007a2d3e: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x7a2d43u); f_00687c48();
    /* 007a2d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d45: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d47:; BB(0x007a2d47);
    /* 007a2d47: mov ecx, dword ptr [ebx + esi + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi+0x18u));
    /* 007a2d4b: test ecx, 0xa000 */ {  u32 a = r_ecx; u32 b = 0xa000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d51: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d53:; BB(0x007a2d53);
    /* 007a2d53: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2d57: push 0x28a0 */ { u32 v = 0x28a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d5d: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 007a2d63: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a2d66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2d67: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7a2d6cu); f_0077fffc();
    /* 007a2d6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d71: je 0x7a2d82 */ if (fZ) goto L_007a2d82;
L_007a2d73:; BB(0x007a2d73);
    /* 007a2d73: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2d77: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2d7d: jmp 0x7a307a */ goto L_007a307a;
L_007a2d82:; BB(0x007a2d82);
    /* 007a2d82: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2d86: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 007a2d89: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2d8f: je 0x7a318d */ if (fZ) goto L_007a318d;
L_007a2d95:; BB(0x007a2d95);
    /* 007a2d95: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a2d9b: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 007a2d9e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a2da1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2da3: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007a2da5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2da7: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2dab: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007a2daf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2db0: jbe 0x7a2ef9 */ if ((fC||fZ)) goto L_007a2ef9;
L_007a2db6:; BB(0x007a2db6);
    /* 007a2db6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007a2dba: fcomp dword ptr [0x97d010] */ fx_compare(ST(0), R_F32((u32)(0x97d010u))); FPOP();
    /* 007a2dc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2dc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2dc3: jae 0x7a2ef9 */ if (!fC) goto L_007a2ef9;
L_007a2dc9:; BB(0x007a2dc9);
    /* 007a2dc9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2dcb: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007a2dcf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2dd4u); f_0082dcbc();
    /* 007a2dd4: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007a2dd8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007a2ddb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007a2de3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2de8u); f_0082ddd8();
    /* 007a2de8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007a2dec: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2df0: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2df6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2df8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2df9: je 0x7a3098 */ if (fZ) goto L_007a3098;
L_007a2dff:; BB(0x007a2dff);
    /* 007a2dff: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 007a2e03: lea edi, [edi + 0x8000] */ r_edi = (u32)(r_edi+0x8000u);
    /* 007a2e09: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2e0b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2e10u); f_0082dcbc();
    /* 007a2e10: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2e14: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007a2e18: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 007a2e1c: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a2e20: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 007a2e23: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2e27: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2e29: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2e2eu); f_0082ddd8();
    /* 007a2e2e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2e32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007a2e34: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2e38: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 007a2e3b: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2e3f: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 007a2e43: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007a2e47: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007a2e4b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007a2e53: fsubr dword ptr [ebx + esi + 0x24] */ ST(0) = R_F32((u32)(r_ebx+r_esi+0x24u)) - ST(0);
    /* 007a2e57: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007a2e5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2e5c: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2e61u); f_00782868();
    /* 007a2e61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2e63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2e66: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a2e69: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a2e6d: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2e72u); f_0082f9e0();
    /* 007a2e72: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 007a2e76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2e78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2e79: jae 0x7a2e8a */ if (!fC) goto L_007a2e8a;
L_007a2e7b:; BB(0x007a2e7b);
    /* 007a2e7b: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2e7f: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2e85: jmp 0x7a307a */ goto L_007a307a;
L_007a2e8a:; BB(0x007a2e8a);
    /* 007a2e8a: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 007a2e8e: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2e93: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2e97: fsub dword ptr [ecx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x38u));
    /* 007a2e9a: fstp dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0)); FPOP();
    /* 007a2ea0: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 007a2eaa: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a2eae: fsub dword ptr [ecx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x40u));
    /* 007a2eb1: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 007a2eb7: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2ebcu); f_00782868();
    /* 007a2ebc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2ebe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2ec1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a2ec4: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 007a2ec9: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2eceu); f_0082f9e0();
    /* 007a2ece: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2ed4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ed6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ed7: jae 0x7a2ee8 */ if (!fC) goto L_007a2ee8;
L_007a2ed9:; BB(0x007a2ed9);
    /* 007a2ed9: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2edd: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2ee3: jmp 0x7a307a */ goto L_007a307a;
L_007a2ee8:; BB(0x007a2ee8);
    /* 007a2ee8: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2eec: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a2ef2: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a2ef5: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_007a2ef9:; BB(0x007a2ef9);
    /* 007a2ef9: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 007a2efc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007a2efe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2f02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f04: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007a2f08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f09: jbe 0x7a2fee */ if ((fC||fZ)) goto L_007a2fee;
L_007a2f0f:; BB(0x007a2f0f);
    /* 007a2f0f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007a2f13: fcomp dword ptr [0x97d010] */ fx_compare(ST(0), R_F32((u32)(0x97d010u))); FPOP();
    /* 007a2f19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f1c: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a2f22:; BB(0x007a2f22);
    /* 007a2f22: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2f26: fcomp dword ptr [0x97d00c] */ fx_compare(ST(0), R_F32((u32)(0x97d00cu))); FPOP();
    /* 007a2f2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2f2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2f2f: je 0x7a30fc */ if (fZ) goto L_007a30fc;
L_007a2f35:; BB(0x007a2f35);
    /* 007a2f35: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 007a2f39: lea edi, [edi + 0x8000] */ r_edi = (u32)(r_edi+0x8000u);
    /* 007a2f3f: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2f41: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a2f46u); f_0082dcbc();
L_007a2f44:; BB(0x007a2f44);
    /* 007a2f44: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 007a2f46: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2f4a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007a2f4e: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 007a2f52: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007a2f56: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 007a2f59: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 007a2f5c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007a2f60: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007a2f64: mov ecx, edi */ r_ecx = r_edi;
    /* 007a2f66: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2f6bu); f_0082ddd8();
    /* 007a2f6b: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007a2f6f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007a2f71: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2f75: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 007a2f78: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a2f7c: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 007a2f80: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 007a2f84: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 007a2f8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f8e: fsubr dword ptr [ebx + esi + 0x24] */ ST(0) = R_F32((u32)(r_ebx+r_esi+0x24u)) - ST(0);
    /* 007a2f92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2f94: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007a2f98: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007a2f9c: fld dword ptr [ebx + esi + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x20u)));
    /* 007a2fa0: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 007a2fa4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a2fa6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007a2faa: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007a2fae: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 007a2fb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a2fb3: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2fb8u); f_00782868();
    /* 007a2fb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2fba: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007a2fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2fbf: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a2fc4u); f_00782868();
    /* 007a2fc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a2fc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2fc9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007a2fcd: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007a2fd1: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a2fd6u); f_0082f9e0();
    /* 007a2fd6: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007a2fda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2fdc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2fdd: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a2fdf:; BB(0x007a2fdf);
    /* 007a2fdf: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a2fe3: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a2fe9: jmp 0x7a307a */ goto L_007a307a;
L_007a2fee:; BB(0x007a2fee);
    /* 007a2fee: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007a2ff2: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 007a2ff5: fcom dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); 
    /* 007a2ff9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a2ffb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a2ffc: jae 0x7a3007 */ if (!fC) goto L_007a3007;
L_007a2ffe:; BB(0x007a2ffe);
    /* 007a2ffe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3000: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a3004: fst dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0));
L_007a3007:; BB(0x007a3007);
    /* 007a3007: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 007a300a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a300d: jl 0x7a3039 */ if ((fS!=fO)) goto L_007a3039;
L_007a300f:; BB(0x007a300f);
    /* 007a300f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a3011: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a3013: jl 0x7a31b2 */ if ((fS!=fO)) goto L_007a31b2;
L_007a3019:; BB(0x007a3019);
    /* 007a3019: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_007a301d:; BB(0x007a301d);
    /* 007a301d: fcom dword ptr [esi + edx*8 + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*8+0x48u))); 
    /* 007a3021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3024: je 0x7a3175 */ if (fZ) goto L_007a3175;
L_007a302a:; BB(0x007a302a);
    /* 007a302a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a302d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a302f: jle 0x7a301d */ if ((fZ||fS!=fO)) goto L_007a301d;
L_007a3031:; BB(0x007a3031);
    /* 007a3031: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3033: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 007a3037: jmp 0x7a3049 */ goto L_007a3049;
L_007a3039:; BB(0x007a3039);
    /* 007a3039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a303b: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007a303f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007a3043: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3046: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
L_007a3049:; BB(0x007a3049);
    /* 007a3049: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 007a304d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a3051: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007a3055: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 007a3059: fstp dword ptr [esi + edi*8 + 0x48] */ W_F32((u32)(r_esi+r_edi*8+0x48u), ST(0)); FPOP();
    /* 007a305d: mov word ptr [esi + edi*8 + 0x46], bp */ W16((u32)(r_esi+r_edi*8+0x46u), (u16)r_ebp);
    /* 007a3062: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007a3066: mov word ptr [esi + edi*8 + 0x44], cx */ W16((u32)(r_esi+r_edi*8+0x44u), (u16)r_ecx);
    /* 007a306b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a3070: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007a3074: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
L_007a307a:; BB(0x007a307a);
    /* 007a307a: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a307d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a3080: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a3082: jl 0x7a2c4e */ if ((fS!=fO)) goto L_007a2c4e;
L_007a3088:; BB(0x007a3088);
    /* 007a3088: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 007a308c: mov eax, ebx */ r_eax = r_ebx;
    /* 007a308e: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a3091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3093: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3094: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3095: ret 0xc */ FN_RET(0x007a2f44); r_esp += 16; return;
L_007a3098:; BB(0x007a3098);
    /* 007a3098: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 007a309c: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a30a0: fsub dword ptr [edi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1cu));
    /* 007a30a3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007a30a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a30a9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007a30ad: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007a30b1: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a30b5: fsub dword ptr [edi + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x24u));
    /* 007a30b8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007a30bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a30bd: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a30c2u); f_00782868();
    /* 007a30c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a30c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a30c7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007a30ca: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a30ce: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a30d3u); f_0082f9e0();
    /* 007a30d3: fcomp dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); FPOP();
    /* 007a30d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a30d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a30da: jae 0x7a30e8 */ if (!fC) goto L_007a30e8;
L_007a30dc:; BB(0x007a30dc);
    /* 007a30dc: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a30e0: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a30e6: jmp 0x7a307a */ goto L_007a307a;
L_007a30e8:; BB(0x007a30e8);
    /* 007a30e8: mov ecx, edi */ r_ecx = r_edi;
    /* 007a30ea: fld dword ptr [0x97d014] */ FPUSH(R_F32((u32)(0x97d014u)));
    /* 007a30f0: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007a30f3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007a30f7: jmp 0x7a2ef9 */ goto L_007a2ef9;
L_007a30fc:; BB(0x007a30fc);
    /* 007a30fc: mov edi, ecx */ r_edi = r_ecx;
    /* 007a30fe: fld dword ptr [ebx + esi + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x1cu)));
    /* 007a3102: fsub dword ptr [edi + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x1cu));
    /* 007a3105: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 007a3109: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a310b: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007a310f: fld dword ptr [ebx + esi + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x24u)));
    /* 007a3113: fsub dword ptr [edi + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x24u));
    /* 007a3116: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a3118: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007a311c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007a3120: fld dword ptr [ebx + esi + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_esi+0x20u)));
    /* 007a3124: fsub dword ptr [edi + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x20u));
    /* 007a3127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007a3129: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007a312d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007a3131: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 007a3135: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3136: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a313bu); f_00782868();
    /* 007a313b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a313d: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007a3141: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3142: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x7a3147u); f_00782868();
    /* 007a3147: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3149: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a314c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007a3150: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007a3154: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7a3159u); f_0082f9e0();
    /* 007a3159: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 007a315d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a315f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3160: jae 0x7a2fee */ if (!fC) goto L_007a2fee;
L_007a3166:; BB(0x007a3166);
    /* 007a3166: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007a316a: mov ecx, dword ptr [ecx + 0xa8] */ r_ecx = R32((u32)(r_ecx+0xa8u));
    /* 007a3170: jmp 0x7a307a */ goto L_007a307a;
L_007a3175:; BB(0x007a3175);
    /* 007a3175: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3177: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007a317b: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 007a317f: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3181: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 007a3184: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 007a3188: jmp 0x7a3049 */ goto L_007a3049;
L_007a318d:; BB(0x007a318d);
    /* 007a318d: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 007a3190: fcomp dword ptr [ebx + esi + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x1cu))); FPOP();
    /* 007a3194: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3196: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3197: jne 0x7a2d95 */ if (!fZ) goto L_007a2d95;
L_007a319d:; BB(0x007a319d);
    /* 007a319d: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 007a31a0: fcomp dword ptr [ebx + esi + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_esi+0x24u))); FPOP();
    /* 007a31a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a31a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a31a7: je 0x7a2fee */ if (fZ) goto L_007a2fee;
L_007a31ad:; BB(0x007a31ad);
    /* 007a31ad: jmp 0x7a2d95 */ goto L_007a2d95;
L_007a31b2:; BB(0x007a31b2);
    /* 007a31b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a31b4: jmp 0x7a3049 */ goto L_007a3049;
}

