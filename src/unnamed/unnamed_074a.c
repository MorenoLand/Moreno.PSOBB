#include "protos.h"

void f_0074a050(void) /* sub_74A050 */
{
    FN_ENTER(0x0074a050);
    /* 0074a050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a051: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a052: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a055: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0074a059: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0074a05c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074a05e: jl 0x74a14b */ if ((fS!=fO)) goto L_0074a14b;
L_0074a064:; BB(0x0074a064);
    /* 0074a064: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0074a068: fld dword ptr [0x973684] */ FPUSH(R_F32((u32)(0x973684u)));
    /* 0074a06e: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0074a072: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0074a075: fdivr dword ptr [0x973688] */ ST(0) = R_F32((u32)(0x973688u)) / ST(0);
    /* 0074a07b: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0074a07e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0074a082: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x74a087u); f_007a902c();
    /* 0074a087: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0074a08c: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x74a091u); f_0082bb30();
    /* 0074a091: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0074a097: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x74a09cu); f_00829cc8();
    /* 0074a09c: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 0074a0a1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0074a0a6: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x74a0abu); f_0082bb60();
    /* 0074a0ab: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0074a0af: fld dword ptr [0x973680] */ FPUSH(R_F32((u32)(0x973680u)));
    /* 0074a0b5: fld dword ptr [0x97367c] */ FPUSH(R_F32((u32)(0x97367cu)));
    /* 0074a0bb: fld dword ptr [0x973698] */ FPUSH(R_F32((u32)(0x973698u)));
    /* 0074a0c1: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0074a0c4: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0074a0c6: fld dword ptr [0x973694] */ FPUSH(R_F32((u32)(0x973694u)));
    /* 0074a0cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a0ce: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0074a0d1: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0074a0d3: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0074a0d6: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0074a0d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a0db: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0074a0df: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0074a0e3: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0074a0e5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0074a0e7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0074a0eb: fld dword ptr [ebx*8 + 0x9735e0] */ FPUSH(R_F32((u32)(r_ebx*8+0x9735e0u)));
    /* 0074a0f2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0074a0f4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074a0f7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0074a0fb: mov ecx, edi */ r_ecx = r_edi;
    /* 0074a0fd: fld dword ptr [ebx*8 + 0x9735e4] */ FPUSH(R_F32((u32)(r_ebx*8+0x9735e4u)));
    /* 0074a104: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0074a106: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0074a10a: fadd dword ptr [ebx*8 + 0x9735e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0x9735e0u));
    /* 0074a111: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0074a113: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0074a117: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a119: fadd dword ptr [ebx*8 + 0x9735e4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*8+0x9735e4u));
    /* 0074a120: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0074a122: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0074a126: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a127: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x74a12cu); f_0071ba34();
    /* 0074a12c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a12e: je 0x74a141 */ if (fZ) goto L_0074a141;
L_0074a130:; BB(0x0074a130);
    /* 0074a130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a131: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0074a135: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074a138: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0074a13c: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x74a141u); f_0082b440();
L_0074a141:; BB(0x0074a141);
    /* 0074a141: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x74a146u); f_004ac444();
    /* 0074a146: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x74a14bu); f_007a9044();
L_0074a14b:; BB(0x0074a14b);
    /* 0074a14b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a14e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a14f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a150: ret  */ FN_RET(0x0074a050); r_esp += 4; return;
}

void f_0074a154(void) /* sub_74A154 */
{
    FN_ENTER(0x0074a154);
    /* 0074a154: mov dword ptr [0xa9aadc], 0x3f800000 */ W32((u32)(0xa9aadcu), 0x3f800000u);
    /* 0074a15e: mov dword ptr [0xa9aae0], 0x41000000 */ W32((u32)(0xa9aae0u), 0x41000000u);
    /* 0074a168: mov dword ptr [0xa9aae4], 0x3fc00000 */ W32((u32)(0xa9aae4u), 0x3fc00000u);
    /* 0074a172: ret  */ FN_RET(0x0074a154); r_esp += 4; return;
}

void f_0074a174(void) /* sub_74A174 */
{
    FN_ENTER(0x0074a174);
    /* 0074a174: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a175: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074a177: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a179: call 0x74a198 */ r_esp -= 4; W32(r_esp, 0x74a17eu); f_0074a198();
    /* 0074a17e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074a182: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a184: jne 0x74a18a */ if (!fZ) goto L_0074a18a;
L_0074a186:; BB(0x0074a186);
    /* 0074a186: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a187: ret 4 */ FN_RET(0x0074a174); r_esp += 8; return;
L_0074a18a:; BB(0x0074a18a);
    /* 0074a18a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a18b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74a190u); f_005c2f74();
    /* 0074a190: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a191: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a192: ret 4 */ FN_RET(0x0074a174); r_esp += 8; return;
}

void f_0074a178(void)
{
    FN_ENTER(0x0074a178);
    /* 0074a178: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 0074a179: call 0x74a198 */ r_esp -= 4; W32(r_esp, 0x74a17eu); f_0074a198();
    /* 0074a17e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074a182: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a184: jne 0x74a18a */ if (!fZ) goto L_0074a18a;
L_0074a186:; BB(0x0074a186);
    /* 0074a186: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a187: ret 4 */ FN_RET(0x0074a178); r_esp += 8; return;
L_0074a18a:; BB(0x0074a18a);
    /* 0074a18a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a18b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74a190u); f_005c2f74();
    /* 0074a190: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a191: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a192: ret 4 */ FN_RET(0x0074a178); r_esp += 8; return;
}

void f_0074a198(void) /* sub_74A198 */
{
    FN_ENTER(0x0074a198);
    /* 0074a198: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a199: mov ebp, esp */ r_ebp = r_esp;
    /* 0074a19b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a19d: push 0x8f26c8 */ { u32 v = 0x8f26c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a1a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074a1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a1a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074a1b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a1b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074a1b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074a1b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074a1bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074a1bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074a1c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074a1c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074a1cc: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0074a1cf: mov dword ptr [eax], 0xb41b98 */ W32((u32)(r_eax), 0xb41b98u);
    /* 0074a1d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a1d7: je 0x74a1e3 */ if (fZ) goto L_0074a1e3;
L_0074a1d9:; BB(0x0074a1d9);
    /* 0074a1d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a1db: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x74a1e0u); f_00721474();
    /* 0074a1e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0074a1e3:; BB(0x0074a1e3);
    /* 0074a1e3: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0074a1e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a1e8: je 0x74a1f4 */ if (fZ) goto L_0074a1f4;
L_0074a1ea:; BB(0x0074a1ea);
    /* 0074a1ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a1ec: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x74a1f1u); f_00728a10();
    /* 0074a1f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0074a1f4:; BB(0x0074a1f4);
    /* 0074a1f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074a1fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0074a1fd: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x74a202u); f_00710788();
    /* 0074a202: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074a205: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074a20c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074a20e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a20f: ret  */ FN_RET(0x0074a198); r_esp += 4; return;
}

void f_0074a210(void) /* sub_74A210 */
{
    FN_ENTER(0x0074a210);
    /* 0074a210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a211: mov ebp, esp */ r_ebp = r_esp;
    /* 0074a213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a215: push 0x8f271a */ { u32 v = 0x8f271au; r_esp -= 4; W32(r_esp, v); }
    /* 0074a21a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074a220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a221: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074a228: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a22b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074a22e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0074a231: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0074a234: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0074a237: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0074a23a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0074a23d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a23f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74a244u); f_0073ec50();
    /* 0074a244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a245: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a249: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0074a24c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074a24f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a250: push 0x9f4048 */ { u32 v = 0x9f4048u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a255: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x74a25au); f_007108c4();
    /* 0074a25a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074a261: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a264: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074a267: mov dword ptr [edx], 0xb41b98 */ W32((u32)(r_edx), 0xb41b98u);
    /* 0074a26d: mov eax, dword ptr [0x9f4044] */ r_eax = R32((u32)(0x9f4044u));
    /* 0074a272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a273: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0074a276: mov word ptr [edx + 0x20], cx */ W16((u32)(r_edx+0x20u), (u16)r_ecx);
    /* 0074a27a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74a27fu); f_0068d5a8();
    /* 0074a27f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a282: je 0x74a3ee */ if (fZ) goto L_0074a3ee;
L_0074a288:; BB(0x0074a288);
    /* 0074a288: mov edx, eax */ r_edx = r_eax;
    /* 0074a28a: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a290: je 0x74a3d8 */ if (fZ) goto L_0074a3d8;
L_0074a296:; BB(0x0074a296);
    /* 0074a296: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a299: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 0074a29f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074a2a1: je 0x74a2b0 */ if (fZ) goto L_0074a2b0;
L_0074a2a3:; BB(0x0074a2a3);
    /* 0074a2a3: mov esi, 0x973880 */ r_esi = 0x973880u;
    /* 0074a2a8: mov dword ptr [edx + 0x8c], esi */ W32((u32)(r_edx+0x8cu), r_esi);
    /* 0074a2ae: jmp 0x74a2bb */ goto L_0074a2bb;
L_0074a2b0:; BB(0x0074a2b0);
    /* 0074a2b0: mov esi, 0x9737e0 */ r_esi = 0x9737e0u;
    /* 0074a2b5: mov dword ptr [edx + 0x8c], esi */ W32((u32)(r_edx+0x8cu), r_esi);
L_0074a2bb:; BB(0x0074a2bb);
    /* 0074a2bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0074a2bd: mov byte ptr [edx + 0x87], cl */ W8((u32)(r_edx+0x87u), (u8)r_ecx);
    /* 0074a2c3: mov byte ptr [edx + 0x84], cl */ W8((u32)(r_edx+0x84u), (u8)r_ecx);
    /* 0074a2c9: mov byte ptr [edx + 0x85], cl */ W8((u32)(r_edx+0x85u), (u8)r_ecx);
    /* 0074a2cf: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 0074a2d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074a2d7: mov byte ptr [edx + 0x86], cl */ W8((u32)(r_edx+0x86u), (u8)r_ecx);
    /* 0074a2dd: movzx ebx, word ptr [esi] */ r_ebx = (u32)R16((u32)(r_esi));
    /* 0074a2e0: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a2e3: je 0x74a2f9 */ if (fZ) goto L_0074a2f9;
L_0074a2e5:; BB(0x0074a2e5);
    /* 0074a2e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074a2e8: mov byte ptr [edx + 0x86], al */ W8((u32)(r_edx+0x86u), (u8)r_eax);
    /* 0074a2ee: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074a2f1: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0074a2f4: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a2f7: jne 0x74a2e5 */ if (!fZ) goto L_0074a2e5;
L_0074a2f9:; BB(0x0074a2f9);
    /* 0074a2f9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0074a300: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a302: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x74a307u); f_008581c5();
    /* 0074a307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a308: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0074a30b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a30d: je 0x74a3d1 */ if (fZ) goto L_0074a3d1;
L_0074a313:; BB(0x0074a313);
    /* 0074a313: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0074a31a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0074a321: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a323: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74a328u); f_0079317c();
    /* 0074a328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a329: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a32c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0074a32f: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0074a333: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a335: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x74a33au); f_00761320();
    /* 0074a33a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0074a33d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0074a344:; BB(0x0074a344);
    /* 0074a344: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a347: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0074a34a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074a351: movsx eax, byte ptr [eax + 0x86] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x86u));
    /* 0074a358: mov dword ptr [ebp - 0x3c], 0x43560000 */ W32((u32)(r_ebp+0xffffffc4u), 0x43560000u);
    /* 0074a35f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0074a362: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0074a365: fmul dword ptr [0x9737a0] */ ST(0) = ST(0) * R_F32((u32)(0x9737a0u));
    /* 0074a36b: fadd dword ptr [0x9737a4] */ ST(0) = ST(0) + R_F32((u32)(0x9737a4u));
    /* 0074a371: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0074a378: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0074a37b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a37d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x74a382u); f_008581c5();
    /* 0074a382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a383: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0074a386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a388: je 0x74a3cd */ if (fZ) goto L_0074a3cd;
L_0074a38a:; BB(0x0074a38a);
    /* 0074a38a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0074a391: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0074a398: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074a39b: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0074a39e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a39f: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x74a3a4u); f_0073f670();
    /* 0074a3a4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0074a3a7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0074a3ae:; BB(0x0074a3ae);
    /* 0074a3ae: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a3b1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074a3b4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074a3b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074a3ba: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0074a3bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074a3c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074a3c7: mov esp, ebp */ r_esp = r_ebp;
    /* 0074a3c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a3ca: ret 4 */ FN_RET(0x0074a210); r_esp += 8; return;
L_0074a3cd:; BB(0x0074a3cd);
    /* 0074a3cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a3cf: jmp 0x74a3ae */ goto L_0074a3ae;
L_0074a3d1:; BB(0x0074a3d1);
    /* 0074a3d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0074a3d3: jmp 0x74a344 */ goto L_0074a344;
L_0074a3d8:; BB(0x0074a3d8);
    /* 0074a3d8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a3db: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074a3de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074a3e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074a3e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0074a3ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a3eb: ret 4 */ FN_RET(0x0074a210); r_esp += 8; return;
L_0074a3ee:; BB(0x0074a3ee);
    /* 0074a3ee: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074a3f1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074a3f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074a3f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074a3fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0074a400: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a401: ret 4 */ FN_RET(0x0074a210); r_esp += 8; return;
}

void f_0074a404(void) /* sub_74A404 */
{
    FN_ENTER(0x0074a404);
    /* 0074a404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a406: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074a408: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074a40c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a40d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74a412u); f_00719140();
    /* 0074a412: mov ebp, eax */ r_ebp = r_eax;
    /* 0074a414: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a417: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0074a41a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074a41d: jne 0x74a426 */ if (!fZ) goto L_0074a426;
L_0074a41f:; BB(0x0074a41f);
    /* 0074a41f: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_0074a426:; BB(0x0074a426);
    /* 0074a426: movzx edx, byte ptr [ebx + 0x87] */ r_edx = (u32)R8((u32)(r_ebx+0x87u));
    /* 0074a42d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074a430: jne 0x74a482 */ if (!fZ) goto L_0074a482;
L_0074a432:; BB(0x0074a432);
    /* 0074a432: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a434: call 0x74a4c4 */ r_esp -= 4; W32(r_esp, 0x74a439u); f_0074a4c4();
    /* 0074a439: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0074a43e: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a445: lea ebp, [ebp + ebp*4] */ r_ebp = (u32)(r_ebp+r_ebp*4);
    /* 0074a449: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a44b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a44d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a44f: lea ebp, [ebp + ebp + 0xaae75c] */ r_ebp = (u32)(r_ebp+r_ebp+0xaae75cu);
    /* 0074a456: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a458: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74a45du); f_007c1160();
    /* 0074a45d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a45f: je 0x74a468 */ if (fZ) goto L_0074a468;
L_0074a461:; BB(0x0074a461);
    /* 0074a461: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a463: call 0x74a5f0 */ r_esp -= 4; W32(r_esp, 0x74a468u); f_0074a5f0();
L_0074a468:; BB(0x0074a468);
    /* 0074a468: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 0074a46d: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a46f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a470: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a472: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74a477u); f_007c1160();
    /* 0074a477: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a479: je 0x74a482 */ if (fZ) goto L_0074a482;
L_0074a47b:; BB(0x0074a47b);
    /* 0074a47b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a47d: call 0x74a624 */ r_esp -= 4; W32(r_esp, 0x74a482u); f_0074a624();
L_0074a482:; BB(0x0074a482);
    /* 0074a482: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a484: call 0x74a65c */ r_esp -= 4; W32(r_esp, 0x74a489u); f_0074a65c();
    /* 0074a489: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 0074a48c: fcomp dword ptr [0x97379c] */ fx_compare(ST(0), R_F32((u32)(0x97379cu))); FPOP();
    /* 0074a492: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074a494: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074a495: jb 0x74a4a7 */ if (fC) goto L_0074a4a7;
L_0074a497:; BB(0x0074a497);
    /* 0074a497: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0074a49a: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x74a49fu); f_00761388();
    /* 0074a49f: mov ecx, dword ptr [ebx + 0x64] */ r_ecx = R32((u32)(r_ebx+0x64u));
    /* 0074a4a2: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x74a4a7u); f_0073f68c();
L_0074a4a7:; BB(0x0074a4a7);
    /* 0074a4a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a4a9: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x74a4aeu); f_00710db4();
    /* 0074a4ae: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0074a4b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a4b4: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x74a4b9u); f_0072a5ec();
    /* 0074a4b9: add dword ptr [ebx + 0x88], 1 */ { u32 ad = (u32)(r_ebx+0x88u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a4c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a4c2: ret  */ FN_RET(0x0074a404); r_esp += 4; return;
}

void f_0074a4c4(void) /* sub_74A4C4 */
{
    FN_ENTER(0x0074a4c4);
    /* 0074a4c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4c6: mov edi, ecx */ r_edi = r_ecx;
    /* 0074a4c8: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0074a4cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4cd: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74a4d2u); f_00719140();
    /* 0074a4d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a4d3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4d7: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 0074a4da: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a4dc: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 0074a4e1: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a4e7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a4e9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074a4eb: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a4f1: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a4f7: lea ebp, [ebp + ebp + 0xaae75c] */ r_ebp = (u32)(r_ebp+r_ebp+0xaae75cu);
    /* 0074a4fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a4ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a501: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x74a506u); f_007c09fc();
    /* 0074a506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a508: jne 0x74a50d */ if (!fZ) goto L_0074a50d;
L_0074a50a:; BB(0x0074a50a);
    /* 0074a50a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a50b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a50c: ret  */ FN_RET(0x0074a4c4); r_esp += 4; return;
L_0074a50d:; BB(0x0074a50d);
    /* 0074a50d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074a50f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a512: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a517: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74a51cu); f_00814298();
    /* 0074a51c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a51f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a521: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a525: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a52b: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x74a530u); f_007c09fc();
    /* 0074a530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a532: je 0x74a53b */ if (fZ) goto L_0074a53b;
L_0074a534:; BB(0x0074a534);
    /* 0074a534: add byte ptr [edi + 0x85], 0xff */ { u32 ad = (u32)(r_edi+0x85u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0074a53b:; BB(0x0074a53b);
    /* 0074a53b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a53d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a53f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a541: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a547: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x74a54cu); f_007c09fc();
    /* 0074a54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a54e: je 0x74a557 */ if (fZ) goto L_0074a557;
L_0074a550:; BB(0x0074a550);
    /* 0074a550: add byte ptr [edi + 0x85], 1 */ { u32 ad = (u32)(r_edi+0x85u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0074a557:; BB(0x0074a557);
    /* 0074a557: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a559: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a55b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a55d: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a563: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x74a568u); f_007c09fc();
    /* 0074a568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a56a: je 0x74a573 */ if (fZ) goto L_0074a573;
L_0074a56c:; BB(0x0074a56c);
    /* 0074a56c: add byte ptr [edi + 0x84], 1 */ { u32 ad = (u32)(r_edi+0x84u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0074a573:; BB(0x0074a573);
    /* 0074a573: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a575: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a577: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074a579: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a57f: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x74a584u); f_007c09fc();
    /* 0074a584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a586: jne 0x74a591 */ if (!fZ) goto L_0074a591;
L_0074a588:; BB(0x0074a588);
    /* 0074a588: movsx eax, byte ptr [edi + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x84u));
    /* 0074a58f: jmp 0x74a5a1 */ goto L_0074a5a1;
L_0074a591:; BB(0x0074a591);
    /* 0074a591: movsx eax, byte ptr [edi + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x84u));
    /* 0074a598: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074a59b: mov byte ptr [edi + 0x84], al */ W8((u32)(r_edi+0x84u), (u8)r_eax);
L_0074a5a1:; BB(0x0074a5a1);
    /* 0074a5a1: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0074a5a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074a5a6: jge 0x74a5b4 */ if ((fS==fO)) goto L_0074a5b4;
L_0074a5a8:; BB(0x0074a5a8);
    /* 0074a5a8: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074a5ab: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0074a5ae: mov byte ptr [edi + 0x84], al */ W8((u32)(r_edi+0x84u), (u8)r_eax);
L_0074a5b4:; BB(0x0074a5b4);
    /* 0074a5b4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074a5b7: jl 0x74a5c2 */ if ((fS!=fO)) goto L_0074a5c2;
L_0074a5b9:; BB(0x0074a5b9);
    /* 0074a5b9: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074a5bc: mov byte ptr [edi + 0x84], al */ W8((u32)(r_edi+0x84u), (u8)r_eax);
L_0074a5c2:; BB(0x0074a5c2);
    /* 0074a5c2: movsx edx, byte ptr [edi + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x85u));
    /* 0074a5c9: movsx eax, byte ptr [edi + 0x86] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x86u));
    /* 0074a5d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074a5d2: jl 0x74a5e3 */ if ((fS!=fO)) goto L_0074a5e3;
L_0074a5d4:; BB(0x0074a5d4);
    /* 0074a5d4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074a5d6: jl 0x74a5e0 */ if ((fS!=fO)) goto L_0074a5e0;
L_0074a5d8:; BB(0x0074a5d8);
    /* 0074a5d8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074a5da: mov byte ptr [edi + 0x85], dl */ W8((u32)(r_edi+0x85u), (u8)r_edx);
L_0074a5e0:; BB(0x0074a5e0);
    /* 0074a5e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074a5e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a5e2: ret  */ FN_RET(0x0074a4c4); r_esp += 4; return;
L_0074a5e3:; BB(0x0074a5e3);
    /* 0074a5e3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074a5e5: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0074a5e8: mov byte ptr [edi + 0x85], dl */ W8((u32)(r_edi+0x85u), (u8)r_edx);
    /* 0074a5ee: jmp 0x74a5d4 */ goto L_0074a5d4;
}

void f_0074a5f0(void) /* sub_74A5F0 */
{
    FN_ENTER(0x0074a5f0);
    /* 0074a5f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a5f1: mov edi, ecx */ r_edi = r_ecx;
    /* 0074a5f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074a5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a5f8: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a5fd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74a602u); f_00814298();
    /* 0074a602: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a605: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a607: movzx eax, byte ptr [edi + 0x87] */ r_eax = (u32)R8((u32)(r_edi+0x87u));
    /* 0074a60e: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0074a611: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a616: mov byte ptr [edi + 0x87], al */ W8((u32)(r_edi+0x87u), (u8)r_eax);
    /* 0074a61c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74a621u); f_00760acc();
    /* 0074a621: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a622: ret  */ FN_RET(0x0074a5f0); r_esp += 4; return;
}

void f_0074a624(void) /* sub_74A624 */
{
    FN_ENTER(0x0074a624);
    /* 0074a624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a625: mov edi, ecx */ r_edi = r_ecx;
    /* 0074a627: movzx eax, byte ptr [edi + 0x87] */ r_eax = (u32)R8((u32)(r_edi+0x87u));
    /* 0074a62e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a630: je 0x74a634 */ if (fZ) goto L_0074a634;
L_0074a632:; BB(0x0074a632);
    /* 0074a632: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a633: ret  */ FN_RET(0x0074a624); r_esp += 4; return;
L_0074a634:; BB(0x0074a634);
    /* 0074a634: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074a636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a639: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a63e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74a643u); f_00814298();
    /* 0074a643: movzx eax, byte ptr [edi + 0x87] */ r_eax = (u32)R8((u32)(r_edi+0x87u));
    /* 0074a64a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074a64f: mov byte ptr [edi + 0x87], al */ W8((u32)(r_edi+0x87u), (u8)r_eax);
    /* 0074a655: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a658: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a659: ret  */ FN_RET(0x0074a624); r_esp += 4; return;
}

void f_0074a65c(void) /* sub_74A65C */
{
    FN_ENTER(0x0074a65c);
    /* 0074a65c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a65f: fld dword ptr [0x973788] */ FPUSH(R_F32((u32)(0x973788u)));
    /* 0074a665: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0074a668: movsx eax, byte ptr [ecx + 0x85] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x85u));
    /* 0074a66f: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0074a672: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a674: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0074a678: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 0074a67a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074a67e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0074a682: fmul dword ptr [0x973794] */ ST(0) = ST(0) * R_F32((u32)(0x973794u));
    /* 0074a688: fadd dword ptr [0x973798] */ ST(0) = ST(0) + R_F32((u32)(0x973798u));
    /* 0074a68e: fadd dword ptr [0x973790] */ ST(0) = ST(0) + R_F32((u32)(0x973790u));
    /* 0074a694: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0074a69b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0074a69d: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0074a6a0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074a6a3: lea eax, [ecx + 0x70] */ r_eax = (u32)(r_ecx+0x70u);
    /* 0074a6a6: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 0074a6a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6ab: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x74a6b0u); f_0073f8a4();
    /* 0074a6b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a6b3: ret  */ FN_RET(0x0074a65c); r_esp += 4; return;
}

void f_0074a6b4(void) /* sub_74A6B4 */
{
    FN_ENTER(0x0074a6b4);
    /* 0074a6b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6b7: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a6ba: mov edi, ecx */ r_edi = r_ecx;
    /* 0074a6bc: mov ecx, edi */ r_ecx = r_edi;
    /* 0074a6be: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x74a6c3u); f_007108f4();
    /* 0074a6c3: mov ebx, eax */ r_ebx = r_eax;
    /* 0074a6c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0074a6c8: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74a6cdu); f_00710f80();
    /* 0074a6cd: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0074a6d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a6d2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74a6d7u); f_0068d5a8();
    /* 0074a6d7: mov ecx, eax */ r_ecx = r_eax;
    /* 0074a6d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a6dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a6de: je 0x74a8c0 */ if (fZ) goto L_0074a8c0;
L_0074a6e4:; BB(0x0074a6e4);
    /* 0074a6e4: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0074a6ea: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0074a6ed: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0074a6ef: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a6f2: je 0x74a8c0 */ if (fZ) goto L_0074a8c0;
L_0074a6f8:; BB(0x0074a6f8);
    /* 0074a6f8: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0074a6fc: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0074a700: mov edi, eax */ r_edi = r_eax;
    /* 0074a702: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
L_0074a706:; BB(0x0074a706);
    /* 0074a706: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a708: je 0x74a8a5 */ if (fZ) goto L_0074a8a5;
L_0074a70e:; BB(0x0074a70e);
    /* 0074a70e: fld dword ptr [0x973780] */ FPUSH(R_F32((u32)(0x973780u)));
    /* 0074a714: fld dword ptr [0x97377c] */ FPUSH(R_F32((u32)(0x97377cu)));
    /* 0074a71a: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0074a71d: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0074a71f: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0074a724: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0074a726: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0074a728: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0074a72c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0074a730: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0074a733: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074a735: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0074a737: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074a739: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0074a73c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0074a73f: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0074a742: fadd dword ptr [ecx*4 + 0x973740] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x973740u));
    /* 0074a749: fmul dword ptr [0x973784] */ ST(0) = ST(0) * R_F32((u32)(0x973784u));
    /* 0074a74f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0074a752: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a754: fadd dword ptr [edx*4 + 0x973740] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x973740u));
    /* 0074a75b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0074a75d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0074a75f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0074a761: fcomp dword ptr [ebx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x40u))); FPOP();
    /* 0074a764: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074a766: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074a767: jae 0x74a776 */ if (!fC) goto L_0074a776;
L_0074a769:; BB(0x0074a769);
    /* 0074a769: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0074a76b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0074a76d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0074a76f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0074a771: jmp 0x74a8a5 */ goto L_0074a8a5;
L_0074a776:; BB(0x0074a776);
    /* 0074a776: fld dword ptr [0x9737b8] */ FPUSH(R_F32((u32)(0x9737b8u)));
    /* 0074a77c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0074a77e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0074a780: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0074a782: fcomp dword ptr [ebx + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x48u))); FPOP();
    /* 0074a785: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074a787: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074a788: jbe 0x74a797 */ if ((fC||fZ)) goto L_0074a797;
L_0074a78a:; BB(0x0074a78a);
    /* 0074a78a: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0074a78c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0074a78e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0074a790: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0074a792: jmp 0x74a8a5 */ goto L_0074a8a5;
L_0074a797:; BB(0x0074a797);
    /* 0074a797: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a799: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0074a79b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a79d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0074a79f: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0074a7a3: fld dword ptr [0x9737b4] */ FPUSH(R_F32((u32)(0x9737b4u)));
    /* 0074a7a9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0074a7ab: fld dword ptr [0x9737b0] */ FPUSH(R_F32((u32)(0x9737b0u)));
    /* 0074a7b1: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0074a7b3: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 0074a7b6: mov ebp, dword ptr [ecx + 4] */ r_ebp = R32((u32)(r_ecx+0x4u));
    /* 0074a7b9: fld dword ptr [0x9737ac] */ FPUSH(R_F32((u32)(0x9737acu)));
    /* 0074a7bf: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0074a7c1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0074a7c3: fadd dword ptr [0x973774] */ ST(0) = ST(0) + R_F32((u32)(0x973774u));
    /* 0074a7c9: fld dword ptr [0x973778] */ FPUSH(R_F32((u32)(0x973778u)));
    /* 0074a7cf: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0074a7d1: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0074a7d3: fadd dword ptr [0x973770] */ ST(0) = ST(0) + R_F32((u32)(0x973770u));
    /* 0074a7d9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074a7db: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0074a7de: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0074a7e2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0074a7e5: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0074a7e8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0074a7ea: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0074a7ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a7ef: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0074a7f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0074a7f4: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0074a7f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0074a7f9: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0074a7fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0074a7fe: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0074a801: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a803: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0074a806: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a808: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0074a80b: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0074a80e: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0074a811: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0074a815: movsx ecx, word ptr [edi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0074a819: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0074a81d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0074a821: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0074a824: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0074a827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a829: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0074a82d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a82e: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x74a833u); f_006ab474();
    /* 0074a833: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a838: je 0x74a843 */ if (fZ) goto L_0074a843;
L_0074a83a:; BB(0x0074a83a);
    /* 0074a83a: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 0074a841: jmp 0x74a84a */ goto L_0074a84a;
L_0074a843:; BB(0x0074a843);
    /* 0074a843: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_0074a84a:; BB(0x0074a84a);
    /* 0074a84a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0074a84e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0074a852: movsx eax, word ptr [eax + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0074a856: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0074a859: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0074a85d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0074a861: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0074a864: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0074a868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a86a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a86b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0074a86f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a871: call 0x710288 */ r_esp -= 4; W32(r_esp, 0x74a876u); f_00710288();
    /* 0074a876: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0074a87a: movsx ecx, word ptr [edx + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0074a87e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a87f: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0074a883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a884: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0074a888: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a889: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a88a: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0074a88e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a88f: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x74a894u); f_0070fdd8();
    /* 0074a894: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074a897: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0074a89b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a89c: lea edx, [ecx + 0x24] */ r_edx = (u32)(r_ecx+0x24u);
    /* 0074a89f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a8a0: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74a8a5u); f_0072a648();
L_0074a8a5:; BB(0x0074a8a5);
    /* 0074a8a5: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0074a8a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074a8ac: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074a8af: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a8b2: jne 0x74a706 */ if (!fZ) goto L_0074a706;
L_0074a8b8:; BB(0x0074a8b8);
    /* 0074a8b8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0074a8bc: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0074a8c0:; BB(0x0074a8c0);
    /* 0074a8c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a8c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0074a8c3: call 0x74a8e8 */ r_esp -= 4; W32(r_esp, 0x74a8c8u); f_0074a8e8();
    /* 0074a8c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a8c9: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0074a8cc: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74a8d1u); f_00761390();
    /* 0074a8d1: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 0074a8d4: lea edx, [edi + 0x70] */ r_edx = (u32)(r_edi+0x70u);
    /* 0074a8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a8d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a8d9: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74a8deu); f_0073f694();
    /* 0074a8de: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a8e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a8e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074a8e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a8e4: ret  */ FN_RET(0x0074a6b4); r_esp += 4; return;
}

void f_0074a8e8(void) /* sub_74A8E8 */
{
    FN_ENTER(0x0074a8e8);
    /* 0074a8e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a8eb: movsx eax, byte ptr [ecx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x84u));
    /* 0074a8f2: movsx edx, byte ptr [ecx + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x85u));
    /* 0074a8f9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074a8fd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0074a901: fmul dword ptr [0x97376c] */ ST(0) = ST(0) * R_F32((u32)(0x97376cu));
    /* 0074a907: fadd dword ptr [0x973760] */ ST(0) = ST(0) + R_F32((u32)(0x973760u));
    /* 0074a90d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0074a911: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0074a915: fmul dword ptr [0x973768] */ ST(0) = ST(0) * R_F32((u32)(0x973768u));
    /* 0074a91b: fadd dword ptr [0x97375c] */ ST(0) = ST(0) + R_F32((u32)(0x97375cu));
    /* 0074a921: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0074a923: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074a926: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0074a92a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0074a92d: push dword ptr [ecx + 0x88] */ { u32 v = R32((u32)(r_ecx+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a933: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a939: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074a93d: call 0x74a050 */ r_esp -= 4; W32(r_esp, 0x74a942u); f_0074a050();
    /* 0074a942: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a945: ret 4 */ FN_RET(0x0074a8e8); r_esp += 8; return;
}

void f_0074a948(void) /* sub_74A948 */
{
    FN_ENTER(0x0074a948);
    /* 0074a948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074a949: movsx edi, byte ptr [ecx + 0x84] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx+0x84u));
    /* 0074a950: movsx edx, byte ptr [ecx + 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x85u));
    /* 0074a957: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0074a95a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074a95c: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074a95e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074a960: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074a962: add edi, dword ptr [ecx + 0x8c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074a968: mov eax, edi */ r_eax = r_edi;
    /* 0074a96a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074a96b: ret  */ FN_RET(0x0074a948); r_esp += 4; return;
}

void f_0074a96c(void) /* sub_74A96C */
{
    FN_ENTER(0x0074a96c);
    /* 0074a96c: mov dword ptr [0xa9aaec], 0x3f800000 */ W32((u32)(0xa9aaecu), 0x3f800000u);
    /* 0074a976: mov dword ptr [0xa9aaf0], 0x41000000 */ W32((u32)(0xa9aaf0u), 0x41000000u);
    /* 0074a980: mov dword ptr [0xa9aaf4], 0x3fc00000 */ W32((u32)(0xa9aaf4u), 0x3fc00000u);
    /* 0074a98a: ret  */ FN_RET(0x0074a96c); r_esp += 4; return;
}

void f_0074a98c(void) /* sub_74A98C */
{
    FN_ENTER(0x0074a98c);
    /* 0074a98c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a98d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074a98f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074a991: call 0x74a9b0 */ r_esp -= 4; W32(r_esp, 0x74a996u); f_0074a9b0();
    /* 0074a996: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074a99a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074a99c: jne 0x74a9a2 */ if (!fZ) goto L_0074a9a2;
L_0074a99e:; BB(0x0074a99e);
    /* 0074a99e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a99f: ret 4 */ FN_RET(0x0074a98c); r_esp += 8; return;
L_0074a9a2:; BB(0x0074a9a2);
    /* 0074a9a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074a9a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74a9a8u); f_005c2f74();
    /* 0074a9a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074a9a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074a9aa: ret 4 */ FN_RET(0x0074a98c); r_esp += 8; return;
}

void f_0074a9b0(void) /* sub_74A9B0 */
{
    FN_ENTER(0x0074a9b0);
    /* 0074a9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074a9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0074a9b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074a9b5: push 0x8f2734 */ { u32 v = 0x8f2734u; r_esp -= 4; W32(r_esp, v); }
    /* 0074a9ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074a9c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074a9c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074a9c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074a9cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074a9ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074a9d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074a9d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074a9d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074a9da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074a9e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074a9e4: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074a9e7: mov dword ptr [eax], 0xb41c00 */ W32((u32)(r_eax), 0xb41c00u);
    /* 0074a9ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a9ef: je 0x74aa00 */ if (fZ) goto L_0074aa00;
L_0074a9f1:; BB(0x0074a9f1);
    /* 0074a9f1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74a9f6u); f_007127b0();
    /* 0074a9f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074a9f9: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0074aa00:; BB(0x0074aa00);
    /* 0074aa00: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074aa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074aa05: je 0x74aa16 */ if (fZ) goto L_0074aa16;
L_0074aa07:; BB(0x0074aa07);
    /* 0074aa07: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74aa0cu); f_007127b0();
    /* 0074aa0c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074aa0f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0074aa16:; BB(0x0074aa16);
    /* 0074aa16: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074aa19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074aa1b: je 0x74aa2c */ if (fZ) goto L_0074aa2c;
L_0074aa1d:; BB(0x0074aa1d);
    /* 0074aa1d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74aa22u); f_007127b0();
    /* 0074aa22: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074aa25: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0074aa2c:; BB(0x0074aa2c);
    /* 0074aa2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074aa33: mov ecx, eax */ r_ecx = r_eax;
    /* 0074aa35: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74aa3au); f_008171e8();
    /* 0074aa3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074aa3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074aa44: mov esp, ebp */ r_esp = r_ebp;
    /* 0074aa46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aa47: ret  */ FN_RET(0x0074a9b0); r_esp += 4; return;
}

void f_0074aa24(void)
{
    FN_ENTER(0x0074aa24);
    goto L_0074aa24;
L_0074a9ed:; BB(0x0074a9ed);
    /* 0074a9ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074a9ef: je 0x74aa00 */ if (fZ) goto L_0074aa00;
L_0074a9f1:; BB(0x0074a9f1);
    /* 0074a9f1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74a9f6u); f_007127b0();
    /* 0074a9f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074a9f9: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0074aa00:; BB(0x0074aa00);
    /* 0074aa00: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074aa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074aa05: je 0x74aa16 */ if (fZ) goto L_0074aa16;
L_0074aa07:; BB(0x0074aa07);
    /* 0074aa07: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74aa0cu); f_007127b0();
    /* 0074aa0c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074aa0f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0074aa16:; BB(0x0074aa16);
    /* 0074aa16: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074aa19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074aa1b: je 0x74aa2c */ if (fZ) goto L_0074aa2c;
L_0074aa1d:; BB(0x0074aa1d);
    /* 0074aa1d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74aa22u); f_007127b0();
    /* 0074aa22: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0074aa24:; BB(0x0074aa24);
    /* 0074aa24: loopne 0x74a9ed */ r_ecx--; if (r_ecx && !fZ) goto L_0074a9ed;
    /* 0074aa25: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0074aa26: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074aa27: xor byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0074aa29: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0074aa2b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0074aa2c:; BB(0x0074aa2c);
    /* 0074aa2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074aa2d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074aa2e: cld  */ rt_df = 0;
    UNSUP(0x0074aa2f, "falls out of decoded code");
    /* 0074aa33: mov ecx, eax */ r_ecx = r_eax;
    /* 0074aa35: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74aa3au); f_008171e8();
    /* 0074aa3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074aa3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074aa44: mov esp, ebp */ r_esp = r_ebp;
    /* 0074aa46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aa47: ret  */ FN_RET(0x0074aa24); r_esp += 4; return;
}

void f_0074aa48(void) /* sub_74AA48 */
{
    FN_ENTER(0x0074aa48);
    /* 0074aa48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa49: mov ebp, esp */ r_ebp = r_esp;
    /* 0074aa4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa4d: push 0x8f276a */ { u32 v = 0x8f276au; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074aa58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074aa60: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074aa63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074aa66: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074aa69: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074aa6c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074aa6f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074aa72: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074aa75: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074aa78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa79: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074aa7c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074aa7f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74aa84u); f_008193cc();
    /* 0074aa84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074aa8b: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074aa8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074aa91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074aa94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074aa96: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 0074aa99: mov dword ptr [ebx], 0xb41c00 */ W32((u32)(r_ebx), 0xb41c00u);
    /* 0074aa9f: mov eax, dword ptr [0x9f4060] */ r_eax = R32((u32)(0x9f4060u));
    /* 0074aaa4: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0074aaa7: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 0074aaaa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74aaafu); f_0073ec50();
    /* 0074aaaf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074aab2: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074aab5: push 0x9738e0 */ { u32 v = 0x9738e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074aaba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aabb: call 0x74baa4 */ r_esp -= 4; W32(r_esp, 0x74aac0u); f_0074baa4();
    /* 0074aac0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074aac3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074aac6: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0074aac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074aacb: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0074aace: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74aad3u); f_007336fc();
    /* 0074aad3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074aad6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074aad9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074aada: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074aadd: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74aae2u); f_00712624();
    /* 0074aae2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074aae5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074aae8: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074aaef: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074aaf4: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074aafa: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0074ab01: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074ab08: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74ab0du); f_005caba4();
    /* 0074ab0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074ab10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ab13: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0074ab16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ab18: je 0x74ab9c */ if (fZ) goto L_0074ab9c;
L_0074ab1e:; BB(0x0074ab1e);
    /* 0074ab1e: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0074ab25: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0074ab2c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ab2e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74ab33u); f_0073ec50();
    /* 0074ab33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ab34: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074ab37: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ab3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074ab3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ab3e: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x74ab43u); f_00725d18();
    /* 0074ab43: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0074ab4a:; BB(0x0074ab4a);
    /* 0074ab4a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074ab4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074ab50: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0074ab53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074ab5a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ab5c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0074ab5f: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74ab64u); f_007336fc();
    /* 0074ab64: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074ab67: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074ab6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ab6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074ab6e: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74ab73u); f_00712624();
    /* 0074ab73: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074ab76: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074ab79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ab7b: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0074ab7e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0074ab83: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0074ab86: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0074ab89: mov byte ptr [eax + 0x1c], cl */ W8((u32)(r_eax+0x1cu), (u8)r_ecx);
    /* 0074ab8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074ab8f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074ab96: mov esp, ebp */ r_esp = r_ebp;
    /* 0074ab98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ab99: ret 8 */ FN_RET(0x0074aa48); r_esp += 12; return;
L_0074ab9c:; BB(0x0074ab9c);
    /* 0074ab9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074ab9e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074aba1: jmp 0x74ab4a */ goto L_0074ab4a;
}

void f_0074aba4(void) /* sub_74ABA4 */
{
    FN_ENTER(0x0074aba4);
    /* 0074aba4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074aba5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074aba7: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074abaa: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74abafu); f_00719140();
    /* 0074abaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074abb0: movzx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)R8((u32)(r_ebx+0x1cu));
    /* 0074abb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074abb6: jge 0x74abba */ if ((fS==fO)) goto L_0074abba;
L_0074abb8:; BB(0x0074abb8);
    /* 0074abb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074abb9: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074abba:; BB(0x0074abba);
    /* 0074abba: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074abbd: jg 0x74ac64 */ if ((!fZ&&fS==fO)) goto L_0074ac64;
L_0074abc3:; BB(0x0074abc3);
    /* 0074abc3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0074abc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074abc8: je 0x74abe3 */ if (fZ) goto L_0074abe3;
L_0074abca:; BB(0x0074abca);
    /* 0074abca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074abcc: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0074abcf: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x74abd4u); f_00779df0();
    /* 0074abd4: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0074abd7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74abdcu); f_007127b0();
    /* 0074abdc: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
L_0074abe3:; BB(0x0074abe3);
    /* 0074abe3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0074abe6: call 0x725f3c */ r_esp -= 4; W32(r_esp, 0x74abebu); f_00725f3c();
    /* 0074abeb: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0074abee: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0074abf3: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0074abf6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0074abf9: call 0x74bbdc */ r_esp -= 4; W32(r_esp, 0x74abfeu); f_0074bbdc();
    /* 0074abfe: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0074ac01: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074ac08: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074ac0d: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0074ac10: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074ac17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ac19: je 0x74ac22 */ if (fZ) goto L_0074ac22;
L_0074ac1b:; BB(0x0074ac1b);
    /* 0074ac1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ac1d: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74ac22u); f_00760acc();
L_0074ac22:; BB(0x0074ac22);
    /* 0074ac22: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ac27: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0074ac2a: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x74ac2fu); f_00737ab8();
    /* 0074ac2f: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_0074ac33:; BB(0x0074ac33);
    /* 0074ac33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ac35: call 0x74aee0 */ r_esp -= 4; W32(r_esp, 0x74ac3au); f_0074aee0();
    /* 0074ac3a: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0074ac3d: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0074ac44: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074ac46: je 0x74ac56 */ if (fZ) goto L_0074ac56;
L_0074ac48:; BB(0x0074ac48);
    /* 0074ac48: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0074ac4b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0074ac4d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x74ac50u); call_ind(t); }
    /* 0074ac50: mov byte ptr [ebx + 0x1c], 6 */ W8((u32)(r_ebx+0x1cu), 0x6u);
    /* 0074ac54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ac55: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074ac56:; BB(0x0074ac56);
    /* 0074ac56: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ac58: je 0x74abb8 */ if (fZ) goto L_0074abb8;
L_0074ac5e:; BB(0x0074ac5e);
    /* 0074ac5e: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0074ac62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ac63: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074ac64:; BB(0x0074ac64);
    /* 0074ac64: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ac67: je 0x74ac33 */ if (fZ) goto L_0074ac33;
L_0074ac69:; BB(0x0074ac69);
    /* 0074ac69: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ac6c: je 0x74ace7 */ if (fZ) goto L_0074ace7;
L_0074ac6e:; BB(0x0074ac6e);
    /* 0074ac6e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ac71: je 0x74ad1c */ if (fZ) goto L_0074ad1c;
L_0074ac77:; BB(0x0074ac77);
    /* 0074ac77: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ac7a: jne 0x74abb8 */ if (!fZ) goto L_0074abb8;
L_0074ac80:; BB(0x0074ac80);
    /* 0074ac80: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0074ac86: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0074ac89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ac8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ac8d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ac8f: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074ac91: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074ac98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ac99: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74ac9eu); f_007c1160();
    /* 0074ac9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074aca0: je 0x74acba */ if (fZ) goto L_0074acba;
L_0074aca2:; BB(0x0074aca2);
    /* 0074aca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074aca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aca7: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0074acac: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x74acb1u); f_00814298();
    /* 0074acb1: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 0074acb5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074acb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074acb9: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074acba:; BB(0x0074acba);
    /* 0074acba: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074acbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74acc2u); f_0068d5a8();
    /* 0074acc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074acc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074acc5: je 0x74abb8 */ if (fZ) goto L_0074abb8;
L_0074accb:; BB(0x0074accb);
    /* 0074accb: mov ecx, eax */ r_ecx = r_eax;
    /* 0074accd: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x74acd2u); f_0068fb00();
    /* 0074acd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074acd4: je 0x74abb8 */ if (fZ) goto L_0074abb8;
L_0074acda:; BB(0x0074acda);
    /* 0074acda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074acdc: call 0x74ad5c */ r_esp -= 4; W32(r_esp, 0x74ace1u); f_0074ad5c();
    /* 0074ace1: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0074ace5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ace6: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074ace7:; BB(0x0074ace7);
    /* 0074ace7: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0074acea: call 0x737a68 */ r_esp -= 4; W32(r_esp, 0x74acefu); f_00737a68();
    /* 0074acef: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0074acf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074acf4: je 0x74ad45 */ if (fZ) goto L_0074ad45;
L_0074acf6:; BB(0x0074acf6);
    /* 0074acf6: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074acfd: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074ad03: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0074ad06: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0074ad0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ad0f: je 0x74ad18 */ if (fZ) goto L_0074ad18;
L_0074ad11:; BB(0x0074ad11);
    /* 0074ad11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad13: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74ad18u); f_00760acc();
L_0074ad18:; BB(0x0074ad18);
    /* 0074ad18: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
L_0074ad1c:; BB(0x0074ad1c);
    /* 0074ad1c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ad1e: call 0x74aec0 */ r_esp -= 4; W32(r_esp, 0x74ad23u); f_0074aec0();
    /* 0074ad23: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0074ad26: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0074ad2d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ad2f: je 0x74ad37 */ if (fZ) goto L_0074ad37;
L_0074ad31:; BB(0x0074ad31);
    /* 0074ad31: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 0074ad35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ad36: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074ad37:; BB(0x0074ad37);
    /* 0074ad37: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ad39: je 0x74abb8 */ if (fZ) goto L_0074abb8;
L_0074ad3f:; BB(0x0074ad3f);
    /* 0074ad3f: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 0074ad43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ad44: ret  */ FN_RET(0x0074aba4); r_esp += 4; return;
L_0074ad45:; BB(0x0074ad45);
    /* 0074ad45: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0074ad48: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74ad4du); f_00737d90();
    /* 0074ad4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ad50: call 0x74ae04 */ r_esp -= 4; W32(r_esp, 0x74ad55u); f_0074ae04();
    /* 0074ad55: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0074ad58: jmp 0x74acf6 */ goto L_0074acf6;
}

void f_0074ad5c(void) /* sub_74AD5C */
{
    FN_ENTER(0x0074ad5c);
    /* 0074ad5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad5e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ad61: mov edi, ecx */ r_edi = r_ecx;
    /* 0074ad63: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0074ad66: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74ad6bu); f_00737d90();
    /* 0074ad6b: mov ebp, eax */ r_ebp = r_eax;
    /* 0074ad6d: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0074ad70: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74ad75u); f_00737d90();
    /* 0074ad75: mov edx, eax */ r_edx = r_eax;
    /* 0074ad77: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0074ad7a: mov eax, ebp */ r_eax = r_ebp;
    /* 0074ad7c: call 0x74ad94 */ r_esp -= 4; W32(r_esp, 0x74ad81u); f_0074ad94();
    /* 0074ad81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074ad84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ad85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ad86: ret  */ FN_RET(0x0074ad5c); r_esp += 4; return;
}

void f_0074ad88(void) /* sub_74AD88 */
{
    FN_ENTER(0x0074ad88);
    /* 0074ad88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074ad8c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0074ad90: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0074ad94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad98: mov esi, edx */ r_esi = r_edx;
    /* 0074ad9a: mov edi, eax */ r_edi = r_eax;
    /* 0074ad9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad9d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ada2u); f_0068d5a8();
    /* 0074ada2: mov ebp, eax */ r_ebp = r_eax;
    /* 0074ada4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ada7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ada9: je 0x74adf0 */ if (fZ) goto L_0074adf0;
L_0074adab:; BB(0x0074adab);
    /* 0074adab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adac: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0074adb2: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74adb7u); f_0069792c();
    /* 0074adb7: mov ebx, eax */ r_ebx = r_eax;
    /* 0074adb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adba: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74adbfu); f_005c5528();
    /* 0074adbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074adc0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074adc2: je 0x74adf5 */ if (fZ) goto L_0074adf5;
L_0074adc4:; BB(0x0074adc4);
    /* 0074adc4: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
    /* 0074adca: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074adcc: je 0x74add6 */ if (fZ) goto L_0074add6;
L_0074adce:; BB(0x0074adce);
    /* 0074adce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074add1: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74add6u); f_0068dfd8();
L_0074add6:; BB(0x0074add6);
    /* 0074add6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074add8: je 0x74ade7 */ if (fZ) goto L_0074ade7;
L_0074adda:; BB(0x0074adda);
    /* 0074adda: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ade0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ade2: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74ade7u); f_0068dfd8();
L_0074ade7:; BB(0x0074ade7);
    /* 0074ade7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ade8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ade9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074adeb: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x74adf0u); f_0068de54();
L_0074adf0:; BB(0x0074adf0);
    /* 0074adf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074adf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074adf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074adf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074adf4: ret  */ FN_RET(0x0074ad88); r_esp += 4; return;
L_0074adf5:; BB(0x0074adf5);
    /* 0074adf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adf6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074adf8: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74adfdu); f_0068dfd8();
    /* 0074adfd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074adfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074adff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ae00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ae01: ret  */ FN_RET(0x0074ad88); r_esp += 4; return;
}

void f_0074ad94(void)
{
    FN_ENTER(0x0074ad94);
    /* 0074ad94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad98: mov esi, edx */ r_esi = r_edx;
    /* 0074ad9a: mov edi, eax */ r_edi = r_eax;
    /* 0074ad9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ad9d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ada2u); f_0068d5a8();
    /* 0074ada2: mov ebp, eax */ r_ebp = r_eax;
    /* 0074ada4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ada7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ada9: je 0x74adf0 */ if (fZ) goto L_0074adf0;
L_0074adab:; BB(0x0074adab);
    /* 0074adab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adac: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0074adb2: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74adb7u); f_0069792c();
    /* 0074adb7: mov ebx, eax */ r_ebx = r_eax;
    /* 0074adb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adba: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74adbfu); f_005c5528();
    /* 0074adbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074adc0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074adc2: je 0x74adf5 */ if (fZ) goto L_0074adf5;
L_0074adc4:; BB(0x0074adc4);
    /* 0074adc4: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
    /* 0074adca: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074adcc: je 0x74add6 */ if (fZ) goto L_0074add6;
L_0074adce:; BB(0x0074adce);
    /* 0074adce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074add1: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74add6u); f_0068dfd8();
L_0074add6:; BB(0x0074add6);
    /* 0074add6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074add8: je 0x74ade7 */ if (fZ) goto L_0074ade7;
L_0074adda:; BB(0x0074adda);
    /* 0074adda: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ade0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ade2: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74ade7u); f_0068dfd8();
L_0074ade7:; BB(0x0074ade7);
    /* 0074ade7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ade8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ade9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074adeb: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x74adf0u); f_0068de54();
L_0074adf0:; BB(0x0074adf0);
    /* 0074adf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074adf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074adf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074adf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074adf4: ret  */ FN_RET(0x0074ad94); r_esp += 4; return;
L_0074adf5:; BB(0x0074adf5);
    /* 0074adf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074adf6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074adf8: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x74adfdu); f_0068dfd8();
    /* 0074adfd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074adfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074adff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ae00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ae01: ret  */ FN_RET(0x0074ad94); r_esp += 4; return;
}

void f_0074ae04(void) /* sub_74AE04 */
{
    FN_ENTER(0x0074ae04);
    /* 0074ae04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae07: mov edi, ecx */ r_edi = r_ecx;
    /* 0074ae09: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0074ae0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae0f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74ae14u); f_0073ec50();
    /* 0074ae14: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ae17: push 0x973918 */ { u32 v = 0x973918u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae1d: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x74ae22u); f_0074aff8();
    /* 0074ae22: mov ebp, eax */ r_ebp = r_eax;
    /* 0074ae24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ae27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae29: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074ae2c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74ae31u); f_007336fc();
    /* 0074ae31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074ae35: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae37: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74ae3cu); f_00712624();
    /* 0074ae3c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae3e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ae43u); f_0079317c();
    /* 0074ae43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ae44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae47: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x74ae4cu); f_00737ae4();
    /* 0074ae4c: movzx edx, word ptr [ebp + 0x84] */ r_edx = (u32)R16((u32)(r_ebp+0x84u));
    /* 0074ae53: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074ae59: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 0074ae60: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 0074ae63: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0074ae66: ja 0x74aeaf */ if ((!fC&&!fZ)) goto L_0074aeaf;
L_0074ae68:; BB(0x0074ae68);
    /* 0074ae68: mov edx, dword ptr [esi*4 + 0x9738e4] */ r_edx = R32((u32)(r_esi*4+0x9738e4u));
    /* 0074ae6f: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0074aeaf:; BB(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074ae04); r_esp += 8; return;
}

void f_0074ae71(void)
{
    FN_ENTER(0x0074ae71);
    /* 0074ae71: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae75: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae77: call 0x74b41c */ r_esp -= 4; W32(r_esp, 0x74ae7cu); f_0074b41c();
    /* 0074ae7c: jmp 0x74aeaf */ goto L_0074aeaf;
L_0074aeaf:; BB(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074ae71); r_esp += 8; return;
}

void f_0074ae7e(void)
{
    FN_ENTER(0x0074ae7e);
    /* 0074ae7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae82: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x74ae87u); f_0074b340();
    /* 0074ae87: jmp 0x74aeaf */ goto L_0074aeaf;
L_0074aeaf:; BB(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074ae7e); r_esp += 8; return;
}

void f_0074ae89(void)
{
    FN_ENTER(0x0074ae89);
    /* 0074ae89: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae8f: call 0x74b41c */ r_esp -= 4; W32(r_esp, 0x74ae94u); f_0074b41c();
    /* 0074ae94: jmp 0x74aeaf */ goto L_0074aeaf;
L_0074aeaf:; BB(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074ae89); r_esp += 8; return;
}

void f_0074ae96(void)
{
    FN_ENTER(0x0074ae96);
    /* 0074ae96: mov edx, 1 */ r_edx = 0x1u;
    /* 0074ae9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ae9d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ae9f: call 0x74b41c */ r_esp -= 4; W32(r_esp, 0x74aea4u); f_0074b41c();
    /* 0074aea4: jmp 0x74aeaf */ goto L_0074aeaf;
L_0074aeaf:; BB(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074ae96); r_esp += 8; return;
}

void f_0074aea6(void)
{
    FN_ENTER(0x0074aea6);
    /* 0074aea6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074aea8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeaa: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x74aeafu); f_0074b340();
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074aea6); r_esp += 8; return;
}

void f_0074aeaf(void)
{
    FN_ENTER(0x0074aeaf);
    /* 0074aeaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074aeb1: call 0x74b8c4 */ r_esp -= 4; W32(r_esp, 0x74aeb6u); f_0074b8c4();
    /* 0074aeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 0074aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aeb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074aeba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074aebb: ret 4 */ FN_RET(0x0074aeaf); r_esp += 8; return;
}

void f_0074aec0(void) /* sub_74AEC0 */
{
    FN_ENTER(0x0074aec0);
    /* 0074aec0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074aec1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074aec3: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0074aec6: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74aecbu); f_00737d90();
    /* 0074aecb: cmp eax, dword ptr [ebx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074aece: jne 0x74aed2 */ if (!fZ) goto L_0074aed2;
L_0074aed0:; BB(0x0074aed0);
    /* 0074aed0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074aed1: ret  */ FN_RET(0x0074aec0); r_esp += 4; return;
L_0074aed2:; BB(0x0074aed2);
    /* 0074aed2: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0074aed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aed6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0074aed9: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x74aedeu); f_0072606c();
    /* 0074aede: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074aedf: ret  */ FN_RET(0x0074aec0); r_esp += 4; return;
}

void f_0074aee0(void) /* sub_74AEE0 */
{
    FN_ENTER(0x0074aee0);
    /* 0074aee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074aee1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074aee2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074aee4: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074aee7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74aeecu); f_0068d5a8();
    /* 0074aeec: mov esi, eax */ r_esi = r_eax;
    /* 0074aeee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074aef1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074aef3: je 0x74af30 */ if (fZ) goto L_0074af30;
L_0074aef5:; BB(0x0074aef5);
    /* 0074aef5: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074aef8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74aefdu); f_00737d90();
    /* 0074aefd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074aefe: add esi, 0xdf8 */ {  u32 a = r_esi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074af04: mov ecx, esi */ r_ecx = r_esi;
    /* 0074af06: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x74af0bu); f_0069792c();
    /* 0074af0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074af0d: jne 0x74af16 */ if (!fZ) goto L_0074af16;
L_0074af0f:; BB(0x0074af0f);
    /* 0074af0f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0074af14: jmp 0x74af1c */ goto L_0074af1c;
L_0074af16:; BB(0x0074af16);
    /* 0074af16: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
L_0074af1c:; BB(0x0074af1c);
    /* 0074af1c: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074af1f: jne 0x74af24 */ if (!fZ) goto L_0074af24;
L_0074af21:; BB(0x0074af21);
    /* 0074af21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074af22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074af23: ret  */ FN_RET(0x0074aee0); r_esp += 4; return;
L_0074af24:; BB(0x0074af24);
    /* 0074af24: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074af27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074af28: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0074af2b: call 0x725ff0 */ r_esp -= 4; W32(r_esp, 0x74af30u); f_00725ff0();
L_0074af30:; BB(0x0074af30);
    /* 0074af30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074af31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074af32: ret  */ FN_RET(0x0074aee0); r_esp += 4; return;
}

void f_0074af34(void) /* sub_74AF34 */
{
    FN_ENTER(0x0074af34);
    /* 0074af34: mov dword ptr [0xa9aafc], 0x3f800000 */ W32((u32)(0xa9aafcu), 0x3f800000u);
    /* 0074af3e: mov dword ptr [0xa9ab00], 0x41000000 */ W32((u32)(0xa9ab00u), 0x41000000u);
    /* 0074af48: mov dword ptr [0xa9ab04], 0x3fc00000 */ W32((u32)(0xa9ab04u), 0x3fc00000u);
    /* 0074af52: ret  */ FN_RET(0x0074af34); r_esp += 4; return;
}

void f_0074af54(void) /* sub_74AF54 */
{
    FN_ENTER(0x0074af54);
    /* 0074af54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074af55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074af57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074af59: call 0x74af78 */ r_esp -= 4; W32(r_esp, 0x74af5eu); f_0074af78();
    /* 0074af5e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074af62: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074af64: jne 0x74af6a */ if (!fZ) goto L_0074af6a;
L_0074af66:; BB(0x0074af66);
    /* 0074af66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074af67: ret 4 */ FN_RET(0x0074af54); r_esp += 8; return;
L_0074af6a:; BB(0x0074af6a);
    /* 0074af6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074af6b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74af70u); f_005c2f74();
    /* 0074af70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074af71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074af72: ret 4 */ FN_RET(0x0074af54); r_esp += 8; return;
}

void f_0074af78(void) /* sub_74AF78 */
{
    FN_ENTER(0x0074af78);
    /* 0074af78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074af79: mov ebp, esp */ r_ebp = r_esp;
    /* 0074af7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074af7d: push 0x8f2784 */ { u32 v = 0x8f2784u; r_esp -= 4; W32(r_esp, v); }
    /* 0074af82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074af88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074af89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074af90: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074af93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074af96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074af99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074af9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074af9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074afa2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074afa9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074afac: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0074afb0: mov dword ptr [eax], 0xb41c88 */ W32((u32)(r_eax), 0xb41c88u);
    /* 0074afb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074afb7: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x74afbcu); f_00716ba0();
    /* 0074afbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074afbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074afbf: jne 0x74afdb */ if (!fZ) goto L_0074afdb;
L_0074afc1:; BB(0x0074afc1);
    /* 0074afc1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074afc4: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 0074afc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074afc9: call 0x716c08 */ r_esp -= 4; W32(r_esp, 0x74afceu); f_00716c08();
    /* 0074afce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074afcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074afd1: jne 0x74afdb */ if (!fZ) goto L_0074afdb;
L_0074afd3:; BB(0x0074afd3);
    /* 0074afd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074afd5: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x74afdau); f_00791748();
    /* 0074afda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0074afdb:; BB(0x0074afdb);
    /* 0074afdb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074afe2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074afe5: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x74afeau); f_007366bc();
    /* 0074afea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074afed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074aff4: mov esp, ebp */ r_esp = r_ebp;
    /* 0074aff6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074aff7: ret  */ FN_RET(0x0074af78); r_esp += 4; return;
}

void f_0074aff8(void) /* sub_74AFF8 */
{
    FN_ENTER(0x0074aff8);
    /* 0074aff8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074aff9: mov ebp, esp */ r_ebp = r_esp;
    /* 0074affb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074affd: push 0x8f27ac */ { u32 v = 0x8f27acu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b002: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074b008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074b009: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074b010: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074b013: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074b016: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074b019: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074b01c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074b01f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074b021: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b024: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x74b029u); f_00737f80();
    /* 0074b029: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074b030: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0074b035: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74b03au); f_005caba4();
    /* 0074b03a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074b03d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074b040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074b042: je 0x74b078 */ if (fZ) goto L_0074b078;
L_0074b044:; BB(0x0074b044);
    /* 0074b044: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0074b04b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074b052: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b055: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074b058: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074b05b: call 0x74b07c */ r_esp -= 4; W32(r_esp, 0x74b060u); f_0074b07c();
    /* 0074b060: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074b063: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074b06a:; BB(0x0074b06a);
    /* 0074b06a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074b06d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074b074: mov esp, ebp */ r_esp = r_ebp;
    /* 0074b076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074b077: ret  */ FN_RET(0x0074aff8); r_esp += 4; return;
L_0074b078:; BB(0x0074b078);
    /* 0074b078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074b07a: jmp 0x74b06a */ goto L_0074b06a;
}

