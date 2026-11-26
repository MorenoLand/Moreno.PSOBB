#include "protos.h"

void f_006ef020(void) /* sub_6EF020 */
{
    FN_ENTER(0x006ef020);
    /* 006ef020: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef021: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef024: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ef026: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006ef02d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef033: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef035: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ef03au); f_006ded14();
    /* 006ef03a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef03d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ef03f: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 006ef042: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ef045: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 006ef048: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006ef04b: mov dword ptr [ebx + 0x7c], edx */ W32((u32)(r_ebx+0x7cu), r_edx);
    /* 006ef04e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ef051: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 006ef057: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006ef05a: mov dword ptr [ebx + 0x84], edx */ W32((u32)(r_ebx+0x84u), r_edx);
    /* 006ef060: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006ef063: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 006ef069: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006ef06c: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 006ef072: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ef075: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 006ef07b: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006ef07e: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 006ef084: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006ef087: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006ef08d: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006ef090: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006ef093: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 006ef099: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006ef0a0: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ef0a3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ef0a6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ef0a9: fadd dword ptr [ebx + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x74u));
    /* 006ef0ac: fstp dword ptr [ebx + 0x74] */ W_F32((u32)(r_ebx+0x74u), ST(0)); FPOP();
    /* 006ef0af: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ef0b4u); f_00687c48();
    /* 006ef0b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef0b6: je 0x6ef0c4 */ if (fZ) goto L_006ef0c4;
L_006ef0b8:; BB(0x006ef0b8);
    /* 006ef0b8: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 006ef0bb: fmul dword ptr [0x9cf7f8] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7f8u));
    /* 006ef0c1: fstp dword ptr [ebx + 0x74] */ W_F32((u32)(r_ebx+0x74u), ST(0)); FPOP();
L_006ef0c4:; BB(0x006ef0c4);
    /* 006ef0c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef0c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ef0c8: ret  */ FN_RET(0x006ef020); r_esp += 4; return;
}

void f_006ef0cc(void) /* sub_6EF0CC */
{
    FN_ENTER(0x006ef0cc);
    /* 006ef0cc: movsx eax, word ptr [ecx + 0xa6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xa6u));
    /* 006ef0d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef0d5: jl 0x6ef143 */ if ((fS!=fO)) goto L_006ef143;
L_006ef0d7:; BB(0x006ef0d7);
    /* 006ef0d7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef0da: jle 0x6ef11a */ if ((fZ||fS!=fO)) goto L_006ef11a;
L_006ef0dc:; BB(0x006ef0dc);
    /* 006ef0dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ef0df: jl 0x6ef143 */ if ((fS!=fO)) goto L_006ef143;
L_006ef0e1:; BB(0x006ef0e1);
    /* 006ef0e1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef0e4: jle 0x6ef144 */ if ((fZ||fS!=fO)) goto L_006ef144;
L_006ef0e6:; BB(0x006ef0e6);
    /* 006ef0e6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ef0e9: jl 0x6ef143 */ if ((fS!=fO)) goto L_006ef143;
L_006ef0eb:; BB(0x006ef0eb);
    /* 006ef0eb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ef0ee: jg 0x6ef143 */ if ((!fZ&&fS==fO)) goto L_006ef143;
L_006ef0f0:; BB(0x006ef0f0);
    /* 006ef0f0: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ef0f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ef0f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef0f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef0f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef0f8: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef0fd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ef102u); f_00814298();
    /* 006ef102: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef107: jl 0x6ef143 */ if ((fS!=fO)) goto L_006ef143;
L_006ef109:; BB(0x006ef109);
    /* 006ef109: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef10b: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef111: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ef116u); f_00814664();
    /* 006ef116: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef119: ret  */ FN_RET(0x006ef0cc); r_esp += 4; return;
L_006ef11a:; BB(0x006ef11a);
    /* 006ef11a: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ef11d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ef11f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef121: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef122: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef127: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ef12cu); f_00814298();
    /* 006ef12c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef12f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef131: jl 0x6ef143 */ if ((fS!=fO)) goto L_006ef143;
L_006ef133:; BB(0x006ef133);
    /* 006ef133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef135: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef13a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef13b: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ef140u); f_00814664();
    /* 006ef140: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006ef143:; BB(0x006ef143);
    /* 006ef143: ret  */ FN_RET(0x006ef0cc); r_esp += 4; return;
L_006ef144:; BB(0x006ef144);
    /* 006ef144: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ef147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ef149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef14a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef14b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef14c: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef151: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ef156u); f_00814298();
    /* 006ef156: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef159: ret  */ FN_RET(0x006ef0cc); r_esp += 4; return;
}

void f_006ef15c(void) /* sub_6EF15C */
{
    FN_ENTER(0x006ef15c);
    /* 006ef15c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef15d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef15f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef161: push 0x8ef8a0 */ { u32 v = 0x8ef8a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef166: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef16c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef16d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef174: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef177: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef17a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ef17d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ef180: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ef183: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef188: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ef18f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ef194u); f_005caba4();
    /* 006ef194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ef195: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ef198: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef19a: je 0x6ef1c5 */ if (fZ) goto L_006ef1c5;
L_006ef19c:; BB(0x006ef19c);
    /* 006ef19c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ef1a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ef1aa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef1ad: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef1b0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef1b3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef1b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef1b9: call 0x6ef1d4 */ r_esp -= 4; W32(r_esp, 0x6ef1beu); f_006ef1d4();
    /* 006ef1be: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ef1c5:; BB(0x006ef1c5);
    /* 006ef1c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef1c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef1cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef1d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef1d2: ret  */ FN_RET(0x006ef15c); r_esp += 4; return;
}

void f_006ef1d4(void) /* sub_6EF1D4 */
{
    FN_ENTER(0x006ef1d4);
    /* 006ef1d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef1d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef1d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef1d9: push 0x8ef8bc */ { u32 v = 0x8ef8bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef1de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef1e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef1e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef1ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef1ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef1f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ef1f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ef1f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ef1fb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ef1fe: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef201: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef204: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef207: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ef20a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ef20d: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6ef212u); f_006ebd58();
    /* 006ef212: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ef219: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef21c: mov dword ptr [edi], 0xb3e258 */ W32((u32)(r_edi), 0xb3e258u);
    /* 006ef222: lea ebx, [edi + 0xe4] */ r_ebx = (u32)(r_edi+0xe4u);
    /* 006ef228: mov esi, 0xb */ r_esi = 0xbu;
    /* 006ef22d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ef22f:; BB(0x006ef22f);
    /* 006ef22f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ef234: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006ef237: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ef239: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006ef23d: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006ef240: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ef243: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006ef246: jne 0x6ef22f */ if (!fZ) goto L_006ef22f;
L_006ef248:; BB(0x006ef248);
    /* 006ef248: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef24b: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 006ef255: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef258: mov ecx, dword ptr [0x9cf9bc] */ r_ecx = R32((u32)(0x9cf9bcu));
    /* 006ef25e: mov dword ptr [edx + 0x13c], 1 */ W32((u32)(r_edx+0x13cu), 0x1u);
    /* 006ef268: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006ef26b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006ef26d: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006ef270: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006ef273: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006ef276: add edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ef27c: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006ef27e: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006ef281: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006ef284: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006ef287: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006ef28a: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006ef28d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006ef290: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006ef293: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006ef296: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006ef299: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006ef29c: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006ef29f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006ef2a2: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006ef2a5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006ef2a8: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006ef2ab: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006ef2ae: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006ef2b1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006ef2b4: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006ef2b7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006ef2ba: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006ef2bd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006ef2c0: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006ef2c3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006ef2c6: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006ef2c9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006ef2cc: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006ef2cf: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006ef2d2: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006ef2d5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ef2d8: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006ef2db: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ef2de: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006ef2e1: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006ef2e4: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006ef2e7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006ef2ea: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006ef2ed: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006ef2f0: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006ef2f3: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006ef2f6: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006ef2f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef2fc: call 0x6ef020 */ r_esp -= 4; W32(r_esp, 0x6ef301u); f_006ef020();
    /* 006ef301: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef304: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006ef30a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef30c: je 0x6ef323 */ if (fZ) goto L_006ef323;
L_006ef30e:; BB(0x006ef30e);
    /* 006ef30e: fld dword ptr [0x96de64] */ FPUSH(R_F32((u32)(0x96de64u)));
    /* 006ef314: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006ef317: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef31a: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006ef320: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006ef323:; BB(0x006ef323);
    /* 006ef323: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006ef326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef328: je 0x6ef335 */ if (fZ) goto L_006ef335;
L_006ef32a:; BB(0x006ef32a);
    /* 006ef32a: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ef32e: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006ef335:; BB(0x006ef335);
    /* 006ef335: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 006ef33b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef33d: je 0x6ef34f */ if (fZ) goto L_006ef34f;
L_006ef33f:; BB(0x006ef33f);
    /* 006ef33f: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6ef344u); f_006ec06c();
    /* 006ef344: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef347: call 0x6ef0cc */ r_esp -= 4; W32(r_esp, 0x6ef34cu); f_006ef0cc();
    /* 006ef34c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006ef34f:; BB(0x006ef34f);
    /* 006ef34f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef352: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ef355: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ef358: mov eax, ecx */ r_eax = r_ecx;
    /* 006ef35a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef35d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef364: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef366: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef367: ret 0x10 */ FN_RET(0x006ef1d4); r_esp += 20; return;
}

void f_006ef36c(void) /* sub_6EF36C */
{
    FN_ENTER(0x006ef36c);
    /* 006ef36c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef36d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef370: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006ef374: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef379: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef37a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef37c: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ef381u); f_006ded14();
    /* 006ef381: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef384: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006ef387: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ef389: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ef38b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ef38e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ef391: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 006ef393: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ef397: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ef39cu); f_00687c48();
    /* 006ef39c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef39e: je 0x6ef3ae */ if (fZ) goto L_006ef3ae;
L_006ef3a0:; BB(0x006ef3a0);
    /* 006ef3a0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ef3a4: fmul dword ptr [0x9cf7f8] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7f8u));
    /* 006ef3aa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_006ef3ae:; BB(0x006ef3ae);
    /* 006ef3ae: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ef3b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef3b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ef3b6: ret  */ FN_RET(0x006ef36c); r_esp += 4; return;
}

void f_006ef3b8(void) /* sub_6EF3B8 */
{
    FN_ENTER(0x006ef3b8);
    /* 006ef3b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef3b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef3bc: mov edi, ecx */ r_edi = r_ecx;
    /* 006ef3be: movzx eax, word ptr [edi + 0xa8] */ r_eax = (u32)R16((u32)(r_edi+0xa8u));
    /* 006ef3c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef3c6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ef3cbu); f_007b4d18();
    /* 006ef3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef3cc: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006ef3cf: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6ef3d4u); f_006ea700();
    /* 006ef3d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef3d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef3d9: je 0x6ef492 */ if (fZ) goto L_006ef492;
L_006ef3df:; BB(0x006ef3df);
    /* 006ef3df: mov eax, dword ptr [edi + 0x13c] */ r_eax = R32((u32)(r_edi+0x13cu));
    /* 006ef3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef3e7: je 0x6ef461 */ if (fZ) goto L_006ef461;
L_006ef3e9:; BB(0x006ef3e9);
    /* 006ef3e9: movsx eax, word ptr [edi + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xa4u));
    /* 006ef3f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef3f3: jg 0x6ef404 */ if ((!fZ&&fS==fO)) goto L_006ef404;
L_006ef3f5:; BB(0x006ef3f5);
    /* 006ef3f5: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef3f8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ef3fa: mov ecx, edi */ r_ecx = r_edi;
    /* 006ef3fc: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ef3ffu); call_ind(t); }
    /* 006ef3ff: jmp 0x6ef480 */ goto L_006ef480;
L_006ef404:; BB(0x006ef404);
    /* 006ef404: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef407: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ef409: mov ecx, edi */ r_ecx = r_edi;
    /* 006ef40b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ef40eu); call_ind(t); }
    /* 006ef40e: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 006ef414: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ef416: je 0x6ef480 */ if (fZ) goto L_006ef480;
L_006ef418:; BB(0x006ef418);
    /* 006ef418: mov eax, 0 */ r_eax = 0x0u;
    /* 006ef41d: jle 0x6ef480 */ if ((fZ||fS!=fO)) goto L_006ef480;
L_006ef41f:; BB(0x006ef41f);
    /* 006ef41f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006ef423: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006ef426: mov esi, eax */ r_esi = r_eax;
L_006ef428:; BB(0x006ef428);
    /* 006ef428: movzx edx, word ptr [edi + esi*8 + 0xe4] */ r_edx = (u32)R16((u32)(r_edi+r_esi*8+0xe4u));
    /* 006ef430: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef431: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ef436u); f_007b4d18();
    /* 006ef436: mov ebx, eax */ r_ebx = r_eax;
    /* 006ef438: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef439: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6ef43eu); f_006ea700();
    /* 006ef43e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef443: je 0x6ef44d */ if (fZ) goto L_006ef44d;
L_006ef445:; BB(0x006ef445);
    /* 006ef445: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef446: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006ef448: mov ecx, edi */ r_ecx = r_edi;
    /* 006ef44a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6ef44du); call_ind(t); }
L_006ef44d:; BB(0x006ef44d);
    /* 006ef44d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ef450: cmp esi, dword ptr [edi + 0xe0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef456: jl 0x6ef428 */ if ((fS!=fO)) goto L_006ef428;
L_006ef458:; BB(0x006ef458);
    /* 006ef458: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006ef45c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006ef45f: jmp 0x6ef480 */ goto L_006ef480;
L_006ef461:; BB(0x006ef461);
    /* 006ef461: movsx eax, word ptr [edi + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xa4u));
    /* 006ef468: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef46b: jg 0x6ef479 */ if ((!fZ&&fS==fO)) goto L_006ef479;
L_006ef46d:; BB(0x006ef46d);
    /* 006ef46d: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef470: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ef472: mov ecx, edi */ r_ecx = r_edi;
    /* 006ef474: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ef477u); call_ind(t); }
    /* 006ef477: jmp 0x6ef480 */ goto L_006ef480;
L_006ef479:; BB(0x006ef479);
    /* 006ef479: mov ecx, edi */ r_ecx = r_edi;
    /* 006ef47b: call 0x6ebfdc */ r_esp -= 4; W32(r_esp, 0x6ef480u); f_006ebfdc();
L_006ef480:; BB(0x006ef480);
    /* 006ef480: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ef484: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ef489: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ef48d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef490: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ef491: ret  */ FN_RET(0x006ef3b8); r_esp += 4; return;
L_006ef492:; BB(0x006ef492);
    /* 006ef492: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ef496: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ef49b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ef49f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ef4a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ef4a3: ret  */ FN_RET(0x006ef3b8); r_esp += 4; return;
}

void f_006ef4a4(void) /* sub_6EF4A4 */
{
    FN_ENTER(0x006ef4a4);
    /* 006ef4a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef4a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef4a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef4a9: push 0x8ef90e */ { u32 v = 0x8ef90eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef4ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef4b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef4bc: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef4bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef4c2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ef4c5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ef4c8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ef4cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006ef4ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ef4d1: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006ef4d8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ef4db: jne 0x6ef4ed */ if (!fZ) goto L_006ef4ed;
L_006ef4dd:; BB(0x006ef4dd);
    /* 006ef4dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef4e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef4e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef4e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef4ea: ret 4 */ FN_RET(0x006ef4a4); r_esp += 8; return;
L_006ef4ed:; BB(0x006ef4ed);
    /* 006ef4ed: mov edx, ecx */ r_edx = r_ecx;
    /* 006ef4ef: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006ef4f2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006ef4f5: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006ef4f8: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ef4fc: mov esi, 6 */ r_esi = 0x6u;
    /* 006ef501: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006ef504: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006ef508: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 006ef50b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef50c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef50d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef50e: call 0x71829c */ r_esp -= 4; W32(r_esp, 0x6ef513u); f_0071829c();
    /* 006ef513: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef516: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006ef519: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef51c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef51e: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 006ef520: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef524: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef527: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef52a: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef52d: call dword ptr [ebx + 0x60] */ { u32 t = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, 0x6ef530u); call_ind(t); }
    /* 006ef530: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ef532: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef535: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006ef538: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ef53b: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ef53f: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006ef543: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef545: jne 0x6ef678 */ if (!fZ) goto L_006ef678;
L_006ef54b:; BB(0x006ef54b);
    /* 006ef54b: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006ef551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef553: je 0x6ef6e5 */ if (fZ) goto L_006ef6e5;
L_006ef559:; BB(0x006ef559);
    /* 006ef559: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006ef560: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef562: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ef567u); f_005caba4();
    /* 006ef567: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006ef56a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef56d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006ef570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef572: je 0x6ef666 */ if (fZ) goto L_006ef666;
L_006ef578:; BB(0x006ef578);
    /* 006ef578: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006ef57f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ef586: mov ecx, eax */ r_ecx = r_eax;
    /* 006ef588: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ef58b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef58e: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 006ef594: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 006ef597: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 006ef59d: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 006ef5a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef5a1: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006ef5a4: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 006ef5a7: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 006ef5aa: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6ef5afu); f_008193cc();
    /* 006ef5af: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ef5b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ef5b9: mov dword ptr [ecx], 0xb3e270 */ W32((u32)(r_ecx), 0xb3e270u);
    /* 006ef5bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ef5c1: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006ef5c4: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006ef5c7: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 006ef5ca: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006ef5cd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006ef5d0: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006ef5d3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006ef5d5:; BB(0x006ef5d5);
    /* 006ef5d5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006ef5d8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ef5da: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006ef5dd: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 006ef5e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006ef5e3: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006ef5e6: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 006ef5e9: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006ef5ec: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006ef5ef: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006ef5f2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ef5f4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ef5f6: mov eax, dword ptr [edi + 0x9cf9cc] */ r_eax = R32((u32)(r_edi+0x9cf9ccu));
    /* 006ef5fc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ef5fe: je 0x6ef60b */ if (fZ) goto L_006ef60b;
L_006ef600:; BB(0x006ef600);
    /* 006ef600: fld dword ptr [0x96de60] */ FPUSH(R_F32((u32)(0x96de60u)));
    /* 006ef606: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006ef608: fst dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0));
L_006ef60b:; BB(0x006ef60b);
    /* 006ef60b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ef60d: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef610: je 0x6ef74b */ if (fZ) goto L_006ef74b;
L_006ef616:; BB(0x006ef616);
    /* 006ef616: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006ef619: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef61b: push dword ptr [edx*8 + 0x9cf9c4] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef622: push dword ptr [edx*8 + 0x9cf9c0] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef629: push dword ptr [edx*8 + 0x9cf9c8] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef631: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6ef636u); f_0050ac1c();
    /* 006ef636: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef639: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ef63c: mov dword ptr [edx + ebx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*4+0x1cu), r_eax);
L_006ef640:; BB(0x006ef640);
    /* 006ef640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef642: je 0x6ef653 */ if (fZ) goto L_006ef653;
L_006ef644:; BB(0x006ef644);
    /* 006ef644: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 006ef647: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 006ef64b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef64c: mov ecx, eax */ r_ecx = r_eax;
    /* 006ef64e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6ef653u); f_00508f14();
L_006ef653:; BB(0x006ef653);
    /* 006ef653: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ef656: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ef659: jl 0x6ef5d5 */ if ((fS!=fO)) goto L_006ef5d5;
L_006ef65f:; BB(0x006ef65f);
    /* 006ef65f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006ef666:; BB(0x006ef666);
    /* 006ef666: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ef66d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef670: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006ef676: jmp 0x6ef6e5 */ goto L_006ef6e5;
L_006ef678:; BB(0x006ef678);
    /* 006ef678: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006ef67e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef680: je 0x6ef6e5 */ if (fZ) goto L_006ef6e5;
L_006ef682:; BB(0x006ef682);
    /* 006ef682: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ef685: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef687: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef68c: lea ebx, [eax + 0x300] */ r_ebx = (u32)(r_eax+0x300u);
    /* 006ef692: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef693: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6ef698u); f_0050b7a4();
    /* 006ef698: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef69d: je 0x6ef6ae */ if (fZ) goto L_006ef6ae;
L_006ef69f:; BB(0x006ef69f);
    /* 006ef69f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006ef6a2: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ef6a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6a7: mov ecx, eax */ r_ecx = r_eax;
    /* 006ef6a9: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6ef6aeu); f_00508f14();
L_006ef6ae:; BB(0x006ef6ae);
    /* 006ef6ae: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6b0: push 0x1f7 */ { u32 v = 0x1f7u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6b6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6ef6bbu); f_0050b7a4();
    /* 006ef6bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef6be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ef6c0: je 0x6ef6dc */ if (fZ) goto L_006ef6dc;
L_006ef6c2:; BB(0x006ef6c2);
    /* 006ef6c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006ef6c5: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ef6c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6ca: mov ecx, eax */ r_ecx = r_eax;
    /* 006ef6cc: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6ef6d1u); f_00508f14();
    /* 006ef6d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef6d4: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006ef6da: jmp 0x6ef6e5 */ goto L_006ef6e5;
L_006ef6dc:; BB(0x006ef6dc);
    /* 006ef6dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef6df: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
L_006ef6e5:; BB(0x006ef6e5);
    /* 006ef6e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef6e7: je 0x6ef732 */ if (fZ) goto L_006ef732;
L_006ef6e9:; BB(0x006ef6e9);
    /* 006ef6e9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006ef6f0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef6f2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ef6f7u); f_005caba4();
    /* 006ef6f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ef6f8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006ef6fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef6fd: je 0x6ef732 */ if (fZ) goto L_006ef732;
L_006ef6ff:; BB(0x006ef6ff);
    /* 006ef6ff: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006ef706: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006ef70d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef713: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006ef716: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 006ef71c: mov ecx, eax */ r_ecx = r_eax;
    /* 006ef71e: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef723: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef725: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef726: call 0x6eb8c8 */ r_esp -= 4; W32(r_esp, 0x6ef72bu); f_006eb8c8();
    /* 006ef72b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006ef732:; BB(0x006ef732);
    /* 006ef732: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ef735: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef738: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ef73b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef73e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef745: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef747: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef748: ret 4 */ FN_RET(0x006ef4a4); r_esp += 8; return;
L_006ef74b:; BB(0x006ef74b);
    /* 006ef74b: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006ef74e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef750: push dword ptr [edx*8 + 0x9cf9c4] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef757: push dword ptr [edx*8 + 0x9cf9c0] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef75e: push dword ptr [edx*8 + 0x9cf9c8] */ { u32 v = R32((u32)(r_edx*8+0x9cf9c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef766: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6ef76bu); f_0050ac1c();
    /* 006ef76b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ef76e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ef771: mov dword ptr [edx + ebx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*4+0x1cu), r_eax);
    /* 006ef775: jmp 0x6ef640 */ goto L_006ef640;
}

void f_006ef77c(void) /* sub_6EF77C */
{
    FN_ENTER(0x006ef77c);
    /* 006ef77c: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006ef77f: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006ef782: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 006ef785: cmp edx, 0xb4 */ {  u32 a = r_edx; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ef78b: jle 0x6ef79a */ if ((fZ||fS!=fO)) goto L_006ef79a;
L_006ef78d:; BB(0x006ef78d);
    /* 006ef78d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006ef791: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef796: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006ef79a:; BB(0x006ef79a);
    /* 006ef79a: ret  */ FN_RET(0x006ef77c); r_esp += 4; return;
}

void f_006ef79c(void) /* sub_6EF79C */
{
    FN_ENTER(0x006ef79c);
    /* 006ef79c: mov dword ptr [0xa96884], 0x3f800000 */ W32((u32)(0xa96884u), 0x3f800000u);
    /* 006ef7a6: mov dword ptr [0xa96888], 0x41000000 */ W32((u32)(0xa96888u), 0x41000000u);
    /* 006ef7b0: mov dword ptr [0xa9688c], 0x3fc00000 */ W32((u32)(0xa9688cu), 0x3fc00000u);
    /* 006ef7ba: ret  */ FN_RET(0x006ef79c); r_esp += 4; return;
}

void f_006ef7bc(void) /* sub_6EF7BC */
{
    FN_ENTER(0x006ef7bc);
    /* 006ef7bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ef7bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ef7c1: call 0x6ef7e0 */ r_esp -= 4; W32(r_esp, 0x6ef7c6u); f_006ef7e0();
    /* 006ef7c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ef7ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef7cc: jne 0x6ef7d2 */ if (!fZ) goto L_006ef7d2;
L_006ef7ce:; BB(0x006ef7ce);
    /* 006ef7ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ef7cf: ret 4 */ FN_RET(0x006ef7bc); r_esp += 8; return;
L_006ef7d2:; BB(0x006ef7d2);
    /* 006ef7d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ef7d8u); f_005c2f74();
    /* 006ef7d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ef7d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ef7da: ret 4 */ FN_RET(0x006ef7bc); r_esp += 8; return;
}

void f_006ef7e0(void) /* sub_6EF7E0 */
{
    FN_ENTER(0x006ef7e0);
    /* 006ef7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef7e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7e5: push 0x8ef928 */ { u32 v = 0x8ef928u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef7f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef7f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef7fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef7fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ef801: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ef804: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ef807: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ef80a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef80d: mov dword ptr [ecx], 0xb3e370 */ W32((u32)(r_ecx), 0xb3e370u);
    /* 006ef813: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ef81a: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6ef81fu); f_006de56c();
    /* 006ef81f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef822: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef829: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef82b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef82c: ret  */ FN_RET(0x006ef7e0); r_esp += 4; return;
}

void f_006ef830(void) /* sub_6EF830 */
{
    FN_ENTER(0x006ef830);
    /* 006ef830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef831: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ef833: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ef835: call 0x6ef854 */ r_esp -= 4; W32(r_esp, 0x6ef83au); f_006ef854();
    /* 006ef83a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ef83e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef840: jne 0x6ef846 */ if (!fZ) goto L_006ef846;
L_006ef842:; BB(0x006ef842);
    /* 006ef842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ef843: ret 4 */ FN_RET(0x006ef830); r_esp += 8; return;
L_006ef846:; BB(0x006ef846);
    /* 006ef846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef847: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ef84cu); f_005c2f74();
    /* 006ef84c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ef84d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ef84e: ret 4 */ FN_RET(0x006ef830); r_esp += 8; return;
}

void f_006ef854(void) /* sub_6EF854 */
{
    FN_ENTER(0x006ef854);
    /* 006ef854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef855: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef857: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef859: push 0x8ef944 */ { u32 v = 0x8ef944u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef85e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef865: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef86c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef86f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef872: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ef875: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ef878: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ef87b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ef87e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef881: mov dword ptr [ecx], 0xb3e390 */ W32((u32)(r_ecx), 0xb3e390u);
    /* 006ef887: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ef88e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ef893u); f_008171e8();
    /* 006ef893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef89d: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef89f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef8a0: ret  */ FN_RET(0x006ef854); r_esp += 4; return;
}

void f_006ef8a4(void) /* sub_6EF8A4 */
{
    FN_ENTER(0x006ef8a4);
    /* 006ef8a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef8a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef8a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef8a9: push 0x8ef96c */ { u32 v = 0x8ef96cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef8ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef8b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef8bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef8bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef8c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ef8c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ef8c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ef8cb: push 0x148 */ { u32 v = 0x148u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef8d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ef8d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ef8dcu); f_005caba4();
    /* 006ef8dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ef8dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ef8e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ef8e2: je 0x6ef90d */ if (fZ) goto L_006ef90d;
L_006ef8e4:; BB(0x006ef8e4);
    /* 006ef8e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ef8eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ef8f2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef8f5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef8f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef8fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ef8fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef901: call 0x6ef91c */ r_esp -= 4; W32(r_esp, 0x6ef906u); f_006ef91c();
    /* 006ef906: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ef90d:; BB(0x006ef90d);
    /* 006ef90d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef910: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef917: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef91a: ret  */ FN_RET(0x006ef8a4); r_esp += 4; return;
}

void f_006ef91c(void) /* sub_6EF91C */
{
    FN_ENTER(0x006ef91c);
    /* 006ef91c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ef91d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ef91f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ef921: push 0x8ef988 */ { u32 v = 0x8ef988u; r_esp -= 4; W32(r_esp, v); }
    /* 006ef926: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ef92c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ef92d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ef934: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ef937: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ef93a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ef93d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ef940: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ef943: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ef946: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006ef949: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006ef94c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ef94d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef950: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ef953: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ef956: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006ef959: call 0x6de7fc */ r_esp -= 4; W32(r_esp, 0x6ef95eu); f_006de7fc();
    /* 006ef95e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ef965: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ef968: mov dword ptr [edi], 0xb3e370 */ W32((u32)(r_edi), 0xb3e370u);
    /* 006ef96e: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 006ef974: mov esi, 0xb */ r_esi = 0xbu;
    /* 006ef979: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006ef97b:; BB(0x006ef97b);
    /* 006ef97b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ef980: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006ef983: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ef985: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006ef989: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006ef98c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ef98f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006ef992: jne 0x6ef97b */ if (!fZ) goto L_006ef97b;
L_006ef994:; BB(0x006ef994);
    /* 006ef994: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 006ef99e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ef9a1: mov eax, dword ptr [0x9cf9f0] */ r_eax = R32((u32)(0x9cf9f0u));
    /* 006ef9a6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ef9a9: mov edx, dword ptr [0x9cf6ac] */ r_edx = R32((u32)(0x9cf6acu));
    /* 006ef9af: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 006ef9b5: mov ebx, dword ptr [0x9cf6b0] */ r_ebx = R32((u32)(0x9cf6b0u));
    /* 006ef9bb: mov dword ptr [ecx + 0x8c], ebx */ W32((u32)(r_ecx+0x8cu), r_ebx);
    /* 006ef9c1: lea edx, [ecx + 0x88] */ r_edx = (u32)(r_ecx+0x88u);
    /* 006ef9c7: mov esi, dword ptr [0x9cf6b4] */ r_esi = R32((u32)(0x9cf6b4u));
    /* 006ef9cd: mov dword ptr [ecx + 0x90], esi */ W32((u32)(r_ecx+0x90u), r_esi);
    /* 006ef9d3: mov edi, dword ptr [0x9cf6b8] */ r_edi = R32((u32)(0x9cf6b8u));
    /* 006ef9d9: mov dword ptr [ecx + 0x94], edi */ W32((u32)(r_ecx+0x94u), r_edi);
    /* 006ef9df: mov eax, dword ptr [0x9cf6bc] */ r_eax = R32((u32)(0x9cf6bcu));
    /* 006ef9e4: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 006ef9ea: mov eax, dword ptr [0x9cf6c0] */ r_eax = R32((u32)(0x9cf6c0u));
    /* 006ef9ef: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 006ef9f5: mov eax, dword ptr [0x9cf6c4] */ r_eax = R32((u32)(0x9cf6c4u));
    /* 006ef9fa: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 006efa00: mov eax, dword ptr [0x9cf6c8] */ r_eax = R32((u32)(0x9cf6c8u));
    /* 006efa05: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 006efa0b: mov eax, dword ptr [0x9cf6cc] */ r_eax = R32((u32)(0x9cf6ccu));
    /* 006efa10: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 006efa16: mov eax, dword ptr [0x9cf6d0] */ r_eax = R32((u32)(0x9cf6d0u));
    /* 006efa1b: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 006efa21: mov eax, dword ptr [0x9cf6d4] */ r_eax = R32((u32)(0x9cf6d4u));
    /* 006efa26: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006efa2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006efa2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efa30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efa31: call 0x6de5d4 */ r_esp -= 4; W32(r_esp, 0x6efa36u); f_006de5d4();
    /* 006efa36: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006efa39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006efa3c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006efa3e: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006efa41: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006efa44: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006efa47: add edx, 0xec */ {  u32 a = r_edx; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006efa4d: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006efa4f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006efa52: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006efa55: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 006efa58: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 006efa5b: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006efa5e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006efa61: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006efa64: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006efa67: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006efa6a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006efa6d: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006efa70: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006efa73: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006efa76: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006efa79: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006efa7c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006efa7f: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006efa82: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006efa85: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006efa88: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006efa8b: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006efa8e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006efa91: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006efa94: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006efa97: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006efa9a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006efa9d: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006efaa0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006efaa3: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006efaa6: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006efaa9: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006efaac: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006efaaf: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006efab2: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006efab5: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006efab8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006efabb: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006efabe: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006efac1: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006efac4: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006efac7: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006efaca: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006efacd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006efad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006efad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efad5: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 006efada: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6efadfu); f_00814298();
    /* 006efadf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006efae2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006efae5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006efae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efaea: je 0x6efaf7 */ if (fZ) goto L_006efaf7;
L_006efaec:; BB(0x006efaec);
    /* 006efaec: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006efaf0: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_006efaf7:; BB(0x006efaf7);
    /* 006efaf7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006efafa: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006efafd: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006efb00: mov eax, edx */ r_eax = r_edx;
    /* 006efb02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006efb05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006efb0c: mov esp, ebp */ r_esp = r_ebp;
    /* 006efb0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efb0f: ret 0x10 */ FN_RET(0x006ef91c); r_esp += 20; return;
}

void f_006efb14(void) /* sub_6EFB14 */
{
    FN_ENTER(0x006efb14);
    /* 006efb14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006efb15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efb16: mov edi, ecx */ r_edi = r_ecx;
    /* 006efb18: movzx eax, word ptr [edi + 0xb4] */ r_eax = (u32)R16((u32)(r_edi+0xb4u));
    /* 006efb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efb20: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6efb25u); f_007b4d18();
    /* 006efb25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006efb26: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006efb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efb2b: je 0x6efb86 */ if (fZ) goto L_006efb86;
L_006efb2d:; BB(0x006efb2d);
    /* 006efb2d: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 006efb33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efb35: jne 0x6efb47 */ if (!fZ) goto L_006efb47;
L_006efb37:; BB(0x006efb37);
    /* 006efb37: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006efb3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efb40: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006efb44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efb45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006efb46: ret  */ FN_RET(0x006efb14); r_esp += 4; return;
L_006efb47:; BB(0x006efb47);
    /* 006efb47: movzx eax, word ptr [edi + 0xf0] */ r_eax = (u32)R16((u32)(r_edi+0xf0u));
    /* 006efb4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efb4f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6efb54u); f_007b4d18();
    /* 006efb54: mov ebp, eax */ r_ebp = r_eax;
    /* 006efb56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efb57: call 0x7b4420 */ r_esp -= 4; W32(r_esp, 0x6efb5cu); f_007b4420();
    /* 006efb5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006efb5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efb61: jne 0x6efb76 */ if (!fZ) goto L_006efb76;
L_006efb63:; BB(0x006efb63);
    /* 006efb63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efb64: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6efb69u); f_006ea71c();
    /* 006efb69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006efb6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efb6c: je 0x6efb76 */ if (fZ) goto L_006efb76;
L_006efb6e:; BB(0x006efb6e);
    /* 006efb6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efb6f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006efb71: mov ecx, edi */ r_ecx = r_edi;
    /* 006efb73: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6efb76u); call_ind(t); }
L_006efb76:; BB(0x006efb76);
    /* 006efb76: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006efb7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efb7f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006efb83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efb84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006efb85: ret  */ FN_RET(0x006efb14); r_esp += 4; return;
L_006efb86:; BB(0x006efb86);
    /* 006efb86: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006efb8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efb8f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006efb93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efb94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006efb95: ret  */ FN_RET(0x006efb14); r_esp += 4; return;
}

void f_006efb98(void) /* sub_6EFB98 */
{
    FN_ENTER(0x006efb98);
    /* 006efb98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efb99: mov ebp, esp */ r_ebp = r_esp;
    /* 006efb9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006efb9d: push 0x8ef9b0 */ { u32 v = 0x8ef9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006efba2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006efba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efba9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006efbb0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006efbb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006efbb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006efbb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006efbbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006efbbf: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006efbc5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006efbc8: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 006efbca: mov dword ptr [ebp - 0x2c], 8 */ W32((u32)(r_ebp+0xffffffd4u), 0x8u);
    /* 006efbd1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006efbd6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006efbd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efbda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efbdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006efbdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efbde: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006efbe0: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006efbe3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006efbe5: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x6efbe8u); call_ind(t); }
    /* 006efbe8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006efbea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006efbf1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006efbf3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6efbf8u); f_005caba4();
    /* 006efbf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006efbf9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006efbfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efbfe: je 0x6efc31 */ if (fZ) goto L_006efc31;
L_006efc00:; BB(0x006efc00);
    /* 006efc00: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006efc07: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006efc0e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006efc14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006efc17: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 006efc1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006efc1d: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 006efc22: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006efc24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efc25: call 0x6eb8c8 */ r_esp -= 4; W32(r_esp, 0x6efc2au); f_006eb8c8();
    /* 006efc2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006efc31:; BB(0x006efc31);
    /* 006efc31: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006efc34: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006efc37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006efc3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006efc41: mov esp, ebp */ r_esp = r_ebp;
    /* 006efc43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efc44: ret 4 */ FN_RET(0x006efb98); r_esp += 8; return;
}

void f_006efc48(void) /* sub_6EFC48 */
{
    FN_ENTER(0x006efc48);
    /* 006efc48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efc49: mov ebp, esp */ r_ebp = r_esp;
    /* 006efc4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006efc4d: push 0x8ef9cc */ { u32 v = 0x8ef9ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006efc52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006efc58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efc59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006efc60: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006efc63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006efc66: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006efc69: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006efc6c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006efc6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006efc72: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006efc75: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006efc78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006efc7b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6efc80u); f_008193cc();
    /* 006efc80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006efc87: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006efc8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006efc8d: mov dword ptr [ebx], 0xb3e390 */ W32((u32)(r_ebx), 0xb3e390u);
    /* 006efc93: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 006efc9a: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006efca0: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 006efca3: fld dword ptr [ecx + 0x304] */ FPUSH(R_F32((u32)(r_ecx+0x304u)));
    /* 006efca9: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006efcaf: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 006efcb2: mov edx, dword ptr [ecx + 0x308] */ r_edx = R32((u32)(r_ecx+0x308u));
    /* 006efcb8: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 006efcbb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006efcbd:; BB(0x006efcbd);
    /* 006efcbd: fadd dword ptr [0x96de80] */ ST(0) = ST(0) + R_F32((u32)(0x96de80u));
    /* 006efcc3: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 006efcc6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006efcc9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006efccc: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 006efccf: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006efcd2: push dword ptr [eax*8 + 0x9cf9f8] */ { u32 v = R32((u32)(r_eax*8+0x9cf9f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006efcd9: push dword ptr [eax*8 + 0x9cf9f4] */ { u32 v = R32((u32)(r_eax*8+0x9cf9f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006efce0: push dword ptr [eax*8 + 0x9cf9fc] */ { u32 v = R32((u32)(r_eax*8+0x9cf9fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006efce7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efce8: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6efcedu); f_0050a984();
    /* 006efced: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006efcf0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006efcf3: mov dword ptr [edx + ebx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*4+0x1cu), r_eax);
L_006efcf7:; BB(0x006efcf7);
    /* 006efcf7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006efcfa: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006efcfd: jge 0x6efd30 */ if ((fS==fO)) goto L_006efd30;
L_006efcff:; BB(0x006efcff);
    /* 006efcff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efd01: je 0x6efd4b */ if (fZ) goto L_006efd4b;
L_006efd03:; BB(0x006efd03);
    /* 006efd03: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006efd06: push dword ptr [ecx*8 + 0x9cf9f8] */ { u32 v = R32((u32)(r_ecx*8+0x9cf9f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006efd0d: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006efd10: push dword ptr [ecx*8 + 0x9cf9f4] */ { u32 v = R32((u32)(r_ecx*8+0x9cf9f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006efd17: push dword ptr [ecx*8 + 0x9cf9fc] */ { u32 v = R32((u32)(r_ecx*8+0x9cf9fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006efd1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006efd1f: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6efd24u); f_0050a984();
    /* 006efd24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006efd27: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006efd2a: mov dword ptr [edx + ebx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*4+0x1cu), r_eax);
    /* 006efd2e: jmp 0x6efcf7 */ goto L_006efcf7;
L_006efd30:; BB(0x006efd30);
    /* 006efd30: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006efd33: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006efd36: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006efd39: mov eax, edx */ r_eax = r_edx;
    /* 006efd3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006efd3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006efd45: mov esp, ebp */ r_esp = r_ebp;
    /* 006efd47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efd48: ret 8 */ FN_RET(0x006efc48); r_esp += 12; return;
L_006efd4b:; BB(0x006efd4b);
    /* 006efd4b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006efd4e: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 006efd51: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 006efd54: jmp 0x6efcbd */ goto L_006efcbd;
}

void f_006efd5c(void) /* sub_6EFD5C */
{
    FN_ENTER(0x006efd5c);
    /* 006efd5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006efd5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006efd5f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 006efd62: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006efd65: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 006efd68: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efd6b: je 0x6efd83 */ if (fZ) goto L_006efd83;
L_006efd6d:; BB(0x006efd6d);
    /* 006efd6d: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006efd72: jle 0x6efd81 */ if ((fZ||fS!=fO)) goto L_006efd81;
L_006efd74:; BB(0x006efd74);
    /* 006efd74: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006efd78: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efd7d: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006efd81:; BB(0x006efd81);
    /* 006efd81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006efd82: ret  */ FN_RET(0x006efd5c); r_esp += 4; return;
L_006efd83:; BB(0x006efd83);
    /* 006efd83: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 006efd85: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 006efd88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efd89: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6efd8eu); f_0050b510();
    /* 006efd8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006efd91: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 006efd94: jmp 0x6efd6d */ goto L_006efd6d;
}

void f_006efd98(void) /* sub_6EFD98 */
{
    FN_ENTER(0x006efd98);
    /* 006efd98: mov dword ptr [0xa96894], 0x3f800000 */ W32((u32)(0xa96894u), 0x3f800000u);
    /* 006efda2: mov dword ptr [0xa96898], 0x41000000 */ W32((u32)(0xa96898u), 0x41000000u);
    /* 006efdac: mov dword ptr [0xa9689c], 0x3fc00000 */ W32((u32)(0xa9689cu), 0x3fc00000u);
    /* 006efdb6: ret  */ FN_RET(0x006efd98); r_esp += 4; return;
}

void f_006efdb8(void) /* sub_6EFDB8 */
{
    FN_ENTER(0x006efdb8);
    /* 006efdb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006efdb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006efdbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006efdbd: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6efdc2u); f_006efddc();
    /* 006efdc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006efdc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006efdc8: jne 0x6efdce */ if (!fZ) goto L_006efdce;
L_006efdca:; BB(0x006efdca);
    /* 006efdca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006efdcb: ret 4 */ FN_RET(0x006efdb8); r_esp += 8; return;
L_006efdce:; BB(0x006efdce);
    /* 006efdce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006efdcf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6efdd4u); f_005c2f74();
    /* 006efdd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006efdd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006efdd6: ret 4 */ FN_RET(0x006efdb8); r_esp += 8; return;
}

void f_006efddc(void) /* sub_6EFDDC */
{
    FN_ENTER(0x006efddc);
    /* 006efddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efddd: mov ebp, esp */ r_ebp = r_esp;
    /* 006efddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006efde1: push 0x8ef9e8 */ { u32 v = 0x8ef9e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006efde6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006efdec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efded: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006efdf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006efdf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006efdfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006efdfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006efe00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006efe03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006efe06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006efe0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006efe10: mov ecx, dword ptr [eax + 0x128] */ r_ecx = R32((u32)(r_eax+0x128u));
    /* 006efe16: mov dword ptr [eax], 0xb3e428 */ W32((u32)(r_eax), 0xb3e428u);
    /* 006efe1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006efe1e: je 0x6efe32 */ if (fZ) goto L_006efe32;
L_006efe20:; BB(0x006efe20);
    /* 006efe20: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6efe25u); f_007b9c8c();
    /* 006efe25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006efe28: mov dword ptr [eax + 0x128], 0 */ W32((u32)(r_eax+0x128u), 0x0u);
L_006efe32:; BB(0x006efe32);
    /* 006efe32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006efe39: mov ecx, eax */ r_ecx = r_eax;
    /* 006efe3b: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x6efe40u); f_005017b0();
    /* 006efe40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006efe43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006efe4a: mov esp, ebp */ r_esp = r_ebp;
    /* 006efe4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006efe4d: ret  */ FN_RET(0x006efddc); r_esp += 4; return;
}

void f_006efe50(void) /* sub_6EFE50 */
{
    FN_ENTER(0x006efe50);
    /* 006efe50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006efe51: mov ebp, esp */ r_ebp = r_esp;
    /* 006efe53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006efe55: push 0x8efa1e */ { u32 v = 0x8efa1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006efe5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006efe60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006efe61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006efe68: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006efe6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006efe6e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006efe71: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006efe74: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006efe77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006efe7a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006efe7d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006efe80: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006efe83: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006efe86: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006efe89: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006efe8c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006efe8f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006efe92: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x6efe97u); f_00501860();
    /* 006efe97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006efe9e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006efea1: mov dword ptr [ecx], 0xb3e428 */ W32((u32)(r_ecx), 0xb3e428u);
    /* 006efea7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006efea9: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 006efeaf: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 006efeb4: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 006efeba: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 006efec0: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 006efec6: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 006efecc: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 006efed2: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 006efed8: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 006efede: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 006efee4: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 006efeea: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 006efef0: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 006efef6: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 006efefc: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 006eff02: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 006eff08: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 006eff0e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eff11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006eff14: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006eff17: mov word ptr [eax + 0xc8], bx */ W16((u32)(r_eax+0xc8u), (u16)r_ebx);
    /* 006eff1e: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 006eff20: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 006eff23: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 006eff26: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 006eff29: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 006eff2c: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006eff2f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eff32: mov dword ptr [eax + 0x3c], 0x3f800000 */ W32((u32)(r_eax+0x3cu), 0x3f800000u);
    /* 006eff39: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006eff3c: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006eff41: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eff44: mov dword ptr [eax + 0x40], 0x3f800000 */ W32((u32)(r_eax+0x40u), 0x3f800000u);
    /* 006eff4b: mov dword ptr [eax + 0x44], 0x3f800000 */ W32((u32)(r_eax+0x44u), 0x3f800000u);
    /* 006eff52: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 006eff59: jl 0x6eff5d */ if ((fS!=fO)) goto L_006eff5d;
L_006eff5b:; BB(0x006eff5b);
    /* 006eff5b: mov ecx, edx */ r_ecx = r_edx;
L_006eff5d:; BB(0x006eff5d);
    /* 006eff5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eff5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006eff61: jg 0x6eff65 */ if ((!fZ&&fS==fO)) goto L_006eff65;
L_006eff63:; BB(0x006eff63);
    /* 006eff63: mov ecx, edx */ r_ecx = r_edx;
L_006eff65:; BB(0x006eff65);
    /* 006eff65: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 006eff68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eff69: mov word ptr [eax + 0xc4], dx */ W16((u32)(r_eax+0xc4u), (u16)r_edx);
    /* 006eff70: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6eff75u); f_006e1cec();
    /* 006eff75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eff76: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006eff79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006eff7c: mov dword ptr [edx + 0x2c], 0x3f800000 */ W32((u32)(r_edx+0x2cu), 0x3f800000u);
    /* 006eff83: mov word ptr [edx + 0xc6], ax */ W16((u32)(r_edx+0xc6u), (u16)r_eax);
    /* 006eff8a: mov dword ptr [edx + 0x30], 0x3f800000 */ W32((u32)(r_edx+0x30u), 0x3f800000u);
    /* 006eff91: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 006eff94: mov dword ptr [edx + 0x34], 0x3f800000 */ W32((u32)(r_edx+0x34u), 0x3f800000u);
    /* 006eff9b: mov dword ptr [edx + 0x38], 0x3f800000 */ W32((u32)(r_edx+0x38u), 0x3f800000u);
    /* 006effa2: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 006effa9: mov dword ptr [edx + 0x12c], 0x40800000 */ W32((u32)(r_edx+0x12cu), 0x40800000u);
    /* 006effb3: mov dword ptr [edx + 0x64], 0x40400000 */ W32((u32)(r_edx+0x64u), 0x40400000u);
    /* 006effba: mov dword ptr [edx + 0x70], 0x41f00000 */ W32((u32)(r_edx+0x70u), 0x41f00000u);
    /* 006effc1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6effc6u); f_0082dcbc();
    /* 006effc6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006effc9: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006effcc: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 006effcf: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 006effd6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6effdbu); f_0082ddd8();
    /* 006effdb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006effde: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 006effe1: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006effe4: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6effe9u); f_0083173c();
    /* 006effe9: fcomp dword ptr [0x96dee0] */ fx_compare(ST(0), R_F32((u32)(0x96dee0u))); FPOP();
    /* 006effef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006efff1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006efff2: je 0x6f0001 */ if (fZ) goto L_006f0001;
L_006efff4:; BB(0x006efff4);
    /* 006efff4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006efff7: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006efffa: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6effffu); f_0082df08();
    /* 006effff: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f0001:; BB(0x006f0001);
    /* 006f0001: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f0004: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 006f0007: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 006f000a: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f000d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f000e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f000f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0010: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x6f0015u); f_007a8d98();
    /* 006f0015: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0018: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f001b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006f001e: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
    /* 006f0028: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 006f0032: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
    /* 006f003c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f0040: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0043: jge 0x6f0059 */ if ((fS==fO)) goto L_006f0059;
L_006f0045:; BB(0x006f0045);
    /* 006f0045: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006efe50); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

