#include "protos.h"

void f_00549050(void) /* sub_549050 */
{
    FN_ENTER(0x00549050);
    /* 00549050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549051: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549054: mov edi, ecx */ r_edi = r_ecx;
    /* 00549056: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00549059: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0054905c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0054905f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00549062: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00549065: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00549069: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054906d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x549072u); f_0082ddd8();
    /* 00549072: fld dword ptr [0x923e70] */ FPUSH(R_F32((u32)(0x923e70u)));
    /* 00549078: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054907a: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0054907d: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00549080: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00549083: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00549087: fadd dword ptr [0x923e6c] */ ST(0) = ST(0) + R_F32((u32)(0x923e6cu));
    /* 0054908d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00549091: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x549096u); f_0082dcbc();
    /* 00549096: fld dword ptr [0x923e70] */ FPUSH(R_F32((u32)(0x923e70u)));
    /* 0054909c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054909e: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005490a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005490a4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005490a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005490a9: mov ecx, edi */ r_ecx = r_edi;
    /* 005490ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005490ac: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5490b1u); f_007b4c58();
    /* 005490b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005490b3: je 0x5490d5 */ if (fZ) goto L_005490d5;
L_005490b5:; BB(0x005490b5);
    /* 005490b5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005490b9: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005490bc: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 005490be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005490c0: fmul dword ptr [0x923d64] */ ST(0) = ST(0) * R_F32((u32)(0x923d64u));
    /* 005490c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005490c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005490cd: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 005490d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005490d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005490d4: ret  */ FN_RET(0x00549050); r_esp += 4; return;
L_005490d5:; BB(0x005490d5);
    /* 005490d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005490d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005490da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005490db: ret  */ FN_RET(0x00549050); r_esp += 4; return;
}

void f_005490dc(void) /* sub_5490DC */
{
    FN_ENTER(0x005490dc);
    /* 005490dc: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 005490e2: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005490e5: je 0x5490f7 */ if (fZ) goto L_005490f7;
L_005490e7:; BB(0x005490e7);
    /* 005490e7: mov dword ptr [ecx + 0x37c], 0xd */ W32((u32)(r_ecx+0x37cu), 0xdu);
    /* 005490f1: call dword ptr [0x9bd1c8] */ { u32 t = R32((u32)(0x9bd1c8u)); r_esp -= 4; W32(r_esp, 0x5490f7u); call_ind(t); }
L_005490f7:; BB(0x005490f7);
    /* 005490f7: ret  */ FN_RET(0x005490dc); r_esp += 4; return;
}

void f_005490f8(void) /* sub_5490F8 */
{
    FN_ENTER(0x005490f8);
    /* 005490f8: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 005490fe: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00549101: je 0x54911e */ if (fZ) goto L_0054911e;
L_00549103:; BB(0x00549103);
    /* 00549103: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00549106: mov dword ptr [ecx + 0x37c], 0xc */ W32((u32)(r_ecx+0x37cu), 0xcu);
    /* 00549110: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00549115: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00549118: call dword ptr [0x9bd1c0] */ { u32 t = R32((u32)(0x9bd1c0u)); r_esp -= 4; W32(r_esp, 0x54911eu); call_ind(t); }
L_0054911e:; BB(0x0054911e);
    /* 0054911e: ret  */ FN_RET(0x005490f8); r_esp += 4; return;
}

void f_00549120(void) /* sub_549120 */
{
    FN_ENTER(0x00549120);
    /* 00549120: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00549126: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00549129: je 0x549146 */ if (fZ) goto L_00549146;
L_0054912b:; BB(0x0054912b);
    /* 0054912b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0054912e: mov dword ptr [ecx + 0x37c], 0xb */ W32((u32)(r_ecx+0x37cu), 0xbu);
    /* 00549138: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054913d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00549140: call dword ptr [0x9bd1b8] */ { u32 t = R32((u32)(0x9bd1b8u)); r_esp -= 4; W32(r_esp, 0x549146u); call_ind(t); }
L_00549146:; BB(0x00549146);
    /* 00549146: ret  */ FN_RET(0x00549120); r_esp += 4; return;
}

void f_00549148(void) /* sub_549148 */
{
    FN_ENTER(0x00549148);
    /* 00549148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549149: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054914b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054914d: call 0x549050 */ r_esp -= 4; W32(r_esp, 0x549152u); f_00549050();
    /* 00549152: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 00549158: mov dword ptr [ebx + 0x3a4], 0xc0200000 */ W32((u32)(r_ebx+0x3a4u), 0xc0200000u);
    /* 00549162: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00549164: mov dword ptr [ebx + 0x3b0], 0 */ W32((u32)(r_ebx+0x3b0u), 0x0u);
    /* 0054916e: mov dword ptr [ebx + 0x3ac], 0 */ W32((u32)(r_ebx+0x3acu), 0x0u);
    /* 00549178: mov dword ptr [ebx + 0x3a8], 0 */ W32((u32)(r_ebx+0x3a8u), 0x0u);
    /* 00549182: mov dword ptr [ebx + 0x3a0], 0 */ W32((u32)(r_ebx+0x3a0u), 0x0u);
    /* 0054918c: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 00549196: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54919bu); f_0054a160();
    /* 0054919b: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005491a1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005491a4: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005491a9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005491ac: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005491b2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005491b5: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005491ba: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005491bd: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005491c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005491c2: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 005491cc: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005491d1: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005491d4: call 0x547b30 */ r_esp -= 4; W32(r_esp, 0x5491d9u); f_00547b30();
    /* 005491d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005491da: ret  */ FN_RET(0x00549148); r_esp += 4; return;
}

void f_005491dc(void) /* sub_5491DC */
{
    FN_ENTER(0x005491dc);
    /* 005491dc: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 005491e2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005491e5: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005491ea: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005491ed: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 005491f3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005491f6: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005491fb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005491fe: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00549201: mov dword ptr [ecx + 0x3f8], 0 */ W32((u32)(r_ecx+0x3f8u), 0x0u);
    /* 0054920b: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00549210: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00549213: mov dword ptr [ecx + 0x394], 0 */ W32((u32)(r_ecx+0x394u), 0x0u);
    /* 0054921d: mov dword ptr [ecx + 0x3a4], 0xc0200000 */ W32((u32)(r_ecx+0x3a4u), 0xc0200000u);
    /* 00549227: ret  */ FN_RET(0x005491dc); r_esp += 4; return;
}

void f_00549228(void) /* sub_549228 */
{
    FN_ENTER(0x00549228);
    /* 00549228: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 0054922e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00549230: mov dword ptr [ecx + 0x394], 0x3f800000 */ W32((u32)(r_ecx+0x394u), 0x3f800000u);
    /* 0054923a: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 00549244: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549247: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054924c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054924f: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 00549255: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549258: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054925d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549260: mov dword ptr [ecx + 0x3f8], 0 */ W32((u32)(r_ecx+0x3f8u), 0x0u);
    /* 0054926a: mov ecx, dword ptr [ecx + 0x384] */ r_ecx = R32((u32)(r_ecx+0x384u));
    /* 00549270: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x549275u); f_0054a160();
    /* 00549275: ret  */ FN_RET(0x00549228); r_esp += 4; return;
}

void f_00549278(void) /* sub_549278 */
{
    FN_ENTER(0x00549278);
    /* 00549278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549279: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054927a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054927b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054927e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00549280: mov dword ptr [ebp + 0x3b4], 0 */ W32((u32)(r_ebp+0x3b4u), 0x0u);
    /* 0054928a: lea ebx, [ebp + 0x3b8] */ r_ebx = (u32)(r_ebp+0x3b8u);
    /* 00549290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549291: push dword ptr [0xa738a8] */ { u32 v = R32((u32)(0xa738a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549297: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00549299: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x54929eu); f_007714cc();
    /* 0054929e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005492a1: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005492a6: je 0x5493df */ if (fZ) goto L_005493df;
L_005492ac:; BB(0x005492ac);
    /* 005492ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005492ae: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5492b3u); f_007751b0();
    /* 005492b3: fld dword ptr [0x923e54] */ FPUSH(R_F32((u32)(0x923e54u)));
    /* 005492b9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005492bb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005492be: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005492c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005492c7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005492cb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005492cf: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005492d3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005492d6: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005492da: mov ecx, esi */ r_ecx = r_esi;
    /* 005492dc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5492e1u); f_0082dcbc();
    /* 005492e1: fld dword ptr [0xa738b0] */ FPUSH(R_F32((u32)(0xa738b0u)));
    /* 005492e7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005492e9: fadd dword ptr [ebp + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3b8u));
    /* 005492ef: fstp dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0)); FPOP();
    /* 005492f5: mov ecx, esi */ r_ecx = r_esi;
    /* 005492f7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5492fcu); f_0082ddd8();
    /* 005492fc: fld dword ptr [0xa738b0] */ FPUSH(R_F32((u32)(0xa738b0u)));
    /* 00549302: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00549304: fadd dword ptr [ebp + 0x3c0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c0u));
    /* 0054930a: fstp dword ptr [ebp + 0x3c0] */ W_F32((u32)(r_ebp+0x3c0u), ST(0)); FPOP();
    /* 00549310: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549312: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x549317u); f_0083173c();
    /* 00549317: fcomp dword ptr [0x923e50] */ fx_compare(ST(0), R_F32((u32)(0x923e50u))); FPOP();
    /* 0054931d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054931f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00549320: ja 0x54933b */ if ((!fC&&!fZ)) goto L_0054933b;
L_00549322:; BB(0x00549322);
    /* 00549322: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 0054932c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054932e: call dword ptr [0x9bd170] */ { u32 t = R32((u32)(0x9bd170u)); r_esp -= 4; W32(r_esp, 0x549334u); call_ind(t); }
    /* 00549334: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549337: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549339: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054933a: ret  */ FN_RET(0x00549278); r_esp += 4; return;
L_0054933b:; BB(0x0054933b);
    /* 0054933b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054933d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x549342u); f_0082df08();
    /* 00549342: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00549344: movzx eax, byte ptr [0xa7388c] */ r_eax = (u32)R8((u32)(0xa7388cu));
    /* 0054934b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054934d: jne 0x549361 */ if (!fZ) goto L_00549361;
L_0054934f:; BB(0x0054934f);
    /* 0054934f: mov dword ptr [0xa73890], 0x428c0000 */ W32((u32)(0xa73890u), 0x428c0000u);
    /* 00549359: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054935c: mov byte ptr [0xa7388c], al */ W8((u32)(0xa7388cu), (u8)r_eax);
L_00549361:; BB(0x00549361);
    /* 00549361: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00549363: jne 0x549379 */ if (!fZ) goto L_00549379;
L_00549365:; BB(0x00549365);
    /* 00549365: mov dword ptr [0xa73894], 0x41f00000 */ W32((u32)(0xa73894u), 0x41f00000u);
    /* 0054936f: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549374: mov byte ptr [0xa7388c], al */ W8((u32)(0xa7388cu), (u8)r_eax);
L_00549379:; BB(0x00549379);
    /* 00549379: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054937b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x549380u); f_007751b0();
    /* 00549380: fld dword ptr [0xa73894] */ FPUSH(R_F32((u32)(0xa73894u)));
    /* 00549386: mov ecx, dword ptr [ebp + 0x384] */ r_ecx = R32((u32)(r_ebp+0x384u));
    /* 0054938c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054938e: fadd dword ptr [0xa73890] */ ST(0) = ST(0) + R_F32((u32)(0xa73890u));
    /* 00549394: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 0054939a: mov dword ptr [ebp + 0x3a0], 0x3f800000 */ W32((u32)(r_ebp+0x3a0u), 0x3f800000u);
    /* 005493a4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005493a6: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5493abu); f_0054a160();
    /* 005493ab: mov edx, dword ptr [ebp + 0x388] */ r_edx = R32((u32)(r_ebp+0x388u));
    /* 005493b1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005493b4: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005493b9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005493bc: mov esi, dword ptr [ebp + 0x388] */ r_esi = R32((u32)(r_ebp+0x388u));
    /* 005493c2: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 005493c5: or ebx, 0x500 */ {  u32 a = r_ebx; u32 b = 0x500u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005493cb: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 005493ce: mov dword ptr [ebp + 0x3f8], 1 */ W32((u32)(r_ebp+0x3f8u), 0x1u);
    /* 005493d8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005493db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005493dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005493dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005493de: ret  */ FN_RET(0x00549278); r_esp += 4; return;
L_005493df:; BB(0x005493df);
    /* 005493df: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 005493e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005493eb: call dword ptr [0x9bd170] */ { u32 t = R32((u32)(0x9bd170u)); r_esp -= 4; W32(r_esp, 0x5493f1u); call_ind(t); }
    /* 005493f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005493f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005493f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005493f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005493f7: ret  */ FN_RET(0x00549278); r_esp += 4; return;
}

void f_005493f8(void) /* sub_5493F8 */
{
    FN_ENTER(0x005493f8);
    /* 005493f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005493f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005493fb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005493fe: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 00549404: mov dword ptr [ebx + 0x390], 8 */ W32((u32)(r_ebx+0x390u), 0x8u);
    /* 0054940e: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549413: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00549416: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00549418: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54941du); f_0054a160();
    /* 0054941d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00549420: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549424: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549425: push 0x275 */ { u32 v = 0x275u; r_esp -= 4; W32(r_esp, v); }
    /* 0054942a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54942fu); f_00814298();
    /* 0054942f: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549435: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549438: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054943d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549440: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549446: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549449: or eax, 0xa000028 */ {  u32 a = r_eax; u32 b = 0xa000028u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054944e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549451: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 0054945b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054945e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054945f: ret  */ FN_RET(0x005493f8); r_esp += 4; return;
}

void f_00549460(void) /* sub_549460 */
{
    FN_ENTER(0x00549460);
    /* 00549460: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549461: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00549463: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00549466: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00549468: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054946d: mov dword ptr [ebx + 0x390], 0x14 */ W32((u32)(r_ebx+0x390u), 0x14u);
    /* 00549477: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054947a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054947b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054947c: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0054947f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549480: push 0x275 */ { u32 v = 0x275u; r_esp -= 4; W32(r_esp, v); }
    /* 00549485: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54948au); f_00814298();
    /* 0054948a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054948d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054948f: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 00549495: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54949au); f_0054a160();
    /* 0054949a: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005494a0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005494a3: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005494a8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005494ab: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005494b1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005494b4: or eax, 0xa000028 */ {  u32 a = r_eax; u32 b = 0xa000028u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005494b9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005494bc: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 005494c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005494c7: ret  */ FN_RET(0x00549460); r_esp += 4; return;
}

void f_005494c8(void) /* sub_5494C8 */
{
    FN_ENTER(0x005494c8);
    /* 005494c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005494c9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005494cc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005494ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005494d0: mov dword ptr [ebx + 0x3cc], 0xffff */ W32((u32)(r_ebx+0x3ccu), 0xffffu);
    /* 005494da: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5494dfu); f_007751b0();
    /* 005494df: fld dword ptr [0x923e40] */ FPUSH(R_F32((u32)(0x923e40u)));
    /* 005494e5: mov edx, dword ptr [0xa738cc] */ r_edx = R32((u32)(0xa738ccu));
    /* 005494eb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005494ed: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005494f0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005494f4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005494f9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005494fd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00549501: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00549505: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00549508: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0054950c: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0054950f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549511: mov dword ptr [ebx + 0x38c], 0x7fffffff */ W32((u32)(r_ebx+0x38cu), 0x7fffffffu);
    /* 0054951b: add eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00549520: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 00549526: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00549529: mov dword ptr [ebx + 0x3c4], eax */ W32((u32)(r_ebx+0x3c4u), r_eax);
    /* 0054952f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x549534u); f_007751b0();
    /* 00549534: fcomp dword ptr [0x923e3c] */ fx_compare(ST(0), R_F32((u32)(0x923e3cu))); FPOP();
    /* 0054953a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054953c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054953d: jbe 0x54954d */ if ((fC||fZ)) goto L_0054954d;
L_0054953f:; BB(0x0054953f);
    /* 0054953f: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 00549545: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00549547: mov dword ptr [ebx + 0x3c4], eax */ W32((u32)(r_ebx+0x3c4u), r_eax);
L_0054954d:; BB(0x0054954d);
    /* 0054954d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054954f: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 00549555: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54955au); f_0054a160();
    /* 0054955a: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549560: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549563: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00549568: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054956b: mov dword ptr [ebx + 0x3f8], 1 */ W32((u32)(r_ebx+0x3f8u), 0x1u);
    /* 00549575: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549578: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549579: ret  */ FN_RET(0x005494c8); r_esp += 4; return;
}

void f_0054957c(void) /* sub_54957C */
{
    FN_ENTER(0x0054957c);
    /* 0054957c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054957d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549580: mov esi, ecx */ r_esi = r_ecx;
    /* 00549582: mov ecx, esi */ r_ecx = r_esi;
    /* 00549584: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x549589u); f_007751b0();
    /* 00549589: fld dword ptr [0x923e38] */ FPUSH(R_F32((u32)(0x923e38u)));
    /* 0054958f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00549591: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00549594: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00549598: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054959d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005495a1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005495a5: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005495a9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005495ac: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005495b0: mov dword ptr [esi + 0x3c4], 0x888 */ W32((u32)(r_esi+0x3c4u), 0x888u);
    /* 005495ba: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005495bd: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 005495c3: mov ecx, esi */ r_ecx = r_esi;
    /* 005495c5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5495cau); f_007751b0();
    /* 005495ca: fcomp dword ptr [0x923e34] */ fx_compare(ST(0), R_F32((u32)(0x923e34u))); FPOP();
    /* 005495d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005495d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005495d3: jbe 0x5495e3 */ if ((fC||fZ)) goto L_005495e3;
L_005495d5:; BB(0x005495d5);
    /* 005495d5: mov eax, dword ptr [esi + 0x3c4] */ r_eax = R32((u32)(r_esi+0x3c4u));
    /* 005495db: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005495dd: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
L_005495e3:; BB(0x005495e3);
    /* 005495e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005495e5: mov ecx, dword ptr [esi + 0x384] */ r_ecx = R32((u32)(r_esi+0x384u));
    /* 005495eb: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5495f0u); f_0054a160();
    /* 005495f0: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 005495f6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005495f9: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005495fe: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549601: mov dword ptr [esi + 0x3f8], 1 */ W32((u32)(r_esi+0x3f8u), 0x1u);
    /* 0054960b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054960e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054960f: ret  */ FN_RET(0x0054957c); r_esp += 4; return;
}

void f_00549610(void) /* sub_549610 */
{
    FN_ENTER(0x00549610);
    /* 00549610: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549611: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549614: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00549616: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549618: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54961du); f_007751b0();
    /* 0054961d: fld dword ptr [0x923e30] */ FPUSH(R_F32((u32)(0x923e30u)));
    /* 00549623: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00549625: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 0054962b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0054962e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00549632: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549637: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054963b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0054963f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00549643: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00549646: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0054964a: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054964d: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 00549653: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549655: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54965au); f_0054a160();
    /* 0054965a: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549660: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549663: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00549668: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054966b: mov dword ptr [ebx + 0x3f8], 1 */ W32((u32)(r_ebx+0x3f8u), 0x1u);
    /* 00549675: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549678: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549679: ret  */ FN_RET(0x00549610); r_esp += 4; return;
}

void f_0054967c(void) /* sub_54967C */
{
    FN_ENTER(0x0054967c);
    /* 0054967c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054967d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054967f: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 00549685: mov dword ptr [ebx + 0x38c], 0x1e */ W32((u32)(r_ebx+0x38cu), 0x1eu);
    /* 0054968f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00549691: mov dword ptr [ebx + 0x390], 8 */ W32((u32)(r_ebx+0x390u), 0x8u);
    /* 0054969b: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5496a0u); f_0054a160();
    /* 005496a0: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005496a6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005496a9: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005496ae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005496b1: mov dword ptr [ebx + 0x3f8], 1 */ W32((u32)(r_ebx+0x3f8u), 0x1u);
    /* 005496bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005496bc: ret  */ FN_RET(0x0054967c); r_esp += 4; return;
}

void f_005496c0(void) /* sub_5496C0 */
{
    FN_ENTER(0x005496c0);
    /* 005496c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005496c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005496c3: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 005496c9: mov dword ptr [ebx + 0x38c], 0x1e */ W32((u32)(r_ebx+0x38cu), 0x1eu);
    /* 005496d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005496d5: mov dword ptr [ebx + 0x390], 0xc */ W32((u32)(r_ebx+0x390u), 0xcu);
    /* 005496df: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5496e4u); f_0054a160();
    /* 005496e4: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 005496ea: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005496ed: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005496f2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005496f5: mov dword ptr [ebx + 0x3f8], 1 */ W32((u32)(r_ebx+0x3f8u), 0x1u);
    /* 005496ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549700: ret  */ FN_RET(0x005496c0); r_esp += 4; return;
}

void f_00549704(void) /* sub_549704 */
{
    FN_ENTER(0x00549704);
    /* 00549704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549705: mov edi, ecx */ r_edi = r_ecx;
    /* 00549707: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054970a: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 00549710: mov dword ptr [edi + 0x3b0], 0x3f800000 */ W32((u32)(r_edi+0x3b0u), 0x3f800000u);
    /* 0054971a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054971c: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00549721: mov dword ptr [edi + 0x3ac], 0x3f800000 */ W32((u32)(r_edi+0x3acu), 0x3f800000u);
    /* 0054972b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0054972e: mov dword ptr [edi + 0x3a8], 0x3f800000 */ W32((u32)(r_edi+0x3a8u), 0x3f800000u);
    /* 00549738: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 00549742: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x549747u); f_0054a160();
    /* 00549747: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 0054974d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549750: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00549755: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549758: mov dword ptr [edi + 0x3f8], 1 */ W32((u32)(r_edi+0x3f8u), 0x1u);
    /* 00549762: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00549763: ret  */ FN_RET(0x00549704); r_esp += 4; return;
}

void f_00549764(void) /* sub_549764 */
{
    FN_ENTER(0x00549764);
    /* 00549764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549765: mov edi, ecx */ r_edi = r_ecx;
    /* 00549767: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054976a: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054976f: mov dword ptr [edi + 0x3b0], 0x3f800000 */ W32((u32)(r_edi+0x3b0u), 0x3f800000u);
    /* 00549779: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0054977c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0054977f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00549781: mov dword ptr [edi + 0x3ac], 0x3f800000 */ W32((u32)(r_edi+0x3acu), 0x3f800000u);
    /* 0054978b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054978c: mov dword ptr [edi + 0x3a8], 0x3f800000 */ W32((u32)(r_edi+0x3a8u), 0x3f800000u);
    /* 00549796: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549798: push 0x276 */ { u32 v = 0x276u; r_esp -= 4; W32(r_esp, v); }
    /* 0054979d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5497a2u); f_00814298();
    /* 005497a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005497a5: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 005497ab: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005497ae: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005497b1: jge 0x5497bc */ if ((fS==fO)) goto L_005497bc;
L_005497b3:; BB(0x005497b3);
    /* 005497b3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005497b5: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5497bau); f_0054a160();
    /* 005497ba: jmp 0x5497cd */ goto L_005497cd;
L_005497bc:; BB(0x005497bc);
    /* 005497bc: mov dword ptr [edi + 0x38c], 0x10 */ W32((u32)(r_edi+0x38cu), 0x10u);
    /* 005497c6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005497c8: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5497cdu); f_0054a160();
L_005497cd:; BB(0x005497cd);
    /* 005497cd: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 005497d3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005497d6: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005497db: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005497de: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 005497e4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005497e7: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005497ec: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005497ef: mov dword ptr [edi + 0x3f8], 0 */ W32((u32)(r_edi+0x3f8u), 0x0u);
    /* 005497f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005497fa: ret  */ FN_RET(0x00549764); r_esp += 4; return;
}

void f_005497fc(void) /* sub_5497FC */
{
    FN_ENTER(0x005497fc);
    /* 005497fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005497fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005497ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549801: mov dword ptr [ebx + 0x3b0], 0x3f800000 */ W32((u32)(r_ebx+0x3b0u), 0x3f800000u);
    /* 0054980b: mov dword ptr [ebx + 0x3ac], 0x3f800000 */ W32((u32)(r_ebx+0x3acu), 0x3f800000u);
    /* 00549815: mov dword ptr [ebx + 0x3a8], 0x3f800000 */ W32((u32)(r_ebx+0x3a8u), 0x3f800000u);
    /* 0054981f: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x549824u); f_00787534();
    /* 00549824: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 0054982a: mov dword ptr [ebx + 0x380], 0 */ W32((u32)(r_ebx+0x380u), 0x0u);
    /* 00549834: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00549837: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054983a: jge 0x54984f */ if ((fS==fO)) goto L_0054984f;
L_0054983c:; BB(0x0054983c);
    /* 0054983c: mov dword ptr [ebx + 0x38c], 0x22 */ W32((u32)(r_ebx+0x38cu), 0x22u);
    /* 00549846: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00549848: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x54984du); f_0054a160();
    /* 0054984d: jmp 0x549860 */ goto L_00549860;
L_0054984f:; BB(0x0054984f);
    /* 0054984f: mov dword ptr [ebx + 0x38c], 0x20 */ W32((u32)(r_ebx+0x38cu), 0x20u);
    /* 00549859: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054985b: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x549860u); f_0054a160();
L_00549860:; BB(0x00549860);
    /* 00549860: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549866: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00549869: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054986e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549871: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00549877: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054987a: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054987f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00549882: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 0054988c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054988d: ret  */ FN_RET(0x005497fc); r_esp += 4; return;
}

void f_00549890(void) /* sub_549890 */
{
    FN_ENTER(0x00549890);
    /* 00549890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549891: mov edi, ecx */ r_edi = r_ecx;
    /* 00549893: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 00549899: mov dword ptr [edi + 0x3a4], 0xc0200000 */ W32((u32)(r_edi+0x3a4u), 0xc0200000u);
    /* 005498a3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005498a5: mov dword ptr [edi + 0x3b0], 0 */ W32((u32)(r_edi+0x3b0u), 0x0u);
    /* 005498af: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 005498b9: mov dword ptr [edi + 0x3a8], 0 */ W32((u32)(r_edi+0x3a8u), 0x0u);
    /* 005498c3: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 005498cd: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5498d2u); f_0054a160();
    /* 005498d2: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 005498d8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005498db: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005498e0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005498e3: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 005498e9: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005498ec: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005498f1: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005498f4: mov dword ptr [edi + 0x3f8], 0 */ W32((u32)(r_edi+0x3f8u), 0x0u);
    /* 005498fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005498ff: ret  */ FN_RET(0x00549890); r_esp += 4; return;
}

void f_00549900(void)
{
    FN_ENTER(0x00549900);
    /* 00549900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549901: mov ebp, esp */ r_ebp = r_esp;
    /* 00549903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549905: push 0x8d5aa2 */ { u32 v = 0x8d5aa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054990a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549911: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00549918: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054991b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054991e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00549921: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00549924: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00549927: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549929: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0054992c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054992f: push 0x43c */ { u32 v = 0x43cu; r_esp -= 4; W32(r_esp, v); }
    /* 00549934: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x549939u); f_005caba4();
    /* 00549939: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054993a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0054993d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054993f: je 0x5499ac */ if (fZ) goto L_005499ac;
L_00549941:; BB(0x00549941);
    /* 00549941: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00549948: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054994f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00549951: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x549956u); f_005caba4();
    /* 00549956: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549957: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054995a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054995c: je 0x5499a8 */ if (fZ) goto L_005499a8;
L_0054995e:; BB(0x0054995e);
    /* 0054995e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00549965: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054996c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549972: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00549975: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x54997au); f_00787a4c();
    /* 0054997a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054997d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00549984:; BB(0x00549984);
    /* 00549984: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549987: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054998b: call 0x5499b0 */ r_esp -= 4; W32(r_esp, 0x549990u); f_005499b0();
    /* 00549990: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549993: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0054999a:; BB(0x0054999a);
    /* 0054999a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054999d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005499a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005499a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005499a7: ret  */ FN_RET(0x00549900); r_esp += 4; return;
L_005499a8:; BB(0x005499a8);
    /* 005499a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005499aa: jmp 0x549984 */ goto L_00549984;
L_005499ac:; BB(0x005499ac);
    /* 005499ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005499ae: jmp 0x54999a */ goto L_0054999a;
}

void f_005499b0(void) /* sub_5499B0 */
{
    FN_ENTER(0x005499b0);
    /* 005499b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005499b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005499b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005499b5: push 0x8d5abc */ { u32 v = 0x8d5abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005499ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005499c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005499c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005499c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005499cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005499ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005499d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005499d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005499d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005499da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005499dd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005499e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005499e3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x5499e8u); f_007865e8();
    /* 005499e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005499ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005499f2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005499f5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 005499fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005499fc: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005499ff: mov dword ptr [ecx], 0xb037a0 */ W32((u32)(r_ecx), 0xb037a0u);
    /* 00549a05: mov eax, dword ptr [0x9bd2e8] */ r_eax = R32((u32)(0x9bd2e8u));
    /* 00549a0a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00549a0d: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00549a13: call dword ptr [0xb038ec] */ { u32 t = R32((u32)(0xb038ecu)); r_esp -= 4; W32(r_esp, 0x549a19u); call_ind(t); }
    /* 00549a19: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549a1c: call 0x5477f8 */ r_esp -= 4; W32(r_esp, 0x549a21u); f_005477f8();
    /* 00549a21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549a24: call 0x549f70 */ r_esp -= 4; W32(r_esp, 0x549a29u); f_00549f70();
    /* 00549a29: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549a2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549a2e: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 00549a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549a32: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x549a37u); f_007b4c58();
    /* 00549a37: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549a3a: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00549a44: call dword ptr [0x9bd160] */ { u32 t = R32((u32)(0x9bd160u)); r_esp -= 4; W32(r_esp, 0x549a4au); call_ind(t); }
    /* 00549a4a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00549a4d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549a50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549a53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549a5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00549a5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549a5d: ret 8 */ FN_RET(0x005499b0); r_esp += 12; return;
}

void f_00549a60(void)
{
    FN_ENTER(0x00549a60);
    /* 00549a60: mov ecx, dword ptr [0xa738c8] */ r_ecx = R32((u32)(0xa738c8u));
    /* 00549a66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00549a68: je 0x549a7d */ if (fZ) goto L_00549a7d;
L_00549a6a:; BB(0x00549a6a);
    /* 00549a6a: je 0x549a73 */ if (fZ) goto L_00549a73;
L_00549a6c:; BB(0x00549a6c);
    /* 00549a6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549a6e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x549a73u); f_004066a8();
L_00549a73:; BB(0x00549a73);
    /* 00549a73: mov dword ptr [0xa738c8], 0 */ W32((u32)(0xa738c8u), 0x0u);
L_00549a7d:; BB(0x00549a7d);
    /* 00549a7d: ret  */ FN_RET(0x00549a60); r_esp += 4; return;
}

void f_00549a80(void) /* sub_549A80 */
{
    FN_ENTER(0x00549a80);
    /* 00549a80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549a81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549a83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549a86: mov edi, ecx */ r_edi = r_ecx;
    /* 00549a88: fld dword ptr [0x923d6c] */ FPUSH(R_F32((u32)(0x923d6cu)));
    /* 00549a8e: fadd dword ptr [edi + 0x340] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x340u));
    /* 00549a94: fstp dword ptr [edi + 0x340] */ W_F32((u32)(r_edi+0x340u), ST(0)); FPOP();
    /* 00549a9a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00549a9c: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00549a9f: lea edx, [edi + 0x33c] */ r_edx = (u32)(r_edi+0x33cu);
    /* 00549aa5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00549aa7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x549aacu); f_0082ebac();
    /* 00549aac: mov eax, dword ptr [edi + 0x354] */ r_eax = R32((u32)(r_edi+0x354u));
    /* 00549ab2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00549ab5: cmp eax, dword ptr [0xa738b4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa738b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549abb: mov dword ptr [edi + 0x354], eax */ W32((u32)(r_edi+0x354u), r_eax);
    /* 00549ac1: jle 0x549ac8 */ if ((fZ||fS!=fO)) goto L_00549ac8;
L_00549ac3:; BB(0x00549ac3);
    /* 00549ac3: mov esi, 1 */ r_esi = 0x1u;
L_00549ac8:; BB(0x00549ac8);
    /* 00549ac8: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00549acb: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00549ace: fadd dword ptr [0x923d68] */ ST(0) = ST(0) + R_F32((u32)(0x923d68u));
    /* 00549ad4: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00549ad7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00549adb: mov ecx, edi */ r_ecx = r_edi;
    /* 00549add: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00549ae0: lea eax, [edi + 0x250] */ r_eax = (u32)(r_edi+0x250u);
    /* 00549ae6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00549aea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00549aed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549aee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549aef: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x549af4u); f_007b4c58();
    /* 00549af4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549af6: je 0x549b15 */ if (fZ) goto L_00549b15;
L_00549af8:; BB(0x00549af8);
    /* 00549af8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00549afc: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00549aff: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 00549b03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00549b05: mov dword ptr [edi + 0x348], edx */ W32((u32)(r_edi+0x348u), r_edx);
    /* 00549b0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00549b0c: ja 0x549b1a */ if ((!fC&&!fZ)) goto L_00549b1a;
L_00549b0e:; BB(0x00549b0e);
    /* 00549b0e: mov esi, 1 */ r_esi = 0x1u;
    /* 00549b13: jmp 0x549b1a */ goto L_00549b1a;
L_00549b15:; BB(0x00549b15);
    /* 00549b15: mov esi, 1 */ r_esi = 0x1u;
L_00549b1a:; BB(0x00549b1a);
    /* 00549b1a: fld dword ptr [edi + 0x34c] */ FPUSH(R_F32((u32)(r_edi+0x34cu)));
    /* 00549b20: fadd dword ptr [edi + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x35cu));
    /* 00549b26: fcom dword ptr [0xa738b8] */ fx_compare(ST(0), R_F32((u32)(0xa738b8u))); 
    /* 00549b2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00549b2e: fstp dword ptr [edi + 0x34c] */ W_F32((u32)(r_edi+0x34cu), ST(0)); FPOP();
    /* 00549b34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00549b35: jae 0x549b3b */ if (!fC) goto L_00549b3b;
L_00549b37:; BB(0x00549b37);
    /* 00549b37: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549b39: je 0x549b85 */ if (fZ) goto L_00549b85;
L_00549b3b:; BB(0x00549b3b);
    /* 00549b3b: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00549b3e: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00549b41: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 00549b44: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00549b48: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00549b4c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00549b50: fadd dword ptr [0x923e1c] */ ST(0) = ST(0) + R_F32((u32)(0x923e1cu));
    /* 00549b56: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00549b5a: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00549b5e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00549b62: push dword ptr [edi + 0x358] */ { u32 v = R32((u32)(r_edi+0x358u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549b69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549b6a: push dword ptr [edi + 0x350] */ { u32 v = R32((u32)(r_edi+0x350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549b70: call 0x6ec8ec */ r_esp -= 4; W32(r_esp, 0x549b75u); f_006ec8ec();
    /* 00549b75: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549b78: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00549b7c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549b81: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_00549b85:; BB(0x00549b85);
    /* 00549b85: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549b88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549b89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549b8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00549b8b: ret  */ FN_RET(0x00549a80); r_esp += 4; return;
}

void f_00549b8c(void) /* sub_549B8C */
{
    FN_ENTER(0x00549b8c);
    /* 00549b8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549b8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549b8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549b8f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549b92: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00549b94: mov ebx, dword ptr [0xa738c8] */ r_ebx = R32((u32)(0xa738c8u));
    /* 00549b9a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549b9c: je 0x549cfe */ if (fZ) goto L_00549cfe;
L_00549ba2:; BB(0x00549ba2);
    /* 00549ba2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00549ba4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549ba6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x549babu); f_005b8610();
    /* 00549bab: mov esi, eax */ r_esi = r_eax;
    /* 00549bad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00549baf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549bb1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x549bb6u); f_005b8624();
    /* 00549bb6: mov ebx, eax */ r_ebx = r_eax;
    /* 00549bb8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x549bbdu); f_0082d7b0();
    /* 00549bbd: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00549bc0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x549bc5u); f_0082d838();
    /* 00549bc5: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549bc8: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549bcb: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00549bce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00549bd0: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x549bd5u); f_0082df5c();
    /* 00549bd5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00549bd7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x549bdcu); f_00829cc8();
    /* 00549bdc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549bdd: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x549be2u); f_0082e1e8();
    /* 00549be2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549be3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x549be8u); f_0082da80();
    /* 00549be8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x549bedu); f_0082d7b0();
    /* 00549bed: fld dword ptr [0x923d74] */ FPUSH(R_F32((u32)(0x923d74u)));
    /* 00549bf3: fadd dword ptr [ebp + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x348u));
    /* 00549bf9: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00549bfc: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00549bff: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549c02: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00549c06: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00549c09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00549c0b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00549c0f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x549c14u); f_00830b74();
    /* 00549c14: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00549c18: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00549c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549c1c: lea ebx, [ebp + 0x250] */ r_ebx = (u32)(r_ebp+0x250u);
    /* 00549c22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549c23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00549c24: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x549c29u); f_007a8d98();
    /* 00549c29: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549c2c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00549c2f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00549c31: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x549c36u); f_00830c04();
    /* 00549c36: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00549c3a: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00549c40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00549c42: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x549c47u); f_0082e9e4();
    /* 00549c47: movzx edx, byte ptr [0xa73898] */ r_edx = (u32)R8((u32)(0xa73898u));
    /* 00549c4e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00549c51: jne 0x549c6e */ if (!fZ) goto L_00549c6e;
L_00549c53:; BB(0x00549c53);
    /* 00549c53: fld dword ptr [0x923e18] */ FPUSH(R_F32((u32)(0x923e18u)));
    /* 00549c59: mov dword ptr [0xa7389c], 0x42200000 */ W32((u32)(0xa7389cu), 0x42200000u);
    /* 00549c63: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00549c66: mov byte ptr [0xa73898], dl */ W8((u32)(0xa73898u), (u8)r_edx);
    /* 00549c6c: jmp 0x549c74 */ goto L_00549c74;
L_00549c6e:; BB(0x00549c6e);
    /* 00549c6e: fld dword ptr [0xa7389c] */ FPUSH(R_F32((u32)(0xa7389cu)));
L_00549c74:; BB(0x00549c74);
    /* 00549c74: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00549c77: fsub dword ptr [ebp + 0x348] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x348u));
    /* 00549c7d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00549c7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00549c81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00549c82: jbe 0x549c8a */ if ((fC||fZ)) goto L_00549c8a;
L_00549c84:; BB(0x00549c84);
    /* 00549c84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00549c86: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00549c88: jmp 0x549c9b */ goto L_00549c9b;
L_00549c8a:; BB(0x00549c8a);
    /* 00549c8a: fld dword ptr [0x923e14] */ FPUSH(R_F32((u32)(0x923e14u)));
    /* 00549c90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00549c92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00549c94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00549c95: jbe 0x549c99 */ if ((fC||fZ)) goto L_00549c99;
L_00549c97:; BB(0x00549c97);
    /* 00549c97: fst st(1) */ ST(1) = ST(0);
L_00549c99:; BB(0x00549c99);
    /* 00549c99: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00549c9b:; BB(0x00549c9b);
    /* 00549c9b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00549ca0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00549ca2: fchs  */ ST(0) = -ST(0);
    /* 00549ca4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00549ca6: fadd dword ptr [0x923e10] */ ST(0) = ST(0) + R_F32((u32)(0x923e10u));
    /* 00549cac: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00549caf: jne 0x549cc7 */ if (!fZ) goto L_00549cc7;
L_00549cb1:; BB(0x00549cb1);
    /* 00549cb1: mov dword ptr [0xa738a0], 0x3f266666 */ W32((u32)(0xa738a0u), 0x3f266666u);
    /* 00549cbb: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00549cc1: mov byte ptr [0xa73898], dl */ W8((u32)(0xa73898u), (u8)r_edx);
L_00549cc7:; BB(0x00549cc7);
    /* 00549cc7: fld dword ptr [0xa738a0] */ FPUSH(R_F32((u32)(0xa738a0u)));
    /* 00549ccd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00549ccf: fadd dword ptr [0x923d70] */ ST(0) = ST(0) + R_F32((u32)(0x923d70u));
    /* 00549cd5: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00549cd9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00549cdd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00549ce1: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00549ce5: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x549ceau); f_00831290();
    /* 00549cea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549cec: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x549cf1u); f_0052d46c();
    /* 00549cf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549cf2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x549cf7u); f_0082da80();
    /* 00549cf7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549cfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549cfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549cfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549cfd: ret  */ FN_RET(0x00549b8c); r_esp += 4; return;
L_00549cfe:; BB(0x00549cfe);
    /* 00549cfe: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00549d02: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549d07: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00549d0b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549d0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549d0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549d10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549d11: ret  */ FN_RET(0x00549b8c); r_esp += 4; return;
}

void f_00549d14(void) /* sub_549D14 */
{
    FN_ENTER(0x00549d14);
    /* 00549d14: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549d17: mov dword ptr [0xa738bc], 0x3f800000 */ W32((u32)(0xa738bcu), 0x3f800000u);
    /* 00549d21: mov dword ptr [0xa738c0], 0x41000000 */ W32((u32)(0xa738c0u), 0x41000000u);
    /* 00549d2b: mov dword ptr [0xa738c4], 0x3fc00000 */ W32((u32)(0xa738c4u), 0x3fc00000u);
    /* 00549d35: mov dword ptr [0xa738a4], 0x43fa0000 */ W32((u32)(0xa738a4u), 0x43fa0000u);
    /* 00549d3f: mov dword ptr [0xa738a8], 0x43480000 */ W32((u32)(0xa738a8u), 0x43480000u);
    /* 00549d49: mov dword ptr [0xa738ac], 0x42480000 */ W32((u32)(0xa738acu), 0x42480000u);
    /* 00549d53: mov dword ptr [0xa738b0], 0x41700000 */ W32((u32)(0xa738b0u), 0x41700000u);
    /* 00549d5d: mov dword ptr [0x9bd2f4], 0x41700000 */ W32((u32)(0x9bd2f4u), 0x41700000u);
    /* 00549d67: mov dword ptr [0x9bd2fc], 0x41200000 */ W32((u32)(0x9bd2fcu), 0x41200000u);
    /* 00549d71: mov dword ptr [0xa738b8], 0x43480000 */ W32((u32)(0xa738b8u), 0x43480000u);
    /* 00549d7b: fld dword ptr [0xa738b8] */ FPUSH(R_F32((u32)(0xa738b8u)));
    /* 00549d81: fdiv dword ptr [0x923f14] */ ST(0) = ST(0) / R_F32((u32)(0x923f14u));
    /* 00549d87: fadd dword ptr [0x923df0] */ ST(0) = ST(0) + R_F32((u32)(0x923df0u));
    /* 00549d8d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00549d90: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00549d94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00549d99: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00549d9d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00549da1: fistp dword ptr [0xa738b4] */ W32((u32)(0xa738b4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00549da7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00549daa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549dad: ret  */ FN_RET(0x00549d14); r_esp += 4; return;
}

void f_00549db0(void)
{
    FN_ENTER(0x00549db0);
    /* 00549db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00549db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549db5: push 0x8d5afe */ { u32 v = 0x8d5afeu; r_esp -= 4; W32(r_esp, v); }
    /* 00549dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549dc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00549dc8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549dcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00549dce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00549dd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00549dd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00549dd7: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x549ddcu); f_00482a20();
    /* 00549ddc: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00549ddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549de1: jne 0x549e3b */ if (!fZ) goto L_00549e3b;
L_00549de3:; BB(0x00549de3);
    /* 00549de3: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00549dea: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00549def: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x549df4u); f_008581c5();
    /* 00549df4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549df5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00549df8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549dfa: je 0x549f5f */ if (fZ) goto L_00549f5f;
L_00549e00:; BB(0x00549e00);
    /* 00549e00: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00549e07: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00549e0e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00549e11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e16: push 0x9bd2d8 */ { u32 v = 0x9bd2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00549e1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549e1d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x549e22u); f_005b7a84();
    /* 00549e22: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00549e25: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00549e2c: mov dword ptr [0xa738c8], edi */ W32((u32)(0xa738c8u), r_edi);
    /* 00549e32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549e39: jmp 0x549e91 */ goto L_00549e91;
L_00549e3b:; BB(0x00549e3b);
    /* 00549e3b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00549e42: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00549e47: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x549e4cu); f_008581c5();
    /* 00549e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549e4d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00549e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549e52: je 0x549f66 */ if (fZ) goto L_00549f66;
L_00549e58:; BB(0x00549e58);
    /* 00549e58: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00549e5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549e66: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00549e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e6e: push 0x9bd284 */ { u32 v = 0x9bd284u; r_esp -= 4; W32(r_esp, v); }
    /* 00549e73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549e75: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x549e7au); f_005b7a84();
    /* 00549e7a: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00549e7d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00549e84:; BB(0x00549e84);
    /* 00549e84: mov dword ptr [0xa738c8], edi */ W32((u32)(0xa738c8u), r_edi);
    /* 00549e8a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00549e91:; BB(0x00549e91);
    /* 00549e91: mov eax, dword ptr [0x923d8c] */ r_eax = R32((u32)(0x923d8cu));
    /* 00549e96: movzx edx, word ptr [0x923d90] */ r_edx = (u32)R16((u32)(0x923d90u));
    /* 00549e9d: movzx ecx, word ptr [0x923d92] */ r_ecx = (u32)R16((u32)(0x923d92u));
    /* 00549ea4: movzx ebx, word ptr [0x923d94] */ r_ebx = (u32)R16((u32)(0x923d94u));
    /* 00549eab: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00549eb1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00549eb4: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00549eba: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 00549ebe: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00549ec2: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00549ec6: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00549ec9: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 00549ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549ecd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549ecf: push dword ptr [0x9bd2fc] */ { u32 v = R32((u32)(0x9bd2fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549ed5: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549ed8: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549edb: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00549edd: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x549ee2u); f_00608470();
    /* 00549ee2: mov eax, dword ptr [0x923d7c] */ r_eax = R32((u32)(0x923d7cu));
    /* 00549ee7: movzx edx, word ptr [0x923d80] */ r_edx = (u32)R16((u32)(0x923d80u));
    /* 00549eee: movzx ecx, word ptr [0x923d82] */ r_ecx = (u32)R16((u32)(0x923d82u));
    /* 00549ef5: movzx ebx, word ptr [0x923d84] */ r_ebx = (u32)R16((u32)(0x923d84u));
    /* 00549efc: mov edi, dword ptr [0xa738c8] */ r_edi = R32((u32)(0xa738c8u));
    /* 00549f02: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00549f08: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00549f0b: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00549f0f: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00549f15: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00549f19: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00549f1d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00549f20: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00549f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549f24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f26: push dword ptr [0x9bd2fc] */ { u32 v = R32((u32)(0x9bd2fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f2c: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f2f: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f32: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f34: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x549f39u); f_00608470();
    /* 00549f39: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f3b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x549f40u); f_0077a6cc();
    /* 00549f40: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549f43: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549f46: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549f49: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549f4c: mov dword ptr [0xa738cc], eax */ W32((u32)(0xa738ccu), r_eax);
    /* 00549f51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549f54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549f5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00549f5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549f5e: ret  */ FN_RET(0x00549db0); r_esp += 4; return;
L_00549f5f:; BB(0x00549f5f);
    /* 00549f5f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00549f61: jmp 0x549e2c */ f_00549e2c(); return;
L_00549f66:; BB(0x00549f66);
    /* 00549f66: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00549f68: jmp 0x549e84 */ goto L_00549e84;
}

void f_00549f70(void) /* sub_549F70 */
{
    FN_ENTER(0x00549f70);
    /* 00549f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00549f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549f75: push 0x8d5b24 */ { u32 v = 0x8d5b24u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549f81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00549f88: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549f8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00549f8e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00549f91: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00549f94: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00549f97: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00549f9a: mov ecx, dword ptr [0xa738c8] */ r_ecx = R32((u32)(0xa738c8u));
    /* 00549fa0: mov dword ptr [0xa738c8], ecx */ W32((u32)(0xa738c8u), r_ecx);
    /* 00549fa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549fa8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x549fadu); f_005b8624();
    /* 00549fad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549fb0: mov ecx, dword ptr [0xa738c8] */ r_ecx = R32((u32)(0xa738c8u));
    /* 00549fb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549fb8: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00549fbb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x549fc0u); f_005b8610();
    /* 00549fc0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549fc3: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00549fc6: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00549fc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549fcb: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00549fce: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00549fd1: push 0x9bd2f0 */ { u32 v = 0x9bd2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549fd6: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00549fd9: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00549fdc: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00549fdf: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00549fe2: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00549fe5: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 00549fe8: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00549feb: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00549fee: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00549ff1: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x549ff6u); f_007b9a88();
    /* 00549ff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549ff9: mov dword ptr [ecx + 0xd8], 0x9bd1e0 */ W32((u32)(r_ecx+0xd8u), 0x9bd1e0u);
    /* 0054a003: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0054a009: mov eax, dword ptr [0xa738c8] */ r_eax = R32((u32)(0xa738c8u));
    /* 0054a00e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a010: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0054a016: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0054a01c: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x54a021u); f_007aa4c8();
    /* 0054a021: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a024: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0054a027: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0054a02a: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0054a02d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a02f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0054a036: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0054a040: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a042: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 0054a048: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 0054a052: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 0054a058: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0054a05e: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 0054a068: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x54a06du); f_0077a684();
    /* 0054a06d: mov esi, eax */ r_esi = r_eax;
    /* 0054a06f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a071: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x54a076u); f_0077a698();
    /* 0054a076: mov ebx, eax */ r_ebx = r_eax;
    /* 0054a078: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a07a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x54a07fu); f_0077a6b4();
    /* 0054a07f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a082: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a086: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a087: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a088: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x54a08du); f_007868f8();
    /* 0054a08d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a090: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0054a097: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0054a09e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x54a0a3u); f_007b4f54();
    /* 0054a0a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a0a6: mov dword ptr [ecx + 0x358], 0 */ W32((u32)(r_ecx+0x358u), 0x0u);
    /* 0054a0b0: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a0b2: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x54a0b7u); f_00787550();
    /* 0054a0b7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0054a0be: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a0c0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x54a0c5u); f_008581c5();
    /* 0054a0c5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054a0c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a0cb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054a0ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a0d0: je 0x54a157 */ if (fZ) goto L_0054a157;
L_0054a0d6:; BB(0x0054a0d6);
    /* 0054a0d6: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0054a0dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054a0e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a0e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054a0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a0eb: call 0x599c68 */ r_esp -= 4; W32(r_esp, 0x54a0f0u); f_00599c68();
    /* 0054a0f0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0054a0f7:; BB(0x0054a0f7);
    /* 0054a0f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054a0fa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a0fd: mov dword ptr [edx + 0x384], eax */ W32((u32)(r_edx+0x384u), r_eax);
    /* 0054a103: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054a10a: mov ecx, edx */ r_ecx = r_edx;
    /* 0054a10c: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0054a10f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0054a112: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0054a115: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054a117: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 0054a11d: mov dword ptr [ecx + 0x3cc], 0xffff */ W32((u32)(r_ecx+0x3ccu), 0xffffu);
    /* 0054a127: mov dword ptr [ecx + 0x3f0], edx */ W32((u32)(r_ecx+0x3f0u), r_edx);
    /* 0054a12d: mov dword ptr [ecx + 0x3f4], ebx */ W32((u32)(r_ecx+0x3f4u), r_ebx);
    /* 0054a133: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 0054a13d: call dword ptr [esi + 0x150] */ { u32 t = R32((u32)(r_esi+0x150u)); r_esp -= 4; W32(r_esp, 0x54a143u); call_ind(t); }
    /* 0054a143: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a146: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054a149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a14c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054a153: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a156: ret  */ FN_RET(0x00549f70); r_esp += 4; return;
L_0054a157:; BB(0x0054a157);
    /* 0054a157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a159: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054a15c: jmp 0x54a0f7 */ goto L_0054a0f7;
}

