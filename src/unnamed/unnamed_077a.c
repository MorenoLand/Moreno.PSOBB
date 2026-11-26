#include "protos.h"

void f_0077a040(void) /* sub_77A040 */
{
    FN_ENTER(0x0077a040);
    /* 0077a040: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0077a045: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0077a048: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a04e: je 0x77a058 */ if (fZ) goto L_0077a058;
L_0077a050:; BB(0x0077a050);
    /* 0077a050: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077a056: jl 0x77a05b */ if ((fS!=fO)) goto L_0077a05b;
L_0077a058:; BB(0x0077a058);
    /* 0077a058: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a05a: ret  */ FN_RET(0x0077a040); r_esp += 4; return;
L_0077a05b:; BB(0x0077a05b);
    /* 0077a05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a05c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x77a061u); f_007b4d18();
    /* 0077a061: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a064: je 0x77a058 */ if (fZ) goto L_0077a058;
L_0077a066:; BB(0x0077a066);
    /* 0077a066: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0077a06d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077a070: jne 0x77a078 */ if (!fZ) goto L_0077a078;
L_0077a072:; BB(0x0077a072);
    /* 0077a072: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a077: ret  */ FN_RET(0x0077a040); r_esp += 4; return;
L_0077a078:; BB(0x0077a078);
    /* 0077a078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a07a: ret  */ FN_RET(0x0077a040); r_esp += 4; return;
}

void f_0077a045(void)
{
    FN_ENTER(0x0077a045);
    /* 0077a045: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0077a048: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a04e: je 0x77a058 */ if (fZ) goto L_0077a058;
L_0077a050:; BB(0x0077a050);
    /* 0077a050: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077a056: jl 0x77a05b */ if ((fS!=fO)) goto L_0077a05b;
L_0077a058:; BB(0x0077a058);
    /* 0077a058: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a05a: ret  */ FN_RET(0x0077a045); r_esp += 4; return;
L_0077a05b:; BB(0x0077a05b);
    /* 0077a05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a05c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x77a061u); f_007b4d18();
    /* 0077a061: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a064: je 0x77a058 */ if (fZ) goto L_0077a058;
L_0077a066:; BB(0x0077a066);
    /* 0077a066: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0077a06d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077a070: jne 0x77a078 */ if (!fZ) goto L_0077a078;
L_0077a072:; BB(0x0077a072);
    /* 0077a072: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a077: ret  */ FN_RET(0x0077a045); r_esp += 4; return;
L_0077a078:; BB(0x0077a078);
    /* 0077a078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a07a: ret  */ FN_RET(0x0077a045); r_esp += 4; return;
}

void f_0077a07c(void) /* sub_77A07C */
{
    FN_ENTER(0x0077a07c);
    /* 0077a07c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a07d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077a07f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077a081: call 0x77a09c */ r_esp -= 4; W32(r_esp, 0x77a086u); f_0077a09c();
    /* 0077a086: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a08a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077a08c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a090: call 0x77a0d0 */ r_esp -= 4; W32(r_esp, 0x77a095u); f_0077a0d0();
    /* 0077a095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a096: ret 8 */ FN_RET(0x0077a07c); r_esp += 12; return;
}

void f_0077a09c(void) /* sub_77A09C */
{
    FN_ENTER(0x0077a09c);
    /* 0077a09c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a09d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077a09f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077a0a1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x77a0a6u); f_00770738();
    /* 0077a0a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a0a8: je 0x77a0ce */ if (fZ) goto L_0077a0ce;
L_0077a0aa:; BB(0x0077a0aa);
    /* 0077a0aa: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 0077a0b0: mov ecx, dword ptr [eax + 0x304] */ r_ecx = R32((u32)(r_eax+0x304u));
    /* 0077a0b6: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0077a0bc: mov dword ptr [ebx + 0x2a4], edx */ W32((u32)(r_ebx+0x2a4u), r_edx);
    /* 0077a0c2: mov dword ptr [ebx + 0x2a8], ecx */ W32((u32)(r_ebx+0x2a8u), r_ecx);
    /* 0077a0c8: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
L_0077a0ce:; BB(0x0077a0ce);
    /* 0077a0ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a0cf: ret  */ FN_RET(0x0077a09c); r_esp += 4; return;
}

void f_0077a0d0(void) /* sub_77A0D0 */
{
    FN_ENTER(0x0077a0d0);
    /* 0077a0d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a0d1: mov edi, ecx */ r_edi = r_ecx;
    /* 0077a0d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a0d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a0d9: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x77a0deu); f_00772358();
    /* 0077a0de: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a0e1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a0e5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0077a0e7: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a0e9: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x77a0ecu); call_ind(t); }
    /* 0077a0ec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0077a0ee: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a0f0: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x77a0f3u); call_ind(t); }
    /* 0077a0f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a0f4: ret 8 */ FN_RET(0x0077a0d0); r_esp += 12; return;
}

void f_0077a0f8(void) /* sub_77A0F8 */
{
    FN_ENTER(0x0077a0f8);
    /* 0077a0f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a0f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a0fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a0fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a0fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077a0ff: mov edi, ecx */ r_edi = r_ecx;
    /* 0077a101: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0077a107: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0077a10a: test edx, 0x300000 */ {  u32 a = r_edx; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a110: je 0x77a11c */ if (fZ) goto L_0077a11c;
L_0077a112:; BB(0x0077a112);
    /* 0077a112: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a115: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a117: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077a118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a119: ret 8 */ FN_RET(0x0077a0f8); r_esp += 12; return;
L_0077a11c:; BB(0x0077a11c);
    /* 0077a11c: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0077a120: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0077a124: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 0077a127: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 0077a12a: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0077a12d: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a12f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0077a133: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0077a139: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0077a13d: mov ebp, dword ptr [edi + 0x310] */ r_ebp = R32((u32)(r_edi+0x310u));
    /* 0077a143: mov dword ptr [edi + 0x314], edx */ W32((u32)(r_edi+0x314u), r_edx);
    /* 0077a149: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0077a14d: mov esi, dword ptr [edi + 0x30c] */ r_esi = R32((u32)(r_edi+0x30cu));
    /* 0077a153: mov dword ptr [edi + 0x30c], eax */ W32((u32)(r_edi+0x30cu), r_eax);
    /* 0077a159: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0077a15b: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x77a15eu); call_ind(t); }
    /* 0077a15e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0077a162: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0077a166: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0077a16c: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0077a172: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0077a178: mov ebx, dword ptr [edi + 0x60] */ r_ebx = R32((u32)(r_edi+0x60u));
    /* 0077a17b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0077a17d: fmul qword ptr [0x977f78] */ ST(0) = ST(0) * R_F64((u32)(0x977f78u));
    /* 0077a183: fdiv qword ptr [0x977f70] */ ST(0) = ST(0) / R_F64((u32)(0x977f70u));
    /* 0077a189: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0077a18c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0077a190: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077a195: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077a199: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077a19d: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077a1a0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0077a1a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a1a5: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x77a1aau); f_007b798c();
    /* 0077a1aa: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a1ac: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x77a1b1u); f_007b7e9c();
    /* 0077a1b1: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0077a1b7: mov dword ptr [edi + 0x60], ebx */ W32((u32)(r_edi+0x60u), r_ebx);
    /* 0077a1ba: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0077a1bd: test eax, 0x300000 */ {  u32 a = r_eax; u32 b = 0x300000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a1c2: je 0x77a1e1 */ if (fZ) goto L_0077a1e1;
L_0077a1c4:; BB(0x0077a1c4);
    /* 0077a1c4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0077a1c8: and eax, 0xffcfffff */ {  u32 a = r_eax; u32 b = 0xffcfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077a1cd: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0077a1d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0077a1d4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0077a1d8: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0077a1db: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0077a1de: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
L_0077a1e1:; BB(0x0077a1e1);
    /* 0077a1e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0077a1e3: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x77a1e8u); f_0077a1f4();
    /* 0077a1e8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a1eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a1ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a1ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077a1ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a1ef: ret 8 */ FN_RET(0x0077a0f8); r_esp += 12; return;
}

void f_0077a1f4(void) /* sub_77A1F4 */
{
    FN_ENTER(0x0077a1f4);
    /* 0077a1f4: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 0077a1fa: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0077a1fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a1ff: je 0x77a223 */ if (fZ) goto L_0077a223;
L_0077a201:; BB(0x0077a201);
    /* 0077a201: mov dword ptr [ecx + 0x300], edx */ W32((u32)(r_ecx+0x300u), r_edx);
    /* 0077a207: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0077a20a: fmul dword ptr [0x9780a8] */ ST(0) = ST(0) * R_F32((u32)(0x9780a8u));
    /* 0077a210: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0077a213: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0077a216: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 0077a21c: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 0077a222: ret  */ FN_RET(0x0077a1f4); r_esp += 4; return;
L_0077a223:; BB(0x0077a223);
    /* 0077a223: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0077a226: mov dword ptr [ecx + 0x300], edx */ W32((u32)(r_ecx+0x300u), r_edx);
    /* 0077a22c: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0077a22f: mov dword ptr [ecx + 0x304], eax */ W32((u32)(r_ecx+0x304u), r_eax);
    /* 0077a235: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0077a23b: ret  */ FN_RET(0x0077a1f4); r_esp += 4; return;
}

void f_0077a23c(void) /* sub_77A23C */
{
    FN_ENTER(0x0077a23c);
    /* 0077a23c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0077a23f: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a242: mov eax, 0 */ r_eax = 0x0u;
    /* 0077a247: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0077a24a: ret  */ FN_RET(0x0077a23c); r_esp += 4; return;
}

void f_0077a278(void) /* sub_77A278 */
{
    FN_ENTER(0x0077a278);
    /* 0077a278: mov dword ptr [0xa9b1b4], 0 */ W32((u32)(0xa9b1b4u), 0x0u);
    /* 0077a282: ret  */ FN_RET(0x0077a278); r_esp += 4; return;
}

void f_0077a284(void) /* sub_77A284 */
{
    FN_ENTER(0x0077a284);
    /* 0077a284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a285: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077a287: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0077a28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a28c: je 0x77a29c */ if (fZ) goto L_0077a29c;
L_0077a28e:; BB(0x0077a28e);
    /* 0077a28e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a28f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x77a294u); f_0082e960();
    /* 0077a294: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a295: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_0077a29c:; BB(0x0077a29c);
    /* 0077a29c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a29d: ret  */ FN_RET(0x0077a284); r_esp += 4; return;
}

void f_0077a2a0(void) /* sub_77A2A0 */
{
    FN_ENTER(0x0077a2a0);
    /* 0077a2a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a2a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a2a2: mov edi, ecx */ r_edi = r_ecx;
    /* 0077a2a4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0077a2a8: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0077a2ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0077a2ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a2af: je 0x77a2c1 */ if (fZ) goto L_0077a2c1;
L_0077a2b1:; BB(0x0077a2b1);
    /* 0077a2b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0077a2b4:; BB(0x0077a2b4);
    /* 0077a2b4: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0077a2b7: jb 0x77a2c6 */ if (fC) goto L_0077a2c6;
L_0077a2b9:; BB(0x0077a2b9);
    /* 0077a2b9: mov ecx, edx */ r_ecx = r_edx;
    /* 0077a2bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0077a2bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a2bf: jne 0x77a2b4 */ if (!fZ) goto L_0077a2b4;
L_0077a2c1:; BB(0x0077a2c1);
    /* 0077a2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a2c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a2c3: ret 4 */ FN_RET(0x0077a2a0); r_esp += 8; return;
L_0077a2c6:; BB(0x0077a2c6);
    /* 0077a2c6: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 0077a2c8: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0077a2cb: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 0077a2ce: mov dword ptr [edx + 4], ebp */ W32((u32)(r_edx+0x4u), r_ebp);
    /* 0077a2d1: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0077a2d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0077a2d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0077a2d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a2da: je 0x77a315 */ if (fZ) goto L_0077a315;
L_0077a2dc:; BB(0x0077a2dc);
    /* 0077a2dc: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0077a2df: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0077a2e2: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077a2e4: cmp ebp, dword ptr [eax + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a2e7: jne 0x77a30d */ if (!fZ) goto L_0077a30d;
L_0077a2e9:; BB(0x0077a2e9);
    /* 0077a2e9: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0077a2eb: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 0077a2ed: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0077a2f0: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077a2f2: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 0077a2f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0077a2f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a2f9: je 0x77a2fe */ if (fZ) goto L_0077a2fe;
L_0077a2fb:; BB(0x0077a2fb);
    /* 0077a2fb: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0077a2fe:; BB(0x0077a2fe);
    /* 0077a2fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077a300: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0077a303: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0077a305: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0077a308: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0077a30b: jmp 0x77a30f */ goto L_0077a30f;
L_0077a30d:; BB(0x0077a30d);
    /* 0077a30d: mov edx, eax */ r_edx = r_eax;
L_0077a30f:; BB(0x0077a30f);
    /* 0077a30f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0077a311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a313: jne 0x77a2dc */ if (!fZ) goto L_0077a2dc;
L_0077a315:; BB(0x0077a315);
    /* 0077a315: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a316: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a317: ret 4 */ FN_RET(0x0077a2a0); r_esp += 8; return;
}

void f_0077a31c(void) /* sub_77A31C */
{
    FN_ENTER(0x0077a31c);
    /* 0077a31c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a31d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a31e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a31f: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077a322: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0077a326: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0077a32a: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0077a32e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a330: jne 0x77a389 */ if (!fZ) goto L_0077a389;
L_0077a332:; BB(0x0077a332);
    /* 0077a332: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0077a335: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a337: jne 0x77a341 */ if (!fZ) goto L_0077a341;
L_0077a339:; BB(0x0077a339);
    /* 0077a339: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a33b: je 0x77a3df */ if (fZ) goto L_0077a3df;
L_0077a341:; BB(0x0077a341);
    /* 0077a341: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0077a345: mov dword ptr [0xa9b1b4], 1 */ W32((u32)(0xa9b1b4u), 0x1u);
    /* 0077a34f: lea ebp, [eax + 0x1f] */ r_ebp = (u32)(r_eax+0x1fu);
    /* 0077a352: and ebp, 0xffffffe0 */ {  u32 a = r_ebp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0077a355: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a356: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a357: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a35cu); f_0061cdb0();
    /* 0077a35c: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0077a360: push 0x77a278 */ { u32 v = 0x77a278u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077a368: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a369: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a36a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a36c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a36d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a36e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a36f: call 0x8432a8 */ r_esp -= 4; W32(r_esp, 0x77a374u); f_008432a8();
    /* 0077a374: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077a377: jmp 0x77a37e */ goto L_0077a37e;
L_0077a379:; BB(0x0077a379);
    /* 0077a379: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x77a37eu); f_005b9204();
L_0077a37e:; BB(0x0077a37e);
    /* 0077a37e: mov eax, dword ptr [0xa9b1b4] */ r_eax = R32((u32)(0xa9b1b4u));
    /* 0077a383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a385: je 0x77a3df */ if (fZ) goto L_0077a3df;
L_0077a387:; BB(0x0077a387);
    /* 0077a387: jmp 0x77a379 */ goto L_0077a379;
L_0077a389:; BB(0x0077a389);
    /* 0077a389: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0077a38d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0077a390: mov dword ptr [0xa9b1b4], 1 */ W32((u32)(0xa9b1b4u), 0x1u);
    /* 0077a39a: lea edi, [eax + 0x1f] */ r_edi = (u32)(r_eax+0x1fu);
    /* 0077a39d: and edi, 0xffffffe0 */ {  u32 a = r_edi; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0077a3a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3a2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a3a7u); f_0061cdb0();
    /* 0077a3a7: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077a3ab: push 0x77a278 */ { u32 v = 0x77a278u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3b1: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a3b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3bd: call 0x8432a8 */ r_esp -= 4; W32(r_esp, 0x77a3c2u); f_008432a8();
    /* 0077a3c2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077a3c5: jmp 0x77a3cc */ goto L_0077a3cc;
L_0077a3c7:; BB(0x0077a3c7);
    /* 0077a3c7: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x77a3ccu); f_005b9204();
L_0077a3cc:; BB(0x0077a3cc);
    /* 0077a3cc: mov eax, dword ptr [0xa9b1b4] */ r_eax = R32((u32)(0xa9b1b4u));
    /* 0077a3d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a3d3: jne 0x77a3c7 */ if (!fZ) goto L_0077a3c7;
L_0077a3d5:; BB(0x0077a3d5);
    /* 0077a3d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3d7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a3dcu); f_0061cdb0();
    /* 0077a3dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077a3df:; BB(0x0077a3df);
    /* 0077a3df: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a3e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a3e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077a3e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a3e5: ret 0x10 */ FN_RET(0x0077a31c); r_esp += 20; return;
}

void f_0077a3e8(void) /* sub_77A3E8 */
{
    FN_ENTER(0x0077a3e8);
    /* 0077a3e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a3eb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077a3ee: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0077a3f2: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0077a3f6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a3f8: jne 0x77a407 */ if (!fZ) goto L_0077a407;
L_0077a3fa:; BB(0x0077a3fa);
    /* 0077a3fa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a3fc: jne 0x77a407 */ if (!fZ) goto L_0077a407;
L_0077a3fe:; BB(0x0077a3fe);
    /* 0077a3fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077a400: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a403: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a405: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a406: ret  */ FN_RET(0x0077a3e8); r_esp += 4; return;
L_0077a407:; BB(0x0077a407);
    /* 0077a407: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0077a40b: mov dword ptr [0xa9b1b4], 1 */ W32((u32)(0xa9b1b4u), 0x1u);
    /* 0077a415: lea ebx, [eax + 0x1f] */ r_ebx = (u32)(r_eax+0x1fu);
    /* 0077a418: and ebx, 0xffffffe0 */ {  u32 a = r_ebx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0077a41b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a41c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a41d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a422u); f_0061cdb0();
    /* 0077a422: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0077a426: push 0x77a278 */ { u32 v = 0x77a278u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a42b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a42c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a42d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a42e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a430: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a432: push dword ptr [esp + 0x50] */ { u32 v = R32((u32)(r_esp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a437: call 0x8432a8 */ r_esp -= 4; W32(r_esp, 0x77a43cu); f_008432a8();
    /* 0077a43c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077a43f: jmp 0x77a446 */ goto L_0077a446;
L_0077a441:; BB(0x0077a441);
    /* 0077a441: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x77a446u); f_005b9204();
L_0077a446:; BB(0x0077a446);
    /* 0077a446: mov eax, dword ptr [0xa9b1b4] */ r_eax = R32((u32)(0xa9b1b4u));
    /* 0077a44b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a44d: jne 0x77a441 */ if (!fZ) goto L_0077a441;
L_0077a44f:; BB(0x0077a44f);
    /* 0077a44f: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a454: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a457: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077a459: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a45a: ret  */ FN_RET(0x0077a3e8); r_esp += 4; return;
}

void f_0077a45c(void) /* sub_77A45C */
{
    FN_ENTER(0x0077a45c);
    /* 0077a45c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a45d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a45e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077a461: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0077a465: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0077a469: mov dword ptr [0xa9b1b4], 1 */ W32((u32)(0xa9b1b4u), 0x1u);
    /* 0077a473: lea ebx, [eax + 0x1f] */ r_ebx = (u32)(r_eax+0x1fu);
    /* 0077a476: and ebx, 0xffffffe0 */ {  u32 a = r_ebx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0077a479: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a47a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a47b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a480u); f_0061cdb0();
    /* 0077a480: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0077a484: push 0x77a278 */ { u32 v = 0x77a278u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a489: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a48a: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a48f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a490: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a496: push dword ptr [esp + 0x4c] */ { u32 v = R32((u32)(r_esp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a49a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a49b: call 0x8432a8 */ r_esp -= 4; W32(r_esp, 0x77a4a0u); f_008432a8();
    /* 0077a4a0: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077a4a3:; BB(0x0077a4a3);
    /* 0077a4a3: mov eax, dword ptr [0xa9b1b4] */ r_eax = R32((u32)(0xa9b1b4u));
    /* 0077a4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a4aa: jne 0x77a4a3 */ if (!fZ) goto L_0077a4a3;
L_0077a4ac:; BB(0x0077a4ac);
    /* 0077a4ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a4ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a4ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77a4b3u); f_0061cdb0();
    /* 0077a4b3: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a4b8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a4bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a4bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077a4bd: ret  */ FN_RET(0x0077a45c); r_esp += 4; return;
}

void f_0077a4c0(void) /* sub_77A4C0 */
{
    FN_ENTER(0x0077a4c0);
    /* 0077a4c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a4c1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0077a4c5: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x77a4cau); f_0077a584();
    /* 0077a4ca: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a4cc: je 0x77a4f5 */ if (fZ) goto L_0077a4f5;
L_0077a4ce:; BB(0x0077a4ce);
    /* 0077a4ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a4d0: je 0x77a4e1 */ if (fZ) goto L_0077a4e1;
L_0077a4d2:; BB(0x0077a4d2);
    /* 0077a4d2: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a4d7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a4da: mov dword ptr [0xa9b1b8], eax */ W32((u32)(0xa9b1b8u), r_eax);
    /* 0077a4df: jmp 0x77a4ee */ goto L_0077a4ee;
L_0077a4e1:; BB(0x0077a4e1);
    /* 0077a4e1: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a4e6: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a4e9: mov dword ptr [0xa9b1b8], eax */ W32((u32)(0xa9b1b8u), r_eax);
L_0077a4ee:; BB(0x0077a4ee);
    /* 0077a4ee: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a4f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a4f4: ret  */ FN_RET(0x0077a4c0); r_esp += 4; return;
L_0077a4f5:; BB(0x0077a4f5);
    /* 0077a4f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a4f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a4f8: ret  */ FN_RET(0x0077a4c0); r_esp += 4; return;
}

void f_0077a4fc(void) /* sub_77A4FC */
{
    FN_ENTER(0x0077a4fc);
    /* 0077a4fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a4fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a4fe: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077a503: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77a508u); f_006c1bd4();
    /* 0077a508: mov ebx, eax */ r_ebx = r_eax;
    /* 0077a50a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a50f: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a513: lea edi, [ebx + 0x2510] */ r_edi = (u32)(r_ebx+0x2510u);
    /* 0077a519: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x77a51eu); f_00813a78();
    /* 0077a51e: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0077a523: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a528: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a529: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x77a52eu); f_00857dec();
    /* 0077a52e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077a531: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077a533: mov word ptr [ebx + 0x2666], dx */ W16((u32)(r_ebx+0x2666u), (u16)r_edx);
    /* 0077a53a: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a53f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077a542: mov dword ptr [0xa9b1b8], eax */ W32((u32)(0xa9b1b8u), r_eax);
    /* 0077a547: call 0x77a598 */ r_esp -= 4; W32(r_esp, 0x77a54cu); f_0077a598();
    /* 0077a54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a54e: je 0x77a56a */ if (fZ) goto L_0077a56a;
L_0077a550:; BB(0x0077a550);
    /* 0077a550: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x77a555u); f_0077a584();
    /* 0077a555: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077a558: je 0x77a580 */ if (fZ) goto L_0077a580;
L_0077a55a:; BB(0x0077a55a);
    /* 0077a55a: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a55f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a562: mov dword ptr [0xa9b1b8], eax */ W32((u32)(0xa9b1b8u), r_eax);
    /* 0077a567: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a568: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a569: ret  */ FN_RET(0x0077a4fc); r_esp += 4; return;
L_0077a56a:; BB(0x0077a56a);
    /* 0077a56a: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x77a56fu); f_0077a584();
    /* 0077a56f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a571: je 0x77a580 */ if (fZ) goto L_0077a580;
L_0077a573:; BB(0x0077a573);
    /* 0077a573: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a578: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a57b: mov dword ptr [0xa9b1b8], eax */ W32((u32)(0xa9b1b8u), r_eax);
L_0077a580:; BB(0x0077a580);
    /* 0077a580: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077a581: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a582: ret  */ FN_RET(0x0077a4fc); r_esp += 4; return;
}

void f_0077a584(void) /* sub_77A584 */
{
    FN_ENTER(0x0077a584);
    /* 0077a584: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a589: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a58b: je 0x77a593 */ if (fZ) goto L_0077a593;
L_0077a58d:; BB(0x0077a58d);
    /* 0077a58d: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a592: ret  */ FN_RET(0x0077a584); r_esp += 4; return;
L_0077a593:; BB(0x0077a593);
    /* 0077a593: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a595: ret  */ FN_RET(0x0077a584); r_esp += 4; return;
}

void f_0077a598(void) /* sub_77A598 */
{
    FN_ENTER(0x0077a598);
    /* 0077a598: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x77a59du); f_0077a5b0();
    /* 0077a59d: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0077a5a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a5a2: jne 0x77a5a7 */ if (!fZ) goto L_0077a5a7;
L_0077a5a4:; BB(0x0077a5a4);
    /* 0077a5a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a5a6: ret  */ FN_RET(0x0077a598); r_esp += 4; return;
L_0077a5a7:; BB(0x0077a5a7);
    /* 0077a5a7: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a5ac: ret  */ FN_RET(0x0077a598); r_esp += 4; return;
}

void f_0077a5b0(void) /* sub_77A5B0 */
{
    FN_ENTER(0x0077a5b0);
    /* 0077a5b0: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077a5b5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x77a5bau); f_006c1bd4();
    /* 0077a5ba: add eax, 0x2510 */ {  u32 a = r_eax; u32 b = 0x2510u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a5bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a5c0: ret  */ FN_RET(0x0077a5b0); r_esp += 4; return;
}

void f_0077a5c4(void) /* sub_77A5C4 */
{
    FN_ENTER(0x0077a5c4);
    /* 0077a5c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a5c5: mov eax, dword ptr [0xa9b1b8] */ r_eax = R32((u32)(0xa9b1b8u));
    /* 0077a5ca: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077a5cc: jne 0x77a5ee */ if (!fZ) goto L_0077a5ee;
L_0077a5ce:; BB(0x0077a5ce);
    /* 0077a5ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077a5d0: je 0x77a5d9 */ if (fZ) goto L_0077a5d9;
L_0077a5d2:; BB(0x0077a5d2);
    /* 0077a5d2: mov edx, 1 */ r_edx = 0x1u;
    /* 0077a5d7: jmp 0x77a5db */ goto L_0077a5db;
L_0077a5d9:; BB(0x0077a5d9);
    /* 0077a5d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0077a5db:; BB(0x0077a5db);
    /* 0077a5db: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077a5dd: je 0x77a5e6 */ if (fZ) goto L_0077a5e6;
L_0077a5df:; BB(0x0077a5df);
    /* 0077a5df: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a5e4: jmp 0x77a5e8 */ goto L_0077a5e8;
L_0077a5e6:; BB(0x0077a5e6);
    /* 0077a5e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077a5e8:; BB(0x0077a5e8);
    /* 0077a5e8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077a5ea: jne 0x77a5ee */ if (!fZ) goto L_0077a5ee;
L_0077a5ec:; BB(0x0077a5ec);
    /* 0077a5ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a5ed: ret  */ FN_RET(0x0077a5c4); r_esp += 4; return;
L_0077a5ee:; BB(0x0077a5ee);
    /* 0077a5ee: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x77a5f3u); f_0077a584();
    /* 0077a5f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a5f5: je 0x77a60a */ if (fZ) goto L_0077a60a;
L_0077a5f7:; BB(0x0077a5f7);
    /* 0077a5f7: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x77a5fcu); f_0077a5b0();
    /* 0077a5fc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0077a602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a603: call 0x7d7940 */ r_esp -= 4; W32(r_esp, 0x77a608u); f_007d7940();
    /* 0077a608: jmp 0x77a615 */ goto L_0077a615;
L_0077a60a:; BB(0x0077a60a);
    /* 0077a60a: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0077a610: call 0x7d79c8 */ r_esp -= 4; W32(r_esp, 0x77a615u); f_007d79c8();
L_0077a615:; BB(0x0077a615);
    /* 0077a615: mov edi, dword ptr [0xa9b1b8] */ r_edi = R32((u32)(0xa9b1b8u));
    /* 0077a61b: and edi, 0xfffffffb */ {  u32 a = r_edi; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0077a61e: mov dword ptr [0xa9b1b8], edi */ W32((u32)(0xa9b1b8u), r_edi);
    /* 0077a624: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x77a629u); f_0077a584();
    /* 0077a629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a62b: je 0x77a638 */ if (fZ) goto L_0077a638;
L_0077a62d:; BB(0x0077a62d);
    /* 0077a62d: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a630: mov dword ptr [0xa9b1b8], edi */ W32((u32)(0xa9b1b8u), r_edi);
    /* 0077a636: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a637: ret  */ FN_RET(0x0077a5c4); r_esp += 4; return;
L_0077a638:; BB(0x0077a638);
    /* 0077a638: and edi, 0xfffffffd */ {  u32 a = r_edi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a63b: mov dword ptr [0xa9b1b8], edi */ W32((u32)(0xa9b1b8u), r_edi);
    /* 0077a641: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077a642: ret  */ FN_RET(0x0077a5c4); r_esp += 4; return;
}

void f_0077a644(void) /* sub_77A644 */
{
    FN_ENTER(0x0077a644);
    /* 0077a644: mov dword ptr [0xa9b1b8], 0 */ W32((u32)(0xa9b1b8u), 0x0u);
    /* 0077a64e: ret  */ FN_RET(0x0077a644); r_esp += 4; return;
}

void f_0077a650(void) /* sub_77A650 */
{
    FN_ENTER(0x0077a650);
    /* 0077a650: mov eax, dword ptr [0xa9b1e0] */ r_eax = R32((u32)(0xa9b1e0u));
    /* 0077a655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a657: je 0x77a66a */ if (fZ) goto L_0077a66a;
L_0077a659:; BB(0x0077a659);
    /* 0077a659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a65a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x77a65fu); f_00857e98();
    /* 0077a65f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a660: mov dword ptr [0xa9b1e0], 0 */ W32((u32)(0xa9b1e0u), 0x0u);
L_0077a66a:; BB(0x0077a66a);
    /* 0077a66a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a66c: mov dword ptr [0xa9b1dc], eax */ W32((u32)(0xa9b1dcu), r_eax);
    /* 0077a671: mov dword ptr [0xa9b1d8], eax */ W32((u32)(0xa9b1d8u), r_eax);
    /* 0077a676: mov dword ptr [0xa9b1d4], eax */ W32((u32)(0xa9b1d4u), r_eax);
    /* 0077a67b: mov dword ptr [0xa9b1d0], eax */ W32((u32)(0xa9b1d0u), r_eax);
    /* 0077a680: ret  */ FN_RET(0x0077a650); r_esp += 4; return;
}

void f_0077a684(void) /* sub_77A684 */
{
    FN_ENTER(0x0077a684);
    /* 0077a684: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077a688: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0077a68b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077a68d: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0077a690: add eax, dword ptr [0xa9b1dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9b1dcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a696: ret  */ FN_RET(0x0077a684); r_esp += 4; return;
}

void f_0077a698(void) /* sub_77A698 */
{
    FN_ENTER(0x0077a698);
    /* 0077a698: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077a69c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077a69f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6a1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6ab: add eax, dword ptr [0xa9b1d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9b1d8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a6b1: ret  */ FN_RET(0x0077a698); r_esp += 4; return;
}

void f_0077a6b4(void) /* sub_77A6B4 */
{
    FN_ENTER(0x0077a6b4);
    /* 0077a6b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077a6b8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077a6bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6c1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6c3: add eax, dword ptr [0xa9b1d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9b1d4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a6c9: ret  */ FN_RET(0x0077a6b4); r_esp += 4; return;
}

void f_0077a6cc(void) /* sub_77A6CC */
{
    FN_ENTER(0x0077a6cc);
    /* 0077a6cc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0077a6d0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077a6d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6d5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6db: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6dd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a6df: add eax, dword ptr [0xa9b1d0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9b1d0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a6e5: ret  */ FN_RET(0x0077a6cc); r_esp += 4; return;
}

void f_0077a6ec(void) /* sub_77A6EC */
{
    FN_ENTER(0x0077a6ec);
    /* 0077a6ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077a6ee: jl 0x77a6fb */ if ((fS!=fO)) goto L_0077a6fb;
L_0077a6f0:; BB(0x0077a6f0);
    /* 0077a6f0: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077a6f3: jge 0x77a6fb */ if ((fS==fO)) goto L_0077a6fb;
L_0077a6f5:; BB(0x0077a6f5);
    /* 0077a6f5: mov eax, 1 */ r_eax = 0x1u;
    /* 0077a6fa: ret  */ FN_RET(0x0077a6ec); r_esp += 4; return;
L_0077a6fb:; BB(0x0077a6fb);
    /* 0077a6fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a6fd: ret  */ FN_RET(0x0077a6ec); r_esp += 4; return;
}

void f_0077a700(void) /* sub_77A700 */
{
    FN_ENTER(0x0077a700);
    /* 0077a700: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077a704: mov dword ptr [0xa9b1bc], eax */ W32((u32)(0xa9b1bcu), r_eax);
    /* 0077a709: ret  */ FN_RET(0x0077a700); r_esp += 4; return;
}

void f_0077a70c(void) /* sub_77A70C */
{
    FN_ENTER(0x0077a70c);
    /* 0077a70c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a70d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a70e: mov esi, dword ptr [0xa9b1bc] */ r_esi = R32((u32)(0xa9b1bcu));
    /* 0077a714: mov eax, esi */ r_eax = r_esi;
    /* 0077a716: call 0x77a6ec */ r_esp -= 4; W32(r_esp, 0x77a71bu); f_0077a6ec();
    /* 0077a71b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a71d: je 0x77a9c0 */ if (fZ) goto L_0077a9c0;
L_0077a723:; BB(0x0077a723);
    /* 0077a723: mov edx, dword ptr [0xa9b1dc] */ r_edx = R32((u32)(0xa9b1dcu));
    /* 0077a729: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a72d: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0077a730: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077a732: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a734: lea eax, [esi + esi*8] */ r_eax = (u32)(r_esi+r_esi*8);
    /* 0077a737: mov word ptr [eax + edx], cx */ W16((u32)(r_eax+r_edx), (u16)r_ecx);
    /* 0077a73b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a73f: movzx ecx, word ptr [ecx + 2] */ r_ecx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077a743: mov word ptr [eax + edx + 2], cx */ W16((u32)(r_eax+r_edx+0x2u), (u16)r_ecx);
    /* 0077a748: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a74c: mov esi, dword ptr [0xa9b1dc] */ r_esi = R32((u32)(0xa9b1dcu));
    /* 0077a752: movzx ecx, word ptr [ecx + 4] */ r_ecx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077a756: mov word ptr [eax + edx + 4], cx */ W16((u32)(r_eax+r_edx+0x4u), (u16)r_ecx);
    /* 0077a75b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a75f: movzx ecx, word ptr [ecx + 6] */ r_ecx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0077a763: mov word ptr [eax + edx + 6], cx */ W16((u32)(r_eax+r_edx+0x6u), (u16)r_ecx);
    /* 0077a768: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a76c: movzx ecx, word ptr [ecx + 8] */ r_ecx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0077a770: mov word ptr [eax + edx + 8], cx */ W16((u32)(r_eax+r_edx+0x8u), (u16)r_ecx);
    /* 0077a775: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a779: movzx ecx, word ptr [ecx + 0xa] */ r_ecx = (u32)R16((u32)(r_ecx+0xau));
    /* 0077a77d: mov word ptr [eax + edx + 0xa], cx */ W16((u32)(r_eax+r_edx+0xau), (u16)r_ecx);
    /* 0077a782: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a786: movzx ecx, word ptr [ecx + 0xc] */ r_ecx = (u32)R16((u32)(r_ecx+0xcu));
    /* 0077a78a: mov word ptr [eax + edx + 0xc], cx */ W16((u32)(r_eax+r_edx+0xcu), (u16)r_ecx);
    /* 0077a78f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a793: movzx ecx, word ptr [ecx + 0xe] */ r_ecx = (u32)R16((u32)(r_ecx+0xeu));
    /* 0077a797: mov word ptr [eax + edx + 0xe], cx */ W16((u32)(r_eax+r_edx+0xeu), (u16)r_ecx);
    /* 0077a79c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a7a0: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077a7a3: mov dword ptr [eax + edx + 0x10], ecx */ W32((u32)(r_eax+r_edx+0x10u), r_ecx);
    /* 0077a7a7: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a7ab: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0077a7ae: mov dword ptr [eax + edx + 0x14], ecx */ W32((u32)(r_eax+r_edx+0x14u), r_ecx);
    /* 0077a7b2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a7b6: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0077a7b9: mov dword ptr [eax + edx + 0x18], ecx */ W32((u32)(r_eax+r_edx+0x18u), r_ecx);
    /* 0077a7bd: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a7c1: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077a7c4: mov dword ptr [eax + edx + 0x1c], ecx */ W32((u32)(r_eax+r_edx+0x1cu), r_ecx);
    /* 0077a7c8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a7cc: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077a7cf: mov dword ptr [eax + edx + 0x20], ecx */ W32((u32)(r_eax+r_edx+0x20u), r_ecx);
    /* 0077a7d3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a7d7: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077a7da: mov word ptr [eax + esi], dx */ W16((u32)(r_eax+r_esi), (u16)r_edx);
    /* 0077a7de: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a7e2: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077a7e6: mov word ptr [eax + esi + 2], dx */ W16((u32)(r_eax+r_esi+0x2u), (u16)r_edx);
    /* 0077a7eb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a7ef: mov ecx, dword ptr [0xa9b1dc] */ r_ecx = R32((u32)(0xa9b1dcu));
    /* 0077a7f5: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077a7f9: mov word ptr [eax + esi + 4], dx */ W16((u32)(r_eax+r_esi+0x4u), (u16)r_edx);
    /* 0077a7fe: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a802: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077a806: mov word ptr [eax + esi + 6], dx */ W16((u32)(r_eax+r_esi+0x6u), (u16)r_edx);
    /* 0077a80b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a80f: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 0077a813: mov word ptr [eax + esi + 8], dx */ W16((u32)(r_eax+r_esi+0x8u), (u16)r_edx);
    /* 0077a818: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a81c: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 0077a820: mov word ptr [eax + esi + 0xa], dx */ W16((u32)(r_eax+r_esi+0xau), (u16)r_edx);
    /* 0077a825: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a829: movzx edx, word ptr [edx + 0xc] */ r_edx = (u32)R16((u32)(r_edx+0xcu));
    /* 0077a82d: mov word ptr [eax + esi + 0xc], dx */ W16((u32)(r_eax+r_esi+0xcu), (u16)r_edx);
    /* 0077a832: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a836: movzx edx, word ptr [edx + 0xe] */ r_edx = (u32)R16((u32)(r_edx+0xeu));
    /* 0077a83a: mov word ptr [eax + esi + 0xe], dx */ W16((u32)(r_eax+r_esi+0xeu), (u16)r_edx);
    /* 0077a83f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a843: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077a846: mov dword ptr [eax + esi + 0x10], edx */ W32((u32)(r_eax+r_esi+0x10u), r_edx);
    /* 0077a84a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a84e: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077a851: mov dword ptr [eax + esi + 0x14], edx */ W32((u32)(r_eax+r_esi+0x14u), r_edx);
    /* 0077a855: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a859: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077a85c: mov dword ptr [eax + esi + 0x18], edx */ W32((u32)(r_eax+r_esi+0x18u), r_edx);
    /* 0077a860: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a864: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077a867: mov dword ptr [eax + esi + 0x1c], edx */ W32((u32)(r_eax+r_esi+0x1cu), r_edx);
    /* 0077a86b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a86f: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077a872: mov dword ptr [eax + esi + 0x20], edx */ W32((u32)(r_eax+r_esi+0x20u), r_edx);
    /* 0077a876: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a87a: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077a87d: mov word ptr [eax + ecx], dx */ W16((u32)(r_eax+r_ecx), (u16)r_edx);
    /* 0077a881: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a885: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077a889: mov word ptr [eax + ecx + 2], dx */ W16((u32)(r_eax+r_ecx+0x2u), (u16)r_edx);
    /* 0077a88e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a892: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077a896: mov word ptr [eax + ecx + 4], dx */ W16((u32)(r_eax+r_ecx+0x4u), (u16)r_edx);
    /* 0077a89b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a89f: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077a8a3: mov word ptr [eax + ecx + 6], dx */ W16((u32)(r_eax+r_ecx+0x6u), (u16)r_edx);
    /* 0077a8a8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8ac: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 0077a8b0: mov word ptr [eax + ecx + 8], dx */ W16((u32)(r_eax+r_ecx+0x8u), (u16)r_edx);
    /* 0077a8b5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8b9: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 0077a8bd: mov word ptr [eax + ecx + 0xa], dx */ W16((u32)(r_eax+r_ecx+0xau), (u16)r_edx);
    /* 0077a8c2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8c6: movzx edx, word ptr [edx + 0xc] */ r_edx = (u32)R16((u32)(r_edx+0xcu));
    /* 0077a8ca: mov word ptr [eax + ecx + 0xc], dx */ W16((u32)(r_eax+r_ecx+0xcu), (u16)r_edx);
    /* 0077a8cf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8d3: movzx edx, word ptr [edx + 0xe] */ r_edx = (u32)R16((u32)(r_edx+0xeu));
    /* 0077a8d7: mov word ptr [eax + ecx + 0xe], dx */ W16((u32)(r_eax+r_ecx+0xeu), (u16)r_edx);
    /* 0077a8dc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8e0: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077a8e3: mov dword ptr [eax + ecx + 0x10], edx */ W32((u32)(r_eax+r_ecx+0x10u), r_edx);
    /* 0077a8e7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8eb: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077a8ee: mov dword ptr [eax + ecx + 0x14], edx */ W32((u32)(r_eax+r_ecx+0x14u), r_edx);
    /* 0077a8f2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a8f6: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077a8f9: mov dword ptr [eax + ecx + 0x18], edx */ W32((u32)(r_eax+r_ecx+0x18u), r_edx);
    /* 0077a8fd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a901: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077a904: mov dword ptr [eax + ecx + 0x1c], edx */ W32((u32)(r_eax+r_ecx+0x1cu), r_edx);
    /* 0077a908: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077a90c: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077a90f: mov dword ptr [eax + ecx + 0x20], edx */ W32((u32)(r_eax+r_ecx+0x20u), r_edx);
    /* 0077a913: mov edx, dword ptr [0xa9b1dc] */ r_edx = R32((u32)(0xa9b1dcu));
    /* 0077a919: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a91d: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0077a920: mov word ptr [eax + edx], cx */ W16((u32)(r_eax+r_edx), (u16)r_ecx);
    /* 0077a924: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a928: movzx ecx, word ptr [ecx + 2] */ r_ecx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077a92c: mov word ptr [eax + edx + 2], cx */ W16((u32)(r_eax+r_edx+0x2u), (u16)r_ecx);
    /* 0077a931: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a935: movzx ecx, word ptr [ecx + 4] */ r_ecx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077a939: mov dword ptr [0xa9b1c0], 1 */ W32((u32)(0xa9b1c0u), 0x1u);
    /* 0077a943: mov word ptr [eax + edx + 4], cx */ W16((u32)(r_eax+r_edx+0x4u), (u16)r_ecx);
    /* 0077a948: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a94c: movzx ecx, word ptr [ecx + 6] */ r_ecx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0077a950: mov word ptr [eax + edx + 6], cx */ W16((u32)(r_eax+r_edx+0x6u), (u16)r_ecx);
    /* 0077a955: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a959: movzx ecx, word ptr [ecx + 8] */ r_ecx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0077a95d: mov word ptr [eax + edx + 8], cx */ W16((u32)(r_eax+r_edx+0x8u), (u16)r_ecx);
    /* 0077a962: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a966: movzx ecx, word ptr [ecx + 0xa] */ r_ecx = (u32)R16((u32)(r_ecx+0xau));
    /* 0077a96a: mov word ptr [eax + edx + 0xa], cx */ W16((u32)(r_eax+r_edx+0xau), (u16)r_ecx);
    /* 0077a96f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a973: movzx ecx, word ptr [ecx + 0xc] */ r_ecx = (u32)R16((u32)(r_ecx+0xcu));
    /* 0077a977: mov word ptr [eax + edx + 0xc], cx */ W16((u32)(r_eax+r_edx+0xcu), (u16)r_ecx);
    /* 0077a97c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a980: movzx ecx, word ptr [ecx + 0xe] */ r_ecx = (u32)R16((u32)(r_ecx+0xeu));
    /* 0077a984: mov word ptr [eax + edx + 0xe], cx */ W16((u32)(r_eax+r_edx+0xeu), (u16)r_ecx);
    /* 0077a989: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a98d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077a990: mov dword ptr [eax + edx + 0x10], ecx */ W32((u32)(r_eax+r_edx+0x10u), r_ecx);
    /* 0077a994: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a998: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0077a99b: mov dword ptr [eax + edx + 0x14], ecx */ W32((u32)(r_eax+r_edx+0x14u), r_ecx);
    /* 0077a99f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a9a3: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0077a9a6: mov dword ptr [eax + edx + 0x18], ecx */ W32((u32)(r_eax+r_edx+0x18u), r_ecx);
    /* 0077a9aa: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a9ae: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077a9b1: mov dword ptr [eax + edx + 0x1c], ecx */ W32((u32)(r_eax+r_edx+0x1cu), r_ecx);
    /* 0077a9b5: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a9b9: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077a9bc: mov dword ptr [eax + edx + 0x20], ecx */ W32((u32)(r_eax+r_edx+0x20u), r_ecx);
L_0077a9c0:; BB(0x0077a9c0);
    /* 0077a9c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077a9c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077a9c2: ret  */ FN_RET(0x0077a70c); r_esp += 4; return;
}

void f_0077a9c4(void) /* sub_77A9C4 */
{
    FN_ENTER(0x0077a9c4);
    /* 0077a9c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077a9c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077a9c6: mov ebp, dword ptr [0xa9b1bc] */ r_ebp = R32((u32)(0xa9b1bcu));
    /* 0077a9cc: mov eax, ebp */ r_eax = r_ebp;
    /* 0077a9ce: call 0x77a6ec */ r_esp -= 4; W32(r_esp, 0x77a9d3u); f_0077a6ec();
    /* 0077a9d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077a9d5: je 0x77ad00 */ if (fZ) goto L_0077ad00;
L_0077a9db:; BB(0x0077a9db);
    /* 0077a9db: mov edx, dword ptr [0xa9b1d8] */ r_edx = R32((u32)(0xa9b1d8u));
    /* 0077a9e1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a9e5: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0077a9e8: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0077a9ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077a9ee: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077a9f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077a9f2: mov word ptr [edx + eax*8], cx */ W16((u32)(r_edx+r_eax*8), (u16)r_ecx);
    /* 0077a9f6: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077a9fa: movzx ecx, word ptr [ecx + 2] */ r_ecx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077a9fe: mov word ptr [edx + eax*8 + 2], cx */ W16((u32)(r_edx+r_eax*8+0x2u), (u16)r_ecx);
    /* 0077aa03: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa07: mov ebp, dword ptr [0xa9b1d8] */ r_ebp = R32((u32)(0xa9b1d8u));
    /* 0077aa0d: movzx ecx, word ptr [ecx + 4] */ r_ecx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077aa11: mov word ptr [edx + eax*8 + 4], cx */ W16((u32)(r_edx+r_eax*8+0x4u), (u16)r_ecx);
    /* 0077aa16: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa1a: movzx ecx, word ptr [ecx + 6] */ r_ecx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0077aa1e: mov word ptr [edx + eax*8 + 6], cx */ W16((u32)(r_edx+r_eax*8+0x6u), (u16)r_ecx);
    /* 0077aa23: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa27: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0077aa2a: mov dword ptr [edx + eax*8 + 8], ecx */ W32((u32)(r_edx+r_eax*8+0x8u), r_ecx);
    /* 0077aa2e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa32: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0077aa35: mov dword ptr [edx + eax*8 + 0xc], ecx */ W32((u32)(r_edx+r_eax*8+0xcu), r_ecx);
    /* 0077aa39: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa3d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077aa40: mov dword ptr [edx + eax*8 + 0x10], ecx */ W32((u32)(r_edx+r_eax*8+0x10u), r_ecx);
    /* 0077aa44: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa48: movzx ecx, word ptr [ecx + 0x14] */ r_ecx = (u32)R16((u32)(r_ecx+0x14u));
    /* 0077aa4c: mov word ptr [edx + eax*8 + 0x14], cx */ W16((u32)(r_edx+r_eax*8+0x14u), (u16)r_ecx);
    /* 0077aa51: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa55: movzx ecx, word ptr [ecx + 0x16] */ r_ecx = (u32)R16((u32)(r_ecx+0x16u));
    /* 0077aa59: mov word ptr [edx + eax*8 + 0x16], cx */ W16((u32)(r_edx+r_eax*8+0x16u), (u16)r_ecx);
    /* 0077aa5e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa62: movzx ecx, word ptr [ecx + 0x18] */ r_ecx = (u32)R16((u32)(r_ecx+0x18u));
    /* 0077aa66: mov word ptr [edx + eax*8 + 0x18], cx */ W16((u32)(r_edx+r_eax*8+0x18u), (u16)r_ecx);
    /* 0077aa6b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa6f: movzx ecx, word ptr [ecx + 0x1a] */ r_ecx = (u32)R16((u32)(r_ecx+0x1au));
    /* 0077aa73: mov word ptr [edx + eax*8 + 0x1a], cx */ W16((u32)(r_edx+r_eax*8+0x1au), (u16)r_ecx);
    /* 0077aa78: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa7c: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077aa7f: mov dword ptr [edx + eax*8 + 0x1c], ecx */ W32((u32)(r_edx+r_eax*8+0x1cu), r_ecx);
    /* 0077aa83: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa87: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077aa8a: mov dword ptr [edx + eax*8 + 0x20], ecx */ W32((u32)(r_edx+r_eax*8+0x20u), r_ecx);
    /* 0077aa8e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa92: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0077aa95: mov dword ptr [edx + eax*8 + 0x24], ecx */ W32((u32)(r_edx+r_eax*8+0x24u), r_ecx);
    /* 0077aa99: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aa9d: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0077aaa0: mov dword ptr [edx + eax*8 + 0x28], ecx */ W32((u32)(r_edx+r_eax*8+0x28u), r_ecx);
    /* 0077aaa4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aaa8: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0077aaab: mov dword ptr [edx + eax*8 + 0x2c], ecx */ W32((u32)(r_edx+r_eax*8+0x2cu), r_ecx);
    /* 0077aaaf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aab3: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077aab6: mov word ptr [ebp + eax*8], dx */ W16((u32)(r_ebp+r_eax*8), (u16)r_edx);
    /* 0077aabb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aabf: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077aac3: mov word ptr [ebp + eax*8 + 2], dx */ W16((u32)(r_ebp+r_eax*8+0x2u), (u16)r_edx);
    /* 0077aac8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aacc: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077aad0: mov ecx, dword ptr [0xa9b1d8] */ r_ecx = R32((u32)(0xa9b1d8u));
    /* 0077aad6: mov word ptr [ebp + eax*8 + 4], dx */ W16((u32)(r_ebp+r_eax*8+0x4u), (u16)r_edx);
    /* 0077aadb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aadf: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077aae3: mov word ptr [ebp + eax*8 + 6], dx */ W16((u32)(r_ebp+r_eax*8+0x6u), (u16)r_edx);
    /* 0077aae8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aaec: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0077aaef: mov dword ptr [ebp + eax*8 + 8], edx */ W32((u32)(r_ebp+r_eax*8+0x8u), r_edx);
    /* 0077aaf3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aaf7: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077aafa: mov dword ptr [ebp + eax*8 + 0xc], edx */ W32((u32)(r_ebp+r_eax*8+0xcu), r_edx);
    /* 0077aafe: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab02: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077ab05: mov dword ptr [ebp + eax*8 + 0x10], edx */ W32((u32)(r_ebp+r_eax*8+0x10u), r_edx);
    /* 0077ab09: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab0d: movzx edx, word ptr [edx + 0x14] */ r_edx = (u32)R16((u32)(r_edx+0x14u));
    /* 0077ab11: mov word ptr [ebp + eax*8 + 0x14], dx */ W16((u32)(r_ebp+r_eax*8+0x14u), (u16)r_edx);
    /* 0077ab16: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab1a: movzx edx, word ptr [edx + 0x16] */ r_edx = (u32)R16((u32)(r_edx+0x16u));
    /* 0077ab1e: mov word ptr [ebp + eax*8 + 0x16], dx */ W16((u32)(r_ebp+r_eax*8+0x16u), (u16)r_edx);
    /* 0077ab23: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab27: movzx edx, word ptr [edx + 0x18] */ r_edx = (u32)R16((u32)(r_edx+0x18u));
    /* 0077ab2b: mov word ptr [ebp + eax*8 + 0x18], dx */ W16((u32)(r_ebp+r_eax*8+0x18u), (u16)r_edx);
    /* 0077ab30: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab34: movzx edx, word ptr [edx + 0x1a] */ r_edx = (u32)R16((u32)(r_edx+0x1au));
    /* 0077ab38: mov word ptr [ebp + eax*8 + 0x1a], dx */ W16((u32)(r_ebp+r_eax*8+0x1au), (u16)r_edx);
    /* 0077ab3d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab41: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077ab44: mov dword ptr [ebp + eax*8 + 0x1c], edx */ W32((u32)(r_ebp+r_eax*8+0x1cu), r_edx);
    /* 0077ab48: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab4c: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077ab4f: mov dword ptr [ebp + eax*8 + 0x20], edx */ W32((u32)(r_ebp+r_eax*8+0x20u), r_edx);
    /* 0077ab53: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab57: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0077ab5a: mov dword ptr [ebp + eax*8 + 0x24], edx */ W32((u32)(r_ebp+r_eax*8+0x24u), r_edx);
    /* 0077ab5e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab62: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0077ab65: mov dword ptr [ebp + eax*8 + 0x28], edx */ W32((u32)(r_ebp+r_eax*8+0x28u), r_edx);
    /* 0077ab69: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab6d: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0077ab70: mov dword ptr [ebp + eax*8 + 0x2c], edx */ W32((u32)(r_ebp+r_eax*8+0x2cu), r_edx);
    /* 0077ab74: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab78: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077ab7b: mov word ptr [ecx + eax*8], dx */ W16((u32)(r_ecx+r_eax*8), (u16)r_edx);
    /* 0077ab7f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab83: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077ab87: mov word ptr [ecx + eax*8 + 2], dx */ W16((u32)(r_ecx+r_eax*8+0x2u), (u16)r_edx);
    /* 0077ab8c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab90: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077ab94: mov word ptr [ecx + eax*8 + 4], dx */ W16((u32)(r_ecx+r_eax*8+0x4u), (u16)r_edx);
    /* 0077ab99: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ab9d: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077aba1: mov word ptr [ecx + eax*8 + 6], dx */ W16((u32)(r_ecx+r_eax*8+0x6u), (u16)r_edx);
    /* 0077aba6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abaa: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0077abad: mov dword ptr [ecx + eax*8 + 8], edx */ W32((u32)(r_ecx+r_eax*8+0x8u), r_edx);
    /* 0077abb1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abb5: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077abb8: mov dword ptr [ecx + eax*8 + 0xc], edx */ W32((u32)(r_ecx+r_eax*8+0xcu), r_edx);
    /* 0077abbc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abc0: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077abc3: mov dword ptr [ecx + eax*8 + 0x10], edx */ W32((u32)(r_ecx+r_eax*8+0x10u), r_edx);
    /* 0077abc7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abcb: movzx edx, word ptr [edx + 0x14] */ r_edx = (u32)R16((u32)(r_edx+0x14u));
    /* 0077abcf: mov word ptr [ecx + eax*8 + 0x14], dx */ W16((u32)(r_ecx+r_eax*8+0x14u), (u16)r_edx);
    /* 0077abd4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abd8: movzx edx, word ptr [edx + 0x16] */ r_edx = (u32)R16((u32)(r_edx+0x16u));
    /* 0077abdc: mov word ptr [ecx + eax*8 + 0x16], dx */ W16((u32)(r_ecx+r_eax*8+0x16u), (u16)r_edx);
    /* 0077abe1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abe5: movzx edx, word ptr [edx + 0x18] */ r_edx = (u32)R16((u32)(r_edx+0x18u));
    /* 0077abe9: mov word ptr [ecx + eax*8 + 0x18], dx */ W16((u32)(r_ecx+r_eax*8+0x18u), (u16)r_edx);
    /* 0077abee: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abf2: movzx edx, word ptr [edx + 0x1a] */ r_edx = (u32)R16((u32)(r_edx+0x1au));
    /* 0077abf6: mov word ptr [ecx + eax*8 + 0x1a], dx */ W16((u32)(r_ecx+r_eax*8+0x1au), (u16)r_edx);
    /* 0077abfb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077abff: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077ac02: mov dword ptr [ecx + eax*8 + 0x1c], edx */ W32((u32)(r_ecx+r_eax*8+0x1cu), r_edx);
    /* 0077ac06: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ac0a: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077ac0d: mov dword ptr [ecx + eax*8 + 0x20], edx */ W32((u32)(r_ecx+r_eax*8+0x20u), r_edx);
    /* 0077ac11: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ac15: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0077ac18: mov dword ptr [ecx + eax*8 + 0x24], edx */ W32((u32)(r_ecx+r_eax*8+0x24u), r_edx);
    /* 0077ac1c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ac20: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0077ac23: mov dword ptr [ecx + eax*8 + 0x28], edx */ W32((u32)(r_ecx+r_eax*8+0x28u), r_edx);
    /* 0077ac27: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ac2b: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0077ac2e: mov dword ptr [ecx + eax*8 + 0x2c], edx */ W32((u32)(r_ecx+r_eax*8+0x2cu), r_edx);
    /* 0077ac32: mov edx, dword ptr [0xa9b1d8] */ r_edx = R32((u32)(0xa9b1d8u));
    /* 0077ac38: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac3c: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0077ac3f: mov word ptr [edx + eax*8], cx */ W16((u32)(r_edx+r_eax*8), (u16)r_ecx);
    /* 0077ac43: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac47: movzx ecx, word ptr [ecx + 2] */ r_ecx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077ac4b: mov word ptr [edx + eax*8 + 2], cx */ W16((u32)(r_edx+r_eax*8+0x2u), (u16)r_ecx);
    /* 0077ac50: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac54: movzx ecx, word ptr [ecx + 4] */ r_ecx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077ac58: mov dword ptr [0xa9b1c0], 1 */ W32((u32)(0xa9b1c0u), 0x1u);
    /* 0077ac62: mov word ptr [edx + eax*8 + 4], cx */ W16((u32)(r_edx+r_eax*8+0x4u), (u16)r_ecx);
    /* 0077ac67: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac6b: movzx ecx, word ptr [ecx + 6] */ r_ecx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0077ac6f: mov word ptr [edx + eax*8 + 6], cx */ W16((u32)(r_edx+r_eax*8+0x6u), (u16)r_ecx);
    /* 0077ac74: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac78: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0077ac7b: mov dword ptr [edx + eax*8 + 8], ecx */ W32((u32)(r_edx+r_eax*8+0x8u), r_ecx);
    /* 0077ac7f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac83: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0077ac86: mov dword ptr [edx + eax*8 + 0xc], ecx */ W32((u32)(r_edx+r_eax*8+0xcu), r_ecx);
    /* 0077ac8a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac8e: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077ac91: mov dword ptr [edx + eax*8 + 0x10], ecx */ W32((u32)(r_edx+r_eax*8+0x10u), r_ecx);
    /* 0077ac95: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ac99: movzx ecx, word ptr [ecx + 0x14] */ r_ecx = (u32)R16((u32)(r_ecx+0x14u));
    /* 0077ac9d: mov word ptr [edx + eax*8 + 0x14], cx */ W16((u32)(r_edx+r_eax*8+0x14u), (u16)r_ecx);
    /* 0077aca2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aca6: movzx ecx, word ptr [ecx + 0x16] */ r_ecx = (u32)R16((u32)(r_ecx+0x16u));
    /* 0077acaa: mov word ptr [edx + eax*8 + 0x16], cx */ W16((u32)(r_edx+r_eax*8+0x16u), (u16)r_ecx);
    /* 0077acaf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077acb3: movzx ecx, word ptr [ecx + 0x18] */ r_ecx = (u32)R16((u32)(r_ecx+0x18u));
    /* 0077acb7: mov word ptr [edx + eax*8 + 0x18], cx */ W16((u32)(r_edx+r_eax*8+0x18u), (u16)r_ecx);
    /* 0077acbc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077acc0: movzx ecx, word ptr [ecx + 0x1a] */ r_ecx = (u32)R16((u32)(r_ecx+0x1au));
    /* 0077acc4: mov word ptr [edx + eax*8 + 0x1a], cx */ W16((u32)(r_edx+r_eax*8+0x1au), (u16)r_ecx);
    /* 0077acc9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077accd: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077acd0: mov dword ptr [edx + eax*8 + 0x1c], ecx */ W32((u32)(r_edx+r_eax*8+0x1cu), r_ecx);
    /* 0077acd4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077acd8: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077acdb: mov dword ptr [edx + eax*8 + 0x20], ecx */ W32((u32)(r_edx+r_eax*8+0x20u), r_ecx);
    /* 0077acdf: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ace3: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0077ace6: mov dword ptr [edx + eax*8 + 0x24], ecx */ W32((u32)(r_edx+r_eax*8+0x24u), r_ecx);
    /* 0077acea: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077acee: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0077acf1: mov dword ptr [edx + eax*8 + 0x28], ecx */ W32((u32)(r_edx+r_eax*8+0x28u), r_ecx);
    /* 0077acf5: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077acf9: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0077acfc: mov dword ptr [edx + eax*8 + 0x2c], ecx */ W32((u32)(r_edx+r_eax*8+0x2cu), r_ecx);
L_0077ad00:; BB(0x0077ad00);
    /* 0077ad00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077ad01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ad02: ret  */ FN_RET(0x0077a9c4); r_esp += 4; return;
}

void f_0077ad04(void) /* sub_77AD04 */
{
    FN_ENTER(0x0077ad04);
    /* 0077ad04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077ad05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077ad06: mov ebx, dword ptr [0xa9b1bc] */ r_ebx = R32((u32)(0xa9b1bcu));
    /* 0077ad0c: mov eax, ebx */ r_eax = r_ebx;
    /* 0077ad0e: call 0x77a6ec */ r_esp -= 4; W32(r_esp, 0x77ad13u); f_0077a6ec();
    /* 0077ad13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ad15: je 0x77af4b */ if (fZ) goto L_0077af4b;
L_0077ad1b:; BB(0x0077ad1b);
    /* 0077ad1b: mov eax, dword ptr [0xa9b1d4] */ r_eax = R32((u32)(0xa9b1d4u));
    /* 0077ad20: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad24: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077ad27: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077ad29: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077ad2b: mov word ptr [eax + ebx*8], dx */ W16((u32)(r_eax+r_ebx*8), (u16)r_edx);
    /* 0077ad2f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad33: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077ad37: mov word ptr [eax + ebx*8 + 2], dx */ W16((u32)(r_eax+r_ebx*8+0x2u), (u16)r_edx);
    /* 0077ad3c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad40: mov ecx, dword ptr [0xa9b1d4] */ r_ecx = R32((u32)(0xa9b1d4u));
    /* 0077ad46: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077ad4a: mov word ptr [eax + ebx*8 + 4], dx */ W16((u32)(r_eax+r_ebx*8+0x4u), (u16)r_edx);
    /* 0077ad4f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad53: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077ad57: mov word ptr [eax + ebx*8 + 6], dx */ W16((u32)(r_eax+r_ebx*8+0x6u), (u16)r_edx);
    /* 0077ad5c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad60: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 0077ad64: mov word ptr [eax + ebx*8 + 8], dx */ W16((u32)(r_eax+r_ebx*8+0x8u), (u16)r_edx);
    /* 0077ad69: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad6d: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 0077ad71: mov word ptr [eax + ebx*8 + 0xa], dx */ W16((u32)(r_eax+r_ebx*8+0xau), (u16)r_edx);
    /* 0077ad76: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad7a: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077ad7d: mov dword ptr [eax + ebx*8 + 0xc], edx */ W32((u32)(r_eax+r_ebx*8+0xcu), r_edx);
    /* 0077ad81: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad85: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077ad88: mov dword ptr [eax + ebx*8 + 0x10], edx */ W32((u32)(r_eax+r_ebx*8+0x10u), r_edx);
    /* 0077ad8c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad90: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077ad93: mov dword ptr [eax + ebx*8 + 0x14], edx */ W32((u32)(r_eax+r_ebx*8+0x14u), r_edx);
    /* 0077ad97: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ad9b: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077ad9e: mov dword ptr [eax + ebx*8 + 0x18], edx */ W32((u32)(r_eax+r_ebx*8+0x18u), r_edx);
    /* 0077ada2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ada6: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077ada9: mov dword ptr [eax + ebx*8 + 0x1c], edx */ W32((u32)(r_eax+r_ebx*8+0x1cu), r_edx);
    /* 0077adad: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077adb1: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077adb4: mov word ptr [ecx + ebx*8], dx */ W16((u32)(r_ecx+r_ebx*8), (u16)r_edx);
    /* 0077adb8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077adbc: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077adc0: mov word ptr [ecx + ebx*8 + 2], dx */ W16((u32)(r_ecx+r_ebx*8+0x2u), (u16)r_edx);
    /* 0077adc5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077adc9: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077adcd: mov word ptr [ecx + ebx*8 + 4], dx */ W16((u32)(r_ecx+r_ebx*8+0x4u), (u16)r_edx);
    /* 0077add2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077add6: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077adda: mov word ptr [ecx + ebx*8 + 6], dx */ W16((u32)(r_ecx+r_ebx*8+0x6u), (u16)r_edx);
    /* 0077addf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ade3: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 0077ade7: mov word ptr [ecx + ebx*8 + 8], dx */ W16((u32)(r_ecx+r_ebx*8+0x8u), (u16)r_edx);
    /* 0077adec: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077adf0: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 0077adf4: mov word ptr [ecx + ebx*8 + 0xa], dx */ W16((u32)(r_ecx+r_ebx*8+0xau), (u16)r_edx);
    /* 0077adf9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077adfd: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077ae00: mov dword ptr [ecx + ebx*8 + 0xc], edx */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edx);
    /* 0077ae04: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ae08: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077ae0b: mov dword ptr [ecx + ebx*8 + 0x10], edx */ W32((u32)(r_ecx+r_ebx*8+0x10u), r_edx);
    /* 0077ae0f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ae13: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077ae16: mov dword ptr [ecx + ebx*8 + 0x14], edx */ W32((u32)(r_ecx+r_ebx*8+0x14u), r_edx);
    /* 0077ae1a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ae1e: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077ae21: mov dword ptr [ecx + ebx*8 + 0x18], edx */ W32((u32)(r_ecx+r_ebx*8+0x18u), r_edx);
    /* 0077ae25: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077ae29: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077ae2c: mov dword ptr [ecx + ebx*8 + 0x1c], edx */ W32((u32)(r_ecx+r_ebx*8+0x1cu), r_edx);
    /* 0077ae30: mov edx, dword ptr [0xa9b1d4] */ r_edx = R32((u32)(0xa9b1d4u));
    /* 0077ae36: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae3a: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0077ae3d: mov word ptr [edx + ebx*8], cx */ W16((u32)(r_edx+r_ebx*8), (u16)r_ecx);
    /* 0077ae41: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae45: movzx ecx, word ptr [ecx + 2] */ r_ecx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077ae49: mov word ptr [edx + ebx*8 + 2], cx */ W16((u32)(r_edx+r_ebx*8+0x2u), (u16)r_ecx);
    /* 0077ae4e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae52: mov eax, dword ptr [0xa9b1d4] */ r_eax = R32((u32)(0xa9b1d4u));
    /* 0077ae57: movzx ecx, word ptr [ecx + 4] */ r_ecx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0077ae5b: mov word ptr [edx + ebx*8 + 4], cx */ W16((u32)(r_edx+r_ebx*8+0x4u), (u16)r_ecx);
    /* 0077ae60: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae64: movzx ecx, word ptr [ecx + 6] */ r_ecx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0077ae68: mov word ptr [edx + ebx*8 + 6], cx */ W16((u32)(r_edx+r_ebx*8+0x6u), (u16)r_ecx);
    /* 0077ae6d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae71: movzx ecx, word ptr [ecx + 8] */ r_ecx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0077ae75: mov word ptr [edx + ebx*8 + 8], cx */ W16((u32)(r_edx+r_ebx*8+0x8u), (u16)r_ecx);
    /* 0077ae7a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae7e: movzx ecx, word ptr [ecx + 0xa] */ r_ecx = (u32)R16((u32)(r_ecx+0xau));
    /* 0077ae82: mov word ptr [edx + ebx*8 + 0xa], cx */ W16((u32)(r_edx+r_ebx*8+0xau), (u16)r_ecx);
    /* 0077ae87: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae8b: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0077ae8e: mov dword ptr [edx + ebx*8 + 0xc], ecx */ W32((u32)(r_edx+r_ebx*8+0xcu), r_ecx);
    /* 0077ae92: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077ae96: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077ae99: mov dword ptr [edx + ebx*8 + 0x10], ecx */ W32((u32)(r_edx+r_ebx*8+0x10u), r_ecx);
    /* 0077ae9d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aea1: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0077aea4: mov dword ptr [edx + ebx*8 + 0x14], ecx */ W32((u32)(r_edx+r_ebx*8+0x14u), r_ecx);
    /* 0077aea8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aeac: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0077aeaf: mov dword ptr [edx + ebx*8 + 0x18], ecx */ W32((u32)(r_edx+r_ebx*8+0x18u), r_ecx);
    /* 0077aeb3: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aeb7: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077aeba: mov dword ptr [edx + ebx*8 + 0x1c], ecx */ W32((u32)(r_edx+r_ebx*8+0x1cu), r_ecx);
    /* 0077aebe: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aec2: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 0077aec5: mov word ptr [eax + ebx*8], dx */ W16((u32)(r_eax+r_ebx*8), (u16)r_edx);
    /* 0077aec9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aecd: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 0077aed1: mov word ptr [eax + ebx*8 + 2], dx */ W16((u32)(r_eax+r_ebx*8+0x2u), (u16)r_edx);
    /* 0077aed6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aeda: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 0077aede: mov word ptr [eax + ebx*8 + 4], dx */ W16((u32)(r_eax+r_ebx*8+0x4u), (u16)r_edx);
    /* 0077aee3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aee7: movzx edx, word ptr [edx + 6] */ r_edx = (u32)R16((u32)(r_edx+0x6u));
    /* 0077aeeb: mov word ptr [eax + ebx*8 + 6], dx */ W16((u32)(r_eax+r_ebx*8+0x6u), (u16)r_edx);
    /* 0077aef0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077aef4: movzx edx, word ptr [edx + 8] */ r_edx = (u32)R16((u32)(r_edx+0x8u));
    /* 0077aef8: mov dword ptr [0xa9b1c0], 1 */ W32((u32)(0xa9b1c0u), 0x1u);
    /* 0077af02: mov word ptr [eax + ebx*8 + 8], dx */ W16((u32)(r_eax+r_ebx*8+0x8u), (u16)r_edx);
    /* 0077af07: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af0b: movzx edx, word ptr [edx + 0xa] */ r_edx = (u32)R16((u32)(r_edx+0xau));
    /* 0077af0f: mov word ptr [eax + ebx*8 + 0xa], dx */ W16((u32)(r_eax+r_ebx*8+0xau), (u16)r_edx);
    /* 0077af14: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af18: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077af1b: mov dword ptr [eax + ebx*8 + 0xc], edx */ W32((u32)(r_eax+r_ebx*8+0xcu), r_edx);
    /* 0077af1f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af23: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077af26: mov dword ptr [eax + ebx*8 + 0x10], edx */ W32((u32)(r_eax+r_ebx*8+0x10u), r_edx);
    /* 0077af2a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af2e: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077af31: mov dword ptr [eax + ebx*8 + 0x14], edx */ W32((u32)(r_eax+r_ebx*8+0x14u), r_edx);
    /* 0077af35: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af39: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077af3c: mov dword ptr [eax + ebx*8 + 0x18], edx */ W32((u32)(r_eax+r_ebx*8+0x18u), r_edx);
    /* 0077af40: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077af44: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077af47: mov dword ptr [eax + ebx*8 + 0x1c], edx */ W32((u32)(r_eax+r_ebx*8+0x1cu), r_edx);
L_0077af4b:; BB(0x0077af4b);
    /* 0077af4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077af4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077af4d: ret  */ FN_RET(0x0077ad04); r_esp += 4; return;
}

void f_0077af50(void) /* sub_77AF50 */
{
    FN_ENTER(0x0077af50);
    /* 0077af50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077af51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077af52: mov edi, dword ptr [0xa9b1bc] */ r_edi = R32((u32)(0xa9b1bcu));
    /* 0077af58: mov eax, edi */ r_eax = r_edi;
    /* 0077af5a: call 0x77a6ec */ r_esp -= 4; W32(r_esp, 0x77af5fu); f_0077a6ec();
    /* 0077af5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077af61: je 0x77b19a */ if (fZ) goto L_0077b19a;
L_0077af67:; BB(0x0077af67);
    /* 0077af67: mov edx, dword ptr [0xa9b1d0] */ r_edx = R32((u32)(0xa9b1d0u));
    /* 0077af6d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077af71: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0077af73: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0077af76: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077af78: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077af7a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077af7c: mov dword ptr [edx + eax*8], ecx */ W32((u32)(r_edx+r_eax*8), r_ecx);
    /* 0077af7f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077af83: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0077af86: mov edi, dword ptr [0xa9b1d0] */ r_edi = R32((u32)(0xa9b1d0u));
    /* 0077af8c: mov dword ptr [edx + eax*8 + 4], ecx */ W32((u32)(r_edx+r_eax*8+0x4u), r_ecx);
    /* 0077af90: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077af94: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0077af97: mov dword ptr [edx + eax*8 + 8], ecx */ W32((u32)(r_edx+r_eax*8+0x8u), r_ecx);
    /* 0077af9b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077af9f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0077afa2: mov dword ptr [edx + eax*8 + 0xc], ecx */ W32((u32)(r_edx+r_eax*8+0xcu), r_ecx);
    /* 0077afa6: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afaa: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077afad: mov dword ptr [edx + eax*8 + 0x10], ecx */ W32((u32)(r_edx+r_eax*8+0x10u), r_ecx);
    /* 0077afb1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afb5: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0077afb8: mov dword ptr [edx + eax*8 + 0x14], ecx */ W32((u32)(r_edx+r_eax*8+0x14u), r_ecx);
    /* 0077afbc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afc0: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0077afc3: mov dword ptr [edx + eax*8 + 0x18], ecx */ W32((u32)(r_edx+r_eax*8+0x18u), r_ecx);
    /* 0077afc7: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afcb: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077afce: mov dword ptr [edx + eax*8 + 0x1c], ecx */ W32((u32)(r_edx+r_eax*8+0x1cu), r_ecx);
    /* 0077afd2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afd6: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077afd9: mov dword ptr [edx + eax*8 + 0x20], ecx */ W32((u32)(r_edx+r_eax*8+0x20u), r_ecx);
    /* 0077afdd: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afe1: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0077afe4: mov dword ptr [edx + eax*8 + 0x24], ecx */ W32((u32)(r_edx+r_eax*8+0x24u), r_ecx);
    /* 0077afe8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077afec: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0077afef: mov dword ptr [edx + eax*8 + 0x28], ecx */ W32((u32)(r_edx+r_eax*8+0x28u), r_ecx);
    /* 0077aff3: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077aff7: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0077affa: mov dword ptr [edx + eax*8 + 0x2c], ecx */ W32((u32)(r_edx+r_eax*8+0x2cu), r_ecx);
    /* 0077affe: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b002: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0077b004: mov dword ptr [edi + eax*8], edx */ W32((u32)(r_edi+r_eax*8), r_edx);
    /* 0077b007: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b00b: mov ecx, dword ptr [0xa9b1d0] */ r_ecx = R32((u32)(0xa9b1d0u));
    /* 0077b011: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0077b014: mov dword ptr [edi + eax*8 + 4], edx */ W32((u32)(r_edi+r_eax*8+0x4u), r_edx);
    /* 0077b018: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b01c: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0077b01f: mov dword ptr [edi + eax*8 + 8], edx */ W32((u32)(r_edi+r_eax*8+0x8u), r_edx);
    /* 0077b023: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b027: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077b02a: mov dword ptr [edi + eax*8 + 0xc], edx */ W32((u32)(r_edi+r_eax*8+0xcu), r_edx);
    /* 0077b02e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b032: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077b035: mov dword ptr [edi + eax*8 + 0x10], edx */ W32((u32)(r_edi+r_eax*8+0x10u), r_edx);
    /* 0077b039: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b03d: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077b040: mov dword ptr [edi + eax*8 + 0x14], edx */ W32((u32)(r_edi+r_eax*8+0x14u), r_edx);
    /* 0077b044: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b048: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077b04b: mov dword ptr [edi + eax*8 + 0x18], edx */ W32((u32)(r_edi+r_eax*8+0x18u), r_edx);
    /* 0077b04f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b053: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077b056: mov dword ptr [edi + eax*8 + 0x1c], edx */ W32((u32)(r_edi+r_eax*8+0x1cu), r_edx);
    /* 0077b05a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b05e: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077b061: mov dword ptr [edi + eax*8 + 0x20], edx */ W32((u32)(r_edi+r_eax*8+0x20u), r_edx);
    /* 0077b065: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b069: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0077b06c: mov dword ptr [edi + eax*8 + 0x24], edx */ W32((u32)(r_edi+r_eax*8+0x24u), r_edx);
    /* 0077b070: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b074: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0077b077: mov dword ptr [edi + eax*8 + 0x28], edx */ W32((u32)(r_edi+r_eax*8+0x28u), r_edx);
    /* 0077b07b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b07f: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0077b082: mov dword ptr [edi + eax*8 + 0x2c], edx */ W32((u32)(r_edi+r_eax*8+0x2cu), r_edx);
    /* 0077b086: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b08a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0077b08c: mov dword ptr [ecx + eax*8], edx */ W32((u32)(r_ecx+r_eax*8), r_edx);
    /* 0077b08f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b093: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0077b096: mov dword ptr [ecx + eax*8 + 4], edx */ W32((u32)(r_ecx+r_eax*8+0x4u), r_edx);
    /* 0077b09a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b09e: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0077b0a1: mov dword ptr [ecx + eax*8 + 8], edx */ W32((u32)(r_ecx+r_eax*8+0x8u), r_edx);
    /* 0077b0a5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0a9: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0077b0ac: mov dword ptr [ecx + eax*8 + 0xc], edx */ W32((u32)(r_ecx+r_eax*8+0xcu), r_edx);
    /* 0077b0b0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0b4: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0077b0b7: mov dword ptr [ecx + eax*8 + 0x10], edx */ W32((u32)(r_ecx+r_eax*8+0x10u), r_edx);
    /* 0077b0bb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0bf: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0077b0c2: mov dword ptr [ecx + eax*8 + 0x14], edx */ W32((u32)(r_ecx+r_eax*8+0x14u), r_edx);
    /* 0077b0c6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0ca: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0077b0cd: mov dword ptr [ecx + eax*8 + 0x18], edx */ W32((u32)(r_ecx+r_eax*8+0x18u), r_edx);
    /* 0077b0d1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0d5: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0077b0d8: mov dword ptr [ecx + eax*8 + 0x1c], edx */ W32((u32)(r_ecx+r_eax*8+0x1cu), r_edx);
    /* 0077b0dc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0e0: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0077b0e3: mov dword ptr [ecx + eax*8 + 0x20], edx */ W32((u32)(r_ecx+r_eax*8+0x20u), r_edx);
    /* 0077b0e7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0eb: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0077b0ee: mov dword ptr [ecx + eax*8 + 0x24], edx */ W32((u32)(r_ecx+r_eax*8+0x24u), r_edx);
    /* 0077b0f2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b0f6: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 0077b0f9: mov dword ptr [ecx + eax*8 + 0x28], edx */ W32((u32)(r_ecx+r_eax*8+0x28u), r_edx);
    /* 0077b0fd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0077b101: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0077b104: mov dword ptr [ecx + eax*8 + 0x2c], edx */ W32((u32)(r_ecx+r_eax*8+0x2cu), r_edx);
    /* 0077b108: mov edx, dword ptr [0xa9b1d0] */ r_edx = R32((u32)(0xa9b1d0u));
    /* 0077b10e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b112: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0077b114: mov dword ptr [edx + eax*8], ecx */ W32((u32)(r_edx+r_eax*8), r_ecx);
    /* 0077b117: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b11b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0077b11e: mov dword ptr [edx + eax*8 + 4], ecx */ W32((u32)(r_edx+r_eax*8+0x4u), r_ecx);
    /* 0077b122: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b126: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0077b129: mov dword ptr [0xa9b1c0], 1 */ W32((u32)(0xa9b1c0u), 0x1u);
    /* 0077b133: mov dword ptr [edx + eax*8 + 8], ecx */ W32((u32)(r_edx+r_eax*8+0x8u), r_ecx);
    /* 0077b137: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b13b: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0077b13e: mov dword ptr [edx + eax*8 + 0xc], ecx */ W32((u32)(r_edx+r_eax*8+0xcu), r_ecx);
    /* 0077b142: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b146: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0077b149: mov dword ptr [edx + eax*8 + 0x10], ecx */ W32((u32)(r_edx+r_eax*8+0x10u), r_ecx);
    /* 0077b14d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b151: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0077b154: mov dword ptr [edx + eax*8 + 0x14], ecx */ W32((u32)(r_edx+r_eax*8+0x14u), r_ecx);
    /* 0077b158: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b15c: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0077b15f: mov dword ptr [edx + eax*8 + 0x18], ecx */ W32((u32)(r_edx+r_eax*8+0x18u), r_ecx);
    /* 0077b163: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b167: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0077b16a: mov dword ptr [edx + eax*8 + 0x1c], ecx */ W32((u32)(r_edx+r_eax*8+0x1cu), r_ecx);
    /* 0077b16e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b172: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0077b175: mov dword ptr [edx + eax*8 + 0x20], ecx */ W32((u32)(r_edx+r_eax*8+0x20u), r_ecx);
    /* 0077b179: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b17d: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0077b180: mov dword ptr [edx + eax*8 + 0x24], ecx */ W32((u32)(r_edx+r_eax*8+0x24u), r_ecx);
    /* 0077b184: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b188: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0077b18b: mov dword ptr [edx + eax*8 + 0x28], ecx */ W32((u32)(r_edx+r_eax*8+0x28u), r_ecx);
    /* 0077b18f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0077b193: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0077b196: mov dword ptr [edx + eax*8 + 0x2c], ecx */ W32((u32)(r_edx+r_eax*8+0x2cu), r_ecx);
L_0077b19a:; BB(0x0077b19a);
    /* 0077b19a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077b19b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077b19c: ret  */ FN_RET(0x0077af50); r_esp += 4; return;
}

