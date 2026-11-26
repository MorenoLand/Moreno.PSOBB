#include "protos.h"

void f_0073d0b0(void) /* sub_73D0B0 */
{
    FN_ENTER(0x0073d0b0);
    /* 0073d0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d0b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073d0b3: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d0b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d0b8: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d0bc: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x73d0c1u); f_007354fc();
    /* 0073d0c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d0c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d0c6: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d0c8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d0cc: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0073d0cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d0d1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73d0d6u); f_00735c90();
    /* 0073d0d6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d0da: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073d0dd: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d0e4: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d0e9: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d0f0: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0073d0f3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d0fa: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d0ff: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d106: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0073d109: call 0x736390 */ r_esp -= 4; W32(r_esp, 0x73d10eu); f_00736390();
    /* 0073d10e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d10f: ret 0xc */ FN_RET(0x0073d0b0); r_esp += 16; return;
}

void f_0073d114(void) /* sub_73D114 */
{
    FN_ENTER(0x0073d114);
    /* 0073d114: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0073d117: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d119: je 0x73d12f */ if (fZ) goto L_0073d12f;
L_0073d11b:; BB(0x0073d11b);
    /* 0073d11b: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 0073d122: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d124: je 0x73d12c */ if (fZ) goto L_0073d12c;
L_0073d126:; BB(0x0073d126);
    /* 0073d126: mov eax, 1 */ r_eax = 0x1u;
    /* 0073d12b: ret  */ FN_RET(0x0073d114); r_esp += 4; return;
L_0073d12c:; BB(0x0073d12c);
    /* 0073d12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d12e: ret  */ FN_RET(0x0073d114); r_esp += 4; return;
L_0073d12f:; BB(0x0073d12f);
    /* 0073d12f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d131: ret  */ FN_RET(0x0073d114); r_esp += 4; return;
}

void f_0073d134(void) /* sub_73D134 */
{
    FN_ENTER(0x0073d134);
    /* 0073d134: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0073d137: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d139: je 0x73d141 */ if (fZ) goto L_0073d141;
L_0073d13b:; BB(0x0073d13b);
    /* 0073d13b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73d140u); f_007365f4();
    /* 0073d140: ret  */ FN_RET(0x0073d134); r_esp += 4; return;
L_0073d141:; BB(0x0073d141);
    /* 0073d141: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0073d146: ret  */ FN_RET(0x0073d134); r_esp += 4; return;
}

void f_0073d148(void) /* sub_73D148 */
{
    FN_ENTER(0x0073d148);
    /* 0073d148: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0073d14b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d14d: je 0x73d15a */ if (fZ) goto L_0073d15a;
L_0073d14f:; BB(0x0073d14f);
    /* 0073d14f: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0073d154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d155: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x73d15au); f_00736510();
L_0073d15a:; BB(0x0073d15a);
    /* 0073d15a: ret 4 */ FN_RET(0x0073d148); r_esp += 8; return;
}

void f_0073d160(void) /* sub_73D160 */
{
    FN_ENTER(0x0073d160);
    /* 0073d160: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073d164: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d169: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0073d16d: ret  */ FN_RET(0x0073d160); r_esp += 4; return;
}

void f_0073d170(void) /* sub_73D170 */
{
    FN_ENTER(0x0073d170);
    /* 0073d170: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0073d173: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d175: je 0x73d18b */ if (fZ) goto L_0073d18b;
L_0073d177:; BB(0x0073d177);
    /* 0073d177: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d17e: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d183: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d18a: ret  */ FN_RET(0x0073d170); r_esp += 4; return;
L_0073d18b:; BB(0x0073d18b);
    /* 0073d18b: ret  */ FN_RET(0x0073d170); r_esp += 4; return;
}

void f_0073d18c(void) /* sub_73D18C */
{
    FN_ENTER(0x0073d18c);
    /* 0073d18c: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0073d18f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d191: je 0x73d1a7 */ if (fZ) goto L_0073d1a7;
L_0073d193:; BB(0x0073d193);
    /* 0073d193: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d19a: and eax, 0xffbf */ {  u32 a = r_eax; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d19f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d1a6: ret  */ FN_RET(0x0073d18c); r_esp += 4; return;
L_0073d1a7:; BB(0x0073d1a7);
    /* 0073d1a7: ret  */ FN_RET(0x0073d18c); r_esp += 4; return;
}

void f_0073d1a8(void) /* sub_73D1A8 */
{
    FN_ENTER(0x0073d1a8);
    /* 0073d1a8: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0073d1ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d1ad: je 0x73d1c3 */ if (fZ) goto L_0073d1c3;
L_0073d1af:; BB(0x0073d1af);
    /* 0073d1af: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d1b6: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d1bb: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0073d1c2: ret  */ FN_RET(0x0073d1a8); r_esp += 4; return;
L_0073d1c3:; BB(0x0073d1c3);
    /* 0073d1c3: ret  */ FN_RET(0x0073d1a8); r_esp += 4; return;
}

void f_0073d1c4(void) /* sub_73D1C4 */
{
    FN_ENTER(0x0073d1c4);
    /* 0073d1c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073d1c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d1c8: mov esi, ecx */ r_esi = r_ecx;
    /* 0073d1ca: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0073d1cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d1cf: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0073d1d3: je 0x73d1e5 */ if (fZ) goto L_0073d1e5;
L_0073d1d5:; BB(0x0073d1d5);
    /* 0073d1d5: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0073d1d8: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 0073d1da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073d1dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073d1dd: je 0x73d223 */ if (fZ) goto L_0073d223;
L_0073d1df:; BB(0x0073d1df);
    /* 0073d1df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d1e0: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x73d1e5u); f_00712be4();
L_0073d1e5:; BB(0x0073d1e5);
    /* 0073d1e5: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0073d1e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d1ea: je 0x73d20e */ if (fZ) goto L_0073d20e;
L_0073d1ec:; BB(0x0073d1ec);
    /* 0073d1ec: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073d1ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d1f0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073d1f2: call 0x73cf10 */ r_esp -= 4; W32(r_esp, 0x73d1f7u); f_0073cf10();
    /* 0073d1f7: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0073d1fa: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0073d1fd: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0073d200: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073d202: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073d203: je 0x73d215 */ if (fZ) goto L_0073d215;
L_0073d205:; BB(0x0073d205);
    /* 0073d205: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073d208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d209: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x73d20eu); f_00712be4();
L_0073d20e:; BB(0x0073d20e);
    /* 0073d20e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073d211: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073d212: ret 4 */ FN_RET(0x0073d1c4); r_esp += 8; return;
L_0073d215:; BB(0x0073d215);
    /* 0073d215: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0073d218: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0073d21c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073d21e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073d21f: jne 0x73d205 */ if (!fZ) goto L_0073d205;
L_0073d221:; BB(0x0073d221);
    /* 0073d221: jmp 0x73d20e */ goto L_0073d20e;
L_0073d223:; BB(0x0073d223);
    /* 0073d223: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0073d226: fcomp dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); FPOP();
    /* 0073d229: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073d22b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073d22c: jne 0x73d1df */ if (!fZ) goto L_0073d1df;
L_0073d22e:; BB(0x0073d22e);
    /* 0073d22e: jmp 0x73d1e5 */ goto L_0073d1e5;
}

void f_0073d230(void) /* sub_73D230 */
{
    FN_ENTER(0x0073d230);
    /* 0073d230: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073d231: mov edi, ecx */ r_edi = r_ecx;
    /* 0073d233: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0073d236: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d238: je 0x73d23f */ if (fZ) goto L_0073d23f;
L_0073d23a:; BB(0x0073d23a);
    /* 0073d23a: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x73d23fu); f_00712c00();
L_0073d23f:; BB(0x0073d23f);
    /* 0073d23f: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0073d242: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d244: je 0x73d24b */ if (fZ) goto L_0073d24b;
L_0073d246:; BB(0x0073d246);
    /* 0073d246: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x73d24bu); f_00712c00();
L_0073d24b:; BB(0x0073d24b);
    /* 0073d24b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073d24c: ret  */ FN_RET(0x0073d230); r_esp += 4; return;
}

void f_0073d250(void) /* sub_73D250 */
{
    FN_ENTER(0x0073d250);
    /* 0073d250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d251: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073d253: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073d255: call 0x73d274 */ r_esp -= 4; W32(r_esp, 0x73d25au); f_0073d274();
    /* 0073d25a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073d25e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d260: jne 0x73d266 */ if (!fZ) goto L_0073d266;
L_0073d262:; BB(0x0073d262);
    /* 0073d262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d263: ret 4 */ FN_RET(0x0073d250); r_esp += 8; return;
L_0073d266:; BB(0x0073d266);
    /* 0073d266: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d267: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73d26cu); f_005c2f74();
    /* 0073d26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d26d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d26e: ret 4 */ FN_RET(0x0073d250); r_esp += 8; return;
}

void f_0073d274(void) /* sub_73D274 */
{
    FN_ENTER(0x0073d274);
    /* 0073d274: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d275: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d277: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d279: push 0x8f1eb4 */ { u32 v = 0x8f1eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d27e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d285: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d28c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d28f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d292: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073d295: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073d298: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073d29b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073d29e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d2a1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d2a4: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0073d2a7: mov dword ptr [eax], 0xb41100 */ W32((u32)(r_eax), 0xb41100u);
    /* 0073d2ad: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073d2b1: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073d2b7: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0073d2bb: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 0073d2be: movzx esi, word ptr [edi + 8] */ r_esi = (u32)R16((u32)(r_edi+0x8u));
    /* 0073d2c2: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0073d2c8: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0073d2cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073d2d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d2d6: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x73d2dbu); f_00710c28();
    /* 0073d2db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073d2de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073d2e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d2e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d2e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d2ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d2f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d2f1: ret  */ FN_RET(0x0073d274); r_esp += 4; return;
}

void f_0073d2f4(void) /* sub_73D2F4 */
{
    FN_ENTER(0x0073d2f4);
    /* 0073d2f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d2f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d2f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d2f9: push 0x8f1edc */ { u32 v = 0x8f1edcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d2fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d30c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d30f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d312: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073d315: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073d318: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073d31b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0073d31e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0073d325: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073d327: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073d329: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d32b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0073d332: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073d335: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0073d338: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0073d33f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0073d346: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0073d34d: mov dword ptr [ebp - 0x38], 0x47438200 */ W32((u32)(r_ebp+0xffffffc8u), 0x47438200u);
    /* 0073d354: mov dword ptr [ebp - 0x30], 0x22 */ W32((u32)(r_ebp+0xffffffd0u), 0x22u);
    /* 0073d35b: je 0x73d3b1 */ if (fZ) goto L_0073d3b1;
L_0073d35d:; BB(0x0073d35d);
    /* 0073d35d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d360: jne 0x73d387 */ if (!fZ) goto L_0073d387;
L_0073d362:; BB(0x0073d362);
    /* 0073d362: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d366: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d368: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d36a: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d36fu); f_00727bbc();
    /* 0073d36f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073d372: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d376: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d378: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d37a: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d37fu); f_00727bbc();
    /* 0073d37f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073d382: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d385: jmp 0x73d3d4 */ goto L_0073d3d4;
L_0073d387:; BB(0x0073d387);
    /* 0073d387: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d38a: jne 0x73d3d4 */ if (!fZ) goto L_0073d3d4;
L_0073d38c:; BB(0x0073d38c);
    /* 0073d38c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d38f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d392: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d394: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d399u); f_00727bbc();
    /* 0073d399: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073d39c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d39f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3a4: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d3a9u); f_00727bbc();
    /* 0073d3a9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073d3ac: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073d3af: jmp 0x73d3d4 */ goto L_0073d3d4;
L_0073d3b1:; BB(0x0073d3b1);
    /* 0073d3b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073d3b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3b9: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d3beu); f_00727bbc();
    /* 0073d3be: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073d3c1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073d3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3c7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3c9: call 0x727bbc */ r_esp -= 4; W32(r_esp, 0x73d3ceu); f_00727bbc();
    /* 0073d3ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073d3d1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073d3d4:; BB(0x0073d3d4);
    /* 0073d3d4: push 0x479c4000 */ { u32 v = 0x479c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d3dc: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0073d3df: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d3e2: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0073d3e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73d3eau); f_00712624();
    /* 0073d3ea: push 0x470ca000 */ { u32 v = 0x470ca000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d3ef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073d3f2: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x73d3f7u); f_00712624();
    /* 0073d3f7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073d3fe: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d400: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73d405u); f_005caba4();
    /* 0073d405: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d406: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0073d409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d40b: je 0x73d458 */ if (fZ) goto L_0073d458;
L_0073d40d:; BB(0x0073d40d);
    /* 0073d40d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0073d414: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073d41b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073d41e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d421: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0073d424: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073d427: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 0073d42a: lea ebx, [ebp - 0x48] */ r_ebx = (u32)(r_ebp+0xffffffb8u);
    /* 0073d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d42e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d42f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073d431: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073d432: call 0x73d45c */ r_esp -= 4; W32(r_esp, 0x73d437u); f_0073d45c();
    /* 0073d437: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073d43a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0073d441:; BB(0x0073d441);
    /* 0073d441: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073d444: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d447: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073d44a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d44d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d454: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d457: ret  */ FN_RET(0x0073d2f4); r_esp += 4; return;
L_0073d458:; BB(0x0073d458);
    /* 0073d458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d45a: jmp 0x73d441 */ goto L_0073d441;
}

void f_0073d45c(void) /* sub_73D45C */
{
    FN_ENTER(0x0073d45c);
    /* 0073d45c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d45d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d45f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d461: push 0x8f1ef8 */ { u32 v = 0x8f1ef8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d466: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d46d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d474: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d477: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d47a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073d47d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073d480: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073d483: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0073d486: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d489: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0073d48c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0073d48f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073d492: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0073d496: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0073d499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d49a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d49d: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x73d4a2u); f_00710d30();
    /* 0073d4a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073d4a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073d4ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073d4af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d4b2: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0073d4b5: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 0073d4b8: mov dword ptr [edx], 0xb41100 */ W32((u32)(r_edx), 0xb41100u);
    /* 0073d4be: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d4c3u); f_007127c8();
    /* 0073d4c3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073d4c6: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0073d4c9: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d4ceu); f_007127c8();
    /* 0073d4ce: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073d4d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d4d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d4db: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d4de: ret 0x14 */ FN_RET(0x0073d45c); r_esp += 24; return;
}

void f_0073d4e4(void) /* sub_73D4E4 */
{
    FN_ENTER(0x0073d4e4);
    /* 0073d4e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d4e5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073d4e7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d4ed: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x73d4f2u); f_00718e88();
    /* 0073d4f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d4f3: fld dword ptr [0x9f2b84] */ FPUSH(R_F32((u32)(0x9f2b84u)));
    /* 0073d4f9: mov edx, dword ptr [0x9f2b84] */ r_edx = R32((u32)(0x9f2b84u));
    /* 0073d4ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d501: je 0x73d513 */ if (fZ) goto L_0073d513;
L_0073d503:; BB(0x0073d503);
    /* 0073d503: fld dword ptr [0x971d58] */ FPUSH(R_F32((u32)(0x971d58u)));
    /* 0073d509: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073d50b: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0073d50e: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 0073d511: jmp 0x73d51b */ goto L_0073d51b;
L_0073d513:; BB(0x0073d513);
    /* 0073d513: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073d515: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0073d518: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
L_0073d51b:; BB(0x0073d51b);
    /* 0073d51b: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0073d51e: call 0x72897c */ r_esp -= 4; W32(r_esp, 0x73d523u); f_0072897c();
    /* 0073d523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d524: ret  */ FN_RET(0x0073d4e4); r_esp += 4; return;
}

void f_0073d528(void) /* sub_73D528 */
{
    FN_ENTER(0x0073d528);
    /* 0073d528: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073d52c: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073d531: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0073d535: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0073d538: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0073d53c: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073d542: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0073d546: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0073d549: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073d54d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d552: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073d556: ret  */ FN_RET(0x0073d528); r_esp += 4; return;
}

void f_0073d558(void) /* sub_73D558 */
{
    FN_ENTER(0x0073d558);
    /* 0073d558: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0073d55b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073d55f: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d564: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073d568: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0073d56b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073d56f: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073d574: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073d578: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073d57c: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d581: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0073d585: ret  */ FN_RET(0x0073d558); r_esp += 4; return;
}

void f_0073d588(void) /* sub_73D588 */
{
    FN_ENTER(0x0073d588);
    /* 0073d588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d589: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073d58b: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0073d58e: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d593u); f_007127c8();
    /* 0073d593: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0073d596: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d59bu); f_007127c8();
    /* 0073d59b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073d59d: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d5a2u); f_007127c8();
    /* 0073d5a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d5a3: ret  */ FN_RET(0x0073d588); r_esp += 4; return;
}

void f_0073d5a4(void) /* sub_73D5A4 */
{
    FN_ENTER(0x0073d5a4);
    /* 0073d5a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d5a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073d5a7: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0073d5aa: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d5afu); f_007127c8();
    /* 0073d5af: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0073d5b2: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x73d5b7u); f_00712714();
    /* 0073d5b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d5b8: ret  */ FN_RET(0x0073d5a4); r_esp += 4; return;
}

void f_0073d5bc(void) /* sub_73D5BC */
{
    FN_ENTER(0x0073d5bc);
    /* 0073d5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d5bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073d5bf: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 0073d5c2: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x73d5c7u); f_00712714();
    /* 0073d5c7: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0073d5ca: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73d5cfu); f_007127c8();
    /* 0073d5cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d5d0: ret  */ FN_RET(0x0073d5bc); r_esp += 4; return;
}

void f_0073d5d4(void) /* sub_73D5D4 */
{
    FN_ENTER(0x0073d5d4);
    /* 0073d5d4: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0073d5d7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0073d5da: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d5dd: jne 0x73d5e5 */ if (!fZ) goto L_0073d5e5;
L_0073d5df:; BB(0x0073d5df);
    /* 0073d5df: mov eax, 1 */ r_eax = 0x1u;
    /* 0073d5e4: ret  */ FN_RET(0x0073d5d4); r_esp += 4; return;
L_0073d5e5:; BB(0x0073d5e5);
    /* 0073d5e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d5e7: ret  */ FN_RET(0x0073d5d4); r_esp += 4; return;
}

void f_0073d5e8(void) /* sub_73D5E8 */
{
    FN_ENTER(0x0073d5e8);
    /* 0073d5e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d5e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073d5eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073d5ed: call 0x73d60c */ r_esp -= 4; W32(r_esp, 0x73d5f2u); f_0073d60c();
    /* 0073d5f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073d5f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d5f8: jne 0x73d5fe */ if (!fZ) goto L_0073d5fe;
L_0073d5fa:; BB(0x0073d5fa);
    /* 0073d5fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d5fb: ret 4 */ FN_RET(0x0073d5e8); r_esp += 8; return;
L_0073d5fe:; BB(0x0073d5fe);
    /* 0073d5fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d5ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73d604u); f_005c2f74();
    /* 0073d604: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d605: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d606: ret 4 */ FN_RET(0x0073d5e8); r_esp += 8; return;
}

void f_0073d60c(void) /* sub_73D60C */
{
    FN_ENTER(0x0073d60c);
    /* 0073d60c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d60d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d60f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d611: push 0x8f1f14 */ { u32 v = 0x8f1f14u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d616: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d61c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d61d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d624: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d627: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d62a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073d62d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073d630: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073d633: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073d636: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073d63d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d640: mov dword ptr [ecx], 0xb411f0 */ W32((u32)(r_ecx), 0xb411f0u);
    /* 0073d646: call 0x73d728 */ r_esp -= 4; W32(r_esp, 0x73d64bu); f_0073d728();
    /* 0073d64b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d64e: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0073d651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d653: je 0x73d666 */ if (fZ) goto L_0073d666;
L_0073d655:; BB(0x0073d655);
    /* 0073d655: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d657: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d65cu); f_007127b0();
    /* 0073d65c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d65f: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0073d666:; BB(0x0073d666);
    /* 0073d666: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0073d669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d66b: je 0x73d67e */ if (fZ) goto L_0073d67e;
L_0073d66d:; BB(0x0073d66d);
    /* 0073d66d: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d66f: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x73d674u); f_0073d160();
    /* 0073d674: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d677: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_0073d67e:; BB(0x0073d67e);
    /* 0073d67e: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0073d681: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d683: je 0x73d696 */ if (fZ) goto L_0073d696;
L_0073d685:; BB(0x0073d685);
    /* 0073d685: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d687: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d68cu); f_007127b0();
    /* 0073d68c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d68f: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_0073d696:; BB(0x0073d696);
    /* 0073d696: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0073d699: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d69b: je 0x73d6ae */ if (fZ) goto L_0073d6ae;
L_0073d69d:; BB(0x0073d69d);
    /* 0073d69d: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d69f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d6a4u); f_007127b0();
    /* 0073d6a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d6a7: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0073d6ae:; BB(0x0073d6ae);
    /* 0073d6ae: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0073d6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d6b3: je 0x73d6c6 */ if (fZ) goto L_0073d6c6;
L_0073d6b5:; BB(0x0073d6b5);
    /* 0073d6b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d6b7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d6bcu); f_007127b0();
    /* 0073d6bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d6bf: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0073d6c6:; BB(0x0073d6c6);
    /* 0073d6c6: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0073d6c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d6cb: je 0x73d6de */ if (fZ) goto L_0073d6de;
L_0073d6cd:; BB(0x0073d6cd);
    /* 0073d6cd: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d6cf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d6d4u); f_007127b0();
    /* 0073d6d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d6d7: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_0073d6de:; BB(0x0073d6de);
    /* 0073d6de: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0073d6e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d6e3: je 0x73d6f6 */ if (fZ) goto L_0073d6f6;
L_0073d6e5:; BB(0x0073d6e5);
    /* 0073d6e5: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d6e7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d6ecu); f_007127b0();
    /* 0073d6ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d6ef: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_0073d6f6:; BB(0x0073d6f6);
    /* 0073d6f6: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073d6f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d6fb: je 0x73d70e */ if (fZ) goto L_0073d70e;
L_0073d6fd:; BB(0x0073d6fd);
    /* 0073d6fd: mov ecx, eax */ r_ecx = r_eax;
    /* 0073d6ff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73d704u); f_007127b0();
    /* 0073d704: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d707: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_0073d70e:; BB(0x0073d70e);
    /* 0073d70e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073d715: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x73d71au); f_008171e8();
    /* 0073d71a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d71d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d724: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d727: ret  */ FN_RET(0x0073d60c); r_esp += 4; return;
}

void f_0073d728(void) /* sub_73D728 */
{
    FN_ENTER(0x0073d728);
    /* 0073d728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d729: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073d72b: movsx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0073d72f: cmp ax, word ptr [ebx + 0x20] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x20u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0073d733: jne 0x73d737 */ if (!fZ) goto L_0073d737;
L_0073d735:; BB(0x0073d735);
    /* 0073d735: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d736: ret  */ FN_RET(0x0073d728); r_esp += 4; return;
L_0073d737:; BB(0x0073d737);
    /* 0073d737: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73d73cu); f_00815434();
    /* 0073d73c: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0073d740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d741: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x73d746u); f_0061cdb0();
    /* 0073d746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d747: call 0x8146ac */ r_esp -= 4; W32(r_esp, 0x73d74cu); f_008146ac();
    /* 0073d74c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d74d: ret  */ FN_RET(0x0073d728); r_esp += 4; return;
}

void f_0073d750(void) /* sub_73D750 */
{
    FN_ENTER(0x0073d750);
    /* 0073d750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d751: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d755: push 0x8f1f4a */ { u32 v = 0x8f1f4au; r_esp -= 4; W32(r_esp, v); }
    /* 0073d75a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d761: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d768: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d76b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d76e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073d771: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073d774: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073d777: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d77a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073d77d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x73d782u); f_008193cc();
    /* 0073d782: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073d789: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d78c: mov dword ptr [edx], 0xb411f0 */ W32((u32)(r_edx), 0xb411f0u);
    /* 0073d792: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073d794: mov eax, dword ptr [0x9f3294] */ r_eax = R32((u32)(0x9f3294u));
    /* 0073d799: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0073d79c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d79e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0073d7a1: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0073d7a4: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0073d7a7: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0073d7aa: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073d7ad: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0073d7b0: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0073d7b3: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0073d7b6: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0073d7b9: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0073d7bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73d7c1u); f_005caba4();
    /* 0073d7c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073d7c2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073d7c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d7c7: je 0x73d822 */ if (fZ) goto L_0073d822;
L_0073d7c9:; BB(0x0073d7c9);
    /* 0073d7c9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073d7d0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0073d7d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073d7da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d7dc: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073d7df: call 0x40eab8 */ r_esp -= 4; W32(r_esp, 0x73d7e4u); f_0040eab8();
    /* 0073d7e4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073d7e7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073d7ee:; BB(0x0073d7ee);
    /* 0073d7ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d7f1: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0073d7f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073d7fb: call 0x73d828 */ r_esp -= 4; W32(r_esp, 0x73d800u); f_0073d828();
    /* 0073d800: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d803: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d805: mov byte ptr [eax + 0x1d], dl */ W8((u32)(r_eax+0x1du), (u8)r_edx);
    /* 0073d808: mov dword ptr [eax + 0x24], 4 */ W32((u32)(r_eax+0x24u), 0x4u);
    /* 0073d80f: mov byte ptr [eax + 0x1c], dl */ W8((u32)(r_eax+0x1cu), (u8)r_edx);
    /* 0073d812: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d815: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d81c: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d81e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d81f: ret 4 */ FN_RET(0x0073d750); r_esp += 8; return;
L_0073d822:; BB(0x0073d822);
    /* 0073d822: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073d824: jmp 0x73d7ee */ goto L_0073d7ee;
}

void f_0073d828(void) /* sub_73D828 */
{
    FN_ENTER(0x0073d828);
    /* 0073d828: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d829: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073d82b: call 0x8146f8 */ r_esp -= 4; W32(r_esp, 0x73d830u); f_008146f8();
    /* 0073d830: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0073d833: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 0073d837: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 0073d83b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073d83c: ret  */ FN_RET(0x0073d828); r_esp += 4; return;
}

void f_0073d840(void) /* sub_73D840 */
{
    FN_ENTER(0x0073d840);
    /* 0073d840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073d841: mov ebp, esp */ r_ebp = r_esp;
    /* 0073d843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073d845: push 0x8f1f70 */ { u32 v = 0x8f1f70u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073d850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073d858: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073d85b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073d85e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0073d861: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0073d864: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073d867: movsx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1cu));
    /* 0073d86b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0073d86e: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073d871: ja 0x73de84 */ if ((!fC&&!fZ)) goto L_0073de84;
L_0073d877:; BB(0x0073d877);
    /* 0073d877: mov eax, dword ptr [eax*4 + 0x971d80] */ r_eax = R32((u32)(r_eax*4+0x971d80u));
    /* 0073d87e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d840); r_esp += 4; return;
}

void f_0073d880(void)
{
    FN_ENTER(0x0073d880);
    /* 0073d880: mov edx, ecx */ r_edx = r_ecx;
    /* 0073d882: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0073d886: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d88b: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0073d88e: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d880); r_esp += 4; return;
}

void f_0073d893(void)
{
    FN_ENTER(0x0073d893);
    /* 0073d893: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d895: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0073d898: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d89a: je 0x73de9b */ if (fZ) goto L_0073de9b;
L_0073d8a0:; BB(0x0073d8a0);
    /* 0073d8a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d8a3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073d8a6: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73d8abu); f_0073600c();
    /* 0073d8ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d8ae: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0073d8b2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x73d8b7u); f_00694c6c();
    /* 0073d8b7: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0073d8bd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0073d8c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c6: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073d8c8: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073d8cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8d0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73d8d5u); f_007c1160();
    /* 0073d8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d8d7: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073d8dd:; BB(0x0073d8dd);
    /* 0073d8dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e2: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73d8ecu); f_00814298();
    /* 0073d8ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073d8ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d8f2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d8f6: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d893); r_esp += 4; return;
L_0073de9b:; BB(0x0073de9b);
    /* 0073de9b: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dea0: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73dea5u); f_0073ec3c();
    /* 0073dea5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dea7: push 0x971df8 */ { u32 v = 0x971df8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073deac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dead: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x73deb2u); f_0073a8dc();
    /* 0073deb2: mov ebx, eax */ r_ebx = r_eax;
    /* 0073deb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073deb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073deb9: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x73debeu); f_0073b0f0();
    /* 0073debe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dec1: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 0073dec4: jmp 0x73d8a0 */ goto L_0073d8a0;
}

void f_0073d8b2(void)
{
    FN_ENTER(0x0073d8b2);
    /* 0073d8b2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x73d8b7u); f_00694c6c();
    /* 0073d8b7: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0073d8bd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0073d8c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8c6: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073d8c8: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073d8cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8d0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73d8d5u); f_007c1160();
    /* 0073d8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d8d7: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073d8dd:; BB(0x0073d8dd);
    /* 0073d8dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073d8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e2: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0073d8e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73d8ecu); f_00814298();
    /* 0073d8ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073d8ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d8f2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d8f6: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d8b2); r_esp += 4; return;
}

void f_0073d8fb(void)
{
    FN_ENTER(0x0073d8fb);
    /* 0073d8fb: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d8fd: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0073d900: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d902: je 0x73dec9 */ if (fZ) goto L_0073dec9;
L_0073d908:; BB(0x0073d908);
    /* 0073d908: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d90b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073d90e: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73d913u); f_0073600c();
    /* 0073d913: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d916: mov byte ptr [eax + 0x1c], 0x1a */ W8((u32)(r_eax+0x1cu), 0x1au);
    /* 0073d91a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d91d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d920: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x73d925u); f_0073d114();
    /* 0073d925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d927: je 0x73d944 */ if (fZ) goto L_0073d944;
L_0073d929:; BB(0x0073d929);
    /* 0073d929: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d92c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d92f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073d932: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d936: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d939: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d940: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d943: ret  */ FN_RET(0x0073d8fb); r_esp += 4; return;
L_0073d944:; BB(0x0073d944);
    /* 0073d944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d947: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d94a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x73d94fu); f_0073ce50();
    /* 0073d94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d951: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073d957:; BB(0x0073d957);
    /* 0073d957: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d95a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d95d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x73d962u); f_0073d134();
    /* 0073d962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d964: jne 0x73d979 */ if (!fZ) goto L_0073d979;
L_0073d966:; BB(0x0073d966);
    /* 0073d966: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d969: mov dword ptr [eax + 0x24], 3 */ W32((u32)(r_eax+0x24u), 0x3u);
    /* 0073d970: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0073d974: jmp 0x73de84 */ goto L_0073de84;
L_0073d979:; BB(0x0073d979);
    /* 0073d979: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d97c: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d980: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d8fb); r_esp += 4; return;
L_0073dec9:; BB(0x0073dec9);
    /* 0073dec9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073decb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073decc: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x73ded1u); f_0073cd8c();
    /* 0073ded1: mov ebx, eax */ r_ebx = r_eax;
    /* 0073ded3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ded5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ded7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73dedcu); f_00792fe8();
    /* 0073dedc: mov esi, eax */ r_esi = r_eax;
    /* 0073dede: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dee3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73dee8u); f_0073ec50();
    /* 0073dee8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073deeb: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073def0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073def1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073def3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073def4: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x73def9u); f_0073ce70();
    /* 0073def9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073defb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073defd: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x73df02u); f_0073d148();
    /* 0073df02: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073df05: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 0073df08: jmp 0x73d908 */ goto L_0073d908;
}

void f_0073d91a(void)
{
    FN_ENTER(0x0073d91a);
    /* 0073d91a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d91d: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d920: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x73d925u); f_0073d114();
    /* 0073d925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d927: je 0x73d944 */ if (fZ) goto L_0073d944;
L_0073d929:; BB(0x0073d929);
    /* 0073d929: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d92c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073d92f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073d932: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d936: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d939: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d940: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d943: ret  */ FN_RET(0x0073d91a); r_esp += 4; return;
L_0073d944:; BB(0x0073d944);
    /* 0073d944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d947: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d94a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x73d94fu); f_0073ce50();
    /* 0073d94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d951: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073d957:; BB(0x0073d957);
    /* 0073d957: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d95a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073d95d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x73d962u); f_0073d134();
    /* 0073d962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d964: jne 0x73d979 */ if (!fZ) goto L_0073d979;
L_0073d966:; BB(0x0073d966);
    /* 0073d966: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d969: mov dword ptr [eax + 0x24], 3 */ W32((u32)(r_eax+0x24u), 0x3u);
    /* 0073d970: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0073d974: jmp 0x73de84 */ goto L_0073de84;
L_0073d979:; BB(0x0073d979);
    /* 0073d979: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d97c: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073d980: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d91a); r_esp += 4; return;
}

void f_0073d985(void)
{
    FN_ENTER(0x0073d985);
    /* 0073d985: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d987: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0073d98a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0073d991: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073d993: je 0x73d9a2 */ if (fZ) goto L_0073d9a2;
L_0073d995:; BB(0x0073d995);
    /* 0073d995: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d997: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 0073d99b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
L_0073d9a2:; BB(0x0073d9a2);
    /* 0073d9a2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073d9a4: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073d9aa:; BB(0x0073d9aa);
    /* 0073d9aa: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d9ac: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 0073d9b0: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d985); r_esp += 4; return;
}

void f_0073d9b5(void)
{
    FN_ENTER(0x0073d9b5);
    /* 0073d9b5: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d9b7: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 0073d9bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073d9be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073d9c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0073d9c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073d9c8: ret  */ FN_RET(0x0073d9b5); r_esp += 4; return;
}

void f_0073d9c9(void)
{
    FN_ENTER(0x0073d9c9);
    /* 0073d9c9: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d9cb: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073d9ce: jmp 0x73d9ef */ goto L_0073d9ef;
L_0073d9ef:; BB(0x0073d9ef);
    /* 0073d9ef: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73d9f4u); f_00751c44();
    /* 0073d9f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d9f8: call 0x73e5a0 */ r_esp -= 4; W32(r_esp, 0x73d9fdu); f_0073e5a0();
    /* 0073d9fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da00: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0073da03: movzx ecx, word ptr [edx + 0x84] */ r_ecx = (u32)R16((u32)(r_edx+0x84u));
    /* 0073da0a: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073da0d: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073da13:; BB(0x0073da13);
    /* 0073da13: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073da17: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d9c9); r_esp += 4; return;
}

void f_0073d9d0(void)
{
    FN_ENTER(0x0073d9d0);
    /* 0073d9d0: mov eax, ecx */ r_eax = r_ecx;
    /* 0073d9d2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073d9d5: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73d9dau); f_0073600c();
    /* 0073d9da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d9dd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073d9e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073d9e2: je 0x73df0d */ if (fZ) goto L_0073df0d;
L_0073d9e8:; BB(0x0073d9e8);
    /* 0073d9e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d9eb: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0073d9ef: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73d9f4u); f_00751c44();
    /* 0073d9f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073d9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073d9f8: call 0x73e5a0 */ r_esp -= 4; W32(r_esp, 0x73d9fdu); f_0073e5a0();
    /* 0073d9fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da00: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0073da03: movzx ecx, word ptr [edx + 0x84] */ r_ecx = (u32)R16((u32)(r_edx+0x84u));
    /* 0073da0a: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073da0d: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073da13:; BB(0x0073da13);
    /* 0073da13: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073da17: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073d9d0); r_esp += 4; return;
L_0073df0d:; BB(0x0073df0d);
    /* 0073df0d: mov ecx, eax */ r_ecx = r_eax;
    /* 0073df0f: call 0x73e520 */ r_esp -= 4; W32(r_esp, 0x73df14u); f_0073e520();
    /* 0073df14: mov ecx, eax */ r_ecx = r_eax;
    /* 0073df16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073df19: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073df1c: jmp 0x73d9e8 */ goto L_0073d9e8;
}

void f_0073da1c(void)
{
    FN_ENTER(0x0073da1c);
    /* 0073da1c: mov eax, ecx */ r_eax = r_ecx;
    /* 0073da1e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073da21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073da23: je 0x73da34 */ if (fZ) goto L_0073da34;
L_0073da25:; BB(0x0073da25);
    /* 0073da25: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x73da2au); f_0073d160();
    /* 0073da2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da2d: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0073da34:; BB(0x0073da34);
    /* 0073da34: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073da37: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073da39: je 0x73da4a */ if (fZ) goto L_0073da4a;
L_0073da3b:; BB(0x0073da3b);
    /* 0073da3b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73da40u); f_007127b0();
    /* 0073da40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da43: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0073da4a:; BB(0x0073da4a);
    /* 0073da4a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0073da4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073da4f: je 0x73da60 */ if (fZ) goto L_0073da60;
L_0073da51:; BB(0x0073da51);
    /* 0073da51: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73da56u); f_007127b0();
    /* 0073da56: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da59: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0073da60:; BB(0x0073da60);
    /* 0073da60: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0073da63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073da65: je 0x73df21 */ if (fZ) goto L_0073df21;
L_0073da6b:; BB(0x0073da6b);
    /* 0073da6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da6e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073da71: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73da76u); f_0073600c();
    /* 0073da76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da79: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073da7c: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x73da81u); f_0073605c();
    /* 0073da81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073da84: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073da87: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073da8e: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073da94: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073da9b: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0073da9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073daa0: je 0x73daa9 */ if (fZ) goto L_0073daa9;
L_0073daa2:; BB(0x0073daa2);
    /* 0073daa2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073daa4: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73daa9u); f_00760acc();
L_0073daa9:; BB(0x0073daa9);
    /* 0073daa9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073daac: mov byte ptr [eax + 0x1c], 0x11 */ W8((u32)(r_eax+0x1cu), 0x11u);
    /* 0073dab0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dab3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073dab6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dabd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dabf: je 0x73dad6 */ if (fZ) goto L_0073dad6;
L_0073dac1:; BB(0x0073dac1);
    /* 0073dac1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dac4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dac8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dacb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dad2: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dad4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dad5: ret  */ FN_RET(0x0073da1c); r_esp += 4; return;
L_0073dad6:; BB(0x0073dad6);
    /* 0073dad6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dad8: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dade:; BB(0x0073dade);
    /* 0073dade: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73dae3u); f_007365f4();
    /* 0073dae3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dae6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0073dae9: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073da1c); r_esp += 4; return;
L_0073df21:; BB(0x0073df21);
    /* 0073df21: mov ecx, eax */ r_ecx = r_eax;
    /* 0073df23: call 0x73e4c4 */ r_esp -= 4; W32(r_esp, 0x73df28u); f_0073e4c4();
    /* 0073df28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073df2b: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0073df2e: jmp 0x73da6b */ goto L_0073da6b;
}

void f_0073dab0(void)
{
    FN_ENTER(0x0073dab0);
    /* 0073dab0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dab3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073dab6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dabd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dabf: je 0x73dad6 */ if (fZ) goto L_0073dad6;
L_0073dac1:; BB(0x0073dac1);
    /* 0073dac1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dac4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dac8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dacb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dad2: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dad4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dad5: ret  */ FN_RET(0x0073dab0); r_esp += 4; return;
L_0073dad6:; BB(0x0073dad6);
    /* 0073dad6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dad8: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dade:; BB(0x0073dade);
    /* 0073dade: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73dae3u); f_007365f4();
    /* 0073dae3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dae6: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0073dae9: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dab0); r_esp += 4; return;
}

void f_0073daee(void)
{
    FN_ENTER(0x0073daee);
    /* 0073daee: mov eax, ecx */ r_eax = r_ecx;
    /* 0073daf0: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0073daf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073daf5: je 0x73df76 */ if (fZ) goto L_0073df76;
L_0073dafb:; BB(0x0073dafb);
    /* 0073dafb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dafe: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073db01: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73db06u); f_0073600c();
    /* 0073db06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db09: mov byte ptr [eax + 0x1c], 0xf */ W8((u32)(r_eax+0x1cu), 0xfu);
    /* 0073db0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db10: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0073db13: call 0x7a6d98 */ r_esp -= 4; W32(r_esp, 0x73db18u); f_007a6d98();
    /* 0073db18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073db1b: je 0x73df40 */ if (fZ) goto L_0073df40;
L_0073db21:; BB(0x0073db21);
    /* 0073db21: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073db24: je 0x73df40 */ if (fZ) goto L_0073df40;
L_0073db2a:; BB(0x0073db2a);
    /* 0073db2a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073db2d: je 0x73df33 */ if (fZ) goto L_0073df33;
L_0073db33:; BB(0x0073db33);
    /* 0073db33: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073daee); r_esp += 4; return;
L_0073df33:; BB(0x0073df33);
    /* 0073df33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073df35: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x73df3au); f_007a60dc();
    /* 0073df3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073df3b: jmp 0x73de84 */ goto L_0073de84;
L_0073df40:; BB(0x0073df40);
    /* 0073df40: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073df43: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 0073df46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073df4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073df50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0073df54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073df57: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 0073df5e: je 0x73df6b */ if (fZ) goto L_0073df6b;
L_0073df60:; BB(0x0073df60);
    /* 0073df60: mov eax, ebx */ r_eax = r_ebx;
    /* 0073df62: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073df66: jmp 0x73de84 */ goto L_0073de84;
L_0073df6b:; BB(0x0073df6b);
    /* 0073df6b: mov eax, ebx */ r_eax = r_ebx;
    /* 0073df6d: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 0073df71: jmp 0x73de84 */ goto L_0073de84;
L_0073df76:; BB(0x0073df76);
    /* 0073df76: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073df7d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0073df7f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73df84u); f_005caba4();
    /* 0073df84: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073df87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073df8a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0073df8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073df8f: je 0x73dfc7 */ if (fZ) goto L_0073dfc7;
L_0073df91:; BB(0x0073df91);
    /* 0073df91: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0073df98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073df9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dfa2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073dfa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dfa6: call 0x7a674c */ r_esp -= 4; W32(r_esp, 0x73dfabu); f_007a674c();
    /* 0073dfab: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0073dfb2:; BB(0x0073dfb2);
    /* 0073dfb2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073dfb5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dfb8: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0073dfbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073dfc2: jmp 0x73dafb */ goto L_0073dafb;
L_0073dfc7:; BB(0x0073dfc7);
    /* 0073dfc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073dfc9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073dfcc: jmp 0x73dfb2 */ goto L_0073dfb2;
}

void f_0073db0d(void)
{
    FN_ENTER(0x0073db0d);
    /* 0073db0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db10: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0073db13: call 0x7a6d98 */ r_esp -= 4; W32(r_esp, 0x73db18u); f_007a6d98();
    /* 0073db18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073db1b: je 0x73df40 */ if (fZ) goto L_0073df40;
L_0073db21:; BB(0x0073db21);
    /* 0073db21: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073db24: je 0x73df40 */ if (fZ) goto L_0073df40;
L_0073db2a:; BB(0x0073db2a);
    /* 0073db2a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073db2d: je 0x73df33 */ if (fZ) goto L_0073df33;
L_0073db33:; BB(0x0073db33);
    /* 0073db33: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073db0d); r_esp += 4; return;
L_0073df33:; BB(0x0073df33);
    /* 0073df33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073df35: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x73df3au); f_007a60dc();
    /* 0073df3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073df3b: jmp 0x73de84 */ goto L_0073de84;
L_0073df40:; BB(0x0073df40);
    /* 0073df40: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073df43: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 0073df46: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0073df4a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073df50: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0073df54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073df57: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 0073df5e: je 0x73df6b */ if (fZ) goto L_0073df6b;
L_0073df60:; BB(0x0073df60);
    /* 0073df60: mov eax, ebx */ r_eax = r_ebx;
    /* 0073df62: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073df66: jmp 0x73de84 */ goto L_0073de84;
L_0073df6b:; BB(0x0073df6b);
    /* 0073df6b: mov eax, ebx */ r_eax = r_ebx;
    /* 0073df6d: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 0073df71: jmp 0x73de84 */ goto L_0073de84;
}

void f_0073db38(void)
{
    FN_ENTER(0x0073db38);
    /* 0073db38: mov eax, ecx */ r_eax = r_ecx;
    /* 0073db3a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0073db3d: movzx ecx, byte ptr [edx + 0x60] */ r_ecx = (u32)R8((u32)(r_edx+0x60u));
    /* 0073db41: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073db44: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073db4a:; BB(0x0073db4a);
    /* 0073db4a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073db4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073db51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073db58: mov esp, ebp */ r_esp = r_ebp;
    /* 0073db5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073db5b: ret  */ FN_RET(0x0073db38); r_esp += 4; return;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073db38); r_esp += 4; return;
}

void f_0073db5c(void)
{
    FN_ENTER(0x0073db5c);
    /* 0073db5c: call 0x782f84 */ r_esp -= 4; W32(r_esp, 0x73db61u); f_00782f84();
    /* 0073db61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073db63: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073db69:; BB(0x0073db69);
    /* 0073db69: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db6c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073db6f: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73db74u); f_0073600c();
    /* 0073db74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db77: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0073db7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073db7c: je 0x73dfce */ if (fZ) goto L_0073dfce;
L_0073db82:; BB(0x0073db82);
    /* 0073db82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db85: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 0073db89: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073db5c); r_esp += 4; return;
L_0073dfce:; BB(0x0073dfce);
    /* 0073dfce: mov ecx, eax */ r_ecx = r_eax;
    /* 0073dfd0: call 0x73e448 */ r_esp -= 4; W32(r_esp, 0x73dfd5u); f_0073e448();
    /* 0073dfd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dfd8: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0073dfdb: jmp 0x73db82 */ goto L_0073db82;
}

void f_0073db8e(void)
{
    FN_ENTER(0x0073db8e);
    /* 0073db8e: call 0x782e8c */ r_esp -= 4; W32(r_esp, 0x73db93u); f_00782e8c();
    /* 0073db93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073db96: je 0x73dfe0 */ if (fZ) goto L_0073dfe0;
L_0073db9c:; BB(0x0073db9c);
    /* 0073db9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073db9f: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 0073dba3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dba6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dbad: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dbaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dbb0: ret  */ FN_RET(0x0073db8e); r_esp += 4; return;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073db8e); r_esp += 4; return;
L_0073dfe0:; BB(0x0073dfe0);
    /* 0073dfe0: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x73dfe5u); f_007083d4();
    /* 0073dfe5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dfe8: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0073dfec: jmp 0x73de84 */ goto L_0073de84;
}

void f_0073dbb1(void)
{
    FN_ENTER(0x0073dbb1);
    /* 0073dbb1: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dbb3: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0073dbb6: jmp 0x73dbd7 */ goto L_0073dbd7;
L_0073dbd7:; BB(0x0073dbd7);
    /* 0073dbd7: movsx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x60u));
    /* 0073dbdb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dbdd: je 0x73dbf4 */ if (fZ) goto L_0073dbf4;
L_0073dbdf:; BB(0x0073dbdf);
    /* 0073dbdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dbe2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dbe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dbe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dbf3: ret  */ FN_RET(0x0073dbb1); r_esp += 4; return;
L_0073dbf4:; BB(0x0073dbf4);
    /* 0073dbf4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dbf6: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dbfc:; BB(0x0073dbfc);
    /* 0073dbfc: movsx edx, word ptr [ecx + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x62u));
    /* 0073dc00: movsx eax, word ptr [ecx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 0073dc04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc09: call 0x73e428 */ r_esp -= 4; W32(r_esp, 0x73dc0eu); f_0073e428();
    /* 0073dc0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc11: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dc15: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dbb1); r_esp += 4; return;
}

void f_0073dbb8(void)
{
    FN_ENTER(0x0073dbb8);
    /* 0073dbb8: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dbba: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073dbbd: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73dbc2u); f_0073600c();
    /* 0073dbc2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dbc5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0073dbc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dbca: je 0x73dff1 */ if (fZ) goto L_0073dff1;
L_0073dbd0:; BB(0x0073dbd0);
    /* 0073dbd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dbd3: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 0073dbd7: movsx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x60u));
    /* 0073dbdb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dbdd: je 0x73dbf4 */ if (fZ) goto L_0073dbf4;
L_0073dbdf:; BB(0x0073dbdf);
    /* 0073dbdf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dbe2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dbe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dbe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dbf3: ret  */ FN_RET(0x0073dbb8); r_esp += 4; return;
L_0073dbf4:; BB(0x0073dbf4);
    /* 0073dbf4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dbf6: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dbfc:; BB(0x0073dbfc);
    /* 0073dbfc: movsx edx, word ptr [ecx + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x62u));
    /* 0073dc00: movsx eax, word ptr [ecx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 0073dc04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc09: call 0x73e428 */ r_esp -= 4; W32(r_esp, 0x73dc0eu); f_0073e428();
    /* 0073dc0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc11: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dc15: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dbb8); r_esp += 4; return;
L_0073dff1:; BB(0x0073dff1);
    /* 0073dff1: mov ecx, eax */ r_ecx = r_eax;
    /* 0073dff3: call 0x73e3ac */ r_esp -= 4; W32(r_esp, 0x73dff8u); f_0073e3ac();
    /* 0073dff8: mov ecx, eax */ r_ecx = r_eax;
    /* 0073dffa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dffd: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0073e000: jmp 0x73dbd0 */ goto L_0073dbd0;
}

void f_0073dc06(void)
{
    FN_ENTER(0x0073dc06);
    /* 0073dc06: in al, dx */ UNSUP(0x0073dc06, "in al, dx");
    /* 0073dc07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc09: call 0x73e428 */ r_esp -= 4; W32(r_esp, 0x73dc0eu); f_0073e428();
    /* 0073dc0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc11: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dc15: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dc06); r_esp += 4; return;
}

void f_0073dc1a(void)
{
    FN_ENTER(0x0073dc1a);
    /* 0073dc1a: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dc1c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073dc1f: jmp 0x73dc40 */ goto L_0073dc40;
L_0073dc40:; BB(0x0073dc40);
    /* 0073dc40: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73dc45u); f_00751c44();
    /* 0073dc45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc48: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 0073dc4c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0073dc4f: movzx ecx, word ptr [eax + 0x84] */ r_ecx = (u32)R16((u32)(r_eax+0x84u));
    /* 0073dc56: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dc59: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dc5f:; BB(0x0073dc5f);
    /* 0073dc5f: mov eax, edx */ r_eax = r_edx;
    /* 0073dc61: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dc65: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dc1a); r_esp += 4; return;
}

void f_0073dc21(void)
{
    FN_ENTER(0x0073dc21);
    /* 0073dc21: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dc23: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073dc26: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73dc2bu); f_0073600c();
    /* 0073dc2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc2e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073dc31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dc33: je 0x73e005 */ if (fZ) goto L_0073e005;
L_0073dc39:; BB(0x0073dc39);
    /* 0073dc39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc3c: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0073dc40: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73dc45u); f_00751c44();
    /* 0073dc45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc48: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 0073dc4c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0073dc4f: movzx ecx, word ptr [eax + 0x84] */ r_ecx = (u32)R16((u32)(r_eax+0x84u));
    /* 0073dc56: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dc59: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dc5f:; BB(0x0073dc5f);
    /* 0073dc5f: mov eax, edx */ r_eax = r_edx;
    /* 0073dc61: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dc65: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dc21); r_esp += 4; return;
L_0073e005:; BB(0x0073e005);
    /* 0073e005: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e007: call 0x73e314 */ r_esp -= 4; W32(r_esp, 0x73e00cu); f_0073e314();
    /* 0073e00c: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e00e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e011: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073e014: jmp 0x73dc39 */ goto L_0073dc39;
}

void f_0073dc6a(void)
{
    FN_ENTER(0x0073dc6a);
    /* 0073dc6a: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dc6c: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0073dc6f: jmp 0x73dc99 */ goto L_0073dc99;
L_0073dc99:; BB(0x0073dc99);
    /* 0073dc99: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073dca0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dca2: je 0x73dce7 */ if (fZ) goto L_0073dce7;
L_0073dca4:; BB(0x0073dca4);
    /* 0073dca4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dca7: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0073dcab: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dcae: jne 0x73e019 */ if (!fZ) goto L_0073e019;
L_0073dcb4:; BB(0x0073dcb4);
    /* 0073dcb4: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73dcb9u); f_00815434();
    /* 0073dcb9: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x73dcbeu); f_00814718();
    /* 0073dcbe: push 0x971e6c */ { u32 v = 0x971e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcc3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x73dcc8u); f_00814afc();
    /* 0073dcc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073dcc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dccc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073dccf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073dcd2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073dcd5: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dcd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dcdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dce3: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dce5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dce6: ret  */ FN_RET(0x0073dc6a); r_esp += 4; return;
L_0073dce7:; BB(0x0073dce7);
    /* 0073dce7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dce9: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dcef:; BB(0x0073dcef);
    /* 0073dcef: mov ecx, esi */ r_ecx = r_esi;
    /* 0073dcf1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73dcf6u); f_007365f4();
    /* 0073dcf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dcf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcfa: call 0x73e2e0 */ r_esp -= 4; W32(r_esp, 0x73dcffu); f_0073e2e0();
    /* 0073dcff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd02: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073dd05: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dd0c: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073dd12: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073dd19: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0073dd1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dd1e: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dd24:; BB(0x0073dd24);
    /* 0073dd24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dd26: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73dd2bu); f_00760acc();
    /* 0073dd2b: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dc6a); r_esp += 4; return;
L_0073e019:; BB(0x0073e019);
    /* 0073e019: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e01b: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x73e020u); f_008153bc();
    /* 0073e020: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e021: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e024: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 0073e028: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0073e02b: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073e030: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0073e033: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073e03a: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073e040: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073e047: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0073e04a: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e051: jmp 0x73dce7 */ goto L_0073dce7;
}

void f_0073dc71(void)
{
    FN_ENTER(0x0073dc71);
    /* 0073dc71: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073dc73: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x73dc78u); f_008153bc();
    /* 0073dc78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073dc79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc7c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073dc7f: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73dc84u); f_0073600c();
    /* 0073dc84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc87: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0073dc8a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dc8c: je 0x73e056 */ if (fZ) goto L_0073e056;
L_0073dc92:; BB(0x0073dc92);
    /* 0073dc92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc95: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 0073dc99: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073dca0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dca2: je 0x73dce7 */ if (fZ) goto L_0073dce7;
L_0073dca4:; BB(0x0073dca4);
    /* 0073dca4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dca7: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0073dcab: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dcae: jne 0x73e019 */ if (!fZ) goto L_0073e019;
L_0073dcb4:; BB(0x0073dcb4);
    /* 0073dcb4: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73dcb9u); f_00815434();
    /* 0073dcb9: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x73dcbeu); f_00814718();
    /* 0073dcbe: push 0x971e6c */ { u32 v = 0x971e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcc3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x73dcc8u); f_00814afc();
    /* 0073dcc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073dcc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dccc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073dccf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073dcd2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073dcd5: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dcd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dcdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dce3: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dce5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dce6: ret  */ FN_RET(0x0073dc71); r_esp += 4; return;
L_0073dce7:; BB(0x0073dce7);
    /* 0073dce7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dce9: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dcef:; BB(0x0073dcef);
    /* 0073dcef: mov ecx, esi */ r_ecx = r_esi;
    /* 0073dcf1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73dcf6u); f_007365f4();
    /* 0073dcf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dcf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcfa: call 0x73e2e0 */ r_esp -= 4; W32(r_esp, 0x73dcffu); f_0073e2e0();
    /* 0073dcff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd02: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073dd05: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dd0c: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073dd12: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073dd19: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0073dd1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dd1e: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dd24:; BB(0x0073dd24);
    /* 0073dd24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dd26: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73dd2bu); f_00760acc();
    /* 0073dd2b: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dc71); r_esp += 4; return;
L_0073e019:; BB(0x0073e019);
    /* 0073e019: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e01b: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x73e020u); f_008153bc();
    /* 0073e020: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e021: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e024: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 0073e028: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0073e02b: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073e030: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0073e033: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073e03a: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073e040: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073e047: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0073e04a: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e051: jmp 0x73dce7 */ goto L_0073dce7;
L_0073e056:; BB(0x0073e056);
    /* 0073e056: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e058: call 0x77bdd8 */ r_esp -= 4; W32(r_esp, 0x73e05du); f_0077bdd8();
    /* 0073e05d: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e062: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e067u); f_0073ec3c();
    /* 0073e067: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e06a: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x73e06fu); f_00735708();
    /* 0073e06f: mov esi, eax */ r_esi = r_eax;
    /* 0073e071: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e074: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e07b: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073e081: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0073e088: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0073e08a:; BB(0x0073e08a);
    /* 0073e08a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e08b: call 0x77bcc8 */ r_esp -= 4; W32(r_esp, 0x73e090u); f_0077bcc8();
    /* 0073e090: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e093: je 0x73e0c3 */ if (fZ) goto L_0073e0c3;
L_0073e095:; BB(0x0073e095);
    /* 0073e095: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e096: call 0x77bf30 */ r_esp -= 4; W32(r_esp, 0x73e09bu); f_0077bf30();
    /* 0073e09b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e09c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e09e: jne 0x73e0b1 */ if (!fZ) goto L_0073e0b1;
L_0073e0a0:; BB(0x0073e0a0);
    /* 0073e0a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0a1: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0a3: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0a5: push 0x971e60 */ { u32 v = 0x971e60u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0aa: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x73e0afu); f_00735ee0();
    /* 0073e0af: jmp 0x73e0c3 */ goto L_0073e0c3;
L_0073e0b1:; BB(0x0073e0b1);
    /* 0073e0b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0b2: call 0x77bc98 */ r_esp -= 4; W32(r_esp, 0x73e0b7u); f_0077bc98();
    /* 0073e0b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e0b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0b9: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0bb: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0be: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e0c3u); f_00735c90();
L_0073e0c3:; BB(0x0073e0c3);
    /* 0073e0c3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073e0c6: cmp ebx, 0x31 */ {  u32 a = r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073e0c9: jl 0x73e08a */ if ((fS!=fO)) goto L_0073e08a;
L_0073e0cb:; BB(0x0073e0cb);
    /* 0073e0cb: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0d2: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e0d9: or edx, 0xffff0400 */ {  u32 a = r_edx; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073e0df: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0073e0e6: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0eb: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x73e0f0u); f_007361d0();
    /* 0073e0f0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0f2: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x73e0f7u); f_00736458();
    /* 0073e0f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e0fa: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0073e0fd: jmp 0x73dc92 */ goto L_0073dc92;
}

void f_0073dd30(void)
{
    FN_ENTER(0x0073dd30);
    /* 0073dd30: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dd32: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073dd35: jmp 0x73dd56 */ goto L_0073dd56;
L_0073dd56:; BB(0x0073dd56);
    /* 0073dd56: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dd5d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dd5f: je 0x73dd68 */ if (fZ) goto L_0073dd68;
L_0073dd61:; BB(0x0073dd61);
    /* 0073dd61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd64: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_0073dd68:; BB(0x0073dd68);
    /* 0073dd68: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73dd6du); f_00751c44();
    /* 0073dd6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dd71: call 0x73e26c */ r_esp -= 4; W32(r_esp, 0x73dd76u); f_0073e26c();
    /* 0073dd76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dd78: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dd7e:; BB(0x0073dd7e);
    /* 0073dd7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd81: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dd85: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dd30); r_esp += 4; return;
}

void f_0073dd37(void)
{
    FN_ENTER(0x0073dd37);
    /* 0073dd37: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dd39: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073dd3c: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x73dd41u); f_0073600c();
    /* 0073dd41: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd44: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073dd47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dd49: je 0x73e102 */ if (fZ) goto L_0073e102;
L_0073dd4f:; BB(0x0073dd4f);
    /* 0073dd4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd52: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 0073dd56: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dd5d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dd5f: je 0x73dd68 */ if (fZ) goto L_0073dd68;
L_0073dd61:; BB(0x0073dd61);
    /* 0073dd61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd64: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_0073dd68:; BB(0x0073dd68);
    /* 0073dd68: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x73dd6du); f_00751c44();
    /* 0073dd6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dd71: call 0x73e26c */ r_esp -= 4; W32(r_esp, 0x73dd76u); f_0073e26c();
    /* 0073dd76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dd78: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dd7e:; BB(0x0073dd7e);
    /* 0073dd7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd81: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dd85: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dd37); r_esp += 4; return;
L_0073e102:; BB(0x0073e102);
    /* 0073e102: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e104: call 0x73e1d0 */ r_esp -= 4; W32(r_esp, 0x73e109u); f_0073e1d0();
    /* 0073e109: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e10b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e10e: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0073e111: jmp 0x73dd4f */ goto L_0073dd4f;
}

void f_0073dd8a(void)
{
    FN_ENTER(0x0073dd8a);
    /* 0073dd8a: mov eax, ecx */ r_eax = r_ecx;
    /* 0073dd8c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0073dd8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dd91: je 0x73dda2 */ if (fZ) goto L_0073dda2;
L_0073dd93:; BB(0x0073dd93);
    /* 0073dd93: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73dd98u); f_007127b0();
    /* 0073dd98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd9b: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0073dda2:; BB(0x0073dda2);
    /* 0073dda2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0073dda5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dda7: je 0x73ddb8 */ if (fZ) goto L_0073ddb8;
L_0073dda9:; BB(0x0073dda9);
    /* 0073dda9: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x73ddaeu); f_0073d160();
    /* 0073ddae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ddb1: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0073ddb8:; BB(0x0073ddb8);
    /* 0073ddb8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0073ddbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ddbd: je 0x73ddce */ if (fZ) goto L_0073ddce;
L_0073ddbf:; BB(0x0073ddbf);
    /* 0073ddbf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73ddc4u); f_007127b0();
    /* 0073ddc4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ddc7: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0073ddce:; BB(0x0073ddce);
    /* 0073ddce: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0073ddd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ddd3: je 0x73dde4 */ if (fZ) goto L_0073dde4;
L_0073ddd5:; BB(0x0073ddd5);
    /* 0073ddd5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73dddau); f_007127b0();
    /* 0073ddda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dddd: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0073dde4:; BB(0x0073dde4);
    /* 0073dde4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073dde7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073dde9: je 0x73ddfa */ if (fZ) goto L_0073ddfa;
L_0073ddeb:; BB(0x0073ddeb);
    /* 0073ddeb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73ddf0u); f_007127b0();
    /* 0073ddf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ddf3: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0073ddfa:; BB(0x0073ddfa);
    /* 0073ddfa: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073ddfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ddff: je 0x73de10 */ if (fZ) goto L_0073de10;
L_0073de01:; BB(0x0073de01);
    /* 0073de01: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x73de06u); f_007127b0();
    /* 0073de06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de09: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0073de10:; BB(0x0073de10);
    /* 0073de10: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073de13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073de15: je 0x73e116 */ if (fZ) goto L_0073e116;
L_0073de1b:; BB(0x0073de1b);
    /* 0073de1b: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x73de20u); f_0073605c();
    /* 0073de20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de23: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073de26: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073de2d: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073de33: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073de3a: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0073de3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073de3f: je 0x73de48 */ if (fZ) goto L_0073de48;
L_0073de41:; BB(0x0073de41);
    /* 0073de41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073de43: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73de48u); f_00760acc();
L_0073de48:; BB(0x0073de48);
    /* 0073de48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de4b: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 0073de4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de52: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073de55: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073de5c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073de5e: je 0x73de75 */ if (fZ) goto L_0073de75;
L_0073de60:; BB(0x0073de60);
    /* 0073de60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de63: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0073de67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de71: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de74: ret  */ FN_RET(0x0073dd8a); r_esp += 4; return;
L_0073de75:; BB(0x0073de75);
    /* 0073de75: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073de77: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073de79:; BB(0x0073de79);
    /* 0073de79: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73de7eu); f_007365f4();
    /* 0073de7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de81: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073dd8a); r_esp += 4; return;
L_0073e116:; BB(0x0073e116);
    /* 0073e116: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e118: call 0x73e12c */ r_esp -= 4; W32(r_esp, 0x73e11du); f_0073e12c();
    /* 0073e11d: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e11f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e122: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0073e125: jmp 0x73de1b */ goto L_0073de1b;
}

void f_0073de4f(void)
{
    FN_ENTER(0x0073de4f);
    /* 0073de4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de52: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0073de55: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073de5c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073de5e: je 0x73de75 */ if (fZ) goto L_0073de75;
L_0073de60:; BB(0x0073de60);
    /* 0073de60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de63: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0073de67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de71: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de74: ret  */ FN_RET(0x0073de4f); r_esp += 4; return;
L_0073de75:; BB(0x0073de75);
    /* 0073de75: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073de77: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073de79:; BB(0x0073de79);
    /* 0073de79: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73de7eu); f_007365f4();
    /* 0073de7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073de81: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073de4f); r_esp += 4; return;
}

