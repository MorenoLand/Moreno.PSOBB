#include "protos.h"

void f_0073a020(void) /* sub_73A020 */
{
    FN_ENTER(0x0073a020);
    /* 0073a020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a021: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a023: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a025: push 0x8f1b7c */ { u32 v = 0x8f1b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a02a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a031: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a038: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a03b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a03e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073a041: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073a044: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073a047: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073a04a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a04d: mov dword ptr [ecx], 0xb40c90 */ W32((u32)(r_ecx), 0xb40c90u);
    /* 0073a053: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073a05a: call 0x73fd00 */ r_esp -= 4; W32(r_esp, 0x73a05fu); f_0073fd00();
    /* 0073a05f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a062: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a069: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a06b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a06c: ret  */ FN_RET(0x0073a020); r_esp += 4; return;
}

void f_0073a070(void) /* sub_73A070 */
{
    FN_ENTER(0x0073a070);
    /* 0073a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a075: push 0x8f1ba4 */ { u32 v = 0x8f1ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a088: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a08b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a08e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073a091: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073a094: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073a097: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a09c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073a0a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73a0a8u); f_005caba4();
    /* 0073a0a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a0a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073a0ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a0ae: je 0x73a0e1 */ if (fZ) goto L_0073a0e1;
L_0073a0b0:; BB(0x0073a0b0);
    /* 0073a0b0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073a0b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a0be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a0c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a0c4: call 0x73a0e8 */ r_esp -= 4; W32(r_esp, 0x73a0c9u); f_0073a0e8();
    /* 0073a0c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a0cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073a0d3:; BB(0x0073a0d3);
    /* 0073a0d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a0d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a0dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a0df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a0e0: ret  */ FN_RET(0x0073a070); r_esp += 4; return;
L_0073a0e1:; BB(0x0073a0e1);
    /* 0073a0e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a0e3: jmp 0x73a0d3 */ goto L_0073a0d3;
}

void f_0073a0e8(void) /* sub_73A0E8 */
{
    FN_ENTER(0x0073a0e8);
    /* 0073a0e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a0e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073a0eb: push 0xc1 */ { u32 v = 0xc1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a0f0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73a0f5u); f_0073ec50();
    /* 0073a0f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a0f6: push 0x9f3190 */ { u32 v = 0x9f3190u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a0fb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a0fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073a0ff: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a104: call 0x73fd50 */ r_esp -= 4; W32(r_esp, 0x73a109u); f_0073fd50();
    /* 0073a109: mov dword ptr [ebx], 0xb40c90 */ W32((u32)(r_ebx), 0xb40c90u);
    /* 0073a10f: mov eax, ebx */ r_eax = r_ebx;
    /* 0073a111: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a112: ret 4 */ FN_RET(0x0073a0e8); r_esp += 8; return;
}

void f_0073a118(void) /* sub_73A118 */
{
    FN_ENTER(0x0073a118);
    /* 0073a118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a119: mov esi, ecx */ r_esi = r_ecx;
    /* 0073a11b: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0073a122: cmp dx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0073a129: jl 0x73a12f */ if ((fS!=fO)) goto L_0073a12f;
L_0073a12b:; BB(0x0073a12b);
    /* 0073a12b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073a12c: ret 0x24 */ FN_RET(0x0073a118); r_esp += 40; return;
L_0073a12f:; BB(0x0073a12f);
    /* 0073a12f: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a133: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a137: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a13b: movsx ecx, byte ptr [esp + 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x28u));
    /* 0073a140: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a141: movsx ecx, byte ptr [esp + 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x28u));
    /* 0073a146: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a147: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0073a14a: movsx ecx, byte ptr [esp + 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x28u));
    /* 0073a14f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a150: movsx ecx, byte ptr [esp + 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x28u));
    /* 0073a155: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a156: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a15a: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a15e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0073a161: call 0x72e42c */ r_esp -= 4; W32(r_esp, 0x73a166u); f_0072e42c();
    /* 0073a166: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073a16e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073a16f: ret 0x24 */ FN_RET(0x0073a118); r_esp += 40; return;
}

void f_0073a174(void) /* sub_73A174 */
{
    FN_ENTER(0x0073a174);
    /* 0073a174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a176: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a177: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a178: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a17b: mov esi, ecx */ r_esi = r_ecx;
    /* 0073a17d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a17f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0073a183: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0073a187: mov eax, dword ptr [0x9f3180] */ r_eax = R32((u32)(0x9f3180u));
    /* 0073a18c: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0073a18f: mov word ptr [esi + 0x20], dx */ W16((u32)(r_esi+0x20u), (u16)r_edx);
    /* 0073a193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073a195: mov word ptr [esi + 0x86], ax */ W16((u32)(r_esi+0x86u), (u16)r_eax);
    /* 0073a19c: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 0073a1a3: mov word ptr [esi + 0x8a], di */ W16((u32)(r_esi+0x8au), (u16)r_edi);
    /* 0073a1aa: mov word ptr [esi + 0x8c], ax */ W16((u32)(r_esi+0x8cu), (u16)r_eax);
    /* 0073a1b1: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 0073a1b7: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0073a1be: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0073a1c1: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0073a1c4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073a1c6: jle 0x73a2bc */ if ((fZ||fS!=fO)) goto L_0073a2bc;
L_0073a1cc:; BB(0x0073a1cc);
    /* 0073a1cc: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a1cf: jl 0x73a299 */ if ((fS!=fO)) goto L_0073a299;
L_0073a1d5:; BB(0x0073a1d5);
    /* 0073a1d5: lea ebx, [edi - 6] */ r_ebx = (u32)(r_edi+0xfffffffau);
    /* 0073a1d8: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0073a1dc: lea ebx, [ebp + ebp*4] */ r_ebx = (u32)(r_ebp+r_ebp*4);
    /* 0073a1e0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073a1e2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073a1e4: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 0073a1e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073a1ea: lea eax, [edx + edx + 0x14] */ r_eax = (u32)(r_edx+r_edx+0x14u);
    /* 0073a1ee: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0073a1f2: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0073a1f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a1f8: lea ecx, [eax + eax + 0x28] */ r_ecx = (u32)(r_eax+r_eax+0x28u);
    /* 0073a1fc: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0073a200: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a202: lea edx, [eax + eax + 0x3c] */ r_edx = (u32)(r_eax+r_eax+0x3cu);
    /* 0073a206: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0073a20a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a20c: lea eax, [eax + eax + 0x50] */ r_eax = (u32)(r_eax+r_eax+0x50u);
L_0073a210:; BB(0x0073a210);
    /* 0073a210: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0073a213: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 0073a216: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0073a21a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0073a21d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0073a220: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0073a223: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 0073a226: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0073a22a: mov ebx, dword ptr [ebx + ebp*4 + 4] */ r_ebx = R32((u32)(r_ebx+r_ebp*4+0x4u));
    /* 0073a22e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0073a232: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073a236: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0073a239: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 0073a23c: mov ebx, dword ptr [ebx + ebp*4 + 8] */ r_ebx = R32((u32)(r_ebx+r_ebp*4+0x8u));
    /* 0073a240: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0073a244: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073a248: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0073a24b: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 0073a24e: mov ebx, dword ptr [ebx + ebp*4 + 0xc] */ r_ebx = R32((u32)(r_ebx+r_ebp*4+0xcu));
    /* 0073a252: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0073a256: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073a25a: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0073a25d: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 0073a260: mov ebx, dword ptr [ebx + ebp*4 + 0x10] */ r_ebx = R32((u32)(r_ebx+r_ebp*4+0x10u));
    /* 0073a264: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073a268: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073a26c: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0073a26f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0073a273: add ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073a276: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0073a279: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0073a27d: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073a280: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0073a284: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073a287: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a28a: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a28d: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a28f: jle 0x73a210 */ if ((fZ||fS!=fO)) goto L_0073a210;
L_0073a295:; BB(0x0073a295);
    /* 0073a295: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_0073a299:; BB(0x0073a299);
    /* 0073a299: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0073a29d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a29f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0073a2a1:; BB(0x0073a2a1);
    /* 0073a2a1: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0073a2a4: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 0073a2a7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073a2ab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073a2af: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0073a2b2: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a2b5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a2b8: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a2ba: jl 0x73a2a1 */ if ((fS!=fO)) goto L_0073a2a1;
L_0073a2bc:; BB(0x0073a2bc);
    /* 0073a2bc: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073a2bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a2c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a2c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073a2c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073a2c3: ret 8 */ FN_RET(0x0073a174); r_esp += 12; return;
}

void f_0073a2c8(void) /* sub_73A2C8 */
{
    FN_ENTER(0x0073a2c8);
    /* 0073a2c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073a2cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073a2cd: call 0x73a2ec */ r_esp -= 4; W32(r_esp, 0x73a2d2u); f_0073a2ec();
    /* 0073a2d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073a2d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a2d8: jne 0x73a2de */ if (!fZ) goto L_0073a2de;
L_0073a2da:; BB(0x0073a2da);
    /* 0073a2da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a2db: ret 4 */ FN_RET(0x0073a2c8); r_esp += 8; return;
L_0073a2de:; BB(0x0073a2de);
    /* 0073a2de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73a2e4u); f_005c2f74();
    /* 0073a2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a2e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a2e6: ret 4 */ FN_RET(0x0073a2c8); r_esp += 8; return;
}

void f_0073a2ec(void) /* sub_73A2EC */
{
    FN_ENTER(0x0073a2ec);
    /* 0073a2ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a2ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2f1: push 0x8f1bc0 */ { u32 v = 0x8f1bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a2fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a304: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a307: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a30a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073a30d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073a310: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073a313: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073a316: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a319: mov dword ptr [ecx], 0xb40d20 */ W32((u32)(r_ecx), 0xb40d20u);
    /* 0073a31f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073a326: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x73a32bu); f_00710c28();
    /* 0073a32b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a32e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a335: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a338: ret  */ FN_RET(0x0073a2ec); r_esp += 4; return;
}

void f_0073a33c(void) /* sub_73A33C */
{
    FN_ENTER(0x0073a33c);
    /* 0073a33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a33d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a33f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a341: push 0x8f1be8 */ { u32 v = 0x8f1be8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a34d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a354: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a35a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073a35d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073a360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073a363: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a365: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073a36c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73a371u); f_005caba4();
    /* 0073a371: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a372: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073a375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a377: je 0x73a3c5 */ if (fZ) goto L_0073a3c5;
L_0073a379:; BB(0x0073a379);
    /* 0073a379: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073a380: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a387: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073a389: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73a38eu); f_0073ec50();
    /* 0073a38e: mov ebx, eax */ r_ebx = r_eax;
    /* 0073a390: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a395: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73a39au); f_0079317c();
    /* 0073a39a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073a39d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a3a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3a1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a3a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3a5: call 0x73a3cc */ r_esp -= 4; W32(r_esp, 0x73a3aau); f_0073a3cc();
    /* 0073a3aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a3ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073a3b4:; BB(0x0073a3b4);
    /* 0073a3b4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a3b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a3ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a3c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a3c4: ret  */ FN_RET(0x0073a33c); r_esp += 4; return;
L_0073a3c5:; BB(0x0073a3c5);
    /* 0073a3c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a3c7: jmp 0x73a3b4 */ goto L_0073a3b4;
}

void f_0073a3cc(void) /* sub_73A3CC */
{
    FN_ENTER(0x0073a3cc);
    /* 0073a3cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a3cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3d1: push 0x8f1c04 */ { u32 v = 0x8f1c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a3dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a3e4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a3e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a3ea: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073a3ed: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073a3f0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073a3f3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0073a3f6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a3f9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0073a3fc: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0073a3ff: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0073a402: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073a405: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0073a408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a409: push 0x9f3220 */ { u32 v = 0x9f3220u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a40e: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x73a413u); f_00710d30();
    /* 0073a413: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a41a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a41d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a420: mov dword ptr [ecx], 0xb40d20 */ W32((u32)(r_ecx), 0xb40d20u);
    /* 0073a426: mov eax, dword ptr [0x9f321c] */ r_eax = R32((u32)(0x9f321cu));
    /* 0073a42b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073a42e: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0073a431: call 0x73a4cc */ r_esp -= 4; W32(r_esp, 0x73a436u); f_0073a4cc();
    /* 0073a436: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a439: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0073a43c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a43e: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0073a441: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0073a444: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073a447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a448: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0073a44a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73a44fu); f_0072db60();
    /* 0073a44f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a452: push dword ptr [eax + 0x68] */ { u32 v = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a455: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073a457: call 0x72d0f4 */ r_esp -= 4; W32(r_esp, 0x73a45cu); f_0072d0f4();
    /* 0073a45c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a45f: fld dword ptr [0x971c5c] */ FPUSH(R_F32((u32)(0x971c5cu)));
    /* 0073a465: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0073a468: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0073a46b: mov ecx, eax */ r_ecx = r_eax;
    /* 0073a46d: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x73a472u); f_00710f64();
    /* 0073a472: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a475: fld dword ptr [0x971c58] */ FPUSH(R_F32((u32)(0x971c58u)));
    /* 0073a47b: fadd dword ptr [eax + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x48u));
    /* 0073a47e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a47f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073a482: call 0x760aac */ r_esp -= 4; W32(r_esp, 0x73a487u); f_00760aac();
    /* 0073a487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a488: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073a48b: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0073a490: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 0073a493: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073a496: jle 0x73a4a8 */ if ((fZ||fS!=fO)) goto L_0073a4a8;
L_0073a498:; BB(0x0073a498);
    /* 0073a498: mov dword ptr [edx + 0x6c], 0x3f400000 */ W32((u32)(r_edx+0x6cu), 0x3f400000u);
    /* 0073a49f: mov dword ptr [edx + 0x70], 0x3f400000 */ W32((u32)(r_edx+0x70u), 0x3f400000u);
    /* 0073a4a6: jmp 0x73a4b6 */ goto L_0073a4b6;
L_0073a4a8:; BB(0x0073a4a8);
    /* 0073a4a8: mov dword ptr [edx + 0x6c], 0x3f800000 */ W32((u32)(r_edx+0x6cu), 0x3f800000u);
    /* 0073a4af: mov dword ptr [edx + 0x70], 0x3f800000 */ W32((u32)(r_edx+0x70u), 0x3f800000u);
L_0073a4b6:; BB(0x0073a4b6);
    /* 0073a4b6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073a4b9: mov eax, edx */ r_eax = r_edx;
    /* 0073a4bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a4be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a4c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a4c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a4c8: ret 0xc */ FN_RET(0x0073a3cc); r_esp += 16; return;
}

void f_0073a4cc(void) /* sub_73A4CC */
{
    FN_ENTER(0x0073a4cc);
    /* 0073a4cc: push dword ptr [ecx + 0x64] */ { u32 v = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a4cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x73a4d4u); f_0068d5a8();
    /* 0073a4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a4d7: je 0x73a4e7 */ if (fZ) goto L_0073a4e7;
L_0073a4d9:; BB(0x0073a4d9);
    /* 0073a4d9: mov eax, dword ptr [eax + 0x2b4] */ r_eax = R32((u32)(r_eax+0x2b4u));
    /* 0073a4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a4e1: je 0x73a4e7 */ if (fZ) goto L_0073a4e7;
L_0073a4e3:; BB(0x0073a4e3);
    /* 0073a4e3: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0073a4e6: ret  */ FN_RET(0x0073a4cc); r_esp += 4; return;
L_0073a4e7:; BB(0x0073a4e7);
    /* 0073a4e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a4e9: ret  */ FN_RET(0x0073a4cc); r_esp += 4; return;
}

void f_0073a4ec(void) /* sub_73A4EC */
{
    FN_ENTER(0x0073a4ec);
    /* 0073a4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a4ed: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073a4ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073a4f1: call 0x73a4cc */ r_esp -= 4; W32(r_esp, 0x73a4f6u); f_0073a4cc();
    /* 0073a4f6: cmp eax, dword ptr [ebp + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a4f9: je 0x73a50f */ if (fZ) goto L_0073a50f;
L_0073a4fb:; BB(0x0073a4fb);
    /* 0073a4fb: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0073a4fe: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a504: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 0073a507: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0073a50a: call 0x72d088 */ r_esp -= 4; W32(r_esp, 0x73a50fu); f_0072d088();
L_0073a50f:; BB(0x0073a50f);
    /* 0073a50f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073a511: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73a516u); f_00710db4();
    /* 0073a516: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0073a519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a51a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073a51c: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73a521u); f_0072a5ec();
    /* 0073a521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a522: ret  */ FN_RET(0x0073a4ec); r_esp += 4; return;
}

void f_0073a524(void) /* sub_73A524 */
{
    FN_ENTER(0x0073a524);
    /* 0073a524: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a525: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a526: mov esi, ecx */ r_esi = r_ecx;
    /* 0073a528: lea eax, [esi + 0x6c] */ r_eax = (u32)(r_esi+0x6cu);
    /* 0073a52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a52c: mov ecx, esi */ r_ecx = r_esi;
    /* 0073a52e: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x73a533u); f_00712658();
    /* 0073a533: mov ebp, eax */ r_ebp = r_eax;
    /* 0073a535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a536: mov ecx, esi */ r_ecx = r_esi;
    /* 0073a538: call 0x71b7a4 */ r_esp -= 4; W32(r_esp, 0x73a53du); f_0071b7a4();
    /* 0073a53d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a53e: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0073a541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a542: mov ecx, esi */ r_ecx = r_esi;
    /* 0073a544: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73a549u); f_0072a648();
    /* 0073a549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a54a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073a54b: ret  */ FN_RET(0x0073a524); r_esp += 4; return;
}

void f_0073a54c(void) /* sub_73A54C */
{
    FN_ENTER(0x0073a54c);
    /* 0073a54c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073a550: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0073a553: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0073a556: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0073a559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a55a: call 0x72d0f4 */ r_esp -= 4; W32(r_esp, 0x73a55fu); f_0072d0f4();
    /* 0073a55f: ret 4 */ FN_RET(0x0073a54c); r_esp += 8; return;
}

void f_0073a564(void) /* sub_73A564 */
{
    FN_ENTER(0x0073a564);
    /* 0073a564: mov dword ptr [0xa9a8ec], 0x3f800000 */ W32((u32)(0xa9a8ecu), 0x3f800000u);
    /* 0073a56e: mov dword ptr [0xa9a8f0], 0x41000000 */ W32((u32)(0xa9a8f0u), 0x41000000u);
    /* 0073a578: mov dword ptr [0xa9a8f4], 0x3fc00000 */ W32((u32)(0xa9a8f4u), 0x3fc00000u);
    /* 0073a582: ret  */ FN_RET(0x0073a564); r_esp += 4; return;
}

void f_0073a584(void) /* sub_73A584 */
{
    FN_ENTER(0x0073a584);
    /* 0073a584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a585: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073a587: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073a589: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x73a58eu); f_0073a5a8();
    /* 0073a58e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073a592: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a594: jne 0x73a59a */ if (!fZ) goto L_0073a59a;
L_0073a596:; BB(0x0073a596);
    /* 0073a596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a597: ret 4 */ FN_RET(0x0073a584); r_esp += 8; return;
L_0073a59a:; BB(0x0073a59a);
    /* 0073a59a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a59b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73a5a0u); f_005c2f74();
    /* 0073a5a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a5a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a5a2: ret 4 */ FN_RET(0x0073a584); r_esp += 8; return;
}

void f_0073a5a8(void) /* sub_73A5A8 */
{
    FN_ENTER(0x0073a5a8);
    /* 0073a5a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a5a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a5ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a5ad: push 0x8f1c20 */ { u32 v = 0x8f1c20u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a5b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a5b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a5b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a5c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a5c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a5c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073a5c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073a5cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073a5cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073a5d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a5d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a5dc: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0073a5e2: mov dword ptr [ecx], 0xb40de0 */ W32((u32)(r_ecx), 0xb40de0u);
    /* 0073a5e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a5ea: je 0x73a5f6 */ if (fZ) goto L_0073a5f6;
L_0073a5ec:; BB(0x0073a5ec);
    /* 0073a5ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a5ed: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x73a5f2u); f_00857e98();
    /* 0073a5f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a5f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0073a5f6:; BB(0x0073a5f6);
    /* 0073a5f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073a5fd: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x73a602u); f_00710788();
    /* 0073a602: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a605: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a60c: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a60f: ret  */ FN_RET(0x0073a5a8); r_esp += 4; return;
}

void f_0073a610(void) /* sub_73A610 */
{
    FN_ENTER(0x0073a610);
    /* 0073a610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a611: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a615: push 0x8f1c3c */ { u32 v = 0x8f1c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a61a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a628: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a62b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a62e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073a631: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073a634: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073a637: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073a63a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a63d: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0073a641: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0073a644: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a645: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073a648: push 0x9f3268 */ { u32 v = 0x9f3268u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a64d: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73a652u); f_007108c4();
    /* 0073a652: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a659: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073a65c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a65f: mov dword ptr [ecx], 0xb40de0 */ W32((u32)(r_ecx), 0xb40de0u);
    /* 0073a665: mov eax, dword ptr [0x9f3240] */ r_eax = R32((u32)(0x9f3240u));
    /* 0073a66a: mov dword ptr [ecx + 0x8c], 0xb4 */ W32((u32)(r_ecx+0x8cu), 0xb4u);
    /* 0073a674: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073a677: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073a679: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0073a683: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0073a689: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 0073a68f: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0073a695: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0073a69f: mov dword ptr [ecx + 0xa0], ebx */ W32((u32)(r_ecx+0xa0u), r_ebx);
    /* 0073a6a5: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0073a6a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073a6aa: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073a6ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a6ad: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73a6b2u); f_008581c5();
    /* 0073a6b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a6b3: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073a6b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a6b9: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 0073a6bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073a6c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a6c3: jbe 0x73a70d */ if ((fC||fZ)) goto L_0073a70d;
L_0073a6c5:; BB(0x0073a6c5);
    /* 0073a6c5: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073a6c8: jb 0x73a6f6 */ if (fC) goto L_0073a6f6;
L_0073a6ca:; BB(0x0073a6ca);
    /* 0073a6ca: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0073a6cd:; BB(0x0073a6cd);
    /* 0073a6cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073a6cf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0073a6d1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0073a6d4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0073a6d7: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0073a6da: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0073a6dd: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0073a6e0: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0073a6e3: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0073a6e6: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0073a6e9: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0073a6ec: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a6ef: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073a6f2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0073a6f4: jbe 0x73a6cd */ if ((fC||fZ)) goto L_0073a6cd;
L_0073a6f6:; BB(0x0073a6f6);
    /* 0073a6f6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a6f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073a6fb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0073a6fd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0073a700: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073a703: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a706: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073a708: jb 0x73a6f6 */ if (fC) goto L_0073a6f6;
L_0073a70a:; BB(0x0073a70a);
    /* 0073a70a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_0073a70d:; BB(0x0073a70d);
    /* 0073a70d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073a710: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073a713: mov eax, ebx */ r_eax = r_ebx;
    /* 0073a715: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073a718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073a71b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073a722: mov esp, ebp */ r_esp = r_ebp;
    /* 0073a724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a725: ret 0xc */ FN_RET(0x0073a610); r_esp += 16; return;
}

void f_0073a728(void) /* sub_73A728 */
{
    FN_ENTER(0x0073a728);
    /* 0073a728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a729: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a72a: mov edx, ecx */ r_edx = r_ecx;
    /* 0073a72c: mov ebp, dword ptr [edx + 0x84] */ r_ebp = R32((u32)(r_edx+0x84u));
    /* 0073a732: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0073a735: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0073a738: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0073a73b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a73d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a73f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a741: add ebp, dword ptr [edx + 0x90] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x90u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a749: je 0x73a878 */ if (fZ) goto L_0073a878;
L_0073a74f:; BB(0x0073a74f);
    /* 0073a74f: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 0073a752: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0073a755: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073a758: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0073a75a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073a75c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073a75d: jae 0x73a87b */ if (!fC) goto L_0073a87b;
L_0073a763:; BB(0x0073a763);
    /* 0073a763: mov edi, edx */ r_edi = r_edx;
L_0073a765:; BB(0x0073a765);
    /* 0073a765: fld dword ptr [0x971cb4] */ FPUSH(R_F32((u32)(0x971cb4u)));
    /* 0073a76b: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073a76e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073a770: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 0073a776: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
    /* 0073a77c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073a77e: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 0073a781: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073a783: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 0073a789: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073a78b: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0073a791: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073a793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073a795: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
    /* 0073a79b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073a79d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073a79f: jle 0x73a880 */ if ((fZ||fS!=fO)) goto L_0073a880;
L_0073a7a5:; BB(0x0073a7a5);
    /* 0073a7a5: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0073a7a8: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0073a7ab: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0073a7ae: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073a7b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a7b3: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0073a7b6: cmp eax, dword ptr [edi + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a7bc: jl 0x73a7a5 */ if ((fS!=fO)) goto L_0073a7a5;
L_0073a7be:; BB(0x0073a7be);
    /* 0073a7be: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073a7c0:; BB(0x0073a7c0);
    /* 0073a7c0: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0073a7c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a7c9: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0073a7d0: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x73a7d5u); f_0072db50();
    /* 0073a7d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073a7d7: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0073a7da: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0073a7dd: mov ebp, dword ptr [edi + 0x84] */ r_ebp = R32((u32)(r_edi+0x84u));
    /* 0073a7e3: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0073a7e9: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a7eb: jne 0x73a80e */ if (!fZ) goto L_0073a80e;
L_0073a7ed:; BB(0x0073a7ed);
    /* 0073a7ed: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
    /* 0073a7f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a7f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a7f8: jl 0x73a806 */ if ((fS!=fO)) goto L_0073a806;
L_0073a7fa:; BB(0x0073a7fa);
    /* 0073a7fa: mov dword ptr [edi + 0x88], 0 */ W32((u32)(r_edi+0x88u), 0x0u);
    /* 0073a804: jmp 0x73a814 */ goto L_0073a814;
L_0073a806:; BB(0x0073a806);
    /* 0073a806: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
    /* 0073a80c: jmp 0x73a814 */ goto L_0073a814;
L_0073a80e:; BB(0x0073a80e);
    /* 0073a80e: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
L_0073a814:; BB(0x0073a814);
    /* 0073a814: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a817: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073a819: jl 0x73a829 */ if ((fS!=fO)) goto L_0073a829;
L_0073a81b:; BB(0x0073a81b);
    /* 0073a81b: mov dword ptr [edi + 0x84], 0 */ W32((u32)(r_edi+0x84u), 0x0u);
    /* 0073a825: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a827: jmp 0x73a82f */ goto L_0073a82f;
L_0073a829:; BB(0x0073a829);
    /* 0073a829: mov dword ptr [edi + 0x84], ebp */ W32((u32)(r_edi+0x84u), r_ebp);
L_0073a82f:; BB(0x0073a82f);
    /* 0073a82f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0073a832: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0073a835: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a837: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a839: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a83b: add ebp, dword ptr [edi + 0x90] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x90u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073a841: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0073a844: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073a846: je 0x73a85b */ if (fZ) goto L_0073a85b;
L_0073a848:; BB(0x0073a848);
    /* 0073a848: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073a84b: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0073a84e: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0073a852: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073a857: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_0073a85b:; BB(0x0073a85b);
    /* 0073a85b: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0073a85e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a860: je 0x73a878 */ if (fZ) goto L_0073a878;
L_0073a862:; BB(0x0073a862);
    /* 0073a862: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073a865: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0073a868: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073a86b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0073a86d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073a86f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073a870: jb 0x73a765 */ if (fC) goto L_0073a765;
L_0073a876:; BB(0x0073a876);
    /* 0073a876: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073a878:; BB(0x0073a878);
    /* 0073a878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a879: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073a87a: ret  */ FN_RET(0x0073a728); r_esp += 4; return;
L_0073a87b:; BB(0x0073a87b);
    /* 0073a87b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073a87d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a87e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073a87f: ret  */ FN_RET(0x0073a728); r_esp += 4; return;
L_0073a880:; BB(0x0073a880);
    /* 0073a880: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073a882: jmp 0x73a7c0 */ goto L_0073a7c0;
}

void f_0073a888(void) /* sub_73A888 */
{
    FN_ENTER(0x0073a888);
    /* 0073a888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a889: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a88c: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0073a890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a891: fld dword ptr [0x971cac] */ FPUSH(R_F32((u32)(0x971cacu)));
    /* 0073a897: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 0073a89a: fdiv dword ptr [0x971ca8] */ ST(0) = ST(0) / R_F32((u32)(0x971ca8u));
    /* 0073a8a0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073a8a3: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x73a8a8u); f_0083a248();
    /* 0073a8a8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0073a8ab: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0073a8af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073a8b4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073a8b8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0073a8bc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0073a8c0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0073a8c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0073a8c7: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a8ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8cc: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a8d0: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x73a8d5u); f_0073a8dc();
    /* 0073a8d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073a8d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073a8d9: ret  */ FN_RET(0x0073a888); r_esp += 4; return;
}

void f_0073a8dc(void) /* sub_73A8DC */
{
    FN_ENTER(0x0073a8dc);
    /* 0073a8dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0073a8df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8e1: push 0x8f1c72 */ { u32 v = 0x8f1c72u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073a8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a8ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073a8f4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073a8f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073a8fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073a8fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073a900: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073a903: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0073a906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073a907: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a90a: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73a90fu); f_0073b1e8();
    /* 0073a90f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073a916: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a91b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73a920u); f_005caba4();
    /* 0073a920: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073a923: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073a926: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073a929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073a92b: je 0x73aa36 */ if (fZ) goto L_0073aa36;
L_0073a931:; BB(0x0073a931);
    /* 0073a931: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073a938: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073a93f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073a942: mov ecx, eax */ r_ecx = r_eax;
    /* 0073a944: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0073a947: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a949: push 0x9f3268 */ { u32 v = 0x9f3268u; r_esp -= 4; W32(r_esp, v); }
    /* 0073a94e: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73a953u); f_007108c4();
    /* 0073a953: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0073a95a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a95d: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073a960: mov dword ptr [ecx], 0xb40de0 */ W32((u32)(r_ecx), 0xb40de0u);
    /* 0073a966: mov eax, dword ptr [0x9f3240] */ r_eax = R32((u32)(0x9f3240u));
    /* 0073a96b: mov dword ptr [ecx + 0x8c], 0xb4 */ W32((u32)(r_ecx+0x8cu), 0xb4u);
    /* 0073a975: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073a978: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073a97a: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0073a984: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0073a98a: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 0073a990: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0073a996: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0073a9a0: mov dword ptr [ecx + 0xa0], ebx */ W32((u32)(r_ecx+0xa0u), r_ebx);
    /* 0073a9a6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0073a9a9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073a9ab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073a9ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073a9ae: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73a9b3u); f_008581c5();
    /* 0073a9b3: mov edx, eax */ r_edx = r_eax;
    /* 0073a9b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073a9b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073a9bb: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073a9be: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 0073a9c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073a9c6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a9c8: jbe 0x73aa15 */ if ((fC||fZ)) goto L_0073aa15;
L_0073a9ca:; BB(0x0073a9ca);
    /* 0073a9ca: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0073a9cd: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073a9d0: jb 0x73aa01 */ if (fC) goto L_0073aa01;
L_0073a9d2:; BB(0x0073a9d2);
    /* 0073a9d2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0073a9d5: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0073a9d8:; BB(0x0073a9d8);
    /* 0073a9d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073a9da: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073a9dc: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0073a9df: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0073a9e2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0073a9e5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0073a9e8: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0073a9eb: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0073a9ee: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0073a9f1: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0073a9f4: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0073a9f7: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073a9fa: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073a9fd: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0073a9ff: jbe 0x73a9d8 */ if ((fC||fZ)) goto L_0073a9d8;
L_0073aa01:; BB(0x0073aa01);
    /* 0073aa01: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073aa04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073aa06: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073aa08: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0073aa0b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073aa0e: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073aa11: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073aa13: jb 0x73aa01 */ if (fC) goto L_0073aa01;
L_0073aa15:; BB(0x0073aa15);
    /* 0073aa15: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073aa1c:; BB(0x0073aa1c);
    /* 0073aa1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073aa1f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073aa22: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073aa25: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073aa28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073aa2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073aa32: mov esp, ebp */ r_esp = r_ebp;
    /* 0073aa34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073aa35: ret  */ FN_RET(0x0073a8dc); r_esp += 4; return;
L_0073aa36:; BB(0x0073aa36);
    /* 0073aa36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073aa38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073aa3b: jmp 0x73aa1c */ goto L_0073aa1c;
}

void f_0073aa40(void) /* sub_73AA40 */
{
    FN_ENTER(0x0073aa40);
    /* 0073aa40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa41: mov ebp, esp */ r_ebp = r_esp;
    /* 0073aa43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa45: push 0x8f1ca6 */ { u32 v = 0x8f1ca6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073aa50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073aa58: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073aa5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073aa5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073aa61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073aa64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073aa67: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0073aa6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa6b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073aa6e: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x73aa73u); f_0073b1e8();
    /* 0073aa73: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073aa7a: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073aa7f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73aa84u); f_005caba4();
    /* 0073aa84: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073aa87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073aa8a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073aa8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073aa8f: je 0x73ab9d */ if (fZ) goto L_0073ab9d;
L_0073aa95:; BB(0x0073aa95);
    /* 0073aa95: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073aa9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073aaa3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073aaa6: mov ecx, eax */ r_ecx = r_eax;
    /* 0073aaa8: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0073aaac: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0073aaaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073aab0: push 0x9f3268 */ { u32 v = 0x9f3268u; r_esp -= 4; W32(r_esp, v); }
    /* 0073aab5: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73aabau); f_007108c4();
    /* 0073aaba: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0073aac1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073aac4: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073aac7: mov dword ptr [ecx], 0xb40de0 */ W32((u32)(r_ecx), 0xb40de0u);
    /* 0073aacd: mov eax, dword ptr [0x9f3240] */ r_eax = R32((u32)(0x9f3240u));
    /* 0073aad2: mov dword ptr [ecx + 0x8c], 0xb4 */ W32((u32)(r_ecx+0x8cu), 0xb4u);
    /* 0073aadc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073aadf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073aae1: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0073aaeb: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0073aaf1: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 0073aaf7: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0073aafd: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0073ab07: mov dword ptr [ecx + 0xa0], ebx */ W32((u32)(r_ecx+0xa0u), r_ebx);
    /* 0073ab0d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0073ab10: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073ab12: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073ab14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ab15: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73ab1au); f_008581c5();
    /* 0073ab1a: mov edx, eax */ r_edx = r_eax;
    /* 0073ab1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ab1f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ab22: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073ab25: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 0073ab2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073ab2d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ab2f: jbe 0x73ab7c */ if ((fC||fZ)) goto L_0073ab7c;
L_0073ab31:; BB(0x0073ab31);
    /* 0073ab31: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0073ab34: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073ab37: jb 0x73ab68 */ if (fC) goto L_0073ab68;
L_0073ab39:; BB(0x0073ab39);
    /* 0073ab39: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0073ab3c: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0073ab3f:; BB(0x0073ab3f);
    /* 0073ab3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073ab41: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073ab43: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0073ab46: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0073ab49: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0073ab4c: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0073ab4f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0073ab52: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0073ab55: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0073ab58: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0073ab5b: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0073ab5e: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073ab61: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ab64: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0073ab66: jbe 0x73ab3f */ if ((fC||fZ)) goto L_0073ab3f;
L_0073ab68:; BB(0x0073ab68);
    /* 0073ab68: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0073ab6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073ab6d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0073ab6f: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0073ab72: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ab75: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073ab78: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073ab7a: jb 0x73ab68 */ if (fC) goto L_0073ab68;
L_0073ab7c:; BB(0x0073ab7c);
    /* 0073ab7c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073ab83:; BB(0x0073ab83);
    /* 0073ab83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ab86: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073ab89: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073ab8c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073ab8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ab92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ab99: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ab9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ab9c: ret  */ FN_RET(0x0073aa40); r_esp += 4; return;
L_0073ab9d:; BB(0x0073ab9d);
    /* 0073ab9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ab9f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073aba2: jmp 0x73ab83 */ goto L_0073ab83;
}

void f_0073aba4(void) /* sub_73ABA4 */
{
    FN_ENTER(0x0073aba4);
    /* 0073aba4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073aba8: mov dword ptr [0x9f3278], eax */ W32((u32)(0x9f3278u), r_eax);
    /* 0073abad: ret  */ FN_RET(0x0073aba4); r_esp += 4; return;
}

void f_0073abb0(void) /* sub_73ABB0 */
{
    FN_ENTER(0x0073abb0);
    /* 0073abb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073abb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073abb2: mov edi, ecx */ r_edi = r_ecx;
    /* 0073abb4: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0073abb7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073abb9: jne 0x73abc2 */ if (!fZ) goto L_0073abc2;
L_0073abbb:; BB(0x0073abbb);
    /* 0073abbb: mov dword ptr [edi + 0x5c], 0x1000000 */ W32((u32)(r_edi+0x5cu), 0x1000000u);
L_0073abc2:; BB(0x0073abc2);
    /* 0073abc2: mov ecx, edi */ r_ecx = r_edi;
    /* 0073abc4: call 0x73adcc */ r_esp -= 4; W32(r_esp, 0x73abc9u); f_0073adcc();
    /* 0073abc9: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 0073abcf: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0073abd2: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0073abd5: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0073abd8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073abda: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073abdc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073abde: add edx, dword ptr [edi + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x90u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073abe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073abe6: je 0x73ad15 */ if (fZ) goto L_0073ad15;
L_0073abec:; BB(0x0073abec);
    /* 0073abec: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073abef: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0073abf2: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073abf5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0073abf7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073abf9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073abfa: jae 0x73adbb */ if (!fC) goto L_0073adbb;
L_0073ac00:; BB(0x0073ac00);
    /* 0073ac00: mov ebp, edx */ r_ebp = r_edx;
L_0073ac02:; BB(0x0073ac02);
    /* 0073ac02: fld dword ptr [0x971c9c] */ FPUSH(R_F32((u32)(0x971c9cu)));
    /* 0073ac08: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073ac0b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073ac0d: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 0073ac13: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
    /* 0073ac19: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073ac1b: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 0073ac1e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073ac20: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 0073ac26: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073ac28: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0073ac2e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073ac30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073ac32: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
    /* 0073ac38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073ac3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073ac3c: jle 0x73adc2 */ if ((fZ||fS!=fO)) goto L_0073adc2;
L_0073ac42:; BB(0x0073ac42);
    /* 0073ac42: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0073ac45: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0073ac48: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0073ac4b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073ac4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ac50: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0073ac53: cmp eax, dword ptr [edi + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073ac59: jl 0x73ac42 */ if ((fS!=fO)) goto L_0073ac42;
L_0073ac5b:; BB(0x0073ac5b);
    /* 0073ac5b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073ac5d:; BB(0x0073ac5d);
    /* 0073ac5d: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0073ac64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ac66: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0073ac6d: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x73ac72u); f_0072db50();
    /* 0073ac72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073ac74: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0073ac77: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0073ac7a: mov ebp, dword ptr [edi + 0x84] */ r_ebp = R32((u32)(r_edi+0x84u));
    /* 0073ac80: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0073ac86: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ac88: jne 0x73acab */ if (!fZ) goto L_0073acab;
L_0073ac8a:; BB(0x0073ac8a);
    /* 0073ac8a: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
    /* 0073ac90: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ac93: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073ac95: jl 0x73aca3 */ if ((fS!=fO)) goto L_0073aca3;
L_0073ac97:; BB(0x0073ac97);
    /* 0073ac97: mov dword ptr [edi + 0x88], 0 */ W32((u32)(r_edi+0x88u), 0x0u);
    /* 0073aca1: jmp 0x73acb1 */ goto L_0073acb1;
L_0073aca3:; BB(0x0073aca3);
    /* 0073aca3: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
    /* 0073aca9: jmp 0x73acb1 */ goto L_0073acb1;
L_0073acab:; BB(0x0073acab);
    /* 0073acab: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
L_0073acb1:; BB(0x0073acb1);
    /* 0073acb1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acb4: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073acb6: jl 0x73acc6 */ if ((fS!=fO)) goto L_0073acc6;
L_0073acb8:; BB(0x0073acb8);
    /* 0073acb8: mov dword ptr [edi + 0x84], 0 */ W32((u32)(r_edi+0x84u), 0x0u);
    /* 0073acc2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acc4: jmp 0x73accc */ goto L_0073accc;
L_0073acc6:; BB(0x0073acc6);
    /* 0073acc6: mov dword ptr [edi + 0x84], ebp */ W32((u32)(r_edi+0x84u), r_ebp);
L_0073accc:; BB(0x0073accc);
    /* 0073accc: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0073accf: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0073acd2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acd4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acd6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acd8: add ebp, dword ptr [edi + 0x90] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x90u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073acde: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0073ace1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073ace3: je 0x73acf8 */ if (fZ) goto L_0073acf8;
L_0073ace5:; BB(0x0073ace5);
    /* 0073ace5: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073ace8: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0073aceb: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0073acef: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073acf4: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_0073acf8:; BB(0x0073acf8);
    /* 0073acf8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0073acfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073acfd: je 0x73ad15 */ if (fZ) goto L_0073ad15;
L_0073acff:; BB(0x0073acff);
    /* 0073acff: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073ad02: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0073ad05: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 0073ad08: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0073ad0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073ad0c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073ad0d: jb 0x73ac02 */ if (fC) goto L_0073ac02;
L_0073ad13:; BB(0x0073ad13);
    /* 0073ad13: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073ad15:; BB(0x0073ad15);
    /* 0073ad15: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ad17: call 0x73b208 */ r_esp -= 4; W32(r_esp, 0x73ad1cu); f_0073b208();
    /* 0073ad1c: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0073ad22: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0073ad25: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0073ad28: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0073ad2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ad2d: je 0x73ad9f */ if (fZ) goto L_0073ad9f;
L_0073ad2f:; BB(0x0073ad2f);
    /* 0073ad2f: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0073ad33: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073ad36: je 0x73ad9f */ if (fZ) goto L_0073ad9f;
L_0073ad38:; BB(0x0073ad38);
    /* 0073ad38: jmp 0x73ad40 */ goto L_0073ad40;
L_0073ad3a:; BB(0x0073ad3a);
    /* 0073ad3a: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
L_0073ad40:; BB(0x0073ad40);
    /* 0073ad40: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ad43: cmp eax, dword ptr [edi + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073ad49: jl 0x73ad59 */ if ((fS!=fO)) goto L_0073ad59;
L_0073ad4b:; BB(0x0073ad4b);
    /* 0073ad4b: mov dword ptr [edi + 0x88], 0 */ W32((u32)(r_edi+0x88u), 0x0u);
    /* 0073ad55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073ad57: jmp 0x73ad5f */ goto L_0073ad5f;
L_0073ad59:; BB(0x0073ad59);
    /* 0073ad59: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
L_0073ad5f:; BB(0x0073ad5f);
    /* 0073ad5f: cmp eax, dword ptr [edi + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ad65: je 0x73ad9f */ if (fZ) goto L_0073ad9f;
L_0073ad67:; BB(0x0073ad67);
    /* 0073ad67: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0073ad6a: mov ebp, dword ptr [edx + eax*4] */ r_ebp = R32((u32)(r_edx+r_eax*4));
    /* 0073ad6d: mov edx, dword ptr [edi + 0x90] */ r_edx = R32((u32)(r_edi+0x90u));
    /* 0073ad73: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0073ad76: mov eax, dword ptr [edx + eax*8] */ r_eax = R32((u32)(r_edx+r_eax*8));
    /* 0073ad79: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073ad7b: je 0x73ad90 */ if (fZ) goto L_0073ad90;
L_0073ad7d:; BB(0x0073ad7d);
    /* 0073ad7d: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073ad80: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0073ad83: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0073ad87: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073ad8c: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
L_0073ad90:; BB(0x0073ad90);
    /* 0073ad90: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0073ad93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ad95: je 0x73ad9f */ if (fZ) goto L_0073ad9f;
L_0073ad97:; BB(0x0073ad97);
    /* 0073ad97: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0073ad9b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073ad9d: jne 0x73ad3a */ if (!fZ) goto L_0073ad3a;
L_0073ad9f:; BB(0x0073ad9f);
    /* 0073ad9f: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ada1: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73ada6u); f_00710db4();
    /* 0073ada6: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ada8: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x73adadu); f_00710ee4();
    /* 0073adad: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0073adb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073adb1: mov ecx, edi */ r_ecx = r_edi;
    /* 0073adb3: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73adb8u); f_0072a5ec();
    /* 0073adb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073adb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073adba: ret  */ FN_RET(0x0073abb0); r_esp += 4; return;
L_0073adbb:; BB(0x0073adbb);
    /* 0073adbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073adbd: jmp 0x73ad15 */ goto L_0073ad15;
L_0073adc2:; BB(0x0073adc2);
    /* 0073adc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073adc4: jmp 0x73ac5d */ goto L_0073ac5d;
}

void f_0073adcc(void) /* sub_73ADCC */
{
    FN_ENTER(0x0073adcc);
    /* 0073adcc: fld dword ptr [0x971c94] */ FPUSH(R_F32((u32)(0x971c94u)));
    /* 0073add2: fld dword ptr [0x971c90] */ FPUSH(R_F32((u32)(0x971c90u)));
    /* 0073add8: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 0073adde: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0073ade4: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0073ade7: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073ade9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073adeb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0073aded: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073adef: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0073adf1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073adf3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073adf4: jbe 0x73adf8 */ if ((fC||fZ)) goto L_0073adf8;
L_0073adf6:; BB(0x0073adf6);
    /* 0073adf6: fst st(3) */ ST(3) = ST(0);
L_0073adf8:; BB(0x0073adf8);
    /* 0073adf8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073adfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073adfc: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0073adfe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073ae00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073ae01: jae 0x73ae0b */ if (!fC) goto L_0073ae0b;
L_0073ae03:; BB(0x0073ae03);
    /* 0073ae03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ae05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ae07: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0073ae0a: ret  */ FN_RET(0x0073adcc); r_esp += 4; return;
L_0073ae0b:; BB(0x0073ae0b);
    /* 0073ae0b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073ae0d: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0073ae10: ret  */ FN_RET(0x0073adcc); r_esp += 4; return;
}

void f_0073ae14(void) /* sub_73AE14 */
{
    FN_ENTER(0x0073ae14);
    /* 0073ae14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae16: mov edi, ecx */ r_edi = r_ecx;
    /* 0073ae18: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ae1a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x73ae1fu); f_007108f4();
    /* 0073ae1f: mov esi, eax */ r_esi = r_eax;
    /* 0073ae21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae22: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ae24: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x73ae29u); f_00710f80();
    /* 0073ae29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae2a: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0073ae2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae2e: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ae30: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73ae35u); f_0072a648();
    /* 0073ae35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073ae36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ae37: ret  */ FN_RET(0x0073ae14); r_esp += 4; return;
}

void f_0073ae38(void) /* sub_73AE38 */
{
    FN_ENTER(0x0073ae38);
    /* 0073ae38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae3a: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ae3e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073ae42: call 0x73ae4c */ r_esp -= 4; W32(r_esp, 0x73ae47u); f_0073ae4c();
    /* 0073ae47: ret 8 */ FN_RET(0x0073ae38); r_esp += 12; return;
}

void f_0073ae4c(void) /* sub_73AE4C */
{
    FN_ENTER(0x0073ae4c);
    /* 0073ae4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ae50: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ae53: mov edi, ecx */ r_edi = r_ecx;
    /* 0073ae55: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0073ae59: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0073ae5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ae5f: je 0x73b0da */ if (fZ) goto L_0073b0da;
L_0073ae65:; BB(0x0073ae65);
    /* 0073ae65: mov ebp, dword ptr [edi + 0x9c] */ r_ebp = R32((u32)(r_edi+0x9cu));
    /* 0073ae6b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0073ae6e: mov ebx, dword ptr [edx + ebp*4] */ r_ebx = R32((u32)(r_edx+r_ebp*4));
    /* 0073ae71: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0073ae77: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0073ae7a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0073ae7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ae7f: je 0x73aedf */ if (fZ) goto L_0073aedf;
L_0073ae81:; BB(0x0073ae81);
    /* 0073ae81: fld dword ptr [0x971c8c] */ FPUSH(R_F32((u32)(0x971c8cu)));
    /* 0073ae87: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0073ae8a: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 0073ae90: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073ae92: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073ae95: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 0073ae9b: mov ecx, dword ptr [edi + 0xa0] */ r_ecx = R32((u32)(r_edi+0xa0u));
    /* 0073aea1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073aea3: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0073aea9: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0073aeab: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 0073aeae: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073aeb0: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
    /* 0073aeb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073aeb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073aeba: jg 0x73aec4 */ if ((!fZ&&fS==fO)) goto L_0073aec4;
L_0073aebc:; BB(0x0073aebc);
    /* 0073aebc: jmp 0x73b0e6 */ goto L_0073b0e6;
L_0073aec1:; BB(0x0073aec1);
    /* 0073aec1: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
L_0073aec4:; BB(0x0073aec4);
    /* 0073aec4: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0073aec7: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0073aeca: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0073aecc: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0073aecf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073aed2: cmp eax, dword ptr [edi + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073aed8: jl 0x73aec1 */ if ((fS!=fO)) goto L_0073aec1;
L_0073aeda:; BB(0x0073aeda);
    /* 0073aeda: jmp 0x73b0bc */ goto L_0073b0bc;
L_0073aedf:; BB(0x0073aedf);
    /* 0073aedf: test esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073aee5: je 0x73aef0 */ if (fZ) goto L_0073aef0;
L_0073aee7:; BB(0x0073aee7);
    /* 0073aee7: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 0073aeea: mov dword ptr [edi + 0x94], eax */ W32((u32)(r_edi+0x94u), r_eax);
L_0073aef0:; BB(0x0073aef0);
    /* 0073aef0: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073aef6: je 0x73af1d */ if (fZ) goto L_0073af1d;
L_0073aef8:; BB(0x0073aef8);
    /* 0073aef8: fld dword ptr [0x971c84] */ FPUSH(R_F32((u32)(0x971c84u)));
    /* 0073aefe: fadd dword ptr [edi + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x74u));
    /* 0073af01: fadd dword ptr [edi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4cu));
    /* 0073af04: fld dword ptr [edi + 0x94] */ FPUSH(R_F32((u32)(r_edi+0x94u)));
    /* 0073af0a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073af0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073af0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073af0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073af11: ja 0x73af15 */ if ((!fC&&!fZ)) goto L_0073af15;
L_0073af13:; BB(0x0073af13);
    /* 0073af13: fst st(1) */ ST(1) = ST(0);
L_0073af15:; BB(0x0073af15);
    /* 0073af15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073af17: fstp dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0)); FPOP();
L_0073af1d:; BB(0x0073af1d);
    /* 0073af1d: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073af23: je 0x73af45 */ if (fZ) goto L_0073af45;
L_0073af25:; BB(0x0073af25);
    /* 0073af25: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0073af2b: cmp eax, dword ptr [edi + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073af31: jne 0x73af38 */ if (!fZ) goto L_0073af38;
L_0073af33:; BB(0x0073af33);
    /* 0073af33: and esi, 0xfffffff7 */ {  u32 a = r_esi; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0073af36: jmp 0x73af45 */ goto L_0073af45;
L_0073af38:; BB(0x0073af38);
    /* 0073af38: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073af3c: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073af41: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073af45:; BB(0x0073af45);
    /* 0073af45: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0073af49: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 0073af4f: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0073af52: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0073af55: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073af5b: je 0x73af6d */ if (fZ) goto L_0073af6d;
L_0073af5d:; BB(0x0073af5d);
    /* 0073af5d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0073af5f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0073af63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073af64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073af66: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73af6bu); f_0072db60();
    /* 0073af6b: jmp 0x73af7b */ goto L_0073af7b;
L_0073af6d:; BB(0x0073af6d);
    /* 0073af6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073af6f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0073af73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073af74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073af76: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73af7bu); f_0072db60();
L_0073af7b:; BB(0x0073af7b);
    /* 0073af7b: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073af81: je 0x73af90 */ if (fZ) goto L_0073af90;
L_0073af83:; BB(0x0073af83);
    /* 0073af83: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073af87: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073af8c: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073af90:; BB(0x0073af90);
    /* 0073af90: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073af96: je 0x73afa5 */ if (fZ) goto L_0073afa5;
L_0073af98:; BB(0x0073af98);
    /* 0073af98: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073af9c: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073afa1: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073afa5:; BB(0x0073afa5);
    /* 0073afa5: test esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073afab: je 0x73afba */ if (fZ) goto L_0073afba;
L_0073afad:; BB(0x0073afad);
    /* 0073afad: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073afb1: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073afb6: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073afba:; BB(0x0073afba);
    /* 0073afba: test esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073afc0: je 0x73afcf */ if (fZ) goto L_0073afcf;
L_0073afc2:; BB(0x0073afc2);
    /* 0073afc2: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0073afc6: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073afcb: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073afcf:; BB(0x0073afcf);
    /* 0073afcf: fld dword ptr [0x971c84] */ FPUSH(R_F32((u32)(0x971c84u)));
    /* 0073afd5: fadd dword ptr [edi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x48u));
    /* 0073afd8: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0073afdb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073afdf: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073afe4: je 0x73aff4 */ if (fZ) goto L_0073aff4;
L_0073afe6:; BB(0x0073afe6);
    /* 0073afe6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0073afea: fadd dword ptr [0x971c80] */ ST(0) = ST(0) + R_F32((u32)(0x971c80u));
    /* 0073aff0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0073aff4:; BB(0x0073aff4);
    /* 0073aff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073aff5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0073aff9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073affc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073affe: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x73b003u); f_0072ddf4();
    /* 0073b003: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b009: je 0x73b017 */ if (fZ) goto L_0073b017;
L_0073b00b:; BB(0x0073b00b);
    /* 0073b00b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0073b00f: fsub dword ptr [ebx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x10u));
    /* 0073b012: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0073b015: jmp 0x73b01e */ goto L_0073b01e;
L_0073b017:; BB(0x0073b017);
    /* 0073b017: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
L_0073b01e:; BB(0x0073b01e);
    /* 0073b01e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0073b021: mov dword ptr [edx + ebp*8], esi */ W32((u32)(r_edx+r_ebp*8), r_esi);
    /* 0073b024: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0073b02a: mov dword ptr [edx + ebp*8 + 4], eax */ W32((u32)(r_edx+r_ebp*8+0x4u), r_eax);
    /* 0073b02e: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 0073b034: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073b037: cmp eax, dword ptr [edi + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073b03d: jl 0x73b04b */ if ((fS!=fO)) goto L_0073b04b;
L_0073b03f:; BB(0x0073b03f);
    /* 0073b03f: mov dword ptr [edi + 0x9c], 0 */ W32((u32)(r_edi+0x9cu), 0x0u);
    /* 0073b049: jmp 0x73b051 */ goto L_0073b051;
L_0073b04b:; BB(0x0073b04b);
    /* 0073b04b: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
L_0073b051:; BB(0x0073b051);
    /* 0073b051: fld dword ptr [0x971c8c] */ FPUSH(R_F32((u32)(0x971c8cu)));
    /* 0073b057: fadd dword ptr [edi + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x94u));
    /* 0073b05d: fadd dword ptr [ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x14u));
    /* 0073b060: fst dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0));
    /* 0073b066: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073b06c: je 0x73b081 */ if (fZ) goto L_0073b081;
L_0073b06e:; BB(0x0073b06e);
    /* 0073b06e: fld dword ptr [0x971c78] */ FPUSH(R_F32((u32)(0x971c78u)));
    /* 0073b074: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073b076: fsub dword ptr [ebx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x14u));
    /* 0073b079: fst dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0));
    /* 0073b07f: jmp 0x73b0ab */ goto L_0073b0ab;
L_0073b081:; BB(0x0073b081);
    /* 0073b081: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0073b084: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0073b087: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073b089: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0073b08b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b08d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b08e: jae 0x73b0ea */ if (!fC) goto L_0073b0ea;
L_0073b090:; BB(0x0073b090);
    /* 0073b090: fld dword ptr [0x971c7c] */ FPUSH(R_F32((u32)(0x971c7cu)));
    /* 0073b096: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0073b098: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0073b09a: fcom dword ptr [edi + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x98u))); 
    /* 0073b0a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073b0a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073b0a3: jbe 0x73b0ab */ if ((fC||fZ)) goto L_0073b0ab;
L_0073b0a5:; BB(0x0073b0a5);
    /* 0073b0a5: fst dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0));
L_0073b0ab:; BB(0x0073b0ab);
    /* 0073b0ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b0ad: mov eax, 1 */ r_eax = 0x1u;
    /* 0073b0b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b0b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b0b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b0b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b0b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b0b9: ret 0xc */ FN_RET(0x0073ae4c); r_esp += 16; return;
L_0073b0bc:; BB(0x0073b0bc);
    /* 0073b0bc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073b0be:; BB(0x0073b0be);
    /* 0073b0be: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 0073b0c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073b0c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073b0c9: mov dword ptr [ebx + 0x14], 0 */ W32((u32)(r_ebx+0x14u), 0x0u);
    /* 0073b0d0: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x73b0d5u); f_0072db50();
    /* 0073b0d5: jmp 0x73aedf */ goto L_0073aedf;
L_0073b0da:; BB(0x0073b0da);
    /* 0073b0da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073b0dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073b0df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073b0e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073b0e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073b0e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073b0e3: ret 0xc */ FN_RET(0x0073ae4c); r_esp += 16; return;
L_0073b0e6:; BB(0x0073b0e6);
    /* 0073b0e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b0e8: jmp 0x73b0be */ goto L_0073b0be;
L_0073b0ea:; BB(0x0073b0ea);
    /* 0073b0ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073b0ec: jmp 0x73b0ab */ goto L_0073b0ab;
}

