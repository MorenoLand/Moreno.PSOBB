#include "protos.h"

void f_0052d00c(void) /* sub_52D00C */
{
    FN_ENTER(0x0052d00c);
    /* 0052d00c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d00d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052d00f: mov ecx, esi */ r_ecx = r_esi;
    /* 0052d011: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52d016u); f_00770738();
    /* 0052d016: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d018: je 0x52d039 */ if (fZ) goto L_0052d039;
L_0052d01a:; BB(0x0052d01a);
    /* 0052d01a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052d01d: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d022: je 0x52d039 */ if (fZ) goto L_0052d039;
L_0052d024:; BB(0x0052d024);
    /* 0052d024: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d026: mov ecx, esi */ r_ecx = r_esi;
    /* 0052d028: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52d02du); f_007706b0();
    /* 0052d02d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052d032: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
L_0052d039:; BB(0x0052d039);
    /* 0052d039: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d03a: ret  */ FN_RET(0x0052d00c); r_esp += 4; return;
}

void f_0052d03c(void) /* sub_52D03C */
{
    FN_ENTER(0x0052d03c);
    /* 0052d03c: mov dword ptr [0xa73074], 0x3f800000 */ W32((u32)(0xa73074u), 0x3f800000u);
    /* 0052d046: mov dword ptr [0xa73078], 0x41000000 */ W32((u32)(0xa73078u), 0x41000000u);
    /* 0052d050: mov dword ptr [0xa7307c], 0x3fc00000 */ W32((u32)(0xa7307cu), 0x3fc00000u);
    /* 0052d05a: ret  */ FN_RET(0x0052d03c); r_esp += 4; return;
}

void f_0052d05c(void) /* sub_52D05C */
{
    FN_ENTER(0x0052d05c);
    /* 0052d05c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d05d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d05e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d05f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d060: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d063: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052d066: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0052d068: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 0052d06c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052d06e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052d074: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052d076: je 0x52d07e */ if (fZ) goto L_0052d07e;
L_0052d078:; BB(0x0052d078);
    /* 0052d078: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0052d07e:; BB(0x0052d07e);
    /* 0052d07e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d080: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052d082: jle 0x52d131 */ if ((fZ||fS!=fO)) goto L_0052d131;
L_0052d088:; BB(0x0052d088);
    /* 0052d088: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0052d08c: mov esi, eax */ r_esi = r_eax;
    /* 0052d08e: mov edi, edx */ r_edi = r_edx;
    /* 0052d090: mov ebp, ecx */ r_ebp = r_ecx;
L_0052d092:; BB(0x0052d092);
    /* 0052d092: mov edx, dword ptr [esi*4 + 0xaad720] */ r_edx = R32((u32)(r_esi*4+0xaad720u));
    /* 0052d099: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d09b: je 0x52d0d0 */ if (fZ) goto L_0052d0d0;
L_0052d09d:; BB(0x0052d09d);
    /* 0052d09d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d09f: je 0x52d12d */ if (fZ) goto L_0052d12d;
L_0052d0a5:; BB(0x0052d0a5);
    /* 0052d0a5: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d0ab: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0052d0b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0b3: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52d0b8u); f_0078ea50();
    /* 0052d0b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d0bb: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 0052d0bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052d0c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052d0c2: jae 0x52d0d0 */ if (!fC) goto L_0052d0d0;
L_0052d0c4:; BB(0x0052d0c4);
    /* 0052d0c4: mov word ptr [esp + ebx*2], si */ W16((u32)(r_esp+r_ebx*2), (u16)r_esi);
    /* 0052d0c8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052d0cb: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d0ce: jge 0x52d0ec */ if ((fS==fO)) goto L_0052d0ec;
L_0052d0d0:; BB(0x0052d0d0);
    /* 0052d0d0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d0d3: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d0d5: jl 0x52d092 */ if ((fS!=fO)) goto L_0052d092;
L_0052d0d7:; BB(0x0052d0d7);
    /* 0052d0d7: mov ecx, ebp */ r_ecx = r_ebp;
L_0052d0d9:; BB(0x0052d0d9);
    /* 0052d0d9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d0db: jne 0x52d0ee */ if (!fZ) goto L_0052d0ee;
L_0052d0dd:; BB(0x0052d0dd);
    /* 0052d0dd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052d0e2: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d0e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052d0e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d0e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d0e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052d0e9: ret 4 */ FN_RET(0x0052d05c); r_esp += 8; return;
L_0052d0ec:; BB(0x0052d0ec);
    /* 0052d0ec: mov ecx, ebp */ r_ecx = r_ebp;
L_0052d0ee:; BB(0x0052d0ee);
    /* 0052d0ee: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x52d0f3u); f_007751b0();
    /* 0052d0f3: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0052d0f7: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 0052d0fb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0052d0fd: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 0052d101: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 0052d106: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052d10b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0052d10f: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 0052d113: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052d117: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0052d11b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0052d11f: movzx eax, word ptr [esp + edx*2] */ r_eax = (u32)R16((u32)(r_esp+r_edx*2));
    /* 0052d123: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d126: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052d127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d129: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052d12a: ret 4 */ FN_RET(0x0052d05c); r_esp += 8; return;
L_0052d12d:; BB(0x0052d12d);
    /* 0052d12d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052d12f: jmp 0x52d0d9 */ goto L_0052d0d9;
L_0052d131:; BB(0x0052d131);
    /* 0052d131: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052d133: jmp 0x52d0dd */ goto L_0052d0dd;
}

void f_0052d138(void) /* sub_52D138 */
{
    FN_ENTER(0x0052d138);
    /* 0052d138: mov dword ptr [0xa730a4], 0x42480000 */ W32((u32)(0xa730a4u), 0x42480000u);
    /* 0052d142: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d144: mov dword ptr [0xa7309c], eax */ W32((u32)(0xa7309cu), r_eax);
    /* 0052d149: mov dword ptr [0xa730a0], 0 */ W32((u32)(0xa730a0u), 0x0u);
    /* 0052d153: mov dword ptr [0xa73098], eax */ W32((u32)(0xa73098u), r_eax);
    /* 0052d158: mov dword ptr [0xa73094], 0x41700000 */ W32((u32)(0xa73094u), 0x41700000u);
    /* 0052d162: ret  */ FN_RET(0x0052d138); r_esp += 4; return;
}

void f_0052d164(void) /* sub_52D164 */
{
    FN_ENTER(0x0052d164);
    /* 0052d164: mov eax, dword ptr [0xa730a8] */ r_eax = R32((u32)(0xa730a8u));
    /* 0052d169: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d16b: je 0x52d172 */ if (fZ) goto L_0052d172;
L_0052d16d:; BB(0x0052d16d);
    /* 0052d16d: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x52d172u); f_004d3250();
L_0052d172:; BB(0x0052d172);
    /* 0052d172: ret  */ FN_RET(0x0052d164); r_esp += 4; return;
}

void f_0052d174(void) /* sub_52D174 */
{
    FN_ENTER(0x0052d174);
    /* 0052d174: mov dword ptr [0xa73088], 0x3f800000 */ W32((u32)(0xa73088u), 0x3f800000u);
    /* 0052d17e: mov dword ptr [0xa7308c], 0x41000000 */ W32((u32)(0xa7308cu), 0x41000000u);
    /* 0052d188: mov dword ptr [0xa73090], 0x3fc00000 */ W32((u32)(0xa73090u), 0x3fc00000u);
    /* 0052d192: ret  */ FN_RET(0x0052d174); r_esp += 4; return;
}

void f_0052d194(void) /* sub_52D194 */
{
    FN_ENTER(0x0052d194);
    /* 0052d194: mov dword ptr [0xa730a8], 0 */ W32((u32)(0xa730a8u), 0x0u);
    /* 0052d19e: call 0x52d138 */ r_esp -= 4; W32(r_esp, 0x52d1a3u); f_0052d138();
    /* 0052d1a3: ret  */ FN_RET(0x0052d194); r_esp += 4; return;
}

void f_0052d1a4(void)
{
    FN_ENTER(0x0052d1a4);
    /* 0052d1a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0052d1a8: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0052d1ac: mov edx, dword ptr [eax*4 + 0xa730c0] */ r_edx = R32((u32)(r_eax*4+0xa730c0u));
    /* 0052d1b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d1b5: jne 0x52d1d9 */ if (!fZ) goto L_0052d1d9;
L_0052d1b7:; BB(0x0052d1b7);
    /* 0052d1b7: mov dword ptr [eax*4 + 0xa730c0], 1 */ W32((u32)(r_eax*4+0xa730c0u), 0x1u);
    /* 0052d1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1c3: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52d1c8u); f_00786b3c();
    /* 0052d1c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052d1c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d1cb: je 0x52d1d9 */ if (fZ) goto L_0052d1d9;
L_0052d1cd:; BB(0x0052d1cd);
    /* 0052d1cd: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0052d1d0: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d1d6: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_0052d1d9:; BB(0x0052d1d9);
    /* 0052d1d9: ret  */ FN_RET(0x0052d1a4); r_esp += 4; return;
}

void f_0052d1dc(void) /* sub_52D1DC */
{
    FN_ENTER(0x0052d1dc);
    /* 0052d1dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0052d1de:; BB(0x0052d1de);
    /* 0052d1de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052d1e0: mov dword ptr [eax + 0xa730c0], edx */ W32((u32)(r_eax+0xa730c0u), r_edx);
    /* 0052d1e6: mov dword ptr [eax + 0xa730c4], edx */ W32((u32)(r_eax+0xa730c4u), r_edx);
    /* 0052d1ec: mov dword ptr [eax + 0xa730c8], edx */ W32((u32)(r_eax+0xa730c8u), r_edx);
    /* 0052d1f2: mov dword ptr [eax + 0xa730cc], edx */ W32((u32)(r_eax+0xa730ccu), r_edx);
    /* 0052d1f8: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d1fb: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d200: jl 0x52d1de */ if ((fS!=fO)) goto L_0052d1de;
L_0052d202:; BB(0x0052d202);
    /* 0052d202: ret  */ FN_RET(0x0052d1dc); r_esp += 4; return;
}

void f_0052d204(void) /* sub_52D204 */
{
    FN_ENTER(0x0052d204);
    /* 0052d204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d205: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0052d209: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x52d20eu); f_00807ac0();
    /* 0052d20e: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0052d214: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d216: je 0x52d23a */ if (fZ) goto L_0052d23a;
L_0052d218:; BB(0x0052d218);
    /* 0052d218: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d21b: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d21d:; BB(0x0052d21d);
    /* 0052d21d: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d220: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d222:; BB(0x0052d222);
    /* 0052d222: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d225: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d227:; BB(0x0052d227);
    /* 0052d227: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d22a: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d22c:; BB(0x0052d22c);
    /* 0052d22c: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d22f: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d231:; BB(0x0052d231);
    /* 0052d231: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d234: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d236:; BB(0x0052d236);
    /* 0052d236: mov eax, esi */ r_eax = r_esi;
    /* 0052d238: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d239: ret  */ FN_RET(0x0052d204); r_esp += 4; return;
L_0052d23a:; BB(0x0052d23a);
    /* 0052d23a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d23d: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d23f:; BB(0x0052d23f);
    /* 0052d23f: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d242: je 0x52d248 */ if (fZ) goto L_0052d248;
L_0052d244:; BB(0x0052d244);
    /* 0052d244: mov eax, esi */ r_eax = r_esi;
    /* 0052d246: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d247: ret  */ FN_RET(0x0052d204); r_esp += 4; return;
L_0052d248:; BB(0x0052d248);
    /* 0052d248: cmp esi, 0x20c */ {  u32 a = r_esi; u32 b = 0x20cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d24e: je 0x52d254 */ if (fZ) goto L_0052d254;
L_0052d250:; BB(0x0052d250);
    /* 0052d250: mov eax, esi */ r_eax = r_esi;
    /* 0052d252: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d253: ret  */ FN_RET(0x0052d204); r_esp += 4; return;
L_0052d254:; BB(0x0052d254);
    /* 0052d254: mov eax, 0x184 */ r_eax = 0x184u;
    /* 0052d259: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d25a: ret  */ FN_RET(0x0052d204); r_esp += 4; return;
}

void f_0052d25c(void) /* sub_52D25C */
{
    FN_ENTER(0x0052d25c);
    /* 0052d25c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d25d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0052d261: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x52d266u); f_00807ac0();
    /* 0052d266: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0052d26c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d26e: je 0x52d290 */ if (fZ) goto L_0052d290;
L_0052d270:; BB(0x0052d270);
    /* 0052d270: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d273: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d275:; BB(0x0052d275);
    /* 0052d275: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d278: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d27a:; BB(0x0052d27a);
    /* 0052d27a: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d27d: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d27f:; BB(0x0052d27f);
    /* 0052d27f: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d282: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d284:; BB(0x0052d284);
    /* 0052d284: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d287: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d289:; BB(0x0052d289);
    /* 0052d289: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d28c: jne 0x52d2a2 */ if (!fZ) goto L_0052d2a2;
L_0052d28e:; BB(0x0052d28e);
    /* 0052d28e: jmp 0x52d29a */ goto L_0052d29a;
L_0052d290:; BB(0x0052d290);
    /* 0052d290: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d293: je 0x52d29a */ if (fZ) goto L_0052d29a;
L_0052d295:; BB(0x0052d295);
    /* 0052d295: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d298: jne 0x52d2a2 */ if (!fZ) goto L_0052d2a2;
L_0052d29a:; BB(0x0052d29a);
    /* 0052d29a: cmp esi, 0x20c */ {  u32 a = r_esi; u32 b = 0x20cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052d2a0: je 0x52d2a6 */ if (fZ) goto L_0052d2a6;
L_0052d2a2:; BB(0x0052d2a2);
    /* 0052d2a2: mov eax, esi */ r_eax = r_esi;
    /* 0052d2a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d2a5: ret  */ FN_RET(0x0052d25c); r_esp += 4; return;
L_0052d2a6:; BB(0x0052d2a6);
    /* 0052d2a6: mov esi, 0x184 */ r_esi = 0x184u;
    /* 0052d2ab: jmp 0x52d2a2 */ goto L_0052d2a2;
}

void f_0052d2b0(void) /* sub_52D2B0 */
{
    FN_ENTER(0x0052d2b0);
    /* 0052d2b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d2b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d2b2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d2b5: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0052d2b9: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 0052d2bc: call 0x52d2ec */ r_esp -= 4; W32(r_esp, 0x52d2c1u); f_0052d2ec();
    /* 0052d2c1: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0052d2c5: mov eax, ebp */ r_eax = r_ebp;
    /* 0052d2c7: call 0x52d314 */ r_esp -= 4; W32(r_esp, 0x52d2ccu); f_0052d314();
    /* 0052d2cc: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0052d2cf: mov ecx, esi */ r_ecx = r_esi;
    /* 0052d2d1: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x52d2d6u); f_007aa668();
    /* 0052d2d6: call 0x52d328 */ r_esp -= 4; W32(r_esp, 0x52d2dbu); f_0052d328();
    /* 0052d2db: call 0x52d340 */ r_esp -= 4; W32(r_esp, 0x52d2e0u); f_0052d340();
    /* 0052d2e0: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 0052d2e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d2e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d2e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d2e8: ret  */ FN_RET(0x0052d2b0); r_esp += 4; return;
}

void f_0052d2ec(void) /* sub_52D2EC */
{
    FN_ENTER(0x0052d2ec);
    /* 0052d2ec: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052d2f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d2f3: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052d2f8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0052d2fd: push 0xfffffdff */ { u32 v = 0xfffffdffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052d302: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x52d307u); f_0082d6fc();
    /* 0052d307: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d30a: ret  */ FN_RET(0x0052d2ec); r_esp += 4; return;
}

void f_0052d314(void) /* sub_52D314 */
{
    FN_ENTER(0x0052d314);
    /* 0052d314: mov dword ptr [0xa732e8], edx */ W32((u32)(0xa732e8u), r_edx);
    /* 0052d31a: mov dword ptr [0xa7333c], eax */ W32((u32)(0xa7333cu), r_eax);
    /* 0052d31f: mov eax, 0xa7330c */ r_eax = 0xa7330cu;
    /* 0052d324: ret  */ FN_RET(0x0052d314); r_esp += 4; return;
}

void f_0052d328(void) /* sub_52D328 */
{
    FN_ENTER(0x0052d328);
    /* 0052d328: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 0052d32e: call 0x795898 */ r_esp -= 4; W32(r_esp, 0x52d333u); f_00795898();
    /* 0052d333: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 0052d339: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x52d33eu); f_0061cdb0();
    /* 0052d33e: ret  */ FN_RET(0x0052d328); r_esp += 4; return;
}

void f_0052d340(void) /* sub_52D340 */
{
    FN_ENTER(0x0052d340);
    /* 0052d340: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052d345: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d347: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052d34c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0052d351: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d356: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x52d35bu); f_0082d6fc();
    /* 0052d35b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d35e: ret  */ FN_RET(0x0052d340); r_esp += 4; return;
}

void f_0052d360(void) /* sub_52D360 */
{
    FN_ENTER(0x0052d360);
    /* 0052d360: mov dword ptr [0xa732f8], 0xa732e4 */ W32((u32)(0xa732f8u), 0xa732e4u);
    /* 0052d36a: mov eax, 0x2514 */ r_eax = 0x2514u;
    /* 0052d36f: mov edx, 2 */ r_edx = 0x2u;
    /* 0052d374: mov dword ptr [0xa732fc], 0 */ W32((u32)(0xa732fcu), 0x0u);
    /* 0052d37e: mov word ptr [0xa732e4], ax */ W16((u32)(0xa732e4u), (u16)r_eax);
    /* 0052d384: mov ecx, 0xaff */ r_ecx = 0xaffu;
    /* 0052d389: mov dword ptr [0xa73300], 0 */ W32((u32)(0xa73300u), 0x0u);
    /* 0052d393: mov word ptr [0xa732e6], dx */ W16((u32)(0xa732e6u), (u16)r_edx);
    /* 0052d39a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d39c: mov dword ptr [0xa73304], 0 */ W32((u32)(0xa73304u), 0x0u);
    /* 0052d3a6: mov word ptr [0xa732e8], dx */ W16((u32)(0xa732e8u), (u16)r_edx);
    /* 0052d3ad: mov eax, 0xff */ r_eax = 0xffu;
    /* 0052d3b2: mov dword ptr [0xa73308], 0 */ W32((u32)(0xa73308u), 0x0u);
    /* 0052d3bc: mov word ptr [0xa732ea], cx */ W16((u32)(0xa732eau), (u16)r_ecx);
    /* 0052d3c3: mov word ptr [0xa732ec], ax */ W16((u32)(0xa732ecu), (u16)r_eax);
    /* 0052d3c9: mov dword ptr [0xa7330c], 0x57 */ W32((u32)(0xa7330cu), 0x57u);
    /* 0052d3d3: mov word ptr [0xa732ee], ax */ W16((u32)(0xa732eeu), (u16)r_eax);
    /* 0052d3d9: mov dword ptr [0xa73310], 0xa732f4 */ W32((u32)(0xa73310u), 0xa732f4u);
    /* 0052d3e3: mov dword ptr [0xa732f4], edx */ W32((u32)(0xa732f4u), r_edx);
    /* 0052d3e9: mov dword ptr [0xa73314], 0 */ W32((u32)(0xa73314u), 0x0u);
    /* 0052d3f3: mov dword ptr [0xa73318], 0 */ W32((u32)(0xa73318u), 0x0u);
    /* 0052d3fd: mov dword ptr [0xa73320], edx */ W32((u32)(0xa73320u), r_edx);
    /* 0052d403: mov dword ptr [0xa73324], edx */ W32((u32)(0xa73324u), r_edx);
    /* 0052d409: mov dword ptr [0xa7331c], 0 */ W32((u32)(0xa7331cu), 0x0u);
    /* 0052d413: mov dword ptr [0xa73328], edx */ W32((u32)(0xa73328u), r_edx);
    /* 0052d419: mov dword ptr [0xa7332c], 0 */ W32((u32)(0xa7332cu), 0x0u);
    /* 0052d423: mov dword ptr [0xa73330], 0 */ W32((u32)(0xa73330u), 0x0u);
    /* 0052d42d: mov dword ptr [0xa73334], 0 */ W32((u32)(0xa73334u), 0x0u);
    /* 0052d437: mov dword ptr [0xa73338], edx */ W32((u32)(0xa73338u), r_edx);
    /* 0052d43d: mov dword ptr [0xa7333c], edx */ W32((u32)(0xa7333cu), r_edx);
    /* 0052d443: ret  */ FN_RET(0x0052d360); r_esp += 4; return;
}

void f_0052d444(void) /* sub_52D444 */
{
    FN_ENTER(0x0052d444);
    /* 0052d444: mov ecx, dword ptr [0xa73344] */ r_ecx = R32((u32)(0xa73344u));
    /* 0052d44a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d44c: je 0x52d469 */ if (fZ) goto L_0052d469;
L_0052d44e:; BB(0x0052d44e);
    /* 0052d44e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x52d453u); f_00829de0();
    /* 0052d453: push dword ptr [0xa73344] */ { u32 v = R32((u32)(0xa73344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052d459: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x52d45eu); f_0082e960();
    /* 0052d45e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052d45f: mov dword ptr [0xa73344], 0 */ W32((u32)(0xa73344u), 0x0u);
L_0052d469:; BB(0x0052d469);
    /* 0052d469: ret  */ FN_RET(0x0052d444); r_esp += 4; return;
}

void f_0052d46c(void) /* sub_52D46C */
{
    FN_ENTER(0x0052d46c);
    /* 0052d46c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d46f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0052d473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d475: jne 0x52d484 */ if (!fZ) goto L_0052d484;
L_0052d477:; BB(0x0052d477);
    /* 0052d477: call 0x52d55c */ r_esp -= 4; W32(r_esp, 0x52d47cu); f_0052d55c();
    /* 0052d47c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d47e: jne 0x52d484 */ if (!fZ) goto L_0052d484;
L_0052d480:; BB(0x0052d480);
    /* 0052d480: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d483: ret  */ FN_RET(0x0052d46c); r_esp += 4; return;
L_0052d484:; BB(0x0052d484);
    /* 0052d484: mov eax, dword ptr [0xa73344] */ r_eax = R32((u32)(0xa73344u));
    /* 0052d489: mov dword ptr [esp], 0xc0a00000 */ W32((u32)(r_esp), 0xc0a00000u);
    /* 0052d490: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0052d494: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0052d49c: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0052d4a4: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 0052d4ac: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0052d4b4: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0052d4bc: mov dword ptr [esp + 0x1c], 0x9bc3c0 */ W32((u32)(r_esp+0x1cu), 0x9bc3c0u);
    /* 0052d4c4: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x52d4c9u); f_007a9380();
    /* 0052d4c9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4cd: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x52d4d2u); f_0082acfc();
    /* 0052d4d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4d6: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x52d4dbu); f_0082acfc();
    /* 0052d4db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d4de: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x52d4e3u); f_0082dbac();
    /* 0052d4e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052d4e6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4eb: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x52d4f0u); f_0082bcb4();
    /* 0052d4f0: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0052d4f8: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0052d4fc: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0052d504: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d506: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d509: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x52d50eu); f_0082bcb4();
    /* 0052d50e: mov dword ptr [esp + 0x18], 0xc0a00000 */ W32((u32)(r_esp+0x18u), 0xc0a00000u);
    /* 0052d516: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0052d51a: mov dword ptr [esp + 0x1c], 0xc0a00000 */ W32((u32)(r_esp+0x1cu), 0xc0a00000u);
    /* 0052d522: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d527: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x52d52cu); f_0082bcb4();
    /* 0052d52c: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0052d534: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0052d538: mov dword ptr [esp + 0x28], 0xc0a00000 */ W32((u32)(r_esp+0x28u), 0xc0a00000u);
    /* 0052d540: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052d542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d545: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x52d54au); f_0082bcb4();
    /* 0052d54a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d54d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x52d552u); f_0082dab0();
    /* 0052d552: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x52d557u); f_007a9318();
    /* 0052d557: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d55a: ret  */ FN_RET(0x0052d46c); r_esp += 4; return;
}

void f_0052d55c(void) /* sub_52D55C */
{
    FN_ENTER(0x0052d55c);
    /* 0052d55c: call 0x50267c */ r_esp -= 4; W32(r_esp, 0x52d561u); f_0050267c();
    /* 0052d561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d563: jne 0x52d56b */ if (!fZ) goto L_0052d56b;
L_0052d565:; BB(0x0052d565);
    /* 0052d565: mov eax, 1 */ r_eax = 0x1u;
    /* 0052d56a: ret  */ FN_RET(0x0052d55c); r_esp += 4; return;
L_0052d56b:; BB(0x0052d56b);
    /* 0052d56b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052d56d: ret  */ FN_RET(0x0052d55c); r_esp += 4; return;
}

void f_0052d570(void) /* sub_52D570 */
{
    FN_ENTER(0x0052d570);
    /* 0052d570: push 0x922468 */ { u32 v = 0x922468u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d575: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x52d57au); f_008009dc();
    /* 0052d57a: mov dword ptr [0xa73344], eax */ W32((u32)(0xa73344u), r_eax);
    /* 0052d57f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052d580: ret  */ FN_RET(0x0052d570); r_esp += 4; return;
}

void f_0052d584(void) /* sub_52D584 */
{
    FN_ENTER(0x0052d584);
    /* 0052d584: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d585: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d586: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d587: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d588: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d58b: mov edi, ecx */ r_edi = r_ecx;
    /* 0052d58d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d58f: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0052d593: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d597: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0052d59a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0052d59d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0052d59f: mov dword ptr [0xa73348], eax */ W32((u32)(0xa73348u), r_eax);
    /* 0052d5a4: mov eax, ebp */ r_eax = r_ebp;
    /* 0052d5a6: mov ebp, eax */ r_ebp = r_eax;
L_0052d5a8:; BB(0x0052d5a8);
    /* 0052d5a8: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0052d5ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ad: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5b3:; BB(0x0052d5b3);
    /* 0052d5b3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0052d5b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5b8: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5be:; BB(0x0052d5be);
    /* 0052d5be: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d5c1: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d5c4: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ca: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5cc:; BB(0x0052d5cc);
    /* 0052d5cc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
L_0052d5d0:; BB(0x0052d5d0);
    /* 0052d5d0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0052d5d3: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d5d6: jl 0x52d633 */ if ((fS!=fO)) goto L_0052d633;
L_0052d5d8:; BB(0x0052d5d8);
    /* 0052d5d8: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d5db: jge 0x52d607 */ if ((fS==fO)) goto L_0052d607;
L_0052d5dd:; BB(0x0052d5dd);
    /* 0052d5dd: mov eax, ecx */ r_eax = r_ecx;
    /* 0052d5df: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0052d5e2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d5e5: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052d5eb: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ed: jne 0x52d5fb */ if (!fZ) goto L_0052d5fb;
L_0052d5ef:; BB(0x0052d5ef);
    /* 0052d5ef: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052d5f9: jmp 0x52d633 */ goto L_0052d633;
L_0052d5fb:; BB(0x0052d5fb);
    /* 0052d5fb: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d605: jmp 0x52d633 */ goto L_0052d633;
L_0052d607:; BB(0x0052d607);
    /* 0052d607: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d60a: jge 0x52d617 */ if ((fS==fO)) goto L_0052d617;
L_0052d60c:; BB(0x0052d60c);
    /* 0052d60c: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0052d60f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d611: lea ecx, [eax + ecx + 2] */ r_ecx = (u32)(r_eax+r_ecx+0x2u);
    /* 0052d615: jmp 0x52d633 */ goto L_0052d633;
L_0052d617:; BB(0x0052d617);
    /* 0052d617: mov eax, dword ptr [0xa73348] */ r_eax = R32((u32)(0xa73348u));
    /* 0052d61c: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 0052d61f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d624: je 0x52d62f */ if (fZ) goto L_0052d62f;
L_0052d626:; BB(0x0052d626);
    /* 0052d626: cmp edx, 0x41 */ {  u32 a = r_edx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d629: je 0x52d75e */ if (fZ) goto L_0052d75e;
L_0052d62f:; BB(0x0052d62f);
    /* 0052d62f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d631: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0052d633:; BB(0x0052d633);
    /* 0052d633: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d636: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d639: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d63f: jne 0x52d5d0 */ if (!fZ) goto L_0052d5d0;
L_0052d641:; BB(0x0052d641);
    /* 0052d641: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0052d645:; BB(0x0052d645);
    /* 0052d645: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0052d648: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d64a: je 0x52d655 */ if (fZ) goto L_0052d655;
L_0052d64c:; BB(0x0052d64c);
    /* 0052d64c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d64d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d64e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052d650: call 0x52d9a0 */ r_esp -= 4; W32(r_esp, 0x52d655u); f_0052d9a0();
L_0052d655:; BB(0x0052d655);
    /* 0052d655: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0052d658: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d65a: jne 0x52d5a8 */ if (!fZ) goto L_0052d5a8;
L_0052d660:; BB(0x0052d660);
    /* 0052d660: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0052d663: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0052d666: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d668: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d66a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d66d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x52d672u); f_008581c5();
    /* 0052d672: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0052d675: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052d677: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d679: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d67c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x52d681u); f_008581c5();
    /* 0052d681: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d684: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d688: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0052d68b: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d695: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0052d698: mov dword ptr [0xa73350], edx */ W32((u32)(0xa73350u), r_edx);
    /* 0052d69e: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
L_0052d6a3:; BB(0x0052d6a3);
    /* 0052d6a3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0052d6a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6a8: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6ae:; BB(0x0052d6ae);
    /* 0052d6ae: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0052d6b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6b3: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6b9:; BB(0x0052d6b9);
    /* 0052d6b9: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d6bc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d6bf: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6c4: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6c6:; BB(0x0052d6c6);
    /* 0052d6c6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052d6c9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d6cc: jl 0x52d72a */ if ((fS!=fO)) goto L_0052d72a;
L_0052d6ce:; BB(0x0052d6ce);
    /* 0052d6ce: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d6d1: jge 0x52d6fd */ if ((fS==fO)) goto L_0052d6fd;
L_0052d6d3:; BB(0x0052d6d3);
    /* 0052d6d3: mov eax, esi */ r_eax = r_esi;
    /* 0052d6d5: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0052d6d8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d6db: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052d6e1: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6e3: jne 0x52d6f1 */ if (!fZ) goto L_0052d6f1;
L_0052d6e5:; BB(0x0052d6e5);
    /* 0052d6e5: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052d6ef: jmp 0x52d72a */ goto L_0052d72a;
L_0052d6f1:; BB(0x0052d6f1);
    /* 0052d6f1: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d6fb: jmp 0x52d72a */ goto L_0052d72a;
L_0052d6fd:; BB(0x0052d6fd);
    /* 0052d6fd: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d700: jge 0x52d70d */ if ((fS==fO)) goto L_0052d70d;
L_0052d702:; BB(0x0052d702);
    /* 0052d702: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0052d705: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d707: lea esi, [eax + esi + 2] */ r_esi = (u32)(r_eax+r_esi+0x2u);
    /* 0052d70b: jmp 0x52d72a */ goto L_0052d72a;
L_0052d70d:; BB(0x0052d70d);
    /* 0052d70d: mov edx, dword ptr [0xa73348] */ r_edx = R32((u32)(0xa73348u));
    /* 0052d713: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0052d716: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d719: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d71b: je 0x52d726 */ if (fZ) goto L_0052d726;
L_0052d71d:; BB(0x0052d71d);
    /* 0052d71d: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d720: je 0x52d846 */ if (fZ) goto L_0052d846;
L_0052d726:; BB(0x0052d726);
    /* 0052d726: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d728: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0052d72a:; BB(0x0052d72a);
    /* 0052d72a: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d72d: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d730: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d735: jne 0x52d6c6 */ if (!fZ) goto L_0052d6c6;
L_0052d737:; BB(0x0052d737);
    /* 0052d737: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0052d73a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d73c: je 0x52d747 */ if (fZ) goto L_0052d747;
L_0052d73e:; BB(0x0052d73e);
    /* 0052d73e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d73f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d740: mov ecx, edi */ r_ecx = r_edi;
    /* 0052d742: call 0x52db64 */ r_esp -= 4; W32(r_esp, 0x52d747u); f_0052db64();
L_0052d747:; BB(0x0052d747);
    /* 0052d747: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0052d74a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d74c: jne 0x52d6a3 */ if (!fZ) goto L_0052d6a3;
L_0052d752:; BB(0x0052d752);
    /* 0052d752: mov eax, edi */ r_eax = r_edi;
    /* 0052d754: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d757: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052d758: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d759: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d75a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052d75b: ret 8 */ FN_RET(0x0052d584); r_esp += 12; return;
L_0052d75e:; BB(0x0052d75e);
    /* 0052d75e: add dword ptr [edi + 4], 1 */ { u32 ad = (u32)(r_edi+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052d762: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0052d765: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d768: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052d76d: mov esi, 0 */ r_esi = 0x0u;
    /* 0052d772: je 0x52d633 */ if (fZ) goto L_0052d633;
L_0052d778:; BB(0x0052d778);
    /* 0052d778: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d77b: jb 0x52d842 */ if (fC) goto L_0052d842;
L_0052d781:; BB(0x0052d781);
    /* 0052d781: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0052d783: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052d787: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 0052d78a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_0052d78e:; BB(0x0052d78e);
    /* 0052d78e: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d791: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d792: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d795: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d797: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d799: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d79c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d79e: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7a0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7a8: movsx eax, word ptr [ecx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2+0x2u));
    /* 0052d7ad: lea ebx, [edx + ecx + 2] */ r_ebx = (u32)(r_edx+r_ecx+0x2u);
    /* 0052d7b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7b2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7b4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7b6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7b9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7bb: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7bd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7c2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7c5: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052d7ca: lea edx, [edx + ebx + 2] */ r_edx = (u32)(r_edx+r_ebx+0x2u);
    /* 0052d7ce: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0052d7d2: mov ebx, edx */ r_ebx = r_edx;
    /* 0052d7d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7d5: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7d7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7d9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7dc: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7de: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7e0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7e3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7e5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7e8: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052d7ed: lea ecx, [edx + ebx + 4] */ r_ecx = (u32)(r_edx+r_ebx+0x4u);
    /* 0052d7f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7f2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7f4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7f6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7f9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7fb: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7fd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d800: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d802: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0052d806: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d808: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d80a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052d80c: jbe 0x52d78e */ if ((fC||fZ)) goto L_0052d78e;
L_0052d80e:; BB(0x0052d80e);
    /* 0052d80e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052d812: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
L_0052d816:; BB(0x0052d816);
    /* 0052d816: mov ebx, eax */ r_ebx = r_eax;
L_0052d818:; BB(0x0052d818);
    /* 0052d818: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d81b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d81c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d81f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d821: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d823: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d826: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d828: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d82a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d82d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d82f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d831: lea ecx, [eax + ecx + 2] */ r_ecx = (u32)(r_eax+r_ecx+0x2u);
    /* 0052d835: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d837: jb 0x52d818 */ if (fC) goto L_0052d818;
L_0052d839:; BB(0x0052d839);
    /* 0052d839: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d83d: jmp 0x52d633 */ goto L_0052d633;
L_0052d842:; BB(0x0052d842);
    /* 0052d842: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0052d844: jmp 0x52d816 */ goto L_0052d816;
L_0052d846:; BB(0x0052d846);
    /* 0052d846: mov eax, dword ptr [0xa73350] */ r_eax = R32((u32)(0xa73350u));
    /* 0052d84b: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0052d84d: mov eax, dword ptr [0xa73350] */ r_eax = R32((u32)(0xa73350u));
    /* 0052d852: mov edx, dword ptr [0xa7334c] */ r_edx = R32((u32)(0xa7334cu));
    /* 0052d858: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0052d85b: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d85e: mov dword ptr [0xa73350], eax */ W32((u32)(0xa73350u), r_eax);
    /* 0052d863: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0052d866: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d869: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052d86e: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0052d873: je 0x52d72a */ if (fZ) goto L_0052d72a;
L_0052d879:; BB(0x0052d879);
    /* 0052d879: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0052d87c: mov ebx, eax */ r_ebx = r_eax;
    /* 0052d87e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_0052d882:; BB(0x0052d882);
    /* 0052d882: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d885: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d886: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d889: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d88c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d88e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d890: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d893: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052d895: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052d897: jle 0x52d987 */ if ((fZ||fS!=fO)) goto L_0052d987;
L_0052d89d:; BB(0x0052d89d);
    /* 0052d89d: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d8a0: jl 0x52d94b */ if ((fS!=fO)) goto L_0052d94b;
L_0052d8a6:; BB(0x0052d8a6);
    /* 0052d8a6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0052d8aa: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0052d8ae: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
L_0052d8b1:; BB(0x0052d8b1);
    /* 0052d8b1: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8b7: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0052d8bb: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8be: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8c4: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8c7: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0052d8cb: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8d1: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8d4: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8da: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8dd: movzx ebx, word ptr [esi + 8] */ r_ebx = (u32)R16((u32)(r_esi+0x8u));
    /* 0052d8e1: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d8e4: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8ea: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8ed: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8f3: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8f6: movzx ebx, word ptr [esi + 0xa] */ r_ebx = (u32)R16((u32)(r_esi+0xau));
    /* 0052d8fa: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d900: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d903: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d909: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d90c: movzx ebx, word ptr [esi + 0xe] */ r_ebx = (u32)R16((u32)(r_esi+0xeu));
    /* 0052d910: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d916: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d919: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d91f: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d922: movzx ebx, word ptr [esi + 0x10] */ r_ebx = (u32)R16((u32)(r_esi+0x10u));
    /* 0052d926: add esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d929: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d92f: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d932: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d938: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d93b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d93d: jle 0x52d8b1 */ if ((fZ||fS!=fO)) goto L_0052d8b1;
L_0052d943:; BB(0x0052d943);
    /* 0052d943: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0052d947: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0052d94b:; BB(0x0052d94b);
    /* 0052d94b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0052d94f:; BB(0x0052d94f);
    /* 0052d94f: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d955: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0052d959: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 0052d95c: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052d961: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d964: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0052d968: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d96e: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 0052d971: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052d976: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d979: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d97c: add esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d97f: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d981: jl 0x52d94f */ if ((fS!=fO)) goto L_0052d94f;
L_0052d983:; BB(0x0052d983);
    /* 0052d983: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0052d987:; BB(0x0052d987);
    /* 0052d987: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d989: jb 0x52d882 */ if (fC) goto L_0052d882;
L_0052d98f:; BB(0x0052d98f);
    /* 0052d98f: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d993: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0052d996: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052d99a: jmp 0x52d72a */ goto L_0052d72a;
}

void f_0052d5e0(void)
{
    FN_ENTER(0x0052d5e0);
    goto L_0052d5e0;
L_0052d5a8:; BB(0x0052d5a8);
    /* 0052d5a8: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0052d5ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ad: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5b3:; BB(0x0052d5b3);
    /* 0052d5b3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0052d5b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5b8: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5be:; BB(0x0052d5be);
    /* 0052d5be: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d5c1: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d5c4: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ca: je 0x52d645 */ if (fZ) goto L_0052d645;
L_0052d5cc:; BB(0x0052d5cc);
    /* 0052d5cc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
L_0052d5d0:; BB(0x0052d5d0);
    /* 0052d5d0: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0052d5d3: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d5d6: jl 0x52d633 */ if ((fS!=fO)) goto L_0052d633;
L_0052d5d8:; BB(0x0052d5d8);
    /* 0052d5d8: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d5db: jge 0x52d607 */ if ((fS==fO)) goto L_0052d607;
L_0052d5dd:; BB(0x0052d5dd);
    /* 0052d5dd: mov eax, ecx */ r_eax = r_ecx;
    /* 0052d5df: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
L_0052d5e0:; BB(0x0052d5e0);
    /* 0052d5e0: mov bh, 0x10 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x10u) & 0xffu) << 8);
    /* 0052d5e2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d5e5: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052d5eb: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5ed: jne 0x52d5fb */ if (!fZ) goto L_0052d5fb;
L_0052d5ef:; BB(0x0052d5ef);
    /* 0052d5ef: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052d5f9: jmp 0x52d633 */ goto L_0052d633;
L_0052d5fb:; BB(0x0052d5fb);
    /* 0052d5fb: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d605: jmp 0x52d633 */ goto L_0052d633;
L_0052d607:; BB(0x0052d607);
    /* 0052d607: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d60a: jge 0x52d617 */ if ((fS==fO)) goto L_0052d617;
L_0052d60c:; BB(0x0052d60c);
    /* 0052d60c: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0052d60f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d611: lea ecx, [eax + ecx + 2] */ r_ecx = (u32)(r_eax+r_ecx+0x2u);
    /* 0052d615: jmp 0x52d633 */ goto L_0052d633;
L_0052d617:; BB(0x0052d617);
    /* 0052d617: mov eax, dword ptr [0xa73348] */ r_eax = R32((u32)(0xa73348u));
    /* 0052d61c: movzx ebp, word ptr [ecx] */ r_ebp = (u32)R16((u32)(r_ecx));
    /* 0052d61f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d624: je 0x52d62f */ if (fZ) goto L_0052d62f;
L_0052d626:; BB(0x0052d626);
    /* 0052d626: cmp edx, 0x41 */ {  u32 a = r_edx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d629: je 0x52d75e */ if (fZ) goto L_0052d75e;
L_0052d62f:; BB(0x0052d62f);
    /* 0052d62f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d631: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0052d633:; BB(0x0052d633);
    /* 0052d633: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d636: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d639: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d63f: jne 0x52d5d0 */ if (!fZ) goto L_0052d5d0;
L_0052d641:; BB(0x0052d641);
    /* 0052d641: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0052d645:; BB(0x0052d645);
    /* 0052d645: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0052d648: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d64a: je 0x52d655 */ if (fZ) goto L_0052d655;
L_0052d64c:; BB(0x0052d64c);
    /* 0052d64c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d64d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d64e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052d650: call 0x52d9a0 */ r_esp -= 4; W32(r_esp, 0x52d655u); f_0052d9a0();
L_0052d655:; BB(0x0052d655);
    /* 0052d655: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0052d658: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d65a: jne 0x52d5a8 */ if (!fZ) goto L_0052d5a8;
L_0052d660:; BB(0x0052d660);
    /* 0052d660: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0052d663: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0052d666: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d668: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d66a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d66d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x52d672u); f_008581c5();
    /* 0052d672: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0052d675: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052d677: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d679: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d67c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x52d681u); f_008581c5();
    /* 0052d681: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d684: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d688: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0052d68b: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d695: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0052d698: mov dword ptr [0xa73350], edx */ W32((u32)(0xa73350u), r_edx);
    /* 0052d69e: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
L_0052d6a3:; BB(0x0052d6a3);
    /* 0052d6a3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0052d6a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6a8: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6ae:; BB(0x0052d6ae);
    /* 0052d6ae: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0052d6b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6b3: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6b9:; BB(0x0052d6b9);
    /* 0052d6b9: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d6bc: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d6bf: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6c4: je 0x52d737 */ if (fZ) goto L_0052d737;
L_0052d6c6:; BB(0x0052d6c6);
    /* 0052d6c6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052d6c9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d6cc: jl 0x52d72a */ if ((fS!=fO)) goto L_0052d72a;
L_0052d6ce:; BB(0x0052d6ce);
    /* 0052d6ce: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d6d1: jge 0x52d6fd */ if ((fS==fO)) goto L_0052d6fd;
L_0052d6d3:; BB(0x0052d6d3);
    /* 0052d6d3: mov eax, esi */ r_eax = r_esi;
    /* 0052d6d5: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0052d6d8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d6db: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052d6e1: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6e3: jne 0x52d6f1 */ if (!fZ) goto L_0052d6f1;
L_0052d6e5:; BB(0x0052d6e5);
    /* 0052d6e5: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052d6ef: jmp 0x52d72a */ goto L_0052d72a;
L_0052d6f1:; BB(0x0052d6f1);
    /* 0052d6f1: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052d6fb: jmp 0x52d72a */ goto L_0052d72a;
L_0052d6fd:; BB(0x0052d6fd);
    /* 0052d6fd: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d700: jge 0x52d70d */ if ((fS==fO)) goto L_0052d70d;
L_0052d702:; BB(0x0052d702);
    /* 0052d702: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0052d705: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d707: lea esi, [eax + esi + 2] */ r_esi = (u32)(r_eax+r_esi+0x2u);
    /* 0052d70b: jmp 0x52d72a */ goto L_0052d72a;
L_0052d70d:; BB(0x0052d70d);
    /* 0052d70d: mov edx, dword ptr [0xa73348] */ r_edx = R32((u32)(0xa73348u));
    /* 0052d713: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0052d716: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d719: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d71b: je 0x52d726 */ if (fZ) goto L_0052d726;
L_0052d71d:; BB(0x0052d71d);
    /* 0052d71d: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d720: je 0x52d846 */ if (fZ) goto L_0052d846;
L_0052d726:; BB(0x0052d726);
    /* 0052d726: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d728: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0052d72a:; BB(0x0052d72a);
    /* 0052d72a: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d72d: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d730: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d735: jne 0x52d6c6 */ if (!fZ) goto L_0052d6c6;
L_0052d737:; BB(0x0052d737);
    /* 0052d737: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0052d73a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d73c: je 0x52d747 */ if (fZ) goto L_0052d747;
L_0052d73e:; BB(0x0052d73e);
    /* 0052d73e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d73f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d740: mov ecx, edi */ r_ecx = r_edi;
    /* 0052d742: call 0x52db64 */ r_esp -= 4; W32(r_esp, 0x52d747u); f_0052db64();
L_0052d747:; BB(0x0052d747);
    /* 0052d747: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0052d74a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d74c: jne 0x52d6a3 */ if (!fZ) goto L_0052d6a3;
L_0052d752:; BB(0x0052d752);
    /* 0052d752: mov eax, edi */ r_eax = r_edi;
    /* 0052d754: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052d757: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052d758: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d759: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052d75a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052d75b: ret 8 */ FN_RET(0x0052d5e0); r_esp += 12; return;
L_0052d75e:; BB(0x0052d75e);
    /* 0052d75e: add dword ptr [edi + 4], 1 */ { u32 ad = (u32)(r_edi+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052d762: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0052d765: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d768: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052d76d: mov esi, 0 */ r_esi = 0x0u;
    /* 0052d772: je 0x52d633 */ if (fZ) goto L_0052d633;
L_0052d778:; BB(0x0052d778);
    /* 0052d778: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d77b: jb 0x52d842 */ if (fC) goto L_0052d842;
L_0052d781:; BB(0x0052d781);
    /* 0052d781: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0052d783: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052d787: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 0052d78a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_0052d78e:; BB(0x0052d78e);
    /* 0052d78e: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d791: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d792: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d795: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d797: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d799: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d79c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d79e: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7a0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7a8: movsx eax, word ptr [ecx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2+0x2u));
    /* 0052d7ad: lea ebx, [edx + ecx + 2] */ r_ebx = (u32)(r_edx+r_ecx+0x2u);
    /* 0052d7b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7b2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7b4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7b6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7b9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7bb: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7bd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7c2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7c5: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052d7ca: lea edx, [edx + ebx + 2] */ r_edx = (u32)(r_edx+r_ebx+0x2u);
    /* 0052d7ce: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0052d7d2: mov ebx, edx */ r_ebx = r_edx;
    /* 0052d7d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7d5: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7d7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7d9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7dc: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7de: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7e0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d7e3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7e5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d7e8: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052d7ed: lea ecx, [edx + ebx + 4] */ r_ecx = (u32)(r_edx+r_ebx+0x4u);
    /* 0052d7f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d7f2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7f4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7f6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d7f9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d7fb: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d7fd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052d800: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d802: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0052d806: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d808: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d80a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052d80c: jbe 0x52d78e */ if ((fC||fZ)) goto L_0052d78e;
L_0052d80e:; BB(0x0052d80e);
    /* 0052d80e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052d812: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
L_0052d816:; BB(0x0052d816);
    /* 0052d816: mov ebx, eax */ r_ebx = r_eax;
L_0052d818:; BB(0x0052d818);
    /* 0052d818: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d81b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d81c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d81f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d821: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d823: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d826: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052d828: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0052d82a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052d82d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d82f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d831: lea ecx, [eax + ecx + 2] */ r_ecx = (u32)(r_eax+r_ecx+0x2u);
    /* 0052d835: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d837: jb 0x52d818 */ if (fC) goto L_0052d818;
L_0052d839:; BB(0x0052d839);
    /* 0052d839: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d83d: jmp 0x52d633 */ goto L_0052d633;
L_0052d842:; BB(0x0052d842);
    /* 0052d842: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0052d844: jmp 0x52d816 */ goto L_0052d816;
L_0052d846:; BB(0x0052d846);
    /* 0052d846: mov eax, dword ptr [0xa73350] */ r_eax = R32((u32)(0xa73350u));
    /* 0052d84b: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0052d84d: mov eax, dword ptr [0xa73350] */ r_eax = R32((u32)(0xa73350u));
    /* 0052d852: mov edx, dword ptr [0xa7334c] */ r_edx = R32((u32)(0xa7334cu));
    /* 0052d858: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0052d85b: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d85e: mov dword ptr [0xa73350], eax */ W32((u32)(0xa73350u), r_eax);
    /* 0052d863: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 0052d866: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d869: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052d86e: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0052d873: je 0x52d72a */ if (fZ) goto L_0052d72a;
L_0052d879:; BB(0x0052d879);
    /* 0052d879: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0052d87c: mov ebx, eax */ r_ebx = r_eax;
    /* 0052d87e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_0052d882:; BB(0x0052d882);
    /* 0052d882: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052d885: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052d886: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d889: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d88c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d88e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d890: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0052d893: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052d895: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052d897: jle 0x52d987 */ if ((fZ||fS!=fO)) goto L_0052d987;
L_0052d89d:; BB(0x0052d89d);
    /* 0052d89d: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d8a0: jl 0x52d94b */ if ((fS!=fO)) goto L_0052d94b;
L_0052d8a6:; BB(0x0052d8a6);
    /* 0052d8a6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0052d8aa: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0052d8ae: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
L_0052d8b1:; BB(0x0052d8b1);
    /* 0052d8b1: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8b7: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0052d8bb: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8be: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8c4: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8c7: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0052d8cb: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8d1: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8d4: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8da: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8dd: movzx ebx, word ptr [esi + 8] */ r_ebx = (u32)R16((u32)(r_esi+0x8u));
    /* 0052d8e1: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d8e4: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d8ea: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d8ed: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d8f3: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d8f6: movzx ebx, word ptr [esi + 0xa] */ r_ebx = (u32)R16((u32)(r_esi+0xau));
    /* 0052d8fa: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d900: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d903: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d909: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d90c: movzx ebx, word ptr [esi + 0xe] */ r_ebx = (u32)R16((u32)(r_esi+0xeu));
    /* 0052d910: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d916: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d919: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d91f: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d922: movzx ebx, word ptr [esi + 0x10] */ r_ebx = (u32)R16((u32)(r_esi+0x10u));
    /* 0052d926: add esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d929: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d92f: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 0052d932: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052d938: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d93b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d93d: jle 0x52d8b1 */ if ((fZ||fS!=fO)) goto L_0052d8b1;
L_0052d943:; BB(0x0052d943);
    /* 0052d943: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0052d947: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0052d94b:; BB(0x0052d94b);
    /* 0052d94b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0052d94f:; BB(0x0052d94f);
    /* 0052d94f: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d955: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0052d959: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 0052d95c: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052d961: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d964: movzx ebx, word ptr [esi + 4] */ r_ebx = (u32)R16((u32)(r_esi+0x4u));
    /* 0052d968: mov edi, dword ptr [0xa7334c] */ r_edi = R32((u32)(0xa7334cu));
    /* 0052d96e: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 0052d971: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052d976: mov word ptr [edi], bx */ W16((u32)(r_edi), (u16)r_ebx);
    /* 0052d979: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d97c: add esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052d97f: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d981: jl 0x52d94f */ if ((fS!=fO)) goto L_0052d94f;
L_0052d983:; BB(0x0052d983);
    /* 0052d983: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0052d987:; BB(0x0052d987);
    /* 0052d987: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052d989: jb 0x52d882 */ if (fC) goto L_0052d882;
L_0052d98f:; BB(0x0052d98f);
    /* 0052d98f: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0052d993: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0052d996: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052d99a: jmp 0x52d72a */ goto L_0052d72a;
}

void f_0052d9a0(void) /* sub_52D9A0 */
{
    FN_ENTER(0x0052d9a0);
    /* 0052d9a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9a4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d9a7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052d9a9: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0052d9ad: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052d9b1: mov ebx, eax */ r_ebx = r_eax;
    /* 0052d9b3: mov esi, edx */ r_esi = r_edx;
L_0052d9b5:; BB(0x0052d9b5);
    /* 0052d9b5: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0052d9b8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d9ba: je 0x52da50 */ if (fZ) goto L_0052da50;
L_0052d9c0:; BB(0x0052d9c0);
    /* 0052d9c0: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0052d9c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d9c5: je 0x52da50 */ if (fZ) goto L_0052da50;
L_0052d9cb:; BB(0x0052d9cb);
    /* 0052d9cb: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052d9ce: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d9d1: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d9d7: je 0x52da50 */ if (fZ) goto L_0052da50;
L_0052d9d9:; BB(0x0052d9d9);
    /* 0052d9d9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0052d9dc:; BB(0x0052d9dc);
    /* 0052d9dc: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052d9e2: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d9e5: jl 0x52da3f */ if ((fS!=fO)) goto L_0052da3f;
L_0052d9e7:; BB(0x0052d9e7);
    /* 0052d9e7: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d9ea: jge 0x52da16 */ if ((fS==fO)) goto L_0052da16;
L_0052d9ec:; BB(0x0052d9ec);
    /* 0052d9ec: mov edx, ecx */ r_edx = r_ecx;
    /* 0052d9ee: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 0052d9f1: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d9f4: and esi, 0x1fff */ {  u32 a = r_esi; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0052d9fa: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d9fc: jne 0x52da0a */ if (!fZ) goto L_0052da0a;
L_0052d9fe:; BB(0x0052d9fe);
    /* 0052d9fe: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052da08: jmp 0x52da3f */ goto L_0052da3f;
L_0052da0a:; BB(0x0052da0a);
    /* 0052da0a: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052da14: jmp 0x52da3f */ goto L_0052da3f;
L_0052da16:; BB(0x0052da16);
    /* 0052da16: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052da19: jge 0x52da26 */ if ((fS==fO)) goto L_0052da26;
L_0052da1b:; BB(0x0052da1b);
    /* 0052da1b: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0052da1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052da20: lea ecx, [edx + ecx + 2] */ r_ecx = (u32)(r_edx+r_ecx+0x2u);
    /* 0052da24: jmp 0x52da3f */ goto L_0052da3f;
L_0052da26:; BB(0x0052da26);
    /* 0052da26: mov edx, dword ptr [0xa73348] */ r_edx = R32((u32)(0xa73348u));
    /* 0052da2c: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0052da2f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052da32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da34: je 0x52da3b */ if (fZ) goto L_0052da3b;
L_0052da36:; BB(0x0052da36);
    /* 0052da36: cmp edi, 0x41 */ {  u32 a = r_edi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da39: je 0x52da75 */ if (fZ) goto L_0052da75;
L_0052da3b:; BB(0x0052da3b);
    /* 0052da3b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052da3d: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0052da3f:; BB(0x0052da3f);
    /* 0052da3f: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052da42: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052da45: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da4b: jne 0x52d9dc */ if (!fZ) goto L_0052d9dc;
L_0052da4d:; BB(0x0052da4d);
    /* 0052da4d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0052da50:; BB(0x0052da50);
    /* 0052da50: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 0052da53: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da55: je 0x52da60 */ if (fZ) goto L_0052da60;
L_0052da57:; BB(0x0052da57);
    /* 0052da57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052da58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052da59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052da5b: call 0x52d9a0 */ r_esp -= 4; W32(r_esp, 0x52da60u); f_0052d9a0();
L_0052da60:; BB(0x0052da60);
    /* 0052da60: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0052da63: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da65: jne 0x52d9b5 */ if (!fZ) goto L_0052d9b5;
L_0052da6b:; BB(0x0052da6b);
    /* 0052da6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052da6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052da6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052da70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052da71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052da72: ret 8 */ FN_RET(0x0052d9a0); r_esp += 12; return;
L_0052da75:; BB(0x0052da75);
    /* 0052da75: add dword ptr [ebp + 4], 1 */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052da79: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0052da7c: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052da7f: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052da84: mov edi, 0 */ r_edi = 0x0u;
    /* 0052da89: je 0x52da3f */ if (fZ) goto L_0052da3f;
L_0052da8b:; BB(0x0052da8b);
    /* 0052da8b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052da8e: jb 0x52db5f */ if (fC) goto L_0052db5f;
L_0052da94:; BB(0x0052da94);
    /* 0052da94: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 0052da97: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052da9b: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 0052da9e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_0052daa2:; BB(0x0052daa2);
    /* 0052daa2: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052daa5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052daa6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052daa9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052daab: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052daad: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052dab0: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052dab2: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0052dab5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052dab8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052daba: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052dabd: movsx eax, word ptr [ecx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2+0x2u));
    /* 0052dac2: lea ebx, [edx + ecx + 2] */ r_ebx = (u32)(r_edx+r_ecx+0x2u);
    /* 0052dac6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052dac7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052dac9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052dacb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052dace: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052dad0: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0052dad3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052dad6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052dad8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052dadb: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052dae0: lea edx, [edx + ebx + 2] */ r_edx = (u32)(r_edx+r_ebx+0x2u);
    /* 0052dae4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0052dae8: mov ebx, edx */ r_ebx = r_edx;
    /* 0052daea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052daeb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052daed: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052daef: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052daf2: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052daf4: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0052daf7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052dafa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052dafc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052daff: movsx eax, word ptr [ebx + eax*2 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x2u));
    /* 0052db04: lea ecx, [edx + ebx + 4] */ r_ecx = (u32)(r_edx+r_ebx+0x4u);
    /* 0052db08: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052db09: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052db0b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052db0d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0052db10: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052db12: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0052db15: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0052db18: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052db1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052db1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052db20: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052db22: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052db24: jbe 0x52daa2 */ if ((fC||fZ)) goto L_0052daa2;
L_0052db2a:; BB(0x0052db2a);
    /* 0052db2a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0052db2e: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_0052db32:; BB(0x0052db32);
    /* 0052db32: mov ebx, eax */ r_ebx = r_eax;
L_0052db34:; BB(0x0052db34);
    /* 0052db34: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0052db37: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052db38: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052db3b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052db3d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052db3f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0052db42: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052db44: mov dword ptr [ebp], esi */ W32((u32)(r_ebp), r_esi);
    /* 0052db47: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052db4a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052db4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052db4e: lea ecx, [eax + ecx + 2] */ r_ecx = (u32)(r_eax+r_ecx+0x2u);
    /* 0052db52: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052db54: jb 0x52db34 */ if (fC) goto L_0052db34;
L_0052db56:; BB(0x0052db56);
    /* 0052db56: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0052db5a: jmp 0x52da3f */ goto L_0052da3f;
L_0052db5f:; BB(0x0052db5f);
    /* 0052db5f: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 0052db62: jmp 0x52db32 */ goto L_0052db32;
}

void f_0052db64(void) /* sub_52DB64 */
{
    FN_ENTER(0x0052db64);
    /* 0052db64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052db65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052db66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052db67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052db68: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052db6b: mov esi, ecx */ r_esi = r_ecx;
    /* 0052db6d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0052db71: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052db75: mov ebx, eax */ r_ebx = r_eax;
    /* 0052db77: mov ebp, edx */ r_ebp = r_edx;
L_0052db79:; BB(0x0052db79);
    /* 0052db79: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0052db7c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052db7e: je 0x52dc07 */ if (fZ) goto L_0052dc07;
L_0052db84:; BB(0x0052db84);
    /* 0052db84: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0052db87: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052db89: je 0x52dc07 */ if (fZ) goto L_0052dc07;
L_0052db8f:; BB(0x0052db8f);
    /* 0052db8f: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0052db92: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052db95: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052db9a: je 0x52dc07 */ if (fZ) goto L_0052dc07;
L_0052db9c:; BB(0x0052db9c);
    /* 0052db9c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052db9f: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dba2: jl 0x52dbfa */ if ((fS!=fO)) goto L_0052dbfa;
L_0052dba4:; BB(0x0052dba4);
    /* 0052dba4: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dba7: jge 0x52dbd2 */ if ((fS==fO)) goto L_0052dbd2;
L_0052dba9:; BB(0x0052dba9);
    /* 0052dba9: mov eax, edi */ r_eax = r_edi;
    /* 0052dbab: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0052dbae: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dbb1: and eax, 0x1fff */ {  u32 a = r_eax; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052dbb6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dbb8: jne 0x52dbc6 */ if (!fZ) goto L_0052dbc6;
L_0052dbba:; BB(0x0052dbba);
    /* 0052dbba: mov dword ptr [0xa73348], 1 */ W32((u32)(0xa73348u), 0x1u);
    /* 0052dbc4: jmp 0x52dbfa */ goto L_0052dbfa;
L_0052dbc6:; BB(0x0052dbc6);
    /* 0052dbc6: mov dword ptr [0xa73348], 0 */ W32((u32)(0xa73348u), 0x0u);
    /* 0052dbd0: jmp 0x52dbfa */ goto L_0052dbfa;
L_0052dbd2:; BB(0x0052dbd2);
    /* 0052dbd2: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dbd5: jge 0x52dbe2 */ if ((fS==fO)) goto L_0052dbe2;
L_0052dbd7:; BB(0x0052dbd7);
    /* 0052dbd7: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0052dbda: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052dbdc: lea edi, [eax + edi + 2] */ r_edi = (u32)(r_eax+r_edi+0x2u);
    /* 0052dbe0: jmp 0x52dbfa */ goto L_0052dbfa;
L_0052dbe2:; BB(0x0052dbe2);
    /* 0052dbe2: mov eax, dword ptr [0xa73348] */ r_eax = R32((u32)(0xa73348u));
    /* 0052dbe7: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0052dbea: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dbed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dbef: je 0x52dbf6 */ if (fZ) goto L_0052dbf6;
L_0052dbf1:; BB(0x0052dbf1);
    /* 0052dbf1: cmp edx, 0x41 */ {  u32 a = r_edx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dbf4: je 0x52dc2c */ if (fZ) goto L_0052dc2c;
L_0052dbf6:; BB(0x0052dbf6);
    /* 0052dbf6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052dbf8: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0052dbfa:; BB(0x0052dbfa);
    /* 0052dbfa: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0052dbfd: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dc00: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dc05: jne 0x52db9c */ if (!fZ) goto L_0052db9c;
L_0052dc07:; BB(0x0052dc07);
    /* 0052dc07: mov edi, dword ptr [ebp + 0x2c] */ r_edi = R32((u32)(r_ebp+0x2cu));
    /* 0052dc0a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dc0c: je 0x52dc17 */ if (fZ) goto L_0052dc17;
L_0052dc0e:; BB(0x0052dc0e);
    /* 0052dc0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dc0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052dc10: mov ecx, esi */ r_ecx = r_esi;
    /* 0052dc12: call 0x52db64 */ r_esp -= 4; W32(r_esp, 0x52dc17u); f_0052db64();
L_0052dc17:; BB(0x0052dc17);
    /* 0052dc17: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0052dc1a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dc1c: jne 0x52db79 */ if (!fZ) goto L_0052db79;
L_0052dc22:; BB(0x0052dc22);
    /* 0052dc22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052dc25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052dc26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052dc27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052dc28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052dc29: ret 8 */ FN_RET(0x0052db64); r_esp += 12; return;
L_0052dc2c:; BB(0x0052dc2c);
    /* 0052dc2c: mov eax, dword ptr [0xa73350] */ r_eax = R32((u32)(0xa73350u));
    /* 0052dc31: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0052dc33: mov edx, dword ptr [0xa73350] */ r_edx = R32((u32)(0xa73350u));
    /* 0052dc39: mov eax, dword ptr [0xa7334c] */ r_eax = R32((u32)(0xa7334cu));
    /* 0052dc3e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0052dc41: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052dc44: mov dword ptr [0xa73350], edx */ W32((u32)(0xa73350u), r_edx);
    /* 0052dc4a: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0052dc4d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dc50: and eax, 0x3fff */ {  u32 a = r_eax; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052dc55: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0052dc5a: je 0x52dbfa */ if (fZ) goto L_0052dbfa;
L_0052dc5c:; BB(0x0052dc5c);
    /* 0052dc5c: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0052dc60: mov ebx, eax */ r_ebx = r_eax;
    /* 0052dc62: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0052dc65:; BB(0x0052dc65);
    /* 0052dc65: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0052dc68: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052dc69: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dc6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052dc6f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052dc71: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052dc73: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0052dc76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052dc78: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052dc7a: jle 0x52dd6a */ if ((fZ||fS!=fO)) goto L_0052dd6a;
L_0052dc80:; BB(0x0052dc80);
    /* 0052dc80: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dc83: jl 0x52dd2e */ if ((fS!=fO)) goto L_0052dd2e;
L_0052dc89:; BB(0x0052dc89);
    /* 0052dc89: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0052dc8d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0052dc91: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
L_0052dc94:; BB(0x0052dc94);
    /* 0052dc94: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dc9a: movzx ebx, word ptr [edi + 2] */ r_ebx = (u32)R16((u32)(r_edi+0x2u));
    /* 0052dc9e: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dca1: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dca7: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dcaa: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 0052dcae: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dcb4: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dcb7: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dcbd: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dcc0: movzx ebx, word ptr [edi + 8] */ r_ebx = (u32)R16((u32)(r_edi+0x8u));
    /* 0052dcc4: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052dcc7: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dccd: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dcd0: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dcd6: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dcd9: movzx ebx, word ptr [edi + 0xa] */ r_ebx = (u32)R16((u32)(r_edi+0xau));
    /* 0052dcdd: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dce3: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dce6: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dcec: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dcef: movzx ebx, word ptr [edi + 0xe] */ r_ebx = (u32)R16((u32)(r_edi+0xeu));
    /* 0052dcf3: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dcf9: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dcfc: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dd02: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dd05: movzx ebx, word ptr [edi + 0x10] */ r_ebx = (u32)R16((u32)(r_edi+0x10u));
    /* 0052dd09: add edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dd0c: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dd12: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0052dd15: mov dword ptr [0xa7334c], ecx */ W32((u32)(0xa7334cu), r_ecx);
    /* 0052dd1b: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dd1e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dd20: jle 0x52dc94 */ if ((fZ||fS!=fO)) goto L_0052dc94;
L_0052dd26:; BB(0x0052dd26);
    /* 0052dd26: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0052dd2a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0052dd2e:; BB(0x0052dd2e);
    /* 0052dd2e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_0052dd32:; BB(0x0052dd32);
    /* 0052dd32: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dd38: movzx ebx, word ptr [edi + 2] */ r_ebx = (u32)R16((u32)(r_edi+0x2u));
    /* 0052dd3c: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 0052dd3f: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052dd44: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dd47: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 0052dd4b: mov esi, dword ptr [0xa7334c] */ r_esi = R32((u32)(0xa7334cu));
    /* 0052dd51: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 0052dd54: mov dword ptr [0xa7334c], eax */ W32((u32)(0xa7334cu), r_eax);
    /* 0052dd59: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0052dd5c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052dd5f: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052dd62: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dd64: jl 0x52dd32 */ if ((fS!=fO)) goto L_0052dd32;
L_0052dd66:; BB(0x0052dd66);
    /* 0052dd66: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0052dd6a:; BB(0x0052dd6a);
    /* 0052dd6a: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052dd6c: jb 0x52dc65 */ if (fC) goto L_0052dc65;
L_0052dd72:; BB(0x0052dd72);
    /* 0052dd72: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0052dd76: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0052dd7a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0052dd7d: jmp 0x52dbfa */ goto L_0052dbfa;
}

void f_0052dd80(void)
{
    FN_ENTER(0x0052dd80);
}

void f_0052dd84(void) /* sub_52DD84 */
{
    FN_ENTER(0x0052dd84);
    /* 0052dd84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd85: mov esi, ecx */ r_esi = r_ecx;
    /* 0052dd87: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052dd8a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x52dd8fu); f_00857e98();
    /* 0052dd8f: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052dd92: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
    /* 0052dd99: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x52dd9eu); f_00857e98();
    /* 0052dd9e: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 0052dda5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052dda8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052dda9: ret  */ FN_RET(0x0052dd84); r_esp += 4; return;
}

void f_0052ddac(void) /* sub_52DDAC */
{
    FN_ENTER(0x0052ddac);
    /* 0052ddac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddae: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ddb1: movsx eax, word ptr [esp + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x30u));
    /* 0052ddb6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052ddb7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddb9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddbb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddc0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddc2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddc4: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0052ddc7: movsx eax, word ptr [esp + 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x34u));
    /* 0052ddcc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052ddcd: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddcf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddd1: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddd6: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddd8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddda: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 0052dddd: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0052dde0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052dde2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052dde4: jle 0x52df07 */ if ((fZ||fS!=fO)) goto L_0052df07;
L_0052ddea:; BB(0x0052ddea);
    /* 0052ddea: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0052ddee: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0052ddf2: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0052ddf6: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_0052ddfa:; BB(0x0052ddfa);
    /* 0052ddfa: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0052ddfd: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 0052de00: mov edi, dword ptr [ebx + edx*8 + 4] */ r_edi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 0052de04: movzx ebp, word ptr [esi] */ r_ebp = (u32)R16((u32)(r_esi));
    /* 0052de07: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052de0a: and ebp, 0x3fff */ {  u32 a = r_ebp; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0052de10: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0052de15: je 0x52def4 */ if (fZ) goto L_0052def4;
L_0052de1b:; BB(0x0052de1b);
    /* 0052de1b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052de1f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_0052de22:; BB(0x0052de22);
    /* 0052de22: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 0052de25: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052de26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052de28: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052de2b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052de2d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052de2f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052de32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052de34: jle 0x52dee2 */ if ((fZ||fS!=fO)) goto L_0052dee2;
L_0052de3a:; BB(0x0052de3a);
    /* 0052de3a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052de3d: jl 0x52deaa */ if ((fS!=fO)) goto L_0052deaa;
L_0052de3f:; BB(0x0052de3f);
    /* 0052de3f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0052de43: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0052de47: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0052de4b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0052de4f: lea edx, [eax - 4] */ r_edx = (u32)(r_eax+0xfffffffcu);
    /* 0052de52: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_0052de56:; BB(0x0052de56);
    /* 0052de56: movzx ebp, word ptr [edi] */ r_ebp = (u32)R16((u32)(r_edi));
    /* 0052de59: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de5b: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 0052de5f: movzx ebp, word ptr [edi + 2] */ r_ebp = (u32)R16((u32)(r_edi+0x2u));
    /* 0052de63: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de65: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0052de69: movzx ebp, word ptr [edi + 4] */ r_ebp = (u32)R16((u32)(r_edi+0x4u));
    /* 0052de6d: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de6f: mov word ptr [esi + 8], bp */ W16((u32)(r_esi+0x8u), (u16)r_ebp);
    /* 0052de73: movzx ebp, word ptr [edi + 6] */ r_ebp = (u32)R16((u32)(r_edi+0x6u));
    /* 0052de77: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de79: mov word ptr [esi + 0xa], bp */ W16((u32)(r_esi+0xau), (u16)r_ebp);
    /* 0052de7d: movzx ebp, word ptr [edi + 8] */ r_ebp = (u32)R16((u32)(r_edi+0x8u));
    /* 0052de81: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de83: mov word ptr [esi + 0xe], bp */ W16((u32)(r_esi+0xeu), (u16)r_ebp);
    /* 0052de87: movzx ebp, word ptr [edi + 0xa] */ r_ebp = (u32)R16((u32)(r_edi+0xau));
    /* 0052de8b: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052de8d: mov word ptr [esi + 0x10], bp */ W16((u32)(r_esi+0x10u), (u16)r_ebp);
    /* 0052de91: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052de94: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052de97: add esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052de9a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052de9c: jle 0x52de56 */ if ((fZ||fS!=fO)) goto L_0052de56;
L_0052de9e:; BB(0x0052de9e);
    /* 0052de9e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0052dea2: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0052dea6: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0052deaa:; BB(0x0052deaa);
    /* 0052deaa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0052deae: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0052deb2: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0052deb6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0052deba:; BB(0x0052deba);
    /* 0052deba: movzx ebp, word ptr [edi] */ r_ebp = (u32)R16((u32)(r_edi));
    /* 0052debd: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052debf: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 0052dec3: movzx ebp, word ptr [edi + 2] */ r_ebp = (u32)R16((u32)(r_edi+0x2u));
    /* 0052dec7: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052dec9: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0052decd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ded0: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052ded3: add esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052ded6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ded8: jl 0x52deba */ if ((fS!=fO)) goto L_0052deba;
L_0052deda:; BB(0x0052deda);
    /* 0052deda: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0052dede: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_0052dee2:; BB(0x0052dee2);
    /* 0052dee2: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052dee4: jb 0x52de22 */ if (fC) goto L_0052de22;
L_0052deea:; BB(0x0052deea);
    /* 0052deea: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0052deee: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0052def1: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
L_0052def4:; BB(0x0052def4);
    /* 0052def4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052def7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052def9: jl 0x52ddfa */ if ((fS!=fO)) goto L_0052ddfa;
L_0052deff:; BB(0x0052deff);
    /* 0052deff: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0052df03: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_0052df07:; BB(0x0052df07);
    /* 0052df07: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052df0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052df0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052df0c: ret 8 */ FN_RET(0x0052ddac); r_esp += 12; return;
}

void f_0052df10(void) /* sub_52DF10 */
{
    FN_ENTER(0x0052df10);
    /* 0052df10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052df11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052df13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052df15: call 0x52df34 */ r_esp -= 4; W32(r_esp, 0x52df1au); f_0052df34();
    /* 0052df1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052df1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052df20: jne 0x52df26 */ if (!fZ) goto L_0052df26;
L_0052df22:; BB(0x0052df22);
    /* 0052df22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052df23: ret 4 */ FN_RET(0x0052df10); r_esp += 8; return;
L_0052df26:; BB(0x0052df26);
    /* 0052df26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052df27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52df2cu); f_005c2f74();
    /* 0052df2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052df2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052df2e: ret 4 */ FN_RET(0x0052df10); r_esp += 8; return;
}

void f_0052df34(void) /* sub_52DF34 */
{
    FN_ENTER(0x0052df34);
    /* 0052df34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052df35: mov ebp, esp */ r_ebp = r_esp;
    /* 0052df37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052df39: push 0x8d4c0c */ { u32 v = 0x8d4c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052df3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052df44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052df45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052df4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052df4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052df52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0052df55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0052df58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052df5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052df5e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052df65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052df68: mov dword ptr [ecx], 0xb01760 */ W32((u32)(r_ecx), 0xb01760u);
    /* 0052df6e: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x52df73u); f_0053140c();
    /* 0052df73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052df76: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x52df7bu); f_007b9c8c();
    /* 0052df7b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052df82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052df85: add ecx, 0x37c */ {  u32 a = r_ecx; u32 b = 0x37cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052df8b: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x52df90u); f_005769f8();
    /* 0052df90: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052df97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052df9a: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x52df9fu); f_0078638c();
    /* 0052df9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052dfa2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052dfa9: mov esp, ebp */ r_esp = r_ebp;
    /* 0052dfab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052dfac: ret  */ FN_RET(0x0052df34); r_esp += 4; return;
}

void f_0052dfb0(void) /* sub_52DFB0 */
{
    FN_ENTER(0x0052dfb0);
    /* 0052dfb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052dfb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052dfb5: call 0x52dfd4 */ r_esp -= 4; W32(r_esp, 0x52dfbau); f_0052dfd4();
    /* 0052dfba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052dfbe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052dfc0: jne 0x52dfc6 */ if (!fZ) goto L_0052dfc6;
L_0052dfc2:; BB(0x0052dfc2);
    /* 0052dfc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052dfc3: ret 4 */ FN_RET(0x0052dfb0); r_esp += 8; return;
L_0052dfc6:; BB(0x0052dfc6);
    /* 0052dfc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfc7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52dfccu); f_005c2f74();
    /* 0052dfcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052dfcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052dfce: ret 4 */ FN_RET(0x0052dfb0); r_esp += 8; return;
}

void f_0052dfd4(void) /* sub_52DFD4 */
{
    FN_ENTER(0x0052dfd4);
    /* 0052dfd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0052dfd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfd9: push 0x8d4c28 */ { u32 v = 0x8d4c28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052dfe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052dfec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052dfef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052dff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0052dff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0052dff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052dffb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052dffe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e001: mov dword ptr [ecx], 0xb018c0 */ W32((u32)(r_ecx), 0xb018c0u);
    /* 0052e007: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e00e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x52e013u); f_007ba1f0();
    /* 0052e013: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e016: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e01d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e01f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e020: ret  */ FN_RET(0x0052dfd4); r_esp += 4; return;
}

