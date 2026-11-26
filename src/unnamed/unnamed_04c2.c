#include "protos.h"

void f_004c2022(void)
{
    FN_ENTER(0x004c2022);
    /* 004c2022: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c2024: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c2029: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c2030: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c2036u); call_ind(t); }
    /* 004c2036: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2039: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 004c2043: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c2048u); f_004c1f00();
    /* 004c2048: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c204b: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004c2051: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c2054: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004c205a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c205c: mov dword ptr [ecx + 0x85c], edx */ W32((u32)(r_ecx+0x85cu), r_edx);
    /* 004c2062: mov dword ptr [ecx + 0x860], edx */ W32((u32)(r_ecx+0x860u), r_edx);
    /* 004c2068: mov dword ptr [ecx + 0x864], edx */ W32((u32)(r_ecx+0x864u), r_edx);
    /* 004c206e: mov dword ptr [ecx + 0x8a4], edx */ W32((u32)(r_ecx+0x8a4u), r_edx);
    /* 004c2074: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c2022); r_esp += 8; return;
}

void f_004c2079(void)
{
    FN_ENTER(0x004c2079);
    /* 004c2079: mov eax, ecx */ r_eax = r_ecx;
    /* 004c207b: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c2081: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c2084: je 0x4c258d */ if (fZ) goto L_004c258d;
L_004c208a:; BB(0x004c208a);
    /* 004c208a: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c2079); r_esp += 8; return;
L_004c258d:; BB(0x004c258d);
    /* 004c258d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c258f: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c2591: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c2593: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c2599u); call_ind(t); }
    /* 004c2599: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c259c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c25a0: mov ecx, dword ptr [edi + 0x67c] */ r_ecx = R32((u32)(r_edi+0x67cu));
    /* 004c25a6: movzx ebx, word ptr [edi + 0x394] */ r_ebx = (u32)R16((u32)(r_edi+0x394u));
    /* 004c25ad: mov esi, dword ptr [edi + 0x690] */ r_esi = R32((u32)(r_edi+0x690u));
    /* 004c25b3: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c25b8: mov byte ptr [ebp - 0xd4], 0xa8 */ W8((u32)(r_ebp+0xffffff2cu), 0xa8u);
    /* 004c25bf: mov word ptr [ebp - 0xd2], ax */ W16((u32)(r_ebp+0xffffff2eu), (u16)r_eax);
    /* 004c25c6: mov eax, dword ptr [edi + 0x694] */ r_eax = R32((u32)(r_edi+0x694u));
    /* 004c25cc: mov byte ptr [ebp - 0xd3], 6 */ W8((u32)(r_ebp+0xffffff2du), 0x6u);
    /* 004c25d3: mov word ptr [ebp - 0xd0], dx */ W16((u32)(r_ebp+0xffffff30u), (u16)r_edx);
    /* 004c25da: mov word ptr [ebp - 0xce], cx */ W16((u32)(r_ebp+0xffffff32u), (u16)r_ecx);
    /* 004c25e1: mov dword ptr [ebp - 0xcc], ebx */ W32((u32)(r_ebp+0xffffff34u), r_ebx);
    /* 004c25e7: mov dword ptr [ebp - 0xc8], esi */ W32((u32)(r_ebp+0xffffff38u), r_esi);
    /* 004c25ed: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 004c25f3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c25f8u); f_008587a5();
    /* 004c25f8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004c25fb: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004c25fe: fdiv dword ptr [0x908804] */ ST(0) = ST(0) / R_F32((u32)(0x908804u));
    /* 004c2604: fmul dword ptr [0x908808] */ ST(0) = ST(0) * R_F32((u32)(0x908808u));
    /* 004c260a: lea ecx, [ebp - 0xd4] */ r_ecx = (u32)(r_ebp+0xffffff2cu);
    /* 004c2610: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 004c2613: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 004c2617: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c261c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004c261f: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004c2622: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2625: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 004c2628: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004c262b: mov byte ptr [ebp - 0xc0], al */ W8((u32)(r_ebp+0xffffff40u), (u8)r_eax);
    /* 004c2631: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c2636u); f_008003e0();
    /* 004c2636: jmp 0x4c24f1 */ goto L_004c24f1;
}

void f_004c208f(void)
{
    FN_ENTER(0x004c208f);
    /* 004c208f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c2094u); f_007aa094();
    /* 004c2094: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2097: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c209d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c209f: je 0x4c268a */ if (fZ) goto L_004c268a;
L_004c20a5:; BB(0x004c20a5);
    /* 004c20a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c20a8: je 0x4c249a */ if (fZ) goto L_004c249a;
L_004c20ae:; BB(0x004c20ae);
    /* 004c20ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c20b1: jne 0x4c244a */ if (!fZ) goto L_004c244a;
L_004c20b7:; BB(0x004c20b7);
    /* 004c20b7: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c20bf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c20c4u); f_007aaa30();
    /* 004c20c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c20c6: je 0x4c20e3 */ if (fZ) goto L_004c20e3;
L_004c20c8:; BB(0x004c20c8);
    /* 004c20c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c20cb: lea ecx, [eax + 0x63c] */ r_ecx = (u32)(r_eax+0x63cu);
    /* 004c20d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c20d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c20d6: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c20e0u); f_00814298();
    /* 004c20e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c20e3:; BB(0x004c20e3);
    /* 004c20e3: push 0x42340000 */ { u32 v = 0x42340000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c20e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c20eb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c20f0u); f_007aaa30();
    /* 004c20f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c20f2: je 0x4c210f */ if (fZ) goto L_004c210f;
L_004c20f4:; BB(0x004c20f4);
    /* 004c20f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c20f7: lea ecx, [eax + 0x63c] */ r_ecx = (u32)(r_eax+0x63cu);
    /* 004c20fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c20ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2102: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c2107: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c210cu); f_00814298();
    /* 004c210c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c210f:; BB(0x004c210f);
    /* 004c210f: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2114: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2117: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c211cu); f_007aaa30();
    /* 004c211c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c211e: jne 0x4c2131 */ if (!fZ) goto L_004c2131;
L_004c2120:; BB(0x004c2120);
    /* 004c2120: push 0x42540000 */ { u32 v = 0x42540000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2128: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c212du); f_007aaa30();
    /* 004c212d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c212f: je 0x4c2139 */ if (fZ) goto L_004c2139;
L_004c2131:; BB(0x004c2131);
    /* 004c2131: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2134: call 0x4c1f34 */ r_esp -= 4; W32(r_esp, 0x4c2139u); f_004c1f34();
L_004c2139:; BB(0x004c2139);
    /* 004c2139: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c213c: mov ecx, dword ptr [eax + 0x8a4] */ r_ecx = R32((u32)(r_eax+0x8a4u));
    /* 004c2142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2144: je 0x4c2649 */ if (fZ) goto L_004c2649;
L_004c214a:; BB(0x004c214a);
    /* 004c214a: mov edx, eax */ r_edx = r_eax;
    /* 004c214c: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c2152: fcomp dword ptr [0x9087e4] */ fx_compare(ST(0), R_F32((u32)(0x9087e4u))); FPOP();
    /* 004c2158: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c215a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c215b: ja 0x4c216d */ if ((!fC&&!fZ)) goto L_004c216d;
L_004c215d:; BB(0x004c215d);
    /* 004c215d: mov eax, edx */ r_eax = r_edx;
    /* 004c215f: lea edx, [eax + 0x418] */ r_edx = (u32)(r_eax+0x418u);
    /* 004c2165: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2166: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c216bu); f_00508db8();
    /* 004c216b: jmp 0x4c2184 */ goto L_004c2184;
L_004c216d:; BB(0x004c216d);
    /* 004c216d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004c2171: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2176: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004c217a: mov dword ptr [edx + 0x8a4], 0 */ W32((u32)(r_edx+0x8a4u), 0x0u);
L_004c2184:; BB(0x004c2184);
    /* 004c2184: push 0x423c0000 */ { u32 v = 0x423c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2189: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c218c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c2191u); f_007aaa30();
    /* 004c2191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c2193: je 0x4c24f1 */ if (fZ) goto L_004c24f1;
L_004c2199:; BB(0x004c2199);
    /* 004c2199: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c219c: lea ecx, [ebp - 0xbc] */ r_ecx = (u32)(r_ebp+0xffffff44u);
    /* 004c21a2: mov eax, dword ptr [edi + 0x888] */ r_eax = R32((u32)(r_edi+0x888u));
    /* 004c21a8: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004c21ae: mov ebx, dword ptr [edi + 0x88c] */ r_ebx = R32((u32)(r_edi+0x88cu));
    /* 004c21b4: mov dword ptr [ebp - 0xb8], ebx */ W32((u32)(r_ebp+0xffffff48u), r_ebx);
    /* 004c21ba: mov esi, dword ptr [edi + 0x890] */ r_esi = R32((u32)(r_edi+0x890u));
    /* 004c21c0: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 004c21c6: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004c21c9: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4c21ceu); f_0082f9c4();
    /* 004c21ce: lea eax, [ebp - 0xbc] */ r_eax = (u32)(r_ebp+0xffffff44u);
    /* 004c21d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c21d5: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c21dau); f_007828e4();
    /* 004c21da: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004c21dd: mov ecx, edi */ r_ecx = r_edi;
    /* 004c21df: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 004c21e9: mov eax, dword ptr [ecx + 0x888] */ r_eax = R32((u32)(r_ecx+0x888u));
    /* 004c21ef: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004c21f5: mov edx, dword ptr [ecx + 0x88c] */ r_edx = R32((u32)(r_ecx+0x88cu));
    /* 004c21fb: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 004c2201: mov ebx, dword ptr [ecx + 0x890] */ r_ebx = R32((u32)(r_ecx+0x890u));
    /* 004c2207: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 004c2211: mov dword ptr [ebp - 0xa8], ebx */ W32((u32)(r_ebp+0xffffff58u), r_ebx);
    /* 004c2217: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2219: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 004c2223: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c2228u); f_005caba4();
    /* 004c2228: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c222b: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004c2231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2233: je 0x4c227d */ if (fZ) goto L_004c227d;
L_004c2235:; BB(0x004c2235);
    /* 004c2235: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 004c223f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c2246: mov edx, edi */ r_edx = r_edi;
    /* 004c2248: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004c224e: lea ebx, [ebp - 0xb0] */ r_ebx = (u32)(r_ebp+0xffffff50u);
    /* 004c2254: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004c2258: lea edi, [edx + 0x3cc] */ r_edi = (u32)(r_edx+0x3ccu);
    /* 004c225e: lea esi, [edx + 0x418] */ r_esi = (u32)(r_edx+0x418u);
    /* 004c2264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2265: push dword ptr [edx + 0x76c] */ { u32 v = R32((u32)(r_edx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c226b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c226c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c226d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c226e: call 0x4cf34c */ r_esp -= 4; W32(r_esp, 0x4c2273u); f_004cf34c();
    /* 004c2273: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_004c227d:; BB(0x004c227d);
    /* 004c227d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2284: lea edx, [ebp - 0xbc] */ r_edx = (u32)(r_ebp+0xffffff44u);
    /* 004c228a: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 004c2290: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2296: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2297: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x4c229cu); f_007829f4();
    /* 004c229c: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 004c22a2: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004c22a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c22a8: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 004c22ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c22b0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c22b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c22b4: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004c22b7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c22b9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c22bb: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004c22be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c22c0: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 004c22c6: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 004c22cc: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 004c22d6: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004c22e0: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004c22e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c22e7u); f_005caba4();
    /* 004c22e7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c22ea: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004c22f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c22f2: je 0x4c233d */ if (fZ) goto L_004c233d;
L_004c22f4:; BB(0x004c22f4);
    /* 004c22f4: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004c22fe: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c2305: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2308: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004c230e: lea ebx, [ebp - 0xb0] */ r_ebx = (u32)(r_ebp+0xffffff50u);
    /* 004c2314: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004c2318: lea edi, [edx + 0x3cc] */ r_edi = (u32)(r_edx+0x3ccu);
    /* 004c231e: lea esi, [edx + 0x418] */ r_esi = (u32)(r_edx+0x418u);
    /* 004c2324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2325: push dword ptr [edx + 0x76c] */ { u32 v = R32((u32)(r_edx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c232b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c232c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c232d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c232e: call 0x4cf34c */ r_esp -= 4; W32(r_esp, 0x4c2333u); f_004cf34c();
    /* 004c2333: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_004c233d:; BB(0x004c233d);
    /* 004c233d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2344: lea edx, [ebp - 0xbc] */ r_edx = (u32)(r_ebp+0xffffff44u);
    /* 004c234a: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 004c2350: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2357: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x4c235cu); f_007829f4();
    /* 004c235c: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 004c2362: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 004c2365: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2368: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 004c236e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c2370: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c2372: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c2374: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004c2377: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c2379: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c237b: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004c237e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c2380: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 004c2386: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 004c238c: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 004c2396: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 004c23a0: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004c23a2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c23a7u); f_005caba4();
    /* 004c23a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c23aa: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004c23b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c23b2: je 0x4c263b */ if (fZ) goto L_004c263b;
L_004c23b8:; BB(0x004c23b8);
    /* 004c23b8: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 004c23c2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c23c9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c23cc: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004c23d2: lea esi, [ebp - 0xb0] */ r_esi = (u32)(r_ebp+0xffffff50u);
    /* 004c23d8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004c23dc: lea ebx, [edx + 0x418] */ r_ebx = (u32)(r_edx+0x418u);
    /* 004c23e2: lea edi, [edx + 0x3cc] */ r_edi = (u32)(r_edx+0x3ccu);
    /* 004c23e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c23e9: push dword ptr [edx + 0x76c] */ { u32 v = R32((u32)(r_edx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c23ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c23f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c23f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c23f2: call 0x4cf34c */ r_esp -= 4; W32(r_esp, 0x4c23f7u); f_004cf34c();
    /* 004c23f7: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004c2401:; BB(0x004c2401);
    /* 004c2401: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c2408: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c240b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c240d: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c2413: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2417: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c241cu); f_0050b7a4();
    /* 004c241c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c241f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2422: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 004c2428: mov dword ptr [edx + 0x85c], 3 */ W32((u32)(r_edx+0x85cu), 0x3u);
    /* 004c2432: and eax, 0xffffffcf */ {  u32 a = r_eax; u32 b = 0xffffffcfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c2435: mov dword ptr [edx + 0x864], 0 */ W32((u32)(r_edx+0x864u), 0x0u);
    /* 004c243f: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 004c2445: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c244a:; BB(0x004c244a);
    /* 004c244a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c244d: jne 0x4c24f1 */ if (!fZ) goto L_004c24f1;
L_004c2453:; BB(0x004c2453);
    /* 004c2453: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2456: mov edx, dword ptr [eax + 0x864] */ r_edx = R32((u32)(r_eax+0x864u));
    /* 004c245c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c245f: mov dword ptr [eax + 0x864], edx */ W32((u32)(r_eax+0x864u), r_edx);
    /* 004c2465: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c2468: jle 0x4c24f1 */ if ((fZ||fS!=fO)) goto L_004c24f1;
L_004c246e:; BB(0x004c246e);
    /* 004c246e: mov edx, dword ptr [eax + 0x860] */ r_edx = R32((u32)(r_eax+0x860u));
    /* 004c2474: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c2477: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 004c247d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c2480: jl 0x4c248e */ if ((fS!=fO)) goto L_004c248e;
L_004c2482:; BB(0x004c2482);
    /* 004c2482: mov dword ptr [eax + 0x85c], 4 */ W32((u32)(r_eax+0x85cu), 0x4u);
    /* 004c248c: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c248e:; BB(0x004c248e);
    /* 004c248e: mov dword ptr [eax + 0x85c], 0 */ W32((u32)(r_eax+0x85cu), 0x0u);
    /* 004c2498: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c249a:; BB(0x004c249a);
    /* 004c249a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c249d: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c24a2u); f_004c53d8();
    /* 004c24a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c24a5: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c24aau); f_004c1f18();
    /* 004c24aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c24ad: call 0x4c29ec */ r_esp -= 4; W32(r_esp, 0x4c24b2u); f_004c29ec();
    /* 004c24b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c24b4: je 0x4c24f1 */ if (fZ) goto L_004c24f1;
L_004c24b6:; BB(0x004c24b6);
    /* 004c24b6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c24b9: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 004c24bf: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 004c24c5: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004c24c8: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004c24cd: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004c24d4: mov dword ptr [ebx + 0x658], 0 */ W32((u32)(r_ebx+0x658u), 0x0u);
    /* 004c24de: or ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c24e1: mov dword ptr [ebx + 0x3c8], ecx */ W32((u32)(r_ebx+0x3c8u), r_ecx);
    /* 004c24e7: mov dword ptr [ebx + 0x85c], 2 */ W32((u32)(r_ebx+0x85cu), 0x2u);
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c208f); r_esp += 8; return;
L_004c263b:; BB(0x004c263b);
    /* 004c263b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c263e: lea ebx, [eax + 0x418] */ r_ebx = (u32)(r_eax+0x418u);
    /* 004c2644: jmp 0x4c2401 */ goto L_004c2401;
L_004c2649:; BB(0x004c2649);
    /* 004c2649: mov edx, eax */ r_edx = r_eax;
    /* 004c264b: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c2651: fcomp dword ptr [0x9087e0] */ fx_compare(ST(0), R_F32((u32)(0x9087e0u))); FPOP();
    /* 004c2657: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2659: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c265a: jb 0x4c2184 */ if (fC) goto L_004c2184;
L_004c2660:; BB(0x004c2660);
    /* 004c2660: mov eax, edx */ r_eax = r_edx;
    /* 004c2662: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2664: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c266a: lea ecx, [eax + 0x418] */ r_ecx = (u32)(r_eax+0x418u);
    /* 004c2670: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2674: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4c2679u); f_0050981c();
    /* 004c2679: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c267c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c267f: mov dword ptr [edx + 0x8a4], eax */ W32((u32)(r_edx+0x8a4u), r_eax);
    /* 004c2685: jmp 0x4c2184 */ goto L_004c2184;
L_004c268a:; BB(0x004c268a);
    /* 004c268a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004c268c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004c268e:; BB(0x004c268e);
    /* 004c268e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c268f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c2694u); f_0068d5a8();
    /* 004c2694: mov esi, eax */ r_esi = r_eax;
    /* 004c2696: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2697: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x4c269cu); f_0052135c();
    /* 004c269c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c269f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c26a1: je 0x4c26cd */ if (fZ) goto L_004c26cd;
L_004c26a3:; BB(0x004c26a3);
    /* 004c26a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c26a6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004c26a9: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 004c26ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c26ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c26ae: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4c26b3u); f_007a9180();
    /* 004c26b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c26b6: fcomp dword ptr [0xa4850c] */ fx_compare(ST(0), R_F32((u32)(0xa4850cu))); FPOP();
    /* 004c26bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c26be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c26bf: jb 0x4c26cd */ if (fC) goto L_004c26cd;
L_004c26c1:; BB(0x004c26c1);
    /* 004c26c1: mov edx, ebx */ r_edx = r_ebx;
    /* 004c26c3: mov dword ptr [ebp + edx*4 - 0x88], esi */ W32((u32)(r_ebp+r_edx*4+0xffffff78u), r_esi);
    /* 004c26ca: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004c26cd:; BB(0x004c26cd);
    /* 004c26cd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c26d0: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c26d3: jl 0x4c268e */ if ((fS!=fO)) goto L_004c268e;
L_004c26d5:; BB(0x004c26d5);
    /* 004c26d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c26d7: jle 0x4c2996 */ if ((fZ||fS!=fO)) goto L_004c2996;
L_004c26dd:; BB(0x004c26dd);
    /* 004c26dd: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c26e0: je 0x4c2967 */ if (fZ) goto L_004c2967;
L_004c26e6:; BB(0x004c26e6);
    /* 004c26e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c26e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004c26eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c26ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c26ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c26f1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004c26f4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004c26f7: jle 0x4c27c1 */ if ((fZ||fS!=fO)) goto L_004c27c1;
L_004c26fd:; BB(0x004c26fd);
    /* 004c26fd: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c2700: mov eax, dword ptr [ebp + edi*4 - 0x88] */ r_eax = R32((u32)(r_ebp+r_edi*4+0xffffff78u));
    /* 004c2707: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004c270a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004c270d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c2710: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004c2713: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004c2716: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2718: jge 0x4c27af */ if ((fS==fO)) goto L_004c27af;
L_004c271e:; BB(0x004c271e);
    /* 004c271e: mov esi, dword ptr [ebp + edi*4 - 0x88] */ r_esi = R32((u32)(r_ebp+r_edi*4+0xffffff78u));
    /* 004c2725: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c2728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2729: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004c272c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c272d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4c2732u); f_007a9180();
    /* 004c2732: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2735: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2736: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c2739: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4c273eu); f_0082dc9c();
    /* 004c273e: fcomp dword ptr [0x90894c] */ fx_compare(ST(0), R_F32((u32)(0x90894cu))); FPOP();
    /* 004c2744: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2746: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c2747: jae 0x4c27a4 */ if (!fC) goto L_004c27a4;
L_004c2749:; BB(0x004c2749);
    /* 004c2749: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c274c: movsx edx, word ptr [edx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 004c2753: movsx ecx, word ptr [esi + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 004c275a: mov eax, 1 */ r_eax = 0x1u;
    /* 004c275f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c2761: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004c2764: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c2767: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2769: jle 0x4c27a4 */ if ((fZ||fS!=fO)) goto L_004c27a4;
L_004c276b:; BB(0x004c276b);
    /* 004c276b: fld dword ptr [0x9087e8] */ FPUSH(R_F32((u32)(0x9087e8u)));
    /* 004c2771: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c2774: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004c2777: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004c277a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c277c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004c277f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2782: fstp dword ptr [edx + 0x888] */ W_F32((u32)(r_edx+0x888u), ST(0)); FPOP();
    /* 004c2788: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 004c278b: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 004c278e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c2790: fstp dword ptr [edx + 0x88c] */ W_F32((u32)(r_edx+0x88cu), ST(0)); FPOP();
    /* 004c2796: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004c2799: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004c279c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c279e: fstp dword ptr [edx + 0x890] */ W_F32((u32)(r_edx+0x890u), ST(0)); FPOP();
L_004c27a4:; BB(0x004c27a4);
    /* 004c27a4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c27a7: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c27a9: jl 0x4c271e */ if ((fS!=fO)) goto L_004c271e;
L_004c27af:; BB(0x004c27af);
    /* 004c27af: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c27b2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c27b4: jl 0x4c26fd */ if ((fS!=fO)) goto L_004c26fd;
L_004c27ba:; BB(0x004c27ba);
    /* 004c27ba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c27bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c27bf: jne 0x4c2821 */ if (!fZ) goto L_004c2821;
L_004c27c1:; BB(0x004c27c1);
    /* 004c27c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004c27c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c27c5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c27c7: jle 0x4c2953 */ if ((fZ||fS!=fO)) goto L_004c2953;
L_004c27cd:; BB(0x004c27cd);
    /* 004c27cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c27d0: fld dword ptr [eax + 0x888] */ FPUSH(R_F32((u32)(r_eax+0x888u)));
    /* 004c27d6: fld dword ptr [eax + 0x890] */ FPUSH(R_F32((u32)(r_eax+0x890u)));
L_004c27dc:; BB(0x004c27dc);
    /* 004c27dc: mov edx, dword ptr [ebp + ecx*4 - 0x88] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff78u));
    /* 004c27e3: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 004c27ea: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c27ec: jge 0x4c2818 */ if ((fS==fO)) goto L_004c2818;
L_004c27ee:; BB(0x004c27ee);
    /* 004c27ee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004c27f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c27f2: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004c27f5: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 004c27f8: mov esi, eax */ r_esi = r_eax;
    /* 004c27fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c27fd: mov dword ptr [eax + 0x888], edi */ W32((u32)(r_eax+0x888u), r_edi);
    /* 004c2803: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 004c2806: mov dword ptr [eax + 0x88c], edi */ W32((u32)(r_eax+0x88cu), r_edi);
    /* 004c280c: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004c280f: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 004c2812: mov dword ptr [eax + 0x890], edx */ W32((u32)(r_eax+0x890u), r_edx);
L_004c2818:; BB(0x004c2818);
    /* 004c2818: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c281b: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c281d: jl 0x4c27dc */ if ((fS!=fO)) goto L_004c27dc;
L_004c281f:; BB(0x004c281f);
    /* 004c281f: jmp 0x4c2830 */ goto L_004c2830;
L_004c2821:; BB(0x004c2821);
    /* 004c2821: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2824: fld dword ptr [eax + 0x888] */ FPUSH(R_F32((u32)(r_eax+0x888u)));
    /* 004c282a: fld dword ptr [eax + 0x890] */ FPUSH(R_F32((u32)(r_eax+0x890u)));
L_004c2830:; BB(0x004c2830);
    /* 004c2830: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2833: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c2835: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 004c2838: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c283a: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 004c283d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c283f: fmul qword ptr [0x908278] */ ST(0) = ST(0) * R_F64((u32)(0x908278u));
    /* 004c2845: fdiv qword ptr [0x908270] */ ST(0) = ST(0) / R_F64((u32)(0x908270u));
    /* 004c284b: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 004c284e: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 004c2852: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2857: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004c285a: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004c285d: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2860: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 004c2863: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
L_004c2866:; BB(0x004c2866);
    /* 004c2866: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2869: mov ecx, dword ptr [edx + 0x75c] */ r_ecx = R32((u32)(r_edx+0x75cu));
    /* 004c286f: mov dword ptr [edx + 0x85c], 1 */ W32((u32)(r_edx+0x85cu), 0x1u);
    /* 004c2879: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c287c: mov dword ptr [edx + 0x86c], eax */ W32((u32)(r_edx+0x86cu), r_eax);
    /* 004c2882: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2884: jne 0x4c2890 */ if (!fZ) goto L_004c2890;
L_004c2886:; BB(0x004c2886);
    /* 004c2886: mov eax, edx */ r_eax = r_edx;
    /* 004c2888: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 004c288b: jmp 0x4c2931 */ goto L_004c2931;
L_004c2890:; BB(0x004c2890);
    /* 004c2890: mov esi, edx */ r_esi = r_edx;
    /* 004c2892: movsx ecx, word ptr [esi + 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x60u));
    /* 004c2896: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004c2899: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004c289c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 004c289f: mov dword ptr [esi + 0x86c], ecx */ W32((u32)(r_esi+0x86cu), r_ecx);
    /* 004c28a5: mov dword ptr [esi + 0x888], eax */ W32((u32)(r_esi+0x888u), r_eax);
    /* 004c28ab: mov dword ptr [esi + 0x88c], edx */ W32((u32)(r_esi+0x88cu), r_edx);
    /* 004c28b1: mov dword ptr [esi + 0x890], ebx */ W32((u32)(r_esi+0x890u), r_ebx);
    /* 004c28b7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c28bcu); f_0082dcbc();
    /* 004c28bc: fmul dword ptr [0x9087dc] */ ST(0) = ST(0) * R_F32((u32)(0x9087dcu));
    /* 004c28c2: mov eax, esi */ r_eax = r_esi;
    /* 004c28c4: fadd dword ptr [eax + 0x888] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x888u));
    /* 004c28ca: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 004c28d0: fstp dword ptr [eax + 0x888] */ W_F32((u32)(r_eax+0x888u), ST(0)); FPOP();
    /* 004c28d6: mov dword ptr [eax + 0x88c], 0 */ W32((u32)(r_eax+0x88cu), 0x0u);
    /* 004c28e0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c28e5u); f_0082ddd8();
    /* 004c28e5: fmul dword ptr [0x9087dc] */ ST(0) = ST(0) * R_F32((u32)(0x9087dcu));
    /* 004c28eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004c28ed: fadd dword ptr [ecx + 0x890] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x890u));
    /* 004c28f3: mov ebx, dword ptr [ecx + 0x86c] */ r_ebx = R32((u32)(r_ecx+0x86cu));
    /* 004c28f9: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 004c28ff: fstp dword ptr [ecx + 0x890] */ W_F32((u32)(r_ecx+0x890u), ST(0)); FPOP();
    /* 004c2905: mov dword ptr [ecx + 0x85c], 2 */ W32((u32)(r_ecx+0x85cu), 0x2u);
    /* 004c290f: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 004c2912: mov dword ptr [ecx + 0x658], 0 */ W32((u32)(r_ecx+0x658u), 0x0u);
    /* 004c291c: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004c2921: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c2928: or edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c292b: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
L_004c2931:; BB(0x004c2931);
    /* 004c2931: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2934: push dword ptr [ecx + 0x86c] */ { u32 v = R32((u32)(r_ecx+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c293a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c293b: call 0x4c2ab8 */ r_esp -= 4; W32(r_esp, 0x4c2940u); f_004c2ab8();
    /* 004c2940: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2943: push dword ptr [ecx + 0x86c] */ { u32 v = R32((u32)(r_ecx+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2949: call 0x4cda5c */ r_esp -= 4; W32(r_esp, 0x4c294eu); f_004cda5c();
    /* 004c294e: jmp 0x4c249a */ goto L_004c249a;
L_004c2953:; BB(0x004c2953);
    /* 004c2953: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2956: fld dword ptr [eax + 0x888] */ FPUSH(R_F32((u32)(r_eax+0x888u)));
    /* 004c295c: fld dword ptr [eax + 0x890] */ FPUSH(R_F32((u32)(r_eax+0x890u)));
    /* 004c2962: jmp 0x4c2830 */ goto L_004c2830;
L_004c2967:; BB(0x004c2967);
    /* 004c2967: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004c296d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2970: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 004c2973: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004c2976: mov dword ptr [esi + 0x888], eax */ W32((u32)(r_esi+0x888u), r_eax);
    /* 004c297c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004c297f: mov dword ptr [esi + 0x88c], edx */ W32((u32)(r_esi+0x88cu), r_edx);
    /* 004c2985: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 004c2988: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 004c298b: mov dword ptr [esi + 0x890], ebx */ W32((u32)(r_esi+0x890u), r_ebx);
    /* 004c2991: jmp 0x4c2830 */ goto L_004c2830;
L_004c2996:; BB(0x004c2996);
    /* 004c2996: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2999: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x4c299eu); f_00520c20();
    /* 004c299e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c29a1: mov dword ptr [edx + 0x86c], eax */ W32((u32)(r_edx+0x86cu), r_eax);
    /* 004c29a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004c29a9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c29aeu); f_0082dcbc();
    /* 004c29ae: fmul dword ptr [0x9087dc] */ ST(0) = ST(0) * R_F32((u32)(0x9087dcu));
    /* 004c29b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c29b7: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 004c29bd: fstp dword ptr [eax + 0x888] */ W_F32((u32)(r_eax+0x888u), ST(0)); FPOP();
    /* 004c29c3: mov dword ptr [eax + 0x88c], 0 */ W32((u32)(r_eax+0x88cu), 0x0u);
    /* 004c29cd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c29d2u); f_0082ddd8();
    /* 004c29d2: fmul dword ptr [0x9087dc] */ ST(0) = ST(0) * R_F32((u32)(0x9087dcu));
    /* 004c29d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c29db: fstp dword ptr [eax + 0x890] */ W_F32((u32)(r_eax+0x890u), ST(0)); FPOP();
    /* 004c29e1: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 004c29e7: jmp 0x4c2866 */ goto L_004c2866;
}

void f_004c24f1(void)
{
    FN_ENTER(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c24f1); r_esp += 8; return;
}

void f_004c29ec(void) /* sub_4C29EC */
{
    FN_ENTER(0x004c29ec);
    /* 004c29ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c29ef: fld dword ptr [0x9087d8] */ FPUSH(R_F32((u32)(0x9087d8u)));
    /* 004c29f5: fadd dword ptr [ecx + 0x678] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x678u));
    /* 004c29fb: fcom dword ptr [0x9087d4] */ fx_compare(ST(0), R_F32((u32)(0x9087d4u))); 
    /* 004c2a01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2a03: fst dword ptr [ecx + 0x678] */ W_F32((u32)(r_ecx+0x678u), ST(0));
    /* 004c2a09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c2a0a: jbe 0x4c2a74 */ if ((fC||fZ)) goto L_004c2a74;
L_004c2a0c:; BB(0x004c2a0c);
    /* 004c2a0c: fcom dword ptr [0x9087d0] */ fx_compare(ST(0), R_F32((u32)(0x9087d0u))); 
    /* 004c2a12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2a14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c2a15: ja 0x4c2a69 */ if ((!fC&&!fZ)) goto L_004c2a69;
L_004c2a17:; BB(0x004c2a17);
    /* 004c2a17: fld dword ptr [0x9087cc] */ FPUSH(R_F32((u32)(0x9087ccu)));
    /* 004c2a1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c2a1f: fld dword ptr [0x9087c8] */ FPUSH(R_F32((u32)(0x9087c8u)));
    /* 004c2a25: fmul dword ptr [ecx + 0x668] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x668u));
    /* 004c2a2b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c2a2d: fadd dword ptr [ecx + 0x670] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x670u));
    /* 004c2a33: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c2a35: fadd dword ptr [ecx + 0x674] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x674u));
    /* 004c2a3b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004c2a3e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004c2a42: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2a47: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c2a4b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c2a4f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2a53: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004c2a56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c2a58: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004c2a5c: add edx, dword ptr [ecx + 0x660] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x660u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c2a62: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 004c2a65: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2a68: ret  */ FN_RET(0x004c29ec); r_esp += 4; return;
L_004c2a69:; BB(0x004c2a69);
    /* 004c2a69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c2a6b: mov eax, 1 */ r_eax = 0x1u;
    /* 004c2a70: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2a73: ret  */ FN_RET(0x004c29ec); r_esp += 4; return;
L_004c2a74:; BB(0x004c2a74);
    /* 004c2a74: fld dword ptr [0x9087c8] */ FPUSH(R_F32((u32)(0x9087c8u)));
    /* 004c2a7a: fmul dword ptr [ecx + 0x664] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x664u));
    /* 004c2a80: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c2a82: fadd dword ptr [ecx + 0x66c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x66cu));
    /* 004c2a88: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c2a8a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004c2a8d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004c2a91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2a96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c2a9a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c2a9e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2aa2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004c2aa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c2aa7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004c2aab: add edx, dword ptr [ecx + 0x660] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x660u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c2ab1: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 004c2ab4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2ab7: ret  */ FN_RET(0x004c29ec); r_esp += 4; return;
}

void f_004c2ab8(void) /* sub_4C2AB8 */
{
    FN_ENTER(0x004c2ab8);
    /* 004c2ab8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2ab9: mov esi, ecx */ r_esi = r_ecx;
    /* 004c2abb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2abf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2ac3: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4c2ac8u); f_007a900c();
    /* 004c2ac8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c2acd: jl 0x4c2add */ if ((fS!=fO)) goto L_004c2add;
L_004c2acf:; BB(0x004c2acf);
    /* 004c2acf: mov dword ptr [esi + 0x65c], 1 */ W32((u32)(r_esi+0x65cu), 0x1u);
    /* 004c2ad9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2ada: ret 8 */ FN_RET(0x004c2ab8); r_esp += 12; return;
L_004c2add:; BB(0x004c2add);
    /* 004c2add: mov dword ptr [esi + 0x65c], 0xffffffff */ W32((u32)(r_esi+0x65cu), 0xffffffffu);
    /* 004c2ae7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2ae8: ret 8 */ FN_RET(0x004c2ab8); r_esp += 12; return;
}

void f_004c2aec(void) /* sub_4C2AEC */
{
    FN_ENTER(0x004c2aec);
    /* 004c2aec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2aed: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c2af0: mov esi, ecx */ r_esi = r_ecx;
    /* 004c2af2: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004c2af6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c2af9: ja 0x4c2dd0 */ if ((!fC&&!fZ)) goto L_004c2dd0;
L_004c2aff:; BB(0x004c2aff);
    /* 004c2aff: mov eax, dword ptr [eax*4 + 0x9079fc] */ r_eax = R32((u32)(r_eax*4+0x9079fcu));
    /* 004c2b06: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2aec); r_esp += 8; return;
}

void f_004c2b08(void)
{
    FN_ENTER(0x004c2b08);
    /* 004c2b08: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c2b0e: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2b13: jl 0x4c2b39 */ if ((fS!=fO)) goto L_004c2b39;
L_004c2b15:; BB(0x004c2b15);
    /* 004c2b15: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2b1b: mov eax, dword ptr [esi + 0x6e0] */ r_eax = R32((u32)(r_esi+0x6e0u));
    /* 004c2b21: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2b23: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2b26: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c2b2bu); f_004c6c54();
    /* 004c2b2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2b2d: je 0x4c2b39 */ if (fZ) goto L_004c2b39;
L_004c2b2f:; BB(0x004c2b2f);
    /* 004c2b2f: mov dword ptr [esi + 0x85c], 0x1c2 */ W32((u32)(r_esi+0x85cu), 0x1c2u);
L_004c2b39:; BB(0x004c2b39);
    /* 004c2b39: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c2b3f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2b42: jne 0x4c2dd0 */ if (!fZ) goto L_004c2dd0;
L_004c2b48:; BB(0x004c2b48);
    /* 004c2b48: jmp 0x4c2dd7 */ goto L_004c2dd7;
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2b08); r_esp += 8; return;
L_004c2dd7:; BB(0x004c2dd7);
    /* 004c2dd7: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c2ddd: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2ddf: je 0x4c2dd0 */ if (fZ) goto L_004c2dd0;
L_004c2de1:; BB(0x004c2de1);
    /* 004c2de1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2de3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2de5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c2de7: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2de9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c2defu); call_ind(t); }
    /* 004c2def: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c2df3: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c2df9: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c2dfd: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c2e02: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c2e07: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c2e0c: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c2e12: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c2e17: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c2e1c: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c2e23: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c2e27: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c2e2d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c2e31: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c2e35: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c2e3au); f_008587a5();
    /* 004c2e3a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c2e3e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c2e42: fdiv dword ptr [0x9087c0] */ ST(0) = ST(0) / R_F32((u32)(0x9087c0u));
    /* 004c2e48: fmul dword ptr [0x9087c4] */ ST(0) = ST(0) * R_F32((u32)(0x9087c4u));
    /* 004c2e4e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c2e51: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c2e55: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c2e5a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2e5f: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c2e63: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c2e67: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2e6b: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c2e6f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c2e73: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c2e77: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c2e7cu); f_008003e0();
    /* 004c2e7c: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2e7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2e80: ret 4 */ FN_RET(0x004c2b08); r_esp += 8; return;
}

void f_004c2b4d(void)
{
    FN_ENTER(0x004c2b4d);
    /* 004c2b4d: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c2b53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2b56: jne 0x4c2dd0 */ if (!fZ) goto L_004c2dd0;
L_004c2b5c:; BB(0x004c2b5c);
    /* 004c2b5c: jmp 0x4c2e83 */ goto L_004c2e83;
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2b4d); r_esp += 8; return;
L_004c2e83:; BB(0x004c2e83);
    /* 004c2e83: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c2e89: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2e8b: je 0x4c2dd0 */ if (fZ) goto L_004c2dd0;
L_004c2e91:; BB(0x004c2e91);
    /* 004c2e91: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2e93: call 0x4c2f5c */ r_esp -= 4; W32(r_esp, 0x4c2e98u); f_004c2f5c();
    /* 004c2e98: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2e9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2e9c: ret 4 */ FN_RET(0x004c2b4d); r_esp += 8; return;
}

void f_004c2b61(void)
{
    FN_ENTER(0x004c2b61);
    /* 004c2b61: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2b63: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c2b68u); f_004c32b0();
    /* 004c2b68: jmp 0x4c2dd0 */ goto L_004c2dd0;
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2b61); r_esp += 8; return;
}

void f_004c2b6d(void)
{
    FN_ENTER(0x004c2b6d);
    /* 004c2b6d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2b6f: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c2b74u); f_004c32c4();
    /* 004c2b74: jmp 0x4c2dd0 */ goto L_004c2dd0;
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2b6d); r_esp += 8; return;
}

void f_004c2b79(void)
{
    FN_ENTER(0x004c2b79);
    /* 004c2b79: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004c2b7e: movsx ecx, word ptr [esi + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 004c2b85: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c2b87: mov eax, ecx */ r_eax = r_ecx;
    /* 004c2b89: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c2b8c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004c2b8f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c2b91: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 004c2b94: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 004c2b9b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2b9d: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004c2ba0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c2ba2: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2ba4: jg 0x4c2baf */ if ((!fZ&&fS==fO)) goto L_004c2baf;
L_004c2ba6:; BB(0x004c2ba6);
    /* 004c2ba6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2ba8: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004c2bab: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2bad: jle 0x4c2ba6 */ if ((fZ||fS!=fO)) goto L_004c2ba6;
L_004c2baf:; BB(0x004c2baf);
    /* 004c2baf: mov word ptr [esi + 0x680], cx */ W16((u32)(r_esi+0x680u), (u16)r_ecx);
    /* 004c2bb6: mov ecx, dword ptr [esi + 0x68c] */ r_ecx = R32((u32)(r_esi+0x68cu));
    /* 004c2bbc: call 0x42620c */ r_esp -= 4; W32(r_esp, 0x4c2bc1u); f_0042620c();
    /* 004c2bc1: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2bc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2bc5: ret 4 */ FN_RET(0x004c2b79); r_esp += 8; return;
}

void f_004c2bc8(void)
{
    FN_ENTER(0x004c2bc8);
    /* 004c2bc8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c2bca: mov eax, 8 */ r_eax = 0x8u;
    /* 004c2bcf: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c2bd6: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2bd8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c2bdeu); call_ind(t); }
    /* 004c2bde: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004c2be8: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2bea: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c2befu); f_004cb184();
    /* 004c2bef: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c2bf5: or eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2bf8: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c2bfb: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c2c01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c2c03: mov dword ptr [esi + 0x85c], edx */ W32((u32)(r_esi+0x85cu), r_edx);
    /* 004c2c09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c0b: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004c2c11: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c2c17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c18: push 0x407 */ { u32 v = 0x407u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c1d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c2c22u); f_00814298();
    /* 004c2c22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2c25: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2c28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2c29: ret 4 */ FN_RET(0x004c2bc8); r_esp += 8; return;
}

void f_004c2c2c(void)
{
    FN_ENTER(0x004c2c2c);
    /* 004c2c2c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c2c32: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c35: jne 0x4c2dd0 */ if (!fZ) goto L_004c2dd0;
L_004c2c3b:; BB(0x004c2c3b);
    /* 004c2c3b: jmp 0x4c2e9f */ goto L_004c2e9f;
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2c2c); r_esp += 8; return;
L_004c2e9f:; BB(0x004c2e9f);
    /* 004c2e9f: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c2ea5: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2ea7: je 0x4c2dd0 */ if (fZ) goto L_004c2dd0;
L_004c2ead:; BB(0x004c2ead);
    /* 004c2ead: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2eaf: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2eb1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c2eb3: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2eb5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c2ebbu); call_ind(t); }
    /* 004c2ebb: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c2ebf: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c2ec5: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c2eca: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c2ecf: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c2ed4: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c2ed9: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c2edf: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c2ee4: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004c2ee9: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c2ef0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c2ef4: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c2efa: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c2efe: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c2f02: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c2f07u); f_008587a5();
    /* 004c2f07: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c2f0b: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004c2f0f: fdiv dword ptr [0x9087c0] */ ST(0) = ST(0) / R_F32((u32)(0x9087c0u));
    /* 004c2f15: fmul dword ptr [0x9087c4] */ ST(0) = ST(0) * R_F32((u32)(0x9087c4u));
    /* 004c2f1b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c2f1f: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c2f23: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c2f28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c2f2d: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c2f31: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c2f35: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c2f39: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c2f3d: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c2f41: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c2f45: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c2f4au); f_008003e0();
    /* 004c2f4a: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2f4e: ret 4 */ FN_RET(0x004c2c2c); r_esp += 8; return;
}

void f_004c2c40(void)
{
    FN_ENTER(0x004c2c40);
    /* 004c2c40: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2c42: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c2c47u); f_007aa094();
    /* 004c2c47: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c2c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c4f: je 0x4c2d5f */ if (fZ) goto L_004c2d5f;
L_004c2c55:; BB(0x004c2c55);
    /* 004c2c55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2c58: jne 0x4c2cb5 */ if (!fZ) goto L_004c2cb5;
L_004c2c5a:; BB(0x004c2c5a);
    /* 004c2c5a: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004c2c60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c2c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c66: push 0x413 */ { u32 v = 0x413u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2c6b: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c2c70u); f_008144b0();
    /* 004c2c70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2c73: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c2c79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c2c7c: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
    /* 004c2c82: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2c87: jl 0x4c2dd0 */ if ((fS!=fO)) goto L_004c2dd0;
L_004c2c8d:; BB(0x004c2c8d);
    /* 004c2c8d: mov ecx, dword ptr [esi + 0x68c] */ r_ecx = R32((u32)(r_esi+0x68cu));
    /* 004c2c93: mov dword ptr [esi + 0x860], 2 */ W32((u32)(r_esi+0x860u), 0x2u);
    /* 004c2c9d: mov eax, 0xa */ r_eax = 0xau;
    /* 004c2ca2: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c2ca9: call 0x42620c */ r_esp -= 4; W32(r_esp, 0x4c2caeu); f_0042620c();
    /* 004c2cae: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2cb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2cb2: ret 4 */ FN_RET(0x004c2c40); r_esp += 8; return;
L_004c2cb5:; BB(0x004c2cb5);
    /* 004c2cb5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2cb8: jne 0x4c2dd0 */ if (!fZ) goto L_004c2dd0;
L_004c2cbe:; BB(0x004c2cbe);
    /* 004c2cbe: fld dword ptr [0x9087bc] */ FPUSH(R_F32((u32)(0x9087bcu)));
    /* 004c2cc4: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c2cc7: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c2ccb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c2cd0u); f_0082dcbc();
    /* 004c2cd0: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c2cd4: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c2cd7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c2cdcu); f_0082ddd8();
    /* 004c2cdc: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004c2ce0: mov eax, dword ptr [esi + 0x75c] */ r_eax = R32((u32)(r_esi+0x75cu));
    /* 004c2ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2ce8: je 0x4c2d11 */ if (fZ) goto L_004c2d11;
L_004c2cea:; BB(0x004c2cea);
    /* 004c2cea: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2ced: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004c2cf1: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 004c2cf5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c2cf7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c2cfa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c2cfe: mov dword ptr [esp + 8], 0x3f666666 */ W32((u32)(r_esp+0x8u), 0x3f666666u);
    /* 004c2d06: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d08: call 0x4c32d8 */ r_esp -= 4; W32(r_esp, 0x4c2d0du); f_004c32d8();
    /* 004c2d0d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_004c2d11:; BB(0x004c2d11);
    /* 004c2d11: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004c2d17: fcom dword ptr [0x9087b8] */ fx_compare(ST(0), R_F32((u32)(0x9087b8u))); 
    /* 004c2d1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2d1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c2d20: jb 0x4c2f51 */ if (fC) goto L_004c2f51;
L_004c2d26:; BB(0x004c2d26);
    /* 004c2d26: fcomp dword ptr [0x9087b4] */ fx_compare(ST(0), R_F32((u32)(0x9087b4u))); FPOP();
    /* 004c2d2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c2d2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c2d2f: ja 0x4c2dd0 */ if ((!fC&&!fZ)) goto L_004c2dd0;
L_004c2d35:; BB(0x004c2d35);
    /* 004c2d35: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c2d38: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004c2d3c: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 004c2d40: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004c2d44: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c2d46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c2d49: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c2d4d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c2d51: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d53: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x4c2d58u); f_0052069c();
    /* 004c2d58: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2d5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2d5c: ret 4 */ FN_RET(0x004c2c40); r_esp += 8; return;
L_004c2d5f:; BB(0x004c2d5f);
    /* 004c2d5f: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d64: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d66: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c2d6bu); f_007aaa30();
    /* 004c2d6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2d6d: je 0x4c2d78 */ if (fZ) goto L_004c2d78;
L_004c2d6f:; BB(0x004c2d6f);
    /* 004c2d6f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d71: call 0x4c369c */ r_esp -= 4; W32(r_esp, 0x4c2d76u); f_004c369c();
    /* 004c2d76: jmp 0x4c2da8 */ goto L_004c2da8;
L_004c2d78:; BB(0x004c2d78);
    /* 004c2d78: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d7d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d7f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c2d84u); f_007aaa30();
    /* 004c2d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2d86: je 0x4c2d91 */ if (fZ) goto L_004c2d91;
L_004c2d88:; BB(0x004c2d88);
    /* 004c2d88: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d8a: call 0x4c34e8 */ r_esp -= 4; W32(r_esp, 0x4c2d8fu); f_004c34e8();
    /* 004c2d8f: jmp 0x4c2da8 */ goto L_004c2da8;
L_004c2d91:; BB(0x004c2d91);
    /* 004c2d91: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c2d96: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2d98: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c2d9du); f_007aaa30();
    /* 004c2d9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2d9f: je 0x4c2da8 */ if (fZ) goto L_004c2da8;
L_004c2da1:; BB(0x004c2da1);
    /* 004c2da1: mov ecx, esi */ r_ecx = r_esi;
    /* 004c2da3: call 0x4c3334 */ r_esp -= 4; W32(r_esp, 0x4c2da8u); f_004c3334();
L_004c2da8:; BB(0x004c2da8);
    /* 004c2da8: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 004c2daf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2db2: je 0x4c2dd0 */ if (fZ) goto L_004c2dd0;
L_004c2db4:; BB(0x004c2db4);
    /* 004c2db4: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c2db7: mov ecx, dword ptr [esi + 0x68c] */ r_ecx = R32((u32)(r_esi+0x68cu));
    /* 004c2dbd: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004c2dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c2dc1: call 0x4ce228 */ r_esp -= 4; W32(r_esp, 0x4c2dc6u); f_004ce228();
    /* 004c2dc6: mov dword ptr [esi + 0x860], 1 */ W32((u32)(r_esi+0x860u), 0x1u);
L_004c2dd0:; BB(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2c40); r_esp += 8; return;
L_004c2f51:; BB(0x004c2f51);
    /* 004c2f51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c2f53: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2f56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2f57: ret 4 */ FN_RET(0x004c2c40); r_esp += 8; return;
}

void f_004c2dd0(void)
{
    FN_ENTER(0x004c2dd0);
    /* 004c2dd0: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c2dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c2dd4: ret 4 */ FN_RET(0x004c2dd0); r_esp += 8; return;
}

void f_004c2f5c(void) /* sub_4C2F5C */
{
    FN_ENTER(0x004c2f5c);
    /* 004c2f5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2f5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c2f5f: mov eax, dword ptr [ebx + 0x75c] */ r_eax = R32((u32)(r_ebx+0x75cu));
    /* 004c2f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2f67: je 0x4c2fb9 */ if (fZ) goto L_004c2fb9;
L_004c2f69:; BB(0x004c2f69);
    /* 004c2f69: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004c2f6f: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2f71: je 0x4c2f82 */ if (fZ) goto L_004c2f82;
L_004c2f73:; BB(0x004c2f73);
    /* 004c2f73: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c2f79: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2f7b: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c2f80: jmp 0x4c2f9e */ goto L_004c2f9e;
L_004c2f82:; BB(0x004c2f82);
    /* 004c2f82: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c2f88: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2f8b: jge 0x4c2f96 */ if ((fS==fO)) goto L_004c2f96;
L_004c2f8d:; BB(0x004c2f8d);
    /* 004c2f8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2f8f: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c2f94: jmp 0x4c2f9e */ goto L_004c2f9e;
L_004c2f96:; BB(0x004c2f96);
    /* 004c2f96: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c2f99: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c2f9e:; BB(0x004c2f9e);
    /* 004c2f9e: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c2fa1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c2fa4: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2fa7: jne 0x4c301e */ if (!fZ) goto L_004c301e;
L_004c2fa9:; BB(0x004c2fa9);
    /* 004c2fa9: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004c2fb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c2fb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c2fb7: jmp 0x4c2f9e */ goto L_004c2f9e;
L_004c2fb9:; BB(0x004c2fb9);
    /* 004c2fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c2fbb: call 0x4c311c */ r_esp -= 4; W32(r_esp, 0x4c2fc0u); f_004c311c();
    /* 004c2fc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c2fc2: je 0x4c2fc6 */ if (fZ) goto L_004c2fc6;
L_004c2fc4:; BB(0x004c2fc4);
    /* 004c2fc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c2fc5: ret  */ FN_RET(0x004c2f5c); r_esp += 4; return;
L_004c2fc6:; BB(0x004c2fc6);
    /* 004c2fc6: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c2fcc: mov eax, dword ptr [eax*4 + 0x908788] */ r_eax = R32((u32)(r_eax*4+0x908788u));
    /* 004c2fd3: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 004c2fd9: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004c2fdf: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2fe2: je 0x4c2fed */ if (fZ) goto L_004c2fed;
L_004c2fe4:; BB(0x004c2fe4);
    /* 004c2fe4: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2fe6: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c2feb: jmp 0x4c3003 */ goto L_004c3003;
L_004c2fed:; BB(0x004c2fed);
    /* 004c2fed: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c2ff0: jge 0x4c2ffb */ if ((fS==fO)) goto L_004c2ffb;
L_004c2ff2:; BB(0x004c2ff2);
    /* 004c2ff2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c2ff4: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c2ff9: jmp 0x4c3003 */ goto L_004c3003;
L_004c2ffb:; BB(0x004c2ffb);
    /* 004c2ffb: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c2ffe: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c3003:; BB(0x004c3003);
    /* 004c3003: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c3006: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3009: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c300c: jne 0x4c3049 */ if (!fZ) goto L_004c3049;
L_004c300e:; BB(0x004c300e);
    /* 004c300e: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004c3018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c301a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c301c: jmp 0x4c3003 */ goto L_004c3003;
L_004c301e:; BB(0x004c301e);
    /* 004c301e: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3021: je 0x4c3033 */ if (fZ) goto L_004c3033;
L_004c3023:; BB(0x004c3023);
    /* 004c3023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3024: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004c302a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c302c: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c3031u); f_004c3074();
    /* 004c3031: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3032: ret  */ FN_RET(0x004c2f5c); r_esp += 4; return;
L_004c3033:; BB(0x004c3033);
    /* 004c3033: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004c303d: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c3042: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3044: jmp 0x4c2f9e */ goto L_004c2f9e;
L_004c3049:; BB(0x004c3049);
    /* 004c3049: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c304c: je 0x4c305e */ if (fZ) goto L_004c305e;
L_004c304e:; BB(0x004c304e);
    /* 004c304e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c304f: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004c3055: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3057: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c305cu); f_004c3074();
    /* 004c305c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c305d: ret  */ FN_RET(0x004c2f5c); r_esp += 4; return;
L_004c305e:; BB(0x004c305e);
    /* 004c305e: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004c3068: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c306d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c306f: jmp 0x4c3003 */ goto L_004c3003;
}

