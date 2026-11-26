#include "protos.h"

void f_0049a37c(void) /* sub_49A37C */
{
    FN_ENTER(0x0049a37c);
    /* 0049a37c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a37d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049a37f: movzx eax, word ptr [esi + 0x574] */ r_eax = (u32)R16((u32)(r_esi+0x574u));
    /* 0049a386: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049a38b: je 0x49a3fc */ if (fZ) goto L_0049a3fc;
L_0049a38d:; BB(0x0049a38d);
    /* 0049a38d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a38e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49a393u); f_0068d5a8();
    /* 0049a393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049a394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a396: je 0x49a3fe */ if (fZ) goto L_0049a3fe;
L_0049a398:; BB(0x0049a398);
    /* 0049a398: mov edx, dword ptr [esi + 0x58c] */ r_edx = R32((u32)(r_esi+0x58cu));
    /* 0049a39e: mov dword ptr [eax + 0xde8], edx */ W32((u32)(r_eax+0xde8u), r_edx);
    /* 0049a3a4: mov edx, dword ptr [esi + 0x590] */ r_edx = R32((u32)(r_esi+0x590u));
    /* 0049a3aa: mov dword ptr [eax + 0xdec], edx */ W32((u32)(r_eax+0xdecu), r_edx);
    /* 0049a3b0: mov edx, dword ptr [esi + 0x59c] */ r_edx = R32((u32)(r_esi+0x59cu));
    /* 0049a3b6: mov dword ptr [eax + 0xc7c], edx */ W32((u32)(r_eax+0xc7cu), r_edx);
    /* 0049a3bc: mov edx, dword ptr [esi + 0x5a0] */ r_edx = R32((u32)(r_esi+0x5a0u));
    /* 0049a3c2: mov dword ptr [eax + 0xc80], edx */ W32((u32)(r_eax+0xc80u), r_edx);
    /* 0049a3c8: mov edx, dword ptr [esi + 0x5a4] */ r_edx = R32((u32)(r_esi+0x5a4u));
    /* 0049a3ce: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0049a3d1: mov edx, dword ptr [esi + 0x5a8] */ r_edx = R32((u32)(r_esi+0x5a8u));
    /* 0049a3d7: mov dword ptr [eax + 0x9a4], edx */ W32((u32)(r_eax+0x9a4u), r_edx);
    /* 0049a3dd: mov edx, dword ptr [esi + 0x5ac] */ r_edx = R32((u32)(r_esi+0x5acu));
    /* 0049a3e3: mov dword ptr [eax + 0x9a0], edx */ W32((u32)(r_eax+0x9a0u), r_edx);
    /* 0049a3e9: mov edx, dword ptr [esi + 0x5b0] */ r_edx = R32((u32)(r_esi+0x5b0u));
    /* 0049a3ef: mov dword ptr [eax + 0x9a8], edx */ W32((u32)(r_eax+0x9a8u), r_edx);
    /* 0049a3f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0049a3f7: call 0x49a408 */ r_esp -= 4; W32(r_esp, 0x49a3fcu); f_0049a408();
L_0049a3fc:; BB(0x0049a3fc);
    /* 0049a3fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049a3fd: ret  */ FN_RET(0x0049a37c); r_esp += 4; return;
L_0049a3fe:; BB(0x0049a3fe);
    /* 0049a3fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0049a400: call 0x49a408 */ r_esp -= 4; W32(r_esp, 0x49a405u); f_0049a408();
    /* 0049a405: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049a406: ret  */ FN_RET(0x0049a37c); r_esp += 4; return;
}

void f_0049a408(void) /* sub_49A408 */
{
    FN_ENTER(0x0049a408);
    /* 0049a408: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049a40d: mov word ptr [ecx + 0x574], ax */ W16((u32)(r_ecx+0x574u), (u16)r_eax);
    /* 0049a414: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a416: mov dword ptr [ecx + 0x588], edx */ W32((u32)(r_ecx+0x588u), r_edx);
    /* 0049a41c: mov dword ptr [ecx + 0x5a4], edx */ W32((u32)(r_ecx+0x5a4u), r_edx);
    /* 0049a422: mov dword ptr [ecx + 0x5a8], edx */ W32((u32)(r_ecx+0x5a8u), r_edx);
    /* 0049a428: mov dword ptr [ecx + 0x5ac], edx */ W32((u32)(r_ecx+0x5acu), r_edx);
    /* 0049a42e: mov dword ptr [ecx + 0x5b0], edx */ W32((u32)(r_ecx+0x5b0u), r_edx);
    /* 0049a434: ret  */ FN_RET(0x0049a408); r_esp += 4; return;
}

void f_0049a438(void) /* sub_49A438 */
{
    FN_ENTER(0x0049a438);
    /* 0049a438: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 0049a43e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a440: je 0x49a458 */ if (fZ) goto L_0049a458;
L_0049a442:; BB(0x0049a442);
    /* 0049a442: movzx eax, word ptr [ecx + 0x574] */ r_eax = (u32)R16((u32)(r_ecx+0x574u));
    /* 0049a449: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049a44e: je 0x49a45b */ if (fZ) goto L_0049a45b;
L_0049a450:; BB(0x0049a450);
    /* 0049a450: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049a456: jne 0x49a45b */ if (!fZ) goto L_0049a45b;
L_0049a458:; BB(0x0049a458);
    /* 0049a458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a45a: ret  */ FN_RET(0x0049a438); r_esp += 4; return;
L_0049a45b:; BB(0x0049a45b);
    /* 0049a45b: mov eax, 1 */ r_eax = 0x1u;
    /* 0049a460: ret  */ FN_RET(0x0049a438); r_esp += 4; return;
}

void f_0049a440(void)
{
    FN_ENTER(0x0049a440);
    /* 0049a440: je 0x49a458 */ if (fZ) goto L_0049a458;
L_0049a442:; BB(0x0049a442);
    /* 0049a442: movzx eax, word ptr [ecx + 0x574] */ r_eax = (u32)R16((u32)(r_ecx+0x574u));
    /* 0049a449: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049a44e: je 0x49a45b */ if (fZ) goto L_0049a45b;
L_0049a450:; BB(0x0049a450);
    /* 0049a450: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049a456: jne 0x49a45b */ if (!fZ) goto L_0049a45b;
L_0049a458:; BB(0x0049a458);
    /* 0049a458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a45a: ret  */ FN_RET(0x0049a440); r_esp += 4; return;
L_0049a45b:; BB(0x0049a45b);
    /* 0049a45b: mov eax, 1 */ r_eax = 0x1u;
    /* 0049a460: ret  */ FN_RET(0x0049a440); r_esp += 4; return;
}

void f_0049a464(void) /* sub_49A464 */
{
    FN_ENTER(0x0049a464);
    /* 0049a464: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a465: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049a468: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 0049a46e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0049a470: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a473: je 0x49a495 */ if (fZ) goto L_0049a495;
L_0049a475:; BB(0x0049a475);
    /* 0049a475: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0049a47a: cmp eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a47d: je 0x49a495 */ if (fZ) goto L_0049a495;
L_0049a47f:; BB(0x0049a47f);
    /* 0049a47f: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0049a484: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a487: je 0x49a495 */ if (fZ) goto L_0049a495;
L_0049a489:; BB(0x0049a489);
    /* 0049a489: mov ebx, 3 */ r_ebx = 0x3u;
    /* 0049a48e: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a491: je 0x49a495 */ if (fZ) goto L_0049a495;
L_0049a493:; BB(0x0049a493);
    /* 0049a493: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0049a495:; BB(0x0049a495);
    /* 0049a495: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49a49au); f_008587a5();
    /* 0049a49a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049a49d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049a4a0: fdiv dword ptr [0x9035c4] */ ST(0) = ST(0) / R_F32((u32)(0x9035c4u));
    /* 0049a4a6: fmul dword ptr [0x9035c8] */ ST(0) = ST(0) * R_F32((u32)(0x9035c8u));
    /* 0049a4ac: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0049a4b0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0049a4b5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a4ba: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049a4be: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0049a4c2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049a4c6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049a4ca: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049a4ce: lea eax, [eax + ebx + 1] */ r_eax = (u32)(r_eax+r_ebx+0x1u);
    /* 0049a4d2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049a4d5: jl 0x49a4da */ if ((fS!=fO)) goto L_0049a4da;
L_0049a4d7:; BB(0x0049a4d7);
    /* 0049a4d7: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0049a4da:; BB(0x0049a4da);
    /* 0049a4da: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049a4dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049a4de: ret  */ FN_RET(0x0049a464); r_esp += 4; return;
}

void f_0049a4e0(void) /* sub_49A4E0 */
{
    FN_ENTER(0x0049a4e0);
    /* 0049a4e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a4e1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049a4e4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049a4e6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49a4ebu); f_008587a5();
    /* 0049a4eb: mov ebx, dword ptr [ebx + 0x444] */ r_ebx = R32((u32)(r_ebx+0x444u));
    /* 0049a4f1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049a4f4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049a4f7: fdiv dword ptr [0x9035bc] */ ST(0) = ST(0) / R_F32((u32)(0x9035bcu));
    /* 0049a4fd: fmul dword ptr [0x9035c0] */ ST(0) = ST(0) * R_F32((u32)(0x9035c0u));
    /* 0049a503: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0049a507: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0049a50c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a511: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049a515: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0049a519: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049a51d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049a521: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049a525: lea eax, [ebx + eax + 1] */ r_eax = (u32)(r_ebx+r_eax+0x1u);
    /* 0049a529: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049a52c: jle 0x49a531 */ if ((fZ||fS!=fO)) goto L_0049a531;
L_0049a52e:; BB(0x0049a52e);
    /* 0049a52e: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0049a531:; BB(0x0049a531);
    /* 0049a531: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049a534: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049a535: ret  */ FN_RET(0x0049a4e0); r_esp += 4; return;
}

void f_0049a538(void) /* sub_49A538 */
{
    FN_ENTER(0x0049a538);
    /* 0049a538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a539: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a53a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049a53b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a53c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049a53f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049a541: mov eax, dword ptr [ebp + 0x614] */ r_eax = R32((u32)(r_ebp+0x614u));
    /* 0049a547: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0049a54a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049a54d: mov eax, dword ptr [ebp + 0x618] */ r_eax = R32((u32)(r_ebp+0x618u));
    /* 0049a553: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0049a557: mov eax, dword ptr [ebp + 0x61c] */ r_eax = R32((u32)(r_ebp+0x61cu));
    /* 0049a55d: mov dword ptr [ebp + 0x544], 0 */ W32((u32)(r_ebp+0x544u), 0x0u);
    /* 0049a567: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049a56b: mov edx, ebx */ r_edx = r_ebx;
    /* 0049a56d: mov dword ptr [ebp + 0x540], 0 */ W32((u32)(r_ebp+0x540u), 0x0u);
    /* 0049a577: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049a57a: mov dword ptr [ebp + 0x53c], 0 */ W32((u32)(r_ebp+0x53cu), 0x0u);
    /* 0049a584: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49a589u); f_0082f9c4();
    /* 0049a589: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049a58d: mov eax, dword ptr [ebp + 0x5d8] */ r_eax = R32((u32)(r_ebp+0x5d8u));
    /* 0049a593: mov esi, dword ptr [ebp + 0x5dc] */ r_esi = R32((u32)(r_ebp+0x5dcu));
    /* 0049a599: mov edi, dword ptr [ebp + 0x5e0] */ r_edi = R32((u32)(r_ebp+0x5e0u));
    /* 0049a59f: mov edx, ebx */ r_edx = r_ebx;
    /* 0049a5a1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049a5a5: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0049a5a9: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0049a5ad: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49a5b2u); f_0082f9c4();
    /* 0049a5b2: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0049a5b5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0049a5b9: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 0049a5bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a5bf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0049a5c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a5c2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049a5c6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0049a5ca: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0049a5ce: jbe 0x49a5eb */ if ((fC||fZ)) goto L_0049a5eb;
L_0049a5d0:; BB(0x0049a5d0);
    /* 0049a5d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0049a5d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0049a5d8: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0049a5dc: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0049a5e1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0049a5e5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049a5e9: jmp 0x49a5f7 */ goto L_0049a5f7;
L_0049a5eb:; BB(0x0049a5eb);
    /* 0049a5eb: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0049a5ef: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0049a5f3: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_0049a5f7:; BB(0x0049a5f7);
    /* 0049a5f7: cmp ebx, dword ptr [ebp + 0x538] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x538u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a5fd: jne 0x49a63c */ if (!fZ) goto L_0049a63c;
L_0049a5ff:; BB(0x0049a5ff);
    /* 0049a5ff: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0049a603: mov eax, dword ptr [ebp + 0x548] */ r_eax = R32((u32)(r_ebp+0x548u));
    /* 0049a609: mov esi, dword ptr [ebp + 0x54c] */ r_esi = R32((u32)(r_ebp+0x54cu));
    /* 0049a60f: mov edi, dword ptr [ebp + 0x550] */ r_edi = R32((u32)(r_ebp+0x550u));
    /* 0049a615: mov dword ptr [ebp + 0x53c], eax */ W32((u32)(r_ebp+0x53cu), r_eax);
    /* 0049a61b: mov dword ptr [ebp + 0x540], esi */ W32((u32)(r_ebp+0x540u), r_esi);
    /* 0049a621: mov dword ptr [ebp + 0x544], edi */ W32((u32)(r_ebp+0x544u), r_edi);
    /* 0049a627: lea ecx, [ebp + 0x53c] */ r_ecx = (u32)(r_ebp+0x53cu);
    /* 0049a62d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49a632u); f_0082f9c4();
    /* 0049a632: mov dword ptr [ebp + 0x540], 0 */ W32((u32)(r_ebp+0x540u), 0x0u);
L_0049a63c:; BB(0x0049a63c);
    /* 0049a63c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049a640: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0049a644: mov dword ptr [ebp + 0x538], ebx */ W32((u32)(r_ebp+0x538u), r_ebx);
    /* 0049a64a: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0049a64e: mov dword ptr [ebp + 0x548], eax */ W32((u32)(r_ebp+0x548u), r_eax);
    /* 0049a654: mov dword ptr [ebp + 0x54c], edx */ W32((u32)(r_ebp+0x54cu), r_edx);
    /* 0049a65a: mov dword ptr [ebp + 0x550], ebx */ W32((u32)(r_ebp+0x550u), r_ebx);
    /* 0049a660: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049a663: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049a664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049a665: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049a666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049a667: ret  */ FN_RET(0x0049a538); r_esp += 4; return;
}

void f_0049a668(void) /* sub_49A668 */
{
    FN_ENTER(0x0049a668);
    /* 0049a668: fld dword ptr [0x902efc] */ FPUSH(R_F32((u32)(0x902efcu)));
    /* 0049a66e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0049a671: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0049a674: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0049a677: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 0049a67d: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0049a683: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0049a689: ret  */ FN_RET(0x0049a668); r_esp += 4; return;
}

void f_0049a68c(void) /* sub_49A68C */
{
    FN_ENTER(0x0049a68c);
    /* 0049a68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049a68d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a68e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049a690: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 0049a696: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a698: je 0x49a70e */ if (fZ) goto L_0049a70e;
L_0049a69a:; BB(0x0049a69a);
    /* 0049a69a: lea edx, [ecx + 0x84] */ r_edx = (u32)(r_ecx+0x84u);
    /* 0049a6a0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a6a2: jae 0x49a70e */ if (!fC) goto L_0049a70e;
L_0049a6a4:; BB(0x0049a6a4);
    /* 0049a6a4: mov eax, edx */ r_eax = r_edx;
    /* 0049a6a6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049a6a8: cmp eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a6ad: jb 0x49a6fe */ if (fC) goto L_0049a6fe;
L_0049a6af:; BB(0x0049a6af);
    /* 0049a6af: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0049a6b2: lea eax, [edx - 0x108] */ r_eax = (u32)(r_edx+0xfffffef8u);
L_0049a6b8:; BB(0x0049a6b8);
    /* 0049a6b8: mov edi, dword ptr [ecx + 0x18] */ r_edi = R32((u32)(r_ecx+0x18u));
    /* 0049a6bb: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6be: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 0049a6c1: mov edi, dword ptr [ecx + 0x44] */ r_edi = R32((u32)(r_ecx+0x44u));
    /* 0049a6c4: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6c7: mov dword ptr [ecx + 0x44], edi */ W32((u32)(r_ecx+0x44u), r_edi);
    /* 0049a6ca: mov edi, dword ptr [ecx + 0x70] */ r_edi = R32((u32)(r_ecx+0x70u));
    /* 0049a6cd: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6d0: mov dword ptr [ecx + 0x70], edi */ W32((u32)(r_ecx+0x70u), r_edi);
    /* 0049a6d3: mov edi, dword ptr [ecx + 0x9c] */ r_edi = R32((u32)(r_ecx+0x9cu));
    /* 0049a6d9: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6dc: mov dword ptr [ecx + 0x9c], edi */ W32((u32)(r_ecx+0x9cu), r_edi);
    /* 0049a6e2: mov edi, dword ptr [ecx + 0xc8] */ r_edi = R32((u32)(r_ecx+0xc8u));
    /* 0049a6e8: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6eb: mov dword ptr [ecx + 0xc8], edi */ W32((u32)(r_ecx+0xc8u), r_edi);
    /* 0049a6f1: add ecx, 0xdc */ {  u32 a = r_ecx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049a6f7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049a6f9: jbe 0x49a6b8 */ if ((fC||fZ)) goto L_0049a6b8;
L_0049a6fb:; BB(0x0049a6fb);
    /* 0049a6fb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0049a6fe:; BB(0x0049a6fe);
    /* 0049a6fe: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0049a701: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0049a704: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0049a707: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049a70a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a70c: jb 0x49a6fe */ if (fC) goto L_0049a6fe;
L_0049a70e:; BB(0x0049a70e);
    /* 0049a70e: mov eax, dword ptr [ebp + 0x48c] */ r_eax = R32((u32)(r_ebp+0x48cu));
    /* 0049a714: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a716: jne 0x49a726 */ if (!fZ) goto L_0049a726;
L_0049a718:; BB(0x0049a718);
    /* 0049a718: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a71a: je 0x49a723 */ if (fZ) goto L_0049a723;
L_0049a71c:; BB(0x0049a71c);
    /* 0049a71c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049a71e: call 0x49a75c */ r_esp -= 4; W32(r_esp, 0x49a723u); f_0049a75c();
L_0049a723:; BB(0x0049a723);
    /* 0049a723: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049a724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049a725: ret  */ FN_RET(0x0049a68c); r_esp += 4; return;
L_0049a726:; BB(0x0049a726);
    /* 0049a726: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049a728: call 0x49a738 */ r_esp -= 4; W32(r_esp, 0x49a72du); f_0049a738();
    /* 0049a72d: mov eax, dword ptr [ebp + 0x48c] */ r_eax = R32((u32)(r_ebp+0x48cu));
    /* 0049a733: jmp 0x49a718 */ goto L_0049a718;
}

void f_0049a6a0(void)
{
    FN_ENTER(0x0049a6a0);
    /* 0049a6a0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a6a2: jae 0x49a70e */ if (!fC) goto L_0049a70e;
L_0049a6a4:; BB(0x0049a6a4);
    /* 0049a6a4: mov eax, edx */ r_eax = r_edx;
    /* 0049a6a6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049a6a8: cmp eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a6ad: jb 0x49a6fe */ if (fC) goto L_0049a6fe;
L_0049a6af:; BB(0x0049a6af);
    /* 0049a6af: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0049a6b2: lea eax, [edx - 0x108] */ r_eax = (u32)(r_edx+0xfffffef8u);
L_0049a6b8:; BB(0x0049a6b8);
    /* 0049a6b8: mov edi, dword ptr [ecx + 0x18] */ r_edi = R32((u32)(r_ecx+0x18u));
    /* 0049a6bb: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6be: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 0049a6c1: mov edi, dword ptr [ecx + 0x44] */ r_edi = R32((u32)(r_ecx+0x44u));
    /* 0049a6c4: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6c7: mov dword ptr [ecx + 0x44], edi */ W32((u32)(r_ecx+0x44u), r_edi);
    /* 0049a6ca: mov edi, dword ptr [ecx + 0x70] */ r_edi = R32((u32)(r_ecx+0x70u));
    /* 0049a6cd: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6d0: mov dword ptr [ecx + 0x70], edi */ W32((u32)(r_ecx+0x70u), r_edi);
    /* 0049a6d3: mov edi, dword ptr [ecx + 0x9c] */ r_edi = R32((u32)(r_ecx+0x9cu));
    /* 0049a6d9: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6dc: mov dword ptr [ecx + 0x9c], edi */ W32((u32)(r_ecx+0x9cu), r_edi);
    /* 0049a6e2: mov edi, dword ptr [ecx + 0xc8] */ r_edi = R32((u32)(r_ecx+0xc8u));
    /* 0049a6e8: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049a6eb: mov dword ptr [ecx + 0xc8], edi */ W32((u32)(r_ecx+0xc8u), r_edi);
    /* 0049a6f1: add ecx, 0xdc */ {  u32 a = r_ecx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049a6f7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049a6f9: jbe 0x49a6b8 */ if ((fC||fZ)) goto L_0049a6b8;
L_0049a6fb:; BB(0x0049a6fb);
    /* 0049a6fb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0049a6fe:; BB(0x0049a6fe);
    /* 0049a6fe: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0049a701: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0049a704: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0049a707: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049a70a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049a70c: jb 0x49a6fe */ if (fC) goto L_0049a6fe;
L_0049a70e:; BB(0x0049a70e);
    /* 0049a70e: mov eax, dword ptr [ebp + 0x48c] */ r_eax = R32((u32)(r_ebp+0x48cu));
    /* 0049a714: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a716: jne 0x49a726 */ if (!fZ) goto L_0049a726;
L_0049a718:; BB(0x0049a718);
    /* 0049a718: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a71a: je 0x49a723 */ if (fZ) goto L_0049a723;
L_0049a71c:; BB(0x0049a71c);
    /* 0049a71c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049a71e: call 0x49a75c */ r_esp -= 4; W32(r_esp, 0x49a723u); f_0049a75c();
L_0049a723:; BB(0x0049a723);
    /* 0049a723: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049a724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049a725: ret  */ FN_RET(0x0049a6a0); r_esp += 4; return;
L_0049a726:; BB(0x0049a726);
    /* 0049a726: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049a728: call 0x49a738 */ r_esp -= 4; W32(r_esp, 0x49a72du); f_0049a738();
    /* 0049a72d: mov eax, dword ptr [ebp + 0x48c] */ r_eax = R32((u32)(r_ebp+0x48cu));
    /* 0049a733: jmp 0x49a718 */ goto L_0049a718;
}

void f_0049a738(void) /* sub_49A738 */
{
    FN_ENTER(0x0049a738);
    /* 0049a738: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0049a73e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a740: je 0x49a75b */ if (fZ) goto L_0049a75b;
L_0049a742:; BB(0x0049a742);
    /* 0049a742: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0049a745: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a748: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0049a74b: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0049a751: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0049a754: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a757: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0049a75a: ret  */ FN_RET(0x0049a738); r_esp += 4; return;
L_0049a75b:; BB(0x0049a75b);
    /* 0049a75b: ret  */ FN_RET(0x0049a738); r_esp += 4; return;
}

void f_0049a75c(void) /* sub_49A75C */
{
    FN_ENTER(0x0049a75c);
    /* 0049a75c: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0049a762: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a764: je 0x49a770 */ if (fZ) goto L_0049a770;
L_0049a766:; BB(0x0049a766);
    /* 0049a766: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0049a769: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049a76c: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0049a76f: ret  */ FN_RET(0x0049a75c); r_esp += 4; return;
L_0049a770:; BB(0x0049a770);
    /* 0049a770: ret  */ FN_RET(0x0049a75c); r_esp += 4; return;
}

void f_0049a774(void) /* sub_49A774 */
{
    FN_ENTER(0x0049a774);
    /* 0049a774: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0049a77a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a77d: je 0x49a78a */ if (fZ) goto L_0049a78a;
L_0049a77f:; BB(0x0049a77f);
    /* 0049a77f: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a782: je 0x49a78a */ if (fZ) goto L_0049a78a;
L_0049a784:; BB(0x0049a784);
    /* 0049a784: call 0x49a790 */ r_esp -= 4; W32(r_esp, 0x49a789u); f_0049a790();
    /* 0049a789: ret  */ FN_RET(0x0049a774); r_esp += 4; return;
L_0049a78a:; BB(0x0049a78a);
    /* 0049a78a: call 0x49aaac */ r_esp -= 4; W32(r_esp, 0x49a78fu); f_0049aaac();
    /* 0049a78f: ret  */ FN_RET(0x0049a774); r_esp += 4; return;
}

void f_0049a790(void) /* sub_49A790 */
{
    FN_ENTER(0x0049a790);
    /* 0049a790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049a791: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049a794: movzx eax, byte ptr [0xa473ac] */ r_eax = (u32)R8((u32)(0xa473acu));
    /* 0049a79b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a79d: jne 0x49a7b3 */ if (!fZ) goto L_0049a7b3;
L_0049a79f:; BB(0x0049a79f);
    /* 0049a79f: mov dword ptr [0xa473b0], 0xc2fa0000 */ W32((u32)(0xa473b0u), 0xc2fa0000u);
    /* 0049a7a9: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a7ae: mov byte ptr [0xa473ac], al */ W8((u32)(0xa473acu), (u8)r_eax);
L_0049a7b3:; BB(0x0049a7b3);
    /* 0049a7b3: fld dword ptr [0xa473b0] */ FPUSH(R_F32((u32)(0xa473b0u)));
    /* 0049a7b9: mov edx, dword ptr [0xa473b0] */ r_edx = R32((u32)(0xa473b0u));
    /* 0049a7bf: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0049a7c4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0049a7c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049a7c8: jle 0x49aaa6 */ if ((fZ||fS!=fO)) goto L_0049aaa6;
L_0049a7ce:; BB(0x0049a7ce);
    /* 0049a7ce: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0049a7d2: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0049a7d6: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0049a7da: mov ebx, eax */ r_ebx = r_eax;
    /* 0049a7dc: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0049a7e0: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0049a7e4: mov edi, edx */ r_edi = r_edx;
L_0049a7e6:; BB(0x0049a7e6);
    /* 0049a7e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a7e7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x49a7ecu); f_0082e900();
    /* 0049a7ec: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0049a7f0: fld dword ptr [0x903598] */ FPUSH(R_F32((u32)(0x903598u)));
    /* 0049a7f6: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0049a7fa: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0049a801: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0049a805: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a807: je 0x49aa7c */ if (fZ) goto L_0049aa7c;
L_0049a80d:; BB(0x0049a80d);
    /* 0049a80d: fld dword ptr [0x9035b0] */ FPUSH(R_F32((u32)(0x9035b0u)));
    /* 0049a813: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0049a817: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a819: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x49a81eu); f_0082e900();
    /* 0049a81e: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 0049a822: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a824: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a825: ja 0x49aa7c */ if ((!fC&&!fZ)) goto L_0049aa7c;
L_0049a82b:; BB(0x0049a82b);
    /* 0049a82b: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0049a82f: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0049a833: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0049a837: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
L_0049a83b:; BB(0x0049a83b);
    /* 0049a83b: movzx eax, byte ptr [0xa473e8] */ r_eax = (u32)R8((u32)(0xa473e8u));
    /* 0049a842: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a844: jne 0x49a87d */ if (!fZ) goto L_0049a87d;
L_0049a846:; BB(0x0049a846);
    /* 0049a846: fld dword ptr [0x903590] */ FPUSH(R_F32((u32)(0x903590u)));
    /* 0049a84c: mov dword ptr [0xa473dc], 0 */ W32((u32)(0xa473dcu), 0x0u);
    /* 0049a856: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049a858: mov ecx, 0xc0a00000 */ r_ecx = 0xc0a00000u;
    /* 0049a85d: mov dword ptr [0xa473e0], 0x419e6666 */ W32((u32)(0xa473e0u), 0x419e6666u);
    /* 0049a867: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a86c: mov byte ptr [0xa473e8], al */ W8((u32)(0xa473e8u), (u8)r_eax);
    /* 0049a871: mov dword ptr [0xa473e4], 0xc0a00000 */ W32((u32)(0xa473e4u), 0xc0a00000u);
    /* 0049a87b: jmp 0x49a88f */ goto L_0049a88f;
L_0049a87d:; BB(0x0049a87d);
    /* 0049a87d: mov edx, dword ptr [0xa473dc] */ r_edx = R32((u32)(0xa473dcu));
    /* 0049a883: fld dword ptr [0xa473e0] */ FPUSH(R_F32((u32)(0xa473e0u)));
    /* 0049a889: mov ecx, dword ptr [0xa473e4] */ r_ecx = R32((u32)(0xa473e4u));
L_0049a88f:; BB(0x0049a88f);
    /* 0049a88f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0049a892: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0049a895: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0049a898: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049a89a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0049a89e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049a8a0: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0049a8a4: fadd dword ptr [0x9035ac] */ ST(0) = ST(0) + R_F32((u32)(0x9035acu));
    /* 0049a8aa: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0049a8ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049a8af: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0049a8b3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0049a8b7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0049a8ba: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0049a8bd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0049a8bf: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0049a8c3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049a8c7: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0049a8ca: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0049a8ce: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0049a8d2: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049a8d6: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049a8da: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0049a8de: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49a8e3u); f_0082f9c4();
    /* 0049a8e3: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0049a8e7: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0049a8eb: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049a8ef: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0049a8f7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49a8fcu); f_0083173c();
    /* 0049a8fc: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0049a900: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049a902: fld dword ptr [0x903588] */ FPUSH(R_F32((u32)(0x903588u)));
    /* 0049a908: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049a90a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a90c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a90d: jb 0x49a911 */ if (fC) goto L_0049a911;
L_0049a90f:; BB(0x0049a90f);
    /* 0049a90f: fst st(1) */ ST(1) = ST(0);
L_0049a911:; BB(0x0049a911);
    /* 0049a911: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a913: movzx eax, byte ptr [0xa473e8] */ r_eax = (u32)R8((u32)(0xa473e8u));
    /* 0049a91a: fld dword ptr [0xa473ec] */ FPUSH(R_F32((u32)(0xa473ecu)));
    /* 0049a920: mov ecx, dword ptr [0xa473ec] */ r_ecx = R32((u32)(0xa473ecu));
    /* 0049a926: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a928: jne 0x49a942 */ if (!fZ) goto L_0049a942;
L_0049a92a:; BB(0x0049a92a);
    /* 0049a92a: fld dword ptr [0x9035a8] */ FPUSH(R_F32((u32)(0x9035a8u)));
    /* 0049a930: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0049a932: fstp dword ptr [0xa473f0] */ W_F32((u32)(0xa473f0u), ST(0)); FPOP();
    /* 0049a938: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a93d: mov byte ptr [0xa473e8], al */ W8((u32)(0xa473e8u), (u8)r_eax);
L_0049a942:; BB(0x0049a942);
    /* 0049a942: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0049a94a: fchs  */ ST(0) = -ST(0);
    /* 0049a94c: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 0049a950: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0049a952: fadd dword ptr [0x903580] */ ST(0) = ST(0) + R_F32((u32)(0x903580u));
    /* 0049a958: fcom dword ptr [0x90357c] */ fx_compare(ST(0), R_F32((u32)(0x90357cu))); 
    /* 0049a95e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a960: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a961: jae 0x49aa2a */ if (!fC) goto L_0049aa2a;
L_0049a967:; BB(0x0049a967);
    /* 0049a967: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a969: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0049a96d: fcomp dword ptr [0x9035a4] */ fx_compare(ST(0), R_F32((u32)(0x9035a4u))); FPOP();
    /* 0049a973: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a975: mov edx, 0x41200000 */ r_edx = 0x41200000u;
    /* 0049a97a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0049a97e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a97f: jbe 0x49aa22 */ if ((fC||fZ)) goto L_0049aa22;
L_0049a985:; BB(0x0049a985);
    /* 0049a985: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0049a987: fld dword ptr [0x9035a0] */ FPUSH(R_F32((u32)(0x9035a0u)));
    /* 0049a98d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0049a98f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049a991: fdiv dword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x60u));
    /* 0049a995: fld dword ptr [0xa473f0] */ FPUSH(R_F32((u32)(0xa473f0u)));
    /* 0049a99b: mov edx, dword ptr [0xa473f0] */ r_edx = R32((u32)(0xa473f0u));
    /* 0049a9a1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049a9a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a9a5: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0049a9a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a9aa: jbe 0x49aa18 */ if ((fC||fZ)) goto L_0049aa18;
L_0049a9ac:; BB(0x0049a9ac);
    /* 0049a9ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a9ae: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0049a9b2: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0049a9b6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049a9b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049a9ba: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0049a9bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0049a9be: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049a9c0: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0049a9c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049a9c6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0049a9c8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0049a9cc: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0049a9d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a9d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049a9d4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x49a9d9u); f_0082e900();
    /* 0049a9d9: fcomp dword ptr [0x9035a4] */ fx_compare(ST(0), R_F32((u32)(0x9035a4u))); FPOP();
    /* 0049a9df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a9e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a9e2: jbe 0x49aa34 */ if ((fC||fZ)) goto L_0049aa34;
L_0049a9e4:; BB(0x0049a9e4);
    /* 0049a9e4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0049a9e8: fdiv dword ptr [esp + 0x5c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x5cu));
    /* 0049a9ec: fcom dword ptr [0x903578] */ fx_compare(ST(0), R_F32((u32)(0x903578u))); 
    /* 0049a9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a9f4: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0049a9f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a9f9: jbe 0x49aa0a */ if ((fC||fZ)) goto L_0049aa0a;
L_0049a9fb:; BB(0x0049a9fb);
    /* 0049a9fb: fld dword ptr [0x90359c] */ FPUSH(R_F32((u32)(0x90359cu)));
    /* 0049aa01: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0049aa05: mov ebp, 1 */ r_ebp = 0x1u;
L_0049aa0a:; BB(0x0049aa0a);
    /* 0049aa0a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0049aa0e: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0049aa12: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049aa16: jmp 0x49aa34 */ goto L_0049aa34;
L_0049aa18:; BB(0x0049aa18);
    /* 0049aa18: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0049aa1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049aa1c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0049aa20: jmp 0x49aa34 */ goto L_0049aa34;
L_0049aa22:; BB(0x0049aa22);
    /* 0049aa22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049aa24: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0049aa28: jmp 0x49aa34 */ goto L_0049aa34;
L_0049aa2a:; BB(0x0049aa2a);
    /* 0049aa2a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049aa2c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0049aa30: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
L_0049aa34:; BB(0x0049aa34);
    /* 0049aa34: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049aa37: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0049aa3b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0049aa3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049aa40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049aa41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049aa42: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x49aa47u); f_004d85bc();
    /* 0049aa47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049aa4a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049aa4c: je 0x49aa98 */ if (fZ) goto L_0049aa98;
L_0049aa4e:; BB(0x0049aa4e);
    /* 0049aa4e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0049aa52: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0049aa56: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0049aa5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049aa5b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049aa5e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x49aa63u); f_0082e900();
    /* 0049aa63: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 0049aa67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049aa69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049aa6a: jbe 0x49a83b */ if ((fC||fZ)) goto L_0049a83b;
L_0049aa70:; BB(0x0049aa70);
    /* 0049aa70: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 0049aa74: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0049aa78: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_0049aa7c:; BB(0x0049aa7c);
    /* 0049aa7c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049aa7f: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049aa81: jl 0x49a7e6 */ if ((fS!=fO)) goto L_0049a7e6;
L_0049aa87:; BB(0x0049aa87);
    /* 0049aa87: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0049aa8b: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0049aa8f: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_0049aa93:; BB(0x0049aa93);
    /* 0049aa93: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049aa96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049aa97: ret  */ FN_RET(0x0049a790); r_esp += 4; return;
L_0049aa98:; BB(0x0049aa98);
    /* 0049aa98: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 0049aa9c: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0049aaa0: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0049aaa4: jmp 0x49aa7c */ goto L_0049aa7c;
L_0049aaa6:; BB(0x0049aaa6);
    /* 0049aaa6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049aaa8: jmp 0x49aa93 */ goto L_0049aa93;
}

void f_0049aaac(void) /* sub_49AAAC */
{
    FN_ENTER(0x0049aaac);
    /* 0049aaac: movzx eax, byte ptr [0xa473b4] */ r_eax = (u32)R8((u32)(0xa473b4u));
    /* 0049aab3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049aab5: jne 0x49aadd */ if (!fZ) goto L_0049aadd;
L_0049aab7:; BB(0x0049aab7);
    /* 0049aab7: mov dword ptr [0xa473f4], 0 */ W32((u32)(0xa473f4u), 0x0u);
    /* 0049aac1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049aac4: mov byte ptr [0xa473b4], al */ W8((u32)(0xa473b4u), (u8)r_eax);
    /* 0049aac9: mov dword ptr [0xa473f8], 0x420b3333 */ W32((u32)(0xa473f8u), 0x420b3333u);
    /* 0049aad3: mov dword ptr [0xa473fc], 0xc0a00000 */ W32((u32)(0xa473fcu), 0xc0a00000u);
L_0049aadd:; BB(0x0049aadd);
    /* 0049aadd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049aadf: jne 0x49ab09 */ if (!fZ) goto L_0049ab09;
L_0049aae1:; BB(0x0049aae1);
    /* 0049aae1: mov dword ptr [0xa47400], 0 */ W32((u32)(0xa47400u), 0x0u);
    /* 0049aaeb: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049aaf0: mov byte ptr [0xa473b4], al */ W8((u32)(0xa473b4u), (u8)r_eax);
    /* 0049aaf5: mov dword ptr [0xa47404], 0x4126e148 */ W32((u32)(0xa47404u), 0x4126e148u);
    /* 0049aaff: mov dword ptr [0xa47408], 0x428cd70a */ W32((u32)(0xa47408u), 0x428cd70au);
L_0049ab09:; BB(0x0049ab09);
    /* 0049ab09: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049ab0e: push 0xa47400 */ { u32 v = 0xa47400u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ab13: push 0xa473f4 */ { u32 v = 0xa473f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ab18: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x49ab1du); f_004d85bc();
    /* 0049ab1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049ab20: ret  */ FN_RET(0x0049aaac); r_esp += 4; return;
}

void f_0049ab24(void) /* sub_49AB24 */
{
    FN_ENTER(0x0049ab24);
    /* 0049ab24: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049ab27: fld dword ptr [0x902f00] */ FPUSH(R_F32((u32)(0x902f00u)));
    /* 0049ab2d: fadd dword ptr [ecx + 0x514] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x514u));
    /* 0049ab33: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0049ab3a: fld dword ptr [0x903568] */ FPUSH(R_F32((u32)(0x903568u)));
    /* 0049ab40: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049ab42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049ab44: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0049ab47: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0049ab4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049ab4b: movsx eax, word ptr [ecx + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x346u));
    /* 0049ab52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049ab54: jb 0x49ab58 */ if (fC) goto L_0049ab58;
L_0049ab56:; BB(0x0049ab56);
    /* 0049ab56: fst st(2) */ ST(2) = ST(0);
L_0049ab58:; BB(0x0049ab58);
    /* 0049ab58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049ab5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049ab5c: fstp dword ptr [ecx + 0x514] */ W_F32((u32)(r_ecx+0x514u), ST(0)); FPOP();
    /* 0049ab62: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049ab66: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0049ab6a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049ab6c: fstp dword ptr [ecx + 0x518] */ W_F32((u32)(r_ecx+0x518u), ST(0)); FPOP();
    /* 0049ab72: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049ab75: ret  */ FN_RET(0x0049ab24); r_esp += 4; return;
}

void f_0049ab78(void) /* sub_49AB78 */
{
    FN_ENTER(0x0049ab78);
    /* 0049ab78: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 0049ab7e: lea eax, [edx - 3] */ r_eax = (u32)(r_edx+0xfffffffdu);
    /* 0049ab81: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ab84: ja 0x49ab96 */ if ((!fC&&!fZ)) goto L_0049ab96;
L_0049ab86:; BB(0x0049ab86);
    /* 0049ab86: mov eax, dword ptr [edx*4 + 0x902f14] */ r_eax = R32((u32)(r_edx*4+0x902f14u));
    /* 0049ab8d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0049ab96:; BB(0x0049ab96);
    /* 0049ab96: call 0x49ac94 */ r_esp -= 4; W32(r_esp, 0x49ab9bu); f_0049ac94();
    /* 0049ab9b: ret  */ FN_RET(0x0049ab78); r_esp += 4; return;
}

void f_0049ab8f(void)
{
    FN_ENTER(0x0049ab8f);
    /* 0049ab8f: call 0x49ab9c */ r_esp -= 4; W32(r_esp, 0x49ab94u); f_0049ab9c();
    /* 0049ab94: jmp 0x49ab9b */ goto L_0049ab9b;
L_0049ab9b:; BB(0x0049ab9b);
    /* 0049ab9b: ret  */ FN_RET(0x0049ab8f); r_esp += 4; return;
}

void f_0049ab96(void)
{
    FN_ENTER(0x0049ab96);
    /* 0049ab96: call 0x49ac94 */ r_esp -= 4; W32(r_esp, 0x49ab9bu); f_0049ac94();
    /* 0049ab9b: ret  */ FN_RET(0x0049ab96); r_esp += 4; return;
}

void f_0049ab9c(void) /* sub_49AB9C */
{
    FN_ENTER(0x0049ab9c);
    /* 0049ab9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ab9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ab9e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049aba1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049aba3: movzx eax, word ptr [ebx + 0x47e] */ r_eax = (u32)R16((u32)(r_ebx+0x47eu));
    /* 0049abaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049abab: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49abb0u); f_0068d5a8();
    /* 0049abb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049abb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049abb3: je 0x49ac69 */ if (fZ) goto L_0049ac69;
L_0049abb9:; BB(0x0049abb9);
    /* 0049abb9: mov edx, eax */ r_edx = r_eax;
    /* 0049abbb: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0049abbe: jne 0x49abc4 */ if (!fZ) goto L_0049abc4;
L_0049abc0:; BB(0x0049abc0);
    /* 0049abc0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049abc2: jmp 0x49ac32 */ goto L_0049ac32;
L_0049abc4:; BB(0x0049abc4);
    /* 0049abc4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049abc7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0049abca: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0049abcd: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0049abd0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0049abd4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0049abd7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049abdb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0049abde: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49abe3u); f_0082f9c4();
    /* 0049abe3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0049abe6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0049abea: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0049abec: fmul qword ptr [0x903300] */ ST(0) = ST(0) * R_F64((u32)(0x903300u));
    /* 0049abf2: fdiv qword ptr [0x9032f8] */ ST(0) = ST(0) / R_F64((u32)(0x9032f8u));
    /* 0049abf8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0049abfc: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0049ac01: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049ac06: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049ac0a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0049ac0e: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0049ac12: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0049ac16: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0049ac1a: sub eax, dword ptr [ebx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x60u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049ac1d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0049ac20: cmp edx, 0xffffd800 */ {  u32 a = r_edx; u32 b = 0xffffd800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ac26: jl 0x49ac30 */ if ((fS!=fO)) goto L_0049ac30;
L_0049ac28:; BB(0x0049ac28);
    /* 0049ac28: cmp edx, 0x2800 */ {  u32 a = r_edx; u32 b = 0x2800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ac2e: jle 0x49ac32 */ if ((fZ||fS!=fO)) goto L_0049ac32;
L_0049ac30:; BB(0x0049ac30);
    /* 0049ac30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0049ac32:; BB(0x0049ac32);
    /* 0049ac32: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0049ac36: lea eax, [ebx + 0x55c] */ r_eax = (u32)(r_ebx+0x55cu);
    /* 0049ac3c: add ebx, 0x574 */ {  u32 a = r_ebx; u32 b = 0x574u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ac42: mov esi, eax */ r_esi = r_eax;
    /* 0049ac44: mov edi, edx */ r_edi = r_edx;
L_0049ac46:; BB(0x0049ac46);
    /* 0049ac46: push 0x2aa */ { u32 v = 0x2aau; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac4c: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0049ac4e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x49ac53u); f_007a8c74();
    /* 0049ac53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049ac56: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0049ac58: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ac5b: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ac5d: ja 0x49ac46 */ if ((!fC&&!fZ)) goto L_0049ac46;
L_0049ac5f:; BB(0x0049ac5f);
    /* 0049ac5f: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_0049ac63:; BB(0x0049ac63);
    /* 0049ac63: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049ac66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ac67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ac68: ret  */ FN_RET(0x0049ab9c); r_esp += 4; return;
L_0049ac69:; BB(0x0049ac69);
    /* 0049ac69: lea eax, [ebx + 0x55c] */ r_eax = (u32)(r_ebx+0x55cu);
    /* 0049ac6f: add ebx, 0x574 */ {  u32 a = r_ebx; u32 b = 0x574u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ac75: mov esi, eax */ r_esi = r_eax;
L_0049ac77:; BB(0x0049ac77);
    /* 0049ac77: push 0x2aa */ { u32 v = 0x2aau; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac7e: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0049ac80: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x49ac85u); f_007a8c74();
    /* 0049ac85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049ac88: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0049ac8a: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ac8d: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ac8f: ja 0x49ac77 */ if ((!fC&&!fZ)) goto L_0049ac77;
L_0049ac91:; BB(0x0049ac91);
    /* 0049ac91: jmp 0x49ac63 */ goto L_0049ac63;
}

void f_0049ac94(void) /* sub_49AC94 */
{
    FN_ENTER(0x0049ac94);
    /* 0049ac94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ac96: mov eax, ecx */ r_eax = r_ecx;
    /* 0049ac98: lea edx, [eax + 0x55c] */ r_edx = (u32)(r_eax+0x55cu);
    /* 0049ac9e: add eax, 0x574 */ {  u32 a = r_eax; u32 b = 0x574u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049aca3: mov ebx, eax */ r_ebx = r_eax;
    /* 0049aca5: mov esi, edx */ r_esi = r_edx;
L_0049aca7:; BB(0x0049aca7);
    /* 0049aca7: push 0x2aa */ { u32 v = 0x2aau; r_esp -= 4; W32(r_esp, v); }
    /* 0049acac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049acae: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0049acb0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x49acb5u); f_007a8c74();
    /* 0049acb5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049acb8: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0049acba: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049acbd: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049acbf: ja 0x49aca7 */ if ((!fC&&!fZ)) goto L_0049aca7;
L_0049acc1:; BB(0x0049acc1);
    /* 0049acc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049acc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049acc3: ret  */ FN_RET(0x0049ac94); r_esp += 4; return;
}

void f_0049acc4(void) /* sub_49ACC4 */
{
    FN_ENTER(0x0049acc4);
    /* 0049acc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049acc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049acc6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049acc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049acca: call 0x49ad68 */ r_esp -= 4; W32(r_esp, 0x49accfu); f_0049ad68();
    /* 0049accf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049acd1: je 0x49acda */ if (fZ) goto L_0049acda;
L_0049acd3:; BB(0x0049acd3);
    /* 0049acd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049acd5: call 0x49ad90 */ r_esp -= 4; W32(r_esp, 0x49acdau); f_0049ad90();
L_0049acda:; BB(0x0049acda);
    /* 0049acda: mov ebx, dword ptr [ebp + 0x530] */ r_ebx = R32((u32)(r_ebp+0x530u));
    /* 0049ace0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049ace2: jl 0x49acff */ if ((fS!=fO)) goto L_0049acff;
L_0049ace4:; BB(0x0049ace4);
    /* 0049ace4: jne 0x49acf3 */ if (!fZ) goto L_0049acf3;
L_0049ace6:; BB(0x0049ace6);
    /* 0049ace6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ace8: call 0x49add4 */ r_esp -= 4; W32(r_esp, 0x49acedu); f_0049add4();
    /* 0049aced: mov ebx, dword ptr [ebp + 0x530] */ r_ebx = R32((u32)(r_ebp+0x530u));
L_0049acf3:; BB(0x0049acf3);
    /* 0049acf3: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049acf6: mov dword ptr [ebp + 0x530], ebx */ W32((u32)(r_ebp+0x530u), r_ebx);
    /* 0049acfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049acfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049acfe: ret  */ FN_RET(0x0049acc4); r_esp += 4; return;
L_0049acff:; BB(0x0049acff);
    /* 0049acff: mov edx, dword ptr [ebp + 0x430] */ r_edx = R32((u32)(r_ebp+0x430u));
    /* 0049ad05: mov dword ptr [ebp + 0x534], 0 */ W32((u32)(r_ebp+0x534u), 0x0u);
    /* 0049ad0f: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ad12: mov eax, 0xfffffed4 */ r_eax = 0xfffffed4u;
    /* 0049ad17: cmp ebx, 0xfffffed4 */ {  u32 a = r_ebx; u32 b = 0xfffffed4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ad1d: jg 0x49ad21 */ if ((!fZ&&fS==fO)) goto L_0049ad21;
L_0049ad1f:; BB(0x0049ad1f);
    /* 0049ad1f: mov ebx, eax */ r_ebx = r_eax;
L_0049ad21:; BB(0x0049ad21);
    /* 0049ad21: mov dword ptr [ebp + 0x530], ebx */ W32((u32)(r_ebp+0x530u), r_ebx);
    /* 0049ad27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ad29: je 0x49ad33 */ if (fZ) goto L_0049ad33;
L_0049ad2b:; BB(0x0049ad2b);
    /* 0049ad2b: cmp ebx, 0xfffffed4 */ {  u32 a = r_ebx; u32 b = 0xfffffed4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049ad31: je 0x49ad36 */ if (fZ) goto L_0049ad36;
L_0049ad33:; BB(0x0049ad33);
    /* 0049ad33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ad34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ad35: ret  */ FN_RET(0x0049acc4); r_esp += 4; return;
L_0049ad36:; BB(0x0049ad36);
    /* 0049ad36: movzx eax, word ptr [ebp + 0x574] */ r_eax = (u32)R16((u32)(r_ebp+0x574u));
    /* 0049ad3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ad3e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49ad43u); f_0068d5a8();
    /* 0049ad43: mov ebx, eax */ r_ebx = r_eax;
    /* 0049ad45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ad46: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x49ad4bu); f_0048e100();
    /* 0049ad4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049ad4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ad50: je 0x49ad33 */ if (fZ) goto L_0049ad33;
L_0049ad52:; BB(0x0049ad52);
    /* 0049ad52: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0049ad59: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049ad5c: jne 0x49ad33 */ if (!fZ) goto L_0049ad33;
L_0049ad5e:; BB(0x0049ad5e);
    /* 0049ad5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049ad60: call 0x49ae30 */ r_esp -= 4; W32(r_esp, 0x49ad65u); f_0049ae30();
    /* 0049ad65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049ad66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ad67: ret  */ FN_RET(0x0049acc4); r_esp += 4; return;
}

void f_0049ad68(void) /* sub_49AD68 */
{
    FN_ENTER(0x0049ad68);
    /* 0049ad68: mov eax, dword ptr [ecx + 0x534] */ r_eax = R32((u32)(r_ecx+0x534u));
    /* 0049ad6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ad70: je 0x49ad82 */ if (fZ) goto L_0049ad82;
L_0049ad72:; BB(0x0049ad72);
    /* 0049ad72: mov eax, dword ptr [ecx + 0x530] */ r_eax = R32((u32)(r_ecx+0x530u));
    /* 0049ad78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ad7a: jl 0x49ad82 */ if ((fS!=fO)) goto L_0049ad82;
L_0049ad7c:; BB(0x0049ad7c);
    /* 0049ad7c: mov eax, 1 */ r_eax = 0x1u;
    /* 0049ad81: ret  */ FN_RET(0x0049ad68); r_esp += 4; return;
L_0049ad82:; BB(0x0049ad82);
    /* 0049ad82: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0049ad88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049ad8b: je 0x49ad7c */ if (fZ) goto L_0049ad7c;
L_0049ad8d:; BB(0x0049ad8d);
    /* 0049ad8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ad8f: ret  */ FN_RET(0x0049ad68); r_esp += 4; return;
}

void f_0049ad90(void) /* sub_49AD90 */
{
    FN_ENTER(0x0049ad90);
    /* 0049ad90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ad91: mov esi, ecx */ r_esi = r_ecx;
    /* 0049ad93: mov ecx, dword ptr [esi + 0x530] */ r_ecx = R32((u32)(r_esi+0x530u));
    /* 0049ad99: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0049ad9e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0049ada0: mov eax, ecx */ r_eax = r_ecx;
    /* 0049ada2: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049ada5: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0049ada8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049adaa: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0049adad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049adaf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049adb1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049adb3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049adb5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049adb7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049adb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049adbb: je 0x49adbf */ if (fZ) goto L_0049adbf;
L_0049adbd:; BB(0x0049adbd);
    /* 0049adbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049adbe: ret  */ FN_RET(0x0049ad90); r_esp += 4; return;
L_0049adbf:; BB(0x0049adbf);
    /* 0049adbf: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049adc1: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 0049adc6: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049adc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049adca: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49adcfu); f_0050b7a4();
    /* 0049adcf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049add2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049add3: ret  */ FN_RET(0x0049ad90); r_esp += 4; return;
}

void f_0049add4(void) /* sub_49ADD4 */
{
    FN_ENTER(0x0049add4);
    /* 0049add4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049add5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049add7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049add9: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49addeu); f_0049a438();
    /* 0049adde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ade0: jne 0x49ae27 */ if (!fZ) goto L_0049ae27;
L_0049ade2:; BB(0x0049ade2);
    /* 0049ade2: mov eax, dword ptr [ebp + 0x444] */ r_eax = R32((u32)(r_ebp+0x444u));
    /* 0049ade8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049adeb: je 0x49ae29 */ if (fZ) goto L_0049ae29;
L_0049aded:; BB(0x0049aded);
    /* 0049aded: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049adf0: je 0x49ae11 */ if (fZ) goto L_0049ae11;
L_0049adf2:; BB(0x0049adf2);
    /* 0049adf2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049adf5: jne 0x49adfe */ if (!fZ) goto L_0049adfe;
L_0049adf7:; BB(0x0049adf7);
    /* 0049adf7: mov eax, 0x5be */ r_eax = 0x5beu;
    /* 0049adfc: jmp 0x49ae16 */ goto L_0049ae16;
L_0049adfe:; BB(0x0049adfe);
    /* 0049adfe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ae01: jne 0x49ae0a */ if (!fZ) goto L_0049ae0a;
L_0049ae03:; BB(0x0049ae03);
    /* 0049ae03: mov eax, 0x5bf */ r_eax = 0x5bfu;
    /* 0049ae08: jmp 0x49ae16 */ goto L_0049ae16;
L_0049ae0a:; BB(0x0049ae0a);
    /* 0049ae0a: mov eax, 0x5bb */ r_eax = 0x5bbu;
    /* 0049ae0f: jmp 0x49ae16 */ goto L_0049ae16;
L_0049ae11:; BB(0x0049ae11);
    /* 0049ae11: mov eax, 0x5bd */ r_eax = 0x5bdu;
L_0049ae16:; BB(0x0049ae16);
    /* 0049ae16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae1a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049ae1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae1f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49ae24u); f_00814298();
    /* 0049ae24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0049ae27:; BB(0x0049ae27);
    /* 0049ae27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ae28: ret  */ FN_RET(0x0049add4); r_esp += 4; return;
L_0049ae29:; BB(0x0049ae29);
    /* 0049ae29: mov eax, 0x5bc */ r_eax = 0x5bcu;
    /* 0049ae2e: jmp 0x49ae16 */ goto L_0049ae16;
}

void f_0049ae30(void) /* sub_49AE30 */
{
    FN_ENTER(0x0049ae30);
    /* 0049ae30: mov dword ptr [ecx + 0x530], 0x34 */ W32((u32)(r_ecx+0x530u), 0x34u);
    /* 0049ae3a: mov dword ptr [ecx + 0x534], 0 */ W32((u32)(r_ecx+0x534u), 0x0u);
    /* 0049ae44: call 0x49ae4c */ r_esp -= 4; W32(r_esp, 0x49ae49u); f_0049ae4c();
    /* 0049ae49: ret  */ FN_RET(0x0049ae30); r_esp += 4; return;
}

void f_0049ae4c(void) /* sub_49AE4C */
{
    FN_ENTER(0x0049ae4c);
    /* 0049ae4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae4d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049ae4f: mov ecx, esi */ r_ecx = r_esi;
    /* 0049ae51: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49ae56u); f_0049a438();
    /* 0049ae56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049ae58: je 0x49ae5c */ if (fZ) goto L_0049ae5c;
L_0049ae5a:; BB(0x0049ae5a);
    /* 0049ae5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049ae5b: ret  */ FN_RET(0x0049ae4c); r_esp += 4; return;
L_0049ae5c:; BB(0x0049ae5c);
    /* 0049ae5c: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 0049ae62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049ae64: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ae67: je 0x49ae89 */ if (fZ) goto L_0049ae89;
L_0049ae69:; BB(0x0049ae69);
    /* 0049ae69: mov edx, 1 */ r_edx = 0x1u;
    /* 0049ae6e: cmp eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ae71: je 0x49ae89 */ if (fZ) goto L_0049ae89;
L_0049ae73:; BB(0x0049ae73);
    /* 0049ae73: mov edx, 2 */ r_edx = 0x2u;
    /* 0049ae78: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ae7b: je 0x49ae89 */ if (fZ) goto L_0049ae89;
L_0049ae7d:; BB(0x0049ae7d);
    /* 0049ae7d: mov edx, 3 */ r_edx = 0x3u;
    /* 0049ae82: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ae85: je 0x49ae89 */ if (fZ) goto L_0049ae89;
L_0049ae87:; BB(0x0049ae87);
    /* 0049ae87: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0049ae89:; BB(0x0049ae89);
    /* 0049ae89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae8d: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ae90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ae91: push dword ptr [edx*4 + 0x902f9c] */ { u32 v = R32((u32)(r_edx*4+0x902f9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049ae98: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49ae9du); f_00814298();
    /* 0049ae9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049aea0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049aea1: ret  */ FN_RET(0x0049ae4c); r_esp += 4; return;
}

void f_0049aea4(void) /* sub_49AEA4 */
{
    FN_ENTER(0x0049aea4);
    /* 0049aea4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049aea5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049aea7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049aea9: call 0x49aeb8 */ r_esp -= 4; W32(r_esp, 0x49aeaeu); f_0049aeb8();
    /* 0049aeae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049aeb0: call 0x49b128 */ r_esp -= 4; W32(r_esp, 0x49aeb5u); f_0049b128();
    /* 0049aeb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049aeb6: ret  */ FN_RET(0x0049aea4); r_esp += 4; return;
}

void f_0049aeb8(void) /* sub_49AEB8 */
{
    FN_ENTER(0x0049aeb8);
    /* 0049aeb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049aeb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049aeba: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049aebd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049aebf: mov eax, dword ptr [ebp + 0x558] */ r_eax = R32((u32)(r_ebp+0x558u));
    /* 0049aec5: add eax, dword ptr [ebp + 0x55c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x55cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049aecb: mov edx, dword ptr [ebp + 0x554] */ r_edx = R32((u32)(r_ebp+0x554u));
    /* 0049aed1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049aed3: mov eax, dword ptr [ebp + 0x564] */ r_eax = R32((u32)(r_ebp+0x564u));
    /* 0049aed9: add eax, dword ptr [ebp + 0x568] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x568u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049aedf: mov edx, dword ptr [ebp + 0x560] */ r_edx = R32((u32)(r_ebp+0x560u));
    /* 0049aee5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049aee7: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x49aeecu); f_00578b38();
    /* 0049aeec: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x49aef1u); f_0082d7b0();
    /* 0049aef1: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0049aef4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49aef9u); f_0082d838();
    /* 0049aef9: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0049aefc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049aefe: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x49af03u); f_0082d8bc();
    /* 0049af03: fld dword ptr [ebp + 0x434] */ FPUSH(R_F32((u32)(r_ebp+0x434u)));
    /* 0049af09: fcom dword ptr [0x903564] */ fx_compare(ST(0), R_F32((u32)(0x903564u))); 
    /* 0049af0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049af11: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0049af13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049af14: je 0x49af25 */ if (fZ) goto L_0049af25;
L_0049af16:; BB(0x0049af16);
    /* 0049af16: fcom dword ptr [0x903560] */ fx_compare(ST(0), R_F32((u32)(0x903560u))); 
    /* 0049af1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049af1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049af1f: je 0x49af25 */ if (fZ) goto L_0049af25;
L_0049af21:; BB(0x0049af21);
    /* 0049af21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049af23: jmp 0x49af40 */ goto L_0049af40;
L_0049af25:; BB(0x0049af25);
    /* 0049af25: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049af27: push dword ptr [ebp + 0x518] */ { u32 v = R32((u32)(r_ebp+0x518u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049af2d: push dword ptr [ebp + 0x514] */ { u32 v = R32((u32)(r_ebp+0x514u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049af33: mov edi, 1 */ r_edi = 0x1u;
    /* 0049af38: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x49af3du); f_0048e148();
    /* 0049af3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049af40:; BB(0x0049af40);
    /* 0049af40: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x49af45u); f_0082fa9c();
    /* 0049af45: mov edx, dword ptr [ebp + 0x77c] */ r_edx = R32((u32)(r_ebp+0x77cu));
    /* 0049af4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049af4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049af4f: je 0x49b061 */ if (fZ) goto L_0049b061;
L_0049af55:; BB(0x0049af55);
    /* 0049af55: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0049af59: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049af5d: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0049af61: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0049af65: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0049af69: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049af6b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0049af6f: mov esi, ecx */ r_esi = r_ecx;
    /* 0049af71: lea ecx, [ebp + 0x408] */ r_ecx = (u32)(r_ebp+0x408u);
    /* 0049af77: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0049af7b: mov edi, ecx */ r_edi = r_ecx;
L_0049af7d:; BB(0x0049af7d);
    /* 0049af7d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0049af7f: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0049af82: fld dword ptr [ebp + 0x434] */ FPUSH(R_F32((u32)(r_ebp+0x434u)));
    /* 0049af88: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0049af8c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049af8e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0049af92: jne 0x49afa2 */ if (!fZ) goto L_0049afa2;
L_0049af94:; BB(0x0049af94);
    /* 0049af94: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0049af98: fsubr dword ptr [0x903560] */ ST(0) = R_F32((u32)(0x903560u)) - ST(0);
    /* 0049af9e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0049afa2:; BB(0x0049afa2);
    /* 0049afa2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0049afa6: fcomp dword ptr [0x903564] */ fx_compare(ST(0), R_F32((u32)(0x903564u))); FPOP();
    /* 0049afac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049afae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049afaf: je 0x49b046 */ if (fZ) goto L_0049b046;
L_0049afb5:; BB(0x0049afb5);
    /* 0049afb5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0049afb9: fcomp dword ptr [0x903560] */ fx_compare(ST(0), R_F32((u32)(0x903560u))); FPOP();
    /* 0049afbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049afc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049afc2: jae 0x49afd0 */ if (!fC) goto L_0049afd0;
L_0049afc4:; BB(0x0049afc4);
    /* 0049afc4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0049afc8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049afcb: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x49afd0u); f_0048e3a4();
L_0049afd0:; BB(0x0049afd0);
    /* 0049afd0: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0049afd4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x49afd9u); f_00829cc8();
    /* 0049afd9: fld dword ptr [ebp + 0x4bc] */ FPUSH(R_F32((u32)(r_ebp+0x4bcu)));
    /* 0049afdf: fcomp dword ptr [0x903564] */ fx_compare(ST(0), R_F32((u32)(0x903564u))); FPOP();
    /* 0049afe5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049afe7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049afe8: je 0x49b0cf */ if (fZ) goto L_0049b0cf;
L_0049afee:; BB(0x0049afee);
    /* 0049afee: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 0049aff4: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 0049affa: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0049affe: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0049b002: mov ecx, dword ptr [ebp + 0x4b0] */ r_ecx = R32((u32)(r_ebp+0x4b0u));
    /* 0049b008: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0049b00c: mov eax, dword ptr [ebp + 0x4b4] */ r_eax = R32((u32)(r_ebp+0x4b4u));
    /* 0049b012: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049b016: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0049b01a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b01c: je 0x49b09b */ if (fZ) goto L_0049b09b;
L_0049b01e:; BB(0x0049b01e);
    /* 0049b01e: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0049b022: push dword ptr [ebp + 0x4bc] */ { u32 v = R32((u32)(r_ebp+0x4bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b029: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b02a: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x49b02fu); f_008302c4();
    /* 0049b02f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049b032:; BB(0x0049b032);
    /* 0049b032: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0049b036: fcomp dword ptr [0x903560] */ fx_compare(ST(0), R_F32((u32)(0x903560u))); FPOP();
    /* 0049b03c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049b03e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049b03f: jae 0x49b046 */ if (!fC) goto L_0049b046;
L_0049b041:; BB(0x0049b041);
    /* 0049b041: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x49b046u); f_005963d0();
L_0049b046:; BB(0x0049b046);
    /* 0049b046: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049b049: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049b04c: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049b04f: jl 0x49af7d */ if ((fS!=fO)) goto L_0049af7d;
L_0049b055:; BB(0x0049b055);
    /* 0049b055: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0049b059: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0049b05d: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0049b061:; BB(0x0049b061);
    /* 0049b061: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x49b066u); f_0082faac();
    /* 0049b066: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b068: je 0x49b06f */ if (fZ) goto L_0049b06f;
L_0049b06a:; BB(0x0049b06a);
    /* 0049b06a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x49b06fu); f_0048e364();
L_0049b06f:; BB(0x0049b06f);
    /* 0049b06f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x49b074u); f_0082da80();
    /* 0049b074: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x49b079u); f_0082dab0();
    /* 0049b079: mov edx, dword ptr [ebp + 0x554] */ r_edx = R32((u32)(r_ebp+0x554u));
    /* 0049b07f: mov eax, dword ptr [ebp + 0x558] */ r_eax = R32((u32)(r_ebp+0x558u));
    /* 0049b085: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049b087: mov edi, dword ptr [ebp + 0x560] */ r_edi = R32((u32)(r_ebp+0x560u));
    /* 0049b08d: mov ecx, dword ptr [ebp + 0x564] */ r_ecx = R32((u32)(r_ebp+0x564u));
    /* 0049b093: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0049b095: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049b098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049b099: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049b09a: ret  */ FN_RET(0x0049aeb8); r_esp += 4; return;
L_0049b09b:; BB(0x0049b09b);
    /* 0049b09b: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0049b09f: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x49b0a4u); f_00588428();
    /* 0049b0a4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0049b0a8: push dword ptr [ebp + 0x4bc] */ { u32 v = R32((u32)(r_ebp+0x4bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b0ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049b0af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b0b0: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x49b0b5u); f_008302c4();
    /* 0049b0b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b0b8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0049b0bc: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x49b0c1u); f_00452050();
    /* 0049b0c1: mov eax, 1 */ r_eax = 0x1u;
    /* 0049b0c6: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0049b0ca: jmp 0x49b032 */ goto L_0049b032;
L_0049b0cf:; BB(0x0049b0cf);
    /* 0049b0cf: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0049b0d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049b0d5: je 0x49b0f1 */ if (fZ) goto L_0049b0f1;
L_0049b0d7:; BB(0x0049b0d7);
    /* 0049b0d7: push dword ptr [ebp + 0x4b4] */ { u32 v = R32((u32)(r_ebp+0x4b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b0dd: push dword ptr [ebp + 0x4b0] */ { u32 v = R32((u32)(r_ebp+0x4b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b0e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b0e4: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x49b0e9u); f_0083046c();
    /* 0049b0e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b0ec: jmp 0x49b032 */ goto L_0049b032;
L_0049b0f1:; BB(0x0049b0f1);
    /* 0049b0f1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0049b0f5: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x49b0fau); f_00588428();
    /* 0049b0fa: push dword ptr [ebp + 0x4b4] */ { u32 v = R32((u32)(r_ebp+0x4b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b100: push dword ptr [ebp + 0x4b0] */ { u32 v = R32((u32)(r_ebp+0x4b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049b106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049b107: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x49b10cu); f_0083046c();
    /* 0049b10c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049b10f: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0049b113: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x49b118u); f_00452050();
    /* 0049b118: mov eax, 1 */ r_eax = 0x1u;
    /* 0049b11d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0049b121: jmp 0x49b032 */ goto L_0049b032;
}

