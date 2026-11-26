#include "protos.h"

void f_0077f02c(void) /* sub_77F02C */
{
    FN_ENTER(0x0077f02c);
    /* 0077f02c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077f030: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077f035: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f037: je 0x77f056 */ if (fZ) goto L_0077f056;
L_0077f039:; BB(0x0077f039);
    /* 0077f039: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f03c: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f03e: je 0x77f056 */ if (fZ) goto L_0077f056;
L_0077f040:; BB(0x0077f040);
    /* 0077f040: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f043: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f045: je 0x77f056 */ if (fZ) goto L_0077f056;
L_0077f047:; BB(0x0077f047);
    /* 0077f047: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f04a: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f04c: je 0x77f056 */ if (fZ) goto L_0077f056;
L_0077f04e:; BB(0x0077f04e);
    /* 0077f04e: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f051: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f053: je 0x77f056 */ if (fZ) goto L_0077f056;
L_0077f055:; BB(0x0077f055);
    /* 0077f055: ret  */ FN_RET(0x0077f02c); r_esp += 4; return;
L_0077f056:; BB(0x0077f056);
    /* 0077f056: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0077f05a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0077f05d: ret  */ FN_RET(0x0077f02c); r_esp += 4; return;
}

void f_0077f060(void) /* sub_77F060 */
{
    FN_ENTER(0x0077f060);
    /* 0077f060: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077f064: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077f068: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0077f06a: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0077f06e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0077f071: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0077f075: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0077f078: mov word ptr [edx + 8], cx */ W16((u32)(r_edx+0x8u), (u16)r_ecx);
    /* 0077f07c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0077f07f: mov word ptr [edx + 0xa], cx */ W16((u32)(r_edx+0xau), (u16)r_ecx);
    /* 0077f083: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0077f086: mov word ptr [edx + 0xc], cx */ W16((u32)(r_edx+0xcu), (u16)r_ecx);
    /* 0077f08a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0077f08d: mov word ptr [edx + 0xe], cx */ W16((u32)(r_edx+0xeu), (u16)r_ecx);
    /* 0077f091: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0077f094: mov word ptr [edx + 0x10], cx */ W16((u32)(r_edx+0x10u), (u16)r_ecx);
    /* 0077f098: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0077f09b: mov word ptr [edx + 0x12], cx */ W16((u32)(r_edx+0x12u), (u16)r_ecx);
    /* 0077f09f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0077f0a2: mov word ptr [edx + 0x14], cx */ W16((u32)(r_edx+0x14u), (u16)r_ecx);
    /* 0077f0a6: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0077f0a9: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 0077f0ad: ret  */ FN_RET(0x0077f060); r_esp += 4; return;
}

void f_0077f0b0(void) /* sub_77F0B0 */
{
    FN_ENTER(0x0077f0b0);
    /* 0077f0b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f0b2: mov dword ptr [0xa9b454], eax */ W32((u32)(0xa9b454u), r_eax);
    /* 0077f0b7: mov dword ptr [0xa9b450], eax */ W32((u32)(0xa9b450u), r_eax);
    /* 0077f0bc: ret  */ FN_RET(0x0077f0b0); r_esp += 4; return;
}

void f_0077f0c0(void) /* sub_77F0C0 */
{
    FN_ENTER(0x0077f0c0);
    /* 0077f0c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077f0c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077f0c5: call 0x77f0e4 */ r_esp -= 4; W32(r_esp, 0x77f0cau); f_0077f0e4();
    /* 0077f0ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077f0ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f0d0: jne 0x77f0d6 */ if (!fZ) goto L_0077f0d6;
L_0077f0d2:; BB(0x0077f0d2);
    /* 0077f0d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f0d3: ret 4 */ FN_RET(0x0077f0c0); r_esp += 8; return;
L_0077f0d6:; BB(0x0077f0d6);
    /* 0077f0d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77f0dcu); f_005c2f74();
    /* 0077f0dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f0dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f0de: ret 4 */ FN_RET(0x0077f0c0); r_esp += 8; return;
}

void f_0077f0e4(void) /* sub_77F0E4 */
{
    FN_ENTER(0x0077f0e4);
    /* 0077f0e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0077f0e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0e9: push 0x8f43f8 */ { u32 v = 0x8f43f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077f0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f0f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077f0fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077f0ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077f102: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077f105: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077f108: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077f10b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077f10e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f111: mov dword ptr [ecx], 0xb44670 */ W32((u32)(r_ecx), 0xb44670u);
    /* 0077f117: mov dword ptr [0xa9b458], 0 */ W32((u32)(0xa9b458u), 0x0u);
    /* 0077f121: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077f128: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77f12du); f_008171e8();
    /* 0077f12d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077f130: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077f137: mov esp, ebp */ r_esp = r_ebp;
    /* 0077f139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f13a: ret  */ FN_RET(0x0077f0e4); r_esp += 4; return;
}

void f_0077f13c(void) /* sub_77F13C */
{
    FN_ENTER(0x0077f13c);
    /* 0077f13c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f13d: mov edi, ecx */ r_edi = r_ecx;
    /* 0077f13f: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077f145: mov ecx, edi */ r_ecx = r_edi;
    /* 0077f147: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x77f14cu); f_008193cc();
    /* 0077f14c: mov dword ptr [edi], 0xb44670 */ W32((u32)(r_edi), 0xb44670u);
    /* 0077f152: mov edx, dword ptr [0x9f84bc] */ r_edx = R32((u32)(0x9f84bcu));
    /* 0077f158: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0077f15b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f15d: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 0077f164: mov dword ptr [0xa9b458], edi */ W32((u32)(0xa9b458u), r_edi);
    /* 0077f16a: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0077f16d: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 0077f174: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0077f177: mov eax, edi */ r_eax = r_edi;
    /* 0077f179: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f17a: ret 4 */ FN_RET(0x0077f13c); r_esp += 8; return;
}

void f_0077f180(void) /* sub_77F180 */
{
    FN_ENTER(0x0077f180);
    /* 0077f180: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0077f183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f185: je 0x77f19c */ if (fZ) goto L_0077f19c;
L_0077f187:; BB(0x0077f187);
    /* 0077f187: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f18a: jne 0x77f192 */ if (!fZ) goto L_0077f192;
L_0077f18c:; BB(0x0077f18c);
    /* 0077f18c: call 0x77f1f4 */ r_esp -= 4; W32(r_esp, 0x77f191u); f_0077f1f4();
    /* 0077f191: ret  */ FN_RET(0x0077f180); r_esp += 4; return;
L_0077f192:; BB(0x0077f192);
    /* 0077f192: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f195: jne 0x77f19c */ if (!fZ) goto L_0077f19c;
L_0077f197:; BB(0x0077f197);
    /* 0077f197: call 0x77f1a0 */ r_esp -= 4; W32(r_esp, 0x77f19cu); f_0077f1a0();
L_0077f19c:; BB(0x0077f19c);
    /* 0077f19c: ret  */ FN_RET(0x0077f180); r_esp += 4; return;
}

void f_0077f1a0(void) /* sub_77F1A0 */
{
    FN_ENTER(0x0077f1a0);
    /* 0077f1a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f1a1: mov esi, ecx */ r_esi = r_ecx;
    /* 0077f1a3: fld dword ptr [0x979714] */ FPUSH(R_F32((u32)(0x979714u)));
    /* 0077f1a9: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 0077f1ac: fld dword ptr [0x979710] */ FPUSH(R_F32((u32)(0x979710u)));
    /* 0077f1b2: fadd dword ptr [esi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x20u));
    /* 0077f1b5: fld dword ptr [0x97970c] */ FPUSH(R_F32((u32)(0x97970cu)));
    /* 0077f1bb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0077f1bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077f1bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077f1c0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077f1c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077f1c4: jb 0x77f1c8 */ if (fC) goto L_0077f1c8;
L_0077f1c6:; BB(0x0077f1c6);
    /* 0077f1c6: fst st(2) */ ST(2) = ST(0);
L_0077f1c8:; BB(0x0077f1c8);
    /* 0077f1c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077f1ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077f1cc: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0077f1cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077f1d0: jb 0x77f1ed */ if (fC) goto L_0077f1ed;
L_0077f1d2:; BB(0x0077f1d2);
    /* 0077f1d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077f1d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077f1d6: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0077f1d9: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0077f1dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f1de: je 0x77f1e4 */ if (fZ) goto L_0077f1e4;
L_0077f1e0:; BB(0x0077f1e0);
    /* 0077f1e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f1e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77f1e3u); call_ind(t); }
    /* 0077f1e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077f1e4:; BB(0x0077f1e4);
    /* 0077f1e4: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077f1eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f1ec: ret  */ FN_RET(0x0077f1a0); r_esp += 4; return;
L_0077f1ed:; BB(0x0077f1ed);
    /* 0077f1ed: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0077f1f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f1f1: ret  */ FN_RET(0x0077f1a0); r_esp += 4; return;
}

void f_0077f1f4(void) /* sub_77F1F4 */
{
    FN_ENTER(0x0077f1f4);
    /* 0077f1f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f1f5: mov esi, ecx */ r_esi = r_ecx;
    /* 0077f1f7: fld dword ptr [0x979708] */ FPUSH(R_F32((u32)(0x979708u)));
    /* 0077f1fd: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 0077f200: fld dword ptr [0x979704] */ FPUSH(R_F32((u32)(0x979704u)));
    /* 0077f206: fadd dword ptr [esi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x20u));
    /* 0077f209: fld dword ptr [0x979700] */ FPUSH(R_F32((u32)(0x979700u)));
    /* 0077f20f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0077f211: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077f213: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077f214: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077f216: fcom dword ptr [0x9796fc] */ fx_compare(ST(0), R_F32((u32)(0x9796fcu))); 
    /* 0077f21c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077f21e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077f220: ja 0x77f224 */ if ((!fC&&!fZ)) goto L_0077f224;
L_0077f222:; BB(0x0077f222);
    /* 0077f222: fst st(2) */ ST(2) = ST(0);
L_0077f224:; BB(0x0077f224);
    /* 0077f224: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077f226: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077f228: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0077f22b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077f22c: jb 0x77f24c */ if (fC) goto L_0077f24c;
L_0077f22e:; BB(0x0077f22e);
    /* 0077f22e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077f230: mov eax, 0x428c0000 */ r_eax = 0x428c0000u;
    /* 0077f235: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0077f238: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0077f23b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f23d: je 0x77f243 */ if (fZ) goto L_0077f243;
L_0077f23f:; BB(0x0077f23f);
    /* 0077f23f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f240: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x77f242u); call_ind(t); }
    /* 0077f242: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077f243:; BB(0x0077f243);
    /* 0077f243: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0077f24a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f24b: ret  */ FN_RET(0x0077f1f4); r_esp += 4; return;
L_0077f24c:; BB(0x0077f24c);
    /* 0077f24c: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0077f24f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f250: ret  */ FN_RET(0x0077f1f4); r_esp += 4; return;
}

void f_0077f254(void) /* sub_77F254 */
{
    FN_ENTER(0x0077f254);
    /* 0077f254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077f255: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077f258: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077f25a: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0077f25d: fcomp dword ptr [0x9796f8] */ fx_compare(ST(0), R_F32((u32)(0x9796f8u))); FPOP();
    /* 0077f263: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077f265: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077f266: ja 0x77f26d */ if ((!fC&&!fZ)) goto L_0077f26d;
L_0077f268:; BB(0x0077f268);
    /* 0077f268: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f26b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f26c: ret  */ FN_RET(0x0077f254); r_esp += 4; return;
L_0077f26d:; BB(0x0077f26d);
    /* 0077f26d: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x77f272u); f_004d28a4();
    /* 0077f272: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f274: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f276: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x77f27bu); f_0082acfc();
    /* 0077f27b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f27d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f27f: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x77f284u); f_0082acfc();
    /* 0077f284: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0077f287: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0077f28f: mov edx, 4 */ r_edx = 0x4u;
    /* 0077f294: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0077f298: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0077f29c: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0077f2a0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0077f2a4: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 0077f2a8: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 0077f2ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077f2b2: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0077f2b6: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 0077f2ba: fistp qword ptr [esp + 0x60] */ W64((u32)(r_esp+0x60u), (u64)fx_int64(ST(0))); FPOP();
    /* 0077f2be: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 0077f2c2: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0077f2c6: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0077f2ca: mov byte ptr [ebp + 0x27], al */ W8((u32)(r_ebp+0x27u), (u8)r_eax);
    /* 0077f2cd: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0077f2d5: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0077f2dd: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0077f2e1: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f2e4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0077f2e6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0077f2ea: mov dword ptr [eax + 8], 0x44200000 */ W32((u32)(r_eax+0x8u), 0x44200000u);
    /* 0077f2f1: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0077f2f5: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0077f2fc: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0077f300: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f303: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0077f306: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0077f30a: mov dword ptr [eax + 0x10], 0x44200000 */ W32((u32)(r_eax+0x10u), 0x44200000u);
    /* 0077f311: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0077f314: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0077f318: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0077f31b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0077f31f: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f322: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0077f325: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0077f329: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0077f330: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0077f333: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0077f337: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0077f33a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0077f33e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f341: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0077f344: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0077f348: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f34a: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f34f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f351: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x77f356u); f_0082b5d8();
    /* 0077f356: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f35a: fld dword ptr [0x9796ec] */ FPUSH(R_F32((u32)(0x9796ecu)));
    /* 0077f360: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0077f366: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0077f369: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0077f36b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0077f36f: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0077f372: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f375: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f379: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0077f37d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0077f37f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f383: mov dword ptr [eax + 8], 0x44200000 */ W32((u32)(r_eax+0x8u), 0x44200000u);
    /* 0077f38a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f38e: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0077f391: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0077f393: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0077f396: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f39a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f39d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0077f3a0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3a4: mov dword ptr [eax + 0x10], 0x44200000 */ W32((u32)(r_eax+0x10u), 0x44200000u);
    /* 0077f3ab: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3af: mov dword ptr [eax + 0x14], 0x43f00000 */ W32((u32)(r_eax+0x14u), 0x43f00000u);
    /* 0077f3b6: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f3ba: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f3bd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0077f3c0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3c4: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0077f3cb: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3cf: mov dword ptr [eax + 0x1c], 0x43f00000 */ W32((u32)(r_eax+0x1cu), 0x43f00000u);
    /* 0077f3d6: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0077f3da: mov ebp, dword ptr [ebp + 0x24] */ r_ebp = R32((u32)(r_ebp+0x24u));
    /* 0077f3dd: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
    /* 0077f3e0: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e2: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3ea: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x77f3efu); f_0082b5d8();
    /* 0077f3ef: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f3f2: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x77f3f7u); f_004d2968();
    /* 0077f3f7: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f3fb: ret  */ FN_RET(0x0077f254); r_esp += 4; return;
}

void f_0077f360(void)
{
    FN_ENTER(0x0077f360);
    /* 0077f360: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0077f366: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0077f369: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0077f36b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0077f36f: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0077f372: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f375: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f379: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0077f37d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0077f37f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f383: mov dword ptr [eax + 8], 0x44200000 */ W32((u32)(r_eax+0x8u), 0x44200000u);
    /* 0077f38a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f38e: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0077f391: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0077f393: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0077f396: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f39a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f39d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0077f3a0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3a4: mov dword ptr [eax + 0x10], 0x44200000 */ W32((u32)(r_eax+0x10u), 0x44200000u);
    /* 0077f3ab: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3af: mov dword ptr [eax + 0x14], 0x43f00000 */ W32((u32)(r_eax+0x14u), 0x43f00000u);
    /* 0077f3b6: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077f3ba: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0077f3bd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0077f3c0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3c4: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0077f3cb: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0077f3cf: mov dword ptr [eax + 0x1c], 0x43f00000 */ W32((u32)(r_eax+0x1cu), 0x43f00000u);
    /* 0077f3d6: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0077f3da: mov ebp, dword ptr [ebp + 0x24] */ r_ebp = R32((u32)(r_ebp+0x24u));
    /* 0077f3dd: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
    /* 0077f3e0: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e2: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f3ea: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x77f3efu); f_0082b5d8();
    /* 0077f3ef: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f3f2: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x77f3f7u); f_004d2968();
    /* 0077f3f7: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f3fb: ret  */ FN_RET(0x0077f360); r_esp += 4; return;
}

void f_0077f3fc(void) /* sub_77F3FC */
{
    FN_ENTER(0x0077f3fc);
    /* 0077f3fc: mov ecx, dword ptr [0xa9b458] */ r_ecx = R32((u32)(0xa9b458u));
    /* 0077f402: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f404: je 0x77f42d */ if (fZ) goto L_0077f42d;
L_0077f406:; BB(0x0077f406);
    /* 0077f406: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077f40a: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0077f411: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0077f414: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f416: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0077f41d: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 0077f420: mov byte ptr [ecx + 0x25], dl */ W8((u32)(r_ecx+0x25u), (u8)r_edx);
    /* 0077f423: mov byte ptr [ecx + 0x26], dl */ W8((u32)(r_ecx+0x26u), (u8)r_edx);
    /* 0077f426: mov dword ptr [ecx + 0x28], 1 */ W32((u32)(r_ecx+0x28u), 0x1u);
L_0077f42d:; BB(0x0077f42d);
    /* 0077f42d: ret  */ FN_RET(0x0077f3fc); r_esp += 4; return;
}

void f_0077f430(void) /* sub_77F430 */
{
    FN_ENTER(0x0077f430);
    /* 0077f430: mov ecx, dword ptr [0xa9b458] */ r_ecx = R32((u32)(0xa9b458u));
    /* 0077f436: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f438: je 0x77f461 */ if (fZ) goto L_0077f461;
L_0077f43a:; BB(0x0077f43a);
    /* 0077f43a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077f43e: mov dword ptr [ecx + 0x1c], 0x437f0000 */ W32((u32)(r_ecx+0x1cu), 0x437f0000u);
    /* 0077f445: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0077f448: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f44a: mov dword ptr [ecx + 0x20], 0x428c0000 */ W32((u32)(r_ecx+0x20u), 0x428c0000u);
    /* 0077f451: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 0077f454: mov byte ptr [ecx + 0x25], dl */ W8((u32)(r_ecx+0x25u), (u8)r_edx);
    /* 0077f457: mov byte ptr [ecx + 0x26], dl */ W8((u32)(r_ecx+0x26u), (u8)r_edx);
    /* 0077f45a: mov dword ptr [ecx + 0x28], 2 */ W32((u32)(r_ecx+0x28u), 0x2u);
L_0077f461:; BB(0x0077f461);
    /* 0077f461: ret  */ FN_RET(0x0077f430); r_esp += 4; return;
}

void f_0077f464(void) /* sub_77F464 */
{
    FN_ENTER(0x0077f464);
    /* 0077f464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077f465: mov ebp, esp */ r_ebp = r_esp;
    /* 0077f467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077f469: push 0x8f4422 */ { u32 v = 0x8f4422u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f46e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077f474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f475: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077f47c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077f47f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077f482: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077f485: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077f488: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077f48b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077f48e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077f495: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f498: mov dword ptr [ecx], 0xaf8320 */ W32((u32)(r_ecx), 0xaf8320u);
    /* 0077f49e: call 0x77f4cc */ r_esp -= 4; W32(r_esp, 0x77f4a3u); f_0077f4cc();
    /* 0077f4a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f4a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0077f4a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f4ac: mov dword ptr [ecx], 0xaf82f8 */ W32((u32)(r_ecx), 0xaf82f8u);
    /* 0077f4b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077f4b9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77f4beu); f_008171e8();
    /* 0077f4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077f4c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077f4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0077f4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f4cb: ret  */ FN_RET(0x0077f464); r_esp += 4; return;
}

void f_0077f490(void)
{
    FN_ENTER(0x0077f490);
    /* 0077f490: cld  */ rt_df = 0;
    /* 0077f491: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0077f493: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0077f495: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f498: mov dword ptr [ecx], 0xaf8320 */ W32((u32)(r_ecx), 0xaf8320u);
    /* 0077f49e: call 0x77f4cc */ r_esp -= 4; W32(r_esp, 0x77f4a3u); f_0077f4cc();
    /* 0077f4a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f4a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0077f4a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077f4ac: mov dword ptr [ecx], 0xaf82f8 */ W32((u32)(r_ecx), 0xaf82f8u);
    /* 0077f4b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077f4b9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77f4beu); f_008171e8();
    /* 0077f4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077f4c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077f4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0077f4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f4cb: ret  */ FN_RET(0x0077f490); r_esp += 4; return;
}

void f_0077f4cc(void) /* sub_77F4CC */
{
    FN_ENTER(0x0077f4cc);
    /* 0077f4cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f4cd: mov esi, ecx */ r_esi = r_ecx;
    /* 0077f4cf: movsx eax, word ptr [esi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 0077f4d3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077f4d6: je 0x77f523 */ if (fZ) goto L_0077f523;
L_0077f4d8:; BB(0x0077f4d8);
    /* 0077f4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f4d9: call 0x83fa00 */ r_esp -= 4; W32(r_esp, 0x77f4deu); f_0083fa00();
    /* 0077f4de: movsx eax, word ptr [esi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 0077f4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f4e3: call 0x83f9c0 */ r_esp -= 4; W32(r_esp, 0x77f4e8u); f_0083f9c0();
    /* 0077f4e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f4eb: movzx eax, word ptr [esi + 0x28] */ r_eax = (u32)R16((u32)(r_esi+0x28u));
    /* 0077f4ef: mov byte ptr [esi + 0x10075], 1 */ W8((u32)(r_esi+0x10075u), 0x1u);
    /* 0077f4f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077f4f8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0077f4fd: mov dword ptr [eax*4 + 0xa9b460], ecx */ W32((u32)(r_eax*4+0xa9b460u), r_ecx);
    /* 0077f504: mov dword ptr [esi + 0x1211c], ecx */ W32((u32)(r_esi+0x1211cu), r_ecx);
    /* 0077f50a: mov word ptr [esi + 0x28], dx */ W16((u32)(r_esi+0x28u), (u16)r_edx);
    /* 0077f50e: mov word ptr [esi + 0x10070], cx */ W16((u32)(r_esi+0x10070u), (u16)r_ecx);
    /* 0077f515: mov word ptr [esi + 0x10072], cx */ W16((u32)(r_esi+0x10072u), (u16)r_ecx);
    /* 0077f51c: mov ecx, esi */ r_ecx = r_esi;
    /* 0077f51e: call 0x77f528 */ r_esp -= 4; W32(r_esp, 0x77f523u); f_0077f528();
L_0077f523:; BB(0x0077f523);
    /* 0077f523: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f524: ret  */ FN_RET(0x0077f4cc); r_esp += 4; return;
}

void f_0077f528(void) /* sub_77F528 */
{
    FN_ENTER(0x0077f528);
    /* 0077f528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f529: mov eax, dword ptr [ecx + 0x1006c] */ r_eax = R32((u32)(r_ecx+0x1006cu));
    /* 0077f52f: lea ebx, [ecx + 0x1006c] */ r_ebx = (u32)(r_ecx+0x1006cu);
    /* 0077f535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f537: je 0x77f546 */ if (fZ) goto L_0077f546;
L_0077f539:; BB(0x0077f539);
    /* 0077f539: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f53a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77f53fu); f_006dc358();
    /* 0077f53f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f540: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
L_0077f546:; BB(0x0077f546);
    /* 0077f546: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f547: ret  */ FN_RET(0x0077f528); r_esp += 4; return;
}

void f_0077f548(void) /* sub_77F548 */
{
    FN_ENTER(0x0077f548);
    /* 0077f548: movzx ecx, byte ptr [esp + 5] */ r_ecx = (u32)R8((u32)(r_esp+0x5u));
    /* 0077f54d: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 0077f552: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0077f555: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f557: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0077f55a: ret  */ FN_RET(0x0077f548); r_esp += 4; return;
}

void f_0077f55c(void) /* sub_77F55C */
{
    FN_ENTER(0x0077f55c);
    /* 0077f55c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f55d: mov edi, ecx */ r_edi = r_ecx;
    /* 0077f55f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077f563: mov ecx, edi */ r_ecx = r_edi;
    /* 0077f565: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x77f56au); f_008193cc();
    /* 0077f56a: mov dword ptr [edi], 0xaf82f8 */ W32((u32)(r_edi), 0xaf82f8u);
    /* 0077f570: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f572: mov byte ptr [edi + 0x1c], dl */ W8((u32)(r_edi+0x1cu), (u8)r_edx);
    /* 0077f575: mov byte ptr [edi + 0x1d], dl */ W8((u32)(r_edi+0x1du), (u8)r_edx);
    /* 0077f578: mov byte ptr [edi + 0x10075], 1 */ W8((u32)(r_edi+0x10075u), 0x1u);
    /* 0077f57f: mov byte ptr [edi + 0x10074], dl */ W8((u32)(r_edi+0x10074u), (u8)r_edx);
    /* 0077f585: mov byte ptr [edi + 0x1e], dl */ W8((u32)(r_edi+0x1eu), (u8)r_edx);
    /* 0077f588: mov word ptr [edi + 0x10070], dx */ W16((u32)(r_edi+0x10070u), (u16)r_edx);
    /* 0077f58f: mov word ptr [edi + 0x10072], dx */ W16((u32)(r_edi+0x10072u), (u16)r_edx);
    /* 0077f596: mov dword ptr [edi + 0x10088], edx */ W32((u32)(r_edi+0x10088u), r_edx);
    /* 0077f59c: mov byte ptr [edi + 0x1f], dl */ W8((u32)(r_edi+0x1fu), (u8)r_edx);
    /* 0077f59f: mov word ptr [edi + 0x20], dx */ W16((u32)(r_edi+0x20u), (u16)r_edx);
    /* 0077f5a3: mov word ptr [edi + 0x22], dx */ W16((u32)(r_edi+0x22u), (u16)r_edx);
    /* 0077f5a7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077f5ac: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 0077f5b0: lea eax, [edi + 0x1006c] */ r_eax = (u32)(r_edi+0x1006cu);
    /* 0077f5b6: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0077f5bc: mov eax, edi */ r_eax = r_edi;
    /* 0077f5be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f5bf: ret 4 */ FN_RET(0x0077f55c); r_esp += 8; return;
}

void f_0077f5c4(void) /* sub_77F5C4 */
{
    FN_ENTER(0x0077f5c4);
    /* 0077f5c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f5c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f5c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f5c7: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077f5ca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077f5cc: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
    /* 0077f5d3: lea edi, [esp + 0x34] */ r_edi = (u32)(r_esp+0x34u);
    /* 0077f5d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f5d9: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0077f5dd: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0077f5e1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0077f5e5: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0077f5e9: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0077f5ed: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077f5f1: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0077f5f5: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0077f5f9: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0077f5fd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0077f5ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f601: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x77f606u); f_00858900();
    /* 0077f606: movsx edx, byte ptr [esp + 0x40] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x40u));
    /* 0077f60b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f60c: call 0x8581d3 */ r_esp -= 4; W32(r_esp, 0x77f611u); f_008581d3();
    /* 0077f611: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f616: je 0x77f831 */ if (fZ) goto L_0077f831;
L_0077f61c:; BB(0x0077f61c);
    /* 0077f61c: lea edi, [esp + 0x34] */ r_edi = (u32)(r_esp+0x34u);
    /* 0077f620: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077f622: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0077f624: mov ecx, edi */ r_ecx = r_edi;
    /* 0077f626: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077f628: je 0x77f636 */ if (fZ) goto L_0077f636;
L_0077f62a:; BB(0x0077f62a);
    /* 0077f62a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077f62d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077f630: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0077f632: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077f634: jne 0x77f62a */ if (!fZ) goto L_0077f62a;
L_0077f636:; BB(0x0077f636);
    /* 0077f636: lea esi, [esp + 0x34] */ r_esi = (u32)(r_esp+0x34u);
    /* 0077f63a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f63c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0077f63f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f641: call 0x843510 */ r_esp -= 4; W32(r_esp, 0x77f646u); f_00843510();
    /* 0077f646: mov edi, eax */ r_edi = r_eax;
    /* 0077f648: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f64b: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0077f64e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077f650: jl 0x77f88c */ if ((fS!=fO)) goto L_0077f88c;
L_0077f656:; BB(0x0077f656);
    /* 0077f656: mov dword ptr [esp + 0x54], 4 */ W32((u32)(r_esp+0x54u), 0x4u);
    /* 0077f65e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0077f661: mov edx, 1 */ r_edx = 0x1u;
    /* 0077f666: mov word ptr [esp + 0x68], dx */ W16((u32)(r_esp+0x68u), (u16)r_edx);
    /* 0077f66b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0077f66f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077f671: mov word ptr [esp + 0x6c], si */ W16((u32)(r_esp+0x6cu), (u16)r_esi);
    /* 0077f676: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0077f678:; BB(0x0077f678);
    /* 0077f678: lea ebx, [esp + 0x54] */ r_ebx = (u32)(r_esp+0x54u);
    /* 0077f67c: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0077f680: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0077f684: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077f686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f687: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077f689: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f68a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f68b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f68c: call 0x843564 */ r_esp -= 4; W32(r_esp, 0x77f691u); f_00843564();
    /* 0077f691: mov ebx, eax */ r_ebx = r_eax;
    /* 0077f693: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077f696: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077f699: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 0077f69c: cmp edx, 0x1518 */ {  u32 a = r_edx; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077f6a2: jg 0x77f70b */ if ((!fZ&&fS==fO)) goto L_0077f70b;
L_0077f6a4:; BB(0x0077f6a4);
    /* 0077f6a4: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x77f6a9u); f_0083adbc();
    /* 0077f6a9: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x77f6aeu); f_007becd4();
    /* 0077f6ae: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x77f6b3u); f_007bfedc();
    /* 0077f6b3: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0077f6b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f6b8: jne 0x77f6fd */ if (!fZ) goto L_0077f6fd;
L_0077f6ba:; BB(0x0077f6ba);
    /* 0077f6ba: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077f6bf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77f6c4u); f_0061cdb0();
    /* 0077f6c4: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077f6c9: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x77f6ceu); f_0081888c();
    /* 0077f6ce: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077f6d3: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x77f6d8u); f_00817604();
    /* 0077f6d8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077f6dd: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x77f6e2u); f_00818f80();
    /* 0077f6e2: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x77f6e7u); f_0040835c();
    /* 0077f6e7: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x77f6ecu); f_0080030c();
    /* 0077f6ec: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0077f6ef: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f6f2: je 0x77f678 */ if (fZ) goto L_0077f678;
L_0077f6f4:; BB(0x0077f6f4);
    /* 0077f6f4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0077f6f7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0077f6fb: jmp 0x77f717 */ goto L_0077f717;
L_0077f6fd:; BB(0x0077f6fd);
    /* 0077f6fd: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0077f701: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f703: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0077f706: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0077f709: jmp 0x77f717 */ goto L_0077f717;
L_0077f70b:; BB(0x0077f70b);
    /* 0077f70b: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0077f70f: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f711: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0077f714: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
L_0077f717:; BB(0x0077f717);
    /* 0077f717: add edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077f71a: cmp edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077f71d: ja 0x77f7e9 */ if ((!fC&&!fZ)) goto L_0077f7e9;
L_0077f723:; BB(0x0077f723);
    /* 0077f723: mov edx, dword ptr [edx*4 + 0x979720] */ r_edx = R32((u32)(r_edx*4+0x979720u));
    /* 0077f72a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0077f7e9:; BB(0x0077f7e9);
    /* 0077f7e9: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0077f7ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f7ef: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0077f7f3: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0077f7f6: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0077f7fa: movzx ecx, byte ptr [esp + 0x31] */ r_ecx = (u32)R8((u32)(r_esp+0x31u));
    /* 0077f7ff: mov byte ptr [esi + 0x1d], cl */ W8((u32)(r_esi+0x1du), (u8)r_ecx);
    /* 0077f802: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0077f806: movzx ebx, byte ptr [esp + 0x32] */ r_ebx = (u32)R8((u32)(r_esp+0x32u));
    /* 0077f80b: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 0077f80e: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0077f812: movzx edx, byte ptr [esp + 0x33] */ r_edx = (u32)R8((u32)(r_esp+0x33u));
    /* 0077f817: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 0077f81a: mov ebx, 6 */ r_ebx = 0x6u;
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077f826:; BB(0x0077f826);
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f5c4); r_esp += 8; return;
L_0077f831:; BB(0x0077f831);
    /* 0077f831: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0077f834: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f836: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077f838: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077f83c: mov esi, 1 */ r_esi = 0x1u;
    /* 0077f841: mov eax, edi */ r_eax = r_edi;
    /* 0077f843: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0077f847: mov ebx, edx */ r_ebx = r_edx;
L_0077f849:; BB(0x0077f849);
    /* 0077f849: movsx ecx, byte ptr [esp + ebx + 0x34] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x34u));
    /* 0077f84e: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f851: je 0x77f857 */ if (fZ) goto L_0077f857;
L_0077f853:; BB(0x0077f853);
    /* 0077f853: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077f855: jne 0x77f876 */ if (!fZ) goto L_0077f876;
L_0077f857:; BB(0x0077f857);
    /* 0077f857: mov byte ptr [esp + ebx + 0x34], 0 */ W8((u32)(r_esp+r_ebx+0x34u), 0x0u);
    /* 0077f85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f85d: call 0x85a0fa */ r_esp -= 4; W32(r_esp, 0x77f862u); f_0085a0fa();
    /* 0077f862: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f863: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077f866: mov ecx, edi */ r_ecx = r_edi;
    /* 0077f868: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077f86b: mov byte ptr [ecx + edx + 0x1c], al */ W8((u32)(r_ecx+r_edx+0x1cu), (u8)r_eax);
    /* 0077f86f: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0077f873: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
L_0077f876:; BB(0x0077f876);
    /* 0077f876: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077f879: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077f87c: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077f87f: jl 0x77f849 */ if ((fS!=fO)) goto L_0077f849;
L_0077f881:; BB(0x0077f881);
    /* 0077f881: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077f883: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f886: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f887: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f888: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f889: ret 4 */ FN_RET(0x0077f5c4); r_esp += 8; return;
L_0077f88c:; BB(0x0077f88c);
    /* 0077f88c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0077f890: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077f892: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0077f896: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 0077f899: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0077f89d: movzx edx, byte ptr [esp + 0x11] */ r_edx = (u32)R8((u32)(r_esp+0x11u));
    /* 0077f8a2: mov byte ptr [esi + 0x1d], dl */ W8((u32)(r_esi+0x1du), (u8)r_edx);
    /* 0077f8a5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0077f8a9: movzx ecx, byte ptr [esp + 0x12] */ r_ecx = (u32)R8((u32)(r_esp+0x12u));
    /* 0077f8ae: mov byte ptr [edi + 0x1e], cl */ W8((u32)(r_edi+0x1eu), (u8)r_ecx);
    /* 0077f8b1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0077f8b5: movzx ebx, byte ptr [esp + 0x13] */ r_ebx = (u32)R8((u32)(r_esp+0x13u));
    /* 0077f8ba: mov byte ptr [eax + 0x1f], bl */ W8((u32)(r_eax+0x1fu), (u8)r_ebx);
    /* 0077f8bd: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0077f8c2: jmp 0x77f826 */ goto L_0077f826;
}

void f_0077f72c(void)
{
    FN_ENTER(0x0077f72c);
    /* 0077f72c: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077f730: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077f732: call 0x77f8c8 */ r_esp -= 4; W32(r_esp, 0x77f737u); f_0077f8c8();
    /* 0077f737: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077f739: jmp 0x77f81f */ goto L_0077f81f;
L_0077f81f:; BB(0x0077f81f);
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f72c); r_esp += 8; return;
}

void f_0077f73e(void)
{
    FN_ENTER(0x0077f73e);
    /* 0077f73e: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0077f742: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f744: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0077f748: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0077f74b: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0077f74f: movzx ecx, byte ptr [esp + 0x19] */ r_ecx = (u32)R8((u32)(r_esp+0x19u));
    /* 0077f754: mov byte ptr [esi + 0x1d], cl */ W8((u32)(r_esi+0x1du), (u8)r_ecx);
    /* 0077f757: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0077f75b: movzx ebx, byte ptr [esp + 0x1a] */ r_ebx = (u32)R8((u32)(r_esp+0x1au));
    /* 0077f760: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 0077f763: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0077f767: movzx edx, byte ptr [esp + 0x1b] */ r_edx = (u32)R8((u32)(r_esp+0x1bu));
    /* 0077f76c: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 0077f76f: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0077f774: jmp 0x77f81f */ goto L_0077f81f;
L_0077f81f:; BB(0x0077f81f);
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f73e); r_esp += 8; return;
}

void f_0077f779(void)
{
    FN_ENTER(0x0077f779);
    /* 0077f779: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0077f77d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f77f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0077f783: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0077f786: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0077f78a: movzx ecx, byte ptr [esp + 0x21] */ r_ecx = (u32)R8((u32)(r_esp+0x21u));
    /* 0077f78f: mov byte ptr [esi + 0x1d], cl */ W8((u32)(r_esi+0x1du), (u8)r_ecx);
    /* 0077f792: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0077f796: movzx ebx, byte ptr [esp + 0x22] */ r_ebx = (u32)R8((u32)(r_esp+0x22u));
    /* 0077f79b: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 0077f79e: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0077f7a2: movzx edx, byte ptr [esp + 0x23] */ r_edx = (u32)R8((u32)(r_esp+0x23u));
    /* 0077f7a7: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 0077f7aa: mov ebx, 3 */ r_ebx = 0x3u;
    /* 0077f7af: jmp 0x77f81f */ goto L_0077f81f;
L_0077f81f:; BB(0x0077f81f);
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f779); r_esp += 8; return;
}

void f_0077f7b1(void)
{
    FN_ENTER(0x0077f7b1);
    /* 0077f7b1: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0077f7b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f7b7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0077f7bb: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0077f7be: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0077f7c2: movzx ecx, byte ptr [esp + 0x29] */ r_ecx = (u32)R8((u32)(r_esp+0x29u));
    /* 0077f7c7: mov byte ptr [esi + 0x1d], cl */ W8((u32)(r_esi+0x1du), (u8)r_ecx);
    /* 0077f7ca: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077f7ce: movzx ebx, byte ptr [esp + 0x2a] */ r_ebx = (u32)R8((u32)(r_esp+0x2au));
    /* 0077f7d3: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 0077f7d6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0077f7da: movzx edx, byte ptr [esp + 0x2b] */ r_edx = (u32)R8((u32)(r_esp+0x2bu));
    /* 0077f7df: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 0077f7e2: mov ebx, 5 */ r_ebx = 0x5u;
    /* 0077f7e7: jmp 0x77f81f */ goto L_0077f81f;
L_0077f81f:; BB(0x0077f81f);
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f7b1); r_esp += 8; return;
}

void f_0077f7e9(void)
{
    FN_ENTER(0x0077f7e9);
    /* 0077f7e9: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0077f7ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f7ef: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0077f7f3: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0077f7f6: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0077f7fa: movzx ecx, byte ptr [esp + 0x31] */ r_ecx = (u32)R8((u32)(r_esp+0x31u));
    /* 0077f7ff: mov byte ptr [esi + 0x1d], cl */ W8((u32)(r_esi+0x1du), (u8)r_ecx);
    /* 0077f802: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0077f806: movzx ebx, byte ptr [esp + 0x32] */ r_ebx = (u32)R8((u32)(r_esp+0x32u));
    /* 0077f80b: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 0077f80e: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0077f812: movzx edx, byte ptr [esp + 0x33] */ r_edx = (u32)R8((u32)(r_esp+0x33u));
    /* 0077f817: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 0077f81a: mov ebx, 6 */ r_ebx = 0x6u;
    /* 0077f81f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f820: call 0x843610 */ r_esp -= 4; W32(r_esp, 0x77f825u); f_00843610();
    /* 0077f825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f826: mov eax, ebx */ r_eax = r_ebx;
    /* 0077f828: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f82b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f82c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077f82d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077f82e: ret 4 */ FN_RET(0x0077f7e9); r_esp += 8; return;
}

void f_0077f8c8(void) /* sub_77F8C8 */
{
    FN_ENTER(0x0077f8c8);
    /* 0077f8c8: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0077f8cd: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 0077f8d0: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 0077f8d5: mov byte ptr [ecx + 0x1d], dl */ W8((u32)(r_ecx+0x1du), (u8)r_edx);
    /* 0077f8d8: movzx eax, byte ptr [esp + 6] */ r_eax = (u32)R8((u32)(r_esp+0x6u));
    /* 0077f8dd: mov byte ptr [ecx + 0x1e], al */ W8((u32)(r_ecx+0x1eu), (u8)r_eax);
    /* 0077f8e0: movzx eax, byte ptr [esp + 7] */ r_eax = (u32)R8((u32)(r_esp+0x7u));
    /* 0077f8e5: mov byte ptr [ecx + 0x1f], al */ W8((u32)(r_ecx+0x1fu), (u8)r_eax);
    /* 0077f8e8: ret 4 */ FN_RET(0x0077f8c8); r_esp += 8; return;
}

void f_0077f8ec(void) /* sub_77F8EC */
{
    FN_ENTER(0x0077f8ec);
    /* 0077f8ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f8ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077f8ef: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077f8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f8f5: call 0x77f904 */ r_esp -= 4; W32(r_esp, 0x77f8fau); f_0077f904();
    /* 0077f8fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077f8fb: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 0077f8ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077f900: ret 4 */ FN_RET(0x0077f8ec); r_esp += 8; return;
}

void f_0077f904(void) /* sub_77F904 */
{
    FN_ENTER(0x0077f904);
    /* 0077f904: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 0077f909: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 0077f90e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0077f911: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077f913: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0077f916: ret  */ FN_RET(0x0077f904); r_esp += 4; return;
}

void f_0077f918(void) /* sub_77F918 */
{
    FN_ENTER(0x0077f918);
    /* 0077f918: movsx eax, word ptr [ecx + 0x10072] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x10072u));
    /* 0077f91f: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0077f922: mov word ptr [ecx + 0x10072], dx */ W16((u32)(r_ecx+0x10072u), (u16)r_edx);
    /* 0077f929: movzx eax, byte ptr [ecx + eax + 0x6a] */ r_eax = (u32)R8((u32)(r_ecx+r_eax+0x6au));
    /* 0077f92e: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0077f931: cmp dx, word ptr [ecx + 0x10070] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x10070u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0077f938: jl 0x77f94a */ if ((fS!=fO)) goto L_0077f94a;
L_0077f93a:; BB(0x0077f93a);
    /* 0077f93a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f93c: mov word ptr [ecx + 0x10072], dx */ W16((u32)(r_ecx+0x10072u), (u16)r_edx);
    /* 0077f943: mov word ptr [ecx + 0x10070], dx */ W16((u32)(r_ecx+0x10070u), (u16)r_edx);
L_0077f94a:; BB(0x0077f94a);
    /* 0077f94a: ret  */ FN_RET(0x0077f918); r_esp += 4; return;
}

void f_0077f94c(void) /* sub_77F94C */
{
    FN_ENTER(0x0077f94c);
    /* 0077f94c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077f94d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077f94f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077f951: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x77f956u); f_008173b4();
    /* 0077f956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f958: je 0x77f96d */ if (fZ) goto L_0077f96d;
L_0077f95a:; BB(0x0077f95a);
    /* 0077f95a: movsx edx, word ptr [ebp + 0x10070] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10070u));
    /* 0077f961: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f963: mov eax, 0 */ r_eax = 0x0u;
    /* 0077f968: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0077f96b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f96c: ret  */ FN_RET(0x0077f94c); r_esp += 4; return;
L_0077f96d:; BB(0x0077f96d);
    /* 0077f96d: mov eax, 1 */ r_eax = 0x1u;
    /* 0077f972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077f973: ret  */ FN_RET(0x0077f94c); r_esp += 4; return;
}

void f_0077f974(void) /* sub_77F974 */
{
    FN_ENTER(0x0077f974);
    /* 0077f974: movsx edx, word ptr [ecx + 0x10072] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x10072u));
    /* 0077f97b: lea eax, [ecx + edx + 0x6a] */ r_eax = (u32)(r_ecx+r_edx+0x6au);
    /* 0077f97f: ret  */ FN_RET(0x0077f974); r_esp += 4; return;
}

void f_0077f980(void) /* sub_77F980 */
{
    FN_ENTER(0x0077f980);
    /* 0077f980: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077f984: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077f989: mov eax, dword ptr [eax*4 + 0xa9b460] */ r_eax = R32((u32)(r_eax*4+0xa9b460u));
    /* 0077f990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f992: je 0x77f9bc */ if (fZ) goto L_0077f9bc;
L_0077f994:; BB(0x0077f994);
    /* 0077f994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077f996: jle 0x77f9bd */ if ((fZ||fS!=fO)) goto L_0077f9bd;
L_0077f998:; BB(0x0077f998);
    /* 0077f998: mov word ptr [eax + 0x10070], dx */ W16((u32)(r_eax+0x10070u), (u16)r_edx);
    /* 0077f99f: mov edx, dword ptr [eax + 0x10088] */ r_edx = R32((u32)(r_eax+0x10088u));
    /* 0077f9a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077f9a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f9a9: mov byte ptr [eax + 0x10075], cl */ W8((u32)(r_eax+0x10075u), (u8)r_ecx);
    /* 0077f9af: mov word ptr [eax + 0x10072], cx */ W16((u32)(r_eax+0x10072u), (u16)r_ecx);
    /* 0077f9b6: je 0x77f9bc */ if (fZ) goto L_0077f9bc;
L_0077f9b8:; BB(0x0077f9b8);
    /* 0077f9b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077f9b9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x77f9bbu); call_ind(t); }
    /* 0077f9bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077f9bc:; BB(0x0077f9bc);
    /* 0077f9bc: ret  */ FN_RET(0x0077f980); r_esp += 4; return;
L_0077f9bd:; BB(0x0077f9bd);
    /* 0077f9bd: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077f9c4: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077f9ca: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077f9d0: ret  */ FN_RET(0x0077f980); r_esp += 4; return;
}

void f_0077f9d4(void) /* sub_77F9D4 */
{
    FN_ENTER(0x0077f9d4);
    /* 0077f9d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077f9d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077f9d6: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077f9d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077f9db: mov byte ptr [ebx + 0x10075], 1 */ W8((u32)(r_ebx+0x10075u), 0x1u);
    /* 0077f9e2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077f9e7: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0077f9eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077f9ed: mov dword ptr [ebx + 0x1211c], edx */ W32((u32)(r_ebx+0x1211cu), r_edx);
    /* 0077f9f3: mov word ptr [ebx + 0x10070], dx */ W16((u32)(r_ebx+0x10070u), (u16)r_edx);
    /* 0077f9fa: mov word ptr [ebx + 0x10072], dx */ W16((u32)(r_ebx+0x10072u), (u16)r_edx);
    /* 0077fa01: mov dword ptr [ebx + 0x10078], edx */ W32((u32)(r_ebx+0x10078u), r_edx);
    /* 0077fa07: call 0x83f510 */ r_esp -= 4; W32(r_esp, 0x77fa0cu); f_0083f510();
    /* 0077fa0c: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0077fa10: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fa13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077fa15: jge 0x77fa22 */ if ((fS==fO)) goto L_0077fa22;
L_0077fa17:; BB(0x0077fa17);
    /* 0077fa17: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077fa1c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fa1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fa20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fa21: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077fa22:; BB(0x0077fa22);
    /* 0077fa22: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0077fa29: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0077fa2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa2d: push 0x2001 */ { u32 v = 0x2001u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa33: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77fa38u); f_006dc358();
    /* 0077fa38: movsx esi, word ptr [ebx + 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fa3c: movzx eax, word ptr [ebx + 0x22] */ r_eax = (u32)R16((u32)(r_ebx+0x22u));
    /* 0077fa40: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 0077fa48: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0077fa50: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0077fa54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa57: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x77fa5cu); f_006dc358();
    /* 0077fa5c: movsx ecx, word ptr [ebx + 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fa60: mov eax, 4 */ r_eax = 0x4u;
    /* 0077fa65: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0077fa69: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0077fa6c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077fa6e: mov byte ptr [esp + 0x48], 0x78 */ W8((u32)(r_esp+0x48u), 0x78u);
    /* 0077fa73: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0077fa77: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0077fa7b: mov byte ptr [esp + 0x49], dl */ W8((u32)(r_esp+0x49u), (u8)r_edx);
    /* 0077fa7f: mov byte ptr [esp + 0x4a], dl */ W8((u32)(r_esp+0x4au), (u8)r_edx);
    /* 0077fa83: lea esi, [esp + 0x30] */ r_esi = (u32)(r_esp+0x30u);
    /* 0077fa87: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0077fa8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa8c: movzx edx, word ptr [ebx + 0x20] */ r_edx = (u32)R16((u32)(r_ebx+0x20u));
    /* 0077fa90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fa93: call 0x83f738 */ r_esp -= 4; W32(r_esp, 0x77fa98u); f_0083f738();
    /* 0077fa98: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fa9b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fa9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077faa0: je 0x77faad */ if (fZ) goto L_0077faad;
L_0077faa2:; BB(0x0077faa2);
    /* 0077faa2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077faa7: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077faaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077faab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077faac: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077faad:; BB(0x0077faad);
    /* 0077faad: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x77fab2u); f_0083adbc();
    /* 0077fab2: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x77fab7u); f_007becd4();
    /* 0077fab7: movsx ecx, word ptr [ebx + 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fabb: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fabe: je 0x77fae5 */ if (fZ) goto L_0077fae5;
L_0077fac0:; BB(0x0077fac0);
    /* 0077fac0: lea esi, [ebx + 0x1007c] */ r_esi = (u32)(r_ebx+0x1007cu);
    /* 0077fac6: lea edx, [ebx + 0x10080] */ r_edx = (u32)(r_ebx+0x10080u);
    /* 0077facc: lea eax, [ebx + 0x10084] */ r_eax = (u32)(r_ebx+0x10084u);
    /* 0077fad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fad4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fad6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fad7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fad8: call 0x83f7bc */ r_esp -= 4; W32(r_esp, 0x77faddu); f_0083f7bc();
    /* 0077fadd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fae0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fae3: jmp 0x77fae7 */ goto L_0077fae7;
L_0077fae5:; BB(0x0077fae5);
    /* 0077fae5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077fae7:; BB(0x0077fae7);
    /* 0077fae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fae9: jne 0x77fb76 */ if (!fZ) goto L_0077fb76;
L_0077faef:; BB(0x0077faef);
    /* 0077faef: movsx eax, word ptr [ebx + 0x1007c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1007cu));
    /* 0077faf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077faf8: jl 0x77fb6b */ if ((fS!=fO)) goto L_0077fb6b;
L_0077fafa:; BB(0x0077fafa);
    /* 0077fafa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077fafd: jge 0x77fb4b */ if ((fS==fO)) goto L_0077fb4b;
L_0077faff:; BB(0x0077faff);
    /* 0077faff: call 0x7ad780 */ r_esp -= 4; W32(r_esp, 0x77fb04u); f_007ad780();
    /* 0077fb04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fb06: je 0x77fb60 */ if (fZ) goto L_0077fb60;
L_0077fb08:; BB(0x0077fb08);
    /* 0077fb08: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x77fb0du); f_007bfedc();
    /* 0077fb0d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0077fb10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fb12: jne 0x77fb81 */ if (!fZ) goto L_0077fb81;
L_0077fb14:; BB(0x0077fb14);
    /* 0077fb14: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077fb19: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77fb1eu); f_0061cdb0();
    /* 0077fb1e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077fb23: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x77fb28u); f_0081888c();
    /* 0077fb28: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077fb2d: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x77fb32u); f_00817604();
    /* 0077fb32: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077fb37: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x77fb3cu); f_00818f80();
    /* 0077fb3c: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x77fb41u); f_0040835c();
    /* 0077fb41: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x77fb46u); f_0080030c();
    /* 0077fb46: jmp 0x77faad */ goto L_0077faad;
L_0077fb4b:; BB(0x0077fb4b);
    /* 0077fb4b: movzx edx, word ptr [ebx + 0x28] */ r_edx = (u32)R16((u32)(r_ebx+0x28u));
    /* 0077fb4f: mov dword ptr [edx*4 + 0xa9b460], ebx */ W32((u32)(r_edx*4+0xa9b460u), r_ebx);
    /* 0077fb56: movsx eax, word ptr [ebx + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fb5a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fb5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fb5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fb5f: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077fb60:; BB(0x0077fb60);
    /* 0077fb60: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 0077fb65: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fb68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fb69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fb6a: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077fb6b:; BB(0x0077fb6b);
    /* 0077fb6b: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0077fb70: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fb73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fb74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fb75: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077fb76:; BB(0x0077fb76);
    /* 0077fb76: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0077fb7b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fb7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fb7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fb80: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
L_0077fb81:; BB(0x0077fb81);
    /* 0077fb81: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0077fb86: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fb89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fb8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fb8b: ret  */ FN_RET(0x0077f9d4); r_esp += 4; return;
}

void f_0077fb8c(void) /* sub_77FB8C */
{
    FN_ENTER(0x0077fb8c);
    /* 0077fb8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fb8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fb8e: mov edi, ecx */ r_edi = r_ecx;
    /* 0077fb90: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0077fb94: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077fb97: je 0x77fbc8 */ if (fZ) goto L_0077fbc8;
L_0077fb99:; BB(0x0077fb99);
    /* 0077fb99: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fb9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fba0: lea ebx, [edi + 0x6a] */ r_ebx = (u32)(r_edi+0x6au);
    /* 0077fba3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fba4: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x77fba9u); f_0086b5cc();
    /* 0077fba9: movsx eax, word ptr [edi + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0077fbad: mov byte ptr [edi + 0x10075], 1 */ W8((u32)(r_edi+0x10075u), 0x1u);
    /* 0077fbb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbb5: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbba: push 0x77f980 */ { u32 v = 0x77f980u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbc0: call 0x83f8b4 */ r_esp -= 4; W32(r_esp, 0x77fbc5u); f_0083f8b4();
    /* 0077fbc5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077fbc8:; BB(0x0077fbc8);
    /* 0077fbc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fbc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fbca: ret  */ FN_RET(0x0077fb8c); r_esp += 4; return;
}

void f_0077fbcc(void) /* sub_77FBCC */
{
    FN_ENTER(0x0077fbcc);
    /* 0077fbcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbcd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fbce: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077fbd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077fbd3: movsx eax, word ptr [ebx + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fbd7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fbda: je 0x77fbf0 */ if (fZ) goto L_0077fbf0;
L_0077fbdc:; BB(0x0077fbdc);
    /* 0077fbdc: movsx eax, byte ptr [ebx + 0x10074] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x10074u));
    /* 0077fbe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fbe5: jne 0x77fbf0 */ if (!fZ) goto L_0077fbf0;
L_0077fbe7:; BB(0x0077fbe7);
    /* 0077fbe7: call 0x7ad780 */ r_esp -= 4; W32(r_esp, 0x77fbecu); f_007ad780();
    /* 0077fbec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fbee: jne 0x77fbfd */ if (!fZ) goto L_0077fbfd;
L_0077fbf0:; BB(0x0077fbf0);
    /* 0077fbf0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077fbf5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fbf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fbf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fbfa: ret 4 */ FN_RET(0x0077fbcc); r_esp += 8; return;
L_0077fbfd:; BB(0x0077fbfd);
    /* 0077fbfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077fbff: call 0x77fcdc */ r_esp -= 4; W32(r_esp, 0x77fc04u); f_0077fcdc();
    /* 0077fc04: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fc07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fc09: je 0x77fc2b */ if (fZ) goto L_0077fc2b;
L_0077fc0b:; BB(0x0077fc0b);
    /* 0077fc0b: movzx edx, byte ptr [ebx + 0x10074] */ r_edx = (u32)R8((u32)(r_ebx+0x10074u));
    /* 0077fc12: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fc18: mov byte ptr [ebx + 0x10074], dl */ W8((u32)(r_ebx+0x10074u), (u8)r_edx);
    /* 0077fc1e: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fc23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fc26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fc27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fc28: ret 4 */ FN_RET(0x0077fbcc); r_esp += 8; return;
L_0077fc2b:; BB(0x0077fc2b);
    /* 0077fc2b: movsx eax, word ptr [ebx + 0x1007c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1007cu));
    /* 0077fc32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077fc34: jl 0x77fcb9 */ if ((fS!=fO)) goto L_0077fcb9;
L_0077fc3a:; BB(0x0077fc3a);
    /* 0077fc3a: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0077fc3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077fc40: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0077fc42: mov ecx, edi */ r_ecx = r_edi;
    /* 0077fc44: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077fc46: je 0x77fc54 */ if (fZ) goto L_0077fc54;
L_0077fc48:; BB(0x0077fc48);
    /* 0077fc48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077fc4b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077fc4e: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0077fc50: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077fc52: jne 0x77fc48 */ if (!fZ) goto L_0077fc48;
L_0077fc54:; BB(0x0077fc54);
    /* 0077fc54: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0077fc57: cmp eax, dword ptr [ebx + 0x10080] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x10080u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0077fc5d: jb 0x77fc7f */ if (fC) goto L_0077fc7f;
L_0077fc5f:; BB(0x0077fc5f);
    /* 0077fc5f: movzx edx, byte ptr [ebx + 0x10074] */ r_edx = (u32)R8((u32)(r_ebx+0x10074u));
    /* 0077fc66: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fc6c: mov byte ptr [ebx + 0x10074], dl */ W8((u32)(r_ebx+0x10074u), (u8)r_edx);
    /* 0077fc72: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fc77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fc7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fc7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fc7c: ret 4 */ FN_RET(0x0077fbcc); r_esp += 8; return;
L_0077fc7f:; BB(0x0077fc7f);
    /* 0077fc7f: movsx edi, word ptr [ebx + 0x28] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fc83: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077fc86: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0077fc8a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0077fc8e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0077fc91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fc92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fc94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fc96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fc97: call 0x83f80c */ r_esp -= 4; W32(r_esp, 0x77fc9cu); f_0083f80c();
    /* 0077fc9c: mov edi, eax */ r_edi = r_eax;
    /* 0077fc9e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fca1: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0077fca4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fca6: je 0x77fcaf */ if (fZ) goto L_0077fcaf;
L_0077fca8:; BB(0x0077fca8);
    /* 0077fca8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0077fcaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077fcac: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x77fcafu); call_ind(t); }
L_0077fcaf:; BB(0x0077fcaf);
    /* 0077fcaf: mov eax, edi */ r_eax = r_edi;
    /* 0077fcb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fcb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fcb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fcb6: ret 4 */ FN_RET(0x0077fbcc); r_esp += 8; return;
L_0077fcb9:; BB(0x0077fcb9);
    /* 0077fcb9: movzx edx, byte ptr [ebx + 0x10074] */ r_edx = (u32)R8((u32)(r_ebx+0x10074u));
    /* 0077fcc0: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fcc6: mov byte ptr [ebx + 0x10074], dl */ W8((u32)(r_ebx+0x10074u), (u8)r_edx);
    /* 0077fccc: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fcd1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fcd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fcd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fcd6: ret 4 */ FN_RET(0x0077fbcc); r_esp += 8; return;
}

void f_0077fcdc(void) /* sub_77FCDC */
{
    FN_ENTER(0x0077fcdc);
    /* 0077fcdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcdd: movsx esi, word ptr [ecx + 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x28u));
    /* 0077fce1: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fce4: je 0x77fd0b */ if (fZ) goto L_0077fd0b;
L_0077fce6:; BB(0x0077fce6);
    /* 0077fce6: lea edx, [ecx + 0x1007c] */ r_edx = (u32)(r_ecx+0x1007cu);
    /* 0077fcec: lea eax, [ecx + 0x10080] */ r_eax = (u32)(r_ecx+0x10080u);
    /* 0077fcf2: add ecx, 0x10084 */ {  u32 a = r_ecx; u32 b = 0x10084u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077fcf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fcfe: call 0x83f7bc */ r_esp -= 4; W32(r_esp, 0x77fd03u); f_0083f7bc();
    /* 0077fd03: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fd06: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fd09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fd0a: ret  */ FN_RET(0x0077fcdc); r_esp += 4; return;
L_0077fd0b:; BB(0x0077fd0b);
    /* 0077fd0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077fd0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fd0e: ret  */ FN_RET(0x0077fcdc); r_esp += 4; return;
}

void f_0077fd10(void) /* sub_77FD10 */
{
    FN_ENTER(0x0077fd10);
    /* 0077fd10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fd11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fd12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077fd13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fd14: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077fd17: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077fd19: movsx eax, word ptr [ebp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 0077fd1d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fd20: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0077fd24: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0077fd28: je 0x77fd3e */ if (fZ) goto L_0077fd3e;
L_0077fd2a:; BB(0x0077fd2a);
    /* 0077fd2a: movsx eax, byte ptr [ebp + 0x10074] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x10074u));
    /* 0077fd31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fd33: jne 0x77fd3e */ if (!fZ) goto L_0077fd3e;
L_0077fd35:; BB(0x0077fd35);
    /* 0077fd35: call 0x7ad780 */ r_esp -= 4; W32(r_esp, 0x77fd3au); f_007ad780();
    /* 0077fd3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fd3c: jne 0x77fd4d */ if (!fZ) goto L_0077fd4d;
L_0077fd3e:; BB(0x0077fd3e);
    /* 0077fd3e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077fd43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fd46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fd47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077fd48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fd49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fd4a: ret 8 */ FN_RET(0x0077fd10); r_esp += 12; return;
L_0077fd4d:; BB(0x0077fd4d);
    /* 0077fd4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077fd4f: call 0x77fcdc */ r_esp -= 4; W32(r_esp, 0x77fd54u); f_0077fcdc();
    /* 0077fd54: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fd57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fd59: je 0x77fd7d */ if (fZ) goto L_0077fd7d;
L_0077fd5b:; BB(0x0077fd5b);
    /* 0077fd5b: movzx edx, byte ptr [ebp + 0x10074] */ r_edx = (u32)R8((u32)(r_ebp+0x10074u));
    /* 0077fd62: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fd68: mov byte ptr [ebp + 0x10074], dl */ W8((u32)(r_ebp+0x10074u), (u8)r_edx);
    /* 0077fd6e: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fd73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fd76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fd77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077fd78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fd79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fd7a: ret 8 */ FN_RET(0x0077fd10); r_esp += 12; return;
L_0077fd7d:; BB(0x0077fd7d);
    /* 0077fd7d: movsx eax, word ptr [ebp + 0x1007c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1007cu));
    /* 0077fd84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077fd86: jl 0x77fe3d */ if ((fS!=fO)) goto L_0077fe3d;
L_0077fd8c:; BB(0x0077fd8c);
    /* 0077fd8c: mov edx, dword ptr [ebp + 0x1211c] */ r_edx = R32((u32)(r_ebp+0x1211cu));
    /* 0077fd92: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077fd94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fd96: je 0x77fde0 */ if (fZ) goto L_0077fde0;
L_0077fd98:; BB(0x0077fd98);
    /* 0077fd98: lea eax, [esi + 7] */ r_eax = (u32)(r_esi+0x7u);
    /* 0077fd9b: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077fd9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077fda1: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0077fda4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fda5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77fdaau); f_008581c5();
    /* 0077fdaa: mov ebx, eax */ r_ebx = r_eax;
    /* 0077fdac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fdaf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fdb1: je 0x77fe5f */ if (fZ) goto L_0077fe5f;
L_0077fdb7:; BB(0x0077fdb7);
    /* 0077fdb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdba: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x77fdbfu); f_0086b6b8();
    /* 0077fdbf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fdc2: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077fdc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077fdc6: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0077fdc8: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0077fdcb: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077fdce: lea ecx, [ebp + 0x1008c] */ r_ecx = (u32)(r_ebp+0x1008cu);
    /* 0077fdd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdd6: call 0x763d08 */ r_esp -= 4; W32(r_esp, 0x77fddbu); f_00763d08();
    /* 0077fddb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0077fdde: mov edi, ebx */ r_edi = r_ebx;
L_0077fde0:; BB(0x0077fde0);
    /* 0077fde0: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0077fde4: movsx edi, word ptr [ebp + 0x28] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 0077fde8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0077fdec: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077fdee: mov dword ptr [ebp + 0x10078], esi */ W32((u32)(r_ebp+0x10078u), r_esi);
    /* 0077fdf4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077fdf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdfb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fdfd: call 0x83f80c */ r_esp -= 4; W32(r_esp, 0x77fe02u); f_0083f80c();
    /* 0077fe02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fe03: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0077fe06: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77fe0bu); f_00857e98();
    /* 0077fe0b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077fe0e: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077fe11: jl 0x77fe17 */ if ((fS!=fO)) goto L_0077fe17;
L_0077fe13:; BB(0x0077fe13);
    /* 0077fe13: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077fe15: jle 0x77fe31 */ if ((fZ||fS!=fO)) goto L_0077fe31;
L_0077fe17:; BB(0x0077fe17);
    /* 0077fe17: movzx eax, byte ptr [ebp + 0x10074] */ r_eax = (u32)R8((u32)(r_ebp+0x10074u));
    /* 0077fe1e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077fe21: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077fe26: mov byte ptr [ebp + 0x10074], al */ W8((u32)(r_ebp+0x10074u), (u8)r_eax);
    /* 0077fe2c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077fe2e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x77fe31u); call_ind(t); }
L_0077fe31:; BB(0x0077fe31);
    /* 0077fe31: mov eax, esi */ r_eax = r_esi;
    /* 0077fe33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fe36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fe37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077fe38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fe39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fe3a: ret 8 */ FN_RET(0x0077fd10); r_esp += 12; return;
L_0077fe3d:; BB(0x0077fe3d);
    /* 0077fe3d: movzx edx, byte ptr [ebp + 0x10074] */ r_edx = (u32)R8((u32)(r_ebp+0x10074u));
    /* 0077fe44: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fe4a: mov byte ptr [ebp + 0x10074], dl */ W8((u32)(r_ebp+0x10074u), (u8)r_edx);
    /* 0077fe50: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fe55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fe58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fe59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077fe5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fe5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fe5c: ret 8 */ FN_RET(0x0077fd10); r_esp += 12; return;
L_0077fe5f:; BB(0x0077fe5f);
    /* 0077fe5f: movzx edx, byte ptr [ebp + 0x10074] */ r_edx = (u32)R8((u32)(r_ebp+0x10074u));
    /* 0077fe66: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077fe6c: mov byte ptr [ebp + 0x10074], dl */ W8((u32)(r_ebp+0x10074u), (u8)r_edx);
    /* 0077fe72: mov eax, 1 */ r_eax = 0x1u;
    /* 0077fe77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077fe7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077fe7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077fe7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077fe7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077fe7e: ret 8 */ FN_RET(0x0077fd10); r_esp += 12; return;
}

void f_0077fe84(void) /* sub_77FE84 */
{
    FN_ENTER(0x0077fe84);
    /* 0077fe84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fe85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fe86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077fe87: mov eax, ecx */ r_eax = r_ecx;
    /* 0077fe89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077fe8b: mov ebx, eax */ r_ebx = r_eax;
    /* 0077fe8d: mov esi, edx */ r_esi = r_edx;
L_0077fe8f:; BB(0x0077fe8f);
    /* 0077fe8f: movsx ecx, word ptr [ebx + 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x28u));
    /* 0077fe93: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077fe96: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fe99: je 0x77fec0 */ if (fZ) goto L_0077fec0;
L_0077fe9b:; BB(0x0077fe9b);
    /* 0077fe9b: lea edx, [ebx + 0x1007c] */ r_edx = (u32)(r_ebx+0x1007cu);
    /* 0077fea1: lea eax, [ebx + 0x10080] */ r_eax = (u32)(r_ebx+0x10080u);
    /* 0077fea7: lea edi, [ebx + 0x10084] */ r_edi = (u32)(r_ebx+0x10084u);
    /* 0077fead: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077feae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077feaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077feb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077feb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077feb3: call 0x83f7bc */ r_esp -= 4; W32(r_esp, 0x77feb8u); f_0083f7bc();
    /* 0077feb8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077febb: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 0077febe: jmp 0x77fec2 */ goto L_0077fec2;
L_0077fec0:; BB(0x0077fec0);
    /* 0077fec0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0077fec2:; BB(0x0077fec2);
    /* 0077fec2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fec4: jne 0x77ffbc */ if (!fZ) goto L_0077ffbc;
L_0077feca:; BB(0x0077feca);
    /* 0077feca: mov edi, dword ptr [ebx + 0x10080] */ r_edi = R32((u32)(r_ebx+0x10080u));
    /* 0077fed0: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077fed6: jbe 0x77ff9e */ if ((fC||fZ)) goto L_0077ff9e;
L_0077fedc:; BB(0x0077fedc);
    /* 0077fedc: movsx edi, word ptr [ebx + 0x1007c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x1007cu));
    /* 0077fee3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077fee5: jl 0x77ff80 */ if ((fS!=fO)) goto L_0077ff80;
L_0077feeb:; BB(0x0077feeb);
    /* 0077feeb: call 0x7ad780 */ r_esp -= 4; W32(r_esp, 0x77fef0u); f_007ad780();
    /* 0077fef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077fef2: je 0x77ff62 */ if (fZ) goto L_0077ff62;
L_0077fef4:; BB(0x0077fef4);
    /* 0077fef4: mov edi, dword ptr [ebx + 0x10080] */ r_edi = R32((u32)(r_ebx+0x10080u));
    /* 0077fefa: cmp edi, 0xfff */ {  u32 a = r_edi; u32 b = 0xfffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0077ff00: ja 0x77ffda */ if ((!fC&&!fZ)) goto L_0077ffda;
L_0077ff06:; BB(0x0077ff06);
    /* 0077ff06: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077ff0b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77ff10u); f_0061cdb0();
    /* 0077ff10: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077ff15: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x77ff1au); f_0081888c();
    /* 0077ff1a: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077ff1f: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x77ff24u); f_00817604();
    /* 0077ff24: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0077ff29: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x77ff2eu); f_00818f80();
    /* 0077ff2e: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x77ff33u); f_0040835c();
    /* 0077ff33: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x77ff38u); f_0080030c();
    /* 0077ff38: cmp esi, 0x708 */ {  u32 a = r_esi; u32 b = 0x708u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ff3e: jl 0x77fe8f */ if ((fS!=fO)) goto L_0077fe8f;
L_0077ff44:; BB(0x0077ff44);
    /* 0077ff44: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ff46: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077ff4d: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ff53: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077ff59: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ff5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ff5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ff60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ff61: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
L_0077ff62:; BB(0x0077ff62);
    /* 0077ff62: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ff64: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077ff6b: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ff71: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077ff77: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ff7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ff7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ff7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ff7f: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
L_0077ff80:; BB(0x0077ff80);
    /* 0077ff80: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ff82: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077ff89: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ff8f: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077ff95: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ff9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ff9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ff9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ff9d: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
L_0077ff9e:; BB(0x0077ff9e);
    /* 0077ff9e: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ffa0: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077ffa7: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ffad: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077ffb3: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ffb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ffb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ffba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ffbb: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
L_0077ffbc:; BB(0x0077ffbc);
    /* 0077ffbc: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ffbe: movzx edx, byte ptr [eax + 0x10074] */ r_edx = (u32)R8((u32)(r_eax+0x10074u));
    /* 0077ffc5: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ffcb: mov byte ptr [eax + 0x10074], dl */ W8((u32)(r_eax+0x10074u), (u8)r_edx);
    /* 0077ffd1: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ffd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ffd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ffd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ffd9: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
L_0077ffda:; BB(0x0077ffda);
    /* 0077ffda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ffdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ffdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077ffde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077ffdf: ret  */ FN_RET(0x0077fe84); r_esp += 4; return;
}

void f_0077ffe0(void) /* sub_77FFE0 */
{
    FN_ENTER(0x0077ffe0);
    /* 0077ffe0: mov eax, dword ptr [0xa9bc80] */ r_eax = R32((u32)(0xa9bc80u));
    /* 0077ffe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ffe7: je 0x77fffa */ if (fZ) goto L_0077fffa;
L_0077ffe9:; BB(0x0077ffe9);
    /* 0077ffe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ffea: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77ffefu); f_00857e98();
    /* 0077ffef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077fff0: mov dword ptr [0xa9bc80], 0 */ W32((u32)(0xa9bc80u), 0x0u);
L_0077fffa:; BB(0x0077fffa);
    /* 0077fffa: ret  */ FN_RET(0x0077ffe0); r_esp += 4; return;
}

void f_0077fffc(void) /* sub_77FFFC */
{
    FN_ENTER(0x0077fffc);
    /* 0077fffc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fffd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077fffe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077ffff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00780000: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00780003: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00780007: mov edi, 0xa9bc84 */ r_edi = 0xa9bc84u;
    /* 0078000c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078000e: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00780012: mov ebx, dword ptr [0xaab3f0] */ r_ebx = R32((u32)(0xaab3f0u));
    /* 00780018: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0078001c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078001d: mov ebp, 0xa9b500 */ r_ebp = 0xa9b500u;
    /* 00780022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00780023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00780024: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780029u); f_007a8c4c();
    /* 00780029: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078002c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00780030: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x780035u); f_0083173c();
    /* 00780035: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00780039: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0078003d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078003f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780043: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780045: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780047: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0077fffc); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

