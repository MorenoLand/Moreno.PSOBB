#include "protos.h"

void f_0040a080(void) /* sub_40A080 */
{
    FN_ENTER(0x0040a080);
    /* 0040a080: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040a084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040a086: je 0x40a0bf */ if (fZ) goto L_0040a0bf;
L_0040a088:; BB(0x0040a088);
    /* 0040a088: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040a08b: jne 0x40a0a5 */ if (!fZ) goto L_0040a0a5;
L_0040a08d:; BB(0x0040a08d);
    /* 0040a08d: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0040a094: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0040a09b: mov dword ptr [ecx + 0x34], 0x3ccccccd */ W32((u32)(r_ecx+0x34u), 0x3ccccccdu);
    /* 0040a0a2: ret 4 */ FN_RET(0x0040a080); r_esp += 8; return;
L_0040a0a5:; BB(0x0040a0a5);
    /* 0040a0a5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040a0a8: jne 0x40a0bf */ if (!fZ) goto L_0040a0bf;
L_0040a0aa:; BB(0x0040a0aa);
    /* 0040a0aa: mov dword ptr [ecx + 0x2c], 0x3f800000 */ W32((u32)(r_ecx+0x2cu), 0x3f800000u);
    /* 0040a0b1: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0040a0b8: mov dword ptr [ecx + 0x34], 0xbd888889 */ W32((u32)(r_ecx+0x34u), 0xbd888889u);
L_0040a0bf:; BB(0x0040a0bf);
    /* 0040a0bf: ret 4 */ FN_RET(0x0040a080); r_esp += 8; return;
}

void f_0040a0c4(void) /* sub_40A0C4 */
{
    FN_ENTER(0x0040a0c4);
    /* 0040a0c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040a0c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040a0c9: call 0x40a0e8 */ r_esp -= 4; W32(r_esp, 0x40a0ceu); f_0040a0e8();
    /* 0040a0ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040a0d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040a0d4: jne 0x40a0da */ if (!fZ) goto L_0040a0da;
L_0040a0d6:; BB(0x0040a0d6);
    /* 0040a0d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a0d7: ret 4 */ FN_RET(0x0040a0c4); r_esp += 8; return;
L_0040a0da:; BB(0x0040a0da);
    /* 0040a0da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40a0e0u); f_005c2f74();
    /* 0040a0e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040a0e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a0e2: ret 4 */ FN_RET(0x0040a0c4); r_esp += 8; return;
}

void f_0040a0e8(void) /* sub_40A0E8 */
{
    FN_ENTER(0x0040a0e8);
    /* 0040a0e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a0eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0ed: push 0x8cc4a4 */ { u32 v = 0x8cc4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040a0f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040a100: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040a106: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040a109: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040a10c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040a10f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040a112: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a119: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a11c: mov dword ptr [eax], 0xaf2680 */ W32((u32)(r_eax), 0xaf2680u);
    /* 0040a122: call 0x4d45c0 */ r_esp -= 4; W32(r_esp, 0x40a127u); f_004d45c0();
    /* 0040a127: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040a12e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a131: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40a136u); f_008171e8();
    /* 0040a136: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a139: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040a140: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a143: ret  */ FN_RET(0x0040a0e8); r_esp += 4; return;
}

void f_0040a144(void) /* sub_40A144 */
{
    FN_ENTER(0x0040a144);
    /* 0040a144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a145: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a149: push 0x8cc4c0 */ { u32 v = 0x8cc4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a14e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040a154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040a15c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a15f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040a162: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040a165: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040a168: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040a16b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040a16e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040a171: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040a174: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040a177: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40a17cu); f_008193cc();
    /* 0040a17c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a183: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a186: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a189: mov dword ptr [ebx], 0xaf2680 */ W32((u32)(r_ebx), 0xaf2680u);
    /* 0040a18f: mov eax, dword ptr [0x9a3084] */ r_eax = R32((u32)(0x9a3084u));
    /* 0040a194: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 0040a19b: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0040a19e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040a1a0: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 0040a1a7: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0040a1aa: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0040a1ad: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0040a1b0: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 0040a1b7: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x40a1bcu); f_0081e1f4();
    /* 0040a1bc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a1bf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a1c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a1c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040a1cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a1ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a1cf: ret 8 */ FN_RET(0x0040a144); r_esp += 12; return;
}

void f_0040a1d4(void) /* sub_40A1D4 */
{
    FN_ENTER(0x0040a1d4);
    /* 0040a1d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1d6: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a1d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0040a1db: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1dd: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x40a1e2u); f_004d31f4();
    /* 0040a1e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040a1e3: add dword ptr [edi + 0x20], 1 */ { u32 ad = (u32)(r_edi+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040a1e7: movsx ebx, word ptr [0xaae8b0] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xaae8b0u));
    /* 0040a1ee: movsx eax, word ptr [0xaae8b6] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaae8b6u));
    /* 0040a1f5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0040a1f9: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0040a1fd: fmul dword ptr [0x8f9af4] */ ST(0) = ST(0) * R_F32((u32)(0x8f9af4u));
    /* 0040a203: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040a207: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040a20c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a211: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040a215: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040a219: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040a21d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040a221: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0040a225: fmul dword ptr [0x8f9af0] */ ST(0) = ST(0) * R_F32((u32)(0x8f9af0u));
    /* 0040a22b: fdiv dword ptr [0x8f9aec] */ ST(0) = ST(0) / R_F32((u32)(0x8f9aecu));
    /* 0040a231: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0040a235: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0040a23a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a23f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0040a243: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0040a247: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040a24b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0040a24f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0040a254: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0040a258: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a25a: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0040a25d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0040a260: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0040a263: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a265: lea ecx, [edx + eax + 0x1b4] */ r_ecx = (u32)(r_edx+r_eax+0x1b4u);
    /* 0040a26c: cmp ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a272: jl 0x40a27a */ if ((fS!=fO)) goto L_0040a27a;
L_0040a274:; BB(0x0040a274);
    /* 0040a274: add ecx, 0xffff0000 */ {  u32 a = r_ecx; u32 b = 0xffff0000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0040a27a:; BB(0x0040a27a);
    /* 0040a27a: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 0040a27d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x40a282u); f_0082dcbc();
    /* 0040a282: fld dword ptr [0x8f9ad4] */ FPUSH(R_F32((u32)(0x8f9ad4u)));
    /* 0040a288: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040a28a: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0040a28d: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 0040a290: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x40a295u); f_0082ddd8();
    /* 0040a295: fld dword ptr [0x8f9ad0] */ FPUSH(R_F32((u32)(0x8f9ad0u)));
    /* 0040a29b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040a29d: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0040a2a0: fstp dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0)); FPOP();
    /* 0040a2a3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x40a2a8u); f_0082dcbc();
    /* 0040a2a8: fld dword ptr [0x8f9ad0] */ FPUSH(R_F32((u32)(0x8f9ad0u)));
    /* 0040a2ae: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0040a2b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040a2b3: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0040a2b6: add ecx, 0x1b4 */ {  u32 a = r_ecx; u32 b = 0x1b4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a2bc: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 0040a2c3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x40a2c8u); f_0082ddd8();
    /* 0040a2c8: fld dword ptr [0x8f9ae4] */ FPUSH(R_F32((u32)(0x8f9ae4u)));
    /* 0040a2ce: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040a2d0: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0040a2d3: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0040a2d6: add ecx, 0x1b4 */ {  u32 a = r_ecx; u32 b = 0x1b4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a2dc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x40a2e1u); f_0082dcbc();
    /* 0040a2e1: fld dword ptr [0x8f9ae4] */ FPUSH(R_F32((u32)(0x8f9ae4u)));
    /* 0040a2e7: fld dword ptr [0x8f9ae0] */ FPUSH(R_F32((u32)(0x8f9ae0u)));
    /* 0040a2ed: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0040a2f0: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0040a2f3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040a2f6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040a2f8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0040a2fa: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0040a2fd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0040a2ff: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 0040a302: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0040a306: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0040a30a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a30c: jne 0x40a322 */ if (!fZ) goto L_0040a322;
L_0040a30e:; BB(0x0040a30e);
    /* 0040a30e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0040a310: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040a312: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0040a314: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040a316: fchs  */ ST(0) = -ST(0);
    /* 0040a318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040a31a: fchs  */ ST(0) = -ST(0);
    /* 0040a31c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040a31e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040a320: jmp 0x40a334 */ goto L_0040a334;
L_0040a322:; BB(0x0040a322);
    /* 0040a322: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0040a324: fld dword ptr [0x8f9ae8] */ FPUSH(R_F32((u32)(0x8f9ae8u)));
    /* 0040a32a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0040a32c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0040a32e: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0040a330: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040a332: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0040a334:; BB(0x0040a334);
    /* 0040a334: fld dword ptr [0x8f9adc] */ FPUSH(R_F32((u32)(0x8f9adcu)));
    /* 0040a33a: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0040a33d: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0040a33f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040a341: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0040a343: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040a345: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040a347: fld dword ptr [edi + 0x44] */ FPUSH(R_F32((u32)(r_edi+0x44u)));
    /* 0040a34a: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0040a34d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040a34f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0040a352: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 0040a355: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 0040a357: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040a359: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 0040a35b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040a35d: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0040a35f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040a361: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0040a363: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040a365: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040a367: fst dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0));
    /* 0040a36a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040a36e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040a370: fst dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0));
    /* 0040a373: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0040a377: lea ebx, [edi + 0x40] */ r_ebx = (u32)(r_edi+0x40u);
    /* 0040a37a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040a37c: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x40a381u); f_0082def4();
    /* 0040a381: fcomp dword ptr [0x8f9ae8] */ fx_compare(ST(0), R_F32((u32)(0x8f9ae8u))); FPOP();
    /* 0040a387: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040a389: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040a38a: jne 0x40a396 */ if (!fZ) goto L_0040a396;
L_0040a38c:; BB(0x0040a38c);
    /* 0040a38c: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0040a394: jmp 0x40a3a0 */ goto L_0040a3a0;
L_0040a396:; BB(0x0040a396);
    /* 0040a396: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0040a399: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x40a39eu); f_0082df08();
    /* 0040a39e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0040a3a0:; BB(0x0040a3a0);
    /* 0040a3a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3a1: call 0x4d45a0 */ r_esp -= 4; W32(r_esp, 0x40a3a6u); f_004d45a0();
    /* 0040a3a6: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 0040a3a9: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040a3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3ae: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x40a3b3u); f_004d33c0();
    /* 0040a3b3: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040a3b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a3b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040a3b8: ret  */ FN_RET(0x0040a1d4); r_esp += 4; return;
}

void f_0040a3bc(void) /* sub_40A3BC */
{
    FN_ENTER(0x0040a3bc);
    /* 0040a3bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040a3bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040a3c1: call 0x40a3e0 */ r_esp -= 4; W32(r_esp, 0x40a3c6u); f_0040a3e0();
    /* 0040a3c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040a3ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040a3cc: jne 0x40a3d2 */ if (!fZ) goto L_0040a3d2;
L_0040a3ce:; BB(0x0040a3ce);
    /* 0040a3ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a3cf: ret 4 */ FN_RET(0x0040a3bc); r_esp += 8; return;
L_0040a3d2:; BB(0x0040a3d2);
    /* 0040a3d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40a3d8u); f_005c2f74();
    /* 0040a3d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040a3d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040a3da: ret 4 */ FN_RET(0x0040a3bc); r_esp += 8; return;
}

void f_0040a3e0(void) /* sub_40A3E0 */
{
    FN_ENTER(0x0040a3e0);
    /* 0040a3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3e5: push 0x8cc4dc */ { u32 v = 0x8cc4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040a3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040a3f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a3fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040a3fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040a401: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040a404: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040a407: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040a40a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a40d: mov dword ptr [ecx], 0xaf26f0 */ W32((u32)(r_ecx), 0xaf26f0u);
    /* 0040a413: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040a41a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40a41fu); f_008171e8();
    /* 0040a41f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a422: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040a429: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a42b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a42c: ret  */ FN_RET(0x0040a3e0); r_esp += 4; return;
}

void f_0040a430(void) /* sub_40A430 */
{
    FN_ENTER(0x0040a430);
    /* 0040a430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a431: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a435: push 0x8cc52e */ { u32 v = 0x8cc52eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a43a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040a440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040a448: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a44b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040a44e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040a451: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040a454: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040a457: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040a45a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040a45d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040a460: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040a463: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40a468u); f_008193cc();
    /* 0040a468: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a46f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a472: mov dword ptr [edx], 0xaf26f0 */ W32((u32)(r_edx), 0xaf26f0u);
    /* 0040a478: mov eax, dword ptr [0x9a3088] */ r_eax = R32((u32)(0x9a3088u));
    /* 0040a47d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0040a484: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a486: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040a489: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40a48eu); f_005caba4();
    /* 0040a48e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040a48f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040a492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a494: je 0x40a4ba */ if (fZ) goto L_0040a4ba;
L_0040a496:; BB(0x0040a496);
    /* 0040a496: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0040a49d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040a4a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a4a7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040a4aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4ab: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040a4ae: call 0x40a144 */ r_esp -= 4; W32(r_esp, 0x40a4b3u); f_0040a144();
    /* 0040a4b3: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0040a4ba:; BB(0x0040a4ba);
    /* 0040a4ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040a4c1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040a4c8: push 0x3a0 */ { u32 v = 0x3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4cd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40a4d2u); f_005caba4();
    /* 0040a4d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040a4d3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040a4d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040a4d8: je 0x40a4fa */ if (fZ) goto L_0040a4fa;
L_0040a4da:; BB(0x0040a4da);
    /* 0040a4da: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0040a4e1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040a4e8: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040a4eb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040a4ee: call 0x40aa28 */ r_esp -= 4; W32(r_esp, 0x40a4f3u); f_0040aa28();
    /* 0040a4f3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0040a4fa:; BB(0x0040a4fa);
    /* 0040a4fa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a4fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a500: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040a507: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a50a: ret 8 */ FN_RET(0x0040a430); r_esp += 12; return;
}

void f_0040a510(void) /* sub_40A510 */
{
    FN_ENTER(0x0040a510);
    /* 0040a510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a511: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a515: push 0x8cc548 */ { u32 v = 0x8cc548u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a51a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040a520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a521: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040a528: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a52b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040a52e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040a531: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040a534: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040a537: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040a53a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040a53d: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a53f: mov edx, dword ptr [eax + 0x39c] */ r_edx = R32((u32)(r_eax+0x39cu));
    /* 0040a545: mov dword ptr [eax], 0xaf2750 */ W32((u32)(r_eax), 0xaf2750u);
    /* 0040a54b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a54d: je 0x40a568 */ if (fZ) goto L_0040a568;
L_0040a54f:; BB(0x0040a54f);
    /* 0040a54f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a553: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a558: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a55c: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a55e: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
L_0040a568:; BB(0x0040a568);
    /* 0040a568: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a56a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0040a56d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a56f: je 0x40a587 */ if (fZ) goto L_0040a587;
L_0040a571:; BB(0x0040a571);
    /* 0040a571: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a575: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a57a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a57e: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a580: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_0040a587:; BB(0x0040a587);
    /* 0040a587: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a589: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040a58c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a58e: je 0x40a5a6 */ if (fZ) goto L_0040a5a6;
L_0040a590:; BB(0x0040a590);
    /* 0040a590: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a594: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a599: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a59d: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a59f: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
L_0040a5a6:; BB(0x0040a5a6);
    /* 0040a5a6: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a5a8: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0040a5ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a5ad: je 0x40a5c5 */ if (fZ) goto L_0040a5c5;
L_0040a5af:; BB(0x0040a5af);
    /* 0040a5af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a5b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a5b8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a5bc: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a5be: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
L_0040a5c5:; BB(0x0040a5c5);
    /* 0040a5c5: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a5c7: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0040a5cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a5cf: je 0x40a5ea */ if (fZ) goto L_0040a5ea;
L_0040a5d1:; BB(0x0040a5d1);
    /* 0040a5d1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a5d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a5da: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a5de: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a5e0: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
L_0040a5ea:; BB(0x0040a5ea);
    /* 0040a5ea: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a5ec: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0040a5f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a5f4: je 0x40a60f */ if (fZ) goto L_0040a60f;
L_0040a5f6:; BB(0x0040a5f6);
    /* 0040a5f6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a5fa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a5ff: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a603: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a605: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
L_0040a60f:; BB(0x0040a60f);
    /* 0040a60f: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a611: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 0040a617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a619: je 0x40a634 */ if (fZ) goto L_0040a634;
L_0040a61b:; BB(0x0040a61b);
    /* 0040a61b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a61f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a624: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a628: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a62a: mov dword ptr [edx + 0xc0], 0 */ W32((u32)(r_edx+0xc0u), 0x0u);
L_0040a634:; BB(0x0040a634);
    /* 0040a634: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a636: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 0040a63c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a63e: je 0x40a659 */ if (fZ) goto L_0040a659;
L_0040a640:; BB(0x0040a640);
    /* 0040a640: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a644: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a649: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a64d: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a64f: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
L_0040a659:; BB(0x0040a659);
    /* 0040a659: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a65b: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0040a661: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a663: je 0x40a67e */ if (fZ) goto L_0040a67e;
L_0040a665:; BB(0x0040a665);
    /* 0040a665: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a669: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a66e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a672: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a674: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
L_0040a67e:; BB(0x0040a67e);
    /* 0040a67e: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a680: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 0040a686: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a688: je 0x40a6a3 */ if (fZ) goto L_0040a6a3;
L_0040a68a:; BB(0x0040a68a);
    /* 0040a68a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a68e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a693: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a697: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a699: mov dword ptr [edx + 0x114], 0 */ W32((u32)(r_edx+0x114u), 0x0u);
L_0040a6a3:; BB(0x0040a6a3);
    /* 0040a6a3: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a6a5: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 0040a6ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a6ad: je 0x40a6c8 */ if (fZ) goto L_0040a6c8;
L_0040a6af:; BB(0x0040a6af);
    /* 0040a6af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a6b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a6b8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a6bc: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a6be: mov dword ptr [edx + 0x130], 0 */ W32((u32)(r_edx+0x130u), 0x0u);
L_0040a6c8:; BB(0x0040a6c8);
    /* 0040a6c8: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a6ca: mov edx, dword ptr [eax + 0x14c] */ r_edx = R32((u32)(r_eax+0x14cu));
    /* 0040a6d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a6d2: je 0x40a6ed */ if (fZ) goto L_0040a6ed;
L_0040a6d4:; BB(0x0040a6d4);
    /* 0040a6d4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a6d8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a6dd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a6e1: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a6e3: mov dword ptr [edx + 0x14c], 0 */ W32((u32)(r_edx+0x14cu), 0x0u);
L_0040a6ed:; BB(0x0040a6ed);
    /* 0040a6ed: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a6ef: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0040a6f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a6f7: je 0x40a712 */ if (fZ) goto L_0040a712;
L_0040a6f9:; BB(0x0040a6f9);
    /* 0040a6f9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a6fd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a702: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a706: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a708: mov dword ptr [edx + 0x168], 0 */ W32((u32)(r_edx+0x168u), 0x0u);
L_0040a712:; BB(0x0040a712);
    /* 0040a712: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a714: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 0040a71a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a71c: je 0x40a737 */ if (fZ) goto L_0040a737;
L_0040a71e:; BB(0x0040a71e);
    /* 0040a71e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a722: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a727: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a72b: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a72d: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
L_0040a737:; BB(0x0040a737);
    /* 0040a737: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a739: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 0040a73f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a741: je 0x40a75c */ if (fZ) goto L_0040a75c;
L_0040a743:; BB(0x0040a743);
    /* 0040a743: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a747: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a74c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a750: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a752: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
L_0040a75c:; BB(0x0040a75c);
    /* 0040a75c: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a75e: mov edx, dword ptr [eax + 0x1bc] */ r_edx = R32((u32)(r_eax+0x1bcu));
    /* 0040a764: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a766: je 0x40a781 */ if (fZ) goto L_0040a781;
L_0040a768:; BB(0x0040a768);
    /* 0040a768: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a76c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a771: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a775: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a777: mov dword ptr [edx + 0x1bc], 0 */ W32((u32)(r_edx+0x1bcu), 0x0u);
L_0040a781:; BB(0x0040a781);
    /* 0040a781: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a783: mov edx, dword ptr [eax + 0x1d8] */ r_edx = R32((u32)(r_eax+0x1d8u));
    /* 0040a789: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a78b: je 0x40a7a6 */ if (fZ) goto L_0040a7a6;
L_0040a78d:; BB(0x0040a78d);
    /* 0040a78d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a791: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a796: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a79a: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a79c: mov dword ptr [edx + 0x1d8], 0 */ W32((u32)(r_edx+0x1d8u), 0x0u);
L_0040a7a6:; BB(0x0040a7a6);
    /* 0040a7a6: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a7a8: mov edx, dword ptr [eax + 0x1f4] */ r_edx = R32((u32)(r_eax+0x1f4u));
    /* 0040a7ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a7b0: je 0x40a7cb */ if (fZ) goto L_0040a7cb;
L_0040a7b2:; BB(0x0040a7b2);
    /* 0040a7b2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a7b6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a7bb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a7bf: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a7c1: mov dword ptr [edx + 0x1f4], 0 */ W32((u32)(r_edx+0x1f4u), 0x0u);
L_0040a7cb:; BB(0x0040a7cb);
    /* 0040a7cb: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a7cd: mov edx, dword ptr [eax + 0x210] */ r_edx = R32((u32)(r_eax+0x210u));
    /* 0040a7d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a7d5: je 0x40a7f0 */ if (fZ) goto L_0040a7f0;
L_0040a7d7:; BB(0x0040a7d7);
    /* 0040a7d7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a7db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a7e0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a7e4: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a7e6: mov dword ptr [edx + 0x210], 0 */ W32((u32)(r_edx+0x210u), 0x0u);
L_0040a7f0:; BB(0x0040a7f0);
    /* 0040a7f0: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a7f2: mov edx, dword ptr [eax + 0x22c] */ r_edx = R32((u32)(r_eax+0x22cu));
    /* 0040a7f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a7fa: je 0x40a815 */ if (fZ) goto L_0040a815;
L_0040a7fc:; BB(0x0040a7fc);
    /* 0040a7fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a800: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a805: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a809: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a80b: mov dword ptr [edx + 0x22c], 0 */ W32((u32)(r_edx+0x22cu), 0x0u);
L_0040a815:; BB(0x0040a815);
    /* 0040a815: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a817: mov edx, dword ptr [eax + 0x248] */ r_edx = R32((u32)(r_eax+0x248u));
    /* 0040a81d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a81f: je 0x40a83a */ if (fZ) goto L_0040a83a;
L_0040a821:; BB(0x0040a821);
    /* 0040a821: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a825: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a82a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a82e: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a830: mov dword ptr [edx + 0x248], 0 */ W32((u32)(r_edx+0x248u), 0x0u);
L_0040a83a:; BB(0x0040a83a);
    /* 0040a83a: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a83c: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 0040a842: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a844: je 0x40a85f */ if (fZ) goto L_0040a85f;
L_0040a846:; BB(0x0040a846);
    /* 0040a846: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a84a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a84f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a853: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a855: mov dword ptr [edx + 0x264], 0 */ W32((u32)(r_edx+0x264u), 0x0u);
L_0040a85f:; BB(0x0040a85f);
    /* 0040a85f: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a861: mov edx, dword ptr [eax + 0x280] */ r_edx = R32((u32)(r_eax+0x280u));
    /* 0040a867: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a869: je 0x40a884 */ if (fZ) goto L_0040a884;
L_0040a86b:; BB(0x0040a86b);
    /* 0040a86b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a86f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a874: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a878: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a87a: mov dword ptr [edx + 0x280], 0 */ W32((u32)(r_edx+0x280u), 0x0u);
L_0040a884:; BB(0x0040a884);
    /* 0040a884: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a886: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 0040a88c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a88e: je 0x40a8a9 */ if (fZ) goto L_0040a8a9;
L_0040a890:; BB(0x0040a890);
    /* 0040a890: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a894: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a899: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a89d: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a89f: mov dword ptr [edx + 0x29c], 0 */ W32((u32)(r_edx+0x29cu), 0x0u);
L_0040a8a9:; BB(0x0040a8a9);
    /* 0040a8a9: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a8ab: mov edx, dword ptr [eax + 0x2b8] */ r_edx = R32((u32)(r_eax+0x2b8u));
    /* 0040a8b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8b3: je 0x40a8ce */ if (fZ) goto L_0040a8ce;
L_0040a8b5:; BB(0x0040a8b5);
    /* 0040a8b5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a8b9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a8be: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a8c2: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a8c4: mov dword ptr [edx + 0x2b8], 0 */ W32((u32)(r_edx+0x2b8u), 0x0u);
L_0040a8ce:; BB(0x0040a8ce);
    /* 0040a8ce: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a8d0: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 0040a8d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8d8: je 0x40a8f3 */ if (fZ) goto L_0040a8f3;
L_0040a8da:; BB(0x0040a8da);
    /* 0040a8da: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a8de: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a8e3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a8e7: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a8e9: mov dword ptr [edx + 0x2d4], 0 */ W32((u32)(r_edx+0x2d4u), 0x0u);
L_0040a8f3:; BB(0x0040a8f3);
    /* 0040a8f3: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a8f5: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0040a8fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8fd: je 0x40a918 */ if (fZ) goto L_0040a918;
L_0040a8ff:; BB(0x0040a8ff);
    /* 0040a8ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a903: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a908: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a90c: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a90e: mov dword ptr [edx + 0x2f0], 0 */ W32((u32)(r_edx+0x2f0u), 0x0u);
L_0040a918:; BB(0x0040a918);
    /* 0040a918: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a91a: mov edx, dword ptr [eax + 0x30c] */ r_edx = R32((u32)(r_eax+0x30cu));
    /* 0040a920: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a922: je 0x40a93d */ if (fZ) goto L_0040a93d;
L_0040a924:; BB(0x0040a924);
    /* 0040a924: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a928: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a92d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a931: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a933: mov dword ptr [edx + 0x30c], 0 */ W32((u32)(r_edx+0x30cu), 0x0u);
L_0040a93d:; BB(0x0040a93d);
    /* 0040a93d: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a93f: mov edx, dword ptr [eax + 0x328] */ r_edx = R32((u32)(r_eax+0x328u));
    /* 0040a945: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a947: je 0x40a962 */ if (fZ) goto L_0040a962;
L_0040a949:; BB(0x0040a949);
    /* 0040a949: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a94d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a952: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a956: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a958: mov dword ptr [edx + 0x328], 0 */ W32((u32)(r_edx+0x328u), 0x0u);
L_0040a962:; BB(0x0040a962);
    /* 0040a962: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a964: mov edx, dword ptr [eax + 0x344] */ r_edx = R32((u32)(r_eax+0x344u));
    /* 0040a96a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a96c: je 0x40a987 */ if (fZ) goto L_0040a987;
L_0040a96e:; BB(0x0040a96e);
    /* 0040a96e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a972: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a977: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a97b: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a97d: mov dword ptr [edx + 0x344], 0 */ W32((u32)(r_edx+0x344u), 0x0u);
L_0040a987:; BB(0x0040a987);
    /* 0040a987: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a989: mov edx, dword ptr [eax + 0x360] */ r_edx = R32((u32)(r_eax+0x360u));
    /* 0040a98f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a991: je 0x40a9ac */ if (fZ) goto L_0040a9ac;
L_0040a993:; BB(0x0040a993);
    /* 0040a993: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a997: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a99c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9a0: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9a2: mov dword ptr [edx + 0x360], 0 */ W32((u32)(r_edx+0x360u), 0x0u);
L_0040a9ac:; BB(0x0040a9ac);
    /* 0040a9ac: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a9ae: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0040a9b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a9b6: je 0x40a9d1 */ if (fZ) goto L_0040a9d1;
L_0040a9b8:; BB(0x0040a9b8);
    /* 0040a9b8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a9bc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a9c1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9c5: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9c7: mov dword ptr [edx + 0x37c], 0 */ W32((u32)(r_edx+0x37cu), 0x0u);
L_0040a9d1:; BB(0x0040a9d1);
    /* 0040a9d1: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a9d3: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 0040a9d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a9db: je 0x40a9f6 */ if (fZ) goto L_0040a9f6;
L_0040a9dd:; BB(0x0040a9dd);
    /* 0040a9dd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a9e1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a9e6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9ea: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9ec: mov dword ptr [edx + 0x398], 0 */ W32((u32)(r_edx+0x398u), 0x0u);
L_0040a9f6:; BB(0x0040a9f6);
    /* 0040a9f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040a9fd: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40aa02u); f_008171e8();
    /* 0040aa02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040aa05: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040aa07: jne 0x40aa19 */ if (!fZ) goto L_0040aa19;
L_0040aa09:; BB(0x0040aa09);
    /* 0040aa09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aa0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040aa13: mov esp, ebp */ r_esp = r_ebp;
    /* 0040aa15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040aa16: ret 4 */ FN_RET(0x0040a510); r_esp += 8; return;
L_0040aa19:; BB(0x0040aa19);
    /* 0040aa19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040aa1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa1d: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40aa22u); f_005c2f74();
    /* 0040aa22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040aa23: jmp 0x40aa09 */ goto L_0040aa09;
}

void f_0040a8a0(void)
{
    FN_ENTER(0x0040a8a0);
    /* 0040a8a0: sbb byte ptr [edx + eax], 0 */ { u32 ad = (u32)(r_edx+r_eax); u32 c = fC; u32 a = R8(ad); u32 b = 0x0u; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 0040a8a8: add byte ptr [ebx - 0x476f743f], cl */ { u32 ad = (u32)(r_ebx+0xb8908bc1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040a8ae: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040a8b0: add byte ptr [ebp + 0xf1974d2], al */ { u32 ad = (u32)(r_ebp+0xf1974d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040a8b6: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 0040a8b8: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0040a8be: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a8c2: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a8c4: mov dword ptr [edx + 0x2b8], 0 */ W32((u32)(r_edx+0x2b8u), 0x0u);
    /* 0040a8ce: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a8d0: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 0040a8d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8d8: je 0x40a8f3 */ if (fZ) goto L_0040a8f3;
L_0040a8da:; BB(0x0040a8da);
    /* 0040a8da: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a8de: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a8e3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a8e7: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a8e9: mov dword ptr [edx + 0x2d4], 0 */ W32((u32)(r_edx+0x2d4u), 0x0u);
L_0040a8f3:; BB(0x0040a8f3);
    /* 0040a8f3: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a8f5: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0040a8fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8fd: je 0x40a918 */ if (fZ) goto L_0040a918;
L_0040a8ff:; BB(0x0040a8ff);
    /* 0040a8ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a903: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a908: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a90c: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a90e: mov dword ptr [edx + 0x2f0], 0 */ W32((u32)(r_edx+0x2f0u), 0x0u);
L_0040a918:; BB(0x0040a918);
    /* 0040a918: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a91a: mov edx, dword ptr [eax + 0x30c] */ r_edx = R32((u32)(r_eax+0x30cu));
    /* 0040a920: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a922: je 0x40a93d */ if (fZ) goto L_0040a93d;
L_0040a924:; BB(0x0040a924);
    /* 0040a924: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a928: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a92d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a931: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a933: mov dword ptr [edx + 0x30c], 0 */ W32((u32)(r_edx+0x30cu), 0x0u);
L_0040a93d:; BB(0x0040a93d);
    /* 0040a93d: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a93f: mov edx, dword ptr [eax + 0x328] */ r_edx = R32((u32)(r_eax+0x328u));
    /* 0040a945: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a947: je 0x40a962 */ if (fZ) goto L_0040a962;
L_0040a949:; BB(0x0040a949);
    /* 0040a949: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a94d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a952: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a956: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a958: mov dword ptr [edx + 0x328], 0 */ W32((u32)(r_edx+0x328u), 0x0u);
L_0040a962:; BB(0x0040a962);
    /* 0040a962: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a964: mov edx, dword ptr [eax + 0x344] */ r_edx = R32((u32)(r_eax+0x344u));
    /* 0040a96a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a96c: je 0x40a987 */ if (fZ) goto L_0040a987;
L_0040a96e:; BB(0x0040a96e);
    /* 0040a96e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a972: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a977: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a97b: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a97d: mov dword ptr [edx + 0x344], 0 */ W32((u32)(r_edx+0x344u), 0x0u);
L_0040a987:; BB(0x0040a987);
    /* 0040a987: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a989: mov edx, dword ptr [eax + 0x360] */ r_edx = R32((u32)(r_eax+0x360u));
    /* 0040a98f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a991: je 0x40a9ac */ if (fZ) goto L_0040a9ac;
L_0040a993:; BB(0x0040a993);
    /* 0040a993: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a997: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a99c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9a0: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9a2: mov dword ptr [edx + 0x360], 0 */ W32((u32)(r_edx+0x360u), 0x0u);
L_0040a9ac:; BB(0x0040a9ac);
    /* 0040a9ac: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a9ae: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0040a9b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a9b6: je 0x40a9d1 */ if (fZ) goto L_0040a9d1;
L_0040a9b8:; BB(0x0040a9b8);
    /* 0040a9b8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a9bc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a9c1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9c5: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9c7: mov dword ptr [edx + 0x37c], 0 */ W32((u32)(r_edx+0x37cu), 0x0u);
L_0040a9d1:; BB(0x0040a9d1);
    /* 0040a9d1: mov eax, ecx */ r_eax = r_ecx;
    /* 0040a9d3: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 0040a9d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a9db: je 0x40a9f6 */ if (fZ) goto L_0040a9f6;
L_0040a9dd:; BB(0x0040a9dd);
    /* 0040a9dd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040a9e1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040a9e6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040a9ea: mov edx, ecx */ r_edx = r_ecx;
    /* 0040a9ec: mov dword ptr [edx + 0x398], 0 */ W32((u32)(r_edx+0x398u), 0x0u);
L_0040a9f6:; BB(0x0040a9f6);
    /* 0040a9f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040a9fd: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40aa02u); f_008171e8();
    /* 0040aa02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040aa05: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040aa07: jne 0x40aa19 */ if (!fZ) goto L_0040aa19;
L_0040aa09:; BB(0x0040aa09);
    /* 0040aa09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040aa0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040aa13: mov esp, ebp */ r_esp = r_ebp;
    /* 0040aa15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040aa16: ret 4 */ FN_RET(0x0040a8a0); r_esp += 8; return;
L_0040aa19:; BB(0x0040aa19);
    /* 0040aa19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040aa1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa1d: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40aa22u); f_005c2f74();
    /* 0040aa22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040aa23: jmp 0x40aa09 */ goto L_0040aa09;
}

void f_0040aa28(void) /* sub_40AA28 */
{
    FN_ENTER(0x0040aa28);
    /* 0040aa28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa29: mov ebp, esp */ r_ebp = r_esp;
    /* 0040aa2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa2d: push 0x8cc564 */ { u32 v = 0x8cc564u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040aa38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040aa40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040aa46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040aa49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040aa4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040aa4f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040aa52: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040aa55: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40aa5au); f_008193cc();
    /* 0040aa5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040aa61: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040aa64: mov dword ptr [edx], 0xaf2750 */ W32((u32)(r_edx), 0xaf2750u);
    /* 0040aa6a: mov eax, dword ptr [0x9a308c] */ r_eax = R32((u32)(0x9a308cu));
    /* 0040aa6f: push 0x380 */ { u32 v = 0x380u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa76: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040aa79: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040aa7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa7d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x40aa82u); f_0086b688();
    /* 0040aa82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa85: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040aa88: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 0040aa92: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0040aa94:; BB(0x0040aa94);
    /* 0040aa94: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa98: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0040aa9b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040aa9d: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa9f: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0040aaa2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040aaa4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040aaa6: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0040aaa8: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0040aaab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040aaad: mov edi, dword ptr [edx + esi*8 + 0x8f9ba0] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9ba0u));
    /* 0040aab4: mov dword ptr [ebx + ecx + 0x1c], edi */ W32((u32)(r_ebx+r_ecx+0x1cu), r_edi);
    /* 0040aab8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0040aabb: mov edi, dword ptr [edx + esi*8 + 0x8f9ba4] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9ba4u));
    /* 0040aac2: mov dword ptr [ebx + ecx + 0x20], edi */ W32((u32)(r_ebx+r_ecx+0x20u), r_edi);
    /* 0040aac6: mov edi, dword ptr [edx + esi*8 + 0x8f9ba8] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9ba8u));
    /* 0040aacd: mov dword ptr [ebx + ecx + 0x24], edi */ W32((u32)(r_ebx+r_ecx+0x24u), r_edi);
    /* 0040aad1: mov edi, dword ptr [edx + esi*8 + 0x8f9b00] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9b00u));
    /* 0040aad8: mov dword ptr [ebx + ecx + 0x28], edi */ W32((u32)(r_ebx+r_ecx+0x28u), r_edi);
    /* 0040aadc: mov edi, dword ptr [edx + esi*8 + 0x8f9b04] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9b04u));
    /* 0040aae3: mov dword ptr [ebx + ecx + 0x2c], edi */ W32((u32)(r_ebx+r_ecx+0x2cu), r_edi);
    /* 0040aae7: mov edi, dword ptr [edx + esi*8 + 0x8f9b08] */ r_edi = R32((u32)(r_edx+r_esi*8+0x8f9b08u));
    /* 0040aaee: mov dword ptr [ebx + ecx + 0x30], edi */ W32((u32)(r_ebx+r_ecx+0x30u), r_edi);
    /* 0040aaf2: lea edi, [edx + eax + 0x8f9ba0] */ r_edi = (u32)(r_edx+r_eax+0x8f9ba0u);
    /* 0040aaf9: lea ecx, [edx + eax + 0x8f9b00] */ r_ecx = (u32)(r_edx+r_eax+0x8f9b00u);
    /* 0040ab00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab02: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x40ab07u); f_0050a664();
    /* 0040ab07: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ab0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ab0d: mov dword ptr [ebx + ecx + 0x34], eax */ W32((u32)(r_ebx+r_ecx+0x34u), r_eax);
    /* 0040ab11: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040ab14: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab17: jl 0x40aa94 */ if ((fS!=fO)) goto L_0040aa94;
L_0040ab1d:; BB(0x0040ab1d);
    /* 0040ab1d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab21: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab23: push 0x8f9c3c */ { u32 v = 0x8f9c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab28: push 0x8f9c30 */ { u32 v = 0x8f9c30u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab2d: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x40ab32u); f_0050a664();
    /* 0040ab32: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040ab35: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ab38: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040ab3b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ab3e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ab41: mov dword ptr [edx + 0x39c], eax */ W32((u32)(r_edx+0x39cu), r_eax);
    /* 0040ab47: mov eax, edx */ r_eax = r_edx;
    /* 0040ab49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ab4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040ab53: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ab55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ab56: ret 4 */ FN_RET(0x0040aa28); r_esp += 8; return;
}

void f_0040ab5c(void) /* sub_40AB5C */
{
    FN_ENTER(0x0040ab5c);
    /* 0040ab5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab5e: mov edi, ecx */ r_edi = r_ecx;
    /* 0040ab60: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0040ab63: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0040ab6a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ab6c: je 0x40ab7f */ if (fZ) goto L_0040ab7f;
L_0040ab6e:; BB(0x0040ab6e);
    /* 0040ab6e: mov dword ptr [edi + 0x30], 1 */ W32((u32)(r_edi+0x30u), 0x1u);
    /* 0040ab75: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 0040ab7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040ab7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040ab7e: ret  */ FN_RET(0x0040ab5c); r_esp += 4; return;
L_0040ab7f:; BB(0x0040ab7f);
    /* 0040ab7f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ab81: je 0x40abee */ if (fZ) goto L_0040abee;
L_0040ab83:; BB(0x0040ab83);
    /* 0040ab83: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x40ab88u); f_007365f4();
    /* 0040ab88: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0040ab8b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0040ab8e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x40ab93u); f_007365f4();
    /* 0040ab93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ab95: jl 0x40abee */ if ((fS!=fO)) goto L_0040abee;
L_0040ab97:; BB(0x0040ab97);
    /* 0040ab97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040ab9a: jg 0x40aba6 */ if ((!fZ&&fS==fO)) goto L_0040aba6;
L_0040ab9c:; BB(0x0040ab9c);
    /* 0040ab9c: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 0040aba3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040aba4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040aba5: ret  */ FN_RET(0x0040ab5c); r_esp += 4; return;
L_0040aba6:; BB(0x0040aba6);
    /* 0040aba6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040aba9: jne 0x40abee */ if (!fZ) goto L_0040abee;
L_0040abab:; BB(0x0040abab);
    /* 0040abab: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0040abae: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x40abb3u); f_0073600c();
    /* 0040abb3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040abb6: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x40abbbu); f_0073cd8c();
    /* 0040abbb: mov esi, eax */ r_esi = r_eax;
    /* 0040abbd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abbf: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abc1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40abc6u); f_00792fe8();
    /* 0040abc6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040abc9: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abce: mov ecx, esi */ r_ecx = r_esi;
    /* 0040abd0: push 0x8f9c74 */ { u32 v = 0x8f9c74u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040abd6: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x40abdbu); f_0073ce70();
    /* 0040abdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040abdd: mov ecx, esi */ r_ecx = r_esi;
    /* 0040abdf: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x40abe4u); f_0073d148();
    /* 0040abe4: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 0040abeb: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
L_0040abee:; BB(0x0040abee);
    /* 0040abee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040abef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040abf0: ret  */ FN_RET(0x0040ab5c); r_esp += 4; return;
}

void f_0040abf4(void) /* sub_40ABF4 */
{
    FN_ENTER(0x0040abf4);
    /* 0040abf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040abf5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040abf7: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040abfa: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x40abffu); f_0073d114();
    /* 0040abff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac01: je 0x40ac4b */ if (fZ) goto L_0040ac4b;
L_0040ac03:; BB(0x0040ac03);
    /* 0040ac03: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0040ac06: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x40ac0bu); f_0073605c();
    /* 0040ac0b: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0040ac0e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0040ac15: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040ac1a: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0040ac1d: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0040ac24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac26: je 0x40ac2f */ if (fZ) goto L_0040ac2f;
L_0040ac28:; BB(0x0040ac28);
    /* 0040ac28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac2a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x40ac2fu); f_00760acc();
L_0040ac2f:; BB(0x0040ac2f);
    /* 0040ac2f: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040ac32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ac34: je 0x40ac42 */ if (fZ) goto L_0040ac42;
L_0040ac36:; BB(0x0040ac36);
    /* 0040ac36: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x40ac3bu); f_0073d160();
    /* 0040ac3b: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_0040ac42:; BB(0x0040ac42);
    /* 0040ac42: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 0040ac49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ac4a: ret  */ FN_RET(0x0040abf4); r_esp += 4; return;
L_0040ac4b:; BB(0x0040ac4b);
    /* 0040ac4b: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040ac4e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x40ac53u); f_0073ce50();
    /* 0040ac53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ac55: je 0x40ad01 */ if (fZ) goto L_0040ad01;
L_0040ac5b:; BB(0x0040ac5b);
    /* 0040ac5b: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040ac5e: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x40ac63u); f_0073d134();
    /* 0040ac63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac65: jne 0x40acb6 */ if (!fZ) goto L_0040acb6;
L_0040ac67:; BB(0x0040ac67);
    /* 0040ac67: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0040ac6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac6c: je 0x40ac82 */ if (fZ) goto L_0040ac82;
L_0040ac6e:; BB(0x0040ac6e);
    /* 0040ac6e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040ac72: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040ac77: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040ac7b: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_0040ac82:; BB(0x0040ac82);
    /* 0040ac82: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40ac87u); f_006dc358();
    /* 0040ac87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac8b: call 0x407554 */ r_esp -= 4; W32(r_esp, 0x40ac90u); f_00407554();
    /* 0040ac90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ac93: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0040ac96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac98: je 0x40ad03 */ if (fZ) goto L_0040ad03;
L_0040ac9a:; BB(0x0040ac9a);
    /* 0040ac9a: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040ac9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ac9f: je 0x40acad */ if (fZ) goto L_0040acad;
L_0040aca1:; BB(0x0040aca1);
    /* 0040aca1: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x40aca6u); f_0073d160();
    /* 0040aca6: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_0040acad:; BB(0x0040acad);
    /* 0040acad: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 0040acb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040acb5: ret  */ FN_RET(0x0040abf4); r_esp += 4; return;
L_0040acb6:; BB(0x0040acb6);
    /* 0040acb6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040acb9: jne 0x40ad01 */ if (!fZ) goto L_0040ad01;
L_0040acbb:; BB(0x0040acbb);
    /* 0040acbb: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0040acbe: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x40acc3u); f_0073605c();
    /* 0040acc3: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0040acc6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0040accd: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040acd2: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0040acd5: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0040acdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040acde: je 0x40ace7 */ if (fZ) goto L_0040ace7;
L_0040ace0:; BB(0x0040ace0);
    /* 0040ace0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ace2: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x40ace7u); f_00760acc();
L_0040ace7:; BB(0x0040ace7);
    /* 0040ace7: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040acea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040acec: je 0x40acfa */ if (fZ) goto L_0040acfa;
L_0040acee:; BB(0x0040acee);
    /* 0040acee: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x40acf3u); f_0073d160();
    /* 0040acf3: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_0040acfa:; BB(0x0040acfa);
    /* 0040acfa: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
L_0040ad01:; BB(0x0040ad01);
    /* 0040ad01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ad02: ret  */ FN_RET(0x0040abf4); r_esp += 4; return;
L_0040ad03:; BB(0x0040ad03);
    /* 0040ad03: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0040ad06: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x40ad0bu); f_0073605c();
    /* 0040ad0b: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0040ad0e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0040ad15: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0040ad1a: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0040ad1d: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0040ad24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ad26: je 0x40ad2f */ if (fZ) goto L_0040ad2f;
L_0040ad28:; BB(0x0040ad28);
    /* 0040ad28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad2a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x40ad2fu); f_00760acc();
L_0040ad2f:; BB(0x0040ad2f);
    /* 0040ad2f: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0040ad32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ad34: je 0x40ad42 */ if (fZ) goto L_0040ad42;
L_0040ad36:; BB(0x0040ad36);
    /* 0040ad36: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x40ad3bu); f_0073d160();
    /* 0040ad3b: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
L_0040ad42:; BB(0x0040ad42);
    /* 0040ad42: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 0040ad49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ad4a: ret  */ FN_RET(0x0040abf4); r_esp += 4; return;
}

void f_0040ad4c(void) /* sub_40AD4C */
{
    FN_ENTER(0x0040ad4c);
    /* 0040ad4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040ad4f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0040ad52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ad54: je 0x40ad9c */ if (fZ) goto L_0040ad9c;
L_0040ad56:; BB(0x0040ad56);
    /* 0040ad56: call 0x4076b0 */ r_esp -= 4; W32(r_esp, 0x40ad5bu); f_004076b0();
    /* 0040ad5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0040ad5d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040ad60: je 0x40ada5 */ if (fZ) goto L_0040ada5;
L_0040ad62:; BB(0x0040ad62);
    /* 0040ad62: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040ad65: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0040ad69: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0040ad6f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0040ad73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ad75: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0040ad7c: jne 0x40ad93 */ if (!fZ) goto L_0040ad93;
L_0040ad7e:; BB(0x0040ad7e);
    /* 0040ad7e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40ad83u); f_006dc358();
    /* 0040ad83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad84: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x40ad89u); f_0061cdb0();
    /* 0040ad89: mov dword ptr [ebx + 0x20], 4 */ W32((u32)(r_ebx+0x20u), 0x4u);
    /* 0040ad90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ad91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ad92: ret  */ FN_RET(0x0040ad4c); r_esp += 4; return;
L_0040ad93:; BB(0x0040ad93);
    /* 0040ad93: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 0040ad9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ad9b: ret  */ FN_RET(0x0040ad4c); r_esp += 4; return;
L_0040ad9c:; BB(0x0040ad9c);
    /* 0040ad9c: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 0040ada3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ada4: ret  */ FN_RET(0x0040ad4c); r_esp += 4; return;
L_0040ada5:; BB(0x0040ada5);
    /* 0040ada5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ada6: ret  */ FN_RET(0x0040ad4c); r_esp += 4; return;
}

void f_0040ada8(void) /* sub_40ADA8 */
{
    FN_ENTER(0x0040ada8);
    /* 0040ada8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ada9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040adab: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040adb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040adb2: jne 0x40adca */ if (!fZ) goto L_0040adca;
L_0040adb4:; BB(0x0040adb4);
    /* 0040adb4: call 0x6c2944 */ r_esp -= 4; W32(r_esp, 0x40adb9u); f_006c2944();
    /* 0040adb9: mov dword ptr [0xa95de0], 0xf */ W32((u32)(0xa95de0u), 0xfu);
    /* 0040adc3: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
L_0040adca:; BB(0x0040adca);
    /* 0040adca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040adcb: ret  */ FN_RET(0x0040ada8); r_esp += 4; return;
}

void f_0040adcc(void) /* sub_40ADCC */
{
    FN_ENTER(0x0040adcc);
    /* 0040adcc: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0040add1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040add3: jne 0x40addc */ if (!fZ) goto L_0040addc;
L_0040add5:; BB(0x0040add5);
    /* 0040add5: mov dword ptr [ecx + 0x20], 6 */ W32((u32)(r_ecx+0x20u), 0x6u);
L_0040addc:; BB(0x0040addc);
    /* 0040addc: ret  */ FN_RET(0x0040adcc); r_esp += 4; return;
}

void f_0040ade0(void) /* sub_40ADE0 */
{
    FN_ENTER(0x0040ade0);
    /* 0040ade0: mov dword ptr [ecx + 0x20], 7 */ W32((u32)(r_ecx+0x20u), 0x7u);
    /* 0040ade7: ret  */ FN_RET(0x0040ade0); r_esp += 4; return;
}

void f_0040ade8(void) /* sub_40ADE8 */
{
    FN_ENTER(0x0040ade8);
    /* 0040ade8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ade9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040adeb: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0040adee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040adf0: je 0x40adfe */ if (fZ) goto L_0040adfe;
L_0040adf2:; BB(0x0040adf2);
    /* 0040adf2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x40adf7u); f_007127b0();
    /* 0040adf7: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_0040adfe:; BB(0x0040adfe);
    /* 0040adfe: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0040ae01: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ae04: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0040ae07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ae08: ret  */ FN_RET(0x0040ade8); r_esp += 4; return;
}

void f_0040ae0c(void) /* sub_40AE0C */
{
    FN_ENTER(0x0040ae0c);
    /* 0040ae0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae0d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0040ae12: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40ae17u); f_006dc358();
    /* 0040ae17: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae1a: jg 0x40ae20 */ if ((!fZ&&fS==fO)) goto L_0040ae20;
L_0040ae1c:; BB(0x0040ae1c);
    /* 0040ae1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0040ae1e: jge 0x40ae22 */ if ((fS==fO)) goto L_0040ae22;
L_0040ae20:; BB(0x0040ae20);
    /* 0040ae20: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0040ae22:; BB(0x0040ae22);
    /* 0040ae22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae23: call 0x6c4480 */ r_esp -= 4; W32(r_esp, 0x40ae28u); f_006c4480();
    /* 0040ae28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ae29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ae2b: jne 0x40ae2f */ if (!fZ) goto L_0040ae2f;
L_0040ae2d:; BB(0x0040ae2d);
    /* 0040ae2d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0040ae2f:; BB(0x0040ae2f);
    /* 0040ae2f: mov eax, ebx */ r_eax = r_ebx;
    /* 0040ae31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040ae32: ret  */ FN_RET(0x0040ae0c); r_esp += 4; return;
}

void f_0040ae34(void) /* sub_40AE34 */
{
    FN_ENTER(0x0040ae34);
    /* 0040ae34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae36: mov edi, ecx */ r_edi = r_ecx;
    /* 0040ae38: mov ecx, edi */ r_ecx = r_edi;
    /* 0040ae3a: call 0x40ae0c */ r_esp -= 4; W32(r_esp, 0x40ae3fu); f_0040ae0c();
    /* 0040ae3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ae41: je 0x40ae9d */ if (fZ) goto L_0040ae9d;
L_0040ae43:; BB(0x0040ae43);
    /* 0040ae43: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae47: push 0x8f9c68 */ { u32 v = 0x8f9c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae4c: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x40ae51u); f_007354fc();
    /* 0040ae51: mov esi, eax */ r_esi = r_eax;
    /* 0040ae53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae55: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae57: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40ae5cu); f_00792fe8();
    /* 0040ae5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae61: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae63: mov ecx, esi */ r_ecx = r_esi;
    /* 0040ae65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae66: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x40ae6bu); f_00735c90();
    /* 0040ae6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae6d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae6f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40ae74u); f_00792fe8();
    /* 0040ae74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae79: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae7b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040ae7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae7e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x40ae83u); f_00735c90();
    /* 0040ae83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae85: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae87: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40ae8cu); f_00792fe8();
    /* 0040ae8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae93: mov ecx, esi */ r_ecx = r_esi;
    /* 0040ae95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae96: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x40ae9bu); f_00735c90();
    /* 0040ae9b: jmp 0x40aedd */ goto L_0040aedd;
L_0040ae9d:; BB(0x0040ae9d);
    /* 0040ae9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae9f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aea1: push 0x8f9c68 */ { u32 v = 0x8f9c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aea6: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x40aeabu); f_007354fc();
    /* 0040aeab: mov esi, eax */ r_esi = r_eax;
    /* 0040aead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aeaf: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aeb1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40aeb6u); f_00792fe8();
    /* 0040aeb6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aeb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aebb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aebd: mov ecx, esi */ r_ecx = r_esi;
    /* 0040aebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aec0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x40aec5u); f_00735c90();
    /* 0040aec5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aec7: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aec9: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40aeceu); f_00792fe8();
    /* 0040aece: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aed1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aed3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aed5: mov ecx, esi */ r_ecx = r_esi;
    /* 0040aed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aed8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x40aeddu); f_00735c90();
L_0040aedd:; BB(0x0040aedd);
    /* 0040aedd: push 0x43200000 */ { u32 v = 0x43200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aee2: mov ecx, esi */ r_ecx = r_esi;
    /* 0040aee4: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x40aee9u); f_00736138();
    /* 0040aee9: mov ecx, esi */ r_ecx = r_esi;
    /* 0040aeeb: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x40aef0u); f_00736458();
    /* 0040aef0: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 0040aef7: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 0040aefa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040aefb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040aefc: ret  */ FN_RET(0x0040ae34); r_esp += 4; return;
}

void f_0040af00(void) /* sub_40AF00 */
{
    FN_ENTER(0x0040af00);
    /* 0040af00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040af01: sub esp, 0x254 */ {  u32 a = r_esp; u32 b = 0x254u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040af07: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040af09: mov eax, dword ptr [0xa3b1a4] */ r_eax = R32((u32)(0xa3b1a4u));
    /* 0040af0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040af10: je 0x40b0eb */ if (fZ) goto L_0040b0eb;
L_0040af16:; BB(0x0040af16);
    /* 0040af16: mov eax, dword ptr [0xa3ae40] */ r_eax = R32((u32)(0xa3ae40u));
    /* 0040af1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040af1d: je 0x40b0df */ if (fZ) goto L_0040b0df;
L_0040af23:; BB(0x0040af23);
    /* 0040af23: mov eax, dword ptr [0xa3ae0c] */ r_eax = R32((u32)(0xa3ae0cu));
    /* 0040af28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040af2a: je 0x40b0d3 */ if (fZ) goto L_0040b0d3;
L_0040af30:; BB(0x0040af30);
    /* 0040af30: push 0x8f9ca8 */ { u32 v = 0x8f9ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040af35: mov ecx, dword ptr [0xa3b1a4] */ r_ecx = R32((u32)(0xa3b1a4u));
    /* 0040af3b: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x40af40u); f_00414c94();
    /* 0040af40: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0040af43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040af45: mov edi, eax */ r_edi = r_eax;
L_0040af47:; BB(0x0040af47);
    /* 0040af47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040af49: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040af4d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0040af51: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0040af55: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0040af59: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0040af5d: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0040af61: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0040af65: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0040af69: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0040af6d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0040af71: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0040af75: mov edx, dword ptr [edi*8 + 0x8f9c88] */ r_edx = R32((u32)(r_edi*8+0x8f9c88u));
    /* 0040af7c: mov ecx, dword ptr [0xa3ae0c] */ r_ecx = R32((u32)(0xa3ae0cu));
    /* 0040af82: mov dword ptr [esp + 4], 0x43300000 */ W32((u32)(r_esp+0x4u), 0x43300000u);
    /* 0040af8a: mov dword ptr [esp + 8], 0x43360000 */ W32((u32)(r_esp+0x8u), 0x43360000u);
    /* 0040af92: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0040af96: mov edx, dword ptr [edi*8 + 0x8f9c8c] */ r_edx = R32((u32)(r_edi*8+0x8f9c8cu));
    /* 0040af9d: mov dword ptr [esp + 0x14], 0x43300000 */ W32((u32)(r_esp+0x14u), 0x43300000u);
    /* 0040afa5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0040afa9: mov dword ptr [esp + 0x18], 0x43360000 */ W32((u32)(r_esp+0x18u), 0x43360000u);
    /* 0040afb1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0040afb5: mov dword ptr [esp + 0x1c], 0x43620000 */ W32((u32)(r_esp+0x1cu), 0x43620000u);
    /* 0040afbd: mov dword ptr [esp + 0x20], 0x42180000 */ W32((u32)(r_esp+0x20u), 0x42180000u);
    /* 0040afc5: mov dword ptr [esp + 0x24], 0x36bc88 */ W32((u32)(r_esp+0x24u), 0x36bc88u);
    /* 0040afcd: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0040afd5: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0040afdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040afde: call 0x40d3ac */ r_esp -= 4; W32(r_esp, 0x40afe3u); f_0040d3ac();
    /* 0040afe3: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0040afe7: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 0040afec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040afee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040afef: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x40aff4u); f_0086b688();
    /* 0040aff4: mov edx, dword ptr [edi*8 + 0x8f9c88] */ r_edx = R32((u32)(r_edi*8+0x8f9c88u));
    /* 0040affb: mov ecx, dword ptr [edi*8 + 0x8f9c8c] */ r_ecx = R32((u32)(r_edi*8+0x8f9c8cu));
    /* 0040b002: mov dword ptr [esp + 0x44], 0x43300000 */ W32((u32)(r_esp+0x44u), 0x43300000u);
    /* 0040b00a: mov dword ptr [esp + 0x48], 0x43360000 */ W32((u32)(r_esp+0x48u), 0x43360000u);
    /* 0040b012: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0040b016: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0040b01a: mov dword ptr [esp + 0x3c], 0x43300000 */ W32((u32)(r_esp+0x3cu), 0x43300000u);
    /* 0040b022: mov dword ptr [esp + 0x40], 0x43360000 */ W32((u32)(r_esp+0x40u), 0x43360000u);
    /* 0040b02a: mov dword ptr [esp + 0x54], 0x43620000 */ W32((u32)(r_esp+0x54u), 0x43620000u);
    /* 0040b032: mov dword ptr [esp + 0x58], 0x42180000 */ W32((u32)(r_esp+0x58u), 0x42180000u);
    /* 0040b03a: mov dword ptr [esp + 0x25c], 0 */ W32((u32)(r_esp+0x25cu), 0x0u);
    /* 0040b045: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b046: call 0x6c4480 */ r_esp -= 4; W32(r_esp, 0x40b04bu); f_006c4480();
    /* 0040b04b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b04e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b050: je 0x40b0ba */ if (fZ) goto L_0040b0ba;
L_0040b052:; BB(0x0040b052);
    /* 0040b052: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b053: call 0x6c4480 */ r_esp -= 4; W32(r_esp, 0x40b058u); f_006c4480();
    /* 0040b058: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b05c: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x40b061u); f_007087dc();
    /* 0040b061: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 0040b065: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b067: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b068: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b069: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x40b06eu); f_00857dec();
    /* 0040b06e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040b071:; BB(0x0040b071);
    /* 0040b071: mov ecx, dword ptr [edi*4 + 0xa3ae40] */ r_ecx = R32((u32)(r_edi*4+0xa3ae40u));
    /* 0040b078: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0040b07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b07d: call 0x40e3f8 */ r_esp -= 4; W32(r_esp, 0x40b082u); f_0040e3f8();
    /* 0040b082: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040b085: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b088: jl 0x40af47 */ if ((fS!=fO)) goto L_0040af47;
L_0040b08e:; BB(0x0040b08e);
    /* 0040b08e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0040b091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b093: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b095: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b096: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40b09bu); f_004088b8();
    /* 0040b09b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b09d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b09f: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0040b0a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0a3: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40b0a8u); f_004088b8();
    /* 0040b0a8: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 0040b0af: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0040b0b2: add esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b0b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b0b9: ret  */ FN_RET(0x0040af00); r_esp += 4; return;
L_0040b0ba:; BB(0x0040b0ba);
    /* 0040b0ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0bc: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0be: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40b0c3u); f_00792fe8();
    /* 0040b0c3: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 0040b0c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0c9: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x40b0ceu); f_00857e29();
    /* 0040b0ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b0d1: jmp 0x40b071 */ goto L_0040b071;
L_0040b0d3:; BB(0x0040b0d3);
    /* 0040b0d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0d4: call 0x40d520 */ r_esp -= 4; W32(r_esp, 0x40b0d9u); f_0040d520();
    /* 0040b0d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b0da: jmp 0x40af30 */ goto L_0040af30;
L_0040b0df:; BB(0x0040b0df);
    /* 0040b0df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0e0: call 0x40e2f0 */ r_esp -= 4; W32(r_esp, 0x40b0e5u); f_0040e2f0();
    /* 0040b0e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b0e6: jmp 0x40af23 */ goto L_0040af23;
L_0040b0eb:; BB(0x0040b0eb);
    /* 0040b0eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b0ec: call 0x414d60 */ r_esp -= 4; W32(r_esp, 0x40b0f1u); f_00414d60();
    /* 0040b0f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b0f2: jmp 0x40af16 */ goto L_0040af16;
}

